
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
     FLOAT = 262,
     CHAR = 263,
     SelfPlusL = 264,
     SelfPlusR = 265,
     SelfDecL = 266,
     SelfDecR = 267,
     BREAK = 268,
     CONTINUE = 269,
     STRUCT = 270,
     DPLUS = 271,
     LP = 272,
     RP = 273,
     LC = 274,
     RC = 275,
     SEMI = 276,
     COMMA = 277,
     PLUS = 278,
     MINUS = 279,
     STAR = 280,
     DIV = 281,
     ASSIGNOP = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     IF = 286,
     ELSE = 287,
     WHILE = 288,
     FOR = 289,
     RETURN = 290,
     SWITCH = 291,
     CASE = 292,
     COLON = 293,
     DEFAULT = 294,
     LB = 295,
     RB = 296,
     DOT = 297,
     ADDR = 298,
     ArrayDef = 299,
     ArrayUse = 300,
     StructDec = 301,
     StructDef = 302,
     StructVal = 303,
     EXT_DEF_LIST = 304,
     EXT_VAR_DEF = 305,
     FUNC_DEF = 306,
     FUNC_DEC = 307,
     EXT_DEC_LIST = 308,
     PARAM_LIST = 309,
     PARAM_DEC = 310,
     VAR_DEF = 311,
     DEC_LIST = 312,
     DEF_LIST = 313,
     COMP_STM = 314,
     STM_LIST = 315,
     EXP_STMT = 316,
     IF_THEN = 317,
     IF_THEN_ELSE = 318,
     FUNC_CALL = 319,
     ARGS = 320,
     FUNCTION = 321,
     PARAM = 322,
     ARG = 323,
     CALL = 324,
     LABEL = 325,
     GOTO = 326,
     JLT = 327,
     JLE = 328,
     JGT = 329,
     JGE = 330,
     EQ = 331,
     NEQ = 332,
     Pointer = 333,
     UMINUS = 334,
     LOWER_THEN_ELSE = 335
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
#line 212 "parser.tab.c"
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
#line 237 "parser.tab.c"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   915

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   335

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
      75,    76,    77,    78,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    17,    20,    23,
      29,    32,    34,    35,    37,    39,    41,    45,    47,    52,
      55,    60,    64,    66,    70,    73,    78,    79,    82,    85,
      87,    91,    97,   105,   111,   121,   129,   130,   133,   136,
     138,   142,   148,   156,   162,   172,   180,   183,   189,   193,
     194,   199,   200,   203,   206,   208,   212,   218,   226,   232,
     242,   250,   253,   256,   258,   259,   260,   263,   266,   270,
     272,   276,   278,   282,   283,   286,   289,   293,   295,   299,
     301,   305,   309,   313,   317,   321,   325,   329,   333,   337,
     340,   343,   346,   349,   352,   355,   360,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   385,   389,   391,   393,
     395,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      82,     0,    -1,    83,    -1,    -1,    84,    83,    -1,    87,
      88,    21,    -1,    87,    90,    93,    -1,    85,    21,    -1,
       1,    21,    -1,    15,    86,    19,   107,    20,    -1,    15,
       4,    -1,     4,    -1,    -1,     6,    -1,    85,    -1,    89,
      -1,    89,    22,    88,    -1,     4,    -1,    89,    40,     3,
      41,    -1,    25,     4,    -1,     4,    17,    91,    18,    -1,
       4,    17,    18,    -1,    92,    -1,    92,    22,    91,    -1,
      87,    89,    -1,    19,   103,    94,    20,    -1,    -1,    95,
      94,    -1,   111,    21,    -1,    93,    -1,    35,   111,    21,
      -1,    31,    17,   111,    18,    95,    -1,    31,    17,   111,
      18,    95,    32,    95,    -1,    33,    17,   111,    18,   101,
      -1,    34,    17,   102,    21,   102,    21,   102,    18,   101,
      -1,    36,    17,   111,    18,    19,    98,    20,    -1,    -1,
      97,    96,    -1,   111,    21,    -1,    99,    -1,    35,   111,
      21,    -1,    31,    17,   111,    18,   101,    -1,    31,    17,
     111,    18,   101,    32,   101,    -1,    33,    17,   111,    18,
     101,    -1,    34,    17,   102,    21,   102,    21,   102,    18,
     101,    -1,    36,    17,   111,    18,    19,    98,    20,    -1,
      13,    21,    -1,    37,   112,    38,    96,    98,    -1,    39,
      38,    96,    -1,    -1,    19,   103,   100,    20,    -1,    -1,
     101,   100,    -1,   111,    21,    -1,    99,    -1,    35,   111,
      21,    -1,    31,    17,   111,    18,   101,    -1,    31,    17,
     111,    18,   101,    32,   101,    -1,    33,    17,   111,    18,
     101,    -1,    34,    17,   102,    21,   102,    21,   102,    18,
     101,    -1,    36,    17,   111,    18,    19,    98,    20,    -1,
      14,    21,    -1,    13,    21,    -1,   113,    -1,    -1,    -1,
     104,   103,    -1,     1,    21,    -1,    87,   105,    21,    -1,
     106,    -1,   106,    22,   105,    -1,    89,    -1,    89,    27,
     111,    -1,    -1,   108,   107,    -1,     1,    21,    -1,    87,
     109,    21,    -1,   110,    -1,   110,    22,   109,    -1,    89,
      -1,   111,    27,   111,    -1,   111,    28,   111,    -1,   111,
      29,   111,    -1,   111,     5,   111,    -1,   111,    23,   111,
      -1,   111,    24,   111,    -1,   111,    25,   111,    -1,   111,
      26,   111,    -1,    17,   111,    18,    -1,    24,   111,    -1,
      25,   111,    -1,    43,   111,    -1,    30,   111,    -1,    16,
     111,    -1,   111,    16,    -1,     4,    17,   113,    18,    -1,
       4,    17,    18,    -1,     4,    -1,     3,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
       4,    40,   111,    41,    -1,   111,    42,     4,    -1,     3,
      -1,     7,    -1,     8,    -1,   111,    22,   113,    -1,   111,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    64,    65,    67,    68,    69,    70,    72,
      73,    74,    75,    76,    85,    87,    88,    90,    91,    92,
      94,    95,    98,    99,   101,   104,   106,   107,   109,   110,
     111,   112,   113,   114,   115,   116,   119,   120,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   133,   134,   135,
     137,   139,   140,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   154,   155,   157,   158,   159,   161,   163,
     164,   166,   167,   170,   171,   172,   174,   176,   177,   179,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   210,   211,   212,
     214,   215
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "ID", "RELOP", "TYPE", "FLOAT",
  "CHAR", "SelfPlusL", "SelfPlusR", "SelfDecL", "SelfDecR", "BREAK",
  "CONTINUE", "STRUCT", "DPLUS", "LP", "RP", "LC", "RC", "SEMI", "COMMA",
  "PLUS", "MINUS", "STAR", "DIV", "ASSIGNOP", "AND", "OR", "NOT", "IF",
  "ELSE", "WHILE", "FOR", "RETURN", "SWITCH", "CASE", "COLON", "DEFAULT",
  "LB", "RB", "DOT", "ADDR", "ArrayDef", "ArrayUse", "StructDec",
  "StructDef", "StructVal", "EXT_DEF_LIST", "EXT_VAR_DEF", "FUNC_DEF",
  "FUNC_DEC", "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC", "VAR_DEF",
  "DEC_LIST", "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT", "IF_THEN",
  "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL",
  "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ", "Pointer",
  "UMINUS", "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList",
  "ExtDef", "StructSpecifier", "StructName", "Specifier", "ExtDecList",
  "VarDec", "FuncDec", "VarList", "ParamDec", "CompSt", "StmList", "Stmt",
  "CaseStmtList", "CaseStmt", "CaseList", "LoopCompSt", "LoopStmList",
  "LoopStmt", "EmpArgs", "DefList", "Def", "DecList", "Dec", "SDefList",
  "SDef", "SDecList", "SDec", "Exp", "ConstExp", "Args", 0
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
     335
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      90,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   104,   105,
     105,   106,   106,   107,   107,   107,   108,   109,   109,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   112,
     113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     2,     5,
       2,     1,     0,     1,     1,     1,     3,     1,     4,     2,
       4,     3,     1,     3,     2,     4,     0,     2,     2,     1,
       3,     5,     7,     5,     9,     7,     0,     2,     2,     1,
       3,     5,     7,     5,     9,     7,     2,     5,     3,     0,
       4,     0,     2,     2,     1,     3,     5,     7,     5,     9,
       7,     2,     2,     1,     0,     0,     2,     2,     3,     1,
       3,     1,     3,     0,     2,     2,     3,     1,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     1,     1,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,    12,     0,     2,     0,    14,     0,     8,
      10,     0,     1,     4,     7,    17,     0,     0,    15,     0,
       0,     0,    19,     5,     0,     0,     0,     6,     0,    14,
       0,     0,     0,    21,     0,     0,    22,    17,    16,     0,
       0,     0,    26,     0,    75,    79,     0,    77,     9,    74,
      24,    20,     0,    18,    67,    71,     0,    69,    98,    97,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    26,
       0,    66,    76,     0,    23,     0,    68,     0,     0,     0,
      93,     0,    89,    90,    92,     0,     0,    64,     0,     0,
      91,    25,    27,     0,    94,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    72,    70,    96,   111,     0,
       0,    88,     0,     0,     0,    63,    30,     0,    83,    84,
      85,    86,    87,    80,    81,    82,   106,     0,    95,   105,
       0,     0,    64,     0,   110,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    33,     0,     0,    49,     0,
      62,    61,    51,     0,     0,    64,     0,     0,    53,    64,
       0,     0,     0,    32,     0,    51,     0,     0,     0,    55,
       0,     0,   107,   108,   109,     0,    36,    35,    50,    52,
       0,     0,    64,     0,     0,    36,     0,     0,     0,     0,
       0,     0,    48,    36,    39,     0,    56,    58,     0,    49,
      34,    49,    46,     0,     0,    64,     0,     0,    37,    38,
       0,    64,     0,    47,     0,     0,     0,    40,     0,    57,
       0,    60,     0,     0,    64,     0,     0,    41,    43,     0,
      49,    59,     0,    64,     0,    42,     0,    45,     0,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    29,    11,    41,    17,    18,    19,
      35,    36,    77,    78,    79,   202,   203,   172,   154,   174,
     175,   124,    42,    43,    56,    57,    31,    32,    46,    47,
     156,   185,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -201
