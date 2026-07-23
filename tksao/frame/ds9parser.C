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
static int compositeOperation;
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
#line 139 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 493 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 506 "frame/ds9parser.C"

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
#define YYLAST   2455

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  329
/* YYNRULES -- Number of states.  */
#define YYNSTATES  848

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
       2,     2,     2,   138,     2,   127,     2,     2,   134,     2,
     131,   132,     2,   136,   130,   137,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   129,
       2,   135,     2,     2,     2,     2,     2,     2,     2,     2,
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
     145,   147,   148,   150,   153,   156,   157,   159,   161,   163,
     165,   167,   169,   171,   173,   175,   177,   181,   185,   189,
     193,   197,   201,   205,   207,   209,   211,   215,   219,   223,
     227,   231,   235,   239,   241,   243,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   358,   360,   363,   366,   368,   371,   374,   376,
     379,   381,   383,   385,   387,   389,   391,   393,   395,   399,
     401,   405,   409,   414,   418,   422,   426,   428,   430,   432,
     434,   438,   443,   448,   452,   456,   460,   464,   472,   476,
     480,   484,   489,   492,   495,   498,   501,   504,   507,   509,
     511,   514,   516,   518,   520,   521,   525,   527,   531,   535,
     540,   544,   548,   552,   556,   562,   564,   566,   568,   570,
     574,   579,   584,   588,   592,   596,   600,   608,   612,   616,
     620,   624,   628,   633,   636,   639,   642,   645,   648,   651,
     653,   655,   658,   660,   662,   664,   665,   673,   675,   676,
     687,   689,   690,   701,   703,   704,   706,   708,   710,   712,
     714,   716,   718,   720,   722,   733,   734,   742,   749,   758,
     767,   778,   787,   796,   805,   814,   825,   836,   847,   848,
     856,   857,   865,   874,   885,   892,   893,   903,   910,   918,
     926,   934,   942,   950,   958,   966,   975,   984,   995,  1006,
    1019,  1032,  1045,  1060,  1075,  1094,  1107,  1122,  1137,  1156,
    1175,  1196,  1217,  1228,  1241,  1254,  1260,  1269,  1273,  1275,
    1277,  1281,  1283,  1285,  1289,  1291,  1293,  1297,  1299,  1303
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
     133,   133,    -1,   134,   134,    -1,    -1,   165,    -1,   157,
      -1,     6,    -1,     7,    -1,   157,    -1,    10,    -1,    11,
      -1,     6,    -1,     8,    -1,     9,    -1,   157,   160,   157,
      -1,    10,   160,    10,    -1,    11,   160,    11,    -1,     6,
     160,     6,    -1,     8,   160,     8,    -1,     9,   160,     9,
      -1,    67,   135,     3,    -1,    12,    -1,    13,    -1,    14,
      -1,   169,   160,   169,    -1,   170,   160,   171,    -1,   171,
     160,   171,    -1,   157,   160,   157,    -1,     6,   160,     6,
      -1,    11,   160,    11,    -1,    10,   160,    10,    -1,    60,
      -1,    71,    -1,    40,    -1,    16,    -1,   174,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,   110,
      -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,
      -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,   120,
      -1,   121,    -1,   122,    -1,    51,    -1,    21,    -1,    52,
      -1,    62,    -1,    58,    -1,    55,    -1,    42,    -1,    38,
      -1,    18,    -1,    19,    -1,    82,    -1,    57,    -1,    35,
      -1,    49,    -1,    50,    -1,    43,    -1,    66,    -1,    78,
      -1,    39,    -1,    61,    -1,    83,    -1,    82,    -1,    93,
      -1,    57,    -1,    92,    -1,    23,    66,    -1,    66,    -1,
      45,    66,    -1,    23,    43,    -1,    43,    -1,    45,    43,
      -1,    23,    78,    -1,    78,    -1,    45,    78,    -1,    39,
      -1,    85,    -1,    30,    -1,   123,    -1,    77,    -1,    54,
      -1,    63,    -1,    94,    -1,   179,   160,   180,    -1,   180,
      -1,   177,   135,   159,    -1,    30,   135,     5,    -1,    36,
     135,     3,     3,    -1,   123,   135,     3,    -1,    54,   135,
       5,    -1,    85,   135,     5,    -1,    35,    -1,    49,    -1,
      83,    -1,    22,    -1,    74,   135,   195,    -1,    74,   135,
     195,     3,    -1,    64,   135,     3,     3,    -1,    90,   135,
       3,    -1,    32,   135,     3,    -1,    80,   135,   181,    -1,
      53,   135,     5,    -1,    31,   135,   182,     5,     5,     3,
       3,    -1,    86,   135,   165,    -1,    87,   135,     3,    -1,
      95,   135,   174,    -1,   173,   175,   173,   176,    -1,   173,
     173,    -1,   173,   176,    -1,   175,   173,    -1,   175,   176,
      -1,    65,   173,    -1,    65,   176,    -1,   176,    -1,    73,
      -1,   173,   175,    -1,   173,    -1,   175,    -1,    65,    -1,
      -1,   184,   160,   185,    -1,   185,    -1,   177,   135,   159,
      -1,    30,   135,     5,    -1,    36,   135,     3,     3,    -1,
     123,   135,     3,    -1,    54,   135,     5,    -1,    85,   135,
       5,    -1,    84,   135,     5,    -1,    27,   135,   178,     5,
       5,    -1,    35,    -1,    49,    -1,    83,    -1,    22,    -1,
      74,   135,   195,    -1,    74,   135,   195,     3,    -1,    64,
     135,     3,     3,    -1,    90,   135,     3,    -1,    32,   135,
       3,    -1,    80,   135,   186,    -1,    53,   135,     5,    -1,
      31,   135,   187,     5,     5,     3,     3,    -1,    86,   135,
     165,    -1,    87,   135,     3,    -1,    33,   135,   188,    -1,
      46,   135,   190,    -1,    26,   135,   192,    -1,   173,   175,
     173,   176,    -1,   173,   173,    -1,   173,   176,    -1,   175,
     173,    -1,   175,   176,    -1,    65,   173,    -1,    65,   176,
      -1,   176,    -1,    73,    -1,   173,   175,    -1,   173,    -1,
     175,    -1,    65,    -1,    -1,   189,   131,   207,   132,   131,
     205,   132,    -1,    59,    -1,    -1,   191,   131,   207,   132,
     131,   209,   132,   131,   165,   132,    -1,    59,    -1,    -1,
     193,   131,   207,   132,   131,   209,   132,   131,   165,   132,
      -1,    59,    -1,    -1,    28,    -1,    24,    -1,    41,    -1,
      34,    -1,   124,    -1,    20,    -1,    25,    -1,   136,    -1,
     137,    -1,    90,   161,   172,   160,   166,   160,   165,   162,
     163,   153,    -1,    -1,    81,   198,   161,   203,   162,   163,
     153,    -1,    85,   161,   172,   162,   163,   153,    -1,    80,
     161,   172,   160,   172,   162,   163,   153,    -1,    31,   161,
     172,   160,   166,   162,   163,   153,    -1,    76,   161,   172,
     160,   172,   160,   166,   162,   163,   153,    -1,    29,   161,
     172,   160,   166,   162,   163,   153,    -1,    32,   161,   172,
     160,   164,   162,   163,   153,    -1,    28,   161,   172,   160,
     166,   162,   163,   150,    -1,    29,   161,   172,   160,   166,
     162,   163,   150,    -1,    44,   161,   172,   160,   167,   160,
     164,   162,   163,   150,    -1,    24,   161,   172,   160,   167,
     160,   164,   162,   163,   150,    -1,    79,   161,   172,   160,
     167,   160,   164,   162,   163,   150,    -1,    -1,    75,   200,
     161,   203,   162,   163,   150,    -1,    -1,    81,   201,   161,
     203,   162,   163,   150,    -1,    64,   161,   172,   160,   172,
     162,   163,   150,    -1,    90,   161,   172,   160,   166,   160,
     165,   162,   163,   150,    -1,    85,   161,   172,   162,   163,
     150,    -1,    -1,    85,   161,   172,   160,     5,   162,   202,
     163,   150,    -1,    74,   161,   172,   162,   163,   150,    -1,
      28,    74,   161,   172,   162,   163,   150,    -1,    24,    74,
     161,   172,   162,   163,   150,    -1,    41,    74,   161,   172,
     162,   163,   150,    -1,    34,    74,   161,   172,   162,   163,
     150,    -1,   124,    74,   161,   172,   162,   163,   150,    -1,
      20,    74,   161,   172,   162,   163,   150,    -1,    25,    74,
     161,   172,   162,   163,   150,    -1,    80,   161,   172,   160,
     172,   162,   163,   150,    -1,    31,   161,   172,   160,   166,
     162,   163,   150,    -1,    76,   161,   172,   160,   172,   160,
     166,   162,   163,   150,    -1,    17,   161,   172,   160,   166,
     160,   166,   162,   163,   150,    -1,    17,   161,   172,   160,
     166,   160,   166,   160,   205,   162,   163,   150,    -1,    17,
     161,   172,   160,   166,   160,   166,   160,   168,   162,   163,
     150,    -1,    44,   161,   172,   160,   167,   160,   167,   160,
     164,   162,   163,   150,    -1,    44,   161,   172,   160,   167,
     160,   167,   160,   168,   160,   164,   162,   163,   150,    -1,
      44,   161,   172,   160,   167,   160,   167,   160,   209,   160,
     164,   162,   163,   150,    -1,    44,   161,   172,   160,   167,
     160,   164,   162,   134,   138,    44,   161,   172,   160,   167,
     160,   164,   162,    -1,    24,   161,   172,   160,   167,   160,
     167,   160,   164,   162,   163,   150,    -1,    24,   161,   172,
     160,   167,   160,   167,   160,   209,   160,   164,   162,   163,
     150,    -1,    24,   161,   172,   160,   167,   160,   167,   160,
     168,   160,   164,   162,   163,   150,    -1,    24,   161,   172,
     160,   167,   160,   164,   162,   134,   138,    24,   161,   172,
     160,   167,   160,   164,   162,    -1,    33,   161,   172,   160,
     165,   160,   165,   160,     3,   160,   166,   160,   166,   160,
       3,   162,   163,   150,    -1,    46,   161,   172,   160,   165,
     160,   165,   160,     3,   160,   167,   160,   167,   160,     3,
     160,   164,   162,   163,   150,    -1,    26,   161,   172,   160,
     165,   160,   165,   160,     3,   160,   167,   160,   167,   160,
       3,   160,   164,   162,   163,   150,    -1,    72,   161,   172,
     160,   165,   160,   165,   162,   163,   150,    -1,    72,   161,
     172,   160,   165,   160,   165,   160,   207,   162,   163,   150,
      -1,    72,   161,   172,   160,   165,   160,   165,   160,   168,
     162,   163,   150,    -1,    48,   161,   162,   163,   150,    -1,
      32,   161,   172,   160,   164,   162,   163,   150,    -1,   203,
     160,   204,    -1,   204,    -1,   172,    -1,   205,   160,   206,
      -1,   206,    -1,   166,    -1,   207,   160,   208,    -1,   208,
      -1,   165,    -1,   209,   160,   210,    -1,   210,    -1,   166,
     160,   166,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   298,   298,   301,   302,   305,   306,   307,   309,   310,
     312,   312,   313,   313,   314,   314,   316,   317,   318,   321,
     322,   323,   324,   324,   327,   328,   328,   331,   332,   332,
     333,   334,   334,   337,   338,   338,   339,   340,   340,   343,
     344,   345,   348,   349,   352,   353,   356,   358,   359,   360,
     361,   363,   364,   365,   366,   369,   370,   373,   374,   377,
     378,   381,   382,   390,   398,   408,   409,   412,   414,   416,
     419,   420,   421,   422,   423,   424,   427,   434,   441,   448,
     455,   462,   471,   474,   477,   480,   483,   496,   504,   512,
     519,   527,   534,   542,   543,   544,   545,   546,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     571,   572,   573,   574,   575,   576,   579,   580,   581,   582,
     583,   584,   585,   588,   589,   590,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   629,   630,
     633,   638,   643,   648,   649,   654,   659,   664,   669,   674,
     679,   680,   685,   690,   691,   695,   696,   697,   706,   707,
     708,   711,   718,   725,   732,   739,   746,   753,   760,   766,
     775,   780,   785,   790,   797,   841,   842,   845,   846,   850,
     855,   856,   857,   858,   859,   861,   862,   863,   864,   866,
     867,   868,   869,   870,   871,   872,   873,   880,   881,   882,
     883,   884,   887,   894,   901,   908,   915,   922,   929,   936,
     943,   952,   957,   962,   967,   974,   974,   975,   978,   978,
     980,   983,   983,   985,   988,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1053,  1054,  1057,  1065,  1065,  1072,  1079,  1088,
    1098,  1106,  1114,  1124,  1131,  1139,  1162,  1185,  1194,  1194,
    1201,  1201,  1209,  1217,  1225,  1232,  1232,  1240,  1247,  1254,
    1261,  1268,  1275,  1282,  1289,  1296,  1305,  1315,  1323,  1330,
    1340,  1348,  1358,  1368,  1380,  1388,  1398,  1410,  1420,  1429,
    1451,  1475,  1500,  1501,  1502,  1504,  1506,  1516,  1517,  1520,
    1523,  1524,  1527,  1534,  1535,  1538,  1545,  1546,  1549,  1553
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
  "','", "'('", "')'", "'|'", "'&'", "'='", "'+'", "'-'", "'!'", "$accept",
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
      44,    40,    41,   124,    38,    61,    43,    45,    33
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
     162,   163,   163,   163,   163,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   168,   169,   170,   171,   172,   172,   172,   172,
     172,   172,   172,   173,   173,   173,   173,   173,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   175,   176,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   179,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     182,   182,   182,   182,   183,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   187,   187,   187,   187,   189,   188,   188,   191,   190,
     190,   193,   192,   192,   194,   195,   195,   195,   195,   195,
     195,   195,   196,   196,   197,   198,   197,   197,   197,   197,
     197,   197,   197,   199,   199,   199,   199,   199,   200,   199,
     201,   199,   199,   199,   199,   202,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   203,   203,   204,
     205,   205,   206,   207,   207,   208,   209,   209,   210,   211
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
       1,     0,     1,     2,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     3,     4,     3,     3,     3,     1,     1,     1,     1,
       3,     4,     4,     3,     3,     3,     3,     7,     3,     3,
       3,     4,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     1,     0,     3,     1,     3,     3,     4,
       3,     3,     3,     3,     5,     1,     1,     1,     1,     3,
       4,     4,     3,     3,     3,     3,     7,     3,     3,     3,
       3,     3,     4,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     0,     7,     1,     0,    10,
       1,     0,    10,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,    10,     0,     7,     6,     8,     8,
      10,     8,     8,     8,     8,    10,    10,    10,     0,     7,
       0,     7,     8,    10,     6,     0,     9,     6,     7,     7,
       7,     7,     7,     7,     7,     8,     8,    10,    10,    12,
      12,    12,    14,    14,    18,    12,    14,    14,    18,    18,
      20,    20,    10,    12,    12,     5,     8,     3,     1,     1,
       3,     1,     1,     3,     1,     1,     3,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     204,     0,   254,     1,    96,   127,     0,    95,   132,   126,
     128,   131,     0,   130,    93,   129,    14,    94,     0,     7,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   254,     0,
      10,    97,    12,     0,    45,    44,     6,   179,     0,     0,
       0,   176,     0,   144,   141,   177,   140,     0,     0,   137,
     145,     0,   142,     0,   143,     0,   136,   178,     0,     0,
       0,     0,     0,     0,     0,    55,   169,    24,     9,     0,
       2,    41,    39,    40,     4,    24,    24,    57,     0,    57,
       0,    57,    57,    57,    57,    57,    57,     0,     0,    57,
      57,    57,    57,    57,    57,   278,    57,    57,    57,   280,
      57,    57,     0,    22,   262,   263,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,     8,     0,    15,     3,
      11,    13,    58,     0,    57,    57,     0,    57,     0,    57,
       0,     0,     0,     0,     0,    57,    57,     0,     0,    59,
       0,     0,     0,    57,     0,     0,     0,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   265,    57,     0,    57,
      18,     0,     0,    19,    17,   171,   203,   201,   202,     0,
     184,     0,   186,   174,     0,   260,   256,   261,   255,   258,
     257,   259,   180,   134,   135,   133,     0,   199,     0,     0,
     198,   185,   175,    43,    42,    68,    69,    67,   188,   189,
     183,   190,   173,    46,    54,    52,    51,    53,    49,    50,
      48,    47,   170,     0,   168,    55,    55,    55,    83,    84,
      85,    55,    55,    55,    55,    55,     0,     0,    55,     0,
      55,     0,    55,    55,    55,    55,    55,     0,     0,    55,
      55,    60,    61,    55,    55,    59,     0,    55,    55,    55,
       0,    59,    55,     0,     0,     0,     0,     0,     0,    57,
       0,    21,     0,    23,    20,   200,     0,   172,   182,   181,
     196,   197,   192,     0,   193,   194,   195,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    59,     0,    59,
       0,    59,     0,     0,     0,    65,     0,    59,    59,     0,
       0,    62,     0,   329,     0,     0,    61,   319,    55,   318,
       0,     0,     0,    55,     0,    61,     0,    59,    55,    55,
      55,    55,    55,     0,    59,    55,     0,     0,    90,    92,
      91,    89,    86,    87,    88,    73,    74,    75,    71,    72,
      70,    55,    61,    61,    55,    55,    55,    55,    55,    55,
      55,    61,    55,    61,    59,    59,    59,    59,    66,    55,
      61,    61,    55,    55,    63,    64,    28,   315,    27,    59,
      55,   329,     0,    61,    55,    55,    59,    61,    59,   329,
      55,    61,     0,     0,    65,     0,     0,    59,    61,     0,
       0,   191,     0,   329,   329,     0,     0,     0,     0,     0,
       0,    65,   329,     0,   329,    61,    61,    61,    61,     0,
     329,   329,    65,     0,   218,     0,     0,     0,     0,     0,
       0,   215,     0,     0,   216,     0,     0,     0,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,    55,
     206,    61,     0,   287,   317,   329,     0,    65,    61,   329,
     285,   284,     0,   329,    59,    59,    59,    55,    59,    61,
     329,    55,   187,    55,   293,   289,    79,    80,    81,    77,
      78,    76,    68,    67,    59,    55,   294,    55,   288,   329,
     329,   329,   329,    55,   291,   290,    59,    55,    55,   251,
       0,     0,     0,     0,   245,     0,   248,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   329,     0,
       0,     0,    30,   329,    59,   279,    59,    59,   329,   281,
      61,    59,   292,    61,    61,    61,     0,    61,   329,   267,
       0,    55,    33,     0,     0,    61,    61,    65,     0,   273,
     274,   296,   316,     0,    61,    65,     0,   253,   231,     0,
       0,   162,   160,   155,     0,   165,   149,   166,   152,   164,
     158,   147,   161,   150,   148,   167,   163,     0,   208,   244,
     242,   243,     0,   223,   247,   229,     0,     0,   250,   230,
       0,   225,   211,     0,   219,     0,   240,     0,     0,   239,
     224,   213,   212,   227,   228,   222,   210,    29,   207,   329,
     205,   282,     0,    61,    61,    61,   295,   329,    61,   329,
     329,   329,    59,   329,   266,   329,     0,    36,    59,     0,
     322,    59,    55,   321,   329,     0,   329,    73,    70,    59,
      55,    55,    55,   327,    55,    55,     0,   329,    59,    55,
      55,    55,     0,   154,   151,   157,   156,   153,   159,     0,
     241,     0,     0,   209,     0,   221,   220,   237,   238,   233,
       0,   234,   235,   236,    32,   325,    59,    59,   324,   329,
     329,   329,   286,   329,   271,   269,   272,    61,   268,    35,
     329,    61,     0,    61,     0,    61,   298,     0,   276,    61,
       0,    65,    65,     0,     0,     0,   275,    61,    65,    65,
       0,    55,   214,     0,    55,    55,     0,    61,     0,    61,
     312,   297,   277,   283,   329,    38,   329,    82,   329,   320,
     329,    57,   329,   328,    59,    59,   326,    55,    55,    57,
     329,    59,    59,    55,     0,     0,     0,     0,   232,   329,
     323,   329,   270,   264,   300,   299,     0,   305,    61,    61,
       0,     0,     0,   301,    61,    61,     0,     0,   226,     0,
       0,   314,   313,    55,   329,   329,    55,    55,    55,   329,
     329,    55,    55,    55,    55,     0,   307,   306,     0,     0,
       0,   302,   303,     0,     0,     0,   246,     0,    55,    55,
      59,    55,    55,     0,     0,    65,    65,    61,    65,    65,
       0,     0,    59,    59,   329,    59,    59,   252,   249,   308,
      61,   309,   304,    61,   329,   329,   311,   310
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    49,    95,    96,    87,   190,   191,   146,
     243,   397,   467,   540,   559,   560,   646,    94,   251,    56,
     242,   738,   153,   272,   333,   387,   388,   660,   380,   651,
     252,   253,   254,   337,    50,    51,    52,   220,   468,   597,
      85,    86,   221,   199,     2,   561,   470,   620,   602,   605,
     606,   609,   610,   578,   579,    53,   212,   126,   193,   289,
     127,   173,   177,   550,   338,   339,   652,   653,   697,   698,
     662,   663,   398
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -690
static const yytype_int16 yypact[] =
{
    -690,    42,  1678,  -690,  -690,  -690,    63,  -690,  -690,  -690,
    -690,  -690,  2304,  -690,  -690,  -690,  -690,  -690,    57,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  1453,    43,
    -690,  -690,  -690,  1559,  -690,  -690,  -690,  -690,   -69,   -64,
     -43,   -41,   -35,  -690,  -690,   -16,  -690,   -10,     2,  -690,
    -690,    13,  -690,    16,  -690,    29,  -690,    48,    52,    55,
      60,    65,    70,    95,   100,    17,  -690,   121,  -690,    43,
    -690,  -690,  -690,  -690,  -690,   121,   121,   106,   176,   -38,
     178,   106,   -22,   106,   106,   106,   106,   182,   186,   106,
     106,   106,   106,   106,   106,  -690,   106,   106,   106,  -690,
     106,   106,   195,   455,  -690,  -690,  1784,  -690,   152,  2029,
     268,   271,   280,   282,   285,   429,  1313,   293,   219,   296,
     297,  2333,   298,   214,  -690,  -690,  -690,  2304,  -690,  -690,
    -690,  -690,  -690,   516,   106,   106,   516,   106,   516,   106,
     516,   516,   516,   516,   516,   106,   106,   516,   516,   173,
     516,   516,   516,   106,   516,   516,   516,   106,   516,   516,
     106,   106,   106,   106,   106,   106,  -690,   106,   306,   106,
    -690,   305,   470,  -690,  -690,  -690,  -690,   349,  -690,   307,
    -690,   310,  -690,  -690,   311,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,   321,  -690,  -690,  -690,   962,  -690,  1922,   962,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,   322,  -690,   196,   196,   196,  -690,  -690,
    -690,   196,   196,   196,   196,   196,   516,   516,   196,   516,
     196,   516,   196,   196,   196,   196,   196,   516,   516,   196,
     196,  -690,    82,   196,   196,   173,   516,   196,   196,   196,
     516,    26,   196,   516,   516,   516,   516,   516,   516,   106,
     516,  -690,   516,  -690,  -690,  -690,   326,  -690,  -690,  -690,
    -690,  -690,  -690,  1182,  -690,  -690,  -690,  -690,   327,   324,
     332,   225,   325,   334,   334,   612,   173,   173,   623,   173,
     219,   173,   612,   612,   612,   219,   219,   173,   173,   623,
     219,   217,   218,   224,   516,   219,    82,  -690,   244,  -690,
     516,   623,   516,   244,   348,    82,   612,   173,   196,   196,
     196,   196,   196,   516,   173,   196,   351,    27,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,   196,    82,    82,   196,   196,   196,   196,   196,   196,
     196,    82,   196,    82,   173,   173,   173,   173,  -690,   196,
      82,    82,   196,   196,  -690,  -690,  2237,  -690,  -690,   173,
     196,   224,   516,    82,   196,   196,   173,    82,   173,   224,
     196,    82,   612,   612,   219,   516,   516,   117,    82,   612,
     354,  -690,   612,   224,   224,   356,   355,   357,   359,   353,
     225,   562,   224,   219,   224,    82,    82,    82,    82,   219,
     224,   224,   562,   219,  -690,   230,   240,   248,   254,   255,
     259,   -41,   260,   261,   -16,   262,   264,   275,   278,   279,
      48,   281,   289,   290,   291,   292,   294,   374,   299,    83,
    -690,    82,   219,  -690,  -690,   224,   612,   219,    82,   224,
    -690,  -690,   219,   224,   173,   173,   173,   196,   173,    82,
    1624,   196,  -690,   244,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,    19,    35,   173,   196,  -690,   196,  -690,   224,
     224,   224,   224,   196,  -690,  -690,   173,   196,   196,   376,
     871,   431,  2136,   434,   380,   438,   386,   441,   442,   448,
     429,  1815,   447,   450,   219,   453,   457,   458,  -690,   214,
     461,  2237,  -690,   224,    23,  -690,   173,   173,   224,  -690,
      82,   173,  -690,    82,    82,    82,   612,    82,  1624,  -690,
     464,    90,  -690,   219,   132,    82,    99,   269,   459,  -690,
    -690,  -690,  -690,   468,   110,   269,   471,  -690,  -690,   342,
      30,  -690,  -690,  -690,   120,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,   472,  -690,  -690,
     349,  -690,   473,  -690,  -690,  -690,   344,   479,  -690,  -690,
     358,  -690,  -690,   482,   487,   962,  -690,  1922,   962,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,   338,    82,    82,    82,  -690,   224,    82,  1624,
    1624,  1624,   173,  1624,  -690,  -690,   488,  -690,   173,   360,
    -690,   173,   244,  -690,   224,   -58,   224,   189,   253,   173,
     196,   196,   196,  -690,   196,   196,   -37,   224,   173,   196,
     196,   196,   219,  -690,  -690,  -690,  -690,  -690,  -690,   491,
    -690,   492,   219,  -690,   219,  -690,  -690,  -690,  -690,  -690,
    1182,  -690,  -690,  -690,  -690,  -690,   173,    44,  -690,   224,
     224,   224,  -690,   224,  -690,  -690,  -690,    82,  -690,  -690,
    -690,    82,   497,    82,   612,    82,  -690,   480,  -690,    82,
     612,   219,   603,   623,   612,   462,  -690,    82,   219,   603,
     623,   -20,  -690,   500,   -19,    -8,    27,    82,   219,    82,
    -690,  -690,  -690,  -690,  1624,  -690,  1624,  -690,   224,  -690,
     224,   106,   224,  -690,   173,   173,  -690,   196,   196,   106,
     224,   173,   173,   196,   377,   502,   378,   390,  -690,   224,
    -690,   224,  -690,  -690,  -690,  -690,   516,  -690,    82,    82,
     623,   612,   516,  -690,    82,    82,   623,   612,  -690,   612,
     612,  -690,  -690,   196,   224,   224,   196,   196,   196,   224,
     224,   196,    22,    71,    78,   623,  -690,  -690,   504,   508,
     623,  -690,  -690,   520,   393,   612,  -690,   394,   196,   196,
     173,   196,   196,   219,   219,   219,   219,    82,   219,   219,
     400,   401,   173,   173,   224,   173,   173,  -690,  -690,  -690,
      82,  -690,  -690,    82,   224,   224,  -690,  -690
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -690,  -690,  -690,   486,  -690,  -690,  -690,  -690,  -690,   -32,
    -690,   702,  -690,  -690,  -537,  -690,  -690,   449,   -84,  -690,
      -2,   -85,   -98,   505,   536,  -361,   -24,   483,  -292,  -498,
     229,  -690,   -59,   590,  -101,   403,  -119,  -175,    12,  -690,
    -690,   395,  -690,  -690,  -690,   151,     8,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,    24,   433,   365,  -690,
     426,  -690,  -690,  -690,  -246,   156,  -230,  -152,  -610,  -174,
    -566,  -689,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -330
static const yytype_int16 yytable[] =
{
     147,   156,    90,   158,   160,   161,   162,   163,   164,   670,
     198,   167,   168,   169,   170,   171,   172,   219,   174,   175,
     176,   644,   178,   179,    84,   -55,   -55,   -55,   197,   -55,
     -55,   -55,   -24,   756,   343,   218,   155,   392,   -55,   -55,
     756,   301,     3,   304,   306,   213,   214,   -55,   -55,   405,
     -55,   -55,   159,   486,   227,   148,   256,   257,    91,   259,
      88,   261,   731,   150,   151,   215,   128,   267,   268,   661,
     504,   129,   734,   673,   735,   276,   395,   669,   295,   280,
     717,   516,   283,   284,   285,   286,   287,   288,   -31,   290,
     -55,   292,   130,   152,  -138,   -37,   674,   395,  -329,   303,
     131,   725,   704,   705,   706,  -329,   708,   417,   675,   152,
     145,   145,   764,   766,   228,   300,   547,   302,   305,  -139,
     -55,   -55,   145,   -55,   767,   132,   756,   -55,   -55,   -55,
     -55,   -55,    54,    55,   696,   223,   224,   133,   365,   505,
     366,   367,   368,   369,   144,   -24,   -24,   145,   134,   145,
     517,   135,   145,   145,   814,   271,   145,   195,   271,    84,
     308,   309,   310,   676,   136,   145,   311,   312,   313,   314,
     315,    92,    93,   318,   145,   320,   271,   322,   323,   324,
     325,   326,   421,  -146,   329,   330,   677,   137,   334,   335,
     138,   353,   340,   341,   342,   139,   344,   346,   678,   649,
     140,   145,   357,   816,   -68,   141,   659,   772,   145,   773,
     817,  -329,  -329,   145,   668,   331,   332,   233,  -329,  -329,
     145,   802,   223,   224,   804,   225,   226,   361,   223,   224,
     142,   370,   331,   655,   379,   143,   227,   152,   370,   370,
     370,   227,   227,   331,   666,   379,   227,   145,   144,   271,
     154,   227,   157,   402,   363,   364,   165,   379,   402,   -59,
     166,   234,   370,   412,   413,   414,   415,   416,   -67,   180,
     419,   200,   223,   224,   201,   657,   226,   366,   367,   368,
     369,   235,   236,   237,   238,   202,   422,   203,   204,   425,
     426,   427,   428,   429,   430,   431,   382,   433,   222,   229,
     230,   232,   389,   239,   439,   271,   393,   442,   443,   291,
     293,   400,   296,   297,   298,   472,   -68,   -68,   -68,   476,
     477,   -68,   -68,   -68,   299,   482,   145,   307,   370,   370,
     227,   356,   402,   358,   359,   370,   649,   248,   370,   240,
     241,   223,   224,   360,   225,   226,   501,   503,   250,   227,
     394,   396,   395,   408,   420,   227,   619,   492,   503,   227,
     754,   755,   496,   497,   500,   519,   498,   761,   762,   499,
       5,   -59,   -59,   -59,   145,   520,   271,   -59,   -59,   538,
     -67,   -67,   -67,   521,   541,   -67,   -67,   -67,   227,   522,
     523,     8,   370,   227,   524,   525,   526,   527,   227,   528,
       9,    10,   556,   601,    11,   649,   563,    13,   564,   507,
     529,    15,   618,   530,   531,   513,   532,   425,   430,   518,
     567,   600,   568,   542,   533,   534,   535,   536,   573,   537,
     617,   757,   575,   576,   539,   577,   598,   603,   763,   604,
     688,   607,   691,   693,   562,   608,   611,   612,   544,   205,
     227,   613,   621,   206,   207,   622,   624,   208,   551,   632,
     625,   626,   664,   209,   832,   833,   629,   835,   836,   645,
     210,   665,   370,   672,   671,   682,   541,   679,   681,   227,
     370,   680,   683,   658,   181,   685,   182,   183,   796,   684,
     686,   658,   627,   710,   801,   712,   732,   733,   690,   181,
     747,   182,   183,   765,   751,   788,   759,   819,   787,   789,
     623,   820,   562,   818,   687,   647,   689,   692,   821,   223,
     224,   790,   245,   822,   823,   824,   246,   247,   248,   249,
     250,   184,   837,   838,    89,   185,   186,   628,   149,   648,
     187,   362,   244,   188,   231,   189,   184,   469,   227,   630,
     185,   186,   194,   211,   614,   187,   192,   294,   474,   803,
     189,   768,   749,     0,   770,   223,   224,   714,   502,   226,
     375,   376,   377,   378,     0,   720,   721,   722,     0,   723,
     724,     0,     0,   694,   728,   729,   730,     0,   227,   736,
       0,   124,   125,   562,   562,   562,     0,   562,   227,   709,
     227,     0,     0,     0,     0,     0,   223,   224,   695,   657,
     226,   366,   367,   368,   369,   223,   224,     0,   365,     0,
     366,   367,   368,   369,     0,     0,   223,   224,     0,   374,
     370,   375,   376,   377,   378,     0,   370,   227,   658,   379,
     370,     0,     0,     0,   227,   658,   379,     0,   695,     0,
       0,     0,     0,   776,   227,     0,     0,     0,   695,     0,
     695,   782,     0,     0,   745,     0,     0,     0,     0,     0,
       0,     0,   780,   781,     0,     0,     0,     0,   786,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   379,   370,   562,     0,
     562,     0,   379,   370,     0,   370,   370,     0,   805,     0,
       0,   808,   809,   810,   695,     0,   813,   815,   714,   815,
       0,   379,     0,     0,     0,     0,   379,     0,     0,     0,
       0,   370,     0,   825,   826,     0,   828,   829,     0,   227,
     227,   227,   227,   255,   227,   227,   258,     0,   260,     0,
     262,   263,   264,   265,   266,     0,     0,   269,   270,     0,
     273,   274,   275,     0,   277,   278,   279,     0,   281,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,   345,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   371,   830,
     831,     0,     0,     0,     0,   384,   385,   386,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   372,   373,     0,   381,     0,   383,     0,     0,   410,
       0,     0,   390,   391,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,     0,     0,   316,   317,   407,   319,
       0,   321,   411,     0,     0,     0,     0,   327,   328,   418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   347,   348,   349,   350,   351,   352,     0,
     354,   409,   355,     0,     0,     0,     0,     0,     0,   435,
     436,   437,   438,     0,   580,   484,   485,     0,     0,     0,
       0,   581,   491,     0,   471,   493,     0,     0,   423,   424,
     582,   478,     0,   480,   583,     0,   584,   432,     0,   434,
       0,     0,   489,     0,   399,   585,   440,   441,   586,     0,
     404,     0,   406,     0,   587,     0,     0,   588,     0,   475,
       0,     0,     0,   479,     0,     0,     0,   483,   589,   590,
       0,     0,     0,   591,   490,     0,   592,     0,     0,   546,
       0,     0,     0,   593,   594,   595,     0,     0,     0,     0,
       0,   509,   510,   511,   512,     0,     0,     0,     4,     0,
     213,   214,     0,     0,     0,     0,     0,     0,     0,   553,
     554,   555,     0,   557,   596,     0,     0,     0,   565,     0,
     215,     0,     7,     0,     0,   487,   488,   543,     0,   566,
       0,     0,     0,     0,   548,     0,     0,     0,     0,     0,
       0,   574,    14,     0,     0,   558,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,   642,
       0,     0,     0,     0,     0,     0,     0,   650,     0,   633,
       0,   634,   635,     0,     0,     0,   638,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,   637,     0,     0,   639,
     640,   641,     0,   643,     0,     0,     0,     0,     0,     0,
       0,   654,   656,   473,     0,     0,     0,     0,     0,     0,
     667,   481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   494,   495,     0,     0,     0,
       0,     0,     0,     0,   506,     0,   508,     0,     0,     0,
       0,     0,   514,   515,     0,     0,     0,   707,     0,     0,
       0,     0,     0,   711,     0,     0,   713,   715,     0,     0,
       0,     0,     0,     0,   719,     0,     0,     0,     0,   699,
     700,   701,     0,   727,   703,     0,     0,   545,     0,     0,
       0,   549,     0,     0,     0,   552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   650,     4,     0,
       0,   737,   739,   753,     0,     0,     0,   758,     0,     0,
       0,   569,   570,   571,   572,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,   744,     0,   631,     0,   746,     0,   748,
     636,   750,     0,    17,     0,   752,     0,     0,     0,   778,
     779,     0,     0,   760,   797,     0,   784,   785,     0,     0,
       0,     0,   650,   769,     0,   771,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   794,   795,     0,     0,     0,     0,
     799,   800,     0,     0,     0,   827,     0,     0,     0,     4,
       0,   213,   214,     0,     5,     0,     0,   839,   840,   702,
     842,   843,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     7,     0,     8,   716,     0,   718,     0,
       0,     0,     0,   834,     9,    10,   793,     0,    11,   726,
       0,    13,   798,    14,     0,    15,   844,     0,   216,   845,
       0,     0,     0,     0,    17,     0,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   740,   741,   742,     0,   743,     0,     0,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     774,     0,   775,  -329,   777,     0,     0,     0,     0,     0,
       0,     0,   783,     0,     0,     0,     0,     0,    -5,     4,
       0,   791,     0,   792,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     7,     0,     8,   806,   807,     0,     0,
       0,   811,   812,     0,     9,    10,     0,     0,    11,    12,
       0,    13,     0,    14,     0,    15,     0,     0,    16,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   841,     0,     0,     0,
       0,    18,     0,     0,    19,     0,   846,   847,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    97,     0,     0,    98,
       0,    -5,    -5,    99,   100,   101,     0,   102,   103,     0,
     104,   105,   106,   107,     0,     0,     0,     0,     0,     0,
     108,     0,     0,   109,     0,   110,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,   -34,
       0,   113,     0,   114,   115,   116,     0,     0,   117,   118,
     119,     0,     0,     0,   120,     0,   444,     0,     0,   121,
     445,   446,     0,     0,   447,   448,   449,   450,     0,   451,
     452,     0,     0,    63,     0,     0,     0,    64,     0,     0,
     453,     0,     0,   454,    66,     0,     0,   455,   456,     0,
       0,    69,     0,   122,     0,    70,   123,     0,   457,     0,
      72,     0,     0,    -5,     4,   124,   125,     0,   458,     5,
       0,     0,    74,     0,   459,     0,    76,   460,   461,   462,
     463,   464,     0,     0,   465,     6,     0,     0,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,     0,    11,    12,     0,    13,     0,    14,     0,
      15,     0,     0,    16,     0,     0,     0,   466,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    97,     0,     0,    98,     0,    -5,    -5,    99,   100,
     101,     0,   102,   103,     0,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,   108,     0,     0,   109,     0,
     110,     4,   111,   213,   214,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,   215,     0,     7,   113,     8,   114,   115,
     116,     0,     0,   117,   118,   119,     9,    10,     0,   120,
      11,     0,     0,    13,   121,    14,     0,    15,     0,     0,
     615,     0,     0,     0,     0,     0,    17,     0,   616,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     4,     0,
     213,   214,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     215,     0,     7,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     0,    11,     0,     0,
      13,     0,    14,     0,    15,     0,     0,     0,     0,     0,
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
       0,    15,     0,     0,   196,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,     0,     0,    13,     0,    14,     0,    15,     0,
       0,   599,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   444,
       0,     0,     0,   445,   446,     0,     0,   447,   448,   449,
     450,     0,   451,   452,     0,     0,    63,     0,     0,     0,
      64,     0,     0,   453,     0,     0,   454,    66,     0,     0,
     455,   456,     0,     0,    69,     0,     0,     0,    70,     0,
       0,   457,     0,    72,     0,     0,     0,     0,     0,     0,
       0,   458,     0,     0,     0,    74,     0,   459,     0,    76,
     460,   461,   462,   463,   464,     0,    57,   465,     0,     0,
       0,     0,     0,     0,    58,    59,    60,     0,     0,    61,
      62,     0,     0,    63,     0,     0,     0,    64,     0,     0,
       0,     0,     0,    65,    66,     0,     0,    67,    68,     0,
     466,    69,     0,     0,     0,    70,     0,     0,    71,     0,
      72,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,    74,     0,    75,     0,    76,    77,     0,    78,
      79,    80,     0,     0,    81,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      85,    99,    48,   101,   102,   103,   104,   105,   106,   575,
     129,   109,   110,   111,   112,   113,   114,   136,   116,   117,
     118,   558,   120,   121,    12,     6,     3,     4,   129,     6,
       7,     5,    15,   722,   280,   136,    74,   329,     3,     4,
     729,   216,     0,   218,   219,    18,    19,     3,     4,   341,
       6,     7,    74,   414,   138,    87,   154,   155,    15,   157,
       3,   159,   672,    95,    96,    38,   135,   165,   166,   567,
     431,   135,   682,    43,   684,   173,   134,   575,   197,   177,
     138,   442,   180,   181,   182,   183,   184,   185,     5,   187,
      67,   189,   135,   131,   135,     5,    66,   134,    15,   218,
     135,   138,   639,   640,   641,    15,   643,   353,    78,   131,
     130,   130,   132,   132,   138,   216,   477,   218,   219,   135,
       3,     4,   130,     6,   132,   135,   815,    10,    11,    12,
      13,    14,    69,    70,   632,     3,     4,   135,     6,   431,
       8,     9,    10,    11,   127,   128,   129,   130,   135,   130,
     442,   135,   130,   130,   132,   132,   130,     5,   132,   147,
     245,   246,   247,    43,   135,   130,   251,   252,   253,   254,
     255,   128,   129,   258,   130,   260,   132,   262,   263,   264,
     265,   266,   357,   135,   269,   270,    66,   135,   273,   274,
     135,   289,   277,   278,   279,   135,   281,   282,    78,    67,
     135,   130,   303,   132,    15,   135,   567,   744,   130,   746,
     132,   128,   129,   130,   575,   133,   134,     3,   128,   129,
     130,   787,     3,     4,   790,     6,     7,   311,     3,     4,
     135,   315,   133,   134,   318,   135,   320,   131,   322,   323,
     324,   325,   326,   133,   134,   329,   330,   130,   127,   132,
      74,   335,    74,   338,   313,   314,    74,   341,   343,    15,
      74,    47,   346,   348,   349,   350,   351,   352,    15,    74,
     355,     3,     3,     4,     3,     6,     7,     8,     9,    10,
      11,    67,    68,    69,    70,     5,   371,     5,     3,   374,
     375,   376,   377,   378,   379,   380,   320,   382,     5,     3,
       3,     3,   326,    89,   389,   132,   330,   392,   393,     3,
       5,   335,     5,     3,     3,   400,   127,   128,   129,   404,
     405,   132,   133,   134,     3,   410,   130,     5,   412,   413,
     414,     5,   417,     6,    10,   419,    67,    12,   422,   125,
     126,     3,     4,    11,     6,     7,   430,   431,    14,   433,
     133,   127,   134,     5,     3,   439,   531,     3,   442,   443,
     721,   722,     6,     8,    11,   135,     9,   728,   729,    10,
      21,   127,   128,   129,   130,   135,   132,   133,   134,     5,
     127,   128,   129,   135,   469,   132,   133,   134,   472,   135,
     135,    42,   476,   477,   135,   135,   135,   135,   482,   135,
      51,    52,   487,   522,    55,    67,   491,    58,   493,   433,
     135,    62,   531,   135,   135,   439,   135,   502,   503,   443,
     505,   522,   507,   469,   135,   135,   135,   135,   513,   135,
     531,   723,   517,   518,   135,    59,     5,     3,   730,    59,
     615,     3,   617,   618,   490,    59,     5,     5,   472,    20,
     534,     3,     5,    24,    25,     5,     3,    28,   482,   544,
       3,     3,     3,    34,   825,   826,     5,   828,   829,     5,
      41,     3,   556,   131,     3,   131,   561,     5,     5,   563,
     564,   600,     3,   567,    29,     3,    31,    32,   780,   131,
       3,   575,   538,     5,   786,   135,     5,     5,   617,    29,
       3,    31,    32,     3,    24,     3,    44,     3,   131,   131,
     534,     3,   558,   805,   615,   561,   617,   618,   810,     3,
       4,   131,     6,     3,   131,   131,    10,    11,    12,    13,
      14,    76,   132,   132,    48,    80,    81,   539,    89,   563,
      85,   312,   147,    88,   141,    90,    76,   396,   632,   541,
      80,    81,   126,   124,   530,    85,   123,   192,   402,   789,
      90,   736,   714,    -1,   738,     3,     4,   652,     6,     7,
       8,     9,    10,    11,    -1,   660,   661,   662,    -1,   664,
     665,    -1,    -1,   629,   669,   670,   671,    -1,   672,   690,
      -1,   136,   137,   639,   640,   641,    -1,   643,   682,   645,
     684,    -1,    -1,    -1,    -1,    -1,     3,     4,   632,     6,
       7,     8,     9,    10,    11,     3,     4,    -1,     6,    -1,
       8,     9,    10,    11,    -1,    -1,     3,     4,    -1,     6,
     714,     8,     9,    10,    11,    -1,   720,   721,   722,   723,
     724,    -1,    -1,    -1,   728,   729,   730,    -1,   672,    -1,
      -1,    -1,    -1,   751,   738,    -1,    -1,    -1,   682,    -1,
     684,   759,    -1,    -1,   710,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   757,   758,    -1,    -1,    -1,    -1,   763,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   780,   781,   744,    -1,
     746,    -1,   786,   787,    -1,   789,   790,    -1,   793,    -1,
      -1,   796,   797,   798,   738,    -1,   801,   802,   803,   804,
      -1,   805,    -1,    -1,    -1,    -1,   810,    -1,    -1,    -1,
      -1,   815,    -1,   818,   819,    -1,   821,   822,    -1,   823,
     824,   825,   826,   153,   828,   829,   156,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,    -1,   167,   168,    -1,
     170,   171,   172,    -1,   174,   175,   176,    -1,   178,   179,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,   823,
     824,    -1,    -1,    -1,    -1,   322,   323,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,   317,    -1,   319,    -1,   321,    -1,    -1,   346,
      -1,    -1,   327,   328,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   338,    -1,    -1,   256,   257,   343,   259,
      -1,   261,   347,    -1,    -1,    -1,    -1,   267,   268,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   336,   283,   284,   285,   286,   287,   288,    -1,
     290,   345,   292,    -1,    -1,    -1,    -1,    -1,    -1,   384,
     385,   386,   387,    -1,    23,   412,   413,    -1,    -1,    -1,
      -1,    30,   419,    -1,   399,   422,    -1,    -1,   372,   373,
      39,   406,    -1,   408,    43,    -1,    45,   381,    -1,   383,
      -1,    -1,   417,    -1,   334,    54,   390,   391,    57,    -1,
     340,    -1,   342,    -1,    63,    -1,    -1,    66,    -1,   403,
      -1,    -1,    -1,   407,    -1,    -1,    -1,   411,    77,    78,
      -1,    -1,    -1,    82,   418,    -1,    85,    -1,    -1,   476,
      -1,    -1,    -1,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,   435,   436,   437,   438,    -1,    -1,    -1,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   484,
     485,   486,    -1,   488,   123,    -1,    -1,    -1,   493,    -1,
      38,    -1,    40,    -1,    -1,   415,   416,   471,    -1,   504,
      -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,
      -1,   516,    60,    -1,    -1,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,   556,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   564,    -1,   544,
      -1,   546,   547,    -1,    -1,    -1,   551,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,   550,    -1,    -1,   553,
     554,   555,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   565,   566,   401,    -1,    -1,    -1,    -1,    -1,    -1,
     574,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,   424,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   432,    -1,   434,    -1,    -1,    -1,
      -1,    -1,   440,   441,    -1,    -1,    -1,   642,    -1,    -1,
      -1,    -1,    -1,   648,    -1,    -1,   651,   652,    -1,    -1,
      -1,    -1,    -1,    -1,   659,    -1,    -1,    -1,    -1,   633,
     634,   635,    -1,   668,   638,    -1,    -1,   475,    -1,    -1,
      -1,   479,    -1,    -1,    -1,   483,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   714,    16,    -1,
      -1,   696,   697,   720,    -1,    -1,    -1,   724,    -1,    -1,
      -1,   509,   510,   511,   512,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,   707,    -1,   543,    -1,   711,    -1,   713,
     548,   715,    -1,    71,    -1,   719,    -1,    -1,    -1,   754,
     755,    -1,    -1,   727,   781,    -1,   761,   762,    -1,    -1,
      -1,    -1,   789,   737,    -1,   739,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   778,   779,    -1,    -1,    -1,    -1,
     784,   785,    -1,    -1,    -1,   820,    -1,    -1,    -1,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,   832,   833,   637,
     835,   836,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    -1,    42,   654,    -1,   656,    -1,
      -1,    -1,    -1,   827,    51,    52,   776,    -1,    55,   667,
      -1,    58,   782,    60,    -1,    62,   840,    -1,    65,   843,
      -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   699,   700,   701,    -1,   703,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     748,    -1,   750,     0,   752,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   760,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,   769,    -1,   771,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,   794,   795,    -1,    -1,
      -1,   799,   800,    -1,    51,    52,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   834,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,   844,   845,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,    17,    -1,    -1,    20,
      -1,   128,   129,    24,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,     5,
      -1,    72,    -1,    74,    75,    76,    -1,    -1,    79,    80,
      81,    -1,    -1,    -1,    85,    -1,    22,    -1,    -1,    90,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,   124,    -1,    61,   127,    -1,    64,    -1,
      66,    -1,    -1,    15,    16,   136,   137,    -1,    74,    21,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    85,
      86,    87,    -1,    -1,    90,    37,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    -1,    -1,    -1,   123,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    17,    -1,    -1,    20,    -1,   128,   129,    24,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    16,    48,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    38,    -1,    40,    72,    42,    74,    75,
      76,    -1,    -1,    79,    80,    81,    51,    52,    -1,    85,
      55,    -1,    -1,    58,    90,    60,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,
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
     121,   122,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    55,    -1,    -1,    58,    -1,    60,    -1,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      -1,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    80,    -1,    82,
      83,    84,    85,    86,    87,    -1,    22,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,
     123,    57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    -1,    85,
      86,    87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122
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
      85,    90,   124,   127,   136,   137,   196,   199,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   127,   130,   148,   160,   148,   156,
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
     160,   133,   134,   163,   160,   160,   162,   172,   203,   204,
     160,   160,   160,   203,   160,   162,   160,   172,   172,   172,
     172,   172,   172,   161,   172,   172,     5,   173,     6,    10,
      11,   157,   169,   171,   171,     6,     8,     9,    10,    11,
     157,   166,   162,   162,     6,     8,     9,    10,    11,   157,
     167,   162,   165,   162,   166,   166,   166,   164,   165,   165,
     162,   162,   167,   165,   133,   134,   127,   150,   211,   172,
     165,   163,   160,   162,   172,   167,   172,   162,     5,   163,
     166,   162,   160,   160,   160,   160,   160,   203,   162,   160,
       3,   176,   160,   163,   163,   160,   160,   160,   160,   160,
     160,   160,   163,   160,   163,   162,   162,   162,   162,   160,
     163,   163,   160,   160,    22,    26,    27,    30,    31,    32,
      33,    35,    36,    46,    49,    53,    54,    64,    74,    80,
      83,    84,    85,    86,    87,    90,   123,   151,   177,   184,
     185,   162,   160,   150,   204,   163,   160,   160,   162,   163,
     162,   150,   160,   163,   166,   166,   164,   172,   172,   162,
     163,   166,     3,   166,   150,   150,     6,     8,     9,    10,
      11,   157,     6,   157,   164,   167,   150,   165,   150,   163,
     163,   163,   163,   165,   150,   150,   164,   167,   165,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,     5,   135,
     152,   160,   211,   163,   165,   150,   166,   164,   163,   150,
     202,   165,   150,   162,   162,   162,   160,   162,   163,   153,
     154,   184,   211,   160,   160,   162,   162,   160,   160,   150,
     150,   150,   150,   160,   162,   160,   160,    59,   192,   193,
      23,    30,    39,    43,    45,    54,    57,    63,    66,    77,
      78,    82,    85,    92,    93,    94,   123,   178,     5,    65,
     173,   175,   187,     3,    59,   188,   189,     3,    59,   190,
     191,     5,     5,     3,   195,    65,    73,   173,   175,   176,
     186,     5,     5,   165,     3,     3,     3,   211,   159,     5,
     185,   150,   160,   162,   162,   162,   150,   163,   162,   163,
     163,   163,   166,   163,   153,     5,   155,   211,   165,    67,
     166,   168,   205,   206,   163,   134,   163,     6,   157,   164,
     166,   168,   209,   210,     3,     3,   134,   163,   164,   168,
     209,     3,   131,    43,    66,    78,    43,    66,    78,     5,
     175,     5,   131,     3,   131,     3,     3,   173,   176,   173,
     175,   176,   173,   176,   211,   165,   168,   207,   208,   163,
     163,   163,   150,   163,   153,   153,   153,   162,   153,   211,
       5,   162,   135,   162,   160,   162,   150,   138,   150,   162,
     160,   160,   160,   160,   160,   138,   150,   162,   160,   160,
     160,   207,     5,     5,   207,   207,   173,   162,   160,   162,
     150,   150,   150,   150,   163,   211,   163,     3,   163,   206,
     163,    24,   163,   166,   164,   164,   210,   167,   166,    44,
     163,   164,   164,   167,   132,     3,   132,   132,   176,   163,
     208,   163,   153,   153,   150,   150,   161,   150,   162,   162,
     160,   160,   161,   150,   162,   162,   160,   131,     3,   131,
     131,   150,   150,   172,   163,   163,   167,   166,   172,   163,
     163,   167,   209,   205,   209,   160,   150,   150,   160,   160,
     160,   150,   150,   160,   132,   160,   132,   132,   167,     3,
       3,   167,     3,   131,   131,   160,   160,   162,   160,   160,
     165,   165,   164,   164,   163,   164,   164,   132,   132,   162,
     162,   150,   162,   162,   163,   163,   150,   150
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
#line 307 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 310 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 312 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 313 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 314 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::ICRS;;}
    break;

  case 21:
#line 323 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 324 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 328 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 332 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 332 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 334 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 334 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 338 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 338 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 340 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 340 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 345 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 348 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 349 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 352 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 353 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 356 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 358 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 359 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 360 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 361 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 363 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 364 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 365 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 366 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 381 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 383 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 63:
#line 391 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 64:
#line 399 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 1) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 2;
	;}
    break;

  case 65:
#line 408 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 66:
#line 409 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 67:
#line 413 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 415 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 69:
#line 416 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 70:
#line 419 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 71:
#line 420 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 72:
#line 421 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 73:
#line 422 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 74:
#line 423 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 75:
#line 424 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 76:
#line 428 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 435 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 442 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 449 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 456 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 463 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 82:
#line 471 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 83:
#line 474 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 477 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 480 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 86:
#line 484 "frame/ds9parser.Y"
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

  case 87:
#line 497 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 505 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 513 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 520 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 528 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 535 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 93:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 94:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 95:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 96:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 97:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 98:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 99:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 100:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 101:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 102:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 103:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 104:
#line 555 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 105:
#line 556 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 106:
#line 557 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 107:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 108:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 109:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 110:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 111:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 112:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 113:
#line 564 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 114:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 115:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 116:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 117:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 118:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 119:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 120:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 121:
#line 572 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 122:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 123:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 124:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 125:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 126:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 128:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 133:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 134:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 135:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 136:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 137:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 138:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 139:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 140:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 141:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 142:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 143:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 144:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 145:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 146:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 147:
#line 606 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 148:
#line 607 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 149:
#line 608 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 150:
#line 609 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 151:
#line 610 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 152:
#line 611 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 153:
#line 612 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 154:
#line 613 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 155:
#line 614 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 156:
#line 615 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 157:
#line 616 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 158:
#line 617 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 159:
#line 618 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 160:
#line 619 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 161:
#line 620 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 162:
#line 621 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 163:
#line 622 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 164:
#line 623 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 165:
#line 624 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 166:
#line 625 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 167:
#line 626 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 170:
#line 634 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 171:
#line 639 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 172:
#line 644 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 173:
#line 648 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 174:
#line 650 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 175:
#line 655 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 176:
#line 660 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 177:
#line 665 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::FILL,1);
	  setProps(&localProps,Marker::FILL,1);
	;}
    break;

  case 178:
#line 670 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 675 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 679 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 681 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 686 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 183:
#line 690 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 184:
#line 692 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 185:
#line 695 "frame/ds9parser.Y"
    {;}
    break;

  case 186:
#line 696 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 187:
#line 698 "frame/ds9parser.Y"
    {
	  strncpy(globalCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(globalCompassEast,(yyvsp[(5) - (7)].str),80);
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  globalCompassNArrow = localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  globalCompassEArrow = localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 188:
#line 706 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 189:
#line 707 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 190:
#line 708 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 191:
#line 712 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 192:
#line 719 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 193:
#line 726 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 194:
#line 733 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 195:
#line 740 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 196:
#line 747 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 197:
#line 754 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 198:
#line 761 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 199:
#line 767 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 200:
#line 776 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 201:
#line 781 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 202:
#line 786 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 203:
#line 791 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 204:
#line 797 "frame/ds9parser.Y"
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
	  compositeOperation = 0;
	;}
    break;

  case 207:
#line 845 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 208:
#line 846 "frame/ds9parser.Y"
    {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	  ;}
    break;

  case 209:
#line 851 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 210:
#line 855 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 211:
#line 856 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 212:
#line 857 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 213:
#line 858 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 214:
#line 859 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 215:
#line 861 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 216:
#line 862 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::FILL,1);;}
    break;

  case 217:
#line 863 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 218:
#line 864 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 219:
#line 866 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 220:
#line 867 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 221:
#line 868 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 222:
#line 869 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 223:
#line 870 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 225:
#line 872 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 226:
#line 874 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 227:
#line 880 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 228:
#line 881 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 232:
#line 888 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 233:
#line 895 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 234:
#line 902 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 235:
#line 909 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 236:
#line 916 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 237:
#line 923 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 238:
#line 930 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 239:
#line 937 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 240:
#line 944 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 241:
#line 953 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 242:
#line 958 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 243:
#line 963 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 244:
#line 968 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 245:
#line 974 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 246:
#line 974 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 247:
#line 975 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 248:
#line 978 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 249:
#line 979 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 250:
#line 980 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 251:
#line 983 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 252:
#line 984 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 253:
#line 985 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 254:
#line 988 "frame/ds9parser.Y"
    {
	  // reset maperr flag
	  maperr = 0;

	  // needed for annulus, ellipse annulus, and box annulus
	  aNum = 2;

	  // composite (previous conjunction found?)
	  if (!cStatus) {
	    fr->resetCompositeMarker();
	    compositeOperation = 0;
	  }

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

  case 255:
#line 1044 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 256:
#line 1045 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 257:
#line 1046 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 258:
#line 1047 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 259:
#line 1048 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 260:
#line 1049 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 261:
#line 1050 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 262:
#line 1053 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 263:
#line 1054 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 264:
#line 1058 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 265:
#line 1065 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 266:
#line 1067 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 267:
#line 1073 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 268:
#line 1080 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 269:
#line 1089 "frame/ds9parser.Y"
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

  case 270:
#line 1099 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 271:
#line 1107 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1115 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 273:
#line 1125 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 274:
#line 1132 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 275:
#line 1140 "frame/ds9parser.Y"
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

  case 276:
#line 1163 "frame/ds9parser.Y"
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

  case 277:
#line 1186 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 278:
#line 1194 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 279:
#line 1196 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 280:
#line 1201 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 281:
#line 1203 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 282:
#line 1210 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1218 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1226 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 285:
#line 1232 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 286:
#line 1234 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1241 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1248 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1255 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1262 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1269 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1276 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
#line 1283 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1290 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1297 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1306 "frame/ds9parser.Y"
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

  case 297:
#line 1316 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 298:
#line 1324 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1332 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1342 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 301:
#line 1350 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 302:
#line 1360 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1370 "frame/ds9parser.Y"
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

  case 304:
#line 1382 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 305:
#line 1390 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 306:
#line 1400 "frame/ds9parser.Y"
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

  case 307:
#line 1412 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 308:
#line 1422 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 309:
#line 1431 "frame/ds9parser.Y"
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

  case 310:
#line 1453 "frame/ds9parser.Y"
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

  case 311:
#line 1477 "frame/ds9parser.Y"
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

  case 316:
#line 1507 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 319:
#line 1520 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 322:
#line 1528 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 325:
#line 1539 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 328:
#line 1549 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 329:
#line 1553 "frame/ds9parser.Y"
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
#line 4885 "frame/ds9parser.C"
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


#line 1580 "frame/ds9parser.Y"


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

