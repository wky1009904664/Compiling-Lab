#include "def.h"
#define DEBUG 1
#include<vector>
#include<string>
#include<map>
using std::vector;
using std::string;
using std::map;
using std::cout;
using std::endl;

 int LEV;
 struct symboltable symbolTable;
 struct symbol_scope_begin symbol_scope_TX;
 int loopFlag = 0;
 int forFlag = 0;
 int structDecFlag = 0;
 int needReturnFlag = 0;
 int hasReturnFlag = 0;
 struct codenode  *breakLabel, *continueLabel;
 string structDecName;

 struct structMember {
	 int type;
	 char name[32];
	 int width;
	 InsiderVector* insVector;
};
 map<string, vector<structMember>> structTable;
char *strcat0(const char *s1, const char *s2) {
	static char result[10];
	strcpy(result, s1);
	strcat(result, s2);
	return result;
}

char *newAlias() {
	static int no = 1;
	char s[10];
	itoa(no++, s, 10);
	return strcat0("v", s);
}

char *newLabel() {
	static int no = 1;
	char s[10];
	itoa(no++, s, 10);
	return strcat0("label", s);
}

char *newTemp() {
	static int no = 1;
	char s[10];
	itoa(no++, s, 10);
	return strcat0("temp", s);
}

//生成一条TAC代码的结点组成的双向循环链表，返回头指针
struct codenode *genIR(int op, struct opn opn1, struct opn opn2, struct opn result) {
	struct codenode *h = (struct codenode *)malloc(sizeof(struct codenode));
	h->op = op;
	h->opn1 = opn1;
	h->opn2 = opn2;
	h->result = result;
	h->next = h->prior = h;
	return h;
}

//生成一条标号语句，返回头指针
struct codenode *genLabel(char *label) {
	struct codenode *h = (struct codenode *)malloc(sizeof(struct codenode));
	h->op = LABEL;
	strcpy(h->result.id, label);
	h->next = h->prior = h;
	return h;
}

//生成GOTO语句，返回头指针
struct codenode *genGoto(char *label) {
	struct codenode *h = (struct codenode *)malloc(sizeof(struct codenode));
	h->op = GOTO;
	strcpy(h->result.id, label);
	h->next = h->prior = h;
	return h;
}

//struct codenode* genArrayAssign(char*)

//合并多个中间代码的双向循环链表，首尾相连
struct codenode *merge(int num, ...) {
	struct codenode *h1, *h2, *p, *t1, *t2;
	va_list ap;
	va_start(ap, num);
	h1 = va_arg(ap, struct codenode *);
	while (--num > 0) {
		h2 = va_arg(ap, struct codenode *);
		if (h1 == NULL) h1 = h2;
		else if (h2) {
			t1 = h1->prior;
			t2 = h2->prior;
			t1->next = h2;
			t2->next = h1;
			h1->prior = t2;
			h2->prior = t1;
		}
	}
	va_end(ap);
	return h1;
}

char getop(int op)
{
	if (op == PLUSASS)
		return '+';
	if (op == DECASS)
		return '-';
	if (op == STARASS)
		return '*';
	if (op == DIVASS)
		return '/';
	if (op == SelfDecL || op == SelfDecR)
		return '-';
	if (op == SelfPlusL || SelfPlusR)
		return '+';
}

