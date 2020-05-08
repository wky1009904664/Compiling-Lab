%{
#include "parser.tab.h"
#include "string.h"
#include "def.h"
int yycolumn=1;
#define YY_USER_ACTION    	yylloc.first_line=yylloc.last_line=yylineno; \
	yylloc.first_column=yycolumn;	yylloc.last_column=yycolumn+yyleng-1; yycolumn+=yyleng;
typedef union {
	int type_int;
	int type_float;
	char type_id[32];
	char type_char;
	struct node *ptr;
} YYLVAL;
#define YYSTYPE YYLVAL

%}
%option yylineno

id   [A-Za-z][A-Za-z0-9]*  
int    [0-9]+
float  ([0-9]*\.[0-9]+)|([0-9]+\.)
char '[^\t\n\t]'
note  ("//".*\n?)|("/"\*(.|\n)*\*"/")
selfpulsL "++"{id}
selfpulsR {id}"++"
selfdecL "--"{id}
selfdecR {id}"--"
%%
{note}		 {printf("NOTE : %s in line : %d\n",yytext,yylineno);}
{int}        {printf("INT : %s in line : %d\n",yytext,yylineno); yylval.type_int=atoi(yytext); return INT;}
{float}      {printf("FLOAT : %s in line : %d\n",yytext,yylineno);yylval.type_float=atof(yytext); return FLOAT;}
"int"        {printf("Type : %s in line : %d\n",yytext,yylineno);strcpy(yylval.type_id,  yytext); return TYPE;}
"float"      {printf("Type : %s in line : %d\n",yytext,yylineno);strcpy(yylval.type_id,  yytext);return TYPE;}
"char"      {printf("Type : %s in line : %d\n",yytext,yylineno);strcpy(yylval.type_id,  yytext);return TYPE;}

"return"     {printf("RETURN : %s in line : %d\n",yytext,yylineno);return RETURN;}
"if"         {printf("IF : %s in line : %d\n",yytext,yylineno);return IF;}
"else"       {printf("ELSE : %s in line : %d\n",yytext,yylineno);return ELSE;}
"while"      {printf("WHILE : %s in line : %d\n",yytext,yylineno);return WHILE;}
"break"		 {printf("BREAK : %s in line : %d\n",yytext,yylineno);return BREAK;}
"continue"   {printf("CONTINUE : %s in line : %d\n",yytext,yylineno);return CONTINUE;}
"struct"	 {printf("STRUCT : %s in line : %d\n",yytext,yylineno);return STRUCT;}
"for"		 {printf("FOR : %s in line : %d\n",yytext,yylineno);return FOR;}
"switch"	 {printf("SWITCH : %s in line : %d\n",yytext,yylineno);return SWITCH;}
"case"	 	 {printf("CASE : %s in line : %d\n",yytext,yylineno);return CASE;}
"default"	 {printf("DEFAULT : %s in line : %d\n",yytext,yylineno);return DEFAULT;}

{id}        {printf("Identifier : %s in line : %d\n",yytext,yylineno);strcpy(yylval.type_id,  yytext); return ID;/*由于关键字的形式也符合标识符的规则，所以把关键字的处理全部放在标识符的前面，优先识别*/}
";"			{printf("SEMI : %s in line : %d\n",yytext,yylineno);return SEMI;}
","			{printf("COMMA : %s in line : %d\n",yytext,yylineno);return COMMA;}
"."			{printf("DOT : %s in line : %d\n",yytext,yylineno);return DOT;}
":"			{printf("COLON : %s in line : %d\n",yytext,yylineno);return COLON;}
">"|"<"|">="|"<="|"=="|"!=" {printf("RELOP : %s in line : %d\n",yytext,yylineno);strcpy(yylval.type_id, yytext);;return RELOP;}
"="			{printf("ASSIGNOP : %s in line : %d\n",yytext,yylineno);return ASSIGNOP;}
"+"			{printf("PLUS : %s in line : %d\n",yytext,yylineno);return PLUS;}
"-"			{printf("MINUS : %s in line : %d\n",yytext,yylineno);return MINUS;}
"*"			{printf("STAR : %s in line : %d\n",yytext,yylineno);return STAR;}
"&"			{printf("ADDR : %s in line : %d\n",yytext,yylineno);return ADDR;}
"/"			{printf("DIV : %s in line : %d\n",yytext,yylineno);return DIV;}
"&&"        {printf("AND : %s in line : %d\n",yytext,yylineno);return AND;}
"||"        {printf("OR : %s in line : %d\n",yytext,yylineno);return OR;}
"!"			{printf("NOT : %s in line : %d\n",yytext,yylineno);return NOT;}
{selfpulsL}	{
			 strcpy(yylval.type_id,  yytext+2);
			 printf("SelfLeftPlus : %s in line : %d\n",yylval.type_id,yylineno);
			 return SelfPlusL;}
{selfpulsR} {
			 strncpy(yylval.type_id,  yytext, strlen(yytext)-2);
			 printf("SelfRightPlus : %s in line : %d\n",yylval.type_id,yylineno); 
			 return SelfPlusR;}
{selfdecL}  {
			 strcpy(yylval.type_id,  yytext+2);
			 printf("SelfLeftDec : %s in line : %d\n",yylval.type_id,yylineno);
		 	 return SelfDecL;}
{selfdecR}  {
			 strncpy(yylval.type_id,  yytext, strlen(yytext)-2);
			 printf("SelfRightDec : %s in line : %d\n",yylval.type_id,yylineno);
			 return SelfDecR;}
"("			{printf("LP : %s in line : %d\n",yytext,yylineno);return LP;}
")"			{printf("RP : %s in line : %d\n",yytext,yylineno);return RP;}
"{"			{printf("LC : %s in line : %d\n",yytext,yylineno);return LC;}
"}"			{printf("RC : %s in line : %d\n",yytext,yylineno);return RC;}
"["			{printf("LB : %s in line : %d\n",yytext,yylineno);return LB;}
"]"			{printf("RB : %s in line : %d\n",yytext,yylineno);return RB;}

[\n]        {yycolumn=1;}   
[ \r\t]     {;}   
"'\\''"		{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char = '\'';return CHAR;}
"'\\t'"		{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char = '\t';return CHAR;}
"'\\n'"		{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char = '\n';return CHAR;}
"'\\r'"		{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char = '\r';return CHAR;}
"'\\\\'"	{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char = '\\';return CHAR;}
{char}		{printf("Char : %s in line : %d\n",yytext,yylineno);yylval.type_char=yytext[1]; return CHAR;}

.			{printf("Error type A :Mysterious character \"%s\"\n\t at Line %d\n",yytext,yylineno);}
%%

/* 和bison联用时，不需要这部分
void main()
{
yylex();
return 0;
}

*/
int yywrap()
{
return 1;
}
