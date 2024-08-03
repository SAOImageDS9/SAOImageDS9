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
#define yyparse mkparse
#define yylex   mklex
#define yyerror mkerror
#define yylval  mklval
#define yychar  mkchar
#define yydebug mkdebug
#define yynerrs mknerrs


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
     ANGRADIAN = 262,
     ARCMINUTE = 263,
     ARCSECOND = 264,
     PHYCOORD = 265,
     IMGCOORD = 266,
     SEXSTR = 267,
     HMSSTR = 268,
     DMSSTR = 269,
     EOF_ = 270,
     AMPLIFIER_ = 271,
     ANNULUS_ = 272,
     ARCMIN_ = 273,
     ARCSEC_ = 274,
     ARROW_ = 275,
     B1950_ = 276,
     BACKGROUND_ = 277,
     BEGIN_ = 278,
     BOX_ = 279,
     BOXCIRCLE_ = 280,
     BPANDA_ = 281,
     CALLBACK_ = 282,
     CIRCLE_ = 283,
     CIRCLE3D_ = 284,
     COLOR_ = 285,
     COMPASS_ = 286,
     COMPOSITE_ = 287,
     CPANDA_ = 288,
     CROSS_ = 289,
     DASH_ = 290,
     DASHLIST_ = 291,
     DEBUG_ = 292,
     DEGREES_ = 293,
     DELETE_ = 294,
     DETECTOR_ = 295,
     DIAMOND_ = 296,
     ECLIPTIC_ = 297,
     EDIT_ = 298,
     ELLIPSE_ = 299,
     END_ = 300,
     EPANDA_ = 301,
     FALSE_ = 302,
     FIELD_ = 303,
     FILL_ = 304,
     FIXED_ = 305,
     FK4_ = 306,
     FK5_ = 307,
     FORMAT_ = 308,
     FONT_ = 309,
     GALACTIC_ = 310,
     GLOBAL_ = 311,
     HIGHLITE_ = 312,
     ICRS_ = 313,
     IGNORE_ = 314,
     IMAGE_ = 315,
     INCLUDE_ = 316,
     J2000_ = 317,
     KEY_ = 318,
     LINE_ = 319,
     LINEAR_ = 320,
     MOVE_ = 321,
     N_ = 322,
     NO_ = 323,
     OFF_ = 324,
     ON_ = 325,
     PHYSICAL_ = 326,
     PIE_ = 327,
     PIXELS_ = 328,
     POINT_ = 329,
     POLYGON_ = 330,
     PROJECTION_ = 331,
     PROPERTY_ = 332,
     ROTATE_ = 333,
     ROTBOX_ = 334,
     RULER_ = 335,
     SEGMENT_ = 336,
     SELECT_ = 337,
     SOURCE_ = 338,
     TAG_ = 339,
     TEXT_ = 340,
     TEXTANGLE_ = 341,
     TEXTROTATE_ = 342,
     TILE_ = 343,
     TRUE_ = 344,
     VECTOR_ = 345,
     VERSION_ = 346,
     UNHIGHLITE_ = 347,
     UNSELECT_ = 348,
     UPDATE_ = 349,
     WCS_ = 350,
     WCSA_ = 351,
     WCSB_ = 352,
     WCSC_ = 353,
     WCSD_ = 354,
     WCSE_ = 355,
     WCSF_ = 356,
     WCSG_ = 357,
     WCSH_ = 358,
     WCSI_ = 359,
     WCSJ_ = 360,
     WCSK_ = 361,
     WCSL_ = 362,
     WCSM_ = 363,
     WCSN_ = 364,
     WCSO_ = 365,
     WCSP_ = 366,
     WCSQ_ = 367,
     WCSR_ = 368,
     WCSS_ = 369,
     WCST_ = 370,
     WCSU_ = 371,
     WCSV_ = 372,
     WCSW_ = 373,
     WCSX_ = 374,
     WCSY_ = 375,
     WCSZ_ = 376,
     WCS0_ = 377,
     WIDTH_ = 378,
     X_ = 379,
     Y_ = 380,
     YES_ = 381
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define ARCMINUTE 263
#define ARCSECOND 264
#define PHYCOORD 265
#define IMGCOORD 266
#define SEXSTR 267
#define HMSSTR 268
#define DMSSTR 269
#define EOF_ 270
#define AMPLIFIER_ 271
#define ANNULUS_ 272
#define ARCMIN_ 273
#define ARCSEC_ 274
#define ARROW_ 275
#define B1950_ 276
#define BACKGROUND_ 277
#define BEGIN_ 278
#define BOX_ 279
#define BOXCIRCLE_ 280
#define BPANDA_ 281
#define CALLBACK_ 282
#define CIRCLE_ 283
#define CIRCLE3D_ 284
#define COLOR_ 285
#define COMPASS_ 286
#define COMPOSITE_ 287
#define CPANDA_ 288
#define CROSS_ 289
#define DASH_ 290
#define DASHLIST_ 291
#define DEBUG_ 292
#define DEGREES_ 293
#define DELETE_ 294
#define DETECTOR_ 295
#define DIAMOND_ 296
#define ECLIPTIC_ 297
#define EDIT_ 298
#define ELLIPSE_ 299
#define END_ 300
#define EPANDA_ 301
#define FALSE_ 302
#define FIELD_ 303
#define FILL_ 304
#define FIXED_ 305
#define FK4_ 306
#define FK5_ 307
#define FORMAT_ 308
#define FONT_ 309
#define GALACTIC_ 310
#define GLOBAL_ 311
#define HIGHLITE_ 312
#define ICRS_ 313
#define IGNORE_ 314
#define IMAGE_ 315
#define INCLUDE_ 316
#define J2000_ 317
#define KEY_ 318
#define LINE_ 319
#define LINEAR_ 320
#define MOVE_ 321
#define N_ 322
#define NO_ 323
#define OFF_ 324
#define ON_ 325
#define PHYSICAL_ 326
#define PIE_ 327
#define PIXELS_ 328
#define POINT_ 329
#define POLYGON_ 330
#define PROJECTION_ 331
#define PROPERTY_ 332
#define ROTATE_ 333
#define ROTBOX_ 334
#define RULER_ 335
#define SEGMENT_ 336
#define SELECT_ 337
#define SOURCE_ 338
#define TAG_ 339
#define TEXT_ 340
#define TEXTANGLE_ 341
#define TEXTROTATE_ 342
#define TILE_ 343
#define TRUE_ 344
#define VECTOR_ 345
#define VERSION_ 346
#define UNHIGHLITE_ 347
#define UNSELECT_ 348
#define UPDATE_ 349
#define WCS_ 350
#define WCSA_ 351
#define WCSB_ 352
#define WCSC_ 353
#define WCSD_ 354
#define WCSE_ 355
#define WCSF_ 356
#define WCSG_ 357
#define WCSH_ 358
#define WCSI_ 359
#define WCSJ_ 360
#define WCSK_ 361
#define WCSL_ 362
#define WCSM_ 363
#define WCSN_ 364
#define WCSO_ 365
#define WCSP_ 366
#define WCSQ_ 367
#define WCSR_ 368
#define WCSS_ 369
#define WCST_ 370
#define WCSU_ 371
#define WCSV_ 372
#define WCSW_ 373
#define WCSX_ 374
#define WCSY_ 375
#define WCSZ_ 376
#define WCS0_ 377
#define WIDTH_ 378
#define X_ 379
#define Y_ 380
#define YES_ 381




/* Copy the first part of user declarations.  */
#line 10 "frame/ds9parser.Y"

#define YYDEBUG 1

#define FITSPTR (fr->findFits(globalTile))
#define DISCARD_(x) {yyclearin; mkDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"
#include "point.h"

#undef yyFlexLexer
#define yyFlexLexer mkFlexLexer
#include <FlexLexer.h>

extern int mklex(void*, mkFlexLexer*);
extern void mkerror(Base*, mkFlexLexer*, const char*);
extern void mkDiscard(int);

static Coord::CoordSystem globalWCS;

static Coord::CoordSystem globalSystem;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame globalSky;
static Coord::SkyFrame localSky;

static int globalTile;

static unsigned short globalProps;
static unsigned short localProps;

static int globalDash[2];
static int localDash[2];

static int globalWidth;
static int localWidth;

static char globalColor[32];
static char localColor[32];

static char globalFont[32];
static char localFont[32];

static char globalText[80];
static char localText[80];

static char localComment[80];

static int globalLine1;
static int localLine1;
static int globalLine2;
static int localLine2;

static int globalVector;
static int localVector;

static int globalComposite;
static int localComposite;

static int globalPoint;
static int localPoint;
static int globalPointSize;
static int localPointSize;

static double globalTextAngle;
static double localTextAngle;
static int globalTextRotate;
static int localTextRotate;

static Coord::CoordSystem globalRulerCoordSystem;
static Coord::CoordSystem localRulerCoordSystem;
static Coord::SkyFrame globalRulerSkyFrame;
static Coord::SkyFrame localRulerSkyFrame;
static Coord::CoordSystem globalRulerDistSystem;
static Coord::CoordSystem localRulerDistSystem;
static Coord::DistFormat globalRulerDistFormat;
static Coord::DistFormat localRulerDistFormat;
static char globalRulerDistSpec[32];
static char localRulerDistSpec[32];

static Coord::CoordSystem globalCompassCoordSystem;
static Coord::SkyFrame globalCompassSkyFrame;
static char globalCompassNorth[80];
static char globalCompassEast[80];
static int globalCompassNArrow;
static int globalCompassEArrow;
static Coord::CoordSystem localCompassCoordSystem;
static Coord::SkyFrame localCompassSkyFrame;
static char localCompassNorth[80];
static char localCompassEast[80];
static int localCompassNArrow;
static int localCompassEArrow;