static const yytype_int16 yypact[] =
{
      81,   -16,  -201,    37,    45,  -201,    81,    50,    17,  -201,
      29,    60,  -201,  -201,  -201,    73,    95,    85,    -7,    92,
      77,    71,  -201,  -201,    27,   109,   234,  -201,    98,  -201,
      27,    96,    77,  -201,    27,   108,   107,  -201,  -201,    90,
     113,    27,   345,   196,  -201,    97,   114,   116,  -201,  -201,
      97,  -201,     7,  -201,  -201,    11,   115,   117,  -201,   -11,
    -201,  -201,  -201,  -201,  -201,  -201,   406,   406,   406,   406,
     406,   124,   126,   128,   406,   130,   406,  -201,   122,   345,
     141,  -201,  -201,    27,  -201,   406,  -201,    27,   382,   406,
     -12,   416,   -12,   -12,   -12,   406,   406,   406,   441,   406,
     -12,  -201,  -201,   406,  -201,  -201,   406,   406,   406,   406,
     406,   406,   406,   144,  -201,   843,  -201,  -201,   466,   131,
     491,  -201,   518,   543,   133,  -201,  -201,   568,    -6,    33,
      33,   -12,   -12,   858,   342,   873,  -201,   406,  -201,  -201,
     345,   271,   406,   132,  -201,   120,   134,   135,   196,   142,
     143,   146,   406,   157,  -201,  -201,   593,   155,    66,   345,
    -201,  -201,   271,   406,   406,   406,   618,   406,  -201,   406,
     125,   139,   158,  -201,   160,   271,   643,   668,   161,  -201,
     693,   163,  -201,  -201,  -201,   147,   308,  -201,  -201,  -201,
     271,   271,   406,   165,   271,   308,   166,   169,   171,   172,
     406,   173,  -201,   308,  -201,   718,   159,  -201,   174,    66,
    -201,    66,  -201,   406,   406,   406,   743,   406,  -201,  -201,
     271,   406,   176,  -201,   768,   793,   177,  -201,   818,  -201,
     175,  -201,   271,   271,   406,   195,   271,   162,  -201,   197,
      66,  -201,   271,   406,   199,  -201,   204,  -201,   271,  -201
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -201,  -201,   211,  -201,    74,  -201,    88,   200,   -27,  -201,
     181,  -201,   206,   149,   -96,  -187,  -201,  -200,  -102,    48,
    -118,  -130,   -41,  -201,   168,  -201,   202,  -201,   153,  -201,
     -42,  -201,   -87
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      80,   119,    81,    45,   104,     9,    88,    50,   211,   222,
     104,   223,   157,     2,    55,    24,   218,   106,   107,   108,
     109,    15,     3,   155,    90,    91,    92,    93,    94,    89,
     113,    37,    98,    25,   100,   178,   113,    80,    85,   181,
     244,    10,    16,   115,   145,    12,   118,   120,   -11,   104,
     144,    25,    16,   122,   123,   118,    45,   127,   108,   109,
      55,   128,   208,   173,   129,   130,   131,   132,   133,   134,
     135,    14,   206,   207,     7,   113,   210,     2,    28,    20,
       7,    -3,     1,     2,   204,   226,     3,     2,     8,    33,
      21,   230,     3,   204,     8,   118,     3,   -73,    80,    22,
     118,   204,   229,   170,   239,   171,    23,   162,    30,    34,
     166,    26,    39,   246,   237,   238,    48,    80,   241,    44,
      30,   176,   177,   118,   245,   180,    51,   118,   182,    52,
     249,    53,   183,   184,    54,    82,    86,    25,    83,    87,
      34,    95,   101,    96,   205,    97,   103,    99,   136,   138,
     118,   158,   159,   205,   142,   160,   161,   104,   216,   163,
     164,   205,   105,   165,   106,   107,   108,   109,   110,   111,
     112,   224,   225,   118,   167,   228,   169,   186,   187,   118,
     188,   194,   192,   113,   209,   195,   213,   212,   214,   215,
     217,   220,   118,   236,   242,   221,   231,    40,   234,   -65,
     -65,   118,     2,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,     3,   -65,   -65,   240,   -65,   -65,    13,   243,   247,
     -65,   -65,   248,   189,    38,    27,   -65,   -65,   102,   -65,
     -65,   -65,   -65,    84,    49,    40,   114,   -65,   -65,   -65,
       2,   -65,   -65,   -65,   -65,   -65,   -65,     0,     0,     3,
     -65,   -65,     0,   -65,   -65,   116,     0,     0,   -65,   -65,
       0,     0,     0,     0,   -65,   -65,     0,   -65,   -65,   -65,
     -65,     0,     0,     0,    58,    59,     0,   -65,    60,    61,
      62,    63,    64,    65,   146,   147,     0,    66,    67,     0,
     148,     0,     0,     0,     0,    68,    69,     0,     0,     0,
       0,    70,   149,     0,   150,   151,   152,   153,     0,     0,
       0,    58,    59,     0,    76,    60,    61,    62,    63,    64,
      65,   196,     0,     0,    66,    67,     0,   148,     0,     0,
       0,     0,    68,    69,     0,     0,     0,     0,    70,   197,
       0,   198,   199,   200,   201,     0,     0,   103,    58,    59,
       0,    76,    60,    61,    62,    63,    64,    65,   104,     0,
       0,    66,    67,     0,    26,   106,   107,   108,   109,    68,
      69,     0,     0,     0,     0,    70,    71,     0,    72,    73,
      74,    75,     0,     0,   113,    58,    59,     0,    76,    60,
      61,    62,    63,    64,    65,     0,     0,     0,    66,    67,
     117,     0,     0,     0,     0,     0,    68,    69,     0,    58,
      59,     0,    70,    60,    61,    62,    63,    64,    65,     0,
       0,   103,    66,    67,     0,    76,     0,     0,     0,     0,
      68,    69,   104,     0,   121,     0,    70,     0,     0,   106,
     107,   108,   109,   110,   111,   112,   103,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,   104,   113,     0,
       0,     0,   126,     0,   106,   107,   108,   109,   110,   111,
     112,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,   113,     0,     0,     0,     0,   137,   106,
     107,   108,   109,   110,   111,   112,   103,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,   113,     0,
       0,     0,     0,     0,   106,   107,   108,   109,   110,   111,
     112,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   113,   104,     0,   140,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,   141,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,   143,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,     0,     0,     0,   168,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,     0,     0,     0,   179,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,   190,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,   191,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,   193,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,     0,     0,     0,   219,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,     0,     0,     0,   227,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,   232,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,   233,     0,     0,     0,     0,   106,   107,   108,   109,
     110,   111,   112,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,   113,   235,     0,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,   103,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
     113,     0,     0,   103,     0,     0,   106,   107,   108,   109,
     110,   111,   112,     0,   104,     0,     0,     0,   103,     0,
       0,   106,   107,   108,   109,   113,   111,   112,     0,   104,
       0,     0,     0,     0,     0,     0,   106,   107,   108,   109,
     113,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113
};

