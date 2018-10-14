/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc_syntax.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yydebug;  // TODO: REMOVE IN PROD, 'yacc' it with -t flag.
extern int yylex();
char const *yyerror(const char *str);

/* Line 371 of yacc.c  */
#line 78 "yacc_syntax.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc_syntax.tab.h".  */
#ifndef YY_YY_YACC_SYNTAX_TAB_H_INCLUDED
# define YY_YY_YACC_SYNTAX_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IMPORT = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     BREAK = 262,
     RETURN = 263,
     ABSTRACT = 264,
     FINAL = 265,
     NEW = 266,
     TRUE = 267,
     FALSE = 268,
     IDENTIFIER = 269,
     INTEGER_LITERAL = 270,
     REAL_LITERAL = 271,
     CHAR_LITERAL = 272,
     STRING_LITERAL = 273,
     SEPARATOR = 274,
     PLUS_PLUS = 275,
     MINUS_MINUS = 276,
     SLASH_EQUALS = 277,
     LESS_LESS = 278,
     LESS_EQUALS = 279,
     EQUALS_GREATER = 280,
     GREATER_EQUALS = 281,
     GREATER_GREATER = 282,
     AMPERSAND = 283,
     ASTERISK = 284,
     PLUS = 285,
     LPAREN = 286,
     RPAREN = 287,
     COMMA = 288,
     MINUS = 289,
     DOT = 290,
     SLASH = 291,
     COLON = 292,
     LESS = 293,
     EQUALS = 294,
     GREATER = 295,
     LBRACKET = 296,
     BACKSLASH = 297,
     RBRACKET = 298,
     VERTICAL = 299,
     THIS = 300,
     SUPER = 301,
     STATIC = 302,
     OVERRIDE = 303,
     DO = 304,
     FOR = 305,
     LCURL = 306,
     RCURL = 307,
     NOT = 308,
     PRIVATE = 309,
     PROTECTED = 310,
     PUBLIC = 311,
     VOID = 312,
     CONTINUE = 313,
     MORE_MORE = 314,
     CLASS = 315,
     CATCH = 316,
     EXTENDS = 317,
     FINALLY = 318,
     IMPLEMENTS = 319,
     INTERFACE = 320,
     NULL_ = 321,
     PACKAGE = 322,
     THROW = 323,
     THROWS = 324,
     TILDA = 325,
     TRY = 326,
     NELSE = 327,
     AND_THEN = 328,
     OR = 329,
     CARET = 330,
     XOR = 331,
     AND = 332,
     LOWER_THAN_LPAREN = 333
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "yacc_syntax.y"

    int number;
    char *string;


