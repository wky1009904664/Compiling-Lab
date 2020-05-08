
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
     ArrayDef = 298,
     ArrayUse = 299,
     StructDec = 300,
     StructDef = 301,
     StructVal = 302,
     EXT_DEF_LIST = 303,
     EXT_VAR_DEF = 304,
     FUNC_DEF = 305,
     FUNC_DEC = 306,
     EXT_DEC_LIST = 307,
     PARAM_LIST = 308,
     PARAM_DEC = 309,
     VAR_DEF = 310,
     DEC_LIST = 311,
     DEF_LIST = 312,
     COMP_STM = 313,
     STM_LIST = 314,
     EXP_STMT = 315,
     IF_THEN = 316,
     IF_THEN_ELSE = 317,
     FUNC_CALL = 318,
     ARGS = 319,
     FUNCTION = 320,
     PARAM = 321,
     ARG = 322,
     CALL = 323,
     LABEL = 324,
     GOTO = 325,
     JLT = 326,
     JLE = 327,
     JGT = 328,
     JGE = 329,
     EQ = 330,
     NEQ = 331,
     UMINUS = 332,
     LOWER_THEN_ELSE = 333
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
#line 210 "parser.tab.c"
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
#line 235 "parser.tab.c"

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
#define YYLAST   889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  244

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

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
      75,    76,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    13,    17,    20,    23,
      29,    32,    34,    35,    37,    39,    41,    45,    47,    52,
      57,    61,    63,    67,    70,    75,    76,    79,    82,    84,
      88,    94,   102,   108,   118,   126,   127,   130,   133,   135,
     139,   145,   153,   159,   169,   177,   180,   186,   190,   191,
     196,   197,   200,   203,   205,   209,   215,   223,   229,   239,
     247,   250,   253,   255,   256,   257,   260,   263,   267,   269,
     273,   275,   279,   280,   283,   286,   290,   292,   296,   298,
     302,   306,   310,   314,   318,   322,   326,   330,   334,   337,
     340,   343,   346,   351,   355,   357,   359,   361,   363,   365,
     367,   369,   371,   376,   380,   382,   384,   386,   390
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      80,     0,    -1,    81,    -1,    -1,    82,    81,    -1,    85,
      86,    21,    -1,    85,    88,    91,    -1,    83,    21,    -1,
       1,    21,    -1,    15,    84,    19,   105,    20,    -1,    15,
       4,    -1,     4,    -1,    -1,     6,    -1,    83,    -1,    87,
      -1,    87,    22,    86,    -1,     4,    -1,    87,    40,     3,
      41,    -1,     4,    17,    89,    18,    -1,     4,    17,    18,
      -1,    90,    -1,    90,    22,    89,    -1,    85,    87,    -1,
      19,   101,    92,    20,    -1,    -1,    93,    92,    -1,   109,
      21,    -1,    91,    -1,    35,   109,    21,    -1,    31,    17,
     109,    18,    93,    -1,    31,    17,   109,    18,    93,    32,
      93,    -1,    33,    17,   109,    18,    99,    -1,    34,    17,
     100,    21,   100,    21,   100,    18,    99,    -1,    36,    17,
     109,    18,    19,    96,    20,    -1,    -1,    95,    94,    -1,
     109,    21,    -1,    97,    -1,    35,   109,    21,    -1,    31,
      17,   109,    18,    99,    -1,    31,    17,   109,    18,    99,
      32,    99,    -1,    33,    17,   109,    18,    99,    -1,    34,
      17,   100,    21,   100,    21,   100,    18,    99,    -1,    36,
      17,   109,    18,    19,    96,    20,    -1,    13,    21,    -1,
      37,   110,    38,    94,    96,    -1,    39,    38,    94,    -1,
      -1,    19,   101,    98,    20,    -1,    -1,    99,    98,    -1,
     109,    21,    -1,    97,    -1,    35,   109,    21,    -1,    31,
      17,   109,    18,    99,    -1,    31,    17,   109,    18,    99,
      32,    99,    -1,    33,    17,   109,    18,    99,    -1,    34,
      17,   100,    21,   100,    21,   100,    18,    99,    -1,    36,
      17,   109,    18,    19,    96,    20,    -1,    14,    21,    -1,
      13,    21,    -1,   111,    -1,    -1,    -1,   102,   101,    -1,
       1,    21,    -1,    85,   103,    21,    -1,   104,    -1,   104,
      22,   103,    -1,    87,    -1,    87,    27,   109,    -1,    -1,
     106,   105,    -1,     1,    21,    -1,    85,   107,    21,    -1,
     108,    -1,   108,    22,   107,    -1,    87,    -1,   109,    27,
     109,    -1,   109,    28,   109,    -1,   109,    29,   109,    -1,
     109,     5,   109,    -1,   109,    23,   109,    -1,   109,    24,
     109,    -1,   109,    25,   109,    -1,   109,    26,   109,    -1,
      17,   109,    18,    -1,    24,   109,    -1,    30,   109,    -1,
      16,   109,    -1,   109,    16,    -1,     4,    17,   111,    18,
      -1,     4,    17,    18,    -1,     4,    -1,     3,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,     4,    40,   109,    41,    -1,   109,    42,     4,    -1,
       3,    -1,     7,    -1,     8,    -1,   109,    22,   111,    -1,
     109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    64,    65,    67,    68,    69,    70,    72,
      73,    74,    75,    76,    85,    87,    88,    90,    91,    93,
      94,    97,    98,   100,   103,   105,   106,   108,   109,   110,
     111,   112,   113,   114,   115,   118,   119,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   132,   133,   134,   136,
     138,   139,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   153,   154,   156,   157,   158,   160,   162,   163,
     165,   166,   169,   170,   171,   173,   175,   176,   178,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   207,   208,   209,   211,   212
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
  "LB", "RB", "DOT", "ArrayDef", "ArrayUse", "StructDec", "StructDef",
  "StructVal", "EXT_DEF_LIST", "EXT_VAR_DEF", "FUNC_DEF", "FUNC_DEC",
  "EXT_DEC_LIST", "PARAM_LIST", "PARAM_DEC", "VAR_DEF", "DEC_LIST",
  "DEF_LIST", "COMP_STM", "STM_LIST", "EXP_STMT", "IF_THEN",
  "IF_THEN_ELSE", "FUNC_CALL", "ARGS", "FUNCTION", "PARAM", "ARG", "CALL",
  "LABEL", "GOTO", "JLT", "JLE", "JGT", "JGE", "EQ", "NEQ", "UMINUS",
  "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList", "ExtDef",
  "StructSpecifier", "StructName", "Specifier", "ExtDecList", "VarDec",
  "FuncDec", "VarList", "ParamDec", "CompSt", "StmList", "Stmt",
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
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    81,    82,    82,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    97,
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   102,   103,   103,
     104,   104,   105,   105,   105,   106,   107,   107,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     3,     2,     2,     5,
       2,     1,     0,     1,     1,     1,     3,     1,     4,     4,
       3,     1,     3,     2,     4,     0,     2,     2,     1,     3,
       5,     7,     5,     9,     7,     0,     2,     2,     1,     3,
       5,     7,     5,     9,     7,     2,     5,     3,     0,     4,
       0,     2,     2,     1,     3,     5,     7,     5,     9,     7,
       2,     2,     1,     0,     0,     2,     2,     3,     1,     3,
       1,     3,     0,     2,     2,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,    12,     0,     2,     0,    14,     0,     8,
      10,     0,     1,     4,     7,    17,     0,    15,     0,     0,
       0,     5,     0,     0,     0,     6,     0,    14,     0,     0,
       0,    20,     0,     0,    21,    17,    16,     0,     0,     0,
      25,     0,    74,    78,     0,    76,     9,    73,    23,    19,
       0,    18,    66,    70,     0,    68,    95,    94,    96,    97,
      98,    99,   100,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,    25,     0,    65,    75,     0,
      22,     0,    67,     0,     0,     0,    90,     0,    88,    89,
       0,     0,    63,     0,     0,    24,    26,     0,    91,    27,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    71,
      69,    93,   108,     0,     0,    87,     0,     0,     0,    62,
      29,     0,    82,    83,    84,    85,    86,    79,    80,    81,
     103,     0,    92,   102,     0,     0,    63,     0,   107,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    32,
       0,     0,    48,     0,    61,    60,    50,     0,     0,    63,
       0,     0,    52,    63,     0,     0,     0,    31,     0,    50,
       0,     0,     0,    54,     0,     0,   104,   105,   106,     0,
      35,    34,    49,    51,     0,     0,    63,     0,     0,    35,
       0,     0,     0,     0,     0,     0,    47,    35,    38,     0,
      55,    57,     0,    48,    33,    48,    45,     0,     0,    63,
       0,     0,    36,    37,     0,    63,     0,    46,     0,     0,
       0,    39,     0,    56,     0,    59,     0,     0,    63,     0,
       0,    40,    42,     0,    48,    58,     0,    63,     0,    41,
       0,    44,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,    27,    11,    39,    16,    17,    18,
      33,    34,    73,    74,    75,   196,   197,   166,   148,   168,
     169,   118,    40,    41,    54,    55,    29,    30,    44,    45,
     150,   179,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -199
