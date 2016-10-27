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
     COLOR = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     ARCMINUTE = 264,
     ARCSECOND = 265,
     PHYCOORD = 266,
     IMGCOORD = 267,
     SEXSTR = 268,
     HMSSTR = 269,
     DMSSTR = 270,
     EOF_ = 271,
     AMPLIFIER_ = 272,
     ANNULUS_ = 273,
     ARCMIN_ = 274,
     ARCSEC_ = 275,
     ARROW_ = 276,
     B1950_ = 277,
     BACKGROUND_ = 278,
     BEGIN_ = 279,
     BOX_ = 280,
     BOXCIRCLE_ = 281,
     BPANDA_ = 282,
     CALLBACK_ = 283,
     CIRCLE_ = 284,
     CIRCLE3D_ = 285,
     COLOR_ = 286,
     COMPASS_ = 287,
     COMPOSITE_ = 288,
     CPANDA_ = 289,
     CROSS_ = 290,
     DASH_ = 291,
     DASHLIST_ = 292,
     DEBUG_ = 293,
     DEGREES_ = 294,
     DELETE_ = 295,
     DETECTOR_ = 296,
     DIAMOND_ = 297,
     ECLIPTIC_ = 298,
     EDIT_ = 299,
     ELLIPSE_ = 300,
     END_ = 301,
     EPANDA_ = 302,
     FALSE_ = 303,
     FIELD_ = 304,
     FIXED_ = 305,
     FK4_ = 306,
     FK4_NO_E_ = 307,
     FK5_ = 308,
     FONT_ = 309,
     GALACTIC_ = 310,
     GLOBAL_ = 311,
     HELIOECLIPTIC_ = 312,
     HIGHLITE_ = 313,
     ICRS_ = 314,
     IGNORE_ = 315,
     IMAGE_ = 316,
     INCLUDE_ = 317,
     J2000_ = 318,
     KEY_ = 319,
     LINE_ = 320,
     LINEAR_ = 321,
     MOVE_ = 322,
     N_ = 323,
     NO_ = 324,
     OFF_ = 325,
     ON_ = 326,
     PHYSICAL_ = 327,
     PIE_ = 328,
     PIXELS_ = 329,
     POINT_ = 330,
     POLYGON_ = 331,
     PROJECTION_ = 332,
     PROPERTY_ = 333,
     ROTATE_ = 334,
     ROTBOX_ = 335,
     RULER_ = 336,
     SEGMENT_ = 337,
     SELECT_ = 338,
     SOURCE_ = 339,
     SUPERGALACTIC_ = 340,
     TAG_ = 341,
     TEXT_ = 342,
     TEXTANGLE_ = 343,
     TEXTROTATE_ = 344,
     TILE_ = 345,
     TRUE_ = 346,
     VECTOR_ = 347,
     VERSION_ = 348,
     UNHIGHLITE_ = 349,
     UNSELECT_ = 350,
     UPDATE_ = 351,
     WCS_ = 352,
     WCSA_ = 353,
     WCSB_ = 354,
     WCSC_ = 355,
     WCSD_ = 356,
     WCSE_ = 357,
     WCSF_ = 358,
     WCSG_ = 359,
     WCSH_ = 360,
     WCSI_ = 361,
     WCSJ_ = 362,
     WCSK_ = 363,
     WCSL_ = 364,
     WCSM_ = 365,
     WCSN_ = 366,
     WCSO_ = 367,
     WCSP_ = 368,
     WCSQ_ = 369,
     WCSR_ = 370,
     WCSS_ = 371,
     WCST_ = 372,
     WCSU_ = 373,
     WCSV_ = 374,
     WCSW_ = 375,
     WCSX_ = 376,
     WCSY_ = 377,
     WCSZ_ = 378,
     WCS0_ = 379,
     WIDTH_ = 380,
     X_ = 381,
     Y_ = 382,
     YES_ = 383
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define COLOR 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define ARCMINUTE 264
#define ARCSECOND 265
#define PHYCOORD 266
#define IMGCOORD 267
#define SEXSTR 268
#define HMSSTR 269
#define DMSSTR 270
#define EOF_ 271
#define AMPLIFIER_ 272
#define ANNULUS_ 273
#define ARCMIN_ 274
#define ARCSEC_ 275
#define ARROW_ 276
#define B1950_ 277
#define BACKGROUND_ 278
#define BEGIN_ 279
#define BOX_ 280
#define BOXCIRCLE_ 281
#define BPANDA_ 282
#define CALLBACK_ 283
#define CIRCLE_ 284
#define CIRCLE3D_ 285
#define COLOR_ 286
#define COMPASS_ 287
#define COMPOSITE_ 288
#define CPANDA_ 289
#define CROSS_ 290
#define DASH_ 291
#define DASHLIST_ 292
#define DEBUG_ 293
#define DEGREES_ 294
#define DELETE_ 295
#define DETECTOR_ 296
#define DIAMOND_ 297
#define ECLIPTIC_ 298
#define EDIT_ 299
#define ELLIPSE_ 300
#define END_ 301
#define EPANDA_ 302
#define FALSE_ 303
#define FIELD_ 304
#define FIXED_ 305
#define FK4_ 306
#define FK4_NO_E_ 307
#define FK5_ 308
#define FONT_ 309
#define GALACTIC_ 310
#define GLOBAL_ 311
#define HELIOECLIPTIC_ 312
#define HIGHLITE_ 313
#define ICRS_ 314
#define IGNORE_ 315
#define IMAGE_ 316
#define INCLUDE_ 317
#define J2000_ 318
#define KEY_ 319
#define LINE_ 320
#define LINEAR_ 321
#define MOVE_ 322
#define N_ 323
#define NO_ 324
#define OFF_ 325
#define ON_ 326
#define PHYSICAL_ 327
#define PIE_ 328
#define PIXELS_ 329
#define POINT_ 330
#define POLYGON_ 331
#define PROJECTION_ 332
#define PROPERTY_ 333
#define ROTATE_ 334
#define ROTBOX_ 335
#define RULER_ 336
#define SEGMENT_ 337
#define SELECT_ 338
#define SOURCE_ 339
#define SUPERGALACTIC_ 340
#define TAG_ 341
#define TEXT_ 342
#define TEXTANGLE_ 343
#define TEXTROTATE_ 344
#define TILE_ 345
#define TRUE_ 346
#define VECTOR_ 347
#define VERSION_ 348
#define UNHIGHLITE_ 349
#define UNSELECT_ 350
#define UPDATE_ 351
#define WCS_ 352
#define WCSA_ 353
#define WCSB_ 354
#define WCSC_ 355
#define WCSD_ 356
#define WCSE_ 357
#define WCSF_ 358
#define WCSG_ 359
#define WCSH_ 360
#define WCSI_ 361
#define WCSJ_ 362
#define WCSK_ 363
#define WCSL_ 364
#define WCSM_ 365
#define WCSN_ 366
#define WCSO_ 367
#define WCSP_ 368
#define WCSQ_ 369
#define WCSR_ 370
#define WCSS_ 371
#define WCST_ 372
#define WCSU_ 373
#define WCSV_ 374
#define WCSW_ 375
#define WCSX_ 376
#define WCSY_ 377
#define WCSZ_ 378
#define WCS0_ 379
#define WIDTH_ 380
#define X_ 381
#define Y_ 382
#define YES_ 383




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

