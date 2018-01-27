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
#define yyparse prosparse
#define yylex   proslex
#define yyerror proserror
#define yylval  proslval
#define yychar  proschar
#define yydebug prosdebug
#define yynerrs prosnerrs


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
     ARCMINUTE = 262,
     ARCSECOND = 263,
     ANGRADIAN = 264,
     SEXSTR = 265,
     HMSSTR = 266,
     DMSSTR = 267,
     EOF_ = 268,
     ANNULUS_ = 269,
     B1950_ = 270,
     BOX_ = 271,
     CIRCLE_ = 272,
     DEBUG_ = 273,
     ECLIPTIC_ = 274,
     ELLIPSE_ = 275,
     EQUATORIAL_ = 276,
     GALACTIC_ = 277,
     J2000_ = 278,
     LOGICAL_ = 279,
     N_ = 280,
     OFF_ = 281,
     ON_ = 282,
     PHYSICAL_ = 283,
     POINT_ = 284,
     POLYGON_ = 285,
     ROTBOX_ = 286,
     VERSION_ = 287
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define ARCMINUTE 262
#define ARCSECOND 263
#define ANGRADIAN 264
#define SEXSTR 265
#define HMSSTR 266
#define DMSSTR 267
#define EOF_ 268
#define ANNULUS_ 269
#define B1950_ 270
#define BOX_ 271
#define CIRCLE_ 272
#define DEBUG_ 273
#define ECLIPTIC_ 274
#define ELLIPSE_ 275
#define EQUATORIAL_ 276
#define GALACTIC_ 277
#define J2000_ 278
#define LOGICAL_ 279
#define N_ 280
#define OFF_ 281
#define ON_ 282
#define PHYSICAL_ 283
#define POINT_ 284
#define POLYGON_ 285
#define ROTBOX_ 286
#define VERSION_ 287




/* Copy the first part of user declarations.  */
#line 10 "frame/prosparser.Y"

#define YYDEBUG 1

#define FITSPTR (fr->findFits())
#define DISCARD_(x) {yyclearin; prosDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer prosFlexLexer
#include <FlexLexer.h>

extern int proslex(void*, prosFlexLexer*);
extern void proserror(Base*, prosFlexLexer*, const char*);
extern void prosDiscard(int);

static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame localSky;

static unsigned short globalProps;
static unsigned short localProps;

static const char *color = "green";
static int dash[] ={8,3};
static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";

static char localComment[80];

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static double aAnnuli[MAXANNULI];
static Vector aVector[MAXANNULI];
static int aNum;
static int aStatus;
static Vector aCenter;
static double aAngle;
static unsigned short aProps;
static char aComment[80];

