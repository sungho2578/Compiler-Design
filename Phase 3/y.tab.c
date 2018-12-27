
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
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 8 "mini_l.y"

#define YY_NO_UNPUT
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <string.h>
#include <vector>
  void yyerror(const char* s);
  int yylex();
  extern int currLine;
  extern int currPos;
  extern char* yytext;
  extern char* progName;
  std::string newTemp();
  std::string newLabel();

  char empty[1] = "";

  std::map<std::string, int> variables;
  std::map<std::string, int> functions;
  std::vector<std::string> reservedWords = {"FUNCTION", "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
    "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", 
    "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET",
    "R_SQUARE_BRACKET", "COLON", "SEMICOLON", "COMMA", "ASSIGN", "function", "Ident", "beginparams", "endparams", "beginlocals", "endlocals", "integer", 
    "beginbody", "endbody", "beginloop", "endloop", "if", "endif", "foreach", "continue", "while", "else", "read", "do", "write"};


/* Line 189 of yacc.c  */
#line 101 "y.tab.c"

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
     IDENT = 258,
     NUMBER = 259,
     FUNCTION = 260,
     BEGIN_PARAMS = 261,
     END_PARAMS = 262,
     BEGIN_LOCALS = 263,
     END_LOCALS = 264,
     BEGIN_BODY = 265,
     END_BODY = 266,
     INTEGER = 267,
     ARRAY = 268,
     OF = 269,
     IF = 270,
     THEN = 271,
     ENDIF = 272,
     ELSE = 273,
     WHILE = 274,
     DO = 275,
     BEGINLOOP = 276,
     ENDLOOP = 277,
     CONTINUE = 278,
     READ = 279,
     WRITE = 280,
     L_PAREN = 281,
     R_PAREN = 282,
     L_SQUARE_BRACKET = 283,
     R_SQUARE_BRACKET = 284,
     COLON = 285,
     SEMICOLON = 286,
     COMMA = 287,
     TRUE = 288,
     FALSE = 289,
     RETURN = 290,
     FOREACH = 291,
     IN = 292,
     OR = 293,
     AND = 294,
     ASSIGN = 295,
     GTE = 296,
     LTE = 297,
     GT = 298,
     LT = 299,
     NEQ = 300,
     EQ = 301,
     MOD = 302,
     DIV = 303,
     MULT = 304,
     ADD = 305,
     SUB = 306,
     NOT = 307
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "mini_l.y"

  char* char_init;
  int num_init;
  struct E {
    char* place;
    char* code;
    bool array;
  } expr;

  struct S {
    char* code;
  } stat;
 


