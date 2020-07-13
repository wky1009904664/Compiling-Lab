%error-verbose
%locations
%{
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct ASTNode *,int);
%}
//gcc -o parser lex.yy.c parser.tab.c ast.c 
%union {
	int    type_int;
	float  type_float;
	char   type_id[32];
        char type_char;
	struct ASTNode *ptr;
};

//  %type 定义非终结符的语义值类型
%type  <ptr> program ExtDefList ExtDef  Specifier ExtDecList FuncDec CompSt VarList VarDec ParamDec Stmt StmList DefList Def DecList Dec Exp Args 
%type <ptr> StructSpecifier StructName SDefList SDef SDecList SDec StmtBase
%type <ptr>  LoopStmt LoopCompSt LoopStmList EmpArgs CaseList ConstExp
%type <ptr> CaseStmt CaseStmtList LoopIF NormolIF
 
//% token 定义终结符的语义值类型
%token <type_int> INT              /*指定INT的语义值是type_int，有词法分析得到的数值*/
%token <type_id> ID  RELOP  TYPE STRING  /*指定ID,RELOP 的语义值是type_id，有词法分析得到的标识符字符串*/
%token <type_float> FLOAT          /*指定ID的语义值是type_id，有词法分析得到的标识符字符串*/
%token <type_char> CHAR
//%token <type_id> SelfPlusL SelfPlusR SelfDecL SelfDecR

%token BREAK CONTINUE STRUCT
%token DPLUS LP RP LC RC SEMI COMMA      /*用bison对该文件编译时，带参数-d，生成的.tab.h中给这些单词进行编码，可在lex.l中包含parser.tab.h使用这些单词种类码*/
%token PLUS MINUS STAR DIV ASSIGNOP AND OR NOT IF ELSE WHILE FOR RETURN SWITCH CASE COLON DEFAULT
%token LB RB DOT ADDR DECASS PLUSASS STARASS DIVASS
%token ArrayDef ArrayUse SelfPlus SelfDec SelfPlusL SelfPlusR SelfDecL SelfDecR
%token StructDec StructDef StructVal VOID

/*以下为接在上述token后依次编码的枚举常量，作为AST结点类型标记*/
%token EXT_DEF_LIST EXT_VAR_DEF FUNC_DEF FUNC_DEC EXT_DEC_LIST PARAM_LIST PARAM_DEC VAR_DEF DEC_LIST DEF_LIST COMP_STM STM_LIST EXP_STMT IF_THEN IF_THEN_ELSE
%token FUNC_CALL ARGS FUNCTION PARAM ARG CALL LABEL GOTO JLT JLE JGT JGE EQ NEQ Pointer


%left ASSIGNOP PLUSASS DECASS STARASS DIVASS
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right UMINUS NOT DPLUS SelfDec SelfPlus
%left LB RB
%left DOT

%nonassoc LOWER_THEN_ELSE
%nonassoc ELSE

%%

program: ExtDefList    { //display($1,0); 
                         semantic_Analysis0($1); 
                        }     //显示语法树,语义分析
         ; 
ExtDefList: {$$=NULL;}
          | ExtDef ExtDefList {$$=mknode(2,EXT_DEF_LIST,yylineno,$1,$2);}   //每一个EXTDEFLIST的结点，其第1棵子树对应一个外部变量声明或函数
          ;  
ExtDef:   Specifier ExtDecList SEMI   {$$=mknode(2,EXT_VAR_DEF,yylineno,$1,$2);}   //该结点对应一个外部变量声明
         |Specifier FuncDec CompSt    {$$=mknode(3,FUNC_DEF,yylineno,$1,$2,$3);}         //该结点对应一个函数定义
         |VOID FuncDec CompSt    {$$=mknode(2,FUNC_DEF,yylineno,$2,$3);}  
         |StructSpecifier SEMI 
         | error SEMI   {$$=NULL;}
         ;
StructSpecifier: STRUCT StructName LC SDefList RC {$$=mknode(1,StructDec,yylineno,$4);strcpy($$->type_id,$2->type_id);}
                | STRUCT ID { $$=mknode(0,StructDef,yylineno);strcpy($$->type_id,$2);}
