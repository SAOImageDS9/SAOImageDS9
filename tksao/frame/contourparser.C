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
#define yyparse ctparse
#define yylex   ctlex
#define yyerror cterror
#define yylval  ctlval
#define yychar  ctchar
#define yydebug ctdebug
#define yynerrs ctnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     STRING = 260,
     ANGDEGREE = 261,
     PHYCOORD = 262,
     IMGCOORD = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     EOF_ = 267,
     AMPLIFIER_ = 268,
     B1950_ = 269,
     COLOR_ = 270,
     DASH_ = 271,
     DASHLIST_ = 272,
     DEBUG_ = 273,
     DETECTOR_ = 274,
     ECLIPTIC_ = 275,
     FALSE_ = 276,
     FK4_ = 277,
     FK5_ = 278,
     GALACTIC_ = 279,
     GLOBAL_ = 280,
     ICRS_ = 281,
     IMAGE_ = 282,
     J2000_ = 283,
     LEVEL_ = 284,
     LEVELS_ = 285,
     LINEAR_ = 286,
     N_ = 287,
     NO_ = 288,
     OFF_ = 289,
     ON_ = 290,
     PHYSICAL_ = 291,
     TRUE_ = 292,
     VERSION_ = 293,
     WCS_ = 294,
     WCSA_ = 295,
     WCSB_ = 296,
     WCSC_ = 297,
     WCSD_ = 298,
     WCSE_ = 299,
     WCSF_ = 300,
     WCSG_ = 301,
     WCSH_ = 302,
     WCSI_ = 303,
     WCSJ_ = 304,
     WCSK_ = 305,
     WCSL_ = 306,
     WCSM_ = 307,
     WCSN_ = 308,
     WCSO_ = 309,
     WCSP_ = 310,
     WCSQ_ = 311,
     WCSR_ = 312,
     WCSS_ = 313,
     WCST_ = 314,
     WCSU_ = 315,
     WCSV_ = 316,
     WCSW_ = 317,
     WCSX_ = 318,
     WCSY_ = 319,
     WCSZ_ = 320,
     WIDTH_ = 321,
     Y_ = 322,
     YES_ = 323
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define PHYCOORD 262
#define IMGCOORD 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define EOF_ 267
#define AMPLIFIER_ 268
#define B1950_ 269
#define COLOR_ 270
#define DASH_ 271
#define DASHLIST_ 272
#define DEBUG_ 273
#define DETECTOR_ 274
#define ECLIPTIC_ 275
#define FALSE_ 276
#define FK4_ 277
#define FK5_ 278
#define GALACTIC_ 279
#define GLOBAL_ 280
#define ICRS_ 281
#define IMAGE_ 282
#define J2000_ 283
#define LEVEL_ 284
#define LEVELS_ 285
#define LINEAR_ 286
#define N_ 287
#define NO_ 288
#define OFF_ 289
#define ON_ 290
#define PHYSICAL_ 291
#define TRUE_ 292
#define VERSION_ 293
#define WCS_ 294
#define WCSA_ 295
#define WCSB_ 296
#define WCSC_ 297
#define WCSD_ 298
#define WCSE_ 299
#define WCSF_ 300
#define WCSG_ 301
#define WCSH_ 302
#define WCSI_ 303
#define WCSJ_ 304
#define WCSK_ 305
#define WCSL_ 306
#define WCSM_ 307
#define WCSN_ 308
#define WCSO_ 309
#define WCSP_ 310
#define WCSQ_ 311
#define WCSR_ 312
#define WCSS_ 313
#define WCST_ 314
#define WCSU_ 315
#define WCSV_ 316
#define WCSW_ 317
#define WCSX_ 318
#define WCSY_ 319
#define WCSZ_ 320
#define WIDTH_ 321
#define Y_ 322
#define YES_ 323




/* Copy the first part of user declarations.  */
#line 10 "frame/contourparser.Y"

#define YYDEBUG 1

#define FITSPTR (ct->parent_->findFits())
#define DISCARD_(x) {yyclearin; ctDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "context.h"
#include "fitsimage.h"
#include "contour.h"

#undef yyFlexLexer
#define yyFlexLexer ctFlexLexer
#include <FlexLexer.h>

extern int ctlex(void*, ctFlexLexer*);
extern void cterror(Context*, ctFlexLexer*, const char*);
extern void ctDiscard(int);

