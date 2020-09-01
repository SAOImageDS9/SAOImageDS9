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
#line 495 "frame/ds9parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 508 "frame/ds9parser.C"

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
#define YYLAST   2474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  327
/* YYNRULES -- Number of states.  */
#define YYNSTATES  850

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
     353,   355,   358,   361,   363,   366,   369,   371,   374,   376,
     378,   380,   382,   384,   386,   388,   390,   394,   396,   400,
     404,   409,   413,   417,   421,   423,   425,   427,   431,   436,
     440,   445,   449,   453,   457,   461,   469,   473,   477,   481,
     486,   489,   492,   495,   498,   501,   504,   506,   508,   511,
     513,   515,   517,   518,   522,   524,   528,   532,   537,   541,
     545,   549,   553,   559,   561,   563,   565,   569,   574,   578,
     583,   587,   591,   595,   599,   607,   611,   615,   619,   623,
     627,   632,   635,   638,   641,   644,   647,   650,   652,   654,
     657,   659,   661,   663,   664,   672,   674,   675,   686,   688,
     689,   700,   702,   703,   705,   707,   709,   711,   713,   715,
     717,   719,   721,   732,   733,   741,   748,   757,   766,   777,
     786,   795,   804,   813,   824,   835,   846,   847,   855,   856,
     864,   873,   884,   891,   892,   902,   909,   917,   925,   933,
     941,   949,   957,   965,   974,   983,   994,  1005,  1018,  1031,
    1044,  1059,  1074,  1093,  1106,  1121,  1136,  1155,  1174,  1195,
    1216,  1227,  1240,  1253,  1259,  1268,  1272,  1274,  1276,  1280,
    1282,  1284,  1288,  1290,  1292,  1296,  1298,  1302
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
      19,    -1,    82,    -1,    57,    -1,    35,    -1,    50,    -1,
      43,    -1,    66,    -1,    78,    -1,    39,    -1,    61,    -1,
      83,    -1,    82,    -1,    93,    -1,    57,    -1,    92,    -1,
      23,    66,    -1,    66,    -1,    45,    66,    -1,    23,    43,
      -1,    43,    -1,    45,    43,    -1,    23,    78,    -1,    78,
      -1,    45,    78,    -1,    39,    -1,    85,    -1,    30,    -1,
     123,    -1,    77,    -1,    54,    -1,    63,    -1,    94,    -1,
     179,   160,   180,    -1,   180,    -1,   177,   134,   159,    -1,
      30,   134,     5,    -1,    36,   134,     3,     3,    -1,   123,
     134,     3,    -1,    54,   134,     5,    -1,    85,   134,     5,
      -1,    35,    -1,    83,    -1,    22,    -1,    74,   134,   195,
      -1,    74,   134,   195,     3,    -1,    49,   134,     3,    -1,
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
      -1,    83,    -1,    22,    -1,    74,   134,   195,    -1,    74,
     134,   195,     3,    -1,    49,   134,     3,    -1,    64,   134,
       3,     3,    -1,    90,   134,     3,    -1,    32,   134,     3,
      -1,    80,   134,   186,    -1,    53,   134,     5,    -1,    31,
     134,   187,     5,     5,     3,     3,    -1,    86,   134,   165,
      -1,    87,   134,     3,    -1,    33,   134,   188,    -1,    46,
     134,   190,    -1,    26,   134,   192,    -1,   173,   175,   173,
     176,    -1,   173,   173,    -1,   173,   176,    -1,   175,   173,
      -1,   175,   176,    -1,    65,   173,    -1,    65,   176,    -1,
     176,    -1,    73,    -1,   173,   175,    -1,   173,    -1,   175,
      -1,    65,    -1,    -1,   189,   131,   207,   132,   131,   205,
     132,    -1,    59,    -1,    -1,   191,   131,   207,   132,   131,
     209,   132,   131,   165,   132,    -1,    59,    -1,    -1,   193,
     131,   207,   132,   131,   209,   132,   131,   165,   132,    -1,
      59,    -1,    -1,    28,    -1,    24,    -1,    41,    -1,    34,
      -1,   124,    -1,    20,    -1,    25,    -1,   135,    -1,   136,
      -1,    90,   161,   172,   160,   166,   160,   165,   162,   163,
     153,    -1,    -1,    81,   198,   161,   203,   162,   163,   153,
      -1,    85,   161,   172,   162,   163,   153,    -1,    80,   161,
     172,   160,   172,   162,   163,   153,    -1,    31,   161,   172,
     160,   166,   162,   163,   153,    -1,    76,   161,   172,   160,
     172,   160,   166,   162,   163,   153,    -1,    29,   161,   172,
     160,   166,   162,   163,   153,    -1,    32,   161,   172,   160,
     164,   162,   163,   153,    -1,    28,   161,   172,   160,   166,
     162,   163,   150,    -1,    29,   161,   172,   160,   166,   162,
     163,   150,    -1,    44,   161,   172,   160,   167,   160,   164,
     162,   163,   150,    -1,    24,   161,   172,   160,   167,   160,
     164,   162,   163,   150,    -1,    79,   161,   172,   160,   167,
     160,   164,   162,   163,   150,    -1,    -1,    75,   200,   161,
     203,   162,   163,   150,    -1,    -1,    81,   201,   161,   203,
     162,   163,   150,    -1,    64,   161,   172,   160,   172,   162,
     163,   150,    -1,    90,   161,   172,   160,   166,   160,   165,
     162,   163,   150,    -1,    85,   161,   172,   162,   163,   150,
      -1,    -1,    85,   161,   172,   160,     5,   162,   202,   163,
     150,    -1,    74,   161,   172,   162,   163,   150,    -1,    28,
      74,   161,   172,   162,   163,   150,    -1,    24,    74,   161,
     172,   162,   163,   150,    -1,    41,    74,   161,   172,   162,
     163,   150,    -1,    34,    74,   161,   172,   162,   163,   150,
      -1,   124,    74,   161,   172,   162,   163,   150,    -1,    20,
      74,   161,   172,   162,   163,   150,    -1,    25,    74,   161,
     172,   162,   163,   150,    -1,    80,   161,   172,   160,   172,
     162,   163,   150,    -1,    31,   161,   172,   160,   166,   162,
     163,   150,    -1,    76,   161,   172,   160,   172,   160,   166,
     162,   163,   150,    -1,    17,   161,   172,   160,   166,   160,
     166,   162,   163,   150,    -1,    17,   161,   172,   160,   166,
     160,   166,   160,   205,   162,   163,   150,    -1,    17,   161,
     172,   160,   166,   160,   166,   160,   168,   162,   163,   150,
      -1,    44,   161,   172,   160,   167,   160,   167,   160,   164,
     162,   163,   150,    -1,    44,   161,   172,   160,   167,   160,
     167,   160,   168,   160,   164,   162,   163,   150,    -1,    44,
     161,   172,   160,   167,   160,   167,   160,   209,   160,   164,
     162,   163,   150,    -1,    44,   161,   172,   160,   167,   160,
     164,   162,   137,   138,    44,   161,   172,   160,   167,   160,
     164,   162,    -1,    24,   161,   172,   160,   167,   160,   167,
     160,   164,   162,   163,   150,    -1,    24,   161,   172,   160,
     167,   160,   167,   160,   209,   160,   164,   162,   163,   150,
      -1,    24,   161,   172,   160,   167,   160,   167,   160,   168,
     160,   164,   162,   163,   150,    -1,    24,   161,   172,   160,
     167,   160,   164,   162,   137,   138,    24,   161,   172,   160,
     167,   160,   164,   162,    -1,    33,   161,   172,   160,   165,
     160,   165,   160,     3,   160,   166,   160,   166,   160,     3,
     162,   163,   150,    -1,    46,   161,   172,   160,   165,   160,
     165,   160,     3,   160,   167,   160,   167,   160,     3,   160,
     164,   162,   163,   150,    -1,    26,   161,   172,   160,   165,
     160,   165,   160,     3,   160,   167,   160,   167,   160,     3,
     160,   164,   162,   163,   150,    -1,    72,   161,   172,   160,
     165,   160,   165,   162,   163,   150,    -1,    72,   161,   172,
     160,   165,   160,   165,   160,   207,   162,   163,   150,    -1,
      72,   161,   172,   160,   165,   160,   165,   160,   168,   162,
     163,   150,    -1,    48,   161,   162,   163,   150,    -1,    32,
     161,   172,   160,   164,   162,   163,   150,    -1,   203,   160,
     204,    -1,   204,    -1,   172,    -1,   205,   160,   206,    -1,
     206,    -1,   166,    -1,   207,   160,   208,    -1,   208,    -1,
     165,    -1,   209,   160,   210,    -1,   210,    -1,   166,   160,
     166,    -1,    -1
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
     380,   383,   384,   385,   388,   389,   392,   394,   396,   399,
     400,   401,   402,   403,   404,   407,   414,   421,   428,   435,
     442,   451,   454,   457,   460,   463,   476,   484,   492,   499,
     507,   514,   522,   523,   524,   525,   526,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   559,   560,   561,   562,   563,
     564,   565,   568,   569,   570,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   608,   609,   612,   617,
     622,   627,   628,   633,   638,   643,   648,   653,   654,   659,
     663,   668,   669,   673,   674,   675,   684,   685,   686,   689,
     696,   703,   710,   717,   724,   731,   738,   744,   753,   758,
     763,   768,   775,   819,   820,   823,   824,   828,   833,   834,
     835,   836,   837,   839,   840,   841,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   858,   859,   860,   861,   862,
     865,   872,   879,   886,   893,   900,   907,   914,   921,   930,
     935,   940,   945,   952,   952,   953,   956,   956,   958,   961,
     961,   963,   966,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1029,  1030,  1033,  1041,  1041,  1048,  1055,  1064,  1074,  1082,
    1090,  1099,  1106,  1114,  1137,  1160,  1169,  1169,  1176,  1176,
    1184,  1192,  1200,  1207,  1207,  1215,  1222,  1229,  1236,  1243,
    1250,  1257,  1264,  1271,  1280,  1290,  1298,  1305,  1315,  1323,
    1333,  1343,  1355,  1363,  1373,  1385,  1395,  1404,  1426,  1450,
    1475,  1476,  1477,  1479,  1481,  1490,  1491,  1494,  1497,  1498,
    1501,  1508,  1509,  1512,  1519,  1520,  1523,  1527
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
     177,   177,   177,   177,   177,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   182,   182,
     182,   182,   183,   184,   184,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   187,   187,   189,   188,   188,   191,   190,   190,   193,
     192,   192,   194,   195,   195,   195,   195,   195,   195,   195,
     196,   196,   197,   198,   197,   197,   197,   197,   197,   197,
     197,   199,   199,   199,   199,   199,   200,   199,   201,   199,
     199,   199,   199,   202,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   203,   203,   204,   205,   205,
     206,   207,   207,   208,   209,   209,   210,   211
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     3,     4,     3,
       4,     3,     3,     3,     3,     7,     3,     3,     3,     4,
       2,     2,     2,     2,     2,     2,     1,     1,     2,     1,
       1,     1,     0,     3,     1,     3,     3,     4,     3,     3,
       3,     3,     5,     1,     1,     1,     3,     4,     3,     4,
       3,     3,     3,     3,     7,     3,     3,     3,     3,     3,
       4,     2,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     0,     7,     1,     0,    10,     1,     0,
      10,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,    10,     0,     7,     6,     8,     8,    10,     8,
       8,     8,     8,    10,    10,    10,     0,     7,     0,     7,
       8,    10,     6,     0,     9,     6,     7,     7,     7,     7,
       7,     7,     7,     8,     8,    10,    10,    12,    12,    12,
      14,    14,    18,    12,    14,    14,    18,    18,    20,    20,
      10,    12,    12,     5,     8,     3,     1,     1,     3,     1,
       1,     3,     1,     1,     3,     1,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     202,     0,   252,     1,    95,   126,     0,    94,   131,   125,
     127,   130,     0,   129,    92,   128,    14,    93,     0,     7,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   252,     0,
      10,    96,    12,     0,    45,    44,     6,   176,     0,     0,
       0,   174,     0,   142,   139,     0,   138,     0,     0,   136,
     143,     0,   140,     0,   141,     0,   135,   175,     0,     0,
       0,     0,     0,     0,     0,    55,   167,    24,     9,     0,
       2,    41,    39,    40,     4,    24,    24,    57,     0,    57,
       0,    57,    57,    57,    57,    57,    57,     0,     0,    57,
      57,    57,    57,    57,    57,   276,    57,    57,    57,   278,
      57,    57,     0,    22,   260,   261,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    56,     8,     0,    15,
       3,    11,    13,    58,     0,    57,    57,     0,    57,     0,
      57,     0,     0,     0,     0,     0,    57,    57,     0,     0,
      59,     0,     0,     0,    57,     0,     0,     0,    57,     0,
       0,    57,    57,    57,    57,    57,    57,   263,    57,     0,
      57,    18,     0,     0,    19,    17,   169,   201,   199,   200,
       0,   182,     0,   179,   184,   172,     0,   258,   254,   259,
     253,   256,   255,   257,   177,   133,   134,   132,     0,   197,
       0,     0,   196,   183,   173,    43,    42,    67,    68,    66,
     186,   187,   181,   188,   171,    46,    54,    52,    51,    53,
      49,    50,    48,    47,   168,     0,   166,    55,    55,    55,
      82,    83,    84,    55,    55,    55,    55,    55,     0,     0,
      55,     0,    55,     0,    55,    55,    55,    55,    55,     0,
       0,    55,    55,    60,    61,    55,    55,    59,     0,    55,
      55,    55,     0,    59,    55,     0,     0,     0,     0,     0,
       0,    57,     0,    21,     0,    23,    20,   198,     0,   170,
     180,   178,   194,   195,   190,     0,   191,   192,   193,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    59,    59,
       0,    59,     0,    59,     0,     0,     0,    64,     0,    59,
      59,     0,     0,    62,   327,     0,     0,    61,   317,    55,
     316,     0,     0,     0,    55,     0,    61,     0,    59,    55,
      55,    55,    55,    55,     0,    59,    55,     0,     0,    89,
      91,    90,    88,    85,    86,    87,    72,    73,    74,    70,
      71,    69,    55,    61,    61,    55,    55,    55,    55,    55,
      55,    55,    61,    55,    61,    59,    59,    59,    59,    65,
      55,    61,    61,    55,    55,    63,    28,   313,    27,    59,
      55,   327,     0,    61,    55,    55,    59,    61,    59,   327,
      55,    61,     0,     0,    64,     0,     0,    59,    61,     0,
       0,   189,     0,   327,   327,     0,     0,     0,     0,     0,
       0,    64,   327,     0,   327,    61,    61,    61,    61,     0,
     327,   327,    64,     0,   215,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,    55,
     204,    61,     0,   285,   315,   327,     0,    64,    61,   327,
     283,   282,     0,   327,    59,    59,    59,    55,    59,    61,
     327,    55,   185,    55,   291,   287,    78,    79,    80,    76,
      77,    75,    67,    66,    59,    55,   292,    55,   286,   327,
     327,   327,   327,    55,   289,   288,    59,    55,    55,   249,
       0,     0,     0,     0,   243,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   327,
       0,     0,     0,    30,   327,    55,   277,    59,    59,   327,
     279,    61,    59,   290,    61,    61,    61,     0,    61,   327,
     265,     0,    55,    33,     0,     0,    61,    61,    64,     0,
     271,   272,   294,   314,     0,    61,    64,     0,   251,   229,
       0,     0,   160,   158,   153,     0,   163,   147,   164,   150,
     162,   156,   145,   159,   148,   146,   165,   161,     0,   206,
     242,   240,   241,     0,   221,   245,   227,     0,     0,   248,
     228,     0,   218,   223,   209,     0,   216,     0,   238,     0,
       0,   237,   222,   211,   210,   225,   226,   220,   208,    29,
     205,   327,   203,   280,     0,    61,    61,    61,   293,   327,
      61,   327,   327,   327,    59,   327,   264,   327,     0,    36,
      59,     0,   320,    59,    55,   319,   327,     0,   327,    72,
      69,    59,    55,    55,    55,   325,    55,    55,     0,   327,
      59,    55,    55,    55,     0,   152,   149,   155,   154,   151,
     157,     0,   239,     0,     0,   207,     0,   219,   217,   235,
     236,   231,     0,   232,   233,   234,    32,   323,    59,    59,
     322,   327,   327,   327,   284,   327,   269,   267,   270,    61,
     266,    35,   327,    61,     0,    61,     0,    61,   296,     0,
     274,    61,     0,    64,    64,     0,     0,     0,   273,    61,
      64,    64,     0,    55,   212,     0,    55,    55,     0,    61,
       0,    61,   310,   295,   275,   281,   327,    38,   327,    81,
     327,   318,   327,    57,   327,   326,    59,    59,   324,    55,
      55,    57,   327,    59,    59,    55,     0,     0,     0,     0,
     230,   327,   321,   327,   268,   262,   298,   297,     0,   303,
      61,    61,     0,     0,     0,   299,    61,    61,     0,     0,
     224,     0,     0,   312,   311,    55,   327,   327,    55,    55,
      55,   327,   327,    55,    55,    55,    55,     0,   305,   304,
       0,     0,     0,   300,   301,     0,     0,     0,   244,     0,
      55,    55,    59,    55,    55,     0,     0,    64,    64,    61,
      64,    64,     0,     0,    59,    59,   327,    59,    59,   250,
     247,   306,    61,   307,   302,    61,   327,   327,   309,   308
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    48,    49,    95,    96,    87,   191,   192,   147,
     245,   397,   467,   541,   560,   561,   648,    94,   253,    56,
     244,   740,   154,   274,   334,   388,   389,   662,   381,   653,
     254,   255,   256,   338,    50,    51,    52,   222,   468,   598,
      85,    86,   223,   200,     2,   562,   470,   622,   603,   606,
     607,   610,   611,   579,   580,    53,   214,   126,   194,   291,
     127,   174,   178,   551,   339,   340,   654,   655,   699,   700,
     664,   665,   398
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -691
static const yytype_int16 yypact[] =
{
    -691,    59,  1550,  -691,  -691,  -691,     5,  -691,  -691,  -691,
    -691,  -691,  2323,  -691,  -691,  -691,  -691,  -691,    88,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  1319,    22,
    -691,  -691,  -691,  1425,  -691,  -691,  -691,  -691,   -38,   -27,
     -22,   -20,   -14,  -691,  -691,   -11,  -691,    -3,    14,  -691,
    -691,    39,  -691,    50,  -691,    63,  -691,    90,    92,    94,
      97,   100,   111,   112,   115,    12,  -691,     8,  -691,    22,
    -691,  -691,  -691,  -691,  -691,     8,     8,   108,   176,   -29,
     177,   108,   -18,   108,   108,   108,   108,   179,   182,   108,
     108,   108,   108,   108,   108,  -691,   108,   108,   108,  -691,
     108,   108,   183,   472,  -691,  -691,  1656,  -691,   255,  2008,
     258,   259,   271,   281,   283,   286,   340,  1687,   294,   266,
     298,   299,  2352,   307,   208,  -691,  -691,  -691,  2323,  -691,
    -691,  -691,  -691,  -691,   623,   108,   108,   623,   108,   623,
     108,   623,   623,   623,   623,   623,   108,   108,   623,   623,
     184,   623,   623,   623,   108,   623,   623,   623,   108,   623,
     623,   108,   108,   108,   108,   108,   108,  -691,   108,   308,
     108,  -691,   326,   434,  -691,  -691,  -691,  -691,   416,  -691,
     331,  -691,   334,  -691,  -691,  -691,   336,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,   345,  -691,  -691,  -691,  1046,  -691,
    1901,  1046,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,   346,  -691,   220,   220,   220,
    -691,  -691,  -691,   220,   220,   220,   220,   220,   623,   623,
     220,   623,   220,   623,   220,   220,   220,   220,   220,   623,
     623,   220,   220,  -691,   219,   220,   220,   184,   623,   220,
     220,   220,   623,    28,   220,   623,   623,   623,   623,   623,
     623,   108,   623,  -691,   623,  -691,  -691,  -691,   348,  -691,
    -691,  -691,  -691,  -691,  -691,  2222,  -691,  -691,  -691,  -691,
     350,   344,   352,    78,   349,   343,   343,   367,   184,   184,
     812,   184,   266,   184,   367,   367,   367,   266,   266,   184,
     184,   812,   266,   233,   242,   623,   266,   219,  -691,   194,
    -691,   623,   812,   623,   194,   375,   219,   367,   184,   220,
     220,   220,   220,   220,   623,   184,   220,   369,   147,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,   220,   219,   219,   220,   220,   220,   220,   220,
     220,   220,   219,   220,   219,   184,   184,   184,   184,  -691,
     220,   219,   219,   220,   220,  -691,  2224,  -691,  -691,   184,
     220,   242,   623,   219,   220,   220,   184,   219,   184,   242,
     220,   219,   367,   367,   266,   623,   623,   105,   219,   367,
     379,  -691,   367,   242,   242,   377,   378,   376,   380,   383,
      78,   661,   242,   266,   242,   219,   219,   219,   219,   266,
     242,   242,   661,   266,  -691,   253,   257,   261,   263,   265,
     267,   -20,   269,   275,   276,   280,   282,   285,   290,   292,
      90,   293,   296,   297,   301,   302,   304,   384,   305,   212,
    -691,   219,   266,  -691,  -691,   242,   367,   266,   219,   242,
    -691,  -691,   266,   242,   184,   184,   184,   220,   184,   219,
    1490,   220,  -691,   194,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,    19,    62,   184,   220,  -691,   220,  -691,   242,
     242,   242,   242,   220,  -691,  -691,   184,   220,   220,   341,
     917,   400,  2115,   437,   382,   440,   386,   445,   447,   448,
     451,   340,  1794,   450,   452,   266,   456,   458,   459,  -691,
     208,   464,  2224,  -691,   242,   194,  -691,   184,   184,   242,
    -691,   219,   184,  -691,   219,   219,   219,   367,   219,  1490,
    -691,   465,   215,  -691,   266,   614,   219,     1,   479,   473,
    -691,  -691,  -691,  -691,   488,    10,   479,   491,  -691,  -691,
     364,    27,  -691,  -691,  -691,    67,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,   470,  -691,
    -691,   416,  -691,   492,  -691,  -691,  -691,   365,   495,  -691,
    -691,   371,  -691,  -691,  -691,   502,   504,  1046,  -691,  1901,
    1046,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,   300,   219,   219,   219,  -691,   242,
     219,  1490,  1490,  1490,   184,  1490,  -691,  -691,   503,  -691,
     184,   387,  -691,   184,   194,  -691,   242,   373,   242,   152,
     185,   184,   220,   220,   220,  -691,   220,   220,   374,   242,
     184,   220,   220,   220,   266,  -691,  -691,  -691,  -691,  -691,
    -691,   513,  -691,   515,   266,  -691,   266,  -691,  -691,  -691,
    -691,  -691,  2222,  -691,  -691,  -691,  -691,  -691,   184,    91,
    -691,   242,   242,   242,  -691,   242,  -691,  -691,  -691,   219,
    -691,  -691,  -691,   219,   519,   219,   367,   219,  -691,   499,
    -691,   219,   367,   266,   745,   812,   367,   484,  -691,   219,
     266,   745,   812,   -78,  -691,   527,   -26,    44,   147,   219,
     266,   219,  -691,  -691,  -691,  -691,  1490,  -691,  1490,  -691,
     242,  -691,   242,   108,   242,  -691,   184,   184,  -691,   220,
     220,   108,   242,   184,   184,   220,   403,   528,   406,   407,
    -691,   242,  -691,   242,  -691,  -691,  -691,  -691,   623,  -691,
     219,   219,   812,   367,   623,  -691,   219,   219,   812,   367,
    -691,   367,   367,  -691,  -691,   220,   242,   242,   220,   220,
     220,   242,   242,   220,    71,    75,    82,   812,  -691,  -691,
     536,   537,   812,  -691,  -691,   539,   413,   367,  -691,   414,
     220,   220,   184,   220,   220,   266,   266,   266,   266,   219,
     266,   266,   415,   417,   184,   184,   242,   184,   184,  -691,
    -691,  -691,   219,  -691,  -691,   219,   242,   242,  -691,  -691
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -691,  -691,  -691,   507,  -691,  -691,  -691,  -691,  -691,   -23,
    -691,   566,  -691,  -691,  -542,  -691,  -691,   462,   -84,  -691,
      16,   -85,   -98,   439,   468,   -35,    93,    87,  -253,  -505,
     244,  -691,   -97,  -133,    -5,   419,   -76,  -170,    -2,  -691,
    -691,   418,  -691,  -691,  -691,   168,    25,  -691,  -691,  -691,
    -691,  -691,  -691,  -691,  -691,  -691,    40,   449,   381,  -691,
     444,  -691,  -691,  -691,  -233,   171,  -215,  -136,  -607,  -157,
    -567,  -690,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -328
static const yytype_int16 yytable[] =
{
     148,   157,    90,   159,   161,   162,   163,   164,   165,   672,
      84,   168,   169,   170,   171,   172,   173,   646,   175,   176,
     177,   257,   179,   180,   260,   -55,   262,   -24,   264,   265,
     266,   267,   268,   -55,   758,   271,   272,    91,   275,   276,
     277,   758,   279,   280,   281,   156,   283,   284,   303,   344,
     306,   308,   146,   199,   766,   229,   160,   258,   259,     3,
     261,   221,   263,   663,   149,   -55,   -55,   733,   269,   270,
     675,   671,   151,   152,    54,    55,   278,   736,   393,   737,
     282,   225,   226,   285,   286,   287,   288,   289,   290,   405,
     292,    88,   294,   676,   -55,   -55,   128,   -55,   -55,   706,
     707,   708,   153,   710,   146,   677,   768,   129,   -55,   -55,
     678,   -55,   130,   153,  -137,   -55,   -55,   -55,   -55,   -55,
     131,   417,   297,   132,   198,   318,   319,   758,   321,   698,
     323,   133,   220,   679,   333,   145,   329,   330,   657,   145,
     -24,   -24,   146,   333,   305,   680,    84,   668,   134,   146,
      92,    93,   348,   349,   350,   351,   352,   353,   146,   355,
     273,   356,   310,   311,   312,   215,   216,   -67,   313,   314,
     315,   316,   317,   135,   146,   320,   769,   322,   505,   324,
     325,   326,   327,   328,   136,   217,   331,   332,   421,   517,
     335,   336,   146,   354,   341,   342,   343,   137,   345,   347,
     -66,   146,   399,   816,   774,   146,   775,   818,   404,   -59,
     406,   235,   146,   302,   819,   304,   307,   -31,   364,   365,
     -37,   146,   804,   273,  -144,   806,   138,  -327,   139,   362,
    -327,   140,   230,   371,   141,   146,   380,   273,   229,   153,
     371,   371,   371,   229,   229,   142,   143,   380,   229,   144,
     155,   158,   229,   166,   402,   236,   167,   181,   380,   402,
     196,   201,   202,   371,   412,   413,   414,   415,   416,   225,
     226,   419,   227,   228,   203,   237,   238,   239,   240,   -67,
     -67,   -67,   487,   488,   -67,   -67,   204,   422,   205,   206,
     425,   426,   427,   428,   429,   430,   431,   241,   433,   224,
     358,   231,   232,   225,   226,   439,   227,   228,   442,   443,
     234,   293,   -66,   -66,   -66,   472,   273,   -66,   -66,   476,
     477,   -59,   -59,   -59,   146,   482,   273,   -59,   371,   371,
     229,   295,   402,   242,   243,   371,   298,   299,   371,   300,
    -327,  -327,   146,  -327,  -327,   146,   501,   503,   301,   229,
     146,   309,   333,   357,   360,   229,   359,   252,   503,   229,
     207,   250,   621,   361,   208,   209,   395,   651,   210,   396,
     225,   226,   420,   366,   211,   367,   368,   369,   370,   486,
     408,   212,   492,   496,   542,   498,   497,   519,   229,   539,
     499,   520,   371,   229,   500,   521,   504,   522,   229,   523,
     578,   524,   557,   525,   372,   599,   564,   516,   565,   526,
     527,   385,   386,   387,   528,   383,   529,   425,   430,   530,
     568,   390,   569,   543,   531,   394,   532,   533,   574,   400,
     534,   535,   576,   577,   410,   536,   537,     5,   538,   540,
     604,   605,   548,   608,   563,   609,   602,   690,   612,   693,
     695,   229,   613,   614,   615,   623,   620,   624,     8,   626,
     634,   627,   628,   182,   213,   183,   184,     9,    10,   631,
     647,    11,   759,   371,    13,   681,   666,   542,    15,   765,
     229,   371,   225,   226,   660,   659,   228,   367,   368,   369,
     370,   667,   660,   629,   673,   674,   684,   683,   685,   484,
     485,   182,   686,   183,   184,   687,   491,   688,   712,   493,
     185,   719,   727,   563,   186,   187,   649,   601,   734,   188,
     735,   714,   749,   753,   190,   682,   507,   619,   761,   798,
     767,   790,   513,   661,   789,   803,   518,   791,   792,   821,
     822,   670,   824,   692,   825,   826,   651,   839,   185,   840,
     229,   150,   186,   187,   820,    89,   630,   188,   363,   823,
     189,   233,   190,   547,   469,   545,   246,   632,   770,   716,
     195,   616,   193,   474,   296,   552,   805,   722,   723,   724,
     751,   725,   726,   772,     0,   696,   730,   731,   732,     0,
     229,     0,     0,     0,     0,   563,   563,   563,     0,   563,
     229,   711,   229,     0,     0,     0,     0,   124,   125,     0,
       0,     0,   689,     0,   691,   694,     0,   225,   226,     0,
     366,     0,   367,   368,   369,   370,   225,   226,   625,   247,
       0,     0,   371,   248,   249,   250,   251,   252,   371,   229,
     660,   380,   371,     0,   644,   795,   229,   660,   380,     0,
       0,   800,   652,     0,     0,   778,   229,   650,     0,     0,
       0,     0,     0,   784,   225,   226,   747,   502,   228,   376,
     377,   378,   379,     0,   782,   783,     0,     0,     0,     0,
     788,   651,     0,     0,     0,     0,     0,   738,   756,   757,
       0,     0,     0,     0,     0,   763,   764,     0,   380,   371,
     563,     0,   563,     0,   380,   371,     0,   371,   371,     0,
     807,     0,     0,   810,   811,   812,   337,     0,   815,   817,
     716,   817,   346,   380,     0,     0,     0,   697,   380,     0,
       0,     0,     0,   371,     0,   827,   828,     0,   830,   831,
       0,   229,   229,   229,   229,     0,   229,   229,   225,   226,
       0,   659,   228,   367,   368,   369,   370,   373,   374,     0,
     382,     0,   384,     0,     0,     0,     0,   697,   391,   392,
       0,     0,     0,     0,     0,     0,     0,   697,   403,   697,
       0,     0,     0,   407,     0,     0,     0,   411,     0,     0,
       0,     0,   834,   835,   418,   837,   838,     0,     0,     0,
       0,     0,     0,   652,     0,   401,     0,     0,     0,   755,
       0,     0,     0,   760,   409,   225,   226,     0,   375,     0,
     376,   377,   378,   379,   435,   436,   437,   438,     0,     0,
       0,     0,     0,   697,     0,     0,     0,     0,   471,     0,
       0,   423,   424,     0,     0,   478,     0,   480,     0,     0,
     432,     0,   434,     0,     0,     0,   489,     0,     0,   440,
     441,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     799,   475,     0,     0,     0,   479,     0,     0,   652,   483,
       0,     0,     0,     0,     0,     0,   490,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   509,   510,   511,   512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   832,   833,
       0,     0,     0,   554,   555,   556,     0,   558,     0,     0,
       0,     0,   566,     0,     0,     0,     0,     0,     0,   544,
     581,     0,     0,   567,     0,     0,   549,   582,     0,     0,
       0,     0,     0,     0,     0,   575,   583,   559,     0,     0,
     584,     0,   585,     0,     0,     0,     0,   473,     0,     0,
       0,   586,     0,     0,   587,   481,     0,     0,     0,     0,
     588,     0,     0,   589,   635,     0,   636,   637,     0,   494,
     495,   640,     0,     0,   590,   591,     0,     0,   506,   592,
     508,     0,   593,     0,     0,     0,   514,   515,     0,   594,
     595,   596,     0,     0,     0,     0,     0,     0,     0,   639,
       0,     0,   641,   642,   643,     0,   645,     0,     0,     0,
       0,     0,     0,     0,   656,   658,     0,     0,     0,     0,
     597,   546,     0,   669,     0,   550,     0,     0,     0,   553,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   570,   571,   572,   573,     0,
       0,     0,     0,   709,   217,     0,     7,     0,     0,   713,
       0,     0,   715,   717,     0,     0,     0,     0,     0,     0,
     721,     0,     0,   701,   702,   703,    14,     0,   705,   729,
     633,     0,     0,     0,     0,   638,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   739,   741,     0,
       0,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,   746,     0,     0,
       0,   748,     0,   750,     0,   752,     0,     0,     0,   754,
       0,     0,     0,     0,     0,   780,   781,   762,     0,     0,
       0,     0,   786,   787,     0,   704,     0,   771,     0,   773,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   718,     0,   720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   728,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   796,   797,
       0,     0,     0,     0,   801,   802,     0,     0,     0,     0,
       0,   829,     0,     0,     0,     0,     0,   742,   743,   744,
       0,   745,     0,   841,   842,     0,   844,   845,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   836,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     846,     0,     0,   847,     0,     0,   776,     0,   777,  -327,
     779,     0,     0,     0,     0,     0,     0,     0,   785,     0,
       0,     0,     0,     0,    -5,     4,     0,   793,     0,   794,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     7,
       0,     8,   808,   809,     0,     0,     0,   813,   814,     0,
       9,    10,     0,     0,    11,    12,     0,    13,     0,    14,
       0,    15,     0,     0,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,     0,     0,     0,     0,    18,     0,     0,
      19,     0,   848,   849,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    97,     0,     0,    98,     0,    -5,    -5,    99,
     100,   101,     0,   102,   103,     0,   104,   105,   106,   107,
       0,     0,     0,     0,     0,     0,   108,     0,     0,   109,
       0,   110,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,   -34,     0,   113,     0,   114,
     115,   116,     0,     0,   117,   118,   119,     0,     0,     0,
     120,     0,   444,     0,     0,   121,   445,   446,     0,     0,
     447,   448,   449,   450,     0,   451,   452,     0,     0,    63,
       0,     0,     0,    64,     0,     0,   453,     0,     0,   454,
      66,     0,     0,   455,   456,     0,     0,    69,     0,   122,
       0,    70,   123,     0,   457,     0,    72,     0,     0,     0,
     124,   125,     0,     0,   458,    -5,     4,     0,    74,     0,
     459,     5,    76,   460,   461,   462,   463,   464,     0,     0,
     465,     0,     0,     0,     0,     0,     0,     6,     0,     0,
       7,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     9,    10,     0,     0,    11,    12,     0,    13,     0,
      14,     0,    15,   466,     0,    16,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    97,     0,     0,    98,     0,    -5,    -5,
      99,   100,   101,     0,   102,   103,     0,   104,   105,   106,
     107,     0,     0,     0,     0,     0,     0,   108,     0,     0,
     109,     0,   110,     4,   111,   215,   216,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,   217,     0,     7,   113,     8,
     114,   115,   116,     0,     0,   117,   118,   119,     9,    10,
       0,   120,    11,     0,     0,    13,   121,    14,     0,    15,
       0,     0,   218,     0,     0,     0,     0,     0,    17,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
       4,     0,   215,   216,     0,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     7,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,     0,     0,    11,
       0,     0,    13,     0,    14,     0,    15,     0,     0,   617,
       0,     0,     0,     0,     0,    17,     0,   618,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,     4,     0,   215,
     216,     0,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     7,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    10,     0,     0,    11,     0,     0,    13,
       0,    14,     0,    15,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     4,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,     0,     0,    11,     0,     0,    13,     0,    14,     0,
      15,     0,     0,   197,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     4,     0,     0,     0,     0,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     8,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    10,     0,     0,
      11,     0,     0,    13,     0,    14,     0,    15,     0,     0,
     600,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     4,     0,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
     445,   446,     0,     0,   447,   448,   449,   450,     0,   451,
     452,     0,     7,    63,     0,     0,     0,    64,     0,     0,
     453,     0,     0,   454,    66,     0,     0,   455,   456,     0,
       0,    69,    14,     0,     0,    70,     0,     0,   457,     0,
      72,     0,     0,    17,     0,     0,     0,     0,   458,     0,
       0,     0,    74,     0,   459,     0,    76,   460,   461,   462,
     463,   464,     0,     0,   465,     0,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    57,     0,   466,     0,     0,
       0,     0,     0,    58,    59,    60,     0,     0,    61,    62,
       0,     0,    63,     0,     0,     0,    64,     0,     0,     0,
       0,     0,    65,    66,     0,     0,    67,    68,     0,     0,
      69,     0,     0,     0,    70,     0,     0,    71,     0,    72,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,    74,     0,    75,     0,    76,    77,     0,    78,    79,
      80,     0,     0,    81,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47
};

static const yytype_int16 yycheck[] =
{
      85,    99,    48,   101,   102,   103,   104,   105,   106,   576,
      12,   109,   110,   111,   112,   113,   114,   559,   116,   117,
     118,   154,   120,   121,   157,     6,   159,    15,   161,   162,
     163,   164,   165,     5,   724,   168,   169,    15,   171,   172,
     173,   731,   175,   176,   177,    74,   179,   180,   218,   282,
     220,   221,   130,   129,   132,   139,    74,   155,   156,     0,
     158,   137,   160,   568,    87,     3,     4,   674,   166,   167,
      43,   576,    95,    96,    69,    70,   174,   684,   331,   686,
     178,     3,     4,   181,   182,   183,   184,   185,   186,   342,
     188,     3,   190,    66,     3,     4,   134,     6,     7,   641,
     642,   643,   131,   645,   130,    78,   132,   134,     3,     4,
      43,     6,   134,   131,   134,    10,    11,    12,    13,    14,
     134,   354,   198,   134,   129,   258,   259,   817,   261,   634,
     263,   134,   137,    66,   133,   127,   269,   270,   137,   127,
     128,   129,   130,   133,   220,    78,   148,   137,   134,   130,
     128,   129,   285,   286,   287,   288,   289,   290,   130,   292,
     132,   294,   247,   248,   249,    18,    19,    15,   253,   254,
     255,   256,   257,   134,   130,   260,   132,   262,   431,   264,
     265,   266,   267,   268,   134,    38,   271,   272,   358,   442,
     275,   276,   130,   291,   279,   280,   281,   134,   283,   284,
      15,   130,   335,   132,   746,   130,   748,   132,   341,    15,
     343,     3,   130,   218,   132,   220,   221,     5,   315,   316,
       5,   130,   789,   132,   134,   792,   134,    15,   134,   313,
      15,   134,   139,   317,   134,   130,   320,   132,   322,   131,
     324,   325,   326,   327,   328,   134,   134,   331,   332,   134,
      74,    74,   336,    74,   339,    47,    74,    74,   342,   344,
       5,     3,     3,   347,   349,   350,   351,   352,   353,     3,
       4,   356,     6,     7,     3,    67,    68,    69,    70,   127,
     128,   129,   415,   416,   132,   133,     5,   372,     5,     3,
     375,   376,   377,   378,   379,   380,   381,    89,   383,     5,
     305,     3,     3,     3,     4,   390,     6,     7,   393,   394,
       3,     3,   127,   128,   129,   400,   132,   132,   133,   404,
     405,   127,   128,   129,   130,   410,   132,   133,   412,   413,
     414,     5,   417,   125,   126,   419,     5,     3,   422,     3,
     128,   129,   130,   128,   129,   130,   430,   431,     3,   433,
     130,     5,   133,     5,    10,   439,     6,    14,   442,   443,
      20,    12,   532,    11,    24,    25,   133,    67,    28,   127,
       3,     4,     3,     6,    34,     8,     9,    10,    11,   414,
       5,    41,     3,     6,   469,     9,     8,   134,   472,     5,
      10,   134,   476,   477,    11,   134,   431,   134,   482,   134,
      59,   134,   487,   134,   317,     5,   491,   442,   493,   134,
     134,   324,   325,   326,   134,   322,   134,   502,   503,   134,
     505,   328,   507,   469,   134,   332,   134,   134,   513,   336,
     134,   134,   517,   518,   347,   134,   134,    21,   134,   134,
       3,    59,   477,     3,   490,    59,   522,   617,     3,   619,
     620,   535,     5,     5,     3,     5,   532,     5,    42,     3,
     545,     3,     3,    29,   124,    31,    32,    51,    52,     5,
       5,    55,   725,   557,    58,     5,     3,   562,    62,   732,
     564,   565,     3,     4,   568,     6,     7,     8,     9,    10,
      11,     3,   576,   539,     3,   131,   131,     5,     3,   412,
     413,    29,   131,    31,    32,     3,   419,     3,     5,   422,
      76,   138,   138,   559,    80,    81,   562,   522,     5,    85,
       5,   134,     3,    24,    90,   601,   433,   532,    44,   782,
       3,     3,   439,   568,   131,   788,   443,   131,   131,     3,
       3,   576,     3,   619,   131,   131,    67,   132,    76,   132,
     634,    89,    80,    81,   807,    48,   540,    85,   314,   812,
      88,   142,    90,   476,   396,   472,   148,   542,   738,   654,
     126,   531,   123,   402,   193,   482,   791,   662,   663,   664,
     716,   666,   667,   740,    -1,   631,   671,   672,   673,    -1,
     674,    -1,    -1,    -1,    -1,   641,   642,   643,    -1,   645,
     684,   647,   686,    -1,    -1,    -1,    -1,   135,   136,    -1,
      -1,    -1,   617,    -1,   619,   620,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    10,    11,     3,     4,   535,     6,
      -1,    -1,   716,    10,    11,    12,    13,    14,   722,   723,
     724,   725,   726,    -1,   557,   778,   730,   731,   732,    -1,
      -1,   784,   565,    -1,    -1,   753,   740,   564,    -1,    -1,
      -1,    -1,    -1,   761,     3,     4,   712,     6,     7,     8,
       9,    10,    11,    -1,   759,   760,    -1,    -1,    -1,    -1,
     765,    67,    -1,    -1,    -1,    -1,    -1,   692,   723,   724,
      -1,    -1,    -1,    -1,    -1,   730,   731,    -1,   782,   783,
     746,    -1,   748,    -1,   788,   789,    -1,   791,   792,    -1,
     795,    -1,    -1,   798,   799,   800,   277,    -1,   803,   804,
     805,   806,   283,   807,    -1,    -1,    -1,   634,   812,    -1,
      -1,    -1,    -1,   817,    -1,   820,   821,    -1,   823,   824,
      -1,   825,   826,   827,   828,    -1,   830,   831,     3,     4,
      -1,     6,     7,     8,     9,    10,    11,   318,   319,    -1,
     321,    -1,   323,    -1,    -1,    -1,    -1,   674,   329,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   684,   339,   686,
      -1,    -1,    -1,   344,    -1,    -1,    -1,   348,    -1,    -1,
      -1,    -1,   827,   828,   355,   830,   831,    -1,    -1,    -1,
      -1,    -1,    -1,   716,    -1,   337,    -1,    -1,    -1,   722,
      -1,    -1,    -1,   726,   346,     3,     4,    -1,     6,    -1,
       8,     9,    10,    11,   385,   386,   387,   388,    -1,    -1,
      -1,    -1,    -1,   740,    -1,    -1,    -1,    -1,   399,    -1,
      -1,   373,   374,    -1,    -1,   406,    -1,   408,    -1,    -1,
     382,    -1,   384,    -1,    -1,    -1,   417,    -1,    -1,   391,
     392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     783,   403,    -1,    -1,    -1,   407,    -1,    -1,   791,   411,
      -1,    -1,    -1,    -1,    -1,    -1,   418,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,   437,   438,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   825,   826,
      -1,    -1,    -1,   484,   485,   486,    -1,   488,    -1,    -1,
      -1,    -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,   471,
      23,    -1,    -1,   504,    -1,    -1,   478,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   516,    39,   489,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,   401,    -1,    -1,
      -1,    54,    -1,    -1,    57,   409,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    66,   545,    -1,   547,   548,    -1,   423,
     424,   552,    -1,    -1,    77,    78,    -1,    -1,   432,    82,
     434,    -1,    85,    -1,    -1,    -1,   440,   441,    -1,    92,
      93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   551,
      -1,    -1,   554,   555,   556,    -1,   558,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   566,   567,    -1,    -1,    -1,    -1,
     123,   475,    -1,   575,    -1,   479,    -1,    -1,    -1,   483,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   509,   510,   511,   512,    -1,
      -1,    -1,    -1,   644,    38,    -1,    40,    -1,    -1,   650,
      -1,    -1,   653,   654,    -1,    -1,    -1,    -1,    -1,    -1,
     661,    -1,    -1,   635,   636,   637,    60,    -1,   640,   670,
     544,    -1,    -1,    -1,    -1,   549,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   698,   699,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   709,    -1,    -1,
      -1,   713,    -1,   715,    -1,   717,    -1,    -1,    -1,   721,
      -1,    -1,    -1,    -1,    -1,   756,   757,   729,    -1,    -1,
      -1,    -1,   763,   764,    -1,   639,    -1,   739,    -1,   741,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   656,    -1,   658,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   780,   781,
      -1,    -1,    -1,    -1,   786,   787,    -1,    -1,    -1,    -1,
      -1,   822,    -1,    -1,    -1,    -1,    -1,   701,   702,   703,
      -1,   705,    -1,   834,   835,    -1,   837,   838,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   829,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     842,    -1,    -1,   845,    -1,    -1,   750,    -1,   752,     0,
     754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   762,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,   771,    -1,   773,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,   796,   797,    -1,    -1,    -1,   801,   802,    -1,
      51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   836,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,   846,   847,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,    17,    -1,    -1,    20,    -1,   128,   129,    24,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    72,    -1,    74,
      75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      85,    -1,    22,    -1,    -1,    90,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    -1,    49,
      50,    -1,    -1,    53,    54,    -1,    -1,    57,    -1,   124,
      -1,    61,   127,    -1,    64,    -1,    66,    -1,    -1,    -1,
     135,   136,    -1,    -1,    74,    15,    16,    -1,    78,    -1,
      80,    21,    82,    83,    84,    85,    86,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    62,   123,    -1,    65,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    17,    -1,    -1,    20,    -1,   128,   129,
      24,    25,    26,    -1,    28,    29,    -1,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    -1,    46,    16,    48,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    38,    -1,    40,    72,    42,
      74,    75,    76,    -1,    -1,    79,    80,    81,    51,    52,
      -1,    85,    55,    -1,    -1,    58,    90,    60,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,    -1,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    55,
      -1,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,
      -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    -1,    58,    -1,    60,    -1,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    16,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    58,    -1,    60,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    -1,    40,    39,    -1,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,
      -1,    57,    60,    -1,    -1,    61,    -1,    -1,    64,    -1,
      66,    -1,    -1,    71,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    80,    -1,    82,    83,    84,    85,
      86,    87,    -1,    -1,    90,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,    22,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,    54,    -1,    -1,
      57,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    80,    -1,    82,    83,    -1,    85,    86,
      87,    -1,    -1,    90,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122
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
     134,   134,   134,   134,   134,   127,   130,   148,   160,   148,
     156,   148,   148,   131,   161,    74,    74,   161,    74,   161,
      74,   161,   161,   161,   161,   161,    74,    74,   161,   161,
     161,   161,   161,   161,   200,   161,   161,   161,   201,   161,
     161,    74,    29,    31,    32,    76,    80,    81,    85,    88,
      90,   146,   147,   196,   197,   199,     5,    65,   173,   175,
     182,     3,     3,     3,     5,     5,     3,    20,    24,    25,
      28,    34,    41,   124,   195,    18,    19,    38,    65,    73,
     173,   175,   176,   181,     5,     3,     4,     6,     7,   157,
     165,     3,     3,   174,     3,     3,    47,    67,    68,    69,
      70,    89,   125,   126,   159,   149,   180,     6,    10,    11,
      12,    13,    14,   157,   169,   170,   171,   172,   161,   161,
     172,   161,   172,   161,   172,   172,   172,   172,   172,   161,
     161,   172,   172,   132,   162,   172,   172,   172,   161,   172,
     172,   172,   161,   172,   172,   161,   161,   161,   161,   161,
     161,   198,   161,     3,   161,     5,   197,   175,     5,     3,
       3,     3,   173,   176,   173,   175,   176,   173,   176,     5,
     160,   160,   160,   160,   160,   160,   160,   160,   172,   172,
     160,   172,   160,   172,   160,   160,   160,   160,   160,   172,
     172,   160,   160,   133,   163,   160,   160,   162,   172,   203,
     204,   160,   160,   160,   203,   160,   162,   160,   172,   172,
     172,   172,   172,   172,   161,   172,   172,     5,   173,     6,
      10,    11,   157,   169,   171,   171,     6,     8,     9,    10,
      11,   157,   166,   162,   162,     6,     8,     9,    10,    11,
     157,   167,   162,   165,   162,   166,   166,   166,   164,   165,
     165,   162,   162,   167,   165,   133,   127,   150,   211,   172,
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
     163,   163,   163,   165,   150,   150,   164,   167,   165,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,     5,
     134,   152,   160,   211,   163,   165,   150,   166,   164,   163,
     150,   202,   165,   150,   162,   162,   162,   160,   162,   163,
     153,   154,   184,   211,   160,   160,   162,   162,   160,   160,
     150,   150,   150,   150,   160,   162,   160,   160,    59,   192,
     193,    23,    30,    39,    43,    45,    54,    57,    63,    66,
      77,    78,    82,    85,    92,    93,    94,   123,   178,     5,
      65,   173,   175,   187,     3,    59,   188,   189,     3,    59,
     190,   191,     3,     5,     5,     3,   195,    65,    73,   173,
     175,   176,   186,     5,     5,   165,     3,     3,     3,   211,
     159,     5,   185,   150,   160,   162,   162,   162,   150,   163,
     162,   163,   163,   163,   166,   163,   153,     5,   155,   211,
     165,    67,   166,   168,   205,   206,   163,   137,   163,     6,
     157,   164,   166,   168,   209,   210,     3,     3,   137,   163,
     164,   168,   209,     3,   131,    43,    66,    78,    43,    66,
      78,     5,   175,     5,   131,     3,   131,     3,     3,   173,
     176,   173,   175,   176,   173,   176,   211,   165,   168,   207,
     208,   163,   163,   163,   150,   163,   153,   153,   153,   162,
     153,   211,     5,   162,   134,   162,   160,   162,   150,   138,
     150,   162,   160,   160,   160,   160,   160,   138,   150,   162,
     160,   160,   160,   207,     5,     5,   207,   207,   173,   162,
     160,   162,   150,   150,   150,   150,   163,   211,   163,     3,
     163,   206,   163,    24,   163,   166,   164,   164,   210,   167,
     166,    44,   163,   164,   164,   167,   132,     3,   132,   132,
     176,   163,   208,   163,   153,   153,   150,   150,   161,   150,
     162,   162,   160,   160,   161,   150,   162,   162,   160,   131,
       3,   131,   131,   150,   150,   172,   163,   163,   167,   166,
     172,   163,   163,   167,   209,   205,   209,   160,   150,   150,
     160,   160,   160,   150,   150,   160,   132,   160,   132,   132,
     167,     3,     3,   167,     3,   131,   131,   160,   160,   162,
     160,   160,   165,   165,   164,   164,   163,   164,   164,   132,
     132,   162,   162,   150,   162,   162,   163,   163,   150,   150
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
#line 393 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 67:
#line 395 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))),localSystem,localSky);;}
    break;

  case 68:
#line 396 "frame/ds9parser.Y"
    {(yyval.real) = fr->mapAngleToRef((yyvsp[(1) - (1)].real),localSystem,localSky);;}
    break;

  case 69:
#line 399 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), localSystem, Coord::DEGREE);;}
    break;

  case 70:
#line 400 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 71:
#line 401 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 72:
#line 402 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::DEGREE);;}
    break;

  case 73:
#line 403 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCMIN);;}
    break;

  case 74:
#line 404 "frame/ds9parser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), checkWCSSystem(), Coord::ARCSEC);;}
    break;

  case 75:
#line 408 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 76:
#line 415 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 77:
#line 422 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 78:
#line 429 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::DEGREE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 79:
#line 436 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCMIN);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 80:
#line 443 "frame/ds9parser.Y"
    {
	  Vector r=FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),checkWCSSystem(),Coord::ARCSEC);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 81:
#line 451 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 82:
#line 454 "frame/ds9parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 83:
#line 457 "frame/ds9parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 84:
#line 460 "frame/ds9parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 85:
#line 464 "frame/ds9parser.Y"
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
#line 477 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 87:
#line 485 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	  checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 88:
#line 493 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 89:
#line 500 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), 
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 90:
#line 508 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 91:
#line 515 "frame/ds9parser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	;}
    break;

  case 92:
#line 522 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::IMAGE;;}
    break;

  case 93:
#line 523 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::PHYSICAL;;}
    break;

  case 94:
#line 524 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::DETECTOR;;}
    break;

  case 95:
#line 525 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::AMPLIFIER;;}
    break;

  case 96:
#line 526 "frame/ds9parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); globalWCS = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 97:
#line 529 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS;;}
    break;

  case 98:
#line 530 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSA;;}
    break;

  case 99:
#line 531 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSB;;}
    break;

  case 100:
#line 532 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSC;;}
    break;

  case 101:
#line 533 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSD;;}
    break;

  case 102:
#line 534 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSE;;}
    break;

  case 103:
#line 535 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSF;;}
    break;

  case 104:
#line 536 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSG;;}
    break;

  case 105:
#line 537 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSH;;}
    break;

  case 106:
#line 538 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSI;;}
    break;

  case 107:
#line 539 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSJ;;}
    break;

  case 108:
#line 540 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSK;;}
    break;

  case 109:
#line 541 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSL;;}
    break;

  case 110:
#line 542 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSM;;}
    break;

  case 111:
#line 543 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSN;;}
    break;

  case 112:
#line 544 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSO;;}
    break;

  case 113:
#line 545 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSP;;}
    break;

  case 114:
#line 546 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSQ;;}
    break;

  case 115:
#line 547 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSR;;}
    break;

  case 116:
#line 548 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSS;;}
    break;

  case 117:
#line 549 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCST;;}
    break;

  case 118:
#line 550 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSU;;}
    break;

  case 119:
#line 551 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSV;;}
    break;

  case 120:
#line 552 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSW;;}
    break;

  case 121:
#line 553 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSX;;}
    break;

  case 122:
#line 554 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSY;;}
    break;

  case 123:
#line 555 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCSZ;;}
    break;

  case 124:
#line 556 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::WCS0;;}
    break;

  case 125:
#line 559 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 126:
#line 560 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 127:
#line 561 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 128:
#line 562 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 129:
#line 563 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 130:
#line 564 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 131:
#line 565 "frame/ds9parser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 132:
#line 568 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 133:
#line 569 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 134:
#line 570 "frame/ds9parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 135:
#line 573 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 136:
#line 574 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 137:
#line 575 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 138:
#line 576 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 139:
#line 577 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 140:
#line 578 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 141:
#line 579 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 142:
#line 580 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 143:
#line 581 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 144:
#line 582 "frame/ds9parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 145:
#line 585 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 146:
#line 586 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 147:
#line 587 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 148:
#line 588 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 149:
#line 589 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 150:
#line 590 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 151:
#line 591 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 152:
#line 592 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 153:
#line 593 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 154:
#line 594 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 155:
#line 595 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 156:
#line 596 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 157:
#line 597 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 158:
#line 598 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 159:
#line 599 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 160:
#line 600 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 161:
#line 601 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 162:
#line 602 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 163:
#line 603 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 164:
#line 604 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 165:
#line 605 "frame/ds9parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 168:
#line 613 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	  setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 169:
#line 618 "frame/ds9parser.Y"
    {
	  strncpy(globalColor,(yyvsp[(3) - (3)].str),16);
	  strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	;}
    break;

  case 170:
#line 623 "frame/ds9parser.Y"
    {
	  globalDash[0] = localDash[0] =(yyvsp[(3) - (4)].integer);
	  globalDash[1] = localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 171:
#line 627 "frame/ds9parser.Y"
    {globalWidth = localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 172:
#line 629 "frame/ds9parser.Y"
    {
	  strncpy(globalFont,(yyvsp[(3) - (3)].str),32);
	  strncpy(localFont,(yyvsp[(3) - (3)].str),32);
	;}
    break;

  case 173:
#line 634 "frame/ds9parser.Y"
    {
	  strncpy(globalText,(yyvsp[(3) - (3)].str),80);
	  strncpy(localText,(yyvsp[(3) - (3)].str),80);
	;}
    break;

  case 174:
#line 639 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::DASH,1);
	  setProps(&localProps,Marker::DASH,1);
	;}
    break;

  case 175:
#line 644 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,1);
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 176:
#line 649 "frame/ds9parser.Y"
    {
	  setProps(&globalProps,Marker::SOURCE,0);
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 177:
#line 653 "frame/ds9parser.Y"
    {globalPoint = localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 178:
#line 655 "frame/ds9parser.Y"
    {
	  globalPoint = localPoint = (yyvsp[(3) - (4)].integer);
	  globalPointSize = localPointSize = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 179:
#line 660 "frame/ds9parser.Y"
    {
	  globalFill = localFill = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 180:
#line 664 "frame/ds9parser.Y"
    {
	  globalLine1 = localLine1 = (yyvsp[(3) - (4)].integer);
	  globalLine2 = localLine2 = (yyvsp[(4) - (4)].integer);
	;}
    break;

  case 181:
#line 668 "frame/ds9parser.Y"
    {globalVector = localVector = (yyvsp[(3) - (3)].integer);;}
    break;

  case 182:
#line 670 "frame/ds9parser.Y"
    {
	  globalComposite = localComposite = (yyvsp[(3) - (3)].integer);
	;}
    break;

  case 183:
#line 673 "frame/ds9parser.Y"
    {;}
    break;

  case 184:
#line 674 "frame/ds9parser.Y"
    {strncpy(globalRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 185:
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

  case 186:
#line 684 "frame/ds9parser.Y"
    {globalTextAngle = localTextAngle = (yyvsp[(3) - (3)].real);;}
    break;

  case 187:
#line 685 "frame/ds9parser.Y"
    {globalTextRotate = localTextRotate = (yyvsp[(3) - (3)].integer);;}
    break;

  case 188:
#line 686 "frame/ds9parser.Y"
    {globalWCS = (Coord::CoordSystem)(yyvsp[(3) - (3)].integer);;}
    break;

  case 189:
#line 690 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 190:
#line 697 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 191:
#line 704 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 192:
#line 711 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 193:
#line 718 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 194:
#line 725 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 195:
#line 732 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::WCS;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	  globalRulerDistFormat = localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 196:
#line 739 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::WCS;
	;}
    break;

  case 197:
#line 745 "frame/ds9parser.Y"
    {
	  globalRulerCoordSystem = localRulerCoordSystem = Coord::IMAGE;
	  globalRulerSkyFrame = localRulerSkyFrame = Coord::FK5;
	  globalRulerDistSystem = localRulerDistSystem = Coord::IMAGE;
	  globalRulerDistFormat = localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 198:
#line 754 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 199:
#line 759 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 200:
#line 764 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 201:
#line 769 "frame/ds9parser.Y"
    {
	  globalCompassCoordSystem = localCompassCoordSystem = Coord::WCS;
	  globalCompassSkyFrame = localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 202:
#line 775 "frame/ds9parser.Y"
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

  case 205:
#line 823 "frame/ds9parser.Y"
    {setProps(&localProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 206:
#line 824 "frame/ds9parser.Y"
    {
	  if (!fr->useMarkerColor())
	    strncpy(localColor,(yyvsp[(3) - (3)].str),16);
	  ;}
    break;

  case 207:
#line 829 "frame/ds9parser.Y"
    {
	  localDash[0] =(yyvsp[(3) - (4)].integer);
	  localDash[1] =(yyvsp[(4) - (4)].integer);
        ;}
    break;

  case 208:
#line 833 "frame/ds9parser.Y"
    {localWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 209:
#line 834 "frame/ds9parser.Y"
    {strncpy(localFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 210:
#line 835 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 211:
#line 836 "frame/ds9parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 212:
#line 837 "frame/ds9parser.Y"
    {cblist.append(
	    new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 213:
#line 839 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::DASH,1);;}
    break;

  case 214:
#line 840 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,1);;}
    break;

  case 215:
#line 841 "frame/ds9parser.Y"
    {setProps(&localProps,Marker::SOURCE,0);;}
    break;

  case 216:
#line 843 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (3)].integer);;}
    break;

  case 217:
#line 844 "frame/ds9parser.Y"
    {localPoint = (yyvsp[(3) - (4)].integer); localPointSize = (yyvsp[(4) - (4)].integer);;}
    break;

  case 218:
#line 845 "frame/ds9parser.Y"
    {localFill=(yyvsp[(3) - (3)].integer);;}
    break;

  case 219:
#line 846 "frame/ds9parser.Y"
    {localLine1=(yyvsp[(3) - (4)].integer); localLine2=(yyvsp[(4) - (4)].integer);;}
    break;

  case 220:
#line 847 "frame/ds9parser.Y"
    {localVector=(yyvsp[(3) - (3)].integer);;}
    break;

  case 221:
#line 848 "frame/ds9parser.Y"
    {localComposite=(yyvsp[(3) - (3)].integer);;}
    break;

  case 223:
#line 850 "frame/ds9parser.Y"
    {strncpy(localRulerDistSpec,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 224:
#line 852 "frame/ds9parser.Y"
    {
	  strncpy(localCompassNorth,(yyvsp[(4) - (7)].str),80);
	  strncpy(localCompassEast,(yyvsp[(5) - (7)].str),80);
	  localCompassNArrow = (yyvsp[(6) - (7)].integer);
	  localCompassEArrow = (yyvsp[(7) - (7)].integer);
	;}
    break;

  case 225:
#line 858 "frame/ds9parser.Y"
    {localTextAngle=(yyvsp[(3) - (3)].real);;}
    break;

  case 226:
#line 859 "frame/ds9parser.Y"
    {localTextRotate=(yyvsp[(3) - (3)].integer);;}
    break;

  case 230:
#line 866 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (4)].integer);
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (4)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(3) - (4)].integer);
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(4) - (4)].integer);
	;}
    break;

  case 231:
#line 873 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 232:
#line 880 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 233:
#line 887 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 234:
#line 894 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (2)].integer);
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 235:
#line 901 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = (Coord::CoordSystem)(yyvsp[(2) - (2)].integer);
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 236:
#line 908 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::WCS;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 237:
#line 915 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::WCS;
	  localRulerDistFormat = (Coord::DistFormat)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 238:
#line 922 "frame/ds9parser.Y"
    {
	  localRulerCoordSystem = Coord::IMAGE;
	  localRulerSkyFrame = Coord::FK5;
	  localRulerDistSystem = Coord::IMAGE;
	  localRulerDistFormat = Coord::DEGREE;
	;}
    break;

  case 239:
#line 931 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (2)].integer);
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(2) - (2)].integer);
	;}
    break;

  case 240:
#line 936 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 241:
#line 941 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = (Coord::SkyFrame)(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 242:
#line 946 "frame/ds9parser.Y"
    {
	  localCompassCoordSystem = Coord::WCS;
	  localCompassSkyFrame = Coord::FK5;
	;}
    break;

  case 243:
#line 952 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0;;}
    break;

  case 244:
#line 952 "frame/ds9parser.Y"
    {localCpanda = 2;;}
    break;

  case 245:
#line 953 "frame/ds9parser.Y"
    {localCpanda=0;;}
    break;

  case 246:
#line 956 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 247:
#line 957 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localEpanda=2;;}
    break;

  case 248:
#line 958 "frame/ds9parser.Y"
    {localEpanda=0;;}
    break;

  case 249:
#line 961 "frame/ds9parser.Y"
    {aNum=0; aAngNum=0, aAngle=0;;}
    break;

  case 250:
#line 962 "frame/ds9parser.Y"
    {aAngle=(yyvsp[(9) - (10)].real);localBpanda=2;;}
    break;

  case 251:
#line 963 "frame/ds9parser.Y"
    {localBpanda=0;;}
    break;

  case 252:
#line 966 "frame/ds9parser.Y"
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

  case 253:
#line 1020 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 254:
#line 1021 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 255:
#line 1022 "frame/ds9parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 256:
#line 1023 "frame/ds9parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 257:
#line 1024 "frame/ds9parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 258:
#line 1025 "frame/ds9parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 259:
#line 1026 "frame/ds9parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 260:
#line 1029 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 261:
#line 1030 "frame/ds9parser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 262:
#line 1034 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 263:
#line 1041 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 264:
#line 1043 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 265:
#line 1049 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 266:
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

  case 267:
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

  case 268:
#line 1075 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)), 
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 269:
#line 1083 "frame/ds9parser.Y"
    {
	  // backward compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 270:
#line 1091 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 271:
#line 1100 "frame/ds9parser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 272:
#line 1107 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createCircleCmd(Vector((yyvsp[(3) - (8)].vector)),
          (yyvsp[(5) - (8)].real), localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 273:
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

  case 274:
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

  case 275:
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

  case 276:
#line 1169 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 277:
#line 1171 "frame/ds9parser.Y"
    {
	  fr->createPolygonCmd(polylist, localFill,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 278:
#line 1176 "frame/ds9parser.Y"
    {polylist.deleteAll();;}
    break;

  case 279:
#line 1178 "frame/ds9parser.Y"
    {
	  fr->createSegmentCmd(polylist, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 280:
#line 1185 "frame/ds9parser.Y"
    {
	  fr->createLineCmd(Vector((yyvsp[(3) - (8)].vector)),
	  Vector((yyvsp[(5) - (8)].vector)),
	  localLine1,localLine2,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 281:
#line 1193 "frame/ds9parser.Y"
    {
	  fr->createVectCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),
	  localVector,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 282:
#line 1201 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (6)].vector)),
	   localTextAngle,localTextRotate,
	   localColor,localDash,localWidth,localFont,
	   localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 283:
#line 1207 "frame/ds9parser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 284:
#line 1209 "frame/ds9parser.Y"
    {
	  fr->createTextCmd(Vector((yyvsp[(3) - (9)].vector)),
	  localTextAngle,localTextRotate,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 285:
#line 1216 "frame/ds9parser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (6)].vector)), 
	  (Point::PointShape)localPoint, localPointSize, 
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 286:
#line 1223 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 287:
#line 1230 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 288:
#line 1237 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::DIAMOND, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 289:
#line 1244 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::CROSS, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 290:
#line 1251 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::EX, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 291:
#line 1258 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::ARROW, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 292:
#line 1265 "frame/ds9parser.Y"
    {
	  // backwards compatibility
	  fr->createPointCmd(Vector((yyvsp[(4) - (7)].vector)), Point::BOXCIRCLE, localPointSize,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 293:
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

  case 294:
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

  case 295:
#line 1291 "frame/ds9parser.Y"
    {
	  fr->createProjectionCmd(Vector((yyvsp[(3) - (10)].vector)),
	  Vector((yyvsp[(5) - (10)].vector)),
	  (yyvsp[(7) - (10)].real),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 296:
#line 1299 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (10)].vector)),
	  (yyvsp[(5) - (10)].real),(yyvsp[(7) - (10)].real),1,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 297:
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

  case 298:
#line 1317 "frame/ds9parser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	  (yyvsp[(5) - (12)].real),(yyvsp[(7) - (12)].real),(yyvsp[(9) - (12)].integer),
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 299:
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

  case 300:
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

  case 301:
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

  case 302:
#line 1357 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
	  // old saoimage syntax
	  aStatus = 2;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 303:
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

  case 304:
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

  case 305:
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

  case 306:
#line 1397 "frame/ds9parser.Y"
    {	
	  // backwards compatibility
          // old saoimage syntax
	  aStatus = 4;
	  aVector[aNumsao++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 307:
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

  case 308:
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

  case 309:
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

  case 314:
#line 1482 "frame/ds9parser.Y"
    {
	  fr->createCompositeCmd(Vector((yyvsp[(3) - (8)].vector)),
	  (yyvsp[(5) - (8)].real), localComposite,
	  localColor,localDash,localWidth,localFont,
	  localText,localProps,localComment,taglist,cblist);
	;}
    break;

  case 317:
#line 1494 "frame/ds9parser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 320:
#line 1502 "frame/ds9parser.Y"
    {
	  if (aNum < MAXANNULI)
	    aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 323:
#line 1513 "frame/ds9parser.Y"
    {
	  if (aAngNum < MAXANGLES)
	    aAngles[aAngNum++] = (yyvsp[(1) - (1)].real);
	;}
    break;

  case 326:
#line 1523 "frame/ds9parser.Y"
    {aVector[aNum++] = Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 327:
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
#line 4858 "frame/ds9parser.C"
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