StructName:ID { $$=mknode(0,ID,yylineno);strcpy($$->type_id,$1);} 
          |{$$=NULL;}
Specifier:TYPE {
                    $$=mknode(0,TYPE,yylineno);strcpy($$->type_id,$1);
                        if(strcmp($1,"int") == 0)
                          $$->type=INT;
                        else if(strcmp($1,"float")==0)
                          $$->type = FLOAT;
                        else if(strcmp($1,"char")==0)
                          $$->type = CHAR;
                        else if(strcmp($1,"string")==0)
                          $$->type = STRING;      
                 }   
        | StructSpecifier{$$ = $1;}
           ;      
ExtDecList:  VarDec      {$$=$1;}       /*每一个EXT_DECLIST的结点，其第一棵子树对应一个变量名(ID类型的结点),第二棵子树对应剩下的外部变量名*/
           | VarDec COMMA ExtDecList {$$=mknode(2,EXT_DEC_LIST,yylineno,$1,$3);}
           ;  
VarDec:  ID          {$$=mknode(0,ID,yylineno);strcpy($$->type_id,$1);}   //ID结点，标识符符号串存放结点的type_id
        | VarDec LB Exp RB {$$=mknode(2,ArrayDef,yylineno,$1,$3);} 
        | STAR ID {$$=mknode(0,Pointer,yylineno);strcpy($$->type_id,$2);}  
         ;
FuncDec: ID LP VarList RP   {$$=mknode(1,FUNC_DEC,yylineno,$3);strcpy($$->type_id,$1);}//函数名存放在$$->type_id
		|ID LP  RP   {$$=mknode(0,FUNC_DEC,yylineno);strcpy($$->type_id,$1);$$->ptr[0]=NULL;}//函数名存放在$$->type_id
        ;  

VarList: ParamDec  {$$=mknode(1,PARAM_LIST,yylineno,$1);}
        | ParamDec COMMA  VarList  {$$=mknode(2,PARAM_LIST,yylineno,$1,$3);}
        ;
ParamDec: Specifier VarDec         {$$=mknode(2,PARAM_DEC,yylineno,$1,$2);}
         ;

CompSt: LC DefList StmList RC    {$$=mknode(2,COMP_STM,yylineno,$2,$3);}
       ;
StmList: {$$=NULL; }  
        | Stmt StmList  {$$=mknode(2,STM_LIST,yylineno,$1,$2);}
        ;
NormolIF:IF LP Exp RP Stmt %prec LOWER_THEN_ELSE   {$$=mknode(2,IF_THEN,yylineno,$3,$5);}
      | IF LP Exp RP Stmt ELSE Stmt   {$$=mknode(3,IF_THEN_ELSE,yylineno,$3,$5,$7);}
      ;
LoopIF:IF LP Exp RP LoopStmt %prec LOWER_THEN_ELSE   {$$=mknode(2,IF_THEN,yylineno,$3,$5);}
      | IF LP Exp RP LoopStmt ELSE LoopStmt   {$$=mknode(3,IF_THEN_ELSE,yylineno,$3,$5,$7);}
      ;
StmtBase:   Exp SEMI    {$$=mknode(1,EXP_STMT,yylineno,$1);}
      | RETURN Exp SEMI   {$$=mknode(1,RETURN,yylineno,$2);}
      | WHILE LP Exp RP LoopStmt {$$=mknode(2,WHILE,yylineno,$3,$5);}
      | FOR LP Exp SEMI Exp SEMI Exp RP LoopStmt {$$=mknode(4,FOR,yylineno,$3,$5,$7,$9);}
      | FOR LP Def Exp SEMI Exp RP LoopStmt{$$=mknode(4,FOR,yylineno,$3,$4,$6,$8);} 
      | SWITCH LP Exp RP LC CaseList RC {$$=mknode(2,SWITCH,yylineno,$3,$6);}
      ;
Stmt:   StmtBase {$$=$1;}
      | CompSt {$$=$1;}      //复合语句结点直接最为语句结点，不再生成新的结点
        | NormolIF {$$=$1;}
      ;

