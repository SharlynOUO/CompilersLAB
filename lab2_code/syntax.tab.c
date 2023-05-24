/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Ident = 258,
     VOID = 259,
     INT = 260,
     CONST = 261,
     IF = 262,
     ELSE = 263,
     WHILE = 264,
     BREAK = 265,
     CONTINUE = 266,
     RETURN = 267,
     LPAREN = 268,
     RPAREN = 269,
     LBRACE = 270,
     RBRACE = 271,
     LSQUBRAKT = 272,
     RSQUBRAKT = 273,
     SEMICOLON = 274,
     COMMA = 275,
     IntConst = 276,
     EQ = 277,
     GRAEQ = 278,
     LESEQ = 279,
     NEQ = 280,
     GRA = 281,
     LES = 282,
     PLUS = 283,
     MINUS = 284,
     MUL = 285,
     DIV = 286,
     MOD = 287,
     AND = 288,
     OR = 289,
     NOT = 290,
     ASSIGN = 291,
     PLUSASSIGN = 292,
     MINUSASSIGN = 293,
     MULASSIGN = 294,
     DIVASSIGN = 295
   };
#endif
/* Tokens.  */
#define Ident 258
#define VOID 259
#define INT 260
#define CONST 261
#define IF 262
#define ELSE 263
#define WHILE 264
#define BREAK 265
#define CONTINUE 266
#define RETURN 267
#define LPAREN 268
#define RPAREN 269
#define LBRACE 270
#define RBRACE 271
#define LSQUBRAKT 272
#define RSQUBRAKT 273
#define SEMICOLON 274
#define COMMA 275
#define IntConst 276
#define EQ 277
#define GRAEQ 278
#define LESEQ 279
#define NEQ 280
#define GRA 281
#define LES 282
#define PLUS 283
#define MINUS 284
#define MUL 285
#define DIV 286
#define MOD 287
#define AND 288
#define OR 289
#define NOT 290
#define ASSIGN 291
#define PLUSASSIGN 292
#define MINUSASSIGN 293
#define MULASSIGN 294
#define DIVASSIGN 295




/* Copy the first part of user declarations.  */
#line 1 "syntax.y"



#include "tree.h"



int yylex(void);

int yyerror(char* msg);