/* Line 214 of yacc.c  */
#line 205 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 217 "y.tab.c"

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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    20,    24,    33,    34,    38,
      40,    44,    48,    51,    55,    62,    68,    75,    83,    86,
      89,    91,    94,    95,    98,   103,   105,   107,   111,   113,
     117,   121,   122,   126,   128,   130,   134,   138,   142,   144,
     147,   149,   152,   156,   161,   166,   168,   172,   174,   178,
     181,   183,   187,   189,   191,   195,   197,   199,   201,   203,
     205,   207,   209,   211
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    -1,    55,    54,    -1,     5,    75,    31,
       6,    57,     7,     8,    57,     9,    10,    59,    11,    -1,
      58,    30,    12,    -1,    58,    30,    13,    28,     4,    29,
      14,    12,    -1,    -1,    56,    31,    57,    -1,    73,    -1,
      73,    32,    58,    -1,    60,    31,    59,    -1,    60,    31,
      -1,    62,    40,    64,    -1,    15,    68,    16,    59,    61,
      17,    -1,    19,    68,    21,    59,    22,    -1,    20,    21,
      59,    22,    19,    68,    -1,    36,    74,    37,    73,    21,
      59,    22,    -1,    24,    63,    -1,    25,    63,    -1,    23,
      -1,    35,    64,    -1,    -1,    18,    59,    -1,    73,    28,
      64,    29,    -1,    73,    -1,    62,    -1,    62,    32,    63,
      -1,    66,    -1,    66,    50,    64,    -1,    66,    51,    64,
      -1,    -1,    64,    32,    65,    -1,    64,    -1,    67,    -1,
      67,    49,    66,    -1,    67,    48,    66,    -1,    67,    47,
      66,    -1,    62,    -1,    51,    62,    -1,     4,    -1,    51,
       4,    -1,    26,    64,    27,    -1,    51,    26,    64,    27,
      -1,    73,    26,    65,    27,    -1,    69,    -1,    69,    38,
      68,    -1,    70,    -1,    70,    39,    69,    -1,    52,    71,
      -1,    71,    -1,    64,    72,    64,    -1,    33,    -1,    34,
      -1,    26,    68,    27,    -1,    46,    -1,    45,    -1,    44,
      -1,    43,    -1,    42,    -1,    41,    -1,     3,    -1,     3,
      -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    86,    90,   122,   177,   233,   237,   247,
     252,   264,   272,   280,   314,   347,   387,   417,   517,   530,
     543,   551,   563,   566,   571,   595,   620,   635,   652,   657,
     677,   700,   704,   716,   729,   734,   754,   774,   796,   820,
     852,   857,   865,   870,   882,   907,   912,   935,   940,   963,
     982,   988,  1009,  1015,  1021,  1027,  1033,  1039,  1045,  1051,
    1057,  1064,  1069,  1084
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "NUMBER", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "COLON",
  "SEMICOLON", "COMMA", "TRUE", "FALSE", "RETURN", "FOREACH", "IN", "OR",
  "AND", "ASSIGN", "GTE", "LTE", "GT", "LT", "NEQ", "EQ", "MOD", "DIV",
  "MULT", "ADD", "SUB", "NOT", "$accept", "Program", "Function",
  "Declaration", "Declarations", "Identifiers", "Statements", "Statement",
  "ElseStatement", "Var", "Vars", "Expression", "Expressions", "MultExp",
  "Term", "BoolExp", "RAExp", "RExp", "RExp1", "Comp", "Ident",
  "LocalIdent", "FunctionIdent", 0
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    62,    62,    63,    63,    64,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    73,    74,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,    12,     3,     8,     0,     3,     1,
       3,     3,     2,     3,     6,     5,     6,     7,     2,     2,
       1,     2,     0,     2,     4,     1,     1,     3,     1,     3,
       3,     0,     3,     1,     1,     3,     3,     3,     1,     2,
       1,     2,     3,     4,     4,     1,     3,     1,     3,     2,
       1,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     2,    63,     0,     1,     3,     0,     7,
      61,     0,     0,     0,     9,     7,     0,     0,     0,     8,
       7,     5,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,    25,     0,    40,     0,    52,    53,     0,     0,    38,
       0,    28,    34,     0,    45,    47,    50,    25,     0,     0,
      26,    18,    19,     0,    21,    62,     0,     4,    12,     0,
       0,     6,     0,     0,    41,     0,    39,    49,    60,    59,
      58,    57,    56,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,     0,    11,
      13,     0,    42,    54,     0,    51,    29,    30,    37,    36,
      35,    22,    46,    48,    33,     0,     0,     0,    27,     0,
      24,    43,     0,     0,    31,    44,    15,     0,     0,    23,
      14,    32,    16,     0,    17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    11,    12,    13,    38,    39,   123,    49,
      61,    50,   115,    51,    52,    53,    54,    55,    56,    84,
      57,    66,     5
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -55
static const yytype_int8 yypact[] =
{
      -1,    18,    10,    -1,   -55,    -7,   -55,   -55,    28,    34,
     -55,    20,    47,    36,    33,    34,    65,    35,    34,   -55,
      34,   -55,    50,   -55,    71,    78,    74,    54,   108,    72,
      73,    73,    67,   -55,    34,    34,    49,    87,    80,    61,
      53,    66,    84,   -55,    73,   -55,   -55,    13,     9,   -55,
     104,     7,   -20,    81,    64,    69,   -55,     5,    82,   108,
      77,   -55,   -55,    49,   -55,   -55,    68,   -55,   108,    49,
      49,   -55,    93,    85,   -55,    49,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,    49,    49,    49,    49,    49,    49,
     108,    73,    73,    49,   108,    92,    34,    88,    34,   -55,
     -55,    75,   -55,   -55,    89,   -55,   -55,   -55,   -55,   -55,
     -55,    99,   -55,   -55,    86,    94,   100,   107,   -55,   109,
     -55,   -55,   108,   112,    49,   -55,   -55,    73,   108,   -55,
     -55,   -55,   -55,   118,   -55
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   138,   -55,   -55,     3,   124,   -54,   -55,   -55,   -27,
     -32,   -14,    27,   -43,   -55,   -29,    60,   -55,   105,   -55,
      -9,   -55,   -55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    40,    58,    62,     1,    95,    14,    60,    60,    14,
       6,    14,    10,    43,    99,    73,    10,    74,    19,    41,
      76,     4,    64,    24,     8,    41,    41,    87,    88,    89,
      72,    93,    40,    70,     9,    44,   111,    10,    41,    75,
     116,    40,    45,    46,   108,   109,   110,    21,    22,    97,
      41,    15,    10,    43,    16,   100,   101,    85,    86,    41,
      47,   104,   112,    40,   118,    18,    17,    40,   129,    60,
     105,   106,   107,    20,   133,    63,    10,    43,    25,   114,
      26,    41,    27,    29,    28,    41,    42,    41,    59,   119,
      65,    67,    68,    69,    70,    40,    71,    90,   132,    44,
      47,    40,    91,    94,   120,    98,    45,    46,    92,    96,
     114,    10,   103,    41,   117,   102,   121,   122,   124,    41,
     102,   125,   126,    30,    47,    48,   127,    31,    32,   130,
     128,    33,    34,    35,    78,    79,    80,    81,    82,    83,
     134,     7,    23,    36,    37,    78,    79,    80,    81,    82,
      83,   131,   113,    77
};

