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
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse ffparse
#define yylex   fflex
#define yyerror fferror
#define yylval  fflval
#define yychar  ffchar
#define yydebug ffdebug
#define yynerrs ffnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     STRING = 259,
     ARCH_ = 260,
     ARRAY_ = 261,
     BIG_ = 262,
     BIGENDIAN_ = 263,
     BIN_ = 264,
     BINKEY_ = 265,
     BINCOL_ = 266,
     BITPIX_ = 267,
     COL_ = 268,
     DIM_ = 269,
     DIMS_ = 270,
     ECLIPTIC_ = 271,
     ENDIAN_ = 272,
     EQUATORIAL_ = 273,
     FOV_ = 274,
     GALACTIC_ = 275,
     KEY_ = 276,
     LAYOUT_ = 277,
     LITTLE_ = 278,
     LITTLEENDIAN_ = 279,
     LAT0_ = 280,
     LON0_ = 281,
     NESTED_ = 282,
     NORTH_ = 283,
     ORDER_ = 284,
     PROJ_ = 285,
     QUAD_ = 286,
     RING_ = 287,
     SKIP_ = 288,
     SLICE_ = 289,
     SOUTH_ = 290,
     SYSTEM_ = 291,
     UNKNOWN_ = 292,
     XDIM_ = 293,
     YDIM_ = 294,
     ZDIM_ = 295
   };
#endif
/* Tokens.  */
#define INT 258
#define STRING 259
#define ARCH_ 260
#define ARRAY_ 261
#define BIG_ 262
#define BIGENDIAN_ 263
#define BIN_ 264
#define BINKEY_ 265
#define BINCOL_ 266
#define BITPIX_ 267
#define COL_ 268
#define DIM_ 269
#define DIMS_ 270
#define ECLIPTIC_ 271
#define ENDIAN_ 272
#define EQUATORIAL_ 273
#define FOV_ 274
#define GALACTIC_ 275
#define KEY_ 276
#define LAYOUT_ 277
#define LITTLE_ 278
#define LITTLEENDIAN_ 279
#define LAT0_ 280
#define LON0_ 281
#define NESTED_ 282
#define NORTH_ 283
#define ORDER_ 284
#define PROJ_ 285
#define QUAD_ 286
#define RING_ 287
#define SKIP_ 288
#define SLICE_ 289
#define SOUTH_ 290
#define SYSTEM_ 291
#define UNKNOWN_ 292
#define XDIM_ 293
#define YDIM_ 294
#define ZDIM_ 295




/* Copy the first part of user declarations.  */
#line 10 "parser.Y"

#define YYDEBUG 1

#define GOTOFILT(x) {yyclearin; ffFilter(x);}
#define GOTOARR(x) {yyclearin; ffArray(x);}

#include <stdlib.h>

#include "file.h"
#include "hpx.h"

#undef yyFlexLexer
#define yyFlexLexer ffFlexLexer
#include <FlexLexer.h>

extern int fflex(void*, ffFlexLexer*);
extern void fferror(FitsFile*, ffFlexLexer*, const char*);