static void setProps(unsigned short* props, unsigned short prop, int value);
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
#line 66 "frame/prosparser.Y"
{
#define PROSBUFSIZE 2048
  double real;
  int integer;
  char str[PROSBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 232 "frame/prosparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "frame/prosparser.C"

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
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,    41,     2,
      36,    37,     2,    39,    35,    40,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    15,    18,    20,    21,
      25,    26,    30,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    51,    53,    54,    56,    57,    59,    60,    62,
      64,    66,    68,    70,    72,    74,    76,    80,    84,    88,
      92,    96,    98,   100,   102,   106,   110,   114,   118,   122,
     124,   126,   129,   131,   133,   135,   137,   139,   141,   142,
     143,   144,   146,   148,   156,   166,   167,   180,   192,   202,
     221,   231,   241,   260,   266,   267,   274,   278,   280,   282,
     286,   288,   290,   291,   292,   293,   297,   298,   302,   304,
     305
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    68,    46,    78,    -1,    46,    47,    50,
      -1,    47,    50,    -1,    -1,    18,    52,    -1,    32,    -1,
      -1,    65,    48,    79,    -1,    -1,    66,    49,    79,    -1,
      69,    70,    71,    -1,    81,    -1,    33,    -1,    34,    -1,
      13,    -1,     4,    -1,     3,    -1,    27,    -1,    26,    -1,
      -1,    35,    -1,    -1,    36,    -1,    -1,    37,    -1,    -1,
      57,    -1,    51,    -1,     6,    -1,     9,    -1,    51,    -1,
       6,    -1,     7,    -1,     8,    -1,    51,    53,    51,    -1,
       6,    53,     6,    -1,     7,    53,     7,    -1,     8,    53,
       8,    -1,    25,    38,     3,    -1,    10,    -1,    11,    -1,
      12,    -1,    61,    53,    61,    -1,    62,    53,    63,    -1,
      63,    53,    63,    -1,    51,    53,    51,    -1,     6,    53,
       6,    -1,    24,    -1,    28,    -1,    21,    67,    -1,    15,
      -1,    23,    -1,    22,    -1,    19,    -1,    15,    -1,    23,
      -1,    -1,    -1,    -1,    39,    -1,    40,    -1,    17,    54,
      64,    53,    58,    55,    83,    -1,    14,    54,    64,    53,
      58,    53,    58,    55,    83,    -1,    -1,    14,    54,    64,
      53,    58,    53,    58,    53,    72,    76,    55,    83,    -1,
      14,    54,    64,    53,    58,    53,    58,    53,    60,    55,
      83,    -1,    20,    54,    64,    53,    59,    53,    56,    55,
      83,    -1,    20,    54,    64,    53,    59,    53,    56,    55,
      41,    42,    20,    54,    64,    53,    59,    53,    56,    55,
      -1,    16,    54,    64,    53,    59,    53,    56,    55,    83,
      -1,    31,    54,    64,    53,    59,    53,    56,    55,    83,
      -1,    16,    54,    64,    53,    59,    53,    56,    55,    41,
      42,    16,    54,    64,    53,    59,    53,    56,    55,    -1,
      29,    54,    64,    55,    83,    -1,    -1,    30,    73,    54,
      74,    55,    83,    -1,    74,    53,    75,    -1,    75,    -1,
      64,    -1,    76,    53,    77,    -1,    77,    -1,    58,    -1,
      -1,    -1,    -1,    43,    80,     5,    -1,    -1,    43,    82,
       5,    -1,    78,    -1,    -1,    43,    84,     5,    78,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   126,   126,   129,   130,   133,   134,   135,   136,   136,
     137,   137,   138,   139,   142,   143,   144,   147,   148,   151,
     152,   155,   156,   159,   160,   163,   164,   167,   168,   171,
     172,   173,   176,   177,   178,   179,   182,   189,   196,   203,
     212,   215,   218,   221,   224,   237,   245,   253,   260,   270,
     271,   274,   275,   276,   277,   278,   281,   282,   285,   296,
     308,   309,   310,   314,   317,   321,   321,   330,   335,   349,
     356,   370,   373,   380,   384,   384,   389,   390,   393,   396,
     397,   400,   404,   431,   432,   432,   435,   435,   438,   439,
     439
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "ANGDEGREE",
  "ARCMINUTE", "ARCSECOND", "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR",
  "EOF_", "ANNULUS_", "B1950_", "BOX_", "CIRCLE_", "DEBUG_", "ECLIPTIC_",
  "ELLIPSE_", "EQUATORIAL_", "GALACTIC_", "J2000_", "LOGICAL_", "N_",
  "OFF_", "ON_", "PHYSICAL_", "POINT_", "POLYGON_", "ROTBOX_", "VERSION_",
  "'\\n'", "';'", "','", "'('", "')'", "'='", "'+'", "'-'", "'&'", "'!'",
  "'#'", "$accept", "start", "commands", "command", "@1", "@2",
  "terminator", "numeric", "debug", "sp", "bp", "ep", "optangle", "angle",
  "value", "vvalue", "numberof", "sexagesimal", "hms", "dms", "coord",
  "coordSystem", "skyFrame", "equatorial", "initGlobal", "initLocal",
  "include", "shape", "@3", "@4", "polyNodes", "polyNode", "aRads", "aRad",
  "processAnnulus", "comment", "@5", "generalComment", "@6",
  "shapeComment", "@7", 0
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
     285,   286,   287,    10,    59,    44,    40,    41,    61,    43,
      45,    38,    33,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    47,    48,    47,
      49,    47,    47,    47,    50,    50,    50,    51,    51,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      60,    61,    62,    63,    64,    64,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    67,    67,    68,    69,
      70,    70,    70,    71,    71,    72,    71,    71,    71,    71,
      71,    71,    71,    71,    73,    71,    74,    74,    75,    76,
      76,    77,    78,    79,    80,    79,    82,    81,    83,    84,
      83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     0,     2,     1,     0,     3,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     0,     0,
       0,     1,     1,     7,     9,     0,    12,    11,     9,    18,
       9,     9,    18,     5,     0,     6,     3,     1,     1,     3,
       1,     1,     0,     0,     0,     3,     0,     3,     1,     0,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      58,     0,    59,     1,    52,     0,    55,     0,    54,    53,
      49,    50,     7,    86,    59,     0,     8,    10,    60,    13,
      20,    19,     6,    56,    57,    51,     0,     0,     2,    16,
      14,    15,     4,    83,    83,    61,    62,     0,    87,     3,
      84,     9,    11,    23,    23,    23,    23,    23,    74,    23,
      12,     0,    24,     0,     0,     0,     0,     0,    23,     0,
      85,    18,    17,    21,    41,    42,    43,    21,    21,    21,
      21,    21,    21,    21,    21,    25,     0,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    82,
      78,    21,    77,     0,    48,    47,    44,    45,    46,    33,
      34,    35,    32,    21,    21,    21,    21,    21,    21,    25,
      21,    89,    88,    73,     0,    82,    21,     0,     0,     0,
       0,     0,    27,    82,    27,     0,    76,    75,    27,    21,
      37,    38,    39,    36,    30,    31,    29,    25,    28,    63,
      25,    82,    25,    65,    82,    82,    82,    90,    82,     0,
      25,     0,    64,     0,    70,     0,    68,    71,     0,    82,
      81,    21,    80,     0,     0,    40,    67,     0,    82,    23,
      23,    79,    66,     0,     0,    21,    21,     0,     0,    21,
      21,    27,    27,    25,    25,    72,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    14,    15,    33,    34,    32,    67,    22,    79,
      53,    89,   137,   138,   160,   108,   150,    68,    69,    70,
      90,    16,    17,    25,     2,    18,    37,    50,   151,    58,
      91,    92,   161,   162,   112,    41,    51,    19,    26,   113,
     125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     -92,     2,   163,   -92,   -92,    17,   -92,    19,   -92,   -92,
     -92,   -92,   -92,   -92,   132,     7,   -92,   -92,     6,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,    13,     7,   -92,   -92,
     -92,   -92,   -92,   -36,   -36,   -92,   -92,    72,   -92,   -92,
     -92,   -92,   -92,    12,    12,    12,    12,    12,   -92,    12,
     -92,    48,   -92,   197,   197,   197,   197,   197,    12,   197,
     -92,   -92,   -92,    32,   -92,   -92,   -92,    32,    32,    32,
      32,    32,    32,    32,    32,    33,   197,    32,   -92,    63,
      52,    65,    61,    61,   118,   207,   118,   207,   -92,    40,
     -92,   155,   -92,   207,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    32,    32,    32,    32,    32,    32,    33,
      32,   -92,   -92,   -92,   197,    40,    32,   118,    90,    91,
      89,    52,   102,    40,   102,   105,   -92,   -92,   102,   155,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,    33,   -92,   -92,
      33,   -92,    33,    82,    40,   -19,    -5,   -92,    40,    74,
      33,   118,   -92,    73,   -92,    75,   -92,   -92,   115,    40,
     -92,   155,   -92,   107,   116,   -92,   -92,   118,    40,    12,
      12,   -92,   -92,   197,   197,    32,    32,   207,   207,    32,
      32,   102,   102,    33,    33,   -92,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,   121,   -92,   -92,   112,    -8,   -92,   -42,
     -41,   -90,   -91,   -92,   -63,   -78,   -92,    59,   -92,   -25,
     -43,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,    27,   -92,   -23,   -14,   108,   -92,   -92,   -92,   -64,
     -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -83
static const yytype_int16 yytable[] =
{
      28,   115,     3,    54,    55,    56,    57,    40,    59,   110,
      71,    72,    73,    74,    75,   116,    77,    76,    38,   123,
      29,   103,   153,   109,   111,    80,    81,    82,    83,    84,
      85,    86,    87,   140,    23,    93,   155,   142,   111,   144,
      30,    31,    24,    20,    21,    35,    36,   145,    52,   114,
     146,   127,   148,    60,   129,    61,    62,    97,    98,   139,
     159,   117,   118,   119,   120,   121,   122,    78,   124,    94,
      88,   168,    95,    66,   128,    64,   102,   107,   102,   107,
     152,   154,   156,   111,   157,   107,    43,   143,    44,    45,
     183,   184,    46,   185,   186,   166,   130,   132,   131,   179,
     180,    47,    48,    49,   172,    61,    62,   149,   134,   102,
     141,   135,   158,   133,   136,   163,   136,   164,   165,   167,
     136,    61,    62,   169,    99,   100,   101,   147,   173,   174,
     175,   176,   -82,   177,   178,    27,   170,   181,   182,    39,
      96,   126,    42,   102,   171,    -5,     0,     4,     0,     0,
       5,     6,     0,     7,     8,     9,    10,     0,     0,   102,
      11,     0,     0,     0,    12,    -5,    -5,     0,   -25,   107,
     107,     0,     0,   136,   136,    13,    -5,     0,     4,     0,
       0,     5,     6,     0,     7,     8,     9,    10,   -25,   -25,
      78,    11,    88,     0,     0,    12,    -5,    -5,   -25,     0,
      61,    62,     0,    63,     0,     0,    13,    64,    65,    66,
      61,    62,     0,   104,   105,   106
};

static const yytype_int16 yycheck[] =
{
      14,    91,     0,    44,    45,    46,    47,    43,    49,    87,
      53,    54,    55,    56,    57,    93,    59,    58,     5,   109,
      13,    84,    41,    86,    43,    67,    68,    69,    70,    71,
      72,    73,    74,   124,    15,    77,    41,   128,    43,   129,
      33,    34,    23,    26,    27,    39,    40,   137,    36,    91,
     140,   115,   142,     5,   117,     3,     4,    82,    83,   123,
     150,   103,   104,   105,   106,   107,   108,    35,   110,     6,
      37,   161,    80,    12,   116,    10,    84,    85,    86,    87,
     144,   145,   146,    43,   148,    93,    14,   129,    16,    17,
     181,   182,    20,   183,   184,   159,     6,     8,     7,   177,
     178,    29,    30,    31,   168,     3,     4,    25,     6,   117,
       5,     9,    38,   121,   122,    42,   124,    42,     3,   161,
     128,     3,     4,    16,     6,     7,     8,   141,   169,   170,
     173,   174,     0,   175,   176,    14,    20,   179,   180,    27,
      81,   114,    34,   151,   167,    13,    -1,    15,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,   167,
      28,    -1,    -1,    -1,    32,    33,    34,    -1,    13,   177,
     178,    -1,    -1,   181,   182,    43,    13,    -1,    15,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    33,    34,
      35,    28,    37,    -1,    -1,    32,    33,    34,    43,    -1,
       3,     4,    -1,     6,    -1,    -1,    43,    10,    11,    12,
       3,     4,    -1,     6,     7,     8
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    68,     0,    15,    18,    19,    21,    22,    23,
      24,    28,    32,    43,    46,    47,    65,    66,    69,    81,
      26,    27,    52,    15,    23,    67,    82,    47,    78,    13,
      33,    34,    50,    48,    49,    39,    40,    70,     5,    50,
      43,    79,    79,    14,    16,    17,    20,    29,    30,    31,
      71,    80,    36,    54,    54,    54,    54,    54,    73,    54,
       5,     3,     4,     6,    10,    11,    12,    51,    61,    62,
      63,    64,    64,    64,    64,    64,    54,    64,    35,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    37,    55,
      64,    74,    75,    53,     6,    51,    61,    63,    63,     6,
       7,     8,    51,    58,     6,     7,     8,    51,    59,    58,
      59,    43,    78,    83,    53,    55,    59,    53,    53,    53,
      53,    53,    53,    55,    53,    84,    75,    83,    53,    58,
       6,     7,     8,    51,     6,     9,    51,    56,    57,    83,
      56,     5,    56,    53,    55,    55,    55,    78,    55,    25,
      60,    72,    83,    41,    83,    41,    83,    83,    38,    55,
      58,    76,    77,    42,    42,     3,    83,    53,    55,    16,
      20,    77,    83,    54,    54,    64,    64,    53,    53,    59,
      59,    53,    53,    56,    56,    55,    55
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
      yyerror (fr, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, fr, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, prosFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    prosFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (fr);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, prosFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    prosFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, prosFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    prosFlexLexer* ll;
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
		       		       , fr, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, fr, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, prosFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    prosFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (fr);
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
int yyparse (Base* fr, prosFlexLexer* ll);
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
yyparse (Base* fr, prosFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    prosFlexLexer* ll;
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
        case 7:
#line 135 "frame/prosparser.Y"
    {cerr << "PROS" << endl;;}
    break;

  case 8:
#line 136 "frame/prosparser.Y"
    {globalSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 10:
#line 137 "frame/prosparser.Y"
    {globalSystem = Coord::WCS; globalSky = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 16:
#line 144 "frame/prosparser.Y"
    {YYACCEPT;;}
    break;

  case 17:
#line 147 "frame/prosparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 18:
#line 148 "frame/prosparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 19:
#line 151 "frame/prosparser.Y"
    {yydebug=1;;}
    break;

  case 20:
#line 152 "frame/prosparser.Y"
    {yydebug=0;;}
    break;

  case 27:
#line 167 "frame/prosparser.Y"
    {(yyval.real) = 0;;}
    break;

  case 28:
#line 168 "frame/prosparser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 29:
#line 171 "frame/prosparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 30:
#line 172 "frame/prosparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 31:
#line 173 "frame/prosparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 32:
#line 176 "frame/prosparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 33:
#line 177 "frame/prosparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 34:
#line 178 "frame/prosparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 35:
#line 179 "frame/prosparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 36:
#line 183 "frame/prosparser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 37:
#line 190 "frame/prosparser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 38:
#line 197 "frame/prosparser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 39:
#line 204 "frame/prosparser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 40:
#line 212 "frame/prosparser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 41:
#line 215 "frame/prosparser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 42:
#line 218 "frame/prosparser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 43:
#line 221 "frame/prosparser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 44:
#line 225 "frame/prosparser.Y"
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

  case 45:
#line 238 "frame/prosparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 46:
#line 246 "frame/prosparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 47:
#line 254 "frame/prosparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 48:
#line 261 "frame/prosparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 49:
#line 270 "frame/prosparser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 50:
#line 271 "frame/prosparser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 51:
#line 274 "frame/prosparser.Y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);;}
    break;

  case 52:
#line 275 "frame/prosparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 53:
#line 276 "frame/prosparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 54:
#line 277 "frame/prosparser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 55:
#line 278 "frame/prosparser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 56:
#line 281 "frame/prosparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 57:
#line 282 "frame/prosparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 58:
#line 285 "frame/prosparser.Y"
    {
	  // global properties
	  globalSystem = Coord::IMAGE;
	  globalSky = Coord::FK5;
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	;}
    break;

  case 59:
#line 296 "frame/prosparser.Y"
    {
	  // reset maperr flag
	  maperr =0;

	  // global properties
	  localSystem = globalSystem;
	  localSky = globalSky;
	  localProps = globalProps;
	  strcpy(localComment,"");
	;}
    break;

  case 60:
#line 308 "frame/prosparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 61:
#line 309 "frame/prosparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 62:
#line 310 "frame/prosparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 63:
#line 315 "frame/prosparser.Y"
    {fr->createCircleCmd(Vector((yyvsp[(3) - (7)].vector)), (yyvsp[(5) - (7)].real), fill_,
	     color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 64:
#line 318 "frame/prosparser.Y"
    {fr->createAnnulusCmd(Vector((yyvsp[(3) - (9)].vector)),
	    (yyvsp[(5) - (9)].real),(yyvsp[(7) - (9)].real),1,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 65:
#line 321 "frame/prosparser.Y"
    {aNum=2;;}
    break;

  case 66:
#line 323 "frame/prosparser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 67:
#line 331 "frame/prosparser.Y"
    {fr->createAnnulusCmd(Vector((yyvsp[(3) - (11)].vector)),
	    (yyvsp[(5) - (11)].real),(yyvsp[(7) - (11)].real),(yyvsp[(9) - (11)].integer),
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 68:
#line 336 "frame/prosparser.Y"
    {
	  // for ellipse annulus
	  aStatus = 1;
	  aCenter = Vector((yyvsp[(3) - (9)].vector));
	  aAngle = (yyvsp[(7) - (9)].real);
	  aVector[0] = Vector((yyvsp[(5) - (9)].vector));
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createEllipseCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 69:
#line 351 "frame/prosparser.Y"
    {	
	  aStatus = 2;
	  aVector[aNum++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 70:
#line 357 "frame/prosparser.Y"
    {
	  // for box annulus
	  aStatus = 3;
	  aCenter = Vector((yyvsp[(3) - (9)].vector));
	  aAngle = (yyvsp[(7) - (9)].real);
	  aVector[0] = Vector((yyvsp[(5) - (9)].vector));
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createBoxCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 71:
#line 371 "frame/prosparser.Y"
    {fr->createBoxCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 72:
#line 375 "frame/prosparser.Y"
    {	
	  aStatus = 4;
	  aVector[aNum++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 73:
#line 381 "frame/prosparser.Y"
    {fr->createPointCmd(Vector((yyvsp[(3) - (5)].vector)), Point::BOXCIRCLE, POINTSIZE, 
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 74:
#line 384 "frame/prosparser.Y"
    {polylist.deleteAll();;}
    break;

  case 75:
#line 385 "frame/prosparser.Y"
    {fr->createPolygonCmd(polylist, fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 78:
#line 393 "frame/prosparser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 81:
#line 400 "frame/prosparser.Y"
    {aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);;}
    break;

  case 82:
#line 404 "frame/prosparser.Y"
    {
	  switch (aStatus) {
	  case 0: // do nothing
	    break;
	  case 1: // we found just an ellipse, do nothing
	    break;
	  case 2: // ok we have an ellipse annulus
	    fr->markerDeleteLastCmd(); // delete the previous ellipse
	    fr->createEllipseAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  case 3: // we found just a box, do nothing
	    break;
	  case 4: // ok, we have a box annulus
	    fr->markerDeleteLastCmd(); // delete the previous box
	    fr->createBoxAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  }
	  aStatus = 0;
	;}
    break;

  case 84:
#line 432 "frame/prosparser.Y"
    {DISCARD_(1);;}
    break;

  case 86:
#line 435 "frame/prosparser.Y"
    {DISCARD_(1);;}
    break;

  case 89:
#line 439 "frame/prosparser.Y"
    {DISCARD_(0);;}
    break;

  case 90:
#line 440 "frame/prosparser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2084 "frame/prosparser.C"
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
      yyerror (fr, ll, YY_("syntax error"));
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
	    yyerror (fr, ll, yymsg);
	  }
	else
	  {
	    yyerror (fr, ll, YY_("syntax error"));
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
		      yytoken, &yylval, fr, ll);
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
		  yystos[yystate], yyvsp, fr, ll);
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
  yyerror (fr, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, fr, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, fr, ll);
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


#line 443 "frame/prosparser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

static Coord::CoordSystem checkWCSSystem()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::WCS;
  default:
    return localSystem;
  }
}

static Coord::SkyFrame checkWCSSky()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::FK5;
  default:
   return localSky;
  }
}