static const yytype_int16 yycheck[] =
{
      42,    88,    43,    30,    16,    21,    17,    34,   195,   209,
      16,   211,   142,     6,    41,    22,   203,    23,    24,    25,
      26,     4,    15,   141,    66,    67,    68,    69,    70,    40,
      42,     4,    74,    40,    76,   165,    42,    79,    27,   169,
     240,     4,    25,    85,   140,     0,    88,    89,    19,    16,
     137,    40,    25,    95,    96,    97,    83,    99,    25,    26,
      87,   103,   192,   159,   106,   107,   108,   109,   110,   111,
     112,    21,   190,   191,     0,    42,   194,     6,     1,    19,
       6,     0,     1,     6,   186,   215,    15,     6,     0,    18,
      17,   221,    15,   195,     6,   137,    15,    20,   140,     4,
     142,   203,   220,    37,   234,    39,    21,   148,    20,    21,
     152,    19,     3,   243,   232,   233,    20,   159,   236,    21,
      32,   163,   164,   165,   242,   167,    18,   169,     3,    22,
     248,    41,     7,     8,    21,    21,    21,    40,    22,    22,
      52,    17,    20,    17,   186,    17,     5,    17,     4,    18,
     192,    19,    32,   195,    21,    21,    21,    16,   200,    17,
      17,   203,    21,    17,    23,    24,    25,    26,    27,    28,
      29,   213,   214,   215,    17,   217,    21,    38,    20,   221,
      20,    18,    21,    42,    19,    38,    17,    21,    17,    17,
      17,    32,   234,    18,    32,    21,    20,     1,    21,     3,
       4,   243,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    19,    19,    20,     6,    21,    20,
      24,    25,    18,   175,    24,    19,    30,    31,    79,    33,
      34,    35,    36,    52,    32,     1,    83,     3,     4,    43,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    87,    -1,    -1,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,
      36,    -1,    -1,    -1,     3,     4,    -1,    43,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,     3,     4,    -1,    43,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    16,    17,    -1,    19,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      -1,    33,    34,    35,    36,    -1,    -1,     5,     3,     4,
      -1,    43,     7,     8,     9,    10,    11,    12,    16,    -1,
      -1,    16,    17,    -1,    19,    23,    24,    25,    26,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    42,     3,     4,    -1,    43,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    -1,     3,
       4,    -1,    30,     7,     8,     9,    10,    11,    12,    -1,
      -1,     5,    16,    17,    -1,    43,    -1,    -1,    -1,    -1,
      24,    25,    16,    -1,    18,    -1,    30,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    16,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    -1,    -1,    -1,    21,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    -1,    -1,    -1,    21,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    18,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    42,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      42,    -1,    -1,     5,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    -1,    16,    -1,    -1,    -1,     5,    -1,
      -1,    23,    24,    25,    26,    42,    28,    29,    -1,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      42,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    15,    82,    83,    84,    85,    87,    21,
       4,    86,     0,    83,    21,     4,    25,    88,    89,    90,
      19,    17,     4,    21,    22,    40,    19,    93,     1,    85,
      87,   107,   108,    18,    87,    91,    92,     4,    88,     3,
       1,    87,   103,   104,    21,    89,   109,   110,    20,   107,
      89,    18,    22,    41,    21,    89,   105,   106,     3,     4,
       7,     8,     9,    10,    11,    12,    16,    17,    24,    25,
      30,    31,    33,    34,    35,    36,    43,    93,    94,    95,
     111,   103,    21,    22,    91,    27,    21,    22,    17,    40,
     111,   111,   111,   111,   111,    17,    17,    17,   111,    17,
     111,    20,    94,     5,    16,    21,    23,    24,    25,    26,
      27,    28,    29,    42,   109,   111,   105,    18,   111,   113,
     111,    18,   111,   111,   102,   113,    21,   111,   111,   111,
     111,   111,   111,   111,   111,   111,     4,    22,    18,    41,
      18,    18,    21,    18,   113,    95,    13,    14,    19,    31,
      33,    34,    35,    36,    99,   101,   111,   102,    19,    32,
      21,    21,   103,    17,    17,    17,   111,    17,    21,    21,
      37,    39,    98,    95,   100,   101,   111,   111,   102,    21,
     111,   102,     3,     7,     8,   112,    38,    20,    20,   100,
      18,    18,    21,    18,    18,    38,    13,    31,    33,    34,
      35,    36,    96,    97,    99,   111,   101,   101,   102,    19,
     101,    96,    21,    17,    17,    17,   111,    17,    96,    21,
      32,    21,    98,    98,   111,   111,   102,    21,   111,   101,
     102,    20,    18,    18,    21,    18,    18,   101,   101,   102,
      19,   101,    32,    21,    98,   101,   102,    20,    18,   101
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
#line 62 "parser.y"
    { display((yyvsp[(1) - (1)].ptr),0); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {(yyval.ptr)=mknode(3,FUNC_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {(yyval.ptr)=mknode(1,StructDec,yylineno,(yyvsp[(4) - (5)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (5)].ptr)->type_id);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    { (yyval.ptr)=mknode(0,StructDef,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (2)].type_id));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    { (yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {
                    (yyval.ptr)=mknode(0,TYPE,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));
                        if(strcmp((yyvsp[(1) - (1)].type_id),"int") == 0)
                          (yyval.ptr)->type=INT;
                        else if(strcmp((yyvsp[(1) - (1)].type_id),"float")==0)
                          (yyval.ptr)->type = FLOAT;
                        else if(strcmp((yyvsp[(1) - (1)].type_id),"char")==0)
                          (yyval.ptr)->type = CHAR;
                 ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {(yyval.ptr) = (yyvsp[(1) - (1)].ptr);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {(yyval.ptr)=mknode(2,EXT_DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {(yyval.ptr)=mknode(1,ArrayDef,yylineno,(yyvsp[(1) - (4)].ptr));(yyval.ptr)->arrlen=(yyvsp[(3) - (4)].type_int);strcpy((yyval.ptr)->type_id,"ArrayDef");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {(yyval.ptr)=mknode(0,Pointer,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (2)].type_id));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));(yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 120 "parser.y"
    {(yyval.ptr)=mknode(2,CaseStmtList,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval.ptr)=mknode(3,CaseList,yylineno,(yyvsp[(2) - (5)].ptr),(yyvsp[(4) - (5)].ptr),(yyvsp[(5) - (5)].ptr));strcpy((yyval.ptr)->type_id,"CASE");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {(yyval.ptr)=mknode(1,DEFAULT,yylineno,(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DEFAULT");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {(yyval.ptr)=mknode(0,CONTINUE,yylineno);strcpy((yyval.ptr)->type_id,"CONTINUE");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"AND");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"OR");;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"PLUS");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"MINUS");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"STAR");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DIV");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"STAR");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"ADDR");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"NOT");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(1) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {(yyval.ptr)=mknode(0,SelfPlusL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {(yyval.ptr)=mknode(0,SelfPlusR,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {(yyval.ptr)=mknode(0,SelfDecL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {(yyval.ptr)=mknode(0,SelfDecR,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {(yyval.ptr)=mknode(2,ArrayUse,yylineno,(yyvsp[(1) - (4)].type_id),(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {(yyval.ptr)=mknode(1,StructVal,yylineno,(yyvsp[(1) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(3) - (3)].type_id));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;



/* Line 1455 of yacc.c  */
#line 2597 "parser.tab.c"
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
#line 218 "parser.y"


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

