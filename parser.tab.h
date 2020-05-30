
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
     SelfPlusL = 265,
     SelfPlusR = 266,
     SelfDecL = 267,
     SelfDecR = 268,
     BREAK = 269,
     CONTINUE = 270,
     STRUCT = 271,
     DPLUS = 272,
     LP = 273,
     RP = 274,
     LC = 275,
     RC = 276,
     SEMI = 277,
     COMMA = 278,
     PLUS = 279,
     MINUS = 280,
     STAR = 281,
     DIV = 282,
     ASSIGNOP = 283,
     AND = 284,
     OR = 285,
     NOT = 286,
     IF = 287,
     ELSE = 288,
     WHILE = 289,
     FOR = 290,
     RETURN = 291,
     SWITCH = 292,
     CASE = 293,
     COLON = 294,
     DEFAULT = 295,
     LB = 296,
     RB = 297,
     DOT = 298,
     ADDR = 299,
     DECASS = 300,
     PLUSASS = 301,
     STARASS = 302,
     DIVASS = 303,
     ArrayDef = 304,
     ArrayUse = 305,
     StructDec = 306,
     StructDef = 307,
     StructVal = 308,
     EXT_DEF_LIST = 309,
     EXT_VAR_DEF = 310,
     FUNC_DEF = 311,
     FUNC_DEC = 312,
     EXT_DEC_LIST = 313,
     PARAM_LIST = 314,
     PARAM_DEC = 315,
     VAR_DEF = 316,
     DEC_LIST = 317,
     DEF_LIST = 318,
     COMP_STM = 319,
     STM_LIST = 320,
     EXP_STMT = 321,
     IF_THEN = 322,
     IF_THEN_ELSE = 323,
     FUNC_CALL = 324,
     ARGS = 325,
     FUNCTION = 326,
     PARAM = 327,
     ARG = 328,
     CALL = 329,
     LABEL = 330,
     GOTO = 331,
     JLT = 332,
     JLE = 333,
     JGT = 334,
     JGE = 335,
     EQ = 336,
     NEQ = 337,
     Pointer = 338,
     UMINUS = 339,
     LOWER_THEN_ELSE = 340,
     CaseStmtList = 341,
     CaseList = 342
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
#line 147 "parser.tab.h"
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