static const yytype_uint8 yycheck[] =
{
       9,    28,    31,    35,     5,    59,    15,    34,    35,    18,
       0,    20,     3,     4,    68,    44,     3,     4,    15,    28,
      47,     3,    36,    20,    31,    34,    35,    47,    48,    49,
      44,    26,    59,    28,     6,    26,    90,     3,    47,    26,
      94,    68,    33,    34,    87,    88,    89,    12,    13,    63,
      59,    31,     3,     4,     7,    69,    70,    50,    51,    68,
      51,    75,    91,    90,    96,    32,    30,    94,   122,    96,
      84,    85,    86,     8,   128,    26,     3,     4,    28,    93,
       9,    90,     4,    29,    10,    94,    14,    96,    21,    98,
       3,    11,    31,    40,    28,   122,    12,    16,   127,    26,
      51,   128,    38,    21,    29,    37,    33,    34,    39,    32,
     124,     3,    27,   122,    22,    27,    27,    18,    32,   128,
      27,    27,    22,    15,    51,    52,    19,    19,    20,    17,
      21,    23,    24,    25,    41,    42,    43,    44,    45,    46,
      22,     3,    18,    35,    36,    41,    42,    43,    44,    45,
      46,   124,    92,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    54,    55,     3,    75,     0,    54,    31,     6,
       3,    56,    57,    58,    73,    31,     7,    30,    32,    57,
       8,    12,    13,    58,    57,    28,     9,     4,    10,    29,
      15,    19,    20,    23,    24,    25,    35,    36,    59,    60,
      62,    73,    14,     4,    26,    33,    34,    51,    52,    62,
      64,    66,    67,    68,    69,    70,    71,    73,    68,    21,
      62,    63,    63,    26,    64,     3,    74,    11,    31,    40,
      28,    12,    64,    68,     4,    26,    62,    71,    41,    42,
      43,    44,    45,    46,    72,    50,    51,    47,    48,    49,
      16,    38,    39,    26,    21,    59,    32,    64,    37,    59,
      64,    64,    27,    27,    64,    64,    64,    64,    66,    66,
      66,    59,    68,    69,    64,    65,    59,    22,    63,    73,
      29,    27,    18,    61,    32,    27,    22,    19,    21,    59,
      17,    65,    68,    59,    22
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 72 "mini_l.y"
    {
  std::string tempMain = "main";
  if ( functions.find(tempMain) == functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Function main not declared");
    yyerror(temp);
  }
  // Check if user declared variable the same as program name
  if (variables.find(std::string(progName)) != variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Declared program name as variable.");
    yyerror(temp);
  }
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 87 "mini_l.y"
    {
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 91 "mini_l.y"
    {
  std::string temp = "func ";
  temp.append((yyvsp[(2) - (12)].expr).place);
  temp.append("\n");
  temp.append((yyvsp[(2) - (12)].expr).code);
  temp.append((yyvsp[(5) - (12)].expr).code);
  // Parameter initalization
  std::string init_params = (yyvsp[(5) - (12)].expr).code;
  int param_number = 0;
  while (init_params.find(".") != std::string::npos) {
    size_t pos = init_params.find(".");
    init_params.replace(pos, 1, "=");
    std::string param = ", $";
    param.append(std::to_string(param_number++));
    param.append("\n");
    init_params.replace(init_params.find("\n", pos), 1, param);
  }
  temp.append(init_params);
  temp.append((yyvsp[(8) - (12)].expr).code);
  std::string statements((yyvsp[(11) - (12)].stat).code);
  // Check if there are any leftover continues (test 09)
  if (statements.find("continue") != std::string::npos) {
    printf("ERROR: Continue outside loop in function %s\n", (yyvsp[(2) - (12)].expr).place);
  }
  temp.append(statements);
  temp.append("endfunc\n");
  
  printf("%s", temp.c_str());
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 123 "mini_l.y"
    {
  std::string vars((yyvsp[(1) - (3)].expr).place);
  std::string temp;
  std::string variable;
  bool cont = true;

  // Build list of declarations base on list of identifiers
  // identifiers use "|" as delimeter
  size_t oldpos = 0;
  size_t pos = 0;
  bool isReserved = false;
  while (cont) {
    pos = vars.find("|", oldpos);
    if (pos == std::string::npos) {
      temp.append(". ");
      variable = vars.substr(oldpos,pos);
      temp.append(variable);
      temp.append("\n");
      cont = false;
    }
    else {
      size_t len = pos - oldpos;
      temp.append(". ");
      variable = vars.substr(oldpos, len);
      temp.append(variable);
      temp.append("\n");
    }
    //check for reserved keywords (test 05)
    for (unsigned int i = 0; i < reservedWords.size(); ++i) {
      if (reservedWords.at(i) == variable) {
        isReserved = true;
      }
    } 
    // Check for redeclaration (test 04) TODO same name as program
    if (variables.find(variable) != variables.end()) {
      char temp[128];
      snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
      yyerror(temp);
    }
    else if (isReserved){
      char temp[128];
      snprintf(temp, 128, "Invalid declaration of reserved words %s", variable.c_str());
      yyerror(temp);
    }
    else {
      variables.insert(std::pair<std::string,int>(variable,0));
    }
    
    oldpos = pos + 1;
  }
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);	      
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 178 "mini_l.y"
    {
  // Check if declaring arrays of size <= 0 (test 08)
  if ((yyvsp[(5) - (8)].num_init) <= 0) {
    char temp[128];
    snprintf(temp, 128, "Array size can't be less than 1");
    yyerror(temp);
  }
  
  std::string vars((yyvsp[(1) - (8)].expr).place);
  std::string temp;
  std::string variable;
  bool cont = true;

  // Build list of declarations base on list of identifiers
  // identifiers use "|" as delimeter
  size_t oldpos = 0;
  size_t pos = 0;
  while (cont) {
    pos = vars.find("|", oldpos);
    if (pos == std::string::npos) {
      temp.append(".[] ");
      variable = vars.substr(oldpos, pos);
      temp.append(variable);
      temp.append(", ");
      temp.append(std::to_string((yyvsp[(5) - (8)].num_init)));
      temp.append("\n");
      cont = false;
    }
    else {
      size_t len = pos - oldpos;
      temp.append(".[] ");
      variable = vars.substr(oldpos, len);
      temp.append(variable);
      temp.append(", ");
      temp.append(std::to_string((yyvsp[(5) - (8)].num_init)));
      temp.append("\n");
    }
    // Check for redeclaraion (test 04)
    if (variables.find(variable) != variables.end()) {
      char temp[128];
      snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
      yyerror(temp);
    }
    else {
      variables.insert(std::pair<std::string,int>(variable,(yyvsp[(5) - (8)].num_init)));
    }
      
    oldpos = pos + 1;
  }
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);	      
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 233 "mini_l.y"
    {
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 238 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 248 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 253 "mini_l.y"
    {
  // use "|" as delimeter
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append("|");
  temp.append((yyvsp[(3) - (3)].expr).place);
  
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 265 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (3)].stat).code);
  temp.append((yyvsp[(3) - (3)].stat).code);

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 273 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (2)].stat).code);

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 281 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  std::string intermediate = (yyvsp[(3) - (3)].expr).place;
  if ((yyvsp[(1) - (3)].expr).array && (yyvsp[(3) - (3)].expr).array) {
    intermediate = newTemp();
    temp.append(". ");
    temp.append(intermediate);
    temp.append("\n");
    temp.append("=[] ");
    temp.append(intermediate);
    temp.append(", ");
    temp.append((yyvsp[(3) - (3)].expr).place);
    temp.append("\n");
    temp.append("[]= ");
  }
  else if ((yyvsp[(1) - (3)].expr).array) {
    temp.append("[]= ");
  }
  else if ((yyvsp[(3) - (3)].expr).array) {
    temp.append("=[] ");
  }
  else {
    temp.append("= ");
  }
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append(intermediate);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 315 "mini_l.y"
    {
  std::string then_begin = newLabel();
  std::string after = newLabel();
  std::string temp;

  // evaluate expression
  temp.append((yyvsp[(2) - (6)].expr).code);
  // if true goto then label
  temp.append("?:= ");
  temp.append(then_begin);
  temp.append(", ");
  temp.append((yyvsp[(2) - (6)].expr).place);
  temp.append("\n");
  // else code
  temp.append((yyvsp[(5) - (6)].stat).code);
  // goto after
  temp.append(":= ");
  temp.append(after);
  temp.append("\n");
  // then label
  temp.append(": ");
  temp.append(then_begin);
  temp.append("\n");
  // then code
  temp.append((yyvsp[(4) - (6)].stat).code);
  // after label
  temp.append(": ");
  temp.append(after);
  temp.append("\n");
  
  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 348 "mini_l.y"
    {
  std::string temp;
  std::string beginWhile = newLabel();
  std::string beginLoop = newLabel();
  std::string endLoop = newLabel();
  // replace continue
  std::string statement = (yyvsp[(4) - (5)].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(beginWhile);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }
  
  temp.append(": ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append((yyvsp[(2) - (5)].expr).code);
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append((yyvsp[(2) - (5)].expr).place);
  temp.append("\n");
  temp.append(":= ");
  temp.append(endLoop);
  temp.append("\n");
  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  temp.append(statement);
  temp.append(":= ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append(": ");
  temp.append(endLoop);
  temp.append("\n");

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 388 "mini_l.y"
    {
  std::string temp;
  std::string beginLoop = newLabel();
  std::string beginWhile = newLabel();
  // replace continue
  std::string statement = (yyvsp[(3) - (6)].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(beginWhile);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }
  
  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  temp.append(statement);
  temp.append(": ");
  temp.append(beginWhile);
  temp.append("\n");
  temp.append((yyvsp[(6) - (6)].expr).code);
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append((yyvsp[(6) - (6)].expr).place);
  temp.append("\n");
  
  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 418 "mini_l.y"
    {
  std::string temp;
  std::string count = newTemp();
  std::string check = newTemp();
  std::string begin = newLabel();
  std::string beginLoop = newLabel();
  std::string increment = newLabel();
  std::string endLoop = newLabel();
  // replace continue
  std::string statement = (yyvsp[(6) - (7)].stat).code;
  std::string jump;
  jump.append(":= ");
  jump.append(increment);
  while (statement.find("continue") != std::string::npos) {
    statement.replace(statement.find("continue"), 8, jump);
  }
  // Checks for second ident
  if (variables.find(std::string((yyvsp[(4) - (7)].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[(4) - (7)].expr).place);
    yyerror(temp);
  }
  // Check if second ident is scalar
  else if (variables.find(std::string((yyvsp[(4) - (7)].expr).place))->second == 0) {
    char temp[128];
    snprintf(temp, 128, "Use of scalar variable %s in foreach", (yyvsp[(4) - (7)].expr).place);
    yyerror(temp);
  }
  // checks for LocalIdent happen in LocalIdent (redeclaration test)

  // Initalize first ident and check
  temp.append(". ");
  temp.append((yyvsp[(2) - (7)].expr).place);
  temp.append("\n");
  temp.append(". ");
  temp.append(check);
  temp.append("\n");
  temp.append(". ");
  temp.append(count);
  temp.append("\n");
  temp.append("= ");
  temp.append(count);
  temp.append(", 0");
  temp.append("\n");
  // Check if count is less than size of array
  temp.append(": ");
  temp.append(begin);
  temp.append("\n");
  temp.append("< ");
  temp.append(check);
  temp.append(", ");
  temp.append(count);
  temp.append(", ");
  temp.append(std::to_string(variables.find(std::string((yyvsp[(4) - (7)].expr).place))->second));
  temp.append("\n");
  // Jump to begin loop if check is true
  temp.append("?:= ");
  temp.append(beginLoop);
  temp.append(", ");
  temp.append(check);
  temp.append("\n");
  // Jump to end loop if check is false
  temp.append(":= ");
  temp.append(endLoop);
  temp.append("\n");
  // Begin loop
  temp.append(": ");
  temp.append(beginLoop);
  temp.append("\n");
  // Set first ident to value of second ident
  temp.append("=[] ");
  temp.append((yyvsp[(2) - (7)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(4) - (7)].expr).place);
  temp.append(", ");
  temp.append(count);
  temp.append("\n");
  // Execute code
  temp.append(statement);
  // Increment
  temp.append(": ");
  temp.append(increment);
  temp.append("\n");
  temp.append("+ ");
  temp.append(count);
  temp.append(", ");
  temp.append(count);
  temp.append(", 1\n");
  // Jump to check
  temp.append(":= ");
  temp.append(begin);
  temp.append("\n");
  // label endLoop
  temp.append(": ");
  temp.append(endLoop);
  temp.append("\n");
  
  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 518 "mini_l.y"
    {
  std::string temp = (yyvsp[(2) - (2)].expr).code;
  size_t pos = 0;
  do {
    pos = temp.find("|", pos);
    if (pos == std::string::npos)
      break;
    temp.replace(pos, 1, "<");
  } while (true);

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 531 "mini_l.y"
    {
  std::string temp = (yyvsp[(2) - (2)].expr).code;
  size_t pos = 0;
  do {
    pos = temp.find("|", pos);
    if (pos == std::string::npos)
      break;
    temp.replace(pos, 1, ">");
  } while (true);

  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 544 "mini_l.y"
    {
  // insert continue on a new line
  // search for continue in loop
  // and replace with := loop check
  std::string temp = "continue\n";
  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 552 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(2) - (2)].expr).code);
  temp.append("ret ");
  temp.append((yyvsp[(2) - (2)].expr).place);
  temp.append("\n");
  (yyval.stat).code = strdup(temp.c_str());
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 563 "mini_l.y"
    {
  (yyval.stat).code = strdup(empty);
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 567 "mini_l.y"
    {
  (yyval.stat).code = strdup((yyvsp[(2) - (2)].stat).code);
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 572 "mini_l.y"
    {
  // Check for use of undeclared variable (test 01)
  if (variables.find(std::string((yyvsp[(1) - (4)].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[(1) - (4)].expr).place);
    yyerror(temp);
  }
  // Check for use of single value as array (test 07)
  else if (variables.find(std::string((yyvsp[(1) - (4)].expr).place))->second == 0) {
    char temp[128];
    snprintf(temp, 128, "Indexing a non-array variable %s", (yyvsp[(1) - (4)].expr).place);
    yyerror(temp);
  }

  std::string temp;
  temp.append((yyvsp[(1) - (4)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (4)].expr).place);

  (yyval.expr).code = strdup((yyvsp[(3) - (4)].expr).code);
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).array = true;
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 596 "mini_l.y"
    {
  // Check for use of undeclared variable (test 01)
  if (variables.find(std::string((yyvsp[(1) - (1)].expr).place)) == variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared variable %s", (yyvsp[(1) - (1)].expr).place);
    yyerror(temp);
  }
  // Check for use of array as single value (test 06)
  else if (variables.find(std::string((yyvsp[(1) - (1)].expr).place))->second > 0) {
    char temp[128];
    snprintf(temp, 128, "Failed to provide index for array variable %s", (yyvsp[(1) - (1)].expr).place);
    yyerror(temp);
  }

  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  (yyval.expr).array = false;
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 621 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (1)].expr).code);
  if ((yyvsp[(1) - (1)].expr).array)
    temp.append(".[]| ");
  else
    temp.append(".| ");
  
  temp.append((yyvsp[(1) - (1)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 636 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  if ((yyvsp[(1) - (3)].expr).array)
    temp.append(".[]| ");
  else
    temp.append(".| ");
  
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append("\n");
  temp.append((yyvsp[(3) - (3)].expr).code);
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 653 "mini_l.y"
    {
  (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 658 "mini_l.y"
    {
  (yyval.expr).place = strdup(newTemp().c_str());
  
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("+ ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 678 "mini_l.y"
    {
  (yyval.expr).place = strdup(newTemp().c_str());
  
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("- ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 700 "mini_l.y"
    {
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 705 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append("param ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append("\n");
  temp.append((yyvsp[(3) - (3)].expr).code);

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 717 "mini_l.y"
    {
  std::string temp;
  temp.append((yyvsp[(1) - (1)].expr).code);
  temp.append("param ");
  temp.append((yyvsp[(1) - (1)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(empty);
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 730 "mini_l.y"
    {
  (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 735 "mini_l.y"
    {
  (yyval.expr).place = strdup(newTemp().c_str());
  
  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append("* ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 755 "mini_l.y"
    {
  (yyval.expr).place = strdup(newTemp().c_str());
  
  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append("/ ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 775 "mini_l.y"
    {
  (yyval.expr).place = strdup(newTemp().c_str());
  
  std::string temp;
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append("% ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");

  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 797 "mini_l.y"
    {
  // var can be an array or not
  if ((yyval.expr).array == true) {
    std::string temp;
    std::string intermediate = newTemp();
    temp.append((yyvsp[(1) - (1)].expr).code);
    temp.append(". ");
    temp.append(intermediate);
    temp.append("\n");
    temp.append("=[] ");
    temp.append(intermediate);
    temp.append(", ");
    temp.append((yyvsp[(1) - (1)].expr).place);
    temp.append("\n");
    (yyval.expr).code = strdup(temp.c_str());
    (yyval.expr).place = strdup(intermediate.c_str());
    (yyval.expr).array = false;
  }
  else {
    (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
    (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 821 "mini_l.y"
    {
  // Var can either be an array or not an array
  (yyval.expr).place = strdup(newTemp().c_str());
  std::string temp;
  temp.append((yyvsp[(2) - (2)].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  if ((yyvsp[(2) - (2)].expr).array) {
    temp.append("=[] ");
    temp.append((yyval.expr).place);
    temp.append(", ");
    temp.append((yyvsp[(2) - (2)].expr).place);
    temp.append("\n");
  }
  else {
    temp.append("= ");
    temp.append((yyval.expr).place);
    temp.append(", ");
    temp.append((yyvsp[(2) - (2)].expr).place);
    temp.append("\n");
  }
  temp.append("* ");
  temp.append((yyval.expr).place);
  temp.append(", ");
  temp.append((yyval.expr).place);
  temp.append(", -1\n");
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).array = false;
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 853 "mini_l.y"
    {
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(std::to_string((yyvsp[(1) - (1)].num_init)).c_str());
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 858 "mini_l.y"
    {
  std::string temp;
  temp.append("-");
  temp.append(std::to_string((yyvsp[(2) - (2)].num_init)));
  (yyval.expr).code = strdup(empty);
  (yyval.expr).place = strdup(temp.c_str());
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 866 "mini_l.y"
    {
  (yyval.expr).code = strdup((yyvsp[(2) - (3)].expr).code);
  (yyval.expr).place = strdup((yyvsp[(2) - (3)].expr).place);
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 871 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(3) - (4)].expr).place);
  std::string temp;
  temp.append((yyvsp[(3) - (4)].expr).code);
  temp.append("* ");
  temp.append((yyvsp[(3) - (4)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (4)].expr).place);
  temp.append(", -1\n");
  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 883 "mini_l.y"
    {
   // Check for use of undeclared function (test 2)
  if (functions.find(std::string((yyvsp[(1) - (4)].expr).place)) == functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Use of undeclared function %s", (yyvsp[(1) - (4)].expr).place);
    yyerror(temp);
  }

  (yyval.expr).place = strdup(newTemp().c_str());

  std::string temp;
  temp.append((yyvsp[(3) - (4)].expr).code);
  temp.append(". ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  temp.append("call ");
  temp.append((yyvsp[(1) - (4)].expr).place);
  temp.append(", ");
  temp.append((yyval.expr).place);
  temp.append("\n");
  
  (yyval.expr).code = strdup(temp.c_str());
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 908 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 913 "mini_l.y"
    {
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");
  
  temp.append("|| ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 936 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 941 "mini_l.y"
    {
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");
  
  temp.append("&& ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 964 "mini_l.y"
    {
  std::string dest = newTemp();
  std::string temp;

  temp.append((yyvsp[(2) - (2)].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");
  
  temp.append("! ");
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[(2) - (2)].expr).place);
  temp.append("\n");
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 983 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].expr).place);
  (yyval.expr).code = strdup((yyvsp[(1) - (1)].expr).code);
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 989 "mini_l.y"
    {
  std::string dest = newTemp();
  std::string temp;  

  temp.append((yyvsp[(1) - (3)].expr).code);
  temp.append((yyvsp[(3) - (3)].expr).code);
  temp.append(". ");
  temp.append(dest);
  temp.append("\n");
  temp.append((yyvsp[(2) - (3)].expr).place);
  temp.append(dest);
  temp.append(", ");
  temp.append((yyvsp[(1) - (3)].expr).place);
  temp.append(", ");
  temp.append((yyvsp[(3) - (3)].expr).place);
  temp.append("\n");
  
  (yyval.expr).code = strdup(temp.c_str());
  (yyval.expr).place = strdup(dest.c_str());
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1010 "mini_l.y"
    {
  char temp[2] = "1";
  (yyval.expr).place = strdup(temp);
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1016 "mini_l.y"
    {
  char temp[2] = "0";
  (yyval.expr).place = strdup(temp);
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1022 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(2) - (3)].expr).place);
  (yyval.expr).code = strdup((yyvsp[(2) - (3)].expr).code);
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1028 "mini_l.y"
    {
  std::string temp = "== ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1034 "mini_l.y"
    {
  std::string temp = "!= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1040 "mini_l.y"
    {
  std::string temp = "< ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1046 "mini_l.y"
    {
  std::string temp = "> ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1052 "mini_l.y"
    {
  std::string temp = "<= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1058 "mini_l.y"
    {
  std::string temp = ">= ";
  (yyval.expr).place = strdup(temp.c_str());
  (yyval.expr).code = strdup(empty);
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1065 "mini_l.y"
    {
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].char_init));
  (yyval.expr).code = strdup(empty);;
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1070 "mini_l.y"
    {
  // Check for redeclaration (test 04) TODO same name as program
  std::string variable((yyvsp[(1) - (1)].char_init));
  if (variables.find(variable) != variables.end()) {
    char temp[128];
    snprintf(temp, 128, "Redeclaration of variable %s", variable.c_str());
    yyerror(temp);
  }
  else {
    variables.insert(std::pair<std::string,int>(variable,0));
  }
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].char_init));
  (yyval.expr).code = strdup(empty);;
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1085 "mini_l.y"
    {
  if (functions.find(std::string((yyvsp[(1) - (1)].char_init))) != functions.end()) {
    char temp[128];
    snprintf(temp, 128, "Redeclaration of function %s", (yyvsp[(1) - (1)].char_init));
    yyerror(temp);
  }
  else {
    functions.insert(std::pair<std::string,int>((yyvsp[(1) - (1)].char_init),0));
  }
  (yyval.expr).place = strdup((yyvsp[(1) - (1)].char_init));
  (yyval.expr).code = strdup(empty);;
;}
    break;



/* Line 1455 of yacc.c  */
#line 2839 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
		      yytoken, &yylval);
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
#line 1097 "mini_l.y"


void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, currLine, currPos);
   exit(1);
}

std::string newTemp() {
  static int num = 0;
  std::string temp = "_t" + std::to_string(num++);
  return temp;
}

std::string newLabel() {
  static int num = 0;
  std::string temp = 'L' + std::to_string(num++);
  return temp;
}
		 

 