//输出中间代码
void prnIR(struct codenode *head) {
	char opnstr1[32], opnstr2[32], resultstr[32];
	struct codenode *h = head;
	do {
		if (h->opn1.kind == INT)
			sprintf(opnstr1, "#%d", h->opn1.const_int);
		if (h->opn1.kind == FLOAT)
			sprintf(opnstr1, "#%f", h->opn1.const_float);
		if (h->opn1.kind == ID)
			sprintf(opnstr1, "%s", h->opn1.id);
		if (h->opn2.kind == INT)
			sprintf(opnstr2, "#%d", h->opn2.const_int);
		if (h->opn2.kind == FLOAT)
			sprintf(opnstr2, "#%f", h->opn2.const_float);
		if (h->opn2.kind == ID)
			sprintf(opnstr2, "%s", h->opn2.id);
		sprintf(resultstr, "%s", h->result.id);
		switch (h->op) {
		case ArrayUse:
			printf("  %s := %s [ %s ] \n", resultstr, opnstr1, opnstr2);
			break;
		case PLUSASS:
		case DECASS:
		case STARASS:
		case DIVASS:
			printf("  %s := %s %c %s \n", opnstr2, resultstr ,getop(h->op), opnstr1);
			printf("  %s := %s \n", resultstr, opnstr1);
			break;
		case ASSIGNOP:  printf("  %s := %s\n", resultstr, opnstr1);
			break;
		case SelfPlusL:
		case SelfPlusR:
		case SelfDecL:
		case SelfDecR:
			printf("  %s := #1 \n", opnstr1);
			printf("  %s := %s %c %s \n", opnstr2, resultstr, getop(h->op), opnstr1);
			printf("  %s := %s \n", resultstr, opnstr2);
			break;
		case PLUS:
		case MINUS:
		case STAR:
		case DIV: printf("  %s := %s %c %s\n", resultstr, opnstr1, \
			h->op == PLUS ? '+' : h->op == MINUS ? '-' : h->op == STAR ? '*' : '\\', opnstr2);
			break;
		case FUNCTION: printf("\nFUNCTION %s :\n", h->result.id);
			break;
		case PARAM:    printf("  PARAM %s\n", h->result.id);
			break;
		case LABEL:    printf("LABEL %s :\n", h->result.id);
			break;
		case GOTO:     printf("  GOTO %s\n", h->result.id);
			break;
		case JLE:      printf("  IF %s <= %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case JLT:      printf("  IF %s < %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case JGE:      printf("  IF %s >= %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case JGT:      printf("  IF %s > %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case EQ:       printf("  IF %s == %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case NEQ:      printf("  IF %s != %s GOTO %s\n", opnstr1, opnstr2, resultstr);
			break;
		case ARG:      printf("  ARG %s\n", h->result.id);
			break;
		case CALL:     if (!strcmp(opnstr1, "write"))
			printf("  CALL  %s\n", opnstr1);
					   else
			printf("  %s := CALL %s\n", resultstr, opnstr1);
			break;
		case RETURN:   if (h->result.kind)
			printf("  RETURN %s\n", resultstr);
					   else
			printf("  RETURN\n");
			break;

		}
		h = h->next;
	} while (h != head);
}

void printStructTable()
{
	for (auto m : structTable)
	{
		printf("Struct  %s : \n", m.first.data());
		for (auto v : m.second) {
			printf("%s %d \n", v.name, v.type);
		}
	}
}

void semantic_error(int line, const char *msg1, const char *msg2) {
	//这里可以只收集错误信息，最后一次显示
	printf("在%d行,%s %s\n", line, msg1, msg2);
}

void mark(int i)
{
	for (int s= 0; s < 5; s++)
		printf("%c", i + '0');
	printf("\n");
}

int fillStructTable(char* valName, int type, int width, int pos, InsiderVector* insVector)
{
	if (structTable.find(structDecName) == structTable.end()) {
		structTable[structDecName] = vector<structMember>();
	}
	const auto& vc = structTable[structDecName];
	for (int i = 0; i < vc.size(); i++) {
		if (!strcmp(vc[i].name, valName)) {
			semantic_error(pos, valName, "结构成员重复定义");
			return -1;
		}
	}
	structMember sm;
	strcpy(sm.name, valName);
	sm.type = type;
	sm.width = width;
	sm.insVector = insVector;
	structTable[structDecName].push_back(sm);
	//printStructTable();
	return 0;
}

const char* getTypeString(int type)
{
	if (type == INT)
		return "int";
	if (type == FLOAT)
		return "float";
	if (type == CHAR)
		return "char";
	if (type == STRUCT)
		return  "struct";
}

int getTypeINT(const char* str)
{
	if (!strcmp(str, "int"))
		return INT;
	if (!strcmp(str, "float"))
		return FLOAT;
	if (!strcmp(str, "char"))
		return CHAR;
}

void prn_symbol() { //显示符号表
	int i = 0;
	printf("%6s %6s %6s  %6s %4s %6s\n", "变量名", "别 名", "层 号", "类  型", "标记", "偏移量");
	for (i = 0; i < symbolTable.index; i++)
		printf("%6s %6s %6d  %6s %4c %6d\n", symbolTable.symbols[i].name, \
			symbolTable.symbols[i].alias, symbolTable.symbols[i].level, \
			getTypeString( symbolTable.symbols[i].type), \
			symbolTable.symbols[i].flag, symbolTable.symbols[i].offset);
}

int searchSymbolTable(char *name) {
	int i, flag = 0;
	for (i = symbolTable.index - 1; i >= 0; i--) {
		if (symbolTable.symbols[i].level == 0)
			flag = 1;
		if (flag && symbolTable.symbols[i].level == 1)
			continue;   //跳过前面函数的形式参数表项
		//printf("%s   %s\n", symbolTable.symbols[i].name, name);
		if (!strcmp(symbolTable.symbols[i].name, name))  return i;
	}
	
	return -1;
}

int fillSymbolTable(const char *name, const  char *alias, int level, int type, char flag, int offset) {
	//首先根据name查符号表，不能重复定义 重复定义返回-1
	int i;
	/*符号查重，考虑外部变量声明前有函数定义，
	其形参名还在符号表中，这时的外部变量与前函数的形参重名是允许的*/
	for (i = symbolTable.index - 1; i >= 0 && (symbolTable.symbols[i].level == level || level == 0); i--) {
		if (level == 0 && symbolTable.symbols[i].level == 1) continue;  //外部变量和形参不必比较重名
		if (!strcmp(symbolTable.symbols[i].name, name))  return -1;
	}
	//填写符号表内容
	strcpy(symbolTable.symbols[symbolTable.index].name, name);
	strcpy(symbolTable.symbols[symbolTable.index].alias, alias);
	symbolTable.symbols[symbolTable.index].level = level;
	symbolTable.symbols[symbolTable.index].type = type;
	symbolTable.symbols[symbolTable.index].flag = flag;
	symbolTable.symbols[symbolTable.index].offset = offset;
	return symbolTable.index++; //返回的是符号在符号表中的位置序号，中间代码生成时可用序号取到符号别名
}

//填写临时变量到符号表，返回临时变量在符号表中的位置
int fill_Temp(char *name, int level, int type, char flag, int offset) {
	strcpy(symbolTable.symbols[symbolTable.index].name, "");
	strcpy(symbolTable.symbols[symbolTable.index].alias, name);
	symbolTable.symbols[symbolTable.index].level = level;
	symbolTable.symbols[symbolTable.index].type = type;
	symbolTable.symbols[symbolTable.index].flag = flag;
	symbolTable.symbols[symbolTable.index].offset = offset;
	return symbolTable.index++; //返回的是临时变量在符号表中的位置序号
	return 0;
}

void ext_var_list(struct ASTNode *T) {  //处理变量列表
	int rtn, num = 1;
	switch (T->kind) {
	case EXT_DEC_LIST:
		T->ptr[0]->type = T->type;              //将类型属性向下传递变量结点
		T->ptr[0]->offset = T->offset;          //外部变量的偏移量向下传递
		T->ptr[1]->type = T->type;              //将类型属性向下传递变量结点
		T->ptr[1]->offset = T->offset + T->width; //外部变量的偏移量向下传递
		T->ptr[1]->width = T->width;
		ext_var_list(T->ptr[0]);
		ext_var_list(T->ptr[1]);
		T->num = T->ptr[1]->num + 1;
		break;
	case ID:
		rtn = fillSymbolTable(T->type_id, newAlias(), LEV, T->type, 'V', T->offset);  //最后一个变量名
		if (rtn == -1)
			semantic_error(T->pos, T->type_id, "变量重复定义");
		else T->place = rtn;
		T->num = 1;
		break;
	case ArrayDef:
		ASTNode* T0 = T;
		indsiderVector* insVector = new InsiderVector;
		insVector->elemType = T->type;
		insVector->firstAddress = T->offset;
		int dimension = 0;
		while (T0){
			++dimension;
			Exp(T0->ptr[1]);
			/*printf("%d\n", T0->ptr[0]->kind);
			//printf("%d\n", T0->ptr[1]->kind);*/
			if (T0->ptr[1]->type != INT) {
				semantic_error(T->pos, "", "数组变量的下标不是整型表达式！");
				break;
			}
			low_high tmplh;
			tmplh.low = 0;
			tmplh.high = T0->ptr[1]->type_int - 1;
			tmplh.diff = tmplh.high - tmplh.low + 1;
			insVector->vc.insert(insVector->vc.begin(), tmplh);
			//printf("%d\n", T0->ptr[0]->kind);
			if (T0->ptr[0]->kind == ID) {
				//printf("%s\n", T->ptr[0]->ptr[0]->type_id);
				/*while (T0->ptr[0]->kind != ID)
					T0 = T0->ptr[0];*/
				if(!structDecFlag)
					rtn = fillSymbolTable(T0->ptr[0]->type_id, newAlias(), LEV, T->type, 'A', T->offset);  //最后一个变量名
				strcpy(T->type_id, T->ptr[0]->type_id);
				if(rtn == -1)
					semantic_error(T0->ptr[0]->pos, T0->ptr[0]->type_id, "变量重复定义");
				else {
					T->place = rtn;
					insVector->dimension = dimension;
					if (!structDecFlag)
						symbolTable.symbols[symbolTable.index - 1].insVector = insVector;
					else {
						fillStructTable(T->ptr[0]->type_id, T->type, 0, T->pos, insVector);
					}
				}
				break;
			}
			T0 = T0->ptr[0];
		}
		//symbolTable.symbols[symbolTable.index].insVector->dimension = dimension;
		T->width = 1;
		for (auto v : insVector->vc) {
			T->width *= v.diff;
		}
		break;
	}
}

int  match_param(int i, struct ASTNode *T) {
	int j, num = symbolTable.symbols[i].paramnum;
	int type1, type2, pos = T->pos;
	T = T->ptr[0];
	if (num == 0 && T == NULL) return 1;
	for (j = 1; j <= num; j++) {
		if (!T) {
			semantic_error(pos, "", "函数调用参数太少!");
			return 0;
		}
		type1 = symbolTable.symbols[i + j].type;  //形参类型
		type2 = T->ptr[0]->type;
		if (type1 != type2) {
			semantic_error(pos, "", "参数类型不匹配");
			return 0;
		}
		T = T->ptr[1];
	}
	if (T) { //num个参数已经匹配完，还有实参表达式
		semantic_error(pos, "", "函数调用参数太多!");
		return 0;
	}
	return 1;
}

void boolExp(struct ASTNode *T) {  //布尔表达式，参考文献[2]p84的思想
	struct opn opn1, opn2, result;
	int op;
	int rtn;
	if (T)
	{
		switch (T->kind) {
		case INT:
			break;
		case FLOAT:
			break;
		case ID:
			break;
		case RELOP: //处理关系运算表达式,2个操作数都按基本表达式处理
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			Exp(T->ptr[0]);
			T->width = T->ptr[0]->width;
			Exp(T->ptr[1]);
			if (T->width < T->ptr[1]->width) T->width = T->ptr[1]->width;
			opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[T->ptr[0]->place].alias);
			opn1.offset = symbolTable.symbols[T->ptr[0]->place].offset;
			opn2.kind = ID; strcpy(opn2.id, symbolTable.symbols[T->ptr[1]->place].alias);
			opn2.offset = symbolTable.symbols[T->ptr[1]->place].offset;
			result.kind = ID; strcpy(result.id, T->Etrue);
			if (strcmp(T->type_id, "<") == 0)
				op = JLT;
			else if (strcmp(T->type_id, "<=") == 0)
				op = JLE;
			else if (strcmp(T->type_id, ">") == 0)
				op = JGT;
			else if (strcmp(T->type_id, ">=") == 0)
				op = JGE;
			else if (strcmp(T->type_id, "==") == 0)
				op = EQ;
			else if (strcmp(T->type_id, "!=") == 0)
				op = NEQ;
			T->code = genIR(op, opn1, opn2, result);
			T->code = merge(4, T->ptr[0]->code, T->ptr[1]->code, T->code, genGoto(T->Efalse));
			break;
		case AND:
		case OR:
			if (T->kind == AND) {
				strcpy(T->ptr[0]->Etrue, newLabel());
				strcpy(T->ptr[0]->Efalse, T->Efalse);
			}
			else {
				strcpy(T->ptr[0]->Etrue, T->Etrue);
				strcpy(T->ptr[0]->Efalse, newLabel());
			}
			strcpy(T->ptr[1]->Etrue, T->Etrue);
			strcpy(T->ptr[1]->Efalse, T->Efalse);
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			boolExp(T->ptr[0]);
			T->width = T->ptr[0]->width;
			boolExp(T->ptr[1]);
			if (T->width < T->ptr[1]->width) T->width = T->ptr[1]->width;
			if (T->kind == AND)
				T->code = merge(3, T->ptr[0]->code, genLabel(T->ptr[0]->Etrue), T->ptr[1]->code);
			else
				T->code = merge(3, T->ptr[0]->code, genLabel(T->ptr[0]->Efalse), T->ptr[1]->code);
			break;
		case NOT:   
			strcpy(T->ptr[0]->Etrue, T->Efalse);
			strcpy(T->ptr[0]->Efalse, T->Etrue);
			boolExp(T->ptr[0]);
			T->code = T->ptr[0]->code;
			break;
		}
	}
}

//void handleArrayUse(struct ASTNode *T, int rtn)
//{
//	struct ASTNode *T0;
//	struct opn opn1, opn2, result;
//	if (T->ptr[0]->kind = ArrayUse)
//		handleArrayUse(T->ptr[0], rtn);
//	Exp(T->ptr[1]);
//	//prnIR(T->ptr[1]->code);
//	//printf("%s\n", symbolTable.symbols[T->ptr[1]->place].alias);
//	if (T->ptr[1]->type != INT) {
//		semantic_error(T->pos, "", "数组变量的下标不是整型表达式");
//		return;
//	}
//
//	T->place = rtn;
//	T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->ptr[0]->width + T->ptr[1]->width);
//	result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
//	result.type = T->type; result.offset = symbolTable.symbols[T->place].offset;
//	opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[T->ptr[0]->place].alias);
//	opn1.type = T->ptr[0]->type; opn1.offset = symbolTable.symbols[T->ptr[0]->place].offset;
//	opn2.kind = ID; strcpy(opn2.id, symbolTable.symbols[T->ptr[1]->place].alias);
//	opn2.type = T->ptr[1]->type; opn2.offset = symbolTable.symbols[T->ptr[1]->place].offset;
//	cout << T->kind << endl;
//	T->code = merge(2, T->ptr[1]->code, genIR(T->kind, opn1, opn2, result));
//}

void Exp(struct ASTNode *T)
{//处理基本表达式，参考文献[2]p82的思想
	int rtn, num, width;
	struct ASTNode *T0;
	struct opn opn1, opn2, result;
	int dimension = 1;
	if (T)
	{
		switch (T->kind) {
		case ID:    //查符号表，获得符号表中的位置，类型送type
			rtn = searchSymbolTable(T->type_id);
			if (rtn == -1)
				semantic_error(T->pos, T->type_id, "变量未定义");
			if (symbolTable.symbols[rtn].flag == 'F')
				semantic_error(T->pos, T->type_id, "对函数名采用非函数调用形式访问");
			else {
				T->place = rtn;       //结点保存变量在符号表中的位置
				T->code = NULL;       //标识符不需要生成TAC
				T->type = symbolTable.symbols[rtn].type;
				T->offset = symbolTable.symbols[rtn].offset;
				T->width = 0;   //未再使用新单元
			}
			break;
		case INT:   
			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset); //为整常量生成一个临时变量
			T->type = INT;
			opn1.kind = INT; opn1.const_int = T->type_int;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
			result.offset = symbolTable.symbols[T->place].offset;
			T->code = genIR(ASSIGNOP, opn1, opn2, result);
			T->width = 4;
			break;
		case FLOAT:
			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset);   //为浮点常量生成一个临时变量
			T->type = FLOAT;
			opn1.kind = FLOAT; opn1.const_float = T->type_float;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
			result.offset = symbolTable.symbols[T->place].offset;
			T->code = genIR(ASSIGNOP, opn1, opn2, result);
			T->width = 4;
			break;
		case CHAR:
			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset);   //为浮点常量生成一个临时变量
			T->type = CHAR;
			opn1.kind = CHAR; opn1.const_float = T->type_char;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
			result.offset = symbolTable.symbols[T->place].offset;
			T->code = genIR(ASSIGNOP, opn1, opn2, result);
			T->width = 1;
			break;
		case StructVal:
		{
			//printf("%s\n", T->type_id);
			rtn = searchSymbolTable(T->ptr[0]->type_id);
			if (rtn == -1) {
				semantic_error(T->pos, T->type_id, "变量未定义");
				break;
			}
			if (symbolTable.symbols[rtn].flag != 'S') {
				if (symbolTable.symbols[rtn].structName.empty())
				semantic_error(T->pos, T->ptr[0]->type_id, "不是结构变量不能使用选择运算符");
				break;
			}
			const auto& vc = structTable[symbolTable.symbols[rtn].structName];
			int hasFlag = 0;
			for (auto v : vc) {
				if (!strcmp(v.name, T->type_id)) {
					hasFlag = 1;
					T->type = v.type;
					break;
				}
			}
			if (!hasFlag) {
				semantic_error(T->pos, T->ptr[0]->type_id, "结构中没有该成员");
			}

		}
			break;
		case PLUSASS:
		case DECASS:
		case STARASS:
		case DIVASS:
			//T->ptr[0]->offset = T->offset;
			Exp(T->ptr[0]);
			//T->ptr[1]->offset = T->offset + T->ptr[0]->width;
			Exp(T->ptr[1]);
			//判断T->ptr[0]，T->ptr[1]类型是否正确，可能根据运算符生成不同形式的代码，给T的type赋值
			if ((T->ptr[0]->type == CHAR && T->ptr[1]->type == FLOAT)
				|| (T->ptr[0]->type == FLOAT && T->ptr[1]->type == CHAR)) {
				semantic_error(T->pos, "", "char型和float型不能做算术运算!");
				break;
			}

			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset);
			opn2.kind = ID;
			strcpy(opn2.id, symbolTable.symbols[T->place].alias);
			opn2.type = T->type;
			opn2.offset = symbolTable.symbols[T->place].offset;

		case ASSIGNOP:
			if (T->ptr[0]->kind != ID && T->ptr[0]->kind != ArrayUse && 
				T->ptr[0]->kind != StructVal && T->ptr[0]->kind!=ASSIGNOP) {
				semantic_error(T->pos, "", "赋值语句需要左值");
				break;
			}
			Exp(T->ptr[0]);   //处理左值，例中仅为变量
			T->ptr[1]->offset = T->offset;
			Exp(T->ptr[1]);
			//if ((T->ptr[0]->type == CHAR && T->ptr[1]->type == FLOAT)
			//	|| (T->ptr[0]->type == FLOAT && T->ptr[1]->type == CHAR))
			if ((T->ptr[0]->type == CHAR && T->ptr[1]->type == FLOAT)
				|| (T->ptr[0]->type == FLOAT && T->ptr[1]->type == CHAR)) {
				semantic_error(T->pos, "", "赋值运算类型不匹配，C只支持一次隐式转换!");
				break;
			}
			//check struct

			T->type = T->ptr[0]->type;
			T->width = T->ptr[1]->width;
			T->code = merge(2, T->ptr[0]->code, T->ptr[1]->code);

			opn1.kind = ID;   strcpy(opn1.id, symbolTable.symbols[T->ptr[1]->place].alias);//右值一定是个变量或临时变量
			opn1.offset = symbolTable.symbols[T->ptr[1]->place].offset;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->ptr[0]->place].alias);
			result.offset = symbolTable.symbols[T->ptr[0]->place].offset;
			T->code = merge(2, T->code, genIR(T->kind, opn1, opn2, result));
			break;
		case ArrayUse:
			//Exp(T->ptr[0]);
			dimension = 1;
			T0 = T;
			while (T0->ptr[0]->kind != ID) {
				++dimension;
				T0 = T0->ptr[0];
			}
			/*	T0 = T->ptr[0];
				while (T0 && T0->kind == ArrayUse) {
					++dimension;
					T0 = T0->ptr[0];
				}*/
			rtn = searchSymbolTable(T0->ptr[0]->type_id);
			//if (T->ptr[0]->kind != ID || T->ptr[0]->kind!=StructVal) {
			//	//TODO
			//	semantic_error(T->pos, T->type_id, "对非数组变量采用下标变量的形式访问");
			//}
			if (rtn == -1)
				semantic_error(T->pos, T->ptr[0]->type_id, "变量未定义");
			else if (symbolTable.symbols[rtn].flag != 'A' && symbolTable.symbols[rtn].flag != 'S') {
				//printf("%s  %c %d", T->ptr[0]->type_id, symbolTable.symbols[rtn].flag, rtn);
				semantic_error(T->pos, T->ptr[0]->type_id, "对非数组变量采用下标变量的形式访问");
			}
			else if (symbolTable.symbols[rtn].insVector->dimension != dimension) {
				printf("%d %d\n", symbolTable.symbols[rtn].insVector->dimension, dimension);
				semantic_error(T->pos, "", "数组维数不匹配");
			}
			else if (symbolTable.symbols[rtn].flag == 'S') {
				const auto& vc = structTable[symbolTable.symbols[rtn].structName];
				int hasFlag = 0;
				for (auto v : vc) {
					if (!strcmp(T0->ptr[0]->type_id, v.name)) {
						hasFlag = 1;
						T->type = v.type;
					}
				}
				if (!hasFlag)
					semantic_error(T->pos, T->ptr[0]->type_id, "结构体内无该成员");
			}
			else {
				//Exp(T->ptr[0]);
				Exp(T->ptr[1]);
				//prnIR(T->ptr[1]->code);
				//printf("%s\n", symbolTable.symbols[T->ptr[1]->place].alias);
				if (T->ptr[1]->type != INT) {
					semantic_error(T->pos, "", "数组变量的下标不是整型表达式");
					break;
				}

				T->place = rtn;
				//T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->ptr[0]->width + T->ptr[1]->width);
				//result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
				//result.type = T->type; result.offset = symbolTable.symbols[T->place].offset;
				//opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[T->ptr[0]->place].alias);
				//opn1.type = T->ptr[0]->type; opn1.offset = symbolTable.symbols[T->ptr[0]->place].offset;
				//opn2.kind = ID; strcpy(opn2.id, symbolTable.symbols[T->ptr[1]->place].alias);
				//opn2.type = T->ptr[1]->type; opn2.offset = symbolTable.symbols[T->ptr[1]->place].offset;
				//cout << T->kind << endl;
				//T->code = merge(2, T->ptr[1]->code, genIR(T->kind, opn1, opn2, result));

			}
			break;

		case AND:   //按算术表达式方式计算布尔值，未写完
		case OR:    //按算术表达式方式计算布尔值，未写完
			T->type = INT;
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			Exp(T->ptr[0]);
			Exp(T->ptr[1]);
			if (T->ptr[0]->type == FLOAT || T->ptr[1]->type == FLOAT)
				semantic_error(T->pos, "", "不能使用浮点类型做逻辑运算!");
			break;
		case RELOP: //按算术表达式方式计算布尔值，未写完
			T->type = INT;
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			Exp(T->ptr[0]);
			Exp(T->ptr[1]);
			if ((T->ptr[0]->type == CHAR && T->ptr[1]->type == FLOAT)
				|| (T->ptr[0]->type == FLOAT && T->ptr[1]->type == CHAR)) {
				semantic_error(T->pos, "", "比较运算符两边的类型不匹配!");
				break;
			}
			break;
		case SelfPlusL:
		case SelfPlusR:
		case SelfDecL:
		case SelfDecR:
			//TODO
			Exp(T->ptr[0]);
			if (T->ptr[0]->kind == INT || T->ptr[0]->kind == FLOAT || T->ptr[0]->kind == CHAR ||
				T->ptr[0]->kind == PLUS || T->ptr[0]->kind == DPLUS || T->ptr[0]->kind == STAR ||
				T->ptr[0]->kind == DIV || T->ptr[0]->kind == SelfDecR || T->ptr[0]->kind == SelfPlusR) {
				semantic_error(T->pos, T->type_id, "不能对非左值表达式进行自增、自减运算");
				break;
			}
			/*if (T->ptr[0]->kind == StructVal) {
				semantic_error(T->pos, T->type_id, "不能对结构体变量进行自增、自减运算");
				break;
			}*/
			T0 = T;
			while (T0->ptr[0]->kind == ArrayUse)
				T0 = T0->ptr[0];
			rtn = searchSymbolTable(T0->ptr[0]->type_id);
			//printf("%s %d\n", T0->ptr[0]->type_id, rtn);

			if (rtn == -1) {
				semantic_error(T->pos, T0->type_id, "变量未定义");
				break;
			}
			if (symbolTable.symbols[rtn].flag == 'S') {
				//printf("%c\n", symbolTable.symbols[rtn].flag);
				semantic_error(T->pos, T0->type_id, "不能对结构体变量进行自增、自减运算；");
				break;
			}
			if (symbolTable.symbols[rtn].flag != 'V' && symbolTable.symbols[rtn].flag != 'A') {
				//printf("%c\n", symbolTable.symbols[rtn].flag);
				semantic_error(T->pos, T0->type_id, "只能对变量进行自增、自减运算");
				break;
			}
			if (symbolTable.symbols[rtn].type != INT && symbolTable.symbols[rtn].type != CHAR

				) {
				semantic_error(T->pos, T0->type_id, "只能对整数进行自增");
				break;
			}
			T->type = INT;
			printf("%d\n", T->ptr[0]->place);
			printf("%s\n", symbolTable.symbols[T->ptr[0]->place].alias);
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->ptr[0]->place].alias);
			result.type = T->ptr[0]->type; result.offset = symbolTable.symbols[T->ptr[0]->place].offset;
			rtn = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->ptr[0]->width);
			opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[rtn].alias);
			opn1.type = T->type; opn1.offset = symbolTable.symbols[rtn].offset;
			rtn = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->ptr[0]->width);
			opn2.kind = ID; strcpy(opn2.id, symbolTable.symbols[rtn].alias);
			opn2.type = T->type; opn2.offset = symbolTable.symbols[rtn].offset;
			T->code = merge(2, T->ptr[0]->code, genIR(T->kind, opn1, opn2, result));
			T->width = T->ptr[0]->width + (T->type == INT ? 4 : (T->type == FLOAT ? 8 : 1));
			break;
		case PLUS:
		case MINUS:
		case STAR:
		case DIV:   
			T->ptr[0]->offset = T->offset;
			Exp(T->ptr[0]);
			T->ptr[1]->offset = T->offset + T->ptr[0]->width;
			Exp(T->ptr[1]);
			//判断T->ptr[0]，T->ptr[1]类型是否正确，可能根据运算符生成不同形式的代码，给T的type赋值
			if ((T->ptr[0]->type == CHAR && T->ptr[1]->type == FLOAT)
				|| (T->ptr[0]->type == FLOAT && T->ptr[1]->type == CHAR)) {
				semantic_error(T->pos, "", "char型和float型不能做算术运算!");
				break;
			}
			//下面的类型属性计算，没有考虑错误处理情况
			if (T->ptr[0]->type == FLOAT || T->ptr[1]->type == FLOAT)
				T->type = FLOAT, T->width = T->ptr[0]->width + T->ptr[1]->width + 4;
			else T->type = INT, T->width = T->ptr[0]->width + T->ptr[1]->width + 2;
			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->ptr[0]->width + T->ptr[1]->width);
			opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[T->ptr[0]->place].alias);
			opn1.type = T->ptr[0]->type; opn1.offset = symbolTable.symbols[T->ptr[0]->place].offset;
			opn2.kind = ID; strcpy(opn2.id, symbolTable.symbols[T->ptr[1]->place].alias);
			opn2.type = T->ptr[1]->type; opn2.offset = symbolTable.symbols[T->ptr[1]->place].offset;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->place].alias);
			result.type = T->type; result.offset = symbolTable.symbols[T->place].offset;
			T->code = merge(3, T->ptr[0]->code, T->ptr[1]->code, genIR(T->kind, opn1, opn2, result));
			T->width = T->ptr[0]->width + T->ptr[1]->width + (T->type == INT ? 4 : (T->type == FLOAT ? 8 : 1));
			break;
		case NOT:   //未写完整
			Exp(T->ptr[0]);
			if (T->ptr[0]->type == FLOAT ) {
				semantic_error(T->pos, "", "float型不能做非运算!");
				break;
			}
			break;
		case FUNC_CALL: //根据T->type_id查出函数的定义，如果语言中增加了实验教材的read，write需要单独处理一下
			rtn = searchSymbolTable(T->type_id);
			if (rtn == -1) {
				semantic_error(T->pos, T->type_id, "函数未定义");
				break;
			}
			if (symbolTable.symbols[rtn].flag != 'F') {
				semantic_error(T->pos, T->type_id, "不是一个函数");
				break;
			}
			T->type = symbolTable.symbols[rtn].type;
			width = T->type == INT ? 4 : (T->type == FLOAT ? 8 : 1);   //存放函数返回值的单数字节数
			if (T->ptr[0]) {
				T->ptr[0]->offset = T->offset;
				Exp(T->ptr[0]);       //处理所有实参表达式求值，及类型
				T->width = T->ptr[0]->width + width; //累加上计算实参使用临时变量的单元数
				T->code = T->ptr[0]->code;
			}
			else { T->width = width; T->code = NULL; }
			match_param(rtn, T);   //处理所有参数的匹配
				//处理参数列表的中间代码
			T0 = T->ptr[0];
			while (T0) {
				result.kind = ID;  strcpy(result.id, symbolTable.symbols[T0->ptr[0]->place].alias);
				result.offset = symbolTable.symbols[T0->ptr[0]->place].offset;
				T->code = merge(2, T->code, genIR(ARG, opn1, opn2, result));
				T0 = T0->ptr[1];
			}
			T->place = fill_Temp(newTemp(), LEV, T->type, 'T', T->offset + T->width - width);
			opn1.kind = ID;     strcpy(opn1.id, T->type_id);  //保存函数名
			opn1.offset = rtn;  //这里offset用以保存函数定义入口,在目标代码生成时，能获取相应信息
			result.kind = ID;   strcpy(result.id, symbolTable.symbols[T->place].alias);
			result.offset = symbolTable.symbols[T->place].offset;
			T->code = merge(2, T->code, genIR(CALL, opn1, opn2, result)); //生成函数调用中间代码
			break;
		case ARGS:      //此处仅处理各实参表达式的求值的代码序列，不生成ARG的实参系列
			T->ptr[0]->offset = T->offset;
			Exp(T->ptr[0]);
			T->width = T->ptr[0]->width;
			T->code = T->ptr[0]->code;
			
			//printf("%d  \n", T->ptr[0]->kind);
			if (T->ptr[1]) {
				T->ptr[1]->offset = T->offset + T->ptr[0]->width;
				Exp(T->ptr[1]);
				T->width += T->ptr[1]->width;
				T->code = merge(2, T->code, T->ptr[1]->code);
			}
			//prnIR(T->code);
			break;
		}
	}
}