CaseStmtList: {$$=NULL; }  
        | CaseStmt CaseStmtList  {$$=mknode(2,CaseStmtList,yylineno,$1,$2);}
        ;
CaseStmt: StmtBase {$$=$1;}
         | LoopCompSt      {$$=$1;}      //复合语句结点直接最为语句结点，不再生成新的结点
         | BREAK SEMI{$$=mknode(0,BREAK,yylineno);strcpy($$->type_id,"BREAK");}
         | LoopIF {$$=$1;}
         ;

CaseList:CASE Exp COLON LoopStmList CaseList{$$=mknode(3,CaseList,yylineno,$2,$4,$5);strcpy($$->type_id,"CASE");}
        | DEFAULT COLON LoopStmList{$$=mknode(1,DEFAULT,yylineno,$3);strcpy($$->type_id,"DEFAULT");}
        | {$$=NULL}

LoopCompSt: LC DefList LoopStmList RC    {$$=mknode(2,COMP_STM,yylineno,$2,$3);}
          ;
LoopStmList:{$$=NULL; }  
        | LoopStmt LoopStmList  {$$=mknode(2,STM_LIST,yylineno,$1,$2);}
        ;
LoopStmt:  StmtBase {$$=$1;}
         | LoopCompSt      {$$=$1;}      //复合语句结点直接最为语句结点，不再生成新的结点
         | CONTINUE SEMI {$$=mknode(0,CONTINUE,yylineno);strcpy($$->type_id,"CONTINUE");}
         | BREAK SEMI{$$=mknode(0,BREAK,yylineno);strcpy($$->type_id,"BREAK");}
         | LoopIF {$$=$1;}
         ;

EmpArgs:Args{$$=$1}
        |{$$=NULL}
        ;
DefList: {$$=NULL; }
        | Def DefList {$$=mknode(2,DEF_LIST,yylineno,$1,$2);}
        | error SEMI   {$$=NULL;}
        ;
Def:    Specifier DecList SEMI {$$=mknode(2,VAR_DEF,yylineno,$1,$2);}
        ;
DecList: Dec  {$$=mknode(1,DEC_LIST,yylineno,$1);}
       | Dec COMMA DecList  {$$=mknode(2,DEC_LIST,yylineno,$1,$3);}
	   ;
Dec:     VarDec  {$$=$1;}
       | VarDec ASSIGNOP Exp  {$$=mknode(2,ASSIGNOP,yylineno,$1,$3);strcpy($$->type_id,"ASSIGNOP");}
       ;

SDefList: {$$=NULL; }
        | SDef SDefList {$$=mknode(2,DEF_LIST,yylineno,$1,$2);}
        | error SEMI   {$$=NULL;}
        ;
SDef:    Specifier SDecList SEMI {$$=mknode(2,VAR_DEF,yylineno,$1,$2);}
        ;
SDecList: SDec  {$$=mknode(1,DEC_LIST,yylineno,$1);}
       | SDec COMMA SDecList  {$$=mknode(2,DEC_LIST,yylineno,$1,$3);}
	   ;
SDec:     VarDec  {$$=$1;}
       ;

