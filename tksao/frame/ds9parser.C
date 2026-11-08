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
     GLYPH_ = 314,
     HIGHLITE_ = 315,
     ICRS_ = 316,
     IGNORE_ = 317,
     IMAGE_ = 318,
     INCLUDE_ = 319,
     J2000_ = 320,
     KEY_ = 321,
     LINE_ = 322,
     LINEAR_ = 323,
     MOVE_ = 324,
     N_ = 325,
     NO_ = 326,
     NONE_ = 327,
     OFF_ = 328,
     ON_ = 329,
     OPENARROW_ = 330,
     OPENBOX_ = 331,
     OPENCIRCLE_ = 332,
     OPENTRIANGLE_ = 333,
     PHYSICAL_ = 334,
     PIE_ = 335,
     PIXELS_ = 336,
     POINT_ = 337,
     POLYGON_ = 338,
     PROJECTION_ = 339,
     PROPERTY_ = 340,
     ROTATE_ = 341,
     ROTBOX_ = 342,
     RULER_ = 343,
     SEGMENT_ = 344,
     SELECT_ = 345,
     SOURCE_ = 346,
     TAG_ = 347,
     TEXT_ = 348,
     TEXTANGLE_ = 349,
     TEXTROTATE_ = 350,
     TILE_ = 351,
     TRIANGLE_ = 352,
     TRUE_ = 353,
     VECTOR_ = 354,
     VERSION_ = 355,
     UNHIGHLITE_ = 356,
     UNSELECT_ = 357,
     UPDATE_ = 358,
     WCS_ = 359,
     WCSA_ = 360,
     WCSB_ = 361,
     WCSC_ = 362,
     WCSD_ = 363,
     WCSE_ = 364,
     WCSF_ = 365,
     WCSG_ = 366,
     WCSH_ = 367,
     WCSI_ = 368,
     WCSJ_ = 369,
     WCSK_ = 370,
     WCSL_ = 371,
     WCSM_ = 372,
     WCSN_ = 373,
     WCSO_ = 374,
     WCSP_ = 375,
     WCSQ_ = 376,
     WCSR_ = 377,
     WCSS_ = 378,
     WCST_ = 379,
     WCSU_ = 380,
     WCSV_ = 381,
     WCSW_ = 382,
     WCSX_ = 383,
     WCSY_ = 384,
     WCSZ_ = 385,
     WCS0_ = 386,
     WIDTH_ = 387,
     X_ = 388,
     Y_ = 389,
     YES_ = 390
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
#define GLYPH_ 314
#define HIGHLITE_ 315
#define ICRS_ 316
#define IGNORE_ 317
#define IMAGE_ 318
#define INCLUDE_ 319
#define J2000_ 320
#define KEY_ 321
#define LINE_ 322
#define LINEAR_ 323
#define MOVE_ 324
#define N_ 325
#define NO_ 326
#define NONE_ 327
#define OFF_ 328
#define ON_ 329
#define OPENARROW_ 330
#define OPENBOX_ 331
#define OPENCIRCLE_ 332
#define OPENTRIANGLE_ 333
#define PHYSICAL_ 334
#define PIE_ 335
#define PIXELS_ 336
#define POINT_ 337
#define POLYGON_ 338
#define PROJECTION_ 339
#define PROPERTY_ 340
#define ROTATE_ 341
#define ROTBOX_ 342
#define RULER_ 343
#define SEGMENT_ 344
#define SELECT_ 345
#define SOURCE_ 346
#define TAG_ 347
#define TEXT_ 348
#define TEXTANGLE_ 349
#define TEXTROTATE_ 350
#define TILE_ 351
#define TRIANGLE_ 352
#define TRUE_ 353
#define VECTOR_ 354
#define VERSION_ 355
#define UNHIGHLITE_ 356
#define UNSELECT_ 357
#define UPDATE_ 358
#define WCS_ 359
#define WCSA_ 360
#define WCSB_ 361
#define WCSC_ 362
#define WCSD_ 363
#define WCSE_ 364
#define WCSF_ 365
#define WCSG_ 366
#define WCSH_ 367
#define WCSI_ 368
#define WCSJ_ 369
#define WCSK_ 370
#define WCSL_ 371
#define WCSM_ 372
#define WCSN_ 373
#define WCSO_ 374
#define WCSP_ 375
#define WCSQ_ 376
#define WCSR_ 377
#define WCSS_ 378
#define WCST_ 379
#define WCSU_ 380
#define WCSV_ 381
#define WCSW_ 382
#define WCSX_ 383
#define WCSY_ 384
#define WCSZ_ 385
#define WCS0_ 386
#define WIDTH_ 387
#define X_ 388
#define Y_ 389
#define YES_ 390




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

