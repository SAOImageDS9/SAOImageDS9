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

static int globalFill;
static int localFill;

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
#line 139 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 497 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 510 "frame/ds9parser.C"

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
#define YYLAST   2667

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  328
/* YYNRULES -- Number of states.  */
#define YYNSTATES  847

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
     433,   437,   442,   446,   451,   455,   459,   463,   471,   475,
     479,   483,   488,   491,   494,   497,   500,   503,   506,   508,
     510,   513,   515,   517,   519,   520,   524,   526,   530,   534,
     539,   543,   547,   551,   555,   561,   563,   565,   567,   571,
     576,   580,   585,   589,   593,   597,   605,   609,   613,   617,
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
     142,     0,    -1,   185,   143,   213,    -1,   143,   144,   158,
      -1,   144,   158,    -1,    -1,    37,   160,    -1,    93,    -1,
      56,   181,   150,    -1,    90,     3,    -1,    -1,   175,   145,
     150,    -1,    -1,   177,   146,   150,    -1,    -1,    66,   147,
     150,    -1,   196,   201,    -1,   196,   198,   201,    -1,   196,
     129,   148,    -1,   199,    -1,   198,   199,    -1,    90,     3,
      -1,    -1,   149,     5,    -1,    -1,    -1,   129,   151,     5,
      -1,   213,    -1,    -1,   129,   153,     5,   213,    -1,   129,
     186,   213,    -1,    -1,   129,   186,   154,     5,   213,    -1,
     213,    -1,    -1,   156,     5,   213,    -1,   186,   213,    -1,
      -1,   186,   157,     5,   213,    -1,   130,    -1,   131,    -1,
      15,    -1,     4,    -1,     3,    -1,    71,    -1,    70,    -1,
       3,    -1,   128,    -1,   127,    -1,    71,    -1,    91,    -1,
      69,    -1,    68,    -1,    70,    -1,    47,    -1,    -1,   132,
      -1,    -1,   133,    -1,    -1,   134,    -1,    -1,   135,    -1,
     135,   135,    -1,    -1,   167,    -1,   159,    -1,     6,    -1,
       7,    -1,   159,    -1,    10,    -1,    11,    -1,     6,    -1,
       8,    -1,     9,    -1,   159,   162,   159,    -1,    10,   162,
      10,    -1,    11,   162,    11,    -1,     6,   162,     6,    -1,
       8,   162,     8,    -1,     9,   162,     9,    -1,    68,   136,
       3,    -1,    12,    -1,    13,    -1,    14,    -1,   171,   162,
     171,    -1,   172,   162,   173,    -1,   173,   162,   173,    -1,
     159,   162,   159,    -1,     6,   162,     6,    -1,    11,   162,
      11,    -1,    10,   162,    10,    -1,    61,    -1,    72,    -1,
      40,    -1,    16,    -1,   176,    -1,    97,    -1,    98,    -1,
      99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,
     104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,
     109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,
     114,    -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,
     119,    -1,   120,    -1,   121,    -1,   122,    -1,   123,    -1,
     124,    -1,    51,    -1,    21,    -1,    52,    -1,    53,    -1,
      63,    -1,    59,    -1,    55,    -1,    85,    -1,    42,    -1,
      57,    -1,    38,    -1,    18,    -1,    19,    -1,    83,    -1,
      58,    -1,    35,    -1,    50,    -1,    43,    -1,    67,    -1,
      79,    -1,    39,    -1,    62,    -1,    84,    -1,    83,    -1,
      95,    -1,    58,    -1,    94,    -1,    23,    67,    -1,    67,
      -1,    45,    67,    -1,    23,    43,    -1,    43,    -1,    45,
      43,    -1,    23,    79,    -1,    79,    -1,    45,    79,    -1,
      39,    -1,    87,    -1,    30,    -1,   125,    -1,    78,    -1,
      54,    -1,    64,    -1,    96,    -1,   181,   162,   182,    -1,
     182,    -1,   179,   136,   161,    -1,    30,   136,     5,    -1,
      36,   136,     3,     3,    -1,   125,   136,     3,    -1,    54,
     136,     5,    -1,    87,   136,     5,    -1,    35,    -1,    84,
      -1,    22,    -1,    75,   136,   197,    -1,    75,   136,   197,
       3,    -1,    49,   136,     3,    -1,    65,   136,     3,     3,
      -1,    92,   136,     3,    -1,    32,   136,     3,    -1,    81,
     136,   183,    -1,    31,   136,   184,     5,     5,     3,     3,
      -1,    88,   136,   167,    -1,    89,   136,     3,    -1,    97,
     136,   176,    -1,   175,   177,   175,   178,    -1,   175,   175,
      -1,   175,   178,    -1,   177,   175,    -1,   177,   178,    -1,
      66,   175,    -1,    66,   178,    -1,   178,    -1,    74,    -1,
     175,   177,    -1,   175,    -1,   177,    -1,    66,    -1,    -1,
     186,   162,   187,    -1,   187,    -1,   179,   136,   161,    -1,
      30,   136,     5,    -1,    36,   136,     3,     3,    -1,   125,
     136,     3,    -1,    54,   136,     5,    -1,    87,   136,     5,
      -1,    86,   136,     5,    -1,    27,   136,   180,     5,     5,
      -1,    35,    -1,    84,    -1,    22,    -1,    75,   136,   197,
      -1,    75,   136,   197,     3,    -1,    49,   136,     3,    -1,
      65,   136,     3,     3,    -1,    92,   136,     3,    -1,    32,
     136,     3,    -1,    81,   136,   188,    -1,    31,   136,   189,
       5,     5,     3,     3,    -1,    88,   136,   167,    -1,    89,
     136,     3,    -1,    33,   136,   190,    -1,    46,   136,   192,
      -1,    26,   136,   194,    -1,   175,   177,   175,   178,    -1,
     175,   175,    -1,   175,   178,    -1,   177,   175,    -1,   177,
     178,    -1,    66,   175,    -1,    66,   178,    -1,   178,    -1,
      74,    -1,   175,   177,    -1,   175,    -1,   177,    -1,    66,
      -1,    -1,   191,   133,   209,   134,   133,   207,   134,    -1,
      60,    -1,    -1,   193,   133,   209,   134,   133,   211,   134,
     133,   167,   134,    -1,    60,    -1,    -1,   195,   133,   209,
     134,   133,   211,   134,   133,   167,   134,    -1,    60,    -1,
      -1,    28,    -1,    24,    -1,    41,    -1,    34,    -1,   126,
      -1,    20,    -1,    25,    -1,   137,    -1,   138,    -1,    92,
     163,   174,   162,   168,   162,   167,   164,   165,   155,    -1,
      -1,    82,   200,   163,   205,   164,   165,   155,    -1,    87,
     163,   174,   164,   165,   155,    -1,    81,   163,   174,   162,
     174,   164,   165,   155,    -1,    31,   163,   174,   162,   168,
     164,   165,   155,    -1,    77,   163,   174,   162,   174,   162,
     168,   164,   165,   155,    -1,    29,   163,   174,   162,   168,
     164,   165,   155,    -1,    32,   163,   174,   162,   166,   164,
     165,   155,    -1,    28,   163,   174,   162,   168,   164,   165,
     152,    -1,    29,   163,   174,   162,   168,   164,   165,   152,
      -1,    44,   163,   174,   162,   169,   162,   166,   164,   165,
     152,    -1,    24,   163,   174,   162,   169,   162,   166,   164,
     165,   152,    -1,    80,   163,   174,   162,   169,   162,   166,
     164,   165,   152,    -1,    -1,    76,   202,   163,   205,   164,
     165,   152,    -1,    -1,    82,   203,   163,   205,   164,   165,
     152,    -1,    65,   163,   174,   162,   174,   164,   165,   152,
      -1,    92,   163,   174,   162,   168,   162,   167,   164,   165,
     152,    -1,    87,   163,   174,   164,   165,   152,    -1,    -1,
      87,   163,   174,   162,     5,   164,   204,   165,   152,    -1,
      75,   163,   174,   164,   165,   152,    -1,    28,    75,   163,
     174,   164,   165,   152,    -1,    24,    75,   163,   174,   164,
     165,   152,    -1,    41,    75,   163,   174,   164,   165,   152,
      -1,    34,    75,   163,   174,   164,   165,   152,    -1,   126,
      75,   163,   174,   164,   165,   152,    -1,    20,    75,   163,
     174,   164,   165,   152,    -1,    25,    75,   163,   174,   164,
     165,   152,    -1,    81,   163,   174,   162,   174,   164,   165,
     152,    -1,    31,   163,   174,   162,   168,   164,   165,   152,
      -1,    77,   163,   174,   162,   174,   162,   168,   164,   165,
     152,    -1,    17,   163,   174,   162,   168,   162,   168,   164,
     165,   152,    -1,    17,   163,   174,   162,   168,   162,   168,
     162,   207,   164,   165,   152,    -1,    17,   163,   174,   162,
     168,   162,   168,   162,   170,   164,   165,   152,    -1,    44,
     163,   174,   162,   169,   162,   169,   162,   166,   164,   165,
     152,    -1,    44,   163,   174,   162,   169,   162,   169,   162,
     170,   162,   166,   164,   165,   152,    -1,    44,   163,   174,
     162,   169,   162,   169,   162,   211,   162,   166,   164,   165,
     152,    -1,    44,   163,   174,   162,   169,   162,   166,   164,
     139,   140,    44,   163,   174,   162,   169,   162,   166,   164,
      -1,    24,   163,   174,   162,   169,   162,   169,   162,   166,
     164,   165,   152,    -1,    24,   163,   174,   162,   169,   162,
     169,   162,   211,   162,   166,   164,   165,   152,    -1,    24,
     163,   174,   162,   169,   162,   169,   162,   170,   162,   166,
     164,   165,   152,    -1,    24,   163,   174,   162,   169,   162,
     166,   164,   139,   140,    24,   163,   174,   162,   169,   162,
     166,   164,    -1,    33,   163,   174,   162,   167,   162,   167,
     162,     3,   162,   168,   162,   168,   162,     3,   164,   165,
     152,    -1,    46,   163,   174,   162,   167,   162,   167,   162,
       3,   162,   169,   162,   169,   162,     3,   162,   166,   164,
     165,   152,    -1,    26,   163,   174,   162,   167,   162,   167,
     162,     3,   162,   169,   162,   169,   162,     3,   162,   166,
     164,   165,   152,    -1,    73,   163,   174,   162,   167,   162,
     167,   164,   165,   152,    -1,    73,   163,   174,   162,   167,
     162,   167,   162,   209,   164,   165,   152,    -1,    73,   163,
     174,   162,   167,   162,   167,   162,   170,   164,   165,   152,
      -1,    48,   163,   164,   165,   152,    -1,    32,   163,   174,
     162,   166,   164,   165,   152,    -1,   205,   162,   206,    -1,
     206,    -1,   174,    -1,   207,   162,   208,    -1,   208,    -1,
     168,    -1,   209,   162,   210,    -1,   210,    -1,   167,    -1,
     211,   162,   212,    -1,   212,    -1,   168,   162,   168,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   300,   300,   303,   304,   307,   308,   309,   311,   312,
     314,   314,   315,   315,   316,   316,   318,   319,   320,   323,
     324,   325,   326,   326,   329,   330,   330,   333,   334,   334,
     335,   336,   336,   339,   340,   340,   341,   342,   342,   345,
     346,   347,   350,   351,   354,   355,   358,   360,   361,   362,
     363,   365,   366,   367,   368,   371,   372,   375,   376,   379,
     380,   383,   384,   385,   388,   389,   392,   393,   394,   397,
     398,   399,   400,   401,   402,   405,   412,   419,   426,   433,
     440,   449,   452,   455,   458,   461,   474,   482,   490,   497,
     505,   512,   520,   521,   522,   523,   524,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   569,   570,   571,   574,   575,
     576,   577,   578,   579,   580,   581,   582,   583,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   609,
     610,   613,   618,   623,   628,   629,   634,   639,   644,   649,
     654,   655,   660,   664,   669,   670,   674,   675,   684,   685,
     686,   689,   696,   703,   710,   717,   724,   731,   738,   745,
     754,   759,   764,   769,   776,   819,   820,   823,   824,   825,
     830,   831,   832,   833,   834,   836,   837,   838,   840,   841,
     842,   843,   844,   845,   846,   847,   854,   855,   856,   857,
     858,   861,   868,   875,   882,   889,   896,   903,   910,   917,
     926,   931,   936,   941,   948,   948,   949,   952,   952,   954,
     957,   957,   959,   962,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1021,  1022,  1025,  1033,  1033,  1040,  1047,  1056,  1066,
    1074,  1082,  1091,  1098,  1106,  1129,  1152,  1161,  1161,  1168,
    1168,  1176,  1184,  1192,  1199,  1199,  1207,  1214,  1221,  1228,
    1235,  1242,  1249,  1256,  1263,  1272,  1282,  1290,  1297,  1307,
    1315,  1325,  1335,  1347,  1355,  1365,  1377,  1387,  1396,  1418,
    1442,  1467,  1468,  1469,  1471,  1473,  1482,  1483,  1486,  1489,
    1490,  1493,  1500,  1501,  1504,  1511,  1512,  1515,  1519
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
  "FIXED_", "FK4_", "FK4_NO_E_", "FK5_", "FONT_", "GALACTIC_", "GLOBAL_",
  "HELIOECLIPTIC_", "HIGHLITE_", "ICRS_", "IGNORE_", "IMAGE_", "INCLUDE_",
  "J2000_", "KEY_", "LINE_", "LINEAR_", "MOVE_", "N_", "NO_", "OFF_",
  "ON_", "PHYSICAL_", "PIE_", "PIXELS_", "POINT_", "POLYGON_",
  "PROJECTION_", "PROPERTY_", "ROTATE_", "ROTBOX_", "RULER_", "SEGMENT_",
  "SELECT_", "SOURCE_", "SUPERGALACTIC_", "TAG_", "TEXT_", "TEXTANGLE_",
  "TEXTROTATE_", "TILE_", "TRUE_", "VECTOR_", "VERSION_", "UNHIGHLITE_",
  "UNSELECT_", "UPDATE_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_",
  "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_",
  "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_",
  "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WIDTH_",
  "X_", "Y_", "YES_", "'#'", "'\\n'", "';'", "','", "'('", "')'", "'|'",
  "'='", "'+'", "'-'", "'&'", "'!'", "$accept", "start", "commands",
  "command", "@1", "@2", "@3", "hash", "@4", "comment", "@5",
  "shapeComment", "@6", "@7", "nonshapeComment", "@8", "@9", "terminator",
  "numeric", "debug", "yesno", "sp", "bp", "ep", "conjunction", "optangle",
  "angle", "value", "vvalue", "numberof", "sexagesimal", "hms", "dms",
  "coord", "coordSystem", "wcsSystem", "skyFrame", "skyDist", "property",
  "callBack", "global", "globalProperty", "globalRuler", "globalCompass",
  "initGlobal", "local", "localProperty", "localRuler", "localCompass",
  "localCpanda", "@10", "localEpanda", "@11", "localBpanda", "@12",
  "initLocal", "pointShape", "include", "nonshape", "@13", "shape", "@14",
  "@15", "@16", "polyNodes", "polyNode", "aRads", "aRad", "aAngs", "aAng",
  "vRads", "vRad", "postLocal", 0
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
     182,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   184,   184,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     189,   189,   189,   189,   191,   190,   190,   193,   192,   192,
     195,   194,   194,   196,   197,   197,   197,   197,   197,   197,
     197,   198,   198,   199,   200,   199,   199,   199,   199,   199,
     199,   199,   201,   201,   201,   201,   201,   202,   201,   203,
     201,   201,   201,   201,   204,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   205,   205,   206,   207,
     207,   208,   209,   209,   210,   211,   211,   212,   213
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
       3,     4,     3,     4,     3,     3,     3,     7,     3,     3,
       3,     4,     2,     2,     2,     2,     2,     2,     1,     1,
       2,     1,     1,     1,     0,     3,     1,     3,     3,     4,
       3,     3,     3,     3,     5,     1,     1,     1,     3,     4,
       3,     4,     3,     3,     3,     7,     3,     3,     3,     3,
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
     204,     0,   253,     1,    95,   126,     0,    94,   133,   125,
     127,   128,   131,     0,   134,   130,    92,   129,    14,    93,
     132,     0,     7,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   253,     0,    10,    96,    12,     0,    45,    44,     6,
     179,     0,     0,     0,   177,     0,   145,   142,     0,   141,
       0,   139,   146,     0,   143,     0,   144,     0,   138,   178,
       0,     0,     0,     0,     0,     0,     0,    55,   170,    24,
       9,     0,     2,    41,    39,    40,     4,    24,    24,    57,
       0,    57,     0,    57,    57,    57,    57,    57,    57,     0,
       0,    57,    57,    57,    57,    57,    57,   277,    57,    57,
      57,   279,    57,    57,     0,    22,   261,   262,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    56,     8,     0,
      15,     3,    11,    13,    58,     0,    57,    57,     0,    57,
       0,    57,     0,     0,     0,     0,     0,    57,    57,     0,
       0,    59,     0,     0,     0,    57,     0,     0,     0,    57,
       0,     0,    57,    57,    57,    57,    57,    57,   264,    57,
       0,    57,    18,     0,     0,    19,    17,   172,   203,   201,
     202,     0,   185,     0,   182,   175,     0,   259,   255,   260,
     254,   257,   256,   258,   180,   136,   137,   135,     0,   199,
       0,     0,   198,   186,   176,    43,    42,    67,    68,    66,
     188,   189,   184,   190,   174,    46,    54,    52,    51,    53,
      49,    50,    48,    47,   171,     0,   169,    55,    55,    55,
      82,    83,    84,    55,    55,    55,    55,    55,     0,     0,
      55,     0,    55,     0,    55,    55,    55,    55,    55,     0,
       0,    55,    55,    60,    61,    55,    55,    59,     0,    55,
      55,    55,     0,    59,    55,     0,     0,     0,     0,     0,
       0,    57,     0,    21,     0,    23,    20,   200,     0,   173,
     183,   181,   196,   197,   192,     0,   193,   194,   195,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    59,
       0,    59,     0,    59,     0,     0,     0,    64,     0,    59,
      59,     0,     0,    62,   328,     0,     0,    61,   318,    55,
     317,     0,     0,     0,    55,     0,    61,     0,    59,    55,
      55,    55,    55,    55,     0,    59,    55,     0,     0,    89,
      91,    90,    88,    85,    86,    87,    72,    73,    74,    70,
      71,    69,    55,    61,    61,    55,    55,    55,    55,    55,
      55,    55,    61,    55,    61,    59,    59,    59,    59,    65,
      55,    61,    61,    55,    55,    63,    28,   314,    27,    59,
      55,   328,     0,    61,    55,    55,    59,    61,    59,   328,
      55,    61,     0,     0,    64,     0,     0,    59,    61,     0,
       0,   191,     0,   328,   328,     0,     0,     0,     0,     0,
       0,    64,   328,     0,   328,    61,    61,    61,    61,     0,
     328,   328,    64,     0,   217,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,     0,     0,     0,     0,     0,    55,   206,
      61,     0,   286,   316,   328,     0,    64,    61,   328,   284,
     283,     0,   328,    59,    59,    59,    55,    59,    61,   328,
      55,   187,    55,   292,   288,    78,    79,    80,    76,    77,
      75,    67,    66,    59,    55,   293,    55,   287,   328,   328,
     328,   328,    55,   290,   289,    59,    55,    55,   250,     0,
       0,     0,     0,   244,     0,   247,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
       0,    30,   328,    55,   278,    59,    59,   328,   280,    61,
      59,   291,    61,    61,    61,     0,    61,   328,   266,     0,
      55,    33,     0,     0,    61,    61,    64,     0,   272,   273,
     295,   315,     0,    61,    64,     0,   252,   230,     0,     0,
     163,   161,   156,     0,   166,   150,   167,   153,   165,   159,
     148,   162,   151,   149,   168,   164,     0,   208,   243,   241,
     242,     0,   223,   246,   228,     0,     0,   249,   229,     0,
     220,   211,     0,   218,     0,   239,     0,     0,   238,   224,
     213,   212,   226,   227,   222,   210,    29,   207,   328,   205,
     281,     0,    61,    61,    61,   294,   328,    61,   328,   328,
     328,    59,   328,   265,   328,     0,    36,    59,     0,   321,
      59,    55,   320,   328,     0,   328,    72,    69,    59,    55,
      55,    55,   326,    55,    55,     0,   328,    59,    55,    55,
      55,     0,   155,   152,   158,   157,   154,   160,     0,   240,
       0,     0,   209,     0,   221,   219,   236,   237,   232,     0,
     233,   234,   235,    32,   324,    59,    59,   323,   328,   328,
     328,   285,   328,   270,   268,   271,    61,   267,    35,   328,
      61,     0,    61,     0,    61,   297,     0,   275,    61,     0,
      64,    64,     0,     0,     0,   274,    61,    64,    64,     0,
      55,   214,     0,    55,    55,     0,    61,     0,    61,   311,
     296,   276,   282,   328,    38,   328,    81,   328,   319,   328,
      57,   328,   327,    59,    59,   325,    55,    55,    57,   328,
      59,    59,    55,     0,     0,     0,     0,   231,   328,   322,
     328,   269,   263,   299,   298,     0,   304,    61,    61,     0,
       0,     0,   300,    61,    61,     0,     0,   225,     0,     0,
     313,   312,    55,   328,   328,    55,    55,    55,   328,   328,
      55,    55,    55,    55,     0,   306,   305,     0,     0,     0,
     301,   302,     0,     0,     0,   245,     0,    55,    55,    59,
      55,    55,     0,     0,    64,    64,    61,    64,    64,     0,
       0,    59,    59,   328,    59,    59,   251,   248,   307,    61,
     308,   303,    61,   328,   328,   310,   309
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,    52,    97,    98,    89,   192,   193,   148,
     245,   397,   466,   539,   558,   559,   645,    96,   253,    59,
     244,   737,   155,   274,   334,   388,   389,   659,   381,   650,
     254,   255,   256,   338,    53,    54,    55,   222,   467,   596,
      87,    88,   223,   201,     2,   560,   469,   619,   601,   604,
     605,   608,   609,   577,   578,    56,   214,   128,   195,   291,
     129,   175,   179,   549,   339,   340,   651,   652,   696,   697,
     661,   662,   398
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -679
static const yytype_int16 yypact[] =
{
    -679,     5,  1601,  -679,  -679,  -679,    78,  -679,  -679,  -679,
    -679,  -679,  -679,  2514,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    39,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  1425,    21,  -679,  -679,  -679,  1185,  -679,  -679,  -679,
    -679,   -80,   -67,   -64,   -53,   -31,  -679,  -679,     1,  -679,
       7,  -679,  -679,    35,  -679,    38,  -679,    40,  -679,    64,
      68,    77,    89,    91,   101,   109,   112,    24,  -679,   -76,
    -679,    21,  -679,  -679,  -679,  -679,  -679,   -76,   -76,    54,
     -29,   -68,    82,    54,   -66,    54,    54,    54,    54,   174,
     175,    54,    54,    54,    54,    54,    54,  -679,    54,    54,
      54,  -679,    54,    54,   181,   461,  -679,  -679,  1709,  -679,
     253,  2084,   256,   257,   258,   262,   265,   370,  1757,   266,
     202,   267,   273,  2543,   274,   204,  -679,  -679,  -679,  2514,
    -679,  -679,  -679,  -679,  -679,   619,    54,    54,   619,    54,
     619,    54,   619,   619,   619,   619,   619,    54,    54,   619,
     619,   148,   619,   619,   619,    54,   619,   619,   619,    54,
     619,   619,    54,    54,    54,    54,    54,    54,  -679,    54,
     283,    54,  -679,   282,   355,  -679,  -679,  -679,  -679,   586,
    -679,   292,  -679,   295,  -679,  -679,   296,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,   297,  -679,  -679,  -679,  2302,  -679,
    1975,  2302,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,   299,  -679,   169,   169,   169,
    -679,  -679,  -679,   169,   169,   169,   169,   169,   619,   619,
     169,   619,   169,   619,   169,   169,   169,   169,   169,   619,
     619,   169,   169,  -679,   167,   169,   169,   148,   619,   169,
     169,   169,   619,    -1,   169,   619,   619,   619,   619,   619,
     619,    54,   619,  -679,   619,  -679,  -679,  -679,   303,  -679,
    -679,  -679,  -679,  -679,  -679,  2411,  -679,  -679,  -679,  -679,
     304,   302,   298,   212,   308,   300,   300,   652,   148,   148,
     741,   148,   202,   148,   652,   652,   652,   202,   202,   148,
     148,   741,   202,   186,   187,   619,   202,   167,  -679,   149,
    -679,   619,   741,   619,   149,   317,   167,   652,   148,   169,
     169,   169,   169,   169,   619,   148,   169,   323,   184,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,   169,   167,   167,   169,   169,   169,   169,   169,
     169,   169,   167,   169,   167,   148,   148,   148,   148,  -679,
     169,   167,   167,   169,   169,  -679,  2413,  -679,  -679,   148,
     169,   187,   619,   167,   169,   169,   148,   167,   148,   187,
     169,   167,   652,   652,   202,   619,   619,    67,   167,   652,
     325,  -679,   652,   187,   187,   327,   326,   331,   334,   330,
     212,   677,   187,   202,   187,   167,   167,   167,   167,   202,
     187,   187,   677,   202,  -679,   209,   210,   211,   213,   214,
     221,   -53,   225,   226,   228,   229,   231,   233,   239,    64,
     240,   243,   244,   247,   249,   255,   343,   260,    80,  -679,
     167,   202,  -679,  -679,   187,   652,   202,   167,   187,  -679,
    -679,   202,   187,   148,   148,   148,   169,   148,   167,  1545,
     169,  -679,   149,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,    18,    13,   148,   169,  -679,   169,  -679,   187,   187,
     187,   187,   169,  -679,  -679,   148,   169,   169,   329,   557,
     387,  2193,   394,   340,   399,   346,   405,   407,   417,   370,
    1866,   416,   418,   202,   421,   424,   425,  -679,   204,   428,
    2413,  -679,   187,   149,  -679,   148,   148,   187,  -679,   167,
     148,  -679,   167,   167,   167,   652,   167,  1545,  -679,   429,
     123,  -679,   202,    51,   167,   -95,   551,   438,  -679,  -679,
    -679,  -679,   440,   -33,   551,   443,  -679,  -679,   277,    45,
    -679,  -679,  -679,   116,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,   444,  -679,  -679,   586,
    -679,   445,  -679,  -679,  -679,   315,   448,  -679,  -679,   319,
    -679,  -679,   450,   452,  2302,  -679,  1975,  2302,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,  -679,
    -679,   104,   167,   167,   167,  -679,   187,   167,  1545,  1545,
    1545,   148,  1545,  -679,  -679,   456,  -679,   148,   321,  -679,
     148,   149,  -679,   187,   322,   187,    -9,   208,   148,   169,
     169,   169,  -679,   169,   169,   332,   187,   148,   169,   169,
     169,   202,  -679,  -679,  -679,  -679,  -679,  -679,   458,  -679,
     462,   202,  -679,   202,  -679,  -679,  -679,  -679,  -679,  2411,
    -679,  -679,  -679,  -679,  -679,   148,    31,  -679,   187,   187,
     187,  -679,   187,  -679,  -679,  -679,   167,  -679,  -679,  -679,
     167,   463,   167,   652,   167,  -679,   446,  -679,   167,   652,
     202,   732,   741,   652,   427,  -679,   167,   202,   732,   741,
    -101,  -679,   466,   -83,   -16,   184,   167,   202,   167,  -679,
    -679,  -679,  -679,  1545,  -679,  1545,  -679,   187,  -679,   187,
      54,   187,  -679,   148,   148,  -679,   169,   169,    54,   187,
     148,   148,   169,   342,   475,   347,   350,  -679,   187,  -679,
     187,  -679,  -679,  -679,  -679,   619,  -679,   167,   167,   741,
     652,   619,  -679,   167,   167,   741,   652,  -679,   652,   652,
    -679,  -679,   169,   187,   187,   169,   169,   169,   187,   187,
     169,    -5,     8,    12,   741,  -679,  -679,   481,   483,   741,
    -679,  -679,   491,   365,   652,  -679,   371,   169,   169,   148,
     169,   169,   202,   202,   202,   202,   167,   202,   202,   369,
     372,   148,   148,   187,   148,   148,  -679,  -679,  -679,   167,
    -679,  -679,   167,   187,   187,  -679,  -679
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -679,  -679,  -679,   454,  -679,  -679,  -679,  -679,  -679,    93,
    -679,   665,  -679,  -679,  -525,  -679,  -679,   420,    46,  -679,
     -30,   -87,   -93,   494,   564,    60,   -17,   377,  -284,  -490,
     198,  -679,   -82,    66,   -86,   375,   -90,  -117,   -10,  -679,
    -679,   364,  -679,  -679,  -679,   118,   -25,  -679,  -679,  -679,
    -679,  -679,  -679,  -679,  -679,  -679,    -6,   404,   338,  -679,
     391,  -679,  -679,  -679,  -254,   122,  -255,  -179,  -584,  -202,
    -572,  -678,   -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -329
static const yytype_int16 yytable[] =
{
     149,    92,   669,    86,   -55,     3,   -67,   157,   158,   161,
     160,   162,   163,   164,   165,   166,   -55,   -55,   169,   170,
     171,   172,   173,   174,   -55,   176,   177,   178,   344,   180,
     181,   147,   643,   763,   -55,   -55,    93,   -55,   -55,   -24,
     333,   200,    90,   755,   654,   199,   156,   393,   221,   147,
     755,   765,   220,   146,   225,   226,   130,   366,   405,   367,
     368,   369,   370,   258,   259,   154,   261,   154,   263,   131,
     -55,   -55,   132,   -55,   269,   270,   660,   -55,   -55,   -55,
     -55,   -55,   278,  -140,   668,   -31,   282,   730,   672,   285,
     286,   287,   288,   289,   290,  -328,   292,   733,   294,   734,
     417,   303,   333,   306,   308,   133,   665,   225,   226,   297,
     227,   228,   673,   703,   704,   705,   147,   707,   766,   648,
     -67,   -67,   -67,   230,   674,   -67,   -67,   147,   -37,   813,
     305,   147,   302,   273,   304,   307,   755,   134,  -328,    86,
     147,   695,   815,   135,   147,   147,   816,   504,    57,    58,
     147,    94,    95,   146,   -24,   -24,   147,   159,   516,   675,
     310,   311,   312,   147,   -59,   273,   313,   314,   315,   316,
     317,   136,   648,   320,   137,   322,   138,   324,   325,   326,
     327,   328,   150,   676,   331,   332,   229,   154,   335,   336,
     152,   153,   341,   342,   343,   677,   345,   347,   354,   147,
    -147,   273,   215,   216,   139,   225,   226,   235,   227,   228,
    -328,  -328,   147,   140,   801,   225,   226,   803,   771,   358,
     772,   257,   217,   -66,   260,   141,   262,   142,   264,   265,
     266,   267,   268,   364,   365,   271,   272,   143,   275,   276,
     277,   421,   279,   280,   281,   144,   283,   284,   145,   167,
     168,   236,   402,  -328,  -328,   147,   182,   402,   197,   202,
     203,   204,   412,   413,   414,   415,   416,   205,   206,   419,
     231,   224,   237,   238,   239,   240,   232,   234,   -59,   -59,
     -59,   147,   273,   273,   -59,   422,   293,   295,   425,   426,
     427,   428,   429,   430,   431,   241,   433,   298,   299,   300,
     301,   147,   333,   439,   309,   383,   442,   443,   357,   361,
     359,   390,   360,   471,   252,   394,   396,   475,   476,   400,
     250,   395,   408,   481,   318,   319,   420,   321,   491,   323,
     402,   242,   243,   495,   496,   329,   330,   -66,   -66,   -66,
     497,   499,   -66,   -66,   498,   518,   519,   520,   537,   521,
     522,   348,   349,   350,   351,   352,   353,   523,   355,   362,
     356,   524,   525,   371,   526,   527,   380,   528,   229,   529,
     371,   371,   371,   229,   229,   530,   531,   380,   229,   532,
     533,   540,   229,   534,   183,   535,   184,   185,   380,   576,
     207,   536,   597,   371,   208,   209,   538,   602,   210,   555,
     603,   399,   606,   562,   211,   563,   607,   404,   610,   406,
     671,   212,   611,   618,   425,   430,   506,   566,   541,   567,
     612,   620,   512,   621,   623,   572,   517,   624,   625,   574,
     575,   600,   186,   628,   644,   599,   187,   188,   756,   561,
     617,   663,   189,   664,   616,   762,   670,   191,   681,   678,
     680,   682,   683,   684,   543,   685,   631,   711,   371,   371,
     229,   709,   716,   731,   550,   371,   746,   732,   371,   764,
     750,   758,   724,   540,   485,   786,   500,   502,   787,   229,
     788,   486,   487,   789,   818,   229,   819,   626,   502,   229,
     183,   503,   184,   185,   821,   795,   213,   687,   822,   690,
     692,   800,   515,   836,   823,    91,   837,   561,   627,   679,
     646,   151,   363,   246,   468,   629,   622,   229,   233,   196,
     817,   371,   229,   613,   473,   820,   689,   229,   686,   194,
     688,   691,   296,   802,   748,   769,   546,     0,   186,     0,
       0,     0,   187,   188,     0,   647,     0,     0,   189,     0,
       0,   190,     0,   191,   225,   226,     0,   656,   228,   367,
     368,   369,   370,     0,   713,     0,     0,     0,     0,     0,
       0,     0,   719,   720,   721,     0,   722,   723,   693,   229,
     579,   727,   728,   729,     0,     0,     0,   580,   561,   561,
     561,     0,   561,     0,   708,     0,   581,     0,   126,   127,
     582,   371,   583,   735,     0,     0,     0,     5,   229,   371,
       0,   584,   657,     0,   694,   585,     0,     0,   767,   648,
     657,   586,   225,   226,   587,   247,   658,     0,     8,   248,
     249,   250,   251,   252,   667,   588,   589,     9,    10,    11,
     590,    12,     0,    14,   591,    15,     0,     0,     0,    17,
       0,   592,   593,   594,   694,   225,   226,   775,   366,   744,
     367,   368,   369,   370,   694,   781,   694,     0,     0,   779,
     780,    20,     0,     0,     0,   785,     0,   229,     0,     0,
     225,   226,   595,   501,   228,   376,   377,   378,   379,     0,
       0,     0,     0,   561,   372,   561,     0,     0,     0,     0,
       0,   385,   386,   387,     0,   804,     0,     0,   807,   808,
     809,     0,     0,   812,   814,   713,   814,   229,     0,     0,
     694,     0,     0,     0,   410,     0,     0,   229,     0,   229,
     824,   825,     0,   827,   828,   225,   226,     0,   656,   228,
     367,   368,   369,   370,   225,   226,     0,   375,     0,   376,
     377,   378,   379,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,     0,   371,   229,   657,   380,   371,
       0,   337,     0,   229,   657,   380,     0,   346,     0,     0,
     753,   754,     0,   229,     0,     0,     0,   760,   761,   483,
     484,     0,     0,     0,     0,     0,   490,     0,     0,   492,
       0,     0,     0,     0,     0,   829,   830,     0,     0,     0,
       0,     0,   373,   374,     0,   382,     0,   384,     0,     0,
       0,     0,     0,   391,   392,   380,   371,     0,     0,     0,
       0,   380,   371,   403,   371,   371,     0,     0,   407,     0,
       0,   792,   411,     0,     0,     0,     0,   797,     0,   418,
     380,     0,   545,     0,     0,   380,     0,     0,     0,     0,
     371,     0,     0,     0,     0,     0,     0,     0,   229,   229,
     229,   229,     0,   229,   229,     0,     0,     0,     0,   435,
     436,   437,   438,     0,   831,   832,     0,   834,   835,     0,
       0,     0,     0,   470,     0,     0,     0,     0,     0,     0,
     477,   401,   479,     0,     0,     0,     0,     0,     0,     0,
     409,   488,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   641,     0,     0,     0,     0,   423,   424,     0,
     649,     0,     0,     0,     0,     0,   432,     0,   434,     0,
       0,     0,     0,     0,     0,   440,   441,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,   478,     0,     0,     0,   482,     0,   552,   553,   554,
       0,   556,   489,     0,     0,     0,   564,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   565,     0,   508,
     509,   510,   511,     0,     0,     0,     0,     0,     0,   573,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   542,     0,     0,   632,     0,   633,
     634,   547,     0,     0,   637,     0,     0,     0,     0,     0,
       0,     0,   557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   472,     0,     0,     0,
       0,     0,     0,     0,   480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   493,   494,
     649,     0,     0,     0,     0,     0,   752,   505,     0,   507,
     757,     0,     0,     0,     0,   513,   514,     0,     0,     0,
       0,     0,     0,   636,     0,     0,   638,   639,   640,     0,
     642,     0,     0,     0,     0,     0,     0,     0,   653,   655,
       0,     0,     0,     0,     0,   706,     0,   666,     0,   544,
       0,   710,     0,   548,   712,   714,     0,   551,     0,     0,
       0,     0,   718,     0,     0,     0,     0,   796,     0,     0,
       0,   726,     0,     0,     0,   649,     0,     0,     0,     0,
       0,     0,     0,   568,   569,   570,   571,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   736,
     738,     0,     0,     0,     0,     0,   698,   699,   700,     0,
       0,   702,    99,     0,     0,   100,     0,   630,     0,   101,
     102,   103,   635,   104,   105,     0,   106,   107,   108,   109,
       0,     0,     0,     0,     0,     0,   110,     0,     0,   111,
       0,   112,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   777,   778,     0,
     114,     0,     0,     0,   783,   784,     0,     0,   115,     0,
     116,   117,   118,     0,     0,   119,   120,   121,     0,     0,
     743,     0,   122,     0,   745,     0,   747,   123,   749,     0,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
     759,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     768,   701,   770,     0,     0,     0,     0,     0,     0,     0,
       0,   124,     0,   826,   125,     0,     0,     0,   715,     0,
     717,     0,   126,   127,     0,   838,   839,     0,   841,   842,
       0,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   793,   794,     0,     0,     0,     0,   798,   799,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   739,   740,   741,     0,   742,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     833,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   843,     0,     0,   844,     0,     0,     0,
       0,     0,   773,     0,   774,     0,   776,     0,     0,     0,
       0,     0,     0,     0,   782,  -328,     0,     0,     0,     0,
       0,     0,     0,   790,     0,   791,     0,     0,     0,     0,
      -5,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   805,   806,
       0,     0,     6,   810,   811,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
      12,    13,    14,     0,    15,     0,    16,     0,    17,     0,
       0,    18,     0,     0,     0,     0,     0,    19,   840,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   845,   846,
      20,     0,     0,     0,     0,    21,     0,     0,    22,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     -34,     0,     0,     0,     0,    -5,    -5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   444,     0,     0,
       0,   445,   446,     0,     0,   447,   448,   449,   450,     0,
     451,   452,     0,     0,    66,     0,     0,     0,    67,     0,
       0,   453,     0,     0,   454,    69,     0,     0,     0,   455,
       0,     0,     0,    71,     0,     0,     0,    72,     0,     0,
     456,     0,    74,     0,     0,     0,    -5,     4,     0,     0,
     457,     0,     5,     0,    76,     0,   458,     0,    78,   459,
       0,   460,   461,   462,   463,     0,     0,   464,     6,     0,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,     0,    12,    13,    14,     0,
      15,     0,    16,     0,    17,     0,     0,    18,     0,     0,
     465,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    21,     0,     0,    22,     0,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    99,     0,     0,   100,
       0,    -5,    -5,   101,   102,   103,     0,   104,   105,     0,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
     110,     0,     0,   111,     0,   112,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,   114,   215,   216,     0,     5,     0,
       0,     0,   115,     0,   116,   117,   118,     0,     0,   119,
     120,   121,     0,     0,     0,   217,   122,     7,     0,     8,
       0,   123,     0,     0,     0,     0,     0,     0,     9,    10,
      11,     0,    12,     0,    14,     0,    15,     0,    16,     0,
      17,     0,     0,   218,     0,     0,     0,     0,     0,    19,
       0,   219,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     4,     0,   215,   216,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     7,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   614,     0,     0,     0,     0,     0,    19,     0,
     615,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,   215,   216,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
      12,     0,    14,     0,    15,     0,    16,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       4,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,     0,    12,
       0,    14,     0,    15,     0,    16,     0,    17,     0,     0,
     198,     0,     0,     0,     0,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     4,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,    12,     0,
      14,     0,    15,     0,    16,     0,    17,     0,     0,   598,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     4,     0,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     4,     0,     0,
       0,     0,     0,     0,     0,   444,     0,     0,     0,   445,
     446,     0,     0,   447,   448,   449,   450,     0,   451,   452,
       0,     7,    66,     0,     0,     0,    67,     0,     0,   453,
       0,     0,   454,    69,     0,     0,     0,   455,     0,     0,
       0,    71,    16,     0,     0,    72,     0,     0,   456,     0,
      74,     0,     0,    19,     0,     0,     0,     0,   457,     0,
       0,     0,    76,     0,   458,     0,    78,   459,     0,   460,
     461,   462,   463,     0,     0,   464,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    60,     0,   465,     0,
       0,     0,     0,     0,    61,    62,    63,     0,     0,    64,
      65,     0,     0,    66,     0,     0,     0,    67,     0,     0,
       0,     0,     0,    68,    69,     0,     0,     0,    70,     0,
       0,     0,    71,     0,     0,     0,    72,     0,     0,    73,
       0,    74,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,    76,     0,    77,     0,    78,    79,     0,
       0,    80,    81,    82,     0,     0,    83,     0,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
      87,    51,   574,    13,     5,     0,    15,    75,   101,    75,
     103,   104,   105,   106,   107,   108,     3,     4,   111,   112,
     113,   114,   115,   116,     6,   118,   119,   120,   282,   122,
     123,   132,   557,   134,     3,     4,    15,     6,     7,    15,
     135,   131,     3,   721,   139,   131,    75,   331,   138,   132,
     728,   134,   138,   129,     3,     4,   136,     6,   342,     8,
       9,    10,    11,   156,   157,   133,   159,   133,   161,   136,
       3,     4,   136,     6,   167,   168,   566,    10,    11,    12,
      13,    14,   175,   136,   574,     5,   179,   671,    43,   182,
     183,   184,   185,   186,   187,    15,   189,   681,   191,   683,
     354,   218,   135,   220,   221,   136,   139,     3,     4,   199,
       6,     7,    67,   638,   639,   640,   132,   642,   134,    68,
     129,   130,   131,   140,    79,   134,   135,   132,     5,   134,
     220,   132,   218,   134,   220,   221,   814,   136,    15,   149,
     132,   631,   134,   136,   132,   132,   134,   431,    70,    71,
     132,   130,   131,   129,   130,   131,   132,    75,   442,    43,
     247,   248,   249,   132,    15,   134,   253,   254,   255,   256,
     257,   136,    68,   260,   136,   262,   136,   264,   265,   266,
     267,   268,    89,    67,   271,   272,   140,   133,   275,   276,
      97,    98,   279,   280,   281,    79,   283,   284,   291,   132,
     136,   134,    18,    19,   136,     3,     4,     3,     6,     7,
     130,   131,   132,   136,   786,     3,     4,   789,   743,   305,
     745,   155,    38,    15,   158,   136,   160,   136,   162,   163,
     164,   165,   166,   315,   316,   169,   170,   136,   172,   173,
     174,   358,   176,   177,   178,   136,   180,   181,   136,    75,
      75,    47,   339,   130,   131,   132,    75,   344,     5,     3,
       3,     3,   349,   350,   351,   352,   353,     5,     3,   356,
       3,     5,    68,    69,    70,    71,     3,     3,   129,   130,
     131,   132,   134,   134,   135,   372,     3,     5,   375,   376,
     377,   378,   379,   380,   381,    91,   383,     5,     3,     3,
       3,   132,   135,   390,     5,   322,   393,   394,     5,    11,
       6,   328,    10,   400,    14,   332,   129,   404,   405,   336,
      12,   135,     5,   410,   258,   259,     3,   261,     3,   263,
     417,   127,   128,     6,     8,   269,   270,   129,   130,   131,
       9,    11,   134,   135,    10,   136,   136,   136,     5,   136,
     136,   285,   286,   287,   288,   289,   290,   136,   292,   313,
     294,   136,   136,   317,   136,   136,   320,   136,   322,   136,
     324,   325,   326,   327,   328,   136,   136,   331,   332,   136,
     136,   468,   336,   136,    29,   136,    31,    32,   342,    60,
      20,   136,     5,   347,    24,    25,   136,     3,    28,   486,
      60,   335,     3,   490,    34,   492,    60,   341,     3,   343,
     133,    41,     5,   530,   501,   502,   433,   504,   468,   506,
       3,     5,   439,     5,     3,   512,   443,     3,     3,   516,
     517,   521,    77,     5,     5,   521,    81,    82,   722,   489,
     530,     3,    87,     3,   530,   729,     3,    92,   133,     5,
       5,     3,   133,     3,   471,     3,   543,   136,   412,   413,
     414,     5,   140,     5,   481,   419,     3,     5,   422,     3,
      24,    44,   140,   560,   414,   133,   430,   431,     3,   433,
     133,   415,   416,   133,     3,   439,     3,   537,   442,   443,
      29,   431,    31,    32,     3,   779,   126,   614,   133,   616,
     617,   785,   442,   134,   133,    51,   134,   557,   538,   599,
     560,    91,   314,   149,   396,   540,   533,   471,   143,   128,
     804,   475,   476,   529,   402,   809,   616,   481,   614,   125,
     616,   617,   194,   788,   713,   737,   476,    -1,    77,    -1,
      -1,    -1,    81,    82,    -1,   562,    -1,    -1,    87,    -1,
      -1,    90,    -1,    92,     3,     4,    -1,     6,     7,     8,
       9,    10,    11,    -1,   651,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   659,   660,   661,    -1,   663,   664,   628,   533,
      23,   668,   669,   670,    -1,    -1,    -1,    30,   638,   639,
     640,    -1,   642,    -1,   644,    -1,    39,    -1,   137,   138,
      43,   555,    45,   689,    -1,    -1,    -1,    21,   562,   563,
      -1,    54,   566,    -1,   631,    58,    -1,    -1,   735,    68,
     574,    64,     3,     4,    67,     6,   566,    -1,    42,    10,
      11,    12,    13,    14,   574,    78,    79,    51,    52,    53,
      83,    55,    -1,    57,    87,    59,    -1,    -1,    -1,    63,
      -1,    94,    95,    96,   671,     3,     4,   750,     6,   709,
       8,     9,    10,    11,   681,   758,   683,    -1,    -1,   756,
     757,    85,    -1,    -1,    -1,   762,    -1,   631,    -1,    -1,
       3,     4,   125,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,   743,   317,   745,    -1,    -1,    -1,    -1,
      -1,   324,   325,   326,    -1,   792,    -1,    -1,   795,   796,
     797,    -1,    -1,   800,   801,   802,   803,   671,    -1,    -1,
     737,    -1,    -1,    -1,   347,    -1,    -1,   681,    -1,   683,
     817,   818,    -1,   820,   821,     3,     4,    -1,     6,     7,
       8,     9,    10,    11,     3,     4,    -1,     6,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,   713,
      -1,    -1,    -1,    -1,    -1,   719,   720,   721,   722,   723,
      -1,   277,    -1,   727,   728,   729,    -1,   283,    -1,    -1,
     720,   721,    -1,   737,    -1,    -1,    -1,   727,   728,   412,
     413,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,   422,
      -1,    -1,    -1,    -1,    -1,   822,   823,    -1,    -1,    -1,
      -1,    -1,   318,   319,    -1,   321,    -1,   323,    -1,    -1,
      -1,    -1,    -1,   329,   330,   779,   780,    -1,    -1,    -1,
      -1,   785,   786,   339,   788,   789,    -1,    -1,   344,    -1,
      -1,   775,   348,    -1,    -1,    -1,    -1,   781,    -1,   355,
     804,    -1,   475,    -1,    -1,   809,    -1,    -1,    -1,    -1,
     814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   822,   823,
     824,   825,    -1,   827,   828,    -1,    -1,    -1,    -1,   385,
     386,   387,   388,    -1,   824,   825,    -1,   827,   828,    -1,
      -1,    -1,    -1,   399,    -1,    -1,    -1,    -1,    -1,    -1,
     406,   337,   408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     346,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   555,    -1,    -1,    -1,    -1,   373,   374,    -1,
     563,    -1,    -1,    -1,    -1,    -1,   382,    -1,   384,    -1,
      -1,    -1,    -1,    -1,    -1,   391,   392,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,
      -1,   407,    -1,    -1,    -1,   411,    -1,   483,   484,   485,
      -1,   487,   418,    -1,    -1,    -1,   492,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   435,
     436,   437,   438,    -1,    -1,    -1,    -1,    -1,    -1,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,   543,    -1,   545,
     546,   477,    -1,    -1,   550,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   401,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   424,
     713,    -1,    -1,    -1,    -1,    -1,   719,   432,    -1,   434,
     723,    -1,    -1,    -1,    -1,   440,   441,    -1,    -1,    -1,
      -1,    -1,    -1,   549,    -1,    -1,   552,   553,   554,    -1,
     556,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   564,   565,
      -1,    -1,    -1,    -1,    -1,   641,    -1,   573,    -1,   474,
      -1,   647,    -1,   478,   650,   651,    -1,   482,    -1,    -1,
      -1,    -1,   658,    -1,    -1,    -1,    -1,   780,    -1,    -1,
      -1,   667,    -1,    -1,    -1,   788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   508,   509,   510,   511,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   695,
     696,    -1,    -1,    -1,    -1,    -1,   632,   633,   634,    -1,
      -1,   637,    17,    -1,    -1,    20,    -1,   542,    -1,    24,
      25,    26,   547,    28,    29,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   753,   754,    -1,
      65,    -1,    -1,    -1,   760,   761,    -1,    -1,    73,    -1,
      75,    76,    77,    -1,    -1,    80,    81,    82,    -1,    -1,
     706,    -1,    87,    -1,   710,    -1,   712,    92,   714,    -1,
      -1,    -1,   718,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     726,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     736,   636,   738,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,   819,   129,    -1,    -1,    -1,   653,    -1,
     655,    -1,   137,   138,    -1,   831,   832,    -1,   834,   835,
      -1,   666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   777,   778,    -1,    -1,    -1,    -1,   783,   784,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   698,   699,   700,    -1,   702,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     826,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   839,    -1,    -1,   842,    -1,    -1,    -1,
      -1,    -1,   747,    -1,   749,    -1,   751,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   759,     0,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   768,    -1,   770,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   793,   794,
      -1,    -1,    37,   798,   799,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    56,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    72,   833,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   843,   844,
      85,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       5,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    -1,    -1,    -1,    15,    16,    -1,    -1,
      75,    -1,    21,    -1,    79,    -1,    81,    -1,    83,    84,
      -1,    86,    87,    88,    89,    -1,    -1,    92,    37,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    -1,    55,    56,    57,    -1,
      59,    -1,    61,    -1,    63,    -1,    -1,    66,    -1,    -1,
     125,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    93,    -1,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    17,    -1,    -1,    20,
      -1,   130,   131,    24,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    -1,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    65,    18,    19,    -1,    21,    -1,
      -1,    -1,    73,    -1,    75,    76,    77,    -1,    -1,    80,
      81,    82,    -1,    -1,    -1,    38,    87,    40,    -1,    42,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,
      63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    53,    -1,    55,    -1,
      57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      -1,    40,    39,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    61,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    -1,    -1,    72,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    -1,    79,    -1,    81,    -1,    83,    84,    -1,    86,
      87,    88,    89,    -1,    -1,    92,    -1,    -1,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    22,    -1,   125,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    -1,    79,    -1,    81,    -1,    83,    84,    -1,
      -1,    87,    88,    89,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   142,   185,     0,    16,    21,    37,    40,    42,    51,
      52,    53,    55,    56,    57,    59,    61,    63,    66,    72,
      85,    90,    93,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   143,   144,   175,   176,   177,   196,    70,    71,   160,
      22,    30,    31,    32,    35,    36,    39,    43,    49,    50,
      54,    58,    62,    65,    67,    75,    79,    81,    83,    84,
      87,    88,    89,    92,    97,   125,   179,   181,   182,   147,
       3,   144,   213,    15,   130,   131,   158,   145,   146,    17,
      20,    24,    25,    26,    28,    29,    31,    32,    33,    34,
      41,    44,    46,    48,    65,    73,    75,    76,    77,    80,
      81,    82,    87,    92,   126,   129,   137,   138,   198,   201,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   129,   132,   150,   162,
     150,   158,   150,   150,   133,   163,    75,    75,   163,    75,
     163,    75,   163,   163,   163,   163,   163,    75,    75,   163,
     163,   163,   163,   163,   163,   202,   163,   163,   163,   203,
     163,   163,    75,    29,    31,    32,    77,    81,    82,    87,
      90,    92,   148,   149,   198,   199,   201,     5,    66,   175,
     177,   184,     3,     3,     3,     5,     3,    20,    24,    25,
      28,    34,    41,   126,   197,    18,    19,    38,    66,    74,
     175,   177,   178,   183,     5,     3,     4,     6,     7,   159,
     167,     3,     3,   176,     3,     3,    47,    68,    69,    70,
      71,    91,   127,   128,   161,   151,   182,     6,    10,    11,
      12,    13,    14,   159,   171,   172,   173,   174,   163,   163,
     174,   163,   174,   163,   174,   174,   174,   174,   174,   163,
     163,   174,   174,   134,   164,   174,   174,   174,   163,   174,
     174,   174,   163,   174,   174,   163,   163,   163,   163,   163,
     163,   200,   163,     3,   163,     5,   199,   177,     5,     3,
       3,     3,   175,   178,   175,   177,   178,   175,   178,     5,
     162,   162,   162,   162,   162,   162,   162,   162,   174,   174,
     162,   174,   162,   174,   162,   162,   162,   162,   162,   174,
     174,   162,   162,   135,   165,   162,   162,   164,   174,   205,
     206,   162,   162,   162,   205,   162,   164,   162,   174,   174,
     174,   174,   174,   174,   163,   174,   174,     5,   175,     6,
      10,    11,   159,   171,   173,   173,     6,     8,     9,    10,
      11,   159,   168,   164,   164,     6,     8,     9,    10,    11,
     159,   169,   164,   167,   164,   168,   168,   168,   166,   167,
     167,   164,   164,   169,   167,   135,   129,   152,   213,   174,
     167,   165,   162,   164,   174,   169,   174,   164,     5,   165,
     168,   164,   162,   162,   162,   162,   162,   205,   164,   162,
       3,   178,   162,   165,   165,   162,   162,   162,   162,   162,
     162,   162,   165,   162,   165,   164,   164,   164,   164,   162,
     165,   165,   162,   162,    22,    26,    27,    30,    31,    32,
      33,    35,    36,    46,    49,    54,    65,    75,    81,    84,
      86,    87,    88,    89,    92,   125,   153,   179,   186,   187,
     164,   162,   152,   206,   165,   162,   162,   164,   165,   164,
     152,   162,   165,   168,   168,   166,   174,   174,   164,   165,
     168,     3,   168,   152,   152,     6,     8,     9,    10,    11,
     159,     6,   159,   166,   169,   152,   167,   152,   165,   165,
     165,   165,   167,   152,   152,   166,   169,   167,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,     5,   136,   154,
     162,   213,   165,   167,   152,   168,   166,   165,   152,   204,
     167,   152,   164,   164,   164,   162,   164,   165,   155,   156,
     186,   213,   162,   162,   164,   164,   162,   162,   152,   152,
     152,   152,   162,   164,   162,   162,    60,   194,   195,    23,
      30,    39,    43,    45,    54,    58,    64,    67,    78,    79,
      83,    87,    94,    95,    96,   125,   180,     5,    66,   175,
     177,   189,     3,    60,   190,   191,     3,    60,   192,   193,
       3,     5,     3,   197,    66,    74,   175,   177,   178,   188,
       5,     5,   167,     3,     3,     3,   213,   161,     5,   187,
     152,   162,   164,   164,   164,   152,   165,   164,   165,   165,
     165,   168,   165,   155,     5,   157,   213,   167,    68,   168,
     170,   207,   208,   165,   139,   165,     6,   159,   166,   168,
     170,   211,   212,     3,     3,   139,   165,   166,   170,   211,
       3,   133,    43,    67,    79,    43,    67,    79,     5,   177,
       5,   133,     3,   133,     3,     3,   175,   178,   175,   177,
     178,   175,   178,   213,   167,   170,   209,   210,   165,   165,
     165,   152,   165,   155,   155,   155,   164,   155,   213,     5,
     164,   136,   164,   162,   164,   152,   140,   152,   164,   162,
     162,   162,   162,   162,   140,   152,   164,   162,   162,   162,
     209,     5,     5,   209,   209,   175,   164,   162,   164,   152,
     152,   152,   152,   165,   213,   165,     3,   165,   208,   165,
      24,   165,   168,   166,   166,   212,   169,   168,    44,   165,
     166,   166,   169,   134,     3,   134,   134,   178,   165,   210,
     165,   155,   155,   152,   152,   163,   152,   164,   164,   162,
     162,   163,   152,   164,   164,   162,   133,     3,   133,   133,
     152,   152,   174,   165,   165,   169,   168,   174,   165,   165,
     169,   211,   207,   211,   162,   152,   152,   162,   162,   162,
     152,   152,   162,   134,   162,   134,   134,   169,     3,     3,
     169,     3,   133,   133,   162,   162,   164,   162,   162,   167,
     167,   166,   166,   165,   166,   166,   134,   134,   164,   164,
     152,   164,   164,   165,   165,   152,   152
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
#line 309 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 312 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 314 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 315 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 316 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::FK5;;}
    break;

  case 21:
#line 325 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 326 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 330 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 334 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 334 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 336 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 336 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 340 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 340 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 342 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 342 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 347 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 350 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 351 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 354 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 355 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 358 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 360 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 361 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 362 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 363 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 365 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 366 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 367 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 368 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 383 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 384 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 63:
#line 385 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 64:
#line 388 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 65:
#line 389 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 66:
#line 392 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(degToRad((yyvsp[(1) - (1)].real)),localSystem,localSky);;}
    break;

  case 67:
#line 393 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(degToRad((yyvsp[(1) - (1)].real)),localSystem,localSky);;}
    break;

  case 68:
#line 394 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 69:
#line 397 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 70:
#line 398 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 71:
#line 399 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 72:
#line 400 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 73:
#line 401 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 74:
#line 402 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 75:
#line 406 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 76:
#line 413 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 420 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 427 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 434 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 441 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 449 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 82:
#line 452 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 83:
#line 455 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 458 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 462 "frame/ds9parser.Y"
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
#line 475 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 87:
#line 483 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 491 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 498 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 506 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 513 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 92:
#line 520 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 93:
#line 521 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 94:
#line 522 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 95:
#line 523 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 96:
#line 524 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 97:
#line 527 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 98:
#line 528 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 99:
#line 529 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 100:
#line 530 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 101:
#line 531 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 102:
#line 532 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 103:
#line 533 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 104:
#line 534 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 105:
#line 535 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 106:
#line 536 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 107:
#line 537 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 108:
#line 538 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 109:
#line 539 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 110:
#line 540 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 111:
#line 541 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 112:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 113:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 114:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 115:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 116:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 117:
#line 547 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 118:
#line 548 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 119:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 120:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 121:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 122:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 123:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 124:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 125:
#line 557 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 126:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4_NO_E;;}
    break;

  case 128:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 564 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::SUPERGALACTIC;;}
    break;

  case 133:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 134:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::HELIOECLIPTIC;;}
    break;

  case 135:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 136:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 137:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 138:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 139:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 140:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 141:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 142:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 143:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 144:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 145:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 146:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 147:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 148:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 149:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 150:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 151:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 152:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 153:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 154:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 155:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 156:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 157:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 158:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 159:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 160:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 161:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 162:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 163:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 164:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 165:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 166:
#line 604 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 167:
#line 605 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 168:
#line 606 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 171:
#line 614 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 172:
#line 619 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 173:
#line 624 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 174:
#line 628 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 175:
#line 630 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 176:
#line 635 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 177:
#line 640 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 178:
#line 645 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 650 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 654 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 656 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 661 "frame/ds9parser.Y"
    {
	  globalFill = localFill = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 183:
#line 665 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 184:
#line 669 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 185:
#line 671 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 186:
#line 674 "frame/ds9parser.Y"
    {;}
    break;

  case 187:
#line 676 "frame/ds9parser.Y"
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
#line 684 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 189:
#line 685 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 190:
#line 686 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 191:
#line 690 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 192:
#line 697 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 193:
#line 704 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 194:
#line 711 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 195:
#line 718 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 196:
#line 725 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 197:
#line 732 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 198:
#line 739 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 199:
#line 746 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 200:
#line 755 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 201:
#line 760 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 202:
#line 765 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 203:
#line 770 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 204:
#line 776 "frame/ds9parser.Y"
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
	  globalFill = 0;
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

  case 207:
#line 823 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 208:
#line 824 "frame/ds9parser.Y"
    {strncpy(localColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 209:
#line 826 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 210:
#line 830 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 211:
#line 831 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 212:
#line 832 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 213:
#line 833 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 214:
#line 834 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 215:
#line 836 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 216:
#line 837 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 217:
#line 838 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 218:
#line 840 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 219:
#line 841 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 220:
#line 842 "frame/ds9parser.Y"
    {localFill=(yyvsp[(3) - (3)].integer);;}
    break;

  case 221:
#line 843 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 222:
#line 844 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 223:
#line 845 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 225:
#line 848 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 226:
#line 854 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 227:
#line 855 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 231:
#line 862 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 232:
#line 869 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 233:
#line 876 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 234:
#line 883 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 235:
#line 890 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 236:
#line 897 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 237:
#line 904 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 238:
#line 911 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 239:
#line 918 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 240:
#line 927 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 241:
#line 932 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 242:
#line 937 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 243:
#line 942 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 244:
#line 948 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 245:
#line 948 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 246:
#line 949 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 247:
#line 952 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 248:
#line 953 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 249:
#line 954 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 250:
#line 957 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 251:
#line 958 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 252:
#line 959 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 253:
#line 962 "frame/ds9parser.Y"
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
	  localFill = globalFill;
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

  case 254:
#line 1012 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 255:
#line 1013 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 256:
#line 1014 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 257:
#line 1015 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 258:
#line 1016 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 259:
#line 1017 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 260:
#line 1018 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 261:
#line 1021 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 262:
#line 1022 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 263:
#line 1026 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 264:
#line 1033 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 265:
#line 1035 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 266:
#line 1041 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 267:
#line 1048 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 268:
#line 1057 "frame/ds9parser.Y"
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
#line 1067 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 270:
#line 1075 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 271:
#line 1083 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1092 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 273:
#line 1099 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 274:
#line 1107 "frame/ds9parser.Y"
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
	  (yyvsp[(7) - (10)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 275:
#line 1130 "frame/ds9parser.Y"
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
	  (yyvsp[(7) - (10)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 276:
#line 1153 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 277:
#line 1161 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 278:
#line 1163 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 279:
#line 1168 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 280:
#line 1170 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1177 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 282:
#line 1185 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1193 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1199 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 285:
#line 1201 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1208 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1215 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1222 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1229 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1236 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1243 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1250 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
#line 1257 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1264 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1273 "frame/ds9parser.Y"
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
#line 1283 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
#line 1291 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 298:
#line 1299 "frame/ds9parser.Y"
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
#line 1309 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1317 "frame/ds9parser.Y"
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
#line 1327 "frame/ds9parser.Y"
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
#line 1337 "frame/ds9parser.Y"
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
#line 1349 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 304:
#line 1357 "frame/ds9parser.Y"
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
#line 1367 "frame/ds9parser.Y"
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
#line 1379 "frame/ds9parser.Y"
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
#line 1389 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 308:
#line 1398 "frame/ds9parser.Y"
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
#line 1420 "frame/ds9parser.Y"
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
#line 1444 "frame/ds9parser.Y"
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
#line 1474 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 318:
#line 1486 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 321:
#line 1494 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 324:
#line 1505 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 327:
#line 1515 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 328:
#line 1519 "frame/ds9parser.Y"
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
#line 4897 "frame/ds9parser.C"
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


#line 1546 "frame/ds9parser.Y"


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


