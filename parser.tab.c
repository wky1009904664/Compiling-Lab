
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "parser.y"

#include "stdio.h"
#include "math.h"
#include "string.h"
#include "def.h"
extern int yylineno;
extern char *yytext;
extern FILE *yyin;
void yyerror(const char* fmt, ...);
void display(struct ASTNode *,int);


/* Line 189 of yacc.c  */
#line 86 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     LOWER_THEN_ELSE = 343
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 15 "parser.y"

	int    type_int;
	float  type_float;
	char   type_id[32];
        char type_char;
	struct ASTNode *ptr;



/* Line 214 of yacc.c  */
#line 220 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 245 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   973

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    17,    21,    24,
      27,    33,    36,    38,    39,    41,    43,    45,    49,    51,
      56,    59,    64,    68,    70,    74,    77,    82,    83,    86,
      92,   100,   106,   114,   117,   121,   127,   137,   146,   154,
     156,   158,   160,   161,   164,   166,   168,   171,   173,   179,
     183,   184,   189,   190,   193,   195,   197,   200,   203,   205,
     207,   208,   209,   212,   215,   219,   221,   225,   227,   231,
     232,   235,   238,   242,   244,   248,   250,   254,   258,   262,
     266,   270,   274,   278,   282,   286,   290,   294,   298,   302,
     305,   308,   311,   314,   317,   320,   325,   329,   331,   333,
     335,   337,   339,   342,   345,   348,   351,   356,   360,   362,
     364,   366,   370
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      90,     0,    -1,    91,    -1,    -1,    92,    91,    -1,    95,
      96,    18,    -1,    95,    98,   101,    -1,    56,    98,   101,
      -1,    93,    18,    -1,     1,    18,    -1,    12,    94,    16,
     118,    17,    -1,    12,     4,    -1,     4,    -1,    -1,     6,
      -1,    93,    -1,    97,    -1,    97,    19,    96,    -1,     4,
      -1,    97,    37,   122,    38,    -1,    22,     4,    -1,     4,
      14,    99,    15,    -1,     4,    14,    15,    -1,   100,    -1,
     100,    19,    99,    -1,    95,    97,    -1,    16,   114,   102,
      17,    -1,    -1,   106,   102,    -1,    28,    14,   122,    15,
     106,    -1,    28,    14,   122,    15,   106,    29,   106,    -1,
      28,    14,   122,    15,   112,    -1,    28,    14,   122,    15,
     112,    29,   112,    -1,   122,    18,    -1,    32,   122,    18,
      -1,    30,    14,   122,    15,   112,    -1,    31,    14,   113,
      18,   113,    18,   113,    15,   112,    -1,    31,    14,   115,
     122,    18,   122,    15,   106,    -1,    33,    14,   122,    15,
      16,   109,    17,    -1,   105,    -1,   101,    -1,   103,    -1,
      -1,   108,   107,    -1,   105,    -1,   110,    -1,    10,    18,
      -1,   104,    -1,    34,   123,    35,   107,   109,    -1,    36,
      35,   107,    -1,    -1,    16,   114,   111,    17,    -1,    -1,
     112,   111,    -1,   105,    -1,   110,    -1,    11,    18,    -1,
      10,    18,    -1,   104,    -1,   124,    -1,    -1,    -1,   115,
     114,    -1,     1,    18,    -1,    95,   116,    18,    -1,   117,
      -1,   117,    19,   116,    -1,    97,    -1,    97,    24,   122,
      -1,    -1,   119,   118,    -1,     1,    18,    -1,    95,   120,
      18,    -1,   121,    -1,   121,    19,   120,    -1,    97,    -1,
     122,    24,   122,    -1,   122,    25,   122,    -1,   122,    26,
     122,    -1,   122,     5,   122,    -1,   122,    20,   122,    -1,
     122,    21,   122,    -1,   122,    42,   122,    -1,   122,    41,
     122,    -1,   122,    43,   122,    -1,   122,    44,   122,    -1,
     122,    22,   122,    -1,   122,    23,   122,    -1,    14,   122,
      15,    -1,    21,   122,    -1,    22,   122,    -1,    40,   122,
      -1,    27,   122,    -1,    13,   122,    -1,   122,    13,    -1,
       4,    14,   124,    15,    -1,     4,    14,    15,    -1,     4,
      -1,     3,    -1,     8,    -1,     9,    -1,     7,    -1,    47,
     122,    -1,   122,    47,    -1,    48,   122,    -1,   122,    48,
      -1,   122,    37,   122,    38,    -1,   122,    39,     4,    -1,
       3,    -1,     8,    -1,     9,    -1,   122,    19,   124,    -1,
     122,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    63,    63,    67,    68,    70,    71,    72,    73,    74,
      76,    77,    78,    79,    80,    91,    93,    94,    96,    97,
      98,   100,   101,   104,   105,   107,   110,   112,   113,   115,
     116,   118,   119,   121,   122,   123,   124,   125,   126,   128,
     129,   130,   133,   134,   136,   137,   138,   139,   142,   143,
     144,   146,   148,   149,   151,   152,   153,   154,   155,   158,
     159,   161,   162,   163,   165,   167,   168,   170,   171,   174,
     175,   176,   178,   180,   181,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   219,   220,
     221,   223,   224
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "RELOP", "TYPE", "STRING",
  "FLOAT", "CHAR", "BREAK", "CONTINUE", "STRUCT", "DPLUS", "LP", "RP",
  "LC", "RC", "SEMI", "COMMA", "PLUS", "MINUS", "STAR", "DIV", "ASSIGNOP",
  "AND", "OR", "NOT", "IF", "ELSE", "WHILE", "FOR", "RETURN", "SWITCH",
  "CASE", "COLON", "DEFAULT", "LB", "RB", "DOT", "ADDR", "DECASS",
  "PLUSASS", "STARASS", "DIVASS", "ArrayDef", "ArrayUse", "SelfPlus",
  "SelfDec", "SelfPlusL", "SelfPlusR", "SelfDecL", "SelfDecR", "StructDec",
  "StructDef", "StructVal", "VOID", "EXT_DEF_LIST", "EXT_VAR_DEF",
  "FUNC_DEF", "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC",
  "VAR_DEF", "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT",
  "IF_THEN", "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM",
  "ARG", "CALL", "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ",
  "Pointer", "UMINUS", "LOWER_THEN_ELSE", "$accept", "program",
  "ExtDefList", "ExtDef", "StructSpecifier", "StructName", "Specifier",
  "ExtDecList", "VarDec", "FuncDec", "VarList", "ParamDec", "CompSt",
  "StmList", "NormolIF", "LoopIF", "StmtBase", "Stmt", "CaseStmtList",
  "CaseStmt", "CaseList", "LoopCompSt", "LoopStmList", "LoopStmt",
  "EmpArgs", "DefList", "Def", "DecList", "Dec", "SDefList", "SDef",
  "SDecList", "SDec", "Exp", "ConstExp", "Args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      97,    98,    98,    99,    99,   100,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   110,   111,   111,   112,   112,   112,   112,   112,   113,
     113,   114,   114,   114,   115,   116,   116,   117,   117,   118,
     118,   118,   119,   120,   120,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     123,   124,   124
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     3,     2,     2,
       5,     2,     1,     0,     1,     1,     1,     3,     1,     4,
       2,     4,     3,     1,     3,     2,     4,     0,     2,     5,
       7,     5,     7,     2,     3,     5,     9,     8,     7,     1,
       1,     1,     0,     2,     1,     1,     2,     1,     5,     3,
       0,     4,     0,     2,     1,     1,     2,     2,     1,     1,
       0,     0,     2,     2,     3,     1,     3,     1,     3,     0,
       2,     2,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     4,     3,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     4,     3,     1,     1,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    14,    13,     0,     0,     2,     0,    15,     0,
       9,    11,     0,     0,     0,     1,     4,     8,    18,     0,
       0,    16,     0,     0,     0,     0,     7,    20,     5,     0,
       0,     6,     0,    15,     0,     0,     0,    22,     0,     0,
      23,     0,     0,    27,     0,    18,    17,    98,    97,   101,
      99,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    75,     0,    73,    10,    70,    25,    21,     0,
      63,    67,     0,    65,     0,     0,     0,     0,     0,    40,
       0,    41,    39,    27,     0,    62,     0,    93,     0,    89,
      90,    92,    91,   102,   104,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,   103,   105,    72,     0,    24,     0,    64,     0,     0,
       0,    60,     0,     0,    26,    28,    33,    96,   112,     0,
      88,    79,    80,    81,    86,    87,    76,    77,    78,     0,
     107,    83,    82,    84,    85,    74,    68,    66,     0,     0,
       0,     0,    59,    34,     0,     0,    95,   106,     0,     0,
      60,     0,     0,   111,    29,     0,     0,     0,     0,    58,
      54,    55,    35,     0,     0,    50,     0,    57,    56,    52,
       0,    60,     0,     0,     0,     0,    30,     0,    52,     0,
       0,     0,   108,   109,   110,     0,    42,    38,    51,    53,
       0,     0,    37,    42,     0,    47,    44,    49,    42,    45,
      31,    36,    50,    46,    43,     0,    48,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,    33,    12,    42,    20,    21,    14,
      39,    40,    79,    80,    81,   169,   170,    83,   207,   208,
     185,   171,   187,   188,   150,    43,    44,    72,    73,    35,
      36,    63,    64,    84,   195,   152
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -157
static const yytype_int16 yypact[] =
{
       5,     0,  -157,    15,    37,    77,  -157,     5,    67,    11,
    -157,    73,    94,    72,   108,  -157,  -157,  -157,    72,    89,
     105,    -3,   108,    50,    96,   208,  -157,  -157,  -157,    17,
     392,  -157,   116,  -157,    17,   118,    50,  -157,    17,   121,
     119,   123,    17,   334,   160,  -157,  -157,  -157,   128,  -157,
    -157,  -157,   392,   392,   392,   392,   392,   392,   392,   392,
     405,  -157,   100,   125,   130,  -157,  -157,   100,  -157,    91,
    -157,   -15,   129,   131,   142,   143,   144,   392,   145,  -157,
     158,  -157,  -157,   334,   445,  -157,   376,    70,   485,    70,
      70,    70,    70,    70,    70,   392,  -157,   392,   392,   392,
     392,   392,   392,   392,   392,  -157,   174,   392,   392,   392,
     392,  -157,  -157,  -157,    17,  -157,   392,  -157,    17,   392,
     392,    92,   518,   392,  -157,  -157,  -157,  -157,   551,   147,
    -157,   906,   925,   925,    70,    70,   883,   107,   912,   584,
    -157,   883,   883,   883,   883,  -157,   850,  -157,   624,   664,
     161,   392,  -157,  -157,   704,   392,  -157,  -157,   334,   250,
     392,   737,   164,  -157,   154,   166,   167,   160,   172,  -157,
    -157,  -157,  -157,   171,   392,    18,   334,  -157,  -157,   250,
     392,   392,   777,    55,   159,   178,  -157,   179,   250,   817,
     182,   334,  -157,  -157,  -157,   163,   292,  -157,  -157,  -157,
     250,   250,  -157,   292,   181,  -157,  -157,  -157,   292,  -157,
     173,  -157,    18,  -157,  -157,   250,  -157,  -157
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,   194,  -157,    35,  -157,    13,   175,   -30,   196,
     134,  -157,    24,   127,  -157,  -153,   -43,  -144,   -87,  -157,
      -6,  -143,    25,  -156,  -150,   -42,    97,   101,  -157,   187,
    -157,   112,  -157,   -29,  -157,   -79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      82,    60,    85,   172,    62,    -3,     1,   129,    67,   116,
     173,     2,    71,     9,   164,    18,    29,     3,    10,    11,
       9,    45,    30,    87,    88,    89,    90,    91,    92,    93,
      94,   190,   186,    19,    30,     8,    34,    38,    26,    19,
      82,    13,     8,   205,   210,   211,    31,   202,   122,    34,
     205,    32,   183,   209,   184,   205,     2,   128,   192,   217,
     209,     4,     3,   193,   194,   209,   131,   -69,   132,   133,
     134,   135,   136,   137,   138,   139,   163,    15,   141,   142,
     143,   144,    38,    96,    62,    17,    24,   146,    71,   -12,
     148,   149,   128,    27,   154,    47,    48,     2,     2,    49,
      50,    51,     2,     3,     3,    52,    53,   104,     3,   106,
      23,    37,    95,    54,    55,    82,   212,   111,   112,    56,
      96,   214,   161,    28,    25,   179,   128,    97,    98,    99,
     100,   128,    57,    82,    61,    65,    68,    30,    69,    58,
      59,    70,    86,   113,   104,   182,   106,   117,    82,   114,
     118,   189,   128,   206,   111,   112,   119,   120,   121,   123,
     206,    41,   156,   -61,   -61,   206,     2,   -61,   -61,   -61,
     -61,   -61,     3,   -61,   -61,   124,   -61,   -61,   140,   160,
     175,   -61,   -61,   176,   177,   178,   180,   -61,   -61,   181,
     -61,   -61,   -61,   -61,   196,   197,   198,   201,   203,   213,
     -61,    16,   215,   115,    46,    22,   216,   -61,   -61,    41,
     125,   -61,   -61,   199,     2,   -61,   -61,   -61,   151,   147,
       3,   -61,   -61,    66,   -61,   -61,   145,     0,     0,   -61,
     -61,     0,     0,     0,     0,   -61,   -61,     0,   -61,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,   -61,     0,
       0,     0,     0,    47,    48,   -61,   -61,    49,    50,    51,
     165,   166,     0,    52,    53,     0,   167,     0,     0,     0,
       0,    54,    55,     0,     0,     0,     0,    56,   168,     0,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     0,    47,    48,    58,    59,    49,
      50,    51,   204,     0,     0,    52,    53,     0,   167,     0,
       0,     0,     0,    54,    55,     0,     0,     0,     0,    56,
     168,     0,    75,    76,    77,    78,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,    47,    48,    58,
      59,    49,    50,    51,     0,     0,     0,    52,    53,     0,
      25,     0,     0,     0,     0,    54,    55,     0,     0,     0,
       0,    56,    74,     0,    75,    76,    77,    78,     0,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,    47,
      48,    58,    59,    49,    50,    51,     0,     0,     0,    52,
      53,   127,     0,     0,     0,    47,    48,    54,    55,    49,
      50,    51,     0,    56,     0,    52,    53,     0,     0,     0,
      95,     0,     0,    54,    55,     0,    57,     0,    96,    56,
       0,     0,     0,    58,    59,    97,    98,    99,   100,   101,
     102,   103,    57,     0,     0,     0,     0,     0,     0,    58,
      59,     0,   104,   105,   106,     0,   107,   108,   109,   110,
      95,     0,   111,   112,     0,     0,     0,     0,    96,     0,
       0,     0,     0,   126,     0,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,   106,     0,   107,   108,   109,   110,
      95,     0,   111,   112,     0,     0,     0,     0,    96,     0,
     130,     0,     0,     0,     0,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,    95,   106,     0,   107,   108,   109,   110,
       0,    96,   111,   112,     0,     0,   153,     0,    97,    98,
      99,   100,   101,   102,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,    95,   106,     0,   107,
     108,   109,   110,     0,    96,   111,   112,     0,     0,     0,
     155,    97,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,    95,
     106,     0,   107,   108,   109,   110,     0,    96,   111,   112,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   157,   106,     0,   107,   108,   109,   110,    95,
       0,   111,   112,     0,     0,     0,     0,    96,     0,   158,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,   106,     0,   107,   108,   109,   110,    95,
       0,   111,   112,     0,     0,     0,     0,    96,     0,   159,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,   106,     0,   107,   108,   109,   110,    95,
       0,   111,   112,     0,     0,     0,     0,    96,     0,   162,
       0,     0,     0,     0,    97,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,    95,   106,     0,   107,   108,   109,   110,     0,
      96,   111,   112,     0,     0,   174,     0,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,   106,     0,   107,   108,
     109,   110,    95,     0,   111,   112,     0,     0,     0,     0,
      96,     0,   191,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,   106,     0,   107,   108,
     109,   110,    95,     0,   111,   112,     0,     0,     0,     0,
      96,     0,   200,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,    95,   106,     0,   107,   108,
     109,   110,     0,    96,   111,   112,     0,     0,     0,     0,
      97,    98,    99,   100,   101,   102,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,    95,   106,
       0,   107,   108,   109,   110,     0,    96,   111,   112,     0,
       0,     0,     0,    97,    98,    99,   100,     0,   102,   103,
       0,     0,     0,     0,     0,     0,     0,    95,     0,    96,
     104,     0,   106,     0,     0,    96,    97,    98,    99,   100,
     111,   112,    97,    98,    99,   100,     0,   102,    96,     0,
       0,     0,     0,   104,     0,   106,     0,    99,   100,   104,
       0,   106,     0,   111,   112,     0,     0,     0,     0,   111,
     112,     0,   104,     0,   106,     0,     0,     0,     0,     0,
       0,     0,   111,   112
};