char ff_filter[512];
extern void ffFilter(int);
extern void ffArray(int);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 34 "parser.Y"
{
  float real;
  double dbl;
  int integer;
  char str[2048];
  void* ptr;
}
/* Line 193 of yacc.c.  */
#line 216 "parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 229 "parser.C"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   281

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  220

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
      43,    44,    50,     2,    45,     2,    60,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,     2,
       2,    51,     2,     2,    49,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,    52,     2,
      59,     2,    58,     2,     2,    55,     2,     2,    56,     2,
       2,     2,    46,     2,    57,    53,     2,    54,     2,     2,
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
       0,     0,     3,     5,     8,    12,    15,    21,    25,    30,
      35,    38,    42,    46,    52,    56,    61,    66,    69,    73,
      77,    83,    86,    90,    94,    95,   104,   105,   109,   110,
     112,   116,   120,   123,   126,   131,   135,   141,   147,   155,
     159,   161,   165,   169,   175,   176,   178,   180,   184,   188,
     190,   194,   198,   200,   206,   210,   214,   216,   218,   222,
     226,   229,   231,   233,   235,   237,   243,   247,   255,   261,
     265,   267,   271,   275,   277,   281,   285,   289,   293,   297,
     301,   305,   309,   313,   315,   317,   319,   321,   323,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   350,
     356,   357,   360,   361,   363,   365,   369,   373,   375,   379,
     383,   387,   391,   395,   399,   403,   407,   411,   415,   419,
     421,   423,   425,   427,   429,   431,   433,   435,   437,   439
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    65,    -1,    65,    66,    -1,    65,    66,
      68,    -1,    65,    68,    -1,    65,    41,    67,    69,    42,
      -1,    65,    66,    76,    -1,    65,    66,    76,    68,    -1,
      65,    66,    68,    76,    -1,    65,    76,    -1,    65,    76,
      68,    -1,    65,    68,    76,    -1,    65,    41,    67,    77,
      42,    -1,    65,    66,    89,    -1,    65,    66,    89,    68,
      -1,    65,    66,    68,    89,    -1,    65,    89,    -1,    65,
      89,    68,    -1,    65,    68,    89,    -1,    65,    41,    67,
      90,    42,    -1,    65,    80,    -1,    65,    80,    68,    -1,
      65,    68,    80,    -1,    -1,    65,    41,     6,    63,    43,
      84,    44,    42,    -1,    -1,     1,    64,     4,    -1,    -1,
       4,    -1,    41,     4,    42,    -1,    41,     3,    42,    -1,
       4,    45,    -1,     3,    45,    -1,    41,    69,    70,    42,
      -1,    71,    45,    72,    -1,    71,    45,    72,    45,    75,
      -1,    71,    45,    72,    45,    74,    -1,    71,    45,    72,
      45,    75,    45,    74,    -1,    71,    45,    75,    -1,    73,
      -1,    73,    45,    75,    -1,    73,    45,    74,    -1,    73,
      45,    75,    45,    74,    -1,    -1,    46,    -1,    47,    -1,
       3,    48,     3,    -1,     3,    49,     3,    -1,    50,    -1,
       3,    48,     3,    -1,     3,    49,     3,    -1,    50,    -1,
       3,    49,     3,    49,     3,    -1,     3,    48,     3,    -1,
       3,    49,     3,    -1,    50,    -1,     3,    -1,    41,    77,
      42,    -1,    78,    51,    79,    -1,    78,    79,    -1,     9,
      -1,    10,    -1,    11,    -1,    21,    -1,    43,     4,    45,
       4,    44,    -1,     4,    45,     4,    -1,    43,     4,    45,
       4,    45,     4,    44,    -1,     4,    45,     4,    45,     4,
      -1,    43,     4,    44,    -1,     4,    -1,    41,    81,    42,
      -1,    81,    45,    82,    -1,    82,    -1,    38,    51,     3,
      -1,    39,    51,     3,    -1,    40,    51,     3,    -1,    14,
      51,     3,    -1,    15,    51,     3,    -1,    12,    51,     3,
      -1,    33,    51,     3,    -1,     5,    51,    83,    -1,    17,
      51,    83,    -1,    83,    -1,     7,    -1,     8,    -1,    23,
      -1,    24,    -1,    85,    86,    87,    88,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,
      58,    -1,    59,    -1,     3,    -1,     3,    60,     3,    -1,
       3,    60,     3,    60,     3,    -1,    -1,    48,     3,    -1,
      -1,    56,    -1,    52,    -1,    41,    90,    42,    -1,    90,
      45,    91,    -1,    91,    -1,    36,    51,    93,    -1,    29,
      51,    94,    -1,    29,    51,     3,    -1,    34,    51,     3,
      -1,    22,    51,    95,    -1,    13,    51,     3,    -1,    31,
      51,     3,    -1,    30,    51,     4,    -1,    26,    51,    92,
      -1,    25,    51,    92,    -1,    19,    51,    92,    -1,     3,
      -1,     4,    -1,    18,    -1,    20,    -1,    16,    -1,    37,
      -1,    32,    -1,    27,    -1,    18,    -1,    28,    -1,    35,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    90,    90,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   102,   104,   105,   106,   107,   108,   109,
     110,   112,   113,   114,   115,   115,   117,   117,   121,   122,
     132,   133,   136,   137,   140,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   153,   154,   155,   158,   165,   167,
     175,   177,   179,   182,   189,   191,   193,   196,   199,   201,
     202,   205,   206,   207,   208,   211,   212,   213,   214,   215,
     216,   219,   222,   223,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   238,   239,   240,   241,   244,   247,
     248,   249,   250,   251,   252,   253,   254,   257,   258,   259,
     263,   264,   267,   268,   269,   272,   275,   276,   279,   280,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   294,
     295,   304,   305,   306,   307,   310,   311,   314,   315,   316
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "STRING", "ARCH_", "ARRAY_",
  "BIG_", "BIGENDIAN_", "BIN_", "BINKEY_", "BINCOL_", "BITPIX_", "COL_",
  "DIM_", "DIMS_", "ECLIPTIC_", "ENDIAN_", "EQUATORIAL_", "FOV_",
  "GALACTIC_", "KEY_", "LAYOUT_", "LITTLE_", "LITTLEENDIAN_", "LAT0_",
  "LON0_", "NESTED_", "NORTH_", "ORDER_", "PROJ_", "QUAD_", "RING_",
  "SKIP_", "SLICE_", "SOUTH_", "SYSTEM_", "UNKNOWN_", "XDIM_", "YDIM_",
  "ZDIM_", "'['", "']'", "'('", "')'", "','", "'p'", "'P'", "':'", "'@'",
  "'*'", "'='", "'b'", "'s'", "'u'", "'i'", "'l'", "'r'", "'f'", "'d'",
  "'.'", "$accept", "command", "@1", "@2", "filename", "ext", "extb",
  "sect", "sectb", "physical", "rangex", "rangey", "rangexy", "rangez",
  "block", "bin", "binb", "binword", "binkey", "arrs", "arrsb", "arr",
  "endian", "array", "atype", "adims", "askip", "aendian", "hpxs", "hpxsb",
  "hpx", "hpxReal", "hpxSystem", "hpxOrder", "hpxLayout", 0
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
     295,    91,    93,    40,    41,    44,   112,    80,    58,    64,
      42,    61,    98,   115,   117,   105,   108,   114,   102,   100,
      46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    62,    64,    62,    65,    65,
      66,    66,    67,    67,    68,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    71,    71,    71,
      72,    72,    72,    73,    74,    74,    74,    75,    76,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    88,    89,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     5,     3,     4,     4,
       2,     3,     3,     5,     3,     4,     4,     2,     3,     3,
       5,     2,     3,     3,     0,     8,     0,     3,     0,     1,
       3,     3,     2,     2,     4,     3,     5,     5,     7,     3,
       1,     3,     3,     5,     0,     1,     1,     3,     3,     1,
       3,     3,     1,     5,     3,     3,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     5,     3,     7,     5,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       0,     2,     0,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,    29,     0,     2,     0,     1,     0,     3,     5,
      10,    21,    17,    27,     0,     0,     0,    24,    84,    85,
      61,    62,    63,     0,     0,     0,     0,     0,     0,    64,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    44,     0,    40,     0,
       0,     0,    73,    83,     0,   107,     0,     4,     7,    14,
       0,    12,    23,    19,     0,    11,    22,    18,    31,    33,
       0,     0,    30,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
       0,     0,     0,    58,    70,     0,     0,    60,    71,     0,
     105,     0,     0,     9,    16,     8,    15,    47,    48,    81,
       0,    79,   113,    77,    78,    82,   119,   120,   118,   127,
     128,   129,   112,   117,   116,   110,   126,   125,   109,   115,
     114,    80,   111,   123,   121,   122,   124,   108,    74,    75,
      76,     6,    13,    20,    34,    57,    52,    35,    39,    57,
      56,    42,    41,     0,     0,    59,    72,   106,     0,    89,
      90,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    69,     0,    53,     0,
      97,   100,    50,    51,    37,    36,    54,    55,     0,    43,
       0,     0,    25,     0,     0,   102,     0,    68,    65,     0,
      98,   101,   104,   103,    88,    38,     0,     0,    67,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    75,     5,     4,     8,    45,     9,    46,   100,
      47,   157,    48,   161,   158,    10,    49,    50,   107,    11,
      51,    52,    53,   177,   178,   191,   205,   214,    12,    54,
      55,   128,   147,   138,   132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -129