static int localCpanda;
static int localEpanda;
static int localBpanda;

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static double aAnnuli[MAXANNULI];
static Vector aVector[MAXANNULI];
static int aNum;
static int aNumsao;
static int aStatus;
static int cStatus;
static Vector aCenter;
static double aAngles[MAXANGLES];
static int aAngNum;
static double aAngle;
static unsigned short aProps;
static char aColor[16];
static int aWidth;
static int aDash[2];
static char aFont[32];
static char aText[80];
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
#line 138 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 492 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 505 "frame/ds9parser.C"

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
#define YYLAST   2450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNRULES -- Number of states.  */
#define YYNSTATES  846

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   381

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     128,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,   127,     2,     2,   137,     2,
     131,   132,     2,   135,   130,   136,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   129,
       2,   134,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   133,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    14,    15,    18,    20,    24,
      27,    28,    32,    33,    37,    38,    42,    45,    49,    53,
      55,    58,    61,    62,    65,    66,    67,    71,    73,    74,
      79,    83,    84,    90,    92,    93,    97,   100,   101,   106,
     108,   110,   112,   114,   116,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   138,   139,   141,   142,   144,
     145,   147,   148,   150,   153,   154,   156,   158,   160,   162,
     164,   166,   168,   170,   172,   174,   178,   182,   186,   190,
     194,   198,   202,   204,   206,   208,   212,   216,   220,   224,
     228,   232,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   340,   342,   344,   346,   348,   350,
     352,   355,   357,   360,   363,   365,   368,   371,   373,   376,
     378,   380,   382,   384,   386,   388,   390,   392,   396,   398,
     402,   406,   411,   415,   419,   423,   425,   427,   429,   431,
     435,   440,   445,   449,   453,   457,   461,   469,   473,   477,
     481,   486,   489,   492,   495,   498,   501,   504,   506,   508,
     511,   513,   515,   517,   518,   522,   524,   528,   532,   537,
     541,   545,   549,   553,   559,   561,   563,   565,   567,   571,
     576,   581,   585,   589,   593,   597,   605,   609,   613,   617,
     621,   625,   630,   633,   636,   639,   642,   645,   648,   650,
     652,   655,   657,   659,   661,   662,   670,   672,   673,   684,
     686,   687,   698,   700,   701,   703,   705,   707,   709,   711,
     713,   715,   717,   719,   730,   731,   739,   746,   755,   764,
     775,   784,   793,   802,   811,   822,   833,   844,   845,   853,
     854,   862,   871,   882,   889,   890,   900,   907,   915,   923,
     931,   939,   947,   955,   963,   972,   981,   992,  1003,  1016,
    1029,  1042,  1057,  1072,  1091,  1104,  1119,  1134,  1153,  1172,
    1193,  1214,  1225,  1238,  1251,  1257,  1266,  1270,  1272,  1274,
    1278,  1280,  1282,  1286,  1288,  1290,  1294,  1296,  1300
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,   183,   141,   211,    -1,   141,   142,   156,
      -1,   142,   156,    -1,    -1,    37,   158,    -1,    91,    -1,
      56,   179,   148,    -1,    88,     3,    -1,    -1,   173,   143,
     148,    -1,    -1,   175,   144,   148,    -1,    -1,    65,   145,
     148,    -1,   194,   199,    -1,   194,   196,   199,    -1,   194,
     127,   146,    -1,   197,    -1,   196,   197,    -1,    88,     3,
      -1,    -1,   147,     5,    -1,    -1,    -1,   127,   149,     5,
      -1,   211,    -1,    -1,   127,   151,     5,   211,    -1,   127,
     184,   211,    -1,    -1,   127,   184,   152,     5,   211,    -1,
     211,    -1,    -1,   154,     5,   211,    -1,   184,   211,    -1,
      -1,   184,   155,     5,   211,    -1,   128,    -1,   129,    -1,
      15,    -1,     4,    -1,     3,    -1,    70,    -1,    69,    -1,
       3,    -1,   126,    -1,   125,    -1,    70,    -1,    89,    -1,
      68,    -1,    67,    -1,    69,    -1,    47,    -1,    -1,   130,
      -1,    -1,   131,    -1,    -1,   132,    -1,    -1,   133,    -1,
     133,   133,    -1,    -1,   165,    -1,   157,    -1,     6,    -1,
       7,    -1,   157,    -1,    10,    -1,    11,    -1,     6,    -1,
       8,    -1,     9,    -1,   157,   160,   157,    -1,    10,   160,
      10,    -1,    11,   160,    11,    -1,     6,   160,     6,    -1,
       8,   160,     8,    -1,     9,   160,     9,    -1,    67,   134,
       3,    -1,    12,    -1,    13,    -1,    14,    -1,   169,   160,
     169,    -1,   170,   160,   171,    -1,   171,   160,   171,    -1,
     157,   160,   157,    -1,     6,   160,     6,    -1,    11,   160,
      11,    -1,    10,   160,    10,    -1,    60,    -1,    71,    -1,
      40,    -1,    16,    -1,   174,    -1,    95,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,
     107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,    -1,
     112,    -1,   113,    -1,   114,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   119,    -1,   120,    -1,   121,    -1,
     122,    -1,    51,    -1,    21,    -1,    52,    -1,    62,    -1,
      58,    -1,    55,    -1,    42,    -1,    38,    -1,    18,    -1,
      19,    -1,    82,    -1,    57,    -1,    35,    -1,    49,    -1,
      50,    -1,    43,    -1,    66,    -1,    78,    -1,    39,    -1,
      61,    -1,    83,    -1,    82,    -1,    93,    -1,    57,    -1,
      92,    -1,    23,    66,    -1,    66,    -1,    45,    66,    -1,
      23,    43,    -1,    43,    -1,    45,    43,    -1,    23,    78,
      -1,    78,    -1,    45,    78,    -1,    39,    -1,    85,    -1,
      30,    -1,   123,    -1,    77,    -1,    54,    -1,    63,    -1,
      94,    -1,   179,   160,   180,    -1,   180,    -1,   177,   134,
     159,    -1,    30,   134,     5,    -1,    36,   134,     3,     3,
      -1,   123,   134,     3,    -1,    54,   134,     5,    -1,    85,
     134,     5,    -1,    35,    -1,    49,    -1,    83,    -1,    22,
      -1,    74,   134,   195,    -1,    74,   134,   195,     3,    -1,
      64,   134,     3,     3,    -1,    90,   134,     3,    -1,    32,
     134,     3,    -1,    80,   134,   181,    -1,    53,   134,     5,
      -1,    31,   134,   182,     5,     5,     3,     3,    -1,    86,
     134,   165,    -1,    87,   134,     3,    -1,    95,   134,   174,
      -1,   173,   175,   173,   176,    -1,   173,   173,    -1,   173,
     176,    -1,   175,   173,    -1,   175,   176,    -1,    65,   173,
      -1,    65,   176,    -1,   176,    -1,    73,    -1,   173,   175,
      -1,   173,    -1,   175,    -1,    65,    -1,    -1,   184,   160,
     185,    -1,   185,    -1,   177,   134,   159,    -1,    30,   134,
       5,    -1,    36,   134,     3,     3,    -1,   123,   134,     3,
      -1,    54,   134,     5,    -1,    85,   134,     5,    -1,    84,
     134,     5,    -1,    27,   134,   178,     5,     5,    -1,    35,
      -1,    49,    -1,    83,    -1,    22,    -1,    74,   134,   195,
      -1,    74,   134,   195,     3,    -1,    64,   134,     3,     3,
      -1,    90,   134,     3,    -1,    32,   134,     3,    -1,    80,
     134,   186,    -1,    53,   134,     5,    -1,    31,   134,   187,
       5,     5,     3,     3,    -1,    86,   134,   165,    -1,    87,
     134,     3,    -1,    33,   134,   188,    -1,    46,   134,   190,
      -1,    26,   134,   192,    -1,   173,   175,   173,   176,    -1,
     173,   173,    -1,   173,   176,    -1,   175,   173,    -1,   175,
     176,    -1,    65,   173,    -1,    65,   176,    -1,   176,    -1,
      73,    -1,   173,   175,    -1,   173,    -1,   175,    -1,    65,
      -1,    -1,   189,   131,   207,   132,   131,   205,   132,    -1,
      59,    -1,    -1,   191,   131,   207,   132,   131,   209,   132,
     131,   165,   132,    -1,    59,    -1,    -1,   193,   131,   207,
     132,   131,   209,   132,   131,   165,   132,    -1,    59,    -1,
      -1,    28,    -1,    24,    -1,    41,    -1,    34,    -1,   124,
      -1,    20,    -1,    25,    -1,   135,    -1,   136,    -1,    90,
     161,   172,   160,   166,   160,   165,   162,   163,   153,    -1,
      -1,    81,   198,   161,   203,   162,   163,   153,    -1,    85,
     161,   172,   162,   163,   153,    -1,    80,   161,   172,   160,
     172,   162,   163,   153,    -1,    31,   161,   172,   160,   166,
     162,   163,   153,    -1,    76,   161,   172,   160,   172,   160,
     166,   162,   163,   153,    -1,    29,   161,   172,   160,   166,
     162,   163,   153,    -1,    32,   161,   172,   160,   164,   162,
     163,   153,    -1,    28,   161,   172,   160,   166,   162,   163,
     150,    -1,    29,   161,   172,   160,   166,   162,   163,   150,
      -1,    44,   161,   172,   160,   167,   160,   164,   162,   163,
     150,    -1,    24,   161,   172,   160,   167,   160,   164,   162,
     163,   150,    -1,    79,   161,   172,   160,   167,   160,   164,
     162,   163,   150,    -1,    -1,    75,   200,   161,   203,   162,
     163,   150,    -1,    -1,    81,   201,   161,   203,   162,   163,
     150,    -1,    64,   161,   172,   160,   172,   162,   163,   150,
      -1,    90,   161,   172,   160,   166,   160,   165,   162,   163,
     150,    -1,    85,   161,   172,   162,   163,   150,    -1,    -1,
      85,   161,   172,   160,     5,   162,   202,   163,   150,    -1,
      74,   161,   172,   162,   163,   150,    -1,    28,    74,   161,
     172,   162,   163,   150,    -1,    24,    74,   161,   172,   162,
     163,   150,    -1,    41,    74,   161,   172,   162,   163,   150,
      -1,    34,    74,   161,   172,   162,   163,   150,    -1,   124,
      74,   161,   172,   162,   163,   150,    -1,    20,    74,   161,
     172,   162,   163,   150,    -1,    25,    74,   161,   172,   162,
     163,   150,    -1,    80,   161,   172,   160,   172,   162,   163,
     150,    -1,    31,   161,   172,   160,   166,   162,   163,   150,
      -1,    76,   161,   172,   160,   172,   160,   166,   162,   163,
     150,    -1,    17,   161,   172,   160,   166,   160,   166,   162,
     163,   150,    -1,    17,   161,   172,   160,   166,   160,   166,
     160,   205,   162,   163,   150,    -1,    17,   161,   172,   160,
     166,   160,   166,   160,   168,   162,   163,   150,    -1,    44,
     161,   172,   160,   167,   160,   167,   160,   164,   162,   163,
     150,    -1,    44,   161,   172,   160,   167,   160,   167,   160,
     168,   160,   164,   162,   163,   150,    -1,    44,   161,   172,
     160,   167,   160,   167,   160,   209,   160,   164,   162,   163,
     150,    -1,    44,   161,   172,   160,   167,   160,   164,   162,
     137,   138,    44,   161,   172,   160,   167,   160,   164,   162,
      -1,    24,   161,   172,   160,   167,   160,   167,   160,   164,
     162,   163,   150,    -1,    24,   161,   172,   160,   167,   160,
     167,   160,   209,   160,   164,   162,   163,   150,    -1,    24,
     161,   172,   160,   167,   160,   167,   160,   168,   160,   164,
     162,   163,   150,    -1,    24,   161,   172,   160,   167,   160,
     164,   162,   137,   138,    24,   161,   172,   160,   167,   160,
     164,   162,    -1,    33,   161,   172,   160,   165,   160,   165,
     160,     3,   160,   166,   160,   166,   160,     3,   162,   163,
     150,    -1,    46,   161,   172,   160,   165,   160,   165,   160,
       3,   160,   167,   160,   167,   160,     3,   160,   164,   162,
     163,   150,    -1,    26,   161,   172,   160,   165,   160,   165,
     160,     3,   160,   167,   160,   167,   160,     3,   160,   164,
     162,   163,   150,    -1,    72,   161,   172,   160,   165,   160,
     165,   162,   163,   150,    -1,    72,   161,   172,   160,   165,
     160,   165,   160,   207,   162,   163,   150,    -1,    72,   161,
     172,   160,   165,   160,   165,   160,   168,   162,   163,   150,
      -1,    48,   161,   162,   163,   150,    -1,    32,   161,   172,
     160,   164,   162,   163,   150,    -1,   203,   160,   204,    -1,
     204,    -1,   172,    -1,   205,   160,   206,    -1,   206,    -1,
     166,    -1,   207,   160,   208,    -1,   208,    -1,   165,    -1,
     209,   160,   210,    -1,   210,    -1,   166,   160,   166,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   297,   297,   300,   301,   304,   305,   306,   308,   309,
     311,   311,   312,   312,   313,   313,   315,   316,   317,   320,
     321,   322,   323,   323,   326,   327,   327,   330,   331,   331,
     332,   333,   333,   336,   337,   337,   338,   339,   339,   342,
     343,   344,   347,   348,   351,   352,   355,   357,   358,   359,
     360,   362,   363,   364,   365,   368,   369,   372,   373,   376,
     377,   380,   381,   382,   385,   386,   389,   391,   393,   396,
     397,   398,   399,   400,   401,   404,   411,   418,   425,   432,
     439,   448,   451,   454,   457,   460,   473,   481,   489,   496,
     504,   511,   519,   520,   521,   522,   523,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   556,   557,   558,   559,   560,
     561,   562,   565,   566,   567,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   606,   607,   610,
     615,   620,   625,   626,   631,   636,   641,   646,   651,   656,
     657,   662,   667,   668,   672,   673,   674,   683,   684,   685,
     688,   695,   702,   709,   716,   723,   730,   737,   743,   752,
     757,   762,   767,   774,   817,   818,   821,   822,   826,   831,
     832,   833,   834,   835,   837,   838,   839,   840,   842,   843,
     844,   845,   846,   847,   848,   849,   856,   857,   858,   859,
     860,   863,   870,   877,   884,   891,   898,   905,   912,   919,
     928,   933,   938,   943,   950,   950,   951,   954,   954,   956,
     959,   959,   961,   964,  1017,  1018,  1019,  1020,  1021,  1022,
    1023,  1026,  1027,  1030,  1038,  1038,  1045,  1052,  1061,  1071,
    1079,  1087,  1096,  1103,  1111,  1134,  1157,  1166,  1166,  1173,
    1173,  1181,  1189,  1197,  1204,  1204,  1212,  1219,  1226,  1233,
    1240,  1247,  1254,  1261,  1268,  1277,  1287,  1295,  1302,  1312,
    1320,  1330,  1340,  1352,  1360,  1370,  1382,  1392,  1401,  1423,
    1447,  1472,  1473,  1474,  1476,  1478,  1487,  1488,  1491,  1494,
    1495,  1498,  1505,  1506,  1509,  1516,  1517,  1520,  1524
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "ANGDEGREE",
  "ANGRADIAN", "ARCMINUTE", "ARCSECOND", "PHYCOORD", "IMGCOORD", "SEXSTR",
  "HMSSTR", "DMSSTR", "EOF_", "AMPLIFIER_", "ANNULUS_", "ARCMIN_",
  "ARCSEC_", "ARROW_", "B1950_", "BACKGROUND_", "BEGIN_", "BOX_",
  "BOXCIRCLE_", "BPANDA_", "CALLBACK_", "CIRCLE_", "CIRCLE3D_", "COLOR_",
  "COMPASS_", "COMPOSITE_", "CPANDA_", "CROSS_", "DASH_", "DASHLIST_",
  "DEBUG_", "DEGREES_", "DELETE_", "DETECTOR_", "DIAMOND_", "ECLIPTIC_",
  "EDIT_", "ELLIPSE_", "END_", "EPANDA_", "FALSE_", "FIELD_", "FILL_",
  "FIXED_", "FK4_", "FK5_", "FORMAT_", "FONT_", "GALACTIC_", "GLOBAL_",
  "HIGHLITE_", "ICRS_", "IGNORE_", "IMAGE_", "INCLUDE_", "J2000_", "KEY_",
  "LINE_", "LINEAR_", "MOVE_", "N_", "NO_", "OFF_", "ON_", "PHYSICAL_",
  "PIE_", "PIXELS_", "POINT_", "POLYGON_", "PROJECTION_", "PROPERTY_",
  "ROTATE_", "ROTBOX_", "RULER_", "SEGMENT_", "SELECT_", "SOURCE_", "TAG_",
  "TEXT_", "TEXTANGLE_", "TEXTROTATE_", "TILE_", "TRUE_", "VECTOR_",
  "VERSION_", "UNHIGHLITE_", "UNSELECT_", "UPDATE_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WIDTH_", "X_", "Y_", "YES_", "'#'", "'\\n'", "';'",
  "','", "'('", "')'", "'|'", "'='", "'+'", "'-'", "'&'", "'!'", "$accept",
  "start", "commands", "command", "@1", "@2", "@3", "hash", "@4",
  "comment", "@5", "shapeComment", "@6", "@7", "nonshapeComment", "@8",
  "@9", "terminator", "numeric", "debug", "yesno", "sp", "bp", "ep",
  "conjunction", "optangle", "angle", "value", "vvalue", "numberof",
  "sexagesimal", "hms", "dms", "coord", "coordSystem", "wcsSystem",
  "skyFrame", "skyDist", "property", "callBack", "global",
  "globalProperty", "globalRuler", "globalCompass", "initGlobal", "local",
  "localProperty", "localRuler", "localCompass", "localCpanda", "@10",
  "localEpanda", "@11", "localBpanda", "@12", "initLocal", "pointShape",
  "include", "nonshape", "@13", "shape", "@14", "@15", "@16", "polyNodes",
  "polyNode", "aRads", "aRad", "aAngs", "aAng", "vRads", "vRad",
  "postLocal", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,    35,    10,    59,
      44,    40,    41,   124,    61,    43,    45,    38,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   141,   141,   142,   142,   142,   142,   142,
     143,   142,   144,   142,   145,   142,   142,   142,   142,   146,
     146,   146,   147,   146,   148,   149,   148,   150,   151,   150,
     150,   152,   150,   153,   154,   153,   153,   155,   153,   156,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   160,   160,   161,   161,   162,
     162,   163,   163,   163,   164,   164,   165,   165,   165,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   167,   167,
     167,   168,   169,   170,   171,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   179,   179,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     182,   182,   182,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     187,   187,   187,   187,   189,   188,   188,   191,   190,   190,
     193,   192,   192,   194,   195,   195,   195,   195,   195,   195,
     195,   196,   196,   197,   198,   197,   197,   197,   197,   197,
     197,   197,   199,   199,   199,   199,   199,   200,   199,   201,
     199,   199,   199,   199,   202,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   203,   203,   204,   205,
     205,   206,   207,   207,   208,   209,   209,   210,   211
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     2,     0,     2,     1,     3,     2,
       0,     3,     0,     3,     0,     3,     2,     3,     3,     1,
       2,     2,     0,     2,     0,     0,     3,     1,     0,     4,
       3,     0,     5,     1,     0,     3,     2,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     4,     3,     3,     3,     1,     1,     1,     1,     3,
       4,     4,     3,     3,     3,     3,     7,     3,     3,     3,
       4,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     0,     3,     1,     3,     3,     4,     3,
       3,     3,     3,     5,     1,     1,     1,     1,     3,     4,
       4,     3,     3,     3,     3,     7,     3,     3,     3,     3,
       3,     4,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     1,     0,     7,     1,     0,    10,     1,
       0,    10,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    10,     0,     7,     6,     8,     8,    10,
       8,     8,     8,     8,    10,    10,    10,     0,     7,     0,
       7,     8,    10,     6,     0,     9,     6,     7,     7,     7,
       7,     7,     7,     7,     8,     8,    10,    10,    12,    12,
      12,    14,    14,    18,    12,    14,    14,    18,    18,    20,
      20,    10,    12,    12,     5,     8,     3,     1,     1,     3,
       1,     1,     3,     1,     1,     3,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     203,     0,   253,     1,    95,   126,     0,    94,   131,   125,
     127,   130,     0,   129,    92,   128,    14,    93,     0,     7,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   253,     0,
      10,    96,    12,     0,    45,    44,     6,   178,     0,     0,
       0,   175,     0,   143,   140,   176,   139,     0,     0,   136,
     144,     0,   141,     0,   142,     0,   135,   177,     0,     0,
       0,     0,     0,     0,     0,    55,   168,    24,     9,     0,
       2,    41,    39,    40,     4,    24,    24,    57,     0,    57,
       0,    57,    57,    57,    57,    57,    57,     0,     0,    57,
      57,    57,    57,    57,    57,   277,    57,    57,    57,   279,
      57,    57,     0,    22,   261,   262,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,     8,     0,    15,     3,
      11,    13,    58,     0,    57,    57,     0,    57,     0,    57,
       0,     0,     0,     0,     0,    57,    57,     0,     0,    59,
       0,     0,     0,    57,     0,     0,     0,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   264,    57,     0,    57,
      18,     0,     0,    19,    17,   170,   202,   200,   201,     0,
     183,     0,   185,   173,     0,   259,   255,   260,   254,   257,
     256,   258,   179,   133,   134,   132,     0,   198,     0,     0,
     197,   184,   174,    43,    42,    67,    68,    66,   187,   188,
     182,   189,   172,    46,    54,    52,    51,    53,    49,    50,
      48,    47,   169,     0,   167,    55,    55,    55,    82,    83,
      84,    55,    55,    55,    55,    55,     0,     0,    55,     0,
      55,     0,    55,    55,    55,    55,    55,     0,     0,    55,
      55,    60,    61,    55,    55,    59,     0,    55,    55,    55,
       0,    59,    55,     0,     0,     0,     0,     0,     0,    57,
       0,    21,     0,    23,    20,   199,     0,   171,   181,   180,
     195,   196,   191,     0,   192,   193,   194,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    59,     0,    59,
       0,    59,     0,     0,     0,    64,     0,    59,    59,     0,
       0,    62,   328,     0,     0,    61,   318,    55,   317,     0,
       0,     0,    55,     0,    61,     0,    59,    55,    55,    55,
      55,    55,     0,    59,    55,     0,     0,    89,    91,    90,
      88,    85,    86,    87,    72,    73,    74,    70,    71,    69,
      55,    61,    61,    55,    55,    55,    55,    55,    55,    55,
      61,    55,    61,    59,    59,    59,    59,    65,    55,    61,
      61,    55,    55,    63,    28,   314,    27,    59,    55,   328,
       0,    61,    55,    55,    59,    61,    59,   328,    55,    61,
       0,     0,    64,     0,     0,    59,    61,     0,     0,   190,
       0,   328,   328,     0,     0,     0,     0,     0,     0,    64,
     328,     0,   328,    61,    61,    61,    61,     0,   328,   328,
      64,     0,   217,     0,     0,     0,     0,     0,     0,   214,
       0,     0,   215,     0,     0,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   205,    61,
       0,   286,   316,   328,     0,    64,    61,   328,   284,   283,
       0,   328,    59,    59,    59,    55,    59,    61,   328,    55,
     186,    55,   292,   288,    78,    79,    80,    76,    77,    75,
      67,    66,    59,    55,   293,    55,   287,   328,   328,   328,
     328,    55,   290,   289,    59,    55,    55,   250,     0,     0,
       0,     0,   244,     0,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   328,     0,     0,     0,
      30,   328,    55,   278,    59,    59,   328,   280,    61,    59,
     291,    61,    61,    61,     0,    61,   328,   266,     0,    55,
      33,     0,     0,    61,    61,    64,     0,   272,   273,   295,
     315,     0,    61,    64,     0,   252,   230,     0,     0,   161,
     159,   154,     0,   164,   148,   165,   151,   163,   157,   146,
     160,   149,   147,   166,   162,     0,   207,   243,   241,   242,
       0,   222,   246,   228,     0,     0,   249,   229,     0,   224,
     210,     0,   218,     0,   239,     0,     0,   238,   223,   212,
     211,   226,   227,   221,   209,    29,   206,   328,   204,   281,
       0,    61,    61,    61,   294,   328,    61,   328,   328,   328,
      59,   328,   265,   328,     0,    36,    59,     0,   321,    59,
      55,   320,   328,     0,   328,    72,    69,    59,    55,    55,
      55,   326,    55,    55,     0,   328,    59,    55,    55,    55,
       0,   153,   150,   156,   155,   152,   158,     0,   240,     0,
       0,   208,     0,   220,   219,   236,   237,   232,     0,   233,
     234,   235,    32,   324,    59,    59,   323,   328,   328,   328,
     285,   328,   270,   268,   271,    61,   267,    35,   328,    61,
       0,    61,     0,    61,   297,     0,   275,    61,     0,    64,
      64,     0,     0,     0,   274,    61,    64,    64,     0,    55,
     213,     0,    55,    55,     0,    61,     0,    61,   311,   296,
     276,   282,   328,    38,   328,    81,   328,   319,   328,    57,
     328,   327,    59,    59,   325,    55,    55,    57,   328,    59,
      59,    55,     0,     0,     0,     0,   231,   328,   322,   328,
     269,   263,   299,   298,     0,   304,    61,    61,     0,     0,
       0,   300,    61,    61,     0,     0,   225,     0,     0,   313,
     312,    55,   328,   328,    55,    55,    55,   328,   328,    55,
      55,    55,    55,     0,   306,   305,     0,     0,     0,   301,
     302,     0,     0,     0,   245,     0,    55,    55,    59,    55,
      55,     0,     0,    64,    64,    61,    64,    64,     0,     0,
      59,    59,   328,    59,    59,   251,   248,   307,    61,   308,
     303,    61,   328,   328,   310,   309
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    49,    95,    96,    87,   190,   191,   146,
     243,   395,   465,   538,   557,   558,   644,    94,   251,    56,
     242,   736,   153,   272,   332,   386,   387,   658,   379,   649,
     252,   253,   254,   336,    50,    51,    52,   220,   466,   595,
      85,    86,   221,   199,     2,   559,   468,   618,   600,   603,
     604,   607,   608,   576,   577,    53,   212,   126,   193,   289,
     127,   173,   177,   548,   337,   338,   650,   651,   695,   696,
     660,   661,   396
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -689
static const yytype_int16 yypact[] =
{
    -689,    27,  1554,  -689,  -689,  -689,     4,  -689,  -689,  -689,
    -689,  -689,  2327,  -689,  -689,  -689,  -689,  -689,    48,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  1445,    15,
    -689,  -689,  -689,   995,  -689,  -689,  -689,  -689,   -76,   -18,
     -15,    49,    53,  -689,  -689,    56,  -689,    61,    66,  -689,
    -689,    82,  -689,    92,  -689,   101,  -689,   109,   110,   120,
     133,   138,   139,   140,   149,   148,  -689,   -29,  -689,    15,
    -689,  -689,  -689,  -689,  -689,   -29,   -29,    41,    36,   -36,
     108,    41,   -24,    41,    41,    41,    41,   137,   145,    41,
      41,    41,    41,    41,    41,  -689,    41,    41,    41,  -689,
      41,    41,   181,   454,  -689,  -689,  1660,  -689,   279,  2012,
     283,   284,   290,   292,   295,   360,  1691,   294,   226,   297,
     299,   697,   301,   212,  -689,  -689,  -689,  2327,  -689,  -689,
    -689,  -689,  -689,   611,    41,    41,   611,    41,   611,    41,
     611,   611,   611,   611,   611,    41,    41,   611,   611,   173,
     611,   611,   611,    41,   611,   611,   611,    41,   611,   611,
      41,    41,    41,    41,    41,    41,  -689,    41,   306,    41,
    -689,   305,   239,  -689,  -689,  -689,  -689,   558,  -689,   307,
    -689,   308,  -689,  -689,   311,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,   318,  -689,  -689,  -689,  1178,  -689,  1905,  1178,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,  -689,   317,  -689,   201,   201,   201,  -689,  -689,
    -689,   201,   201,   201,   201,   201,   611,   611,   201,   611,
     201,   611,   201,   201,   201,   201,   201,   611,   611,   201,
     201,  -689,   192,   201,   201,   173,   611,   201,   201,   201,
     611,    19,   201,   611,   611,   611,   611,   611,   611,    41,
     611,  -689,   611,  -689,  -689,  -689,   327,  -689,  -689,  -689,
    -689,  -689,  -689,  2226,  -689,  -689,  -689,  -689,   328,   325,
     329,    77,   330,   332,   332,   129,   173,   173,   195,   173,
     226,   173,   129,   129,   129,   226,   226,   173,   173,   195,
     226,   206,   214,   611,   226,   192,  -689,   222,  -689,   611,
     195,   611,   222,   338,   192,   129,   173,   201,   201,   201,
     201,   201,   611,   173,   201,   345,    52,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
     201,   192,   192,   201,   201,   201,   201,   201,   201,   201,
     192,   201,   192,   173,   173,   173,   173,  -689,   201,   192,
     192,   201,   201,  -689,  2228,  -689,  -689,   173,   201,   214,
     611,   192,   201,   201,   173,   192,   173,   214,   201,   192,
     129,   129,   226,   611,   611,   117,   192,   129,   364,  -689,
     129,   214,   214,   357,   361,   362,   363,   359,    77,   858,
     214,   226,   214,   192,   192,   192,   192,   226,   214,   214,
     858,   226,  -689,   240,   242,   243,   244,   245,   247,    49,
     249,   253,    56,   255,   259,   261,   263,   264,   109,   265,
     268,   271,   273,   274,   275,   405,   277,    26,  -689,   192,
     226,  -689,  -689,   214,   129,   226,   192,   214,  -689,  -689,
     226,   214,   173,   173,   173,   201,   173,   192,  1353,   201,
    -689,   222,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
      11,    22,   173,   201,  -689,   201,  -689,   214,   214,   214,
     214,   201,  -689,  -689,   173,   201,   201,   353,  1070,   408,
    2119,   411,   358,   419,   366,   418,   422,   426,   360,  1798,
     427,   430,   226,   433,   434,   436,  -689,   212,   435,  2228,
    -689,   214,   222,  -689,   173,   173,   214,  -689,   192,   173,
    -689,   192,   192,   192,   129,   192,  1353,  -689,   439,    29,
    -689,   226,   450,   192,   -45,   544,   444,  -689,  -689,  -689,
    -689,   446,    13,   544,   447,  -689,  -689,   320,   -14,  -689,
    -689,  -689,    -6,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,   457,  -689,  -689,   558,  -689,
     458,  -689,  -689,  -689,   321,   452,  -689,  -689,   333,  -689,
    -689,   462,   464,  1178,  -689,  1905,  1178,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,  -689,
      59,   192,   192,   192,  -689,   214,   192,  1353,  1353,  1353,
     173,  1353,  -689,  -689,   463,  -689,   173,   337,  -689,   173,
     222,  -689,   214,   335,   214,    85,   233,   173,   201,   201,
     201,  -689,   201,   201,   342,   214,   173,   201,   201,   201,
     226,  -689,  -689,  -689,  -689,  -689,  -689,   477,  -689,   482,
     226,  -689,   226,  -689,  -689,  -689,  -689,  -689,  2226,  -689,
    -689,  -689,  -689,  -689,   173,    90,  -689,   214,   214,   214,
    -689,   214,  -689,  -689,  -689,   192,  -689,  -689,  -689,   192,
     485,   192,   129,   192,  -689,   468,  -689,   192,   129,   226,
     888,   195,   129,   449,  -689,   192,   226,   888,   195,   -87,
    -689,   491,   -21,    78,    52,   192,   226,   192,  -689,  -689,
    -689,  -689,  1353,  -689,  1353,  -689,   214,  -689,   214,    41,
     214,  -689,   173,   173,  -689,   201,   201,    41,   214,   173,
     173,   201,   365,   492,   367,   368,  -689,   214,  -689,   214,
    -689,  -689,  -689,  -689,   611,  -689,   192,   192,   195,   129,
     611,  -689,   192,   192,   195,   129,  -689,   129,   129,  -689,
    -689,   201,   214,   214,   201,   201,   201,   214,   214,   201,
      93,   121,   128,   195,  -689,  -689,   497,   498,   195,  -689,
    -689,   500,   373,   129,  -689,   374,   201,   201,   173,   201,
     201,   226,   226,   226,   226,   192,   226,   226,   375,   377,
     173,   173,   214,   173,   173,  -689,  -689,  -689,   192,  -689,
    -689,   192,   214,   214,  -689,  -689
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -689,  -689,  -689,   472,  -689,  -689,  -689,  -689,  -689,    18,
    -689,   696,  -689,  -689,  -535,  -689,  -689,   417,   -84,  -689,
     -26,   -85,   -98,   504,   535,   -37,    38,  -246,  -287,  -518,
     210,  -689,  -166,   588,  -101,   382,   -96,  -170,    -2,  -689,
    -689,   378,  -689,  -689,  -689,   130,   -13,  -689,  -689,  -689,
    -689,  -689,  -689,  -689,  -689,  -689,    -1,   406,   339,  -689,
     412,  -689,  -689,  -689,  -244,   132,  -250,  -172,  -546,  -193,
    -564,  -688,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -329
static const yytype_int16 yytable[] =
{
     147,   156,    90,   158,   160,   161,   162,   163,   164,   668,
      84,   167,   168,   169,   170,   171,   172,   -55,   174,   175,
     176,   642,   178,   179,   -55,   -55,   -55,     3,   197,   671,
      91,   -31,   754,   198,   -37,   218,   342,   674,   155,   754,
     219,  -328,   391,   145,  -328,   762,   301,   659,   304,   306,
     159,    88,   672,   403,   227,   667,   256,   257,   128,   259,
     675,   261,   223,   224,   673,   225,   226,   267,   268,   370,
     213,   214,   676,    54,    55,   276,   383,   384,   385,   280,
     223,   224,   283,   284,   285,   286,   287,   288,   331,   290,
     215,   292,   653,   -55,   -55,   152,   -55,   -55,   144,   408,
     -67,   295,   702,   703,   704,   148,   706,   152,   415,   145,
     154,   764,   694,   150,   151,   300,   129,   302,   305,   130,
     -55,   -55,   303,   -55,   729,   754,   647,   -55,   -55,   -55,
     -55,   -55,   223,   224,   732,   364,   733,   365,   366,   367,
     368,   145,   503,    92,    93,    84,   331,   362,   363,   145,
     664,   271,   145,   515,  -328,  -328,   145,  -328,  -328,   145,
     308,   309,   310,   -24,   482,   483,   311,   312,   313,   314,
     315,   489,   152,   318,   491,   320,   228,   322,   323,   324,
     325,   326,   157,  -137,   329,   330,   419,   131,   333,   334,
    -138,   352,   339,   340,   341,   132,   343,   345,   223,   224,
     133,   373,   356,   374,   375,   376,   377,   770,   145,   771,
     765,   165,   -67,   -67,   -67,   233,   134,   -67,   -67,   166,
     145,   800,   271,   145,   802,   812,   135,   360,   544,   223,
     224,   369,   225,   226,   378,   136,   227,   -59,   369,   369,
     369,   227,   227,  -145,   137,   378,   227,   145,   -66,   271,
     227,   145,   400,   814,   138,   180,   378,   400,   145,   234,
     815,   369,   410,   411,   412,   413,   414,   139,   181,   417,
     182,   183,   140,   141,   142,   144,   -24,   -24,   145,   235,
     236,   237,   238,   143,   195,   420,   200,   201,   423,   424,
     425,   426,   427,   428,   429,   202,   431,   203,   204,   222,
     229,   239,   230,   437,   232,   271,   440,   441,   640,   291,
     293,   297,   296,   470,   298,   184,   648,   474,   475,   185,
     186,   299,   307,   480,   187,   331,   369,   369,   227,   189,
     400,   145,   355,   369,   357,   358,   369,   240,   241,   393,
     359,   394,   248,   406,   499,   501,   250,   227,   418,   -59,
     -59,   -59,   145,   227,   271,   -59,   501,   227,   381,   617,
     -66,   -66,   -66,   494,   388,   -66,   -66,   490,   392,   495,
     498,   496,   398,   497,   517,   484,   518,   519,   520,   521,
     205,   522,   539,   523,   206,   207,   227,   524,   208,   525,
     369,   227,   502,   526,   209,   527,   227,   528,   529,   530,
     554,   210,   531,   514,   561,   532,   562,   533,   534,   535,
     536,   537,   575,   596,   601,   423,   428,   602,   565,   598,
     566,   540,   605,   609,   599,   606,   571,   610,   615,   611,
     573,   574,   619,   616,   755,   620,   622,   623,   545,   624,
     627,   761,   560,   686,   643,   689,   691,   662,   227,   663,
     669,   670,   680,   223,   224,   681,   364,   630,   365,   366,
     367,   368,   677,   679,   682,   683,   648,   684,   708,   505,
     369,   710,   751,   715,   539,   511,   756,   227,   369,   516,
     723,   656,   730,   181,   211,   182,   183,   731,   745,   656,
     625,   794,   749,   757,   763,   786,   785,   799,   787,   788,
     817,   818,   678,   820,   821,   822,   149,   835,   542,   836,
     560,   626,   685,   645,   687,   690,   816,   647,   549,   688,
      89,   819,   361,   231,   467,   244,   628,   612,   657,   192,
     184,   294,   472,   795,   185,   186,   666,   801,   194,   187,
     747,   648,   188,   768,   189,     0,   227,   223,   224,     0,
     655,   226,   365,   366,   367,   368,     0,     0,     0,     0,
       0,     0,     0,     0,   766,   712,     0,     0,     0,     0,
     621,     0,     0,   718,   719,   720,     0,   721,   722,     5,
       0,   692,   726,   727,   728,     0,   227,   734,     0,   124,
     125,   560,   560,   560,     0,   560,   227,   707,   227,   646,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,   647,     0,    11,   223,   224,    13,   245,     0,     0,
      15,   246,   247,   248,   249,   250,     0,     0,   369,     0,
       0,     0,     0,     0,   369,   227,   656,   378,   369,     0,
       0,     0,   227,   656,   378,     0,     0,     0,     0,     0,
       0,   774,   227,     0,     0,     0,     0,     0,     0,   780,
       0,     0,   743,     0,     0,     0,     0,     0,   693,     0,
     778,   779,     0,     0,     0,     0,   784,     0,     0,     0,
       0,     0,   752,   753,     0,     0,     0,     0,     0,   759,
     760,     0,     0,     0,   378,   369,   560,     0,   560,     0,
     378,   369,     0,   369,   369,     0,   803,     0,   693,   806,
     807,   808,     0,     0,   811,   813,   712,   813,   693,   378,
     693,     0,     0,     0,   378,     0,     0,     0,     0,   369,
       0,   823,   824,     0,   826,   827,     0,   227,   227,   227,
     227,   255,   227,   227,   258,     0,   260,     0,   262,   263,
     264,   265,   266,     0,     0,   269,   270,     0,   273,   274,
     275,     0,   277,   278,   279,     0,   281,   282,     0,     0,
       0,     0,     0,     0,   693,     0,     0,     0,     0,   335,
       0,     0,     0,     0,     0,   344,   830,   831,     0,   833,
     834,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     371,   372,     0,   380,     0,   382,     0,     0,     0,     0,
       0,   389,   390,     0,     0,     0,     0,     0,     0,     0,
       0,   401,     0,     0,   316,   317,   405,   319,     0,   321,
     409,     0,     0,     0,     0,   327,   328,   416,     0,   828,
     829,   223,   224,     0,   500,   226,   374,   375,   376,   377,
     399,   346,   347,   348,   349,   350,   351,     0,   353,   407,
     354,     0,     0,     0,     0,     0,     0,   433,   434,   435,
     436,   223,   224,     0,   655,   226,   365,   366,   367,   368,
       0,   469,     0,     0,     0,     0,   421,   422,   476,     0,
     478,     0,     0,     0,     0,   430,     0,   432,     0,   487,
       0,   397,     0,     0,   438,   439,     0,   402,     0,   404,
       0,     0,     0,     0,     0,     0,   473,     0,     0,     0,
     477,     0,     0,     0,   481,     0,     0,     0,     0,     0,
       0,   488,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   507,   508,
     509,   510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   551,   552,   553,     0,
     555,     0,     0,     0,     0,   563,     0,     0,     0,     0,
       0,   485,   486,     0,   541,     0,   564,     0,     0,     0,
       0,   546,    97,     0,     0,    98,     0,     0,   572,    99,
     100,   101,   556,   102,   103,     0,   104,   105,   106,   107,
       0,     0,     0,     0,     0,     0,   108,     0,     0,   109,
       0,   110,     0,   111,     0,     0,   631,     0,   632,   633,
       0,     0,     0,   636,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   113,     0,   114,
     115,   116,     0,     0,   117,   118,   119,     0,     0,     0,
     120,     0,     0,   635,     0,   121,   637,   638,   639,     0,
     641,     0,     0,   578,     0,   471,     0,     0,   652,   654,
     579,     0,     0,   479,     0,     0,     0,   665,     0,   580,
       0,     0,     0,   581,     0,   582,     0,   492,   493,   122,
       0,     0,   123,     0,   583,     0,   504,   584,   506,     0,
     124,   125,     0,   585,   512,   513,   586,     0,     0,     0,
       0,     0,     0,     0,   705,     0,     0,   587,   588,     0,
     709,     0,   589,   711,   713,   590,     0,     0,     0,     0,
       0,   717,   591,   592,   593,     0,   697,   698,   699,   543,
     725,   701,     0,   547,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   594,     4,     0,   213,   214,   735,   737,
       0,     0,     0,   567,   568,   569,   570,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   629,    14,     0,
     742,     0,   634,     0,   744,     0,   746,     0,   748,    17,
       0,     0,   750,     0,     0,     0,   776,   777,     0,     0,
     758,     0,     0,   782,   783,     0,     0,     0,     0,     0,
     767,     0,   769,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   792,   793,     0,     0,     0,     0,   797,   798,     0,
       0,     0,   825,     0,     0,     0,     0,     0,     0,     0,
       0,   700,     0,     0,   837,   838,     0,   840,   841,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   714,     0,
     716,     0,     0,     0,     0,     0,     0,     0,   -34,     0,
     832,   724,   791,     0,     0,     0,     0,     0,   796,     0,
       0,     0,     0,   842,     0,   442,   843,     0,     0,   443,
     444,     0,     0,   445,   446,   447,   448,     0,   449,   450,
       0,     0,    63,   738,   739,   740,    64,   741,     0,   451,
       0,     0,   452,    66,     0,     0,   453,   454,     0,     0,
      69,     0,     0,     0,    70,     0,     0,   455,     0,    72,
       0,     0,     0,     0,     0,     0,     0,   456,     0,     0,
       0,    74,     0,   457,     0,    76,   458,   459,   460,   461,
     462,     0,   772,   463,   773,  -328,   775,     0,     0,     0,
       0,     0,     0,     0,   781,     0,     0,     0,     0,     0,
      -5,     4,     0,   789,     0,   790,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,     0,
       0,     0,     6,     0,     0,     7,     0,     8,   804,   805,
       0,     0,     0,   809,   810,     0,     9,    10,     0,     0,
      11,    12,     0,    13,     0,    14,     0,    15,     0,     0,
      16,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   839,     0,
       0,     0,     0,    18,     0,     0,    19,     0,   844,   845,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,    -5,
       4,     0,     0,    -5,    -5,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     0,     0,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,    11,
      12,     0,    13,     0,    14,     0,    15,     0,     0,    16,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,    19,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    97,     0,     0,
      98,     0,    -5,    -5,    99,   100,   101,     0,   102,   103,
       0,   104,   105,   106,   107,     0,     0,     0,     0,     0,
       0,   108,     0,     0,   109,     0,   110,     4,   111,   213,
     214,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,   215,
       0,     7,   113,     8,   114,   115,   116,     0,     0,   117,
     118,   119,     9,    10,     0,   120,    11,     0,     0,    13,
     121,    14,     0,    15,     0,     0,   216,     0,     0,     0,
       0,     0,    17,     0,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     4,     0,   213,   214,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,     0,    11,     0,     0,    13,     0,    14,     0,
      15,     0,     0,   613,     0,     0,     0,     0,     0,    17,
       0,   614,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,     0,   213,   214,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   215,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
      11,     0,     0,    13,     0,    14,     0,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     0,    11,     0,     0,
      13,     0,    14,     0,    15,     0,     0,   196,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,    11,     0,     0,    13,     0,    14,
       0,    15,     0,     0,   597,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     4,     0,     0,     0,     0,     0,     0,     0,
     442,     0,     0,     0,   443,   444,     0,     0,   445,   446,
     447,   448,     0,   449,   450,     0,     7,    63,     0,     0,
       0,    64,     0,     0,   451,     0,     0,   452,    66,     0,
       0,   453,   454,     0,     0,    69,    14,     0,     0,    70,
       0,     0,   455,     0,    72,     0,     0,    17,     0,     0,
       0,     0,   456,     0,     0,     0,    74,     0,   457,     0,
      76,   458,   459,   460,   461,   462,     0,     0,   463,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    57,
       0,   464,     0,     0,     0,     0,     0,    58,    59,    60,
       0,     0,    61,    62,     0,     0,    63,     0,     0,     0,
      64,     0,     0,     0,     0,     0,    65,    66,     0,     0,
      67,    68,     0,     0,    69,     0,     0,     0,    70,     0,
       0,    71,     0,    72,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,    74,     0,    75,     0,    76,
      77,     0,    78,    79,    80,     0,     0,    81,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83
};

static const yytype_int16 yycheck[] =
{
      85,    99,    48,   101,   102,   103,   104,   105,   106,   573,
      12,   109,   110,   111,   112,   113,   114,     6,   116,   117,
     118,   556,   120,   121,     5,     3,     4,     0,   129,    43,
      15,     5,   720,   129,     5,   136,   280,    43,    74,   727,
     136,    15,   329,   130,    15,   132,   216,   565,   218,   219,
      74,     3,    66,   340,   138,   573,   154,   155,   134,   157,
      66,   159,     3,     4,    78,     6,     7,   165,   166,   315,
      18,    19,    78,    69,    70,   173,   322,   323,   324,   177,
       3,     4,   180,   181,   182,   183,   184,   185,   133,   187,
      38,   189,   137,     3,     4,   131,     6,     7,   127,   345,
      15,   197,   637,   638,   639,    87,   641,   131,   352,   130,
      74,   132,   630,    95,    96,   216,   134,   218,   219,   134,
       3,     4,   218,     6,   670,   813,    67,    10,    11,    12,
      13,    14,     3,     4,   680,     6,   682,     8,     9,    10,
      11,   130,   429,   128,   129,   147,   133,   313,   314,   130,
     137,   132,   130,   440,   128,   129,   130,   128,   129,   130,
     245,   246,   247,    15,   410,   411,   251,   252,   253,   254,
     255,   417,   131,   258,   420,   260,   138,   262,   263,   264,
     265,   266,    74,   134,   269,   270,   356,   134,   273,   274,
     134,   289,   277,   278,   279,   134,   281,   282,     3,     4,
     134,     6,   303,     8,     9,    10,    11,   742,   130,   744,
     132,    74,   127,   128,   129,     3,   134,   132,   133,    74,
     130,   785,   132,   130,   788,   132,   134,   311,   474,     3,
       4,   315,     6,     7,   318,   134,   320,    15,   322,   323,
     324,   325,   326,   134,   134,   329,   330,   130,    15,   132,
     334,   130,   337,   132,   134,    74,   340,   342,   130,    47,
     132,   345,   347,   348,   349,   350,   351,   134,    29,   354,
      31,    32,   134,   134,   134,   127,   128,   129,   130,    67,
      68,    69,    70,   134,     5,   370,     3,     3,   373,   374,
     375,   376,   377,   378,   379,     5,   381,     5,     3,     5,
       3,    89,     3,   388,     3,   132,   391,   392,   554,     3,
       5,     3,     5,   398,     3,    76,   562,   402,   403,    80,
      81,     3,     5,   408,    85,   133,   410,   411,   412,    90,
     415,   130,     5,   417,     6,    10,   420,   125,   126,   133,
      11,   127,    12,     5,   428,   429,    14,   431,     3,   127,
     128,   129,   130,   437,   132,   133,   440,   441,   320,   529,
     127,   128,   129,     6,   326,   132,   133,     3,   330,     8,
      11,     9,   334,    10,   134,   412,   134,   134,   134,   134,
      20,   134,   467,   134,    24,    25,   470,   134,    28,   134,
     474,   475,   429,   134,    34,   134,   480,   134,   134,   134,
     485,    41,   134,   440,   489,   134,   491,   134,   134,   134,
       5,   134,    59,     5,     3,   500,   501,    59,   503,   520,
     505,   467,     3,     5,   520,    59,   511,     5,   529,     3,
     515,   516,     5,   529,   721,     5,     3,     3,   475,     3,
       5,   728,   488,   613,     5,   615,   616,     3,   532,     3,
       3,   131,   131,     3,     4,     3,     6,   542,     8,     9,
      10,    11,     5,     5,   131,     3,   712,     3,     5,   431,
     554,   134,   718,   138,   559,   437,   722,   561,   562,   441,
     138,   565,     5,    29,   124,    31,    32,     5,     3,   573,
     536,   778,    24,    44,     3,     3,   131,   784,   131,   131,
       3,     3,   598,     3,   131,   131,    89,   132,   470,   132,
     556,   537,   613,   559,   615,   616,   803,    67,   480,   615,
      48,   808,   312,   141,   394,   147,   539,   528,   565,   123,
      76,   192,   400,   779,    80,    81,   573,   787,   126,    85,
     712,   787,    88,   736,    90,    -1,   630,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   734,   650,    -1,    -1,    -1,    -1,
     532,    -1,    -1,   658,   659,   660,    -1,   662,   663,    21,
      -1,   627,   667,   668,   669,    -1,   670,   688,    -1,   135,
     136,   637,   638,   639,    -1,   641,   680,   643,   682,   561,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    67,    -1,    55,     3,     4,    58,     6,    -1,    -1,
      62,    10,    11,    12,    13,    14,    -1,    -1,   712,    -1,
      -1,    -1,    -1,    -1,   718,   719,   720,   721,   722,    -1,
      -1,    -1,   726,   727,   728,    -1,    -1,    -1,    -1,    -1,
      -1,   749,   736,    -1,    -1,    -1,    -1,    -1,    -1,   757,
      -1,    -1,   708,    -1,    -1,    -1,    -1,    -1,   630,    -1,
     755,   756,    -1,    -1,    -1,    -1,   761,    -1,    -1,    -1,
      -1,    -1,   719,   720,    -1,    -1,    -1,    -1,    -1,   726,
     727,    -1,    -1,    -1,   778,   779,   742,    -1,   744,    -1,
     784,   785,    -1,   787,   788,    -1,   791,    -1,   670,   794,
     795,   796,    -1,    -1,   799,   800,   801,   802,   680,   803,
     682,    -1,    -1,    -1,   808,    -1,    -1,    -1,    -1,   813,
      -1,   816,   817,    -1,   819,   820,    -1,   821,   822,   823,
     824,   153,   826,   827,   156,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,    -1,   170,   171,
     172,    -1,   174,   175,   176,    -1,   178,   179,    -1,    -1,
      -1,    -1,    -1,    -1,   736,    -1,    -1,    -1,    -1,   275,
      -1,    -1,    -1,    -1,    -1,   281,   823,   824,    -1,   826,
     827,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     316,   317,    -1,   319,    -1,   321,    -1,    -1,    -1,    -1,
      -1,   327,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   337,    -1,    -1,   256,   257,   342,   259,    -1,   261,
     346,    -1,    -1,    -1,    -1,   267,   268,   353,    -1,   821,
     822,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
     335,   283,   284,   285,   286,   287,   288,    -1,   290,   344,
     292,    -1,    -1,    -1,    -1,    -1,    -1,   383,   384,   385,
     386,     3,     4,    -1,     6,     7,     8,     9,    10,    11,
      -1,   397,    -1,    -1,    -1,    -1,   371,   372,   404,    -1,
     406,    -1,    -1,    -1,    -1,   380,    -1,   382,    -1,   415,
      -1,   333,    -1,    -1,   389,   390,    -1,   339,    -1,   341,
      -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,
     405,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   482,   483,   484,    -1,
     486,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
      -1,   413,   414,    -1,   469,    -1,   502,    -1,    -1,    -1,
      -1,   476,    17,    -1,    -1,    20,    -1,    -1,   514,    24,
      25,    26,   487,    28,    29,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    48,    -1,    -1,   542,    -1,   544,   545,
      -1,    -1,    -1,   549,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      85,    -1,    -1,   548,    -1,    90,   551,   552,   553,    -1,
     555,    -1,    -1,    23,    -1,   399,    -1,    -1,   563,   564,
      30,    -1,    -1,   407,    -1,    -1,    -1,   572,    -1,    39,
      -1,    -1,    -1,    43,    -1,    45,    -1,   421,   422,   124,
      -1,    -1,   127,    -1,    54,    -1,   430,    57,   432,    -1,
     135,   136,    -1,    63,   438,   439,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   640,    -1,    -1,    77,    78,    -1,
     646,    -1,    82,   649,   650,    85,    -1,    -1,    -1,    -1,
      -1,   657,    92,    93,    94,    -1,   631,   632,   633,   473,
     666,   636,    -1,   477,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    16,    -1,    18,    19,   694,   695,
      -1,    -1,    -1,   507,   508,   509,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   541,    60,    -1,
     705,    -1,   546,    -1,   709,    -1,   711,    -1,   713,    71,
      -1,    -1,   717,    -1,    -1,    -1,   752,   753,    -1,    -1,
     725,    -1,    -1,   759,   760,    -1,    -1,    -1,    -1,    -1,
     735,    -1,   737,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   776,   777,    -1,    -1,    -1,    -1,   782,   783,    -1,
      -1,    -1,   818,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   635,    -1,    -1,   830,   831,    -1,   833,   834,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   652,    -1,
     654,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
     825,   665,   774,    -1,    -1,    -1,    -1,    -1,   780,    -1,
      -1,    -1,    -1,   838,    -1,    22,   841,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      -1,    -1,    39,   697,   698,   699,    43,   701,    -1,    46,
      -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    -1,   746,    90,   748,     0,   750,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   758,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,   767,    -1,   769,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,   792,   793,
      -1,    -1,    -1,   797,   798,    -1,    51,    52,    -1,    -1,
      55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   832,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,   842,   843,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    15,
      16,    -1,    -1,   128,   129,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    17,    -1,    -1,
      20,    -1,   128,   129,    24,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,    46,    16,    48,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    38,
      -1,    40,    72,    42,    74,    75,    76,    -1,    -1,    79,
      80,    81,    51,    52,    -1,    85,    55,    -1,    -1,    58,
      90,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    16,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,    60,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    -1,    40,    39,    -1,    -1,
      -1,    43,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,
      -1,    53,    54,    -1,    -1,    57,    60,    -1,    -1,    61,
      -1,    -1,    64,    -1,    66,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,
      82,    83,    84,    85,    86,    87,    -1,    -1,    90,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    22,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      83,    -1,    85,    86,    87,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   140,   183,     0,    16,    21,    37,    40,    42,    51,
      52,    55,    56,    58,    60,    62,    65,    71,    88,    91,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   141,   142,
     173,   174,   175,   194,    69,    70,   158,    22,    30,    31,
      32,    35,    36,    39,    43,    49,    50,    53,    54,    57,
      61,    64,    66,    74,    78,    80,    82,    83,    85,    86,
      87,    90,    95,   123,   177,   179,   180,   145,     3,   142,
     211,    15,   128,   129,   156,   143,   144,    17,    20,    24,
      25,    26,    28,    29,    31,    32,    33,    34,    41,    44,
      46,    48,    64,    72,    74,    75,    76,    79,    80,    81,
      85,    90,   124,   127,   135,   136,   196,   199,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   127,   130,   148,   160,   148,   156,
     148,   148,   131,   161,    74,    74,   161,    74,   161,    74,
     161,   161,   161,   161,   161,    74,    74,   161,   161,   161,
     161,   161,   161,   200,   161,   161,   161,   201,   161,   161,
      74,    29,    31,    32,    76,    80,    81,    85,    88,    90,
     146,   147,   196,   197,   199,     5,    65,   173,   175,   182,
       3,     3,     5,     5,     3,    20,    24,    25,    28,    34,
      41,   124,   195,    18,    19,    38,    65,    73,   173,   175,
     176,   181,     5,     3,     4,     6,     7,   157,   165,     3,
       3,   174,     3,     3,    47,    67,    68,    69,    70,    89,
     125,   126,   159,   149,   180,     6,    10,    11,    12,    13,
      14,   157,   169,   170,   171,   172,   161,   161,   172,   161,
     172,   161,   172,   172,   172,   172,   172,   161,   161,   172,
     172,   132,   162,   172,   172,   172,   161,   172,   172,   172,
     161,   172,   172,   161,   161,   161,   161,   161,   161,   198,
     161,     3,   161,     5,   197,   175,     5,     3,     3,     3,
     173,   176,   173,   175,   176,   173,   176,     5,   160,   160,
     160,   160,   160,   160,   160,   160,   172,   172,   160,   172,
     160,   172,   160,   160,   160,   160,   160,   172,   172,   160,
     160,   133,   163,   160,   160,   162,   172,   203,   204,   160,
     160,   160,   203,   160,   162,   160,   172,   172,   172,   172,
     172,   172,   161,   172,   172,     5,   173,     6,    10,    11,
     157,   169,   171,   171,     6,     8,     9,    10,    11,   157,
     166,   162,   162,     6,     8,     9,    10,    11,   157,   167,
     162,   165,   162,   166,   166,   166,   164,   165,   165,   162,
     162,   167,   165,   133,   127,   150,   211,   172,   165,   163,
     160,   162,   172,   167,   172,   162,     5,   163,   166,   162,
     160,   160,   160,   160,   160,   203,   162,   160,     3,   176,
     160,   163,   163,   160,   160,   160,   160,   160,   160,   160,
     163,   160,   163,   162,   162,   162,   162,   160,   163,   163,
     160,   160,    22,    26,    27,    30,    31,    32,    33,    35,
      36,    46,    49,    53,    54,    64,    74,    80,    83,    84,
      85,    86,    87,    90,   123,   151,   177,   184,   185,   162,
     160,   150,   204,   163,   160,   160,   162,   163,   162,   150,
     160,   163,   166,   166,   164,   172,   172,   162,   163,   166,
       3,   166,   150,   150,     6,     8,     9,    10,    11,   157,
       6,   157,   164,   167,   150,   165,   150,   163,   163,   163,
     163,   165,   150,   150,   164,   167,   165,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,     5,   134,   152,   160,
     211,   163,   165,   150,   166,   164,   163,   150,   202,   165,
     150,   162,   162,   162,   160,   162,   163,   153,   154,   184,
     211,   160,   160,   162,   162,   160,   160,   150,   150,   150,
     150,   160,   162,   160,   160,    59,   192,   193,    23,    30,
      39,    43,    45,    54,    57,    63,    66,    77,    78,    82,
      85,    92,    93,    94,   123,   178,     5,    65,   173,   175,
     187,     3,    59,   188,   189,     3,    59,   190,   191,     5,
       5,     3,   195,    65,    73,   173,   175,   176,   186,     5,
       5,   165,     3,     3,     3,   211,   159,     5,   185,   150,
     160,   162,   162,   162,   150,   163,   162,   163,   163,   163,
     166,   163,   153,     5,   155,   211,   165,    67,   166,   168,
     205,   206,   163,   137,   163,     6,   157,   164,   166,   168,
     209,   210,     3,     3,   137,   163,   164,   168,   209,     3,
     131,    43,    66,    78,    43,    66,    78,     5,   175,     5,
     131,     3,   131,     3,     3,   173,   176,   173,   175,   176,
     173,   176,   211,   165,   168,   207,   208,   163,   163,   163,
     150,   163,   153,   153,   153,   162,   153,   211,     5,   162,
     134,   162,   160,   162,   150,   138,   150,   162,   160,   160,
     160,   160,   160,   138,   150,   162,   160,   160,   160,   207,
       5,     5,   207,   207,   173,   162,   160,   162,   150,   150,
     150,   150,   163,   211,   163,     3,   163,   206,   163,    24,
     163,   166,   164,   164,   210,   167,   166,    44,   163,   164,
     164,   167,   132,     3,   132,   132,   176,   163,   208,   163,
     153,   153,   150,   150,   161,   150,   162,   162,   160,   160,
     161,   150,   162,   162,   160,   131,     3,   131,   131,   150,
     150,   172,   163,   163,   167,   166,   172,   163,   163,   167,
     209,   205,   209,   160,   150,   150,   160,   160,   160,   150,
     150,   160,   132,   160,   132,   132,   167,     3,     3,   167,
       3,   131,   131,   160,   160,   162,   160,   160,   165,   165,
     164,   164,   163,   164,   164,   132,   132,   162,   162,   150,
     162,   162,   163,   163,   150,   150
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, mkFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    mkFlexLexer* ll;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, mkFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    mkFlexLexer* ll;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, mkFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    mkFlexLexer* ll;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, mkFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    mkFlexLexer* ll;
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
int yyparse (Base* fr, mkFlexLexer* ll);
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
yyparse (Base* fr, mkFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    mkFlexLexer* ll;
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
#line 306 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 309 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 311 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 312 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 313 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::ICRS;;}
    break;

  case 21:
#line 322 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 323 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 327 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 331 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 331 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 333 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 333 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 337 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 337 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 339 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 339 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 344 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 347 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 348 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 351 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 352 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 355 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 357 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 358 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 359 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 360 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 362 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 363 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 364 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 365 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 380 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 381 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 63:
#line 382 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 64:
#line 385 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 65:
#line 386 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 66:
#line 390 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 67:
#line 392 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 393 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 69:
#line 396 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 70:
#line 397 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 71:
#line 398 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 72:
#line 399 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 73:
#line 400 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 74:
#line 401 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 75:
#line 405 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 76:
#line 412 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 419 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 426 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 433 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 440 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 448 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 82:
#line 451 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 83:
#line 454 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 457 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 461 "frame/ds9parser.Y"
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

  case 86:
#line 474 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 87:
#line 482 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 490 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 497 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 505 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 512 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 92:
#line 519 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 93:
#line 520 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 94:
#line 521 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 95:
#line 522 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 96:
#line 523 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 97:
#line 526 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 98:
#line 527 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 99:
#line 528 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 100:
#line 529 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 101:
#line 530 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 102:
#line 531 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 103:
#line 532 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 104:
#line 533 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 105:
#line 534 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 106:
#line 535 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 107:
#line 536 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 108:
#line 537 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 109:
#line 538 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 110:
#line 539 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 111:
#line 540 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 112:
#line 541 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 113:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 114:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 115:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 116:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 117:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 118:
#line 547 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 119:
#line 548 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 120:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 121:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 122:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 123:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 124:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 125:
#line 556 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 126:
#line 557 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 128:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 130:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 131:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 132:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 133:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 134:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 135:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 136:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 137:
#line 572 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 138:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 139:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 140:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 141:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 142:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 143:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 144:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 145:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 146:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 147:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 148:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 149:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 150:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 151:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 152:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 153:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 154:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 155:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 156:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 157:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 158:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 159:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 160:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 161:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 162:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 163:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 164:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 165:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 166:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 169:
#line 611 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 170:
#line 616 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 171:
#line 621 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 172:
#line 625 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 173:
#line 627 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 174:
#line 632 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 175:
#line 637 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 176:
#line 642 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::FILL,1);
	  setProps(&localProps,Marker::FILL,1);
	;}
    break;

  case 177:
#line 647 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 178:
#line 652 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 179:
#line 656 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 180:
#line 658 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 181:
#line 663 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 667 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 183:
#line 669 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 184:
#line 672 "frame/ds9parser.Y"
    {;}
    break;

  case 185:
#line 673 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 186:
#line 675 "frame/ds9parser.Y"
    {
	  strncpy(globalCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(globalCompassEast,(yyvsp[(5) - (7)].str),80);
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  globalCompassNArrow = localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  globalCompassEArrow = localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 187:
#line 683 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 188:
#line 684 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 189:
#line 685 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 190:
#line 689 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 191:
#line 696 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 192:
#line 703 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 193:
#line 710 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 194:
#line 717 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 195:
#line 724 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 196:
#line 731 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 197:
#line 738 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 198:
#line 744 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 199:
#line 753 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 200:
#line 758 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 201:
#line 763 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 202:
#line 768 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 203:
#line 774 "frame/ds9parser.Y"
    {
	  // global properties
	  globalSystem = Coord::PHYSICAL;
	  globalWCS = fr->getWCSSystem();
	  globalSky = fr->getWCSSkyFrame();
	  globalTile = 1;
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	  strcpy(globalColor,"green");
	  globalDash[0] = 8;
	  globalDash[1] = 3;
          globalWidth = 1;
	  strcpy(globalFont,"helvetica 10 normal roman");
	  strcpy(globalText,"");

	  // unique properties
	  globalLine1 = 0;
	  globalLine2 = 0;
	  globalVector = 1;
	  globalComposite = 1;
	  globalRulerCoordSystem = Coord::PHYSICAL;
	  globalRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = Coord::PHYSICAL;
	  globalRulerDistFormat = Coord::DEGREE;
	  globalRulerDistSpec[0] = '\0';
	  globalCompassCoordSystem = Coord::PHYSICAL;
	  globalCompassSkyFrame = Coord::ICRS;
	  strcpy(globalCompassNorth,"N");
	  strcpy(globalCompassEast,"E");
	  globalCompassNArrow = 1;
	  globalCompassEArrow = 1;
	  globalPoint = Point::BOXCIRCLE;
	  globalPointSize = POINTSIZE;
	  globalTextAngle=0;
	  globalTextRotate=1;

	  aStatus = 0;
	  cStatus = 0;
	;}
    break;

  case 206:
#line 821 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 207:
#line 822 "frame/ds9parser.Y"
    {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	  ;}
    break;

  case 208:
#line 827 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 209:
#line 831 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 210:
#line 832 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 211:
#line 833 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 212:
#line 834 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 213:
#line 835 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 214:
#line 837 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 215:
#line 838 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::FILL,1);;}
    break;

  case 216:
#line 839 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 217:
#line 840 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 218:
#line 842 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 219:
#line 843 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 220:
#line 844 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 221:
#line 845 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 222:
#line 846 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 224:
#line 848 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 225:
#line 850 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 226:
#line 856 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 227:
#line 857 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 231:
#line 864 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 232:
#line 871 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 233:
#line 878 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 234:
#line 885 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 235:
#line 892 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 236:
#line 899 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 237:
#line 906 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 238:
#line 913 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 239:
#line 920 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 240:
#line 929 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 241:
#line 934 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 242:
#line 939 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 243:
#line 944 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 244:
#line 950 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 245:
#line 950 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 246:
#line 951 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 247:
#line 954 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 248:
#line 955 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 249:
#line 956 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 250:
#line 959 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 251:
#line 960 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 252:
#line 961 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 253:
#line 964 "frame/ds9parser.Y"
    {
	  // reset maperr flag
	  maperr = 0;

	  // needed for annulus, ellipse annulus, and box annulus
	  aNum = 2;

	  // composite (previous conjunction found?)
	  if (!cStatus) fr->resetCompositeMarker();

	  // global properties
	  localSystem = globalSystem;
	  localSky = globalSky;
	  localProps = globalProps;
	  if (fr->useMarkerColor())
	    strcpy(localColor,fr->markerColor());
	  else
	    strcpy(localColor,globalColor);
	  localDash[0] = globalDash[0];
	  localDash[1] = globalDash[1];
	  localWidth = globalWidth;
	  strcpy(localFont,globalFont);
	  strcpy(localText,globalText);
	  strcpy(localComment,"");
	  taglist.deleteAll();
	  cblist.deleteAll();

	  // unique properties
	  localLine1 = globalLine1;
	  localLine2 = globalLine2;
	  localVector = globalVector;
	  localComposite = globalComposite;
	  localPoint = globalPoint;
	  localPointSize = globalPointSize;
	  localRulerCoordSystem = globalRulerCoordSystem;
	  localRulerSkyFrame = globalRulerSkyFrame;
	  localRulerDistSystem = globalRulerDistSystem;
	  localRulerDistFormat = globalRulerDistFormat;
	  strncpy(localRulerDistSpec,globalRulerDistSpec,32);
	  localCompassCoordSystem = globalCompassCoordSystem;
	  localCompassSkyFrame = globalCompassSkyFrame;
	  strncpy(localCompassNorth,globalCompassNorth,80);
	  strncpy(localCompassEast,globalCompassEast,80);
	  localCompassNArrow = globalCompassNArrow;
	  localCompassEArrow = globalCompassEArrow;
	  localTextAngle = globalTextAngle;
	  localTextRotate = globalTextRotate;
	  localCpanda = 1;
	  localEpanda = 1;
	  localBpanda = 1;
	;}
    break;

  case 254:
#line 1017 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 255:
#line 1018 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 256:
#line 1019 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 257:
#line 1020 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 258:
#line 1021 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 259:
#line 1022 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 260:
#line 1023 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 261:
#line 1026 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 262:
#line 1027 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 263:
#line 1031 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 264:
#line 1038 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 265:
#line 1040 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 266:
#line 1046 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 267:
#line 1053 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 268:
#line 1062 "frame/ds9parser.Y"
    {
	  fr->createCompassCmd(Vector((yyvsp[(3) - (8)].vector)), 
	  (yyvsp[(5) - (8)].real),
	  localCompassNorth, localCompassEast, 
	  localCompassNArrow, localCompassEArrow,
   	  localCompassCoordSystem, localCompassSkyFrame,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 269:
#line 1072 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 270:
#line 1080 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 271:
#line 1088 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1097 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 273:
#line 1104 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 274:
#line 1112 "frame/ds9parser.Y"
    {
	  // for ellipse annulus
	  aStatus = 1;
	  aCenter = Vector((yyvsp[(3) - (10)].vector));
	  aAngles[0] = (yyvsp[(7) - (10)].real);
	  aVector[0] = Vector((yyvsp[(5) - (10)].vector));
	  aNumsao = 1;
	  strncpy(aColor,localColor,16);
	  aDash[0] = localDash[0];
	  aDash[1] = localDash[1];
	  aWidth = localWidth;
	  strncpy(aFont,localFont,32);
	  strncpy(aText,localText,80);
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createEllipseCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 275:
#line 1135 "frame/ds9parser.Y"
    {
	  // for box annulus
	  aStatus = 3;
	  aCenter = Vector((yyvsp[(3) - (10)].vector));
	  aAngles[0] = (yyvsp[(7) - (10)].real);
	  aVector[0] = Vector((yyvsp[(5) - (10)].vector));
	  aNumsao = 1;
	  strncpy(aColor,localColor,16);
	  aDash[0] = localDash[0];
	  aDash[1] = localDash[1];
	  aWidth = localWidth;
	  strncpy(aFont,localFont,32);
	  strncpy(aText,localText,80);
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 276:
#line 1158 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 277:
#line 1166 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 278:
#line 1168 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 279:
#line 1173 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 280:
#line 1175 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1182 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 282:
#line 1190 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1198 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1204 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 285:
#line 1206 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1213 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1220 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1227 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1234 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1241 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1248 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1255 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
#line 1262 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1269 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1278 "frame/ds9parser.Y"
    {
	  fr->createCompassCmd(Vector((yyvsp[(3) - (8)].vector)), 
	  (yyvsp[(5) - (8)].real),
	  localCompassNorth, localCompassEast, 
	  localCompassNArrow, localCompassEArrow,
   	  localCompassCoordSystem, localCompassSkyFrame,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1288 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
#line 1296 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 298:
#line 1304 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1314 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1322 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 301:
#line 1332 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 302:
#line 1342 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  aVector[0] = Vector((yyvsp[(5) - (14)].vector));
	  aVector[1] = Vector((yyvsp[(7) - (14)].vector));
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    aNum,aVector,
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1354 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 304:
#line 1362 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 305:
#line 1372 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  aVector[0] = Vector((yyvsp[(5) - (14)].vector));
	  aVector[1] = Vector((yyvsp[(7) - (14)].vector));
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    aNum,aVector,
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 306:
#line 1384 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 307:
#line 1394 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 308:
#line 1403 "frame/ds9parser.Y"
    {
	  switch (localCpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal cpanda */
	    fr->createCpandaCmd(Vector((yyvsp[(3) - (18)].vector)),
	      (yyvsp[(5) - (18)].real),(yyvsp[(7) - (18)].real),(yyvsp[(9) - (18)].integer),
	      (yyvsp[(11) - (18)].real),(yyvsp[(13) - (18)].real),(yyvsp[(15) - (18)].integer),
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createCpandaCmd(Vector((yyvsp[(3) - (18)].vector)),
	      aAngNum,aAngles,
	      aNum,aAnnuli,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	;}
    break;

  case 309:
#line 1425 "frame/ds9parser.Y"
    {
	  switch (localEpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal epanda */
	    fr->createEpandaCmd(Vector((yyvsp[(3) - (20)].vector)),
	      (yyvsp[(5) - (20)].real),(yyvsp[(7) - (20)].real),(yyvsp[(9) - (20)].integer),
	      Vector((yyvsp[(11) - (20)].vector)),Vector((yyvsp[(13) - (20)].vector)),(yyvsp[(15) - (20)].integer),
	      (yyvsp[(17) - (20)].real),
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createEpandaCmd(Vector((yyvsp[(3) - (20)].vector)),
	      aAngNum,aAngles,
	      aNum,aVector,
	      aAngle,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	;}
    break;

  case 310:
#line 1449 "frame/ds9parser.Y"
    {
	  switch (localBpanda) {
	  case 0: /* ignore it */
	    break;
	  case 1: /* normal bpanda */
	    fr->createBpandaCmd(Vector((yyvsp[(3) - (20)].vector)),
	      (yyvsp[(5) - (20)].real),(yyvsp[(7) - (20)].real),(yyvsp[(9) - (20)].integer),
	      Vector((yyvsp[(11) - (20)].vector)),Vector((yyvsp[(13) - (20)].vector)),(yyvsp[(15) - (20)].integer),
	      (yyvsp[(17) - (20)].real),
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  case 2: /* one of our special pandas */
	    fr->createBpandaCmd(Vector((yyvsp[(3) - (20)].vector)),
	      aAngNum,aAngles,
	      aNum,aVector,
	      aAngle,
	      localColor,localDash,localWidth,localFont,
	      localText,localProps,localComment,taglist,cblist);
	    break;
	  }
	;}
    break;

  case 315:
#line 1479 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 318:
#line 1491 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 321:
#line 1499 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 324:
#line 1510 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 327:
#line 1520 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 328:
#line 1524 "frame/ds9parser.Y"
    {
	  // old style annulus
	  switch (aStatus) {
	  case 0: // do nothing
	    break;
	  case 1: // we found just an ellipse, do nothing
	    break;
	  case 2: // ok we have an ellipse annulus
	    fr->markerDeleteLastCmd(); // delete the previous ellipse
	    fr->createEllipseAnnulusCmd(aCenter,
	      aNumsao,aVector,
	      aAngles[0],
	      aColor,aDash,aWidth,aFont,aText,aProps,aComment,taglist,cblist);
	    break;
	  case 3: // we found just a box, do nothing
	    break;
	  case 4: // ok, we have a box annulus
	    fr->markerDeleteLastCmd(); // delete the previous box
	    fr->createBoxAnnulusCmd(aCenter,
	      aNumsao,aVector,
	      aAngles[0],
	      aColor,aDash,aWidth,aFont,aText,aProps,aComment,taglist,cblist);
	    break;
	  }
	  aStatus = 0;
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 4855 "frame/ds9parser.C"
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


#line 1551 "frame/ds9parser.Y"


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
    return Coord::ICRS;
  default:
   return localSky;
  }
}