static const yytype_int16 yycheck[] =
{
      43,    30,    44,   159,    34,     0,     1,    86,    38,    24,
     160,     6,    42,     0,   158,     4,    19,    12,    18,     4,
       7,     4,    37,    52,    53,    54,    55,    56,    57,    58,
      59,   181,   176,    22,    37,     0,    23,    24,    14,    22,
      83,     4,     7,   196,   200,   201,    22,   191,    77,    36,
     203,     1,    34,   196,    36,   208,     6,    86,     3,   215,
     203,    56,    12,     8,     9,   208,    95,    17,    97,    98,
      99,   100,   101,   102,   103,   104,   155,     0,   107,   108,
     109,   110,    69,    13,   114,    18,    14,   116,   118,    16,
     119,   120,   121,     4,   123,     3,     4,     6,     6,     7,
       8,     9,     6,    12,    12,    13,    14,    37,    12,    39,
      16,    15,     5,    21,    22,   158,   203,    47,    48,    27,
      13,   208,   151,    18,    16,   167,   155,    20,    21,    22,
      23,   160,    40,   176,    18,    17,    15,    37,    19,    47,
      48,    18,    14,    18,    37,   174,    39,    18,   191,    19,
      19,   180,   181,   196,    47,    48,    14,    14,    14,    14,
     203,     1,    15,     3,     4,   208,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    17,    16,    17,     4,    18,
      16,    21,    22,    29,    18,    18,    14,    27,    28,    18,
      30,    31,    32,    33,    35,    17,    17,    15,    35,    18,
      40,     7,    29,    69,    29,     9,   212,    47,    48,     1,
      83,     3,     4,   188,     6,     7,     8,     9,   121,   118,
      12,    13,    14,    36,    16,    17,   114,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    -1,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,     3,     4,    47,    48,     7,     8,     9,
      10,    11,    -1,    13,    14,    -1,    16,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,     3,     4,    47,    48,     7,
       8,     9,    10,    -1,    -1,    13,    14,    -1,    16,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,     3,     4,    47,
      48,     7,     8,     9,    -1,    -1,    -1,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    -1,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,     3,
       4,    47,    48,     7,     8,     9,    -1,    -1,    -1,    13,
      14,    15,    -1,    -1,    -1,     3,     4,    21,    22,     7,
       8,     9,    -1,    27,    -1,    13,    14,    -1,    -1,    -1,
       5,    -1,    -1,    21,    22,    -1,    40,    -1,    13,    27,
      -1,    -1,    -1,    47,    48,    20,    21,    22,    23,    24,
      25,    26,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    37,    38,    39,    -1,    41,    42,    43,    44,
       5,    -1,    47,    48,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    44,
       5,    -1,    47,    48,    -1,    -1,    -1,    -1,    13,    -1,
      15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,     5,    39,    -1,    41,    42,    43,    44,
      -1,    13,    47,    48,    -1,    -1,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,     5,    39,    -1,    41,
      42,    43,    44,    -1,    13,    47,    48,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,     5,
      39,    -1,    41,    42,    43,    44,    -1,    13,    47,    48,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    -1,    41,    42,    43,    44,     5,
      -1,    47,    48,    -1,    -1,    -1,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    43,    44,     5,
      -1,    47,    48,    -1,    -1,    -1,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    43,    44,     5,
      -1,    47,    48,    -1,    -1,    -1,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,     5,    39,    -1,    41,    42,    43,    44,    -1,
      13,    47,    48,    -1,    -1,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    44,     5,    -1,    47,    48,    -1,    -1,    -1,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    44,     5,    -1,    47,    48,    -1,    -1,    -1,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,     5,    39,    -1,    41,    42,
      43,    44,    -1,    13,    47,    48,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,     5,    39,
      -1,    41,    42,    43,    44,    -1,    13,    47,    48,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    13,
      37,    -1,    39,    -1,    -1,    13,    20,    21,    22,    23,
      47,    48,    20,    21,    22,    23,    -1,    25,    13,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    22,    23,    37,
      -1,    39,    -1,    47,    48,    -1,    -1,    -1,    -1,    47,
      48,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    12,    56,    90,    91,    92,    93,    95,
      18,     4,    94,     4,    98,     0,    91,    18,     4,    22,
      96,    97,    98,    16,    14,    16,   101,     4,    18,    19,
      37,   101,     1,    93,    95,   118,   119,    15,    95,    99,
     100,     1,    95,   114,   115,     4,    96,     3,     4,     7,
       8,     9,    13,    14,    21,    22,    27,    40,    47,    48,
     122,    18,    97,   120,   121,    17,   118,    97,    15,    19,
      18,    97,   116,   117,    28,    30,    31,    32,    33,   101,
     102,   103,   105,   106,   122,   114,    14,   122,   122,   122,
     122,   122,   122,   122,   122,     5,    13,    20,    21,    22,
      23,    24,    25,    26,    37,    38,    39,    41,    42,    43,
      44,    47,    48,    18,    19,    99,    24,    18,    19,    14,
      14,    14,   122,    14,    17,   102,    18,    15,   122,   124,
      15,   122,   122,   122,   122,   122,   122,   122,   122,   122,
       4,   122,   122,   122,   122,   120,   122,   116,   122,   122,
     113,   115,   124,    18,   122,    19,    15,    38,    15,    15,
      18,   122,    15,   124,   106,    10,    11,    16,    28,   104,
     105,   110,   112,   113,    18,    16,    29,    18,    18,   114,
      14,    18,   122,    34,    36,   109,   106,   111,   112,   122,
     113,    15,     3,     8,     9,   123,    35,    17,    17,   111,
      15,    15,   106,    35,    10,   104,   105,   107,   108,   110,
     112,   112,   107,    18,   107,    29,   109,   112
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { //display($1,0); 
                         semantic_Analysis0((yyvsp[(1) - (1)].ptr)); 
                        ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {(yyval.ptr)=mknode(3,FUNC_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {(yyval.ptr)=mknode(2,FUNC_DEF,yylineno,(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {(yyval.ptr)=mknode(1,StructDec,yylineno,(yyvsp[(4) - (5)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (5)].ptr)->type_id);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { (yyval.ptr)=mknode(0,StructDef,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (2)].type_id));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { (yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {
                    (yyval.ptr)=mknode(0,TYPE,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));
                        if(strcmp((yyvsp[(1) - (1)].type_id),"int") == 0)
                          (yyval.ptr)->type=INT;
                        else if(strcmp((yyvsp[(1) - (1)].type_id),"float")==0)
                          (yyval.ptr)->type = FLOAT;
                        else if(strcmp((yyvsp[(1) - (1)].type_id),"char")==0)
                          (yyval.ptr)->type = CHAR;
                        else if(strcmp((yyvsp[(1) - (1)].type_id),"string")==0)
                          (yyval.ptr)->type = STRING;      
                 ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {(yyval.ptr) = (yyvsp[(1) - (1)].ptr);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {(yyval.ptr)=mknode(2,ArrayDef,yylineno,(yyvsp[(1) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {(yyval.ptr)=mknode(0,Pointer,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (2)].type_id));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));(yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (8)].ptr),(yyvsp[(4) - (8)].ptr),(yyvsp[(6) - (8)].ptr),(yyvsp[(8) - (8)].ptr));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {(yyval.ptr)=mknode(2,SWITCH,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(6) - (7)].ptr));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {(yyval.ptr)=mknode(2,CaseStmtList,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {(yyval.ptr)=mknode(3,CaseList,yylineno,(yyvsp[(2) - (5)].ptr),(yyvsp[(4) - (5)].ptr),(yyvsp[(5) - (5)].ptr));strcpy((yyval.ptr)->type_id,"CASE");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {(yyval.ptr)=mknode(1,DEFAULT,yylineno,(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DEFAULT");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {(yyval.ptr)=mknode(0,CONTINUE,yylineno);strcpy((yyval.ptr)->type_id,"CONTINUE");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"AND");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"OR");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"PLUS");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"MINUS");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {(yyval.ptr)=mknode(2,PLUSASS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"PLUSASS");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {(yyval.ptr)=mknode(2,DECASS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DECASS");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {(yyval.ptr)=mknode(2,STARASS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"STARASS");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {(yyval.ptr)=mknode(2,DIVASS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DIVASS");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"STAR");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DIV");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"Pointer");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"ADDR");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"NOT");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(1) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {(yyval.ptr)=mknode(0,STRING,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));(yyval.ptr)->type=STRING;;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {(yyval.ptr)=mknode(1,SelfPlusL,yylineno,(yyvsp[(2) - (2)].ptr));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {(yyval.ptr)=mknode(1,SelfPlusR,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {(yyval.ptr)=mknode(1,SelfDecL,yylineno,(yyvsp[(2) - (2)].ptr));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {(yyval.ptr)=mknode(1,SelfDecR,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {(yyval.ptr)=mknode(2,ArrayUse,yylineno,(yyvsp[(1) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {(yyval.ptr)=mknode(1,StructVal,yylineno,(yyvsp[(1) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(3) - (3)].type_id));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;



/* Line 1455 of yacc.c  */
#line 2619 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 227 "parser.y"


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
