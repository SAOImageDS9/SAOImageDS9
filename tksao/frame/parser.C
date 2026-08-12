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
#define yyparse frparse
#define yylex   frlex
#define yyerror frerror
#define yylval  frlval
#define yychar  frchar
#define yydebug frdebug
#define yynerrs frnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INT = 259,
     STRING = 260,
     ANGDEGREE = 261,
     ANGRADIAN = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     ABOUT_ = 266,
     AIP_ = 267,
     ALLOC_ = 268,
     ALLOCGZ_ = 269,
     ALIGN_ = 270,
     ALL_ = 271,
     ALT_ = 272,
     AMBIENT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     AREA_ = 283,
     ASINH_ = 284,
     AST_ = 285,
     AUTO_ = 286,
     AUX_ = 287,
     AVERAGE_ = 288,
     AXES_ = 289,
     AZIMUTH_ = 290,
     B1950_ = 291,
     BACK_ = 292,
     BACKGROUND_ = 293,
     BASE_ = 294,
     BBOX_ = 295,
     BEGIN_ = 296,
     BG_ = 297,
     BIG_ = 298,
     BIGENDIAN_ = 299,
     BIN_ = 300,
     BITPIX_ = 301,
     BLEND_ = 302,
     BLOCK_ = 303,
     BORDER_ = 304,
     BOTTOM_ = 305,
     BOX_ = 306,
     BOXANNULUS_ = 307,
     BOXCAR_ = 308,
     BOXCIRCLE_ = 309,
     BPANDA_ = 310,
     BUFFER_ = 311,
     BW_ = 312,
     CALLBACK_ = 313,
     CANVAS_ = 314,
     CATALOG_ = 315,
     CELESTIAL_ = 316,
     CENTER_ = 317,
     CENTROID_ = 318,
     CHANNEL_ = 319,
     CIRCLE_ = 320,
     CIAO_ = 321,
     CLEAR_ = 322,
     CLIP_ = 323,
     COLOR_ = 324,
     COLORBURN_ = 325,
     COLORDODGE_ = 326,
     COLORBAR_ = 327,
     COLORMAP_ = 328,
     COLORSCALE_ = 329,
     COLORSPACE_ = 330,
     COLS_ = 331,
     COLUMN_ = 332,
     COMMAND_ = 333,
     COMPASS_ = 334,
     COMPOSITE_ = 335,
     COMPRESS_ = 336,
     CONTOUR_ = 337,
     CONTRAST_ = 338,
     COORDINATES_ = 339,
     COPY_ = 340,
     COUNT_ = 341,
     CPANDA_ = 342,
     CREATE_ = 343,
     CROP_ = 344,
     CROSS_ = 345,
     CROSSHAIR_ = 346,
     CUBE_ = 347,
     CURSOR_ = 348,
     CUT_ = 349,
     CMYK_ = 350,
     DARKEN_ = 351,
     DASH_ = 352,
     DASHLIST_ = 353,
     DATA_ = 354,
     DATAMIN_ = 355,
     DATASEC_ = 356,
     DEBUG_ = 357,
     DEGREES_ = 358,
     DEFAULT_ = 359,
     DELETE_ = 360,
     DEPTH_ = 361,
     DETECTOR_ = 362,
     DIAMOND_ = 363,
     DIFFERENCE_ = 364,
     DIM_ = 365,
     DOWN_ = 366,
     DS9_ = 367,
     EDIT_ = 368,
     ECLIPTIC_ = 369,
     ELEVATION_ = 370,
     ELLIPTIC_ = 371,
     ELLIPSE_ = 372,
     ELLIPSEANNULUS_ = 373,
     END_ = 374,
     ENVI_ = 375,
     EPANDA_ = 376,
     EPSILON_ = 377,
     EQUATORIAL_ = 378,
     ERASE_ = 379,
     EXCLUSION_ = 380,
     EXT_ = 381,
     FADE_ = 382,
     FACTOR_ = 383,
     FALSE_ = 384,
     FILE_ = 385,
     FILL_ = 386,
     FILTER_ = 387,
     FIRST_ = 388,
     FIP_ = 389,
     FIT_ = 390,
     FITS_ = 391,
     FITSY_ = 392,
     FIXED_ = 393,
     FK4_ = 394,
     FK5_ = 395,
     FONT_ = 396,
     FORMAT_ = 397,
     FOOTPRINT_ = 398,
     FROM_ = 399,
     FRONT_ = 400,
     FULL_ = 401,
     FUNCTION_ = 402,
     GALACTIC_ = 403,
     GAUSSIAN_ = 404,
     GET_ = 405,
     GLOBAL_ = 406,
     GRAPHICS_ = 407,
     GRAY_ = 408,
     GRID_ = 409,
     GZ_ = 410,
     HANDLE_ = 411,
     HARDLIGHT_ = 412,
     HAS_ = 413,
     HEAD_ = 414,
     HEADER_ = 415,
     HEIGHT_ = 416,
     HIDE_ = 417,
     HIGHLITE_ = 418,
     HISTEQU_ = 419,
     HISTOGRAM_ = 420,
     HORIZONTAL_ = 421,
     HUE_ = 422,
     HSV_ = 423,
     HLS_ = 424,
     ICRS_ = 425,
     ID_ = 426,
     IIS_ = 427,
     IMAGE_ = 428,
     INCLUDE_ = 429,
     INCR_ = 430,
     INFO_ = 431,
     ITERATION_ = 432,
     IRAF_ = 433,
     IRAFMIN_ = 434,
     J2000_ = 435,
     KEY_ = 436,
     KEYWORD_ = 437,
     LABEL_ = 438,
     LAYER_ = 439,
     LAYERNO_ = 440,
     LAST_ = 441,
     LENGTH_ = 442,
     LEVEL_ = 443,
     LIGHTEN_ = 444,
     LITTLE_ = 445,
     LITTLEENDIAN_ = 446,
     LINE_ = 447,
     LINEAR_ = 448,
     LIST_ = 449,
     LOAD_ = 450,
     LOCAL_ = 451,
     LOG_ = 452,
     LUMINOSITY_ = 453,
     MACOSX_ = 454,
     MAGNIFIER_ = 455,
     MATCH_ = 456,
     MAP_ = 457,
     MARK_ = 458,
     MARKER_ = 459,
     MASK_ = 460,
     MEDIAN_ = 461,
     MESSAGE_ = 462,
     METHOD_ = 463,
     MINMAX_ = 464,
     MINOR_ = 465,
     MIP_ = 466,
     MMAP_ = 467,
     MMAPINCR_ = 468,
     MOSAIC_ = 469,
     MODE_ = 470,
     MOTION_ = 471,
     MULTICOLOR_ = 472,
     MULTIPLY_ = 473,
     MOVE_ = 474,
     NAME_ = 475,
     NAN_ = 476,
     NATIVE_ = 477,
     NAXES_ = 478,
     NEW_ = 479,
     NEXT_ = 480,
     NO_ = 481,
     NONE_ = 482,
     NORMAL_ = 483,
     NONNAN_ = 484,
     NONZERO_ = 485,
     NOW_ = 486,
     NRRD_ = 487,
     NUMBER_ = 488,
     OBJECT_ = 489,
     OFF_ = 490,
     ON_ = 491,
     ONLY_ = 492,
     OPTION_ = 493,
     ORIENT_ = 494,
     OVERLAY_ = 495,
     PAN_ = 496,
     PANNER_ = 497,
     PARSER_ = 498,
     PASTE_ = 499,
     PERF_ = 500,
     PHOTO_ = 501,
     PHYSICAL_ = 502,
     PIXEL_ = 503,
     PLOT2D_ = 504,
     PLOT3D_ = 505,
     POINT_ = 506,
     POINTER_ = 507,
     POLYGON_ = 508,
     POSTSCRIPT_ = 509,
     POW_ = 510,
     PRECISION_ = 511,
     PRINT_ = 512,
     PRESERVE_ = 513,
     PROJECTION_ = 514,
     PROPERTY_ = 515,
     PUBLICATION_ = 516,
     PROS_ = 517,
     QUERY_ = 518,
     RADIAL_ = 519,
     RADIUS_ = 520,
     RANGE_ = 521,
     REGION_ = 522,
     REPLACE_ = 523,
     RESAMPLE_ = 524,
     RESCAN_ = 525,
     RESET_ = 526,
     RESOLUTION_ = 527,
     RGB_ = 528,
     ROOT_ = 529,
     ROTATE_ = 530,
     RULER_ = 531,
     SAMPLE_ = 532,
     SAOIMAGE_ = 533,
     SAOTNG_ = 534,
     SAVE_ = 535,
     SATURATION_ = 536,
     SCALE_ = 537,
     SCAN_ = 538,
     SCIENTIFIC_ = 539,
     SCOPE_ = 540,
     SCREEN_ = 541,
     SEGMENT_ = 542,
     SELECT_ = 543,
     SET_ = 544,
     SEXAGESIMAL_ = 545,
     SHAPE_ = 546,
     SHADE_ = 547,
     SHARED_ = 548,
     SHIFT_ = 549,
     SHMID_ = 550,
     SHOW_ = 551,
     SIGMA_ = 552,
     SINH_ = 553,
     SIZE_ = 554,
     SLICE_ = 555,
     SMMAP_ = 556,
     SMOOTH_ = 557,
     SOFTLIGHT_ = 558,
     SOCKET_ = 559,
     SOCKETGZ_ = 560,
     SOURCE_ = 561,
     SQRT_ = 562,
     SQUARED_ = 563,
     SSHARED_ = 564,
     STATS_ = 565,
     STATUS_ = 566,
     STRENGTH_ = 567,
     SUM_ = 568,
     SYNC_ = 569,
     SYSTEM_ = 570,
     TABLE_ = 571,
     TAG_ = 572,
     TEMPLATE_ = 573,
     TEXT_ = 574,
     THREADS_ = 575,
     THREED_ = 576,
     THRESHOLD_ = 577,
     THICK_ = 578,
     TOP_ = 579,
     TRANSPARENCY_ = 580,
     TO_ = 581,
     TOGGLE_ = 582,
     TOPHAT_ = 583,
     TRUE_ = 584,
     TYPE_ = 585,
     UNDO_ = 586,
     UNHIGHLITE_ = 587,
     UNLOAD_ = 588,
     UNSELECT_ = 589,
     UPDATE_ = 590,
     UP_ = 591,
     USER_ = 592,
     VALUE_ = 593,
     VAR_ = 594,
     VIEW_ = 595,
     VECTOR_ = 596,
     VERSION_ = 597,
     VERTEX_ = 598,
     VERTICAL_ = 599,
     WARP_ = 600,
     WCS_ = 601,
     WCSA_ = 602,
     WCSB_ = 603,
     WCSC_ = 604,
     WCSD_ = 605,
     WCSE_ = 606,
     WCSF_ = 607,
     WCSG_ = 608,
     WCSH_ = 609,
     WCSI_ = 610,
     WCSJ_ = 611,
     WCSK_ = 612,
     WCSL_ = 613,
     WCSM_ = 614,
     WCSN_ = 615,
     WCSO_ = 616,
     WCSP_ = 617,
     WCSQ_ = 618,
     WCSR_ = 619,
     WCSS_ = 620,
     WCST_ = 621,
     WCSU_ = 622,
     WCSV_ = 623,
     WCSW_ = 624,
     WCSX_ = 625,
     WCSY_ = 626,
     WCSZ_ = 627,
     WCS0_ = 628,
     WFPC2_ = 629,
     WIDTH_ = 630,
     WIN32_ = 631,
     XML_ = 632,
     XY_ = 633,
     YES_ = 634,
     ZERO_ = 635,
     ZMAX_ = 636,
     ZSCALE_ = 637,
     PIXMASK_ = 638,
     ZOOM_ = 639,
     FIELDS_ = 640
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define ABOUT_ 266
#define AIP_ 267
#define ALLOC_ 268
#define ALLOCGZ_ 269
#define ALIGN_ 270
#define ALL_ 271
#define ALT_ 272
#define AMBIENT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define AREA_ 283
#define ASINH_ 284
#define AST_ 285
#define AUTO_ 286
#define AUX_ 287
#define AVERAGE_ 288
#define AXES_ 289
#define AZIMUTH_ 290
#define B1950_ 291
#define BACK_ 292
#define BACKGROUND_ 293
#define BASE_ 294
#define BBOX_ 295
#define BEGIN_ 296
#define BG_ 297
#define BIG_ 298
#define BIGENDIAN_ 299
#define BIN_ 300
#define BITPIX_ 301
#define BLEND_ 302
#define BLOCK_ 303
#define BORDER_ 304
#define BOTTOM_ 305
#define BOX_ 306
#define BOXANNULUS_ 307
#define BOXCAR_ 308
#define BOXCIRCLE_ 309
#define BPANDA_ 310
#define BUFFER_ 311
#define BW_ 312
#define CALLBACK_ 313
#define CANVAS_ 314
#define CATALOG_ 315
#define CELESTIAL_ 316
#define CENTER_ 317
#define CENTROID_ 318
#define CHANNEL_ 319
#define CIRCLE_ 320
#define CIAO_ 321
#define CLEAR_ 322
#define CLIP_ 323
#define COLOR_ 324
#define COLORBURN_ 325
#define COLORDODGE_ 326
#define COLORBAR_ 327
#define COLORMAP_ 328
#define COLORSCALE_ 329
#define COLORSPACE_ 330
#define COLS_ 331
#define COLUMN_ 332
#define COMMAND_ 333
#define COMPASS_ 334
#define COMPOSITE_ 335
#define COMPRESS_ 336
#define CONTOUR_ 337
#define CONTRAST_ 338
#define COORDINATES_ 339
#define COPY_ 340
#define COUNT_ 341
#define CPANDA_ 342
#define CREATE_ 343
#define CROP_ 344
#define CROSS_ 345
#define CROSSHAIR_ 346
#define CUBE_ 347
#define CURSOR_ 348
#define CUT_ 349
#define CMYK_ 350
#define DARKEN_ 351
#define DASH_ 352
#define DASHLIST_ 353
#define DATA_ 354
#define DATAMIN_ 355
#define DATASEC_ 356
#define DEBUG_ 357
#define DEGREES_ 358
#define DEFAULT_ 359
#define DELETE_ 360
#define DEPTH_ 361
#define DETECTOR_ 362
#define DIAMOND_ 363
#define DIFFERENCE_ 364
#define DIM_ 365
#define DOWN_ 366
#define DS9_ 367
#define EDIT_ 368
#define ECLIPTIC_ 369
#define ELEVATION_ 370
#define ELLIPTIC_ 371
#define ELLIPSE_ 372
#define ELLIPSEANNULUS_ 373
#define END_ 374
#define ENVI_ 375
#define EPANDA_ 376
#define EPSILON_ 377
#define EQUATORIAL_ 378
#define ERASE_ 379
#define EXCLUSION_ 380
#define EXT_ 381
#define FADE_ 382
#define FACTOR_ 383
#define FALSE_ 384
#define FILE_ 385
#define FILL_ 386
#define FILTER_ 387
#define FIRST_ 388
#define FIP_ 389
#define FIT_ 390
#define FITS_ 391
#define FITSY_ 392
#define FIXED_ 393
#define FK4_ 394
#define FK5_ 395
#define FONT_ 396
#define FORMAT_ 397
#define FOOTPRINT_ 398
#define FROM_ 399
#define FRONT_ 400
#define FULL_ 401
#define FUNCTION_ 402
#define GALACTIC_ 403
#define GAUSSIAN_ 404
#define GET_ 405
#define GLOBAL_ 406
#define GRAPHICS_ 407
#define GRAY_ 408
#define GRID_ 409
#define GZ_ 410
#define HANDLE_ 411
#define HARDLIGHT_ 412
#define HAS_ 413
#define HEAD_ 414
#define HEADER_ 415
#define HEIGHT_ 416
#define HIDE_ 417
#define HIGHLITE_ 418
#define HISTEQU_ 419
#define HISTOGRAM_ 420
#define HORIZONTAL_ 421
#define HUE_ 422
#define HSV_ 423
#define HLS_ 424
#define ICRS_ 425
#define ID_ 426
#define IIS_ 427
#define IMAGE_ 428
#define INCLUDE_ 429
#define INCR_ 430
#define INFO_ 431
#define ITERATION_ 432
#define IRAF_ 433
#define IRAFMIN_ 434
#define J2000_ 435
#define KEY_ 436
#define KEYWORD_ 437
#define LABEL_ 438
#define LAYER_ 439
#define LAYERNO_ 440
#define LAST_ 441
#define LENGTH_ 442
#define LEVEL_ 443
#define LIGHTEN_ 444
#define LITTLE_ 445
#define LITTLEENDIAN_ 446
#define LINE_ 447
#define LINEAR_ 448
#define LIST_ 449
#define LOAD_ 450
#define LOCAL_ 451
#define LOG_ 452
#define LUMINOSITY_ 453
#define MACOSX_ 454
#define MAGNIFIER_ 455
#define MATCH_ 456
#define MAP_ 457
#define MARK_ 458
#define MARKER_ 459
#define MASK_ 460
#define MEDIAN_ 461
#define MESSAGE_ 462
#define METHOD_ 463
#define MINMAX_ 464
#define MINOR_ 465
#define MIP_ 466
#define MMAP_ 467
#define MMAPINCR_ 468
#define MOSAIC_ 469
#define MODE_ 470
#define MOTION_ 471
#define MULTICOLOR_ 472
#define MULTIPLY_ 473
#define MOVE_ 474
#define NAME_ 475
#define NAN_ 476
#define NATIVE_ 477
#define NAXES_ 478
#define NEW_ 479
#define NEXT_ 480
#define NO_ 481
#define NONE_ 482
#define NORMAL_ 483
#define NONNAN_ 484
#define NONZERO_ 485
#define NOW_ 486
#define NRRD_ 487
#define NUMBER_ 488
#define OBJECT_ 489
#define OFF_ 490
#define ON_ 491
#define ONLY_ 492
#define OPTION_ 493
#define ORIENT_ 494
#define OVERLAY_ 495
#define PAN_ 496
#define PANNER_ 497
#define PARSER_ 498
#define PASTE_ 499
#define PERF_ 500
#define PHOTO_ 501
#define PHYSICAL_ 502
#define PIXEL_ 503
#define PLOT2D_ 504
#define PLOT3D_ 505
#define POINT_ 506
#define POINTER_ 507
#define POLYGON_ 508
#define POSTSCRIPT_ 509
#define POW_ 510
#define PRECISION_ 511
#define PRINT_ 512
#define PRESERVE_ 513
#define PROJECTION_ 514
#define PROPERTY_ 515
#define PUBLICATION_ 516
#define PROS_ 517
#define QUERY_ 518
#define RADIAL_ 519
#define RADIUS_ 520
#define RANGE_ 521
#define REGION_ 522
#define REPLACE_ 523
#define RESAMPLE_ 524
#define RESCAN_ 525
#define RESET_ 526
#define RESOLUTION_ 527
#define RGB_ 528
#define ROOT_ 529
#define ROTATE_ 530
#define RULER_ 531
#define SAMPLE_ 532
#define SAOIMAGE_ 533
#define SAOTNG_ 534
#define SAVE_ 535
#define SATURATION_ 536
#define SCALE_ 537
#define SCAN_ 538
#define SCIENTIFIC_ 539
#define SCOPE_ 540
#define SCREEN_ 541
#define SEGMENT_ 542
#define SELECT_ 543
#define SET_ 544
#define SEXAGESIMAL_ 545
#define SHAPE_ 546
#define SHADE_ 547
#define SHARED_ 548
#define SHIFT_ 549
#define SHMID_ 550
#define SHOW_ 551
#define SIGMA_ 552
#define SINH_ 553
#define SIZE_ 554
#define SLICE_ 555
#define SMMAP_ 556
#define SMOOTH_ 557
#define SOFTLIGHT_ 558
#define SOCKET_ 559
#define SOCKETGZ_ 560
#define SOURCE_ 561
#define SQRT_ 562
#define SQUARED_ 563
#define SSHARED_ 564
#define STATS_ 565
#define STATUS_ 566
#define STRENGTH_ 567
#define SUM_ 568
#define SYNC_ 569
#define SYSTEM_ 570
#define TABLE_ 571
#define TAG_ 572
#define TEMPLATE_ 573
#define TEXT_ 574
#define THREADS_ 575
#define THREED_ 576
#define THRESHOLD_ 577
#define THICK_ 578
#define TOP_ 579
#define TRANSPARENCY_ 580
#define TO_ 581
#define TOGGLE_ 582
#define TOPHAT_ 583
#define TRUE_ 584
#define TYPE_ 585
#define UNDO_ 586
#define UNHIGHLITE_ 587
#define UNLOAD_ 588
#define UNSELECT_ 589
#define UPDATE_ 590
#define UP_ 591
#define USER_ 592
#define VALUE_ 593
#define VAR_ 594
#define VIEW_ 595
#define VECTOR_ 596
#define VERSION_ 597
#define VERTEX_ 598
#define VERTICAL_ 599
#define WARP_ 600
#define WCS_ 601
#define WCSA_ 602
#define WCSB_ 603
#define WCSC_ 604
#define WCSD_ 605
#define WCSE_ 606
#define WCSF_ 607
#define WCSG_ 608
#define WCSH_ 609
#define WCSI_ 610
#define WCSJ_ 611
#define WCSK_ 612
#define WCSL_ 613
#define WCSM_ 614
#define WCSN_ 615
#define WCSO_ 616
#define WCSP_ 617
#define WCSQ_ 618
#define WCSR_ 619
#define WCSS_ 620
#define WCST_ 621
#define WCSU_ 622
#define WCSV_ 623
#define WCSW_ 624
#define WCSX_ 625
#define WCSY_ 626
#define WCSZ_ 627
#define WCS0_ 628
#define WFPC2_ 629
#define WIDTH_ 630
#define WIN32_ 631
#define XML_ 632
#define XY_ 633
#define YES_ 634
#define ZERO_ 635
#define ZMAX_ 636
#define ZSCALE_ 637
#define PIXMASK_ 638
#define ZOOM_ 639
#define FIELDS_ 640




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::ICRS;

static unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
		Marker::EDIT | Marker::MOVE | Marker::ROTATE |
		Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
static unsigned short currentProps;
static char currentColor[16];
static int currentWidth;
static int currentDash[2];
static char currentFont[32];
static char currentText[80];

static List<Tag> taglist;
static List<CallBack> cblist;

static unsigned short propQMask;
static unsigned short propQValue;