static const yytype_int16 yypact[] =
{
      65,  -129,  -129,    10,   -15,    36,  -129,     8,     4,     9,
      18,    18,    18,  -129,    44,    58,    17,  -129,  -129,  -129,
    -129,  -129,  -129,    53,    67,    69,    84,    86,    96,  -129,
     105,  -129,  -129,   107,   129,   131,   137,   144,   145,   150,
     152,   154,   156,   157,  -129,    51,    81,    39,   165,   169,
      20,   110,  -129,  -129,   112,  -129,    51,   173,    18,    18,
     100,  -129,  -129,  -129,    -1,  -129,  -129,  -129,  -129,  -129,
     212,   216,  -129,  -129,   138,   177,   219,   229,   230,   231,
     138,   161,   114,   161,   161,    64,   232,   234,   235,   236,
      79,   237,   238,   239,   119,   193,   201,   121,  -129,  -129,
     202,    25,    33,  -129,   200,   242,    31,  -129,  -129,   136,
    -129,   187,   168,  -129,  -129,  -129,  -129,  -129,   198,  -129,
     172,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,   122,  -129,   203,  -129,   124,
    -129,  -129,   204,   246,   139,  -129,  -129,  -129,   248,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   208,   250,   251,
     252,    33,   253,   254,    40,   213,  -129,   255,  -129,   218,
     205,   214,  -129,  -129,  -129,   221,  -129,  -129,   124,  -129,
     257,   141,  -129,   260,   261,    46,    40,  -129,  -129,   263,
     209,  -129,  -129,  -129,  -129,  -129,   224,   267,  -129,  -129
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,  -129,  -129,  -129,  -129,    -7,   226,  -129,
    -129,  -129,  -129,  -128,  -102,    -2,   227,  -129,   167,   265,
    -129,   166,    14,  -129,  -129,  -129,  -129,  -129,     0,   233,
     170,   108,  -129,  -129,  -129
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
     162,    57,    94,    65,    66,    67,    58,    61,    59,    63,
       6,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   104,    27,     7,    28,   155,    29,
      30,    31,    32,    33,    34,   104,   159,    35,    36,    37,
      13,    38,    39,   198,    40,    56,    41,    42,    43,    44,
      60,   115,   116,   194,    94,   113,   199,   114,    44,    64,
      20,    21,    22,   105,    24,   -28,     1,   135,    74,     2,
      28,   106,    29,    30,   105,   156,    33,    34,   215,   195,
      35,    36,    37,   160,   101,    39,    68,    40,   119,    69,
     160,   136,    70,    71,   125,   143,   137,   144,   212,   145,
      72,    44,   213,    73,    76,    16,   -28,    18,    19,    20,
      21,    22,    23,    24,    25,    26,   146,    27,    77,    28,
      78,    29,    30,    31,    32,    33,    34,    98,    99,    35,
      36,    37,   129,    38,    39,    79,    40,    80,    41,    42,
      43,    16,   130,    18,    19,    18,    19,    81,    23,   131,
      25,    26,   108,    27,   110,   109,    82,   111,    83,    31,
      32,    31,    32,   153,   126,   127,   111,    70,    71,    38,
     179,   180,   182,   183,    41,    42,    43,    20,    21,    22,
      84,    24,    85,   186,   187,   208,   209,    28,    86,    29,
      30,   133,   134,    33,    34,    87,    88,    35,    36,    37,
      24,    89,    39,    90,    40,    91,    28,    92,    93,    30,
     102,   103,    33,    34,   112,   117,    35,    36,    37,   118,
     120,    39,   121,    40,   169,   170,   171,   172,   173,   174,
     175,   176,   122,   123,   124,   151,   139,   140,   141,   142,
     148,   149,   150,   152,   154,   163,   164,   168,   181,   184,
     185,   188,   189,   190,   192,   193,   196,   197,   200,   201,
     202,   207,   204,   210,   211,   203,   206,   216,   218,   217,
     219,    95,    96,   165,    62,   166,     0,     0,    97,     0,
       0,   167
};

