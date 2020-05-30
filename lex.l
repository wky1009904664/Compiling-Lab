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
%x NOTEBEGIN
id   [A-Za-z][A-Za-z0-9]*  
int    [0-9]+
float  ([0-9]*\.[0-9]+)|([0-9]+\.)
char '[^\t\n\t]'
note  ("//".*\n?)
selfpulsL "++"{id}
selfpulsR {id}"++"
selfdecL "--"{id}
selfdecR {id}"--"
str \"[^\t\n\t]*\"

%%
{note}		 {}
{int}        { yylval.type_int=atoi(yytext); return INT;}
{float}      {yylval.type_float=atof(yytext); return FLOAT;}
"int"        {strcpy(yylval.type_id,  yytext); return TYPE;}
"float"      {strcpy(yylval.type_id,  yytext);return TYPE;}
"char"       {strcpy(yylval.type_id,  yytext);return TYPE;}
"string"	 {strcpy(yylval.type_id,  yytext);return TYPE;}

"/*"		 {BEGIN(NOTEBEGIN);}
<NOTEBEGIN>([^*]|\n)+|. {}
<NOTEBEGIN>"*/" {BEGIN(INITIAL);}

"return"     {return RETURN;}
"if"         {return IF;}
"else"       {return ELSE;}
"while"      {return WHILE;}
"break"		 {return BREAK;}
"continue"   {return CONTINUE;}
"struct"	 {return STRUCT;}
"for"		 {return FOR;}
"switch"	 {return SWITCH;}
"case"	 	 {return CASE;}
"default"	 {return DEFAULT;}

{str}		 {strcpy(yylval.type_id,  yytext);return STRING;}

";"			{return SEMI;}
","			{return COMMA;}
"."			{return DOT;}
":"			{return COLON;}
">"|"<"|">="|"<="|"=="|"!=" {strcpy(yylval.type_id, yytext);;return RELOP;}
"="			{return ASSIGNOP;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"+="		{return PLUSASS;}
"-="		{return DECASS;}
"*="		{return STARASS;}
"/="		{return DIVASS;}
"*"			{return STAR;}
"&"			{return ADDR;}
"/"			{return DIV;}
"&&"        {return AND;}
"||"        {return OR;}
"!"			{return NOT;}
"++"		{return SelfPlus;}
"--"		{return SelfDec;}

"("			{return LP;}
")"			{return RP;}
"{"			{return LC;}
"}"			{return RC;}
"["			{return LB;}
"]"			{return RB;}

{id}        {strcpy(yylval.type_id,  yytext); return ID;/*由于关键字的形式也符合标识符的规则，所以把关键字的处理全部放在标识符的前面，优先识别*/}


[\n]        {yycolumn=1;}   
[ \r\t]     {;}   
"'\\''"		{yylval.type_char = '\'';return CHAR;}
"'\\t'"		{yylval.type_char = '\t';return CHAR;}
"'\\n'"		{yylval.type_char = '\n';return CHAR;}
"'\\r'"		{yylval.type_char = '\r';return CHAR;}
"'\\\\'"	{yylval.type_char = '\\';return CHAR;}
{char}		{yylval.type_char=yytext[1]; return CHAR;}

.			{}
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