// point=glyph [size] {file}, size 0 = native
static char globalGlyph[1024];
static char localGlyph[1024];
static int globalGlyphSize;
static int localGlyphSize;

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
#line 145 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 517 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 530 "frame/ds9parser.C"

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
#define YYLAST   2658

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  148
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNRULES -- Number of states.  */
#define YYNSTATES  868

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     137,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   147,     2,   136,     2,     2,   143,     2,
     140,   141,     2,   145,   139,   146,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   138,
       2,   144,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   142,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
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
     434,   438,   443,   448,   454,   459,   463,   467,   471,   475,
     483,   487,   491,   495,   500,   503,   506,   509,   512,   515,
     518,   520,   522,   525,   527,   529,   531,   532,   536,   538,
     542,   546,   551,   555,   559,   563,   567,   573,   575,   577,
     579,   581,   585,   590,   595,   601,   606,   610,   614,   618,
     622,   630,   634,   638,   642,   646,   650,   655,   658,   661,
     664,   667,   670,   673,   675,   677,   680,   682,   684,   686,
     687,   695,   697,   698,   709,   711,   712,   723,   725,   726,
     728,   730,   732,   734,   736,   738,   740,   742,   744,   746,
     748,   750,   752,   754,   756,   758,   760,   762,   764,   766,
     768,   779,   780,   788,   795,   804,   813,   824,   833,   842,
     851,   860,   871,   882,   893,   894,   902,   903,   911,   920,
     931,   938,   939,   949,   956,   964,   972,   980,   988,   996,
    1004,  1012,  1021,  1030,  1041,  1052,  1065,  1078,  1091,  1106,
    1121,  1140,  1153,  1168,  1183,  1202,  1221,  1242,  1263,  1274,
    1287,  1300,  1306,  1315,  1319,  1321,  1323,  1327,  1329,  1331,
    1335,  1337,  1339,  1343,  1345,  1349
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,   192,   150,   221,    -1,   150,   151,   165,
      -1,   151,   165,    -1,    -1,    39,   167,    -1,   100,    -1,
      58,   188,   157,    -1,    96,     3,    -1,    -1,   182,   152,
     157,    -1,    -1,   184,   153,   157,    -1,    -1,    68,   154,
     157,    -1,   203,   209,    -1,   203,   206,   209,    -1,   203,
     136,   155,    -1,   207,    -1,   206,   207,    -1,    96,     3,
      -1,    -1,   156,     5,    -1,    -1,    -1,   136,   158,     5,
      -1,   221,    -1,    -1,   136,   160,     5,   221,    -1,   136,
     193,   221,    -1,    -1,   136,   193,   161,     5,   221,    -1,
     221,    -1,    -1,   163,     5,   221,    -1,   193,   221,    -1,
      -1,   193,   164,     5,   221,    -1,   137,    -1,   138,    -1,
      15,    -1,     4,    -1,     3,    -1,    74,    -1,    73,    -1,
       3,    -1,   135,    -1,   134,    -1,    74,    -1,    98,    -1,
      71,    -1,    70,    -1,    73,    -1,    49,    -1,    -1,   139,
      -1,    -1,   140,    -1,    -1,   141,    -1,    -1,   142,    -1,
     142,   142,    -1,   143,   143,    -1,    -1,   174,    -1,   166,
      -1,     6,    -1,     7,    -1,   166,    -1,    10,    -1,    11,
      -1,     6,    -1,     8,    -1,     9,    -1,   166,   169,   166,
      -1,    10,   169,    10,    -1,    11,   169,    11,    -1,     6,
     169,     6,    -1,     8,   169,     8,    -1,     9,   169,     9,
      -1,    70,   144,     3,    -1,    12,    -1,    13,    -1,    14,
      -1,   178,   169,   178,    -1,   179,   169,   180,    -1,   180,
     169,   180,    -1,   166,   169,   166,    -1,     6,   169,     6,
      -1,    11,   169,    11,    -1,    10,   169,    10,    -1,    63,
      -1,    79,    -1,    42,    -1,    16,    -1,   183,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,
      -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,
      -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,
      -1,   120,    -1,   121,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   129,
      -1,   130,    -1,   131,    -1,    53,    -1,    21,    -1,    54,
      -1,    65,    -1,    61,    -1,    57,    -1,    44,    -1,    40,
      -1,    18,    -1,    19,    -1,    90,    -1,    60,    -1,    37,
      -1,    51,    -1,    52,    -1,    45,    -1,    69,    -1,    86,
      -1,    41,    -1,    64,    -1,    91,    -1,    90,    -1,   102,
      -1,    60,    -1,   101,    -1,    24,    69,    -1,    69,    -1,
      47,    69,    -1,    24,    45,    -1,    45,    -1,    47,    45,
      -1,    24,    86,    -1,    86,    -1,    47,    86,    -1,    41,
      -1,    93,    -1,    32,    -1,   132,    -1,    85,    -1,    56,
      -1,    66,    -1,   103,    -1,   188,   169,   189,    -1,   189,
      -1,   186,   144,   168,    -1,    32,   144,     5,    -1,    38,
     144,     3,     3,    -1,   132,   144,     3,    -1,    56,   144,
       5,    -1,    93,   144,     5,    -1,    37,    -1,    51,    -1,
      91,    -1,    23,    -1,    82,   144,   204,    -1,    82,   144,
     204,     3,    -1,    82,   144,    59,     5,    -1,    82,   144,
      59,     3,     5,    -1,    67,   144,   205,   205,    -1,    99,
     144,   205,    -1,    34,   144,     3,    -1,    88,   144,   190,
      -1,    55,   144,     5,    -1,    33,   144,   191,     5,     5,
     205,   205,    -1,    94,   144,   174,    -1,    95,   144,     3,
      -1,   104,   144,   183,    -1,   182,   184,   182,   185,    -1,
     182,   182,    -1,   182,   185,    -1,   184,   182,    -1,   184,
     185,    -1,    68,   182,    -1,    68,   185,    -1,   185,    -1,
      81,    -1,   182,   184,    -1,   182,    -1,   184,    -1,    68,
      -1,    -1,   193,   169,   194,    -1,   194,    -1,   186,   144,
     168,    -1,    32,   144,     5,    -1,    38,   144,     3,     3,
      -1,   132,   144,     3,    -1,    56,   144,     5,    -1,    93,
     144,     5,    -1,    92,   144,     5,    -1,    28,   144,   187,
       5,     5,    -1,    37,    -1,    51,    -1,    91,    -1,    23,
      -1,    82,   144,   204,    -1,    82,   144,   204,     3,    -1,
      82,   144,    59,     5,    -1,    82,   144,    59,     3,     5,
      -1,    67,   144,   205,   205,    -1,    99,   144,   205,    -1,
      34,   144,     3,    -1,    88,   144,   195,    -1,    55,   144,
       5,    -1,    33,   144,   196,     5,     5,   205,   205,    -1,
      94,   144,   174,    -1,    95,   144,     3,    -1,    35,   144,
     197,    -1,    48,   144,   199,    -1,    27,   144,   201,    -1,
     182,   184,   182,   185,    -1,   182,   182,    -1,   182,   185,
      -1,   184,   182,    -1,   184,   185,    -1,    68,   182,    -1,
      68,   185,    -1,   185,    -1,    81,    -1,   182,   184,    -1,
     182,    -1,   184,    -1,    68,    -1,    -1,   198,   140,   217,
     141,   140,   215,   141,    -1,    62,    -1,    -1,   200,   140,
     217,   141,   140,   219,   141,   140,   174,   141,    -1,    62,
      -1,    -1,   202,   140,   217,   141,   140,   219,   141,   140,
     174,   141,    -1,    62,    -1,    -1,    30,    -1,    25,    -1,
      43,    -1,    36,    -1,   133,    -1,    20,    -1,    26,    -1,
       3,    -1,    72,    -1,    20,    -1,    75,    -1,    29,    -1,
      30,    -1,    77,    -1,    25,    -1,    76,    -1,    97,    -1,
      78,    -1,    22,    -1,   145,    -1,   146,    -1,    99,   170,
     181,   169,   175,   169,   174,   171,   172,   162,    -1,    -1,
      89,   208,   170,   213,   171,   172,   162,    -1,    93,   170,
     181,   171,   172,   162,    -1,    88,   170,   181,   169,   181,
     171,   172,   162,    -1,    33,   170,   181,   169,   175,   171,
     172,   162,    -1,    84,   170,   181,   169,   181,   169,   175,
     171,   172,   162,    -1,    31,   170,   181,   169,   175,   171,
     172,   162,    -1,    34,   170,   181,   169,   173,   171,   172,
     162,    -1,    30,   170,   181,   169,   175,   171,   172,   159,
      -1,    31,   170,   181,   169,   175,   171,   172,   159,    -1,
      46,   170,   181,   169,   176,   169,   173,   171,   172,   159,
      -1,    25,   170,   181,   169,   176,   169,   173,   171,   172,
     159,    -1,    87,   170,   181,   169,   176,   169,   173,   171,
     172,   159,    -1,    -1,    83,   210,   170,   213,   171,   172,
     159,    -1,    -1,    89,   211,   170,   213,   171,   172,   159,
      -1,    67,   170,   181,   169,   181,   171,   172,   159,    -1,
      99,   170,   181,   169,   175,   169,   174,   171,   172,   159,
      -1,    93,   170,   181,   171,   172,   159,    -1,    -1,    93,
     170,   181,   169,     5,   171,   212,   172,   159,    -1,    82,
     170,   181,   171,   172,   159,    -1,    30,    82,   170,   181,
     171,   172,   159,    -1,    25,    82,   170,   181,   171,   172,
     159,    -1,    43,    82,   170,   181,   171,   172,   159,    -1,
      36,    82,   170,   181,   171,   172,   159,    -1,   133,    82,
     170,   181,   171,   172,   159,    -1,    20,    82,   170,   181,
     171,   172,   159,    -1,    26,    82,   170,   181,   171,   172,
     159,    -1,    88,   170,   181,   169,   181,   171,   172,   159,
      -1,    33,   170,   181,   169,   175,   171,   172,   159,    -1,
      84,   170,   181,   169,   181,   169,   175,   171,   172,   159,
      -1,    17,   170,   181,   169,   175,   169,   175,   171,   172,
     159,    -1,    17,   170,   181,   169,   175,   169,   175,   169,
     215,   171,   172,   159,    -1,    17,   170,   181,   169,   175,
     169,   175,   169,   177,   171,   172,   159,    -1,    46,   170,
     181,   169,   176,   169,   176,   169,   173,   171,   172,   159,
      -1,    46,   170,   181,   169,   176,   169,   176,   169,   177,
     169,   173,   171,   172,   159,    -1,    46,   170,   181,   169,
     176,   169,   176,   169,   219,   169,   173,   171,   172,   159,
      -1,    46,   170,   181,   169,   176,   169,   173,   171,   143,
     147,    46,   170,   181,   169,   176,   169,   173,   171,    -1,
      25,   170,   181,   169,   176,   169,   176,   169,   173,   171,
     172,   159,    -1,    25,   170,   181,   169,   176,   169,   176,
     169,   219,   169,   173,   171,   172,   159,    -1,    25,   170,
     181,   169,   176,   169,   176,   169,   177,   169,   173,   171,
     172,   159,    -1,    25,   170,   181,   169,   176,   169,   173,
     171,   143,   147,    25,   170,   181,   169,   176,   169,   173,
     171,    -1,    35,   170,   181,   169,   174,   169,   174,   169,
       3,   169,   175,   169,   175,   169,     3,   171,   172,   159,
      -1,    48,   170,   181,   169,   174,   169,   174,   169,     3,
     169,   176,   169,   176,   169,     3,   169,   173,   171,   172,
     159,    -1,    27,   170,   181,   169,   174,   169,   174,   169,
       3,   169,   176,   169,   176,   169,     3,   169,   173,   171,
     172,   159,    -1,    80,   170,   181,   169,   174,   169,   174,
     171,   172,   159,    -1,    80,   170,   181,   169,   174,   169,
     174,   169,   217,   171,   172,   159,    -1,    80,   170,   181,
     169,   174,   169,   174,   169,   177,   171,   172,   159,    -1,
      50,   170,   171,   172,   159,    -1,    34,   170,   181,   169,
     173,   171,   172,   159,    -1,   213,   169,   214,    -1,   214,
      -1,   181,    -1,   215,   169,   216,    -1,   216,    -1,   175,
      -1,   217,   169,   218,    -1,   218,    -1,   174,    -1,   219,
     169,   220,    -1,   220,    -1,   175,   169,   175,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   314,   314,   317,   318,   321,   322,   323,   325,   326,
     328,   328,   329,   329,   330,   330,   332,   333,   334,   337,
     338,   339,   340,   340,   343,   344,   344,   347,   348,   348,
     349,   350,   350,   353,   354,   354,   355,   356,   356,   359,
     360,   361,   364,   365,   368,   369,   372,   374,   375,   376,
     377,   379,   380,   381,   382,   385,   386,   389,   390,   393,
     394,   397,   398,   406,   414,   424,   425,   428,   430,   432,
     435,   436,   437,   438,   439,   440,   443,   450,   457,   464,
     471,   478,   487,   490,   493,   496,   499,   512,   520,   528,
     535,   543,   550,   558,   559,   560,   561,   562,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   595,   596,   597,   598,
     599,   600,   601,   604,   605,   606,   609,   610,   611,   612,
     613,   614,   615,   616,   617,   618,   619,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   645,   646,
     649,   654,   659,   664,   665,   670,   675,   680,   685,   690,
     695,   696,   701,   708,   715,   720,   721,   725,   726,   727,
     736,   737,   738,   741,   748,   755,   762,   769,   776,   783,
     790,   796,   805,   810,   815,   820,   827,   873,   874,   877,
     878,   882,   887,   888,   889,   890,   891,   893,   894,   895,
     896,   898,   899,   900,   906,   912,   913,   914,   915,   916,
     917,   924,   925,   926,   927,   928,   931,   938,   945,   952,
     959,   966,   973,   980,   987,   996,  1001,  1006,  1011,  1018,
    1018,  1019,  1022,  1022,  1024,  1027,  1027,  1029,  1032,  1090,
    1091,  1092,  1093,  1094,  1095,  1096,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1114,  1115,
    1118,  1126,  1126,  1133,  1140,  1149,  1159,  1167,  1175,  1185,
    1192,  1200,  1223,  1246,  1255,  1255,  1262,  1262,  1270,  1278,
    1286,  1293,  1293,  1301,  1313,  1320,  1327,  1334,  1341,  1348,
    1355,  1362,  1371,  1381,  1389,  1396,  1406,  1414,  1424,  1434,
    1446,  1454,  1464,  1476,  1486,  1495,  1517,  1541,  1566,  1567,
    1568,  1570,  1572,  1582,  1583,  1586,  1589,  1590,  1593,  1600,
    1601,  1604,  1611,  1612,  1615,  1619
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
  "GLOBAL_", "GLYPH_", "HIGHLITE_", "ICRS_", "IGNORE_", "IMAGE_",
  "INCLUDE_", "J2000_", "KEY_", "LINE_", "LINEAR_", "MOVE_", "N_", "NO_",
  "NONE_", "OFF_", "ON_", "OPENARROW_", "OPENBOX_", "OPENCIRCLE_",
  "OPENTRIANGLE_", "PHYSICAL_", "PIE_", "PIXELS_", "POINT_", "POLYGON_",
  "PROJECTION_", "PROPERTY_", "ROTATE_", "ROTBOX_", "RULER_", "SEGMENT_",
  "SELECT_", "SOURCE_", "TAG_", "TEXT_", "TEXTANGLE_", "TEXTROTATE_",
  "TILE_", "TRIANGLE_", "TRUE_", "VECTOR_", "VERSION_", "UNHIGHLITE_",
  "UNSELECT_", "UPDATE_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_",
  "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_",
  "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_",
  "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WIDTH_",
  "X_", "Y_", "YES_", "'#'", "'\\n'", "';'", "','", "'('", "')'", "'|'",
  "'&'", "'='", "'+'", "'-'", "'!'", "$accept", "start", "commands",
  "command", "@1", "@2", "@3", "hash", "@4", "comment", "@5",
  "shapeComment", "@6", "@7", "nonshapeComment", "@8", "@9", "terminator",
  "numeric", "debug", "yesno", "sp", "bp", "ep", "conjunction", "optangle",
  "angle", "value", "vvalue", "numberof", "sexagesimal", "hms", "dms",
  "coord", "coordSystem", "wcsSystem", "skyFrame", "skyDist", "property",
  "callBack", "global", "globalProperty", "globalRuler", "globalCompass",
  "initGlobal", "local", "localProperty", "localRuler", "localCompass",
  "localCpanda", "@10", "localEpanda", "@11", "localBpanda", "@12",
  "initLocal", "pointShape", "lineEnd", "include", "nonshape", "@13",
  "shape", "@14", "@15", "@16", "polyNodes", "polyNode", "aRads", "aRad",
  "aAngs", "aAng", "vRads", "vRad", "postLocal", 0
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
     385,   386,   387,   388,   389,   390,    35,    10,    59,    44,
      40,    41,   124,    38,    61,    43,    45,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   148,   149,   150,   150,   151,   151,   151,   151,   151,
     152,   151,   153,   151,   154,   151,   151,   151,   151,   155,
     155,   155,   156,   155,   157,   158,   157,   159,   160,   159,
     159,   161,   159,   162,   163,   162,   162,   164,   162,   165,
     165,   165,   166,   166,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   172,   172,   173,   173,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   176,
     176,   176,   177,   178,   179,   180,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   182,   182,   182,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   184,
     184,   184,   184,   185,   185,   185,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   188,   188,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   191,   191,   192,   193,   193,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   196,   196,   196,   196,   198,
     197,   197,   200,   199,   199,   202,   201,   201,   203,   204,
     204,   204,   204,   204,   204,   204,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   206,   206,
     207,   208,   207,   207,   207,   207,   207,   207,   207,   209,
     209,   209,   209,   209,   210,   209,   211,   209,   209,   209,
     209,   212,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   213,   213,   214,   215,   215,   216,   217,
     217,   218,   219,   219,   220,   221
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
       3,     4,     4,     5,     4,     3,     3,     3,     3,     7,
       3,     3,     3,     4,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     0,     3,     1,     3,
       3,     4,     3,     3,     3,     3,     5,     1,     1,     1,
       1,     3,     4,     4,     5,     4,     3,     3,     3,     3,
       7,     3,     3,     3,     3,     3,     4,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     1,     1,     1,     0,
       7,     1,     0,    10,     1,     0,    10,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
      10,     0,     7,     6,     8,     8,    10,     8,     8,     8,
       8,    10,    10,    10,     0,     7,     0,     7,     8,    10,
       6,     0,     9,     6,     7,     7,     7,     7,     7,     7,
       7,     8,     8,    10,    10,    12,    12,    12,    14,    14,
      18,    12,    14,    14,    18,    18,    20,    20,    10,    12,
      12,     5,     8,     3,     1,     1,     3,     1,     1,     3,
       1,     1,     3,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     206,     0,   258,     1,    96,   127,     0,    95,   132,   126,
     128,   131,     0,   130,    93,   129,    14,    94,     0,     7,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   258,     0,
      10,    97,    12,     0,    45,    44,     6,   179,     0,     0,
       0,   176,     0,   144,   141,   177,   140,     0,     0,   137,
     145,     0,   142,     0,   143,     0,   136,   178,     0,     0,
       0,     0,     0,     0,     0,    55,   169,    24,     9,     0,
       2,    41,    39,    40,     4,    24,    24,    57,     0,    57,
       0,    57,    57,    57,    57,    57,    57,     0,     0,    57,
      57,    57,    57,    57,    57,   294,    57,    57,    57,   296,
      57,    57,     0,    22,   278,   279,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,     8,     0,    15,     3,
      11,    13,    58,     0,    57,    57,     0,    57,     0,    57,
       0,     0,     0,     0,     0,    57,    57,     0,     0,    59,
       0,     0,     0,    57,     0,     0,     0,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   281,    57,     0,    57,
      18,     0,     0,    19,    17,   171,   205,   203,   204,     0,
     186,     0,   188,   174,   266,   268,   277,   273,   270,   271,
     267,   269,   274,   272,   276,   275,     0,   264,   260,   265,
     259,   262,   261,     0,   263,   180,   134,   135,   133,     0,
     201,     0,     0,   200,   187,   175,    43,    42,    68,    69,
      67,   190,   191,   185,   192,   173,    46,    54,    52,    51,
      53,    49,    50,    48,    47,   170,     0,   168,    55,    55,
      55,    83,    84,    85,    55,    55,    55,    55,    55,     0,
       0,    55,     0,    55,     0,    55,    55,    55,    55,    55,
       0,     0,    55,    55,    60,    61,    55,    55,    59,     0,
      55,    55,    55,     0,    59,    55,     0,     0,     0,     0,
       0,     0,    57,     0,    21,     0,    23,    20,   202,     0,
     172,   184,     0,   182,   181,   198,   199,   194,     0,   195,
     196,   197,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    59,     0,    59,     0,    59,     0,     0,     0,
      65,     0,    59,    59,     0,     0,    62,     0,   345,     0,
       0,    61,   335,    55,   334,     0,     0,     0,    55,     0,
      61,     0,    59,    55,    55,    55,    55,    55,     0,    59,
      55,     0,   183,     0,    90,    92,    91,    89,    86,    87,
      88,    73,    74,    75,    71,    72,    70,    55,    61,    61,
      55,    55,    55,    55,    55,    55,    55,    61,    55,    61,
      59,    59,    59,    59,    66,    55,    61,    61,    55,    55,
      63,    64,    28,   331,    27,    59,    55,   345,     0,    61,
      55,    55,    59,    61,    59,   345,    55,    61,     0,     0,
      65,     0,     0,    59,    61,     0,     0,   193,     0,   345,
     345,     0,     0,     0,     0,     0,     0,    65,   345,     0,
     345,    61,    61,    61,    61,     0,   345,   345,    65,     0,
     220,     0,     0,     0,     0,     0,     0,   217,     0,     0,
     218,     0,     0,     0,     0,     0,   219,     0,     0,     0,
       0,     0,     0,     0,     0,    55,   208,    61,     0,   303,
     333,   345,     0,    65,    61,   345,   301,   300,     0,   345,
      59,    59,    59,    55,    59,    61,   345,    55,   189,    55,
     309,   305,    79,    80,    81,    77,    78,    76,    68,    67,
      59,    55,   310,    55,   304,   345,   345,   345,   345,    55,
     307,   306,    59,    55,    55,   255,     0,     0,     0,     0,
     249,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   345,     0,     0,     0,    30,   345,
      59,   295,    59,    59,   345,   297,    61,    59,   308,    61,
      61,    61,     0,    61,   345,   283,     0,    55,    33,     0,
       0,    61,    61,    65,     0,   289,   290,   312,   332,     0,
      61,    65,     0,   257,   235,     0,     0,   162,   160,   155,
       0,   165,   149,   166,   152,   164,   158,   147,   161,   150,
     148,   167,   163,     0,   210,   248,   246,   247,     0,   227,
     251,   233,     0,     0,   254,   234,     0,   229,   213,     0,
       0,   221,     0,   244,     0,     0,   243,   228,   215,   214,
     231,   232,   226,   212,    29,   209,   345,   207,   298,     0,
      61,    61,    61,   311,   345,    61,   345,   345,   345,    59,
     345,   282,   345,     0,    36,    59,     0,   338,    59,    55,
     337,   345,     0,   345,    73,    70,    59,    55,    55,    55,
     343,    55,    55,     0,   345,    59,    55,    55,    55,     0,
     154,   151,   157,   156,   153,   159,     0,   245,     0,     0,
     211,     0,   225,     0,   223,   222,   241,   242,   237,     0,
     238,   239,   240,    32,   341,    59,    59,   340,   345,   345,
     345,   302,   345,   287,   285,   288,    61,   284,    35,   345,
      61,     0,    61,     0,    61,   314,     0,   292,    61,     0,
      65,    65,     0,     0,     0,   291,    61,    65,    65,     0,
      55,   216,     0,    55,    55,   224,     0,    61,     0,    61,
     328,   313,   293,   299,   345,    38,   345,    82,   345,   336,
     345,    57,   345,   344,    59,    59,   342,    55,    55,    57,
     345,    59,    59,    55,     0,     0,     0,     0,   236,   345,
     339,   345,   286,   280,   316,   315,     0,   321,    61,    61,
       0,     0,     0,   317,    61,    61,     0,     0,   230,     0,
       0,   330,   329,    55,   345,   345,    55,    55,    55,   345,
     345,    55,    55,    55,    55,     0,   323,   322,     0,     0,
       0,   318,   319,     0,     0,     0,   250,     0,    55,    55,
      59,    55,    55,     0,     0,    65,    65,    61,    65,    65,
       0,     0,    59,    59,   345,    59,    59,   256,   253,   324,
      61,   325,   320,    61,   345,   345,   327,   326
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    49,    95,    96,    87,   190,   191,   146,
     256,   413,   483,   556,   575,   576,   663,    94,   264,    56,
     255,   758,   153,   285,   348,   403,   404,   677,   396,   668,
     265,   266,   267,   352,    50,    51,    52,   233,   484,   613,
      85,    86,   234,   199,     2,   577,   486,   637,   618,   621,
     622,   625,   626,   594,   595,    53,   225,   216,   126,   193,
     302,   127,   173,   177,   566,   353,   354,   669,   670,   716,
     717,   679,   680,   414
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -704
static const yytype_int16 yypact[] =
{
    -704,    47,  1657,  -704,  -704,  -704,    34,  -704,  -704,  -704,
    -704,  -704,  2498,  -704,  -704,  -704,  -704,  -704,    38,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  1416,    21,
    -704,  -704,  -704,  1531,  -704,  -704,  -704,  -704,   -89,   -86,
     -74,   -63,   -56,  -704,  -704,   -33,  -704,   -29,   -26,  -704,
    -704,   -22,  -704,   -19,  -704,   -14,  -704,    -7,    17,    33,
      45,    56,    64,    71,    91,    82,  -704,    67,  -704,    21,
    -704,  -704,  -704,  -704,  -704,    67,    67,    44,   157,   -40,
     159,    44,   -13,    44,    44,    44,    44,   165,   168,    44,
      44,    44,    44,    44,    44,  -704,    44,    44,    44,  -704,
      44,    44,   170,   437,  -704,  -704,  1772,  -704,   257,  2157,
     280,   287,   289,   291,   797,   356,  1809,   298,   352,   301,
     797,  2527,   309,   323,  -704,  -704,  -704,  2498,  -704,  -704,
    -704,  -704,  -704,   564,    44,    44,   564,    44,   564,    44,
     564,   564,   564,   564,   564,    44,    44,   564,   564,   158,
     564,   564,   564,    44,   564,   564,   564,    44,   564,   564,
      44,    44,    44,    44,    44,    44,  -704,    44,   311,    44,
    -704,   313,    40,  -704,  -704,  -704,  -704,   296,  -704,   314,
    -704,   318,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,   797,  -704,  -704,  -704,
    -704,  -704,  -704,    41,  -704,   324,  -704,  -704,  -704,  1126,
    -704,  2041,  1126,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,   325,  -704,   189,   189,
     189,  -704,  -704,  -704,   189,   189,   189,   189,   189,   564,
     564,   189,   564,   189,   564,   189,   189,   189,   189,   189,
     564,   564,   189,   189,  -704,    29,   189,   189,   158,   564,
     189,   189,   189,   564,     4,   189,   564,   564,   564,   564,
     564,   564,    44,   564,  -704,   564,  -704,  -704,  -704,   338,
    -704,  -704,   342,  -704,  -704,  -704,  -704,  -704,  2389,  -704,
    -704,  -704,  -704,   346,   319,   355,   143,   357,   353,   353,
     537,   158,   158,   825,   158,   352,   158,   537,   537,   537,
     352,   352,   158,   158,   825,   352,   226,   227,   237,   564,
     352,    29,  -704,   150,  -704,   564,   825,   564,   150,   372,
      29,   537,   158,   189,   189,   189,   189,   189,   564,   158,
     189,   797,  -704,    59,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,   189,    29,    29,
     189,   189,   189,   189,   189,   189,   189,    29,   189,    29,
     158,   158,   158,   158,  -704,   189,    29,    29,   189,   189,
    -704,  -704,  2391,  -704,  -704,   158,   189,   237,   564,    29,
     189,   189,   158,    29,   158,   237,   189,    29,   537,   537,
     352,   564,   564,    92,    29,   537,   797,  -704,   537,   237,
     237,   374,   370,   375,   373,   376,   143,   625,   237,   352,
     237,    29,    29,    29,    29,   352,   237,   237,   625,   352,
    -704,   241,   244,   246,   247,   251,   254,   -63,   258,   259,
     -33,   261,   263,   266,   267,   268,    -7,   269,   272,   276,
     279,   281,   282,   396,   288,    75,  -704,    29,   352,  -704,
    -704,   237,   537,   352,    29,   237,  -704,  -704,   352,   237,
     158,   158,   158,   189,   158,    29,  1599,   189,  -704,   150,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,    24,    31,
     158,   189,  -704,   189,  -704,   237,   237,   237,   237,   189,
    -704,  -704,   158,   189,   189,   369,   921,   432,  2273,   440,
     378,   444,   392,   450,   451,   797,   536,  1925,   456,   457,
     352,   460,   797,   461,  -704,   323,   467,  2391,  -704,   237,
      46,  -704,   158,   158,   237,  -704,    29,   158,  -704,    29,
      29,    29,   537,    29,  1599,  -704,   468,   126,  -704,   352,
     474,    29,    53,   146,   462,  -704,  -704,  -704,  -704,   471,
      80,   146,   476,  -704,  -704,   341,    48,  -704,  -704,  -704,
     198,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,   481,  -704,  -704,   296,  -704,   482,  -704,
    -704,  -704,   350,   488,  -704,  -704,   354,  -704,  -704,   797,
      60,   490,  1126,  -704,  2041,  1126,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   294,
      29,    29,    29,  -704,   237,    29,  1599,  1599,  1599,   158,
    1599,  -704,  -704,   492,  -704,   158,   358,  -704,   158,   150,
    -704,   237,   -81,   237,   133,   196,   158,   189,   189,   189,
    -704,   189,   189,   -71,   237,   158,   189,   189,   189,   352,
    -704,  -704,  -704,  -704,  -704,  -704,   493,  -704,   495,   352,
    -704,   352,  -704,   496,  -704,  -704,  -704,  -704,  -704,  2389,
    -704,  -704,  -704,  -704,  -704,   158,    25,  -704,   237,   237,
     237,  -704,   237,  -704,  -704,  -704,    29,  -704,  -704,  -704,
      29,   500,    29,   537,    29,  -704,   480,  -704,    29,   537,
     352,   634,   825,   537,   463,  -704,    29,   352,   634,   825,
     -47,  -704,   797,     3,    28,  -704,    59,    29,   352,    29,
    -704,  -704,  -704,  -704,  1599,  -704,  1599,  -704,   237,  -704,
     237,    44,   237,  -704,   158,   158,  -704,   189,   189,    44,
     237,   158,   158,   189,   366,   797,   371,   377,  -704,   237,
    -704,   237,  -704,  -704,  -704,  -704,   564,  -704,    29,    29,
     825,   537,   564,  -704,    29,    29,   825,   537,  -704,   537,
     537,  -704,  -704,   189,   237,   237,   189,   189,   189,   237,
     237,   189,    37,    89,    93,   825,  -704,  -704,   509,   511,
     825,  -704,  -704,   515,   379,   537,  -704,   382,   189,   189,
     158,   189,   189,   352,   352,   352,   352,    29,   352,   352,
     383,   386,   158,   158,   237,   158,   158,  -704,  -704,  -704,
      29,  -704,  -704,    29,   237,   237,  -704,  -704
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -704,  -704,  -704,   475,  -704,  -704,  -704,  -704,  -704,   149,
    -704,   637,  -704,  -704,  -537,  -704,  -704,   443,   -84,  -704,
     -20,   -85,   -98,   508,   540,   -41,   100,  -113,  -296,  -540,
     210,  -704,   -70,   616,  -119,   398,   -96,  -205,    13,  -704,
    -704,   405,  -704,  -704,  -704,   142,     0,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,    12,   -76,   441,   368,
    -704,   445,  -704,  -704,  -704,  -254,   145,  -240,  -160,  -563,
    -178,  -570,  -703,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -346
static const yytype_int16 yytable[] =
{
     147,   156,    90,   158,   160,   161,   162,   163,   164,   -55,
     197,   167,   168,   169,   170,   171,   172,   231,   174,   175,
     176,   687,   178,   179,   316,    84,   319,   321,   -55,   -55,
     -55,   -55,   -55,   198,   -55,   -55,    91,   661,   776,   358,
     232,    88,   155,   678,   312,   776,   313,     3,   408,   -55,
     -55,   686,   -55,   -55,   240,   128,   269,   270,   129,   272,
     421,   274,   411,   703,   243,   704,   736,   280,   281,   159,
     130,   181,   411,   182,   183,   289,   744,   226,   227,   293,
     -31,  -138,   296,   297,   298,   299,   300,   301,   131,   303,
    -345,   305,   145,   690,   784,   -55,   -55,   -24,   -55,   228,
     152,   308,   -55,   -55,   -55,   -55,   -55,    54,    55,   715,
     315,  -139,   317,   320,   433,   132,   -55,   691,   133,   723,
     724,   725,   134,   727,   184,   135,   750,   152,   185,   186,
     136,   -37,   776,   187,   692,   318,   753,  -146,   754,   189,
     311,  -345,   145,   145,   786,   284,   236,   237,   -68,   236,
     237,   521,   674,   239,   382,   383,   384,   385,    92,    93,
      84,   137,   533,   145,   145,   -59,   284,   145,   437,   787,
     145,   346,   347,   323,   324,   325,   145,   138,   834,   326,
     327,   328,   329,   330,   152,   145,   333,   284,   335,   139,
     337,   338,   339,   340,   341,   346,   672,   344,   345,   373,
     140,   349,   350,   144,   368,   355,   356,   357,   141,   359,
     361,   -67,  -345,  -345,   145,   142,   666,   387,   144,   -24,
     -24,   145,   346,   683,   400,   401,   402,   792,   145,   793,
     836,   145,   145,   284,   837,   143,   148,   822,   241,   154,
     824,   157,   377,   693,   150,   151,   386,   165,   426,   395,
     166,   240,   180,   386,   386,   386,   240,   240,   379,   380,
     395,   240,   195,  -345,  -345,   145,   240,   694,   418,   -68,
     -68,   -68,   395,   418,   -68,   -68,   -68,   386,   428,   429,
     430,   431,   432,   200,   695,   435,   -59,   -59,   -59,   145,
     201,   284,   -59,   -59,   202,   436,   203,   236,   237,   284,
     238,   239,   438,   235,   242,   441,   442,   443,   444,   445,
     446,   447,   245,   449,   304,   500,   501,     5,   306,   309,
     455,   310,   507,   458,   459,   509,   246,   314,   145,   375,
     322,   488,   -67,   -67,   -67,   492,   493,   -67,   -67,   -67,
       8,   498,   636,   371,   386,   386,   240,   372,   418,     9,
      10,   386,   374,    11,   386,   236,   237,    13,   238,   239,
     508,    15,   517,   519,   666,   240,   376,   263,   410,   261,
     411,   240,   247,   412,   519,   240,   217,   424,   513,   562,
     512,   218,   219,   515,   514,   535,   220,   516,   536,   502,
     537,   538,   221,   248,   249,   539,   250,   251,   540,   222,
     557,   554,   541,   542,   240,   543,   520,   544,   386,   240,
     545,   546,   547,   548,   240,   223,   549,   532,   572,   616,
     550,   252,   579,   551,   580,   552,   553,   707,   634,   710,
     712,   593,   555,   441,   446,   398,   583,   614,   584,   558,
     620,   405,   617,   619,   589,   409,   777,   623,   591,   592,
     416,   635,   563,   783,   624,   627,   628,   253,   254,   659,
     578,   638,   639,   641,   643,   681,   240,   667,   181,   629,
     182,   183,   646,   662,   682,   649,   642,   236,   237,   688,
     381,   689,   382,   383,   384,   385,   696,   698,   386,   224,
     699,   700,   557,   705,   701,   240,   386,   729,   751,   675,
     752,   755,   731,   767,   816,   771,   807,   675,   644,   779,
     821,   809,   839,   706,   840,   708,   711,   810,   842,   843,
     697,   184,   844,    89,   857,   185,   186,   858,   578,   838,
     187,   664,   149,   188,   841,   645,   189,   378,   709,   244,
     236,   237,   676,   381,   666,   382,   383,   384,   385,   523,
     685,   788,   257,   702,   485,   529,   217,   647,   631,   534,
     307,   218,   219,   490,   192,   240,   220,   236,   237,   823,
     258,   194,   221,   769,   259,   260,   261,   262,   263,   222,
     790,     0,   124,   125,   733,     0,     0,     0,   560,     0,
     756,     0,   739,   740,   741,   630,   742,   743,   567,     0,
     713,   747,   748,   749,     0,   240,     0,     0,     0,     0,
     578,   578,   578,     0,   578,   240,   728,   240,     0,     0,
     667,     0,     0,     0,     0,     0,   773,     0,   236,   237,
     778,   518,   239,   391,   392,   393,   394,   236,   237,     0,
     674,   239,   382,   383,   384,   385,     0,     0,     0,   386,
     640,     0,     0,     0,     0,   386,   240,   675,   395,   386,
       0,     0,     0,   240,   675,   395,     0,     0,     0,   224,
       0,     0,     0,   796,   240,     0,   785,     0,     0,   665,
       0,   802,     0,   765,     0,     0,     0,     0,   817,     0,
       0,     0,   800,   801,     0,     0,   667,     0,   806,   774,
     775,     0,     0,     0,     0,     0,   781,   782,     0,   808,
       0,     0,     0,     0,     0,     0,   395,   386,   578,     0,
     578,     0,   395,   386,     0,   386,   386,     0,   825,     0,
       0,   828,   829,   830,     0,     0,   833,   835,   733,   835,
       0,   395,     0,     0,     0,     0,   395,     0,     0,   714,
       0,   386,     0,   845,   846,     0,   848,   849,     0,   240,
     240,   240,   240,     0,   240,   240,     0,     0,     0,   268,
       0,     0,   271,     0,   273,     0,   275,   276,   277,   278,
     279,     0,     0,   282,   283,     0,   286,   287,   288,   714,
     290,   291,   292,     0,   294,   295,   351,     0,     0,   714,
     204,   714,   360,     0,   852,   853,     0,   855,   856,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,   206,
       0,     0,   207,     0,     0,     0,   208,   209,   236,   237,
       0,   390,     0,   391,   392,   393,   394,     0,     0,   388,
     389,     0,   397,     0,   399,     0,     0,     0,     0,     0,
     406,   407,     0,     0,     0,     0,     0,     0,   714,     0,
       0,   419,     0,     0,     0,     0,   423,     0,     0,   210,
     427,     0,   211,   212,   213,   214,     0,   434,     0,     0,
       0,     0,     0,     0,     0,   331,   332,     0,   334,     0,
     336,   417,     0,     0,   215,     0,   342,   343,     0,     0,
     425,     0,     0,     0,     0,     0,     0,     0,   451,   452,
     453,   454,   362,   363,   364,   365,   366,   367,     0,   369,
       0,   370,     0,   487,     0,     0,     0,     0,   439,   440,
     494,     0,   496,     0,     0,     0,     0,   448,     0,   450,
       0,   505,     0,   850,   851,   596,   456,   457,     0,     0,
       0,     0,     0,   597,     0,     0,     0,     0,     0,   491,
       0,     0,   598,   495,     0,   415,   599,   499,   600,     0,
       0,   420,     0,   422,   506,     0,     0,   601,     0,     0,
       0,   602,     0,     0,     0,     0,     0,   603,     0,     0,
     604,   525,   526,   527,   528,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   605,   606,   569,   570,
     571,   607,   573,     0,   608,     0,     0,   581,     0,     0,
       0,     0,   609,   610,   611,     0,     0,   559,   582,     0,
       0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
     590,     0,     0,     0,     0,   574,     0,   503,   504,     0,
       0,     0,     0,   612,   489,     0,     0,     0,     0,     0,
       0,     0,   497,     0,     0,     0,     0,     0,   650,     0,
     651,   652,     0,     0,     0,   655,   510,   511,     0,     0,
       0,     0,     0,     0,     0,   522,     0,   524,     0,     0,
       0,     0,     0,   530,   531,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   654,     0,     0,   656,
     657,   658,     0,   660,     0,     0,     0,     0,     0,     0,
       0,   671,   673,     0,     0,     0,     0,     0,   561,     0,
     684,     0,   565,     0,     0,     0,   568,     0,     0,     0,
       0,     0,     4,     0,   226,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   585,   586,   587,   588,   228,   726,     7,     0,
       0,     0,     0,   730,     0,     0,   732,   734,     0,     0,
       0,     0,     0,     0,   738,     0,     0,     0,     0,    14,
     718,   719,   720,   746,     0,   722,   648,     0,     0,     0,
       0,   653,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,   759,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,     0,
     766,     0,   768,     0,   770,     0,     0,     0,   772,     0,
       0,     0,   798,   799,     0,     0,   780,     0,     0,   804,
     805,   721,     0,     0,     0,     0,     0,   789,     0,   791,
       0,     0,     0,     0,     0,     0,     0,     0,   735,     0,
     737,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   745,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   814,   815,
       0,     0,     0,     0,   819,   820,     0,     0,   847,     0,
       0,     0,     0,     0,     0,   760,   761,   762,     0,   763,
     859,   860,     0,   862,   863,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   854,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     864,     0,     0,   865,     0,   794,     0,   795,     0,   797,
       0,     0,   813,     0,     0,     0,  -345,   803,   818,     0,
       0,     0,     0,     0,     0,     0,   811,     0,   812,     0,
       0,    -5,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   826,   827,     0,     0,     6,   831,   832,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,     0,    11,    12,     0,     0,    13,     0,    14,
       0,    15,     0,     0,    16,     0,     0,     0,     0,     0,
       0,   861,     0,     0,     0,    17,     0,     0,     0,     0,
       0,   866,   867,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    97,     0,
       0,    98,     0,    -5,    -5,     0,    99,   100,   101,     0,
       0,   102,   103,     0,   104,   105,   106,   107,     0,     0,
       0,     0,     0,     0,   108,     0,     0,   109,     0,   110,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,   -34,     0,     0,     0,     0,     0,
       0,   113,     0,   114,   115,   116,     0,     0,   117,   118,
     119,     0,   460,     0,   120,     0,   461,   462,     0,     0,
     121,   463,   464,   465,   466,     0,   467,   468,     0,     0,
      63,     0,     0,     0,    64,     0,     0,   469,     0,     0,
     470,    66,     0,     0,   471,   472,     0,     0,     0,    69,
       0,     0,     0,    70,   122,     0,   473,   123,    72,     0,
       0,     0,    -5,     4,     0,     0,   124,   125,     5,     0,
       0,   474,     0,     0,     0,    74,     0,   475,     0,    76,
     476,   477,   478,   479,   480,     0,     6,     0,   481,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,    11,    12,     0,     0,    13,     0,
      14,     0,    15,     0,     0,    16,     0,     0,     0,     0,
       0,   482,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    97,
       0,     0,    98,     0,    -5,    -5,     0,    99,   100,   101,
       0,     0,   102,   103,     0,   104,   105,   106,   107,     0,
       0,     0,     0,     0,     0,   108,     0,     0,   109,     0,
     110,     0,   111,     0,     0,     4,     0,   226,   227,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   228,
       0,     7,   113,     8,   114,   115,   116,     0,     0,   117,
     118,   119,     9,    10,     0,   120,    11,     0,     0,     0,
      13,   121,    14,     0,    15,     0,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
     230,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,     0,   226,   227,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,     0,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
       0,     0,    11,     0,     0,     0,    13,     0,    14,     0,
      15,     0,     0,   632,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,   633,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     4,     0,   226,
     227,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   228,     0,     7,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,     0,     0,    11,     0,
       0,     0,    13,     0,    14,     0,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,     0,     0,    11,     0,     0,     0,    13,     0,
      14,     0,    15,     0,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
      11,     0,     0,     0,    13,     0,    14,     0,    15,     0,
       0,   615,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,     0,     0,     0,     0,
       0,     0,     0,     0,   460,     0,     0,     0,   461,   462,
       0,     0,     0,   463,   464,   465,   466,     0,   467,   468,
       0,     7,    63,     0,     0,     0,    64,     0,     0,   469,
       0,     0,   470,    66,     0,     0,   471,   472,     0,     0,
       0,    69,    14,     0,     0,    70,     0,     0,   473,     0,
      72,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,   474,     0,     0,     0,    74,     0,   475,
       0,    76,   476,   477,   478,   479,   480,     0,     0,     0,
     481,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    57,     0,   482,     0,     0,     0,     0,     0,     0,
      58,    59,    60,     0,     0,    61,    62,     0,     0,    63,
       0,     0,     0,    64,     0,     0,     0,     0,     0,    65,
      66,     0,     0,    67,    68,     0,     0,     0,    69,     0,
       0,     0,    70,     0,     0,    71,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,     0,    74,     0,    75,     0,    76,    77,
       0,    78,    79,    80,     0,     0,     0,    81,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      85,    99,    48,   101,   102,   103,   104,   105,   106,     5,
     129,   109,   110,   111,   112,   113,   114,   136,   116,   117,
     118,   591,   120,   121,   229,    12,   231,   232,     3,     4,
       6,     6,     7,   129,     3,     4,    15,   574,   741,   293,
     136,     3,    82,   583,     3,   748,     5,     0,   344,     3,
       4,   591,     6,     7,   138,   144,   154,   155,   144,   157,
     356,   159,   143,     3,   140,     5,   147,   165,   166,    82,
     144,    31,   143,    33,    34,   173,   147,    18,    19,   177,
       5,   144,   180,   181,   182,   183,   184,   185,   144,   187,
      15,   189,   139,    45,   141,     3,     4,    15,     6,    40,
     140,   197,    10,    11,    12,    13,    14,    73,    74,   649,
     229,   144,   231,   232,   368,   144,    70,    69,   144,   656,
     657,   658,   144,   660,    84,   144,   689,   140,    88,    89,
     144,     5,   835,    93,    86,   231,   699,   144,   701,    99,
     216,    15,   139,   139,   141,   141,     3,     4,    15,     3,
       4,   447,     6,     7,     8,     9,    10,    11,   137,   138,
     147,   144,   458,   139,   139,    15,   141,   139,   373,   141,
     139,   142,   143,   258,   259,   260,   139,   144,   141,   264,
     265,   266,   267,   268,   140,   139,   271,   141,   273,   144,
     275,   276,   277,   278,   279,   142,   143,   282,   283,   318,
     144,   286,   287,   136,   302,   290,   291,   292,   144,   294,
     295,    15,   137,   138,   139,   144,    70,   330,   136,   137,
     138,   139,   142,   143,   337,   338,   339,   764,   139,   766,
     141,   139,   139,   141,   141,   144,    87,   807,   138,    82,
     810,    82,   326,    45,    95,    96,   330,    82,   361,   333,
      82,   335,    82,   337,   338,   339,   340,   341,   328,   329,
     344,   345,     5,   137,   138,   139,   350,    69,   353,   136,
     137,   138,   356,   358,   141,   142,   143,   361,   363,   364,
     365,   366,   367,     3,    86,   370,   136,   137,   138,   139,
       3,   141,   142,   143,     5,   371,     5,     3,     4,   141,
       6,     7,   387,     5,     3,   390,   391,   392,   393,   394,
     395,   396,     3,   398,     3,   428,   429,    21,     5,     5,
     405,     3,   435,   408,   409,   438,     3,     3,   139,    10,
       5,   416,   136,   137,   138,   420,   421,   141,   142,   143,
      44,   426,   547,     5,   428,   429,   430,     5,   433,    53,
      54,   435,     6,    57,   438,     3,     4,    61,     6,     7,
     436,    65,   446,   447,    70,   449,    11,    14,   142,    12,
     143,   455,    49,   136,   458,   459,    20,     5,     8,   492,
       6,    25,    26,    10,     9,   144,    30,    11,   144,   430,
     144,   144,    36,    70,    71,   144,    73,    74,   144,    43,
     485,     5,   144,   144,   488,   144,   447,   144,   492,   493,
     144,   144,   144,   144,   498,    59,   144,   458,   503,   538,
     144,    98,   507,   144,   509,   144,   144,   632,   547,   634,
     635,    62,   144,   518,   519,   335,   521,     5,   523,   485,
      62,   341,   538,     3,   529,   345,   742,     3,   533,   534,
     350,   547,   493,   749,    62,     5,     5,   134,   135,   572,
     506,     5,     5,     3,     3,     3,   550,   580,    31,   545,
      33,    34,     5,     5,     3,   560,   552,     3,     4,     3,
       6,   140,     8,     9,    10,    11,     5,     5,   572,   133,
     140,     3,   577,     3,   140,   579,   580,     5,     5,   583,
       5,     5,   144,     3,   800,    25,   140,   591,   554,    46,
     806,   140,     3,   632,     3,   634,   635,   140,     3,   140,
     616,    84,   140,    48,   141,    88,    89,   141,   574,   825,
      93,   577,    89,    96,   830,   555,    99,   327,   634,   141,
       3,     4,   583,     6,    70,     8,     9,    10,    11,   449,
     591,   756,   147,   629,   412,   455,    20,   557,   546,   459,
     192,    25,    26,   418,   123,   649,    30,     3,     4,   809,
       6,   126,    36,   733,    10,    11,    12,    13,    14,    43,
     758,    -1,   145,   146,   669,    -1,    -1,    -1,   488,    -1,
     709,    -1,   677,   678,   679,    59,   681,   682,   498,    -1,
     646,   686,   687,   688,    -1,   689,    -1,    -1,    -1,    -1,
     656,   657,   658,    -1,   660,   699,   662,   701,    -1,    -1,
     733,    -1,    -1,    -1,    -1,    -1,   739,    -1,     3,     4,
     743,     6,     7,     8,     9,    10,    11,     3,     4,    -1,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,   733,
     550,    -1,    -1,    -1,    -1,   739,   740,   741,   742,   743,
      -1,    -1,    -1,   747,   748,   749,    -1,    -1,    -1,   133,
      -1,    -1,    -1,   771,   758,    -1,   752,    -1,    -1,   579,
      -1,   779,    -1,   729,    -1,    -1,    -1,    -1,   801,    -1,
      -1,    -1,   777,   778,    -1,    -1,   809,    -1,   783,   740,
     741,    -1,    -1,    -1,    -1,    -1,   747,   748,    -1,   785,
      -1,    -1,    -1,    -1,    -1,    -1,   800,   801,   764,    -1,
     766,    -1,   806,   807,    -1,   809,   810,    -1,   813,    -1,
      -1,   816,   817,   818,    -1,    -1,   821,   822,   823,   824,
      -1,   825,    -1,    -1,    -1,    -1,   830,    -1,    -1,   649,
      -1,   835,    -1,   838,   839,    -1,   841,   842,    -1,   843,
     844,   845,   846,    -1,   848,   849,    -1,    -1,    -1,   153,
      -1,    -1,   156,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,    -1,   170,   171,   172,   689,
     174,   175,   176,    -1,   178,   179,   288,    -1,    -1,   699,
       3,   701,   294,    -1,   845,   846,    -1,   848,   849,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    29,    30,     3,     4,
      -1,     6,    -1,     8,     9,    10,    11,    -1,    -1,   331,
     332,    -1,   334,    -1,   336,    -1,    -1,    -1,    -1,    -1,
     342,   343,    -1,    -1,    -1,    -1,    -1,    -1,   758,    -1,
      -1,   353,    -1,    -1,    -1,    -1,   358,    -1,    -1,    72,
     362,    -1,    75,    76,    77,    78,    -1,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,   270,    -1,   272,    -1,
     274,   351,    -1,    -1,    97,    -1,   280,   281,    -1,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   400,   401,
     402,   403,   296,   297,   298,   299,   300,   301,    -1,   303,
      -1,   305,    -1,   415,    -1,    -1,    -1,    -1,   388,   389,
     422,    -1,   424,    -1,    -1,    -1,    -1,   397,    -1,   399,
      -1,   433,    -1,   843,   844,    24,   406,   407,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,   419,
      -1,    -1,    41,   423,    -1,   349,    45,   427,    47,    -1,
      -1,   355,    -1,   357,   434,    -1,    -1,    56,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,   451,   452,   453,   454,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,   500,   501,
     502,    90,   504,    -1,    93,    -1,    -1,   509,    -1,    -1,
      -1,    -1,   101,   102,   103,    -1,    -1,   487,   520,    -1,
      -1,    -1,    -1,    -1,   494,    -1,    -1,    -1,    -1,    -1,
     532,    -1,    -1,    -1,    -1,   505,    -1,   431,   432,    -1,
      -1,    -1,    -1,   132,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,   560,    -1,
     562,   563,    -1,    -1,    -1,   567,   439,   440,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   448,    -1,   450,    -1,    -1,
      -1,    -1,    -1,   456,   457,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   566,    -1,    -1,   569,
     570,   571,    -1,   573,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   581,   582,    -1,    -1,    -1,    -1,    -1,   491,    -1,
     590,    -1,   495,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   525,   526,   527,   528,    40,   659,    42,    -1,
      -1,    -1,    -1,   665,    -1,    -1,   668,   669,    -1,    -1,
      -1,    -1,    -1,    -1,   676,    -1,    -1,    -1,    -1,    63,
     650,   651,   652,   685,    -1,   655,   559,    -1,    -1,    -1,
      -1,   564,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   715,   716,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   726,    -1,    -1,    -1,
     730,    -1,   732,    -1,   734,    -1,    -1,    -1,   738,    -1,
      -1,    -1,   774,   775,    -1,    -1,   746,    -1,    -1,   781,
     782,   654,    -1,    -1,    -1,    -1,    -1,   757,    -1,   759,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   671,    -1,
     673,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   798,   799,
      -1,    -1,    -1,    -1,   804,   805,    -1,    -1,   840,    -1,
      -1,    -1,    -1,    -1,    -1,   718,   719,   720,    -1,   722,
     852,   853,    -1,   855,   856,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   847,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     860,    -1,    -1,   863,    -1,   768,    -1,   770,    -1,   772,
      -1,    -1,   796,    -1,    -1,    -1,     0,   780,   802,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   789,    -1,   791,    -1,
      -1,    15,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   814,   815,    -1,    -1,    39,   819,   820,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,    63,
      -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,   854,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,   864,   865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,   100,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    17,    -1,
      -1,    20,    -1,   137,   138,    -1,    25,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    -1,    -1,    87,    88,
      89,    -1,    23,    -1,    93,    -1,    27,    28,    -1,    -1,
      99,    32,    33,    34,    35,    -1,    37,    38,    -1,    -1,
      41,    -1,    -1,    -1,    45,    -1,    -1,    48,    -1,    -1,
      51,    52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,   133,    -1,    67,   136,    69,    -1,
      -1,    -1,    15,    16,    -1,    -1,   145,   146,    21,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    88,    -1,    90,
      91,    92,    93,    94,    95,    -1,    39,    -1,    99,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,   100,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    17,
      -1,    -1,    20,    -1,   137,   138,    -1,    25,    26,    27,
      -1,    -1,    30,    31,    -1,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    50,    -1,    -1,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    42,    80,    44,    82,    83,    84,    -1,    -1,    87,
      88,    89,    53,    54,    -1,    93,    57,    -1,    -1,    -1,
      61,    99,    63,    -1,    65,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    63,    -1,
      65,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,
      -1,    -1,    61,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    16,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,
      63,    -1,    65,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    -1,    37,    38,
      -1,    42,    41,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    -1,
      -1,    60,    63,    -1,    -1,    64,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    88,
      -1,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      99,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,    23,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    -1,    37,    38,    -1,    -1,    41,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    56,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   149,   192,     0,    16,    21,    39,    42,    44,    53,
      54,    57,    58,    61,    63,    65,    68,    79,    96,   100,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   150,   151,
     182,   183,   184,   203,    73,    74,   167,    23,    32,    33,
      34,    37,    38,    41,    45,    51,    52,    55,    56,    60,
      64,    67,    69,    82,    86,    88,    90,    91,    93,    94,
      95,    99,   104,   132,   186,   188,   189,   154,     3,   151,
     221,    15,   137,   138,   165,   152,   153,    17,    20,    25,
      26,    27,    30,    31,    33,    34,    35,    36,    43,    46,
      48,    50,    67,    80,    82,    83,    84,    87,    88,    89,
      93,    99,   133,   136,   145,   146,   206,   209,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   136,   139,   157,   169,   157,   165,
     157,   157,   140,   170,    82,    82,   170,    82,   170,    82,
     170,   170,   170,   170,   170,    82,    82,   170,   170,   170,
     170,   170,   170,   210,   170,   170,   170,   211,   170,   170,
      82,    31,    33,    34,    84,    88,    89,    93,    96,    99,
     155,   156,   206,   207,   209,     5,    68,   182,   184,   191,
       3,     3,     5,     5,     3,    20,    22,    25,    29,    30,
      72,    75,    76,    77,    78,    97,   205,    20,    25,    26,
      30,    36,    43,    59,   133,   204,    18,    19,    40,    68,
      81,   182,   184,   185,   190,     5,     3,     4,     6,     7,
     166,   174,     3,   205,   183,     3,     3,    49,    70,    71,
      73,    74,    98,   134,   135,   168,   158,   189,     6,    10,
      11,    12,    13,    14,   166,   178,   179,   180,   181,   170,
     170,   181,   170,   181,   170,   181,   181,   181,   181,   181,
     170,   170,   181,   181,   141,   171,   181,   181,   181,   170,
     181,   181,   181,   170,   181,   181,   170,   170,   170,   170,
     170,   170,   208,   170,     3,   170,     5,   207,   184,     5,
       3,   205,     3,     5,     3,   182,   185,   182,   184,   185,
     182,   185,     5,   169,   169,   169,   169,   169,   169,   169,
     169,   181,   181,   169,   181,   169,   181,   169,   169,   169,
     169,   169,   181,   181,   169,   169,   142,   143,   172,   169,
     169,   171,   181,   213,   214,   169,   169,   169,   213,   169,
     171,   169,   181,   181,   181,   181,   181,   181,   170,   181,
     181,     5,     5,   182,     6,    10,    11,   166,   178,   180,
     180,     6,     8,     9,    10,    11,   166,   175,   171,   171,
       6,     8,     9,    10,    11,   166,   176,   171,   174,   171,
     175,   175,   175,   173,   174,   174,   171,   171,   176,   174,
     142,   143,   136,   159,   221,   181,   174,   172,   169,   171,
     181,   176,   181,   171,     5,   172,   175,   171,   169,   169,
     169,   169,   169,   213,   171,   169,   205,   185,   169,   172,
     172,   169,   169,   169,   169,   169,   169,   169,   172,   169,
     172,   171,   171,   171,   171,   169,   172,   172,   169,   169,
      23,    27,    28,    32,    33,    34,    35,    37,    38,    48,
      51,    55,    56,    67,    82,    88,    91,    92,    93,    94,
      95,    99,   132,   160,   186,   193,   194,   171,   169,   159,
     214,   172,   169,   169,   171,   172,   171,   159,   169,   172,
     175,   175,   173,   181,   181,   171,   172,   175,   205,   175,
     159,   159,     6,     8,     9,    10,    11,   166,     6,   166,
     173,   176,   159,   174,   159,   172,   172,   172,   172,   174,
     159,   159,   173,   176,   174,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,     5,   144,   161,   169,   221,   172,
     174,   159,   175,   173,   172,   159,   212,   174,   159,   171,
     171,   171,   169,   171,   172,   162,   163,   193,   221,   169,
     169,   171,   171,   169,   169,   159,   159,   159,   159,   169,
     171,   169,   169,    62,   201,   202,    24,    32,    41,    45,
      47,    56,    60,    66,    69,    85,    86,    90,    93,   101,
     102,   103,   132,   187,     5,    68,   182,   184,   196,     3,
      62,   197,   198,     3,    62,   199,   200,     5,     5,   205,
      59,   204,    68,    81,   182,   184,   185,   195,     5,     5,
     174,     3,   205,     3,   221,   168,     5,   194,   159,   169,
     171,   171,   171,   159,   172,   171,   172,   172,   172,   175,
     172,   162,     5,   164,   221,   174,    70,   175,   177,   215,
     216,   172,   143,   172,     6,   166,   173,   175,   177,   219,
     220,     3,     3,   143,   172,   173,   177,   219,     3,   140,
      45,    69,    86,    45,    69,    86,     5,   184,     5,   140,
       3,   140,   205,     3,     5,     3,   182,   185,   182,   184,
     185,   182,   185,   221,   174,   177,   217,   218,   172,   172,
     172,   159,   172,   162,   162,   162,   171,   162,   221,     5,
     171,   144,   171,   169,   171,   159,   147,   159,   171,   169,
     169,   169,   169,   169,   147,   159,   171,   169,   169,   169,
     217,     5,     5,   217,   217,     5,   182,   171,   169,   171,
     159,   159,   159,   159,   172,   221,   172,     3,   172,   216,
     172,    25,   172,   175,   173,   173,   220,   176,   175,    46,
     172,   173,   173,   176,   141,   205,   141,   141,   185,   172,
     218,   172,   162,   162,   159,   159,   170,   159,   171,   171,
     169,   169,   170,   159,   171,   171,   169,   140,   205,   140,
     140,   159,   159,   181,   172,   172,   176,   175,   181,   172,
     172,   176,   219,   215,   219,   169,   159,   159,   169,   169,
     169,   159,   159,   169,   141,   169,   141,   141,   176,     3,
       3,   176,     3,   140,   140,   169,   169,   171,   169,   169,
     174,   174,   173,   173,   172,   173,   173,   141,   141,   171,
     171,   159,   171,   171,   172,   172,   159,   159
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
#line 323 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 326 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 328 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 329 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 330 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::ICRS;;}
    break;

  case 21:
#line 339 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 340 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 344 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 348 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 348 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 350 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 350 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 354 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 354 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 356 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 356 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 361 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 364 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 365 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 368 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 369 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 372 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 374 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 375 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 376 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 377 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 379 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 380 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 381 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 382 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 397 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 399 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 63:
#line 407 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 2) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 1;
	;}
    break;

  case 64:
#line 415 "frame/ds9parser.Y"
    {
	  if (compositeOperation == 1) {
	    mkerror(fr,ll,"cannot mix || and && in a composite region");
	    YYERROR;
	  }
	  cStatus = 2;
	;}
    break;

  case 65:
#line 424 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 66:
#line 425 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 67:
#line 429 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 431 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 69:
#line 432 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 70:
#line 435 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 71:
#line 436 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 72:
#line 437 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 73:
#line 438 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 74:
#line 439 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 75:
#line 440 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 76:
#line 444 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 451 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 458 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 465 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 472 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 479 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 82:
#line 487 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 83:
#line 490 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 493 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 496 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 86:
#line 500 "frame/ds9parser.Y"
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
#line 513 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 521 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 529 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 536 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 544 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 551 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 93:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 94:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 95:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 96:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 97:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 98:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 99:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 100:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 101:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 102:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 103:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 104:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 105:
#line 572 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 106:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 107:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 108:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 109:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 110:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 111:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 112:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 113:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 114:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 115:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 116:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 117:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 118:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 119:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 120:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 121:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 122:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 123:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 124:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 125:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 126:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 128:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 133:
#line 604 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 134:
#line 605 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 135:
#line 606 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 136:
#line 609 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 137:
#line 610 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 138:
#line 611 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 139:
#line 612 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 140:
#line 613 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 141:
#line 614 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 142:
#line 615 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 143:
#line 616 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 144:
#line 617 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 145:
#line 618 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 146:
#line 619 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 147:
#line 622 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 148:
#line 623 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 149:
#line 624 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 150:
#line 625 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 151:
#line 626 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 152:
#line 627 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 153:
#line 628 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 154:
#line 629 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 155:
#line 630 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 156:
#line 631 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 157:
#line 632 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 158:
#line 633 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 159:
#line 634 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 160:
#line 635 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 161:
#line 636 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 162:
#line 637 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 163:
#line 638 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 164:
#line 639 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 165:
#line 640 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 166:
#line 641 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 167:
#line 642 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 170:
#line 650 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 171:
#line 655 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 172:
#line 660 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 173:
#line 664 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 174:
#line 666 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 175:
#line 671 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 176:
#line 676 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 177:
#line 681 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::FILL,1);
	  setProps(&localProps,Marker::FILL,1);
	;}
    break;

  case 178:
#line 686 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 691 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 695 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 697 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 702 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = Point::GLYPH;
	  globalGlyphSize = localGlyphSize = 0;
	  strncpy(globalGlyph,(yyvsp[(4) - (4)].str),1023);
	  strncpy(localGlyph,(yyvsp[(4) - (4)].str),1023);
	;}
    break;

  case 183:
#line 709 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = Point::GLYPH;
	  globalGlyphSize = localGlyphSize = (yyvsp[(4) - (5)].integer);
	  strncpy(globalGlyph,(yyvsp[(5) - (5)].str),1023);
	  strncpy(localGlyph,(yyvsp[(5) - (5)].str),1023);
	;}
    break;

  case 184:
#line 716 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 185:
#line 720 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 186:
#line 722 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 187:
#line 725 "frame/ds9parser.Y"
    {;}
    break;

  case 188:
#line 726 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 189:
#line 728 "frame/ds9parser.Y"
    {
	  strncpy(globalCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(globalCompassEast,(yyvsp[(5) - (7)].str),80);
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  globalCompassNArrow = localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  globalCompassEArrow = localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 190:
#line 736 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 191:
#line 737 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 192:
#line 738 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 193:
#line 742 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 194:
#line 749 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 195:
#line 756 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 196:
#line 763 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 197:
#line 770 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 198:
#line 777 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 199:
#line 784 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 200:
#line 791 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 201:
#line 797 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::ICRS;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 202:
#line 806 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 203:
#line 811 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 204:
#line 816 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 205:
#line 821 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 206:
#line 827 "frame/ds9parser.Y"
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
	  globalGlyph[0] = '\0';
	  globalGlyphSize = 0;
	  globalTextAngle=0;
	  globalTextRotate=1;

	  aStatus = 0;
	  cStatus = 0;
	  compositeOperation = 0;
	;}
    break;

  case 209:
#line 877 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 210:
#line 878 "frame/ds9parser.Y"
    {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	  ;}
    break;

  case 211:
#line 883 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 212:
#line 887 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 213:
#line 888 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 214:
#line 889 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 215:
#line 890 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 216:
#line 891 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 217:
#line 893 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 218:
#line 894 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::FILL,1);;}
    break;

  case 219:
#line 895 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 220:
#line 896 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 221:
#line 898 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 222:
#line 899 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 223:
#line 901 "frame/ds9parser.Y"
    {
	  localPoint = Point::GLYPH;
	  localGlyphSize = 0;
	  strncpy(localGlyph,(yyvsp[(4) - (4)].str),1023);
	;}
    break;

  case 224:
#line 907 "frame/ds9parser.Y"
    {
	  localPoint = Point::GLYPH;
	  localGlyphSize = (yyvsp[(4) - (5)].integer);
	  strncpy(localGlyph,(yyvsp[(5) - (5)].str),1023);
	;}
    break;

  case 225:
#line 912 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 226:
#line 913 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 227:
#line 914 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 229:
#line 916 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 230:
#line 918 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 231:
#line 924 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 232:
#line 925 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 236:
#line 932 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 237:
#line 939 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 238:
#line 946 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 239:
#line 953 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 240:
#line 960 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 241:
#line 967 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 242:
#line 974 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 243:
#line 981 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 244:
#line 988 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::ICRS;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 245:
#line 997 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 246:
#line 1002 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 247:
#line 1007 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 248:
#line 1012 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::ICRS;
	;}
    break;

  case 249:
#line 1018 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 250:
#line 1018 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 251:
#line 1019 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 252:
#line 1022 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 253:
#line 1023 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 254:
#line 1024 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 255:
#line 1027 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 256:
#line 1028 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 257:
#line 1029 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 258:
#line 1032 "frame/ds9parser.Y"
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
	  strncpy(localGlyph,globalGlyph,1023);
	  localGlyphSize = globalGlyphSize;
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

  case 259:
#line 1090 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 260:
#line 1091 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 261:
#line 1092 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 262:
#line 1093 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 263:
#line 1094 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 264:
#line 1095 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 265:
#line 1096 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 266:
#line 1100 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 267:
#line 1101 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 268:
#line 1102 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 269:
#line 1103 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 270:
#line 1104 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 271:
#line 1105 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 272:
#line 1106 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 273:
#line 1107 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 274:
#line 1108 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 275:
#line 1109 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 276:
#line 1110 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 277:
#line 1111 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 278:
#line 1114 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 279:
#line 1115 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 280:
#line 1119 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1126 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 282:
#line 1128 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1134 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1141 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 285:
#line 1150 "frame/ds9parser.Y"
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

  case 286:
#line 1160 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1168 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1176 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 289:
#line 1186 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1193 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1201 "frame/ds9parser.Y"
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

  case 292:
#line 1224 "frame/ds9parser.Y"
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

  case 293:
#line 1247 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1255 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 295:
#line 1257 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1262 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 297:
#line 1264 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 298:
#line 1271 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1279 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1287 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 301:
#line 1293 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 302:
#line 1295 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1302 "frame/ds9parser.Y"
    {
	  if (localPoint == Point::GLYPH)
	    fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), Point::GLYPH, localGlyphSize,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist,localGlyph);
	  else
	    fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	    (Point::PointShape)localPoint, localPointSize, 
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 304:
#line 1314 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 305:
#line 1321 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 306:
#line 1328 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 307:
#line 1335 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 308:
#line 1342 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 309:
#line 1349 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 310:
#line 1356 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 311:
#line 1363 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 312:
#line 1372 "frame/ds9parser.Y"
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

  case 313:
#line 1382 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 314:
#line 1390 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 315:
#line 1398 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 316:
#line 1408 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 317:
#line 1416 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 318:
#line 1426 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 319:
#line 1436 "frame/ds9parser.Y"
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

  case 320:
#line 1448 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 321:
#line 1456 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 322:
#line 1466 "frame/ds9parser.Y"
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

  case 323:
#line 1478 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 324:
#line 1488 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 325:
#line 1497 "frame/ds9parser.Y"
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

  case 326:
#line 1519 "frame/ds9parser.Y"
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

  case 327:
#line 1543 "frame/ds9parser.Y"
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

  case 332:
#line 1573 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite, cStatus == 2 ? 1 : 0,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	  compositeOperation = cStatus ? cStatus : 1;
	;}
    break;

  case 335:
#line 1586 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 338:
#line 1594 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 341:
#line 1605 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 344:
#line 1615 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 345:
#line 1619 "frame/ds9parser.Y"
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
#line 5077 "frame/ds9parser.C"
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


#line 1646 "frame/ds9parser.Y"


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