TreeNode* tree_root;
int nodesNum;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "syntax.y"
{
  int yint;
  TreeNode* ynode;
}
/* Line 193 of yacc.c.  */
#line 197 "syntax.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 210 "syntax.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    31,    35,    36,    41,    46,    47,    49,
      54,    58,    59,    64,    68,    69,    72,    77,    79,    82,
      87,    91,    92,    99,   106,   112,   118,   121,   125,   126,
     129,   135,   140,   141,   144,   148,   149,   153,   156,   157,
     159,   161,   166,   169,   171,   179,   185,   191,   194,   197,
     201,   204,   206,   208,   210,   212,   215,   219,   221,   223,
     225,   230,   234,   237,   239,   243,   247,   251,   253,   257,
     261,   263,   267,   271,   275,   279,   281,   285,   289,   291,
     295,   297,   301
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    42,    45,    -1,    42,    57,    -1,    45,
      -1,    57,    -1,    21,    -1,    28,    -1,    29,    -1,    35,
      -1,    46,    -1,    52,    -1,     6,     5,    48,    47,    19,
      -1,    47,    20,    48,    -1,    -1,     3,    49,    36,    50,
      -1,    49,    17,    80,    18,    -1,    -1,    80,    -1,    15,
      50,    51,    16,    -1,    51,    20,    50,    -1,    -1,     5,
      54,    53,    19,    -1,    53,    20,    54,    -1,    -1,     3,
      49,    -1,     3,    49,    36,    55,    -1,    69,    -1,    15,
      16,    -1,    15,    55,    56,    16,    -1,    56,    20,    55,
      -1,    -1,     5,     3,    13,    58,    14,    64,    -1,     4,
       3,    13,    58,    14,    64,    -1,     5,     3,    13,    14,
      64,    -1,     4,     3,    13,    14,    64,    -1,    60,    59,
      -1,    59,    20,    60,    -1,    -1,     5,     3,    -1,     5,
       3,    17,    18,    61,    -1,    61,    17,    69,    18,    -1,
      -1,    69,    63,    -1,    63,    20,    69,    -1,    -1,    15,
      65,    16,    -1,    65,    66,    -1,    -1,    45,    -1,    67,
      -1,    71,    36,    69,    19,    -1,    69,    19,    -1,    64,
      -1,     7,    13,    70,    14,    67,     8,    67,    -1,     7,
      13,    70,    14,    67,    -1,     9,    13,    70,    14,    67,
      -1,    10,    19,    -1,    11,    19,    -1,    12,    69,    19,
      -1,    12,    19,    -1,    68,    -1,    19,    -1,    75,    -1,
      79,    -1,     3,    61,    -1,    13,    69,    14,    -1,    71,
      -1,    43,    -1,    72,    -1,     3,    13,    62,    14,    -1,
       3,    13,    14,    -1,    44,    73,    -1,    73,    -1,    74,
      30,    73,    -1,    74,    31,    73,    -1,    74,    32,    73,
      -1,    74,    -1,    75,    28,    74,    -1,    75,    29,    74,
      -1,    75,    -1,    76,    27,    75,    -1,    76,    26,    75,
      -1,    76,    24,    75,    -1,    76,    23,    75,    -1,    76,
      -1,    77,    22,    76,    -1,    77,    25,    76,    -1,    77,
      -1,    78,    33,    77,    -1,    78,    -1,    79,    34,    78,
      -1,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    78,    79,    84,    88,    89,    90,
      94,    98,   106,   116,   122,   125,   134,   141,   145,   149,
     157,   162,   167,   178,   184,   188,   192,   202,   206,   211,
     220,   226,   235,   243,   252,   259,   269,   276,   281,   287,
     291,   301,   307,   313,   319,   324,   331,   338,   342,   348,
     351,   357,   365,   370,   374,   385,   394,   403,   409,   414,
     420,   425,   430,   439,   446,   452,   460,   466,   470,   476,
     480,   488,   495,   503,   507,   513,   519,   527,   531,   537,
     545,   549,   555,   561,   567,   575,   579,   585,   592,   596,
     604,   608,   616
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Ident", "VOID", "INT", "CONST", "IF",
  "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", "LPAREN", "RPAREN",
  "LBRACE", "RBRACE", "LSQUBRAKT", "RSQUBRAKT", "SEMICOLON", "COMMA",
  "IntConst", "EQ", "GRAEQ", "LESEQ", "NEQ", "GRA", "LES", "PLUS", "MINUS",
  "MUL", "DIV", "MOD", "AND", "OR", "NOT", "ASSIGN", "PLUSASSIGN",
  "MINUSASSIGN", "MULASSIGN", "DIVASSIGN", "$accept", "CompUnit", "Number",
  "UnaryOp", "Decl", "ConstDecl", "MutiConstDecl", "ConstDef", "ArrDimDef",
  "ConstInitVal", "ConstArrInitVal", "VarDecl", "MutiVarDecl", "VarDef",
  "InitVal", "ArrInitVal", "FuncDef", "FuncFParams", "MutiFParams",
  "FuncFParam", "ArrParam", "FuncRParams", "MutiRParams", "Block",
  "MutiBI", "BlockItem", "Stmt", "BlankStmt", "Exp", "Cond", "LVal",
  "PrimaryExp", "UnaryExp", "MulExp", "AddExp", "RelExp", "EqExp",
  "LAndExp", "LOrExp", "ConstExp", 0
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    43,    44,    44,    44,
      45,    45,    46,    47,    47,    48,    49,    49,    50,    50,
      51,    51,    52,    53,    53,    54,    54,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    58,    59,    59,    60,
      60,    61,    61,    62,    63,    63,    64,    65,    65,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    68,    69,    70,    71,    72,    72,    72,    73,
      73,    73,    73,    74,    74,    74,    74,    75,    75,    75,
      76,    76,    76,    76,    76,    77,    77,    77,    78,    78,
      79,    79,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     0,     4,     4,     0,     1,     4,
       3,     0,     4,     3,     0,     2,     4,     1,     2,     4,
       3,     0,     6,     6,     5,     5,     2,     3,     0,     2,
       5,     4,     0,     2,     3,     0,     3,     2,     0,     1,
       1,     4,     2,     1,     7,     5,     5,     2,     2,     3,
       2,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       4,     3,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,    10,    11,     5,     0,
      17,    24,     0,     1,     2,     3,     0,     0,    25,     0,
      17,    14,     0,     0,     0,    38,     0,     0,     0,     0,
      22,     0,     0,     0,    39,    48,    35,     0,    36,    34,
       0,    42,     0,     6,     7,     8,     9,    68,     0,    67,
      69,    73,    77,    92,     0,     0,    26,    27,    63,    17,
      23,     0,    12,     0,     0,     0,    33,     0,    32,     0,
      65,     0,    72,     0,     0,     0,     0,     0,    16,    28,
      31,     0,    15,    18,    13,    42,     0,     0,     0,     0,
       0,     0,    46,    62,    49,    53,    47,    50,    61,     0,
      67,    37,    71,     0,    45,     0,    66,    74,    75,    76,
      78,    79,     0,    21,    40,     0,     0,    57,    58,    60,
       0,    52,     0,    70,    43,     0,    29,     0,     0,     0,
      80,    85,    88,    90,    64,     0,    59,     0,     0,    41,
      30,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    44,    20,    55,    84,    83,    82,
      81,    86,    87,    89,    91,    56,     0,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    47,    48,     5,     6,    33,    21,    18,    82,
     128,     7,    19,    11,    56,   112,     8,    24,    38,    25,
      70,   103,   124,    95,    65,    96,    97,    98,    99,   129,
      49,    50,    51,    52,    58,   131,   132,   133,   134,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
      97,    10,    34,     3,    43,  -115,  -115,  -115,  -115,    41,
      49,  -115,    53,  -115,  -115,  -115,     5,    36,   -11,    25,
    -115,  -115,    81,    71,    96,  -115,    71,    98,   168,   121,
    -115,    86,    -5,    60,   109,  -115,  -115,    71,    93,  -115,
      71,   116,   168,  -115,  -115,  -115,  -115,  -115,   168,  -115,
    -115,  -115,    75,    63,   113,   112,  -115,  -115,    63,  -115,
    -115,   140,  -115,    53,   114,    11,  -115,   125,  -115,   145,
     118,   123,  -115,   168,   168,   168,   168,   168,  -115,  -115,
    -115,   140,  -115,  -115,  -115,  -115,    86,   126,   131,   119,
     127,   157,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   132,
     128,  -115,  -115,   138,  -115,   168,  -115,  -115,  -115,  -115,
      75,    75,    -9,  -115,   118,   168,   168,  -115,  -115,  -115,
     135,  -115,   168,  -115,   137,   144,  -115,   121,    54,   149,
      63,    70,    50,   134,   111,   151,  -115,   153,   168,  -115,
    -115,  -115,   140,    48,   168,   168,   168,   168,   168,   168,
     168,   168,    48,  -115,  -115,  -115,   169,    63,    63,    63,
      63,    70,    70,    50,   134,  -115,    48,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,     0,  -115,  -115,   120,   159,   -76,
    -115,  -115,  -115,   156,   -54,  -115,   178,   167,  -115,   124,
     103,  -115,  -115,    45,  -115,  -115,  -114,  -115,   -27,    74,
     -62,  -115,   -39,    22,   -28,   -40,    44,    42,  -115,   170
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    80,    57,   100,    14,   113,    28,   126,    12,    72,
      22,   127,    28,     9,    41,    71,    86,     3,    87,    23,
      88,    89,    90,    91,    42,    29,    35,    92,    57,   156,
      93,    61,    43,    53,   107,   108,   109,    10,   165,    44,
      45,    22,   104,    13,    30,    31,    46,     1,     2,     3,
      26,    41,   167,    53,    16,    87,    20,    88,    89,    90,
      91,    42,    17,    35,   120,    94,   155,    93,    36,    43,
     141,    39,   148,   140,   142,   149,    44,    45,   125,    62,
      63,   100,    66,    46,    34,    68,    35,   130,   130,    59,
     100,    76,    77,   144,   145,   137,   146,   147,   110,   111,
      57,     1,     2,     3,   100,    73,    74,    75,   161,   162,
      37,   154,    40,    67,    53,    41,   157,   158,   159,   160,
     130,   130,   130,   130,    41,    42,    64,    55,    79,    69,
      22,    78,    85,    43,    42,   105,    55,   106,   117,   115,
      44,    45,    43,    41,   116,   151,   118,    46,    41,    44,
      45,   121,   123,    42,   136,    81,    46,   138,    42,   102,
      41,    43,   139,   143,   122,   152,    43,   150,    44,    45,
      42,    41,   153,    44,    45,    46,   119,   166,    43,    32,
      46,    42,    15,    84,    27,    44,    45,    60,   114,    43,
     135,   101,    46,   164,   163,     0,    44,    45,    54,     0,
       0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      28,    55,    29,    65,     4,    81,    17,    16,     5,    48,
       5,    20,    17,     3,     3,    42,     5,     6,     7,    14,
       9,    10,    11,    12,    13,    36,    15,    16,    55,   143,
      19,    36,    21,    61,    73,    74,    75,     3,   152,    28,
      29,     5,    69,     0,    19,    20,    35,     4,     5,     6,
      14,     3,   166,    81,    13,     7,     3,     9,    10,    11,
      12,    13,    13,    15,    91,    65,   142,    19,    23,    21,
      16,    26,    22,   127,    20,    25,    28,    29,   105,    19,
      20,   143,    37,    35,     3,    40,    15,   115,   116,     3,
     152,    28,    29,    23,    24,   122,    26,    27,    76,    77,
     127,     4,     5,     6,   166,    30,    31,    32,   148,   149,
      14,   138,    14,    20,   142,     3,   144,   145,   146,   147,
     148,   149,   150,   151,     3,    13,    17,    15,    16,    13,
       5,    18,    18,    21,    13,    17,    15,    14,    19,    13,
      28,    29,    21,     3,    13,    34,    19,    35,     3,    28,
      29,    19,    14,    13,    19,    15,    35,    20,    13,    14,
       3,    21,    18,    14,    36,    14,    21,    33,    28,    29,
      13,     3,    19,    28,    29,    35,    19,     8,    21,    20,
      35,    13,     4,    63,    17,    28,    29,    31,    85,    21,
     116,    67,    35,   151,   150,    -1,    28,    29,    28,    -1,
      -1,    -1,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,    42,    45,    46,    52,    57,     3,
       3,    54,     5,     0,    45,    57,    13,    13,    49,    53,
       3,    48,     5,    14,    58,    60,    14,    58,    17,    36,
      19,    20,    49,    47,     3,    15,    64,    14,    59,    64,
      14,     3,    13,    21,    28,    29,    35,    43,    44,    71,
      72,    73,    74,    75,    80,    15,    55,    69,    75,     3,
      54,    36,    19,    20,    17,    65,    64,    20,    64,    13,
      61,    69,    73,    30,    31,    32,    28,    29,    18,    16,
      55,    15,    50,    80,    48,    18,     5,     7,     9,    10,
      11,    12,    16,    19,    45,    64,    66,    67,    68,    69,
      71,    60,    14,    62,    69,    17,    14,    73,    73,    73,
      74,    74,    56,    50,    61,    13,    13,    19,    19,    19,
      69,    19,    36,    14,    63,    69,    16,    20,    51,    70,
      75,    76,    77,    78,    79,    70,    19,    69,    20,    18,
      55,    16,    20,    14,    23,    24,    26,    27,    22,    25,
      33,    34,    14,    19,    69,    50,    67,    75,    75,    75,
      75,    76,    76,    77,    78,    67,     8,    67
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 76 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"CompUnit",0,0);tree_root=(yyval.ynode);AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));;}
    break;

  case 3:
#line 77 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"CompUnit",0,0);tree_root=(yyval.ynode);AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));;}
    break;

  case 4:
#line 78 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"CompUnit",0,0);tree_root=(yyval.ynode);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 5:
#line 79 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"CompUnit",0,0);tree_root=(yyval.ynode);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 6:
#line 84 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"Number",0,0);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 7:
#line 88 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"UnaryOp",0,0);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 8:
#line 89 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"UnaryOp",0,0);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 9:
#line 90 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"UnaryOp",0,0);AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));;}
    break;

  case 10:
#line 94 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"Decl",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 11:
#line 98 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"Decl",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 12:
#line 106 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"Decl",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));
;}
    break;

  case 13:
#line 116 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"MutiConstDecl",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 14:
#line 122 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"MutiConstDecl",0,0);AddChild((yyval.ynode),NULL);;}
    break;

  case 15:
#line 125 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"ConstDef",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 16:
#line 134 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"ArrDimDef",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 17:
#line 141 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"ArrDimDef",0,0);AddChild((yyval.ynode),NULL);;}
    break;

  case 18:
#line 145 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"ConstInitVal",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 19:
#line 149 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"ConstInitVal",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 20:
#line 157 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"ConstArrInitVal",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 21:
#line 162 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"ConstArrInitVal",0,0);AddChild((yyval.ynode),NULL);;}
    break;

  case 22:
#line 167 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"VarDecl",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 23:
#line 178 "syntax.y"
    { 
(yyval.ynode)=NewNode(&nodesNum,"MutiVarDecl",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 24:
#line 184 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"MutiVarDecl",0,0);AddChild((yyval.ynode),NULL);}
    break;

  case 25:
#line 188 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"VarDef",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 26:
#line 192 "syntax.y"
    {(yyval.ynode)=NewNode(&nodesNum,"VarDef",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));

;}
    break;

  case 27:
#line 202 "syntax.y"
    {  
(yyval.ynode)=NewNode(&nodesNum,"VarDef",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 28:
#line 206 "syntax.y"
    { 
  (yyval.ynode)=NewNode(&nodesNum,"VarDef",0,0);
  AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
  AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 29:
#line 211 "syntax.y"
    {  
  (yyval.ynode)=NewNode(&nodesNum,"VarDef",0,0);
  AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
  AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
  AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
  AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 30:
#line 220 "syntax.y"
    {  
(yyval.ynode)=NewNode(&nodesNum,"ArrInitVal",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 31:
#line 226 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"ArrInitVal",0,0);
AddChild((yyval.ynode),NULL);
;}
    break;

  case 32:
#line 235 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"FuncDef",0,0);
AddChild((yyval.ynode),(yyvsp[(6) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(5) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (6)].ynode));
;}
    break;

  case 33:
#line 243 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"FuncDef",0,0);
AddChild((yyval.ynode),(yyvsp[(6) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(5) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (6)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (6)].ynode));

;}
    break;

  case 34:
#line 252 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"FuncDef",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));
;}
    break;

  case 35:
#line 259 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"FuncDef",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));
;}
    break;

  case 36:
#line 269 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"FuncFParams",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 37:
#line 276 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"MutiFParams",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 38:
#line 281 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"MutiFParams",0,0);
AddChild((yyval.ynode),NULL);
;}
    break;

  case 39:
#line 287 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"FuncFParam",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 40:
#line 291 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"FuncFParam",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));
;}
    break;

  case 41:
#line 301 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"ArrParam",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));
;}
    break;

  case 42:
#line 307 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"ArrParam",0,0);
AddChild((yyval.ynode),NULL);
;}
    break;

  case 43:
#line 313 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"FuncRParams",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 44:
#line 319 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"MutiRParams",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 45:
#line 324 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"MutiRParams",0,0);
AddChild((yyval.ynode),NULL);
;}
    break;

  case 46:
#line 331 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"FuncRParams",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 47:
#line 338 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"MutiBlockItem",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 48:
#line 342 "syntax.y"
    {  (yyval.ynode)=NewNode(&nodesNum,"MutiBlockItem",0,0);
AddChild((yyval.ynode),NULL);

;}
    break;

  case 49:
#line 348 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"BlockItem",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 50:
#line 351 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"BlockItem",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 51:
#line 358 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));

;}
    break;

  case 52:
#line 366 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 53:
#line 371 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 54:
#line 375 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(7) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(6) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(5) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (7)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (7)].ynode));

;}
    break;

  case 55:
#line 386 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));

;}
    break;

  case 56:
#line 395 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(5) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(4) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (5)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (5)].ynode));

;}
    break;

  case 57:
#line 404 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));

;}
    break;

  case 58:
#line 410 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 59:
#line 415 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 60:
#line 421 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 61:
#line 425 "syntax.y"
    { (yyval.ynode)=NewNode(&nodesNum,"Stmt",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 62:
#line 430 "syntax.y"
    {
  (yyval.ynode)=NewNode(&nodesNum,"BlankStmt",0,0);
  AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 63:
#line 439 "syntax.y"
    {
  (yyval.ynode)=NewNode(&nodesNum,"Exp",0,0);
  AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 64:
#line 446 "syntax.y"
    {
  (yyval.ynode)=NewNode(&nodesNum,"Cond",0,0);
  AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 65:
#line 452 "syntax.y"
    {
  (yyval.ynode)=NewNode(&nodesNum,"LVal",0,0);
  AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
  AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));
;}
    break;

  case 66:
#line 460 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 67:
#line 466 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 68:
#line 470 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"PrimaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 69:
#line 476 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 70:
#line 480 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(4) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(3) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (4)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (4)].ynode));

;}
    break;

  case 71:
#line 488 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));

;}
    break;

  case 72:
#line 495 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"UnaryExp",0,0);
AddChild((yyval.ynode),(yyvsp[(2) - (2)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (2)].ynode));

;}
    break;

  case 73:
#line 503 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"MulExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 74:
#line 507 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"MulExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 75:
#line 513 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"MulExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 76:
#line 519 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"MulExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 77:
#line 527 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"AddExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 78:
#line 531 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"AddExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 79:
#line 537 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"AddExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 80:
#line 545 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"RelExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 81:
#line 549 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"RelExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 82:
#line 555 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"RelExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 83:
#line 561 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"RelExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 84:
#line 567 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"RelExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 85:
#line 575 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"EqExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 86:
#line 579 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"EqExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 87:
#line 585 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"EqExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 88:
#line 592 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"LAndExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 89:
#line 596 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"LAndExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 90:
#line 604 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"LOrExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;

  case 91:
#line 608 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"LOrExp",0,0);
AddChild((yyval.ynode),(yyvsp[(3) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(2) - (3)].ynode));
AddChild((yyval.ynode),(yyvsp[(1) - (3)].ynode));
;}
    break;

  case 92:
#line 616 "syntax.y"
    {
(yyval.ynode)=NewNode(&nodesNum,"ConstExp",0,0);
AddChild((yyval.ynode),(yyvsp[(1) - (1)].ynode));
;}
    break;


/* Line 1267 of yacc.c.  */
#line 2361 "syntax.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 624 "syntax.y"


int main(int argc, char** argv){

    FILE* outf;
    FILE* idxf;
    if (argc==2){
      outf=fopen(argv[0],"w");
      idxf=fopen(argv[1],"w");
    }

    tree_root = NULL;
    nodesNum = 1;//从1开始，0代表终结符的值
    
    
    yyparse();
    DrawAST(tree_root, outf, idxf);

    fclose(outf);
    fclose(idxf);
  
    return 0;
}

int yyerror(char* msg){
    printf("error: %s\n",msg);
    return 0;
}