Exp:    Exp ASSIGNOP Exp {$$=mknode(2,ASSIGNOP,yylineno,$1,$3);strcpy($$->type_id,"ASSIGNOP");}//$$结点type_id空置未用，正好存放运算符
      | Exp AND Exp   {$$=mknode(2,AND,yylineno,$1,$3);strcpy($$->type_id,"AND");}
      | Exp OR Exp    {$$=mknode(2,OR,yylineno,$1,$3);strcpy($$->type_id,"OR");}
      | Exp RELOP Exp {$$=mknode(2,RELOP,yylineno,$1,$3);strcpy($$->type_id,$2);}  //词法分析关系运算符号自身值保存在$2中
      | Exp PLUS Exp  {$$=mknode(2,PLUS,yylineno,$1,$3);strcpy($$->type_id,"PLUS");}
      | Exp MINUS Exp {$$=mknode(2,MINUS,yylineno,$1,$3);strcpy($$->type_id,"MINUS");}
      | Exp PLUSASS Exp  {$$=mknode(2,PLUSASS,yylineno,$1,$3);strcpy($$->type_id,"PLUSASS");}
      | Exp DECASS Exp  {$$=mknode(2,DECASS,yylineno,$1,$3);strcpy($$->type_id,"DECASS");}
      | Exp STARASS Exp  {$$=mknode(2,STARASS,yylineno,$1,$3);strcpy($$->type_id,"STARASS");}
      | Exp DIVASS Exp  {$$=mknode(2,DIVASS,yylineno,$1,$3);strcpy($$->type_id,"DIVASS");}
      | Exp STAR Exp  {$$=mknode(2,STAR,yylineno,$1,$3);strcpy($$->type_id,"STAR");}
      | Exp DIV Exp   {$$=mknode(2,DIV,yylineno,$1,$3);strcpy($$->type_id,"DIV");}
      | LP Exp RP     {$$=$2;}
      | MINUS Exp %prec UMINUS   {$$=mknode(1,UMINUS,yylineno,$2);strcpy($$->type_id,"UMINUS");}
      | STAR Exp %prec UMINUS    {$$=mknode(1,UMINUS,yylineno,$2);strcpy($$->type_id,"Pointer");}
      | ADDR Exp %prec UMINUS    {$$=mknode(1,UMINUS,yylineno,$2);strcpy($$->type_id,"ADDR");}
      | NOT Exp       {$$=mknode(1,NOT,yylineno,$2);strcpy($$->type_id,"NOT");}
      | DPLUS  Exp      {$$=mknode(1,DPLUS,yylineno,$2);strcpy($$->type_id,"DPLUS");}
      | Exp DPLUS      {$$=mknode(1,DPLUS,yylineno,$1);strcpy($$->type_id,"DPLUS");}
      | ID LP Args RP {$$=mknode(1,FUNC_CALL,yylineno,$3);strcpy($$->type_id,$1);}
      | ID LP RP      {$$=mknode(0,FUNC_CALL,yylineno);strcpy($$->type_id,$1);}
      | ID            {$$=mknode(0,ID,yylineno);strcpy($$->type_id,$1);}
      | INT           {$$=mknode(0,INT,yylineno);$$->type_int=$1;$$->type=INT;}
      | FLOAT         {$$=mknode(0,FLOAT,yylineno);$$->type_float=$1;$$->type=FLOAT;}
      | CHAR          {$$=mknode(0,CHAR,yylineno);$$->type_char=$1;$$->type=CHAR;}
      | STRING        {$$=mknode(0,STRING,yylineno);strcpy($$->type_id,$1);$$->type=STRING;}
      | SelfPlus Exp     {$$=mknode(1,SelfPlusL,yylineno,$2);}
      | Exp SelfPlus    {$$=mknode(1,SelfPlusR,yylineno,$1);}
      | SelfDec Exp      {$$=mknode(1,SelfDecL,yylineno,$2);}
      | Exp SelfDec      {$$=mknode(1,SelfDecR,yylineno,$1);}
      | Exp LB Exp RB {$$=mknode(2,ArrayUse,yylineno,$1,$3);}   
      | Exp DOT ID {$$=mknode(1,StructVal,yylineno,$1);strcpy($$->type_id,$3);}   
      ;
ConstExp:  INT           {$$=mknode(0,INT,yylineno);$$->type_int=$1;$$->type=INT;}
      | FLOAT         {$$=mknode(0,FLOAT,yylineno);$$->type_float=$1;$$->type=FLOAT;}
      | CHAR          {$$=mknode(0,CHAR,yylineno);$$->type_char=$1;$$->type=CHAR;}
      ;
Args:    Exp COMMA Args    {$$=mknode(2,ARGS,yylineno,$1,$3);}
       | Exp               {$$=mknode(1,ARGS,yylineno,$1);}
       ;
       
%%

int main(int argc, char *argv[]){
	yyin=fopen(argv[1],"r");
	if (!yyin) return 0;
	yylineno=1;
	yyparse();
	return 0;
	}

#include<stdarg.h>
void yyerror(const char* fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line,yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}