static const yytype_int16 yypact[] =
{
      84,    -6,  -199,    33,    42,  -199,    84,    22,    45,  -199,
      40,    54,  -199,  -199,  -199,    70,    81,    48,    89,    80,
      86,  -199,   105,   109,   699,  -199,    95,  -199,   105,   107,
      80,  -199,   105,   113,   110,  -199,  -199,    92,   114,   105,
     801,   663,  -199,    96,   116,   117,  -199,  -199,    96,  -199,
      32,  -199,  -199,    31,   120,   121,  -199,   -11,  -199,  -199,
    -199,  -199,  -199,  -199,   859,   859,   859,   859,   127,   128,
     131,   859,   133,  -199,   118,   801,   137,  -199,  -199,   105,
    -199,   859,  -199,   105,   835,   859,     4,   167,     4,     4,
     859,   859,   859,   194,   859,  -199,  -199,   859,  -199,  -199,
     859,   859,   859,   859,   859,   859,   859,   147,  -199,   596,
    -199,  -199,   219,   134,   244,  -199,   271,   296,   138,  -199,
    -199,   321,   -12,    -8,    -8,     4,     4,   611,    51,   626,
    -199,   859,  -199,  -199,   801,   733,   859,   136,  -199,   141,
     149,   153,   663,   159,   160,   161,   859,   163,  -199,  -199,
     346,   165,    85,   801,  -199,  -199,   733,   859,   859,   859,
     371,   859,  -199,   859,   122,   143,   162,  -199,   164,   733,
     396,   421,   166,  -199,   446,   171,  -199,  -199,  -199,   168,
     767,  -199,  -199,  -199,   733,   733,   859,   179,   733,   767,
     180,   183,   185,   186,   859,   187,  -199,   767,  -199,   471,
     173,  -199,   190,    85,  -199,    85,  -199,   859,   859,   859,
     496,   859,  -199,  -199,   733,   859,   188,  -199,   521,   546,
     191,  -199,   571,  -199,   189,  -199,   733,   733,   859,   195,
     733,   181,  -199,   204,    85,  -199,   733,   859,   196,  -199,
     208,  -199,   733,  -199
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,   221,  -199,    10,  -199,     3,   206,     0,  -199,
     182,  -199,   211,   155,  -113,   -82,  -199,  -198,  -100,    62,
    -116,   -81,   -39,  -199,   150,  -199,   207,  -199,   172,  -199,
     -40,  -199,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      76,   113,    77,     8,    98,   216,    84,   217,    98,     8,
       7,   100,   101,   102,   103,     9,     7,   102,   103,   149,
      98,   139,    28,    32,    86,    87,    88,    89,    43,    85,
     107,    93,    48,    28,   107,    76,   238,    10,     2,    53,
     167,   109,    12,    14,   112,   114,   107,     3,   138,    15,
     116,   117,   112,    32,   121,   151,    97,   122,    81,   -11,
     123,   124,   125,   126,   127,   128,   129,    98,   200,   201,
      22,    23,   204,    19,   100,   101,   102,   103,   172,    43,
     198,    26,   175,    53,    -3,     1,     2,    20,    23,   198,
       2,   112,     2,   107,    76,     3,   112,   198,   223,     3,
     -72,     3,    21,   156,    31,   202,   160,   205,    24,    35,
     231,   232,    37,    76,   235,   212,    42,   170,   171,   112,
     239,   174,   164,   112,   165,   176,   243,    46,   220,   177,
     178,    49,    50,    51,   224,    52,    23,    78,    95,    79,
     199,    82,    97,    83,    90,    91,   112,   233,    92,   199,
      94,   130,   132,    98,   210,   152,   240,   199,    99,   136,
     100,   101,   102,   103,   104,   105,   106,   218,   219,   112,
     154,   222,    97,   153,   155,   112,   157,   158,   159,   107,
     161,   180,   181,    98,   182,   115,   163,   186,   112,   188,
     100,   101,   102,   103,   104,   105,   106,   112,   203,    97,
     207,   206,   208,   209,   211,   214,   189,   230,   225,   107,
      98,   215,   228,   236,   234,   120,   241,   100,   101,   102,
     103,   104,   105,   106,    97,   237,   242,    13,    36,    25,
      96,   183,    80,   110,     0,    98,   107,    47,     0,     0,
       0,   131,   100,   101,   102,   103,   104,   105,   106,    97,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
      98,   107,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   107,    98,     0,   134,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,   135,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,   137,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,     0,     0,     0,   162,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,     0,
       0,     0,   173,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,   184,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,   185,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,   187,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,     0,
       0,     0,   213,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,     0,     0,     0,   221,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,   226,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,   227,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   106,    97,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,   107,   229,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,    97,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,   107,     0,     0,    97,     0,     0,   100,
     101,   102,   103,   104,   105,   106,     0,    98,     0,     0,
       0,    97,     0,     0,   100,   101,   102,   103,   107,   105,
     106,     0,    98,     0,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   107,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,   -64,   -64,   107,     2,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     3,   -64,
     -64,     0,   -64,   -64,     0,     0,     0,   -64,     0,     0,
       0,     0,     0,   -64,   -64,     0,   -64,   -64,   -64,   -64,
      38,     0,   -64,   -64,     0,     2,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     3,   -64,   -64,     0,   -64,   -64,
       0,     0,     0,   -64,     0,     0,     0,     0,     0,   -64,
     -64,     0,   -64,   -64,   -64,   -64,    56,    57,     0,     0,
      58,    59,    60,    61,    62,    63,   140,   141,     0,    64,
      65,     0,   142,     0,     0,     0,     0,    66,     0,     0,
       0,     0,     0,    67,   143,     0,   144,   145,   146,   147,
      56,    57,     0,     0,    58,    59,    60,    61,    62,    63,
     190,     0,     0,    64,    65,     0,   142,     0,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    67,   191,     0,
     192,   193,   194,   195,    56,    57,     0,     0,    58,    59,
      60,    61,    62,    63,     0,     0,     0,    64,    65,     0,
      24,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,    67,    68,     0,    69,    70,    71,    72,    56,    57,
       0,     0,    58,    59,    60,    61,    62,    63,     0,     0,
       0,    64,    65,   111,     0,     0,     0,     0,     0,    66,
       0,     0,    56,    57,     0,    67,    58,    59,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,    67
};

