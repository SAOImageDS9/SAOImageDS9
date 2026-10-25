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
     BAR_ = 277,
     BACKGROUND_ = 278,
     BEGIN_ = 279,
     BOX_ = 280,
     BOXCIRCLE_ = 281,
     BPANDA_ = 282,
     CALLBACK_ = 283,
     CHEVRON_ = 284,
     CIRCLE_ = 285,
     CIRCLE3D_ = 286,
     COLOR_ = 287,
     COMPASS_ = 288,
     COMPOSITE_ = 289,
     CPANDA_ = 290,
     CROSS_ = 291,
     DASH_ = 292,
     DASHLIST_ = 293,
     DEBUG_ = 294,
     DEGREES_ = 295,
     DELETE_ = 296,
     DETECTOR_ = 297,
     DIAMOND_ = 298,
     ECLIPTIC_ = 299,
     EDIT_ = 300,
     ELLIPSE_ = 301,
     END_ = 302,
     EPANDA_ = 303,
     FALSE_ = 304,
     FIELD_ = 305,
     FILL_ = 306,
     FIXED_ = 307,
     FK4_ = 308,
     FK5_ = 309,
     FORMAT_ = 310,
     FONT_ = 311,
     GALACTIC_ = 312,
     GLOBAL_ = 313,
     HIGHLITE_ = 314,
     ICRS_ = 315,
     IGNORE_ = 316,
     IMAGE_ = 317,
     INCLUDE_ = 318,
     J2000_ = 319,
     KEY_ = 320,
     LINE_ = 321,
     LINEAR_ = 322,
     MOVE_ = 323,
     N_ = 324,
     NO_ = 325,
     NONE_ = 326,
     OFF_ = 327,
     ON_ = 328,
     OPENARROW_ = 329,
     OPENBOX_ = 330,
     OPENCIRCLE_ = 331,
     OPENTRIANGLE_ = 332,
     PHYSICAL_ = 333,
     PIE_ = 334,
     PIXELS_ = 335,
     POINT_ = 336,
     POLYGON_ = 337,
     PROJECTION_ = 338,
     PROPERTY_ = 339,
     ROTATE_ = 340,
     ROTBOX_ = 341,
     RULER_ = 342,
     SEGMENT_ = 343,
     SELECT_ = 344,
     SOURCE_ = 345,
     TAG_ = 346,
     TEXT_ = 347,
     TEXTANGLE_ = 348,
     TEXTROTATE_ = 349,
     TILE_ = 350,
     TRIANGLE_ = 351,
     TRUE_ = 352,
     VECTOR_ = 353,
     VERSION_ = 354,
     UNHIGHLITE_ = 355,
     UNSELECT_ = 356,
     UPDATE_ = 357,
     WCS_ = 358,
     WCSA_ = 359,
     WCSB_ = 360,
     WCSC_ = 361,
     WCSD_ = 362,
     WCSE_ = 363,
     WCSF_ = 364,
     WCSG_ = 365,
     WCSH_ = 366,
     WCSI_ = 367,
     WCSJ_ = 368,
     WCSK_ = 369,
     WCSL_ = 370,
     WCSM_ = 371,
     WCSN_ = 372,
     WCSO_ = 373,
     WCSP_ = 374,
     WCSQ_ = 375,
     WCSR_ = 376,
     WCSS_ = 377,
     WCST_ = 378,
     WCSU_ = 379,
     WCSV_ = 380,
     WCSW_ = 381,
     WCSX_ = 382,
     WCSY_ = 383,
     WCSZ_ = 384,
     WCS0_ = 385,
     WIDTH_ = 386,
     X_ = 387,
     Y_ = 388,
     YES_ = 389
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
#define BAR_ 277
#define BACKGROUND_ 278
#define BEGIN_ 279
#define BOX_ 280
#define BOXCIRCLE_ 281
#define BPANDA_ 282
#define CALLBACK_ 283
#define CHEVRON_ 284
#define CIRCLE_ 285
#define CIRCLE3D_ 286
#define COLOR_ 287
#define COMPASS_ 288
#define COMPOSITE_ 289
#define CPANDA_ 290
#define CROSS_ 291
#define DASH_ 292
#define DASHLIST_ 293
#define DEBUG_ 294
#define DEGREES_ 295
#define DELETE_ 296
#define DETECTOR_ 297
#define DIAMOND_ 298
#define ECLIPTIC_ 299
#define EDIT_ 300
#define ELLIPSE_ 301
#define END_ 302
#define EPANDA_ 303
#define FALSE_ 304
#define FIELD_ 305
#define FILL_ 306
#define FIXED_ 307
#define FK4_ 308
#define FK5_ 309
#define FORMAT_ 310
#define FONT_ 311
#define GALACTIC_ 312
#define GLOBAL_ 313
#define HIGHLITE_ 314
#define ICRS_ 315
#define IGNORE_ 316
#define IMAGE_ 317
#define INCLUDE_ 318
#define J2000_ 319
#define KEY_ 320
#define LINE_ 321
#define LINEAR_ 322
#define MOVE_ 323
#define N_ 324
#define NO_ 325
#define NONE_ 326
#define OFF_ 327
#define ON_ 328
#define OPENARROW_ 329
#define OPENBOX_ 330
#define OPENCIRCLE_ 331
#define OPENTRIANGLE_ 332
#define PHYSICAL_ 333
#define PIE_ 334
#define PIXELS_ 335
#define POINT_ 336
#define POLYGON_ 337
#define PROJECTION_ 338
#define PROPERTY_ 339
#define ROTATE_ 340
#define ROTBOX_ 341
#define RULER_ 342
#define SEGMENT_ 343
#define SELECT_ 344
#define SOURCE_ 345
#define TAG_ 346
#define TEXT_ 347
#define TEXTANGLE_ 348
#define TEXTROTATE_ 349
#define TILE_ 350
#define TRIANGLE_ 351
#define TRUE_ 352
#define VECTOR_ 353
#define VERSION_ 354
#define UNHIGHLITE_ 355
#define UNSELECT_ 356
#define UPDATE_ 357
#define WCS_ 358
#define WCSA_ 359
#define WCSB_ 360
#define WCSC_ 361
#define WCSD_ 362
#define WCSE_ 363
#define WCSF_ 364
#define WCSG_ 365
#define WCSH_ 366
#define WCSI_ 367
#define WCSJ_ 368
#define WCSK_ 369
#define WCSL_ 370
#define WCSM_ 371
#define WCSN_ 372
#define WCSO_ 373
#define WCSP_ 374
#define WCSQ_ 375
#define WCSR_ 376
#define WCSS_ 377
#define WCST_ 378
#define WCSU_ 379
#define WCSV_ 380
#define WCSW_ 381
#define WCSX_ 382
#define WCSY_ 383
#define WCSZ_ 384
#define WCS0_ 385
#define WIDTH_ 386
#define X_ 387
#define Y_ 388
#define YES_ 389




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
#line 509 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 522 "frame/ds9parser.C"

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
#define YYLAST   2736

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  341
/* YYNRULES -- Number of states.  */
#define YYNSTATES  860

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     136,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   146,     2,   135,     2,     2,   142,     2,
     139,   140,     2,   144,   138,   145,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   137,
       2,   143,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   141,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
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
     714,   716,   718,   720,   722,   724,   726,   728,   730,   732,
     734,   736,   738,   740,   742,   744,   746,   757,   758,   766,
     773,   782,   791,   802,   811,   820,   829,   838,   849,   860,
     871,   872,   880,   881,   889,   898,   909,   916,   917,   927,
     934,   942,   950,   958,   966,   974,   982,   990,   999,  1008,
    1019,  1030,  1043,  1056,  1069,  1084,  1099,  1118,  1131,  1146,
    1161,  1180,  1199,  1220,  1241,  1252,  1265,  1278,  1284,  1293,
    1297,  1299,  1301,  1305,  1307,  1309,  1313,  1315,  1317,  1321,
    1323,  1327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     148,     0,    -1,   191,   149,   220,    -1,   149,   150,   164,
      -1,   150,   164,    -1,    -1,    39,   166,    -1,    99,    -1,
      58,   187,   156,    -1,    95,     3,    -1,    -1,   181,   151,
     156,    -1,    -1,   183,   152,   156,    -1,    -1,    67,   153,
     156,    -1,   202,   208,    -1,   202,   205,   208,    -1,   202,
     135,   154,    -1,   206,    -1,   205,   206,    -1,    95,     3,
      -1,    -1,   155,     5,    -1,    -1,    -1,   135,   157,     5,
      -1,   220,    -1,    -1,   135,   159,     5,   220,    -1,   135,
     192,   220,    -1,    -1,   135,   192,   160,     5,   220,    -1,
     220,    -1,    -1,   162,     5,   220,    -1,   192,   220,    -1,
      -1,   192,   163,     5,   220,    -1,   136,    -1,   137,    -1,
      15,    -1,     4,    -1,     3,    -1,    73,    -1,    72,    -1,
       3,    -1,   134,    -1,   133,    -1,    73,    -1,    97,    -1,
      70,    -1,    69,    -1,    72,    -1,    49,    -1,    -1,   138,
      -1,    -1,   139,    -1,    -1,   140,    -1,    -1,   141,    -1,
     141,   141,    -1,   142,   142,    -1,    -1,   173,    -1,   165,
      -1,     6,    -1,     7,    -1,   165,    -1,    10,    -1,    11,
      -1,     6,    -1,     8,    -1,     9,    -1,   165,   168,   165,
      -1,    10,   168,    10,    -1,    11,   168,    11,    -1,     6,
     168,     6,    -1,     8,   168,     8,    -1,     9,   168,     9,
      -1,    69,   143,     3,    -1,    12,    -1,    13,    -1,    14,
      -1,   177,   168,   177,    -1,   178,   168,   179,    -1,   179,
     168,   179,    -1,   165,   168,   165,    -1,     6,   168,     6,
      -1,    11,   168,    11,    -1,    10,   168,    10,    -1,    62,
      -1,    78,    -1,    42,    -1,    16,    -1,   182,    -1,   103,
      -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,
      -1,   124,    -1,   125,    -1,   126,    -1,   127,    -1,   128,
      -1,   129,    -1,   130,    -1,    53,    -1,    21,    -1,    54,
      -1,    64,    -1,    60,    -1,    57,    -1,    44,    -1,    40,
      -1,    18,    -1,    19,    -1,    89,    -1,    59,    -1,    37,
      -1,    51,    -1,    52,    -1,    45,    -1,    68,    -1,    85,
      -1,    41,    -1,    63,    -1,    90,    -1,    89,    -1,   101,
      -1,    59,    -1,   100,    -1,    24,    68,    -1,    68,    -1,
      47,    68,    -1,    24,    45,    -1,    45,    -1,    47,    45,
      -1,    24,    85,    -1,    85,    -1,    47,    85,    -1,    41,
      -1,    92,    -1,    32,    -1,   131,    -1,    84,    -1,    56,
      -1,    65,    -1,   102,    -1,   187,   168,   188,    -1,   188,
      -1,   185,   143,   167,    -1,    32,   143,     5,    -1,    38,
     143,     3,     3,    -1,   131,   143,     3,    -1,    56,   143,
       5,    -1,    92,   143,     5,    -1,    37,    -1,    51,    -1,
      90,    -1,    23,    -1,    81,   143,   203,    -1,    81,   143,
     203,     3,    -1,    66,   143,   204,   204,    -1,    98,   143,
     204,    -1,    34,   143,     3,    -1,    87,   143,   189,    -1,
      55,   143,     5,    -1,    33,   143,   190,     5,     5,   204,
     204,    -1,    93,   143,   173,    -1,    94,   143,     3,    -1,
     103,   143,   182,    -1,   181,   183,   181,   184,    -1,   181,
     181,    -1,   181,   184,    -1,   183,   181,    -1,   183,   184,
      -1,    67,   181,    -1,    67,   184,    -1,   184,    -1,    80,
      -1,   181,   183,    -1,   181,    -1,   183,    -1,    67,    -1,
      -1,   192,   168,   193,    -1,   193,    -1,   185,   143,   167,
      -1,    32,   143,     5,    -1,    38,   143,     3,     3,    -1,
     131,   143,     3,    -1,    56,   143,     5,    -1,    92,   143,
       5,    -1,    91,   143,     5,    -1,    28,   143,   186,     5,
       5,    -1,    37,    -1,    51,    -1,    90,    -1,    23,    -1,
      81,   143,   203,    -1,    81,   143,   203,     3,    -1,    66,
     143,   204,   204,    -1,    98,   143,   204,    -1,    34,   143,
       3,    -1,    87,   143,   194,    -1,    55,   143,     5,    -1,
      33,   143,   195,     5,     5,   204,   204,    -1,    93,   143,
     173,    -1,    94,   143,     3,    -1,    35,   143,   196,    -1,
      48,   143,   198,    -1,    27,   143,   200,    -1,   181,   183,
     181,   184,    -1,   181,   181,    -1,   181,   184,    -1,   183,
     181,    -1,   183,   184,    -1,    67,   181,    -1,    67,   184,
      -1,   184,    -1,    80,    -1,   181,   183,    -1,   181,    -1,
     183,    -1,    67,    -1,    -1,   197,   139,   216,   140,   139,
     214,   140,    -1,    61,    -1,    -1,   199,   139,   216,   140,
     139,   218,   140,   139,   173,   140,    -1,    61,    -1,    -1,
     201,   139,   216,   140,   139,   218,   140,   139,   173,   140,
      -1,    61,    -1,    -1,    30,    -1,    25,    -1,    43,    -1,
      36,    -1,   132,    -1,    20,    -1,    26,    -1,     3,    -1,
      71,    -1,    20,    -1,    74,    -1,    29,    -1,    30,    -1,
      76,    -1,    25,    -1,    75,    -1,    96,    -1,    77,    -1,
      22,    -1,   144,    -1,   145,    -1,    98,   169,   180,   168,
     174,   168,   173,   170,   171,   161,    -1,    -1,    88,   207,
     169,   212,   170,   171,   161,    -1,    92,   169,   180,   170,
     171,   161,    -1,    87,   169,   180,   168,   180,   170,   171,
     161,    -1,    33,   169,   180,   168,   174,   170,   171,   161,
      -1,    83,   169,   180,   168,   180,   168,   174,   170,   171,
     161,    -1,    31,   169,   180,   168,   174,   170,   171,   161,
      -1,    34,   169,   180,   168,   172,   170,   171,   161,    -1,
      30,   169,   180,   168,   174,   170,   171,   158,    -1,    31,
     169,   180,   168,   174,   170,   171,   158,    -1,    46,   169,
     180,   168,   175,   168,   172,   170,   171,   158,    -1,    25,
     169,   180,   168,   175,   168,   172,   170,   171,   158,    -1,
      86,   169,   180,   168,   175,   168,   172,   170,   171,   158,
      -1,    -1,    82,   209,   169,   212,   170,   171,   158,    -1,
      -1,    88,   210,   169,   212,   170,   171,   158,    -1,    66,
     169,   180,   168,   180,   170,   171,   158,    -1,    98,   169,
     180,   168,   174,   168,   173,   170,   171,   158,    -1,    92,
     169,   180,   170,   171,   158,    -1,    -1,    92,   169,   180,
     168,     5,   170,   211,   171,   158,    -1,    81,   169,   180,
     170,   171,   158,    -1,    30,    81,   169,   180,   170,   171,
     158,    -1,    25,    81,   169,   180,   170,   171,   158,    -1,
      43,    81,   169,   180,   170,   171,   158,    -1,    36,    81,
     169,   180,   170,   171,   158,    -1,   132,    81,   169,   180,
     170,   171,   158,    -1,    20,    81,   169,   180,   170,   171,
     158,    -1,    26,    81,   169,   180,   170,   171,   158,    -1,
      87,   169,   180,   168,   180,   170,   171,   158,    -1,    33,
     169,   180,   168,   174,   170,   171,   158,    -1,    83,   169,
     180,   168,   180,   168,   174,   170,   171,   158,    -1,    17,
     169,   180,   168,   174,   168,   174,   170,   171,   158,    -1,
      17,   169,   180,   168,   174,   168,   174,   168,   214,   170,
     171,   158,    -1,    17,   169,   180,   168,   174,   168,   174,
     168,   176,   170,   171,   158,    -1,    46,   169,   180,   168,
     175,   168,   175,   168,   172,   170,   171,   158,    -1,    46,
     169,   180,   168,   175,   168,   175,   168,   176,   168,   172,
     170,   171,   158,    -1,    46,   169,   180,   168,   175,   168,
     175,   168,   218,   168,   172,   170,   171,   158,    -1,    46,
     169,   180,   168,   175,   168,   172,   170,   142,   146,    46,
     169,   180,   168,   175,   168,   172,   170,    -1,    25,   169,
     180,   168,   175,   168,   175,   168,   172,   170,   171,   158,
      -1,    25,   169,   180,   168,   175,   168,   175,   168,   218,
     168,   172,   170,   171,   158,    -1,    25,   169,   180,   168,
     175,   168,   175,   168,   176,   168,   172,   170,   171,   158,
      -1,    25,   169,   180,   168,   175,   168,   172,   170,   142,
     146,    25,   169,   180,   168,   175,   168,   172,   170,    -1,
      35,   169,   180,   168,   173,   168,   173,   168,     3,   168,
     174,   168,   174,   168,     3,   170,   171,   158,    -1,    48,
     169,   180,   168,   173,   168,   173,   168,     3,   168,   175,
     168,   175,   168,     3,   168,   172,   170,   171,   158,    -1,
      27,   169,   180,   168,   173,   168,   173,   168,     3,   168,
     175,   168,   175,   168,     3,   168,   172,   170,   171,   158,
      -1,    79,   169,   180,   168,   173,   168,   173,   170,   171,
     158,    -1,    79,   169,   180,   168,   173,   168,   173,   168,
     216,   170,   171,   158,    -1,    79,   169,   180,   168,   173,
     168,   173,   168,   176,   170,   171,   158,    -1,    50,   169,
     170,   171,   158,    -1,    34,   169,   180,   168,   172,   170,
     171,   158,    -1,   212,   168,   213,    -1,   213,    -1,   180,
      -1,   214,   168,   215,    -1,   215,    -1,   174,    -1,   216,
     168,   217,    -1,   217,    -1,   173,    -1,   218,   168,   219,
      -1,   219,    -1,   174,   168,   174,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   307,   307,   310,   311,   314,   315,   316,   318,   319,
     321,   321,   322,   322,   323,   323,   325,   326,   327,   330,
     331,   332,   333,   333,   336,   337,   337,   340,   341,   341,
     342,   343,   343,   346,   347,   347,   348,   349,   349,   352,
     353,   354,   357,   358,   361,   362,   365,   367,   368,   369,
     370,   372,   373,   374,   375,   378,   379,   382,   383,   386,
     387,   390,   391,   399,   407,   417,   418,   421,   423,   425,
     428,   429,   430,   431,   432,   433,   436,   443,   450,   457,
     464,   471,   480,   483,   486,   489,   492,   505,   513,   521,
     528,   536,   543,   551,   552,   553,   554,   555,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   588,   589,   590,   591,
     592,   593,   594,   597,   598,   599,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   638,   639,
     642,   647,   652,   657,   658,   663,   668,   673,   678,   683,
     688,   689,   694,   699,   700,   704,   705,   706,   715,   716,
     717,   720,   727,   734,   741,   748,   755,   762,   769,   775,
     784,   789,   794,   799,   806,   850,   851,   854,   855,   859,
     864,   865,   866,   867,   868,   870,   871,   872,   873,   875,
     876,   877,   878,   879,   880,   881,   882,   889,   890,   891,
     892,   893,   896,   903,   910,   917,   924,   931,   938,   945,
     952,   961,   966,   971,   976,   983,   983,   984,   987,   987,
     989,   992,   992,   994,   997,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,
    1071,  1072,  1073,  1074,  1077,  1078,  1081,  1089,  1089,  1096,
    1103,  1112,  1122,  1130,  1138,  1148,  1155,  1163,  1186,  1209,
    1218,  1218,  1225,  1225,  1233,  1241,  1249,  1256,  1256,  1264,
    1271,  1278,  1285,  1292,  1299,  1306,  1313,  1320,  1329,  1339,
    1347,  1354,  1364,  1372,  1382,  1392,  1404,  1412,  1422,  1434,
    1444,  1453,  1475,  1499,  1524,  1525,  1526,  1528,  1530,  1540,
    1541,  1544,  1547,  1548,  1551,  1558,  1559,  1562,  1569,  1570,
    1573,  1577
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
  "ARCSEC_", "ARROW_", "B1950_", "BAR_", "BACKGROUND_", "BEGIN_", "BOX_",
  "BOXCIRCLE_", "BPANDA_", "CALLBACK_", "CHEVRON_", "CIRCLE_", "CIRCLE3D_",
  "COLOR_", "COMPASS_", "COMPOSITE_", "CPANDA_", "CROSS_", "DASH_",
  "DASHLIST_", "DEBUG_", "DEGREES_", "DELETE_", "DETECTOR_", "DIAMOND_",
  "ECLIPTIC_", "EDIT_", "ELLIPSE_", "END_", "EPANDA_", "FALSE_", "FIELD_",
  "FILL_", "FIXED_", "FK4_", "FK5_", "FORMAT_", "FONT_", "GALACTIC_",
  "GLOBAL_", "HIGHLITE_", "ICRS_", "IGNORE_", "IMAGE_", "INCLUDE_",
  "J2000_", "KEY_", "LINE_", "LINEAR_", "MOVE_", "N_", "NO_", "NONE_",
  "OFF_", "ON_", "OPENARROW_", "OPENBOX_", "OPENCIRCLE_", "OPENTRIANGLE_",
  "PHYSICAL_", "PIE_", "PIXELS_", "POINT_", "POLYGON_", "PROJECTION_",
  "PROPERTY_", "ROTATE_", "ROTBOX_", "RULER_", "SEGMENT_", "SELECT_",
  "SOURCE_", "TAG_", "TEXT_", "TEXTANGLE_", "TEXTROTATE_", "TILE_",
  "TRIANGLE_", "TRUE_", "VECTOR_", "VERSION_", "UNHIGHLITE_", "UNSELECT_",
  "UPDATE_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_",
  "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_",
  "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_",
  "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WIDTH_", "X_", "Y_",
  "YES_", "'#'", "'\\n'", "';'", "','", "'('", "')'", "'|'", "'&'", "'='",
  "'+'", "'-'", "'!'", "$accept", "start", "commands", "command", "@1",
  "@2", "@3", "hash", "@4", "comment", "@5", "shapeComment", "@6", "@7",
  "nonshapeComment", "@8", "@9", "terminator", "numeric", "debug", "yesno",
  "sp", "bp", "ep", "conjunction", "optangle", "angle", "value", "vvalue",
  "numberof", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "skyFrame", "skyDist", "property", "callBack", "global",
  "globalProperty", "globalRuler", "globalCompass", "initGlobal", "local",
  "localProperty", "localRuler", "localCompass", "localCpanda", "@10",
  "localEpanda", "@11", "localBpanda", "@12", "initLocal", "pointShape",
  "lineEnd", "include", "nonshape", "@13", "shape", "@14", "@15", "@16",
  "polyNodes", "polyNode", "aRads", "aRad", "aAngs", "aAng", "vRads",
  "vRad", "postLocal", 0
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,    35,    10,    59,    44,    40,
      41,   124,    38,    61,    43,    45,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   147,   148,   149,   149,   150,   150,   150,   150,   150,
     151,   150,   152,   150,   153,   150,   150,   150,   150,   154,
     154,   154,   155,   154,   156,   157,   156,   158,   159,   158,
     158,   160,   158,   161,   162,   161,   161,   163,   161,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   171,   171,   172,   172,   173,   173,   173,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   175,
     175,   175,   176,   177,   178,   179,   180,   180,   180,   180,
     180,   180,   180,   181,   181,   181,   181,   181,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   183,   183,
     183,   183,   183,   184,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     190,   190,   190,   190,   191,   192,   192,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     193,   193,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   195,   195,   195,   195,   197,   196,   196,   199,   198,
     198,   201,   200,   200,   202,   203,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   205,   205,   206,   207,   206,   206,
     206,   206,   206,   206,   206,   208,   208,   208,   208,   208,
     209,   208,   210,   208,   208,   208,   208,   211,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   212,
     212,   213,   214,   214,   215,   216,   216,   217,   218,   218,
     219,   220
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,    10,     0,     7,     6,
       8,     8,    10,     8,     8,     8,     8,    10,    10,    10,
       0,     7,     0,     7,     8,    10,     6,     0,     9,     6,
       7,     7,     7,     7,     7,     7,     7,     8,     8,    10,
      10,    12,    12,    12,    14,    14,    18,    12,    14,    14,
      18,    18,    20,    20,    10,    12,    12,     5,     8,     3,
       1,     1,     3,     1,     1,     3,     1,     1,     3,     1,
       3,     0
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
      57,    57,    57,    57,    57,   290,    57,    57,    57,   292,
      57,    57,     0,    22,   274,   275,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,     8,     0,    15,     3,
      11,    13,    58,     0,    57,    57,     0,    57,     0,    57,
       0,     0,     0,     0,     0,    57,    57,     0,     0,    59,
       0,     0,     0,    57,     0,     0,     0,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   277,    57,     0,    57,
      18,     0,     0,    19,    17,   171,   203,   201,   202,     0,
     184,     0,   186,   174,   262,   264,   273,   269,   266,   267,
     263,   265,   270,   268,   272,   271,     0,   260,   256,   261,
     255,   258,   257,   259,   180,   134,   135,   133,     0,   199,
       0,     0,   198,   185,   175,    43,    42,    68,    69,    67,
     188,   189,   183,   190,   173,    46,    54,    52,    51,    53,
      49,    50,    48,    47,   170,     0,   168,    55,    55,    55,
      83,    84,    85,    55,    55,    55,    55,    55,     0,     0,
      55,     0,    55,     0,    55,    55,    55,    55,    55,     0,
       0,    55,    55,    60,    61,    55,    55,    59,     0,    55,
      55,    55,     0,    59,    55,     0,     0,     0,     0,     0,
       0,    57,     0,    21,     0,    23,    20,   200,     0,   172,
     182,   181,   196,   197,   192,     0,   193,   194,   195,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    59,
       0,    59,     0,    59,     0,     0,     0,    65,     0,    59,
      59,     0,     0,    62,     0,   341,     0,     0,    61,   331,
      55,   330,     0,     0,     0,    55,     0,    61,     0,    59,
      55,    55,    55,    55,    55,     0,    59,    55,     0,     0,
      90,    92,    91,    89,    86,    87,    88,    73,    74,    75,
      71,    72,    70,    55,    61,    61,    55,    55,    55,    55,
      55,    55,    55,    61,    55,    61,    59,    59,    59,    59,
      66,    55,    61,    61,    55,    55,    63,    64,    28,   327,
      27,    59,    55,   341,     0,    61,    55,    55,    59,    61,
      59,   341,    55,    61,     0,     0,    65,     0,     0,    59,
      61,     0,     0,   191,     0,   341,   341,     0,     0,     0,
       0,     0,     0,    65,   341,     0,   341,    61,    61,    61,
      61,     0,   341,   341,    65,     0,   218,     0,     0,     0,
       0,     0,     0,   215,     0,     0,   216,     0,     0,     0,
       0,     0,   217,     0,     0,     0,     0,     0,     0,     0,
       0,    55,   206,    61,     0,   299,   329,   341,     0,    65,
      61,   341,   297,   296,     0,   341,    59,    59,    59,    55,
      59,    61,   341,    55,   187,    55,   305,   301,    79,    80,
      81,    77,    78,    76,    68,    67,    59,    55,   306,    55,
     300,   341,   341,   341,   341,    55,   303,   302,    59,    55,
      55,   251,     0,     0,     0,     0,   245,     0,   248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,    30,   341,    59,   291,    59,    59,
     341,   293,    61,    59,   304,    61,    61,    61,     0,    61,
     341,   279,     0,    55,    33,     0,     0,    61,    61,    65,
       0,   285,   286,   308,   328,     0,    61,    65,     0,   253,
     231,     0,     0,   162,   160,   155,     0,   165,   149,   166,
     152,   164,   158,   147,   161,   150,   148,   167,   163,     0,
     208,   244,   242,   243,     0,   223,   247,   229,     0,     0,
     250,   230,     0,   225,   211,     0,   219,     0,   240,     0,
       0,   239,   224,   213,   212,   227,   228,   222,   210,    29,
     207,   341,   205,   294,     0,    61,    61,    61,   307,   341,
      61,   341,   341,   341,    59,   341,   278,   341,     0,    36,
      59,     0,   334,    59,    55,   333,   341,     0,   341,    73,
      70,    59,    55,    55,    55,   339,    55,    55,     0,   341,
      59,    55,    55,    55,     0,   154,   151,   157,   156,   153,
     159,     0,   241,     0,     0,   209,     0,   221,   220,   237,
     238,   233,     0,   234,   235,   236,    32,   337,    59,    59,
     336,   341,   341,   341,   298,   341,   283,   281,   284,    61,
     280,    35,   341,    61,     0,    61,     0,    61,   310,     0,
     288,    61,     0,    65,    65,     0,     0,     0,   287,    61,
      65,    65,     0,    55,   214,     0,    55,    55,     0,    61,
       0,    61,   324,   309,   289,   295,   341,    38,   341,    82,
     341,   332,   341,    57,   341,   340,    59,    59,   338,    55,
      55,    57,   341,    59,    59,    55,     0,     0,     0,     0,
     232,   341,   335,   341,   282,   276,   312,   311,     0,   317,
      61,    61,     0,     0,     0,   313,    61,    61,     0,     0,
     226,     0,     0,   326,   325,    55,   341,   341,    55,    55,
      55,   341,   341,    55,    55,    55,    55,     0,   319,   318,
       0,     0,     0,   314,   315,     0,     0,     0,   246,     0,
      55,    55,    59,    55,    55,     0,     0,    65,    65,    61,
      65,    65,     0,     0,    59,    59,   341,    59,    59,   252,
     249,   320,    61,   321,   316,    61,   341,   341,   323,   322
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    49,    95,    96,    87,   190,   191,   146,
     255,   409,   479,   552,   571,   572,   658,    94,   263,    56,
     254,   750,   153,   284,   345,   399,   400,   672,   392,   663,
     264,   265,   266,   349,    50,    51,    52,   232,   480,   609,
      85,    86,   233,   199,     2,   573,   482,   632,   614,   617,
     618,   621,   622,   590,   591,    53,   224,   216,   126,   193,
     301,   127,   173,   177,   562,   350,   351,   664,   665,   709,
     710,   674,   675,   410
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -691
static const yytype_int16 yypact[] =
{
    -691,    42,  1657,  -691,  -691,  -691,   126,  -691,  -691,  -691,
    -691,  -691,  2577,  -691,  -691,  -691,  -691,  -691,    45,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  1418,    58,
    -691,  -691,  -691,  1532,  -691,  -691,  -691,  -691,   -83,   -74,
     -69,   -66,   -42,  -691,  -691,   -38,  -691,   -30,   -11,  -691,
    -691,     2,  -691,     7,  -691,    12,  -691,    19,    24,    27,
      34,    67,    72,    82,    91,   124,  -691,    53,  -691,    58,
    -691,  -691,  -691,  -691,  -691,    53,    53,    63,    16,   -36,
     150,    63,   -35,    63,    63,    63,    63,   157,   168,    63,
      63,    63,    63,    63,    63,  -691,    63,    63,    63,  -691,
      63,    63,   175,   474,  -691,  -691,  1159,  -691,   278,  2124,
     270,   283,   288,   292,   551,   421,  1779,   308,   213,   312,
     551,  2606,   314,   215,  -691,  -691,  -691,  2577,  -691,  -691,
    -691,  -691,  -691,   463,    63,    63,   463,    63,   463,    63,
     463,   463,   463,   463,   463,    63,    63,   463,   463,   181,
     463,   463,   463,    63,   463,   463,   463,    63,   463,   463,
      63,    63,    63,    63,    63,    63,  -691,    63,   319,    63,
    -691,   320,   599,  -691,  -691,  -691,  -691,   309,  -691,   321,
    -691,   325,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,   551,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,   326,  -691,  -691,  -691,  2354,  -691,
    2009,  2354,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,   328,  -691,   186,   186,   186,
    -691,  -691,  -691,   186,   186,   186,   186,   186,   463,   463,
     186,   463,   186,   463,   186,   186,   186,   186,   186,   463,
     463,   186,   186,  -691,   103,   186,   186,   181,   463,   186,
     186,   186,   463,     4,   186,   463,   463,   463,   463,   463,
     463,    63,   463,  -691,   463,  -691,  -691,  -691,   329,  -691,
    -691,  -691,  -691,  -691,  -691,  2469,  -691,  -691,  -691,  -691,
     330,   333,   324,   268,   334,   331,   331,   527,   181,   181,
     537,   181,   213,   181,   527,   527,   527,   213,   213,   181,
     181,   537,   213,   197,   209,   217,   463,   213,   103,  -691,
     252,  -691,   463,   537,   463,   252,   349,   103,   527,   181,
     186,   186,   186,   186,   186,   463,   181,   186,   551,    62,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,   186,   103,   103,   186,   186,   186,   186,
     186,   186,   186,   103,   186,   103,   181,   181,   181,   181,
    -691,   186,   103,   103,   186,   186,  -691,  -691,  2471,  -691,
    -691,   181,   186,   217,   463,   103,   186,   186,   181,   103,
     181,   217,   186,   103,   527,   527,   213,   463,   463,    26,
     103,   527,   551,  -691,   527,   217,   217,   351,   347,   355,
     350,   354,   268,   510,   217,   213,   217,   103,   103,   103,
     103,   213,   217,   217,   510,   213,  -691,   225,   229,   231,
     241,   248,   254,   -66,   255,   256,   -38,   258,   259,   260,
     263,   264,    19,   265,   266,   269,   273,   274,   276,   378,
     279,    85,  -691,   103,   213,  -691,  -691,   217,   527,   213,
     103,   217,  -691,  -691,   213,   217,   181,   181,   181,   186,
     181,   103,  1594,   186,  -691,   252,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,    25,    30,   181,   186,  -691,   186,
    -691,   217,   217,   217,   217,   186,  -691,  -691,   181,   186,
     186,   352,   881,   390,  2239,   408,   367,   433,   376,   434,
     438,   551,   421,  1894,   443,   444,   213,   435,   551,   447,
    -691,   215,   448,  2471,  -691,   217,    46,  -691,   181,   181,
     217,  -691,   103,   181,  -691,   103,   103,   103,   527,   103,
    1594,  -691,   449,   104,  -691,   213,   143,   103,   139,   114,
     452,  -691,  -691,  -691,  -691,   455,   158,   114,   458,  -691,
    -691,   339,    90,  -691,  -691,  -691,   162,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,   475,
    -691,  -691,   309,  -691,   476,  -691,  -691,  -691,   340,   460,
    -691,  -691,   348,  -691,  -691,   551,   465,  2354,  -691,  2009,
    2354,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,    59,   103,   103,   103,  -691,   217,
     103,  1594,  1594,  1594,   181,  1594,  -691,  -691,   484,  -691,
     181,   353,  -691,   181,   252,  -691,   217,   -70,   217,   154,
     240,   181,   186,   186,   186,  -691,   186,   186,   -48,   217,
     181,   186,   186,   186,   213,  -691,  -691,  -691,  -691,  -691,
    -691,   485,  -691,   489,   213,  -691,   213,  -691,  -691,  -691,
    -691,  -691,  2469,  -691,  -691,  -691,  -691,  -691,   181,    89,
    -691,   217,   217,   217,  -691,   217,  -691,  -691,  -691,   103,
    -691,  -691,  -691,   103,   494,   103,   527,   103,  -691,   473,
    -691,   103,   527,   213,   696,   537,   527,   453,  -691,   103,
     213,   696,   537,    -7,  -691,   551,     3,    21,    62,   103,
     213,   103,  -691,  -691,  -691,  -691,  1594,  -691,  1594,  -691,
     217,  -691,   217,    63,   217,  -691,   181,   181,  -691,   186,
     186,    63,   217,   181,   181,   186,   361,   551,   362,   363,
    -691,   217,  -691,   217,  -691,  -691,  -691,  -691,   463,  -691,
     103,   103,   537,   527,   463,  -691,   103,   103,   537,   527,
    -691,   527,   527,  -691,  -691,   186,   217,   217,   186,   186,
     186,   217,   217,   186,    88,    97,   128,   537,  -691,  -691,
     503,   508,   537,  -691,  -691,   509,   384,   527,  -691,   386,
     186,   186,   181,   186,   186,   213,   213,   213,   213,   103,
     213,   213,   392,   402,   181,   181,   217,   181,   181,  -691,
    -691,  -691,   103,  -691,  -691,   103,   217,   217,  -691,  -691
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -691,  -691,  -691,   502,  -691,  -691,  -691,  -691,  -691,    61,
    -691,   644,  -691,  -691,  -545,  -691,  -691,   466,   -84,  -691,
       1,   -85,   -98,   492,   576,  -355,   -24,   310,  -283,  -532,
     232,  -691,   -15,   602,  -101,   417,  -119,  -204,    29,  -691,
    -691,   412,  -691,  -691,  -691,   155,    11,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,    23,   -76,   445,   375,
    -691,   451,  -691,  -691,  -691,  -249,   156,  -227,  -151,  -558,
    -172,  -566,  -690,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -342
static const yytype_int16 yytable[] =
{
     147,   156,    90,   158,   160,   161,   162,   163,   164,   -55,
     198,   167,   168,   169,   170,   171,   172,   231,   174,   175,
     176,   682,   178,   179,   313,   656,   316,   318,   197,   -55,
     -55,   -55,   -55,   -55,   -55,   230,   -55,   -55,   -55,   -55,
     -55,    84,     3,   355,   768,   155,   159,   673,    88,   -55,
     -55,   768,   -55,   -55,   239,   681,   268,   269,   404,   271,
     128,   273,   235,   236,   242,   237,   238,   279,   280,   129,
     417,   498,   407,    91,   130,   288,   729,  -138,   307,   292,
     225,   226,   295,   296,   297,   298,   299,   300,   516,   302,
     -31,   304,   -55,   -55,   407,   -55,   -55,   154,   737,   528,
    -341,   131,   227,   152,   152,  -139,   716,   717,   718,   -37,
     720,   315,   708,   132,   240,   -55,   429,   235,   236,  -341,
     669,   238,   378,   379,   380,   381,   743,   312,   661,   314,
     317,   145,   133,   776,   559,   685,   746,   768,   747,   -24,
     310,   145,   145,   778,   283,   134,   235,   236,   148,   377,
     135,   378,   379,   380,   381,   136,   150,   151,   686,   145,
     517,   779,  -146,   145,   145,   433,   283,   137,   145,   -68,
     138,   529,   320,   321,   322,   687,    84,   139,   323,   324,
     325,   326,   327,   661,   145,   330,   283,   332,   144,   334,
     335,   336,   337,   338,    92,    93,   341,   342,    54,    55,
     346,   347,   152,   365,   352,   353,   354,   688,   356,   358,
     140,   784,   661,   785,   369,   141,   235,   236,   245,   237,
     238,  -341,  -341,   145,   671,   142,   145,   145,   826,   283,
     689,   157,   680,   814,   143,   145,   816,   828,   165,   373,
    -341,  -341,   145,   382,   343,   344,   391,   690,   239,   166,
     382,   382,   382,   239,   239,   -67,   180,   391,   239,   144,
     -24,   -24,   145,   239,   246,   414,   145,   -59,   829,   391,
     414,   235,   236,   200,   382,   424,   425,   426,   427,   428,
     343,   667,   431,   195,   247,   248,   201,   249,   250,   -68,
     -68,   -68,   432,   202,   -68,   -68,   -68,   203,   434,   343,
     678,   437,   438,   439,   440,   441,   442,   443,   394,   445,
     375,   376,   251,   234,   401,   241,   451,   244,   405,   454,
     455,   283,   303,   412,   145,   305,   308,   484,   309,   311,
       5,   488,   489,   319,   368,   372,   370,   494,   406,   631,
     382,   382,   239,   371,   414,   262,   260,   382,   252,   253,
     382,   407,   408,     8,   420,   509,   504,   508,   513,   515,
     511,   239,     9,    10,   510,   512,    11,   239,   531,    13,
     515,   239,   532,    15,   533,   -67,   -67,   -67,   766,   767,
     -67,   -67,   -67,   550,   534,   773,   774,   -59,   -59,   -59,
     145,   535,   283,   -59,   -59,   610,   553,   536,   537,   538,
     239,   539,   540,   541,   382,   239,   542,   543,   544,   545,
     239,   615,   546,   589,   568,   613,   547,   548,   575,   549,
     576,   519,   551,   700,   630,   703,   705,   525,   616,   437,
     442,   530,   579,   612,   580,   554,   619,   620,   636,   623,
     585,   217,   629,   624,   587,   588,   218,   219,   633,   634,
     638,   220,   769,   641,   657,   676,   574,   221,   677,   775,
     556,   683,   239,   695,   222,   625,   235,   236,   698,   257,
     563,   644,   637,   258,   259,   260,   261,   262,   684,   694,
     691,   693,   844,   845,   382,   847,   848,   696,   553,   722,
     744,   239,   382,   692,   745,   670,   724,   759,   763,   771,
     799,   801,   802,   670,   639,   181,   831,   182,   183,   808,
     702,   832,   834,   235,   236,   813,   514,   238,   387,   388,
     389,   390,   635,   835,   574,   836,   699,   659,   701,   704,
     235,   236,   849,   377,   830,   378,   379,   380,   381,   833,
     235,   236,   850,   386,   780,   387,   388,   389,   390,   697,
      89,   660,   640,   223,   204,   149,   374,   184,   243,   256,
     239,   185,   186,   481,   642,   626,   187,   306,   192,   188,
     486,   205,   189,   206,   815,   761,   207,   194,   782,   726,
     208,   209,     0,     0,     0,     0,     0,   732,   733,   734,
       0,   735,   736,     0,     0,   706,   740,   741,   742,     0,
     239,   748,     0,     0,     0,   574,   574,   574,     0,   574,
     239,   721,   239,     0,     0,     0,     0,     0,   124,   125,
     707,     0,   210,     0,     0,   211,   212,   213,   214,     0,
     181,     0,   182,   183,     0,     0,     0,   383,     0,     0,
       0,     0,   382,     0,   396,   397,   398,   215,   382,   239,
     670,   391,   382,     0,     0,     0,   239,   670,   391,     0,
     707,     0,     0,     0,     0,   788,   239,     0,   422,   777,
     707,     0,   707,   794,     0,     0,   757,     0,     0,     0,
       0,     0,   184,     0,   792,   793,   185,   186,     0,     0,
     798,   187,     0,     0,     0,     0,     0,   189,     0,   235,
     236,   800,   669,   238,   378,   379,   380,   381,   391,   382,
     574,     0,   574,     0,   391,   382,     0,   382,   382,     0,
     817,     0,     0,   820,   821,   822,   707,     0,   825,   827,
     726,   827,     0,   391,   496,   497,     0,     0,   391,     0,
       0,   503,     0,   382,   505,   837,   838,     0,   840,   841,
       0,   239,   239,   239,   239,   267,   239,   239,   270,     0,
     272,     0,   274,   275,   276,   277,   278,     0,     0,   281,
     282,     0,   285,   286,   287,     0,   289,   290,   291,   348,
     293,   294,     0,     0,     0,   357,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   558,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   842,   843,     0,     0,     0,     0,     0,     0,     0,
     384,   385,     0,   393,     0,   395,     0,     0,     0,     0,
       0,   402,   403,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   415,     0,     0,     0,     0,   419,     0,     0,
       0,   423,     0,     0,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     328,   329,     0,   331,     0,   333,     0,     0,   654,     0,
       0,   339,   340,     0,     0,     0,   662,     0,   447,   448,
     449,   450,     0,     0,     0,     0,     0,   359,   360,   361,
     362,   363,   364,   483,   366,   592,   367,     0,     0,     0,
     490,     0,   492,   593,     0,     0,     0,     0,     0,     0,
       0,   501,   594,     0,   413,     0,   595,     0,   596,     0,
       0,     0,     0,   421,     0,     0,     0,   597,     0,     0,
     598,     0,     0,     0,     0,     0,   599,     0,   411,   600,
       0,     0,     0,     0,   416,     0,   418,     0,     0,     0,
     435,   436,     0,     0,     0,   601,   602,     0,     0,   444,
     603,   446,     0,   604,     0,     0,     0,     0,   452,   453,
       0,   605,   606,   607,     0,     0,     0,     0,   565,   566,
     567,   487,   569,     0,     0,   491,     0,   577,     0,   495,
       0,     0,     0,     0,     0,     0,   502,     0,   578,     0,
       0,     0,   608,     0,     0,     0,     0,     0,     0,     0,
     586,     0,     0,   521,   522,   523,   524,     0,     0,   499,
     500,     0,     0,     0,     0,     0,   662,     0,     0,     0,
       0,     0,   765,     0,     0,     0,   770,     0,   645,     0,
     646,   647,     0,     0,     0,   650,     0,   485,     0,   555,
       0,     0,     0,     0,     0,   493,   560,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   570,     0,   506,
     507,     0,     0,     0,     0,     0,     0,     0,   518,     0,
     520,     0,     0,     0,     0,     0,   526,   527,     0,     0,
       0,     0,     0,   809,     0,     0,     0,     0,     0,     0,
       0,   662,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,     0,     0,   561,     0,     0,   649,   564,
       0,   651,   652,   653,     0,   655,   719,     0,     0,     0,
       0,     0,   723,   666,   668,   725,   727,     0,     0,     0,
       0,     0,   679,   731,     0,   581,   582,   583,   584,     0,
       0,     0,   739,     0,     0,     0,    97,     0,     0,    98,
       0,     0,     0,     0,    99,   100,   101,     0,     0,   102,
     103,     0,   104,   105,   106,   107,     0,     0,     0,   643,
     749,   751,   108,     0,   648,   109,     0,   110,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   711,   712,   713,     0,   112,   715,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
     114,   115,   116,     0,     0,   117,   118,   119,     0,     0,
       0,   120,     0,     0,     0,     0,     0,   121,   790,   791,
       0,     0,     0,     0,     0,   796,   797,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,   714,     0,   756,     0,     0,     0,   758,
       0,   760,     0,   762,     0,     0,     0,   764,     0,     0,
     728,     0,   730,     0,     0,   772,     0,     0,     0,     0,
       0,     0,     0,   738,   839,   781,     0,   783,     0,     0,
       0,     0,     0,     0,     0,     0,   851,   852,     0,   854,
     855,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   752,   753,   754,     0,   755,
       0,     0,     0,     0,     0,     0,   806,   807,     0,     0,
       0,     0,   811,   812,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     805,     0,     0,     0,     0,     0,   810,     0,     0,     0,
       0,     0,     0,     0,   786,     0,   787,     0,   789,     0,
       0,     0,     0,     0,     0,   846,   795,     0,  -341,     0,
       0,     0,     0,     0,     0,   803,     0,   804,   856,     0,
       0,   857,     0,    -5,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     818,   819,     0,     0,     0,   823,   824,     6,     0,     0,
       7,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,    11,    12,     0,    13,     0,
      14,     0,    15,     0,     0,    16,     0,     0,     0,     0,
     853,     0,     0,     0,     0,     0,    17,     0,     0,     0,
     858,   859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    97,
       0,     0,    98,     0,    -5,    -5,     0,    99,   100,   101,
       0,     0,   102,   103,     0,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,   108,     0,     0,   109,     0,
     110,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   -34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,   114,   115,   116,     0,   456,   117,   118,
     119,   457,   458,     0,   120,     0,   459,   460,   461,   462,
     121,   463,   464,     0,     0,    63,     0,     0,     0,    64,
       0,     0,   465,     0,     0,   466,    66,     0,     0,   467,
     468,     0,     0,    69,     0,     0,     0,    70,     0,     0,
     469,     0,    72,     0,   122,     0,     0,   123,     0,     0,
       0,     0,    -5,     4,     0,   470,   124,   125,     5,    74,
       0,   471,     0,    76,   472,   473,   474,   475,   476,     0,
       0,     0,   477,     0,     0,     0,     6,     0,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,    11,    12,     0,    13,     0,    14,
       0,    15,     0,     0,    16,   478,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,    -5,    -5,     4,     0,   225,   226,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,    11,     0,     0,    13,
       0,    14,     0,    15,     0,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       4,     0,   225,   226,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,     0,     0,    13,     0,    14,     0,    15,     0,
       0,   627,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,   628,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,     0,   225,   226,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   227,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,    11,     0,     0,    13,
       0,    14,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       4,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,     0,
       0,    11,     0,     0,    13,     0,    14,     0,    15,     0,
       0,   196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,     0,     0,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,    11,     0,     0,    13,
       0,    14,     0,    15,     0,     0,   611,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       4,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   227,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,     0,     0,     0,     0,
       0,     0,     0,     0,   456,     0,     0,     0,   457,   458,
       0,     0,     0,   459,   460,   461,   462,     0,   463,   464,
       0,     7,    63,     0,     0,     0,    64,     0,     0,   465,
       0,     0,   466,    66,     0,     0,   467,   468,     0,     0,
      69,    14,     0,     0,    70,     0,     0,   469,     0,    72,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,   470,     0,     0,     0,    74,     0,   471,     0,
      76,   472,   473,   474,   475,   476,     0,     0,     0,   477,
       0,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      57,     0,   478,     0,     0,     0,     0,     0,     0,    58,
      59,    60,     0,     0,    61,    62,     0,     0,    63,     0,
       0,     0,    64,     0,     0,     0,     0,     0,    65,    66,
       0,     0,    67,    68,     0,     0,    69,     0,     0,     0,
      70,     0,     0,    71,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,     0,    74,     0,    75,     0,    76,    77,     0,    78,
      79,    80,     0,     0,     0,    81,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      85,    99,    48,   101,   102,   103,   104,   105,   106,     5,
     129,   109,   110,   111,   112,   113,   114,   136,   116,   117,
     118,   587,   120,   121,   228,   570,   230,   231,   129,     3,
       4,     6,     6,     3,     4,   136,    10,    11,    12,    13,
      14,    12,     0,   292,   734,    81,    81,   579,     3,     3,
       4,   741,     6,     7,   138,   587,   154,   155,   341,   157,
     143,   159,     3,     4,   140,     6,     7,   165,   166,   143,
     353,   426,   142,    15,   143,   173,   146,   143,   197,   177,
      18,    19,   180,   181,   182,   183,   184,   185,   443,   187,
       5,   189,     3,     4,   142,     6,     7,    81,   146,   454,
      15,   143,    40,   139,   139,   143,   651,   652,   653,     5,
     655,   230,   644,   143,   138,    69,   365,     3,     4,    15,
       6,     7,     8,     9,    10,    11,   684,   228,    69,   230,
     231,   138,   143,   140,   489,    45,   694,   827,   696,    15,
     216,   138,   138,   140,   140,   143,     3,     4,    87,     6,
     143,     8,     9,    10,    11,   143,    95,    96,    68,   138,
     443,   140,   143,   138,   138,   369,   140,   143,   138,    15,
     143,   454,   257,   258,   259,    85,   147,   143,   263,   264,
     265,   266,   267,    69,   138,   270,   140,   272,   135,   274,
     275,   276,   277,   278,   136,   137,   281,   282,    72,    73,
     285,   286,   139,   301,   289,   290,   291,    45,   293,   294,
     143,   756,    69,   758,   315,   143,     3,     4,     3,     6,
       7,   136,   137,   138,   579,   143,   138,   138,   140,   140,
      68,    81,   587,   799,   143,   138,   802,   140,    81,   323,
     136,   137,   138,   327,   141,   142,   330,    85,   332,    81,
     334,   335,   336,   337,   338,    15,    81,   341,   342,   135,
     136,   137,   138,   347,    49,   350,   138,    15,   140,   353,
     355,     3,     4,     3,   358,   360,   361,   362,   363,   364,
     141,   142,   367,     5,    69,    70,     3,    72,    73,   135,
     136,   137,   368,     5,   140,   141,   142,     5,   383,   141,
     142,   386,   387,   388,   389,   390,   391,   392,   332,   394,
     325,   326,    97,     5,   338,     3,   401,     3,   342,   404,
     405,   140,     3,   347,   138,     5,     5,   412,     3,     3,
      21,   416,   417,     5,     5,    11,     6,   422,   141,   543,
     424,   425,   426,    10,   429,    14,    12,   431,   133,   134,
     434,   142,   135,    44,     5,     8,   432,     6,   442,   443,
      10,   445,    53,    54,     9,    11,    57,   451,   143,    60,
     454,   455,   143,    64,   143,   135,   136,   137,   733,   734,
     140,   141,   142,     5,   143,   740,   741,   135,   136,   137,
     138,   143,   140,   141,   142,     5,   481,   143,   143,   143,
     484,   143,   143,   143,   488,   489,   143,   143,   143,   143,
     494,     3,   143,    61,   499,   534,   143,   143,   503,   143,
     505,   445,   143,   627,   543,   629,   630,   451,    61,   514,
     515,   455,   517,   534,   519,   481,     3,    61,     3,     5,
     525,    20,   543,     5,   529,   530,    25,    26,     5,     5,
       3,    30,   735,     5,     5,     3,   502,    36,     3,   742,
     484,     3,   546,     3,    43,   541,     3,     4,     3,     6,
     494,   556,   548,    10,    11,    12,    13,    14,   139,   139,
       5,     5,   837,   838,   568,   840,   841,   139,   573,     5,
       5,   575,   576,   612,     5,   579,   143,     3,    25,    46,
     139,   139,   139,   587,   550,    31,     3,    33,    34,   792,
     629,     3,     3,     3,     4,   798,     6,     7,     8,     9,
      10,    11,   546,   139,   570,   139,   627,   573,   629,   630,
       3,     4,   140,     6,   817,     8,     9,    10,    11,   822,
       3,     4,   140,     6,   748,     8,     9,    10,    11,   625,
      48,   575,   551,   132,     3,    89,   324,    83,   141,   147,
     644,    87,    88,   408,   553,   542,    92,   192,   123,    95,
     414,    20,    98,    22,   801,   726,    25,   126,   750,   664,
      29,    30,    -1,    -1,    -1,    -1,    -1,   672,   673,   674,
      -1,   676,   677,    -1,    -1,   641,   681,   682,   683,    -1,
     684,   702,    -1,    -1,    -1,   651,   652,   653,    -1,   655,
     694,   657,   696,    -1,    -1,    -1,    -1,    -1,   144,   145,
     644,    -1,    71,    -1,    -1,    74,    75,    76,    77,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,   726,    -1,   334,   335,   336,    96,   732,   733,
     734,   735,   736,    -1,    -1,    -1,   740,   741,   742,    -1,
     684,    -1,    -1,    -1,    -1,   763,   750,    -1,   358,   745,
     694,    -1,   696,   771,    -1,    -1,   722,    -1,    -1,    -1,
      -1,    -1,    83,    -1,   769,   770,    87,    88,    -1,    -1,
     775,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,     3,
       4,   777,     6,     7,     8,     9,    10,    11,   792,   793,
     756,    -1,   758,    -1,   798,   799,    -1,   801,   802,    -1,
     805,    -1,    -1,   808,   809,   810,   750,    -1,   813,   814,
     815,   816,    -1,   817,   424,   425,    -1,    -1,   822,    -1,
      -1,   431,    -1,   827,   434,   830,   831,    -1,   833,   834,
      -1,   835,   836,   837,   838,   153,   840,   841,   156,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,    -1,   167,
     168,    -1,   170,   171,   172,    -1,   174,   175,   176,   287,
     178,   179,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   835,   836,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     328,   329,    -1,   331,    -1,   333,    -1,    -1,    -1,    -1,
      -1,   339,   340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   350,    -1,    -1,    -1,    -1,   355,    -1,    -1,
      -1,   359,    -1,    -1,    -1,    -1,    -1,    -1,   366,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,   269,    -1,   271,    -1,   273,    -1,    -1,   568,    -1,
      -1,   279,   280,    -1,    -1,    -1,   576,    -1,   396,   397,
     398,   399,    -1,    -1,    -1,    -1,    -1,   295,   296,   297,
     298,   299,   300,   411,   302,    24,   304,    -1,    -1,    -1,
     418,    -1,   420,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    41,    -1,   348,    -1,    45,    -1,    47,    -1,
      -1,    -1,    -1,   357,    -1,    -1,    -1,    56,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    65,    -1,   346,    68,
      -1,    -1,    -1,    -1,   352,    -1,   354,    -1,    -1,    -1,
     384,   385,    -1,    -1,    -1,    84,    85,    -1,    -1,   393,
      89,   395,    -1,    92,    -1,    -1,    -1,    -1,   402,   403,
      -1,   100,   101,   102,    -1,    -1,    -1,    -1,   496,   497,
     498,   415,   500,    -1,    -1,   419,    -1,   505,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,   430,    -1,   516,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     528,    -1,    -1,   447,   448,   449,   450,    -1,    -1,   427,
     428,    -1,    -1,    -1,    -1,    -1,   726,    -1,    -1,    -1,
      -1,    -1,   732,    -1,    -1,    -1,   736,    -1,   556,    -1,
     558,   559,    -1,    -1,    -1,   563,    -1,   413,    -1,   483,
      -1,    -1,    -1,    -1,    -1,   421,   490,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   501,    -1,   435,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,
     446,    -1,    -1,    -1,    -1,    -1,   452,   453,    -1,    -1,
      -1,    -1,    -1,   793,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   801,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   487,    -1,    -1,    -1,   491,    -1,    -1,   562,   495,
      -1,   565,   566,   567,    -1,   569,   654,    -1,    -1,    -1,
      -1,    -1,   660,   577,   578,   663,   664,    -1,    -1,    -1,
      -1,    -1,   586,   671,    -1,   521,   522,   523,   524,    -1,
      -1,    -1,   680,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,   555,
     708,   709,    43,    -1,   560,    46,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   645,   646,   647,    -1,    66,   650,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    86,    87,    88,    -1,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    98,   766,   767,
      -1,    -1,    -1,    -1,    -1,   773,   774,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   649,    -1,   719,    -1,    -1,    -1,   723,
      -1,   725,    -1,   727,    -1,    -1,    -1,   731,    -1,    -1,
     666,    -1,   668,    -1,    -1,   739,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   679,   832,   749,    -1,   751,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   844,   845,    -1,   847,
     848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   711,   712,   713,    -1,   715,
      -1,    -1,    -1,    -1,    -1,    -1,   790,   791,    -1,    -1,
      -1,    -1,   796,   797,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     788,    -1,    -1,    -1,    -1,    -1,   794,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   760,    -1,   762,    -1,   764,    -1,
      -1,    -1,    -1,    -1,    -1,   839,   772,    -1,     0,    -1,
      -1,    -1,    -1,    -1,    -1,   781,    -1,   783,   852,    -1,
      -1,   855,    -1,    15,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     806,   807,    -1,    -1,    -1,   811,   812,    39,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    -1,    60,    -1,
      62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,
     846,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
     856,   857,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,
      -1,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    17,
      -1,    -1,    20,    -1,   136,   137,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    82,    83,    -1,    23,    86,    87,
      88,    27,    28,    -1,    92,    -1,    32,    33,    34,    35,
      98,    37,    38,    -1,    -1,    41,    -1,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    51,    52,    -1,    -1,    55,
      56,    -1,    -1,    59,    -1,    -1,    -1,    63,    -1,    -1,
      66,    -1,    68,    -1,   132,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    15,    16,    -1,    81,   144,   145,    21,    85,
      -1,    87,    -1,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    39,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    -1,    -1,    67,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,    -1,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,    -1,    -1,
      -1,    -1,    -1,   136,   137,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    57,    -1,    -1,    60,    -1,    62,    -1,    64,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    16,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    42,    41,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      59,    62,    -1,    -1,    63,    -1,    -1,    66,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    87,    -1,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    98,
      -1,    -1,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      23,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    37,    38,    -1,    -1,    41,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    56,    -1,    -1,    59,    -1,    -1,    -1,
      63,    -1,    -1,    66,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    85,    -1,    87,    -1,    89,    90,    -1,    92,
      93,    94,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   148,   191,     0,    16,    21,    39,    42,    44,    53,
      54,    57,    58,    60,    62,    64,    67,    78,    95,    99,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   149,   150,
     181,   182,   183,   202,    72,    73,   166,    23,    32,    33,
      34,    37,    38,    41,    45,    51,    52,    55,    56,    59,
      63,    66,    68,    81,    85,    87,    89,    90,    92,    93,
      94,    98,   103,   131,   185,   187,   188,   153,     3,   150,
     220,    15,   136,   137,   164,   151,   152,    17,    20,    25,
      26,    27,    30,    31,    33,    34,    35,    36,    43,    46,
      48,    50,    66,    79,    81,    82,    83,    86,    87,    88,
      92,    98,   132,   135,   144,   145,   205,   208,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   135,   138,   156,   168,   156,   164,
     156,   156,   139,   169,    81,    81,   169,    81,   169,    81,
     169,   169,   169,   169,   169,    81,    81,   169,   169,   169,
     169,   169,   169,   209,   169,   169,   169,   210,   169,   169,
      81,    31,    33,    34,    83,    87,    88,    92,    95,    98,
     154,   155,   205,   206,   208,     5,    67,   181,   183,   190,
       3,     3,     5,     5,     3,    20,    22,    25,    29,    30,
      71,    74,    75,    76,    77,    96,   204,    20,    25,    26,
      30,    36,    43,   132,   203,    18,    19,    40,    67,    80,
     181,   183,   184,   189,     5,     3,     4,     6,     7,   165,
     173,     3,   204,   182,     3,     3,    49,    69,    70,    72,
      73,    97,   133,   134,   167,   157,   188,     6,    10,    11,
      12,    13,    14,   165,   177,   178,   179,   180,   169,   169,
     180,   169,   180,   169,   180,   180,   180,   180,   180,   169,
     169,   180,   180,   140,   170,   180,   180,   180,   169,   180,
     180,   180,   169,   180,   180,   169,   169,   169,   169,   169,
     169,   207,   169,     3,   169,     5,   206,   183,     5,     3,
     204,     3,   181,   184,   181,   183,   184,   181,   184,     5,
     168,   168,   168,   168,   168,   168,   168,   168,   180,   180,
     168,   180,   168,   180,   168,   168,   168,   168,   168,   180,
     180,   168,   168,   141,   142,   171,   168,   168,   170,   180,
     212,   213,   168,   168,   168,   212,   168,   170,   168,   180,
     180,   180,   180,   180,   180,   169,   180,   180,     5,   181,
       6,    10,    11,   165,   177,   179,   179,     6,     8,     9,
      10,    11,   165,   174,   170,   170,     6,     8,     9,    10,
      11,   165,   175,   170,   173,   170,   174,   174,   174,   172,
     173,   173,   170,   170,   175,   173,   141,   142,   135,   158,
     220,   180,   173,   171,   168,   170,   180,   175,   180,   170,
       5,   171,   174,   170,   168,   168,   168,   168,   168,   212,
     170,   168,   204,   184,   168,   171,   171,   168,   168,   168,
     168,   168,   168,   168,   171,   168,   171,   170,   170,   170,
     170,   168,   171,   171,   168,   168,    23,    27,    28,    32,
      33,    34,    35,    37,    38,    48,    51,    55,    56,    66,
      81,    87,    90,    91,    92,    93,    94,    98,   131,   159,
     185,   192,   193,   170,   168,   158,   213,   171,   168,   168,
     170,   171,   170,   158,   168,   171,   174,   174,   172,   180,
     180,   170,   171,   174,   204,   174,   158,   158,     6,     8,
       9,    10,    11,   165,     6,   165,   172,   175,   158,   173,
     158,   171,   171,   171,   171,   173,   158,   158,   172,   175,
     173,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
       5,   143,   160,   168,   220,   171,   173,   158,   174,   172,
     171,   158,   211,   173,   158,   170,   170,   170,   168,   170,
     171,   161,   162,   192,   220,   168,   168,   170,   170,   168,
     168,   158,   158,   158,   158,   168,   170,   168,   168,    61,
     200,   201,    24,    32,    41,    45,    47,    56,    59,    65,
      68,    84,    85,    89,    92,   100,   101,   102,   131,   186,
       5,    67,   181,   183,   195,     3,    61,   196,   197,     3,
      61,   198,   199,     5,     5,   204,   203,    67,    80,   181,
     183,   184,   194,     5,     5,   173,     3,   204,     3,   220,
     167,     5,   193,   158,   168,   170,   170,   170,   158,   171,
     170,   171,   171,   171,   174,   171,   161,     5,   163,   220,
     173,    69,   174,   176,   214,   215,   171,   142,   171,     6,
     165,   172,   174,   176,   218,   219,     3,     3,   142,   171,
     172,   176,   218,     3,   139,    45,    68,    85,    45,    68,
      85,     5,   183,     5,   139,     3,   139,   204,     3,   181,
     184,   181,   183,   184,   181,   184,   220,   173,   176,   216,
     217,   171,   171,   171,   158,   171,   161,   161,   161,   170,
     161,   220,     5,   170,   143,   170,   168,   170,   158,   146,
     158,   170,   168,   168,   168,   168,   168,   146,   158,   170,
     168,   168,   168,   216,     5,     5,   216,   216,   181,   170,
     168,   170,   158,   158,   158,   158,   171,   220,   171,     3,
     171,   215,   171,    25,   171,   174,   172,   172,   219,   175,
     174,    46,   171,   172,   172,   175,   140,   204,   140,   140,
     184,   171,   217,   171,   161,   161,   158,   158,   169,   158,
     170,   170,   168,   168,   169,   158,   170,   170,   168,   139,
     204,   139,   139,   158,   158,   180,   171,   171,   175,   174,
     180,   171,   171,   175,   218,   214,   218,   168,   158,   158,
     168,   168,   168,   158,   158,   168,   140,   168,   140,   140,
     175,     3,     3,   175,     3,   139,   139,   168,   168,   170,
     168,   168,   173,   173,   172,   172,   171,   172,   172,   140,
     140,   170,   170,   158,   170,   170,   171,   171,   158,   158
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
#line 316 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 319 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 321 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 322 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 323 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::ICRS;;}
    break;

  case 21:
#line 332 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 333 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 337 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 341 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 341 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 343 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 343 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 347 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 347 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 349 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 349 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 354 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 357 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 358 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 361 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 362 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 365 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 367 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 368 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 369 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 370 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 372 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 373 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 374 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 375 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 390 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 392 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 63:
#line 400 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 64:
#line 408 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 1) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 2;
	;}
    break;

  case 65:
#line 417 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 66:
#line 418 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 67:
#line 422 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 424 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 69:
#line 425 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 70:
#line 428 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 71:
#line 429 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 72:
#line 430 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 73:
#line 431 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 74:
#line 432 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 75:
#line 433 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 76:
#line 437 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 444 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 451 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 458 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 465 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 472 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 82:
#line 480 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 83:
#line 483 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 486 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 489 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 86:
#line 493 "frame/ds9parser.Y"
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
#line 506 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 514 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 522 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 529 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 537 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 544 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 93:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 94:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 95:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 96:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 97:
#line 555 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 98:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 99:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 100:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 101:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 102:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 103:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 104:
#line 564 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 105:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 106:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 107:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 108:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 109:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 110:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 111:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 112:
#line 572 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 113:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 114:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 115:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 116:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 117:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 118:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 119:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 120:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 121:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 122:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 123:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 124:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 125:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 126:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 128:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 133:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 134:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 135:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 136:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 137:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 138:
#line 604 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 139:
#line 605 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 140:
#line 606 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 141:
#line 607 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 142:
#line 608 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 143:
#line 609 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 144:
#line 610 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 145:
#line 611 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 146:
#line 612 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 147:
#line 615 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 148:
#line 616 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 149:
#line 617 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 150:
#line 618 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 151:
#line 619 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 152:
#line 620 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 153:
#line 621 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 154:
#line 622 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 155:
#line 623 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 156:
#line 624 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 157:
#line 625 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 158:
#line 626 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 159:
#line 627 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 160:
#line 628 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 161:
#line 629 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 162:
#line 630 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 163:
#line 631 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 164:
#line 632 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 165:
#line 633 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 166:
#line 634 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 167:
#line 635 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 170:
#line 643 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 171:
#line 648 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 172:
#line 653 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 173:
#line 657 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 174:
#line 659 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 175:
#line 664 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 176:
#line 669 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 177:
#line 674 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::FILL,1);
	  setProps(&localProps,Marker::FILL,1);
	;}
    break;

  case 178:
#line 679 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 684 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 688 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 690 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 695 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 183:
#line 699 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 184:
#line 701 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 185:
#line 704 "frame/ds9parser.Y"
    {;}
    break;

  case 186:
#line 705 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 187:
#line 707 "frame/ds9parser.Y"
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
#line 715 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 189:
#line 716 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 190:
#line 717 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 191:
#line 721 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 192:
#line 728 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 193:
#line 735 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 194:
#line 742 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 195:
#line 749 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 196:
#line 756 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 197:
#line 763 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 198:
#line 770 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 199:
#line 776 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 200:
#line 785 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 201:
#line 790 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 202:
#line 795 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 203:
#line 800 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 204:
#line 806 "frame/ds9parser.Y"
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
#line 854 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 208:
#line 855 "frame/ds9parser.Y"
    {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	  ;}
    break;

  case 209:
#line 860 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 210:
#line 864 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 211:
#line 865 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 212:
#line 866 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 213:
#line 867 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 214:
#line 868 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 215:
#line 870 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 216:
#line 871 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::FILL,1);;}
    break;

  case 217:
#line 872 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 218:
#line 873 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 219:
#line 875 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 220:
#line 876 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 221:
#line 877 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 222:
#line 878 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 223:
#line 879 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 225:
#line 881 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 226:
#line 883 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 227:
#line 889 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 228:
#line 890 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 232:
#line 897 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 233:
#line 904 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 234:
#line 911 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 235:
#line 918 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 236:
#line 925 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 237:
#line 932 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 238:
#line 939 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 239:
#line 946 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 240:
#line 953 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 241:
#line 962 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 242:
#line 967 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 243:
#line 972 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 244:
#line 977 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 245:
#line 983 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 246:
#line 983 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 247:
#line 984 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 248:
#line 987 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 249:
#line 988 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 250:
#line 989 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 251:
#line 992 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 252:
#line 993 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 253:
#line 994 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 254:
#line 997 "frame/ds9parser.Y"
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
#line 1053 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 256:
#line 1054 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 257:
#line 1055 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 258:
#line 1056 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 259:
#line 1057 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 260:
#line 1058 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 261:
#line 1059 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 262:
#line 1063 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 263:
#line 1064 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 264:
#line 1065 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 265:
#line 1066 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 266:
#line 1067 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 267:
#line 1068 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 268:
#line 1069 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 269:
#line 1070 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 270:
#line 1071 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 271:
#line 1072 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 272:
#line 1073 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 273:
#line 1074 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 274:
#line 1077 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 275:
#line 1078 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 276:
#line 1082 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 277:
#line 1089 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 278:
#line 1091 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 279:
#line 1097 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 280:
#line 1104 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1113 "frame/ds9parser.Y"
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

  case 282:
#line 1123 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1131 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1139 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 285:
#line 1149 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1156 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1164 "frame/ds9parser.Y"
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

  case 288:
#line 1187 "frame/ds9parser.Y"
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

  case 289:
#line 1210 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1218 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 291:
#line 1220 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1225 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 293:
#line 1227 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1234 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1242 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1250 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
#line 1256 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 298:
#line 1258 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1265 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1272 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 301:
#line 1279 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 302:
#line 1286 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1293 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 304:
#line 1300 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 305:
#line 1307 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 306:
#line 1314 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 307:
#line 1321 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 308:
#line 1330 "frame/ds9parser.Y"
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

  case 309:
#line 1340 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 310:
#line 1348 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 311:
#line 1356 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 312:
#line 1366 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 313:
#line 1374 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 314:
#line 1384 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 315:
#line 1394 "frame/ds9parser.Y"
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

  case 316:
#line 1406 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 317:
#line 1414 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 318:
#line 1424 "frame/ds9parser.Y"
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

  case 319:
#line 1436 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 320:
#line 1446 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 321:
#line 1455 "frame/ds9parser.Y"
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

  case 322:
#line 1477 "frame/ds9parser.Y"
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

  case 323:
#line 1501 "frame/ds9parser.Y"
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

  case 328:
#line 1531 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 331:
#line 1544 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 334:
#line 1552 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 337:
#line 1563 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 340:
#line 1573 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 341:
#line 1577 "frame/ds9parser.Y"
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
#line 5032 "frame/ds9parser.C"
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


#line 1604 "frame/ds9parser.Y"


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

