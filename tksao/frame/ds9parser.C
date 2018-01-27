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
     FORMAT_ = 309,
     FONT_ = 310,
     GALACTIC_ = 311,
     GLOBAL_ = 312,
     HELIOECLIPTIC_ = 313,
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
     OFF_ = 326,
     ON_ = 327,
     PHYSICAL_ = 328,
     PIE_ = 329,
     PIXELS_ = 330,
     POINT_ = 331,
     POLYGON_ = 332,
     PROJECTION_ = 333,
     PROPERTY_ = 334,
     ROTATE_ = 335,
     ROTBOX_ = 336,
     RULER_ = 337,
     SEGMENT_ = 338,
     SELECT_ = 339,
     SOURCE_ = 340,
     SUPERGALACTIC_ = 341,
     TAG_ = 342,
     TEXT_ = 343,
     TEXTANGLE_ = 344,
     TEXTROTATE_ = 345,
     TILE_ = 346,
     TRUE_ = 347,
     VECTOR_ = 348,
     VERSION_ = 349,
     UNHIGHLITE_ = 350,
     UNSELECT_ = 351,
     UPDATE_ = 352,
     WCS_ = 353,
     WCSA_ = 354,
     WCSB_ = 355,
     WCSC_ = 356,
     WCSD_ = 357,
     WCSE_ = 358,
     WCSF_ = 359,
     WCSG_ = 360,
     WCSH_ = 361,
     WCSI_ = 362,
     WCSJ_ = 363,
     WCSK_ = 364,
     WCSL_ = 365,
     WCSM_ = 366,
     WCSN_ = 367,
     WCSO_ = 368,
     WCSP_ = 369,
     WCSQ_ = 370,
     WCSR_ = 371,
     WCSS_ = 372,
     WCST_ = 373,
     WCSU_ = 374,
     WCSV_ = 375,
     WCSW_ = 376,
     WCSX_ = 377,
     WCSY_ = 378,
     WCSZ_ = 379,
     WCS0_ = 380,
     WIDTH_ = 381,
     X_ = 382,
     Y_ = 383,
     YES_ = 384
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
#define FORMAT_ 309
#define FONT_ 310
#define GALACTIC_ 311
#define GLOBAL_ 312
#define HELIOECLIPTIC_ 313
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
#define OFF_ 326
#define ON_ 327
#define PHYSICAL_ 328
#define PIE_ 329
#define PIXELS_ 330
#define POINT_ 331
#define POLYGON_ 332
#define PROJECTION_ 333
#define PROPERTY_ 334
#define ROTATE_ 335
#define ROTBOX_ 336
#define RULER_ 337
#define SEGMENT_ 338
#define SELECT_ 339
#define SOURCE_ 340
#define SUPERGALACTIC_ 341
#define TAG_ 342
#define TEXT_ 343
#define TEXTANGLE_ 344
#define TEXTROTATE_ 345
#define TILE_ 346
#define TRUE_ 347
#define VECTOR_ 348
#define VERSION_ 349
#define UNHIGHLITE_ 350
#define UNSELECT_ 351
#define UPDATE_ 352
#define WCS_ 353
#define WCSA_ 354
#define WCSB_ 355
#define WCSC_ 356
#define WCSD_ 357
#define WCSE_ 358
#define WCSF_ 359
#define WCSG_ 360
#define WCSH_ 361
#define WCSI_ 362
#define WCSJ_ 363
#define WCSK_ 364
#define WCSL_ 365
#define WCSM_ 366
#define WCSN_ 367
#define WCSO_ 368
#define WCSP_ 369
#define WCSQ_ 370
#define WCSR_ 371
#define WCSS_ 372
#define WCST_ 373
#define WCSU_ 374
#define WCSV_ 375
#define WCSW_ 376
#define WCSX_ 377
#define WCSY_ 378
#define WCSZ_ 379
#define WCS0_ 380
#define WIDTH_ 381
#define X_ 382
#define Y_ 383
#define YES_ 384




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
#line 141 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 501 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 514 "frame/ds9parser.C"

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
#define YYLAST   2555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNRULES -- Number of states.  */
#define YYNSTATES  853

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     131,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   141,     2,   130,     2,     2,   140,     2,
     134,   135,     2,   138,   133,   139,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   132,
       2,   137,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   136,     2,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129
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
     433,   437,   442,   446,   451,   455,   459,   463,   467,   475,
     479,   483,   487,   492,   495,   498,   501,   504,   507,   510,
     512,   514,   517,   519,   521,   523,   524,   528,   530,   534,
     538,   543,   547,   551,   555,   559,   565,   567,   569,   571,
     575,   580,   584,   589,   593,   597,   601,   605,   613,   617,
     621,   625,   629,   633,   638,   641,   644,   647,   650,   653,
     656,   658,   660,   663,   665,   667,   669,   670,   678,   680,
     681,   692,   694,   695,   706,   708,   709,   711,   713,   715,
     717,   719,   721,   723,   725,   727,   738,   739,   747,   754,
     763,   772,   783,   792,   801,   810,   819,   830,   841,   852,
     853,   861,   862,   870,   879,   890,   897,   898,   908,   915,
     923,   931,   939,   947,   955,   963,   971,   980,   989,  1000,
    1011,  1024,  1037,  1050,  1065,  1080,  1099,  1112,  1127,  1142,
    1161,  1180,  1201,  1222,  1233,  1246,  1259,  1265,  1274,  1278,
    1280,  1282,  1286,  1288,  1290,  1294,  1296,  1298,  1302,  1304,
    1308
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     143,     0,    -1,   186,   144,   214,    -1,   144,   145,   159,
      -1,   145,   159,    -1,    -1,    37,   161,    -1,    94,    -1,
      57,   182,   151,    -1,    91,     3,    -1,    -1,   176,   146,
     151,    -1,    -1,   178,   147,   151,    -1,    -1,    67,   148,
     151,    -1,   197,   202,    -1,   197,   199,   202,    -1,   197,
     130,   149,    -1,   200,    -1,   199,   200,    -1,    91,     3,
      -1,    -1,   150,     5,    -1,    -1,    -1,   130,   152,     5,
      -1,   214,    -1,    -1,   130,   154,     5,   214,    -1,   130,
     187,   214,    -1,    -1,   130,   187,   155,     5,   214,    -1,
     214,    -1,    -1,   157,     5,   214,    -1,   187,   214,    -1,
      -1,   187,   158,     5,   214,    -1,   131,    -1,   132,    -1,
      15,    -1,     4,    -1,     3,    -1,    72,    -1,    71,    -1,
       3,    -1,   129,    -1,   128,    -1,    72,    -1,    92,    -1,
      70,    -1,    69,    -1,    71,    -1,    47,    -1,    -1,   133,
      -1,    -1,   134,    -1,    -1,   135,    -1,    -1,   136,    -1,
     136,   136,    -1,    -1,   168,    -1,   160,    -1,     6,    -1,
       7,    -1,   160,    -1,    10,    -1,    11,    -1,     6,    -1,
       8,    -1,     9,    -1,   160,   163,   160,    -1,    10,   163,
      10,    -1,    11,   163,    11,    -1,     6,   163,     6,    -1,
       8,   163,     8,    -1,     9,   163,     9,    -1,    69,   137,
       3,    -1,    12,    -1,    13,    -1,    14,    -1,   172,   163,
     172,    -1,   173,   163,   174,    -1,   174,   163,   174,    -1,
     160,   163,   160,    -1,     6,   163,     6,    -1,    11,   163,
      11,    -1,    10,   163,    10,    -1,    62,    -1,    73,    -1,
      40,    -1,    16,    -1,   177,    -1,    98,    -1,    99,    -1,
     100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,
     105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,
     120,    -1,   121,    -1,   122,    -1,   123,    -1,   124,    -1,
     125,    -1,    51,    -1,    21,    -1,    52,    -1,    53,    -1,
      64,    -1,    60,    -1,    56,    -1,    86,    -1,    42,    -1,
      58,    -1,    38,    -1,    18,    -1,    19,    -1,    84,    -1,
      59,    -1,    35,    -1,    50,    -1,    43,    -1,    68,    -1,
      80,    -1,    39,    -1,    63,    -1,    85,    -1,    84,    -1,
      96,    -1,    59,    -1,    95,    -1,    23,    68,    -1,    68,
      -1,    45,    68,    -1,    23,    43,    -1,    43,    -1,    45,
      43,    -1,    23,    80,    -1,    80,    -1,    45,    80,    -1,
      39,    -1,    88,    -1,    30,    -1,   126,    -1,    79,    -1,
      55,    -1,    65,    -1,    97,    -1,   182,   163,   183,    -1,
     183,    -1,   180,   137,   162,    -1,    30,   137,     5,    -1,
      36,   137,     3,     3,    -1,   126,   137,     3,    -1,    55,
     137,     5,    -1,    88,   137,     5,    -1,    35,    -1,    85,
      -1,    22,    -1,    76,   137,   198,    -1,    76,   137,   198,
       3,    -1,    49,   137,     3,    -1,    66,   137,     3,     3,
      -1,    93,   137,     3,    -1,    32,   137,     3,    -1,    82,
     137,   184,    -1,    54,   137,     5,    -1,    31,   137,   185,
       5,     5,     3,     3,    -1,    89,   137,   168,    -1,    90,
     137,     3,    -1,    98,   137,   177,    -1,   176,   178,   176,
     179,    -1,   176,   176,    -1,   176,   179,    -1,   178,   176,
      -1,   178,   179,    -1,    67,   176,    -1,    67,   179,    -1,
     179,    -1,    75,    -1,   176,   178,    -1,   176,    -1,   178,
      -1,    67,    -1,    -1,   187,   163,   188,    -1,   188,    -1,
     180,   137,   162,    -1,    30,   137,     5,    -1,    36,   137,
       3,     3,    -1,   126,   137,     3,    -1,    55,   137,     5,
      -1,    88,   137,     5,    -1,    87,   137,     5,    -1,    27,
     137,   181,     5,     5,    -1,    35,    -1,    85,    -1,    22,
      -1,    76,   137,   198,    -1,    76,   137,   198,     3,    -1,
      49,   137,     3,    -1,    66,   137,     3,     3,    -1,    93,
     137,     3,    -1,    32,   137,     3,    -1,    82,   137,   189,
      -1,    54,   137,     5,    -1,    31,   137,   190,     5,     5,
       3,     3,    -1,    89,   137,   168,    -1,    90,   137,     3,
      -1,    33,   137,   191,    -1,    46,   137,   193,    -1,    26,
     137,   195,    -1,   176,   178,   176,   179,    -1,   176,   176,
      -1,   176,   179,    -1,   178,   176,    -1,   178,   179,    -1,
      67,   176,    -1,    67,   179,    -1,   179,    -1,    75,    -1,
     176,   178,    -1,   176,    -1,   178,    -1,    67,    -1,    -1,
     192,   134,   210,   135,   134,   208,   135,    -1,    61,    -1,
      -1,   194,   134,   210,   135,   134,   212,   135,   134,   168,
     135,    -1,    61,    -1,    -1,   196,   134,   210,   135,   134,
     212,   135,   134,   168,   135,    -1,    61,    -1,    -1,    28,
      -1,    24,    -1,    41,    -1,    34,    -1,   127,    -1,    20,
      -1,    25,    -1,   138,    -1,   139,    -1,    93,   164,   175,
     163,   169,   163,   168,   165,   166,   156,    -1,    -1,    83,
     201,   164,   206,   165,   166,   156,    -1,    88,   164,   175,
     165,   166,   156,    -1,    82,   164,   175,   163,   175,   165,
     166,   156,    -1,    31,   164,   175,   163,   169,   165,   166,
     156,    -1,    78,   164,   175,   163,   175,   163,   169,   165,
     166,   156,    -1,    29,   164,   175,   163,   169,   165,   166,
     156,    -1,    32,   164,   175,   163,   167,   165,   166,   156,
      -1,    28,   164,   175,   163,   169,   165,   166,   153,    -1,
      29,   164,   175,   163,   169,   165,   166,   153,    -1,    44,
     164,   175,   163,   170,   163,   167,   165,   166,   153,    -1,
      24,   164,   175,   163,   170,   163,   167,   165,   166,   153,
      -1,    81,   164,   175,   163,   170,   163,   167,   165,   166,
     153,    -1,    -1,    77,   203,   164,   206,   165,   166,   153,
      -1,    -1,    83,   204,   164,   206,   165,   166,   153,    -1,
      66,   164,   175,   163,   175,   165,   166,   153,    -1,    93,
     164,   175,   163,   169,   163,   168,   165,   166,   153,    -1,
      88,   164,   175,   165,   166,   153,    -1,    -1,    88,   164,
     175,   163,     5,   165,   205,   166,   153,    -1,    76,   164,
     175,   165,   166,   153,    -1,    28,    76,   164,   175,   165,
     166,   153,    -1,    24,    76,   164,   175,   165,   166,   153,
      -1,    41,    76,   164,   175,   165,   166,   153,    -1,    34,
      76,   164,   175,   165,   166,   153,    -1,   127,    76,   164,
     175,   165,   166,   153,    -1,    20,    76,   164,   175,   165,
     166,   153,    -1,    25,    76,   164,   175,   165,   166,   153,
      -1,    82,   164,   175,   163,   175,   165,   166,   153,    -1,
      31,   164,   175,   163,   169,   165,   166,   153,    -1,    78,
     164,   175,   163,   175,   163,   169,   165,   166,   153,    -1,
      17,   164,   175,   163,   169,   163,   169,   165,   166,   153,
      -1,    17,   164,   175,   163,   169,   163,   169,   163,   208,
     165,   166,   153,    -1,    17,   164,   175,   163,   169,   163,
     169,   163,   171,   165,   166,   153,    -1,    44,   164,   175,
     163,   170,   163,   170,   163,   167,   165,   166,   153,    -1,
      44,   164,   175,   163,   170,   163,   170,   163,   171,   163,
     167,   165,   166,   153,    -1,    44,   164,   175,   163,   170,
     163,   170,   163,   212,   163,   167,   165,   166,   153,    -1,
      44,   164,   175,   163,   170,   163,   167,   165,   140,   141,
      44,   164,   175,   163,   170,   163,   167,   165,    -1,    24,
     164,   175,   163,   170,   163,   170,   163,   167,   165,   166,
     153,    -1,    24,   164,   175,   163,   170,   163,   170,   163,
     212,   163,   167,   165,   166,   153,    -1,    24,   164,   175,
     163,   170,   163,   170,   163,   171,   163,   167,   165,   166,
     153,    -1,    24,   164,   175,   163,   170,   163,   167,   165,
     140,   141,    24,   164,   175,   163,   170,   163,   167,   165,
      -1,    33,   164,   175,   163,   168,   163,   168,   163,     3,
     163,   169,   163,   169,   163,     3,   165,   166,   153,    -1,
      46,   164,   175,   163,   168,   163,   168,   163,     3,   163,
     170,   163,   170,   163,     3,   163,   167,   165,   166,   153,
      -1,    26,   164,   175,   163,   168,   163,   168,   163,     3,
     163,   170,   163,   170,   163,     3,   163,   167,   165,   166,
     153,    -1,    74,   164,   175,   163,   168,   163,   168,   165,
     166,   153,    -1,    74,   164,   175,   163,   168,   163,   168,
     163,   210,   165,   166,   153,    -1,    74,   164,   175,   163,
     168,   163,   168,   163,   171,   165,   166,   153,    -1,    48,
     164,   165,   166,   153,    -1,    32,   164,   175,   163,   167,
     165,   166,   153,    -1,   206,   163,   207,    -1,   207,    -1,
     175,    -1,   208,   163,   209,    -1,   209,    -1,   169,    -1,
     210,   163,   211,    -1,   211,    -1,   168,    -1,   212,   163,
     213,    -1,   213,    -1,   169,   163,   169,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   303,   303,   306,   307,   310,   311,   312,   314,   315,
     317,   317,   318,   318,   319,   319,   321,   322,   323,   326,
     327,   328,   329,   329,   332,   333,   333,   336,   337,   337,
     338,   339,   339,   342,   343,   343,   344,   345,   345,   348,
     349,   350,   353,   354,   357,   358,   361,   363,   364,   365,
     366,   368,   369,   370,   371,   374,   375,   378,   379,   382,
     383,   386,   387,   388,   391,   392,   395,   397,   399,   402,
     403,   404,   405,   406,   407,   410,   417,   424,   431,   438,
     445,   454,   457,   460,   463,   466,   479,   487,   495,   502,
     510,   517,   525,   526,   527,   528,   529,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   571,   574,   575,   576,   579,   580,
     581,   582,   583,   584,   585,   586,   587,   588,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   614,
     615,   618,   623,   628,   633,   634,   639,   644,   649,   654,
     659,   660,   665,   669,   674,   675,   679,   680,   681,   690,
     691,   692,   695,   702,   709,   716,   723,   730,   737,   744,
     750,   759,   764,   769,   774,   781,   825,   826,   829,   830,
     831,   836,   837,   838,   839,   840,   842,   843,   844,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   861,   862,
     863,   864,   865,   868,   875,   882,   889,   896,   903,   910,
     917,   924,   933,   938,   943,   948,   955,   955,   956,   959,
     959,   961,   964,   964,   966,   969,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1029,  1030,  1033,  1041,  1041,  1048,  1055,
    1064,  1074,  1082,  1090,  1099,  1106,  1114,  1137,  1160,  1169,
    1169,  1176,  1176,  1184,  1192,  1200,  1207,  1207,  1215,  1222,
    1229,  1236,  1243,  1250,  1257,  1264,  1271,  1280,  1290,  1298,
    1305,  1315,  1323,  1333,  1343,  1355,  1363,  1373,  1385,  1395,
    1404,  1426,  1450,  1475,  1476,  1477,  1479,  1481,  1490,  1491,
    1494,  1497,  1498,  1501,  1508,  1509,  1512,  1519,  1520,  1523,
    1527
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
  "FIXED_", "FK4_", "FK4_NO_E_", "FK5_", "FORMAT_", "FONT_", "GALACTIC_",
  "GLOBAL_", "HELIOECLIPTIC_", "HIGHLITE_", "ICRS_", "IGNORE_", "IMAGE_",
  "INCLUDE_", "J2000_", "KEY_", "LINE_", "LINEAR_", "MOVE_", "N_", "NO_",
  "OFF_", "ON_", "PHYSICAL_", "PIE_", "PIXELS_", "POINT_", "POLYGON_",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
      35,    10,    59,    44,    40,    41,   124,    61,    43,    45,
      38,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   142,   143,   144,   144,   145,   145,   145,   145,   145,
     146,   145,   147,   145,   148,   145,   145,   145,   145,   149,
     149,   149,   150,   149,   151,   152,   151,   153,   154,   153,
     153,   155,   153,   156,   157,   156,   156,   158,   156,   159,
     159,   159,   160,   160,   161,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   166,   167,   167,   168,   168,   168,   169,
     169,   169,   169,   169,   169,   170,   170,   170,   170,   170,
     170,   171,   172,   173,   174,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   176,   176,   176,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   179,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   182,
     182,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   185,   185,   185,   185,   186,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   190,   190,   190,   190,   192,   191,   191,   194,
     193,   193,   196,   195,   195,   197,   198,   198,   198,   198,
     198,   198,   198,   199,   199,   200,   201,   200,   200,   200,
     200,   200,   200,   200,   202,   202,   202,   202,   202,   203,
     202,   204,   202,   202,   202,   202,   205,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   206,   206,
     207,   208,   208,   209,   210,   210,   211,   212,   212,   213,
     214
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
       3,     4,     3,     4,     3,     3,     3,     3,     7,     3,
       3,     3,     4,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     0,     3,     1,     3,     3,
       4,     3,     3,     3,     3,     5,     1,     1,     1,     3,
       4,     3,     4,     3,     3,     3,     3,     7,     3,     3,
       3,     3,     3,     4,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     0,     7,     1,     0,
      10,     1,     0,    10,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,    10,     0,     7,     6,     8,
       8,    10,     8,     8,     8,     8,    10,    10,    10,     0,
       7,     0,     7,     8,    10,     6,     0,     9,     6,     7,
       7,     7,     7,     7,     7,     7,     8,     8,    10,    10,
      12,    12,    12,    14,    14,    18,    12,    14,    14,    18,
      18,    20,    20,    10,    12,    12,     5,     8,     3,     1,
       1,     3,     1,     1,     3,     1,     1,     3,     1,     3,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     205,     0,   255,     1,    95,   126,     0,    94,   133,   125,
     127,   128,   131,     0,   134,   130,    92,   129,    14,    93,
     132,     0,     7,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   255,     0,    10,    96,    12,     0,    45,    44,     6,
     179,     0,     0,     0,   177,     0,   145,   142,     0,   141,
       0,     0,   139,   146,     0,   143,     0,   144,     0,   138,
     178,     0,     0,     0,     0,     0,     0,     0,    55,   170,
      24,     9,     0,     2,    41,    39,    40,     4,    24,    24,
      57,     0,    57,     0,    57,    57,    57,    57,    57,    57,
       0,     0,    57,    57,    57,    57,    57,    57,   279,    57,
      57,    57,   281,    57,    57,     0,    22,   263,   264,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    56,
       8,     0,    15,     3,    11,    13,    58,     0,    57,    57,
       0,    57,     0,    57,     0,     0,     0,     0,     0,    57,
      57,     0,     0,    59,     0,     0,     0,    57,     0,     0,
       0,    57,     0,     0,    57,    57,    57,    57,    57,    57,
     266,    57,     0,    57,    18,     0,     0,    19,    17,   172,
     204,   202,   203,     0,   185,     0,   182,   187,   175,     0,
     261,   257,   262,   256,   259,   258,   260,   180,   136,   137,
     135,     0,   200,     0,     0,   199,   186,   176,    43,    42,
      67,    68,    66,   189,   190,   184,   191,   174,    46,    54,
      52,    51,    53,    49,    50,    48,    47,   171,     0,   169,
      55,    55,    55,    82,    83,    84,    55,    55,    55,    55,
      55,     0,     0,    55,     0,    55,     0,    55,    55,    55,
      55,    55,     0,     0,    55,    55,    60,    61,    55,    55,
      59,     0,    55,    55,    55,     0,    59,    55,     0,     0,
       0,     0,     0,     0,    57,     0,    21,     0,    23,    20,
     201,     0,   173,   183,   181,   197,   198,   193,     0,   194,
     195,   196,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    59,    59,     0,    59,     0,    59,     0,     0,     0,
      64,     0,    59,    59,     0,     0,    62,   330,     0,     0,
      61,   320,    55,   319,     0,     0,     0,    55,     0,    61,
       0,    59,    55,    55,    55,    55,    55,     0,    59,    55,
       0,     0,    89,    91,    90,    88,    85,    86,    87,    72,
      73,    74,    70,    71,    69,    55,    61,    61,    55,    55,
      55,    55,    55,    55,    55,    61,    55,    61,    59,    59,
      59,    59,    65,    55,    61,    61,    55,    55,    63,    28,
     316,    27,    59,    55,   330,     0,    61,    55,    55,    59,
      61,    59,   330,    55,    61,     0,     0,    64,     0,     0,
      59,    61,     0,     0,   192,     0,   330,   330,     0,     0,
       0,     0,     0,     0,    64,   330,     0,   330,    61,    61,
      61,    61,     0,   330,   330,    64,     0,   218,     0,     0,
       0,     0,     0,     0,   216,     0,     0,     0,     0,     0,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,    55,   207,    61,     0,   288,   318,   330,     0,
      64,    61,   330,   286,   285,     0,   330,    59,    59,    59,
      55,    59,    61,   330,    55,   188,    55,   294,   290,    78,
      79,    80,    76,    77,    75,    67,    66,    59,    55,   295,
      55,   289,   330,   330,   330,   330,    55,   292,   291,    59,
      55,    55,   252,     0,     0,     0,     0,   246,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   330,     0,     0,     0,    30,   330,    55,   280,
      59,    59,   330,   282,    61,    59,   293,    61,    61,    61,
       0,    61,   330,   268,     0,    55,    33,     0,     0,    61,
      61,    64,     0,   274,   275,   297,   317,     0,    61,    64,
       0,   254,   232,     0,     0,   163,   161,   156,     0,   166,
     150,   167,   153,   165,   159,   148,   162,   151,   149,   168,
     164,     0,   209,   245,   243,   244,     0,   224,   248,   230,
       0,     0,   251,   231,     0,   221,   226,   212,     0,   219,
       0,   241,     0,     0,   240,   225,   214,   213,   228,   229,
     223,   211,    29,   208,   330,   206,   283,     0,    61,    61,
      61,   296,   330,    61,   330,   330,   330,    59,   330,   267,
     330,     0,    36,    59,     0,   323,    59,    55,   322,   330,
       0,   330,    72,    69,    59,    55,    55,    55,   328,    55,
      55,     0,   330,    59,    55,    55,    55,     0,   155,   152,
     158,   157,   154,   160,     0,   242,     0,     0,   210,     0,
     222,   220,   238,   239,   234,     0,   235,   236,   237,    32,
     326,    59,    59,   325,   330,   330,   330,   287,   330,   272,
     270,   273,    61,   269,    35,   330,    61,     0,    61,     0,
      61,   299,     0,   277,    61,     0,    64,    64,     0,     0,
       0,   276,    61,    64,    64,     0,    55,   215,     0,    55,
      55,     0,    61,     0,    61,   313,   298,   278,   284,   330,
      38,   330,    81,   330,   321,   330,    57,   330,   329,    59,
      59,   327,    55,    55,    57,   330,    59,    59,    55,     0,
       0,     0,     0,   233,   330,   324,   330,   271,   265,   301,
     300,     0,   306,    61,    61,     0,     0,     0,   302,    61,
      61,     0,     0,   227,     0,     0,   315,   314,    55,   330,
     330,    55,    55,    55,   330,   330,    55,    55,    55,    55,
       0,   308,   307,     0,     0,     0,   303,   304,     0,     0,
       0,   247,     0,    55,    55,    59,    55,    55,     0,     0,
      64,    64,    61,    64,    64,     0,     0,    59,    59,   330,
      59,    59,   253,   250,   309,    61,   310,   305,    61,   330,
     330,   312,   311
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    51,    52,    98,    99,    90,   194,   195,   150,
     248,   400,   470,   544,   563,   564,   651,    97,   256,    59,
     247,   743,   157,   277,   337,   391,   392,   665,   384,   656,
     257,   258,   259,   341,    53,    54,    55,   225,   471,   601,
      88,    89,   226,   203,     2,   565,   473,   625,   606,   609,
     610,   613,   614,   582,   583,    56,   217,   129,   197,   294,
     130,   177,   181,   554,   342,   343,   657,   658,   702,   703,
     667,   668,   401
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -683
static const yytype_int16 yypact[] =
{
    -683,    56,  1507,  -683,  -683,  -683,   198,  -683,  -683,  -683,
    -683,  -683,  -683,  2429,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,    24,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  1332,    19,  -683,  -683,  -683,  1040,  -683,  -683,  -683,
    -683,   -96,   -67,   -41,   -33,   -26,  -683,  -683,   -10,  -683,
      29,    36,  -683,  -683,    48,  -683,    55,  -683,    63,  -683,
      86,    91,   116,   135,   144,   149,   151,   160,    87,  -683,
       4,  -683,    19,  -683,  -683,  -683,  -683,  -683,     4,     4,
     -14,   121,   -17,   155,   -14,     1,   -14,   -14,   -14,   -14,
     163,   185,   -14,   -14,   -14,   -14,   -14,   -14,  -683,   -14,
     -14,   -14,  -683,   -14,   -14,   204,   479,  -683,  -683,  1616,
    -683,   294,  1995,   298,   300,   301,   312,   313,   318,   282,
    1665,   317,    60,   321,   323,  1041,   324,   242,  -683,  -683,
    -683,  2429,  -683,  -683,  -683,  -683,  -683,   491,   -14,   -14,
     491,   -14,   491,   -14,   491,   491,   491,   491,   491,   -14,
     -14,   491,   491,   196,   491,   491,   491,   -14,   491,   491,
     491,   -14,   491,   491,   -14,   -14,   -14,   -14,   -14,   -14,
    -683,   -14,   330,   -14,  -683,   331,   456,  -683,  -683,  -683,
    -683,   410,  -683,   332,  -683,   339,  -683,  -683,  -683,   340,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,   345,  -683,  -683,
    -683,  2215,  -683,  1885,  2215,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,   351,  -683,
     219,   219,   219,  -683,  -683,  -683,   219,   219,   219,   219,
     219,   491,   491,   219,   491,   219,   491,   219,   219,   219,
     219,   219,   491,   491,   219,   219,  -683,   221,   219,   219,
     196,   491,   219,   219,   219,   491,    32,   219,   491,   491,
     491,   491,   491,   491,   -14,   491,  -683,   491,  -683,  -683,
    -683,   364,  -683,  -683,  -683,  -683,  -683,  -683,  2325,  -683,
    -683,  -683,  -683,   366,   363,   374,   273,   362,   373,   373,
     661,   196,   196,   673,   196,    60,   196,   661,   661,   661,
      60,    60,   196,   196,   673,    60,   241,   256,   491,    60,
     221,  -683,    10,  -683,   491,   673,   491,    10,   384,   221,
     661,   196,   219,   219,   219,   219,   219,   491,   196,   219,
     387,   208,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,   219,   221,   221,   219,   219,
     219,   219,   219,   219,   219,   221,   219,   221,   196,   196,
     196,   196,  -683,   219,   221,   221,   219,   219,  -683,  2327,
    -683,  -683,   196,   219,   256,   491,   221,   219,   219,   196,
     221,   196,   256,   219,   221,   661,   661,    60,   491,   491,
     102,   221,   661,   388,  -683,   661,   256,   256,   389,   386,
     390,   391,   392,   273,   600,   256,    60,   256,   221,   221,
     221,   221,    60,   256,   256,   600,    60,  -683,   260,   263,
     268,   277,   287,   290,   -33,   293,   299,   302,   303,   306,
     308,   311,   316,    86,   320,   322,   327,   328,   334,   338,
     405,   341,   118,  -683,   221,    60,  -683,  -683,   256,   661,
      60,   221,   256,  -683,  -683,    60,   256,   196,   196,   196,
     219,   196,   221,  1453,   219,  -683,    10,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,    27,    78,   196,   219,  -683,
     219,  -683,   256,   256,   256,   256,   219,  -683,  -683,   196,
     219,   219,   358,  1207,   430,  2105,   434,   377,   451,   394,
     455,   462,   464,   473,   282,  1775,   477,   478,    60,   483,
     486,   487,  -683,   242,   493,  2327,  -683,   256,    10,  -683,
     196,   196,   256,  -683,   221,   196,  -683,   221,   221,   221,
     661,   221,  1453,  -683,   502,   124,  -683,    60,   372,   221,
     -42,   357,   488,  -683,  -683,  -683,  -683,   509,    94,   357,
     511,  -683,  -683,   381,    11,  -683,  -683,  -683,   141,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,   513,  -683,  -683,   410,  -683,   514,  -683,  -683,  -683,
     396,   517,  -683,  -683,   397,  -683,  -683,  -683,   518,   519,
    2215,  -683,  1885,  2215,  -683,  -683,  -683,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,  -683,   347,   221,   221,
     221,  -683,   256,   221,  1453,  1453,  1453,   196,  1453,  -683,
    -683,   523,  -683,   196,   400,  -683,   196,    10,  -683,   256,
     382,   256,   143,   209,   196,   219,   219,   219,  -683,   219,
     219,   383,   256,   196,   219,   219,   219,    60,  -683,  -683,
    -683,  -683,  -683,  -683,   535,  -683,   537,    60,  -683,    60,
    -683,  -683,  -683,  -683,  -683,  2325,  -683,  -683,  -683,  -683,
    -683,   196,    68,  -683,   256,   256,   256,  -683,   256,  -683,
    -683,  -683,   221,  -683,  -683,  -683,   221,   542,   221,   661,
     221,  -683,   522,  -683,   221,   661,    60,   616,   673,   661,
     503,  -683,   221,    60,   616,   673,   -40,  -683,   545,    14,
      41,   208,   221,    60,   221,  -683,  -683,  -683,  -683,  1453,
    -683,  1453,  -683,   256,  -683,   256,   -14,   256,  -683,   196,
     196,  -683,   219,   219,   -14,   256,   196,   196,   219,   417,
     549,   419,   421,  -683,   256,  -683,   256,  -683,  -683,  -683,
    -683,   491,  -683,   221,   221,   673,   661,   491,  -683,   221,
     221,   673,   661,  -683,   661,   661,  -683,  -683,   219,   256,
     256,   219,   219,   219,   256,   256,   219,    72,    79,   127,
     673,  -683,  -683,   553,   555,   673,  -683,  -683,   557,   432,
     661,  -683,   437,   219,   219,   196,   219,   219,    60,    60,
      60,    60,   221,    60,    60,   429,   438,   196,   196,   256,
     196,   196,  -683,  -683,  -683,   221,  -683,  -683,   221,   256,
     256,  -683,  -683
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -683,  -683,  -683,   525,  -683,  -683,  -683,  -683,  -683,    20,
    -683,   563,  -683,  -683,  -545,  -683,  -683,   482,   -87,  -683,
      37,   -88,  -101,   436,   465,   -38,    90,    84,  -256,  -506,
     266,  -683,   -34,  -136,    -8,   439,   -79,  -173,    -3,  -683,
    -683,   440,  -683,  -683,  -683,   190,    47,  -683,  -683,  -683,
    -683,  -683,  -683,  -683,  -683,  -683,    59,   468,   402,  -683,
     476,  -683,  -683,  -683,  -236,   211,  -181,   -98,  -580,  -114,
    -570,  -682,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -331
static const yytype_int16 yytable[] =
{
     151,   160,    93,   162,   164,   165,   166,   167,   168,   675,
      87,   171,   172,   173,   174,   175,   176,   649,   178,   179,
     180,   260,   182,   183,   263,   -59,   265,    91,   267,   268,
     269,   270,   271,   -55,    94,   274,   275,   -55,   278,   279,
     280,   131,   282,   283,   284,   761,   286,   287,   306,   347,
     309,   311,   761,   202,   678,   232,     3,   261,   262,   159,
     264,   224,   266,   228,   229,   666,   230,   231,   272,   273,
     132,   -55,   -55,   674,   -55,   -55,   281,   163,   396,   679,
     285,   -55,   -55,   288,   289,   290,   291,   292,   293,   408,
     295,   680,   297,   149,   336,   769,   133,   736,   660,   709,
     710,   711,   -24,   713,  -140,   -55,   -55,   739,   -55,   740,
     152,   134,   -55,   -55,   -55,   -55,   -55,   156,   154,   155,
     156,   420,   300,   -31,   201,   321,   322,   135,   324,   -37,
     326,   701,   223,  -330,   148,   156,   332,   333,   761,  -330,
     -59,   -59,   -59,   149,   308,   276,   -59,   149,    87,   771,
      95,    96,   351,   352,   353,   354,   355,   356,   -67,   358,
     149,   359,   313,   314,   315,   149,   136,   276,   316,   317,
     318,   319,   320,   137,   149,   323,   772,   325,   508,   327,
     328,   329,   330,   331,   681,   138,   334,   335,   424,   520,
     338,   339,   139,   357,   344,   345,   346,   158,   348,   350,
     140,   149,   402,   276,   777,   149,   778,   819,   407,   682,
     409,   149,   149,   305,   821,   307,   310,   148,   -24,   -24,
     149,   683,   807,  -147,   -66,   809,   218,   219,   141,   365,
     336,   161,   233,   374,   671,   149,   383,   276,   232,   169,
     374,   374,   374,   232,   232,   238,   220,   383,   232,  -330,
    -330,   149,   232,   142,   405,  -330,  -330,   149,   383,   405,
     149,   170,   822,   374,   415,   416,   417,   418,   419,    57,
      58,   422,   143,   -67,   -67,   -67,   228,   229,   -67,   -67,
     184,   144,   490,   491,   367,   368,   145,   425,   146,   239,
     428,   429,   430,   431,   432,   433,   434,   147,   436,   199,
     361,   204,   210,   205,   206,   442,   211,   212,   445,   446,
     213,   240,   241,   242,   243,   475,   214,   207,   208,   479,
     480,   209,   227,   215,   234,   485,   235,   237,   374,   374,
     232,   276,   405,   296,   244,   374,   298,   301,   374,   -66,
     -66,   -66,   302,   303,   -66,   -66,   504,   506,   304,   232,
     228,   229,   149,   230,   231,   232,   312,   336,   506,   232,
     228,   229,   624,   662,   231,   370,   371,   372,   373,   360,
     245,   246,   362,   363,   253,   228,   229,   398,   369,   489,
     370,   371,   372,   373,   545,   364,   399,   255,   232,   411,
     423,   495,   374,   232,   500,   499,   507,   522,   232,   501,
     523,   502,   560,   503,   375,   524,   567,   519,   568,   216,
     542,   388,   389,   390,   525,   386,   654,   428,   433,   581,
     571,   393,   572,   546,   526,   397,   654,   527,   577,   403,
     528,     5,   579,   580,   413,   602,   529,   607,   608,   530,
     531,   654,   551,   532,   566,   533,   605,   693,   534,   696,
     698,   232,     8,   535,   611,   612,   623,   536,   615,   537,
     637,     9,    10,    11,   538,   539,    12,   616,    14,   617,
      15,   540,   762,   374,    17,   541,   618,   545,   543,   768,
     232,   374,   626,   627,   663,   185,   629,   186,   187,   630,
     631,   669,   663,   632,   228,   229,    20,   250,   634,   487,
     488,   251,   252,   253,   254,   255,   494,   650,   185,   496,
     186,   187,   670,   566,   676,   677,   652,   604,   684,   686,
     688,   690,   691,   722,   730,   685,   510,   622,   715,   801,
     687,   689,   516,   664,   188,   806,   521,   717,   189,   190,
     737,   673,   738,   695,   191,   752,   756,   764,   770,   193,
     232,   792,   793,   794,   823,   795,   824,   188,   825,   826,
     827,   189,   190,   550,   842,   548,   828,   191,   773,   719,
     192,   829,   193,   843,   153,   555,    92,   725,   726,   727,
     633,   728,   729,   366,   236,   699,   733,   734,   735,   472,
     232,   249,   635,   619,   196,   566,   566,   566,   299,   566,
     232,   714,   232,   228,   229,   198,   505,   231,   379,   380,
     381,   382,   692,   808,   694,   697,   477,   127,   128,   228,
     229,   754,   662,   231,   370,   371,   372,   373,   628,   775,
       0,     0,   374,     0,     0,     0,     0,     0,   374,   232,
     663,   383,   374,     0,   647,   798,   232,   663,   383,     0,
       0,   803,   655,     0,     0,   781,   232,   653,     0,     0,
       0,     0,     0,   787,   228,   229,   750,   369,     0,   370,
     371,   372,   373,     0,   785,   786,   228,   229,     0,   378,
     791,   379,   380,   381,   382,     0,     0,   741,   759,   760,
       0,     0,     0,     0,     0,   766,   767,     0,   383,   374,
     566,     0,   566,     0,   383,   374,     0,   374,   374,     0,
     810,     0,     0,   813,   814,   815,   340,     0,   818,   820,
     719,   820,   349,   383,     0,     0,     0,   700,   383,     0,
       0,     0,     0,   374,     0,   830,   831,     0,   833,   834,
       0,   232,   232,   232,   232,     0,   232,   232,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   376,   377,     0,
     385,     0,   387,     0,     0,     0,     0,   700,   394,   395,
       0,     0,     0,     0,     0,     0,     0,   700,   406,   700,
       0,     0,     0,   410,     0,     0,     0,   414,     0,     0,
       0,     0,   837,   838,   421,   840,   841,     0,     0,     0,
       0,     0,     0,   655,     0,   404,     0,     0,     0,   758,
       0,     0,     0,   763,   412,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,   439,   440,   441,     0,     0,
       0,     0,     0,   700,     0,     0,     0,     0,   474,     0,
       0,   426,   427,     0,     0,   481,     0,   483,     0,     0,
     435,     0,   437,     0,     0,     0,   492,     0,     0,   443,
     444,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,   478,     0,     0,     0,   482,     0,     0,   655,   486,
       0,     0,     0,     0,     0,     0,   493,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   512,   513,   514,   515,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   835,   836,
       0,     0,     0,   557,   558,   559,     0,   561,     0,     0,
       0,     0,   569,     0,     0,     0,     0,     0,     0,   547,
       0,     0,     0,   570,     0,     0,   552,     0,     0,     0,
       0,     0,     0,     0,     0,   578,     0,   562,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,     0,
       0,     0,     0,     0,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,   638,     0,   639,   640,     0,   497,
     498,   643,     0,     0,     0,     0,     0,     0,   509,     0,
     511,     0,     0,     0,     0,     0,   517,   518,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
       0,     0,   644,   645,   646,     0,   648,     0,     0,     0,
       0,     0,     0,     0,   659,   661,     0,     0,     0,     0,
       0,   549,     0,   672,     0,   553,     0,     0,     0,   556,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
     101,     0,     0,     0,   102,   103,   104,     0,   105,   106,
       0,   107,   108,   109,   110,   573,   574,   575,   576,     0,
       0,   111,     0,   712,   112,     0,   113,     0,   114,   716,
       0,     0,   718,   720,     0,     0,     0,     0,     0,     0,
     724,     0,     0,   704,   705,   706,   115,     0,   708,   732,
     636,     0,     0,     0,   116,   641,   117,   118,   119,     0,
       0,   120,   121,   122,     0,     0,     0,     0,   123,     0,
       0,     0,     0,   124,     0,     0,     0,   742,   744,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   125,     0,     0,
     126,     0,     0,     0,     0,     0,     0,   749,   127,   128,
       0,   751,     0,   753,     0,   755,     0,     0,     0,   757,
       0,     0,     0,     0,     0,   783,   784,   765,     0,     0,
       0,     0,   789,   790,     0,   707,     0,   774,     0,   776,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   721,     0,   723,     0,     0,     0,     0,     0,
     584,     0,     0,     0,     0,   731,     0,   585,     0,     0,
       0,     0,     0,     0,     0,     0,   586,     0,   799,   800,
     587,     0,   588,     0,   804,   805,     0,     0,     0,     0,
       0,   832,   589,     0,     0,     0,   590,   745,   746,   747,
       0,   748,   591,   844,   845,   592,   847,   848,     0,     0,
       0,     0,     0,     0,     0,     0,   593,   594,     0,     0,
       0,   595,     0,     0,     0,   596,     0,   839,     0,     0,
       0,     0,   597,   598,   599,     0,     0,     0,     0,     0,
     849,     0,     0,   850,     0,     0,   779,     0,   780,     0,
     782,     0,     0,     0,     0,     0,     0,     0,   788,     0,
       0,     0,  -330,   600,     0,     0,     0,   796,     0,   797,
       0,     0,     0,     0,     0,     0,     0,    -5,     4,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,   811,   812,     0,     0,     0,   816,   817,     6,
       0,     0,     7,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,    11,     0,     0,    12,    13,
      14,     0,    15,     0,    16,     0,    17,     0,     0,    18,
       0,     0,   846,     0,     0,    19,     0,     0,     0,     0,
       0,     0,   851,   852,     0,     0,     0,     0,    20,     0,
       0,     0,     0,    21,     0,     0,    22,     0,     0,     0,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   -34,     0,
       0,     0,     0,    -5,    -5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,   448,
     449,     0,     0,   450,   451,   452,   453,     0,   454,   455,
       0,     0,    66,     0,     0,     0,    67,     0,     0,   456,
       0,     0,   457,    69,     0,     0,     0,   458,   459,     0,
       0,     0,    72,     0,     0,     0,    73,     0,     0,   460,
       0,    75,    -5,     4,     0,     0,     0,     0,     5,   461,
       0,     0,     0,    77,     0,   462,     0,    79,   463,     0,
     464,   465,   466,   467,     6,     0,   468,     7,     0,     8,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    10,
      11,     0,     0,    12,    13,    14,     0,    15,     0,    16,
       0,    17,     0,     0,    18,     0,     0,     0,     0,   469,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,    21,     0,
       0,    22,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   100,     0,     0,   101,     0,    -5,    -5,
     102,   103,   104,     0,   105,   106,     0,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,   111,     0,     0,
     112,     0,   113,     0,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,   115,   218,   219,     0,     5,     0,     0,     0,
     116,     0,   117,   118,   119,     0,     0,   120,   121,   122,
       0,     0,     0,   220,   123,     7,     0,     8,     0,   124,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   221,     0,     0,     0,     0,     0,    19,     0,
     222,     0,     0,   125,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,   218,   219,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   620,     0,     0,     0,     0,     0,    19,     0,
     621,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,   218,   219,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   200,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,    11,     0,
       0,    12,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,   603,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,   218,   219,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     4,     0,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,   448,   449,     0,     0,   450,   451,   452,
     453,     0,   454,   455,     0,     7,    66,     0,     0,     0,
      67,     0,     0,   456,     0,     0,   457,    69,     0,     0,
       0,   458,   459,     0,     0,     0,    72,    16,     0,     0,
      73,     0,     0,   460,     0,    75,     0,     0,    19,     0,
       0,     0,     0,   461,     0,     0,     0,    77,     0,   462,
       0,    79,   463,     0,   464,   465,   466,   467,     0,     0,
     468,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    60,     0,   469,     0,     0,     0,     0,     0,    61,
      62,    63,     0,     0,    64,    65,     0,     0,    66,     0,
       0,     0,    67,     0,     0,     0,     0,     0,    68,    69,
       0,     0,     0,    70,    71,     0,     0,     0,    72,     0,
       0,     0,    73,     0,     0,    74,     0,    75,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,    77,
       0,    78,     0,    79,    80,     0,     0,    81,    82,    83,
       0,     0,    84,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86
};

static const yytype_int16 yycheck[] =
{
      88,   102,    51,   104,   105,   106,   107,   108,   109,   579,
      13,   112,   113,   114,   115,   116,   117,   562,   119,   120,
     121,   157,   123,   124,   160,    15,   162,     3,   164,   165,
     166,   167,   168,     6,    15,   171,   172,     5,   174,   175,
     176,   137,   178,   179,   180,   727,   182,   183,   221,   285,
     223,   224,   734,   132,    43,   142,     0,   158,   159,    76,
     161,   140,   163,     3,     4,   571,     6,     7,   169,   170,
     137,     3,     4,   579,     6,     7,   177,    76,   334,    68,
     181,     3,     4,   184,   185,   186,   187,   188,   189,   345,
     191,    80,   193,   133,   136,   135,   137,   677,   140,   644,
     645,   646,    15,   648,   137,     3,     4,   687,     6,   689,
      90,   137,    10,    11,    12,    13,    14,   134,    98,    99,
     134,   357,   201,     5,   132,   261,   262,   137,   264,     5,
     266,   637,   140,    15,   130,   134,   272,   273,   820,    15,
     130,   131,   132,   133,   223,   135,   136,   133,   151,   135,
     131,   132,   288,   289,   290,   291,   292,   293,    15,   295,
     133,   297,   250,   251,   252,   133,   137,   135,   256,   257,
     258,   259,   260,   137,   133,   263,   135,   265,   434,   267,
     268,   269,   270,   271,    43,   137,   274,   275,   361,   445,
     278,   279,   137,   294,   282,   283,   284,    76,   286,   287,
     137,   133,   338,   135,   749,   133,   751,   135,   344,    68,
     346,   133,   133,   221,   135,   223,   224,   130,   131,   132,
     133,    80,   792,   137,    15,   795,    18,    19,   137,   316,
     136,    76,   142,   320,   140,   133,   323,   135,   325,    76,
     327,   328,   329,   330,   331,     3,    38,   334,   335,   131,
     132,   133,   339,   137,   342,   131,   132,   133,   345,   347,
     133,    76,   135,   350,   352,   353,   354,   355,   356,    71,
      72,   359,   137,   130,   131,   132,     3,     4,   135,   136,
      76,   137,   418,   419,   318,   319,   137,   375,   137,    47,
     378,   379,   380,   381,   382,   383,   384,   137,   386,     5,
     308,     3,    20,     3,     3,   393,    24,    25,   396,   397,
      28,    69,    70,    71,    72,   403,    34,     5,     5,   407,
     408,     3,     5,    41,     3,   413,     3,     3,   415,   416,
     417,   135,   420,     3,    92,   422,     5,     5,   425,   130,
     131,   132,     3,     3,   135,   136,   433,   434,     3,   436,
       3,     4,   133,     6,     7,   442,     5,   136,   445,   446,
       3,     4,   535,     6,     7,     8,     9,    10,    11,     5,
     128,   129,     6,    10,    12,     3,     4,   136,     6,   417,
       8,     9,    10,    11,   472,    11,   130,    14,   475,     5,
       3,     3,   479,   480,     8,     6,   434,   137,   485,     9,
     137,    10,   490,    11,   320,   137,   494,   445,   496,   127,
       5,   327,   328,   329,   137,   325,    69,   505,   506,    61,
     508,   331,   510,   472,   137,   335,    69,   137,   516,   339,
     137,    21,   520,   521,   350,     5,   137,     3,    61,   137,
     137,    69,   480,   137,   493,   137,   525,   620,   137,   622,
     623,   538,    42,   137,     3,    61,   535,   137,     3,   137,
     548,    51,    52,    53,   137,   137,    56,     5,    58,     5,
      60,   137,   728,   560,    64,   137,     3,   565,   137,   735,
     567,   568,     5,     5,   571,    29,     3,    31,    32,     3,
       3,     3,   579,   542,     3,     4,    86,     6,     5,   415,
     416,    10,    11,    12,    13,    14,   422,     5,    29,   425,
      31,    32,     3,   562,     3,   134,   565,   525,     5,     5,
       3,     3,     3,   141,   141,   604,   436,   535,     5,   785,
     134,   134,   442,   571,    78,   791,   446,   137,    82,    83,
       5,   579,     5,   622,    88,     3,    24,    44,     3,    93,
     637,   134,     3,   134,   810,   134,     3,    78,     3,   815,
       3,    82,    83,   479,   135,   475,   134,    88,   741,   657,
      91,   134,    93,   135,    92,   485,    51,   665,   666,   667,
     543,   669,   670,   317,   145,   634,   674,   675,   676,   399,
     677,   151,   545,   534,   126,   644,   645,   646,   196,   648,
     687,   650,   689,     3,     4,   129,     6,     7,     8,     9,
      10,    11,   620,   794,   622,   623,   405,   138,   139,     3,
       4,   719,     6,     7,     8,     9,    10,    11,   538,   743,
      -1,    -1,   719,    -1,    -1,    -1,    -1,    -1,   725,   726,
     727,   728,   729,    -1,   560,   781,   733,   734,   735,    -1,
      -1,   787,   568,    -1,    -1,   756,   743,   567,    -1,    -1,
      -1,    -1,    -1,   764,     3,     4,   715,     6,    -1,     8,
       9,    10,    11,    -1,   762,   763,     3,     4,    -1,     6,
     768,     8,     9,    10,    11,    -1,    -1,   695,   726,   727,
      -1,    -1,    -1,    -1,    -1,   733,   734,    -1,   785,   786,
     749,    -1,   751,    -1,   791,   792,    -1,   794,   795,    -1,
     798,    -1,    -1,   801,   802,   803,   280,    -1,   806,   807,
     808,   809,   286,   810,    -1,    -1,    -1,   637,   815,    -1,
      -1,    -1,    -1,   820,    -1,   823,   824,    -1,   826,   827,
      -1,   828,   829,   830,   831,    -1,   833,   834,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,   322,    -1,
     324,    -1,   326,    -1,    -1,    -1,    -1,   677,   332,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   687,   342,   689,
      -1,    -1,    -1,   347,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,   830,   831,   358,   833,   834,    -1,    -1,    -1,
      -1,    -1,    -1,   719,    -1,   340,    -1,    -1,    -1,   725,
      -1,    -1,    -1,   729,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   388,   389,   390,   391,    -1,    -1,
      -1,    -1,    -1,   743,    -1,    -1,    -1,    -1,   402,    -1,
      -1,   376,   377,    -1,    -1,   409,    -1,   411,    -1,    -1,
     385,    -1,   387,    -1,    -1,    -1,   420,    -1,    -1,   394,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     786,   406,    -1,    -1,    -1,   410,    -1,    -1,   794,   414,
      -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   438,   439,   440,   441,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   828,   829,
      -1,    -1,    -1,   487,   488,   489,    -1,   491,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   474,
      -1,    -1,    -1,   507,    -1,    -1,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   519,    -1,   492,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   412,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   548,    -1,   550,   551,    -1,   426,
     427,   555,    -1,    -1,    -1,    -1,    -1,    -1,   435,    -1,
     437,    -1,    -1,    -1,    -1,    -1,   443,   444,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   554,
      -1,    -1,   557,   558,   559,    -1,   561,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   569,   570,    -1,    -1,    -1,    -1,
      -1,   478,    -1,   578,    -1,   482,    -1,    -1,    -1,   486,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,   512,   513,   514,   515,    -1,
      -1,    41,    -1,   647,    44,    -1,    46,    -1,    48,   653,
      -1,    -1,   656,   657,    -1,    -1,    -1,    -1,    -1,    -1,
     664,    -1,    -1,   638,   639,   640,    66,    -1,   643,   673,
     547,    -1,    -1,    -1,    74,   552,    76,    77,    78,    -1,
      -1,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,   701,   702,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   127,    -1,    -1,
     130,    -1,    -1,    -1,    -1,    -1,    -1,   712,   138,   139,
      -1,   716,    -1,   718,    -1,   720,    -1,    -1,    -1,   724,
      -1,    -1,    -1,    -1,    -1,   759,   760,   732,    -1,    -1,
      -1,    -1,   766,   767,    -1,   642,    -1,   742,    -1,   744,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   659,    -1,   661,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,   672,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,   783,   784,
      43,    -1,    45,    -1,   789,   790,    -1,    -1,    -1,    -1,
      -1,   825,    55,    -1,    -1,    -1,    59,   704,   705,   706,
      -1,   708,    65,   837,   838,    68,   840,   841,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    88,    -1,   832,    -1,    -1,
      -1,    -1,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
     845,    -1,    -1,   848,    -1,    -1,   753,    -1,   755,    -1,
     757,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   765,    -1,
      -1,    -1,     0,   126,    -1,    -1,    -1,   774,    -1,   776,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   799,   800,    -1,    -1,    -1,   804,   805,    37,
      -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    53,    -1,    -1,    56,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    -1,    -1,    67,
      -1,    -1,   839,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,   849,   850,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,     5,    -1,
      -1,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    49,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    63,    -1,    -1,    66,
      -1,    68,    15,    16,    -1,    -1,    -1,    -1,    21,    76,
      -1,    -1,    -1,    80,    -1,    82,    -1,    84,    85,    -1,
      87,    88,    89,    90,    37,    -1,    93,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      53,    -1,    -1,    56,    57,    58,    -1,    60,    -1,    62,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,   126,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    17,    -1,    -1,    20,    -1,   131,   132,
      24,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    66,    18,    19,    -1,    21,    -1,    -1,    -1,
      74,    -1,    76,    77,    78,    -1,    -1,    81,    82,    83,
      -1,    -1,    -1,    38,    88,    40,    -1,    42,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    -1,    40,    39,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    49,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    59,    62,    -1,    -1,
      63,    -1,    -1,    66,    -1,    68,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,    82,
      -1,    84,    85,    -1,    87,    88,    89,    90,    -1,    -1,
      93,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    22,    -1,   126,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    -1,    -1,    66,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    80,
      -1,    82,    -1,    84,    85,    -1,    -1,    88,    89,    90,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   143,   186,     0,    16,    21,    37,    40,    42,    51,
      52,    53,    56,    57,    58,    60,    62,    64,    67,    73,
      86,    91,    94,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   144,   145,   176,   177,   178,   197,    71,    72,   161,
      22,    30,    31,    32,    35,    36,    39,    43,    49,    50,
      54,    55,    59,    63,    66,    68,    76,    80,    82,    84,
      85,    88,    89,    90,    93,    98,   126,   180,   182,   183,
     148,     3,   145,   214,    15,   131,   132,   159,   146,   147,
      17,    20,    24,    25,    26,    28,    29,    31,    32,    33,
      34,    41,    44,    46,    48,    66,    74,    76,    77,    78,
      81,    82,    83,    88,    93,   127,   130,   138,   139,   199,
     202,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   130,   133,
     151,   163,   151,   159,   151,   151,   134,   164,    76,    76,
     164,    76,   164,    76,   164,   164,   164,   164,   164,    76,
      76,   164,   164,   164,   164,   164,   164,   203,   164,   164,
     164,   204,   164,   164,    76,    29,    31,    32,    78,    82,
      83,    88,    91,    93,   149,   150,   199,   200,   202,     5,
      67,   176,   178,   185,     3,     3,     3,     5,     5,     3,
      20,    24,    25,    28,    34,    41,   127,   198,    18,    19,
      38,    67,    75,   176,   178,   179,   184,     5,     3,     4,
       6,     7,   160,   168,     3,     3,   177,     3,     3,    47,
      69,    70,    71,    72,    92,   128,   129,   162,   152,   183,
       6,    10,    11,    12,    13,    14,   160,   172,   173,   174,
     175,   164,   164,   175,   164,   175,   164,   175,   175,   175,
     175,   175,   164,   164,   175,   175,   135,   165,   175,   175,
     175,   164,   175,   175,   175,   164,   175,   175,   164,   164,
     164,   164,   164,   164,   201,   164,     3,   164,     5,   200,
     178,     5,     3,     3,     3,   176,   179,   176,   178,   179,
     176,   179,     5,   163,   163,   163,   163,   163,   163,   163,
     163,   175,   175,   163,   175,   163,   175,   163,   163,   163,
     163,   163,   175,   175,   163,   163,   136,   166,   163,   163,
     165,   175,   206,   207,   163,   163,   163,   206,   163,   165,
     163,   175,   175,   175,   175,   175,   175,   164,   175,   175,
       5,   176,     6,    10,    11,   160,   172,   174,   174,     6,
       8,     9,    10,    11,   160,   169,   165,   165,     6,     8,
       9,    10,    11,   160,   170,   165,   168,   165,   169,   169,
     169,   167,   168,   168,   165,   165,   170,   168,   136,   130,
     153,   214,   175,   168,   166,   163,   165,   175,   170,   175,
     165,     5,   166,   169,   165,   163,   163,   163,   163,   163,
     206,   165,   163,     3,   179,   163,   166,   166,   163,   163,
     163,   163,   163,   163,   163,   166,   163,   166,   165,   165,
     165,   165,   163,   166,   166,   163,   163,    22,    26,    27,
      30,    31,    32,    33,    35,    36,    46,    49,    54,    55,
      66,    76,    82,    85,    87,    88,    89,    90,    93,   126,
     154,   180,   187,   188,   165,   163,   153,   207,   166,   163,
     163,   165,   166,   165,   153,   163,   166,   169,   169,   167,
     175,   175,   165,   166,   169,     3,   169,   153,   153,     6,
       8,     9,    10,    11,   160,     6,   160,   167,   170,   153,
     168,   153,   166,   166,   166,   166,   168,   153,   153,   167,
     170,   168,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,     5,   137,   155,   163,   214,   166,   168,   153,
     169,   167,   166,   153,   205,   168,   153,   165,   165,   165,
     163,   165,   166,   156,   157,   187,   214,   163,   163,   165,
     165,   163,   163,   153,   153,   153,   153,   163,   165,   163,
     163,    61,   195,   196,    23,    30,    39,    43,    45,    55,
      59,    65,    68,    79,    80,    84,    88,    95,    96,    97,
     126,   181,     5,    67,   176,   178,   190,     3,    61,   191,
     192,     3,    61,   193,   194,     3,     5,     5,     3,   198,
      67,    75,   176,   178,   179,   189,     5,     5,   168,     3,
       3,     3,   214,   162,     5,   188,   153,   163,   165,   165,
     165,   153,   166,   165,   166,   166,   166,   169,   166,   156,
       5,   158,   214,   168,    69,   169,   171,   208,   209,   166,
     140,   166,     6,   160,   167,   169,   171,   212,   213,     3,
       3,   140,   166,   167,   171,   212,     3,   134,    43,    68,
      80,    43,    68,    80,     5,   178,     5,   134,     3,   134,
       3,     3,   176,   179,   176,   178,   179,   176,   179,   214,
     168,   171,   210,   211,   166,   166,   166,   153,   166,   156,
     156,   156,   165,   156,   214,     5,   165,   137,   165,   163,
     165,   153,   141,   153,   165,   163,   163,   163,   163,   163,
     141,   153,   165,   163,   163,   163,   210,     5,     5,   210,
     210,   176,   165,   163,   165,   153,   153,   153,   153,   166,
     214,   166,     3,   166,   209,   166,    24,   166,   169,   167,
     167,   213,   170,   169,    44,   166,   167,   167,   170,   135,
       3,   135,   135,   179,   166,   211,   166,   156,   156,   153,
     153,   164,   153,   165,   165,   163,   163,   164,   153,   165,
     165,   163,   134,     3,   134,   134,   153,   153,   175,   166,
     166,   170,   169,   175,   166,   166,   170,   212,   208,   212,
     163,   153,   153,   163,   163,   163,   153,   153,   163,   135,
     163,   135,   135,   170,     3,     3,   170,     3,   134,   134,
     163,   163,   165,   163,   163,   168,   168,   167,   167,   166,
     167,   167,   135,   135,   165,   165,   153,   165,   165,   166,
     166,   153,   153
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
#line 312 "frame/ds9parser.Y"
    {cerr << "DS9 Regions File 3.2" << endl;;}
    break;

  case 9:
#line 315 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 10:
#line 317 "frame/ds9parser.Y"
    {globalSystem=(Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 12:
#line 318 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=(Coord::SkyFrame)(yyvsp[(1) - (1)].integer);;}
    break;

  case 14:
#line 319 "frame/ds9parser.Y"
    {globalSystem=globalWCS; globalSky=Coord::FK5;;}
    break;

  case 21:
#line 328 "frame/ds9parser.Y"
    {globalTile = (yyvsp[(2) - (2)].integer);;}
    break;

  case 22:
#line 329 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 25:
#line 333 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 28:
#line 337 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 29:
#line 337 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 31:
#line 339 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 32:
#line 339 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(4) - (5)].str),80);;}
    break;

  case 34:
#line 343 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 35:
#line 343 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(2) - (3)].str),80);;}
    break;

  case 37:
#line 345 "frame/ds9parser.Y"
    {DISCARD_(1);;}
    break;

  case 38:
#line 345 "frame/ds9parser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;

  case 41:
#line 350 "frame/ds9parser.Y"
    {YYACCEPT;;}
    break;

  case 42:
#line 353 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 43:
#line 354 "frame/ds9parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 44:
#line 357 "frame/ds9parser.Y"
    {yydebug=1;;}
    break;

  case 45:
#line 358 "frame/ds9parser.Y"
    {yydebug=0;;}
    break;

  case 46:
#line 361 "frame/ds9parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 47:
#line 363 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 48:
#line 364 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 49:
#line 365 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 50:
#line 366 "frame/ds9parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 51:
#line 368 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 52:
#line 369 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 53:
#line 370 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 54:
#line 371 "frame/ds9parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 61:
#line 386 "frame/ds9parser.Y"
    {cStatus = 0;;}
    break;

  case 62:
#line 387 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 63:
#line 388 "frame/ds9parser.Y"
    {cStatus = 1;;}
    break;

  case 64:
#line 391 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(0,localSystem,localSky);;}
    break;

  case 65:
#line 392 "frame/ds9parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 66:
#line 396 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 67:
#line 398 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 399 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 69:
#line 402 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 70:
#line 403 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 71:
#line 404 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 72:
#line 405 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 73:
#line 406 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 74:
#line 407 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 75:
#line 411 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 76:
#line 418 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 425 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 432 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 439 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 446 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 454 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 82:
#line 457 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 83:
#line 460 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 463 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 467 "frame/ds9parser.Y"
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
#line 480 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 87:
#line 488 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 496 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 503 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 511 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 518 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 92:
#line 525 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 93:
#line 526 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 94:
#line 527 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 95:
#line 528 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 96:
#line 529 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 97:
#line 532 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 98:
#line 533 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 99:
#line 534 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 100:
#line 535 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 101:
#line 536 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 102:
#line 537 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 103:
#line 538 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 104:
#line 539 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 105:
#line 540 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 106:
#line 541 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 107:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 108:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 109:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 110:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 111:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 112:
#line 547 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 113:
#line 548 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 114:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 115:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 116:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 117:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 118:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 119:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 120:
#line 555 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 121:
#line 556 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 122:
#line 557 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 123:
#line 558 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 124:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 125:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 126:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 564 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4_NO_E;;}
    break;

  case 128:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 566 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 130:
#line 567 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 131:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 132:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::SUPERGALACTIC;;}
    break;

  case 133:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 134:
#line 571 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::HELIOECLIPTIC;;}
    break;

  case 135:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 136:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 137:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 138:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 139:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 140:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 141:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 142:
#line 583 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 143:
#line 584 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 144:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 145:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 146:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 147:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 148:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 149:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 150:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 151:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 152:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 153:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 154:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 155:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 156:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 157:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 158:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 159:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 160:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 161:
#line 604 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 162:
#line 605 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 163:
#line 606 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 164:
#line 607 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 165:
#line 608 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 166:
#line 609 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 167:
#line 610 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 168:
#line 611 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 171:
#line 619 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 172:
#line 624 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 173:
#line 629 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 174:
#line 633 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 175:
#line 635 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 176:
#line 640 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 177:
#line 645 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 178:
#line 650 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 179:
#line 655 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 180:
#line 659 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 181:
#line 661 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 182:
#line 666 "frame/ds9parser.Y"
    {
	  globalFill = localFill = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 183:
#line 670 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 184:
#line 674 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 185:
#line 676 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 186:
#line 679 "frame/ds9parser.Y"
    {;}
    break;

  case 187:
#line 680 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 188:
#line 682 "frame/ds9parser.Y"
    {
	  strncpy(globalCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(globalCompassEast,(yyvsp[(5) - (7)].str),80);
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  globalCompassNArrow = localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  globalCompassEArrow = localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 189:
#line 690 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 190:
#line 691 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 191:
#line 692 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 192:
#line 696 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 193:
#line 703 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 194:
#line 710 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 195:
#line 717 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 196:
#line 724 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 197:
#line 731 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 198:
#line 738 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 199:
#line 745 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 200:
#line 751 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 201:
#line 760 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 202:
#line 765 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 203:
#line 770 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 204:
#line 775 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 205:
#line 781 "frame/ds9parser.Y"
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
	  globalRulerDistSpec[0] = '\0';
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

  case 208:
#line 829 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 209:
#line 830 "frame/ds9parser.Y"
    {strncpy(localColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 210:
#line 832 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 211:
#line 836 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 212:
#line 837 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 213:
#line 838 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 214:
#line 839 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 215:
#line 840 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 216:
#line 842 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 217:
#line 843 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 218:
#line 844 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 219:
#line 846 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 220:
#line 847 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 221:
#line 848 "frame/ds9parser.Y"
    {localFill=(yyvsp[(3) - (3)].integer);;}
    break;

  case 222:
#line 849 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 223:
#line 850 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 224:
#line 851 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 226:
#line 853 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 227:
#line 855 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 228:
#line 861 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 229:
#line 862 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 233:
#line 869 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 234:
#line 876 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 235:
#line 883 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 236:
#line 890 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 237:
#line 897 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 238:
#line 904 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 239:
#line 911 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 240:
#line 918 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 241:
#line 925 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 242:
#line 934 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 243:
#line 939 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 244:
#line 944 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 245:
#line 949 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 246:
#line 955 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 247:
#line 955 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 248:
#line 956 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 249:
#line 959 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 250:
#line 960 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 251:
#line 961 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 252:
#line 964 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 253:
#line 965 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 254:
#line 966 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 255:
#line 969 "frame/ds9parser.Y"
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

  case 256:
#line 1020 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 257:
#line 1021 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 258:
#line 1022 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 259:
#line 1023 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 260:
#line 1024 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 261:
#line 1025 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 262:
#line 1026 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 263:
#line 1029 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 264:
#line 1030 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 265:
#line 1034 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 266:
#line 1041 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 267:
#line 1043 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 268:
#line 1049 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 269:
#line 1056 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
	  localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 270:
#line 1065 "frame/ds9parser.Y"
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

  case 271:
#line 1075 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1083 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 273:
#line 1091 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 274:
#line 1100 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 275:
#line 1107 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 276:
#line 1115 "frame/ds9parser.Y"
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

  case 277:
#line 1138 "frame/ds9parser.Y"
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

  case 278:
#line 1161 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createBoxCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 279:
#line 1169 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 280:
#line 1171 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1176 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 282:
#line 1178 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1185 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 284:
#line 1193 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 285:
#line 1201 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1207 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 287:
#line 1209 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1216 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1223 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1230 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1237 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1244 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
#line 1251 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 294:
#line 1258 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 295:
#line 1265 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1272 "frame/ds9parser.Y"
    {
	  fr->createRulerCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
   	  localRulerCoordSystem, localRulerSkyFrame,
          localRulerDistSystem, localRulerDistFormat, localRulerDistSpec,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
#line 1281 "frame/ds9parser.Y"
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

  case 298:
#line 1291 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
#line 1299 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 300:
#line 1307 "frame/ds9parser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 301:
#line 1317 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 302:
#line 1325 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 303:
#line 1335 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createEllipseAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 304:
#line 1345 "frame/ds9parser.Y"
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

  case 305:
#line 1357 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 306:
#line 1365 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    Vector((yyvsp[(5) - (12)].vector)),Vector((yyvsp[(7) - (12)].vector)),1,
	    (yyvsp[(9) - (12)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 307:
#line 1375 "frame/ds9parser.Y"
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

  case 308:
#line 1387 "frame/ds9parser.Y"
    {
	  // prefered syntax
	  fr->createBoxAnnulusCmd(Vector((yyvsp[(3) - (14)].vector)),
	    Vector((yyvsp[(5) - (14)].vector)),Vector((yyvsp[(7) - (14)].vector)),(yyvsp[(9) - (14)].integer),
	    (yyvsp[(11) - (14)].real),
	    localColor,localDash,localWidth,localFont,
	    localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 309:
#line 1397 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 310:
#line 1406 "frame/ds9parser.Y"
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

  case 311:
#line 1428 "frame/ds9parser.Y"
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

  case 312:
#line 1452 "frame/ds9parser.Y"
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

  case 317:
#line 1482 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 320:
#line 1494 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 323:
#line 1502 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 326:
#line 1513 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 329:
#line 1523 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 330:
#line 1527 "frame/ds9parser.Y"
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


#line 1554 "frame/ds9parser.Y"


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


