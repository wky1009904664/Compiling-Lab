
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     ID = 259,
     RELOP = 260,
     TYPE = 261,
     STRING = 262,
     FLOAT = 263,
     CHAR = 264,
     BREAK = 265,
     CONTINUE = 266,
     STRUCT = 267,
     DPLUS = 268,
     LP = 269,
     RP = 270,
     LC = 271,
     RC = 272,
     SEMI = 273,
     COMMA = 274,
     PLUS = 275,
     MINUS = 276,
     STAR = 277,
     DIV = 278,
     ASSIGNOP = 279,
     AND = 280,
     OR = 281,
     NOT = 282,
     IF = 283,
     ELSE = 284,
     WHILE = 285,
     FOR = 286,
     RETURN = 287,
     SWITCH = 288,
     CASE = 289,
     COLON = 290,
     DEFAULT = 291,
     LB = 292,
     RB = 293,
     DOT = 294,
     ADDR = 295,
     DECASS = 296,
     PLUSASS = 297,
     STARASS = 298,
     DIVASS = 299,
     ArrayDef = 300,
     ArrayUse = 301,
     SelfPlus = 302,
     SelfDec = 303,
     SelfPlusL = 304,
     SelfPlusR = 305,
     SelfDecL = 306,
     SelfDecR = 307,
     StructDec = 308,
     StructDef = 309,
     StructVal = 310,
     VOID = 311,
     EXT_DEF_LIST = 312,
     EXT_VAR_DEF = 313,
     FUNC_DEF = 314,
     FUNC_DEC = 315,
     EXT_DEC_LIST = 316,
     PARAM_LIST = 317,
     PARAM_DEC = 318,
     VAR_DEF = 319,
     DEC_LIST = 320,
     DEF_LIST = 321,
     COMP_STM = 322,
     STM_LIST = 323,
     EXP_STMT = 324,
     IF_THEN = 325,
     IF_THEN_ELSE = 326,
     FUNC_CALL = 327,
     ARGS = 328,
     FUNCTION = 329,
     PARAM = 330,
     ARG = 331,
     CALL = 332,
     LABEL = 333,
     GOTO = 334,
     JLT = 335,
     JLE = 336,
     JGT = 337,
     JGE = 338,
     EQ = 339,
     NEQ = 340,
     Pointer = 341,
     UMINUS = 342,
     LOWER_THEN_ELSE = 343,
     CaseStmtList = 439,
     CaseList = 440
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 15 "parser.y"

	int    type_int;
	float  type_float;
	char   type_id[32];
        char type_char;
	struct ASTNode *ptr;



/* Line 1676 of yacc.c  */
#line 150 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYLTYPE yylloc;