void semantic_Analysis(struct ASTNode *T)
{//对抽象语法树的先根遍历,按display的控制结构修改完成符号表管理和语义检查和TAC生成（语句部分）
	int rtn, num, width;
	struct ASTNode *T0;
	struct opn opn1, opn2, result;
	if (T)
	{
		switch (T->kind) {
		case EXT_DEF_LIST:
			if (!T->ptr[0]) break;
			T->ptr[0]->offset = T->offset;
			semantic_Analysis(T->ptr[0]);    //访问外部定义列表中的第一个
			T->code = T->ptr[0]->code;
			if (T->ptr[1]) {
				T->ptr[1]->offset = T->ptr[0]->offset + T->ptr[0]->width;
				semantic_Analysis(T->ptr[1]); //访问该外部定义列表中的其它外部定义
				T->code = merge(2, T->code, T->ptr[1]->code);
			}
			break;
		case EXT_VAR_DEF:   //处理外部说明,将第一个孩子(TYPE结点)中的类型送到第二个孩子的类型域
			T->type = T->ptr[1]->type = !strcmp(T->ptr[0]->type_id, "int") ? INT : (!strcmp(T->ptr[0]->type_id, "float") ? FLOAT : CHAR);
			T->ptr[1]->offset = T->offset;        //这个外部变量的偏移量向下传递
			T->ptr[1]->width = T->type == INT ? 4 : (T->type == FLOAT ? 8 : 1);  //将一个变量的宽度向下传递
			ext_var_list(T->ptr[1]);            //处理外部变量说明中的标识符序列
			T->width = (T->type == INT ? 4 : (T->type == FLOAT ? 8 : 1))* T->ptr[1]->num; //计算这个外部变量说明的宽度
			T->code = NULL;             //这里假定外部变量不支持初始化
			break;
		case FUNC_DEF:      //填写函数定义信息到符号表
			if (T->ptr[2])
			{
				T->ptr[1]->type = !strcmp(T->ptr[0]->type_id, "int") ? INT : (!strcmp(T->ptr[0]->type_id, "float") ? FLOAT : CHAR);//获取函数返回类型送到含函数名、参数的结点
				if (T->ptr[0]->type == STRUCT)
					T->ptr[1]->type = STRUCT;
				T->width = 0;     //函数的宽度设置为0，不会对外部变量的地址分配产生影响
				T->offset = DX;   //设置局部变量在活动记录中的偏移量初值
				semantic_Analysis(T->ptr[1]); //处理函数名和参数结点部分，这里不考虑用寄存器传递参数
				T->offset += T->ptr[1]->width;   //用形参单元宽度修改函数局部变量的起始偏移量
				T->ptr[2]->offset = T->offset;
				T->ptr[2]->fun_type = !strcmp(T->ptr[0]->type_id, "int") ? INT : (!strcmp(T->ptr[0]->type_id, "float") ? FLOAT : CHAR);
				strcpy(T->ptr[2]->Snext, newLabel());  //函数体语句执行结束后的位置属性
				needReturnFlag = 1;
				semantic_Analysis(T->ptr[2]);         //处理函数体结点
				if (!hasReturnFlag) {
					semantic_error(T->pos, "", "函数没有返回值");
					break;
				}
				//计算活动记录大小,这里offset属性存放的是活动记录大小，不是偏移
				symbolTable.symbols[T->ptr[1]->place].offset = T->offset + T->ptr[2]->width;
				T->code = merge(3, T->ptr[1]->code, T->ptr[2]->code, genLabel(T->ptr[2]->Snext));          //函数体的代码作为函数的代码
			}
			else {
				T->width = 0;     //函数的宽度设置为0，不会对外部变量的地址分配产生影响
				T->offset = DX;   //设置局部变量在活动记录中的偏移量初值
				semantic_Analysis(T->ptr[0]); //处理函数名和参数结点部分，这里不考虑用寄存器传递参数
				strcpy(T->ptr[2]->Snext, newLabel());  //函数体语句执行结束后的位置属性
				T->offset += T->ptr[0]->width;   //用形参单元宽度修改函数局部变量的起始偏移量
				T->ptr[1]->offset = T->offset;
				strcpy(T->ptr[2]->Snext, newLabel());  //函数体语句执行结束后的位置属性
				needReturnFlag = 0;
				semantic_Analysis(T->ptr[1]);         //处理函数体结点
				if (hasReturnFlag) {
					semantic_error(T->pos, "", "函数不应该有返回值");
				}
			}
			hasReturnFlag = 0;
			symbolTable.symbols[T->ptr[0]->place].offset = T->offset + T->ptr[1]->width;
			T->code = merge(3, T->ptr[0]->code, T->ptr[1]->code, genLabel(T->ptr[1]->Snext));          //函数体的代码作为函数的代码
			break;
		case FUNC_DEC:      //根据返回类型，函数名填写符号表
			rtn = fillSymbolTable(T->type_id, newAlias(), LEV, T->type, 'F', 0);//函数不在数据区中分配单元，偏移量为0
			if (rtn == -1) {
				semantic_error(T->pos, T->type_id, "函数重复定义");
				break;
			}
			else T->place = rtn;
			result.kind = ID;   strcpy(result.id, T->type_id);
			result.offset = rtn;
			T->code = genIR(FUNCTION, opn1, opn2, result);     //生成中间代码：FUNCTION 函数名
			T->offset = DX;   //设置形式参数在活动记录中的偏移量初值
			if (T->ptr[0]) { //判断是否有参数
				T->ptr[0]->offset = T->offset;
				semantic_Analysis(T->ptr[0]);  //处理函数参数列表
				T->width = T->ptr[0]->width;
				symbolTable.symbols[rtn].paramnum = T->ptr[0]->num;
				T->code = merge(2, T->code, T->ptr[0]->code);  //连接函数名和参数代码序列
			}
			else symbolTable.symbols[rtn].paramnum = 0, T->width = 0;
			break;
		case PARAM_LIST:    //处理函数形式参数列表
			T->ptr[0]->offset = T->offset;
			semantic_Analysis(T->ptr[0]);
			if (T->ptr[1]) {
				T->ptr[1]->offset = T->offset + T->ptr[0]->width;
				semantic_Analysis(T->ptr[1]);
				T->num = T->ptr[0]->num + T->ptr[1]->num;        //统计参数个数
				T->width = T->ptr[0]->width + T->ptr[1]->width;  //累加参数单元宽度
				T->code = merge(2, T->ptr[0]->code, T->ptr[1]->code);  //连接参数代码
			}
			else {
				T->num = T->ptr[0]->num;
				T->width = T->ptr[0]->width;
				T->code = T->ptr[0]->code;
			}
			break;
		case  PARAM_DEC:
			if (T->ptr[0]->kind == StructDef) {

			}
			rtn = fillSymbolTable(T->ptr[1]->type_id, newAlias(), 1, T->ptr[0]->type, 'P', T->offset);
			if (rtn == -1)
				semantic_error(T->ptr[1]->pos, T->ptr[1]->type_id, "参数名重复定义");
			else T->ptr[1]->place = rtn;
			T->num = 1;       //参数个数计算的初始值
			T->width = T->ptr[0]->type == INT ? 4 : (T->ptr[0]->type == FLOAT ? 8 : 1);  //参数宽度
			result.kind = ID;   strcpy(result.id, symbolTable.symbols[rtn].alias);
			result.offset = T->offset;
			T->code = genIR(PARAM, opn1, opn2, result);     //生成：FUNCTION 函数名
			break;
		case COMP_STM:
			if (forFlag == 0) {
				LEV++;//设置层号加1，并且保存该层局部变量在符号表中的起始位置在symbol_scope_TX
				symbol_scope_TX.TX[symbol_scope_TX.top++] = symbolTable.index;
			}
			T->width = 0;
			T->code = NULL;
			if (T->ptr[0]) {
				T->ptr[0]->offset = T->offset;
				semantic_Analysis(T->ptr[0]);  //处理该层的局部变量DEF_LIST
				T->width += T->ptr[0]->width;
				T->code = T->ptr[0]->code;
			}
			if (T->ptr[1]) {
				T->ptr[1]->offset = T->offset + T->width;
				T->ptr[1]->fun_type = T->fun_type;
				strcpy(T->ptr[1]->Snext, T->Snext);  //S.next属性向下传递
				semantic_Analysis(T->ptr[1]);       //处理复合语句的语句序列
				T->width += T->ptr[1]->width;
				T->code = merge(2, T->code, T->ptr[1]->code);
			}
#if (DEBUG)
			prn_symbol();       //c在退出一个符合语句前显示的符号表
			//system("pause");
#endif
			LEV--;    //出复合语句，层号减1
			symbolTable.index = symbol_scope_TX.TX[--symbol_scope_TX.top]; //删除该作用域中的符号
			break;
		case DEF_LIST:
			T->code = NULL;
			if (T->ptr[0]) {
				T->ptr[0]->offset = T->offset;
				semantic_Analysis(T->ptr[0]);   //处理一个局部变量定义
				T->code = T->ptr[0]->code;
				T->width = T->ptr[0]->width;
			}
			if (T->ptr[1]) {
				T->ptr[1]->offset = T->offset + T->ptr[0]->width;
				semantic_Analysis(T->ptr[1]);   //处理剩下的局部变量定义
				T->code = merge(2, T->code, T->ptr[1]->code);
				T->width += T->ptr[1]->width;
			}
			break;
		case VAR_DEF://处理一个局部变量定义,将第一个孩子(TYPE结点)中的类型送到第二个孩子的类型域
					 //类似于上面的外部变量EXT_VAR_DEF，换了一种处理方法
			T->code = NULL;
			T->ptr[1]->type = !strcmp(T->ptr[0]->type_id, "int") ? INT : (!strcmp(T->ptr[0]->type_id, "float") ? FLOAT : CHAR); //确定变量序列各变量类型
			if (T->ptr[0]->kind == StructDef && !structDecFlag) {
				//printf("%s\n", T->ptr[0]->type_id);
				if (structTable.find(T->ptr[0]->type_id) == structTable.end()) {
					semantic_error(T->pos, T->ptr[0]->type_id, "结构未定义");
					break;
				}
				T->ptr[1]->type = STRUCT;
			}
			T0 = T->ptr[1]; //T0为变量名列表子树根指针，对ID、ASSIGNOP类结点在登记到符号表，作为局部变量
			num = 0;
			T0->offset = T->offset;
			T->width = 0;
			width = T->ptr[1]->type == INT ? 4 : (T->ptr[1]->type == FLOAT ? 8 : 1);  //一个变量宽度
			while (T0) {  //处理所有DEC_LIST结点
				num++;
				T0->ptr[0]->type = T0->type;  //类型属性向下传递
				if (T0->ptr[1]) T0->ptr[1]->type = T0->type;
				T0->ptr[0]->offset = T0->offset;  //类型属性向下传递
				if (T0->ptr[1]) T0->ptr[1]->offset = T0->offset + width;

				if (T0->ptr[0]->kind == ID) {
					if (!structDecFlag) {
						rtn = fillSymbolTable(T0->ptr[0]->type_id, newAlias(), LEV, T->ptr[1]->type == STRUCT ?STRUCT: T0->ptr[0]->type, T->ptr[1]->type == STRUCT?'S': 'V', T->offset + T->width);//此处偏移量未计算，暂时为0
						if (rtn == -1)
							semantic_error(T0->ptr[0]->pos, T0->ptr[0]->type_id, "变量重复定义");
						else T0->ptr[0]->place = rtn;
						if (T->ptr[0]->kind = StructDef && !structDecFlag)
							symbolTable.symbols[symbolTable.index - 1].structName = T->ptr[0]->type_id;
						T->width += width;
					}
					else {
						fillStructTable(T0->ptr[0]->type_id, T->ptr[1]->type, 0, T->pos,NULL);
					}
				}
				else if (T0->ptr[0]->kind == ASSIGNOP) {
					rtn = fillSymbolTable(T0->ptr[0]->ptr[0]->type_id, newAlias(), LEV, T0->ptr[0]->type, 'V', T->offset + T->width);//此处偏移量未计算，暂时为0
					if (rtn == -1)
						semantic_error(T0->ptr[0]->ptr[0]->pos, T0->ptr[0]->ptr[0]->type_id, "变量重复定义");
					else {
						T0->ptr[0]->place = rtn;
						T0->ptr[0]->ptr[1]->offset = T->offset + T->width + width;
						Exp(T0->ptr[0]->ptr[1]);
						opn1.kind = ID; strcpy(opn1.id, symbolTable.symbols[T0->ptr[0]->ptr[1]->place].alias);
						result.kind = ID; strcpy(result.id, symbolTable.symbols[T0->ptr[0]->place].alias);
						T->code = merge(3, T->code, T0->ptr[0]->ptr[1]->code, genIR(ASSIGNOP, opn1, opn2, result));
					}
					T->width += width + T0->ptr[0]->ptr[1]->width;
				}				//这里处理数组
				else if (T0->ptr[0]->kind == ArrayDef) {
					ext_var_list(T0->ptr[0]);
					T->width += T0->ptr[0]->width;
					//TODO
				}

				T0 = T0->ptr[1];
			}
			break;
		case STM_LIST:
			if (!T->ptr[0]) { T->code = NULL; T->width = 0; break; }   //空语句序列
			if (T->ptr[1]) //2条以上语句连接，生成新标号作为第一条语句结束后到达的位置
				strcpy(T->ptr[0]->Snext, newLabel());
			else     //语句序列仅有一条语句，S.next属性向下传递
				strcpy(T->ptr[0]->Snext, T->Snext);
			T->ptr[0]->offset = T->offset;
			T->ptr[0]->fun_type = T->fun_type;
			semantic_Analysis(T->ptr[0]);
			T->code = T->ptr[0]->code;
			T->width = T->ptr[0]->width;
			if (T->ptr[1]) {     //2条以上语句连接,S.next属性向下传递
				strcpy(T->ptr[1]->Snext, T->Snext);
				T->ptr[1]->offset = T->offset;  //顺序结构共享单元方式
				T->ptr[1]->fun_type = T->fun_type;
//                  T->ptr[1]->offset=T->offset+T->ptr[0]->width; //顺序结构顺序分配单元方式
				semantic_Analysis(T->ptr[1]);
				//序列中第1条为表达式语句，返回语句，复合语句时，第2条前不需要标号
				if (T->ptr[0]->kind == RETURN || T->ptr[0]->kind == EXP_STMT || T->ptr[0]->kind == COMP_STM)
					T->code = merge(2, T->code, T->ptr[1]->code);
				else
					T->code = merge(3, T->code, genLabel(T->ptr[0]->Snext), T->ptr[1]->code);
				if (T->ptr[1]->width > T->width) T->width = T->ptr[1]->width; //顺序结构共享单元方式
//                        T->width+=T->ptr[1]->width;//顺序结构顺序分配单元方式
			}
			break;
		case IF_THEN:
			strcpy(T->ptr[0]->Etrue, newLabel());  //设置条件语句真假转移位置
			strcpy(T->ptr[0]->Efalse, T->Snext);
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			T->ptr[1]->fun_type = T->fun_type;
			boolExp(T->ptr[0]);
			T->width = T->ptr[0]->width;
			strcpy(T->ptr[1]->Snext, T->Snext);
			semantic_Analysis(T->ptr[1]);      //if子句
			if (T->width < T->ptr[1]->width) T->width = T->ptr[1]->width;
			T->code = merge(3, T->ptr[0]->code, genLabel(T->ptr[0]->Etrue), T->ptr[1]->code);
			break;  //控制语句都还没有处理offset和width属性
		case IF_THEN_ELSE:
			strcpy(T->ptr[0]->Etrue, newLabel());  //设置条件语句真假转移位置
			strcpy(T->ptr[0]->Efalse, newLabel());
			T->ptr[1]->fun_type = T->fun_type;
			T->ptr[2]->fun_type = T->fun_type;
			T->ptr[0]->offset = T->ptr[1]->offset = T->ptr[2]->offset = T->offset;
			boolExp(T->ptr[0]);      //条件，要单独按短路代码处理
			T->width = T->ptr[0]->width;
			strcpy(T->ptr[1]->Snext, T->Snext);
			semantic_Analysis(T->ptr[1]);      //if子句
			if (T->width < T->ptr[1]->width) T->width = T->ptr[1]->width;
			strcpy(T->ptr[2]->Snext, T->Snext);
			semantic_Analysis(T->ptr[2]);      //else子句
			if (T->width < T->ptr[2]->width) T->width = T->ptr[2]->width;
			T->code = merge(6, T->ptr[0]->code, genLabel(T->ptr[0]->Etrue), T->ptr[1]->code, \
				genGoto(T->Snext), genLabel(T->ptr[0]->Efalse), T->ptr[2]->code);
			break;
		case WHILE: 
			breakLabel = NULL;
			continueLabel = NULL;
			strcpy(T->ptr[0]->Etrue, newLabel());  //子结点继承属性的计算
			strcpy(T->ptr[0]->Efalse, T->Snext);
			T->ptr[0]->offset = T->ptr[1]->offset = T->offset;
			boolExp(T->ptr[0]);      //循环条件，要单独按短路代码处理
			T->width = T->ptr[0]->width;
			strcpy(T->ptr[1]->Snext, newLabel());
			loopFlag = 1;
			breakLabel = genGoto(T->Snext);
			continueLabel = genGoto(T->ptr[1]->Snext);
			semantic_Analysis(T->ptr[1]);      //循环体
			if (T->width < T->ptr[1]->width) T->width = T->ptr[1]->width;
			T->code = merge(5, genLabel(T->ptr[1]->Snext), T->ptr[0]->code, \
				genLabel(T->ptr[0]->Etrue), T->ptr[1]->code, genGoto(T->ptr[1]->Snext));
			loopFlag = 0;
			breakLabel = NULL;
			continueLabel = NULL;
			break;
		case FOR:
			forFlag = 1;
			++LEV;
			breakLabel = NULL;
			continueLabel = NULL;
			T->ptr[0]->offset = T->offset;
			symbol_scope_TX.TX[symbol_scope_TX.top++] = symbolTable.index;
			//printf("%d  %d \n", T->ptr[0]->kind, T->ptr[0]->type);

			semantic_Analysis(T->ptr[0]);
			T->ptr[2]->offset = T->ptr[0]->offset + T->ptr[0]->width;
			strcpy(T->ptr[0]->Snext, newLabel());
			semantic_Analysis(T->ptr[2]);
			strcpy(T->ptr[1]->Etrue, newLabel());
			strcpy(T->ptr[1]->Efalse, T->Snext);
			T->ptr[1]->offset = T->ptr[2]->offset + T->ptr[2]->width;
			boolExp(T->ptr[1]);
			T->width = T->ptr[0]->width + T->ptr[1]->width + T->ptr[2]->width;
			T->ptr[3]->offset = T->ptr[2]->offset + T->ptr[2]->width;
			strcpy(T->ptr[3]->Snext, newLabel());
			
			loopFlag = 1;
			semantic_Analysis(T->ptr[1]);
			breakLabel = genGoto(T->Snext);
			continueLabel = genGoto(T->ptr[3]->Snext);
			semantic_Analysis(T->ptr[3]);
			if (T->width < T->ptr[3]->width) T->width = T->ptr[3]->width;

			//prnIR(T->ptr[1]->code);
			T->code = merge(9, T->ptr[0]->code, genGoto(T->ptr[0]->Snext),genLabel(T->ptr[3]->Snext),
				T->ptr[2]->code, genLabel(T->ptr[0]->Snext), T->ptr[1]->code, genLabel(T->ptr[1]->Etrue),
				T->ptr[3]->code, genGoto(T->ptr[3]->Snext));

			loopFlag = 0;
			forFlag = 1;
			breakLabel = NULL;
			continueLabel = NULL;
			break;
		case EXP_STMT:
			T->ptr[0]->offset = T->offset;
			semantic_Analysis(T->ptr[0]);
			T->code = T->ptr[0]->code;
			T->width = T->ptr[0]->width;
			break;
		case RETURN:
			hasReturnFlag = 1;
			if (T->ptr[0]) {
			T->ptr[0]->offset = T->offset;
			Exp(T->ptr[0]);
			/*需要判断返回值类型是否匹配*/
			if (T->ptr[0]->type != T->fun_type) {
				semantic_error(T->pos, "", "返回值类型不匹配");
			}
			T->width = T->ptr[0]->width;
			result.kind = ID; strcpy(result.id, symbolTable.symbols[T->ptr[0]->place].alias);
			result.offset = symbolTable.symbols[T->ptr[0]->place].offset;
			T->code = merge(2, T->ptr[0]->code, genIR(RETURN, opn1, opn2, result));
			}
			else {
			T->width = 0;
			result.kind = 0;
			T->code = genIR(RETURN, opn1, opn2, result);
		}
			break;
		case StructDec:
			structDecFlag = 1;
			//printf("%s\n", T->type_id);
			structDecName = string(T->type_id);
			semantic_Analysis(T->ptr[0]);
			structDecFlag = 0;
			break;
		case StructDef:
			printf("StructDec\n");
			break;
		case BREAK:
			if(loopFlag == 0)
				semantic_error(T->pos, " ", "break语句出现位置错误");
			T->code = breakLabel;
			break;
		case CONTINUE:
			if(loopFlag == 0)
				semantic_error(T->pos, " ", "continue语句出现位置错误");
			T->code = continueLabel;
			break;
		case ID:
		case INT:
		case FLOAT:
		case ASSIGNOP:
		case AND:
		case OR:
		case RELOP:
		case PLUS:
		case MINUS:
		case STAR:
		case DIV:
		case NOT:
		case UMINUS:
		case FUNC_CALL:
		case SelfPlusL:
		case SelfPlusR:
		case SelfDecL:
		case SelfDecR:
		case PLUSASS:
		case DECASS:
		case STARASS:
		case DIVASS:
		case ARGS:
			Exp(T);          //处理基本表达式
			break;
		}
	}
}

void semantic_Analysis0(struct ASTNode *T) {
	symbolTable.index = 0;
	fillSymbolTable("read", "", 0, INT, 'F', 4);
	symbolTable.symbols[0].paramnum = 0;//read的形参个数
	fillSymbolTable("write", "", 0, INT, 'F', 4);
	symbolTable.symbols[1].paramnum = 1;
	fillSymbolTable("x", "", 1, INT, 'P', 12);
	symbol_scope_TX.TX[0] = 0;  //外部变量在符号表中的起始序号为0
	symbol_scope_TX.top = 1;
	T->offset = 0;              //外部变量在数据区的偏移量
	semantic_Analysis(T);
	printStructTable();
	prnIR(T->code);
	//objectCode(T->code);
}