static const yytype_int16 yycheck[] =
{
      40,    84,    41,     0,    16,   203,    17,   205,    16,     6,
       0,    23,    24,    25,    26,    21,     6,    25,    26,   135,
      16,   134,    19,    20,    64,    65,    66,    67,    28,    40,
      42,    71,    32,    30,    42,    75,   234,     4,     6,    39,
     153,    81,     0,    21,    84,    85,    42,    15,   131,     4,
      90,    91,    92,    50,    94,   136,     5,    97,    27,    19,
     100,   101,   102,   103,   104,   105,   106,    16,   184,   185,
      22,    40,   188,    19,    23,    24,    25,    26,   159,    79,
     180,     1,   163,    83,     0,     1,     6,    17,    40,   189,
       6,   131,     6,    42,   134,    15,   136,   197,   214,    15,
      20,    15,    21,   142,    18,   186,   146,   189,    19,     4,
     226,   227,     3,   153,   230,   197,    21,   157,   158,   159,
     236,   161,    37,   163,    39,     3,   242,    20,   209,     7,
       8,    18,    22,    41,   215,    21,    40,    21,    20,    22,
     180,    21,     5,    22,    17,    17,   186,   228,    17,   189,
      17,     4,    18,    16,   194,    19,   237,   197,    21,    21,
      23,    24,    25,    26,    27,    28,    29,   207,   208,   209,
      21,   211,     5,    32,    21,   215,    17,    17,    17,    42,
      17,    38,    20,    16,    20,    18,    21,    21,   228,    18,
      23,    24,    25,    26,    27,    28,    29,   237,    19,     5,
      17,    21,    17,    17,    17,    32,    38,    18,    20,    42,
      16,    21,    21,    32,    19,    21,    20,    23,    24,    25,
      26,    27,    28,    29,     5,    21,    18,     6,    22,    18,
      75,   169,    50,    83,    -1,    16,    42,    30,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,     5,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    42,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    16,    -1,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    -1,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    -1,
      -1,    -1,    21,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    -1,    -1,    -1,    21,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    18,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    42,    18,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    42,    -1,    -1,     5,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    -1,    16,    -1,    -1,
      -1,     5,    -1,    -1,    23,    24,    25,    26,    42,    28,
      29,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    42,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,    42,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,    36,
       1,    -1,     3,     4,    -1,     6,     7,     8,     9,    10,
      11,    12,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    34,    35,    36,     3,     4,    -1,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    35,    36,
       3,     4,    -1,    -1,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    16,    17,    -1,    19,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    34,    35,    36,     3,     4,    -1,    -1,     7,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    36,     3,     4,
      -1,    -1,     7,     8,     9,    10,    11,    12,    -1,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,     3,     4,    -1,    30,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     6,    15,    80,    81,    82,    83,    85,    21,
       4,    84,     0,    81,    21,     4,    86,    87,    88,    19,
      17,    21,    22,    40,    19,    91,     1,    83,    85,   105,
     106,    18,    85,    89,    90,     4,    86,     3,     1,    85,
     101,   102,    21,    87,   107,   108,    20,   105,    87,    18,
      22,    41,    21,    87,   103,   104,     3,     4,     7,     8,
       9,    10,    11,    12,    16,    17,    24,    30,    31,    33,
      34,    35,    36,    91,    92,    93,   109,   101,    21,    22,
      89,    27,    21,    22,    17,    40,   109,   109,   109,   109,
      17,    17,    17,   109,    17,    20,    92,     5,    16,    21,
      23,    24,    25,    26,    27,    28,    29,    42,   107,   109,
     103,    18,   109,   111,   109,    18,   109,   109,   100,   111,
      21,   109,   109,   109,   109,   109,   109,   109,   109,   109,
       4,    22,    18,    41,    18,    18,    21,    18,   111,    93,
      13,    14,    19,    31,    33,    34,    35,    36,    97,    99,
     109,   100,    19,    32,    21,    21,   101,    17,    17,    17,
     109,    17,    21,    21,    37,    39,    96,    93,    98,    99,
     109,   109,   100,    21,   109,   100,     3,     7,     8,   110,
      38,    20,    20,    98,    18,    18,    21,    18,    18,    38,
      13,    31,    33,    34,    35,    36,    94,    95,    97,   109,
      99,    99,   100,    19,    99,    94,    21,    17,    17,    17,
     109,    17,    94,    21,    32,    21,    96,    96,   109,   109,
     100,    21,   109,    99,   100,    20,    18,    18,    21,    18,
      18,    99,    99,   100,    19,    99,    32,    21,    96,    99,
     100,    20,    18,    99
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
#line 93 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_DEC,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_DEC,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));(yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {(yyval.ptr)=mknode(1,PARAM_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {(yyval.ptr)=mknode(2,PARAM_DEC,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {(yyval.ptr)=mknode(2,CaseStmtList,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {(yyval.ptr)=mknode(3,CaseList,yylineno,(yyvsp[(2) - (5)].ptr),(yyvsp[(4) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval.ptr)=mknode(1,DEFAULT,yylineno,(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DEFAULT");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 136 "parser.y"
    {(yyval.ptr)=mknode(2,COMP_STM,yylineno,(yyvsp[(2) - (4)].ptr),(yyvsp[(3) - (4)].ptr));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {(yyval.ptr)=mknode(2,STM_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {(yyval.ptr)=mknode(1,EXP_STMT,yylineno,(yyvsp[(1) - (2)].ptr));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {(yyval.ptr)=mknode(1,RETURN,yylineno,(yyvsp[(2) - (3)].ptr));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {(yyval.ptr)=mknode(2,IF_THEN,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {(yyval.ptr)=mknode(3,IF_THEN_ELSE,yylineno,(yyvsp[(3) - (7)].ptr),(yyvsp[(5) - (7)].ptr),(yyvsp[(7) - (7)].ptr));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {(yyval.ptr)=mknode(2,WHILE,yylineno,(yyvsp[(3) - (5)].ptr),(yyvsp[(5) - (5)].ptr));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    {(yyval.ptr)=mknode(4,FOR,yylineno,(yyvsp[(3) - (9)].ptr),(yyvsp[(5) - (9)].ptr),(yyvsp[(7) - (9)].ptr),(yyvsp[(9) - (9)].ptr));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {(yyval.ptr)=mknode(1,SWITCH,yylineno,(yyvsp[(6) - (7)].ptr));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {(yyval.ptr)=mknode(0,CONTINUE,yylineno);strcpy((yyval.ptr)->type_id,"CONTINUE");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {(yyval.ptr)=mknode(0,BREAK,yylineno);strcpy((yyval.ptr)->type_id,"BREAK");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {(yyval.ptr)=NULL;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 165 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    {(yyval.ptr)=NULL; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {(yyval.ptr)=mknode(2,DEF_LIST,yylineno,(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].ptr));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {(yyval.ptr)=NULL;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {(yyval.ptr)=mknode(2,VAR_DEF,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(2) - (3)].ptr));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {(yyval.ptr)=mknode(1,DEC_LIST,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {(yyval.ptr)=mknode(2,DEC_LIST,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {(yyval.ptr)=(yyvsp[(1) - (1)].ptr);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {(yyval.ptr)=mknode(2,ASSIGNOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"ASSIGNOP");;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {(yyval.ptr)=mknode(2,AND,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"AND");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {(yyval.ptr)=mknode(2,OR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"OR");;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {(yyval.ptr)=mknode(2,RELOP,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(2) - (3)].type_id));;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    {(yyval.ptr)=mknode(2,PLUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"PLUS");;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {(yyval.ptr)=mknode(2,MINUS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"MINUS");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {(yyval.ptr)=mknode(2,STAR,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"STAR");;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {(yyval.ptr)=mknode(2,DIV,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id,"DIV");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {(yyval.ptr)=(yyvsp[(2) - (3)].ptr);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    {(yyval.ptr)=mknode(1,UMINUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"UMINUS");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {(yyval.ptr)=mknode(1,NOT,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"NOT");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(2) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {(yyval.ptr)=mknode(1,DPLUS,yylineno,(yyvsp[(1) - (2)].ptr));strcpy((yyval.ptr)->type_id,"DPLUS");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {(yyval.ptr)=mknode(1,FUNC_CALL,yylineno,(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {(yyval.ptr)=mknode(0,FUNC_CALL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (3)].type_id));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {(yyval.ptr)=mknode(0,ID,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {(yyval.ptr)=mknode(0,SelfPlusL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 201 "parser.y"
    {(yyval.ptr)=mknode(0,SelfPlusR,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {(yyval.ptr)=mknode(0,SelfDecL,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {(yyval.ptr)=mknode(0,SelfDecR,yylineno);strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (1)].type_id));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {(yyval.ptr)=mknode(2,ArrayUse,yylineno,(yyvsp[(1) - (4)].type_id),(yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(1) - (4)].type_id));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {(yyval.ptr)=mknode(1,StructVal,yylineno,(yyvsp[(1) - (3)].ptr));strcpy((yyval.ptr)->type_id,(yyvsp[(3) - (3)].type_id));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 207 "parser.y"
    {(yyval.ptr)=mknode(0,INT,yylineno);(yyval.ptr)->type_int=(yyvsp[(1) - (1)].type_int);(yyval.ptr)->type=INT;;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {(yyval.ptr)=mknode(0,FLOAT,yylineno);(yyval.ptr)->type_float=(yyvsp[(1) - (1)].type_float);(yyval.ptr)->type=FLOAT;;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    {(yyval.ptr)=mknode(0,CHAR,yylineno);(yyval.ptr)->type_char=(yyvsp[(1) - (1)].type_char);(yyval.ptr)->type=CHAR;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {(yyval.ptr)=mknode(2,ARGS,yylineno,(yyvsp[(1) - (3)].ptr),(yyvsp[(3) - (3)].ptr));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {(yyval.ptr)=mknode(1,ARGS,yylineno,(yyvsp[(1) - (1)].ptr));;}
    break;



/* Line 1455 of yacc.c  */
#line 2562 "parser.tab.c"
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
#line 215 "parser.y"


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