static void setProps(unsigned short* props, unsigned short prop, int value);


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
#line 53 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 927 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 940 "frame/parser.C"

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
#define YYFINAL  402
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5891

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  390
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  243
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1426
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3108

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   640

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   389,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   387,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   388,   386,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
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
     385
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    67,    69,    72,    76,    79,    82,    85,
      89,    92,    95,    98,   101,   105,   108,   111,   114,   118,
     121,   124,   127,   130,   133,   136,   138,   142,   145,   148,
     151,   153,   156,   159,   162,   164,   167,   169,   172,   175,
     178,   181,   183,   185,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   236,   239,   242,   244,   246,   247,
     249,   251,   253,   255,   257,   259,   261,   264,   267,   270,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   344,   346,   348,   350,
     352,   354,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   403,   405,   407,   409,
     411,   413,   414,   416,   418,   420,   422,   424,   426,   428,
     429,   431,   433,   434,   436,   438,   440,   441,   443,   445,
     446,   448,   450,   451,   453,   455,   456,   458,   460,   462,
     464,   466,   468,   470,   471,   473,   475,   477,   479,   481,
     483,   485,   486,   488,   490,   492,   493,   495,   497,   499,
     501,   503,   506,   509,   512,   515,   518,   521,   524,   527,
     530,   533,   535,   538,   541,   544,   546,   549,   551,   554,
     556,   559,   561,   564,   567,   574,   577,   582,   585,   588,
     591,   595,   598,   601,   603,   606,   608,   611,   616,   622,
     625,   629,   635,   642,   644,   646,   648,   656,   668,   677,
     690,   692,   695,   698,   700,   702,   705,   708,   711,   714,
     718,   722,   725,   728,   730,   732,   734,   736,   738,   740,
     742,   745,   748,   751,   753,   757,   760,   763,   766,   772,
     782,   792,   802,   810,   812,   815,   817,   823,   833,   843,
     853,   861,   863,   866,   869,   873,   876,   879,   882,   885,
     899,   913,   926,   939,   941,   942,   944,   946,   951,   958,
     960,   962,   964,   966,   968,   970,   972,   974,   976,   981,
     988,   992,   997,   998,  1005,  1014,  1017,  1021,  1025,  1029,
    1030,  1035,  1040,  1045,  1050,  1054,  1058,  1060,  1064,  1070,
    1075,  1080,  1084,  1087,  1088,  1090,  1092,  1094,  1096,  1098,
    1102,  1103,  1106,  1109,  1112,  1115,  1118,  1121,  1124,  1127,
    1130,  1133,  1136,  1139,  1142,  1145,  1147,  1150,  1153,  1156,
    1161,  1165,  1168,  1171,  1174,  1177,  1180,  1182,  1186,  1189,
    1192,  1195,  1198,  1200,  1203,  1212,  1215,  1217,  1220,  1222,
    1225,  1227,  1232,  1236,  1239,  1241,  1249,  1258,  1266,  1275,
    1277,  1279,  1281,  1284,  1286,  1288,  1291,  1293,  1294,  1297,
    1300,  1302,  1303,  1306,  1309,  1311,  1313,  1316,  1319,  1322,
    1324,  1326,  1328,  1330,  1332,  1334,  1335,  1337,  1340,  1342,
    1347,  1353,  1354,  1357,  1359,  1365,  1368,  1371,  1373,  1375,
    1377,  1379,  1382,  1384,  1387,  1389,  1391,  1392,  1394,  1396,
    1397,  1399,  1405,  1412,  1416,  1423,  1427,  1429,  1433,  1435,
    1437,  1439,  1443,  1450,  1458,  1464,  1467,  1469,  1475,  1480,
    1482,  1486,  1487,  1489,  1492,  1494,  1499,  1501,  1504,  1506,
    1509,  1513,  1516,  1518,  1521,  1523,  1528,  1531,  1533,  1535,
    1539,  1541,  1544,  1548,  1551,  1552,  1554,  1556,  1561,  1564,
    1565,  1567,  1571,  1576,  1581,  1582,  1584,  1586,  1588,  1590,
    1593,  1596,  1599,  1602,  1604,  1606,  1608,  1610,  1612,  1614,
    1616,  1617,  1619,  1621,  1623,  1625,  1627,  1629,  1631,  1633,
    1635,  1637,  1639,  1641,  1643,  1645,  1648,  1650,  1653,  1655,
    1658,  1661,  1664,  1667,  1669,  1671,  1674,  1676,  1677,  1679,
    1681,  1684,  1685,  1687,  1688,  1690,  1691,  1693,  1694,  1696,
    1697,  1699,  1700,  1703,  1706,  1707,  1709,  1712,  1714,  1721,
    1727,  1729,  1731,  1733,  1736,  1739,  1742,  1744,  1746,  1748,
    1750,  1753,  1755,  1757,  1759,  1762,  1764,  1766,  1768,  1771,
    1774,  1777,  1778,  1780,  1781,  1783,  1785,  1787,  1789,  1791,
    1793,  1795,  1797,  1800,  1803,  1806,  1808,  1811,  1815,  1817,
    1820,  1823,  1828,  1834,  1836,  1847,  1849,  1852,  1856,  1860,
    1863,  1866,  1869,  1872,  1875,  1878,  1881,  1886,  1891,  1896,
    1900,  1904,  1910,  1915,  1920,  1925,  1929,  1933,  1937,  1941,
    1945,  1949,  1952,  1955,  1960,  1964,  1968,  1972,  1976,  1981,
    1986,  1991,  1996,  2002,  2007,  2014,  2022,  2027,  2032,  2038,
    2041,  2045,  2049,  2053,  2057,  2061,  2065,  2069,  2072,  2076,
    2080,  2084,  2088,  2093,  2097,  2103,  2110,  2114,  2118,  2123,
    2127,  2131,  2135,  2139,  2143,  2149,  2153,  2157,  2162,  2166,
    2169,  2172,  2174,  2178,  2183,  2188,  2193,  2198,  2203,  2210,
    2215,  2220,  2226,  2231,  2236,  2241,  2246,  2252,  2257,  2264,
    2272,  2277,  2282,  2288,  2294,  2300,  2306,  2312,  2318,  2326,
    2332,  2338,  2345,  2350,  2355,  2360,  2365,  2370,  2377,  2382,
    2387,  2393,  2399,  2405,  2411,  2417,  2424,  2430,  2438,  2447,
    2453,  2459,  2466,  2470,  2474,  2478,  2482,  2487,  2491,  2497,
    2504,  2508,  2512,  2517,  2521,  2525,  2529,  2533,  2537,  2543,
    2547,  2551,  2556,  2561,  2566,  2570,  2576,  2581,  2586,  2589,
    2593,  2600,  2607,  2609,  2611,  2613,  2616,  2619,  2622,  2626,
    2630,  2633,  2646,  2649,  2652,  2654,  2658,  2663,  2666,  2667,
    2671,  2673,  2676,  2679,  2682,  2685,  2688,  2693,  2698,  2703,
    2707,  2712,  2718,  2727,  2734,  2744,  2751,  2759,  2770,  2782,
    2795,  2805,  2811,  2818,  2822,  2828,  2834,  2841,  2847,  2852,
    2857,  2862,  2872,  2883,  2895,  2905,  2912,  2919,  2926,  2933,
    2940,  2947,  2954,  2961,  2968,  2976,  2984,  2987,  2992,  2997,
    3002,  3007,  3013,  3018,  3023,  3029,  3035,  3039,  3044,  3049,
    3054,  3062,  3072,  3079,  3090,  3102,  3115,  3125,  3129,  3132,
    3136,  3142,  3150,  3155,  3159,  3163,  3170,  3178,  3186,  3194,
    3199,  3204,  3214,  3219,  3223,  3228,  3236,  3244,  3247,  3251,
    3255,  3259,  3264,  3267,  3270,  3275,  3286,  3290,  3295,  3297,
    3301,  3304,  3307,  3310,  3313,  3317,  3323,  3328,  3334,  3337,
    3340,  3343,  3346,  3350,  3353,  3356,  3359,  3363,  3366,  3370,
    3375,  3379,  3383,  3390,  3395,  3398,  3402,  3405,  3408,  3413,
    3417,  3421,  3424,  3428,  3430,  3433,  3435,  3438,  3441,  3444,
    3448,  3450,  3452,  3454,  3456,  3459,  3461,  3464,  3467,  3469,
    3472,  3475,  3477,  3480,  3482,  3484,  3486,  3488,  3490,  3492,
    3494,  3496,  3497,  3499,  3502,  3505,  3508,  3512,  3518,  3526,
    3534,  3541,  3548,  3555,  3562,  3568,  3575,  3582,  3589,  3596,
    3603,  3610,  3617,  3629,  3637,  3645,  3653,  3663,  3673,  3684,
    3697,  3710,  3714,  3717,  3718,  3720,  3724,  3729,  3734,  3739,
    3740,  3742,  3744,  3749,  3754,  3756,  3758,  3760,  3762,  3764,
    3766,  3768,  3770,  3773,  3775,  3777,  3779,  3783,  3787,  3796,
    3803,  3814,  3822,  3830,  3836,  3843,  3850,  3854,  3857,  3860,
    3864,  3869,  3875,  3881,  3887,  3891,  3896,  3902,  3908,  3914,
    3920,  3923,  3927,  3931,  3937,  3941,  3945,  3949,  3953,  3957,
    3962,  3968,  3974,  3980,  3986,  3990,  3995,  4001,  4007,  4010,
    4013,  4017,  4023,  4030,  4037,  4041,  4045,  4052,  4059,  4065,
    4071,  4074,  4078,  4082,  4088,  4095,  4099,  4102,  4105,  4109,
    4112,  4116,  4119,  4123,  4129,  4136,  4139,  4142,  4145,  4148,
    4150,  4155,  4160,  4162,  4165,  4168,  4171,  4174,  4177,  4180,
    4183,  4187,  4190,  4194,  4197,  4201,  4203,  4205,  4207,  4209,
    4211,  4213,  4214,  4217,  4218,  4221,  4222,  4224,  4225,  4226,
    4228,  4230,  4232,  4234,  4236,  4244,  4253,  4256,  4263,  4266,
    4273,  4276,  4280,  4283,  4285,  4287,  4291,  4295,  4297,  4302,
    4305,  4307,  4311,  4315,  4320,  4324,  4328,  4332,  4334,  4336,
    4338,  4340,  4342,  4344,  4346,  4348,  4350,  4352,  4354,  4356,
    4358,  4360,  4362,  4365,  4366,  4367,  4370,  4377,  4385,  4388,
    4390,  4394,  4396,  4400,  4402,  4404,  4406,  4409,  4412,  4414,
    4418,  4419,  4420,  4423,  4426,  4428,  4432,  4438,  4439,  4441,
    4443,  4446,  4449,  4453,  4456,  4460,  4463,  4467,  4470,  4474,
    4476,  4479,  4481,  4484,  4486,  4489,  4491,  4494,  4496,  4499,
    4501,  4504,  4506,  4509,  4511,  4514,  4517,  4521,  4524,  4527,
    4530,  4533,  4535,  4537,  4539,  4541,  4546,  4549,  4553,  4557,
    4560,  4564,  4567,  4570,  4573,  4577,  4581,  4585,  4588,  4592,
    4594,  4598,  4602,  4604,  4607,  4610,  4613,  4616,  4626,  4633,
    4635,  4637,  4639,  4641,  4644,  4647,  4651,  4655,  4657,  4660,
    4664,  4668,  4670,  4673,  4675,  4677,  4679,  4681,  4683,  4685,
    4688,  4691,  4696,  4699,  4702,  4705,  4708,  4711,  4716,  4719,
    4722,  4725,  4728,  4731,  4736,  4738,  4741,  4744,  4747,  4751,
    4753,  4755,  4757,  4760,  4763,  4766,  4769,  4772,  4775,  4778,
    4781,  4784,  4788,  4792,  4796,  4800,  4804,  4808,  4810,  4813,
    4816,  4819,  4823,  4826,  4830,  4834,  4838,  4842,  4846,  4850,
    4853,  4856,  4859,  4862,  4865,  4868,  4871,  4874,  4877,  4880,
    4883,  4886,  4889,  4892,  4896,  4900,  4904,  4907,  4910,  4913,
    4917,  4921,  4925,  4928,  4931,  4934,  4937,  4940,  4943,  4947,
    4951,  4955,  4958,  4961,  4964,  4967,  4970,  4973,  4977,  4981,
    4985,  4988,  4991,  4994,  4997,  5000,  5003,  5006,  5009,  5012,
    5016,  5020,  5024,  5029,  5036,  5039,  5041,  5043,  5045,  5047,
    5049,  5050,  5056,  5058,  5065,  5069,  5071,  5074,  5077,  5080,
    5084,  5088,  5091,  5094,  5097,  5100,  5103,  5106,  5110,  5113,
    5116,  5120,  5122,  5126,  5131,  5134,  5136,  5139,  5145,  5152,
    5159,  5162,  5164,  5167,  5170,  5176,  5183
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     391,     0,    -1,   102,   393,    -1,    45,   427,    -1,    42,
      69,     5,    -1,    42,    69,   394,    -1,    48,   432,    -1,
      62,    -1,    67,    -1,    68,   434,    -1,    72,   317,     5,
      -1,    73,   439,    -1,    74,   441,    -1,    82,   442,    -1,
      89,   451,    -1,    91,   453,    -1,    92,   454,    -1,   101,
     394,    -1,   127,   456,    -1,   137,   457,    -1,   150,   458,
      -1,   154,   509,    -1,   158,   512,    -1,   162,    -1,   163,
     394,    -1,   163,    69,     5,    -1,   168,   596,    -1,   169,
     595,    -1,   172,   518,    -1,   178,    15,     4,    -1,   195,
     521,    -1,   199,   539,    -1,   200,   540,    -1,   201,   541,
      -1,   204,   558,   542,    -1,   205,   579,    -1,   184,   578,
      -1,   217,   594,    -1,   221,    69,     5,    -1,   239,   580,
      -1,   241,   581,    -1,   242,   584,    -1,   263,    93,    -1,
     256,   586,    -1,   254,   585,    -1,   271,    -1,   267,   558,
     588,    -1,   273,   593,    -1,   275,   597,    -1,   280,   599,
      -1,   296,    -1,   302,   621,    -1,   320,     4,    -1,   321,
     420,    -1,   333,    -1,   335,   623,    -1,   342,    -1,   345,
     625,    -1,   346,   626,    -1,   376,   630,    -1,   384,   631,
      -1,     3,    -1,     4,    -1,   394,    -1,   214,   394,    -1,
     243,   394,    -1,   245,   394,    -1,   346,   394,    -1,    45,
     394,    -1,    48,   394,    -1,    81,   394,    -1,    89,   394,
      -1,   155,   394,    -1,   273,   394,    -1,     4,    -1,   379,
      -1,   386,    -1,   236,    -1,   329,    -1,   226,    -1,   387,
      -1,   235,    -1,   129,    -1,    -1,   274,    39,    -1,   146,
      39,    -1,   274,    -1,   146,    -1,    -1,   397,    -1,   392,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   398,   398,    -1,   399,   400,    -1,   400,   400,    -1,
     392,   392,    -1,   173,    -1,   247,    -1,   107,    -1,    19,
      -1,   403,    -1,   346,    -1,   347,    -1,   348,    -1,   349,
      -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,   354,
      -1,   355,    -1,   356,    -1,   357,    -1,   358,    -1,   359,
      -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,   364,
      -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,   369,
      -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,    59,
      -1,   242,    -1,    -1,   380,    -1,   230,    -1,   221,    -1,
     229,    -1,   266,    -1,    -1,   306,    -1,   218,    -1,   286,
      -1,   240,    -1,    96,    -1,   189,    -1,    71,    -1,    70,
      -1,   157,    -1,   303,    -1,   109,    -1,   125,    -1,   167,
      -1,   281,    -1,    69,    -1,   198,    -1,   193,    -1,   197,
      -1,   255,    -1,   307,    -1,   308,    -1,    29,    -1,   298,
      -1,   164,    -1,    31,    -1,   283,    -1,   277,    -1,   100,
      -1,   179,    -1,    -1,   139,    -1,    36,    -1,   140,    -1,
     180,    -1,   170,    -1,   148,    -1,   114,    -1,    -1,   103,
      -1,   290,    -1,    -1,   103,    -1,    24,    -1,    25,    -1,
      -1,   295,    -1,   181,    -1,    -1,    16,    -1,   175,    -1,
      -1,   173,    -1,   205,    -1,    -1,    65,    -1,    51,    -1,
     108,    -1,    90,    -1,   388,    -1,    27,    -1,    54,    -1,
      -1,     4,    -1,    87,    -1,   165,    -1,   249,    -1,   250,
      -1,   264,    -1,   310,    -1,    -1,    33,    -1,   313,    -1,
     206,    -1,    -1,   222,    -1,    43,    -1,    44,    -1,   190,
      -1,   191,    -1,   340,   426,    -1,    49,   423,    -1,    79,
     424,    -1,   163,   425,    -1,   208,   591,    -1,    38,   592,
      -1,   292,   421,    -1,   282,   392,    -1,   314,     4,    -1,
     322,   392,    -1,   394,    -1,    18,   392,    -1,   312,   392,
      -1,   228,   422,    -1,   394,    -1,   312,   392,    -1,   394,
      -1,    69,     5,    -1,   394,    -1,    69,     5,    -1,   394,
      -1,    69,     5,    -1,   392,   392,    -1,   251,   392,   392,
     392,   392,   392,    -1,    11,   428,    -1,    76,     5,     5,
       5,    -1,   106,     4,    -1,   128,   429,    -1,   147,   430,
      -1,    56,   299,     4,    -1,   326,   431,    -1,   132,     5,
      -1,    62,    -1,   392,   392,    -1,   392,    -1,   392,   392,
      -1,   392,    11,   392,   392,    -1,   392,   392,    11,   392,
     392,    -1,   326,   392,    -1,   326,   392,   392,    -1,   326,
     392,    11,   392,   392,    -1,   326,   392,   392,    11,   392,
     392,    -1,    33,    -1,   313,    -1,   135,    -1,   392,   392,
      11,    62,     5,     5,     5,    -1,   392,   392,     4,   392,
     392,    11,    62,     5,     5,     5,     5,    -1,   392,   392,
      11,   392,   392,     5,     5,     5,    -1,   392,   392,     4,
     392,   392,    11,   392,   392,     5,     5,     5,     5,    -1,
     392,    -1,   392,   392,    -1,   326,   433,    -1,   135,    -1,
     392,    -1,   392,   392,    -1,   285,   435,    -1,   215,   436,
      -1,   209,   437,    -1,   337,   392,   392,    -1,   337,   221,
     221,    -1,   382,   438,    -1,   258,   394,    -1,   151,    -1,
     196,    -1,   392,    -1,   209,    -1,   382,    -1,   381,    -1,
     337,    -1,     4,   408,    -1,   215,   408,    -1,   277,     4,
      -1,   270,    -1,   392,     4,     4,    -1,    83,   392,    -1,
     277,     4,    -1,   192,     4,    -1,     4,   392,   392,     4,
       4,    -1,   273,   392,   392,   392,   392,   392,   392,     4,
       4,    -1,   168,   392,   392,   392,   392,   392,   392,     4,
       4,    -1,   169,   392,   392,   392,   392,   392,   392,     4,
       4,    -1,   217,     4,     4,     5,     5,     5,     4,    -1,
      41,    -1,   216,   440,    -1,   119,    -1,     4,   392,   392,
       4,     4,    -1,   273,   392,   392,   392,   392,   392,   392,
       4,     4,    -1,   168,   392,   392,   392,   392,   392,   392,
       4,     4,    -1,   169,   392,   392,   392,   392,   392,   392,
       4,     4,    -1,   217,     4,     4,     5,     5,     5,     4,
      -1,   407,    -1,   197,   392,    -1,    88,   443,    -1,    98,
       4,     4,    -1,   105,   444,    -1,   195,   445,    -1,   244,
     449,    -1,   280,   450,    -1,     5,     4,     4,   448,     4,
       4,   407,   392,   446,   447,   392,   392,     5,    -1,     5,
       4,     4,   448,     4,     4,   407,   392,   392,   447,   392,
     392,     5,    -1,     5,     4,     4,   448,     4,     4,   407,
     392,   446,   392,   392,     5,    -1,     5,     4,     4,   448,
       4,     4,   407,   392,   392,   392,   392,     5,    -1,   253,
      -1,    -1,    32,    -1,     5,    -1,     5,     5,     4,   394,
      -1,     5,     4,   394,     5,   402,   409,    -1,   209,    -1,
     382,    -1,   381,    -1,   337,    -1,   151,    -1,   196,    -1,
     302,    -1,    48,    -1,     5,    -1,     5,     5,     4,   394,
      -1,     5,     5,     4,   394,     4,     4,    -1,     5,   402,
     409,    -1,    32,     5,   402,   409,    -1,    -1,   392,   392,
     392,   392,   402,   409,    -1,    62,   401,   402,   409,   392,
     392,   402,   411,    -1,   321,   452,    -1,    41,   392,   392,
      -1,   216,   392,   392,    -1,   119,   392,   392,    -1,    -1,
     392,   392,   402,   409,    -1,    41,   392,   392,     4,    -1,
     216,   392,   392,     4,    -1,   119,   392,   392,     4,    -1,
     404,   392,   392,    -1,   402,   409,   401,    -1,   394,    -1,
     345,   392,   392,    -1,    41,   216,   404,   392,   392,    -1,
     216,   404,   392,   392,    -1,    41,   216,   402,   401,    -1,
     216,   402,   401,    -1,    34,     4,    -1,    -1,    33,    -1,
     313,    -1,   206,    -1,   392,    -1,    67,    -1,   158,   126,
       5,    -1,    -1,    42,    69,    -1,    45,   461,    -1,    48,
     463,    -1,    68,   464,    -1,    73,   468,    -1,    72,   467,
      -1,    74,   470,    -1,    82,   472,    -1,    84,   475,    -1,
      89,   476,    -1,    91,   477,    -1,    93,   479,    -1,    92,
     478,    -1,    99,   480,    -1,   101,    -1,   136,   484,    -1,
     154,   490,    -1,   163,    69,    -1,   165,     5,     5,     4,
      -1,   166,    94,   459,    -1,   168,   498,    -1,   169,   497,
      -1,   172,   482,    -1,   176,   481,    -1,   178,    15,    -1,
     209,    -1,   204,   558,   552,    -1,   205,   492,    -1,   184,
     491,    -1,   217,   496,    -1,   221,    69,    -1,   239,    -1,
     241,   494,    -1,   248,   316,   404,   392,   392,     4,     4,
       5,    -1,   273,   495,    -1,   275,    -1,   302,   499,    -1,
     320,    -1,   321,   500,    -1,   330,    -1,   338,   404,   392,
     392,    -1,   344,    94,   460,    -1,   346,   507,    -1,   384,
      -1,     5,     5,   392,   392,   404,     4,   455,    -1,     5,
       5,   392,   392,   402,   409,     4,   455,    -1,     5,     5,
     392,   392,   404,     4,   455,    -1,     5,     5,   392,   392,
     402,   409,     4,   455,    -1,   106,    -1,   128,    -1,   147,
      -1,    56,   299,    -1,    93,    -1,   132,    -1,    76,   462,
      -1,   194,    -1,    -1,   209,     5,    -1,   110,     5,    -1,
     128,    -1,    -1,   446,   447,    -1,   392,   447,    -1,   285,
      -1,   215,    -1,   209,   465,    -1,   337,   188,    -1,   382,
     466,    -1,   258,    -1,   215,    -1,   277,    -1,    83,    -1,
     277,    -1,   192,    -1,    -1,   317,    -1,   188,   469,    -1,
       4,    -1,     4,   404,   392,   392,    -1,     4,   392,   392,
     407,   392,    -1,    -1,   188,   471,    -1,   197,    -1,     4,
     392,   392,   407,   392,    -1,   402,   409,    -1,    68,   473,
      -1,    69,    -1,    97,    -1,    98,    -1,   188,    -1,   233,
     188,    -1,   208,    -1,    74,   474,    -1,   302,    -1,   375,
      -1,    -1,   215,    -1,   285,    -1,    -1,   197,    -1,   392,
     392,   402,   409,   410,    -1,   404,   392,   392,   402,   409,
     410,    -1,   402,   409,   410,    -1,    62,   402,   409,   410,
     402,   411,    -1,   321,   402,   409,    -1,   404,    -1,   402,
     409,   410,    -1,   311,    -1,    34,    -1,   404,    -1,   402,
     409,   410,    -1,   402,   409,   401,   392,   392,     5,    -1,
       4,   402,   409,   401,   392,   392,     5,    -1,   404,   392,
     392,     4,     4,    -1,     5,   395,    -1,    68,    -1,   404,
     392,   392,     5,   395,    -1,     4,     4,     4,     4,    -1,
      93,    -1,   130,   220,   483,    -1,    -1,     4,    -1,   392,
     392,    -1,   223,    -1,    62,   402,   409,   410,    -1,    86,
      -1,   106,   487,    -1,    46,    -1,   126,   485,    -1,   130,
     220,   488,    -1,   160,   486,    -1,   161,    -1,   234,   220,
      -1,   299,    -1,   299,   402,   409,   411,    -1,   300,   489,
      -1,   375,    -1,     4,    -1,   404,   392,   392,    -1,     4,
      -1,   182,     5,    -1,     4,   182,     5,    -1,   346,     4,
      -1,    -1,     4,    -1,   395,    -1,   395,   404,   392,   392,
      -1,   395,     4,    -1,    -1,     4,    -1,   144,   173,   402,
      -1,   144,   173,     4,   402,    -1,   326,   173,   392,   402,
      -1,    -1,   238,    -1,   339,    -1,    86,    -1,   185,    -1,
      69,   493,    -1,    47,   493,    -1,   325,   493,    -1,   340,
     493,    -1,    69,    -1,   203,    -1,   266,    -1,   315,    -1,
     325,    -1,    86,    -1,    47,    -1,    -1,     4,    -1,   258,
      -1,    64,    -1,   315,    -1,   340,    -1,   315,    -1,    64,
      -1,   315,    -1,   340,    -1,    64,    -1,   315,    -1,   340,
      -1,   147,    -1,   265,    -1,   265,   210,    -1,   297,    -1,
     297,   210,    -1,    21,    -1,   340,   506,    -1,    49,   503,
      -1,    79,   504,    -1,   163,   505,    -1,   208,    -1,    38,
      -1,   292,   501,    -1,   282,    -1,    -1,    18,    -1,   312,
      -1,   228,   502,    -1,    -1,   312,    -1,    -1,    69,    -1,
      -1,    69,    -1,    -1,    69,    -1,    -1,   251,    -1,    -1,
      15,   508,    -1,   220,   403,    -1,    -1,   252,    -1,    88,
     510,    -1,   105,    -1,   402,   409,   410,   511,     5,     5,
      -1,   402,   409,   410,   511,     5,    -1,    20,    -1,   261,
      -1,    19,    -1,    42,    69,    -1,    45,   513,    -1,    82,
     514,    -1,    89,    -1,   100,    -1,   101,    -1,   107,    -1,
     136,   515,    -1,   154,    -1,   172,    -1,   179,    -1,   204,
     516,    -1,   247,    -1,   173,    -1,   302,    -1,   315,   402,
      -1,   346,   517,    -1,    77,     5,    -1,    -1,    32,    -1,
      -1,    45,    -1,    92,    -1,   214,    -1,   163,    -1,   288,
      -1,   244,    -1,   331,    -1,   402,    -1,    61,   402,    -1,
     123,   402,    -1,   193,   402,    -1,    17,    -1,   321,   402,
      -1,   224,     4,     4,    -1,   124,    -1,   207,     5,    -1,
      93,   520,    -1,   289,   130,   220,   519,    -1,   289,     4,
       4,     4,     4,    -1,   335,    -1,   346,   392,   392,   392,
     392,   392,   392,   392,   392,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    59,    -1,     4,     4,   402,    -1,
     215,   394,    -1,    26,   522,    -1,   120,   524,    -1,   136,
     525,    -1,   175,   538,    -1,   232,   536,    -1,   246,   537,
      -1,     5,    13,     5,   414,    -1,     5,    14,     5,   414,
      -1,     5,    64,     5,   414,    -1,     5,   212,   414,    -1,
       5,   213,   414,    -1,     5,   293,   412,     4,   414,    -1,
       5,   304,     4,   414,    -1,     5,   305,     4,   414,    -1,
       5,   339,     5,   414,    -1,   273,    92,   523,    -1,   169,
      92,   523,    -1,   168,    92,   523,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,    -1,     5,   213,    -1,     5,   293,   412,     4,    -1,
       5,   304,     4,    -1,     5,   305,     4,    -1,     5,   339,
       5,    -1,     5,     5,   301,    -1,     5,    13,     5,   414,
      -1,     5,    14,     5,   414,    -1,     5,    64,     5,   414,
      -1,     5,   212,   413,   414,    -1,     5,     5,   301,   413,
     414,    -1,     5,   213,   413,   414,    -1,     5,   293,   412,
       4,   413,   414,    -1,     5,   309,   412,     4,     4,   413,
     414,    -1,     5,   304,     4,   414,    -1,     5,   305,     4,
     414,    -1,     5,   339,     5,   413,   414,    -1,   300,   526,
      -1,   126,    92,   527,    -1,   273,   173,   535,    -1,   273,
      92,   534,    -1,   169,   173,   535,    -1,   169,    92,   534,
      -1,   168,   173,   535,    -1,   168,    92,   534,    -1,   214,
     528,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    64,     5,    -1,     5,   212,   413,    -1,     5,     5,
     301,   413,    -1,     5,   213,   413,    -1,     5,   293,   412,
       4,   413,    -1,     5,   309,   412,     4,     4,   413,    -1,
       5,   304,     4,    -1,     5,   305,     4,    -1,     5,   339,
       5,   413,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    64,     5,    -1,     5,   212,   413,    -1,     5,
     213,   413,    -1,     5,   293,   412,     4,   413,    -1,     5,
     304,     4,    -1,     5,   305,     4,    -1,     5,   339,     5,
     413,    -1,   173,   178,   529,    -1,   178,   530,    -1,   173,
     531,    -1,   533,    -1,   173,   374,   532,    -1,     5,    13,
       5,   414,    -1,     5,    14,     5,   414,    -1,     5,    64,
       5,   414,    -1,     5,   212,   413,   414,    -1,     5,   213,
     413,   414,    -1,     5,   293,   412,     4,   413,   414,    -1,
       5,   304,     4,   414,    -1,     5,   305,     4,   414,    -1,
       5,   339,     5,   413,   414,    -1,     5,    13,     5,   414,
      -1,     5,    14,     5,   414,    -1,     5,    64,     5,   414,
      -1,     5,   212,   413,   414,    -1,     5,     5,   301,   413,
     414,    -1,     5,   213,   413,   414,    -1,     5,   293,   412,
       4,   413,   414,    -1,     5,   309,   412,     4,     4,   413,
     414,    -1,     5,   304,     4,   414,    -1,     5,   305,     4,
     414,    -1,     5,   339,     5,   413,   414,    -1,   403,     5,
      13,     5,   414,    -1,   403,     5,    14,     5,   414,    -1,
     403,     5,    64,     5,   414,    -1,   403,     5,   212,   413,
     414,    -1,   403,     5,   213,   413,   414,    -1,   403,     5,
     293,   412,     4,   413,   414,    -1,   403,     5,   304,     4,
     414,    -1,   403,     5,   305,     4,   414,    -1,   403,     5,
     339,     5,   413,   414,    -1,     5,    13,     5,   414,    -1,
       5,    14,     5,   414,    -1,     5,    64,     5,   414,    -1,
       5,   212,   413,   414,    -1,     5,   213,   413,   414,    -1,
       5,   293,   412,     4,   413,   414,    -1,     5,   304,     4,
     414,    -1,     5,   305,     4,   414,    -1,     5,   339,     5,
     413,   414,    -1,   403,     5,    13,     5,   414,    -1,   403,
       5,    14,     5,   414,    -1,   403,     5,    64,     5,   414,
      -1,   403,     5,   212,   413,   414,    -1,   403,     5,     5,
     301,   413,   414,    -1,   403,     5,   213,   413,   414,    -1,
     403,     5,   293,   412,     4,   413,   414,    -1,   403,     5,
     309,   412,     4,     4,   413,   414,    -1,   403,     5,   304,
       4,   414,    -1,   403,     5,   305,     4,   414,    -1,   403,
       5,   339,     5,   413,   414,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    64,     5,    -1,     5,   212,
     413,    -1,     5,     5,   301,   413,    -1,     5,   213,   413,
      -1,     5,   293,   412,     4,   413,    -1,     5,   309,   412,
       4,     4,   413,    -1,     5,   304,     4,    -1,     5,   305,
       4,    -1,     5,   339,     5,   413,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,   413,    -1,     5,   213,   413,    -1,     5,   293,   412,
       4,   413,    -1,     5,   304,     4,    -1,     5,   305,     4,
      -1,     5,   339,     5,   413,    -1,     5,    13,     5,   414,
      -1,     5,    64,     5,   414,    -1,     5,   212,   414,    -1,
       5,   293,   412,     4,   414,    -1,     5,   304,     4,   414,
      -1,     5,   339,     5,   414,    -1,     5,     5,    -1,   300,
       5,     5,    -1,    99,     4,     4,     4,     4,     4,    -1,
     209,     4,     4,     4,     4,     4,    -1,   119,    -1,   257,
      -1,   394,    -1,   152,   394,    -1,    93,   394,    -1,    69,
       5,    -1,     5,     4,     4,    -1,   335,   392,   392,    -1,
     384,   392,    -1,     5,     5,   403,   409,     5,     5,   403,
     409,   392,   403,   411,     5,    -1,    63,   545,    -1,    69,
       5,    -1,    85,    -1,    78,   551,     5,    -1,    78,   551,
     339,     5,    -1,    80,   105,    -1,    -1,    88,   543,   546,
      -1,    94,    -1,   105,   549,    -1,   113,   550,    -1,   122,
       4,    -1,   141,     5,    -1,   163,    16,    -1,   163,   237,
     392,   392,    -1,   163,   327,   392,   392,    -1,     4,    20,
     417,   394,    -1,     4,    21,   397,    -1,     4,    21,   397,
     404,    -1,     4,    21,   397,   402,   409,    -1,     4,    22,
     265,   392,   392,     4,   402,   411,    -1,     4,    22,   265,
       5,   402,   411,    -1,     4,    52,   265,   392,   392,   392,
       4,   402,   411,    -1,     4,    52,   265,     5,   402,   411,
      -1,     4,    51,   265,   392,   392,   402,   411,    -1,     4,
      55,   113,   397,   397,     4,   392,   392,   392,     4,    -1,
       4,    55,   113,   397,   397,     4,   392,   392,   392,     4,
     404,    -1,     4,    55,   113,   397,   397,     4,   392,   392,
     392,     4,   402,   409,    -1,     4,    55,   113,     5,     5,
     402,   409,   402,   411,    -1,     4,    58,   544,     5,     5,
      -1,     4,    65,   265,   392,   402,   411,    -1,     4,    69,
       5,    -1,     4,    79,    27,   394,   394,    -1,     4,    79,
     183,     5,     5,    -1,     4,    79,   265,   392,   402,   411,
      -1,     4,    79,   315,   402,   409,    -1,     4,    80,   151,
     394,    -1,     4,    80,    28,   394,    -1,     4,    80,   330,
       5,    -1,     4,    87,   113,   397,   397,     4,   392,   392,
       4,    -1,     4,    87,   113,   397,   397,     4,   392,   392,
       4,   404,    -1,     4,    87,   113,   397,   397,     4,   392,
     392,     4,   402,   409,    -1,     4,    87,   113,     5,     5,
     402,   409,   402,   411,    -1,     4,    88,    22,   265,   392,
     392,    -1,     4,    88,    52,   265,   392,   392,    -1,     4,
      88,    55,    21,   392,   392,    -1,     4,    88,    55,   265,
     392,   392,    -1,     4,    88,   118,   265,   392,   392,    -1,
       4,    88,   121,    21,   392,   392,    -1,     4,    88,   121,
     265,   392,   392,    -1,     4,    88,    87,    21,   392,   392,
      -1,     4,    88,    87,   265,   392,   392,    -1,     4,    88,
     253,   343,     4,   392,   392,    -1,     4,    88,   287,   343,
       4,   392,   392,    -1,     4,   105,    -1,     4,   105,    22,
       4,    -1,     4,   105,    52,     4,    -1,     4,   105,    55,
       4,    -1,     4,   105,   118,     4,    -1,     4,   105,    58,
     544,     5,    -1,     4,   105,   121,     4,    -1,     4,   105,
      87,     4,    -1,     4,   105,   253,   343,     4,    -1,     4,
     105,   287,   343,     4,    -1,     4,   105,   317,    -1,     4,
     105,   317,     5,    -1,     4,   105,   317,     4,    -1,     4,
     113,    41,     4,    -1,     4,   117,   265,   392,   392,   402,
     411,    -1,     4,   118,   265,   392,   392,   392,     4,   402,
     411,    -1,     4,   118,   265,     5,   402,   411,    -1,     4,
     121,   113,   397,   397,     4,   392,   392,   392,     4,    -1,
       4,   121,   113,   397,   397,     4,   392,   392,   392,     4,
     404,    -1,     4,   121,   113,   397,   397,     4,   392,   392,
     392,     4,   402,   409,    -1,     4,   121,   113,     5,     5,
     402,   409,   402,   411,    -1,     4,   141,     5,    -1,     4,
     163,    -1,     4,   163,   237,    -1,     4,   192,    27,   394,
     394,    -1,     4,   192,   251,   402,   409,   401,   401,    -1,
       4,   219,   392,   392,    -1,     4,   219,   145,    -1,     4,
     219,    37,    -1,     4,   219,   326,   402,   409,   401,    -1,
       4,   253,   251,   402,   409,   410,     5,    -1,     4,   253,
     271,   392,   392,   402,   411,    -1,     4,   287,   271,   392,
     392,   402,   411,    -1,     4,   251,   291,   415,    -1,     4,
     251,   299,     4,    -1,     4,   259,   402,   409,   401,   401,
     392,   402,   411,    -1,     4,   260,   564,   394,    -1,     4,
     275,    41,    -1,     4,   276,   142,     5,    -1,     4,   276,
     251,   402,   409,   401,   401,    -1,     4,   276,   315,   402,
     409,   402,   411,    -1,     4,   288,    -1,     4,   288,   237,
      -1,     4,   317,     5,    -1,     4,   319,     5,    -1,     4,
     319,   275,   394,    -1,     4,   332,    -1,     4,   334,    -1,
       4,   341,    27,   394,    -1,     4,   341,   251,   402,   409,
     401,   402,   411,   392,   397,    -1,     4,   375,     4,    -1,
       4,    98,     4,     4,    -1,   181,    -1,   181,   392,   392,
      -1,   194,   559,    -1,   195,   560,    -1,   219,   561,    -1,
     258,   394,    -1,   260,   564,   394,    -1,   260,   564,   394,
     392,   392,    -1,   275,    41,   392,   392,    -1,   275,   216,
     392,   392,     4,    -1,   275,   119,    -1,   280,   568,    -1,
     288,   569,    -1,   296,   570,    -1,     5,    69,     5,    -1,
       5,    85,    -1,     5,   105,    -1,     5,    94,    -1,     5,
     141,     5,    -1,     5,   163,    -1,     5,   163,   237,    -1,
       5,   219,   392,   392,    -1,     5,   219,   145,    -1,     5,
     219,    37,    -1,     5,   219,   326,   402,   409,   401,    -1,
       5,   260,   564,   394,    -1,     5,   288,    -1,     5,   288,
     237,    -1,     5,   332,    -1,     5,   334,    -1,   317,   113,
       5,     5,    -1,   317,   105,     5,    -1,   317,   105,    16,
      -1,   317,     5,    -1,   317,   335,     5,    -1,   244,    -1,
     244,   402,    -1,   331,    -1,   332,    16,    -1,   334,    16,
      -1,   375,     4,    -1,    98,     4,     4,    -1,   288,    -1,
     334,    -1,   163,    -1,   332,    -1,    41,   219,    -1,   219,
      -1,   119,   219,    -1,    41,   113,    -1,   113,    -1,   119,
     113,    -1,    41,   275,    -1,   275,    -1,   119,   275,    -1,
     105,    -1,   319,    -1,    69,    -1,   375,    -1,   260,    -1,
     141,    -1,   181,    -1,   335,    -1,    -1,     4,    -1,    31,
     394,    -1,   265,   392,    -1,   177,     4,    -1,   238,     4,
     392,    -1,    65,   392,   392,   392,   565,    -1,   117,   392,
     392,   392,   392,   396,   565,    -1,    51,   392,   392,   392,
     392,   396,   565,    -1,   253,   392,   392,   392,   392,   565,
      -1,   287,   392,   392,   392,   392,   565,    -1,   192,   392,
     392,   392,   392,   565,    -1,   341,   392,   392,   392,   392,
     565,    -1,   319,   392,   392,   396,   565,    -1,    65,   251,
     392,   392,   416,   565,    -1,    51,   251,   392,   392,   416,
     565,    -1,   108,   251,   392,   392,   416,   565,    -1,    90,
     251,   392,   392,   416,   565,    -1,   388,   251,   392,   392,
     416,   565,    -1,    27,   251,   392,   392,   416,   565,    -1,
      54,   251,   392,   392,   416,   565,    -1,   276,   392,   392,
     392,   392,   402,   409,   402,   411,     5,   565,    -1,    79,
     392,   392,   392,   402,   409,   565,    -1,   259,   392,   392,
     392,   392,   392,   565,    -1,    22,   392,   392,   392,   392,
       4,   565,    -1,   118,   392,   392,   392,   392,   392,     4,
     396,   565,    -1,    52,   392,   392,   392,   392,   392,     4,
     396,   565,    -1,    87,   392,   392,   397,   397,     4,   392,
     392,     4,   565,    -1,   121,   392,   392,   397,   397,     4,
     392,   392,   392,     4,   396,   565,    -1,    55,   392,   392,
     397,   397,     4,   392,   392,   392,     4,   396,   565,    -1,
      80,   547,   565,    -1,   318,   548,    -1,    -1,     4,    -1,
       5,   392,   392,    -1,   339,     5,   392,   392,    -1,   392,
     392,   339,     5,    -1,     5,   402,   409,   401,    -1,    -1,
     288,    -1,    16,    -1,    41,   392,   392,     4,    -1,   216,
     392,   392,     4,    -1,   119,    -1,   112,    -1,   377,    -1,
      66,    -1,   279,    -1,   278,    -1,   262,    -1,   378,    -1,
      63,   553,    -1,    69,    -1,   141,    -1,   122,    -1,   156,
     392,   392,    -1,   171,   392,   392,    -1,     4,    20,    87,
       5,     5,     5,   402,     4,    -1,     4,    20,   165,     5,
       5,     4,    -1,     4,    20,   249,     5,     5,     5,     5,
     402,   409,   418,    -1,     4,    20,   250,     5,     5,   402,
     418,    -1,     4,    20,   264,     5,     5,     5,   402,    -1,
       4,    20,   310,   402,   409,    -1,     4,    20,   310,    99,
     402,   409,    -1,    20,   310,    16,    99,   402,   409,    -1,
      20,   310,   385,    -1,   171,    16,    -1,     4,    21,    -1,
       4,    21,   404,    -1,     4,    21,   402,   409,    -1,     4,
      22,   265,   402,   411,    -1,     4,    52,   265,   402,   411,
      -1,     4,    51,   265,   402,   411,    -1,     4,    55,    21,
      -1,     4,    55,    21,   404,    -1,     4,    55,    21,   402,
     409,    -1,     4,    55,   265,   402,   411,    -1,     4,    62,
     402,   409,   410,    -1,     4,    65,   265,   402,   411,    -1,
       4,    69,    -1,     4,    79,    27,    -1,     4,    79,   183,
      -1,     4,    79,   265,   402,   411,    -1,     4,    79,   315,
      -1,     4,    80,   151,    -1,     4,    80,    28,    -1,     4,
      80,   330,    -1,     4,    87,    21,    -1,     4,    87,    21,
     404,    -1,     4,    87,    21,   402,   409,    -1,     4,    87,
     265,   402,   411,    -1,     4,   117,   265,   402,   411,    -1,
       4,   118,   265,   402,   411,    -1,     4,   121,    21,    -1,
       4,   121,    21,   404,    -1,     4,   121,    21,   402,   409,
      -1,     4,   121,   265,   402,   411,    -1,     4,   141,    -1,
       4,   163,    -1,     4,   192,    27,    -1,     4,   192,   187,
     402,   411,    -1,     4,   192,   251,   402,   409,   410,    -1,
       4,   202,   187,   392,   402,   411,    -1,     4,   251,   291,
      -1,     4,   251,   299,    -1,     4,   253,   251,   402,   409,
     410,    -1,     4,   259,   251,   402,   409,   410,    -1,     4,
     259,   187,   402,   411,    -1,     4,   259,   323,   402,   411,
      -1,     4,   260,    -1,     4,   260,   564,    -1,     4,   276,
     142,    -1,     4,   276,   187,   402,   411,    -1,     4,   276,
     251,   402,   409,   410,    -1,     4,   276,   315,    -1,     4,
     288,    -1,     4,   317,    -1,     4,   317,     4,    -1,     4,
     319,    -1,     4,   319,   275,    -1,     4,   330,    -1,     4,
     341,    27,    -1,     4,   341,   187,   402,   411,    -1,     4,
     341,   251,   402,   409,   410,    -1,     4,   375,    -1,     4,
      98,    -1,   163,   554,    -1,   163,   233,    -1,   233,    -1,
     253,   287,   392,   392,    -1,   287,   287,   392,   392,    -1,
     258,    -1,   260,   564,    -1,   288,   555,    -1,   288,   233,
      -1,   296,   556,    -1,     5,    69,    -1,     5,   141,    -1,
       5,   171,    -1,     5,   260,   564,    -1,     5,   317,    -1,
       5,   317,   233,    -1,   317,    16,    -1,   317,   104,   220,
      -1,   375,    -1,    98,    -1,    31,    -1,   265,    -1,   177,
      -1,   238,    -1,    -1,   392,   392,    -1,    -1,   392,   392,
      -1,    -1,   319,    -1,    -1,    -1,   252,    -1,   267,    -1,
     337,    -1,    60,    -1,   143,    -1,   551,   402,   409,   410,
     394,   566,   573,    -1,   288,   551,   402,   409,   410,   394,
     566,   573,    -1,   551,     5,    -1,   551,     5,     4,     5,
     402,   409,    -1,   551,     4,    -1,   551,     4,     4,     5,
     402,   409,    -1,   136,     5,    -1,   136,     5,     5,    -1,
     392,   392,    -1,   145,    -1,    37,    -1,    41,   392,   392,
      -1,   216,   392,   392,    -1,   119,    -1,   326,   402,   409,
     401,    -1,   562,   563,    -1,   563,    -1,   564,   389,   394,
      -1,    69,   389,     5,    -1,    98,   389,     4,     4,    -1,
     375,   389,     4,    -1,   141,   389,     5,    -1,   319,   389,
       5,    -1,   576,    -1,   577,    -1,   227,    -1,   288,    -1,
     163,    -1,    97,    -1,   138,    -1,   113,    -1,   219,    -1,
     275,    -1,   105,    -1,   174,    -1,   306,    -1,   131,    -1,
     557,    -1,   557,   562,    -1,    -1,    -1,   567,   571,    -1,
       5,   551,   402,   409,   410,   394,    -1,   288,     5,   551,
     402,   409,   410,   394,    -1,   318,     5,    -1,    16,    -1,
     237,   392,   392,    -1,   327,    -1,   327,   392,   392,    -1,
     133,    -1,   186,    -1,   394,    -1,   319,   394,    -1,   571,
     572,    -1,   572,    -1,   564,   389,   394,    -1,    -1,    -1,
     574,   575,    -1,   575,   576,    -1,   576,    -1,   317,   389,
       5,    -1,    58,   389,   544,     5,     5,    -1,    -1,    88,
      -1,     4,    -1,   185,     4,    -1,    69,     5,    -1,     4,
      69,     5,    -1,    47,   406,    -1,     4,    47,   406,    -1,
     325,   392,    -1,     4,   325,   392,    -1,   340,   394,    -1,
       4,   340,   394,    -1,   296,    -1,     4,   296,    -1,   162,
      -1,     4,   162,    -1,   105,    -1,     4,   105,    -1,   336,
      -1,     4,   336,    -1,   111,    -1,     4,   111,    -1,   324,
      -1,     4,   324,    -1,    50,    -1,     4,    50,    -1,    67,
      -1,    69,     5,    -1,   203,   405,    -1,   266,   392,   392,
      -1,   315,   402,    -1,   325,   392,    -1,    47,   406,    -1,
     203,     4,    -1,   388,    -1,   386,    -1,   378,    -1,   227,
      -1,   392,   392,   392,   392,    -1,   392,   392,    -1,   404,
     392,   392,    -1,   402,   409,   401,    -1,   326,   582,    -1,
      40,   392,   392,    -1,   216,   583,    -1,   258,   394,    -1,
     392,   392,    -1,   404,   392,   392,    -1,   402,   409,   401,
      -1,    41,   392,   392,    -1,   392,   392,    -1,   119,   392,
     392,    -1,   394,    -1,   346,   403,   409,    -1,     5,     4,
       4,    -1,   335,    -1,    75,   587,    -1,   188,     4,    -1,
     272,     4,    -1,   282,   392,    -1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,    -1,     4,     4,     4,     4,
       4,     4,    -1,    57,    -1,   153,    -1,   273,    -1,    95,
      -1,   163,   589,    -1,   288,   590,    -1,    41,   392,   392,
      -1,   216,   392,   392,    -1,   119,    -1,   294,   119,    -1,
      41,   392,   392,    -1,   216,   392,   392,    -1,   119,    -1,
     294,   119,    -1,   211,    -1,    12,    -1,   134,    -1,   227,
      -1,    35,    -1,   115,    -1,    64,     5,    -1,   315,   402,
      -1,   340,     4,     4,     4,    -1,   315,   402,    -1,    64,
       5,    -1,    64,   167,    -1,    64,   281,    -1,   315,   402,
      -1,   340,     4,     4,     4,    -1,    64,     5,    -1,    64,
     167,    -1,    64,   281,    -1,    64,   338,    -1,   315,   402,
      -1,   340,     4,     4,     4,    -1,   392,    -1,   392,   103,
      -1,   216,   598,    -1,   326,   392,    -1,   326,   392,   103,
      -1,    41,    -1,   392,    -1,   119,    -1,    26,   601,    -1,
     136,   602,    -1,   383,   600,    -1,   232,   619,    -1,   120,
     620,    -1,   246,     5,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,   419,    -1,    64,     5,
     419,    -1,   304,     4,   419,    -1,   273,    92,   609,    -1,
     169,    92,   612,    -1,   168,    92,   615,    -1,   603,    -1,
     173,   603,    -1,   316,   604,    -1,   300,   605,    -1,   126,
      92,   606,    -1,   214,   607,    -1,   273,   173,   610,    -1,
     273,    92,   611,    -1,   169,   173,   613,    -1,   169,    92,
     614,    -1,   168,   173,   616,    -1,   168,    92,   617,    -1,
     269,   618,    -1,   130,     5,    -1,    64,     5,    -1,   304,
       4,    -1,   130,     5,    -1,    64,     5,    -1,   304,     4,
      -1,   130,     5,    -1,    64,     5,    -1,   304,     4,    -1,
     130,     5,    -1,    64,     5,    -1,   304,     4,    -1,   173,
     608,    -1,   130,     5,     4,    -1,    64,     5,     4,    -1,
     304,     4,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     304,     4,    -1,   130,     5,   419,    -1,    64,     5,   419,
      -1,   304,     4,   419,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     304,     4,    -1,   130,     5,   419,    -1,    64,     5,   419,
      -1,   304,     4,   419,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     304,     4,    -1,   130,     5,   419,    -1,    64,     5,   419,
      -1,   304,     4,   419,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     304,     4,    -1,   130,     5,    -1,    64,     5,    -1,   304,
       4,    -1,   130,     5,   419,    -1,    64,     5,   419,    -1,
     304,     4,   419,    -1,   130,     5,     5,   419,    -1,   622,
       4,     4,   392,   392,   397,    -1,   622,     4,    -1,   105,
      -1,    53,    -1,   328,    -1,   149,    -1,   116,    -1,    -1,
       4,   392,   392,   392,   392,    -1,   231,    -1,   231,     4,
     392,   392,   392,   392,    -1,   136,   300,   624,    -1,     4,
      -1,     4,     4,    -1,   392,   402,    -1,   392,   392,    -1,
     326,   392,   392,    -1,   403,   409,   410,    -1,    15,   629,
      -1,   271,     4,    -1,   268,   628,    -1,    23,   627,    -1,
       4,     4,    -1,     4,     5,    -1,   319,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   319,     4,     5,    -1,
       4,    -1,     4,   403,   409,    -1,   326,     4,   403,   409,
      -1,   252,    67,    -1,   257,    -1,   392,   392,    -1,   392,
     392,    11,   392,   392,    -1,   392,   392,    11,   404,   392,
     392,    -1,   392,   392,    11,   402,   409,   401,    -1,   326,
     632,    -1,   135,    -1,   135,   392,    -1,   392,   392,    -1,
     392,   392,    11,   392,   392,    -1,   392,   392,    11,   404,
     392,   392,    -1,   392,   392,    11,   402,   409,   401,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   496,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   557,   558,   561,   562,   563,   564,   565,   566,   567,
     568,   569,   570,   571,   574,   576,   577,   578,   579,   581,
     582,   583,   584,   587,   588,   589,   590,   591,   594,   595,
     598,   599,   600,   603,   606,   609,   612,   624,   631,   638,
     646,   647,   648,   649,   650,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   683,   684,   687,   688,   689,   690,   691,
     692,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   714,   715,
     716,   717,   718,   719,   720,   721,   724,   725,   726,   727,
     728,   731,   732,   733,   734,   735,   736,   737,   738,   741,
     742,   743,   746,   747,   748,   749,   752,   753,   754,   757,
     758,   759,   762,   763,   764,   767,   768,   769,   770,   771,
     772,   773,   774,   777,   778,   781,   782,   783,   784,   785,
     786,   789,   790,   791,   792,   795,   796,   797,   798,   799,
     800,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   816,   817,   818,   819,   822,   823,   826,   827,   830,
     831,   834,   835,   838,   839,   843,   844,   845,   846,   847,
     848,   849,   850,   853,   854,   857,   858,   859,   861,   863,
     864,   865,   867,   871,   872,   875,   876,   878,   881,   883,
     889,   890,   891,   894,   895,   896,   899,   900,   901,   902,
     903,   904,   905,   911,   912,   915,   916,   917,   918,   919,
     922,   923,   924,   925,   928,   929,   934,   939,   946,   948,
     950,   952,   954,   956,   957,   958,   961,   963,   965,   967,
     969,   972,   973,   976,   977,   978,   979,   980,   981,   984,
     987,   990,   996,  1002,  1005,  1006,  1009,  1010,  1011,  1018,
    1019,  1020,  1021,  1024,  1025,  1028,  1029,  1032,  1033,  1034,
    1038,  1040,  1044,  1045,  1048,  1050,  1051,  1052,  1053,  1056,
    1057,  1059,  1060,  1061,  1064,  1066,  1068,  1069,  1071,  1073,
    1075,  1077,  1081,  1084,  1085,  1086,  1087,  1090,  1091,  1094,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1130,  1131,  1133,  1134,  1135,  1136,  1137,
    1138,  1139,  1141,  1142,  1143,  1146,  1148,  1152,  1154,  1158,
    1159,  1160,  1161,  1162,  1163,  1164,  1165,  1168,  1169,  1170,
    1173,  1176,  1177,  1179,  1181,  1182,  1183,  1184,  1185,  1186,
    1193,  1194,  1197,  1198,  1199,  1202,  1203,  1206,  1209,  1210,
    1212,  1216,  1217,  1218,  1221,  1225,  1227,  1228,  1229,  1230,
    1231,  1232,  1233,  1234,  1235,  1236,  1239,  1240,  1241,  1244,
    1245,  1248,  1250,  1258,  1260,  1262,  1266,  1267,  1269,  1272,
    1275,  1276,  1280,  1282,  1285,  1290,  1291,  1292,  1296,  1297,
    1298,  1301,  1302,  1303,  1306,  1307,  1309,  1310,  1311,  1312,
    1313,  1314,  1315,  1316,  1317,  1318,  1320,  1321,  1324,  1325,
    1328,  1329,  1330,  1331,  1334,  1335,  1338,  1340,  1343,  1347,
    1348,  1349,  1351,  1353,  1357,  1358,  1359,  1362,  1363,  1364,
    1365,  1366,  1367,  1370,  1371,  1372,  1373,  1374,  1375,  1376,
    1379,  1380,  1383,  1386,  1387,  1388,  1391,  1394,  1395,  1396,
    1399,  1400,  1401,  1404,  1405,  1406,  1407,  1408,  1409,  1412,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1422,  1423,  1424,
    1425,  1428,  1429,  1432,  1433,  1436,  1437,  1440,  1441,  1444,
    1445,  1448,  1449,  1450,  1453,  1454,  1457,  1458,  1461,  1464,
    1472,  1473,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1483,
    1484,  1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,
    1496,  1499,  1500,  1503,  1504,  1505,  1506,  1509,  1510,  1511,
    1512,  1515,  1516,  1517,  1518,  1519,  1520,  1523,  1524,  1525,
    1526,  1527,  1528,  1530,  1531,  1536,  1537,  1540,  1542,  1544,
    1547,  1548,  1549,  1550,  1551,  1552,  1555,  1557,  1559,  1561,
    1562,  1564,  1566,  1568,  1570,  1572,  1573,  1574,  1577,  1578,
    1579,  1580,  1581,  1582,  1584,  1585,  1586,  1589,  1592,  1594,
    1596,  1598,  1600,  1602,  1604,  1606,  1609,  1611,  1613,  1615,
    1616,  1617,  1618,  1619,  1620,  1621,  1622,  1623,  1626,  1627,
    1628,  1629,  1630,  1631,  1632,  1634,  1636,  1637,  1638,  1641,
    1642,  1643,  1644,  1645,  1646,  1648,  1649,  1650,  1653,  1654,
    1655,  1656,  1657,  1660,  1663,  1666,  1669,  1672,  1675,  1678,
    1681,  1684,  1689,  1692,  1695,  1698,  1701,  1704,  1707,  1710,
    1713,  1716,  1719,  1724,  1727,  1730,  1733,  1736,  1739,  1742,
    1745,  1748,  1753,  1755,  1757,  1759,  1761,  1763,  1768,  1770,
    1772,  1776,  1779,  1782,  1785,  1788,  1791,  1794,  1797,  1800,
    1803,  1806,  1811,  1812,  1813,  1814,  1815,  1816,  1817,  1819,
    1821,  1822,  1823,  1826,  1827,  1828,  1829,  1830,  1831,  1833,
    1834,  1835,  1838,  1840,  1842,  1843,  1845,  1847,  1851,  1852,
    1855,  1856,  1857,  1860,  1863,  1864,  1865,  1866,  1867,  1868,
    1869,  1872,  1880,  1881,  1882,  1883,  1885,  1887,  1888,  1888,
    1889,  1890,  1891,  1892,  1893,  1895,  1896,  1898,  1901,  1904,
    1905,  1906,  1909,  1912,  1915,  1919,  1922,  1925,  1928,  1932,
    1937,  1942,  1944,  1946,  1947,  1949,  1951,  1953,  1955,  1956,
    1957,  1959,  1961,  1963,  1967,  1972,  1974,  1976,  1978,  1980,
    1982,  1984,  1986,  1988,  1990,  1992,  1995,  1996,  1998,  2000,
    2001,  2003,  2005,  2006,  2007,  2009,  2011,  2012,  2013,  2015,
    2016,  2019,  2023,  2026,  2029,  2033,  2038,  2044,  2045,  2046,
    2048,  2049,  2053,  2055,  2056,  2057,  2060,  2063,  2066,  2069,
    2071,  2073,  2078,  2081,  2082,  2083,  2086,  2090,  2091,  2093,
    2094,  2095,  2097,  2098,  2100,  2101,  2106,  2107,  2109,  2110,
    2112,  2113,  2114,  2115,  2116,  2117,  2119,  2121,  2123,  2124,
    2125,  2127,  2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,
    2137,  2138,  2139,  2141,  2143,  2144,  2145,  2146,  2148,  2149,
    2150,  2151,  2152,  2154,  2155,  2156,  2157,  2158,  2159,  2160,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2186,  2187,  2188,  2189,  2190,  2191,  2199,  2206,  2215,
    2224,  2231,  2238,  2246,  2254,  2261,  2266,  2271,  2276,  2281,
    2286,  2291,  2297,  2307,  2317,  2327,  2334,  2344,  2354,  2363,
    2375,  2388,  2394,  2397,  2398,  2407,  2409,  2411,  2416,  2420,
    2421,  2422,  2428,  2430,  2432,  2435,  2436,  2437,  2438,  2439,
    2440,  2441,  2444,  2445,  2446,  2447,  2448,  2449,  2451,  2453,
    2455,  2457,  2459,  2461,  2463,  2465,  2467,  2470,  2471,  2472,
    2473,  2475,  2478,  2480,  2482,  2483,  2484,  2486,  2489,  2492,
    2494,  2495,  2496,  2497,  2499,  2500,  2501,  2502,  2503,  2504,
    2505,  2507,  2509,  2511,  2514,  2515,  2516,  2518,  2521,  2522,
    2523,  2524,  2526,  2529,  2533,  2534,  2535,  2538,  2541,  2544,
    2546,  2547,  2548,  2549,  2551,  2554,  2555,  2557,  2558,  2559,
    2560,  2561,  2563,  2564,  2566,  2569,  2570,  2571,  2572,  2573,
    2574,  2576,  2578,  2579,  2580,  2581,  2583,  2585,  2586,  2587,
    2588,  2589,  2590,  2592,  2593,  2595,  2596,  2599,  2600,  2601,
    2602,  2605,  2606,  2609,  2610,  2613,  2614,  2617,  2630,  2631,
    2635,  2636,  2640,  2641,  2644,  2648,  2654,  2656,  2659,  2661,
    2664,  2666,  2670,  2671,  2672,  2673,  2674,  2675,  2676,  2680,
    2681,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,  2694,
    2695,  2696,  2697,  2698,  2699,  2700,  2701,  2702,  2703,  2704,
    2705,  2708,  2709,  2712,  2713,  2713,  2716,  2718,  2720,  2723,
    2724,  2725,  2726,  2727,  2728,  2731,  2732,  2735,  2736,  2739,
    2743,  2744,  2744,  2747,  2748,  2751,  2754,  2758,  2759,  2760,
    2761,  2762,  2763,  2764,  2765,  2766,  2767,  2768,  2769,  2771,
    2772,  2773,  2774,  2775,  2776,  2777,  2778,  2779,  2780,  2781,
    2782,  2783,  2784,  2787,  2788,  2789,  2790,  2791,  2792,  2793,
    2794,  2800,  2801,  2802,  2803,  2806,  2808,  2809,  2814,  2816,
    2817,  2818,  2819,  2822,  2823,  2828,  2832,  2833,  2834,  2837,
    2838,  2843,  2844,  2847,  2849,  2850,  2851,  2856,  2858,  2864,
    2865,  2866,  2867,  2870,  2871,  2874,  2876,  2878,  2879,  2882,
    2884,  2885,  2886,  2889,  2890,  2891,  2894,  2895,  2896,  2899,
    2900,  2901,  2904,  2908,  2909,  2910,  2911,  2912,  2915,  2916,
    2917,  2918,  2919,  2920,  2923,  2924,  2925,  2926,  2927,  2930,
    2931,  2932,  2935,  2936,  2937,  2938,  2939,  2940,  2943,  2944,
    2945,  2948,  2950,  2952,  2954,  2955,  2956,  2959,  2960,  2961,
    2962,  2963,  2964,  2965,  2966,  2967,  2968,  2969,  2970,  2971,
    2974,  2975,  2976,  2979,  2980,  2981,  2984,  2985,  2986,  2989,
    2990,  2991,  2994,  2995,  2996,  2997,  3000,  3001,  3002,  3005,
    3007,  3009,  3013,  3014,  3015,  3018,  3019,  3020,  3023,  3025,
    3027,  3031,  3032,  3033,  3036,  3037,  3038,  3041,  3043,  3045,
    3049,  3050,  3051,  3054,  3055,  3056,  3059,  3060,  3061,  3064,
    3066,  3068,  3072,  3076,  3078,  3083,  3086,  3087,  3088,  3089,
    3092,  3093,  3096,  3098,  3100,  3103,  3104,  3105,  3108,  3109,
    3112,  3114,  3115,  3116,  3117,  3120,  3121,  3122,  3125,  3126,
    3127,  3130,  3131,  3136,  3138,  3141,  3148,  3149,  3151,  3156,
    3158,  3161,  3162,  3163,  3164,  3166,  3171
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "ANGDEGREE",
  "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_", "ALLOC_",
  "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMBIENT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "AREA_", "ASINH_", "AST_", "AUTO_", "AUX_",
  "AVERAGE_", "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_",
  "BASE_", "BBOX_", "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_",
  "BITPIX_", "BLEND_", "BLOCK_", "BORDER_", "BOTTOM_", "BOX_",
  "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_",
  "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_",
  "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_", "CLIP_", "COLOR_",
  "COLORBURN_", "COLORDODGE_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DARKEN_", "DASH_", "DASHLIST_", "DATA_",
  "DATAMIN_", "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_",
  "DEPTH_", "DETECTOR_", "DIAMOND_", "DIFFERENCE_", "DIM_", "DOWN_",
  "DS9_", "EDIT_", "ECLIPTIC_", "ELEVATION_", "ELLIPTIC_", "ELLIPSE_",
  "ELLIPSEANNULUS_", "END_", "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_",
  "ERASE_", "EXCLUSION_", "EXT_", "FADE_", "FACTOR_", "FALSE_", "FILE_",
  "FILL_", "FILTER_", "FIRST_", "FIP_", "FIT_", "FITS_", "FITSY_",
  "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_", "FROM_",
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_",
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_",
  "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MEDIAN_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_",
  "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NORMAL_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_",
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_",
  "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_",
  "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_",
  "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_",
  "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_", "SCAN_",
  "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_",
  "SEXAGESIMAL_", "SHAPE_", "SHADE_", "SHARED_", "SHIFT_", "SHMID_",
  "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_",
  "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_",
  "SSHARED_", "STATS_", "STATUS_", "STRENGTH_", "SUM_", "SYNC_", "SYSTEM_",
  "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_", "TOGGLE_",
  "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_",
  "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_", "'Y'",
  "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug", "yesno",
  "fileNameType", "optangle", "angle", "sexagesimal", "hms", "dms",
  "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
  "maskBlend", "scaleType", "minmaxMode", "skyFrame", "skyFormat",
  "skyDist", "shmType", "incrLoad", "layerType", "pointShape", "pointSize",
  "analysisTask", "analysisMethod", "endian", "threed", "threedShade",
  "threedShadeNormal", "threedBorder", "threedCompass", "threedHighlite",
  "threedView", "bin", "binAbout", "binFactor", "binFunction", "binTo",
  "block", "blockTo", "clip", "clipScope", "clipMode", "clipMinMax",
  "clipZScale", "colormap", "colormapMotion", "colorscale", "contour",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "crop", "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy",
  "get", "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getLayer",
  "getMask", "layerRef", "getPan", "getRGB", "getMultiColor", "getHLS",
  "getHSV", "getSmooth", "getThreed", "getThreedShade",
  "getThreedShadeNormal", "getThreedBorder", "getThreedCompass",
  "getThreedHighlite", "getThreedView", "getWCS", "getWCSAlign", "grid",
  "gridCreate", "gridType", "has", "hasBin", "hasContour", "hasFits",
  "hasMarker", "hasWCS", "iis", "iisSetFileName", "iiscursor", "load",
  "loadArr", "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsMosaicWCS", "loadFitsRGBCube",
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadIncr", "macosx",
  "magnifier", "match", "marker", "@1", "markerCallBack", "markerCentroid",
  "markerCreate", "compositeOperation", "markerCreateTemplate",
  "markerDelete", "markerEdit", "markerFormat", "markerGet",
  "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
  "rotateMotion", "save", "savePixelMask", "saveArray", "saveFits",
  "saveFitsImage", "saveFitsTable", "saveFitsSlice", "saveFitsExtCube",
  "saveFitsMosaic", "saveFitsMosaicImage", "saveArrayRGBCube",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveArrayHLSCube",
  "saveFitsHLSImage", "saveFitsHLSCube", "saveArrayHSVCube",
  "saveFitsHSVImage", "saveFitsHSVCube", "saveFitsResample", "saveNRRD",
  "saveENVI", "smooth", "smoothFunction", "update", "updateFitsSlice",
  "warp", "wcs", "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom",
  "zoomTo", 0
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   390,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   392,   392,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   395,   395,   395,   395,   395,   396,   396,
     397,   397,   397,   398,   399,   400,   401,   401,   401,   401,
     402,   402,   402,   402,   402,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   404,   404,   405,   405,   405,   405,   405,
     405,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   407,   407,
     407,   407,   407,   407,   407,   407,   408,   408,   408,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   409,   410,
     410,   410,   411,   411,   411,   411,   412,   412,   412,   413,
     413,   413,   414,   414,   414,   415,   415,   415,   415,   415,
     415,   415,   415,   416,   416,   417,   417,   417,   417,   417,
     417,   418,   418,   418,   418,   419,   419,   419,   419,   419,
     419,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   421,   421,   421,   421,   422,   422,   423,   423,   424,
     424,   425,   425,   426,   426,   427,   427,   427,   427,   427,
     427,   427,   427,   428,   428,   429,   429,   429,   429,   429,
     429,   429,   429,   430,   430,   431,   431,   431,   431,   431,
     432,   432,   432,   433,   433,   433,   434,   434,   434,   434,
     434,   434,   434,   435,   435,   436,   436,   436,   436,   436,
     437,   437,   437,   437,   438,   438,   438,   438,   439,   439,
     439,   439,   439,   439,   439,   439,   440,   440,   440,   440,
     440,   441,   441,   442,   442,   442,   442,   442,   442,   443,
     443,   443,   443,   443,   444,   444,   445,   445,   445,   446,
     446,   446,   446,   447,   447,   448,   448,   449,   449,   449,
     450,   450,   451,   451,   451,   451,   451,   451,   451,   452,
     452,   452,   452,   452,   453,   453,   453,   453,   453,   453,
     453,   453,   454,   455,   455,   455,   455,   456,   456,   457,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   458,   458,   458,   458,   458,
     458,   458,   458,   458,   458,   459,   459,   460,   460,   461,
     461,   461,   461,   461,   461,   461,   461,   462,   462,   462,
     463,   464,   464,   464,   464,   464,   464,   464,   464,   464,
     465,   465,   466,   466,   466,   467,   467,   468,   469,   469,
     469,   470,   470,   470,   471,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   473,   473,   473,   474,
     474,   475,   475,   476,   476,   476,   477,   477,   477,   478,
     479,   479,   480,   480,   480,   481,   481,   481,   482,   482,
     482,   483,   483,   483,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   485,   485,
     486,   486,   486,   486,   487,   487,   488,   488,   488,   489,
     489,   489,   489,   489,   490,   490,   490,   491,   491,   491,
     491,   491,   491,   492,   492,   492,   492,   492,   492,   492,
     493,   493,   494,   495,   495,   495,   496,   497,   497,   497,
     498,   498,   498,   499,   499,   499,   499,   499,   499,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   502,   502,   503,   503,   504,   504,   505,   505,   506,
     506,   507,   507,   507,   508,   508,   509,   509,   510,   510,
     511,   511,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     513,   514,   514,   515,   515,   515,   515,   516,   516,   516,
     516,   517,   517,   517,   517,   517,   517,   518,   518,   518,
     518,   518,   518,   518,   518,   519,   519,   520,   520,   520,
     521,   521,   521,   521,   521,   521,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   524,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   528,   528,
     528,   528,   528,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   536,   536,   536,   536,   536,   536,   537,   537,
     538,   538,   538,   539,   540,   540,   540,   540,   540,   540,
     540,   541,   542,   542,   542,   542,   542,   542,   543,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   545,   545,   545,   545,   545,   545,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   547,   547,   548,   548,   548,   548,   549,
     549,   549,   550,   550,   550,   551,   551,   551,   551,   551,
     551,   551,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   552,   552,   552,
     552,   552,   552,   552,   552,   552,   552,   553,   553,   553,
     553,   554,   554,   555,   555,   556,   556,   557,   558,   558,
     558,   558,   558,   558,   559,   559,   560,   560,   560,   560,
     560,   560,   561,   561,   561,   561,   561,   561,   561,   562,
     562,   563,   563,   563,   563,   563,   563,   563,   563,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   565,   565,   566,   567,   566,   568,   568,   568,   569,
     569,   569,   569,   569,   569,   570,   570,   571,   571,   572,
     573,   574,   573,   575,   575,   576,   577,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   579,   579,   579,   579,   579,   579,   579,
     579,   580,   580,   580,   580,   581,   581,   581,   581,   581,
     581,   581,   581,   582,   582,   582,   583,   583,   583,   584,
     584,   584,   584,   585,   585,   585,   585,   586,   586,   587,
     587,   587,   587,   588,   588,   589,   589,   589,   589,   590,
     590,   590,   590,   591,   591,   591,   592,   592,   592,   593,
     593,   593,   594,   595,   595,   595,   595,   595,   596,   596,
     596,   596,   596,   596,   597,   597,   597,   597,   597,   598,
     598,   598,   599,   599,   599,   599,   599,   599,   600,   600,
     600,   601,   601,   601,   601,   601,   601,   602,   602,   602,
     602,   602,   602,   602,   602,   602,   602,   602,   602,   602,
     603,   603,   603,   604,   604,   604,   605,   605,   605,   606,
     606,   606,   607,   607,   607,   607,   608,   608,   608,   609,
     609,   609,   610,   610,   610,   611,   611,   611,   612,   612,
     612,   613,   613,   613,   614,   614,   614,   615,   615,   615,
     616,   616,   616,   617,   617,   617,   618,   618,   618,   619,
     619,   619,   620,   621,   621,   621,   622,   622,   622,   622,
     623,   623,   623,   623,   623,   624,   624,   624,   625,   625,
     626,   626,   626,   626,   626,   627,   627,   627,   628,   628,
     628,   629,   629,   629,   629,   630,   631,   631,   631,   631,
     631,   632,   632,   632,   632,   632,   632
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     3,     2,     2,     2,     5,     9,
       9,     9,     7,     1,     2,     1,     5,     9,     9,     9,
       7,     1,     2,     2,     3,     2,     2,     2,     2,    13,
      13,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       3,     4,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       2,     2,     1,     2,     8,     2,     1,     2,     1,     2,
       1,     4,     3,     2,     1,     7,     8,     7,     8,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     2,
       1,     0,     2,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     4,
       5,     0,     2,     1,     5,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     0,     1,     1,     0,
       1,     5,     6,     3,     6,     3,     1,     3,     1,     1,
       1,     3,     6,     7,     5,     2,     1,     5,     4,     1,
       3,     0,     1,     2,     1,     4,     1,     2,     1,     2,
       3,     2,     1,     2,     1,     4,     2,     1,     1,     3,
       1,     2,     3,     2,     0,     1,     1,     4,     2,     0,
       1,     3,     4,     4,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     2,     1,     0,     1,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     1,     2,
       2,     4,     5,     1,    10,     1,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       3,     5,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     2,     4,     3,     3,     3,     3,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     2,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     3,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     5,     5,     5,     5,     5,     7,     5,
       5,     6,     4,     4,     4,     4,     4,     6,     4,     4,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     5,
       5,     6,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     4,     4,     3,     5,     4,     4,     2,     3,
       6,     6,     1,     1,     1,     2,     2,     2,     3,     3,
       2,    12,     2,     2,     1,     3,     4,     2,     0,     3,
       1,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       4,     5,     8,     6,     9,     6,     7,    10,    11,    12,
       9,     5,     6,     3,     5,     5,     6,     5,     4,     4,
       4,     9,    10,    11,     9,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     7,     7,     2,     4,     4,     4,
       4,     5,     4,     4,     5,     5,     3,     4,     4,     4,
       7,     9,     6,    10,    11,    12,     9,     3,     2,     3,
       5,     7,     4,     3,     3,     6,     7,     7,     7,     4,
       4,     9,     4,     3,     4,     7,     7,     2,     3,     3,
       3,     4,     2,     2,     4,    10,     3,     4,     1,     3,
       2,     2,     2,     2,     3,     5,     4,     5,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     2,     3,     4,
       3,     3,     6,     4,     2,     3,     2,     2,     4,     3,
       3,     2,     3,     1,     2,     1,     2,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     2,     2,     3,     5,     7,     7,
       6,     6,     6,     6,     5,     6,     6,     6,     6,     6,
       6,     6,    11,     7,     7,     7,     9,     9,    10,    12,
      12,     3,     2,     0,     1,     3,     4,     4,     4,     0,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     8,     6,
      10,     7,     7,     5,     6,     6,     3,     2,     2,     3,
       4,     5,     5,     5,     3,     4,     5,     5,     5,     5,
       2,     3,     3,     5,     3,     3,     3,     3,     3,     4,
       5,     5,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     5,     6,     6,     3,     3,     6,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     1,     7,     8,     2,     6,     2,     6,
       2,     3,     2,     1,     1,     3,     3,     1,     4,     2,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     2,     6,     7,     2,     1,
       3,     1,     3,     1,     1,     1,     2,     2,     1,     3,
       0,     0,     2,     2,     1,     3,     5,     0,     1,     1,
       2,     2,     3,     2,     3,     2,     3,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     2,     3,     3,     2,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     9,     6,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     4,     2,     2,     2,     2,     2,     4,     2,     2,
       2,     2,     2,     4,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     4,     6,     2,     1,     1,     1,     1,     1,
       0,     5,     1,     6,     3,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     2,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   342,     0,     0,     0,     0,     0,     0,   370,     0,
       0,    23,     0,     0,     0,     0,     0,  1197,     0,     0,
       0,     0,  1128,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1128,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1390,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   270,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   303,   305,     0,     0,     0,     0,     0,
      11,   163,   165,   158,   159,   160,   164,   161,   162,   311,
      12,     0,     0,   324,     0,     0,     0,    13,     0,     0,
       0,     0,   349,     0,    14,    74,   103,     0,   133,   102,
      82,   100,     0,    79,    81,    77,   134,   101,    78,     0,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,    75,    76,
      80,   356,   171,   104,     0,    15,     0,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
      63,   368,   367,    18,     0,    19,     0,     0,     0,   431,
     445,     0,   451,     0,     0,     0,     0,     0,     0,     0,
     385,     0,   524,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1128,     0,   396,     0,     0,   402,     0,     0,
       0,   406,     0,   408,     0,   410,     0,     0,   581,   414,
      20,     0,   587,    21,   592,     0,     0,   611,   596,   597,
     598,   599,   613,   601,   602,   606,   603,     0,   605,   607,
       0,     0,    22,     0,    24,     0,     0,     0,    26,     0,
       0,     0,    27,     0,   628,     0,     0,     0,   633,     0,
      28,     0,  1199,   141,  1221,     0,  1198,  1213,  1217,  1211,
       0,  1209,  1219,     0,  1215,     0,    36,     0,     0,     0,
       0,     0,     0,    30,   793,    31,     0,     0,     0,     0,
       0,     0,   794,    32,     0,    33,  1132,  1133,  1129,  1130,
    1131,     0,   141,  1223,     0,   135,     0,     0,     0,    35,
       0,    37,     0,  1234,  1233,  1232,  1231,    39,     0,     0,
       0,     0,     0,   171,     0,    40,     0,  1252,     0,  1249,
      41,     0,     0,     0,     0,    44,     0,    43,    42,     0,
       0,     0,     0,    47,     0,     0,  1294,    48,     0,     0,
       0,     0,     0,     0,    49,  1386,  1385,  1389,  1388,  1387,
      51,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,  1392,    55,     0,     0,
      57,     0,     0,     0,     0,   171,    58,  1415,    59,     0,
       0,    60,     1,     4,     5,   253,     0,   245,     0,     0,
     247,     0,   255,   248,   252,   263,   264,   249,   265,     0,
     251,   273,   274,   272,   271,     0,     0,   293,     0,   278,
     286,   289,   288,   287,   285,   277,   282,   283,   284,   276,
       0,     0,     0,     0,     0,     0,   281,    10,     0,     0,
       0,     0,     0,     0,     0,     0,   304,     0,     0,   312,
       0,   323,   313,     0,   325,   315,   326,   316,   337,   317,
       0,     0,   318,     0,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,     0,
       0,     0,     0,     0,   173,   178,   172,   174,   177,   176,
     175,     0,     0,   362,    68,    69,    70,    71,    72,    64,
      65,    66,    73,    67,     0,   371,     0,   427,   423,   419,
     420,   424,   421,   426,   372,   430,   373,   329,   435,   439,
     434,   332,   331,   330,     0,     0,   374,   446,   376,     0,
     375,     0,   453,   377,   466,   457,   469,   458,   459,   460,
     462,     0,   464,   465,   171,   378,     0,     0,   379,     0,
       0,   171,   380,   478,   171,   476,   381,   479,   383,   171,
     480,   382,     0,   171,     0,   384,   498,     0,   496,   514,
       0,     0,     0,   502,   494,     0,   504,   519,   507,   386,
     525,   526,   387,   388,     0,     0,   550,   551,   552,   391,
     547,   548,   549,   392,     0,   489,     0,   393,    83,   486,
       0,   394,   395,   540,   540,   527,   528,   540,   540,   399,
       0,   539,   533,   538,   534,   535,   536,   537,   398,   546,
     400,   401,   542,   403,     0,   543,   544,   545,   405,   558,
     553,   554,   556,   407,   564,   573,   575,   577,   563,   566,
     567,   579,   409,     0,     0,   584,     0,   413,   171,   586,
     593,     0,   594,   612,   595,   614,   615,   616,   600,   617,
     619,   618,   620,   604,   608,   625,     0,     0,     0,     0,
     621,   609,    25,  1288,  1289,  1290,  1291,  1292,     0,  1283,
    1284,  1285,  1286,     0,     0,     0,   630,   629,     0,     0,
       0,     0,    29,   141,  1222,     0,  1214,  1218,  1212,  1210,
    1220,     0,  1216,     0,   156,   149,   148,   146,   152,   153,
     150,   154,   147,   157,   143,   145,   155,   144,   151,   142,
    1203,  1201,  1200,  1205,  1207,     0,     0,     0,     0,   640,
       0,   641,     0,     0,     0,     0,     0,     0,     0,   642,
       0,   792,     0,   643,     0,   644,     0,     0,   645,     0,
     797,   796,   795,     0,   800,     0,     0,     0,   971,     0,
       0,     0,   804,   808,   810,     0,  1009,     0,     0,     0,
       0,   908,     0,     0,     0,   943,     0,     0,     0,     0,
       0,     0,     0,   945,     0,     0,     0,    34,  1229,  1224,
    1230,   138,   139,   137,   140,   136,  1225,     0,  1227,  1228,
    1282,    38,     0,     0,     0,     0,  1241,  1242,     0,   171,
       0,  1239,  1236,     0,     0,     0,   171,  1259,  1262,  1260,
    1261,  1253,  1254,  1255,  1256,     0,     0,     0,    46,  1279,
    1280,     0,  1299,  1301,  1300,  1296,  1297,  1295,     0,     0,
       0,     0,     0,     0,  1302,     0,  1306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1303,
    1317,     0,     0,     0,  1305,  1307,     0,     0,     0,  1304,
    1384,  1277,  1278,  1276,   226,     0,   237,   222,     0,   239,
     223,     0,   241,   224,  1274,  1275,  1273,   225,   228,     0,
       0,     0,   231,   227,   229,   230,     0,     0,   221,     0,
       0,     0,     0,  1398,  1411,     0,     0,  1401,     0,     0,
    1404,     0,     0,  1403,  1402,   179,  1421,     0,  1420,  1416,
     254,   250,     0,   259,     0,   256,     0,   275,   166,   169,
     170,   168,   167,   290,   291,   292,   280,   279,   295,   297,
     296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,     0,   171,     0,   346,
      99,    96,    97,    98,   171,   348,   347,     0,     0,     0,
       0,     0,     0,     0,   361,     0,   357,   355,   354,   369,
     422,     0,     0,   425,   440,   441,   436,   437,   442,   444,
     443,   438,   333,   334,   433,   432,   448,   447,     0,   452,
     467,   468,   456,   470,   463,   461,   455,     0,     0,   171,
     171,   179,   179,   179,   171,     0,     0,   171,   515,   497,
     508,     0,   499,    83,   510,     0,     0,   501,   503,   171,
     520,     0,     0,   506,     0,     0,   390,     0,   491,    87,
      86,   485,     0,   541,   530,   529,   531,   532,     0,     0,
       0,     0,  1023,  1116,  1025,  1024,     0,  1121,     0,  1099,
       0,  1102,     0,     0,  1123,  1125,     0,  1115,   397,     0,
     555,   557,   574,   560,   576,   561,   578,   562,   568,   571,
     569,   565,   580,   559,     0,     0,   412,   585,   582,   583,
     179,   610,   622,   623,   624,   626,     0,     0,     0,   639,
     627,     0,     0,     0,  1204,  1202,  1206,  1208,     0,     0,
       0,   192,   192,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,   189,   186,     0,     0,
     186,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     687,   711,     0,     0,     0,   679,     0,     0,     0,     0,
     192,   186,     0,     0,   788,     0,   798,   799,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   856,     0,     0,     0,     0,     0,   878,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   897,
       0,     0,   902,   903,     0,     0,     0,   923,   925,   924,
       0,   927,     0,     0,   934,   936,   937,   972,     0,     0,
       0,     0,   802,   803,  1017,  1015,  1020,  1019,  1018,  1016,
    1021,     0,   807,     0,     0,  1011,  1010,   811,     0,  1014,
       0,   812,   813,   814,   815,     0,     0,     0,     0,     0,
     910,     0,     0,   911,  1144,     0,  1147,  1143,     0,     0,
       0,   912,   944,   913,  1162,  1167,  1164,  1170,  1163,  1161,
    1168,  1165,  1159,  1166,  1160,  1169,     0,     0,   918,     0,
       0,     0,     0,   919,  1179,  1183,  1184,     0,  1181,   920,
       0,  1185,   921,   941,     0,     0,     0,   946,   947,   948,
    1226,  1240,     0,     0,  1247,  1243,     0,     0,     0,  1238,
    1237,  1251,  1250,     0,     0,  1267,     0,     0,  1263,     0,
    1271,     0,     0,  1264,     0,  1298,   215,   215,     0,     0,
       0,   215,     0,  1331,     0,  1330,     0,     0,     0,     0,
    1318,     0,     0,     0,     0,  1322,     0,     0,     0,  1329,
       0,     0,     0,     0,     0,  1320,  1332,     0,     0,     0,
    1319,   215,   215,   215,  1309,  1308,  1310,     0,   238,   240,
     242,   232,     0,   235,   234,   233,     0,   243,     0,    62,
       0,  1394,     0,  1399,   171,  1414,     0,  1405,  1406,     0,
    1408,  1409,     0,   180,   181,  1400,  1422,  1423,     0,   246,
       0,   260,     0,     0,     0,     0,   294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   340,   171,     0,     0,     0,     0,   171,     0,   360,
       0,   359,   429,   428,     0,     0,     0,   171,     0,   179,
     475,   473,   477,   481,     0,     0,     0,   179,     0,   516,
     500,     0,   511,   513,   182,     0,     0,   389,     0,     0,
      62,     0,   490,    85,    84,     0,     0,  1038,     0,     0,
       0,     0,     0,     0,  1050,     0,     0,     0,  1096,     0,
       0,     0,  1068,  1069,     0,     0,     0,     0,     0,  1080,
       0,  1086,  1087,  1089,  1091,     0,  1095,  1107,  1108,  1109,
       0,  1111,     0,  1117,  1119,  1120,  1118,  1022,     0,  1098,
       0,  1097,  1037,     0,     0,  1103,     0,  1105,     0,  1104,
    1126,  1106,  1113,     0,     0,   572,   570,   411,     0,     0,
    1293,  1287,   637,   638,     0,   635,   631,     0,   192,   192,
     192,   193,   194,   649,   650,   188,   187,     0,   192,   192,
     192,     0,   657,   656,   655,   667,   189,   192,   192,   192,
     190,   191,   192,   192,     0,   192,   192,     0,   189,     0,
     680,     0,   686,     0,   685,   684,   683,     0,     0,     0,
     710,     0,   709,     0,   682,   681,     0,     0,     0,     0,
     189,   189,   186,     0,     0,   186,     0,     0,     0,   192,
     192,   784,     0,   192,   192,   789,     0,   205,   206,   207,
     208,   209,   210,     0,    91,    92,    90,   819,     0,     0,
       0,     0,     0,   965,   963,   958,     0,   968,   952,   969,
     955,   967,   961,   950,   964,   953,   951,   970,   966,     0,
       0,   833,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   866,     0,
       0,     0,     0,   877,   879,     0,     0,   884,   883,     0,
       0,   195,     0,     0,     0,   171,     0,   893,     0,     0,
       0,     0,   898,   899,   900,     0,     0,     0,   906,   922,
     926,   928,   931,   930,     0,     0,     0,   935,   973,   975,
       0,   974,   805,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1003,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   809,   949,
       0,     0,     0,     0,   909,     0,   171,  1140,  1138,  1136,
       0,     0,   171,  1142,   914,     0,     0,     0,     0,  1178,
       0,     0,  1186,   939,   940,     0,   942,  1246,  1248,  1245,
    1244,  1235,     0,     0,     0,  1268,     0,     0,  1272,  1281,
     217,   218,   219,   220,   216,  1312,  1311,     0,     0,     0,
    1316,     0,     0,     0,  1315,     0,     0,     0,  1314,  1313,
     215,     0,     0,     0,  1321,     0,     0,     0,  1328,     0,
       0,     0,  1327,     0,     0,     0,  1326,     0,     0,     0,
    1325,     0,     0,     0,     0,     0,  1342,     0,  1377,  1376,
    1378,     0,     0,     0,  1324,     0,     0,     0,  1323,  1337,
    1336,  1338,  1334,  1333,  1335,  1380,  1379,  1381,     0,   236,
       0,     0,  1396,  1397,     0,  1412,   171,  1407,  1410,     0,
       0,   171,     0,     0,     0,   257,     0,     0,     0,     0,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     336,   335,     0,     0,   327,   338,   341,     0,   351,   353,
     352,   350,   171,   358,     0,     0,     0,   179,   171,     0,
       0,     0,     0,   495,   509,   518,     0,   512,   184,   185,
     183,   505,     0,   521,     0,     0,   488,   493,    83,     0,
       0,     0,     0,     0,     0,   171,  1039,     0,     0,     0,
    1044,     0,   171,     0,  1051,  1052,     0,  1054,  1056,  1055,
    1057,  1058,     0,     0,     0,  1064,     0,  1070,     0,     0,
       0,  1074,  1075,     0,     0,     0,     0,  1081,  1082,     0,
       0,  1085,  1088,  1090,  1092,     0,     0,  1110,  1112,     0,
    1036,  1026,  1122,  1027,     0,     0,  1124,  1114,     0,     0,
     590,   591,     0,   632,   636,     0,   646,   647,   648,   192,
     652,   653,   654,     0,     0,     0,   661,   662,   186,     0,
       0,     0,   192,   668,   669,   670,   671,   673,   189,   676,
     677,     0,   192,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,   186,     0,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,   708,     0,   712,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,   189,
     688,   689,   690,   691,   693,     0,   696,   697,     0,   189,
       0,     0,   782,   783,   192,   786,   787,     0,   818,   171,
     820,     0,     0,     0,     0,     0,     0,     0,   957,   954,
     960,   959,   956,   962,     0,     0,     0,     0,     0,   171,
     839,   838,   840,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   907,   857,   858,   859,
       0,   863,   860,   862,     0,     0,   868,   867,   869,     0,
       0,     0,     0,     0,     0,   171,   171,   882,   201,   197,
     202,   196,   199,   198,   200,   889,   890,   171,     0,     0,
     892,   894,   171,   171,     0,   901,   904,   171,   171,   929,
     933,   976,   806,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1004,  1127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1002,
       0,     0,     0,     0,     0,   816,   817,   171,   179,  1141,
       0,     0,  1145,  1146,     0,     0,   916,     0,   171,     0,
    1180,  1182,   938,     0,  1265,  1266,  1269,  1270,   215,   215,
     215,   215,   215,   215,   215,   215,   215,  1382,  1340,  1339,
    1341,  1374,  1373,  1375,  1371,  1370,  1372,  1365,  1364,  1366,
    1362,  1361,  1363,  1344,  1343,  1347,  1346,  1348,  1345,  1356,
    1355,  1357,  1353,  1352,  1354,     0,     0,  1391,     0,  1413,
       0,   171,     0,  1417,     0,     0,   261,     0,   258,     0,
       0,     0,     0,     0,   306,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,   343,   159,     0,   449,     0,
     471,   179,   182,     0,     0,   484,     0,   522,   523,     0,
     487,     0,     0,     0,     0,     0,     0,   171,  1040,   182,
     182,   182,   171,  1045,   182,   179,   182,   182,   171,  1059,
     182,   182,   182,   171,  1065,   182,   182,   171,     0,   171,
     182,   171,   182,   182,   171,   182,   171,     0,  1100,  1101,
       0,     0,   589,     0,   651,   658,   659,   660,     0,   664,
     665,   666,   672,   192,   189,   678,   699,   700,   701,   702,
     703,     0,   705,   706,   189,   189,   762,   763,   764,   765,
     767,     0,   770,   771,     0,   189,   773,   774,   775,   776,
     777,     0,   779,   780,   189,     0,     0,     0,   189,   189,
     186,     0,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,     0,   189,   192,   192,   192,   192,   192,     0,   192,
     192,     0,   189,   189,   192,   192,   192,   192,   192,     0,
     192,   192,     0,   189,   692,   189,     0,   698,     0,     0,
     785,     0,   821,   182,     0,     0,   182,     0,     0,     0,
     831,   182,   834,   835,   182,   837,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   861,
     864,   865,     0,   182,     0,     0,     0,   880,     0,     0,
     179,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1171,  1001,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,    88,     0,     0,  1012,  1013,
     179,     0,     0,     0,  1148,   915,   917,   179,   171,  1258,
    1368,  1367,  1369,  1359,  1358,  1360,  1350,  1349,  1351,  1383,
       0,  1393,  1424,     0,     0,  1419,  1418,   262,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   302,     0,     0,
     328,   339,   182,   450,   454,   472,   474,     0,   482,   517,
     171,     0,     0,     0,     0,     0,     0,   171,  1033,  1041,
    1043,  1042,  1046,  1047,  1048,  1049,  1053,  1060,  1061,  1062,
    1063,  1066,  1067,  1071,   179,   182,   179,  1078,   179,  1079,
    1083,   179,  1093,   179,   171,     0,   171,     0,   588,     0,
     663,   674,   192,   189,   707,   766,   189,     0,   772,   189,
     781,   192,   192,   192,   192,   192,     0,   192,   192,   189,
     192,   192,   192,   192,   192,     0,   192,   192,   189,   192,
     192,   192,   192,   192,     0,   192,   192,   189,   192,   722,
     723,   724,   725,   727,   189,   730,   731,     0,   192,   192,
     751,   752,   753,   754,   756,   189,   759,   760,     0,   192,
     694,   189,   790,   791,   171,   823,     0,   182,   825,     0,
     171,     0,   832,   836,   171,     0,   845,   846,   847,   848,
     852,   853,   849,   850,   851,     0,     0,   182,   872,     0,
     171,     0,     0,   885,     0,   182,     0,     0,   182,   182,
       0,   932,     0,   203,   203,     0,     0,   203,     0,   203,
    1127,     0,     0,     0,     0,     0,     0,     0,     0,  1172,
    1150,     0,  1157,  1158,     0,   203,   203,     0,     0,     0,
       0,     0,     0,     0,     0,  1005,     0,     0,     0,  1127,
      89,     0,   203,     0,  1174,   171,   171,     0,   179,     0,
     244,  1426,  1425,     0,     0,   266,     0,     0,     0,     0,
       0,   310,     0,     0,     0,   344,   483,     0,   363,     0,
    1029,     0,   211,     0,  1034,  1072,  1073,  1076,  1077,  1084,
    1094,  1035,   404,     0,   363,     0,   675,   704,   768,   189,
     778,   713,   714,   715,   716,   717,   189,   719,   720,   192,
     742,   743,   744,   745,   746,   189,   748,   749,   192,   733,
     734,   735,   736,   737,   189,   739,   740,   192,   726,   192,
     189,   732,   755,   192,   189,   761,   695,     0,   182,   826,
       0,     0,     0,     0,     0,   854,   855,   870,     0,     0,
       0,   881,   886,   887,     0,   895,   896,   888,   182,     0,
     204,  1127,  1127,    88,     0,  1127,     0,  1127,   977,   171,
       0,     0,     0,     0,     0,     0,     0,  1149,     0,     0,
    1127,  1127,    88,     0,     0,  1127,  1127,     0,     0,  1127,
    1008,  1006,  1007,   984,  1127,  1127,  1174,  1190,     0,  1139,
    1137,  1176,     0,     0,     0,     0,   268,   300,   301,     0,
       0,     0,   299,     0,   363,   364,   366,   365,   415,     0,
       0,   212,   214,   213,  1031,  1032,   363,   417,     0,   769,
     192,   721,   192,   750,   192,   741,   728,   192,   757,   192,
       0,   822,   182,   182,     0,   182,     0,   182,   182,     0,
     182,     0,  1127,   990,   986,  1127,     0,   991,     0,   985,
    1127,     0,  1152,     0,  1155,  1195,  1156,  1154,  1151,     0,
     988,   987,  1127,     0,     0,   982,   980,  1127,   171,   981,
     983,   989,  1190,  1134,     0,     0,  1175,  1188,  1177,  1257,
       0,     0,   308,   309,   307,   329,   332,   330,     0,     0,
     416,  1028,   171,   418,   634,   718,   747,   738,   729,   758,
     182,   824,   830,     0,   844,   841,   871,   876,     0,   891,
       0,   995,   979,    88,     0,   993,     0,  1153,     0,   978,
      88,     0,   994,     0,  1135,  1192,  1194,     0,  1187,     0,
       0,     0,     0,     0,     0,   211,     0,   827,   171,   842,
     873,   905,  1127,     0,  1196,     0,  1127,     0,   182,  1193,
    1189,   267,     0,     0,     0,     0,     0,  1030,   801,   171,
     828,   843,   171,   874,   997,     0,  1127,   996,     0,     0,
     269,   322,     0,   321,     0,   829,   875,    88,   998,    88,
    1127,   320,   319,  1127,  1127,   992,  1000,   999
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1616,   179,   161,  1051,  2759,  2760,   478,   479,
     480,   481,   162,   163,   164,   806,   730,    99,   943,   501,
    1395,  1911,  1547,  1562,  1543,  2155,  2871,  1613,  2934,  1785,
     383,   903,  1374,   887,   890,   893,   908,    68,   407,   413,
     417,   420,    73,   423,    80,   439,   435,   429,   446,    90,
     456,   100,   107,   462,   465,   467,   535,  1004,  1882,   469,
     472,   114,   488,   165,   167,  2928,   183,   185,   230,  1046,
    1096,   524,   993,   526,   536,   996,  1001,   538,   540,  1007,
     543,  1009,   555,  1012,  1014,   558,   562,   566,   568,   571,
     575,   611,   607,  1462,   589,  1032,  1037,  1029,  1450,  1043,
     592,   619,   628,  1054,   633,   638,   630,   603,   599,   643,
     652,  1091,  1526,  1083,  1085,  1087,  1093,   657,  1098,   233,
     659,  1982,   252,   662,   664,   668,   673,   681,   270,  1536,
     696,   293,   739,  1552,   741,   749,  1155,  1570,  1150,  2043,
    1582,  1580,  2045,  1151,  1572,  1574,   755,   758,   753,   295,
     303,   305,   797,  1233,  1639,  1222,  1738,  2184,  2199,  1237,
    1241,  1231,  1078,  1507,  1511,  1519,  1521,  2508,   311,  1250,
    1253,  1261,  2739,  2740,  2741,  2509,  2907,  2908,  1283,  1289,
    1292,  2996,  2997,  2993,  2994,  3045,  2742,  2743,   286,   319,
     327,   335,   821,   816,   340,   345,   347,   831,   838,  1318,
    1323,   897,   884,   353,   321,   262,   258,   357,   845,   364,
     879,   854,   869,   870,  1360,  1355,  1804,  1345,  1826,  1798,
    1838,  1834,  1794,  1820,  1816,  1790,  1812,  1808,  1349,   874,
     856,   370,   371,   387,  1381,   390,   396,   920,   923,   917,
     398,   401,   928
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2829
static const yytype_int16 yypact[] =
{
    5290,   119,    76,    41, -2829, -2829,  1264,  -193,   906,  1086,
    1439,   507,  2893,   120,   380,   147,  1032,    99,  5507,    85,
    1457, -2829,   134,    -5,   390,  1419,   247,   962,  1061,   -44,
      20,   273,   427,   528,   264,   268,   861,  3519,   179,   924,
     553,   536,   427, -2829,   397,    32,    58, -2829,   533,   596,
     780, -2829,    33, -2829,   114,   516,   459,   140,   643,   136,
     172,   449,   749,   767,   143,   772,    -1,   969, -2829, -2829,
   -2829,  1075,   896, -2829,   335,    91,   380,    23,   739,   614,
   -2829,   781,   896, -2829, -2829,   896,   896,   558,   779,   896,
   -2829, -2829, -2829, -2829,   896, -2829, -2829, -2829, -2829, -2829,
   -2829,   204,   795,   770,   849,   889,   587, -2829,   896,  1480,
     896,   896,  1346,   896, -2829, -2829, -2829,   689, -2829, -2829,
   -2829, -2829,  4153, -2829, -2829, -2829, -2829, -2829, -2829,   896,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829,  1509, -2829,   896, -2829,   908, -2829, -2829,   380,
     380,   380,   380,   380,   380,   380,   380,   380,   380, -2829,
   -2829, -2829, -2829, -2829,   803, -2829,   863,  1868,   816,   159,
     640,   771,   556,  3827,   648,  4860,  4802,   955,  4153,  2236,
   -2829,   971,  -119,   922,   993,   913,   400,   430,   996,   608,
    1045,   236,   427,  1611, -2829,   732,  1001, -2829,   825,   774,
     482, -2829,   271, -2829,   511, -2829,     8,  1009,    40, -2829,
   -2829,  4958, -2829, -2829, -2829,  1038,  1034,  1077, -2829, -2829,
   -2829, -2829,   538, -2829, -2829, -2829, -2829,   494, -2829, -2829,
    4958,  4097, -2829,  1108, -2829,    18,  4958,  1112, -2829,    51,
    4958,  1124, -2829,    56, -2829,  1131,  1126,    86, -2829,   896,
   -2829,  1137,  1716,  2135, -2829,  1140, -2829, -2829, -2829, -2829,
    1145, -2829, -2829,   896, -2829,   380, -2829,   290,  1203,   473,
    1006,  1214,    47, -2829, -2829, -2829,  1217,  1226,   380,   380,
     896,   896, -2829, -2829,  1228, -2829, -2829, -2829, -2829, -2829,
   -2829,  2711,  2135, -2829,  1235,    11,   896,  4958,   896, -2829,
    4958, -2829,  1241, -2829, -2829, -2829, -2829, -2829,   896,   155,
     380,  1219,   896,  1509,   896, -2829,  1220, -2829,  5508, -2829,
   -2829,   844,  1244,  1247,   896, -2829,  1260, -2829, -2829,   -63,
    1268,  4958,  1271, -2829,  1494,   896,  1174, -2829,   833,  1150,
    1864,   509,  1277,   638, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829,  1302, -2829,    66,   198,   201,   269,   584,   896,    81,
    1308,   896,   278, -2829,   896,  1015,  1313, -2829,   896,   896,
   -2829,    27,    94,   110,  1316,  1509, -2829, -2829, -2829,  1082,
     896, -2829, -2829, -2829, -2829, -2829,   896, -2829,  1332,  1349,
   -2829,   896,  1341, -2829, -2829, -2829, -2829, -2829, -2829,   896,
   -2829, -2829,   896, -2829, -2829,   572,   572, -2829,  1382, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
    1167,   896,   896,  1387,  1392,  1394, -2829, -2829,   896,   896,
     896,   896,   896,   896,  1399,   896, -2829,  1400,   896, -2829,
    1403, -2829, -2829,  1406, -2829, -2829,   965, -2829,  1407, -2829,
    4958,  1411, -2829,   896, -2829, -2829, -2829,   896,  1413,  1409,
    1409,  4958,   896,   896,   896,   896,   896,   896, -2829,   896,
    4153,  1480,   896,   896, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829,  1480,   896, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829,  1418, -2829,  1136,    60, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829,   -70, -2829, -2829,
   -2829,  1248, -2829,   741,    55,    55, -2829, -2829, -2829,  1434,
   -2829,  1436, -2829, -2829,   386, -2829,  1246, -2829, -2829, -2829,
   -2829,  1256, -2829, -2829,  1509, -2829,   896,   896, -2829,  4958,
    4958,  1509, -2829, -2829,  1509, -2829, -2829, -2829, -2829,  1509,
   -2829, -2829,  4958,  1509,   896, -2829, -2829,  4958, -2829,  1443,
     585,  1230,    17, -2829, -2829,  1231,  4958,    54, -2829, -2829,
   -2829, -2829, -2829, -2829,  1447,  1451, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829,  1444, -2829,  1237, -2829,   -35, -2829,
     896, -2829, -2829,  1455,  1455, -2829, -2829,  1455,  1455, -2829,
    1646, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829,     8, -2829, -2829, -2829, -2829, -2829,
   -2829,  1259,  1261, -2829, -2829,  1416,  1422,  1423, -2829, -2829,
      75,  1221, -2829,   896,  1473,  1251,  5508, -2829,  1509, -2829,
   -2829,  1475, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829,  4958,  4958,  4958,  4958,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,  1483, -2829,
   -2829, -2829, -2829,  1489,  1492,   380, -2829, -2829,  1500,  1502,
    1288,   896, -2829,  2135, -2829,  1512, -2829, -2829, -2829, -2829,
   -2829,   896, -2829,   380, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829,  1125,  1427,  1428,  1431, -2829,
    1523, -2829,   331,  1440,   455,   460,  3945,   522,  1526, -2829,
    1532, -2829,  1537, -2829,    84, -2829,  1542,  1545, -2829,  1538,
   -2829, -2829, -2829,   896, -2829,  5508,  4706,  1982,   745,  1548,
     479,  1449, -2829, -2829, -2829,  1557,   123,    37,  1591,  1592,
       6,   896,   385,   568,   130,  4958,   380,  2260,    95,    36,
     105,   302,    22, -2829,  1580,  1583,  1599, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829,   896, -2829, -2829,
   -2829, -2829,   896,   896,   896,   896, -2829, -2829,   896,  1509,
     896, -2829,   896,  1480,   896,  1601,  1509, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829,  1602,   475,   733, -2829, -2829,
   -2829,  1604, -2829, -2829, -2829, -2829,  1515, -2829,  1607,  1615,
    1536,  1541,  1543,  1634, -2829,  1635, -2829,  1637,  1552,  1642,
     530,   540,   660,   838,   686,   562,   874,  1648,   876, -2829,
   -2829,  1649,  1650,  1655, -2829, -2829,  1657,  1658,  1656, -2829,
    1660, -2829, -2829, -2829, -2829,  1669, -2829, -2829,  1670, -2829,
   -2829,  1671, -2829, -2829, -2829, -2829, -2829, -2829, -2829,   896,
     346,   896, -2829, -2829, -2829, -2829,   896,   896, -2829,   896,
     992,   896,   896, -2829,  5508,  1586,  1661, -2829,  1198,  1674,
   -2829,  1208,  1680, -2829, -2829,   -22,   896,   896, -2829,  1675,
   -2829, -2829,  1682,  1357,   896,  1684,   679, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829,  1692,  1694,   896,   896,   896,   896,   896,  1699,   896,
    1700,   896,  1702, -2829,   380,  1706,  1717,  1509,  4958, -2829,
   -2829, -2829, -2829, -2829,  1509, -2829, -2829,   896,   896,   896,
    4958,   896,  1480,   896, -2829,   896, -2829, -2829, -2829, -2829,
   -2829,  1729,  1730, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829,   648, -2829,   896, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829,  4958,   896,  1509,
    1509,   -22,   -22,   -22,  1509,  1480,   896,  1509, -2829, -2829,
   -2829,   896, -2829,   -35,  1540,  1731,  1737, -2829, -2829,  1509,
   -2829,  1570,  1573, -2829,  1746,  1750, -2829,  1757,  1305,  1723,
    1728, -2829,   896, -2829, -2829, -2829, -2829, -2829,  4711,   -16,
    1459,   963, -2829, -2829, -2829, -2829,   896,   552,   785, -2829,
    1488, -2829,  2260,  1491,   662,  1460,   126, -2829, -2829,   896,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,  1464,
   -2829, -2829, -2829, -2829,   896,  1776, -2829, -2829, -2829, -2829,
     -22, -2829, -2829, -2829, -2829, -2829,  1778,  1779,  4888, -2829,
   -2829,  1780,  1781,   896, -2829, -2829, -2829, -2829,  1788,  1789,
    1790,   420,   420,   -66,  1801,  1802,  1805,  1807,  1807,  1807,
    1506,  1518,  1808,  1818,  1819,    72,    72,   -66,  1821,  1824,
     -66,  1828,  1829,  1830,  1833,  1830,  1833,  4201,  1834,  1835,
   -2829, -2829,  1830,  1833,   487, -2829,  1837,  1838,  1839,  1841,
     420,   -66,  1845,  1847, -2829,  1850, -2829, -2829,  1509,   943,
    1037,  1578,  1585,  1593,  1749,  2735,  1605,  1862,   294,    46,
    1760,  1690,  1876,  1207,  1842,  1617,  1620,  1773,  1883,  1652,
      35,   100,   -98,   -91,  4958,  2260,  1849,   485,  1622,  1654,
    1889,    44, -2829, -2829,    89,  1891,  1896, -2829, -2829, -2829,
    1897,  1659,   127,  2260,  1668, -2829, -2829, -2829,   380,  1903,
    1904,   896, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829,     9, -2829,  3512,  1905, -2829, -2829, -2829,   896, -2829,
     896, -2829, -2829, -2829, -2829,   896,   896,   896,   479,  4958,
   -2829,  1908,  1335, -2829, -2829,   896, -2829, -2829,   896,  4958,
     896, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829,   380,   896, -2829,   896,
     479,  1909,  1910, -2829, -2829, -2829, -2829,   896,   896, -2829,
     380, -2829, -2829, -2829,   226,  1911,  1912, -2829, -2829, -2829,
   -2829, -2829,   896,   896, -2829, -2829,  1480,   896,   896, -2829,
   -2829, -2829, -2829,  1915,   896, -2829,   896,  1806, -2829,   896,
   -2829,   896,  1810, -2829,  1916, -2829,  1100,  1100,   891,   923,
     928,  1100,  1922, -2829,   950, -2829,   952,   968,   984,   988,
   -2829,  1925,  1926,   991,  1917, -2829,  1927,  1930,  1933, -2829,
     997,  1055,  1935,  1936,  1934, -2829, -2829,  1940,  1945,  1950,
   -2829,  1100,  1100,  1100, -2829, -2829, -2829,   896, -2829, -2829,
   -2829, -2829,   896, -2829, -2829, -2829,   896, -2829,   896,  1096,
    4958, -2829,   896, -2829,  1509, -2829,  5508, -2829, -2829,  1951,
   -2829, -2829,  1954, -2829, -2829, -2829, -2829,  1944,  1219, -2829,
     896,  1949,   896,   896,   896,   752, -2829,  1958,   896,   896,
    1960,   896,   896,  1962,   896,  1963,   896,   210,  1965,   380,
     380, -2829,  1509,   896,  1961,  1971,  1974,  1509,  4958, -2829,
     896, -2829, -2829, -2829,   896,   896,   896,  1509,  4958,   -22,
   -2829, -2829, -2829, -2829,  1480,   896,  1976,   -22,   896,   600,
   -2829,  1978, -2829, -2829,   644,  2968,   896, -2829,   896,  1977,
    1985,   896, -2829, -2829, -2829,  1981,  1375,  4153,  1722,  1724,
    1726,    29,  4958,  1727, -2829,   395,    64,    49, -2829,  1733,
    1734,   101, -2829, -2829,   547,  1814,   362,  1742,   -64,  2260,
     -30, -2829,  1984,  1720, -2829,   778, -2829, -2829, -2829, -2829,
    2260,  1769,     4, -2829, -2829, -2829, -2829, -2829,   896, -2829,
     896, -2829, -2829,   896,   896, -2829,   896, -2829,   896, -2829,
   -2829, -2829, -2829,  1785,   896, -2829, -2829, -2829,   896,   241,
   -2829, -2829, -2829, -2829,  2002,  2003, -2829,   896,   420,   420,
     420, -2829, -2829, -2829, -2829, -2829, -2829,  2007,   420,   420,
     420,  1170, -2829, -2829, -2829, -2829,    72,   420,   420,   420,
   -2829, -2829,   420,   420,  2010,   420,   420,  2012,    72,  1177,
   -2829,   632, -2829,  1255, -2829, -2829, -2829,  2013,  2014,  2015,
   -2829,   715, -2829,   921, -2829, -2829,  1721,  2018,  2019,  2020,
      72,    72,   -66,  2022,  2023,   -66,  2024,  2032,  2038,   420,
     420, -2829,  2039,   420,   420, -2829,  2040, -2829, -2829, -2829,
   -2829, -2829, -2829,   380, -2829, -2829, -2829,  4153,  1195,   896,
    1330,  1666,   -42, -2829, -2829, -2829,   -40, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,  2041,
     896, -2829,   380,  2042,   896,  4958,   380,   380,  2043,  1687,
    1752,  1763,   299,   421,  1784,   496,  1701,  1707,  2049,  2050,
    2051,  2053,  2735,  2054,  2055,  2057,  1725,  1732,  1358,  2059,
     896,  1362,  1794, -2829, -2829,   380,  4958, -2829, -2829,  4958,
     896,    12,  2061,  4958,   896,  1509,   380, -2829,  2064,  4958,
    4958,   896, -2829, -2829, -2829,   380,   380,  4958, -2829, -2829,
   -2829, -2829, -2829, -2829,  4958,   896,   380, -2829, -2829, -2829,
     896, -2829, -2829,  2066,   896,  1809,   284,   896,  1813,   896,
     607,   896,  2068,   896,  1823,  1826,   896,   896,   896,   896,
     896,   896,   896,   896,    25,   896,   896,  1840, -2829, -2829,
     896,   896,   896,   896, -2829,  4958,  1509,  2074,  2076,  2077,
     896,   896,  1509, -2829,   896,   896,   896,  4958,   479, -2829,
     896,   896, -2829, -2829, -2829,  2080, -2829, -2829, -2829, -2829,
   -2829, -2829,  2082,   896,   896, -2829,   896,   896, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829,  2083,  2088,  2090,
   -2829,  2091,  2092,  2094, -2829,  2095,  2096,  2098, -2829, -2829,
    1100,  2100,  2101,  2099, -2829,  2102,  2103,  2105, -2829,  2106,
    2116,  2118, -2829,  2119,  2121,  2123, -2829,  2124,  2125,  2127,
   -2829,  2128,  2130,  2134,  2136,  2131, -2829,  2138, -2829, -2829,
   -2829,  2139,  2141,  2143, -2829,  2144,  2145,  2147, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,   896, -2829,
     896,   896, -2829, -2829,   896, -2829,  1509, -2829, -2829,  1219,
     896,  1509,   896,   896,   896, -2829,   896,   896,  2148,   896,
   -2829,   896,   896,  2150,   896,   896,  2152,   896,  2153,   896,
   -2829, -2829,  2155,  4958, -2829,  2156, -2829,   896, -2829, -2829,
   -2829, -2829,  1509, -2829,  1117,   896,  1117,   -22,  1509,  4958,
     896,   896,  2158, -2829, -2829, -2829,   896, -2829, -2829, -2829,
   -2829, -2829,  4958, -2829,  4958,   896, -2829, -2829,   -35,  2160,
    2161,  2162,  2164,  2176,  4930,  1509, -2829,  4958,  4958,  4958,
    4153,  4958,  1509,  4958, -2829, -2829,  4958, -2829, -2829, -2829,
   -2829,  4153,  4958,  4958,  4958,  4153,  4958, -2829,  4958,  4958,
     896, -2829, -2829,  4958,  4958,  4958,  4958, -2829, -2829,  4958,
    4958, -2829, -2829, -2829, -2829,  4958,  4958, -2829, -2829,  2000,
   -2829, -2829, -2829, -2829,   896,   896, -2829, -2829,  2159,   896,
   -2829, -2829,  2189, -2829, -2829,   896, -2829, -2829, -2829,   420,
   -2829, -2829, -2829,  2191,  2195,  2197, -2829, -2829,   -66,  2199,
    2203,  2204,   420, -2829, -2829, -2829, -2829, -2829,    72, -2829,
   -2829,  2206,   420,  2209,  2210,  2211,    72,    72,   -66,  2213,
    2214,  2215,  1827,  2216,  2217,  2219,    72,    72,   -66,  2221,
    2222,   -66,  2223,  2224,  2225,  2227,    72,    72,   -66,  2229,
    2231,  2232,  1317, -2829,  1487, -2829,  1618,  1851,  2233,  2234,
    2240,    72,    72,   -66,  2237,  2243,   -66,  2244,  1907,  2245,
    2246,  2247,    72,    72,   -66,  2249,  2252,   -66,  2253,    72,
   -2829, -2829, -2829, -2829, -2829,  2257, -2829, -2829,  2258,    72,
    2262,  2264, -2829, -2829,   420, -2829, -2829,  2259, -2829,  1509,
   -2829,  4958,   896,   896,  4958,   896,  2268,  1037, -2829, -2829,
   -2829, -2829, -2829, -2829,  2270,  4958,   380,  2272,  4958,  1509,
   -2829, -2829, -2829,  2273,  1037,   896,   896,   896,   896,   896,
     896,   896,   896,   896,  2277,  2280, -2829, -2829, -2829, -2829,
    2281, -2829, -2829, -2829,  2284,  2285, -2829, -2829, -2829,   896,
    4958,   896,  2286,  1037,   380,  1509,  1509, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829,  1509,   896,  1480,
   -2829, -2829,  1509,  1509,   896, -2829, -2829,  1509,  1509, -2829,
   -2829, -2829, -2829,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896, -2829, -2829,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   804,  2288,   896, -2829,
     896,   896,   896,  2293,  2295, -2829, -2829,  1509,   -22, -2829,
    2296,  2299, -2829, -2829,  1480,   896, -2829,  2302,  1509,  4958,
   -2829, -2829, -2829,  2303, -2829, -2829, -2829, -2829,  1100,  1100,
    1100,  1100,  1100,  1100,  1100,  1100,  1100, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829,  1037,   896, -2829,   896, -2829,
     896,  1509,   896, -2829,  1480,   896, -2829,   896, -2829,  2129,
    2306,  2310,   896,   896, -2829,   896,   896,  2312,   896,  2304,
     896,  2314,  1509,  2315,  4958, -2829, -2829,   896, -2829,   896,
   -2829,   -22,   644,   896,  2316, -2829,   896, -2829, -2829,  4153,
   -2829,  2317,  2318,  2321,  2322,  2323,  4958,  1509, -2829,   644,
     644,   644,  1509, -2829,   644,   -22,   644,   644,  1509, -2829,
     644,   644,   644,  1509, -2829,   644,   644,  1509,  4958,  1509,
     644,  1509,   644,   644,  1509,   644,  1509,  4958, -2829, -2829,
    2325,  4153,  2326,   896, -2829, -2829, -2829, -2829,  2328, -2829,
   -2829, -2829, -2829,   420,    72, -2829, -2829, -2829, -2829, -2829,
   -2829,  2330, -2829, -2829,    72,    72, -2829, -2829, -2829, -2829,
   -2829,  2331, -2829, -2829,  2332,    72, -2829, -2829, -2829, -2829,
   -2829,  2336, -2829, -2829,    72,  2337,  2339,  2340,    72,    72,
     -66,  2342,  2343,  2346,  2347,  2349,  2350,    72,    72,   -66,
    2344,  2352,  2355,  2356,  2357,  2358,    72,    72,   -66,  2360,
    2362,  2363,    72,   420,   420,   420,   420,   420,  2366,   420,
     420,  2367,    72,    72,   420,   420,   420,   420,   420,  2368,
     420,   420,  2370,    72, -2829,    72,  2372, -2829,  2373,  2374,
   -2829,  5508, -2829,   644,  2376,  4958,   644,   896,  4958,  2377,
   -2829,   644, -2829, -2829,   644, -2829,  4958,  2378,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896, -2829,
   -2829, -2829,  4958,   644,   896,  4958,  2379, -2829,  1480,  1480,
     -22,  4958,  1480,  1480,  4958,  4958,  1480,  1480,   896,   896,
     896,   896,   896,   896,  1037,   896,   896,   896,  1691, -2829,
    1037,   896,   896,   896,   896,  1037,   896,   896,   896,   896,
     896,   896,  1509,   896,  1771,  1037,   896,   896, -2829, -2829,
     -22,   380,  4958,  4958, -2829, -2829, -2829,   -22,  1509,  2380,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
     896, -2829, -2829,  1480,   896, -2829, -2829, -2829,  1183,  2381,
    2382,  2384,  2385,   896,   896,  2386,   896, -2829,  2388,  1117,
   -2829, -2829,   644, -2829, -2829, -2829, -2829,  2389, -2829, -2829,
    1509,  2391,  2394,  2392,  2395,  4958,  2396,  1509, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829,   -22,   644,   -22, -2829,   -22, -2829,
   -2829,   -22, -2829,   -22,  1509,  2397,  1509,  2399, -2829,   896,
   -2829, -2829,   420,    72, -2829, -2829,    72,  2400, -2829,    72,
   -2829,   420,   420,   420,   420,   420,  2401,   420,   420,    72,
     420,   420,   420,   420,   420,  2402,   420,   420,    72,   420,
     420,   420,   420,   420,  2403,   420,   420,    72,   420, -2829,
   -2829, -2829, -2829, -2829,    72, -2829, -2829,  2404,   420,   420,
   -2829, -2829, -2829, -2829, -2829,    72, -2829, -2829,  2406,   420,
   -2829,    72, -2829, -2829,  1509, -2829,  4958,   644, -2829,  2407,
    1509,   896, -2829, -2829,  1509,   896, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829,   896,   896,   644, -2829,  2408,
    1509,   896,  1480, -2829,  2409,   644,   896,  1480,   644,   644,
    4958, -2829,   896,  2411,  2411,   896,   896,  2411,  1037,  2411,
   -2829,  4958,  1754,  1759,  1859,  1901,  1931,  1952,  1996,  1691,
   -2829,  2028, -2829, -2829,  1037,  2411,  2411,   896,   896,  1037,
     896,   896,   896,   896,   896, -2829,  1480,   896,  2413, -2829,
   -2829,   896,  2411,   380,    26,  1509,  1509,   380,   -22,  2415,
   -2829, -2829, -2829,  2417,   896, -2829,  2419,  2416,  2421,  2422,
    2423, -2829,  2424,  2429,   896, -2829, -2829,  2431,     5,  4958,
   -2829,  2432,   219,  4958, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829,  2435,     5,   896, -2829, -2829, -2829,    72,
   -2829, -2829, -2829, -2829, -2829, -2829,    72, -2829, -2829,   420,
   -2829, -2829, -2829, -2829, -2829,    72, -2829, -2829,   420, -2829,
   -2829, -2829, -2829, -2829,    72, -2829, -2829,   420, -2829,   420,
      72, -2829, -2829,   420,    72, -2829, -2829,   896,   644, -2829,
    4958,  4958,   896,  4958,   896, -2829, -2829, -2829,  4958,  4958,
     896, -2829, -2829, -2829,  4958, -2829, -2829, -2829,   644,  2436,
   -2829, -2829, -2829,  1037,   896, -2829,  2438, -2829, -2829,  1509,
    2735,  2439,  2441,  2442,  2443,  2444,  2446, -2829,   380,  2447,
   -2829, -2829,  1037,   896,  2448, -2829, -2829,   896,  4958, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829,    26,  1902,  2260, -2829,
   -2829, -2829,   380,  2449,  2451,  2452, -2829, -2829, -2829,  2454,
    2455,  2456, -2829,   125,     5, -2829, -2829, -2829, -2829,  2457,
    4958, -2829, -2829, -2829, -2829, -2829,     5, -2829,  2458, -2829,
     420, -2829,   420, -2829,   420, -2829, -2829,   420, -2829,   420,
    5508, -2829,   644,   644,   896,   644,  2459,   644,   644,   896,
     644,   896, -2829, -2829, -2829, -2829,  2460, -2829,   896, -2829,
   -2829,  2475, -2829,  2478, -2829, -2829, -2829, -2829, -2829,   896,
   -2829, -2829, -2829,  2480,   896, -2829, -2829, -2829,  1509, -2829,
   -2829, -2829,  1902, -2829,  1919,  2047,  2260, -2829, -2829, -2829,
    2483,  2486, -2829, -2829, -2829, -2829, -2829, -2829,  1065,  1065,
   -2829, -2829,  1509, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
     644, -2829, -2829,  2488, -2829,  4153, -2829, -2829,  2497, -2829,
    1037, -2829, -2829,  1037,   896, -2829,  2500, -2829,   896, -2829,
    1037,   896, -2829,  4958, -2829,  1919, -2829,   380, -2829,  2501,
    2502,   896,   896,   896,   896,   219,  2507,  4153,  1509, -2829,
    4153, -2829, -2829,   896, -2829,  2515, -2829,   896,   644, -2829,
   -2829, -2829,  2516,  2517,   896,  2520,   896, -2829, -2829,  1509,
   -2829, -2829,  1509, -2829, -2829,  2522, -2829, -2829,  2523,  2524,
   -2829, -2829,  2525, -2829,  2526, -2829, -2829,  1037, -2829,  1037,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2829, -2829,    -3, -2829,   663, -1026, -1744, -1130,  1968, -2829,
     898,  -458,  1753,   -54,    28, -2829,  -302, -1885,  1831,  2060,
   -1004,   337,  -972,  1110,  2056, -2829,  -909, -2829,  -828, -1315,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829,  -556,  -532, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2724, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829,   649, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829,   242, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829,  -431,  -381, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -1660, -2829, -2829, -2829, -2829, -2829,
   -2829,  -777, -2829, -2829, -2829, -2829, -2829, -2829,   111, -2829,
   -2829, -2829, -2829,  -326,  -783, -1548,  -463, -2829, -2829, -2829,
   -2829, -2829,  -468,  -460, -2829, -2829, -2828, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829,  1672, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829, -2829,
   -2829, -2829, -2829
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1396
static const yytype_int16 yytable[] =
{
      72,   395,  2130,  1005,  1276,  1249,  1252,  1449,   113,  2297,
     798,  2299,  1786,   182,  1712,   800,  1799,  1441,  1442,  1443,
    1969,  1034,  1244,   683,   115,   296, -1173,  1293,    69,    70,
    2196,   914,   415,   984,   332,    69,    70,   384,  2925,  2148,
    1617,  1280,   356,   987,    69,    70,  1845,  1846,  1847,  1694,
    1930,   389,   756,  1497,   400,   655,   689,   406,  1040,   255,
     694,   412,  1675,  2149,   419,   334,  2150,   118,   422,   424,
    1941,  2098,   434,  2101,  1646,   441,   445,  2151,  1238,   448,
    2937,  1393,   449,   450,   358,   115,   458,    60,  1560,   297,
     699,   459,  1938,  1088,    69,    70,  1529,  1158,   918,   899,
     836,   881,  2152,    69,    70,   473,   477,   482,   483,   487,
     489,  1049,  1958,   298,   921,  1545,  1696,    69,    70,   590,
    2153,  1284,  1945,  1954,    81,  1498,   493,  1294,    69,    70,
      69,    70,    61,    69,    70,  1295,  1277,  1677,   115,  1235,
     115,   403,  1522,    69,    70,   994,    69,    70,  1159,   120,
     492,   115,    62,   349,   166,  1499,  1239,  1959,    69,    70,
    1683,   502,    69,    70,  1702,  1564,  3046,  1254,  1567,   385,
     991,  1255,   299,   231,   437,    69,    70,  2099,   359,  2102,
    1684,   882,    63,   115,   336,   684,   534,  1955,    59,  1602,
     232,   556,   169,  1681,   360,   170,   813,  1647,  1041,  1035,
    3010,  1682,   115,   253,    64,   115,  1002,   995,    65,   460,
     120,  2926,  3013,   294,  1278,  1939,   700,  3069,   690,   438,
     591,  1960,   557,    66,   565,   837,   570,   574,   171,  1546,
    1523,  1763,   801,  2100,   405,  2103,   172,   610,  1285,  1050,
     802,   803,  1764,  1245,  1500,  1678,   123,  1561,   354,  1256,
     126,  1003,  2931,  1240,   653,   124,   125,   184,  1880,  1956,
     656,  1980,   271,   120,   386,   120,   701,   885,  1394,   992,
     888,   695,  1703,   115,   814,  1257,   120,   804,   304,   915,
     733,    69,    70,   613,   826,  1961,  1676,    69,    70,  1515,
     361,  1286,   639,   883,  1931,   735,  1160,   763,   764,   685,
     430,  1501,   173,  1089,   362,   614,   115,   123,   120,   900,
     256,  1279,   416,   807,  1942,   809,   124,   125,  2927,  1695,
    2117,  1642,   615,   620,  1281,   812,   815,   120,   818,   822,
     120,   824,   691,  1246,  3005,   257,  1131,   322,   891,   425,
    1697,   834,  1287, -1173,  1132,  1133,  1258,   757,  1713,   128,
     115,   844,   846,   916,  1282,   300,   686,  1296,   355,   820,
     123,   174,   123,  1036,  2197,  1309,  1946,    71,   527,   124,
     125,   124,   125,   123,   528,   898,  1648,  1161,   905,   907,
    1042,   909,   124,   125,   115,   912,   913,  1090,  1162,  1970,
     175,   805,   176,   901,  1940,  1134,   927,   929,   120,   158,
    2154,  1114,    67,   930,   301,   123,   159,   160,   933,   935,
     128,  1236,  1686,   919,   124,   125,   936,   529,   640,   937,
     177,   616,  1934,  1163,   123,  2932,  1679,   123,   431,   922,
    1706,   120,  1288,   124,   125,  1899,   124,   125,   947,   948,
     388,   363,  2119,  1903,   530,   952,   953,   954,   955,   956,
     957,  1224,   959,  1704,   259,   961,  1259,   461,   736,   737,
     158,   350,  3006,   128,   596,   128,   399,   159,   160,   411,
     969,  1745,   432,   433,   970,   120,   128,  1643,   742,   975,
     976,   977,   978,   979,   980,  2237,   981,   306,   477,   985,
     986,  2097,  1586,   178,   600,   123,   531,  1225,   477,   988,
    1587,  1588,  1981,  1757,   124,   125,   532,  3007,   128,   120,
      69,    70,  1881,   158,   337,   158,  1314,  2122,   983,  2114,
     159,   160,   159,   160,  1429,   338,   158,   128,   123,   906,
     128,   391,  2933,   159,   160,  2175,   641,   124,   125,   392,
     532,   533,  2143,  1135,  1136,  1224,   635,  1143,   108,   644,
     426,  1589,  1145,  1017,  1018,    69,    70,   346,   158,  1644,
     645,   617,   451,   738,  2118,   159,   160,  1445,   642,   109,
     307,  1026,   123,   871,  1947,   312,   618,   158,  1935,   320,
     158,   124,   125,   665,   159,   160,   365,   159,   160,  1030,
     646,  1225,   470,  1541,  1315,   313,   894,   314,   128,   743,
     372,  1010,  1099,   938,  1905,   427,   123,  1052,  1031,  1645,
      69,    70,   428,   608,  1152,   124,   125,    69,    70,   471,
    2075,  1290,  1336,  2078,  1137,  1542,   110,  1688,  1144,   348,
     666,   128,  1338,  1146,  1224,  1138,  1139,  2022,   366,   872,
    1140,   744,   745,   402,   118,  2023,  2024,  1226,   158,   367,
    1094,    69,    70,  1951,  1350,   159,   160,   669,  1372,   118,
    1936,  1952,  1079,  1227,  1228,    69,    70,   118,  1908,  1909,
    1141,  1011,   939,  1248,   647,   128,   609,   168,   180,   308,
    1225,   158,   368,  1404,  2784,   254,  2120,   746,   159,   160,
    1405,  1316,  1149,   302,   309,  1153,  2025,   442,  1113,  1590,
    1591,   339,   876,  1337,  1251,   260,  1957,   118,  1116,   128,
    1937,  1168,   351,  1339,  1575,   597,   397,  1967,   895,   648,
    2047,  1584,   404,   111,   857,   158,   452,   453,  2048,  2049,
     261,   315,   159,   160,  1948,  1351,  1689,   352,   670,   436,
     598,  1226,    69,    70,   541,   601,   747,  1910,   408,  1217,
    1346,   940,   667,   542,   409,    69,    70,  1227,  1228,   158,
    1167,  2123,  1229,  1230,   310,  1576,   159,   160,   877,  1317,
     602,   410,  1585,   748,  1319,   454,  1218,   414,  1247,  2050,
    1592,  1260,   671,   457,   393,  1509,   447,   394,    69,    70,
     859,  1593,  1594,   649,   316,   896,  1595,   636,  1949,   463,
    1690,  1512,   464,   650,  1300,  1964,   443,    69,    70,  1301,
    1302,  1303,  1304,   873,  1868,  1305,  1347,  1307,   373,  1308,
     477,  1310,   637,   116,   998,   672,  1596,   126,   112,   374,
    1226,   455,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   126,   317,  2026,  2027,  1227,  1228,  1769,   941,
     126,   651,  1320,   318,   466,   942,  1229,  1230,  2180,   375,
    1384,   369,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     126,   444,  2310,  2300,   468,  1517,  1371,   848,  1375,    69,
      70,   827,  1341,  1376,  1377,   490,  1378,  1380,  1382,  1383,
      82,   119,   503,  2540,  2541,  2542,  2543,  2544,  2545,  2546,
    2547,  2548,  1219,  1396,  1397,  2028,  2058,  2051,  2052,   514,
    1401,  1402,   515,   999,  2059,  2060,  2029,  2030,  1352,   828,
    1357,  2031,   878,   376,   525,  1229,  1230,    83,   734,  1321,
    1408,  1409,  1410,  1411,  1412,  1787,  1414,   537,  1416,   539,
     440,   761,   762,   849,   867,  1965,   272,  2459,  1342,   964,
     965,  2032,    69,    70,  1424,  1425,  1426,   121,  1428,   477,
    1430,  2219,  1431,  1220,  2467,  2061,  1900,  1791,   377,   567,
    1348,   593,  1795,   817,  1503,    69,  1379,   829,   594,   341,
     604,   850,   851,  1434,  1353,  1436,  1358,   595,  2053,   273,
    1221,  1343,   274,  2486,  1801,  1438,  1805,   576,  1000,  2054,
    2055,  1788,   477,  1446,  2056,    84,  2358,  1322,  1448,  1966,
    1607,   275,  1809,   577,  1435,    69,    70,   886,   889,   892,
      69,    70,   902,  1614,  1615,  1461,  2371,   629,  1813,  1465,
     276,   127,  1817,  1792,  2057,  1823,  2381,   578,  1796,  2384,
     612,  1831,   378,  1508,  1510,  1513,  2391,   277,    69,    70,
     631,  1518,   379,   278,    85,    86,  1524,   579,    69,    70,
    1802,  2428,  1806,   632,  2431,    69,    70,   287,   323,   605,
     634,  1527,  2439,  1579,   380,  2442, -1395,   580,  1810,   181,
    1852,   581,   381,   654,   418,   750,   852,   660,  1608,   663,
    1537,   661,   342,   682,  1814,    91,   688,   830,  1818,  1835,
     382,  1824,    87,    88,   279,   751,   606,  1832,   693,  2965,
     698,   582,   583,  2062,  2063,  2549,   697,   853,  1118,  1119,
    1504,   702,  1344,  1780,  1781,   731,    91,   280,  2982,   732,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,  1354,    89,
    1359,   288,  2878,  1993,  1994,  1836,    69,    70,  1680,  1120,
    2013,  2014,  1609,  1610,   584,  1789,   343,   289,    69,    70,
    2091,  1505,  1387,  1388,  2531,   585,   344,  1611,   740,  1705,
     421,  2903,  1390,  1391,  2064,   752,  1002,   926,  1711,   754,
    2971,   759,    69,    70,   825,  2065,  2066,  1793,  1506,  1659,
    2067,   760,  1797,   765,  1995,  1740,   290,  1741,   116,   324,
     799,  2015,  1742,  1743,  1744,  2773,   811,   325,   832,   326,
      92,   833,  1750,  1612,  1803,  1751,  1807,  1753,   281,  1660,
    2068,  1003,  1661,  1055,   835,  1662,  1056,  1057,  2033,  2034,
     586,   587,  1811,   839,  1755,   841,  1756,   847,   118,    93,
     855,    92,   875,    94,  1760,  1761,   282,   283,  1815,  3062,
    1782,  1783,  1819,   291,  1663,  1825,  3066,  2575,   284,  1767,
    1768,  1833,   285,   477,  1770,  1771,   880,   292,    69,  1460,
      93,  1773,   904,  1774,  2296,   910,  1776,   911,  1777,  2035,
     924,  2594,  1784,  2963,  2964,  1664,   119,  2967,  1665,  2969,
    2395,  2396,  1856,    69,    70,  2094,   931,  1121,  1122,  1748,
    1749,    95,  2980,  2981,    69,    70,   588,  2985,  2986,    69,
      70,  2989,   934,  3103,   932,  3104,  2990,  2991,  1109,  1837,
      69,    70,  2136,  2137,  1848,    69,    70,  2140,  1400,  1849,
    1553,  1554,    95,  1850,  2728,  1851,  1117,   972,   973,  1854,
    2744,  2397,  1996,  1997,    96,  2749,   945,   484,   946,  2016,
    2017,   949,   121,    97,    98,  1860,   950,  1863,   951,  1865,
    1866,  1867,  1869,   958,   960,  1871,  1872,   962,  1874,  1875,
     963,  1877,   966,  1879,  3031,    96,   968,  3032,  1123,   476,
    1887,   474,  3035,   989,    97,    98,  1862,  1893,  2636,  1124,
    1125,  1894,  1895,  1896,  3039,   990,   997,  2645,  1006,  3042,
    1008,   477,  1901,  1013,  1015,  1904,  2654,  1028,  1047,  1263,
    1033,  1038,  1044,  1914,  1291,  1915,  1045,  1048,  1917,  1053,
    1666,   126,  1919,  1998,  1126,   485,   127,  2036,  2037,  1080,
    2018,  1081,  1092,    74,  1999,  2000,   234,  1906,  1095,    75,
    1101,  2019,  2020,    69,    70,  1082,  2714,  1106,   474,   475,
     476,  1084,  1086,  1107,  1667,  1926,  1108,    69,    70,   235,
    2404,  2405,   236,  1097,  1110,  1971,  1111,  1972,  1112,  2001,
    1973,  1974,   263,  1975,  3084,  1976,  2021,  1115,  3087,  1127,
    1128,  1978,    76,  1129,  1668,  1979,  2763,   101,  1130,  2398,
    2399,  1154,  1142,  2767,  1985,   842,  1156,   102,  3098,   237,
    1920,  1157,  1166,   264,   103,   494,   238,  1164,  2038,    77,
    1165,  2406,  3105,  1223,  1232,  3106,  3107,   239,   240,  2039,
    2040,  1234,   486,  1373,   241,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   242,  2041,  1242,  1297,  1243,  2876,  1298,
    2795,    78,  2797,  1299,  2798,  1311,  1313,  2799,  1324,  2800,
    2400,   243,  1326,   843,  2889,  2092,  2093,  2095,  1325,  2894,
    1327,  2401,  2402,   495,  1921,  1922,   265,  1418,  1328,   244,
     245,  2413,  2414,  1329,   104,  1330,   246,  2105,  1331,  1923,
    1332,  2108,  1333,   266,  1334,  2090,    79,  1335,   496,   497,
    1058,  1059,  1356,  1385,  1361,  1362,  2403,   498,   621,  1363,
    1366,   247,  1364,  1365,  1367,  1386,  1060,  2139,  2141,    69,
      70,  2096,  1614,  1615,  1368,  1369,  1370,  2147,  1389,   499,
     622,  2158,  2415,   105,  1392,  1924,  1398,  1399,  2164,   500,
      69,    70,  2113,  1614,  1615,  1403,  1406,   623,  1407,  2407,
    2408,  2492,  2169,  1413,   248,  1415,  1417,  2171,   267,  1061,
    1419,  2173,  1650,  2176,  2177,  1062,  2179,  2181,  2182,   106,
    2185,  1420,  1451,  2188,  2189,  2190,  2191,  2192,  2193,  2194,
    2195,  2198,  2200,  2201,  1432,  1433,  1452,  2203,  2204,  2205,
    2206,  1453,  1651,  1455,  1063,  1652,  1456,  2212,  2213,  2732,
    1457,  2215,  2216,  2217,   268,  1458,  2534,  2220,  2221,   249,
    2733,  1459,  1463,   703,  2912,   269,   704,  1464,  1064,  1502,
    2224,  2225,   250,  2226,  2227,  1514,  1525,  1653,  1516,  1520,
    2409,  1528,  1530,  1531,  1534,   705,  1535,  1065,  1264,  2734,
     333,  2410,  2411,  1538,  1539,  1540,  1265,    69,    70,  2142,
    1614,  1615,  1066,   251,  1266,  1548,  1549,  1555,  1654,  1067,
    1550,  1655,  1551,  1557,   624,  2872,  2555,  1068,  2875,  1556,
    2877,   706,  1267,  1558,  1559,  1565,  2412,   707,  1566,  1268,
    2416,  2417,  2735,  1568,  1569,  1571,  2890,  2891,  1573,  1581,
    1583,  1597,  1598,  1618,  1599,  2265,  1600,  2266,  2267,  1603,
    1619,  2268,  1604,  2905,  1269,  1605,  2270,  2273,  1620,  2275,
    2276,  2277,  1621,  2278,  2279,  1270,  2281,  1641,  2282,  2283,
    1640,  2285,  2286,  1649,  2288,   491,  2290,   625,   708,  1069,
    1658,  1708,  1670,  1669,  2294,  1671,  1672,  2272,  1673,  1674,
    1687,  1692,  2298,  1691,  1693,  1698,  1701,  2303,  2304,  1070,
    3061,  1699,  1700,  2306,  1071,  1707,  1072,  1709,  1710,  1739,
    1271,  2418,  2309,  1747,  1758,  1759,  1765,  1766,  1272,  1772,
    1779,  1827,  2419,  2420,   516,  1775,   626,  1800,   857,  1778,
    1821,  1822,  1828,  1073,  1074,  1829,   627,  1830,  1841,  1754,
    1839,  1840,  1075,  1656,   517,  1842,   554,  2338,   561,   564,
    1843,   569,   573,  1762,  1844,  1859,  1857,  2421,  2323,  1858,
    1864,   518,  1870,  1076,  1873,  1888,  1273,  1876,  1878,  2329,
    1883,  2348,  2349,  2334,   519,  1889,  2351,  1657,  1890,  1274,
    1902,  1916,  2353,  1907,   658,  -492,  1918,  1927,  1962,  1928,
     858,  1929,  1933,  1953,   859,  1963,   520,  1275,  1943,  1944,
     521,  1950,  1968,   674,   680,  1977,  1983,  1984,  2736,   687,
    2737,  1989,   709,   692,  2008,   522,  2011,  2115,  2042,  2044,
    2046,  1077,  2069,  2070,  2071,  2072,  2076,  2077,  2116,  2079,
    2712,  2713,   860,   861,  2716,  2717,  2080,   862,  2720,  2721,
     710,   711,  2081,  2084,  2124,  2087,  2104,  2107,  2112,  2121,
    2125,  1206,   712,  2126,  2127,  2128,   713,  2129,  2131,  2132,
    2174,  2133,   523,  2138,  2178,  2156,  2738,  1207,  2134,  2161,
     808,  2172,  2183,   810,  2186,  2135,  1208,  2187,   863,  2209,
    2210,  2211,  1884,  1885,   819,  2222,  2223,  1209,  2228,  2454,
    2455,  2202,  2457,  2229,  2230,  2771,  2231,  2232,  2233,  2347,
    2234,  2235,  2236,  2240,   840,  2238,  2239,  2241,  2242,  2243,
    2758,  2244,  2468,  2469,  2470,  2471,  2472,  2473,  2474,  2475,
    2476,  2245,  2246,  1210,  2247,  2995,  2248,  2249,  2375,  2250,
    2251,  2252,  2253,   864,  2254,  2257,  2482,   865,  2484,  2255,
    2558,  2256,  2258,  2880,  2259,  1211,  2260,  2261,  2881,  2262,
    2263,  2264,  2422,  2280,  2284,  2491,   477,  2287,  2289,  2291,
    2293,  2495,  2305,  2350,   866,  2311,  2312,  2313,   867,  2314,
    2498,  2499,  2500,  2501,  2502,  2503,  2504,  2505,  2506,  2507,
     868,  2315,  2510,  2511,  2512,  2513,  2514,  2515,  2516,  2517,
    2518,  2519,  2520,  2521,  2352,  2524,  2355,  2525,  2526,  2527,
    2356,  1212,  2357,  2359,   714,   715,   716,  2360,  2433,  2361,
    2364,   477,  2535,  2995,  2366,  2367,  2368,  2372,  2373, -1191,
    2374,  2376,  2377,   967,  2378,  2382,  2383,  3077,  2385,  2386,
    2387,   717,  2388,  2392,   974,  2393,  2736,  2394,  2423,  2424,
     572,  2429,  1213,   982,   718,  2425,  1563,  2430,  2882,  2432,
    2434,  2435,  2436,  2440,  2861,   116,  2441,   944,  2443,  2865,
     719,  2445,  2446,  2550,  2451,  2551,  2448,  2552,  2449,  2554,
    1214,   477,  2556,  2458,  2557,  2460,  2088,  2463,  2466,  2561,
    2562,  2477,  2563,  2564,  2478,  2566,  2479,  2568,  2480,  2481,
    2883,  2485,   720,  2523,  2573,   118,  2574,  2528,  2900,  2529,
    2577,  2532,   721,  2579,  2533,  2106,  2536,  2539,  2567,  2110,
    2111,  2559,  1019,  1020,  1215,  2560,  1216,  2565,  2569,  2571,
    2884,  2578,  2582,  2583,   722,  1024,  2584,  2585,  2586,  2615,
    1027,  2618,  2620,   723,  2623,  2626,  2627,  2581,  2144,  1039,
    2629,  2885,  2631,   119,  2632,  2633,  2637,  2638,  2646,  2160,
    2619,  2639,  2640,   724,  2641,  2642,  2647,  1264,  2165,  2166,
    2648,  2649,  2650,  2651,  2655,  1265,  2656,  3009,  2657,  2170,
    2664,  2667,  2675,  1266,  2678,   725,  2681,  2682,  2683,  2617,
    2686,  2691,  2695,  2711,  2769,  2886,  2775,  2776,  2777,  2778,
    2781,  1267,  2783,   823,  2786,  2788,  2790,  2684,  1268,  2789,
    2791,  2793,  2802,  2804,  2809,  2816,  2825,  2834,  2840,   121,
    2844,  2850,  2858,  2887,  2862,  2870,   726,  2888,  2902,  2913,
    2917,   727,  2914,  1269,  2916,  2918,  2919,  2920,  2921,  1102,
    1103,  1104,  1105,  2922,  1270,  2924,  3047,  2930,   728,  2936,
    2962,   729,  2968,  2992,  2972,  2973,   971,  2974,  2975,  2976,
    2977,  2979,  2984,  2999,  2689,   925,  3000,  3001,  3002,  3003,
    3004,  3011,  3014,  3025,  3033,  2696,  2697,  2698,  2699,  2700,
    2701,  2702,  2703,  2704,  2705,  2706,  3052,  3054,   126,  1271,
    3036,  2709,  3037,   127,  3040,   477,   477,  1272,  3049,   477,
     477,  3050,  3057,   477,   477,  2722,  2723,  2724,  2725,  2726,
    2727,  3060,  2729,  2730,  2731,  3064,  3071,  3072,  2745,  2746,
    2747,  2748,  3078,  2750,  2751,  2752,  2753,  2754,  2755,  3086,
    2757,  3090,  3091,  2761,  2762,  3093,  3097,  3099,  3048,  3100,
    3101,  3102,  3044,     0,  1340,  1273,     0,     0,  1262,     0,
       0,     0,     0,     0,     0,     0,     0,  2770,  1274,     0,
     477,  2772,     0,     0,     0,  2774,     0,     0,     0,     0,
    2779,  2780,     0,  2782,     0,     0,  1275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
       0,     0,     0,     0,  1016,     0,  2805,     0,     0,     0,
       0,  1021,     0,     0,  1022,     0,     0,     0,     0,  1023,
       0,     0,     0,  1025,     0,     0,     0,     0,     0,  2576,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2589,  2590,  2591,     0,
       0,  2593,     0,  2595,  2596,     0,  2002,  2598,  2599,  2600,
       0,     0,  2602,  2603,     0,     0,     0,  2607,  2012,  2609,
    2610,     0,  2612,     0,     0,     0,     0,     0,  2852,     0,
       0,     0,  2854,     0,     0,     0,     0,     0,     0,     0,
    2073,  2074,  2855,  2856,     0,     0,     0,     0,  2860,   477,
       0,     0,     0,  2864,   477,   766,   767,     0,  1100,  2869,
       0,  1422,  2873,  2874,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2892,  2893,     0,  2895,  2896,  2897,
    2898,  2899,     0,   477,  2901,     0,     0,     0,  2904,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2462,
    1437,  2915,     0,     0,   768,     0,  1622,     0,     0,     0,
     769,  2923,     0,     0,     0,     0,     0,     0,     0,   770,
    2685,   771,     0,  2688,     0,     0,   772,     0,  2692,   773,
       0,  2693,  2938,     0,  1623,   774,     0,  2487,     0,   775,
       0,     0,     0,     0,     0,     0,   776,     0,     0,     0,
    2708,     0,     0,     0,   777,     0,     0,     0,     0,     0,
       0,     0,     0,   778,     0,     0,     0,     0,     0,     0,
    1624,     0,     0,     0,  2950,     0,     0,     0,  1625,  2954,
       0,  2956,   779,     0,  1626,     0,     0,  2959,     0,     0,
       0,  1533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2966,     0,     0,   780,     0,  1627,     0,     0,  1306,
       0,     0,     0,     0,     0,     0,  1312,     0,     0,     0,
    2983,     0,   781,     0,  2987,     0,  3020,   115,  1628,     0,
       0,     0,     0,     0,     0,   782,   783,     0,     0,  2785,
       0,     0,   116,     0,     0,     0,  1629,     0,     0,     0,
    3008,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     784,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,  2796,     0,     0,     0,     0,  1685,     0,     0,
       0,  3023,   118,     0,  1630,   785,  3028,     0,  3030,     0,
       0,     0,     0,     0,     0,  3034,     0,     0,     0,   786,
       0,   787,  1912,     0,     0,     0,  3038,     0,     0,     0,
       0,  3041,     0,     0,     0,     0,   788,   116,     0,     0,
       0,   789,     0,     0,     0,  1631,     0,     0,     0,   790,
     119,     0,  1746,     0,     0,  3051,  3053,   791,     0,     0,
    1632,     0,  1752,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,  1633,  2849,     0,     0,  1421,   792,     0,
       0,  3063,     0,     0,  1423,  3065,     0,     0,  3067,     0,
       0,     0,   793,   794,  2857,   795,     0,     0,  3073,  3074,
    3075,  3076,  2863,  3059,  1634,  2866,  2867,     0,     0,     0,
    3085,     0,     0,     0,  3088,     0,   121,  1635,     0,  1636,
    1637,  3092,     0,  3094,     0,   119,     0,     0,     0,  1439,
    1440,     0,     0,     0,  1444,  3080,   796,  1447,  3083,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1454,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
    1638,     0,     0,     0,     0,     0,     0,     0,  2363,   123,
       0,     0,     0,     0,     0,     0,  2369,  2370,   124,   125,
       0,     0,     0,  1853,     0,   126,  2379,  2380,     0,     0,
     127,   121,     0,     0,     0,     0,  2389,  2390,     0,     0,
       0,  1861,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2426,  2427,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2437,  2438,     0,     0,     0,     0,  1544,  2444,
       0,  1892,     0,     0,     0,  2951,     0,     0,     0,  2447,
       0,  1898,     0,     0,  2764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2961,     0,     0,  1913,     0,
       0,     0,     0,     0,     0,   127,  1601,     0,     0,     0,
    1925,     0,   128,     0,     0,  1932,     0,     0,  1606,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,  3021,
    3022,     0,  3024,     0,  3026,  3027,     0,  3029,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3056,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2089,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2109,     0,
       0,     0,     0,     0,     0,  3089,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2906,     0,     0,  2145,
    2911,     0,  2146,     0,     0,     0,  2157,     0,     0,     0,
       0,     0,  2162,  2163,  1855,     0,     0,     0,     0,     0,
    2167,     0,     0,     0,     0,     0,     0,  2168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2622,     0,     0,     0,     0,     0,
       0,     0,  1886,     0,  2624,  2625,     0,  1891,     0,     0,
       0,     0,     0,     0,     0,  2628,     0,  1897,  2207,     0,
       0,     0,     0,     0,  2630,     0,     0,     0,  2634,  2635,
    2218,     0,     0,     0,     0,     0,     0,  2643,  2644,     0,
       0,     0,    69,    70,     0,     0,  2652,  2653,     0,     0,
       0,     0,  2658,     0,  1714,     0,     0,     0,   116,  1715,
       0,     0,  2668,  2669,     0,     0,     0,     0,     0,     0,
       0,  2978,     0,  2679,     0,  2680,     0,     0,     0,   328,
       0,     0,     0,  1716,  1717,     0,  1718,  1719,     0,     0,
       0,     0,     0,     0,     0,  2998,     0,  1720,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1721,  1722,     0,  1986,  1987,  1988,     0,     0,  1723,
       0,     0,  1724,     0,  1990,  1991,  1992,     0,     0,     0,
       0,     0,  2271,  2003,  2004,  2005,     0,     0,  2006,  2007,
    1725,  2009,  2010,     0,     0,     0,   119,     0,     0,  1726,
    1727,     0,     0,  1728,     0,     0,  2292,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2302,     0,     0,  2082,  2083,     0,     0,  2085,
    2086,     0,     0,     0,     0,  2307,     0,  2308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2317,     0,     0,
    2319,  2320,  2321,  2322,  2324,     0,  2326,     0,     0,  2327,
       0,     0,   121,     0,  2328,  2330,  2331,  2332,  2333,  2335,
       0,  2336,  2337,     0,  1729,     0,  2339,  2340,  2341,  2342,
    3070,     0,  2343,  2344,     0,     0,     0,     0,  2345,  2346,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2807,     0,   329,  2808,     0,     0,  2810,
       0,     0,     0,     0,     0,  2159,     0,     0,     0,  2819,
       0,     0,     0,     0,     0,     0,     0,     0,  2828,     0,
       0,   126,     0,     0,     0,  1730,   127,  2837,     0,     0,
       0,  1731,     0,     0,  2839,     0,     0,   330,     0,     0,
       0,     0,     0,     0,     0,  2843,     0,     0,  1732,     0,
       0,  2846,     0,     0,     0,     0,     0,     0,     0,  1733,
       0,     0,     0,     0,     0,     0,  2208,     0,     0,     0,
       0,     0,  2214,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1734,  1735,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2453,   331,   116,  2456,     0,     0,
       0,     0,     0,  1736,     0,     0,     0,     0,  2461,     0,
       0,  2464,     0,     0,     0,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,  2483,     0,   544,   545,     0,     0,     0,
    1737,   546,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2269,     0,     0,  2939,
       0,  2274,     0,     0,   547,   548,  2940,     0,     0,     0,
       0,     0,     0,     0,   119,  2942,     0,     0,     0,     0,
       0,     0,     0,     0,  2944,     0,     0,     0,     0,  2522,
    2947,     0,  2295,     0,  2949,     0,     0,     0,  2301,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2538,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2318,     0,     0,     0,     0,
       0,     0,  2325,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   549,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2354,     0,  2572,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2362,     0,
     551,     0,  2580,     0,     0,     0,     0,     0,  2365,  2587,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2605,     0,     0,     0,     0,     0,     0,     0,     0,
    2614,     0,     0,     0,  2616,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   675,     0,   116,     0,  1147,     0,
       0,     0,     0,  1148,     0,     0,     0,     0,     0,   552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2450,     0,     0,     0,     0,     0,     0,     0,     0,  2452,
       0,     0,     0,     0,     0,     0,     0,     0,   676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2465,
       0,     0,   116,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,   553,     0,   119,  2488,  2489,     0,  2687,     0,
       0,  2690,   118,     0,     0,     0,     0,  2490,     0,  2694,
     677,     0,  2493,  2494,     0,     0,     0,  2496,  2497,     0,
       0,     0,     0,     0,     0,  2707,     0,     0,  2710,     0,
       0,     0,     0,     0,  2715,     0,     0,  2718,  2719,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,  2530,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,  2537,     0,
       0,     0,     0,     0,     0,  2765,  2766,     0,     0,     0,
     678,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     0,
       0,     0,     0,     0,     0,     0,   121,     0,     0,     0,
       0,  2553,     0,     0,     0,     0,     0,     0,  2792,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,  2570,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2588,     0,  1577,
       0,     0,  2592,     0,     0,     0,     0,     0,  2597,     0,
       0,     0,     0,  2601,     0,   126,     0,  2604,     0,  2606,
     127,  2608,     0,     0,  2611,     0,  2613,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,  2621,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2848,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,  2868,     0,     0,     0,     0,     0,  2659,
    2660,  2661,  2662,  2663,  2879,  2665,  2666,     0,     0,     0,
    2670,  2671,  2672,  2673,  2674,     0,  2676,  2677,     0,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2929,     0,     0,     0,  2935,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,  1578,     0,     0,     0,     0,
       0,     0,  2756,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2768,     0,
       0,     0,     0,  2952,  2953,     0,  2955,     0,     0,     0,
       0,  2957,  2958,     0,     0,     0,     0,  2960,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2787,     0,     0,     0,     0,     0,     0,  2794,     0,     0,
       0,  2988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2801,     0,  2803,     0,  2806,     0,
       0,     0,     0,  3012,     0,     0,     0,  2811,  2812,  2813,
    2814,  2815,     0,  2817,  2818,     0,  2820,  2821,  2822,  2823,
    2824,     0,  2826,  2827,     0,  2829,  2830,  2831,  2832,  2833,
       0,  2835,  2836,     0,  2838,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2841,  2842,  1169,  1170,  1171,     0,
       0,  1466,  1467,  1468,     0,  2845,     0,     0,     0,     0,
       0,     0,     0,     0,  2847,     0,     0,     0,     0,     0,
    2851,     0,     0,     0,  2853,     0,     0,  1172,  1173,     0,
       0,  1174,  1469,  1470,  1175,     0,  1471,     0,     0,     0,
    2859,  1176,     0,  1472,     0,  1177,  1473,     0,  3058,     0,
    1474,     0,     0,     0,     0,  1178,  1179,     0,     0,     0,
    1475,  1476,     0,  1180,  1181,     0,  3068,     0,  1477,     0,
       0,     0,     0,     0,  1182,     0,     0,     0,     0,  1478,
    3079,  1183,     0,  3082,     0,     0,     0,     0,     0,  1184,
       0,   116,     0,  1185,  1186,  2909,  2910,  1187,  1479,  1480,
       0,     0,  1481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1188,     0,     0,
       0,     0,  1482,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,  1189,
       0,     0,     0,     0,  1483,  2941,     0,     0,     0,   116,
       0,     0,     0,     0,  2943,     0,     0,     0,     0,     0,
       0,     0,     0,  2945,     0,  2946,     0,     0,  1190,  2948,
       0,     0,     0,  1484,     0,     0,     0,   116,     0,   119,
       0,     0,     0,  1485,     0,     0,     0,     0,     0,     0,
       0,     0,   559,     0,     0,  1191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2970,
       0,     0,     0,     0,     0,     0,     0,  1532,     0,   116,
       0,     0,     0,     0,     0,     0,     0,  1192,     0,  1193,
       0,     0,  1486,     0,  1487,  1194,  1195,   119,     0,     0,
    1488,  1489,     0,     0,     0,   121,     0,   116,     0,     0,
       0,  1196,  1197,     0,     0,     0,     0,  1490,     0,     0,
       0,     0,     0,  1198,  1199,   119,  3015,     0,  3016,  1491,
    3017,     0,     0,  3018,     0,  3019,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1200,     0,  1201,     0,     0,  1492,  2316,
    1493,     0,     0,   121,     0,     0,     0,   119,  1202,     0,
    1203,  1494,     0,     0,   126,     0,     0,  1204,  3043,   127,
       0,     0,  1495,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,  3055,     0,     0,     0,     0,     0,     0,     0,
       0,  1205,     0,     0,     0,     0,  1496,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,     0,     0,     0,   127,     0,     0,
       0,     0,     0,   563,     0,     0,     0,     0,  3081,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,   127,     0,     0,     0,  3095,
       0,     0,  3096,     0,     0,     0,     0,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,     0,   127,     0,     0,
       0,   560,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   127,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     1,     0,     0,     2,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       0,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    40,     0,     0,   186,
       0,     0,   187,    41,     0,   188,     0,    42,     0,     0,
       0,    43,     0,    44,     0,    45,     0,     0,     0,     0,
      46,     0,     0,     0,     0,   189,     0,     0,     0,   190,
     191,   192,     0,     0,     0,     0,    47,     0,     0,   193,
       0,   194,    48,     0,     0,     0,   195,     0,   196,   197,
     198,     0,     0,     0,     0,     0,   199,     0,   200,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,    52,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    54,    55,     0,     0,     0,
       0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   202,     0,     0,     0,     0,    56,     0,     0,     0,
     203,     0,   204,   205,    57,   206,   207,     0,     0,   208,
       0,     0,     0,   209,     0,   210,     0,     0,     0,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   212,   213,     0,     0,     0,   214,     0,     0,     0,
       0,     0,     0,     0,   215,     0,     0,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217,     0,   218,     0,
       0,     0,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     220,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,     0,     0,   226,     0,     0,     0,     0,
       0,   227,     0,   228,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   229
};

static const yytype_int16 yycheck[] =
{
       3,    55,  1662,   535,   787,   782,   783,  1033,    11,  1894,
     312,  1896,  1327,    16,     5,     4,  1331,  1021,  1022,  1023,
      16,     4,    16,     5,     4,     5,     0,     5,     3,     4,
       5,     4,    33,   491,    37,     3,     4,     4,    33,    27,
    1170,     5,    45,   501,     3,     4,  1361,  1362,  1363,     5,
      21,    54,     5,    69,    57,    15,     5,    60,     4,    64,
       4,    64,    27,    51,    67,    37,    54,    59,    71,    72,
      21,   113,    75,   113,    28,    78,    79,    65,    41,    82,
    2804,   103,    85,    86,    26,     4,    89,    11,    16,    69,
       4,    94,    28,    18,     3,     4,  1100,    13,     4,    18,
     163,    35,    90,     3,     4,   108,   109,   110,   111,   112,
     113,   146,   142,    93,     4,   181,    27,     3,     4,   238,
     108,    16,    21,   187,   317,   141,   129,   105,     3,     4,
       3,     4,    56,     3,     4,   113,    41,    37,     4,    16,
       4,     5,    16,     3,     4,   215,     3,     4,    64,   129,
     122,     4,    76,    42,    34,   171,   119,   187,     3,     4,
     251,   164,     3,     4,    37,  1137,  2994,    37,  1140,   136,
     110,    41,   152,    88,   151,     3,     4,   219,   120,   219,
     271,   115,   106,     4,     5,   167,   189,   251,    69,  1161,
     105,   194,    45,   291,   136,    48,    41,   151,   144,   182,
    2924,   299,     4,    69,   128,     4,   151,   277,   132,     5,
     129,   206,  2936,   257,   119,   151,   130,  3045,   167,   196,
     339,   251,   194,   147,   196,   288,   198,   199,    81,   295,
     104,     5,   221,   275,    62,   275,    89,   209,   133,   274,
     229,   230,    16,   237,   260,   145,   226,   175,   216,   119,
     242,   196,    33,   216,   226,   235,   236,   158,    48,   323,
     220,    20,    15,   129,   231,   129,   269,    69,   290,   209,
      69,   215,   145,     4,   119,   145,   129,   266,     5,   252,
     283,     3,     4,    47,   338,   315,   251,     3,     4,  1072,
     232,   186,    21,   227,   265,     5,   212,   300,   301,   281,
     209,   317,   155,   228,   246,    69,     4,   226,   129,   228,
     315,   216,   313,   316,   265,   318,   235,   236,   313,   275,
      21,    27,    86,   212,   288,   328,   329,   129,   331,   332,
     129,   334,   281,   327,   209,   340,     5,    69,    69,     4,
     251,   344,   237,   317,    13,    14,   216,   300,   339,   329,
       4,   354,   355,   326,   318,   335,   338,   335,   326,   331,
     226,   214,   226,   346,   339,   823,   265,   326,   209,   235,
     236,   235,   236,   226,   215,   378,   330,   293,   381,   382,
     326,   384,   235,   236,     4,   388,   389,   312,   304,   385,
     243,   380,   245,   312,   330,    64,   399,   400,   129,   379,
     388,   703,   326,   406,   384,   226,   386,   387,   411,   412,
     329,   288,  1195,   319,   235,   236,   419,   258,   147,   422,
     273,   185,    27,   339,   226,   206,   326,   226,   337,   319,
    1213,   129,   327,   235,   236,  1439,   235,   236,   441,   442,
     326,   383,    21,  1447,   285,   448,   449,   450,   451,   452,
     453,    66,   455,   326,    64,   458,   326,   253,   168,   169,
     379,    64,   337,   329,    64,   329,   326,   386,   387,   326,
     473,  1248,   381,   382,   477,   129,   329,   183,     5,   482,
     483,   484,   485,   486,   487,  1800,   489,    60,   491,   492,
     493,  1621,     5,   346,    64,   226,   337,   112,   501,   502,
      13,    14,   261,  1280,   235,   236,   381,   382,   329,   129,
       3,     4,   302,   379,   335,   379,    41,    21,   490,  1649,
     386,   387,   386,   387,   982,   346,   379,   329,   226,   251,
     329,    15,   313,   386,   387,   251,   265,   235,   236,    23,
     381,   382,  1672,   212,   213,    66,    64,    92,    41,    38,
     215,    64,    92,   556,   557,     3,     4,     4,   379,   265,
      49,   325,     4,   273,   265,   386,   387,  1025,   297,    62,
     143,   574,   226,    64,    27,    47,   340,   379,   183,   315,
     379,   235,   236,    45,   386,   387,    53,   386,   387,     4,
      79,   112,     5,   173,   119,    67,    12,    69,   329,   126,
       4,   215,   656,    31,     4,   270,   226,   610,   580,   315,
       3,     4,   277,     5,    92,   235,   236,     3,     4,    32,
    1592,   319,    92,  1595,   293,   205,   119,   142,   173,    93,
      92,   329,    92,   173,    66,   304,   305,     5,   105,   130,
     309,   168,   169,     0,    59,    13,    14,   262,   379,   116,
     653,     3,     4,   291,    92,   386,   387,   163,   312,    59,
     265,   299,   634,   278,   279,     3,     4,    59,    24,    25,
     339,   285,   100,   288,   163,   329,    68,    14,    15,   252,
     112,   379,   149,     4,  2569,    22,   265,   214,   386,   387,
      11,   216,   746,    30,   267,   173,    64,    83,   701,   212,
     213,    38,    64,   173,   136,   315,  1489,    59,   711,   329,
     315,   765,   315,   173,  1145,   315,   257,  1500,   134,   208,
       5,  1152,    59,   216,    64,   379,   168,   169,    13,    14,
     340,   203,   386,   387,   187,   173,   251,   340,   244,    76,
     340,   262,     3,     4,   188,   315,   273,   103,   299,     4,
      64,   179,   214,   197,     5,     3,     4,   278,   279,   379,
     763,   265,   377,   378,   337,  1146,   386,   387,   130,   294,
     340,     4,  1153,   300,    41,   217,    31,     5,   781,    64,
     293,   784,   288,     4,   268,   233,     5,   271,     3,     4,
     130,   304,   305,   282,   266,   211,   309,   315,   251,     4,
     315,    16,    32,   292,   807,    27,   192,     3,     4,   812,
     813,   814,   815,   304,    62,   818,   130,   820,    38,   822,
     823,   824,   340,    19,    83,   331,   339,   242,   321,    49,
     262,   273,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   242,   315,   212,   213,   278,   279,  1306,   277,
     242,   340,   119,   325,     5,   283,   377,   378,   251,    79,
     914,   328,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     242,   277,  1918,  1897,     5,   233,   899,    64,   901,     3,
       4,    57,    64,   906,   907,   216,   909,   910,   911,   912,
       4,   107,     4,  2228,  2229,  2230,  2231,  2232,  2233,  2234,
    2235,  2236,   177,   926,   927,   293,     5,   212,   213,   126,
     933,   934,    69,   192,    13,    14,   304,   305,    64,    95,
      64,   309,   304,   163,   128,   377,   378,    41,   285,   216,
     953,   954,   955,   956,   957,    64,   959,   317,   961,   188,
     221,   298,   299,   130,   304,   187,     4,  2097,   130,     4,
       5,   339,     3,     4,   977,   978,   979,   173,   981,   982,
     983,  1758,   985,   238,  2114,    64,  1444,    64,   208,    34,
     304,    69,    64,   330,    31,     3,     4,   153,     5,    75,
       4,   168,   169,  1006,   130,  1008,   130,    94,   293,    47,
     265,   173,    50,  2143,    64,  1018,    64,    46,   277,   304,
     305,   130,  1025,  1026,   309,   119,  1998,   294,  1031,   251,
      87,    69,    64,    62,  1006,     3,     4,   374,   375,   376,
       3,     4,   379,     6,     7,  1048,  2018,   315,    64,  1052,
      88,   247,    64,   130,   339,    64,  2028,    86,   130,  2031,
      15,    64,   282,  1066,  1067,  1068,  2038,   105,     3,     4,
      69,  1074,   292,   111,   168,   169,  1079,   106,     3,     4,
     130,  2053,   130,   258,  2056,     3,     4,    26,   227,    93,
     316,  1094,  2064,  1147,   314,  2067,     0,   126,   130,    67,
       4,   130,   322,    94,   135,    99,   273,    69,   165,    32,
    1113,    77,   188,     5,   130,    29,     4,   273,   130,    64,
     340,   130,   216,   217,   162,   119,   130,   130,     4,  2873,
       4,   160,   161,   212,   213,  2265,     5,   304,    13,    14,
     177,     4,   304,    43,    44,     5,    29,   185,  2892,     4,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   304,   273,
     304,   120,  2730,    13,    14,   130,     3,     4,  1191,    64,
      13,    14,   249,   250,   223,   304,   272,   136,     3,     4,
       5,   238,     4,     5,  2208,   234,   282,   264,     5,  1212,
     135,  2759,     4,     5,   293,   209,   151,   135,  1221,     5,
    2880,     4,     3,     4,     4,   304,   305,   304,   265,    22,
     309,     5,   304,     5,    64,  1238,   175,  1240,    19,   378,
       5,    64,  1245,  1246,  1247,    62,     5,   386,     4,   388,
     164,     4,  1255,   310,   304,  1258,   304,  1260,   296,    52,
     339,   196,    55,   614,     4,    58,   617,   618,    13,    14,
     299,   300,   304,     5,  1277,     4,  1279,   103,    59,   193,
     130,   164,     5,   197,  1287,  1288,   324,   325,   304,  3033,
     190,   191,   304,   232,    87,   304,  3040,  2301,   336,  1302,
    1303,   304,   340,  1306,  1307,  1308,     4,   246,     3,     4,
     193,  1314,     4,  1316,   197,   300,  1319,     4,  1321,    64,
       4,  2325,   222,  2871,  2872,   118,   107,  2875,   121,  2877,
      13,    14,  1386,     3,     4,     5,     4,   212,   213,     4,
       5,   255,  2890,  2891,     3,     4,   375,  2895,  2896,     3,
       4,  2899,    11,  3097,     5,  3099,  2904,  2905,   695,   304,
       3,     4,     4,     5,  1367,     3,     4,     5,    11,  1372,
    1128,  1129,   255,  1376,  2504,  1378,   713,   479,   480,  1382,
    2510,    64,   212,   213,   298,  2515,     4,    41,   221,   212,
     213,     4,   173,   307,   308,  1398,     4,  1400,     4,  1402,
    1403,  1404,  1405,     4,     4,  1408,  1409,     4,  1411,  1412,
       4,  1414,     5,  1416,  2962,   298,     5,  2965,   293,    10,
    1423,     8,  2970,     5,   307,   308,  1398,  1430,  2400,   304,
     305,  1434,  1435,  1436,  2982,   299,   188,  2409,     4,  2987,
       4,  1444,  1445,   197,   188,  1448,  2418,     4,     4,   786,
     220,   220,     5,  1456,   791,  1458,     5,   220,  1461,     4,
     253,   242,    87,   293,   339,   119,   247,   212,   213,   210,
     293,   210,   251,   209,   304,   305,    19,  1449,     5,   215,
       5,   304,   305,     3,     4,    69,  2490,     4,     8,     9,
      10,    69,    69,     4,   287,  1467,     4,     3,     4,    42,
      13,    14,    45,   252,     4,  1508,     4,  1510,   220,   339,
    1513,  1514,    93,  1516,  3062,  1518,   339,     5,  3066,    92,
      92,  1524,   258,    92,   317,  1528,  2530,    88,     5,   212,
     213,     5,    92,  2537,  1537,    41,     4,    98,  3086,    82,
     165,     4,     4,   124,   105,    36,    89,     5,   293,   285,
       5,    64,  3100,     5,   105,  3103,  3104,   100,   101,   304,
     305,     4,   216,   900,   107,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   136,   339,     4,    16,     5,  2728,    16,
    2604,   337,  2606,     4,  2608,     4,     4,  2611,     4,  2613,
     293,   154,     5,   119,  2744,  1618,  1619,  1620,   103,  2749,
       5,   304,   305,   114,   249,   250,   207,   964,    92,   172,
     173,    13,    14,    92,   195,    92,   179,  1640,     4,   264,
       5,  1644,     5,   224,    92,  1617,   382,     5,   139,   140,
       4,     5,     4,    67,     5,     5,   339,   148,    47,     4,
       4,   204,     5,     5,     4,     4,    20,  1670,  1671,     3,
       4,     5,     6,     7,     5,     5,     5,  1680,     4,   170,
      69,  1684,    64,   244,     4,   310,    11,     5,  1691,   180,
       3,     4,     5,     6,     7,    11,     4,    86,     4,   212,
     213,  2159,  1705,     4,   247,     5,     4,  1710,   289,    63,
       4,  1714,    22,  1716,  1717,    69,  1719,  1720,  1721,   280,
    1723,     4,   182,  1726,  1727,  1728,  1729,  1730,  1731,  1732,
    1733,  1734,  1735,  1736,     5,     5,     5,  1740,  1741,  1742,
    1743,     4,    52,   173,    98,    55,   173,  1750,  1751,    58,
       4,  1754,  1755,  1756,   335,     5,  2214,  1760,  1761,   302,
      69,     4,    39,    47,  2768,   346,    50,    39,   122,   310,
    1773,  1774,   315,  1776,  1777,   287,   312,    87,   287,   319,
     293,     5,     4,     4,     4,    69,     5,   141,    97,    98,
      37,   304,   305,     5,     5,     5,   105,     3,     4,     5,
       6,     7,   156,   346,   113,     4,     4,   301,   118,   163,
       5,   121,     5,     5,   203,  2724,  2274,   171,  2727,   301,
    2729,   105,   131,     5,     5,     4,   339,   111,     4,   138,
     212,   213,   141,     5,     5,     5,  2745,  2746,     5,     5,
       5,     4,     4,   265,     5,  1848,     5,  1850,  1851,     4,
     265,  1854,     5,  2762,   163,     5,  1859,  1860,   265,  1862,
    1863,  1864,   113,  1866,  1867,   174,  1869,     5,  1871,  1872,
     265,  1874,  1875,   113,  1877,   122,  1879,   266,   162,   233,
       4,  1218,   265,    41,  1887,   265,   113,  1859,     5,   237,
      41,   237,  1895,   271,     5,     4,   237,  1900,  1901,   253,
    3030,     5,     5,  1906,   258,   237,   260,     4,     4,     4,
     219,   293,  1915,     5,     5,     5,     5,     5,   227,     4,
       4,     4,   304,   305,    56,   119,   315,     5,    64,   119,
       5,     5,     5,   287,   288,     5,   325,     4,     4,  1276,
       5,     5,   296,   253,    76,     5,   193,  1950,   195,   196,
       5,   198,   199,  1290,     4,    11,     5,   339,  1930,     5,
      11,    93,     4,   317,     4,     4,   275,     5,     5,  1941,
       5,  1974,  1975,  1945,   106,     4,  1979,   287,     4,   288,
       4,     4,  1985,     5,   231,     0,     5,   265,     4,   265,
     126,   265,   265,   251,   130,   275,   128,   306,   265,   265,
     132,   187,   233,   250,   251,   220,     4,     4,   317,   256,
     319,     4,   296,   260,     4,   147,     4,   265,     5,     5,
       5,   375,   301,     5,     5,     5,     4,     4,   265,     5,
    2488,  2489,   168,   169,  2492,  2493,     4,   173,  2496,  2497,
     324,   325,     4,     4,   343,     5,     5,     5,     5,   265,
     343,    69,   336,     4,     4,     4,   340,     4,     4,     4,
     251,     4,   194,     4,   251,     4,   375,    85,   343,     5,
     317,     5,     4,   320,   251,   343,    94,   251,   214,     5,
       4,     4,  1419,  1420,   331,     5,     4,   105,     5,  2092,
    2093,   251,  2095,     5,     4,  2553,     5,     5,     4,    99,
       5,     5,     4,     4,   351,     5,     5,     5,     5,     4,
     339,     5,  2115,  2116,  2117,  2118,  2119,  2120,  2121,  2122,
    2123,     5,     4,   141,     5,  2908,     5,     4,   301,     5,
       5,     4,     4,   269,     4,     4,  2139,   273,  2141,     5,
      11,     5,     4,   389,     5,   163,     5,     4,   389,     5,
       5,     4,   301,     5,     4,  2158,  2159,     5,     5,     4,
       4,  2164,     4,     4,   300,     5,     5,     5,   304,     5,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
     316,     5,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,     5,  2198,     5,  2200,  2201,  2202,
       5,   219,     5,     4,    69,    70,    71,     4,   301,     5,
       4,  2214,  2215,  2996,     5,     5,     5,     4,     4,   317,
       5,     5,     5,   470,     5,     4,     4,  3055,     5,     5,
       5,    96,     5,     4,   481,     4,   317,     5,     5,     5,
       4,     4,   260,   490,   109,     5,  1136,     4,   389,     5,
       5,     5,     5,     4,  2712,    19,     4,   426,     5,  2717,
     125,     4,     4,  2266,     5,  2268,     4,  2270,     4,  2272,
     288,  2274,  2275,     5,  2277,     5,  1613,     5,     5,  2282,
    2283,     4,  2285,  2286,     4,  2288,     5,  2290,     4,     4,
     389,     5,   157,     5,  2297,    59,  2299,     4,  2756,     4,
    2303,     5,   167,  2306,     5,  1642,     4,     4,     4,  1646,
    1647,     5,   559,   560,   332,     5,   334,     5,     4,     4,
     389,     5,     5,     5,   189,   572,     5,     5,     5,     4,
     577,     5,     4,   198,     4,     4,     4,  2309,  1675,   586,
       4,   389,     5,   107,     5,     5,     4,     4,     4,  1686,
    2353,     5,     5,   218,     5,     5,     4,    97,  1695,  1696,
       5,     5,     5,     5,     4,   105,     4,  2923,     5,  1706,
       4,     4,     4,   113,     4,   240,     4,     4,     4,  2351,
       4,     4,     4,     4,     4,   389,     5,     5,     4,     4,
       4,   131,     4,   333,     5,     4,     4,  2451,   138,     5,
       5,     5,     5,     4,     4,     4,     4,     4,     4,   173,
       4,     4,     4,  2739,     5,     4,   281,   389,     5,     4,
       4,   286,     5,   163,     5,     4,     4,     4,     4,   676,
     677,   678,   679,     4,   174,     4,   389,     5,   303,     4,
       4,   306,     4,  2906,     5,     4,   478,     5,     5,     5,
       4,     4,     4,     4,  2457,   395,     5,     5,     4,     4,
       4,     4,     4,     4,     4,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,  2476,  2477,  2478,  3008,  3009,   242,   219,
       5,  2484,     4,   247,     4,  2488,  2489,   227,     5,  2492,
    2493,     5,     4,  2496,  2497,  2498,  2499,  2500,  2501,  2502,
    2503,     4,  2505,  2506,  2507,     5,     5,     5,  2511,  2512,
    2513,  2514,     5,  2516,  2517,  2518,  2519,  2520,  2521,     4,
    2523,     5,     5,  2526,  2527,     5,     4,     4,  2996,     5,
       5,     5,  2992,    -1,   862,   275,    -1,    -1,   785,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2550,   288,    -1,
    2553,  2554,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,
    2563,  2564,    -1,  2566,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
      -1,    -1,    -1,    -1,   554,    -1,  2619,    -1,    -1,    -1,
      -1,   561,    -1,    -1,   564,    -1,    -1,    -1,    -1,   569,
      -1,    -1,    -1,   573,    -1,    -1,    -1,    -1,    -1,  2302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2319,  2320,  2321,    -1,
      -1,  2324,    -1,  2326,  2327,    -1,  1556,  2330,  2331,  2332,
      -1,    -1,  2335,  2336,    -1,    -1,    -1,  2340,  1568,  2342,
    2343,    -1,  2345,    -1,    -1,    -1,    -1,    -1,  2691,    -1,
      -1,    -1,  2695,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1590,  1591,  2705,  2706,    -1,    -1,    -1,    -1,  2711,  2712,
      -1,    -1,    -1,  2716,  2717,     4,     5,    -1,   658,  2722,
      -1,   968,  2725,  2726,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   980,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2747,  2748,    -1,  2750,  2751,  2752,
    2753,  2754,    -1,  2756,  2757,    -1,    -1,    -1,  2761,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2106,
    1017,  2774,    -1,    -1,    63,    -1,    41,    -1,    -1,    -1,
      69,  2784,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
    2453,    80,    -1,  2456,    -1,    -1,    85,    -1,  2461,    88,
      -1,  2464,  2805,    -1,    69,    94,    -1,  2144,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
    2483,    -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,  2847,    -1,    -1,    -1,   113,  2852,
      -1,  2854,   141,    -1,   119,    -1,    -1,  2860,    -1,    -1,
      -1,  1108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2874,    -1,    -1,   163,    -1,   141,    -1,    -1,   819,
      -1,    -1,    -1,    -1,    -1,    -1,   826,    -1,    -1,    -1,
    2893,    -1,   181,    -1,  2897,    -1,  2950,     4,   163,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,  2572,
      -1,    -1,    19,    -1,    -1,    -1,   181,    -1,    -1,    -1,
    2923,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2605,    -1,    -1,    -1,    -1,  1194,    -1,    -1,
      -1,  2954,    59,    -1,   219,   244,  2959,    -1,  2961,    -1,
      -1,    -1,    -1,    -1,    -1,  2968,    -1,    -1,    -1,   258,
      -1,   260,     4,    -1,    -1,    -1,  2979,    -1,    -1,    -1,
      -1,  2984,    -1,    -1,    -1,    -1,   275,    19,    -1,    -1,
      -1,   280,    -1,    -1,    -1,   260,    -1,    -1,    -1,   288,
     107,    -1,  1249,    -1,    -1,  3008,  3009,   296,    -1,    -1,
     275,    -1,  1259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   288,  2687,    -1,    -1,   967,   317,    -1,
      -1,  3034,    -1,    -1,   974,  3038,    -1,    -1,  3041,    -1,
      -1,    -1,   331,   332,  2707,   334,    -1,    -1,  3051,  3052,
    3053,  3054,  2715,  3025,   319,  2718,  2719,    -1,    -1,    -1,
    3063,    -1,    -1,    -1,  3067,    -1,   173,   332,    -1,   334,
     335,  3074,    -1,  3076,    -1,   107,    -1,    -1,    -1,  1019,
    1020,    -1,    -1,    -1,  1024,  3057,   375,  1027,  3060,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1039,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,
     375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2008,   226,
      -1,    -1,    -1,    -1,    -1,    -1,  2016,  2017,   235,   236,
      -1,    -1,    -1,  1380,    -1,   242,  2026,  2027,    -1,    -1,
     247,   173,    -1,    -1,    -1,    -1,  2036,  2037,    -1,    -1,
      -1,  1398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2051,  2052,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2062,  2063,    -1,    -1,    -1,    -1,  1122,  2069,
      -1,  1428,    -1,    -1,    -1,  2848,    -1,    -1,    -1,  2079,
      -1,  1438,    -1,    -1,  2531,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2868,    -1,    -1,  1455,    -1,
      -1,    -1,    -1,    -1,    -1,   247,  1160,    -1,    -1,    -1,
    1467,    -1,   329,    -1,    -1,  1472,    -1,    -1,  1168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,    -1,    -1,    -1,
      -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,   386,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2952,
    2953,    -1,  2955,    -1,  2957,  2958,    -1,  2960,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3020,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1645,    -1,
      -1,    -1,    -1,    -1,    -1,  3068,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2763,    -1,    -1,  1676,
    2767,    -1,  1679,    -1,    -1,    -1,  1683,    -1,    -1,    -1,
      -1,    -1,  1689,  1690,  1384,    -1,    -1,    -1,    -1,    -1,
    1697,    -1,    -1,    -1,    -1,    -1,    -1,  1704,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2364,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1422,    -1,  2374,  2375,    -1,  1427,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2385,    -1,  1437,  1745,    -1,
      -1,    -1,    -1,    -1,  2394,    -1,    -1,    -1,  2398,  2399,
    1757,    -1,    -1,    -1,    -1,    -1,    -1,  2407,  2408,    -1,
      -1,    -1,     3,     4,    -1,    -1,  2416,  2417,    -1,    -1,
      -1,    -1,  2422,    -1,    22,    -1,    -1,    -1,    19,    27,
      -1,    -1,  2432,  2433,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2888,    -1,  2443,    -1,  2445,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2912,    -1,    65,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,  1538,  1539,  1540,    -1,    -1,    87,
      -1,    -1,    90,    -1,  1548,  1549,  1550,    -1,    -1,    -1,
      -1,    -1,  1859,  1557,  1558,  1559,    -1,    -1,  1562,  1563,
     108,  1565,  1566,    -1,    -1,    -1,   107,    -1,    -1,   117,
     118,    -1,    -1,   121,    -1,    -1,  1883,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1899,    -1,    -1,  1599,  1600,    -1,    -1,  1603,
    1604,    -1,    -1,    -1,    -1,  1912,    -1,  1914,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1924,    -1,    -1,
    1927,  1928,  1929,  1930,  1931,    -1,  1933,    -1,    -1,  1936,
      -1,    -1,   173,    -1,  1941,  1942,  1943,  1944,  1945,  1946,
      -1,  1948,  1949,    -1,   192,    -1,  1953,  1954,  1955,  1956,
    3047,    -1,  1959,  1960,    -1,    -1,    -1,    -1,  1965,  1966,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2623,    -1,   216,  2626,    -1,    -1,  2629,
      -1,    -1,    -1,    -1,    -1,  1685,    -1,    -1,    -1,  2639,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2648,    -1,
      -1,   242,    -1,    -1,    -1,   253,   247,  2657,    -1,    -1,
      -1,   259,    -1,    -1,  2664,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2675,    -1,    -1,   276,    -1,
      -1,  2681,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    -1,    -1,    -1,    -1,    -1,  1746,    -1,    -1,    -1,
      -1,    -1,  1752,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     318,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2091,   326,    19,  2094,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,  2105,    -1,
      -1,  2108,    -1,    -1,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,  2140,    -1,    68,    69,    -1,    -1,    -1,
     388,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1856,    -1,    -1,  2809,
      -1,  1861,    -1,    -1,    97,    98,  2816,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   107,  2825,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2834,    -1,    -1,    -1,    -1,  2196,
    2840,    -1,  1892,    -1,  2844,    -1,    -1,    -1,  1898,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1925,    -1,    -1,    -1,    -1,
      -1,    -1,  1932,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1989,    -1,  2294,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2002,    -1,
     233,    -1,  2309,    -1,    -1,    -1,    -1,    -1,  2012,  2316,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2347,    -1,    -1,    -1,  2351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    19,    -1,   173,    -1,
      -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2084,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2089,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2109,
      -1,    -1,    19,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,   375,    -1,   107,  2145,  2146,    -1,  2455,    -1,
      -1,  2458,    59,    -1,    -1,    -1,    -1,  2157,    -1,  2466,
     123,    -1,  2162,  2163,    -1,    -1,    -1,  2167,  2168,    -1,
      -1,    -1,    -1,    -1,    -1,  2482,    -1,    -1,  2485,    -1,
      -1,    -1,    -1,    -1,  2491,    -1,    -1,  2494,  2495,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,  2207,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2218,    -1,
      -1,    -1,    -1,    -1,    -1,  2532,  2533,    -1,    -1,    -1,
     193,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,  2271,    -1,    -1,    -1,    -1,    -1,    -1,  2585,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2317,    -1,   178,
      -1,    -1,  2322,    -1,    -1,    -1,    -1,    -1,  2328,    -1,
      -1,    -1,    -1,  2333,    -1,   242,    -1,  2337,    -1,  2339,
     247,  2341,    -1,    -1,  2344,    -1,  2346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,  2363,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2686,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,  2720,    -1,    -1,    -1,    -1,    -1,  2423,
    2424,  2425,  2426,  2427,  2731,  2429,  2430,    -1,    -1,    -1,
    2434,  2435,  2436,  2437,  2438,    -1,  2440,  2441,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2789,    -1,    -1,    -1,  2793,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,    -1,    -1,    -1,    -1,
      -1,    -1,  2522,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2538,    -1,
      -1,    -1,    -1,  2850,  2851,    -1,  2853,    -1,    -1,    -1,
      -1,  2858,  2859,    -1,    -1,    -1,    -1,  2864,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2580,    -1,    -1,    -1,    -1,    -1,    -1,  2587,    -1,    -1,
      -1,  2898,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2614,    -1,  2616,    -1,  2622,    -1,
      -1,    -1,    -1,  2930,    -1,    -1,    -1,  2631,  2632,  2633,
    2634,  2635,    -1,  2637,  2638,    -1,  2640,  2641,  2642,  2643,
    2644,    -1,  2646,  2647,    -1,  2649,  2650,  2651,  2652,  2653,
      -1,  2655,  2656,    -1,  2658,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2668,  2669,    20,    21,    22,    -1,
      -1,    20,    21,    22,    -1,  2679,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2684,    -1,    -1,    -1,    -1,    -1,
    2690,    -1,    -1,    -1,  2694,    -1,    -1,    51,    52,    -1,
      -1,    55,    51,    52,    58,    -1,    55,    -1,    -1,    -1,
    2710,    65,    -1,    62,    -1,    69,    65,    -1,  3025,    -1,
      69,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      79,    80,    -1,    87,    88,    -1,  3043,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    98,
    3057,   105,    -1,  3060,    -1,    -1,    -1,    -1,    -1,   113,
      -1,    19,    -1,   117,   118,  2765,  2766,   121,   117,   118,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,
      -1,    -1,    -1,    -1,   163,  2819,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,  2828,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2837,    -1,  2839,    -1,    -1,   192,  2843,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    19,    -1,   107,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2879,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,
      -1,    -1,   251,    -1,   253,   259,   260,   107,    -1,    -1,
     259,   260,    -1,    -1,    -1,   173,    -1,    19,    -1,    -1,
      -1,   275,   276,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,   287,   288,   107,  2940,    -1,  2942,   288,
    2944,    -1,    -1,  2947,    -1,  2949,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   317,    -1,   319,    -1,    -1,   317,    99,
     319,    -1,    -1,   173,    -1,    -1,    -1,   107,   332,    -1,
     334,   330,    -1,    -1,   242,    -1,    -1,   341,  2988,   247,
      -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,  3012,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   375,    -1,    -1,    -1,    -1,   375,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,  3058,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,   247,    -1,    -1,    -1,  3079,
      -1,    -1,  3082,    -1,    -1,    -1,    -1,    -1,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,    -1,   247,    -1,    -1,
      -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    42,    -1,    -1,    45,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     150,    -1,    -1,    -1,   154,    -1,    -1,    -1,   158,    -1,
      -1,    -1,   162,   163,    -1,    -1,    -1,    -1,   168,   169,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,   178,    -1,
      -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,   199,
     200,   201,    -1,    -1,   204,   205,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,
      -1,   241,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,    42,
      -1,    -1,    45,   263,    -1,    48,    -1,   267,    -1,    -1,
      -1,   271,    -1,   273,    -1,   275,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,   296,    -1,    -1,    82,
      -1,    84,   302,    -1,    -1,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    -1,    -1,    99,    -1,   101,    -1,
     320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   333,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,   342,    -1,    -1,   345,   346,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,
     163,    -1,   165,   166,   384,   168,   169,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,   178,    -1,    -1,    -1,    -1,
      -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,   205,    -1,    -1,    -1,   209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,    -1,    -1,
      -1,   344,    -1,   346,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   384
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    42,    45,    48,    62,    67,    68,    72,    73,    74,
      82,    89,    91,    92,   101,   102,   127,   137,   150,   154,
     158,   162,   163,   168,   169,   172,   178,   184,   195,   199,
     200,   201,   204,   205,   217,   221,   239,   241,   242,   254,
     256,   263,   267,   271,   273,   275,   280,   296,   302,   320,
     321,   333,   335,   342,   345,   346,   376,   384,   391,    69,
      11,    56,    76,   106,   128,   132,   147,   326,   427,     3,
       4,   326,   392,   432,   209,   215,   258,   285,   337,   382,
     434,   317,     4,    41,   119,   168,   169,   216,   217,   273,
     439,    29,   164,   193,   197,   255,   298,   307,   308,   407,
     441,    88,    98,   105,   195,   244,   280,   442,    41,    62,
     119,   216,   321,   392,   451,     4,    19,    41,    59,   107,
     129,   173,   216,   226,   235,   236,   242,   247,   329,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   379,   386,
     387,   394,   402,   403,   404,   453,    34,   454,   394,    45,
      48,    81,    89,   155,   214,   243,   245,   273,   346,   393,
     394,    67,   392,   456,   158,   457,    42,    45,    48,    68,
      72,    73,    74,    82,    84,    89,    91,    92,    93,    99,
     101,   136,   154,   163,   165,   166,   168,   169,   172,   176,
     178,   184,   204,   205,   209,   217,   221,   239,   241,   248,
     273,   275,   302,   320,   321,   330,   338,   344,   346,   384,
     458,    88,   105,   509,    19,    42,    45,    82,    89,   100,
     101,   107,   136,   154,   172,   173,   179,   204,   247,   302,
     315,   346,   512,    69,   394,    64,   315,   340,   596,    64,
     315,   340,   595,    93,   124,   207,   224,   289,   335,   346,
     518,    15,     4,    47,    50,    69,    88,   105,   111,   162,
     185,   296,   324,   325,   336,   340,   578,    26,   120,   136,
     175,   232,   246,   521,   257,   539,     5,    69,    93,   152,
     335,   384,   394,   540,     5,   541,    60,   143,   252,   267,
     337,   558,    47,    67,    69,   203,   266,   315,   325,   579,
     315,   594,    69,   227,   378,   386,   388,   580,    40,   216,
     258,   326,   392,   402,   404,   581,     5,   335,   346,   394,
     584,    75,   188,   272,   282,   585,     4,   586,    93,   558,
      64,   315,   340,   593,   216,   326,   392,   597,    26,   120,
     136,   232,   246,   383,   599,    53,   105,   116,   149,   328,
     621,   622,     4,    38,    49,    79,   163,   208,   282,   292,
     314,   322,   340,   420,     4,   136,   231,   623,   326,   392,
     625,    15,    23,   268,   271,   403,   626,   257,   630,   326,
     392,   631,     0,     5,   394,    62,   392,   428,   299,     5,
       4,   326,   392,   429,     5,    33,   313,   430,   135,   392,
     431,   135,   392,   433,   392,     4,   215,   270,   277,   437,
     209,   337,   381,   382,   392,   436,   394,   151,   196,   435,
     221,   392,    83,   192,   277,   392,   438,     5,   392,   392,
     392,     4,   168,   169,   217,   273,   440,     4,   392,   392,
       5,   253,   443,     4,    32,   444,     5,   445,     5,   449,
       5,    32,   450,   392,     8,     9,    10,   392,   398,   399,
     400,   401,   392,   392,    41,   119,   216,   392,   452,   392,
     216,   402,   404,   392,    36,   114,   139,   140,   148,   170,
     180,   409,   392,     4,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   126,    69,    56,    76,    93,   106,
     128,   132,   147,   194,   461,   128,   463,   209,   215,   258,
     285,   337,   381,   382,   392,   446,   464,   317,   467,   188,
     468,   188,   197,   470,    68,    69,    74,    97,    98,   188,
     208,   233,   302,   375,   402,   472,   392,   404,   475,    62,
     321,   402,   476,   311,   402,   404,   477,    34,   478,   402,
     404,   479,     4,   402,   404,   480,    46,    62,    86,   106,
     126,   130,   160,   161,   223,   234,   299,   300,   375,   484,
     238,   339,   490,    69,     5,    94,    64,   315,   340,   498,
      64,   315,   340,   497,     4,    93,   130,   482,     5,    68,
     404,   481,    15,    47,    69,    86,   185,   325,   340,   491,
     558,    47,    69,    86,   203,   266,   315,   325,   492,   315,
     496,    69,   258,   494,   316,    64,   315,   340,   495,    21,
     147,   265,   297,   499,    38,    49,    79,   163,   208,   282,
     292,   340,   500,   404,    94,    15,   220,   507,   402,   510,
      69,    77,   513,    32,   514,    45,    92,   214,   515,   163,
     244,   288,   331,   516,   402,    17,    61,   123,   193,   321,
     402,   517,     5,     5,   167,   281,   338,   402,     4,     5,
     167,   281,   402,     4,     4,   215,   520,     5,     4,     4,
     130,   392,     4,    47,    50,    69,   105,   111,   162,   296,
     324,   325,   336,   340,    69,    70,    71,    96,   109,   125,
     157,   167,   189,   198,   218,   240,   281,   286,   303,   306,
     406,     5,     4,   392,   394,     5,   168,   169,   273,   522,
       5,   524,     5,   126,   168,   169,   214,   273,   300,   525,
      99,   119,   209,   538,     5,   536,     5,   300,   537,     4,
       5,   394,   394,   392,   392,     5,     4,     5,    63,    69,
      78,    80,    85,    88,    94,    98,   105,   113,   122,   141,
     163,   181,   194,   195,   219,   244,   258,   260,   275,   280,
     288,   296,   317,   331,   332,   334,   375,   542,   406,     5,
       4,   221,   229,   230,   266,   380,   405,   392,   402,   392,
     402,     5,   392,    41,   119,   392,   583,   394,   392,   402,
     404,   582,   392,   409,   392,     4,   403,    57,    95,   153,
     273,   587,     4,     4,   392,     4,   163,   288,   588,     5,
     402,     4,    41,   119,   392,   598,   392,   103,    64,   130,
     168,   169,   273,   304,   601,   130,   620,    64,   126,   130,
     168,   169,   173,   214,   269,   273,   300,   304,   316,   602,
     603,    64,   130,   304,   619,     5,    64,   130,   304,   600,
       4,    35,   115,   227,   592,    69,   394,   423,    69,   394,
     424,    69,   394,   425,    12,   134,   211,   591,   392,    18,
     228,   312,   394,   421,     4,   392,   251,   392,   426,   392,
     300,     4,   392,   392,     4,   252,   326,   629,     4,   319,
     627,     4,   319,   628,     4,   409,   135,   392,   632,   392,
     392,     4,     5,   392,    11,   392,   392,   392,    31,   100,
     179,   277,   283,   408,   408,     4,   221,   392,   392,     4,
       4,     4,   392,   392,   392,   392,   392,   392,     4,   392,
       4,   392,     4,     4,     4,     5,     5,   402,     5,   392,
     392,   398,   400,   400,   402,   392,   392,   392,   392,   392,
     392,   392,   402,   404,   401,   392,   392,   401,   392,     5,
     299,   110,   209,   462,   215,   277,   465,   188,    83,   192,
     277,   466,   151,   196,   447,   447,     4,   469,     4,   471,
     215,   285,   473,   197,   474,   188,   409,   392,   392,   402,
     402,   409,   409,   409,   402,   409,   392,   402,     4,   487,
       4,   404,   485,   220,     4,   182,   346,   486,   220,   402,
       4,   144,   326,   489,     5,     5,   459,     4,   220,   146,
     274,   395,   392,     4,   493,   493,   493,   493,     4,     5,
      20,    63,    69,    98,   122,   141,   156,   163,   171,   233,
     253,   258,   260,   287,   288,   296,   317,   375,   552,   404,
     210,   210,    69,   503,    69,   504,    69,   505,    18,   228,
     312,   501,   251,   506,   392,     5,   460,   252,   508,   403,
     409,     5,   402,   402,   402,   402,     4,     4,     4,   394,
       4,     4,   220,   392,   406,     5,   392,   394,    13,    14,
      64,   212,   213,   293,   304,   305,   339,    92,    92,    92,
       5,     5,    13,    14,    64,   212,   213,   293,   304,   305,
     309,   339,    92,    92,   173,    92,   173,   173,   178,   403,
     528,   533,    92,   173,     5,   526,     4,     4,    13,    64,
     212,   293,   304,   339,     5,     5,     4,   392,   403,    20,
      21,    22,    51,    52,    55,    58,    65,    69,    79,    80,
      87,    88,    98,   105,   113,   117,   118,   121,   141,   163,
     192,   219,   251,   253,   259,   260,   275,   276,   287,   288,
     317,   319,   332,   334,   341,   375,    69,    85,    94,   105,
     141,   163,   219,   260,   288,   332,   334,     4,    31,   177,
     238,   265,   545,     5,    66,   112,   262,   278,   279,   377,
     378,   551,   105,   543,     4,    16,   288,   549,    41,   119,
     216,   550,     4,     5,    16,   237,   327,   392,   288,   551,
     559,   136,   551,   560,    37,    41,   119,   145,   216,   326,
     392,   561,   402,   394,    97,   105,   113,   131,   138,   163,
     174,   219,   227,   275,   288,   306,   564,    41,   119,   216,
       5,   288,   318,   568,    16,   133,   186,   237,   327,   569,
     319,   394,   570,     5,   105,   113,   335,    16,    16,     4,
     392,   392,   392,   392,   392,   392,   409,   392,   392,   401,
     392,     4,   409,     4,    41,   119,   216,   294,   589,    41,
     119,   216,   294,   590,     4,   103,     5,     5,    92,    92,
      92,     4,     5,     5,    92,     5,    92,   173,    92,   173,
     603,    64,   130,   173,   304,   607,    64,   130,   304,   618,
      92,   173,    64,   130,   304,   605,     4,    64,   130,   304,
     604,     5,     5,     4,     5,     5,     4,     4,     5,     5,
       5,   392,   312,   394,   422,   392,   392,   392,   392,     4,
     392,   624,   392,   392,   403,    67,     4,     4,     5,     4,
       4,     5,     4,   103,   290,   410,   392,   392,    11,     5,
      11,   392,   392,    11,     4,    11,     4,     4,   392,   392,
     392,   392,   392,     4,   392,     5,   392,     4,   394,     4,
       4,   409,   402,   409,   392,   392,   392,   402,   392,   401,
     392,   392,     5,     5,   392,   404,   392,   402,   392,   409,
     409,   410,   410,   410,   409,   401,   392,   409,   392,   395,
     488,   182,     5,     4,   409,   173,   173,     4,     5,     4,
       4,   392,   483,    39,    39,   392,    20,    21,    22,    51,
      52,    55,    62,    65,    69,    79,    80,    87,    98,   117,
     118,   121,   141,   163,   192,   202,   251,   253,   259,   260,
     276,   288,   317,   319,   330,   341,   375,    69,   141,   171,
     260,   317,   310,    31,   177,   238,   265,   553,   392,   233,
     392,   554,    16,   392,   287,   564,   287,   233,   392,   555,
     319,   556,    16,   104,   392,   312,   502,   392,     5,   410,
       4,     4,    59,   402,     4,     5,   519,   392,     5,     5,
       5,   173,   205,   414,   414,   181,   295,   412,     4,     4,
       5,     5,   523,   523,   523,   301,   301,     5,     5,     5,
      16,   175,   413,   413,   412,     4,     4,   412,     5,     5,
     527,     5,   534,     5,   535,   534,   535,   178,   374,   403,
     531,     5,   530,     5,   534,   535,     5,    13,    14,    64,
     212,   213,   293,   304,   305,   309,   339,     4,     4,     5,
       5,   414,   412,     4,     5,     5,   409,    87,   165,   249,
     250,   264,   310,   417,     6,     7,   392,   397,   265,   265,
     265,   113,    41,    69,   105,   113,   119,   141,   163,   181,
     219,   260,   275,   288,   319,   332,   334,   335,   375,   544,
     265,     5,    27,   183,   265,   315,    28,   151,   330,   113,
      22,    52,    55,    87,   118,   121,   253,   287,     4,    22,
      52,    55,    58,    87,   118,   121,   253,   287,   317,    41,
     265,   265,   113,     5,   237,    27,   251,    37,   145,   326,
     392,   291,   299,   251,   271,   402,   564,    41,   142,   251,
     315,   271,   237,     5,     5,   275,    27,   251,     4,     5,
       5,   237,    37,   145,   326,   392,   564,   237,   394,     4,
       4,   392,     5,   339,    22,    27,    51,    52,    54,    55,
      65,    79,    80,    87,    90,   108,   117,   118,   121,   192,
     253,   259,   276,   287,   318,   319,   341,   388,   546,     4,
     392,   392,   392,   392,   392,   551,   402,     5,     4,     5,
     392,   392,   402,   392,   394,   392,   392,   551,     5,     5,
     392,   392,   394,     5,    16,     5,     5,   392,   392,   401,
     392,   392,     4,   392,   392,   119,   392,   392,   119,     4,
      43,    44,   190,   191,   222,   419,   419,    64,   130,   304,
     615,    64,   130,   304,   612,    64,   130,   304,   609,   419,
       5,    64,   130,   304,   606,    64,   130,   304,   617,    64,
     130,   304,   616,    64,   130,   304,   614,    64,   130,   304,
     613,     5,     5,    64,   130,   304,   608,     4,     5,     5,
       4,    64,   130,   304,   611,    64,   130,   304,   610,     5,
       5,     4,     5,     5,     4,   419,   419,   419,   392,   392,
     392,   392,     4,   402,   392,   409,   403,     5,     5,    11,
     392,   402,   404,   392,    11,   392,   392,   392,    62,   392,
       4,   392,   392,     4,   392,   392,     5,   392,     5,   392,
      48,   302,   448,     5,   394,   394,   409,   392,     4,     4,
       4,   409,   402,   392,   392,   392,   392,   409,   402,   410,
     401,   392,     4,   410,   392,     4,   404,     5,    24,    25,
     103,   411,     4,   402,   392,   392,     4,   392,     5,    87,
     165,   249,   250,   264,   310,   402,   404,   265,   265,   265,
      21,   265,   402,   265,    27,   183,   265,   315,    28,   151,
     330,    21,   265,   265,   265,    21,   265,    27,   187,   251,
     187,   291,   299,   251,   187,   251,   323,   564,   142,   187,
     251,   315,     4,   275,    27,   187,   251,   564,   233,    16,
     385,   392,   392,   392,   392,   392,   392,   220,   392,   392,
      20,   261,   511,     4,     4,   392,   414,   414,   414,     4,
     414,   414,   414,    13,    14,    64,   212,   213,   293,   304,
     305,   339,   413,   414,   414,   414,   414,   414,     4,   414,
     414,     4,   413,    13,    14,    64,   212,   213,   293,   304,
     305,   339,     5,    13,    14,    64,   212,   213,   293,   304,
     305,   309,   339,    13,    14,    64,   212,   213,   293,   304,
     305,   339,     5,   529,     5,   532,     5,     5,    13,    14,
      64,   212,   213,   293,   304,   305,   309,   339,     5,    13,
      14,    64,   212,   213,   293,   304,   305,   309,   339,   301,
       5,     5,     5,   413,   413,   412,     4,     4,   412,     5,
       4,     4,   414,   414,     4,   414,   414,     5,   394,   402,
     404,     5,   392,   392,     5,   392,     5,   397,   113,   219,
     275,   113,   219,   275,     5,   392,   394,     5,   392,   402,
     394,   394,     5,     5,   397,   265,   265,    21,   265,    21,
     265,   265,    21,   265,   343,   343,     4,     4,     4,     4,
     544,     4,     4,     4,   343,   343,     4,     5,     4,   392,
       5,   392,     5,   397,   394,   402,   402,   392,    27,    51,
      54,    65,    90,   108,   388,   415,     4,   402,   392,   409,
     394,     5,   402,   402,   392,   394,   394,   402,   402,   392,
     394,   392,     5,   392,   251,   251,   392,   392,   251,   392,
     251,   392,   392,     4,   547,   392,   251,   251,   392,   392,
     392,   392,   392,   392,   392,   392,     5,   339,   392,   548,
     392,   392,   251,   392,   392,   392,   392,   402,   409,     5,
       4,     4,   392,   392,   409,   392,   392,   392,   402,   551,
     392,   392,     5,     4,   392,   392,   392,   392,     5,     5,
       4,     5,     5,     4,     5,     5,     4,   419,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     4,     4,     5,     5,     4,     4,     5,
       5,     4,     5,     5,     4,   392,   392,   392,   392,   409,
     392,   402,   404,   392,   409,   392,   392,   392,   392,   392,
       5,   392,   392,   392,     4,   392,   392,     5,   392,     5,
     392,     4,   402,     4,   392,   409,   197,   407,   392,   407,
     410,   409,   402,   392,   392,     4,   392,   402,   402,   392,
     395,     5,     5,     5,     5,     5,    99,   402,   409,   402,
     402,   402,   402,   404,   402,   409,   402,   402,   402,   404,
     402,   402,   402,   402,   404,   402,   402,   402,   392,   402,
     402,   402,   402,   402,   402,   402,   402,    99,   392,   392,
       4,   392,     5,   392,   414,     5,     5,     5,   412,     4,
       4,     5,   414,   413,     4,   414,     5,     5,     5,   413,
     413,   412,     4,     4,     5,   301,     5,     5,     5,   413,
     413,   412,     4,     4,   412,     5,     5,     5,     5,   413,
     413,   412,     4,     4,     5,    13,    14,    64,   212,   213,
     293,   304,   305,   339,    13,    14,    64,   212,   213,   293,
     304,   305,   339,    13,    14,    64,   212,   213,   293,   304,
     305,   339,   301,     5,     5,     5,   413,   413,   412,     4,
       4,   412,     5,   301,     5,     5,     5,   413,   413,   412,
       4,     4,   412,     5,   413,     4,     4,   413,     4,     4,
     414,     5,   409,   402,   392,   392,   402,   392,     5,   397,
       5,   402,   394,     5,   402,   409,     5,   397,   392,   392,
     392,   392,   392,   392,   392,   392,   392,     4,     4,     5,
       4,     4,   392,   402,   392,     5,   397,   394,   409,   409,
     409,   392,   401,   409,   409,   392,   409,   409,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   557,   565,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   402,     5,   392,   392,   392,   392,     4,     4,
     409,   410,     5,     5,   401,   392,     4,   409,   402,     4,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   397,
     392,   392,   392,   409,   392,   401,   392,   392,    11,     5,
       5,   392,   392,   392,   392,     5,   392,     4,   392,     4,
     409,     4,   402,   392,   392,   410,   411,   392,     5,   392,
     402,   404,     5,     5,     5,     5,     5,   402,   409,   411,
     411,   411,   409,   411,   410,   411,   411,   409,   411,   411,
     411,   409,   411,   411,   409,   402,   409,   411,   409,   411,
     411,   409,   411,   409,   402,     4,   402,   404,     5,   392,
       4,   414,   413,     4,   413,   413,     4,     4,   413,     4,
     413,     5,     5,     5,   413,   413,   412,     4,     4,     5,
       5,     5,     5,   413,   413,   412,     4,     4,     5,     5,
       5,     5,   413,   413,   412,     4,     4,     5,   413,   414,
     414,   414,   414,   414,     4,   414,   414,     4,   413,   413,
     414,   414,   414,   414,   414,     4,   414,   414,     4,   413,
     413,     4,     4,     4,   403,   411,     4,   402,   411,   392,
     402,     4,   411,   411,   402,     4,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   402,   411,   392,
     402,     4,   401,   401,   410,   402,   401,   401,   402,   402,
     401,   401,   392,   392,   392,   392,   392,   392,   397,   392,
     392,   392,    58,    69,    98,   141,   317,   319,   375,   562,
     563,   564,   576,   577,   397,   392,   392,   392,   392,   397,
     392,   392,   392,   392,   392,   392,   409,   392,   339,   396,
     397,   392,   392,   410,   394,   402,   402,   410,   409,     4,
     392,   401,   392,    62,   392,     5,     5,     4,     4,   392,
     392,     4,   392,     4,   407,   411,     5,   409,     4,     5,
       4,     5,   402,     5,   409,   410,   411,   410,   410,   410,
     410,   409,     5,   409,     4,   392,   414,   413,   413,     4,
     413,   414,   414,   414,   414,   414,     4,   414,   414,   413,
     414,   414,   414,   414,   414,     4,   414,   414,   413,   414,
     414,   414,   414,   414,     4,   414,   414,   413,   414,   413,
       4,   414,   414,   413,     4,   414,   413,   409,   402,   411,
       4,   409,   392,   409,   392,   392,   392,   411,     4,   409,
     392,   401,     5,   411,   392,   401,   411,   411,   402,   392,
       4,   416,   416,   392,   392,   416,   397,   416,   565,   402,
     389,   389,   389,   389,   389,   389,   389,   563,   389,   397,
     416,   416,   392,   392,   397,   392,   392,   392,   392,   392,
     401,   392,     5,   565,   392,   416,   394,   566,   567,   409,
     409,   394,   410,     4,     5,   392,     5,     4,     4,     4,
       4,     4,     4,   392,     4,    33,   206,   313,   455,   402,
       5,    33,   206,   313,   418,   402,     4,   455,   392,   413,
     413,   414,   413,   414,   413,   414,   414,   413,   414,   413,
     392,   411,   402,   402,   392,   402,   392,   402,   402,   392,
     402,   411,     4,   565,   565,   396,   392,   565,     4,   565,
     409,   544,     5,     4,     5,     5,     5,     4,   394,     4,
     565,   565,   396,   392,     4,   565,   565,   392,   402,   565,
     565,   565,   566,   573,   574,   564,   571,   572,   394,     4,
       5,     5,     4,     4,     4,   209,   337,   382,   392,   446,
     455,     4,   402,   455,     4,   414,   414,   414,   414,   414,
     403,   411,   411,   392,   411,     4,   411,   411,   392,   411,
     392,   565,   565,     4,   392,   565,     5,     4,   392,   565,
       4,   392,   565,   409,   573,   575,   576,   389,   572,     5,
       5,   392,   447,   392,   447,   409,   411,     4,   402,   404,
       4,   397,   396,   392,     5,   392,   396,   392,   402,   576,
     394,     5,     5,   392,   392,   392,   392,   418,     5,   402,
     404,   409,   402,   404,   565,   392,     4,   565,   392,   411,
       5,     5,   392,     5,   392,   409,   409,     4,   565,     4,
       5,     5,     5,   396,   396,   565,   565,   565
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, frFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    frFlexLexer* ll;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
int yyparse (Base* fr, frFlexLexer* ll);
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
yyparse (Base* fr, frFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    frFlexLexer* ll;
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
        case 4:
#line 498 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 499 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 501 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 502 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 504 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 511 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 517 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 518 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 519 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 523 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 532 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 536 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 539 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 544 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 546 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 548 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 550 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 557 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 558 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 561 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 562 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 563 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 564 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 565 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 566 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 567 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 568 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 569 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 570 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 571 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 574 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 576 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 577 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 578 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 579 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 581 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 582 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 583 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 584 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 588 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 591 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 594 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 595 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 598 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 599 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 600 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 603 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 606 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 609 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 613 "frame/parser.Y"
    {
	  Vector r;
	  if (currentSky == Coord::GALACTIC || currentSky == Coord::ECLIPTIC)
	    r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  else
	    r = Vector((yyvsp[(1) - (2)].real)*360./24.,(yyvsp[(2) - (2)].real));

	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 625 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 632 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 639 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 650 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 725 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 728 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 738 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 741 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 742 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 743 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 747 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 748 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 749 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 757 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 758 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 759 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 777 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 778 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 800 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 807 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 808 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 810 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 811 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 813 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 816 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 817 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 818 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 822 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 823 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 826 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 827 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 830 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 831 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 834 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 835 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 838 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 840 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 844 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 845 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 848 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 850 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 853 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 854 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 857 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 858 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 860 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 862 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 863 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 864 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 866 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 868 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 871 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 872 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 875 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 877 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 880 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 882 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 885 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 889 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 890 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 894 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 895 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 896 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 902 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 903 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 906 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 911 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 912 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 916 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 917 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 919 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 922 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 923 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 924 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 925 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 935 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 940 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 947 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 949 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 951 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 953 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 955 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 962 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 964 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 966 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 968 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 970 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 972 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 973 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 314:
#line 977 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 319:
#line 985 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 988 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 321:
#line 991 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 997 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 323:
#line 1002 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 324:
#line 1005 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 325:
#line 1006 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 326:
#line 1009 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 327:
#line 1010 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1012 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 329:
#line 1018 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 330:
#line 1019 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 331:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 332:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 333:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 334:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 335:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 336:
#line 1029 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 337:
#line 1032 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 338:
#line 1033 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 1035 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 340:
#line 1039 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 341:
#line 1041 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 342:
#line 1044 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 343:
#line 1046 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 344:
#line 1049 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 346:
#line 1051 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1052 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 348:
#line 1053 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1056 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 350:
#line 1058 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1059 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1060 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1065 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 355:
#line 1067 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 356:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 357:
#line 1069 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 358:
#line 1072 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 359:
#line 1074 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 362:
#line 1081 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 363:
#line 1084 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 364:
#line 1085 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 365:
#line 1086 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 367:
#line 1090 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 368:
#line 1091 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 369:
#line 1094 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 370:
#line 1097 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 371:
#line 1098 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 385:
#line 1112 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 388:
#line 1115 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 389:
#line 1116 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 395:
#line 1122 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 396:
#line 1123 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 401:
#line 1128 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 402:
#line 1129 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 404:
#line 1132 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 406:
#line 1134 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 408:
#line 1136 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 410:
#line 1138 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 411:
#line 1140 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 414:
#line 1143 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 415:
#line 1147 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1149 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1153 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 418:
#line 1155 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 419:
#line 1158 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 420:
#line 1159 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 421:
#line 1160 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 422:
#line 1161 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 423:
#line 1162 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 424:
#line 1163 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 426:
#line 1165 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 427:
#line 1168 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 428:
#line 1169 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 429:
#line 1170 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 430:
#line 1173 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 431:
#line 1176 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 432:
#line 1178 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 433:
#line 1180 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1181 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 435:
#line 1182 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 437:
#line 1184 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 439:
#line 1187 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 440:
#line 1193 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 445:
#line 1202 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 448:
#line 1209 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1211 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 450:
#line 1213 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 451:
#line 1216 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 453:
#line 1218 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 454:
#line 1222 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 455:
#line 1226 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 457:
#line 1228 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 458:
#line 1229 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 459:
#line 1230 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 460:
#line 1231 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 461:
#line 1232 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 462:
#line 1233 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 469:
#line 1244 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 470:
#line 1245 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 471:
#line 1249 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 472:
#line 1251 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 473:
#line 1259 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 474:
#line 1261 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 475:
#line 1263 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 476:
#line 1266 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1268 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 478:
#line 1269 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 479:
#line 1272 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 480:
#line 1275 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1277 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 482:
#line 1281 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 483:
#line 1283 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 484:
#line 1286 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 485:
#line 1290 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 486:
#line 1291 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 487:
#line 1293 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 488:
#line 1296 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1297 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 491:
#line 1301 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 492:
#line 1302 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1303 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 494:
#line 1306 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 495:
#line 1308 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 496:
#line 1309 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 498:
#line 1311 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 502:
#line 1315 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 503:
#line 1316 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 504:
#line 1317 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 505:
#line 1319 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 507:
#line 1321 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 508:
#line 1324 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 509:
#line 1326 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 510:
#line 1328 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 511:
#line 1329 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 512:
#line 1330 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 513:
#line 1331 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 514:
#line 1334 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 515:
#line 1335 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 516:
#line 1339 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1341 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 518:
#line 1344 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 519:
#line 1347 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 520:
#line 1348 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 521:
#line 1350 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 522:
#line 1352 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 523:
#line 1354 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 524:
#line 1357 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 525:
#line 1358 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 526:
#line 1359 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 527:
#line 1362 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 528:
#line 1363 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 529:
#line 1364 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1365 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1366 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 532:
#line 1367 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1370 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 534:
#line 1371 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 535:
#line 1372 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 536:
#line 1373 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 537:
#line 1374 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 538:
#line 1375 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 539:
#line 1376 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 540:
#line 1379 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 541:
#line 1380 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 542:
#line 1383 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 543:
#line 1386 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 544:
#line 1387 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 545:
#line 1388 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 546:
#line 1391 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 547:
#line 1394 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 548:
#line 1395 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 549:
#line 1396 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 551:
#line 1400 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 552:
#line 1401 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 554:
#line 1405 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 555:
#line 1406 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 556:
#line 1407 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 557:
#line 1408 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 558:
#line 1409 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 563:
#line 1416 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 564:
#line 1417 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 566:
#line 1419 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 567:
#line 1422 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 568:
#line 1423 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 569:
#line 1424 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 571:
#line 1428 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 572:
#line 1429 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 573:
#line 1432 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 574:
#line 1433 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 575:
#line 1436 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 576:
#line 1437 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 578:
#line 1441 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 580:
#line 1445 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 583:
#line 1450 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 585:
#line 1454 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 587:
#line 1458 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 588:
#line 1462 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 589:
#line 1465 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 590:
#line 1472 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 591:
#line 1473 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 592:
#line 1476 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 593:
#line 1477 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 596:
#line 1480 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 597:
#line 1481 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 598:
#line 1482 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 599:
#line 1483 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 601:
#line 1485 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 602:
#line 1486 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 603:
#line 1487 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 605:
#line 1489 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 606:
#line 1490 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 607:
#line 1491 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 608:
#line 1492 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1496 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 611:
#line 1499 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 612:
#line 1500 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 613:
#line 1503 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 614:
#line 1504 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 615:
#line 1505 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 616:
#line 1506 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 617:
#line 1509 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 618:
#line 1510 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 619:
#line 1511 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 620:
#line 1512 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 621:
#line 1515 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 622:
#line 1516 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 623:
#line 1517 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1518 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 625:
#line 1519 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 626:
#line 1520 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 627:
#line 1523 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 628:
#line 1524 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 629:
#line 1525 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 632:
#line 1529 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1530 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 634:
#line 1533 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 635:
#line 1536 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 636:
#line 1537 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 637:
#line 1541 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 638:
#line 1543 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 639:
#line 1544 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1561 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1577 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1580 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 662:
#line 1581 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1586 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1589 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 668:
#line 1593 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1595 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1601 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1603 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1607 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 676:
#line 1610 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1612 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1614 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1626 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1627 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1628 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1629 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1630 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 693:
#line 1631 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1633 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 695:
#line 1635 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 696:
#line 1636 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1637 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1638 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 699:
#line 1641 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1644 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1645 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1647 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 705:
#line 1648 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1649 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1650 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 713:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 719:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 727:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 730:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 739:
#line 1743 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 748:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 758:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 759:
#line 1801 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1804 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1807 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 762:
#line 1811 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1812 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 764:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 766:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 767:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1818 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 769:
#line 1820 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 770:
#line 1821 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1822 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1823 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 773:
#line 1826 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 776:
#line 1829 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1830 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 780:
#line 1834 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 781:
#line 1835 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 782:
#line 1839 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1842 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 785:
#line 1844 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1856 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1857 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {;}
    break;

  case 794:
#line 1863 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 795:
#line 1864 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 796:
#line 1865 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 797:
#line 1866 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 799:
#line 1868 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 800:
#line 1869 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 801:
#line 1873 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 803:
#line 1881 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 804:
#line 1882 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 805:
#line 1884 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1886 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 807:
#line 1887 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 808:
#line 1888 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 810:
#line 1889 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 813:
#line 1892 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 814:
#line 1893 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 815:
#line 1895 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 816:
#line 1897 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 817:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 818:
#line 1902 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 820:
#line 1905 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 821:
#line 1907 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 822:
#line 1910 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 823:
#line 1913 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 824:
#line 1917 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 825:
#line 1920 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 826:
#line 1923 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 827:
#line 1926 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 828:
#line 1930 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 829:
#line 1934 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 831:
#line 1943 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 833:
#line 1946 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1948 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 836:
#line 1952 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 837:
#line 1954 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 838:
#line 1955 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1956 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1958 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 841:
#line 1960 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 842:
#line 1962 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 843:
#line 1965 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 844:
#line 1969 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 845:
#line 1973 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1975 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1977 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 853:
#line 1989 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 854:
#line 1991 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 855:
#line 1993 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 2002 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2004 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 862:
#line 2005 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2006 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2008 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 865:
#line 2010 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 866:
#line 2011 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 867:
#line 2012 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 2013 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2015 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 871:
#line 2021 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2024 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 873:
#line 2027 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 874:
#line 2031 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 875:
#line 2035 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 876:
#line 2040 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2044 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 878:
#line 2045 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 879:
#line 2046 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 880:
#line 2048 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 881:
#line 2050 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 882:
#line 2054 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 883:
#line 2055 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 884:
#line 2056 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 885:
#line 2058 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 886:
#line 2061 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 887:
#line 2064 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 888:
#line 2067 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 889:
#line 2070 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2071 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 891:
#line 2075 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 892:
#line 2079 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 893:
#line 2081 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 894:
#line 2082 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 895:
#line 2084 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 896:
#line 2087 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 897:
#line 2090 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 898:
#line 2091 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 899:
#line 2093 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 900:
#line 2094 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 901:
#line 2095 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2097 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 903:
#line 2098 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2100 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 905:
#line 2103 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 906:
#line 2106 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 907:
#line 2107 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2109 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 909:
#line 2110 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 913:
#line 2115 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 914:
#line 2116 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 915:
#line 2118 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 916:
#line 2120 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 917:
#line 2122 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 918:
#line 2123 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 922:
#line 2129 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 923:
#line 2130 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 924:
#line 2131 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 925:
#line 2132 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 926:
#line 2133 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 927:
#line 2134 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 928:
#line 2135 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2136 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 930:
#line 2137 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 931:
#line 2138 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2140 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 933:
#line 2142 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2143 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 935:
#line 2144 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2145 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 937:
#line 2146 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 938:
#line 2148 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 939:
#line 2149 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 940:
#line 2150 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 941:
#line 2151 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 942:
#line 2152 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 943:
#line 2154 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 944:
#line 2155 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 945:
#line 2156 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 946:
#line 2157 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 947:
#line 2158 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 948:
#line 2159 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 949:
#line 2160 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 950:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 951:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 952:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 953:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 954:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 955:
#line 2168 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 956:
#line 2169 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 957:
#line 2170 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 958:
#line 2171 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 959:
#line 2172 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 960:
#line 2173 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 961:
#line 2174 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 962:
#line 2175 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 963:
#line 2176 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 964:
#line 2177 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 965:
#line 2178 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 966:
#line 2179 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 967:
#line 2180 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 968:
#line 2181 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 969:
#line 2182 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 970:
#line 2183 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 971:
#line 2186 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 972:
#line 2187 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 973:
#line 2188 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 974:
#line 2189 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 975:
#line 2190 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 976:
#line 2192 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 977:
#line 2202 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2210 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2219 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2227 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2234 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2241 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2249 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2257 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2262 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2267 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2272 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2277 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2282 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2287 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2292 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2301 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2311 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2321 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2330 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2338 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 997:
#line 2348 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2358 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2368 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2380 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2389 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2397 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1004:
#line 2399 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1005:
#line 2408 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1006:
#line 2410 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1007:
#line 2412 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1008:
#line 2417 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1009:
#line 2420 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1010:
#line 2421 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1011:
#line 2422 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1012:
#line 2429 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1013:
#line 2431 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1014:
#line 2432 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1015:
#line 2435 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1016:
#line 2436 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1017:
#line 2437 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1018:
#line 2438 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1019:
#line 2439 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1020:
#line 2440 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1021:
#line 2441 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1023:
#line 2445 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1024:
#line 2446 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1025:
#line 2447 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1026:
#line 2448 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1027:
#line 2449 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1028:
#line 2452 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1029:
#line 2454 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1030:
#line 2456 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1031:
#line 2458 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1032:
#line 2460 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1033:
#line 2462 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2464 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1035:
#line 2466 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1036:
#line 2468 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1037:
#line 2470 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1038:
#line 2471 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1039:
#line 2472 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1040:
#line 2474 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1041:
#line 2476 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1042:
#line 2479 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1043:
#line 2481 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1044:
#line 2482 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1045:
#line 2483 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1046:
#line 2485 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2487 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2490 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2493 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2494 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1051:
#line 2495 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1052:
#line 2496 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1053:
#line 2498 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2499 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1055:
#line 2500 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2501 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2502 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1058:
#line 2503 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1059:
#line 2504 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1060:
#line 2506 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1061:
#line 2508 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1062:
#line 2510 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1063:
#line 2512 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2514 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1065:
#line 2515 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1066:
#line 2517 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2519 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2521 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1069:
#line 2522 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1070:
#line 2523 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1071:
#line 2525 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2527 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1073:
#line 2530 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1074:
#line 2533 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2534 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1076:
#line 2536 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1077:
#line 2539 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1078:
#line 2542 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2545 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2546 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1081:
#line 2547 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1082:
#line 2548 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1083:
#line 2550 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2552 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1085:
#line 2554 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1086:
#line 2555 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1087:
#line 2557 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1088:
#line 2558 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1089:
#line 2559 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1090:
#line 2560 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2561 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1092:
#line 2563 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2565 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1094:
#line 2567 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1095:
#line 2569 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1096:
#line 2570 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1098:
#line 2572 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1099:
#line 2573 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1100:
#line 2575 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1101:
#line 2577 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1102:
#line 2578 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1103:
#line 2579 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1105:
#line 2581 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1107:
#line 2585 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1108:
#line 2586 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1109:
#line 2587 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1110:
#line 2588 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1111:
#line 2589 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1112:
#line 2590 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1113:
#line 2592 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1114:
#line 2593 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1115:
#line 2595 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1116:
#line 2596 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1117:
#line 2599 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1118:
#line 2600 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1119:
#line 2601 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1120:
#line 2602 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1121:
#line 2605 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1122:
#line 2606 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1124:
#line 2610 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1125:
#line 2613 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1126:
#line 2614 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1127:
#line 2617 "frame/parser.Y"
    {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	;}
    break;

  case 1128:
#line 2630 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1129:
#line 2631 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1130:
#line 2635 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1131:
#line 2636 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1132:
#line 2640 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1133:
#line 2641 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1134:
#line 2646 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1135:
#line 2650 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1136:
#line 2655 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1137:
#line 2657 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1138:
#line 2660 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1139:
#line 2662 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1140:
#line 2665 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1141:
#line 2667 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1142:
#line 2670 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1143:
#line 2671 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1144:
#line 2672 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1145:
#line 2673 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2674 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2675 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1148:
#line 2677 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1151:
#line 2684 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1152:
#line 2685 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1153:
#line 2686 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1154:
#line 2687 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1155:
#line 2688 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1156:
#line 2689 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1159:
#line 2694 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1160:
#line 2695 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1161:
#line 2696 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1162:
#line 2697 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1163:
#line 2698 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1164:
#line 2699 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1165:
#line 2700 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1166:
#line 2701 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1167:
#line 2702 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1168:
#line 2703 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1169:
#line 2704 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1170:
#line 2705 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1173:
#line 2712 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1174:
#line 2713 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1176:
#line 2717 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1177:
#line 2719 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1178:
#line 2720 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1179:
#line 2723 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1180:
#line 2724 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1181:
#line 2725 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1182:
#line 2726 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1183:
#line 2727 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1184:
#line 2728 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1185:
#line 2731 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1186:
#line 2732 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1189:
#line 2740 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2743 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1191:
#line 2744 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1196:
#line 2754 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1197:
#line 2758 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1198:
#line 2759 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1199:
#line 2760 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1200:
#line 2761 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2762 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2763 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1203:
#line 2764 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2765 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2766 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1206:
#line 2767 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1207:
#line 2768 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2769 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2771 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1210:
#line 2772 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1211:
#line 2773 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1212:
#line 2774 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1213:
#line 2775 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1214:
#line 2776 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1215:
#line 2777 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1220:
#line 2782 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1221:
#line 2783 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1222:
#line 2784 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1223:
#line 2787 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1224:
#line 2788 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2789 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2790 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1227:
#line 2791 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2792 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1229:
#line 2793 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2794 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1232:
#line 2801 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1233:
#line 2802 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1234:
#line 2803 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1235:
#line 2807 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1236:
#line 2808 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1238:
#line 2815 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1240:
#line 2817 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1242:
#line 2819 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2822 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1244:
#line 2824 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1245:
#line 2829 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1246:
#line 2832 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1247:
#line 2833 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1248:
#line 2834 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1249:
#line 2837 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2839 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1251:
#line 2843 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2844 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2849 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2850 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2851 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1257:
#line 2857 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1258:
#line 2858 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1259:
#line 2864 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1260:
#line 2865 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1261:
#line 2866 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1262:
#line 2867 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1265:
#line 2875 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1266:
#line 2877 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1267:
#line 2878 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1268:
#line 2879 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1269:
#line 2883 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1270:
#line 2884 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1271:
#line 2885 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1272:
#line 2886 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1273:
#line 2889 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1274:
#line 2890 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1275:
#line 2891 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1276:
#line 2894 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1277:
#line 2895 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1278:
#line 2896 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1279:
#line 2899 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1280:
#line 2900 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2901 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1282:
#line 2905 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1283:
#line 2908 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1284:
#line 2909 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1285:
#line 2910 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1286:
#line 2911 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1287:
#line 2912 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1288:
#line 2915 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1289:
#line 2916 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1290:
#line 2917 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1291:
#line 2918 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1292:
#line 2919 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2920 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1294:
#line 2923 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1295:
#line 2924 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1297:
#line 2926 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1298:
#line 2927 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1299:
#line 2930 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1300:
#line 2931 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1301:
#line 2932 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1307:
#line 2940 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1308:
#line 2943 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1309:
#line 2944 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1310:
#line 2945 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2949 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1312:
#line 2951 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1313:
#line 2953 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1330:
#line 2974 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 2975 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1332:
#line 2976 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2979 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 2980 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2981 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1336:
#line 2984 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2985 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2986 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 2989 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2990 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2991 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1343:
#line 2995 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1344:
#line 2996 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1345:
#line 2997 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1346:
#line 3000 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3001 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3002 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1349:
#line 3006 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1350:
#line 3008 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3010 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3013 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3014 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3015 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1355:
#line 3018 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3019 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1357:
#line 3020 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1358:
#line 3024 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1359:
#line 3026 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1360:
#line 3028 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1361:
#line 3031 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3032 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1363:
#line 3033 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1364:
#line 3036 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3037 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1366:
#line 3038 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1367:
#line 3042 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1368:
#line 3044 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1369:
#line 3046 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3051 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3054 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3055 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3056 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3059 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3060 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3061 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3065 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1380:
#line 3067 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1381:
#line 3069 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1382:
#line 3073 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1383:
#line 3077 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1384:
#line 3079 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1385:
#line 3083 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1386:
#line 3086 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1387:
#line 3087 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1388:
#line 3088 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1389:
#line 3089 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1390:
#line 3092 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1391:
#line 3094 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1392:
#line 3096 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1393:
#line 3099 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1395:
#line 3103 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1396:
#line 3104 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1397:
#line 3105 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3108 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1399:
#line 3109 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1400:
#line 3113 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3115 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1405:
#line 3120 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1406:
#line 3121 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1407:
#line 3122 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1408:
#line 3125 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1409:
#line 3126 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1410:
#line 3127 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1411:
#line 3130 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1412:
#line 3132 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1413:
#line 3137 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1414:
#line 3138 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1415:
#line 3141 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1416:
#line 3148 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1417:
#line 3150 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1418:
#line 3152 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1419:
#line 3157 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1421:
#line 3161 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1422:
#line 3162 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1423:
#line 3163 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1424:
#line 3165 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1425:
#line 3167 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1426:
#line 3172 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11966 "frame/parser.C"
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


#line 3176 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