static const yytype_int16 yycheck[] =
{
     102,     8,     3,    10,    11,    12,     8,     9,     8,     9,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     4,    17,    41,    19,     3,    21,
      22,    23,    24,    25,    26,     4,     3,    29,    30,    31,
       4,    33,    34,     3,    36,    41,    38,    39,    40,    50,
      41,    58,    59,   181,     3,    57,   184,    57,    50,    41,
       9,    10,    11,    43,    13,     0,     1,     3,    51,     4,
      19,    51,    21,    22,    43,    50,    25,    26,   206,   181,
      29,    30,    31,    50,    45,    34,    42,    36,    74,    45,
      50,    27,    48,    49,    80,    16,    32,    18,    52,    20,
      42,    50,    56,    45,    51,     5,    41,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    37,    17,    51,    19,
      51,    21,    22,    23,    24,    25,    26,    46,    47,    29,
      30,    31,    18,    33,    34,    51,    36,    51,    38,    39,
      40,     5,    28,     7,     8,     7,     8,    51,    12,    35,
      14,    15,    42,    17,    42,    45,    51,    45,    51,    23,
      24,    23,    24,    42,     3,     4,    45,    48,    49,    33,
      48,    49,    48,    49,    38,    39,    40,     9,    10,    11,
      51,    13,    51,    44,    45,    44,    45,    19,    51,    21,
      22,    83,    84,    25,    26,    51,    51,    29,    30,    31,
      13,    51,    34,    51,    36,    51,    19,    51,    51,    22,
      45,    42,    25,    26,    41,     3,    29,    30,    31,     3,
      43,    34,     3,    36,    52,    53,    54,    55,    56,    57,
      58,    59,     3,     3,     3,    42,     4,     3,     3,     3,
       3,     3,     3,    42,    42,    45,     4,    49,    45,    45,
       4,     3,    44,     3,     3,     3,     3,     3,    45,     4,
      42,     4,    48,     3,     3,    60,    45,     4,    44,    60,
       3,    45,    45,   106,     9,   109,    -1,    -1,    45,    -1,
      -1,   111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    62,    65,    64,     0,    41,    66,    68,
      76,    80,    89,     4,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    17,    19,    21,
      22,    23,    24,    25,    26,    29,    30,    31,    33,    34,
      36,    38,    39,    40,    50,    67,    69,    71,    73,    77,
      78,    81,    82,    83,    90,    91,    41,    68,    76,    89,
      41,    76,    80,    89,    41,    68,    68,    68,    42,    45,
      48,    49,    42,    45,    51,    63,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,     3,    69,    77,    90,    46,    47,
      70,    45,    45,    42,     4,    43,    51,    79,    42,    45,
      42,    45,    41,    76,    89,    68,    68,     3,     3,    83,
      43,     3,     3,     3,     3,    83,     3,     4,    92,    18,
      28,    35,    95,    92,    92,     3,    27,    32,    94,     4,
       3,     3,     3,    16,    18,    20,    37,    93,     3,     3,
       3,    42,    42,    42,    42,     3,    50,    72,    75,     3,
      50,    74,    75,    45,     4,    79,    82,    91,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    84,    85,    48,
      49,    45,    48,    49,    45,     4,    44,    45,     3,    44,
       3,    86,     3,     3,    74,    75,     3,     3,     3,    74,
      45,     4,    42,    60,    48,    87,    45,     4,    44,    45,
       3,     3,    52,    56,    88,    74,     4,    60,    44,     3
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
      yyerror (ff, ll, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, ll)
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
		  Type, Value, ff, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ff, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ff);
  YYUSE (ll);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ff, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ff, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, ff, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    FitsFile* ff;
    ffFlexLexer* ll;
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
		       		       , ff, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ff, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ff, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ff);
  YYUSE (ll);

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
int yyparse (FitsFile* ff, ffFlexLexer* ll);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (FitsFile* ff, ffFlexLexer* ll)
#else
int
yyparse (ff, ll)
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

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
        case 24:
#line 115 "parser.Y"
    {GOTOARR(0);}
    break;

  case 26:
#line 117 "parser.Y"
    {GOTOFILT(0);}
    break;

  case 27:
#line 118 "parser.Y"
    {ff->setValid(1);ff->setpFilter(ff_filter);;}
    break;

  case 29:
#line 122 "parser.Y"
    {ff->setpName((yyvsp[(1) - (1)].str));;}
    break;

  case 30:
#line 132 "parser.Y"
    {ff->setpExt((yyvsp[(2) - (3)].str));;}
    break;

  case 31:
#line 133 "parser.Y"
    {ff->setpIndex((yyvsp[(2) - (3)].integer));;}
    break;

  case 32:
#line 136 "parser.Y"
    {ff->setpExt((yyvsp[(1) - (2)].str));;}
    break;

  case 33:
#line 137 "parser.Y"
    {ff->setpIndex((yyvsp[(1) - (2)].integer));;}
    break;

  case 44:
#line 153 "parser.Y"
    {ff->setpcoord(0);;}
    break;

  case 45:
#line 154 "parser.Y"
    {ff->setpcoord(1);;}
    break;

  case 46:
#line 155 "parser.Y"
    {ff->setpcoord(1);;}
    break;

  case 47:
#line 159 "parser.Y"
    {
	  // this is not a mistake
	  // need to fool parser into processing "xy0:xy1,block"
	  ff->setpxmin((yyvsp[(1) - (3)].integer)); ff->setpxmax((yyvsp[(3) - (3)].integer)); ff->setpxvalid(1);
	  ff->setpymin((yyvsp[(1) - (3)].integer)); ff->setpymax((yyvsp[(3) - (3)].integer)); ff->setpyvalid(1);
	;}
    break;

  case 48:
#line 166 "parser.Y"
    {ff->setpxmin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpxmax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpxvalid(1);;}
    break;

  case 49:
#line 168 "parser.Y"
    {
	  // this is not a mistake
	  // need to fool parser into processing "*,block"
	  ff->setpxvalid(0); ff->setpyvalid(0);
	;}
    break;

  case 50:
#line 176 "parser.Y"
    {ff->setpymin((yyvsp[(1) - (3)].integer)); ff->setpymax((yyvsp[(3) - (3)].integer)); ff->setpyvalid(1);;}
    break;

  case 51:
#line 178 "parser.Y"
    {ff->setpymin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpymax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpyvalid(1);;}
    break;

  case 52:
#line 179 "parser.Y"
    {ff->setpyvalid(0);;}
    break;

  case 53:
#line 183 "parser.Y"
    {
	  ff->setpxmin((yyvsp[(3) - (5)].integer)-(yyvsp[(1) - (5)].integer)/2); ff->setpxmax((yyvsp[(3) - (5)].integer)+(yyvsp[(1) - (5)].integer)/2); ff->setpxvalid(1);
	  ff->setpymin((yyvsp[(5) - (5)].integer)-(yyvsp[(1) - (5)].integer)/2); ff->setpymax((yyvsp[(5) - (5)].integer)+(yyvsp[(1) - (5)].integer)/2); ff->setpyvalid(1);
 	;}
    break;

  case 54:
#line 190 "parser.Y"
    {ff->setpzmin((yyvsp[(1) - (3)].integer)); ff->setpzmax((yyvsp[(3) - (3)].integer)); ff->setpzvalid(1);;}
    break;

  case 55:
#line 192 "parser.Y"
    {ff->setpzmin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpzmax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpzvalid(1);;}
    break;

  case 56:
#line 193 "parser.Y"
    {ff->setpzvalid(0);;}
    break;

  case 57:
#line 196 "parser.Y"
    {ff->setpblock((yyvsp[(1) - (1)].integer)); ff->setpbvalid(1);;}
    break;

  case 65:
#line 211 "parser.Y"
    {ff->setpBinXY((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].str));;}
    break;

  case 66:
#line 212 "parser.Y"
    {ff->setpBinXY((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 67:
#line 213 "parser.Y"
    {ff->setpBinXYZ((yyvsp[(2) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(6) - (7)].str));;}
    break;

  case 68:
#line 214 "parser.Y"
    {ff->setpBinXYZ((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 69:
#line 215 "parser.Y"
    {ff->setpBinZ((yyvsp[(2) - (3)].str));;}
    break;

  case 70:
#line 216 "parser.Y"
    {ff->setpBinZ((yyvsp[(1) - (1)].str));;}
    break;

  case 74:
#line 226 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));;}
    break;

  case 75:
#line 227 "parser.Y"
    {ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 76:
#line 228 "parser.Y"
    {ff->setpDepth((yyvsp[(3) - (3)].integer));;}
    break;

  case 77:
#line 229 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 78:
#line 230 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 79:
#line 231 "parser.Y"
    {ff->setpBitpix((yyvsp[(3) - (3)].integer));;}
    break;

  case 80:
#line 232 "parser.Y"
    {ff->setpSkip((yyvsp[(3) - (3)].integer));;}
    break;

  case 81:
#line 233 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 82:
#line 234 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 83:
#line 235 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 84:
#line 238 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 85:
#line 239 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 86:
#line 240 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 87:
#line 241 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 89:
#line 247 "parser.Y"
    {ff->setpBitpix(8);;}
    break;

  case 90:
#line 248 "parser.Y"
    {ff->setpBitpix(16);;}
    break;

  case 91:
#line 249 "parser.Y"
    {ff->setpBitpix(-16);;}
    break;

  case 92:
#line 250 "parser.Y"
    {ff->setpBitpix(32);;}
    break;

  case 93:
#line 251 "parser.Y"
    {ff->setpBitpix(64);;}
    break;

  case 94:
#line 252 "parser.Y"
    {ff->setpBitpix(-32);;}
    break;

  case 95:
#line 253 "parser.Y"
    {ff->setpBitpix(-32);;}
    break;

  case 96:
#line 254 "parser.Y"
    {ff->setpBitpix(-64);;}
    break;

  case 97:
#line 257 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (1)].integer));ff->setpHeight((yyvsp[(1) - (1)].integer));;}
    break;

  case 98:
#line 258 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 99:
#line 260 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (5)].integer));ff->setpHeight((yyvsp[(3) - (5)].integer));ff->setpDepth((yyvsp[(5) - (5)].integer));;}
    break;

  case 101:
#line 264 "parser.Y"
    {ff->setpSkip((yyvsp[(2) - (2)].integer));;}
    break;

  case 103:
#line 268 "parser.Y"
    {ff->setpArch(FitsFile::LITTLE);;}
    break;

  case 104:
#line 269 "parser.Y"
    {ff->setpArch(FitsFile::BIG);;}
    break;

  case 110:
#line 282 "parser.Y"
    {ff->setpHiPSOrder((yyvsp[(3) - (3)].integer));;}
    break;

  case 111:
#line 283 "parser.Y"
    {ff->setpHiPSSlice((yyvsp[(3) - (3)].integer));;}
    break;

  case 113:
#line 285 "parser.Y"
    {ff->setpHPXColumn((yyvsp[(3) - (3)].integer));;}
    break;

  case 114:
#line 286 "parser.Y"
    {ff->setpHPXQuad((yyvsp[(3) - (3)].integer));;}
    break;

  case 115:
#line 287 "parser.Y"
    {ff->setpHPXProj((yyvsp[(3) - (3)].str));;}
    break;

  case 116:
#line 288 "parser.Y"
    {ff->setpHPXLon0((yyvsp[(3) - (3)].dbl));;}
    break;

  case 117:
#line 289 "parser.Y"
    {ff->setpHPXLat0((yyvsp[(3) - (3)].dbl));;}
    break;

  case 118:
#line 290 "parser.Y"
    {ff->setpHPXFov((yyvsp[(3) - (3)].dbl));;}
    break;

  case 119:
#line 294 "parser.Y"
    {(yyval.dbl) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 120:
#line 296 "parser.Y"
    {
	  char* end;
	  (yyval.dbl) = strtod((yyvsp[(1) - (1)].str), &end);
	  if (end == (yyvsp[(1) - (1)].str) || *end)
	    YYERROR;
	;}
    break;

  case 121:
#line 304 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::EQU);;}
    break;

  case 122:
#line 305 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::GAL);;}
    break;

  case 123:
#line 306 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::ECL);;}
    break;

  case 124:
#line 307 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::UNKNOWN);;}
    break;

  case 125:
#line 310 "parser.Y"
    {ff->setpHPXOrder(FitsHPX::RING);;}
    break;

  case 126:
#line 311 "parser.Y"
    {ff->setpHPXOrder(FitsHPX::NESTED);;}
    break;

  case 127:
#line 314 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::EQUATOR);;}
    break;

  case 128:
#line 315 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::NORTH);;}
    break;

  case 129:
#line 316 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::SOUTH);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2051 "parser.C"
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
      yyerror (ff, ll, YY_("syntax error"));
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
	    yyerror (ff, ll, yymsg);
	  }
	else
	  {
	    yyerror (ff, ll, YY_("syntax error"));
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
		      yytoken, &yylval, ff, ll);
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
		  yystos[yystate], yyvsp, ff, ll);
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
  yyerror (ff, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ff, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ff, ll);
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


#line 319 "parser.Y"