/* Line 387 of yacc.c  */
#line 205 "yacc_syntax.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_YACC_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 233 "yacc_syntax.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1401

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  274
/* YYNRULES -- Number of states.  */
#define YYNSTATES  443

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
       0,     0,     3,     7,     8,    12,    13,    15,    18,    22,
      28,    29,    31,    34,    36,    38,    40,    47,    48,    50,
      53,    55,    57,    59,    61,    62,    65,    66,    69,    71,
      75,    79,    80,    82,    85,    87,    89,    91,    93,    95,
      98,   103,   104,   106,   109,   111,   113,   115,   120,   121,
     123,   126,   129,   130,   133,   135,   139,   144,   145,   150,
     155,   160,   161,   163,   166,   168,   170,   172,   174,   176,
     178,   182,   184,   188,   190,   194,   196,   198,   201,   206,
     208,   210,   211,   213,   216,   218,   220,   222,   224,   226,
     228,   233,   235,   237,   243,   244,   246,   249,   251,   253,
     256,   260,   264,   265,   267,   270,   272,   274,   278,   280,
     282,   284,   290,   291,   293,   296,   298,   300,   304,   305,
     307,   311,   313,   315,   317,   319,   323,   325,   329,   331,
     333,   335,   339,   343,   345,   347,   348,   350,   353,   356,
     358,   361,   363,   366,   368,   370,   372,   374,   380,   388,
     394,   401,   407,   412,   416,   421,   426,   430,   434,   437,
     443,   445,   447,   449,   451,   453,   455,   457,   459,   461,
     463,   465,   467,   469,   473,   476,   480,   483,   487,   490,
     494,   498,   503,   507,   509,   512,   518,   521,   527,   531,
     532,   534,   538,   540,   544,   548,   552,   556,   560,   564,
     568,   572,   576,   580,   584,   586,   590,   594,   598,   602,
     606,   610,   612,   615,   618,   621,   624,   627,   629,   633,
     637,   642,   645,   648,   652,   654,   657,   659,   661,   663,
     665,   667,   669,   672,   675,   677,   680,   683,   686,   689,
     692,   695,   700,   707,   714,   718,   722,   724,   726,   730,
     732,   734,   736,   738,   743,   745,   748,   752,   753,   756,
     760,   765,   770,   772,   776,   778,   780,   784,   786,   788,
     790,   792,   794,   796,   798
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      80,     0,    -1,    81,    82,    84,    -1,    -1,    67,   140,
      19,    -1,    -1,    83,    -1,    82,    83,    -1,     3,   137,
      19,    -1,     3,   140,    35,    29,    19,    -1,    -1,    85,
      -1,    84,    85,    -1,    86,    -1,   121,    -1,    19,    -1,
      87,    60,    14,    89,    90,    92,    -1,    -1,    88,    -1,
      87,    88,    -1,    56,    -1,    54,    -1,     9,    -1,    10,
      -1,    -1,    62,   138,    -1,    -1,    64,    91,    -1,   139,
      -1,    91,    33,   139,    -1,    51,    93,    52,    -1,    -1,
      94,    -1,    93,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,   107,    -1,   114,    -1,    47,   141,    -1,    98,   100,
     103,   105,    -1,    -1,    99,    -1,    98,    99,    -1,    56,
      -1,    55,    -1,    54,    -1,    14,    31,   101,    32,    -1,
      -1,   102,    -1,   101,   102,    -1,   135,   112,    -1,    -1,
      69,   104,    -1,   138,    -1,   104,    33,   138,    -1,    51,
     106,   143,    52,    -1,    -1,    45,    31,   166,    32,    -1,
      46,    31,   166,    32,    -1,   108,   135,   110,    19,    -1,
      -1,   109,    -1,   108,   109,    -1,    56,    -1,    55,    -1,
      54,    -1,    47,    -1,    10,    -1,   111,    -1,   110,    33,
     111,    -1,   112,    -1,   112,    39,   113,    -1,    14,    -1,
     112,    41,    43,    -1,   167,    -1,   133,    -1,   115,   120,
      -1,   117,   116,   119,   103,    -1,   135,    -1,    57,    -1,
      -1,   118,    -1,   117,   118,    -1,    56,    -1,    55,    -1,
      54,    -1,    47,    -1,     9,    -1,    10,    -1,    14,    31,
     101,    32,    -1,   141,    -1,    19,    -1,   122,    65,    14,
     124,   125,    -1,    -1,   123,    -1,   122,   123,    -1,    56,
      -1,     9,    -1,    62,   139,    -1,   124,    33,   139,    -1,
      51,   126,    52,    -1,    -1,   127,    -1,   126,   127,    -1,
     128,    -1,   130,    -1,   129,   135,   111,    -1,    56,    -1,
      47,    -1,    10,    -1,   131,   116,   119,   103,    19,    -1,
      -1,   132,    -1,   131,   132,    -1,    56,    -1,     9,    -1,
      51,   134,    52,    -1,    -1,   113,    -1,   134,    33,   113,
      -1,   167,    -1,   133,    -1,    14,    -1,   136,    -1,   135,
      41,    43,    -1,    14,    -1,   140,    35,    14,    -1,   137,
      -1,   137,    -1,    14,    -1,   140,    35,    14,    -1,    31,
     143,    32,    -1,   141,    -1,   154,    -1,    -1,   144,    -1,
     143,   144,    -1,   145,    19,    -1,   154,    -1,   135,   110,
      -1,    19,    -1,   148,    19,    -1,   165,    -1,   167,    -1,
     173,    -1,   164,    -1,     4,    31,   167,    32,   154,    -1,
       4,    31,   167,    32,   154,     5,   154,    -1,     6,    31,
     167,    32,   154,    -1,    49,   154,     6,    31,   167,    32,
      -1,   167,    19,   167,    19,   167,    -1,   167,    19,   167,
      19,    -1,   167,    19,    19,    -1,   167,    19,    19,   167,
      -1,    19,   167,    19,   167,    -1,    19,   167,    19,    -1,
      19,    19,   167,    -1,    19,    19,    -1,    50,    31,   152,
      32,   154,    -1,   155,    -1,   149,    -1,   150,    -1,   153,
      -1,   151,    -1,   141,    -1,   146,    -1,   147,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,     7,
      14,    19,    -1,     7,    19,    -1,    58,    14,    19,    -1,
      58,    19,    -1,     8,    14,    19,    -1,     8,    19,    -1,
      68,   167,    19,    -1,    71,   141,   161,    -1,    71,   141,
     161,   163,    -1,    71,   141,   163,    -1,   162,    -1,   161,
     162,    -1,    61,    31,   102,    32,   141,    -1,    63,   141,
      -1,    11,   138,    31,   166,    32,    -1,   171,   172,   167,
      -1,    -1,   167,    -1,   166,    33,   167,    -1,   168,    -1,
     167,    29,   167,    -1,   167,    36,   167,    -1,   167,    42,
     167,    -1,   167,    30,   167,    -1,   167,    34,   167,    -1,
     167,    23,   167,    -1,   167,    27,   167,    -1,   167,    38,
     167,    -1,   167,    24,   167,    -1,   167,    40,   167,    -1,
     167,    26,   167,    -1,   165,    -1,   167,    22,   167,    -1,
     167,    77,   167,    -1,   167,    28,   167,    -1,   167,    76,
     167,    -1,   167,    74,   167,    -1,   167,    44,   167,    -1,
     169,    -1,    53,   168,    -1,    30,   168,    -1,    34,   168,
      -1,    20,   168,    -1,    21,   168,    -1,   170,    -1,   169,
      35,   170,    -1,   169,    31,    32,    -1,   169,    31,   142,
      32,    -1,   169,    20,    -1,   169,    21,    -1,    31,   142,
      32,    -1,   183,    -1,    11,    14,    -1,    45,    -1,    46,
      -1,   180,    -1,   174,    -1,   179,    -1,    39,    -1,    29,
      39,    -1,    42,    39,    -1,    22,    -1,    30,    39,    -1,
      34,    39,    -1,    23,    39,    -1,    59,    39,    -1,    28,
      39,    -1,    44,    39,    -1,   181,    31,   166,    32,    -1,
     175,    35,    14,    31,   166,    32,    -1,    46,    35,    14,
      31,   166,    32,    -1,   175,    35,    14,    -1,    46,    35,
      14,    -1,   183,    -1,    45,    -1,    31,   167,    32,    -1,
     164,    -1,   174,    -1,   173,    -1,   179,    -1,    11,   135,
     176,   178,    -1,   177,    -1,   176,   176,    -1,    41,   167,
      43,    -1,    -1,    41,    43,    -1,   178,    41,    43,    -1,
     180,    41,   167,    43,    -1,   175,    41,   167,    43,    -1,
      14,    -1,   182,    35,    14,    -1,   180,    -1,    14,    -1,
     182,    35,    14,    -1,   184,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    66,    -1,    12,    -1,    13,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   120,   122,   125,   127,   128,   132,   133,
     135,   137,   138,   142,   143,   144,   148,   151,   153,   154,
     159,   159,   160,   161,   165,   167,   170,   172,   176,   177,
     181,   183,   185,   186,   190,   191,   192,   196,   197,   201,
     205,   208,   210,   211,   214,   214,   214,   218,   220,   222,
     223,   227,   230,   232,   236,   237,   241,   244,   246,   247,
     251,   254,   256,   257,   260,   260,   260,   260,   260,   264,
     265,   269,   270,   274,   275,   278,   279,   283,   287,   291,
     292,   295,   297,   298,   302,   302,   302,   302,   302,   302,
     306,   310,   311,   315,   318,   320,   321,   325,   326,   330,
     331,   335,   338,   340,   341,   345,   346,   350,   354,   354,
     354,   358,   361,   363,   364,   368,   368,   372,   375,   377,
     378,   382,   383,   389,   390,   394,   398,   399,   403,   408,
     412,   413,   421,   425,   426,   429,   431,   432,   436,   437,
     441,   445,   451,   455,   456,   457,   458,   462,   463,   466,
     470,   474,   475,   476,   477,   478,   479,   480,   481,   485,
     489,   490,   491,   492,   493,   497,   498,   499,   500,   501,
     502,   503,   504,   508,   509,   513,   514,   518,   519,   523,
     527,   528,   529,   533,   534,   538,   542,   549,   553,   556,
     558,   559,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   586,   587,   588,   589,   590,   591,   595,   596,   597,
     598,   599,   600,   604,   605,   606,   607,   608,   612,   613,
     614,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   643,   644,   645,   649,   650,   654,   655,   656,   657,
     658,   659,   660,   661,   665,   666,   670,   672,   674,   675,
     679,   680,   687,   687,   691,   695,   696,   701,   702,   703,
     704,   705,   706,   710,   711
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "IF", "ELSE", "WHILE", "BREAK",
  "RETURN", "ABSTRACT", "FINAL", "NEW", "TRUE", "FALSE", "IDENTIFIER",
  "INTEGER_LITERAL", "REAL_LITERAL", "CHAR_LITERAL", "STRING_LITERAL",
  "SEPARATOR", "PLUS_PLUS", "MINUS_MINUS", "SLASH_EQUALS", "LESS_LESS",
  "LESS_EQUALS", "EQUALS_GREATER", "GREATER_EQUALS", "GREATER_GREATER",
  "AMPERSAND", "ASTERISK", "PLUS", "LPAREN", "RPAREN", "COMMA", "MINUS",
  "DOT", "SLASH", "COLON", "LESS", "EQUALS", "GREATER", "LBRACKET",
  "BACKSLASH", "RBRACKET", "VERTICAL", "THIS", "SUPER", "STATIC",
  "OVERRIDE", "DO", "FOR", "LCURL", "RCURL", "NOT", "PRIVATE", "PROTECTED",
  "PUBLIC", "VOID", "CONTINUE", "MORE_MORE", "CLASS", "CATCH", "EXTENDS",
  "FINALLY", "IMPLEMENTS", "INTERFACE", "NULL_", "PACKAGE", "THROW",
  "THROWS", "TILDA", "TRY", "NELSE", "AND_THEN", "OR", "CARET", "XOR",
  "AND", "LOWER_THAN_LPAREN", "$accept", "CompilationUnit",
  "PackageDeclaration", "ImportDeclarations", "ImportDeclaration",
  "TypeDeclarations", "TypeDeclaration", "ClassDeclaration",
  "ClassModifiers", "ClassModifier", "Super", "Interfaces",
  "InterfaceTypeList", "ClassBody", "ClassBodyDeclarations",
  "ClassBodyDeclaration", "ClassMemberDeclaration", "StaticInitializer",
  "ConstructorDeclaration", "ConstructorModifiers", "ConstructorModifier",
  "ConstructorDeclarator", "FormalParameterList", "FormalParameter",
  "Throws", "ClassTypeList", "ConstructorBody",
  "ExplicitConstructorInvocation", "FieldDeclaration", "FieldModifiers",
  "FieldModifier", "VariableDeclarators", "VariableDeclarator",
  "VariableDeclaratorId", "VariableInitializer", "MethodDeclaration",
  "MethodHeader", "ResultType", "MethodModifiers", "MethodModifier",
  "MethodDeclarator", "MethodBody", "InterfaceDeclaration",
  "InterfaceModifiers", "InterfaceModifier", "ExtendsInterfaces",
  "InterfaceBody", "InterfaceMemberDeclarations",
  "InterfaceMemberDeclaration", "ConstantDeclaration", "ConstantModifiers",
  "AbstractMethodDeclaration", "AbstractMethodModifiers",
  "AbstractMethodModifier", "ArrayInitializer", "VariableInitializers",
  "Type", "ArrayType", "TypeName", "ClassType", "InterfaceType",
  "PackageName", "Block", "BlockOrStatement", "BlockStatements",
  "BlockStatement", "LocalVariableDeclaration", "EmptyStatement",
  "ExpressionStatement", "StatementExpression", "IfElseStatement",
  "WhileStatement", "DoWhileStatement", "ForCondition", "ForStatement",
  "Statement", "StatementWithoutTrailingSubstatement", "BreakStatement",
  "ContinueStatement", "ReturnStatement", "ThrowsStatements",
  "TryStatement", "Catches", "CatchClause", "Finally",
  "ClassInstanceCreationExpression", "Assignment", "ArgumentList",
  "Expression", "UnaryExpression", "PostfixExpression",
  "PrimaryExpression", "LeftHandSide", "AssignmentOperator",
  "MethodInvocation", "FieldAccess", "Primary", "DimExprs", "DimExpr",
  "Dims", "ArrayAccess", "ExpressionName", "MethodName", "AmbiguousName",
  "Literal", "BooleanLiteral", YY_NULL
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
       0,    79,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    85,    86,    87,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    93,    93,    93,    94,    94,    94,    95,    95,    96,
      97,    98,    98,    98,    99,    99,    99,   100,   101,   101,
     101,   102,   103,   103,   104,   104,   105,   106,   106,   106,
     107,   108,   108,   108,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   117,   117,   118,   118,   118,   118,   118,   118,
     119,   120,   120,   121,   122,   122,   122,   123,   123,   124,
     124,   125,   126,   126,   126,   127,   127,   128,   129,   129,
     129,   130,   131,   131,   131,   132,   132,   133,   134,   134,
     134,   113,   113,   135,   135,   136,   137,   137,   138,   139,
     140,   140,   141,   142,   142,   143,   143,   143,   144,   144,
     145,   146,   147,   148,   148,   148,   148,   149,   149,   150,
     151,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     154,   154,   154,   154,   154,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     160,   160,   160,   161,   161,   162,   163,   164,   165,   166,
     166,   166,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   168,   168,   168,   169,   169,   169,
     169,   169,   169,   170,   170,   170,   170,   170,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   173,   173,   173,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   175,   176,   176,   177,   178,   178,   178,
     179,   179,   180,   180,   181,   182,   182,   183,   183,   183,
     183,   183,   183,   184,   184
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     1,     2,     3,     5,
       0,     1,     2,     1,     1,     1,     6,     0,     1,     2,
       1,     1,     1,     1,     0,     2,     0,     2,     1,     3,
       3,     0,     1,     2,     1,     1,     1,     1,     1,     2,
       4,     0,     1,     2,     1,     1,     1,     4,     0,     1,
       2,     2,     0,     2,     1,     3,     4,     0,     4,     4,
       4,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     4,     1,
       1,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     5,     0,     1,     2,     1,     1,     2,
       3,     3,     0,     1,     2,     1,     1,     3,     1,     1,
       1,     5,     0,     1,     2,     1,     1,     3,     0,     1,
       3,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     3,     3,     1,     1,     0,     1,     2,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     5,     7,     5,
       6,     5,     4,     3,     4,     4,     3,     3,     2,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     2,     3,     2,     3,
       3,     4,     3,     1,     2,     5,     2,     5,     3,     0,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     2,     1,     3,     3,
       4,     2,     2,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     4,     6,     6,     3,     3,     1,     1,     3,     1,
       1,     1,     1,     4,     1,     2,     3,     0,     2,     3,
       4,     4,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     5,   130,     0,     1,     0,    10,     6,
       4,     0,   126,     0,     0,    22,    23,    15,    21,    20,
       7,     2,    11,    13,     0,    18,    14,     0,    95,   131,
       8,     0,    12,    22,    20,     0,    19,    98,    97,     0,
      96,   127,     0,    24,     0,     9,     0,    26,     0,     0,
     128,    25,     0,     0,     0,   129,    99,     0,   102,    93,
       0,    27,    28,    31,    16,   100,   116,   110,   109,   115,
     112,   103,   105,     0,   106,     0,   113,     0,    88,    68,
      67,    46,    45,    44,    41,    32,    34,    35,    36,     0,
      42,    37,     0,    62,    38,     0,     0,    82,   101,   104,
     123,     0,   124,   115,    80,     0,   114,    79,    29,   135,
      39,    30,    33,     0,    46,    45,    44,    43,    52,    68,
      67,    66,    65,    64,    63,     0,    92,    77,    91,    89,
      87,    86,    85,    84,     0,    83,    73,     0,   107,    71,
       0,    52,     0,     0,     0,     0,     0,   273,   274,   262,
     268,   269,   270,   271,   141,     0,     0,     0,   135,     0,
     226,   227,     0,     0,     0,     0,   272,     0,     0,     0,
     165,     0,   136,     0,   166,   167,     0,   161,   162,   164,
     163,   139,   160,   168,   169,   170,   171,   172,   249,   204,
     144,   192,   211,   217,     0,   251,   229,     0,   230,   228,
       0,     0,   224,   267,    48,     0,     0,     0,    69,    52,
     125,     0,     0,    48,     0,     0,     0,     0,   174,     0,
     178,   225,     0,     0,     0,     0,   226,   227,   215,   224,
     216,   213,   165,     0,   139,   144,   214,     0,   262,     0,
       0,   212,     0,   176,     0,   249,   204,     0,   251,     0,
     140,   132,   137,   138,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,   222,     0,     0,   234,     0,     0,     0,
       0,     0,   231,     0,     0,     0,     0,     0,     0,     0,
     189,     0,     0,    49,     0,    53,    54,    57,    40,    60,
       0,    78,   118,    72,    76,    75,    74,     0,   111,     0,
       0,   173,   177,     0,   257,   254,   189,   225,   134,   223,
     248,   245,     0,     0,     0,     0,   175,   179,     0,     0,
     180,   183,   182,   205,   198,   201,   203,   199,   207,   193,
     196,   197,   194,   200,   202,   195,   210,   209,   208,   206,
     219,     0,   218,   237,   239,   232,   235,   236,   233,   240,
     238,   188,   244,     0,     0,     0,   190,   263,    47,    50,
      51,     0,     0,     0,   135,    70,   119,     0,    90,     0,
       0,     0,     0,   255,   253,     0,   189,     0,   158,     0,
       0,     0,     0,   186,   184,   181,   220,   189,   261,   260,
     241,     0,    55,   189,   189,     0,     0,   117,   147,   149,
     256,   258,     0,     0,   187,     0,     0,   157,   156,   159,
     153,     0,     0,     0,   191,     0,     0,    56,   120,     0,
     259,   243,   150,   155,   154,   152,     0,   242,    58,    59,
     148,   151,   185
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    21,    22,    23,    24,    25,
      47,    54,    61,    64,    84,    85,    86,    87,    88,    89,
      90,   118,   292,   293,   206,   295,   298,   374,    91,    92,
      93,   207,   208,   139,   303,    94,    95,   105,    96,    97,
     141,   127,    26,    27,    28,    49,    59,    70,    71,    72,
      73,    74,    75,    76,   304,   377,   169,   102,    50,    51,
      56,    52,   170,   233,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   324,   180,   181,   182,   183,   184,   185,
     186,   187,   330,   331,   332,   245,   246,   365,   190,   191,
     192,   193,   194,   286,   248,   196,   197,   383,   315,   384,
     198,   199,   200,   201,   202,   203
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -305
static const yytype_int16 yypact[] =
{
     -49,    48,    22,    66,  -305,    11,  -305,    58,   164,  -305,
    -305,    84,    67,   101,    89,    97,  -305,  -305,  -305,   110,
    -305,    87,  -305,  -305,    51,  -305,  -305,     8,  -305,  -305,
    -305,    72,  -305,  -305,  -305,   157,  -305,  -305,  -305,   174,
    -305,   198,   218,   137,   201,  -305,    58,   200,    58,   -13,
    -305,  -305,   248,    58,   230,  -305,  -305,    58,   148,  -305,
     253,   236,  -305,   458,  -305,  -305,  -305,  -305,  -305,   271,
     182,  -305,  -305,   281,  -305,    94,  -305,    58,  -305,    10,
      14,   106,   112,   125,   249,  -305,  -305,  -305,  -305,   221,
    -305,  -305,   397,  -305,  -305,   146,   298,  -305,  -305,  -305,
    -305,    44,  -305,  -305,  -305,   284,  -305,   259,  -305,   594,
    -305,  -305,  -305,   278,  -305,  -305,  -305,  -305,   241,  -305,
    -305,  -305,  -305,  -305,  -305,    44,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,   284,  -305,  -305,   268,  -305,   180,
     282,   241,   285,   289,   231,   232,   301,  -305,  -305,    77,
    -305,  -305,  -305,  -305,  -305,  1281,  1281,  1281,   594,  1281,
     283,   287,   660,   295,  1281,   234,  -305,  1214,   300,    44,
    -305,   194,  -305,   318,  -305,  -305,   319,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,   320,   330,
    1247,  -305,   158,  -305,  1335,   332,    88,   135,   181,   -25,
     326,   343,   340,  -305,   281,    58,   334,   121,  -305,   241,
    -305,   782,   344,   281,   367,  1214,  1214,   369,  -305,   371,
    -305,   149,   356,   373,   389,   660,  -305,  -305,  -305,  -305,
    -305,  -305,   377,   381,   383,   815,  -305,   403,   386,   412,
     849,  -305,   406,  -305,   660,  -305,  -305,    13,  -305,   124,
     405,  -305,  -305,  -305,  -305,  1214,  1214,  1214,  1214,  1214,
    1214,  1214,  1214,  1214,  1214,  1214,  1214,  1214,  1214,  1214,
    1214,  1214,  -305,  -305,   416,   115,  -305,   400,   401,   402,
     404,   415,  -305,   417,   418,   419,  1214,   428,  1214,  1214,
    1214,   431,    45,  -305,    44,   422,  -305,   151,  -305,  -305,
     445,  -305,   782,  -305,  -305,  1247,  -305,    78,  -305,   882,
     905,  -305,  -305,   953,   423,  -305,  1214,  -305,  -305,  -305,
    -305,   429,   432,   996,   440,   306,  -305,  -305,   442,   300,
     124,  -305,  -305,   527,   441,   495,   495,   441,  1359,  -305,
     113,   113,  -305,   495,   495,  -305,  1314,  1314,   372,  1359,
    -305,   444,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  1247,   447,  1010,  1037,   222,  1247,   446,  -305,  -305,
     438,    58,   449,   455,   594,  -305,  -305,    61,  -305,   660,
     660,  1066,  1104,   451,   452,   224,  1214,  1214,  1214,   710,
     660,  1147,   281,  -305,  -305,  -305,  -305,  1214,  -305,  -305,
    -305,  1214,  -305,  1214,  1214,   528,   782,  -305,   483,  -305,
    -305,  -305,  1214,   453,  -305,   246,  1180,  1247,  1214,  -305,
    1214,   734,   463,   255,  1247,   257,   261,  -305,  -305,   660,
    -305,  -305,  -305,  1247,  1247,  1214,   300,  -305,  -305,  -305,
    -305,  1247,  -305
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,  -305,  -305,   489,  -305,   477,  -305,  -305,   475,
    -305,  -305,  -305,  -305,  -305,   424,  -305,  -305,  -305,  -305,
     413,  -305,   288,  -278,  -130,  -305,  -305,  -305,  -305,  -305,
     411,   341,   -97,   217,  -297,  -305,  -305,   420,  -305,   421,
     385,  -305,  -305,  -305,   493,  -305,  -305,  -305,   456,  -305,
    -305,  -305,  -305,   480,  -305,  -305,   -65,  -305,    27,  -139,
      -9,   216,   -80,   254,   153,  -169,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -149,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,   203,   238,  -108,  -106,  -304,   103,   220,
    -305,   277,  -305,  -305,   -88,  -305,  -305,   308,  -305,  -305,
    -305,  -305,  -305,  -305,  -131,  -305
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -267
static const yytype_int16 yytable[] =
{
     110,   188,   252,   189,   138,   376,  -264,   223,   101,   234,
     107,   214,   385,   239,   369,   128,   289,    37,     1,   -89,
      57,   195,     6,   -87,   229,   229,   229,   125,   229,   369,
      10,   107,   327,   229,    13,   255,   256,   257,    58,   258,
     259,   260,   261,   262,    62,   109,    11,   263,    65,   264,
     188,   265,   189,   266,   188,   267,   189,   268,   136,   100,
      33,    16,     4,   188,    38,   189,   296,   -89,   108,     7,
     195,   -87,    12,    39,   195,    55,   318,   368,   232,   301,
      55,   222,   415,   195,    55,   137,    41,   269,   249,   270,
     271,  -123,   100,   423,   406,   318,    15,    16,    29,   425,
     426,    42,  -130,    66,    55,    18,    17,    34,   100,   428,
     378,    35,  -265,   407,   422,   -86,   -66,   188,  -123,   189,
      30,   -85,   -65,  -250,    31,   318,   224,   147,   148,  -250,
     150,   151,   152,   153,   -84,   -64,   188,   195,   189,   294,
     299,    18,   261,    19,   229,   232,   225,   -17,   294,   264,
     103,   104,   -94,   -66,   300,   267,   195,    66,    67,   -65,
     226,   227,   -98,   -86,   232,   126,   188,     7,   189,   -85,
     287,    43,   -64,    15,    16,   -97,   288,   109,   272,   273,
    -126,   166,   -84,    17,  -130,   328,   195,   329,    44,   274,
    -123,    66,    67,   275,   232,    68,   372,   373,   142,    46,
     143,   144,   145,   375,    69,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  -252,     5,    18,   211,
      19,   212,  -252,    14,   157,   158,   251,   294,   159,    68,
     408,   409,   402,  -131,    98,   113,   252,    45,    69,   160,
     161,   419,   294,   162,   163,   217,   219,   164,   242,   393,
     218,   220,   165,   243,   400,   401,   414,   401,    78,    79,
     166,   235,   167,    48,    53,   168,   188,    41,   189,    77,
     247,   188,   188,   189,   189,   114,   115,   116,   431,   401,
     440,    63,   188,    60,   189,  -108,   195,   437,   401,   438,
     401,   195,   195,   439,   401,   100,    80,   188,   140,   189,
     137,   111,   195,    81,    82,    83,   -81,    78,   129,   204,
     205,   210,   100,   213,   305,   221,   215,   195,   309,   310,
     216,   188,   237,   189,  -247,   391,   240,   294,   255,   256,
     257,   109,   258,   259,   260,   261,   262,   253,   254,  -146,
     263,   195,   264,   325,   265,   130,   266,   235,   267,  -143,
     268,  -145,   131,   132,   133,   104,   442,   290,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   228,   230,   231,   291,   236,
     269,  -246,   270,   271,   241,   297,   308,   306,   311,   361,
     312,   363,   364,   366,   255,   256,   257,   313,   258,   259,
     260,   261,   262,   317,   316,   305,   263,   119,   264,  -133,
     265,   100,   266,   319,   267,  -134,   381,   321,   322,   366,
     142,  -265,   143,   144,   145,   326,   389,   146,   147,   148,
     238,   150,   151,   152,   153,   154,   155,   156,   300,   353,
     354,   355,   362,   356,   120,   367,   157,   158,   350,   271,
     159,   121,   122,   123,   357,   371,   358,   359,   360,   136,
     386,   160,   161,   387,   382,   162,   163,    78,    79,   164,
     261,   262,   390,   392,   165,   263,   396,   264,   397,   212,
     403,  -266,   166,   267,   167,   381,   404,   168,   429,   366,
     416,   417,   412,   413,   421,   436,   430,    20,    32,    36,
     366,   307,   117,   124,   424,    80,   366,   366,   112,   305,
     250,   370,    81,    82,    83,   381,   134,   135,   256,   209,
      40,   433,   259,   434,   261,   262,    99,   405,   351,   263,
     314,   264,   142,   394,   143,   144,   145,   267,   441,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     256,   257,   352,   258,   259,   106,   261,   262,   157,   158,
       0,   263,   159,   264,     0,   265,     0,   266,   395,   267,
       0,     0,     0,   160,   161,     0,     0,   162,   163,     0,
     427,   164,     0,     0,     0,     0,   165,     0,     0,     0,
       0,     0,     0,     0,   166,     0,   167,     0,   142,   168,
     143,   144,   145,     0,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,     0,     0,   159,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   160,
     161,     0,     0,   162,   163,     0,     0,   164,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,     0,     0,
     166,     0,   167,     0,   142,   168,   143,   144,   145,     0,
       0,   146,   147,   148,   238,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,     0,     0,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   160,   161,     0,     0,   162,
     163,     0,     0,   164,     0,     0,     0,     0,   165,     0,
       0,     0,     0,     0,     0,     0,   166,     0,   167,   418,
       0,   168,   255,   256,   257,     0,   258,   259,   260,   261,
     262,     0,     0,     0,   263,     0,   264,     0,   265,     0,
     266,     0,   267,   435,   268,     0,   255,   256,   257,     0,
     258,   259,   260,   261,   262,     0,     0,     0,   263,     0,
     264,     0,   265,     0,   266,     0,   267,     0,   268,     0,
       0,     0,     0,     0,   269,     0,   270,   271,     0,     0,
       0,     0,     0,   146,   147,   148,   238,   150,   151,   152,
     153,     0,   155,   156,     0,     0,     0,     0,   269,     0,
     270,   271,   157,   244,     0,     0,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,   161,     0,
       0,     0,     0,   302,     0,   164,     0,   255,   256,   257,
       0,   258,   259,   260,   261,   262,     0,   320,   166,   263,
       0,   264,     0,   265,     0,   266,     0,   267,     0,   268,
     146,   147,   148,   238,   150,   151,   152,   153,   323,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,   157,
     244,     0,     0,   159,     0,     0,     0,     0,     0,   269,
       0,   270,   271,     0,   160,   161,     0,     0,     0,     0,
       0,     0,   164,     0,   255,   256,   257,     0,   258,   259,
     260,   261,   262,     0,   379,   166,   263,     0,   264,     0,
     265,     0,   266,     0,   267,     0,   268,   255,   256,   257,
       0,   258,   259,   260,   261,   262,     0,   380,     0,   263,
       0,   264,     0,   265,     0,   266,     0,   267,     0,   268,
       0,     0,     0,     0,     0,     0,   269,     0,   270,   271,
       0,     0,     0,     0,   146,   147,   148,   238,   150,   151,
     152,   153,     0,   155,   156,     0,     0,     0,     0,   269,
       0,   270,   271,   157,   244,     0,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,   210,     0,   160,   161,
       0,     0,     0,     0,     0,     0,   164,   146,   147,   148,
     238,   150,   151,   152,   153,   388,   155,   156,     0,   166,
       0,     0,     0,     0,     0,     0,   157,   244,     0,     0,
     159,     0,   255,   256,   257,     0,   258,   259,   260,   261,
     262,   160,   161,     0,   263,     0,   264,     0,   265,   164,
     266,     0,   267,   398,   268,     0,     0,     0,     0,   255,
     256,   257,   166,   258,   259,   260,   261,   262,     0,     0,
       0,   263,     0,   264,     0,   265,     0,   266,     0,   267,
     399,   268,     0,     0,   269,     0,   270,   271,   255,   256,
     257,     0,   258,   259,   260,   261,   262,     0,     0,     0,
     263,     0,   264,     0,   265,     0,   266,     0,   267,   410,
     268,   269,     0,   270,   271,   146,   147,   148,   238,   150,
     151,   152,   153,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   244,     0,     0,   159,     0,
     269,     0,   270,   271,     0,     0,     0,   411,     0,   160,
     161,     0,     0,     0,     0,     0,     0,   164,   146,   147,
     148,   238,   150,   151,   152,   153,   420,   155,   156,     0,
     166,     0,     0,     0,     0,     0,     0,   157,   244,     0,
       0,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   160,   161,     0,     0,     0,     0,     0,     0,
     164,     0,   255,   256,   257,     0,   258,   259,   260,   261,
     262,     0,   432,   166,   263,     0,   264,     0,   265,     0,
     266,     0,   267,     0,   268,   146,   147,   148,   238,   150,
     151,   152,   153,     0,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   244,     0,     0,   159,     0,
       0,     0,     0,     0,   269,     0,   270,   271,     0,   160,
     161,     0,     0,     0,     0,     0,     0,   164,     0,   255,
     256,   257,     0,   258,   259,   260,   261,   262,     0,     0,
     166,   263,     0,   264,     0,   265,     0,   266,     0,   267,
       0,   268,   224,   147,   148,     0,   150,   151,   152,   153,
       0,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   225,     0,     0,   159,     0,     0,     0,     0,
       0,   269,     0,   270,   271,     0,   226,   227,     0,     0,
       0,     0,     0,     0,   164,     0,   255,   256,   257,     0,
     258,   259,   260,   261,   262,     0,     0,   166,   263,     0,
     264,     0,   265,     0,   266,     0,   267,   276,   277,     0,
       0,     0,     0,   278,   279,   280,     0,     0,     0,   281,
       0,     0,     0,     0,   282,     0,     0,   283,     0,   284,
       0,   255,   256,   257,     0,   258,   259,     0,   261,   262,
     270,   271,     0,   263,   285,   264,     0,   265,     0,   266,
       0,   267
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-305)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      80,   109,   171,   109,   101,   302,    31,   146,    73,   158,
      75,   141,   316,   162,   292,    95,    41,     9,    67,     9,
      33,   109,     0,     9,   155,   156,   157,    92,   159,   307,
      19,    96,    19,   164,     7,    22,    23,    24,    51,    26,
      27,    28,    29,    30,    53,    31,    35,    34,    57,    36,
     158,    38,   158,    40,   162,    42,   162,    44,    14,    14,
       9,    10,    14,   171,    56,   171,   205,    57,    77,     3,
     158,    57,    14,    65,   162,    48,   225,    32,   158,   209,
      53,   146,   386,   171,    57,    41,    14,    74,   168,    76,
      77,    14,    14,   397,    33,   244,     9,    10,    14,   403,
     404,    29,    35,     9,    77,    54,    19,    56,    14,   406,
      32,    60,    35,    52,   392,     9,    10,   225,    41,   225,
      19,     9,    10,    35,    35,   274,    11,    12,    13,    41,
      15,    16,    17,    18,     9,    10,   244,   225,   244,   204,
      19,    54,    29,    56,   275,   225,    31,    60,   213,    36,
      56,    57,    65,    47,    33,    42,   244,     9,    10,    47,
      45,    46,    65,    57,   244,    19,   274,     3,   274,    57,
      35,    14,    47,     9,    10,    65,    41,    31,    20,    21,
      31,    66,    57,    19,    35,    61,   274,    63,    14,    31,
      41,     9,    10,    35,   274,    47,    45,    46,     4,    62,
       6,     7,     8,   300,    56,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    35,     1,    54,    39,
      56,    41,    41,     7,    30,    31,    32,   292,    34,    47,
     379,   380,   371,    35,    52,    14,   405,    19,    56,    45,
      46,   390,   307,    49,    50,    14,    14,    53,    14,   329,
      19,    19,    58,    19,    32,    33,    32,    33,     9,    10,
      66,   158,    68,    62,    64,    71,   374,    14,   374,    33,
     167,   379,   380,   379,   380,    54,    55,    56,    32,    33,
     429,    51,   390,    35,   390,    14,   374,    32,    33,    32,
      33,   379,   380,    32,    33,    14,    47,   405,    14,   405,
      41,    52,   390,    54,    55,    56,    57,     9,    10,    31,
      69,    43,    14,    31,   211,    14,    31,   405,   215,   216,
      31,   429,    35,   429,    41,    19,    31,   392,    22,    23,
      24,    31,    26,    27,    28,    29,    30,    19,    19,    19,
      34,   429,    36,   240,    38,    47,    40,   244,    42,    19,
      44,    19,    54,    55,    56,    57,   436,    31,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   155,   156,   157,    35,   159,
      74,    41,    76,    77,   164,    51,    19,    43,    19,   286,
      19,   288,   289,   290,    22,    23,    24,    41,    26,    27,
      28,    29,    30,    14,    31,   302,    34,    10,    36,    32,
      38,    14,    40,    32,    42,    32,   313,    14,     6,   316,
       4,    35,     6,     7,     8,    19,   323,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    33,    39,
      39,    39,    14,    39,    47,    14,    30,    31,    32,    77,
      34,    54,    55,    56,    39,    33,    39,    39,    39,    14,
      31,    45,    46,    31,    41,    49,    50,     9,    10,    53,
      29,    30,    32,    31,    58,    34,    32,    36,    31,    41,
      31,    35,    66,    42,    68,   382,    31,    71,     5,   386,
     387,   388,    41,    41,   391,    32,    43,     8,    21,    24,
     397,   213,    89,    92,   401,    47,   403,   404,    84,   406,
     169,   294,    54,    55,    56,   412,    96,    96,    23,   134,
      27,   418,    27,   420,    29,    30,    70,   374,   274,    34,
     222,    36,     4,   330,     6,     7,     8,    42,   435,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      23,    24,   275,    26,    27,    75,    29,    30,    30,    31,
      -1,    34,    34,    36,    -1,    38,    -1,    40,   330,    42,
      -1,    -1,    -1,    45,    46,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    -1,     4,    71,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    -1,     4,    71,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    19,
      -1,    71,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    19,    44,    -1,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    20,    21,    -1,    -1,    -1,    -1,    74,    -1,
      76,    77,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    51,    -1,    53,    -1,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    -1,    32,    66,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    22,    23,    24,    -1,    26,    27,
      28,    29,    30,    -1,    32,    66,    34,    -1,    36,    -1,
      38,    -1,    40,    -1,    42,    -1,    44,    22,    23,    24,
      -1,    26,    27,    28,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,    74,
      -1,    76,    77,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    45,    46,    -1,    34,    -1,    36,    -1,    38,    53,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    22,
      23,    24,    66,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,
      43,    44,    -1,    -1,    74,    -1,    76,    77,    22,    23,
      24,    -1,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,    43,
      44,    74,    -1,    76,    77,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      74,    -1,    76,    77,    -1,    -1,    -1,    43,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    -1,    32,    66,    34,    -1,    36,    -1,    38,    -1,
      40,    -1,    42,    -1,    44,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    22,
      23,    24,    -1,    26,    27,    28,    29,    30,    -1,    -1,
      66,    34,    -1,    36,    -1,    38,    -1,    40,    -1,    42,
      -1,    44,    11,    12,    13,    -1,    15,    16,    17,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    -1,    -1,    66,    34,    -1,
      36,    -1,    38,    -1,    40,    -1,    42,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    44,
      -1,    22,    23,    24,    -1,    26,    27,    -1,    29,    30,
      76,    77,    -1,    34,    59,    36,    -1,    38,    -1,    40,
      -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    80,    81,    14,   140,     0,     3,    82,    83,
      19,    35,    14,   137,   140,     9,    10,    19,    54,    56,
      83,    84,    85,    86,    87,    88,   121,   122,   123,    14,
      19,    35,    85,     9,    56,    60,    88,     9,    56,    65,
     123,    14,    29,    14,    14,    19,    62,    89,    62,   124,
     137,   138,   140,    64,    90,   137,   139,    33,    51,   125,
      35,    91,   139,    51,    92,   139,     9,    10,    47,    56,
     126,   127,   128,   129,   130,   131,   132,    33,     9,    10,
      47,    54,    55,    56,    93,    94,    95,    96,    97,    98,
      99,   107,   108,   109,   114,   115,   117,   118,    52,   127,
      14,   135,   136,    56,    57,   116,   132,   135,   139,    31,
     141,    52,    94,    14,    54,    55,    56,    99,   100,    10,
      47,    54,    55,    56,   109,   135,    19,   120,   141,    10,
      47,    54,    55,    56,   116,   118,    14,    41,   111,   112,
      14,   119,     4,     6,     7,     8,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    30,    31,    34,
      45,    46,    49,    50,    53,    58,    66,    68,    71,   135,
     141,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     153,   154,   155,   156,   157,   158,   159,   160,   164,   165,
     167,   168,   169,   170,   171,   173,   174,   175,   179,   180,
     181,   182,   183,   184,    31,    69,   103,   110,   111,   119,
      43,    39,    41,    31,   103,    31,    31,    14,    19,    14,
      19,    14,   135,   138,    11,    31,    45,    46,   168,   183,
     168,   168,   141,   142,   154,   167,   168,    35,    14,   154,
      31,   168,    14,    19,    31,   164,   165,   167,   173,   141,
     110,    32,   144,    19,    19,    22,    23,    24,    26,    27,
      28,    29,    30,    34,    36,    38,    40,    42,    44,    74,
      76,    77,    20,    21,    31,    35,    22,    23,    28,    29,
      30,    34,    39,    42,    44,    59,   172,    35,    41,    41,
      31,    35,   101,   102,   135,   104,   138,    51,   105,    19,
      33,   103,    51,   113,   133,   167,    43,   101,    19,   167,
     167,    19,    19,    41,   176,   177,    31,    14,   154,    32,
      32,    14,     6,    19,   152,   167,    19,    19,    61,    63,
     161,   162,   163,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
      32,   142,   170,    39,    39,    39,    39,    39,    39,    39,
      39,   167,    14,   167,   167,   166,   167,    14,    32,   102,
     112,    33,    45,    46,   106,   111,   113,   134,    32,    32,
      32,   167,    41,   176,   178,   166,    31,    31,    19,   167,
      32,    19,    31,   141,   162,   163,    32,    31,    43,    43,
      32,    33,   138,    31,    31,   143,    33,    52,   154,   154,
      43,    43,    41,    41,    32,   166,   167,   167,    19,   154,
      19,   167,   102,   166,   167,   166,   166,    52,   113,     5,
      43,    32,    32,   167,   167,    19,    32,    32,    32,    32,
     154,   167,   141
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
      
/* Line 1792 of yacc.c  */
#line 2085 "yacc_syntax.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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


/* Line 2055 of yacc.c  */
#line 717 "yacc_syntax.y"


// Called when parse error was detected.
char const *yyerror(const char *str)
{
    fprintf(stderr, "yyerror: %s\n", str);
}

extern FILE *yyin;

// Program entry point.
int main()
{
    yydebug = 1;  // TODO: REMOVE IN PROD, set 0 for no debug info.
    yyin = fopen("in.txt", "r");
    return yyparse();
}