static Coord::CoordSystem globalWCS;
static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;

static ContourLevel* cl;
static Contour* cc;

static double localLevel;
static char globalColor[16];
static char localColor[16];
static int globalWidth;
static int localWidth;
static int globalDash;
static int localDash;
static int globalDashList[2];
static int localDashList[2];

static Coord::CoordSystem checkWCSSystem();
static Coord::SkyFrame checkWCSSky();



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
#line 56 "frame/contourparser.Y"
{
#define CTBUFSIZE 2048
  double real;
  int integer;
  char str[CTBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 294 "frame/contourparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 307 "frame/contourparser.C"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  173

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      73,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    72,     2,     2,     2,     2,
      70,    71,     2,     2,    75,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    74,
       2,    69,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    15,    18,    20,    24,
      27,    30,    33,    39,    40,    48,    49,    58,    61,    63,
      66,    67,    71,    75,    77,    78,    82,    84,    87,    88,
      89,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   126,   128,
     130,   132,   134,   135,   136,   138,   140,   142,   144,   146,
     148,   150,   152,   154,   156,   158,   160,   162,   164,   166,
     168,   170,   172,   174,   176,   178,   180,   182,   184,   186,
     188,   190,   192,   194,   196,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   218,   220,   224,   228,   233,   237,
     241,   245,   247,   251,   255,   260,   264,   268,   272,   276,
     280,   284,   288
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,    97,    98,    78,    -1,    78,    79,    89,
      -1,    79,    89,    -1,    -1,    18,    91,    -1,    38,    -1,
      25,   102,    87,    -1,    99,    87,    -1,   101,    87,    -1,
      31,    87,    -1,    30,    69,    70,    83,    71,    -1,    -1,
      29,    69,    90,    80,    98,    87,    84,    -1,    -1,    29,
      69,    90,    81,    98,   104,    87,    84,    -1,    70,    87,
      -1,    85,    -1,    71,    87,    -1,    -1,    72,    82,     5,
      -1,    83,    93,    90,    -1,    90,    -1,    -1,    85,    93,
      86,    -1,    86,    -1,   106,    87,    -1,    -1,    -1,    72,
      88,     5,    -1,    73,    -1,    74,    -1,    12,    -1,     4,
      -1,     3,    -1,    35,    -1,    34,    -1,     3,    -1,    68,
      -1,    67,    -1,    35,    -1,    37,    -1,    33,    -1,    32,
      -1,    34,    -1,    21,    -1,    -1,    75,    -1,     9,    -1,
      10,    -1,    11,    -1,    -1,    -1,    27,    -1,    36,    -1,
      19,    -1,    13,    -1,   100,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      51,    -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,
      22,    -1,    14,    -1,    23,    -1,    28,    -1,    26,    -1,
      24,    -1,    20,    -1,   102,    93,   103,    -1,   103,    -1,
      15,    69,     5,    -1,    16,    69,    92,    -1,    17,    69,
       3,     3,    -1,    39,    69,   100,    -1,    66,    69,     3,
      -1,   104,    93,   105,    -1,   105,    -1,    15,    69,     5,
      -1,    16,    69,    92,    -1,    17,    69,     3,     3,    -1,
      66,    69,     3,    -1,    94,    93,    94,    -1,    95,    93,
      96,    -1,    96,    93,    96,    -1,    90,    93,    90,    -1,
       6,    93,     6,    -1,     8,    93,     8,    -1,     7,    93,
       7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   151,   152,   156,   162,   163,   165,   166,
     170,   175,   180,   181,   181,   182,   182,   183,   188,   189,
     196,   196,   199,   200,   204,   211,   212,   215,   229,   230,
     230,   233,   234,   235,   245,   246,   249,   250,   253,   255,
     256,   257,   258,   260,   261,   262,   263,   266,   267,   270,
     273,   276,   279,   293,   302,   303,   304,   305,   306,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   338,   339,   340,   341,
     342,   343,   344,   347,   348,   351,   352,   353,   354,   355,
     358,   359,   362,   363,   364,   365,   368,   381,   389,   397,
     404,   412,   419
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "ANGDEGREE",
  "PHYCOORD", "IMGCOORD", "SEXSTR", "HMSSTR", "DMSSTR", "EOF_",
  "AMPLIFIER_", "B1950_", "COLOR_", "DASH_", "DASHLIST_", "DEBUG_",
  "DETECTOR_", "ECLIPTIC_", "FALSE_", "FK4_", "FK5_", "GALACTIC_",
  "GLOBAL_", "ICRS_", "IMAGE_", "J2000_", "LEVEL_", "LEVELS_", "LINEAR_",
  "N_", "NO_", "OFF_", "ON_", "PHYSICAL_", "TRUE_", "VERSION_", "WCS_",
  "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_",
  "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_",
  "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_",
  "WCSY_", "WCSZ_", "WIDTH_", "Y_", "YES_", "'='", "'('", "')'", "'#'",
  "'\\n'", "';'", "','", "$accept", "start", "commands", "command", "@1",
  "@2", "@3", "levels", "newcl", "nodes", "node", "comment", "@4",
  "terminator", "numeric", "debug", "yesno", "sp", "sexagesimal", "hms",
  "dms", "initGlobal", "initLocal", "coordSystem", "wcsSystem", "skyFrame",
  "global", "globalProperty", "local", "localProperty", "coord", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,    61,
      40,    41,    35,    10,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    80,    79,    81,    79,    79,    79,    79,
      82,    79,    83,    83,    84,    85,    85,    86,    87,    88,
      87,    89,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      95,    96,    97,    98,    99,    99,    99,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   105,   105,   105,   105,   106,   106,   106,   106,
     106,   106,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     0,     2,     1,     3,     2,
       2,     2,     5,     0,     7,     0,     8,     2,     1,     2,
       0,     3,     3,     1,     0,     3,     1,     2,     0,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     4,     3,     3,
       3,     1,     3,     3,     4,     3,     3,     3,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      52,     0,    53,     1,     5,    35,    34,    47,    47,    47,
      49,    50,    51,    57,    87,     0,    56,    92,    86,    88,
      91,     0,    90,    54,    89,     0,     0,    28,    55,     7,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    28,    28,    20,
       5,     0,    47,    26,    47,    47,    47,    47,    28,    58,
      28,    28,    48,     0,     0,     0,    37,    36,     6,     0,
       0,     0,     0,     0,    47,    94,     0,     0,    29,    11,
      17,    19,     0,     0,    33,    31,    32,     4,     0,     0,
       0,     0,     0,     9,    10,    27,   110,   112,   111,     0,
       0,     0,     0,     0,     8,     0,    13,     0,     0,    21,
       3,    25,   109,   106,   107,   108,    95,    38,    46,    44,
      43,    45,    41,    42,    40,    39,    96,     0,    98,    99,
      93,    53,    53,    47,    23,    30,    97,    28,     0,    12,
       0,    24,     0,     0,     0,     0,    47,   101,    22,    14,
       0,     0,     0,     0,    24,     0,   102,   103,     0,   105,
      16,   100,   104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    60,    61,   141,   142,    92,   143,   159,    62,
      63,    89,   118,    97,    64,    78,   136,    73,    65,    66,
      67,     2,     4,    68,    69,    70,    84,    85,   156,   157,
      71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -100
static const yytype_int16 yypact[] =
{
    -100,     7,  -100,  -100,   184,  -100,  -100,   -61,   -61,   -61,
    -100,  -100,  -100,  -100,  -100,   -25,  -100,  -100,  -100,  -100,
    -100,     9,  -100,  -100,  -100,   -51,   -46,   -28,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,   -28,   -28,  -100,
     114,    -7,     5,  -100,   -61,   -61,   -61,   -61,   -28,  -100,
     -28,   -28,  -100,    39,    40,    38,  -100,  -100,  -100,   -20,
     -19,   -18,   -17,   -16,    -1,  -100,    17,   -15,  -100,  -100,
    -100,  -100,    55,    -7,  -100,  -100,  -100,  -100,    96,    17,
      52,    51,    51,  -100,  -100,  -100,  -100,  -100,  -100,    58,
       1,    61,   218,    62,  -100,     9,    15,    17,    72,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,  -100,
    -100,  -100,  -100,  -100,  -100,  -100,  -100,    79,  -100,  -100,
    -100,  -100,  -100,   -63,  -100,  -100,  -100,   -28,    24,  -100,
      17,  -100,    14,    16,    18,    19,    -1,  -100,  -100,  -100,
      81,     1,    86,    88,  -100,    24,  -100,  -100,    90,  -100,
    -100,  -100,  -100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,  -100,    34,  -100,  -100,  -100,  -100,   -69,  -100,
     -14,   -55,  -100,     3,   -80,  -100,   -64,    -8,    -2,  -100,
     -74,  -100,   -99,  -100,    -4,  -100,  -100,    -6,  -100,   -54,
    -100
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
      74,    75,    90,    91,   127,    94,   116,     3,   149,    76,
      77,   -28,    72,   103,    72,   104,   105,   -18,    86,   122,
       5,     6,   128,    87,    79,    80,    81,   124,   125,   114,
     -15,   -15,   -15,   129,   130,   131,   132,   144,   133,   152,
     153,   154,   147,   148,    88,   106,   108,   107,    82,   109,
     110,   111,   112,   113,    98,   117,    99,   100,   101,   102,
     119,    10,    12,   126,   137,   139,    95,    96,   134,   135,
     158,    88,   -28,   -28,    72,    83,   115,   145,   -18,   -18,
      72,   -15,   146,   160,   121,   161,   166,   162,   163,   168,
     155,   169,   151,   172,    93,   170,   120,   167,   123,     5,
       6,   164,     7,     8,     9,    10,    11,    12,   138,   140,
       0,   171,     0,     0,    -2,     0,     0,     5,     6,     0,
       7,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,     0,    15,    16,    17,   150,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,   165,     0,
      28,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,     5,     6,     0,
       7,     8,     9,    10,    11,    12,     0,    13,    14,     0,
       0,     0,    15,    16,    17,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,     0,     0,     0,
      28,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,    57,    58,    59,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56
};

static const yytype_int16 yycheck[] =
{
       8,     9,    57,    58,     3,    12,    86,     0,    71,    34,
      35,    12,    75,    68,    75,    70,    71,    12,    69,    99,
       3,     4,    21,    69,    15,    16,    17,   101,   102,    84,
      15,    16,    17,    32,    33,    34,    35,   117,    37,    15,
      16,    17,   141,   142,    72,     6,     8,     7,    39,    69,
      69,    69,    69,    69,    62,    70,    64,    65,    66,    67,
       5,     9,    11,     5,     3,     3,    73,    74,    67,    68,
     150,    72,    73,    74,    75,    66,    84,     5,    73,    74,
      75,    66,     3,    69,    98,    69,     5,    69,    69,     3,
      66,     3,   147,     3,    60,   164,    93,   161,   100,     3,
       4,   156,     6,     7,     8,     9,    10,    11,   112,   115,
      -1,   165,    -1,    -1,     0,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      -1,    -1,    18,    19,    20,   143,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,   156,    -1,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    -1,
      -1,    -1,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    70,    71,    72,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    97,     0,    98,     3,     4,     6,     7,     8,
       9,    10,    11,    13,    14,    18,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    36,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    70,    71,    72,
      78,    79,    85,    86,    90,    94,    95,    96,    99,   100,
     101,   106,    75,    93,    93,    93,    34,    35,    91,    15,
      16,    17,    39,    66,   102,   103,    69,    69,    72,    87,
      87,    87,    82,    79,    12,    73,    74,    89,    93,    93,
      93,    93,    93,    87,    87,    87,     6,     7,     8,    69,
      69,    69,    69,    69,    87,    93,    90,    70,    88,     5,
      89,    86,    90,    94,    96,    96,     5,     3,    21,    32,
      33,    34,    35,    37,    67,    68,    92,     3,   100,     3,
     103,    80,    81,    83,    90,     5,     3,    98,    98,    71,
      93,    87,    15,    16,    17,    66,   104,   105,    90,    84,
      69,    69,    69,    69,    87,    93,     5,    92,     3,     3,
      84,   105,     3
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
      yyerror (ct, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, ct, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Context* ct, ctFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ct, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Context* ct;
    ctFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ct);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Context* ct, ctFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ct, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Context* ct;
    ctFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ct, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Context* ct, ctFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, ct, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Context* ct;
    ctFlexLexer* ll;
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
		       		       , ct, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ct, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Context* ct, ctFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ct, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Context* ct;
    ctFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ct);
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
int yyparse (Context* ct, ctFlexLexer* ll);
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
yyparse (Context* ct, ctFlexLexer* ll)
#else
int
yyparse (ct, ll)
    Context* ct;
    ctFlexLexer* ll;
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
        case 5:
#line 156 "frame/contourparser.Y"
    {
	  if (cc && cl) {
	    cl->lcontour().append(cc);
	    cc =NULL;
	  }
	;}
    break;

  case 7:
#line 163 "frame/contourparser.Y"
    {cerr << "DS9 Contour File 7.5" << endl;;}
    break;

  case 9:
#line 167 "frame/contourparser.Y"
    {
	  globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	;}
    break;

  case 10:
#line 171 "frame/contourparser.Y"
    {
	  globalSystem=globalWCS;
	  globalSky=(Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	;}
    break;

  case 11:
#line 176 "frame/contourparser.Y"
    {
	  globalSystem=globalWCS;
	  globalSky=Coord::FK5;
	;}
    break;

  case 13:
#line 181 "frame/contourparser.Y"
    {localLevel = (yyvsp[(3) - (3)].real);}
    break;

  case 15:
#line 182 "frame/contourparser.Y"
    {localLevel = (yyvsp[(3) - (3)].real);}
    break;

  case 17:
#line 184 "frame/contourparser.Y"
    {
	  if (cl)
	    cc = new Contour(cl);
	;}
    break;

  case 19:
#line 190 "frame/contourparser.Y"
    {
	  if (cc && cl) {
	    cl->lcontour().append(cc);
	    cc =NULL;
	  }
	;}
    break;

  case 20:
#line 196 "frame/contourparser.Y"
    {DISCARD_(1);;}
    break;

  case 24:
#line 204 "frame/contourparser.Y"
    {
	  if (cl)
	    ct->contourAppendAux(cl);
	  cl = new ContourLevel(ct->parent_, localLevel, localColor, localWidth, localDash, localDashList);
        ;}
    break;

  case 27:
#line 216 "frame/contourparser.Y"
    {
	  if (cc)
	    cc->lvertex().append(new Vertex((yyvsp[(1) - (2)].vector)));
	  else {
	    if (!cl)
	      cl = new ContourLevel(ct->parent_, localLevel, localColor, localWidth, localDash, localDashList);
	    if (!cc)
	      cc = new Contour(cl);
	    cc->lvertex().append(new Vertex((yyvsp[(1) - (2)].vector)));
	  }
        ;}
    break;

  case 29:
#line 230 "frame/contourparser.Y"
    {DISCARD_(1);;}
    break;

  case 33:
#line 236 "frame/contourparser.Y"
    {
	  if (cl) {
	    ct->contourAppendAux(cl);
	    cl =NULL;
	  }
	  YYACCEPT;
	;}
    break;

  case 34:
#line 245 "frame/contourparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 35:
#line 246 "frame/contourparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 36:
#line 249 "frame/contourparser.Y"
    {yydebug=1;;}
    break;

  case 37:
#line 250 "frame/contourparser.Y"
    {yydebug=0;;}
    break;

  case 38:
#line 253 "frame/contourparser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 39:
#line 255 "frame/contourparser.Y"
    {(yyval.integer)=1;;}
    break;

  case 40:
#line 256 "frame/contourparser.Y"
    {(yyval.integer)=1;;}
    break;

  case 41:
#line 257 "frame/contourparser.Y"
    {(yyval.integer)=1;;}
    break;

  case 42:
#line 258 "frame/contourparser.Y"
    {(yyval.integer)=1;;}
    break;

  case 43:
#line 260 "frame/contourparser.Y"
    {(yyval.integer)=0;;}
    break;

  case 44:
#line 261 "frame/contourparser.Y"
    {(yyval.integer)=0;;}
    break;

  case 45:
#line 262 "frame/contourparser.Y"
    {(yyval.integer)=0;;}
    break;

  case 46:
#line 263 "frame/contourparser.Y"
    {(yyval.integer)=0;;}
    break;

  case 49:
#line 270 "frame/contourparser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 50:
#line 273 "frame/contourparser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 51:
#line 276 "frame/contourparser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 52:
#line 279 "frame/contourparser.Y"
    {
          cl = NULL;
	  cc = NULL;
	  globalSystem = Coord::WCS;
	  globalWCS = ct->contourWCSSystem();
	  globalSky = ct->contourWCSSkyFrame();
	  strcpy(globalColor,"green");
	  globalDash = 0;
	  globalDashList[0] = 8;
	  globalDashList[1] = 3;
          globalWidth = 1;
	;}
    break;

  case 53:
#line 293 "frame/contourparser.Y"
    {
	  strcpy(localColor,globalColor);
	  localDash = globalDash;
	  localDashList[0] = globalDashList[0];
	  localDashList[1] = globalDashList[1];
          localWidth = globalWidth;
	;}
    break;

  case 54:
#line 302 "frame/contourparser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 55:
#line 303 "frame/contourparser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 56:
#line 304 "frame/contourparser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 57:
#line 305 "frame/contourparser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 58:
#line 306 "frame/contourparser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 59:
#line 309 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 60:
#line 310 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 61:
#line 311 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 62:
#line 312 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 63:
#line 313 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 64:
#line 314 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 65:
#line 315 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 66:
#line 316 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 67:
#line 317 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 68:
#line 318 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 69:
#line 319 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 70:
#line 320 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 71:
#line 321 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 72:
#line 322 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 73:
#line 323 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 74:
#line 324 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 75:
#line 325 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 76:
#line 326 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 77:
#line 327 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 78:
#line 328 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 79:
#line 329 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 80:
#line 330 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 81:
#line 331 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 82:
#line 332 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 83:
#line 333 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 84:
#line 334 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 85:
#line 335 "frame/contourparser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 86:
#line 338 "frame/contourparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 87:
#line 339 "frame/contourparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 88:
#line 340 "frame/contourparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 89:
#line 341 "frame/contourparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 90:
#line 342 "frame/contourparser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 91:
#line 343 "frame/contourparser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 92:
#line 344 "frame/contourparser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 95:
#line 351 "frame/contourparser.Y"
    {strncpy(globalColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 96:
#line 352 "frame/contourparser.Y"
    {globalDash = (yyvsp[(3) - (3)].integer);;}
    break;

  case 97:
#line 353 "frame/contourparser.Y"
    {globalDashList[0] =(yyvsp[(3) - (4)].integer); globalDashList[1] =(yyvsp[(4) - (4)].integer);;}
    break;

  case 98:
#line 354 "frame/contourparser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 99:
#line 355 "frame/contourparser.Y"
    {globalWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 102:
#line 362 "frame/contourparser.Y"
    {strncpy(localColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 103:
#line 363 "frame/contourparser.Y"
    {localDash = (yyvsp[(3) - (3)].integer);;}
    break;

  case 104:
#line 364 "frame/contourparser.Y"
    {localDashList[0] =(yyvsp[(3) - (4)].integer); localDashList[1] =(yyvsp[(4) - (4)].integer);;}
    break;

  case 105:
#line 365 "frame/contourparser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 106:
#line 369 "frame/contourparser.Y"
    {
	  Vector r;
	  Coord::CoordSystem sys = checkWCSSystem();
	  Coord::SkyFrame sky = checkWCSSky();
	  if (sky == Coord::GALACTIC || sky == Coord::ECLIPTIC) 
	    r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), sys, sky);
	  else
	    r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real)*360./24.,(yyvsp[(3) - (3)].real)), sys, sky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 107:
#line 382 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 108:
#line 390 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 109:
#line 398 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), globalSystem, globalSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 110:
#line 405 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 111:
#line 413 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 112:
#line 420 "frame/contourparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 2248 "frame/contourparser.C"
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
      yyerror (ct, ll, YY_("syntax error"));
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
	    yyerror (ct, ll, yymsg);
	  }
	else
	  {
	    yyerror (ct, ll, YY_("syntax error"));
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
		      yytoken, &yylval, ct, ll);
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
		  yystos[yystate], yyvsp, ct, ll);
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
  yyerror (ct, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ct, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ct, ll);
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


#line 426 "frame/contourparser.Y"


static Coord::CoordSystem checkWCSSystem()
{
  switch (globalSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::WCS;
  default:
   return globalSystem;
  }
}

static Coord::SkyFrame checkWCSSky()
{
  switch (globalSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::FK5;
  default:
   return globalSky;
  }
}