static char globalColor[16];
static char localColor[16];

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
static Coord::SkyDist globalRulerDistFormat;
static Coord::SkyDist localRulerDistFormat;

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
#line 136 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 494 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 507 "frame/ds9parser.C"

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
#define YYLAST   2735

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  326
/* YYNRULES -- Number of states.  */
#define YYNSTATES  841

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     130,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,     2,   129,     2,     2,   139,     2,
     133,   134,     2,   137,   132,   138,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   131,
       2,   136,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   135,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128
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
     352,   354,   356,   359,   361,   364,   367,   369,   372,   375,
     377,   380,   382,   384,   386,   388,   390,   392,   394,   396,
     400,   402,   406,   410,   415,   419,   423,   427,   429,   431,
     433,   437,   442,   447,   451,   455,   459,   467,   471,   475,
     479,   484,   487,   490,   493,   496,   499,   502,   504,   506,
     509,   511,   513,   515,   516,   520,   522,   526,   530,   535,
     539,   543,   547,   551,   557,   559,   561,   563,   567,   572,
     577,   581,   585,   589,   597,   601,   605,   609,   613,   617,
     622,   625,   628,   631,   634,   637,   640,   642,   644,   647,
     649,   651,   653,   654,   662,   664,   665,   676,   678,   679,
     690,   692,   693,   695,   697,   699,   701,   703,   705,   707,
     709,   711,   722,   723,   731,   738,   747,   756,   767,   776,
     785,   794,   803,   814,   825,   836,   837,   845,   846,   854,
     863,   874,   881,   882,   892,   899,   907,   915,   923,   931,
     939,   947,   955,   964,   973,   984,   995,  1008,  1021,  1034,
    1049,  1064,  1083,  1096,  1111,  1126,  1145,  1164,  1185,  1206,
    1217,  1230,  1243,  1249,  1258,  1262,  1264,  1266,  1270,  1272,
    1274,  1278,  1280,  1282,  1286,  1288,  1292
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,   185,   143,   213,    -1,   143,   144,   158,
      -1,   144,   158,    -1,    -1,    38,   160,    -1,    93,    -1,
      56,   181,   150,    -1,    90,     3,    -1,    -1,   175,   145,
     150,    -1,    -1,   177,   146,   150,    -1,    -1,    66,   147,
     150,    -1,   196,   201,    -1,   196,   198,   201,    -1,   196,
     129,   148,    -1,   199,    -1,   198,   199,    -1,    90,     3,
      -1,    -1,   149,     5,    -1,    -1,    -1,   129,   151,     5,
      -1,   213,    -1,    -1,   129,   153,     5,   213,    -1,   129,
     186,   213,    -1,    -1,   129,   186,   154,     5,   213,    -1,
     213,    -1,    -1,   156,     5,   213,    -1,   186,   213,    -1,
      -1,   186,   157,     5,   213,    -1,   130,    -1,   131,    -1,
      16,    -1,     4,    -1,     3,    -1,    71,    -1,    70,    -1,
       3,    -1,   128,    -1,   127,    -1,    71,    -1,    91,    -1,
      69,    -1,    68,    -1,    70,    -1,    48,    -1,    -1,   132,
      -1,    -1,   133,    -1,    -1,   134,    -1,    -1,   135,    -1,
     135,   135,    -1,    -1,   167,    -1,   159,    -1,     7,    -1,
       8,    -1,   159,    -1,    11,    -1,    12,    -1,     7,    -1,
       9,    -1,    10,    -1,   159,   162,   159,    -1,    11,   162,
      11,    -1,    12,   162,    12,    -1,     7,   162,     7,    -1,
       9,   162,     9,    -1,    10,   162,    10,    -1,    68,   136,
       3,    -1,    13,    -1,    14,    -1,    15,    -1,   171,   162,
     171,    -1,   172,   162,   173,    -1,   173,   162,   173,    -1,
     159,   162,   159,    -1,     7,   162,     7,    -1,    12,   162,
      12,    -1,    11,   162,    11,    -1,    61,    -1,    72,    -1,
      41,    -1,    17,    -1,   176,    -1,    97,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
     104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,
     109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,
     119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,    -1,
     124,    -1,    51,    -1,    22,    -1,    52,    -1,    53,    -1,
      63,    -1,    59,    -1,    55,    -1,    85,    -1,    43,    -1,
      57,    -1,    39,    -1,    19,    -1,    20,    -1,    83,    -1,
      58,    -1,    36,    -1,    50,    -1,    44,    -1,    67,    -1,
      79,    -1,    40,    -1,    62,    -1,    84,    -1,    83,    -1,
      95,    -1,    58,    -1,    94,    -1,    24,    67,    -1,    67,
      -1,    46,    67,    -1,    24,    44,    -1,    44,    -1,    46,
      44,    -1,    24,    79,    -1,    79,    -1,    46,    79,    -1,
      40,    -1,    87,    -1,    31,    -1,   125,    -1,    78,    -1,
      54,    -1,    64,    -1,    96,    -1,   181,   162,   182,    -1,
     182,    -1,   179,   136,   161,    -1,    31,   136,     5,    -1,
      37,   136,     3,     3,    -1,   125,   136,     3,    -1,    54,
     136,     5,    -1,    87,   136,     5,    -1,    36,    -1,    84,
      -1,    23,    -1,    75,   136,   197,    -1,    75,   136,   197,
       3,    -1,    65,   136,     3,     3,    -1,    92,   136,     3,
      -1,    33,   136,     3,    -1,    81,   136,   183,    -1,    32,
     136,   184,     5,     5,     3,     3,    -1,    88,   136,   167,
      -1,    89,   136,     3,    -1,    97,   136,   176,    -1,   175,
     177,   175,   178,    -1,   175,   175,    -1,   175,   178,    -1,
     177,   175,    -1,   177,   178,    -1,    66,   175,    -1,    66,
     178,    -1,   178,    -1,    74,    -1,   175,   177,    -1,   175,
      -1,   177,    -1,    66,    -1,    -1,   186,   162,   187,    -1,
     187,    -1,   179,   136,   161,    -1,    31,   136,     5,    -1,
      37,   136,     3,     3,    -1,   125,   136,     3,    -1,    54,
     136,     5,    -1,    87,   136,     5,    -1,    86,   136,     5,
      -1,    28,   136,   180,     5,     5,    -1,    36,    -1,    84,
      -1,    23,    -1,    75,   136,   197,    -1,    75,   136,   197,
       3,    -1,    65,   136,     3,     3,    -1,    92,   136,     3,
      -1,    33,   136,     3,    -1,    81,   136,   188,    -1,    32,
     136,   189,     5,     5,     3,     3,    -1,    88,   136,   167,
      -1,    89,   136,     3,    -1,    34,   136,   190,    -1,    47,
     136,   192,    -1,    27,   136,   194,    -1,   175,   177,   175,
     178,    -1,   175,   175,    -1,   175,   178,    -1,   177,   175,
      -1,   177,   178,    -1,    66,   175,    -1,    66,   178,    -1,
     178,    -1,    74,    -1,   175,   177,    -1,   175,    -1,   177,
      -1,    66,    -1,    -1,   191,   133,   209,   134,   133,   207,
     134,    -1,    60,    -1,    -1,   193,   133,   209,   134,   133,
     211,   134,   133,   167,   134,    -1,    60,    -1,    -1,   195,
     133,   209,   134,   133,   211,   134,   133,   167,   134,    -1,
      60,    -1,    -1,    29,    -1,    25,    -1,    42,    -1,    35,
      -1,   126,    -1,    21,    -1,    26,    -1,   137,    -1,   138,
      -1,    92,   163,   174,   162,   168,   162,   167,   164,   165,
     155,    -1,    -1,    82,   200,   163,   205,   164,   165,   155,
      -1,    87,   163,   174,   164,   165,   155,    -1,    81,   163,
     174,   162,   174,   164,   165,   155,    -1,    32,   163,   174,
     162,   168,   164,   165,   155,    -1,    77,   163,   174,   162,
     174,   162,   168,   164,   165,   155,    -1,    30,   163,   174,
     162,   168,   164,   165,   155,    -1,    33,   163,   174,   162,
     166,   164,   165,   155,    -1,    29,   163,   174,   162,   168,
     164,   165,   152,    -1,    30,   163,   174,   162,   168,   164,
     165,   152,    -1,    45,   163,   174,   162,   169,   162,   166,
     164,   165,   152,    -1,    25,   163,   174,   162,   169,   162,
     166,   164,   165,   152,    -1,    80,   163,   174,   162,   169,
     162,   166,   164,   165,   152,    -1,    -1,    76,   202,   163,
     205,   164,   165,   152,    -1,    -1,    82,   203,   163,   205,
     164,   165,   152,    -1,    65,   163,   174,   162,   174,   164,
     165,   152,    -1,    92,   163,   174,   162,   168,   162,   167,
     164,   165,   152,    -1,    87,   163,   174,   164,   165,   152,
      -1,    -1,    87,   163,   174,   162,     5,   164,   204,   165,
     152,    -1,    75,   163,   174,   164,   165,   152,    -1,    29,
      75,   163,   174,   164,   165,   152,    -1,    25,    75,   163,
     174,   164,   165,   152,    -1,    42,    75,   163,   174,   164,
     165,   152,    -1,    35,    75,   163,   174,   164,   165,   152,
      -1,   126,    75,   163,   174,   164,   165,   152,    -1,    21,
      75,   163,   174,   164,   165,   152,    -1,    26,    75,   163,
     174,   164,   165,   152,    -1,    81,   163,   174,   162,   174,
     164,   165,   152,    -1,    32,   163,   174,   162,   168,   164,
     165,   152,    -1,    77,   163,   174,   162,   174,   162,   168,
     164,   165,   152,    -1,    18,   163,   174,   162,   168,   162,
     168,   164,   165,   152,    -1,    18,   163,   174,   162,   168,
     162,   168,   162,   207,   164,   165,   152,    -1,    18,   163,
     174,   162,   168,   162,   168,   162,   170,   164,   165,   152,
      -1,    45,   163,   174,   162,   169,   162,   169,   162,   166,
     164,   165,   152,    -1,    45,   163,   174,   162,   169,   162,
     169,   162,   170,   162,   166,   164,   165,   152,    -1,    45,
     163,   174,   162,   169,   162,   169,   162,   211,   162,   166,
     164,   165,   152,    -1,    45,   163,   174,   162,   169,   162,
     166,   164,   139,   140,    45,   163,   174,   162,   169,   162,
     166,   164,    -1,    25,   163,   174,   162,   169,   162,   169,
     162,   166,   164,   165,   152,    -1,    25,   163,   174,   162,
     169,   162,   169,   162,   211,   162,   166,   164,   165,   152,
      -1,    25,   163,   174,   162,   169,   162,   169,   162,   170,
     162,   166,   164,   165,   152,    -1,    25,   163,   174,   162,
     169,   162,   166,   164,   139,   140,    25,   163,   174,   162,
     169,   162,   166,   164,    -1,    34,   163,   174,   162,   167,
     162,   167,   162,     3,   162,   168,   162,   168,   162,     3,
     164,   165,   152,    -1,    47,   163,   174,   162,   167,   162,
     167,   162,     3,   162,   169,   162,   169,   162,     3,   162,
     166,   164,   165,   152,    -1,    27,   163,   174,   162,   167,
     162,   167,   162,     3,   162,   169,   162,   169,   162,     3,
     162,   166,   164,   165,   152,    -1,    73,   163,   174,   162,
     167,   162,   167,   164,   165,   152,    -1,    73,   163,   174,
     162,   167,   162,   167,   162,   209,   164,   165,   152,    -1,
      73,   163,   174,   162,   167,   162,   167,   162,   170,   164,
     165,   152,    -1,    49,   163,   164,   165,   152,    -1,    33,
     163,   174,   162,   166,   164,   165,   152,    -1,   205,   162,
     206,    -1,   206,    -1,   174,    -1,   207,   162,   208,    -1,
     208,    -1,   168,    -1,   209,   162,   210,    -1,   210,    -1,
     167,    -1,   211,   162,   212,    -1,   212,    -1,   168,   162,
     168,    -1,    -1
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
     377,   380,   381,   382,   385,   386,   389,   390,   391,   394,
     395,   396,   397,   398,   399,   402,   409,   416,   423,   430,
     437,   446,   449,   452,   455,   458,   471,   479,   487,   494,
     502,   509,   517,   518,   519,   520,   521,   524,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   566,   567,   568,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   606,
     607,   610,   615,   620,   625,   626,   631,   636,   641,   646,
     651,   652,   657,   662,   663,   667,   668,   677,   678,   679,
     682,   689,   696,   703,   710,   717,   724,   731,   738,   747,
     752,   757,   762,   769,   811,   812,   815,   816,   817,   822,
     823,   824,   825,   826,   828,   829,   830,   832,   833,   834,
     835,   836,   837,   838,   845,   846,   847,   848,   849,   852,
     859,   866,   873,   880,   887,   894,   901,   908,   917,   922,
     927,   932,   939,   939,   940,   943,   943,   945,   948,   948,
     950,   953,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1011,
    1012,  1015,  1023,  1023,  1030,  1037,  1046,  1056,  1064,  1072,
    1081,  1088,  1096,  1119,  1142,  1151,  1151,  1158,  1158,  1166,
    1174,  1182,  1189,  1189,  1197,  1204,  1211,  1218,  1225,  1232,
    1239,  1246,  1253,  1262,  1272,  1280,  1287,  1297,  1305,  1315,
    1325,  1337,  1345,  1355,  1367,  1377,  1386,  1408,  1432,  1457,
    1458,  1459,  1461,  1463,  1472,  1473,  1476,  1479,  1480,  1483,
    1490,  1491,  1494,  1501,  1502,  1505,  1509
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "COLOR",
  "ANGDEGREE", "ANGRADIAN", "ARCMINUTE", "ARCSECOND", "PHYCOORD",
  "IMGCOORD", "SEXSTR", "HMSSTR", "DMSSTR", "EOF_", "AMPLIFIER_",
  "ANNULUS_", "ARCMIN_", "ARCSEC_", "ARROW_", "B1950_", "BACKGROUND_",
  "BEGIN_", "BOX_", "BOXCIRCLE_", "BPANDA_", "CALLBACK_", "CIRCLE_",
  "CIRCLE3D_", "COLOR_", "COMPASS_", "COMPOSITE_", "CPANDA_", "CROSS_",
  "DASH_", "DASHLIST_", "DEBUG_", "DEGREES_", "DELETE_", "DETECTOR_",
  "DIAMOND_", "ECLIPTIC_", "EDIT_", "ELLIPSE_", "END_", "EPANDA_",
  "FALSE_", "FIELD_", "FIXED_", "FK4_", "FK4_NO_E_", "FK5_", "FONT_",
  "GALACTIC_", "GLOBAL_", "HELIOECLIPTIC_", "HIGHLITE_", "ICRS_",
  "IGNORE_", "IMAGE_", "INCLUDE_", "J2000_", "KEY_", "LINE_", "LINEAR_",
  "MOVE_", "N_", "NO_", "OFF_", "ON_", "PHYSICAL_", "PIE_", "PIXELS_",
  "POINT_", "POLYGON_", "PROJECTION_", "PROPERTY_", "ROTATE_", "ROTBOX_",
  "RULER_", "SEGMENT_", "SELECT_", "SOURCE_", "SUPERGALACTIC_", "TAG_",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,    35,
      10,    59,    44,    40,    41,   124,    61,    43,    45,    38,
      33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   141,   142,   143,   143,   144,   144,   144,   144,   144,
     145,   144,   146,   144,   147,   144,   144,   144,   144,   148,
     148,   148,   149,   148,   150,   151,   150,   152,   153,   152,
     152,   154,   152,   155,   156,   155,   155,   157,   155,   158,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   166,   166,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   170,   171,   172,   173,   174,   174,   174,   174,   174,
     174,   174,   175,   175,   175,   175,   175,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   178,   178,   178,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     181,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   182,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   184,
     184,   184,   184,   185,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   189,   191,   190,   190,   193,   192,   192,   195,   194,
     194,   196,   197,   197,   197,   197,   197,   197,   197,   198,
     198,   199,   200,   199,   199,   199,   199,   199,   199,   199,
     201,   201,   201,   201,   201,   202,   201,   203,   201,   201,
     201,   201,   204,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   205,   205,   206,   207,   207,   208,
     209,   209,   210,   211,   211,   212,   213
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
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       3,     4,     4,     3,     3,     3,     7,     3,     3,     3,
       4,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     0,     3,     1,     3,     3,     4,     3,
       3,     3,     3,     5,     1,     1,     1,     3,     4,     4,
       3,     3,     3,     7,     3,     3,     3,     3,     3,     4,
       2,     2,     2,     2,     2,     2,     1,     1,     2,     1,
       1,     1,     0,     7,     1,     0,    10,     1,     0,    10,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,    10,     0,     7,     6,     8,     8,    10,     8,     8,
       8,     8,    10,    10,    10,     0,     7,     0,     7,     8,
      10,     6,     0,     9,     6,     7,     7,     7,     7,     7,
       7,     7,     8,     8,    10,    10,    12,    12,    12,    14,
      14,    18,    12,    14,    14,    18,    18,    20,    20,    10,
      12,    12,     5,     8,     3,     1,     1,     3,     1,     1,
       3,     1,     1,     3,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     203,     0,   251,     1,    95,   126,     0,    94,   133,   125,
     127,   128,   131,     0,   134,   130,    92,   129,    14,    93,
     132,     0,     7,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   251,     0,    10,    96,    12,     0,    45,    44,     6,
     179,     0,     0,     0,   177,     0,   145,   142,   141,     0,
     139,   146,     0,   143,     0,   144,     0,   138,   178,     0,
       0,     0,     0,     0,     0,     0,    55,   170,    24,     9,
       0,     2,    41,    39,    40,     4,    24,    24,    57,     0,
      57,     0,    57,    57,    57,    57,    57,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   275,    57,    57,    57,
     277,    57,    57,     0,    22,   259,   260,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,    56,     8,     0,    15,     3,
      11,    13,    58,     0,    57,    57,     0,    57,     0,    57,
       0,     0,     0,     0,     0,    57,    57,     0,     0,    59,
       0,     0,     0,    57,     0,     0,     0,    57,     0,     0,
      57,    57,    57,    57,    57,    57,   262,    57,     0,    57,
      18,     0,     0,    19,    17,   172,   202,   200,   201,     0,
     184,     0,   175,     0,   257,   253,   258,   252,   255,   254,
     256,   180,   136,   137,   135,     0,   198,     0,     0,   197,
     185,   176,    43,    42,    67,    68,    66,   187,   188,   183,
     189,   174,    46,    54,    52,    51,    53,    49,    50,    48,
      47,   171,     0,   169,    55,    55,    55,    82,    83,    84,
      55,    55,    55,    55,    55,     0,     0,    55,     0,    55,
       0,    55,    55,    55,    55,    55,     0,     0,    55,    55,
      60,    61,    55,    55,    59,     0,    55,    55,    55,     0,
      59,    55,     0,     0,     0,     0,     0,     0,    57,     0,
      21,     0,    23,    20,   199,     0,   173,   182,   181,   195,
     196,   191,     0,   192,   193,   194,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    59,     0,    59,     0,
      59,     0,     0,     0,    64,     0,    59,    59,     0,     0,
      62,   326,     0,     0,    61,   316,    55,   315,     0,     0,
       0,    55,     0,    61,     0,    59,    55,    55,    55,    55,
      55,     0,    59,    55,     0,     0,    89,    91,    90,    88,
      85,    86,    87,    72,    73,    74,    70,    71,    69,    55,
      61,    61,    55,    55,    55,    55,    55,    55,    55,    61,
      55,    61,    59,    59,    59,    59,    65,    55,    61,    61,
      55,    55,    63,    28,   312,    27,    59,    55,   326,     0,
      61,    55,    55,    59,    61,    59,   326,    55,    61,     0,
       0,    64,     0,     0,    59,    61,     0,     0,   190,     0,
     326,   326,     0,     0,     0,     0,     0,     0,    64,   326,
       0,   326,    61,    61,    61,    61,     0,   326,   326,    64,
       0,   216,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,     0,   215,     0,     0,     0,     0,
       0,     0,     0,     0,    55,   205,    61,     0,   284,   314,
     326,     0,    64,    61,   326,   282,   281,     0,   326,    59,
      59,    59,    55,    59,    61,   326,    55,   186,    55,   290,
     286,    78,    79,    80,    76,    77,    75,    67,    66,    59,
      55,   291,    55,   285,   326,   326,   326,   326,    55,   288,
     287,    59,    55,    55,   248,     0,     0,     0,     0,   242,
       0,   245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,    30,   326,    55,   276,
      59,    59,   326,   278,    61,    59,   289,    61,    61,    61,
       0,    61,   326,   264,     0,    55,    33,     0,     0,    61,
      61,    64,     0,   270,   271,   293,   313,     0,    61,    64,
       0,   250,   228,     0,     0,   163,   161,   156,     0,   166,
     150,   167,   153,   165,   159,   148,   162,   151,   149,   168,
     164,     0,   207,   241,   239,   240,     0,   221,   244,   226,
       0,     0,   247,   227,     0,   210,     0,   217,     0,   237,
       0,     0,   236,   222,   212,   211,   224,   225,   220,   209,
      29,   206,   326,   204,   279,     0,    61,    61,    61,   292,
     326,    61,   326,   326,   326,    59,   326,   263,   326,     0,
      36,    59,     0,   319,    59,    55,   318,   326,     0,   326,
      72,    69,    59,    55,    55,    55,   324,    55,    55,     0,
     326,    59,    55,    55,    55,     0,   155,   152,   158,   157,
     154,   160,     0,   238,     0,     0,   208,     0,   219,   218,
     234,   235,   230,     0,   231,   232,   233,    32,   322,    59,
      59,   321,   326,   326,   326,   283,   326,   268,   266,   269,
      61,   265,    35,   326,    61,     0,    61,     0,    61,   295,
       0,   273,    61,     0,    64,    64,     0,     0,     0,   272,
      61,    64,    64,     0,    55,   213,     0,    55,    55,     0,
      61,     0,    61,   309,   294,   274,   280,   326,    38,   326,
      81,   326,   317,   326,    57,   326,   325,    59,    59,   323,
      55,    55,    57,   326,    59,    59,    55,     0,     0,     0,
       0,   229,   326,   320,   326,   267,   261,   297,   296,     0,
     302,    61,    61,     0,     0,     0,   298,    61,    61,     0,
       0,   223,     0,     0,   311,   310,    55,   326,   326,    55,
      55,    55,   326,   326,    55,    55,    55,    55,     0,   304,
     303,     0,     0,     0,   299,   300,     0,     0,     0,   243,
       0,    55,    55,    59,    55,    55,     0,     0,    64,    64,
      61,    64,    64,     0,     0,    59,    59,   326,    59,    59,
     249,   246,   305,    61,   306,   301,    61,   326,   326,   308,
     307
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,    52,    96,    97,    88,   190,   191,   146,
     242,   394,   462,   534,   553,   554,   639,    95,   250,    59,
     241,   731,   153,   271,   331,   385,   386,   653,   378,   644,
     251,   252,   253,   335,    53,    54,    55,   219,   463,   591,
      86,    87,   220,   199,     2,   555,   465,   613,   596,   599,
     600,   603,   604,   572,   573,    56,   211,   127,   193,   288,
     128,   173,   177,   544,   336,   337,   645,   646,   690,   691,
     655,   656,   395
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -679
static const yytype_int16 yypact[] =
{
    -679,    40,  1717,  -679,  -679,  -679,    99,  -679,  -679,  -679,
    -679,  -679,  -679,  2582,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    51,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  1475,    54,  -679,  -679,  -679,  1667,  -679,  -679,  -679,
    -679,   -93,   -77,   -74,   -36,   -27,  -679,  -679,  -679,    -8,
    -679,  -679,     5,  -679,    26,  -679,    45,  -679,    52,    57,
      68,    75,    86,   103,   115,   129,   127,  -679,     4,  -679,
      54,  -679,  -679,  -679,  -679,  -679,     4,     4,   109,   179,
     -44,   194,   109,   -37,   109,   109,   109,   109,   196,   197,
     109,   109,   109,   109,   109,   109,  -679,   109,   109,   109,
    -679,   109,   109,   198,   267,  -679,  -679,  1250,  -679,   265,
    2156,   274,   275,   276,   279,   277,  1832,   280,   224,   281,
     290,  2611,   292,    23,  -679,  -679,  -679,  2582,  -679,  -679,
    -679,  -679,  -679,   603,   109,   109,   603,   109,   603,   109,
     603,   603,   603,   603,   603,   109,   109,   603,   603,   162,
     603,   603,   603,   109,   603,   603,   603,   109,   603,   603,
     109,   109,   109,   109,   109,   109,  -679,   109,   304,   109,
    -679,   303,   517,  -679,  -679,  -679,  -679,   485,  -679,   305,
    -679,   306,  -679,   310,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   311,  -679,  -679,  -679,  2372,  -679,  2048,  2372,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   312,  -679,   186,   186,   186,  -679,  -679,  -679,
     186,   186,   186,   186,   186,   603,   603,   186,   603,   186,
     603,   186,   186,   186,   186,   186,   603,   603,   186,   186,
    -679,   185,   186,   186,   162,   603,   186,   186,   186,   603,
      22,   186,   603,   603,   603,   603,   603,   603,   109,   603,
    -679,   603,  -679,  -679,  -679,   317,  -679,  -679,  -679,  -679,
    -679,  -679,  2480,  -679,  -679,  -679,  -679,   316,   313,   315,
     195,   318,   314,   314,   551,   162,   162,   618,   162,   224,
     162,   551,   551,   551,   224,   224,   162,   162,   618,   224,
     190,   201,   603,   224,   185,  -679,   106,  -679,   603,   618,
     603,   106,   328,   185,   551,   162,   186,   186,   186,   186,
     186,   603,   162,   186,   331,    56,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,   186,
     185,   185,   186,   186,   186,   186,   186,   186,   186,   185,
     186,   185,   162,   162,   162,   162,  -679,   186,   185,   185,
     186,   186,  -679,  2482,  -679,  -679,   162,   186,   201,   603,
     185,   186,   186,   162,   185,   162,   201,   186,   185,   551,
     551,   224,   603,   603,   112,   185,   551,   332,  -679,   551,
     201,   201,   330,   329,   333,   334,   327,   195,   357,   201,
     224,   201,   185,   185,   185,   185,   224,   201,   201,   357,
     224,  -679,   205,   206,   210,   211,   214,   215,   -36,   216,
     217,   222,   234,   237,   238,    52,   239,   241,   244,   246,
     252,   253,   387,   257,    82,  -679,   185,   224,  -679,  -679,
     201,   551,   224,   185,   201,  -679,  -679,   224,   201,   162,
     162,   162,   186,   162,   185,  1595,   186,  -679,   106,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,    10,    31,   162,
     186,  -679,   186,  -679,   201,   201,   201,   201,   186,  -679,
    -679,   162,   186,   186,   337,  1338,   389,  2264,   395,   339,
     404,   348,   405,   406,   277,  1940,   408,   413,   224,   416,
     418,   420,  -679,    23,   419,  2482,  -679,   201,   106,  -679,
     162,   162,   201,  -679,   185,   162,  -679,   185,   185,   185,
     551,   185,  1595,  -679,   424,    94,  -679,   224,    38,   185,
     -67,   128,   427,  -679,  -679,  -679,  -679,   428,    13,   128,
     429,  -679,  -679,   300,   130,  -679,  -679,  -679,   136,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   430,  -679,  -679,   485,  -679,   433,  -679,  -679,  -679,
     307,   436,  -679,  -679,   309,  -679,   441,   442,  2372,  -679,
    2048,  2372,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,   104,   185,   185,   185,  -679,
     201,   185,  1595,  1595,  1595,   162,  1595,  -679,  -679,   443,
    -679,   162,   319,  -679,   162,   106,  -679,   201,   321,   201,
     118,   145,   162,   186,   186,   186,  -679,   186,   186,   324,
     201,   162,   186,   186,   186,   224,  -679,  -679,  -679,  -679,
    -679,  -679,   444,  -679,   445,   224,  -679,   224,  -679,  -679,
    -679,  -679,  -679,  2480,  -679,  -679,  -679,  -679,  -679,   162,
      21,  -679,   201,   201,   201,  -679,   201,  -679,  -679,  -679,
     185,  -679,  -679,  -679,   185,   448,   185,   551,   185,  -679,
     421,  -679,   185,   551,   224,   515,   618,   551,   422,  -679,
     185,   224,   515,   618,   -81,  -679,   450,   -55,    15,    56,
     185,   224,   185,  -679,  -679,  -679,  -679,  1595,  -679,  1595,
    -679,   201,  -679,   201,   109,   201,  -679,   162,   162,  -679,
     186,   186,   109,   201,   162,   162,   186,   325,   462,   335,
     342,  -679,   201,  -679,   201,  -679,  -679,  -679,  -679,   603,
    -679,   185,   185,   618,   551,   603,  -679,   185,   185,   618,
     551,  -679,   551,   551,  -679,  -679,   186,   201,   201,   186,
     186,   186,   201,   201,   186,    84,   111,   134,   618,  -679,
    -679,   463,   467,   618,  -679,  -679,   473,   344,   551,  -679,
     346,   186,   186,   162,   186,   186,   224,   224,   224,   224,
     185,   224,   224,   351,   352,   162,   162,   201,   162,   162,
    -679,  -679,  -679,   185,  -679,  -679,   185,   201,   201,  -679,
    -679
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -679,  -679,  -679,   431,  -679,  -679,  -679,  -679,  -679,   133,
    -679,   719,  -679,  -679,  -531,  -679,  -679,   390,    62,  -679,
     -46,   -86,   -99,   546,   616,  -359,     7,   345,  -282,  -496,
     177,  -679,   -79,   634,   -97,   354,  -100,  -154,    -3,  -679,
    -679,   349,  -679,  -679,  -679,   100,   -35,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   -25,   380,   320,  -679,
     378,  -679,  -679,  -679,  -247,   110,  -274,  -192,  -458,  -214,
    -560,  -678,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -327
static const yytype_int16 yytable[] =
{
     147,   156,    91,   158,   160,   161,   162,   163,   164,   663,
      85,   167,   168,   169,   170,   171,   172,   -55,   174,   175,
     176,   637,   178,   179,   -55,   -55,   232,   -55,   -55,   -55,
     198,   155,   341,   197,   -55,   -55,   218,   749,   159,   217,
       3,   222,   223,   129,   749,   363,   390,   364,   365,   366,
     367,   145,   481,   757,    89,   255,   256,   402,   258,   130,
     260,   300,   131,   303,   305,   654,   266,   267,   330,   499,
      92,   233,   648,   662,   275,   212,   213,   145,   279,   759,
     511,   282,   283,   284,   285,   286,   287,   -31,   289,   152,
     291,   234,   235,   236,   237,   214,   152,   294,  -326,   -37,
    -140,   697,   698,   699,   414,   701,   642,   222,   223,   132,
    -326,   224,   225,   541,   238,   -55,   -55,   302,   299,   -55,
     301,   304,   -59,   -55,   -55,   -55,   -55,   -55,   133,   689,
     749,   222,   223,   144,   -67,   650,   225,   364,   365,   366,
     367,   134,   145,   -24,    85,   227,   500,   145,   330,   760,
     239,   240,   659,   145,   145,   270,   270,   512,   307,   308,
     309,   -66,   135,   145,   310,   311,   312,   313,   314,    57,
      58,   317,   642,   319,   666,   321,   322,   323,   324,   325,
     669,   136,   328,   329,    93,    94,   332,   333,  -147,   351,
     338,   339,   340,   137,   342,   344,   642,   667,   222,   223,
     226,   418,   652,   670,   138,   355,   765,   724,   766,   668,
     661,   139,  -326,  -326,   145,   671,   145,   727,   807,   728,
     795,   148,   140,   797,  -326,  -326,   145,   222,   223,   150,
     151,   224,   225,   361,   362,   -59,   -59,   -59,   145,   141,
     270,   -59,   152,   145,   145,   809,   270,   -67,   -67,   -67,
     399,   142,   -67,   -67,   154,   399,   144,   -24,   -24,   145,
     409,   410,   411,   412,   413,   143,   145,   416,   810,   157,
     195,   165,   166,   180,   -66,   -66,   -66,   200,   201,   -66,
     -66,   202,   203,   419,   228,   221,   422,   423,   424,   425,
     426,   427,   428,   229,   430,   231,   270,   181,   204,   182,
     183,   436,   205,   206,   439,   440,   207,   290,   292,   296,
     295,   467,   208,   297,   298,   471,   472,   306,   145,   209,
     330,   477,   354,   356,   357,   392,   380,   358,   399,   249,
     393,   247,   387,   405,   417,   487,   391,   491,   492,   495,
     397,   514,   515,   493,   184,   494,   516,   517,   185,   186,
     518,   519,   520,   521,   187,   747,   748,   188,   522,   189,
     222,   223,   754,   755,   497,   225,   373,   374,   375,   376,
     523,   612,   359,   524,   525,   526,   368,   527,   535,   377,
     528,   226,   529,   368,   368,   368,   226,   226,   530,   531,
     377,   226,   532,   533,   592,   226,   550,   571,   597,   598,
     557,   377,   558,   210,   125,   126,   368,   601,   602,   606,
     605,   422,   427,   614,   561,   536,   562,   595,   615,   617,
     594,   618,   567,   619,   622,   611,   569,   570,   610,   638,
     657,   658,   664,   665,   750,   672,   556,   502,   674,   676,
     675,   756,   677,   508,   678,   679,   744,   513,   703,   725,
     726,   740,   625,   758,   681,   705,   684,   686,   780,   825,
     826,   710,   828,   829,   718,   781,   812,   752,   782,   535,
     813,   368,   368,   226,   538,   783,   815,   816,   368,   817,
     149,   368,    90,   620,   545,   830,   831,   621,   360,   496,
     498,   789,   226,   464,   673,   230,   243,   794,   226,   607,
     623,   498,   226,   556,   192,   194,   640,     5,   796,   469,
     683,   680,   293,   682,   685,   742,   811,   763,   222,   223,
       0,   814,   650,   225,   364,   365,   366,   367,     8,   226,
       0,     0,     0,   368,   226,   616,     9,    10,    11,   226,
      12,     0,    14,     0,    15,     0,     0,   181,    17,   182,
     183,     0,     0,     0,   222,   223,     0,     0,   363,   707,
     364,   365,   366,   367,   641,     0,     0,   713,   714,   715,
      20,   716,   717,   687,     0,   761,   721,   722,   723,     0,
       0,     0,     0,   556,   556,   556,   729,   556,     0,   702,
     226,     0,     0,     0,   184,     0,     0,     0,   185,   186,
       0,     0,     0,     0,   187,     0,   222,   223,     0,   189,
     244,     0,   368,     0,   245,   246,   247,   248,   249,   226,
     368,   222,   223,   651,     0,   372,     0,   373,   374,   375,
     376,   651,   688,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,   775,   738,     0,     0,     0,     0,   369,
       0,     0,     0,     0,   773,   774,   382,   383,   384,     0,
     779,     0,   688,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   688,     0,   688,     0,     0,   226,   556,   407,
     556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     798,     0,     0,   801,   802,   803,     0,     0,   806,   808,
     707,   808,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   818,   819,   226,   821,   822,
       0,     0,     0,     0,     0,     0,     0,   226,   688,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   479,   480,     0,     0,     0,     0,
       0,   486,     0,     0,   488,     0,     0,     0,     0,   368,
       0,     0,     0,     0,     0,   368,   226,   651,   377,   368,
       0,     0,     0,   226,   651,   377,     0,   254,     0,     0,
     257,     0,   259,   226,   261,   262,   263,   264,   265,     0,
       0,   268,   269,     0,   272,   273,   274,     0,   276,   277,
     278,     0,   280,   281,     0,     0,   540,     0,     0,     0,
     334,     0,     0,   823,   824,     0,   343,     0,     0,     0,
       0,     0,     0,     0,     0,   377,   368,     0,     0,     0,
       0,   377,   368,     0,   368,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     377,   370,   371,     0,   379,   377,   381,     0,     0,     0,
     368,     0,   388,   389,     0,     0,     0,     0,   226,   226,
     226,   226,   400,   226,   226,     0,     0,   404,     0,   315,
     316,   408,   318,     0,   320,   635,     0,     0,   415,     0,
     326,   327,     0,   643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   346,   347,   348,
     349,   350,     0,   352,     0,   353,     0,     0,   432,   433,
     434,   435,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   466,     0,     0,     0,     0,     0,     0,   473,
     398,   475,     0,     0,     0,     0,     0,     0,     0,   406,
     484,     0,     0,     0,     0,     0,   396,     0,     0,     0,
       0,     0,   401,     0,   403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,   421,     0,     0,
       0,     0,     0,     0,     0,   429,     0,   431,     0,     0,
       0,     0,     0,     0,   437,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,     0,     0,     0,
     474,     0,     0,     0,   478,   547,   548,   549,     0,   551,
       0,   485,     0,     0,   559,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   560,   482,   483,   504,   505,
     506,   507,   643,     0,     0,     0,     0,   568,   746,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   537,     0,   626,     0,   627,   628,     0,   542,
       0,   631,     0,     0,     0,     0,     0,     0,     0,     0,
     552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   468,     0,   790,
       0,     0,     0,     0,     0,   476,     0,   643,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   489,
     490,     0,     0,     0,     0,     0,     0,     0,   501,     0,
     503,     0,     0,     0,     0,     0,   509,   510,     0,     0,
     630,     0,     0,   632,   633,   634,     0,   636,     0,     0,
       0,     0,     0,     0,     0,   647,   649,     0,     0,     0,
       0,   700,     0,     0,   660,     0,     0,   704,     0,   539,
     706,   708,     0,   543,     0,     0,     0,   546,   712,     0,
       0,     0,     0,     0,     0,     0,     0,   720,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   563,   564,   565,   566,     0,     0,     0,
       0,     0,     0,     0,     0,   730,   732,     0,     0,     0,
       0,     0,   692,   693,   694,     0,     0,   696,     0,     0,
       0,     0,     0,     0,     0,     0,   624,     0,     0,     0,
       0,   629,     0,     0,     0,     0,     0,     0,    98,     0,
       0,    99,     0,     0,     0,   100,   101,   102,     0,   103,
     104,     0,   105,   106,   107,   108,     0,     0,     0,     0,
       0,     0,   109,   771,   772,   110,     0,   111,     0,   112,
     777,   778,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   737,     0,     0,     0,
     739,     0,   741,   114,   743,   115,   116,   117,   745,     0,
     118,   119,   120,     0,     0,     0,   753,   121,     0,     0,
       0,     0,   122,     0,     0,     0,   762,     0,   764,   695,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   820,
       0,     0,   574,     0,     0,     0,   709,     0,   711,   575,
       0,   832,   833,     0,   835,   836,   123,     0,   576,   719,
       0,     0,   577,     0,   578,     0,     0,   787,   788,     0,
       0,     0,   579,   792,   793,     0,   580,     0,     0,     0,
       0,     0,   581,   786,     0,   582,     0,     0,     0,   791,
       0,   733,   734,   735,     0,   736,   583,   584,     0,     0,
       0,   585,     0,     0,     0,   586,     0,     0,     0,     0,
       0,     0,   587,   588,   589,     0,   827,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   837,
       0,     0,   838,     0,     0,     0,     0,     0,     0,     0,
     767,     0,   768,   590,   770,     0,     0,     0,     0,     0,
       0,     0,   776,     0,     0,  -326,     0,     0,     0,     0,
       0,   784,     0,   785,     0,     0,     0,     0,     0,     0,
       0,    -5,     4,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,   799,   800,     0,     0,
       0,   804,   805,     6,     0,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
      12,    13,    14,     0,    15,     0,    16,     0,    17,     0,
       0,    18,     0,     0,     0,     0,   834,    19,     0,     0,
       0,     0,     0,     0,     0,     0,   839,   840,     0,     0,
      20,     0,     0,     0,     0,    21,     0,     0,    22,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     -34,     0,     0,     0,     0,    -5,    -5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,   442,   443,     0,     0,   444,   445,   446,   447,
       0,   448,   449,     0,     0,    66,     0,     0,     0,    67,
       0,     0,   450,     0,     0,    68,     0,     0,     0,   451,
       0,     0,     0,    70,     0,     0,     0,    71,     0,     0,
     452,     0,    73,     0,     0,     0,     0,     0,     0,     0,
     453,     0,     0,     0,    75,     0,   454,     0,    77,   455,
       0,   456,   457,   458,   459,    98,     0,   460,    99,     0,
       0,     0,   100,   101,   102,     0,   103,   104,     0,   105,
     106,   107,   108,     0,     0,     0,     0,     0,     0,   109,
       0,     0,   110,     0,   111,     0,   112,     0,     0,     0,
     461,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,    -5,     4,     0,     0,     0,     0,     5,
     114,     0,   115,   116,   117,     0,     0,   118,   119,   120,
       0,     0,     0,     0,   121,     6,     0,     0,     7,   122,
       8,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,     0,    12,    13,    14,     0,    15,     0,    16,     0,
      17,     0,     0,    18,     0,     0,     0,     0,     0,    19,
       0,     0,     0,   123,     0,     0,   124,     0,     0,     0,
       0,     0,    20,     0,   125,   126,     0,    21,     0,     0,
      22,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,    -5,    -5,     4,
       0,   212,   213,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     7,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,    12,     0,    14,
       0,    15,     0,    16,     0,    17,     0,     0,   215,     0,
       0,     0,     0,     0,    19,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     4,     0,   212,
     213,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     9,    10,    11,     0,    12,     0,    14,     0,    15,
       0,    16,     0,    17,     0,     0,   608,     0,     0,     0,
       0,     0,    19,     0,   609,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     4,     0,   212,   213,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   214,     0,     7,
       0,     8,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,     0,    12,     0,    14,     0,    15,     0,    16,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     4,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   196,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,    12,
       0,    14,     0,    15,     0,    16,     0,    17,     0,     0,
     593,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     4,
       0,   212,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     4,     0,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,   442,
     443,     0,     0,   444,   445,   446,   447,     0,   448,   449,
       0,     7,    66,     0,     0,     0,    67,     0,     0,   450,
       0,     0,    68,     0,     0,     0,   451,     0,     0,     0,
      70,    16,     0,     0,    71,     0,     0,   452,     0,    73,
       0,     0,    19,     0,     0,     0,     0,   453,     0,     0,
       0,    75,     0,   454,     0,    77,   455,     0,   456,   457,
     458,   459,     0,     0,   460,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    60,     0,   461,     0,     0,
       0,     0,     0,    61,    62,    63,     0,     0,    64,    65,
       0,     0,    66,     0,     0,     0,    67,     0,     0,     0,
       0,     0,    68,     0,     0,     0,    69,     0,     0,     0,
      70,     0,     0,     0,    71,     0,     0,    72,     0,    73,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,    75,     0,    76,     0,    77,    78,     0,     0,    79,
      80,    81,     0,     0,    82,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      86,   100,    51,   102,   103,   104,   105,   106,   107,   569,
      13,   110,   111,   112,   113,   114,   115,     7,   117,   118,
     119,   552,   121,   122,     3,     4,     3,     5,     7,     8,
     130,    75,   279,   130,     3,     4,   136,   715,    75,   136,
       0,     3,     4,   136,   722,     7,   328,     9,    10,    11,
      12,   132,   411,   134,     3,   154,   155,   339,   157,   136,
     159,   215,   136,   217,   218,   561,   165,   166,   135,   428,
      16,    48,   139,   569,   173,    19,    20,   132,   177,   134,
     439,   180,   181,   182,   183,   184,   185,     5,   187,   133,
     189,    68,    69,    70,    71,    39,   133,   197,    16,     5,
     136,   632,   633,   634,   351,   636,    68,     3,     4,   136,
      16,     7,     8,   472,    91,     3,     4,   217,   215,     7,
     217,   218,    16,    11,    12,    13,    14,    15,   136,   625,
     808,     3,     4,   129,    16,     7,     8,     9,    10,    11,
      12,   136,   132,    16,   147,   138,   428,   132,   135,   134,
     127,   128,   139,   132,   132,   134,   134,   439,   244,   245,
     246,    16,   136,   132,   250,   251,   252,   253,   254,    70,
      71,   257,    68,   259,    44,   261,   262,   263,   264,   265,
      44,   136,   268,   269,   130,   131,   272,   273,   136,   288,
     276,   277,   278,   136,   280,   281,    68,    67,     3,     4,
     138,   355,   561,    67,   136,   302,   737,   665,   739,    79,
     569,   136,   130,   131,   132,    79,   132,   675,   134,   677,
     780,    88,   136,   783,   130,   131,   132,     3,     4,    96,
      97,     7,     8,   312,   313,   129,   130,   131,   132,   136,
     134,   135,   133,   132,   132,   134,   134,   129,   130,   131,
     336,   136,   134,   135,    75,   341,   129,   130,   131,   132,
     346,   347,   348,   349,   350,   136,   132,   353,   134,    75,
       5,    75,    75,    75,   129,   130,   131,     3,     3,   134,
     135,     5,     3,   369,     3,     5,   372,   373,   374,   375,
     376,   377,   378,     3,   380,     3,   134,    30,    21,    32,
      33,   387,    25,    26,   390,   391,    29,     3,     5,     3,
       5,   397,    35,     3,     3,   401,   402,     5,   132,    42,
     135,   407,     5,     7,    11,   135,   319,    12,   414,    15,
     129,    13,   325,     5,     3,     3,   329,     7,     9,    12,
     333,   136,   136,    10,    77,    11,   136,   136,    81,    82,
     136,   136,   136,   136,    87,   714,   715,    90,   136,    92,
       3,     4,   721,   722,     7,     8,     9,    10,    11,    12,
     136,   525,   310,   136,   136,   136,   314,   136,   464,   317,
     136,   319,   136,   321,   322,   323,   324,   325,   136,   136,
     328,   329,     5,   136,     5,   333,   482,    60,     3,    60,
     486,   339,   488,   126,   137,   138,   344,     3,    60,     3,
       5,   497,   498,     5,   500,   464,   502,   517,     5,     3,
     517,     3,   508,     3,     5,   525,   512,   513,   525,     5,
       3,     3,     3,   133,   716,     5,   485,   430,     5,     3,
     133,   723,   133,   436,     3,     3,    25,   440,     5,     5,
       5,     3,   538,     3,   608,   136,   610,   611,   133,   818,
     819,   140,   821,   822,   140,     3,     3,    45,   133,   555,
       3,   409,   410,   411,   467,   133,     3,   133,   416,   133,
      90,   419,    51,   532,   477,   134,   134,   533,   311,   427,
     428,   773,   430,   393,   594,   141,   147,   779,   436,   524,
     535,   439,   440,   552,   124,   127,   555,    22,   782,   399,
     610,   608,   192,   610,   611,   707,   798,   731,     3,     4,
      -1,   803,     7,     8,     9,    10,    11,    12,    43,   467,
      -1,    -1,    -1,   471,   472,   528,    51,    52,    53,   477,
      55,    -1,    57,    -1,    59,    -1,    -1,    30,    63,    32,
      33,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,   645,
       9,    10,    11,    12,   557,    -1,    -1,   653,   654,   655,
      85,   657,   658,   622,    -1,   729,   662,   663,   664,    -1,
      -1,    -1,    -1,   632,   633,   634,   683,   636,    -1,   638,
     528,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    87,    -1,     3,     4,    -1,    92,
       7,    -1,   550,    -1,    11,    12,    13,    14,    15,   557,
     558,     3,     4,   561,    -1,     7,    -1,     9,    10,    11,
      12,   569,   625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   744,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   752,   703,    -1,    -1,    -1,    -1,   314,
      -1,    -1,    -1,    -1,   750,   751,   321,   322,   323,    -1,
     756,    -1,   665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   675,    -1,   677,    -1,    -1,   625,   737,   344,
     739,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     786,    -1,    -1,   789,   790,   791,    -1,    -1,   794,   795,
     796,   797,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   811,   812,   665,   814,   815,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   675,   731,   677,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   409,   410,    -1,    -1,    -1,    -1,
      -1,   416,    -1,    -1,   419,    -1,    -1,    -1,    -1,   707,
      -1,    -1,    -1,    -1,    -1,   713,   714,   715,   716,   717,
      -1,    -1,    -1,   721,   722,   723,    -1,   153,    -1,    -1,
     156,    -1,   158,   731,   160,   161,   162,   163,   164,    -1,
      -1,   167,   168,    -1,   170,   171,   172,    -1,   174,   175,
     176,    -1,   178,   179,    -1,    -1,   471,    -1,    -1,    -1,
     274,    -1,    -1,   816,   817,    -1,   280,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   773,   774,    -1,    -1,    -1,
      -1,   779,   780,    -1,   782,   783,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     798,   315,   316,    -1,   318,   803,   320,    -1,    -1,    -1,
     808,    -1,   326,   327,    -1,    -1,    -1,    -1,   816,   817,
     818,   819,   336,   821,   822,    -1,    -1,   341,    -1,   255,
     256,   345,   258,    -1,   260,   550,    -1,    -1,   352,    -1,
     266,   267,    -1,   558,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,   285,
     286,   287,    -1,   289,    -1,   291,    -1,    -1,   382,   383,
     384,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,   403,
     334,   405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,
     414,    -1,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,
      -1,    -1,   338,    -1,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   370,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,
      -1,    -1,    -1,    -1,   388,   389,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,
     404,    -1,    -1,    -1,   408,   479,   480,   481,    -1,   483,
      -1,   415,    -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   499,   412,   413,   432,   433,
     434,   435,   707,    -1,    -1,    -1,    -1,   511,   713,    -1,
      -1,    -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   466,    -1,   538,    -1,   540,   541,    -1,   473,
      -1,   545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,   774,
      -1,    -1,    -1,    -1,    -1,   406,    -1,   782,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,
     421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,
     431,    -1,    -1,    -1,    -1,    -1,   437,   438,    -1,    -1,
     544,    -1,    -1,   547,   548,   549,    -1,   551,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   559,   560,    -1,    -1,    -1,
      -1,   635,    -1,    -1,   568,    -1,    -1,   641,    -1,   470,
     644,   645,    -1,   474,    -1,    -1,    -1,   478,   652,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   661,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   504,   505,   506,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   689,   690,    -1,    -1,    -1,
      -1,    -1,   626,   627,   628,    -1,    -1,   631,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   537,    -1,    -1,    -1,
      -1,   542,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    42,   747,   748,    45,    -1,    47,    -1,    49,
     754,   755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,   700,    -1,    -1,    -1,
     704,    -1,   706,    73,   708,    75,    76,    77,   712,    -1,
      80,    81,    82,    -1,    -1,    -1,   720,    87,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,   730,    -1,   732,   630,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   813,
      -1,    -1,    24,    -1,    -1,    -1,   647,    -1,   649,    31,
      -1,   825,   826,    -1,   828,   829,   126,    -1,    40,   660,
      -1,    -1,    44,    -1,    46,    -1,    -1,   771,   772,    -1,
      -1,    -1,    54,   777,   778,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    64,   769,    -1,    67,    -1,    -1,    -1,   775,
      -1,   692,   693,   694,    -1,   696,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    -1,   820,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   833,
      -1,    -1,   836,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     741,    -1,   743,   125,   745,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   753,    -1,    -1,     0,    -1,    -1,    -1,    -1,
      -1,   762,    -1,   764,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   787,   788,    -1,    -1,
      -1,   792,   793,    38,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,   827,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   837,   838,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       5,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    31,    32,    33,    34,
      -1,    36,    37,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    -1,    79,    -1,    81,    -1,    83,    84,
      -1,    86,    87,    88,    89,    18,    -1,    92,    21,    -1,
      -1,    -1,    25,    26,    27,    -1,    29,    30,    -1,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    45,    -1,    47,    -1,    49,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    16,    17,    -1,    -1,    -1,    -1,    22,
      73,    -1,    75,    76,    77,    -1,    -1,    80,    81,    82,
      -1,    -1,    -1,    -1,    87,    38,    -1,    -1,    41,    92,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    56,    57,    -1,    59,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,    -1,   126,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,    85,    -1,   137,   138,    -1,    90,    -1,    -1,
      93,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,   130,   131,    17,
      -1,    19,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,    57,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    17,    -1,    19,
      20,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    53,    -1,    55,    -1,    57,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    17,    -1,    19,    20,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    53,    -1,    55,    -1,    57,    -1,    59,    -1,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    17,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    17,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      28,    -1,    -1,    31,    32,    33,    34,    -1,    36,    37,
      -1,    41,    40,    -1,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    61,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    81,    -1,    83,    84,    -1,    86,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    23,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    -1,    36,    37,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      -1,    79,    -1,    81,    -1,    83,    84,    -1,    -1,    87,
      88,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   142,   185,     0,    17,    22,    38,    41,    43,    51,
      52,    53,    55,    56,    57,    59,    61,    63,    66,    72,
      85,    90,    93,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   143,   144,   175,   176,   177,   196,    70,    71,   160,
      23,    31,    32,    33,    36,    37,    40,    44,    50,    54,
      58,    62,    65,    67,    75,    79,    81,    83,    84,    87,
      88,    89,    92,    97,   125,   179,   181,   182,   147,     3,
     144,   213,    16,   130,   131,   158,   145,   146,    18,    21,
      25,    26,    27,    29,    30,    32,    33,    34,    35,    42,
      45,    47,    49,    65,    73,    75,    76,    77,    80,    81,
      82,    87,    92,   126,   129,   137,   138,   198,   201,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   129,   132,   150,   162,   150,   158,
     150,   150,   133,   163,    75,    75,   163,    75,   163,    75,
     163,   163,   163,   163,   163,    75,    75,   163,   163,   163,
     163,   163,   163,   202,   163,   163,   163,   203,   163,   163,
      75,    30,    32,    33,    77,    81,    82,    87,    90,    92,
     148,   149,   198,   199,   201,     5,    66,   175,   177,   184,
       3,     3,     5,     3,    21,    25,    26,    29,    35,    42,
     126,   197,    19,    20,    39,    66,    74,   175,   177,   178,
     183,     5,     3,     4,     7,     8,   159,   167,     3,     3,
     176,     3,     3,    48,    68,    69,    70,    71,    91,   127,
     128,   161,   151,   182,     7,    11,    12,    13,    14,    15,
     159,   171,   172,   173,   174,   163,   163,   174,   163,   174,
     163,   174,   174,   174,   174,   174,   163,   163,   174,   174,
     134,   164,   174,   174,   174,   163,   174,   174,   174,   163,
     174,   174,   163,   163,   163,   163,   163,   163,   200,   163,
       3,   163,     5,   199,   177,     5,     3,     3,     3,   175,
     178,   175,   177,   178,   175,   178,     5,   162,   162,   162,
     162,   162,   162,   162,   162,   174,   174,   162,   174,   162,
     174,   162,   162,   162,   162,   162,   174,   174,   162,   162,
     135,   165,   162,   162,   164,   174,   205,   206,   162,   162,
     162,   205,   162,   164,   162,   174,   174,   174,   174,   174,
     174,   163,   174,   174,     5,   175,     7,    11,    12,   159,
     171,   173,   173,     7,     9,    10,    11,    12,   159,   168,
     164,   164,     7,     9,    10,    11,    12,   159,   169,   164,
     167,   164,   168,   168,   168,   166,   167,   167,   164,   164,
     169,   167,   135,   129,   152,   213,   174,   167,   165,   162,
     164,   174,   169,   174,   164,     5,   165,   168,   164,   162,
     162,   162,   162,   162,   205,   164,   162,     3,   178,   162,
     165,   165,   162,   162,   162,   162,   162,   162,   162,   165,
     162,   165,   164,   164,   164,   164,   162,   165,   165,   162,
     162,    23,    27,    28,    31,    32,    33,    34,    36,    37,
      47,    54,    65,    75,    81,    84,    86,    87,    88,    89,
      92,   125,   153,   179,   186,   187,   164,   162,   152,   206,
     165,   162,   162,   164,   165,   164,   152,   162,   165,   168,
     168,   166,   174,   174,   164,   165,   168,     3,   168,   152,
     152,     7,     9,    10,    11,    12,   159,     7,   159,   166,
     169,   152,   167,   152,   165,   165,   165,   165,   167,   152,
     152,   166,   169,   167,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,     5,   136,   154,   162,   213,   165,   167,   152,
     168,   166,   165,   152,   204,   167,   152,   164,   164,   164,
     162,   164,   165,   155,   156,   186,   213,   162,   162,   164,
     164,   162,   162,   152,   152,   152,   152,   162,   164,   162,
     162,    60,   194,   195,    24,    31,    40,    44,    46,    54,
      58,    64,    67,    78,    79,    83,    87,    94,    95,    96,
     125,   180,     5,    66,   175,   177,   189,     3,    60,   190,
     191,     3,    60,   192,   193,     5,     3,   197,    66,    74,
     175,   177,   178,   188,     5,     5,   167,     3,     3,     3,
     213,   161,     5,   187,   152,   162,   164,   164,   164,   152,
     165,   164,   165,   165,   165,   168,   165,   155,     5,   157,
     213,   167,    68,   168,   170,   207,   208,   165,   139,   165,
       7,   159,   166,   168,   170,   211,   212,     3,     3,   139,
     165,   166,   170,   211,     3,   133,    44,    67,    79,    44,
      67,    79,     5,   177,     5,   133,     3,   133,     3,     3,
     175,   178,   175,   177,   178,   175,   178,   213,   167,   170,
     209,   210,   165,   165,   165,   152,   165,   155,   155,   155,
     164,   155,   213,     5,   164,   136,   164,   162,   164,   152,
     140,   152,   164,   162,   162,   162,   162,   162,   140,   152,
     164,   162,   162,   162,   209,     5,     5,   209,   209,   175,
     164,   162,   164,   152,   152,   152,   152,   165,   213,   165,
       3,   165,   208,   165,    25,   165,   168,   166,   166,   212,
     169,   168,    45,   165,   166,   166,   169,   134,     3,   134,
     134,   178,   165,   210,   165,   155,   155,   152,   152,   163,
     152,   164,   164,   162,   162,   163,   152,   164,   164,   162,
     133,     3,   133,   133,   152,   152,   174,   165,   165,   169,
     168,   174,   165,   165,   169,   211,   207,   211,   162,   152,
     152,   162,   162,   162,   152,   152,   162,   134,   162,   134,
     134,   169,     3,     3,   169,     3,   133,   133,   162,   162,
     164,   162,   162,   167,   167,   166,   166,   165,   166,   166,
     134,   134,   164,   164,   152,   164,   164,   165,   165,   152,
     152
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
    {globalSystem=globalWCS; globalSky=Coord::FK5;;}
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
#line 389 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(degToRad((yyvsp[(1) - (1)].real)),localSystem,localSky);;}
    break;

  case 67:
#line 390 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(degToRad((yyvsp[(1) - (1)].real)),localSystem,localSky);;}
    break;

  case 68:
#line 391 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 69:
#line 394 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 70:
#line 395 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 71:
#line 396 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 72:
#line 397 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 73:
#line 398 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 74:
#line 399 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 75:
#line 403 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 76:
#line 410 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 417 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 424 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 431 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 438 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 446 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 82:
#line 449 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 83:
#line 452 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 455 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 459 "frame/ds9parser.Y"
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
#line 472 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 87:
#line 480 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 488 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 495 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 503 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 510 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 92:
#line 517 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 93:
#line 518 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 94:
#line 519 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 95:
#line 520 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 96:
#line 521 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 97:
#line 524 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 98:
#line 525 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 99:
#line 526 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 100:
#line 527 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 101:
#line 528 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 102:
#line 529 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 103:
#line 530 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 104:
#line 531 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 105:
#line 532 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 106:
#line 533 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 107:
#line 534 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 108:
#line 535 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 109:
#line 536 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 110:
#line 537 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 111:
#line 538 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 112:
#line 539 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 113:
#line 540 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 114:
#line 541 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 115:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 116:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 117:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 118:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 119:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 120:
#line 547 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 121:
#line 548 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 122:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 123:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 124:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 125:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 126:
#line 555 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 556 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4_NO_E;;}
    break;

  case 128:
#line 557 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::SUPERGALACTIC;;}
    break;

  case 133:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 134:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::HELIOECLIPTIC;;}
    break;

  case 135:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 136:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 137:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 138:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 139:
#line 572 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 140:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 141:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 142:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 143:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 144:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 145:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 146:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 147:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 148:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 149:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 150:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 151:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 152:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 153:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 154:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 155:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 156:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 157:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 158:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 159:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 160:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 161:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 162:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 163:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 164:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 165:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 166:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 167:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 168:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 171:
#line 611 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 172:
#line 616 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 173:
#line 621 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 174:
#line 625 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 175:
#line 627 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 176:
#line 632 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 177:
#line 637 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 178:
#line 642 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 647 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 651 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 653 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 658 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 183:
#line 662 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 184:
#line 664 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 185:
#line 667 "frame/ds9parser.Y"
    {;}
    break;

  case 186:
#line 669 "frame/ds9parser.Y"
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
#line 677 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 188:
#line 678 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 189:
#line 679 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 190:
#line 683 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::SkyDist)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 191:
#line 690 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 192:
#line 697 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 193:
#line 704 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 194:
#line 711 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 195:
#line 718 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 196:
#line 725 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 197:
#line 732 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::SkyDist)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 198:
#line 739 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 199:
#line 748 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 200:
#line 753 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 201:
#line 758 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 202:
#line 763 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 203:
#line 769 "frame/ds9parser.Y"
    {
	  // global properties
	  globalSystem = Coord::PHYSICAL;
	  globalWCS = fr->wcsSystem();
	  globalSky = fr->wcsSky();
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
	  globalRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = Coord::PHYSICAL;
	  globalRulerDistFormat = Coord::DEGREE;
	  globalCompassCoordSystem = Coord::PHYSICAL;
	  globalCompassSkyFrame = Coord::FK5;
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
#line 815 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 207:
#line 816 "frame/ds9parser.Y"
    {strncpy(localColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 208:
#line 818 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 209:
#line 822 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 210:
#line 823 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 211:
#line 824 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 212:
#line 825 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 213:
#line 826 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 214:
#line 828 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 215:
#line 829 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 216:
#line 830 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 217:
#line 832 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 218:
#line 833 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 219:
#line 834 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 220:
#line 835 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 221:
#line 836 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 223:
#line 839 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 224:
#line 845 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 225:
#line 846 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 229:
#line 853 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::SkyDist)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 230:
#line 860 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 231:
#line 867 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 232:
#line 874 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 233:
#line 881 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 234:
#line 888 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 235:
#line 895 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::SkyDist)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 236:
#line 902 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::SkyDist)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 237:
#line 909 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 238:
#line 918 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 239:
#line 923 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 240:
#line 928 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 241:
#line 933 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 242:
#line 939 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 243:
#line 939 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 244:
#line 940 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 245:
#line 943 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 246:
#line 944 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 247:
#line 945 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 248:
#line 948 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 249:
#line 949 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 250:
#line 950 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 251:
#line 953 "frame/ds9parser.Y"
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
	  localCompassCoordSystem = globalCompassCoordSystem;
	  localCompassSkyFrame = globalCompassSkyFrame;
	  strcpy(localCompassNorth,globalCompassNorth);
	  strcpy(localCompassEast,globalCompassEast);
	  localCompassNArrow = globalCompassNArrow;
	  localCompassEArrow = globalCompassEArrow;
	  localTextAngle = globalTextAngle;
	  localTextRotate = globalTextRotate;
	  localCpanda = 1;
	  localEpanda = 1;
	  localBpanda = 1;
	;}
    break;

  case 252:
#line 1002 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 253:
#line 1003 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 254:
#line 1004 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 255:
#line 1005 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 256:
#line 1006 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 257:
#line 1007 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 258:
#line 1008 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 259:
#line 1011 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 260:
#line 1012 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 261:
#line 1016 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 262:
#line 1023 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 263:
#line 1025 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 264:
#line 1031 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 265:
#line 1038 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 266:
#line 1047 "frame/ds9parser.Y"
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

  case 267:
#line 1057 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 268:
#line 1065 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 269:
#line 1073 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 270:
#line 1082 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 271:
#line 1089 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1097 "frame/ds9parser.Y"
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

  case 273:
#line 1120 "frame/ds9parser.Y"
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

  case 274:
#line 1143 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 275:
#line 1151 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 276:
#line 1153 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 277:
#line 1158 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 278:
#line 1160 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 279:
#line 1167 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 280:
#line 1175 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1183 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 282:
#line 1189 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 283:
#line 1191 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1198 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 285:
#line 1205 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1212 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1219 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1226 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1233 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1240 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1247 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1254 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
#line 1263 "frame/ds9parser.Y"
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

  case 294:
#line 1273 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1281 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1289 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
#line 1299 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 298:
#line 1307 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1317 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1327 "frame/ds9parser.Y"
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

  case 301:
#line 1339 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 302:
#line 1347 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1357 "frame/ds9parser.Y"
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

  case 304:
#line 1369 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 305:
#line 1379 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 306:
#line 1388 "frame/ds9parser.Y"
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

  case 307:
#line 1410 "frame/ds9parser.Y"
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

  case 308:
#line 1434 "frame/ds9parser.Y"
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

  case 313:
#line 1464 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 316:
#line 1476 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 319:
#line 1484 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 322:
#line 1495 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 325:
#line 1505 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 326:
#line 1509 "frame/ds9parser.Y"
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
#line 4894 "frame/ds9parser.C"
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


#line 1536 "frame/ds9parser.Y"


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


