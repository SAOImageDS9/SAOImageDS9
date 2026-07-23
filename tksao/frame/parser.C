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
     ZOOM_ = 639
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
#line 925 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 938 "frame/parser.C"

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
#define YYFINAL  401
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6001

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  389
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  243
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1416
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3084

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   639

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
       2,   388,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   386,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   387,   385,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
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
     853,   861,   863,   866,   869,   872,   875,   878,   881,   895,
     909,   922,   935,   937,   938,   940,   942,   947,   954,   956,
     958,   960,   962,   964,   966,   968,   970,   972,   977,   981,
     986,   987,   994,  1003,  1006,  1010,  1014,  1018,  1019,  1024,
    1029,  1034,  1039,  1043,  1047,  1049,  1053,  1059,  1064,  1069,
    1073,  1076,  1077,  1079,  1081,  1083,  1085,  1087,  1091,  1092,
    1095,  1098,  1101,  1104,  1107,  1110,  1113,  1116,  1119,  1122,
    1125,  1128,  1131,  1134,  1136,  1139,  1142,  1145,  1150,  1154,
    1157,  1160,  1163,  1166,  1169,  1171,  1175,  1178,  1181,  1184,
    1187,  1189,  1192,  1201,  1204,  1206,  1209,  1211,  1214,  1216,
    1221,  1225,  1228,  1230,  1238,  1247,  1255,  1264,  1266,  1268,
    1270,  1273,  1275,  1277,  1280,  1282,  1283,  1286,  1289,  1291,
    1292,  1295,  1298,  1300,  1302,  1305,  1308,  1311,  1313,  1315,
    1317,  1319,  1321,  1323,  1324,  1326,  1329,  1331,  1336,  1342,
    1343,  1346,  1348,  1354,  1357,  1360,  1362,  1364,  1366,  1369,
    1371,  1374,  1376,  1378,  1379,  1381,  1383,  1384,  1386,  1392,
    1399,  1403,  1410,  1414,  1416,  1420,  1422,  1424,  1426,  1430,
    1437,  1445,  1451,  1454,  1456,  1462,  1467,  1469,  1473,  1474,
    1476,  1479,  1481,  1486,  1488,  1491,  1493,  1496,  1500,  1503,
    1505,  1508,  1510,  1515,  1518,  1520,  1522,  1526,  1528,  1531,
    1535,  1538,  1539,  1541,  1543,  1548,  1551,  1552,  1554,  1558,
    1563,  1568,  1569,  1571,  1573,  1575,  1577,  1580,  1583,  1586,
    1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1604,  1606,
    1608,  1610,  1612,  1614,  1616,  1618,  1620,  1622,  1624,  1626,
    1628,  1630,  1632,  1635,  1637,  1640,  1642,  1645,  1648,  1651,
    1654,  1656,  1658,  1661,  1663,  1664,  1666,  1668,  1671,  1672,
    1674,  1675,  1677,  1678,  1680,  1681,  1683,  1684,  1686,  1687,
    1690,  1693,  1694,  1696,  1699,  1701,  1708,  1714,  1716,  1718,
    1720,  1723,  1726,  1729,  1731,  1733,  1735,  1737,  1740,  1742,
    1744,  1746,  1749,  1751,  1753,  1755,  1758,  1761,  1764,  1765,
    1767,  1768,  1770,  1772,  1774,  1776,  1778,  1780,  1782,  1784,
    1787,  1790,  1793,  1795,  1798,  1802,  1804,  1807,  1810,  1815,
    1821,  1823,  1834,  1836,  1839,  1843,  1847,  1850,  1853,  1856,
    1859,  1862,  1865,  1868,  1873,  1878,  1883,  1887,  1891,  1897,
    1902,  1907,  1912,  1916,  1920,  1924,  1928,  1932,  1936,  1939,
    1942,  1947,  1951,  1955,  1959,  1963,  1968,  1973,  1978,  1983,
    1989,  1994,  2001,  2009,  2014,  2019,  2025,  2028,  2032,  2036,
    2040,  2044,  2048,  2052,  2056,  2059,  2063,  2067,  2071,  2075,
    2080,  2084,  2090,  2097,  2101,  2105,  2110,  2114,  2118,  2122,
    2126,  2130,  2136,  2140,  2144,  2149,  2153,  2156,  2159,  2161,
    2165,  2170,  2175,  2180,  2185,  2190,  2197,  2202,  2207,  2213,
    2218,  2223,  2228,  2233,  2239,  2244,  2251,  2259,  2264,  2269,
    2275,  2281,  2287,  2293,  2299,  2305,  2313,  2319,  2325,  2332,
    2337,  2342,  2347,  2352,  2357,  2364,  2369,  2374,  2380,  2386,
    2392,  2398,  2404,  2411,  2417,  2425,  2434,  2440,  2446,  2453,
    2457,  2461,  2465,  2469,  2474,  2478,  2484,  2491,  2495,  2499,
    2504,  2508,  2512,  2516,  2520,  2524,  2530,  2534,  2538,  2543,
    2548,  2553,  2557,  2563,  2568,  2573,  2576,  2580,  2587,  2594,
    2596,  2598,  2600,  2603,  2606,  2609,  2613,  2617,  2620,  2633,
    2636,  2639,  2641,  2645,  2650,  2653,  2654,  2658,  2660,  2663,
    2666,  2669,  2672,  2675,  2680,  2685,  2690,  2694,  2699,  2705,
    2714,  2721,  2731,  2738,  2746,  2757,  2769,  2782,  2792,  2798,
    2805,  2809,  2815,  2821,  2828,  2834,  2839,  2844,  2849,  2859,
    2870,  2882,  2892,  2899,  2906,  2913,  2920,  2927,  2934,  2941,
    2948,  2955,  2963,  2971,  2974,  2979,  2984,  2989,  2994,  3000,
    3005,  3010,  3016,  3022,  3026,  3031,  3036,  3041,  3049,  3059,
    3066,  3077,  3089,  3102,  3112,  3116,  3119,  3123,  3129,  3137,
    3142,  3146,  3150,  3157,  3165,  3173,  3181,  3186,  3191,  3201,
    3206,  3210,  3215,  3223,  3231,  3234,  3238,  3242,  3246,  3251,
    3254,  3257,  3262,  3273,  3277,  3279,  3283,  3286,  3289,  3292,
    3295,  3299,  3305,  3310,  3316,  3319,  3322,  3325,  3328,  3332,
    3335,  3338,  3341,  3345,  3348,  3352,  3357,  3361,  3365,  3372,
    3377,  3380,  3384,  3387,  3390,  3395,  3399,  3403,  3406,  3410,
    3412,  3415,  3417,  3420,  3423,  3426,  3428,  3430,  3432,  3434,
    3437,  3439,  3442,  3445,  3447,  3450,  3453,  3455,  3458,  3460,
    3462,  3464,  3466,  3468,  3470,  3472,  3474,  3475,  3477,  3480,
    3483,  3486,  3490,  3496,  3504,  3512,  3519,  3526,  3533,  3540,
    3546,  3553,  3560,  3567,  3574,  3581,  3588,  3595,  3607,  3615,
    3623,  3631,  3641,  3651,  3662,  3675,  3688,  3692,  3695,  3696,
    3698,  3702,  3707,  3712,  3717,  3718,  3720,  3722,  3727,  3732,
    3734,  3736,  3738,  3740,  3742,  3744,  3746,  3748,  3751,  3753,
    3755,  3757,  3761,  3765,  3774,  3781,  3792,  3800,  3808,  3814,
    3817,  3820,  3824,  3829,  3835,  3841,  3847,  3851,  3856,  3862,
    3868,  3874,  3880,  3883,  3887,  3891,  3897,  3901,  3905,  3909,
    3913,  3917,  3922,  3928,  3934,  3940,  3946,  3950,  3955,  3961,
    3967,  3970,  3973,  3977,  3983,  3990,  3997,  4001,  4005,  4012,
    4019,  4025,  4031,  4034,  4038,  4042,  4048,  4055,  4059,  4062,
    4065,  4069,  4072,  4076,  4079,  4083,  4089,  4096,  4099,  4102,
    4105,  4107,  4112,  4117,  4119,  4122,  4125,  4128,  4131,  4134,
    4137,  4140,  4144,  4147,  4151,  4154,  4158,  4160,  4162,  4164,
    4166,  4168,  4169,  4172,  4173,  4176,  4177,  4179,  4180,  4181,
    4183,  4185,  4187,  4189,  4191,  4199,  4208,  4211,  4218,  4221,
    4228,  4231,  4235,  4238,  4240,  4242,  4246,  4250,  4252,  4257,
    4260,  4262,  4266,  4270,  4275,  4279,  4283,  4287,  4289,  4291,
    4293,  4295,  4297,  4299,  4301,  4303,  4305,  4307,  4309,  4311,
    4313,  4315,  4317,  4320,  4321,  4322,  4325,  4332,  4340,  4343,
    4345,  4349,  4351,  4355,  4357,  4359,  4361,  4364,  4367,  4369,
    4373,  4374,  4375,  4378,  4381,  4383,  4387,  4393,  4394,  4396,
    4398,  4401,  4404,  4408,  4411,  4415,  4418,  4422,  4425,  4429,
    4431,  4434,  4436,  4439,  4441,  4444,  4446,  4449,  4451,  4454,
    4456,  4459,  4461,  4464,  4466,  4469,  4472,  4476,  4479,  4482,
    4485,  4488,  4490,  4492,  4494,  4496,  4501,  4504,  4508,  4512,
    4515,  4519,  4522,  4525,  4528,  4532,  4536,  4540,  4543,  4547,
    4549,  4553,  4557,  4559,  4562,  4565,  4568,  4571,  4581,  4588,
    4590,  4592,  4594,  4596,  4599,  4602,  4606,  4610,  4612,  4615,
    4619,  4623,  4625,  4628,  4630,  4632,  4634,  4636,  4638,  4640,
    4643,  4646,  4651,  4654,  4657,  4660,  4663,  4666,  4671,  4674,
    4677,  4680,  4683,  4686,  4691,  4693,  4696,  4699,  4702,  4706,
    4708,  4710,  4712,  4715,  4718,  4721,  4724,  4727,  4730,  4733,
    4736,  4739,  4743,  4747,  4751,  4755,  4759,  4763,  4765,  4768,
    4771,  4774,  4778,  4781,  4785,  4789,  4793,  4797,  4801,  4805,
    4808,  4811,  4814,  4817,  4820,  4823,  4826,  4829,  4832,  4835,
    4838,  4841,  4844,  4847,  4851,  4855,  4859,  4862,  4865,  4868,
    4872,  4876,  4880,  4883,  4886,  4889,  4892,  4895,  4898,  4902,
    4906,  4910,  4913,  4916,  4919,  4922,  4925,  4928,  4932,  4936,
    4940,  4943,  4946,  4949,  4952,  4955,  4958,  4961,  4964,  4967,
    4971,  4975,  4979,  4984,  4991,  4994,  4996,  4998,  5000,  5002,
    5004,  5005,  5011,  5013,  5020,  5024,  5026,  5029,  5032,  5035,
    5039,  5043,  5046,  5049,  5052,  5055,  5058,  5061,  5065,  5068,
    5071,  5075,  5077,  5081,  5086,  5089,  5091,  5094,  5100,  5107,
    5114,  5117,  5119,  5122,  5125,  5131,  5138
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     390,     0,    -1,   102,   392,    -1,    45,   426,    -1,    42,
      69,     5,    -1,    42,    69,   393,    -1,    48,   431,    -1,
      62,    -1,    67,    -1,    68,   433,    -1,    72,   317,     5,
      -1,    73,   438,    -1,    74,   440,    -1,    82,   441,    -1,
      89,   450,    -1,    91,   452,    -1,    92,   453,    -1,   101,
     393,    -1,   127,   455,    -1,   137,   456,    -1,   150,   457,
      -1,   154,   508,    -1,   158,   511,    -1,   162,    -1,   163,
     393,    -1,   163,    69,     5,    -1,   168,   595,    -1,   169,
     594,    -1,   172,   517,    -1,   178,    15,     4,    -1,   195,
     520,    -1,   199,   538,    -1,   200,   539,    -1,   201,   540,
      -1,   204,   557,   541,    -1,   205,   578,    -1,   184,   577,
      -1,   217,   593,    -1,   221,    69,     5,    -1,   239,   579,
      -1,   241,   580,    -1,   242,   583,    -1,   263,    93,    -1,
     256,   585,    -1,   254,   584,    -1,   271,    -1,   267,   557,
     587,    -1,   273,   592,    -1,   275,   596,    -1,   280,   598,
      -1,   296,    -1,   302,   620,    -1,   320,     4,    -1,   321,
     419,    -1,   333,    -1,   335,   622,    -1,   342,    -1,   345,
     624,    -1,   346,   625,    -1,   376,   629,    -1,   384,   630,
      -1,     3,    -1,     4,    -1,   393,    -1,   214,   393,    -1,
     243,   393,    -1,   245,   393,    -1,   346,   393,    -1,    45,
     393,    -1,    48,   393,    -1,    81,   393,    -1,    89,   393,
      -1,   155,   393,    -1,   273,   393,    -1,     4,    -1,   379,
      -1,   385,    -1,   236,    -1,   329,    -1,   226,    -1,   386,
      -1,   235,    -1,   129,    -1,    -1,   274,    39,    -1,   146,
      39,    -1,   274,    -1,   146,    -1,    -1,   396,    -1,   391,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   397,   397,    -1,   398,   399,    -1,   399,   399,    -1,
     391,   391,    -1,   173,    -1,   247,    -1,   107,    -1,    19,
      -1,   402,    -1,   346,    -1,   347,    -1,   348,    -1,   349,
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
     108,    -1,    90,    -1,   387,    -1,    27,    -1,    54,    -1,
      -1,     4,    -1,    87,    -1,   165,    -1,   249,    -1,   250,
      -1,   264,    -1,   310,    -1,    -1,    33,    -1,   313,    -1,
     206,    -1,    -1,   222,    -1,    43,    -1,    44,    -1,   190,
      -1,   191,    -1,   340,   425,    -1,    49,   422,    -1,    79,
     423,    -1,   163,   424,    -1,   208,   590,    -1,    38,   591,
      -1,   292,   420,    -1,   282,   391,    -1,   314,     4,    -1,
     322,   391,    -1,   393,    -1,    18,   391,    -1,   312,   391,
      -1,   228,   421,    -1,   393,    -1,   312,   391,    -1,   393,
      -1,    69,     5,    -1,   393,    -1,    69,     5,    -1,   393,
      -1,    69,     5,    -1,   391,   391,    -1,   251,   391,   391,
     391,   391,   391,    -1,    11,   427,    -1,    76,     5,     5,
       5,    -1,   106,     4,    -1,   128,   428,    -1,   147,   429,
      -1,    56,   299,     4,    -1,   326,   430,    -1,   132,     5,
      -1,    62,    -1,   391,   391,    -1,   391,    -1,   391,   391,
      -1,   391,    11,   391,   391,    -1,   391,   391,    11,   391,
     391,    -1,   326,   391,    -1,   326,   391,   391,    -1,   326,
     391,    11,   391,   391,    -1,   326,   391,   391,    11,   391,
     391,    -1,    33,    -1,   313,    -1,   135,    -1,   391,   391,
      11,    62,     5,     5,     5,    -1,   391,   391,     4,   391,
     391,    11,    62,     5,     5,     5,     5,    -1,   391,   391,
      11,   391,   391,     5,     5,     5,    -1,   391,   391,     4,
     391,   391,    11,   391,   391,     5,     5,     5,     5,    -1,
     391,    -1,   391,   391,    -1,   326,   432,    -1,   135,    -1,
     391,    -1,   391,   391,    -1,   285,   434,    -1,   215,   435,
      -1,   209,   436,    -1,   337,   391,   391,    -1,   337,   221,
     221,    -1,   382,   437,    -1,   258,   393,    -1,   151,    -1,
     196,    -1,   391,    -1,   209,    -1,   382,    -1,   381,    -1,
     337,    -1,     4,   407,    -1,   215,   407,    -1,   277,     4,
      -1,   270,    -1,   391,     4,     4,    -1,    83,   391,    -1,
     277,     4,    -1,   192,     4,    -1,     4,   391,   391,     4,
       4,    -1,   273,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   168,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   169,   391,   391,   391,   391,   391,   391,     4,
       4,    -1,   217,     4,     4,     5,     5,     5,     4,    -1,
      41,    -1,   216,   439,    -1,   119,    -1,     4,   391,   391,
       4,     4,    -1,   273,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   168,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   169,   391,   391,   391,   391,   391,   391,
       4,     4,    -1,   217,     4,     4,     5,     5,     5,     4,
      -1,   406,    -1,   197,   391,    -1,    88,   442,    -1,   105,
     443,    -1,   195,   444,    -1,   244,   448,    -1,   280,   449,
      -1,     5,     4,     4,   447,     4,     4,   406,   391,   445,
     446,   391,   391,     5,    -1,     5,     4,     4,   447,     4,
       4,   406,   391,   391,   446,   391,   391,     5,    -1,     5,
       4,     4,   447,     4,     4,   406,   391,   445,   391,   391,
       5,    -1,     5,     4,     4,   447,     4,     4,   406,   391,
     391,   391,   391,     5,    -1,   253,    -1,    -1,    32,    -1,
       5,    -1,     5,     5,     4,   393,    -1,     5,     4,   393,
       5,   401,   408,    -1,   209,    -1,   382,    -1,   381,    -1,
     337,    -1,   151,    -1,   196,    -1,   302,    -1,    48,    -1,
       5,    -1,     5,     5,     4,   393,    -1,     5,   401,   408,
      -1,    32,     5,   401,   408,    -1,    -1,   391,   391,   391,
     391,   401,   408,    -1,    62,   400,   401,   408,   391,   391,
     401,   410,    -1,   321,   451,    -1,    41,   391,   391,    -1,
     216,   391,   391,    -1,   119,   391,   391,    -1,    -1,   391,
     391,   401,   408,    -1,    41,   391,   391,     4,    -1,   216,
     391,   391,     4,    -1,   119,   391,   391,     4,    -1,   403,
     391,   391,    -1,   401,   408,   400,    -1,   393,    -1,   345,
     391,   391,    -1,    41,   216,   403,   391,   391,    -1,   216,
     403,   391,   391,    -1,    41,   216,   401,   400,    -1,   216,
     401,   400,    -1,    34,     4,    -1,    -1,    33,    -1,   313,
      -1,   206,    -1,   391,    -1,    67,    -1,   158,   126,     5,
      -1,    -1,    42,    69,    -1,    45,   460,    -1,    48,   462,
      -1,    68,   463,    -1,    73,   467,    -1,    72,   466,    -1,
      74,   469,    -1,    82,   471,    -1,    84,   474,    -1,    89,
     475,    -1,    91,   476,    -1,    93,   478,    -1,    92,   477,
      -1,    99,   479,    -1,   101,    -1,   136,   483,    -1,   154,
     489,    -1,   163,    69,    -1,   165,     5,     5,     4,    -1,
     166,    94,   458,    -1,   168,   497,    -1,   169,   496,    -1,
     172,   481,    -1,   176,   480,    -1,   178,    15,    -1,   209,
      -1,   204,   557,   551,    -1,   205,   491,    -1,   184,   490,
      -1,   217,   495,    -1,   221,    69,    -1,   239,    -1,   241,
     493,    -1,   248,   316,   403,   391,   391,     4,     4,     5,
      -1,   273,   494,    -1,   275,    -1,   302,   498,    -1,   320,
      -1,   321,   499,    -1,   330,    -1,   338,   403,   391,   391,
      -1,   344,    94,   459,    -1,   346,   506,    -1,   384,    -1,
       5,     5,   391,   391,   403,     4,   454,    -1,     5,     5,
     391,   391,   401,   408,     4,   454,    -1,     5,     5,   391,
     391,   403,     4,   454,    -1,     5,     5,   391,   391,   401,
     408,     4,   454,    -1,   106,    -1,   128,    -1,   147,    -1,
      56,   299,    -1,    93,    -1,   132,    -1,    76,   461,    -1,
     194,    -1,    -1,   209,     5,    -1,   110,     5,    -1,   128,
      -1,    -1,   445,   446,    -1,   391,   446,    -1,   285,    -1,
     215,    -1,   209,   464,    -1,   337,   188,    -1,   382,   465,
      -1,   258,    -1,   215,    -1,   277,    -1,    83,    -1,   277,
      -1,   192,    -1,    -1,   317,    -1,   188,   468,    -1,     4,
      -1,     4,   403,   391,   391,    -1,     4,   391,   391,   406,
     391,    -1,    -1,   188,   470,    -1,   197,    -1,     4,   391,
     391,   406,   391,    -1,   401,   408,    -1,    68,   472,    -1,
      69,    -1,    97,    -1,   188,    -1,   233,   188,    -1,   208,
      -1,    74,   473,    -1,   302,    -1,   375,    -1,    -1,   215,
      -1,   285,    -1,    -1,   197,    -1,   391,   391,   401,   408,
     409,    -1,   403,   391,   391,   401,   408,   409,    -1,   401,
     408,   409,    -1,    62,   401,   408,   409,   401,   410,    -1,
     321,   401,   408,    -1,   403,    -1,   401,   408,   409,    -1,
     311,    -1,    34,    -1,   403,    -1,   401,   408,   409,    -1,
     401,   408,   400,   391,   391,     5,    -1,     4,   401,   408,
     400,   391,   391,     5,    -1,   403,   391,   391,     4,     4,
      -1,     5,   394,    -1,    68,    -1,   403,   391,   391,     5,
     394,    -1,     4,     4,     4,     4,    -1,    93,    -1,   130,
     220,   482,    -1,    -1,     4,    -1,   391,   391,    -1,   223,
      -1,    62,   401,   408,   409,    -1,    86,    -1,   106,   486,
      -1,    46,    -1,   126,   484,    -1,   130,   220,   487,    -1,
     160,   485,    -1,   161,    -1,   234,   220,    -1,   299,    -1,
     299,   401,   408,   410,    -1,   300,   488,    -1,   375,    -1,
       4,    -1,   403,   391,   391,    -1,     4,    -1,   182,     5,
      -1,     4,   182,     5,    -1,   346,     4,    -1,    -1,     4,
      -1,   394,    -1,   394,   403,   391,   391,    -1,   394,     4,
      -1,    -1,     4,    -1,   144,   173,   401,    -1,   144,   173,
       4,   401,    -1,   326,   173,   391,   401,    -1,    -1,   238,
      -1,   339,    -1,    86,    -1,   185,    -1,    69,   492,    -1,
      47,   492,    -1,   325,   492,    -1,   340,   492,    -1,    69,
      -1,   203,    -1,   266,    -1,   315,    -1,   325,    -1,    86,
      -1,    47,    -1,    -1,     4,    -1,   258,    -1,    64,    -1,
     315,    -1,   340,    -1,   315,    -1,    64,    -1,   315,    -1,
     340,    -1,    64,    -1,   315,    -1,   340,    -1,   147,    -1,
     265,    -1,   265,   210,    -1,   297,    -1,   297,   210,    -1,
      21,    -1,   340,   505,    -1,    49,   502,    -1,    79,   503,
      -1,   163,   504,    -1,   208,    -1,    38,    -1,   292,   500,
      -1,   282,    -1,    -1,    18,    -1,   312,    -1,   228,   501,
      -1,    -1,   312,    -1,    -1,    69,    -1,    -1,    69,    -1,
      -1,    69,    -1,    -1,   251,    -1,    -1,    15,   507,    -1,
     220,   402,    -1,    -1,   252,    -1,    88,   509,    -1,   105,
      -1,   401,   408,   409,   510,     5,     5,    -1,   401,   408,
     409,   510,     5,    -1,    20,    -1,   261,    -1,    19,    -1,
      42,    69,    -1,    45,   512,    -1,    82,   513,    -1,    89,
      -1,   100,    -1,   101,    -1,   107,    -1,   136,   514,    -1,
     154,    -1,   172,    -1,   179,    -1,   204,   515,    -1,   247,
      -1,   173,    -1,   302,    -1,   315,   401,    -1,   346,   516,
      -1,    77,     5,    -1,    -1,    32,    -1,    -1,    45,    -1,
      92,    -1,   214,    -1,   163,    -1,   288,    -1,   244,    -1,
     331,    -1,   401,    -1,    61,   401,    -1,   123,   401,    -1,
     193,   401,    -1,    17,    -1,   321,   401,    -1,   224,     4,
       4,    -1,   124,    -1,   207,     5,    -1,    93,   519,    -1,
     289,   130,   220,   518,    -1,   289,     4,     4,     4,     4,
      -1,   335,    -1,   346,   391,   391,   391,   391,   391,   391,
     391,   391,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    59,    -1,     4,     4,   401,    -1,   215,   393,    -1,
      26,   521,    -1,   120,   523,    -1,   136,   524,    -1,   175,
     537,    -1,   232,   535,    -1,   246,   536,    -1,     5,    13,
       5,   413,    -1,     5,    14,     5,   413,    -1,     5,    64,
       5,   413,    -1,     5,   212,   413,    -1,     5,   213,   413,
      -1,     5,   293,   411,     4,   413,    -1,     5,   304,     4,
     413,    -1,     5,   305,     4,   413,    -1,     5,   339,     5,
     413,    -1,   273,    92,   522,    -1,   169,    92,   522,    -1,
     168,    92,   522,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    64,     5,    -1,     5,   212,    -1,     5,
     213,    -1,     5,   293,   411,     4,    -1,     5,   304,     4,
      -1,     5,   305,     4,    -1,     5,   339,     5,    -1,     5,
       5,   301,    -1,     5,    13,     5,   413,    -1,     5,    14,
       5,   413,    -1,     5,    64,     5,   413,    -1,     5,   212,
     412,   413,    -1,     5,     5,   301,   412,   413,    -1,     5,
     213,   412,   413,    -1,     5,   293,   411,     4,   412,   413,
      -1,     5,   309,   411,     4,     4,   412,   413,    -1,     5,
     304,     4,   413,    -1,     5,   305,     4,   413,    -1,     5,
     339,     5,   412,   413,    -1,   300,   525,    -1,   126,    92,
     526,    -1,   273,   173,   534,    -1,   273,    92,   533,    -1,
     169,   173,   534,    -1,   169,    92,   533,    -1,   168,   173,
     534,    -1,   168,    92,   533,    -1,   214,   527,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    64,     5,
      -1,     5,   212,   412,    -1,     5,     5,   301,   412,    -1,
       5,   213,   412,    -1,     5,   293,   411,     4,   412,    -1,
       5,   309,   411,     4,     4,   412,    -1,     5,   304,     4,
      -1,     5,   305,     4,    -1,     5,   339,     5,   412,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    64,
       5,    -1,     5,   212,   412,    -1,     5,   213,   412,    -1,
       5,   293,   411,     4,   412,    -1,     5,   304,     4,    -1,
       5,   305,     4,    -1,     5,   339,     5,   412,    -1,   173,
     178,   528,    -1,   178,   529,    -1,   173,   530,    -1,   532,
      -1,   173,   374,   531,    -1,     5,    13,     5,   413,    -1,
       5,    14,     5,   413,    -1,     5,    64,     5,   413,    -1,
       5,   212,   412,   413,    -1,     5,   213,   412,   413,    -1,
       5,   293,   411,     4,   412,   413,    -1,     5,   304,     4,
     413,    -1,     5,   305,     4,   413,    -1,     5,   339,     5,
     412,   413,    -1,     5,    13,     5,   413,    -1,     5,    14,
       5,   413,    -1,     5,    64,     5,   413,    -1,     5,   212,
     412,   413,    -1,     5,     5,   301,   412,   413,    -1,     5,
     213,   412,   413,    -1,     5,   293,   411,     4,   412,   413,
      -1,     5,   309,   411,     4,     4,   412,   413,    -1,     5,
     304,     4,   413,    -1,     5,   305,     4,   413,    -1,     5,
     339,     5,   412,   413,    -1,   402,     5,    13,     5,   413,
      -1,   402,     5,    14,     5,   413,    -1,   402,     5,    64,
       5,   413,    -1,   402,     5,   212,   412,   413,    -1,   402,
       5,   213,   412,   413,    -1,   402,     5,   293,   411,     4,
     412,   413,    -1,   402,     5,   304,     4,   413,    -1,   402,
       5,   305,     4,   413,    -1,   402,     5,   339,     5,   412,
     413,    -1,     5,    13,     5,   413,    -1,     5,    14,     5,
     413,    -1,     5,    64,     5,   413,    -1,     5,   212,   412,
     413,    -1,     5,   213,   412,   413,    -1,     5,   293,   411,
       4,   412,   413,    -1,     5,   304,     4,   413,    -1,     5,
     305,     4,   413,    -1,     5,   339,     5,   412,   413,    -1,
     402,     5,    13,     5,   413,    -1,   402,     5,    14,     5,
     413,    -1,   402,     5,    64,     5,   413,    -1,   402,     5,
     212,   412,   413,    -1,   402,     5,     5,   301,   412,   413,
      -1,   402,     5,   213,   412,   413,    -1,   402,     5,   293,
     411,     4,   412,   413,    -1,   402,     5,   309,   411,     4,
       4,   412,   413,    -1,   402,     5,   304,     4,   413,    -1,
     402,     5,   305,     4,   413,    -1,   402,     5,   339,     5,
     412,   413,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    64,     5,    -1,     5,   212,   412,    -1,     5,
       5,   301,   412,    -1,     5,   213,   412,    -1,     5,   293,
     411,     4,   412,    -1,     5,   309,   411,     4,     4,   412,
      -1,     5,   304,     4,    -1,     5,   305,     4,    -1,     5,
     339,     5,   412,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    64,     5,    -1,     5,   212,   412,    -1,
       5,   213,   412,    -1,     5,   293,   411,     4,   412,    -1,
       5,   304,     4,    -1,     5,   305,     4,    -1,     5,   339,
       5,   412,    -1,     5,    13,     5,   413,    -1,     5,    64,
       5,   413,    -1,     5,   212,   413,    -1,     5,   293,   411,
       4,   413,    -1,     5,   304,     4,   413,    -1,     5,   339,
       5,   413,    -1,     5,     5,    -1,   300,     5,     5,    -1,
      99,     4,     4,     4,     4,     4,    -1,   209,     4,     4,
       4,     4,     4,    -1,   119,    -1,   257,    -1,   393,    -1,
     152,   393,    -1,    93,   393,    -1,    69,     5,    -1,     5,
       4,     4,    -1,   335,   391,   391,    -1,   384,   391,    -1,
       5,     5,   402,   408,     5,     5,   402,   408,   391,   402,
     410,     5,    -1,    63,   544,    -1,    69,     5,    -1,    85,
      -1,    78,   550,     5,    -1,    78,   550,   339,     5,    -1,
      80,   105,    -1,    -1,    88,   542,   545,    -1,    94,    -1,
     105,   548,    -1,   113,   549,    -1,   122,     4,    -1,   141,
       5,    -1,   163,    16,    -1,   163,   237,   391,   391,    -1,
     163,   327,   391,   391,    -1,     4,    20,   416,   393,    -1,
       4,    21,   396,    -1,     4,    21,   396,   403,    -1,     4,
      21,   396,   401,   408,    -1,     4,    22,   265,   391,   391,
       4,   401,   410,    -1,     4,    22,   265,     5,   401,   410,
      -1,     4,    52,   265,   391,   391,   391,     4,   401,   410,
      -1,     4,    52,   265,     5,   401,   410,    -1,     4,    51,
     265,   391,   391,   401,   410,    -1,     4,    55,   113,   396,
     396,     4,   391,   391,   391,     4,    -1,     4,    55,   113,
     396,   396,     4,   391,   391,   391,     4,   403,    -1,     4,
      55,   113,   396,   396,     4,   391,   391,   391,     4,   401,
     408,    -1,     4,    55,   113,     5,     5,   401,   408,   401,
     410,    -1,     4,    58,   543,     5,     5,    -1,     4,    65,
     265,   391,   401,   410,    -1,     4,    69,     5,    -1,     4,
      79,    27,   393,   393,    -1,     4,    79,   183,     5,     5,
      -1,     4,    79,   265,   391,   401,   410,    -1,     4,    79,
     315,   401,   408,    -1,     4,    80,   151,   393,    -1,     4,
      80,    28,   393,    -1,     4,    80,   330,     5,    -1,     4,
      87,   113,   396,   396,     4,   391,   391,     4,    -1,     4,
      87,   113,   396,   396,     4,   391,   391,     4,   403,    -1,
       4,    87,   113,   396,   396,     4,   391,   391,     4,   401,
     408,    -1,     4,    87,   113,     5,     5,   401,   408,   401,
     410,    -1,     4,    88,    22,   265,   391,   391,    -1,     4,
      88,    52,   265,   391,   391,    -1,     4,    88,    55,    21,
     391,   391,    -1,     4,    88,    55,   265,   391,   391,    -1,
       4,    88,   118,   265,   391,   391,    -1,     4,    88,   121,
      21,   391,   391,    -1,     4,    88,   121,   265,   391,   391,
      -1,     4,    88,    87,    21,   391,   391,    -1,     4,    88,
      87,   265,   391,   391,    -1,     4,    88,   253,   343,     4,
     391,   391,    -1,     4,    88,   287,   343,     4,   391,   391,
      -1,     4,   105,    -1,     4,   105,    22,     4,    -1,     4,
     105,    52,     4,    -1,     4,   105,    55,     4,    -1,     4,
     105,   118,     4,    -1,     4,   105,    58,   543,     5,    -1,
       4,   105,   121,     4,    -1,     4,   105,    87,     4,    -1,
       4,   105,   253,   343,     4,    -1,     4,   105,   287,   343,
       4,    -1,     4,   105,   317,    -1,     4,   105,   317,     5,
      -1,     4,   105,   317,     4,    -1,     4,   113,    41,     4,
      -1,     4,   117,   265,   391,   391,   401,   410,    -1,     4,
     118,   265,   391,   391,   391,     4,   401,   410,    -1,     4,
     118,   265,     5,   401,   410,    -1,     4,   121,   113,   396,
     396,     4,   391,   391,   391,     4,    -1,     4,   121,   113,
     396,   396,     4,   391,   391,   391,     4,   403,    -1,     4,
     121,   113,   396,   396,     4,   391,   391,   391,     4,   401,
     408,    -1,     4,   121,   113,     5,     5,   401,   408,   401,
     410,    -1,     4,   141,     5,    -1,     4,   163,    -1,     4,
     163,   237,    -1,     4,   192,    27,   393,   393,    -1,     4,
     192,   251,   401,   408,   400,   400,    -1,     4,   219,   391,
     391,    -1,     4,   219,   145,    -1,     4,   219,    37,    -1,
       4,   219,   326,   401,   408,   400,    -1,     4,   253,   251,
     401,   408,   409,     5,    -1,     4,   253,   271,   391,   391,
     401,   410,    -1,     4,   287,   271,   391,   391,   401,   410,
      -1,     4,   251,   291,   414,    -1,     4,   251,   299,     4,
      -1,     4,   259,   401,   408,   400,   400,   391,   401,   410,
      -1,     4,   260,   563,   393,    -1,     4,   275,    41,    -1,
       4,   276,   142,     5,    -1,     4,   276,   251,   401,   408,
     400,   400,    -1,     4,   276,   315,   401,   408,   401,   410,
      -1,     4,   288,    -1,     4,   288,   237,    -1,     4,   317,
       5,    -1,     4,   319,     5,    -1,     4,   319,   275,   393,
      -1,     4,   332,    -1,     4,   334,    -1,     4,   341,    27,
     393,    -1,     4,   341,   251,   401,   408,   400,   401,   410,
     391,   396,    -1,     4,   375,     4,    -1,   181,    -1,   181,
     391,   391,    -1,   194,   558,    -1,   195,   559,    -1,   219,
     560,    -1,   258,   393,    -1,   260,   563,   393,    -1,   260,
     563,   393,   391,   391,    -1,   275,    41,   391,   391,    -1,
     275,   216,   391,   391,     4,    -1,   275,   119,    -1,   280,
     567,    -1,   288,   568,    -1,   296,   569,    -1,     5,    69,
       5,    -1,     5,    85,    -1,     5,   105,    -1,     5,    94,
      -1,     5,   141,     5,    -1,     5,   163,    -1,     5,   163,
     237,    -1,     5,   219,   391,   391,    -1,     5,   219,   145,
      -1,     5,   219,    37,    -1,     5,   219,   326,   401,   408,
     400,    -1,     5,   260,   563,   393,    -1,     5,   288,    -1,
       5,   288,   237,    -1,     5,   332,    -1,     5,   334,    -1,
     317,   113,     5,     5,    -1,   317,   105,     5,    -1,   317,
     105,    16,    -1,   317,     5,    -1,   317,   335,     5,    -1,
     244,    -1,   244,   401,    -1,   331,    -1,   332,    16,    -1,
     334,    16,    -1,   375,     4,    -1,   288,    -1,   334,    -1,
     163,    -1,   332,    -1,    41,   219,    -1,   219,    -1,   119,
     219,    -1,    41,   113,    -1,   113,    -1,   119,   113,    -1,
      41,   275,    -1,   275,    -1,   119,   275,    -1,   105,    -1,
     319,    -1,    69,    -1,   375,    -1,   260,    -1,   141,    -1,
     181,    -1,   335,    -1,    -1,     4,    -1,    31,   393,    -1,
     265,   391,    -1,   177,     4,    -1,   238,     4,   391,    -1,
      65,   391,   391,   391,   564,    -1,   117,   391,   391,   391,
     391,   395,   564,    -1,    51,   391,   391,   391,   391,   395,
     564,    -1,   253,   391,   391,   391,   391,   564,    -1,   287,
     391,   391,   391,   391,   564,    -1,   192,   391,   391,   391,
     391,   564,    -1,   341,   391,   391,   391,   391,   564,    -1,
     319,   391,   391,   395,   564,    -1,    65,   251,   391,   391,
     415,   564,    -1,    51,   251,   391,   391,   415,   564,    -1,
     108,   251,   391,   391,   415,   564,    -1,    90,   251,   391,
     391,   415,   564,    -1,   387,   251,   391,   391,   415,   564,
      -1,    27,   251,   391,   391,   415,   564,    -1,    54,   251,
     391,   391,   415,   564,    -1,   276,   391,   391,   391,   391,
     401,   408,   401,   410,     5,   564,    -1,    79,   391,   391,
     391,   401,   408,   564,    -1,   259,   391,   391,   391,   391,
     391,   564,    -1,    22,   391,   391,   391,   391,     4,   564,
      -1,   118,   391,   391,   391,   391,   391,     4,   395,   564,
      -1,    52,   391,   391,   391,   391,   391,     4,   395,   564,
      -1,    87,   391,   391,   396,   396,     4,   391,   391,     4,
     564,    -1,   121,   391,   391,   396,   396,     4,   391,   391,
     391,     4,   395,   564,    -1,    55,   391,   391,   396,   396,
       4,   391,   391,   391,     4,   395,   564,    -1,    80,   546,
     564,    -1,   318,   547,    -1,    -1,     4,    -1,     5,   391,
     391,    -1,   339,     5,   391,   391,    -1,   391,   391,   339,
       5,    -1,     5,   401,   408,   400,    -1,    -1,   288,    -1,
      16,    -1,    41,   391,   391,     4,    -1,   216,   391,   391,
       4,    -1,   119,    -1,   112,    -1,   377,    -1,    66,    -1,
     279,    -1,   278,    -1,   262,    -1,   378,    -1,    63,   552,
      -1,    69,    -1,   141,    -1,   122,    -1,   156,   391,   391,
      -1,   171,   391,   391,    -1,     4,    20,    87,     5,     5,
       5,   401,     4,    -1,     4,    20,   165,     5,     5,     4,
      -1,     4,    20,   249,     5,     5,     5,     5,   401,   408,
     417,    -1,     4,    20,   250,     5,     5,   401,   417,    -1,
       4,    20,   264,     5,     5,     5,   401,    -1,     4,    20,
     310,   401,   408,    -1,   171,    16,    -1,     4,    21,    -1,
       4,    21,   403,    -1,     4,    21,   401,   408,    -1,     4,
      22,   265,   401,   410,    -1,     4,    52,   265,   401,   410,
      -1,     4,    51,   265,   401,   410,    -1,     4,    55,    21,
      -1,     4,    55,    21,   403,    -1,     4,    55,    21,   401,
     408,    -1,     4,    55,   265,   401,   410,    -1,     4,    62,
     401,   408,   409,    -1,     4,    65,   265,   401,   410,    -1,
       4,    69,    -1,     4,    79,    27,    -1,     4,    79,   183,
      -1,     4,    79,   265,   401,   410,    -1,     4,    79,   315,
      -1,     4,    80,   151,    -1,     4,    80,    28,    -1,     4,
      80,   330,    -1,     4,    87,    21,    -1,     4,    87,    21,
     403,    -1,     4,    87,    21,   401,   408,    -1,     4,    87,
     265,   401,   410,    -1,     4,   117,   265,   401,   410,    -1,
       4,   118,   265,   401,   410,    -1,     4,   121,    21,    -1,
       4,   121,    21,   403,    -1,     4,   121,    21,   401,   408,
      -1,     4,   121,   265,   401,   410,    -1,     4,   141,    -1,
       4,   163,    -1,     4,   192,    27,    -1,     4,   192,   187,
     401,   410,    -1,     4,   192,   251,   401,   408,   409,    -1,
       4,   202,   187,   391,   401,   410,    -1,     4,   251,   291,
      -1,     4,   251,   299,    -1,     4,   253,   251,   401,   408,
     409,    -1,     4,   259,   251,   401,   408,   409,    -1,     4,
     259,   187,   401,   410,    -1,     4,   259,   323,   401,   410,
      -1,     4,   260,    -1,     4,   260,   563,    -1,     4,   276,
     142,    -1,     4,   276,   187,   401,   410,    -1,     4,   276,
     251,   401,   408,   409,    -1,     4,   276,   315,    -1,     4,
     288,    -1,     4,   317,    -1,     4,   317,     4,    -1,     4,
     319,    -1,     4,   319,   275,    -1,     4,   330,    -1,     4,
     341,    27,    -1,     4,   341,   187,   401,   410,    -1,     4,
     341,   251,   401,   408,   409,    -1,     4,   375,    -1,   163,
     553,    -1,   163,   233,    -1,   233,    -1,   253,   287,   391,
     391,    -1,   287,   287,   391,   391,    -1,   258,    -1,   260,
     563,    -1,   288,   554,    -1,   288,   233,    -1,   296,   555,
      -1,     5,    69,    -1,     5,   141,    -1,     5,   171,    -1,
       5,   260,   563,    -1,     5,   317,    -1,     5,   317,   233,
      -1,   317,    16,    -1,   317,   104,   220,    -1,   375,    -1,
      31,    -1,   265,    -1,   177,    -1,   238,    -1,    -1,   391,
     391,    -1,    -1,   391,   391,    -1,    -1,   319,    -1,    -1,
      -1,   252,    -1,   267,    -1,   337,    -1,    60,    -1,   143,
      -1,   550,   401,   408,   409,   393,   565,   572,    -1,   288,
     550,   401,   408,   409,   393,   565,   572,    -1,   550,     5,
      -1,   550,     5,     4,     5,   401,   408,    -1,   550,     4,
      -1,   550,     4,     4,     5,   401,   408,    -1,   136,     5,
      -1,   136,     5,     5,    -1,   391,   391,    -1,   145,    -1,
      37,    -1,    41,   391,   391,    -1,   216,   391,   391,    -1,
     119,    -1,   326,   401,   408,   400,    -1,   561,   562,    -1,
     562,    -1,   563,   388,   393,    -1,    69,   388,     5,    -1,
      98,   388,     4,     4,    -1,   375,   388,     4,    -1,   141,
     388,     5,    -1,   319,   388,     5,    -1,   575,    -1,   576,
      -1,   227,    -1,   288,    -1,   163,    -1,    97,    -1,   138,
      -1,   113,    -1,   219,    -1,   275,    -1,   105,    -1,   174,
      -1,   306,    -1,   131,    -1,   556,    -1,   556,   561,    -1,
      -1,    -1,   566,   570,    -1,     5,   550,   401,   408,   409,
     393,    -1,   288,     5,   550,   401,   408,   409,   393,    -1,
     318,     5,    -1,    16,    -1,   237,   391,   391,    -1,   327,
      -1,   327,   391,   391,    -1,   133,    -1,   186,    -1,   393,
      -1,   319,   393,    -1,   570,   571,    -1,   571,    -1,   563,
     388,   393,    -1,    -1,    -1,   573,   574,    -1,   574,   575,
      -1,   575,    -1,   317,   388,     5,    -1,    58,   388,   543,
       5,     5,    -1,    -1,    88,    -1,     4,    -1,   185,     4,
      -1,    69,     5,    -1,     4,    69,     5,    -1,    47,   405,
      -1,     4,    47,   405,    -1,   325,   391,    -1,     4,   325,
     391,    -1,   340,   393,    -1,     4,   340,   393,    -1,   296,
      -1,     4,   296,    -1,   162,    -1,     4,   162,    -1,   105,
      -1,     4,   105,    -1,   336,    -1,     4,   336,    -1,   111,
      -1,     4,   111,    -1,   324,    -1,     4,   324,    -1,    50,
      -1,     4,    50,    -1,    67,    -1,    69,     5,    -1,   203,
     404,    -1,   266,   391,   391,    -1,   315,   401,    -1,   325,
     391,    -1,    47,   405,    -1,   203,     4,    -1,   387,    -1,
     385,    -1,   378,    -1,   227,    -1,   391,   391,   391,   391,
      -1,   391,   391,    -1,   403,   391,   391,    -1,   401,   408,
     400,    -1,   326,   581,    -1,    40,   391,   391,    -1,   216,
     582,    -1,   258,   393,    -1,   391,   391,    -1,   403,   391,
     391,    -1,   401,   408,   400,    -1,    41,   391,   391,    -1,
     391,   391,    -1,   119,   391,   391,    -1,   393,    -1,   346,
     402,   408,    -1,     5,     4,     4,    -1,   335,    -1,    75,
     586,    -1,   188,     4,    -1,   272,     4,    -1,   282,   391,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    57,    -1,
     153,    -1,   273,    -1,    95,    -1,   163,   588,    -1,   288,
     589,    -1,    41,   391,   391,    -1,   216,   391,   391,    -1,
     119,    -1,   294,   119,    -1,    41,   391,   391,    -1,   216,
     391,   391,    -1,   119,    -1,   294,   119,    -1,   211,    -1,
      12,    -1,   134,    -1,   227,    -1,    35,    -1,   115,    -1,
      64,     5,    -1,   315,   401,    -1,   340,     4,     4,     4,
      -1,   315,   401,    -1,    64,     5,    -1,    64,   167,    -1,
      64,   281,    -1,   315,   401,    -1,   340,     4,     4,     4,
      -1,    64,     5,    -1,    64,   167,    -1,    64,   281,    -1,
      64,   338,    -1,   315,   401,    -1,   340,     4,     4,     4,
      -1,   391,    -1,   391,   103,    -1,   216,   597,    -1,   326,
     391,    -1,   326,   391,   103,    -1,    41,    -1,   391,    -1,
     119,    -1,    26,   600,    -1,   136,   601,    -1,   383,   599,
      -1,   232,   618,    -1,   120,   619,    -1,   246,     5,    -1,
     130,     5,    -1,    64,     5,    -1,   304,     4,    -1,   130,
       5,   418,    -1,    64,     5,   418,    -1,   304,     4,   418,
      -1,   273,    92,   608,    -1,   169,    92,   611,    -1,   168,
      92,   614,    -1,   602,    -1,   173,   602,    -1,   316,   603,
      -1,   300,   604,    -1,   126,    92,   605,    -1,   214,   606,
      -1,   273,   173,   609,    -1,   273,    92,   610,    -1,   169,
     173,   612,    -1,   169,    92,   613,    -1,   168,   173,   615,
      -1,   168,    92,   616,    -1,   269,   617,    -1,   130,     5,
      -1,    64,     5,    -1,   304,     4,    -1,   130,     5,    -1,
      64,     5,    -1,   304,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   304,     4,    -1,   130,     5,    -1,    64,     5,
      -1,   304,     4,    -1,   173,   607,    -1,   130,     5,     4,
      -1,    64,     5,     4,    -1,   304,     4,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   304,     4,    -1,   130,     5,
     418,    -1,    64,     5,   418,    -1,   304,     4,   418,    -1,
     130,     5,    -1,    64,     5,    -1,   304,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   304,     4,    -1,   130,     5,
     418,    -1,    64,     5,   418,    -1,   304,     4,   418,    -1,
     130,     5,    -1,    64,     5,    -1,   304,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   304,     4,    -1,   130,     5,
     418,    -1,    64,     5,   418,    -1,   304,     4,   418,    -1,
     130,     5,    -1,    64,     5,    -1,   304,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   304,     4,    -1,   130,     5,
      -1,    64,     5,    -1,   304,     4,    -1,   130,     5,   418,
      -1,    64,     5,   418,    -1,   304,     4,   418,    -1,   130,
       5,     5,   418,    -1,   621,     4,     4,   391,   391,   396,
      -1,   621,     4,    -1,   105,    -1,    53,    -1,   328,    -1,
     149,    -1,   116,    -1,    -1,     4,   391,   391,   391,   391,
      -1,   231,    -1,   231,     4,   391,   391,   391,   391,    -1,
     136,   300,   623,    -1,     4,    -1,     4,     4,    -1,   391,
     401,    -1,   391,   391,    -1,   326,   391,   391,    -1,   402,
     408,   409,    -1,    15,   628,    -1,   271,     4,    -1,   268,
     627,    -1,    23,   626,    -1,     4,     4,    -1,     4,     5,
      -1,   319,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   319,     4,     5,    -1,     4,    -1,     4,   402,   408,
      -1,   326,     4,   402,   408,    -1,   252,    67,    -1,   257,
      -1,   391,   391,    -1,   391,   391,    11,   391,   391,    -1,
     391,   391,    11,   403,   391,   391,    -1,   391,   391,    11,
     401,   408,   400,    -1,   326,   631,    -1,   135,    -1,   135,
     391,    -1,   391,   391,    -1,   391,   391,    11,   391,   391,
      -1,   391,   391,    11,   403,   391,   391,    -1,   391,   391,
      11,   401,   408,   400,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   495,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,   540,   541,   542,
     543,   544,   545,   546,   547,   548,   549,   550,   551,   552,
     553,   556,   557,   560,   561,   562,   563,   564,   565,   566,
     567,   568,   569,   570,   573,   575,   576,   577,   578,   580,
     581,   582,   583,   586,   587,   588,   589,   590,   593,   594,
     597,   598,   599,   602,   605,   608,   611,   623,   630,   637,
     645,   646,   647,   648,   649,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,   679,   682,   683,   686,   687,   688,   689,   690,
     691,   694,   695,   696,   697,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   708,   709,   710,   713,   714,
     715,   716,   717,   718,   719,   720,   723,   724,   725,   726,
     727,   730,   731,   732,   733,   734,   735,   736,   737,   740,
     741,   742,   745,   746,   747,   748,   751,   752,   753,   756,
     757,   758,   761,   762,   763,   766,   767,   768,   769,   770,
     771,   772,   773,   776,   777,   780,   781,   782,   783,   784,
     785,   788,   789,   790,   791,   794,   795,   796,   797,   798,
     799,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   815,   816,   817,   818,   821,   822,   825,   826,   829,
     830,   833,   834,   837,   838,   842,   843,   844,   845,   846,
     847,   848,   849,   852,   853,   856,   857,   858,   860,   862,
     863,   864,   866,   870,   871,   874,   875,   877,   880,   882,
     888,   889,   890,   893,   894,   895,   898,   899,   900,   901,
     902,   903,   904,   910,   911,   914,   915,   916,   917,   918,
     921,   922,   923,   924,   927,   928,   933,   938,   945,   947,
     949,   951,   953,   955,   956,   957,   960,   962,   964,   966,
     968,   971,   972,   975,   976,   977,   978,   979,   982,   985,
     988,   994,  1000,  1003,  1004,  1007,  1008,  1009,  1016,  1017,
    1018,  1019,  1022,  1023,  1026,  1027,  1030,  1031,  1034,  1036,
    1040,  1041,  1044,  1046,  1047,  1048,  1049,  1052,  1053,  1055,
    1056,  1057,  1060,  1062,  1064,  1065,  1067,  1069,  1071,  1073,
    1077,  1080,  1081,  1082,  1083,  1086,  1087,  1090,  1093,  1094,
    1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1104,
    1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,
    1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,
    1125,  1126,  1127,  1129,  1130,  1131,  1132,  1133,  1134,  1135,
    1137,  1138,  1139,  1142,  1144,  1148,  1150,  1154,  1155,  1156,
    1157,  1158,  1159,  1160,  1161,  1164,  1165,  1166,  1169,  1172,
    1173,  1175,  1177,  1178,  1179,  1180,  1181,  1182,  1189,  1190,
    1193,  1194,  1195,  1198,  1199,  1202,  1205,  1206,  1208,  1212,
    1213,  1214,  1217,  1221,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1230,  1231,  1234,  1235,  1236,  1239,  1240,  1243,  1245,
    1253,  1255,  1257,  1261,  1262,  1264,  1267,  1270,  1271,  1275,
    1277,  1280,  1285,  1286,  1287,  1291,  1292,  1293,  1296,  1297,
    1298,  1301,  1302,  1304,  1305,  1306,  1307,  1308,  1309,  1310,
    1311,  1312,  1313,  1315,  1316,  1319,  1320,  1323,  1324,  1325,
    1326,  1329,  1330,  1333,  1335,  1338,  1342,  1343,  1344,  1346,
    1348,  1352,  1353,  1354,  1357,  1358,  1359,  1360,  1361,  1362,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1374,  1375,  1378,
    1381,  1382,  1383,  1386,  1389,  1390,  1391,  1394,  1395,  1396,
    1399,  1400,  1401,  1402,  1403,  1404,  1407,  1408,  1409,  1410,
    1411,  1412,  1413,  1414,  1417,  1418,  1419,  1420,  1423,  1424,
    1427,  1428,  1431,  1432,  1435,  1436,  1439,  1440,  1443,  1444,
    1445,  1448,  1449,  1452,  1453,  1456,  1459,  1467,  1468,  1471,
    1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,  1480,  1481,
    1482,  1483,  1484,  1485,  1486,  1487,  1488,  1491,  1494,  1495,
    1498,  1499,  1500,  1501,  1504,  1505,  1506,  1507,  1510,  1511,
    1512,  1513,  1514,  1515,  1518,  1519,  1520,  1521,  1522,  1523,
    1525,  1526,  1531,  1532,  1535,  1537,  1539,  1542,  1543,  1544,
    1545,  1546,  1547,  1550,  1552,  1554,  1556,  1557,  1559,  1561,
    1563,  1565,  1567,  1568,  1569,  1572,  1573,  1574,  1575,  1576,
    1577,  1579,  1580,  1581,  1584,  1587,  1589,  1591,  1593,  1595,
    1597,  1599,  1601,  1604,  1606,  1608,  1610,  1611,  1612,  1613,
    1614,  1615,  1616,  1617,  1618,  1621,  1622,  1623,  1624,  1625,
    1626,  1627,  1629,  1631,  1632,  1633,  1636,  1637,  1638,  1639,
    1640,  1641,  1643,  1644,  1645,  1648,  1649,  1650,  1651,  1652,
    1655,  1658,  1661,  1664,  1667,  1670,  1673,  1676,  1679,  1684,
    1687,  1690,  1693,  1696,  1699,  1702,  1705,  1708,  1711,  1714,
    1719,  1722,  1725,  1728,  1731,  1734,  1737,  1740,  1743,  1748,
    1750,  1752,  1754,  1756,  1758,  1763,  1765,  1767,  1771,  1774,
    1777,  1780,  1783,  1786,  1789,  1792,  1795,  1798,  1801,  1806,
    1807,  1808,  1809,  1810,  1811,  1812,  1814,  1816,  1817,  1818,
    1821,  1822,  1823,  1824,  1825,  1826,  1828,  1829,  1830,  1833,
    1835,  1837,  1838,  1840,  1842,  1846,  1847,  1850,  1851,  1852,
    1855,  1858,  1859,  1860,  1861,  1862,  1863,  1864,  1867,  1875,
    1876,  1877,  1878,  1880,  1882,  1883,  1883,  1884,  1885,  1886,
    1887,  1888,  1890,  1891,  1893,  1896,  1899,  1900,  1901,  1904,
    1907,  1910,  1914,  1917,  1920,  1923,  1927,  1932,  1937,  1939,
    1941,  1942,  1944,  1946,  1948,  1950,  1951,  1952,  1954,  1956,
    1958,  1962,  1967,  1969,  1971,  1973,  1975,  1977,  1979,  1981,
    1983,  1985,  1987,  1990,  1991,  1993,  1995,  1996,  1998,  2000,
    2001,  2002,  2004,  2006,  2007,  2008,  2010,  2011,  2014,  2018,
    2021,  2024,  2028,  2033,  2039,  2040,  2041,  2043,  2044,  2048,
    2050,  2051,  2052,  2055,  2058,  2061,  2064,  2066,  2068,  2073,
    2076,  2077,  2078,  2081,  2085,  2086,  2088,  2089,  2090,  2092,
    2093,  2095,  2096,  2101,  2103,  2104,  2106,  2107,  2108,  2109,
    2110,  2111,  2113,  2115,  2117,  2118,  2119,  2121,  2123,  2124,
    2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,  2133,  2135,
    2137,  2138,  2139,  2140,  2142,  2143,  2144,  2145,  2146,  2148,
    2149,  2150,  2151,  2152,  2153,  2156,  2157,  2158,  2159,  2160,
    2161,  2162,  2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,
    2171,  2172,  2173,  2174,  2175,  2176,  2179,  2180,  2181,  2182,
    2183,  2184,  2192,  2199,  2208,  2217,  2224,  2231,  2239,  2247,
    2254,  2259,  2264,  2269,  2274,  2279,  2284,  2290,  2300,  2310,
    2320,  2327,  2337,  2347,  2356,  2368,  2381,  2387,  2390,  2391,
    2400,  2402,  2404,  2409,  2413,  2414,  2415,  2421,  2423,  2425,
    2428,  2429,  2430,  2431,  2432,  2433,  2434,  2437,  2438,  2439,
    2440,  2441,  2442,  2444,  2446,  2448,  2450,  2452,  2454,  2457,
    2458,  2459,  2460,  2462,  2465,  2467,  2469,  2470,  2471,  2473,
    2476,  2479,  2481,  2482,  2483,  2484,  2486,  2487,  2488,  2489,
    2490,  2491,  2492,  2494,  2496,  2498,  2501,  2502,  2503,  2505,
    2508,  2509,  2510,  2511,  2513,  2516,  2520,  2521,  2522,  2525,
    2528,  2531,  2533,  2534,  2535,  2536,  2538,  2541,  2542,  2544,
    2545,  2546,  2547,  2548,  2550,  2551,  2553,  2556,  2557,  2558,
    2559,  2560,  2562,  2564,  2565,  2566,  2567,  2569,  2571,  2572,
    2573,  2574,  2575,  2576,  2578,  2579,  2581,  2584,  2585,  2586,
    2587,  2590,  2591,  2594,  2595,  2598,  2599,  2602,  2615,  2616,
    2620,  2621,  2625,  2626,  2629,  2633,  2639,  2641,  2644,  2646,
    2649,  2651,  2655,  2656,  2657,  2658,  2659,  2660,  2661,  2665,
    2666,  2669,  2670,  2671,  2672,  2673,  2674,  2675,  2676,  2679,
    2680,  2681,  2682,  2683,  2684,  2685,  2686,  2687,  2688,  2689,
    2690,  2693,  2694,  2697,  2698,  2698,  2701,  2703,  2705,  2708,
    2709,  2710,  2711,  2712,  2713,  2716,  2717,  2720,  2721,  2724,
    2728,  2729,  2729,  2732,  2733,  2736,  2739,  2743,  2744,  2745,
    2746,  2747,  2748,  2749,  2750,  2751,  2752,  2753,  2754,  2756,
    2757,  2758,  2759,  2760,  2761,  2762,  2763,  2764,  2765,  2766,
    2767,  2768,  2769,  2772,  2773,  2774,  2775,  2776,  2777,  2778,
    2779,  2785,  2786,  2787,  2788,  2791,  2793,  2794,  2799,  2801,
    2802,  2803,  2804,  2807,  2808,  2813,  2817,  2818,  2819,  2822,
    2823,  2828,  2829,  2832,  2834,  2835,  2836,  2841,  2843,  2849,
    2850,  2851,  2852,  2855,  2856,  2859,  2861,  2863,  2864,  2867,
    2869,  2870,  2871,  2874,  2875,  2876,  2879,  2880,  2881,  2884,
    2885,  2886,  2889,  2893,  2894,  2895,  2896,  2897,  2900,  2901,
    2902,  2903,  2904,  2905,  2908,  2909,  2910,  2911,  2912,  2915,
    2916,  2917,  2920,  2921,  2922,  2923,  2924,  2925,  2928,  2929,
    2930,  2933,  2935,  2937,  2939,  2940,  2941,  2944,  2945,  2946,
    2947,  2948,  2949,  2950,  2951,  2952,  2953,  2954,  2955,  2956,
    2959,  2960,  2961,  2964,  2965,  2966,  2969,  2970,  2971,  2974,
    2975,  2976,  2979,  2980,  2981,  2982,  2985,  2986,  2987,  2990,
    2992,  2994,  2998,  2999,  3000,  3003,  3004,  3005,  3008,  3010,
    3012,  3016,  3017,  3018,  3021,  3022,  3023,  3026,  3028,  3030,
    3034,  3035,  3036,  3039,  3040,  3041,  3044,  3045,  3046,  3049,
    3051,  3053,  3057,  3061,  3063,  3068,  3071,  3072,  3073,  3074,
    3077,  3078,  3081,  3083,  3085,  3088,  3089,  3090,  3093,  3094,
    3097,  3099,  3100,  3101,  3102,  3105,  3106,  3107,  3110,  3111,
    3112,  3115,  3116,  3121,  3123,  3126,  3133,  3134,  3136,  3141,
    3143,  3146,  3147,  3148,  3149,  3151,  3156
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
  "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "'Y'", "'N'", "'X'",
  "'='", "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisTask", "analysisMethod",
  "endian", "threed", "threedShade", "threedShadeNormal", "threedBorder",
  "threedCompass", "threedHighlite", "threedView", "bin", "binAbout",
  "binFactor", "binFunction", "binTo", "block", "blockTo", "clip",
  "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fade", "fitsy", "get", "getHorzCut",
  "getVertCut", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
     635,   636,   637,   638,   639,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   389,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   391,   391,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   394,   394,   394,   394,   394,   395,   395,
     396,   396,   396,   397,   398,   399,   400,   400,   400,   400,
     401,   401,   401,   401,   401,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   403,   403,   404,   404,   404,   404,   404,
     404,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   406,   406,
     406,   406,   406,   406,   406,   406,   407,   407,   407,   407,
     407,   408,   408,   408,   408,   408,   408,   408,   408,   409,
     409,   409,   410,   410,   410,   410,   411,   411,   411,   412,
     412,   412,   413,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   415,   415,   416,   416,   416,   416,   416,
     416,   417,   417,   417,   417,   418,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   420,   420,   420,   420,   421,   421,   422,   422,   423,
     423,   424,   424,   425,   425,   426,   426,   426,   426,   426,
     426,   426,   426,   427,   427,   428,   428,   428,   428,   428,
     428,   428,   428,   429,   429,   430,   430,   430,   430,   430,
     431,   431,   431,   432,   432,   432,   433,   433,   433,   433,
     433,   433,   433,   434,   434,   435,   435,   435,   435,   435,
     436,   436,   436,   436,   437,   437,   437,   437,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   439,   439,
     439,   440,   440,   441,   441,   441,   441,   441,   442,   442,
     442,   442,   442,   443,   443,   444,   444,   444,   445,   445,
     445,   445,   446,   446,   447,   447,   448,   448,   449,   449,
     450,   450,   450,   450,   450,   450,   450,   451,   451,   451,
     451,   451,   452,   452,   452,   452,   452,   452,   452,   452,
     453,   454,   454,   454,   454,   455,   455,   456,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   458,   458,   459,   459,   460,   460,   460,
     460,   460,   460,   460,   460,   461,   461,   461,   462,   463,
     463,   463,   463,   463,   463,   463,   463,   463,   464,   464,
     465,   465,   465,   466,   466,   467,   468,   468,   468,   469,
     469,   469,   470,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   472,   472,   472,   473,   473,   474,   474,
     475,   475,   475,   476,   476,   476,   477,   478,   478,   479,
     479,   479,   480,   480,   480,   481,   481,   481,   482,   482,
     482,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   484,   484,   485,   485,   485,
     485,   486,   486,   487,   487,   487,   488,   488,   488,   488,
     488,   489,   489,   489,   490,   490,   490,   490,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   492,   492,   493,
     494,   494,   494,   495,   496,   496,   496,   497,   497,   497,
     498,   498,   498,   498,   498,   498,   499,   499,   499,   499,
     499,   499,   499,   499,   500,   500,   500,   500,   501,   501,
     502,   502,   503,   503,   504,   504,   505,   505,   506,   506,
     506,   507,   507,   508,   508,   509,   509,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   512,   513,   513,
     514,   514,   514,   514,   515,   515,   515,   515,   516,   516,
     516,   516,   516,   516,   517,   517,   517,   517,   517,   517,
     517,   517,   518,   518,   519,   519,   519,   520,   520,   520,
     520,   520,   520,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   523,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   527,   527,   527,   527,   527,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   533,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   533,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   535,
     535,   535,   535,   535,   535,   536,   536,   537,   537,   537,
     538,   539,   539,   539,   539,   539,   539,   539,   540,   541,
     541,   541,   541,   541,   541,   542,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   544,   544,   544,   544,
     544,   544,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   546,   546,
     547,   547,   547,   547,   548,   548,   548,   549,   549,   549,
     550,   550,   550,   550,   550,   550,   550,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   551,   551,   551,   551,   551,   551,   552,   552,   552,
     552,   553,   553,   554,   554,   555,   555,   556,   557,   557,
     557,   557,   557,   557,   558,   558,   559,   559,   559,   559,
     559,   559,   560,   560,   560,   560,   560,   560,   560,   561,
     561,   562,   562,   562,   562,   562,   562,   562,   562,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   564,   564,   565,   566,   565,   567,   567,   567,   568,
     568,   568,   568,   568,   568,   569,   569,   570,   570,   571,
     572,   573,   572,   574,   574,   575,   576,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   578,   578,   578,   578,   578,   578,   578,
     578,   579,   579,   579,   579,   580,   580,   580,   580,   580,
     580,   580,   580,   581,   581,   581,   582,   582,   582,   583,
     583,   583,   583,   584,   584,   584,   584,   585,   585,   586,
     586,   586,   586,   587,   587,   588,   588,   588,   588,   589,
     589,   589,   589,   590,   590,   590,   591,   591,   591,   592,
     592,   592,   593,   594,   594,   594,   594,   594,   595,   595,
     595,   595,   595,   595,   596,   596,   596,   596,   596,   597,
     597,   597,   598,   598,   598,   598,   598,   598,   599,   599,
     599,   600,   600,   600,   600,   600,   600,   601,   601,   601,
     601,   601,   601,   601,   601,   601,   601,   601,   601,   601,
     602,   602,   602,   603,   603,   603,   604,   604,   604,   605,
     605,   605,   606,   606,   606,   606,   607,   607,   607,   608,
     608,   608,   609,   609,   609,   610,   610,   610,   611,   611,
     611,   612,   612,   612,   613,   613,   613,   614,   614,   614,
     615,   615,   615,   616,   616,   616,   617,   617,   617,   618,
     618,   618,   619,   620,   620,   620,   621,   621,   621,   621,
     622,   622,   622,   622,   622,   623,   623,   623,   624,   624,
     625,   625,   625,   625,   625,   626,   626,   626,   627,   627,
     627,   628,   628,   628,   628,   629,   630,   630,   630,   630,
     630,   631,   631,   631,   631,   631,   631
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
       7,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     1,     1,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     4,     3,     2,
       2,     2,     2,     2,     1,     3,     2,     2,     2,     2,
       1,     2,     8,     2,     1,     2,     1,     2,     1,     4,
       3,     2,     1,     7,     8,     7,     8,     1,     1,     1,
       2,     1,     1,     2,     1,     0,     2,     2,     1,     0,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     4,     5,     0,
       2,     1,     5,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     0,     1,     1,     0,     1,     5,     6,
       3,     6,     3,     1,     3,     1,     1,     1,     3,     6,
       7,     5,     2,     1,     5,     4,     1,     3,     0,     1,
       2,     1,     4,     1,     2,     1,     2,     3,     2,     1,
       2,     1,     4,     2,     1,     1,     3,     1,     2,     3,
       2,     0,     1,     1,     4,     2,     0,     1,     3,     4,
       4,     0,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     2,     1,     0,     1,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       2,     0,     1,     2,     1,     6,     5,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     1,     2,     2,     4,     5,
       1,    10,     1,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     3,     5,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     3,     2,     2,     1,     3,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       5,     5,     5,     5,     5,     7,     5,     5,     6,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     5,     5,     6,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     4,
       4,     3,     5,     4,     4,     2,     3,     6,     6,     1,
       1,     1,     2,     2,     2,     3,     3,     2,    12,     2,
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     5,     5,     6,     5,     4,     4,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     7,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     7,     4,
       3,     3,     6,     7,     7,     7,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     2,     2,     2,     3,     2,
       2,     2,     3,     2,     3,     4,     3,     3,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     3,     2,     0,     1,
       3,     4,     4,     4,     0,     1,     1,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     3,     8,     6,    10,     7,     7,     5,     2,
       2,     3,     4,     5,     5,     5,     3,     4,     5,     5,
       5,     5,     2,     3,     3,     5,     3,     3,     3,     3,
       3,     4,     5,     5,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     6,     6,
       5,     5,     2,     3,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     5,     6,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
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
       0,   340,     0,     0,     0,     0,     0,     0,   368,     0,
       0,    23,     0,     0,     0,     0,     0,  1187,     0,     0,
       0,     0,  1118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1118,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1380,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   270,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   303,   305,     0,     0,     0,     0,     0,
      11,   163,   165,   158,   159,   160,   164,   161,   162,   311,
      12,     0,   323,     0,     0,     0,    13,     0,     0,     0,
       0,   347,     0,    14,    74,   103,     0,   133,   102,    82,
     100,     0,    79,    81,    77,   134,   101,    78,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    75,    76,    80,
     354,   171,   104,     0,    15,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    63,
     366,   365,    18,     0,    19,     0,     0,     0,   429,   443,
       0,   449,     0,     0,     0,     0,     0,     0,     0,   383,
       0,   521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1118,     0,   394,     0,     0,   400,     0,     0,     0,
     404,     0,   406,     0,   408,     0,     0,   578,   412,    20,
       0,   584,    21,   589,     0,     0,   608,   593,   594,   595,
     596,   610,   598,   599,   603,   600,     0,   602,   604,     0,
       0,    22,     0,    24,     0,     0,     0,    26,     0,     0,
       0,    27,     0,   625,     0,     0,     0,   630,     0,    28,
       0,  1189,   141,  1211,     0,  1188,  1203,  1207,  1201,     0,
    1199,  1209,     0,  1205,     0,    36,     0,     0,     0,     0,
       0,     0,    30,   790,    31,     0,     0,     0,     0,     0,
       0,   791,    32,     0,    33,  1122,  1123,  1119,  1120,  1121,
       0,   141,  1213,     0,   135,     0,     0,     0,    35,     0,
      37,     0,  1224,  1223,  1222,  1221,    39,     0,     0,     0,
       0,     0,   171,     0,    40,     0,  1242,     0,  1239,    41,
       0,     0,     0,     0,    44,     0,    43,    42,     0,     0,
       0,     0,    47,     0,     0,  1284,    48,     0,     0,     0,
       0,     0,     0,    49,  1376,  1375,  1379,  1378,  1377,    51,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,  1382,    55,     0,     0,    57,
       0,     0,     0,     0,   171,    58,  1405,    59,     0,     0,
      60,     1,     4,     5,   253,     0,   245,     0,     0,   247,
       0,   255,   248,   252,   263,   264,   249,   265,     0,   251,
     273,   274,   272,   271,     0,     0,   293,     0,   278,   286,
     289,   288,   287,   285,   277,   282,   283,   284,   276,     0,
       0,     0,     0,     0,     0,   281,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,   312,     0,
     322,   313,   324,   314,   325,   315,   336,   316,     0,     0,
     317,     0,    93,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,   173,   178,   172,   174,   177,   176,   175,     0,
       0,   360,    68,    69,    70,    71,    72,    64,    65,    66,
      73,    67,     0,   369,     0,   425,   421,   417,   418,   422,
     419,   424,   370,   428,   371,   328,   433,   437,   432,   331,
     330,   329,     0,     0,   372,   444,   374,     0,   373,     0,
     451,   375,   463,   455,   466,   456,   457,   459,     0,   461,
     462,   171,   376,     0,     0,   377,     0,     0,   171,   378,
     475,   171,   473,   379,   476,   381,   171,   477,   380,     0,
     171,     0,   382,   495,     0,   493,   511,     0,     0,     0,
     499,   491,     0,   501,   516,   504,   384,   522,   523,   385,
     386,     0,     0,   547,   548,   549,   389,   544,   545,   546,
     390,     0,   486,     0,   391,    83,   483,     0,   392,   393,
     537,   537,   524,   525,   537,   537,   397,     0,   536,   530,
     535,   531,   532,   533,   534,   396,   543,   398,   399,   539,
     401,     0,   540,   541,   542,   403,   555,   550,   551,   553,
     405,   561,   570,   572,   574,   560,   563,   564,   576,   407,
       0,     0,   581,     0,   411,   171,   583,   590,     0,   591,
     609,   592,   611,   612,   613,   597,   614,   616,   615,   617,
     601,   605,   622,     0,     0,     0,     0,   618,   606,    25,
    1278,  1279,  1280,  1281,  1282,     0,  1273,  1274,  1275,  1276,
       0,     0,     0,   627,   626,     0,     0,     0,     0,    29,
     141,  1212,     0,  1204,  1208,  1202,  1200,  1210,     0,  1206,
       0,   156,   149,   148,   146,   152,   153,   150,   154,   147,
     157,   143,   145,   155,   144,   151,   142,  1193,  1191,  1190,
    1195,  1197,     0,     0,     0,     0,   637,     0,   638,     0,
       0,     0,     0,     0,     0,     0,   639,     0,   789,     0,
     640,     0,   641,     0,     0,   642,     0,   794,   793,   792,
       0,   797,     0,     0,     0,   966,     0,     0,     0,   801,
     805,   807,  1004,     0,     0,     0,     0,   904,     0,     0,
       0,   939,     0,     0,     0,     0,     0,     0,     0,   941,
       0,     0,     0,    34,  1219,  1214,  1220,   138,   139,   137,
     140,   136,  1215,     0,  1217,  1218,  1272,    38,     0,     0,
       0,     0,  1231,  1232,     0,   171,     0,  1229,  1226,     0,
       0,     0,   171,  1249,  1252,  1250,  1251,  1243,  1244,  1245,
    1246,     0,     0,     0,    46,  1269,  1270,     0,  1289,  1291,
    1290,  1286,  1287,  1285,     0,     0,     0,     0,     0,     0,
    1292,     0,  1296,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1293,  1307,     0,     0,     0,
    1295,  1297,     0,     0,     0,  1294,  1374,  1267,  1268,  1266,
     226,     0,   237,   222,     0,   239,   223,     0,   241,   224,
    1264,  1265,  1263,   225,   228,     0,     0,     0,   231,   227,
     229,   230,     0,     0,   221,     0,     0,     0,     0,  1388,
    1401,     0,     0,  1391,     0,     0,  1394,     0,     0,  1393,
    1392,   179,  1411,     0,  1410,  1406,   254,   250,     0,   259,
       0,   256,     0,   275,   166,   169,   170,   168,   167,   290,
     291,   292,   280,   279,   295,   297,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,   344,    99,    96,    97,    98,   171,
     346,   345,     0,     0,     0,     0,     0,     0,     0,   359,
       0,   355,   353,   352,   367,   420,     0,     0,   423,   438,
     439,   434,   435,   440,   442,   441,   436,   332,   333,   431,
     430,   446,   445,     0,   450,   464,   465,   454,   467,   460,
     458,   453,     0,     0,   171,   171,   179,   179,   179,   171,
       0,     0,   171,   512,   494,   505,     0,   496,    83,   507,
       0,     0,   498,   500,   171,   517,     0,     0,   503,     0,
       0,   388,     0,   488,    87,    86,   482,     0,   538,   527,
     526,   528,   529,     0,     0,     0,  1018,  1020,  1019,     0,
    1111,     0,  1090,     0,  1093,     0,     0,  1113,  1115,     0,
    1106,   395,     0,   552,   554,   571,   557,   573,   558,   575,
     559,   565,   568,   566,   562,   577,   556,     0,     0,   410,
     582,   579,   580,   179,   607,   619,   620,   621,   623,     0,
       0,     0,   636,   624,     0,     0,     0,  1194,  1192,  1196,
    1198,     0,     0,     0,   192,   192,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   684,   708,     0,     0,     0,   676,     0,
       0,     0,     0,   192,   186,     0,     0,   785,     0,   795,
     796,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   853,     0,     0,     0,     0,
       0,   875,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   894,     0,     0,   899,   900,     0,     0,     0,   919,
     921,   920,     0,   923,     0,     0,   930,   932,   933,   967,
       0,     0,     0,     0,   799,   800,  1012,  1010,  1015,  1014,
    1013,  1011,  1016,     0,   804,     0,  1006,  1005,   808,     0,
    1009,     0,   809,   810,   811,   812,     0,     0,     0,     0,
       0,   906,     0,     0,   907,  1134,     0,  1137,  1133,     0,
       0,     0,   908,   940,   909,  1152,  1157,  1154,  1160,  1153,
    1151,  1158,  1155,  1149,  1156,  1150,  1159,     0,     0,   914,
       0,     0,     0,     0,   915,  1169,  1173,  1174,     0,  1171,
     916,     0,  1175,   917,   937,     0,     0,     0,   942,   943,
     944,  1216,  1230,     0,     0,  1237,  1233,     0,     0,     0,
    1228,  1227,  1241,  1240,     0,     0,  1257,     0,     0,  1253,
       0,  1261,     0,     0,  1254,     0,  1288,   215,   215,     0,
       0,     0,   215,     0,  1321,     0,  1320,     0,     0,     0,
       0,  1308,     0,     0,     0,     0,  1312,     0,     0,     0,
    1319,     0,     0,     0,     0,     0,  1310,  1322,     0,     0,
       0,  1309,   215,   215,   215,  1299,  1298,  1300,     0,   238,
     240,   242,   232,     0,   235,   234,   233,     0,   243,     0,
      62,     0,  1384,     0,  1389,   171,  1404,     0,  1395,  1396,
       0,  1398,  1399,     0,   180,   181,  1390,  1412,  1413,     0,
     246,     0,   260,     0,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   171,     0,     0,     0,     0,   171,     0,
     358,     0,   357,   427,   426,     0,     0,     0,   171,     0,
     179,   472,   470,   474,   478,     0,     0,     0,   179,     0,
     513,   497,     0,   508,   510,   182,     0,     0,   387,     0,
       0,    62,     0,   487,    85,    84,     0,     0,  1030,     0,
       0,     0,     0,     0,     0,  1042,     0,     0,     0,     0,
       0,     0,  1060,  1061,     0,     0,     0,     0,     0,  1072,
       0,  1078,  1079,  1081,  1083,     0,  1087,  1098,  1099,  1100,
       0,  1102,  1107,  1109,  1110,  1108,  1017,     0,  1089,     0,
    1088,  1029,     0,     0,  1094,     0,  1096,     0,  1095,  1116,
    1097,  1104,     0,     0,   569,   567,   409,     0,     0,  1283,
    1277,   634,   635,     0,   632,   628,     0,   192,   192,   192,
     193,   194,   646,   647,   188,   187,     0,   192,   192,   192,
       0,   654,   653,   652,   664,   189,   192,   192,   192,   190,
     191,   192,   192,     0,   192,   192,     0,   189,     0,   677,
       0,   683,     0,   682,   681,   680,     0,     0,     0,   707,
       0,   706,     0,   679,   678,     0,     0,     0,     0,   189,
     189,   186,     0,     0,   186,     0,     0,     0,   192,   192,
     781,     0,   192,   192,   786,     0,   205,   206,   207,   208,
     209,   210,     0,    91,    92,    90,   816,     0,     0,     0,
       0,     0,   960,   958,   953,     0,   963,   947,   964,   950,
     962,   956,   945,   959,   948,   946,   965,   961,     0,     0,
     830,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   863,     0,     0,     0,
       0,   874,   876,     0,     0,   881,   880,     0,     0,   195,
       0,     0,     0,   171,     0,   890,     0,     0,     0,     0,
     895,   896,   897,     0,     0,     0,   903,   918,   922,   924,
     927,   926,     0,     0,     0,   931,   968,   970,     0,   969,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     998,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   806,     0,     0,     0,
       0,   905,     0,   171,  1130,  1128,  1126,     0,     0,   171,
    1132,   910,     0,     0,     0,     0,  1168,     0,     0,  1176,
     935,   936,     0,   938,  1236,  1238,  1235,  1234,  1225,     0,
       0,     0,  1258,     0,     0,  1262,  1271,   217,   218,   219,
     220,   216,  1302,  1301,     0,     0,     0,  1306,     0,     0,
       0,  1305,     0,     0,     0,  1304,  1303,   215,     0,     0,
       0,  1311,     0,     0,     0,  1318,     0,     0,     0,  1317,
       0,     0,     0,  1316,     0,     0,     0,  1315,     0,     0,
       0,     0,     0,  1332,     0,  1367,  1366,  1368,     0,     0,
       0,  1314,     0,     0,     0,  1313,  1327,  1326,  1328,  1324,
    1323,  1325,  1370,  1369,  1371,     0,   236,     0,     0,  1386,
    1387,     0,  1402,   171,  1397,  1400,     0,     0,   171,     0,
       0,     0,   257,     0,     0,     0,     0,   298,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   334,     0,
       0,   326,   337,   339,     0,   349,   351,   350,   348,   171,
     356,     0,     0,     0,   179,   171,     0,     0,     0,     0,
     492,   506,   515,     0,   509,   184,   185,   183,   502,     0,
     518,     0,     0,   485,   490,    83,     0,     0,     0,     0,
       0,     0,   171,  1031,     0,     0,     0,  1036,     0,   171,
       0,  1043,  1044,     0,  1046,  1048,  1047,  1049,  1050,     0,
       0,     0,  1056,     0,  1062,     0,     0,     0,  1066,  1067,
       0,     0,     0,     0,  1073,  1074,     0,     0,  1077,  1080,
    1082,  1084,     0,     0,  1101,  1103,  1021,  1112,  1022,     0,
       0,  1114,  1105,     0,     0,   587,   588,     0,   629,   633,
       0,   643,   644,   645,   192,   649,   650,   651,     0,     0,
       0,   658,   659,   186,     0,     0,     0,   192,   665,   666,
     667,   668,   670,   189,   673,   674,     0,   192,     0,     0,
       0,   189,   189,   186,     0,     0,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
       0,   189,   189,   186,     0,     0,     0,     0,   705,     0,
     709,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,   186,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,   186,     0,   189,   685,   686,   687,   688,   690,
       0,   693,   694,     0,   189,     0,     0,   779,   780,   192,
     783,   784,     0,   815,   171,   817,     0,     0,     0,     0,
       0,     0,     0,   952,   949,   955,   954,   951,   957,     0,
       0,     0,     0,     0,   171,   836,   835,   837,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   854,   855,   856,     0,   860,   857,   859,     0,     0,
     865,   864,   866,     0,     0,     0,     0,     0,     0,   171,
     171,   879,   201,   197,   202,   196,   199,   198,   200,   886,
     887,   171,     0,     0,   889,   891,   171,   171,     0,   898,
     901,   171,   171,   925,   929,   971,   803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   999,  1117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   997,     0,     0,     0,     0,     0,   813,
     814,   171,   179,  1131,     0,     0,  1135,  1136,     0,     0,
     912,     0,   171,     0,  1170,  1172,   934,     0,  1255,  1256,
    1259,  1260,   215,   215,   215,   215,   215,   215,   215,   215,
     215,  1372,  1330,  1329,  1331,  1364,  1363,  1365,  1361,  1360,
    1362,  1355,  1354,  1356,  1352,  1351,  1353,  1334,  1333,  1337,
    1336,  1338,  1335,  1346,  1345,  1347,  1343,  1342,  1344,     0,
       0,  1381,     0,  1403,     0,   171,     0,  1407,     0,     0,
     261,     0,   258,     0,     0,     0,     0,     0,   306,     0,
       0,     0,     0,     0,     0,     0,   171,     0,   341,   159,
       0,   447,     0,   468,   179,   182,     0,     0,   481,     0,
     519,   520,     0,   484,     0,     0,     0,     0,     0,   171,
    1032,   182,   182,   182,   171,  1037,   182,   179,   182,   182,
     171,  1051,   182,   182,   182,   171,  1057,   182,   182,   171,
       0,   171,   182,   171,   182,   182,   171,   182,   171,  1091,
    1092,     0,     0,   586,     0,   648,   655,   656,   657,     0,
     661,   662,   663,   669,   192,   189,   675,   696,   697,   698,
     699,   700,     0,   702,   703,   189,   189,   759,   760,   761,
     762,   764,     0,   767,   768,     0,   189,   770,   771,   772,
     773,   774,     0,   776,   777,   189,     0,     0,     0,   189,
     189,   186,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,     0,   189,   192,   192,   192,   192,   192,     0,
     192,   192,     0,   189,   189,   192,   192,   192,   192,   192,
       0,   192,   192,     0,   189,   689,   189,     0,   695,     0,
       0,   782,     0,   818,   182,     0,     0,   182,     0,     0,
       0,   828,   182,   831,   832,   182,   834,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     858,   861,   862,     0,   182,     0,     0,     0,   877,     0,
       0,   179,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1161,
     996,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,    88,     0,     0,  1007,
    1008,   179,     0,     0,     0,  1138,   911,   913,   179,   171,
    1248,  1358,  1357,  1359,  1349,  1348,  1350,  1340,  1339,  1341,
    1373,     0,  1383,  1414,     0,     0,  1409,  1408,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   302,     0,
       0,   327,   182,   448,   452,   469,   471,     0,   479,   514,
     171,     0,     0,     0,     0,     0,     0,  1028,  1033,  1035,
    1034,  1038,  1039,  1040,  1041,  1045,  1052,  1053,  1054,  1055,
    1058,  1059,  1063,   179,   182,   179,  1070,   179,  1071,  1075,
     179,  1085,   179,     0,   171,     0,   585,     0,   660,   671,
     192,   189,   704,   763,   189,     0,   769,   189,   778,   192,
     192,   192,   192,   192,     0,   192,   192,   189,   192,   192,
     192,   192,   192,     0,   192,   192,   189,   192,   192,   192,
     192,   192,     0,   192,   192,   189,   192,   719,   720,   721,
     722,   724,   189,   727,   728,     0,   192,   192,   748,   749,
     750,   751,   753,   189,   756,   757,     0,   192,   691,   189,
     787,   788,   171,   820,     0,   182,   822,     0,   171,     0,
     829,   833,   171,     0,   842,   843,   844,   845,   849,   850,
     846,   847,   848,     0,     0,   182,   869,     0,   171,     0,
       0,   882,     0,   182,     0,     0,   182,   182,     0,   928,
       0,   203,   203,     0,     0,   203,     0,   203,  1117,     0,
       0,     0,     0,     0,     0,     0,     0,  1162,  1140,     0,
    1147,  1148,     0,   203,   203,     0,     0,     0,     0,     0,
       0,     0,     0,  1000,     0,     0,     0,  1117,    89,     0,
     203,     0,  1164,   171,   171,     0,   179,     0,   244,  1416,
    1415,     0,     0,   266,     0,     0,     0,     0,     0,   310,
       0,     0,     0,   342,   480,     0,   361,     0,  1024,     0,
     211,     0,  1064,  1065,  1068,  1069,  1076,  1086,   402,     0,
     361,     0,   672,   701,   765,   189,   775,   710,   711,   712,
     713,   714,   189,   716,   717,   192,   739,   740,   741,   742,
     743,   189,   745,   746,   192,   730,   731,   732,   733,   734,
     189,   736,   737,   192,   723,   192,   189,   729,   752,   192,
     189,   758,   692,     0,   182,   823,     0,     0,     0,     0,
       0,   851,   852,   867,     0,     0,     0,   878,   883,   884,
       0,   892,   893,   885,   182,     0,   204,  1117,  1117,    88,
       0,  1117,     0,  1117,   972,   171,     0,     0,     0,     0,
       0,     0,     0,  1139,     0,     0,  1117,  1117,    88,     0,
       0,  1117,  1117,     0,     0,  1117,  1003,  1001,  1002,   979,
    1117,  1117,  1164,  1180,     0,  1129,  1127,  1166,     0,     0,
       0,     0,   268,   300,   301,     0,     0,     0,   299,     0,
     361,   362,   364,   363,   413,     0,     0,   212,   214,   213,
    1026,  1027,   361,   415,     0,   766,   192,   718,   192,   747,
     192,   738,   725,   192,   754,   192,     0,   819,   182,   182,
       0,   182,     0,   182,   182,     0,   182,     0,  1117,   985,
     981,  1117,     0,   986,     0,   980,  1117,     0,  1142,     0,
    1145,  1185,  1146,  1144,  1141,     0,   983,   982,  1117,     0,
       0,   977,   975,  1117,   171,   976,   978,   984,  1180,  1124,
       0,     0,  1165,  1178,  1167,  1247,     0,     0,   308,   309,
     307,   328,   331,   329,     0,     0,   414,  1023,   171,   416,
     631,   715,   744,   735,   726,   755,   182,   821,   827,     0,
     841,   838,   868,   873,     0,   888,     0,   990,   974,    88,
       0,   988,     0,  1143,     0,   973,    88,     0,   989,     0,
    1125,  1182,  1184,     0,  1177,     0,     0,     0,     0,     0,
       0,   211,     0,   824,   171,   839,   870,   902,  1117,     0,
    1186,     0,  1117,     0,   182,  1183,  1179,   267,     0,     0,
       0,     0,     0,  1025,   798,   171,   825,   840,   171,   871,
     992,     0,  1117,   991,     0,     0,   269,   321,     0,   320,
       0,   826,   872,    88,   993,    88,  1117,   319,   318,  1117,
    1117,   987,   995,   994
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1605,   178,   160,  1046,  2737,  2738,   476,   477,
     478,   479,   161,   162,   163,   802,   727,    99,   939,   499,
    1386,  1898,  1536,  1551,  1532,  2139,  2847,  1602,  2910,  1772,
     382,   899,  1365,   883,   886,   889,   904,    68,   406,   412,
     416,   419,    73,   422,    80,   438,   434,   428,   445,    90,
     455,   100,   106,   461,   463,   465,   533,   999,  1869,   467,
     470,   113,   486,   164,   166,  2904,   182,   184,   229,  1041,
    1089,   522,   988,   524,   534,   991,   996,   536,   538,  1002,
     541,  1004,   552,  1007,  1009,   555,   559,   563,   565,   568,
     572,   608,   604,  1453,   586,  1027,  1032,  1024,  1441,  1038,
     589,   616,   625,  1049,   630,   635,   627,   600,   596,   640,
     649,  1084,  1515,  1076,  1078,  1080,  1086,   654,  1091,   232,
     656,  1967,   251,   659,   661,   665,   670,   678,   269,  1525,
     693,   292,   736,  1541,   738,   746,  1148,  1559,  1143,  2028,
    1571,  1569,  2030,  1144,  1561,  1563,   752,   755,   750,   294,
     302,   304,   793,  1225,  1628,  1214,  1726,  2168,  2183,  1228,
    1232,  1223,  1071,  1496,  1500,  1508,  1510,  2489,   310,  1241,
    1244,  1252,  2717,  2718,  2719,  2490,  2883,  2884,  1274,  1280,
    1283,  2972,  2973,  2969,  2970,  3021,  2720,  2721,   285,   318,
     326,   334,   817,   812,   339,   344,   346,   827,   834,  1309,
    1314,   893,   880,   352,   320,   261,   257,   356,   841,   363,
     875,   850,   865,   866,  1351,  1346,  1791,  1336,  1813,  1785,
    1825,  1821,  1781,  1807,  1803,  1777,  1799,  1795,  1340,   870,
     852,   369,   370,   386,  1372,   389,   395,   916,   919,   913,
     397,   400,   924
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2843
static const yytype_int16 yypact[] =
{
    5342,   118,   102,    44, -2843, -2843,  1003,  -172,   979,   631,
    1401,    55,   806,   183,   393,   146,   678,    35,  5559,   562,
    3115, -2843,    74,   -20,   101,  1120,   162,   771,  1067,   -29,
     200,   261,   542,   821,   -43,   222,  1144,  3733,   311,  1260,
     315,   290,   542, -2843,   184,    42,     4, -2843,   502,   459,
    1254, -2843,   550, -2843,    49,  2445,   262,    94,   538,   197,
    1138,   224,   552,   559,   108,   584,    32,   129, -2843, -2843,
   -2843,   623,  1098, -2843,   458,    85,   393,     2,   627,   847,
   -2843,   630,  1098, -2843, -2843,  1098,  1098,   448,   609,  1098,
   -2843, -2843, -2843, -2843,  1098, -2843, -2843, -2843, -2843, -2843,
   -2843,    51,   613,   651,   656,   151, -2843,  1098,  1630,  1098,
    1098,  1318,  1098, -2843, -2843, -2843,   464, -2843, -2843, -2843,
   -2843,  4307, -2843, -2843, -2843, -2843, -2843, -2843,  1098, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,  1502, -2843,  1098, -2843,   679, -2843, -2843,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393, -2843, -2843,
   -2843, -2843, -2843,   594, -2843,   667,  1405,   618,   215,   456,
     648,   -27,  4262,   219,  4981,  4926,   829,  4307,  4170, -2843,
     641,  -158,   797,   865,   802,   225,   348,   632,  1031,   876,
     216,   542,  1172, -2843,   595,   855, -2843,   673,   637,   392,
   -2843,   344, -2843,   585, -2843,    63,   840,    72, -2843, -2843,
    4467, -2843, -2843, -2843,   867,   881,   944, -2843, -2843, -2843,
   -2843,    45, -2843, -2843, -2843, -2843,  1247, -2843, -2843,  4467,
    4529, -2843,  1032, -2843,     5,  4467,  1004, -2843,    30,  4467,
    1043, -2843,    67, -2843,  1070,  1075,   114, -2843,  1098, -2843,
    1078,   957,  3235, -2843,  1083, -2843, -2843, -2843, -2843,  1100,
   -2843, -2843,  1098, -2843,   393, -2843,   616,  1103,   628,    43,
    1105,    33, -2843, -2843, -2843,  1113,  1115,   393,   393,  1098,
    1098, -2843, -2843,  1132, -2843, -2843, -2843, -2843, -2843, -2843,
    3154,  3235, -2843,  1177,     8,  1098,  4467,  1098, -2843,  4467,
   -2843,  1184, -2843, -2843, -2843, -2843, -2843,  1098,  1566,   393,
    3347,  1098,  1502,  1098, -2843,  1139, -2843,  5628, -2843, -2843,
    1194,  1207,  1210,  1098, -2843,  1219, -2843, -2843,  -131,  1220,
    4467,  1223, -2843,  1570,  1098,  1128, -2843,   748,  1117,  1607,
      37,  1240,   523, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
    1245, -2843,   576,   229,   269,   345,   518,  1098,    25,  1258,
    1098,   192, -2843,  1098,   966,  1268, -2843,  1098,  1098, -2843,
      16,    17,    27,  1280,  1502, -2843, -2843, -2843,   998,  1098,
   -2843, -2843, -2843, -2843, -2843,  1098, -2843,  1294,  1306, -2843,
    1098,   655, -2843, -2843, -2843, -2843, -2843, -2843,  1098, -2843,
   -2843,  1098, -2843, -2843,   505,   505, -2843,  1313, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,  1153,
    1098,  1098,  1322,  1330,  1342, -2843, -2843,  1098,  1098,  1098,
    1098,  1098,  1098,  1349,  1098, -2843,  1361,  1098, -2843,  1385,
   -2843, -2843, -2843, -2843,   555, -2843,  1389, -2843,  4467,  1393,
   -2843,  1098, -2843, -2843, -2843,  1098,  1406,  1403,  1403,  4467,
    1098,  1098,  1098,  1098,  1098,  1098, -2843,  1098,  4307,  1630,
    1098,  1098, -2843, -2843, -2843, -2843, -2843, -2843, -2843,  1630,
    1098, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843,  1410, -2843,  1121,    11, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843,   -52, -2843, -2843, -2843,  1228,
   -2843,   -23,   338,   338, -2843, -2843, -2843,  1423, -2843,  1446,
   -2843, -2843,   -99, -2843,  1259, -2843, -2843, -2843,  1263, -2843,
   -2843,  1502, -2843,  1098,  1098, -2843,  4467,  4467,  1502, -2843,
   -2843,  1502, -2843, -2843, -2843, -2843,  1502, -2843, -2843,  4467,
    1502,  1098, -2843, -2843,  4467, -2843,  1453,   208,  1250,     7,
   -2843, -2843,  1251,  4467,    66, -2843, -2843, -2843, -2843, -2843,
   -2843,  1458,  1475, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,  1478, -2843,  1265, -2843,   -53, -2843,  1098, -2843, -2843,
    1479,  1479, -2843, -2843,  1479,  1479, -2843,  1332, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,    63, -2843, -2843, -2843, -2843, -2843, -2843,  1291,  1295,
   -2843, -2843,  1421,  1439,  1444, -2843, -2843,    19,  1264, -2843,
    1098,  1511,  1272,  5628, -2843,  1502, -2843, -2843,  1521, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,  4467,  4467,  4467,  4467, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843,  1523, -2843, -2843, -2843, -2843,
    1524,  1526,   393, -2843, -2843,  1536,  1540,  1327,  1098, -2843,
    3235, -2843,  1545, -2843, -2843, -2843, -2843, -2843,  1098, -2843,
     393, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843,   530,  1449,  1462,  1464, -2843,  1552, -2843,   548,
    1466,   415,   583,  5560,   586,  1554, -2843,  1541, -2843,  1558,
   -2843,    28, -2843,  1559,  1562, -2843,  1567, -2843, -2843, -2843,
    1098, -2843,  5628,  4852,  1677,   606,  1574,   455,  1467, -2843,
   -2843, -2843,    34,   735,  1571,  1578,   176,  1098,   461,   937,
     143,  4467,   393,  1770,   972,    76,    98,   313,    31, -2843,
    1573,  1581,  1596, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,  1098, -2843, -2843, -2843, -2843,  1098,  1098,
    1098,  1098, -2843, -2843,  1098,  1502,  1098, -2843,  1098,  1630,
    1098,  1597,  1502, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,  1598,   525,   549, -2843, -2843, -2843,  1599, -2843, -2843,
   -2843, -2843,  1509, -2843,  1608,  1610,  1525,  1529,  1531,  1614,
   -2843,  1620, -2843,  1622,  1539,  1624,   782,   805,   608,   607,
     640,   919,   725,  1632,   879, -2843, -2843,  1638,  1641,  1643,
   -2843, -2843,  1646,  1647,  1644, -2843,  1658, -2843, -2843, -2843,
   -2843,  1659, -2843, -2843,  1661, -2843, -2843,  1668, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843,  1098,   365,  1098, -2843, -2843,
   -2843, -2843,  1098,  1098, -2843,  1098,  1328,  1098,  1098, -2843,
    5628,  1611,  1670, -2843,   918,  1671, -2843,   963,  1673, -2843,
   -2843,   -81,  1098,  1098, -2843,  1652, -2843, -2843,  1674,  1253,
    1098,  1669,   266, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843,  1679,  1680,  1098,
    1098,  1098,  1098,  1098,  1682,  1098,  1686,  1098,  1683,   393,
    1688,  1689,  1502,  4467, -2843, -2843, -2843, -2843, -2843,  1502,
   -2843, -2843,  1098,  1098,  1098,  4467,  1098,  1630,  1098, -2843,
    1098, -2843, -2843, -2843, -2843, -2843,  1691,  1693, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,   219, -2843,  1098, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843,  4467,  1098,  1502,  1502,   -81,   -81,   -81,  1502,
    1630,  1098,  1502, -2843, -2843, -2843,  1098, -2843,   -53,  1512,
    1698,  1705, -2843, -2843,  1502, -2843,  1549,  1555, -2843,  1706,
    1724, -2843,  1726,  1339,  1692,  1697, -2843,  1098, -2843, -2843,
   -2843, -2843, -2843,  4929,   649,  1045, -2843, -2843, -2843,  1098,
     252,   842, -2843,  1454, -2843,  1770,  1455,   571,  1424,    84,
   -2843, -2843,  1098, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843,  1436, -2843, -2843, -2843, -2843,  1098,  1744, -2843,
   -2843, -2843, -2843,   -81, -2843, -2843, -2843, -2843, -2843,  1746,
    1749,  5010, -2843, -2843,  1750,  1751,  1098, -2843, -2843, -2843,
   -2843,  1754,  1759,  1760,   -32,   -32,   -71,  1763,  1764,  1767,
    1768,  1768,  1768,  1468,  1473,  1772,  1773,  1774,    57,    57,
     -71,  1777,  1780,   -71,  1781,  1810,  1811,  1812,  1811,  1812,
    5599,  1814,  1815, -2843, -2843,  1811,  1812,   750, -2843,  1829,
    1832,  1834,  1836,   -32,   -71,  1833,  1837, -2843,  1840, -2843,
   -2843,  1502,  1176,  1471,  1490,  1520,  1584,  1739,  2570,  1592,
    1855,    58,    56,  1752,  1645,  1063,  1821,  1603,  1604,  1757,
    1867,  1636,    88,   131,   582,  -100,  4467,  1770,  1841,   657,
    1606,  1637,  1873,   154, -2843, -2843,   139,  1877,  1881, -2843,
   -2843, -2843,  1882,  1651,   145,  1770,  1655, -2843, -2843, -2843,
     393,  1885,  1887,  1098, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,    23, -2843,  2281, -2843, -2843, -2843,  1098,
   -2843,  1098, -2843, -2843, -2843, -2843,  1098,  1098,  1098,   455,
    4467, -2843,  1888,  1125, -2843, -2843,  1098, -2843, -2843,  1098,
    4467,  1098, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843,   393,  1098, -2843,
    1098,   455,  1889,  1890, -2843, -2843, -2843, -2843,  1098,  1098,
   -2843,   393, -2843, -2843, -2843,   159,  1892,  1895, -2843, -2843,
   -2843, -2843, -2843,  1098,  1098, -2843, -2843,  1630,  1098,  1098,
   -2843, -2843, -2843, -2843,  1898,  1098, -2843,  1098,  1784, -2843,
    1098, -2843,  1098,  1785, -2843,  1901, -2843,  1262,  1262,   900,
     916,   920,  1262,  1904, -2843,   935, -2843,   950,   951,   964,
     967, -2843,  1905,  1907,   970,  1902, -2843,  1908,  1909,  1911,
   -2843,   997,  1008,  1912,  1913,  1915, -2843, -2843,  1917,  1919,
    1922, -2843,  1262,  1262,  1262, -2843, -2843, -2843,  1098, -2843,
   -2843, -2843, -2843,  1098, -2843, -2843, -2843,  1098, -2843,  1098,
     123,  4467, -2843,  1098, -2843,  1502, -2843,  5628, -2843, -2843,
    1924, -2843, -2843,  1931, -2843, -2843, -2843, -2843,  1910,  3347,
   -2843,  1098,  1927,  1098,  1098,  1098,  1321, -2843,  1935,  1098,
    1098,  1936,  1098,  1098,  1937,  1098,  1940,  1098,     1,  1942,
     393,   393, -2843,  1502,  1098,  1944,  1945,  1947,  1502,  4467,
   -2843,  1098, -2843, -2843, -2843,  1098,  1098,  1098,  1502,  4467,
     -81, -2843, -2843, -2843, -2843,  1630,  1098,  1948,   -81,  1098,
     620, -2843,  1949, -2843, -2843,   728,  1441,  1098, -2843,  1098,
    1951,  1920,  1098, -2843, -2843, -2843,  1953,  1243,  4307,  1676,
    1694,  1695,    41,  4467,  1699, -2843,   307,    91,    53,  1701,
    1703,    82, -2843, -2843,   515,  1729,   646,  1702,   475,  1770,
     819, -2843,  1958,  1696, -2843,   642, -2843, -2843, -2843, -2843,
    1770,  1736, -2843, -2843, -2843, -2843, -2843,  1098, -2843,  1098,
   -2843, -2843,  1098,  1098, -2843,  1098, -2843,  1098, -2843, -2843,
   -2843, -2843,  1753,  1098, -2843, -2843, -2843,  1098,    47, -2843,
   -2843, -2843, -2843,  1966,  1971, -2843,  1098,   -32,   -32,   -32,
   -2843, -2843, -2843, -2843, -2843, -2843,  1974,   -32,   -32,   -32,
     556, -2843, -2843, -2843, -2843,    57,   -32,   -32,   -32, -2843,
   -2843,   -32,   -32,  1975,   -32,   -32,  1976,    57,   579, -2843,
     893, -2843,   773, -2843, -2843, -2843,  1979,  1981,  1982, -2843,
    1126, -2843,  1216, -2843, -2843,  1690,  1985,  1988,  1991,    57,
      57,   -71,  1977,  1996,   -71,  2000,  1997,  2002,   -32,   -32,
   -2843,  2003,   -32,   -32, -2843,  2005, -2843, -2843, -2843, -2843,
   -2843, -2843,   393, -2843, -2843, -2843,  4307,   706,  1098,  1274,
    1654,   713, -2843, -2843, -2843,   808, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,  2007,  1098,
   -2843,   393,  2011,  1098,  4467,   393,   393,  2012,  1819,  1743,
    1755,   193,   218,  1758,   236,  1675,  1684,  2015,  2018,  2022,
    2570,  2024,  2026,  2027,  1700,  1707,  1353,  2028,  1098,  1358,
    1824, -2843, -2843,   393,  4467, -2843, -2843,  4467,  1098,    12,
    2029,  4467,  1098,  1502,   393, -2843,  2031,  4467,  4467,  1098,
   -2843, -2843, -2843,   393,   393,  4467, -2843, -2843, -2843, -2843,
   -2843, -2843,  4467,  1098,   393, -2843, -2843, -2843,  1098, -2843,
   -2843,  2032,  1098,  1783,   242,  1098,  1787,  1098,   277,  1098,
    2035,  1098,  1789,  1790,  1098,  1098,  1098,  1098,  1098,  1098,
    1098,  1098,    22,  1098,  1098,  1791, -2843,  1098,  1098,  1098,
    1098, -2843,  4467,  1502,  2039,  2042,  2044,  1098,  1098,  1502,
   -2843,  1098,  1098,  1098,  4467,   455, -2843,  1098,  1098, -2843,
   -2843, -2843,  2046, -2843, -2843, -2843, -2843, -2843, -2843,  2049,
    1098,  1098, -2843,  1098,  1098, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843,  2050,  2051,  2056, -2843,  2057,  2059,
    2061, -2843,  2062,  2063,  2065, -2843, -2843,  1262,  2066,  2067,
    2069, -2843,  2073,  2076,  2078, -2843,  2079,  2080,  2082, -2843,
    2083,  2084,  2087, -2843,  2088,  2089,  2091, -2843,  2092,  2103,
    2104,  2105,  2107, -2843,  2108, -2843, -2843, -2843,  2109,  2110,
    2112, -2843,  2113,  2114,  2117, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843,  1098, -2843,  1098,  1098, -2843,
   -2843,  1098, -2843,  1502, -2843, -2843,  3347,  1098,  1502,  1098,
    1098,  1098, -2843,  1098,  1098,  2118,  1098, -2843,  1098,  1098,
    2120,  1098,  1098,  2121,  1098,  2122,  1098, -2843, -2843,  2124,
    4467, -2843, -2843, -2843,  1098, -2843, -2843, -2843, -2843,  1502,
   -2843,   952,  1098,   952,   -81,  1502,  4467,  1098,  1098,  2125,
   -2843, -2843, -2843,  1098, -2843, -2843, -2843, -2843, -2843,  4467,
   -2843,  4467,  1098, -2843, -2843,   -53,  2126,  2127,  2128,  2129,
    2131,  4467,  1502, -2843,  4467,  4467,  4467,  4307,  4467,  1502,
    4467, -2843, -2843,  4467, -2843, -2843, -2843, -2843,  4307,  4467,
    4467,  4467,  4307,  4467, -2843,  4467,  4467,  1098, -2843, -2843,
    4467,  4467,  4467,  4467, -2843, -2843,  4467,  4467, -2843, -2843,
   -2843, -2843,  4467,  4467, -2843, -2843, -2843, -2843, -2843,  1098,
    1098, -2843, -2843,  2133,  1098, -2843, -2843,  2136, -2843, -2843,
    1098, -2843, -2843, -2843,   -32, -2843, -2843, -2843,  2139,  2141,
    2142, -2843, -2843,   -71,  2134,  2144,  2145,   -32, -2843, -2843,
   -2843, -2843, -2843,    57, -2843, -2843,  2147,   -32,  2148,  2159,
    2160,    57,    57,   -71,  2174,  2176,  2179,  1765,  2180,  2181,
    2182,    57,    57,   -71,  2184,  2185,   -71,  2187,  2188,  2192,
    2193,    57,    57,   -71,  2186,  2195,  2197,   901, -2843,  1256,
   -2843,  1305,  1769,  2198,  2200,  2201,    57,    57,   -71,  2196,
    2203,   -71,  2204,  1807,  2205,  2206,  2208,    57,    57,   -71,
    2210,  2212,   -71,  2213,    57, -2843, -2843, -2843, -2843, -2843,
    2215, -2843, -2843,  2219,    57,  2220,  2221, -2843, -2843,   -32,
   -2843, -2843,  2222, -2843,  1502, -2843,  4467,  1098,  1098,  4467,
    1098,  2223,  1471, -2843, -2843, -2843, -2843, -2843, -2843,  2224,
    4467,   393,  2225,  4467,  1502, -2843, -2843, -2843,  2226,  1471,
    1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  2228,
    2230, -2843, -2843, -2843,  2231, -2843, -2843, -2843,  2233,  2234,
   -2843, -2843, -2843,  1098,  4467,  1098,  2235,  1471,   393,  1502,
    1502, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,  1502,  1098,  1630, -2843, -2843,  1502,  1502,  1098, -2843,
   -2843,  1502,  1502, -2843, -2843, -2843, -2843,  1098,  1098,  1098,
    1098,  1098,  1098,  1098,  1098,  1098,  1098, -2843, -2843,  1098,
    1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,
    3761,  2236,  1098, -2843,  1098,  1098,  1098,  2238,  2239, -2843,
   -2843,  1502,   -81, -2843,  2240,  2241, -2843, -2843,  1630,  1098,
   -2843,  2244,  1502,  4467, -2843, -2843, -2843,  2246, -2843, -2843,
   -2843, -2843,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,
    1262, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,  1471,
    1098, -2843,  1098, -2843,  1098,  1502,  1098, -2843,  1630,  1098,
   -2843,  1098, -2843,  2081,  2247,  2249,  1098,  1098, -2843,  1098,
    1098,  2252,  1098,  2256,  1098,  2257,  1502,  4467, -2843, -2843,
    1098, -2843,  1098, -2843,   -81,   728,  1098,  2260, -2843,  1098,
   -2843, -2843,  4307, -2843,  2263,  2265,  2267,  2268,  2269,  1502,
   -2843,   728,   728,   728,  1502, -2843,   728,   -81,   728,   728,
    1502, -2843,   728,   728,   728,  1502, -2843,   728,   728,  1502,
    4467,  1502,   728,  1502,   728,   728,  1502,   728,  1502, -2843,
   -2843,  2258,  4307,  2270,  1098, -2843, -2843, -2843, -2843,  2272,
   -2843, -2843, -2843, -2843,   -32,    57, -2843, -2843, -2843, -2843,
   -2843, -2843,  2274, -2843, -2843,    57,    57, -2843, -2843, -2843,
   -2843, -2843,  2276, -2843, -2843,  2277,    57, -2843, -2843, -2843,
   -2843, -2843,  2278, -2843, -2843,    57,  2279,  2280,  2282,    57,
      57,   -71,  2284,  2288,  2289,  2290,  2291,  2292,    57,    57,
     -71,  2294,  2296,  2299,  2300,  2306,  2307,    57,    57,   -71,
    2297,  2309,  2310,    57,   -32,   -32,   -32,   -32,   -32,  2313,
     -32,   -32,  2315,    57,    57,   -32,   -32,   -32,   -32,   -32,
    2316,   -32,   -32,  2317,    57, -2843,    57,  2318, -2843,  2319,
    2320, -2843,  5628, -2843,   728,  2321,  4467,   728,  1098,  4467,
    2322, -2843,   728, -2843, -2843,   728, -2843,  4467,  2323,  1098,
    1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,  1098,
   -2843, -2843, -2843,  4467,   728,  1098,  4467,  2324, -2843,  1630,
    1630,   -81,  4467,  1630,  1630,  4467,  4467,  1630,  1630,  1098,
    1098,  1098,  1098,  1098,  1098,  1471,  1098,  1098,  1098,  1916,
   -2843,  1471,  1098,  1098,  1098,  1098,  1471,  1098,  1098,  1098,
    1098,  1098,  1098,  1502,  1098,  1722,  1471,  1098,  1098, -2843,
   -2843,   -81,   393,  4467,  4467, -2843, -2843, -2843,   -81,  1502,
    2325, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843,  1098, -2843, -2843,  1630,  1098, -2843, -2843, -2843,  1325,
    2329,  2332,  2326,  2334,  1098,  1098,  2335,  1098, -2843,  2336,
     952, -2843,   728, -2843, -2843, -2843, -2843,  2337, -2843, -2843,
    1502,  2339,  2340,  2343,  2344,  4467,  2346, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,   -81,   728,   -81, -2843,   -81, -2843, -2843,
     -81, -2843,   -81,  2347,  1502,  2349, -2843,  1098, -2843, -2843,
     -32,    57, -2843, -2843,    57,  2350, -2843,    57, -2843,   -32,
     -32,   -32,   -32,   -32,  2351,   -32,   -32,    57,   -32,   -32,
     -32,   -32,   -32,  2352,   -32,   -32,    57,   -32,   -32,   -32,
     -32,   -32,  2353,   -32,   -32,    57,   -32, -2843, -2843, -2843,
   -2843, -2843,    57, -2843, -2843,  2354,   -32,   -32, -2843, -2843,
   -2843, -2843, -2843,    57, -2843, -2843,  2355,   -32, -2843,    57,
   -2843, -2843,  1502, -2843,  4467,   728, -2843,  2358,  1502,  1098,
   -2843, -2843,  1502,  1098, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,  1098,  1098,   728, -2843,  2359,  1502,  1098,
    1630, -2843,  2360,   728,  1098,  1630,   728,   728,  4467, -2843,
    1098,  2362,  2362,  1098,  1098,  2362,  1471,  2362, -2843,  4467,
    1725,  1737,  1742,  1761,  1820,  1838,  1851,  1916, -2843,  1856,
   -2843, -2843,  1471,  2362,  2362,  1098,  1098,  1471,  1098,  1098,
    1098,  1098,  1098, -2843,  1630,  1098,  2364, -2843, -2843,  1098,
    2362,   393,    40,  1502,  1502,   393,   -81,  2363, -2843, -2843,
   -2843,  2365,  1098, -2843,  2367,  2369,  2370,  2371,  2372, -2843,
    2373,  2375,  1098, -2843, -2843,  2376,     0,  4467, -2843,  2377,
      93,  4467, -2843, -2843, -2843, -2843, -2843, -2843, -2843,  2379,
       0,  1098, -2843, -2843, -2843,    57, -2843, -2843, -2843, -2843,
   -2843, -2843,    57, -2843, -2843,   -32, -2843, -2843, -2843, -2843,
   -2843,    57, -2843, -2843,   -32, -2843, -2843, -2843, -2843, -2843,
      57, -2843, -2843,   -32, -2843,   -32,    57, -2843, -2843,   -32,
      57, -2843, -2843,  1098,   728, -2843,  4467,  4467,  1098,  4467,
    1098, -2843, -2843, -2843,  4467,  4467,  1098, -2843, -2843, -2843,
    4467, -2843, -2843, -2843,   728,  2380, -2843, -2843, -2843,  1471,
    1098, -2843,  2381, -2843, -2843,  1502,  2570,  2382,  2384,  2385,
    2386,  2387,  2389, -2843,   393,  2390, -2843, -2843,  1471,  1098,
    2391, -2843, -2843,  1098,  4467, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843,    40,  1800,  1770, -2843, -2843, -2843,   393,  2392,
    2395,  2396, -2843, -2843, -2843,  2393,  2400,  2401, -2843,   196,
       0, -2843, -2843, -2843, -2843,  2406,  4467, -2843, -2843, -2843,
   -2843, -2843,     0, -2843,  2407, -2843,   -32, -2843,   -32, -2843,
     -32, -2843, -2843,   -32, -2843,   -32,  5628, -2843,   728,   728,
    1098,   728,  2408,   728,   728,  1098,   728,  1098, -2843, -2843,
   -2843, -2843,  2409, -2843,  1098, -2843, -2843,  2410, -2843,  2412,
   -2843, -2843, -2843, -2843, -2843,  1098, -2843, -2843, -2843,  2413,
    1098, -2843, -2843, -2843,  1502, -2843, -2843, -2843,  1800, -2843,
    1835,  1956,  1770, -2843, -2843, -2843,  2414,  2415, -2843, -2843,
   -2843, -2843, -2843, -2843,  1283,  1283, -2843, -2843,  1502, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843,   728, -2843, -2843,  2417,
   -2843,  4307, -2843, -2843,  2418, -2843,  1471, -2843, -2843,  1471,
    1098, -2843,  2419, -2843,  1098, -2843,  1471,  1098, -2843,  4467,
   -2843,  1835, -2843,   393, -2843,  2420,  2421,  1098,  1098,  1098,
    1098,    93,  2422,  4307,  1502, -2843,  4307, -2843, -2843,  1098,
   -2843,  2424, -2843,  1098,   728, -2843, -2843, -2843,  2425,  2426,
    1098,  2428,  1098, -2843, -2843,  1502, -2843, -2843,  1502, -2843,
   -2843,  2430, -2843, -2843,  2432,  2433, -2843, -2843,  2434, -2843,
    2435, -2843, -2843,  1471, -2843,  1471, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2843, -2843,    -3, -2843,   341, -1025, -1632, -1140,  1741, -2843,
     928,  -475,  1733,   -54,    18, -2843,  -307, -1874,  1868,  1748,
    -999,   324,  -978,   958,  1537, -2843, -1070, -2843,  -690, -1223,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843,  -551,  -527, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -1768, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,   511, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,   257, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843,  -445,  -433, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -1648, -2843, -2843, -2843, -2843, -2843,
   -2843,  -763, -2843, -2843, -2843, -2843, -2843, -2843,    96, -2843,
   -2843, -2843, -2843,  -353,  -778, -1499,  -501, -2843, -2843, -2843,
   -2843, -2843,  -586,  -554, -2843, -2843, -2842, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843,  1560, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843, -2843,
   -2843, -2843, -2843
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1386
static const yytype_int16 yytable[] =
{
      72,   394,  2114,  1440,   794,  1267,  1000,  2280,   112,  2282,
     680,  1029,   796,   181,   979,  1240,  1243,  1432,  1433,  1434,
     910,   914,  1384,  1606,   982,    69,    70,  2180,  1700,   114,
     357,   917,   832,  2901,   331,   686,  1284,  1081,   753,  2132,
   -1163,  1151,   355,   895,   254,    69,    70,    69,    70,  1867,
    1226,   388,    69,    70,   399,   333,   459,   405,    69,    70,
     993,   411,  1917,  2133,   418,   414,  2134,  1965,   421,   423,
    1035,   691,   433,  1549,  1928,   440,   444,  2135,   114,   447,
     587,  1271,   448,   449,  1635,  1631,   457,   652,    69,    70,
     662,   458,  1152,  1044,  1518,  1773,   107,    69,    70,  1786,
    1511,   867,  2136,  1932,   471,   475,   480,   481,   485,   487,
    1534,    69,    70,    60,  1275,  1663,  1005,   108,   696,  1925,
    2137,   986,   117, -1385,   358,   491,  2907,  1839,  3022,  1832,
    1833,  1834,    69,    70,    69,    70,  1285,   663,   348,   490,
     359,  1530,   747,   252,  1286,    81,    69,    70,    69,    70,
     114,  1671,  1553,   436,   119,  1556,   468,   833,    61,  1682,
     500,   539,   748,   989,  1750,   258,  1684,   868,  1665,   994,
     540,  1672,   681,  1531,   109,  1751,  1591,   270,    62,  3045,
    1245,   588,  1690,   469,  1246,   532,  1006,    59,  1512,  1030,
     553,   168,  1235,   183,   169,    69,    70,   687,   437,    69,
      70,   114,   402,   119,   114,   295,  2902,  1636,    63,  1385,
    1036,   554,  1025,   562,  2102,   567,   571,   165,    69,    70,
     987,  1045,    69,    70,  1535,   990,   607,   170,   293,   797,
      64,  1276,  1550,   114,    65,   171,   360,   798,   799,  2104,
    1153,  1632,  1926,   650,   697,    69,    70,  1082,   349,    66,
     361,   122,   749,   896,   995,    69,    70,  2107,   353,   664,
     123,   124,  1247,   610,   417,   698,   303,   117,   911,   296,
    1395,   110,   319,   114,   800,   119,  1666,  1396,   117,   730,
      69,    70,   692,   822,  1277,   611,   682,  1504,  1248,   593,
    1691,   321,   653,   297,   429,   255,   760,   761,   881,  2908,
     122,   172,   612,  1868,   460,   125,  1918,   617,  1966,   123,
     124,   688,   803,  2903,   805,   114,   335,   114,  1929,   345,
     256,  1154,  1227,  1633,   808,   811,   119,   814,   818,   119,
     820,  1083,  1155,   754,  1921,  1278,   915,   897,   884,  1664,
     830,   869,   912,   683,  1300,   415,   918,  1933,   816,   114,
     840,   842,   298,  1031,   127,   167,   179, -1163,   119,  1249,
     173,  2181,  1701,   253,  1272,   636,  1287,  1156,   354,   114,
      71,   301,   122,  1634,   894,   387,   111,   901,   903,   338,
     905,   123,   124,   347,   908,   909,  1637,   362,   801,   174,
    1685,   175,  1037,  1107,  1273,   923,   925,   114,   119,  2138,
     403,   613,   926,   127,   157,  2981,  2909,   929,   931,  1674,
     158,   159,   597,  1236,   887,   932,   259,   435,   933,   176,
     398,  1927,   430,   122,   525,  1279,   122,  1694,    67,  1683,
     526,  1886,   123,   124,   410,   123,   124,   943,   944,  1890,
     119,   260,   119,   902,   948,   949,   950,   951,   952,   953,
     125,   955,   450,   157,   957,   122,   632,  1667,  2103,   158,
     159,   125,   424,   371,   123,   124,   431,   432,   964,  1250,
    2082,  1692,   965,   527,   119,   127,  1732,   970,   971,   972,
     973,   974,   975,  2105,   976,  1498,   475,   980,   981,   997,
    1922,   637,   177,  2159,   119,   122,   475,   983,  2099,   350,
     528,  2108,  1420,  1237,   123,   124,   978,  1136,  1744,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   396,
    2127,  1216,   119,   407,   351,   157,   127,  1216,  2164,   127,
     890,   158,   159,  2982,   998,   299,   934,   122,   401,   122,
     594,   614,  1934,  1111,  1112,  1436,   123,   124,   123,   124,
    1012,  1013,   529,  1124,   383,   364,   615,   408,   127,   959,
     960,  1125,  1126,   409,  2221,   595,  1305,  1217,  1021,  1978,
    1979,   122,  1923,  1217,    69,    70,   157,   530,  2983,   157,
     123,   124,   158,   159,   300,   158,   159,   872,  1137,   413,
    1310,   122,  1998,  1999,  1113,  1026,   530,   531,   127,  1092,
     123,   124,   305,  2060,  1047,   935,  2063,   365,   157,   638,
    1209,   877,  1127,   456,   158,   159,   451,   452,   366,   122,
    1980,   732,  1924,   641,  1892,   731,    69,    70,   123,   124,
      69,    70,  1281,   739,   642,   446,   601,  1210,   758,   759,
     127,   639,   127,  2000,  1306,   462,   336,  1087,   157,  1072,
     230,   367,   891,   873,   158,   159,   464,   337,    69,    70,
      91,   466,  1941,   598,   643,   453,   930,   231,  1311,  1951,
     813,  1332,   853,   425,   127,  1138,  2762,  1363,  1145,   117,
     488,    69,    70,   501,   936,   306,   384,   573,   599,  1142,
     157,   878,   157,  1564,   127,  1106,   158,   159,   158,   159,
    1573,  1944,  1935,   574,  1337,  1109,  1565,   633,  1161,    69,
      70,  2076,  1954,  1574,   882,   885,   888,  1218,  1487,   898,
     512,   454,   127,  1218,   157,   602,  1942,   575,   426,   892,
     158,   159,   634,  1219,  1220,   427,   513,  1333,   855,  1219,
    1220,  1307,  1114,  1115,   157,   180,   523,   576,   644,  1239,
     158,   159,  1895,  1896,   740,  1575,  1139,  1160,   420,  1146,
    1128,  1129,   603,  1576,  1577,  1312,  1936,   577,  1981,  1982,
    1338,   578,   157,   535,  1238,   271,  1229,  1251,   158,   159,
    1334,   385,   937,  1211,   733,   734,  2018,  2019,   938,  1343,
    1488,  2001,  2002,   645,   307,    92,   741,   742,  1943,  1676,
    1291,   579,   580,   879,  1506,  1292,  1293,  1294,  1295,   308,
     114,  1296,   844,  1298,  1578,  1299,   475,  1301,   272,  1308,
    1489,   273,  1756,  1116,    93,   115,  2083,   874,    94,  1952,
     368,  1897,  1221,  1222,  1117,  1118,   537,  2020,  1221,  1222,
     274,  1130,   743,  1313,  1212,    69,    70,   116,   439,  1983,
      69,    70,  1131,  1132,  1230,  1344,  1375,  1133,  1501,   275,
    1984,  1985,   125,   564,   581,   117,   590,   646,   311,  1119,
     591,  1213,  2003,  1669,  1327,   582,   276,   647,   845,   309,
    2293,  1670,   277,  2004,  2005,  2283,    95,  1134,   312,   735,
     313,   609,  1362,  1953,  1366,  1986,   592,  1329,  2007,  1367,
    1368,   744,  1369,  1371,  1373,  1374,  2008,  2009,  1677,  1490,
     626,  1335,   863,   118,  2376,  2377,   846,   847,  2006,  1387,
    1388,  2086,  1378,  1379,   628,   648,  1392,  1393,   745,    96,
     441,   629,  2084,   278,   651,   119,   657,  1938,    97,    98,
     583,   584,  2440,  1348,  1339,  1939,  1399,  1400,  1401,  1402,
    1403,  1231,  1405,   631,  1407,  1328,   279,  2010,   658,  2448,
    1887,  1945,  1579,  1580,  1774,  2378,  1491,  1381,  1382,  1415,
    1416,  1417,  1678,  1419,   475,  1421,   660,  1422,  1330,   120,
    1778,    91,  2203,    82,  1782,  2021,  2022,  2467,  2085,  2521,
    2522,  2523,  2524,  2525,  2526,  2527,  2528,  2529,  1425,  1788,
    1427,    69,    70,  1216,   700,  2339,  1946,   701,   685,  1349,
    1429,  1341,  2913,  1268,  1792,  1796,   585,   475,  1437,  1426,
      83,   848,   121,  1439,   314,  2352,   702,  2087,  1800,  1345,
    1775,  1804,   122,  1102,  1810,  2362,   605,   679,  2365,   442,
    1452,   123,   124,  1581,  1456,  2372,  1779,   690,   125,  1217,
    1783,  1110,   849,   126,  1582,  1583,  1497,  1499,  1502,  1584,
    2409,  1818,   703,  2412,  1507,  1789,  2023,   280,   704,  1513,
    1947,  2420,  1822,  1242,  2423,   694,  1492,  2024,  2025,   695,
    1793,  1797,   699,  2088,  1516,  1647,  1568,   315,   728,  1585,
     117,  1269,  1342,   286,  1801,   281,   282,  1805,    84,   606,
    1811,    69,    70,  1526,   729,  2011,  2012,   283,   737,  2530,
     751,   284,  2026,  2379,  2380,  1648,    92,   756,  1649,   705,
     757,  1650,  1050,  1254,   443,  1051,  1052,  1819,  1282,  1735,
    1736,  2032,  2986,   922,  1948,   127,   316,   762,  1823,  2033,
    2034,    69,    70,   821,  2989,    93,   317,    85,    86,  2279,
    1651,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
    1668,  1652,   795,  1350,  1653,   157,  2013,   287,  1270,   807,
    2035,   158,   159,  2512,  2381,    87,    88,  2014,  2015,  1218,
     404,  1693,  2016,   288,  1776,  2382,  2383,    95,  2947,  2854,
    1699,   828,    74,   262,   829,  1219,  1220,  2941,    75,   618,
    1780,  2043,  1493,   831,  1784,   835,  1727,   837,  1728,  2044,
    2045,   843,  2017,  1729,  1730,  1731,  2958,  1364,  2879,  1790,
    2384,   619,   289,  1737,   263,   871,  1738,   851,  1740,   876,
      96,   823,    89,   706,  1794,  1798,    69,    70,   620,    97,
      98,    76,   900,  1596,  1391,  1742,   906,  1743,  1802,  2385,
    2386,  1806,   907,   125,  1812,  1747,  1748,    69,    70,  2079,
    2046,   707,   708,  1494,   920,  2555,    69,    70,    77,   824,
    1754,  1755,   372,   709,   475,  1757,  1758,   710,   927,   290,
    1409,  1820,  1760,   373,  1761,  1767,  1768,  1763,  2573,  1764,
    1495,   928,  1824,   291,  1221,  1222,  1654,   941,  2394,  2395,
    2387,    69,    70,  1843,    69,    70,   945,   264,    69,    70,
    1906,    69,  1370,   374,   946,   340,  1053,  1054,  2036,  2037,
      78,  1597,    69,  1451,   265,  2706,   947,   825,  2939,  2940,
    1655,  2722,  2943,   954,  2945,  1835,  2727,  2120,  2121,   482,
    1836,    69,    70,  2124,  1837,   956,  1838,  2956,  2957,  2396,
    1841,   322,  2961,  2962,   942,   621,  2965,  3038,  1542,  1543,
    1656,  2966,  2967,  1855,  3042,    79,  1847,  2751,  1850,   958,
    1852,  1853,  1854,  1856,   961,  1055,  1858,  1859,   963,  1861,
    1862,  1056,  1864,  2614,  1866,   967,   968,  1849,  1907,   266,
     666,  1874,  2623,   474,   472,   984,   992,   375,  1880,  2038,
     985,  2632,  1881,  1882,  1883,  1598,  1599,  1001,  2047,  2048,
    2039,  2040,   475,  1888,   997,  2041,  1891,   483,   622,  3007,
    1600,  3079,  3008,  3080,  1901,  1899,  1902,  3011,   341,  1904,
    1003,  1010,  1769,  1770,  1057,   267,  1008,  1023,  1893,  3015,
     115,   514,   376,  1039,  3018,  2042,   268,   826,  2388,  2389,
    1028,  1033,  2692,  1058,    69,    70,  1913,  1603,  1604,   998,
    1040,   515,  1042,  1048,  1771,  1043,  1601,   623,  1059,   101,
    1075,   667,  1908,  1909,  1956,  1060,  1957,   624,   516,  1958,
    1959,  1073,  1960,  1061,  1961,  1074,   102,  1910,  1077,  2049,
    1963,   517,  2741,  1079,  1964,  1085,  1088,  2397,  2398,  2745,
    2050,  2051,   323,  1970,  1090,  2052,  1094,  1099,  1100,   324,
    1101,   325,   342,   518,   484,   668,   377,   519,   492,  3060,
    1103,  1120,   343,  3063,  1104,  1149,   378,  1105,   118,  2390,
    1108,  1696,   520,  1911,  1121,  2053,  1122,  1123,  1135,  1147,
    2391,  2392,  1150,  3074,  1157,  1062,  2852,  1158,   379,    69,
      70,  1159,  1224,    69,    70,  1233,   380,  3081,   669,  1215,
    3082,  3083,  2865,  1234,  2772,  1063,  2774,  2870,  2775,  1288,
    1064,  2776,  1065,  2777,   381,  2393,   103,  1289,  2399,   521,
    1290,  1302,  1304,  1315,  2077,  2078,  2080,   809,  1741,  2400,
    2401,   838,  1316,  1317,   120,  1318,   493,  1319,  1322,  1066,
    1067,  1320,  1749,  1321,  2075,  1323,  2090,  1324,  1068,  1326,
    2093,  1325,  2848,    69,    70,  2851,  1347,  2853,   472,   473,
     474,   494,   495,  1352,  2402,   104,  1353,  1354,  1357,  1069,
     496,  1355,  1356,  2866,  2867,  2123,  2125,    69,    70,  2081,
    1603,  1604,  1358,  1389,  1359,  2131,  1360,  1639,  2473,  2142,
    2881,   853,   497,  1361,  1377,  1380,  2148,  1383,  1376,  1390,
    1394,   105,   498,  1397,  1398,   810,  1404,  1408,   126,   839,
    2153,  1406,  1410,  1411,  1442,  2155,  1423,  1640,  1424,  2157,
    1641,  2160,  2161,  1443,  2163,  2165,  2166,  1070,  2169,  1444,
    1448,  2172,  2173,  2174,  2175,  2176,  2177,  2178,  2179,  2182,
    2184,  2185,  1446,  2515,  2187,  2188,  2189,  2190,  1447,  1449,
    1450,  1454,  1642,   854,  2196,  2197,  1455,   855,  2199,  2200,
    2201,  1503,  1505,  1509,  2204,  2205,  1198,  2888,  1514,  1517,
    1519,  1871,  1872,  1520,  1523,  1607,  1524,  2208,  2209,  1527,
    2210,  2211,  1199,  1643,  1528,  1529,  1644,  1537,  1538,  1544,
     332,  1200,  1539,  1540,  1545,   856,   857,  1546,  1547,  1548,
     858,  1554,  1201,  2536,  1555,  1608,  1557,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,  1558,  1560,  1562,  1202,  1570,
    1572,   859,    69,    70,  2098,  1603,  1604,    69,    70,  2126,
    1603,  1604,  2249,  1586,  2250,  2251,  1587,  1592,  2252,  1588,
    1203,  1589,  1593,  2254,  2257,  1594,  2259,  2260,  2261,  1609,
    2262,  2263,  1610,  2265,   489,  2266,  2267,  1629,  2269,  2270,
    1630,  2272,  1657,  2274,  2256,  1638,  3037,  1255,  1658,  1659,
    1660,  2277,  1661,  1662,  1680,  1256,   860,  1679,  1681,  2281,
     861,  1686,  1675,  1257,  2286,  2287,  1687,  1688,  1689,  1697,
    2289,  1698,  1695,  1734,  1745,  1746,  1204,  1752,  1645,  2292,
    1753,  1258,  1759,  1762,  1765,  1766,  1814,   862,  1259,  1787,
    1808,   863,  1809,  1815,  1816,  1817,  1937,  1826,  1827,  1828,
    -489,  1846,  1829,   864,  1830,   551,  1831,   558,   561,  1844,
     566,   570,  1646,  1260,  2320,  2305,  1845,  1205,  1851,  1857,
    1860,  1914,  1863,  2073,  1261,  1865,  2311,  1870,  1875,  1876,
    2316,  1877,  1889,  1940,  1894,  1903,  2329,  2330,  1905,  1915,
    1916,  2332,  1949,   655,  1920,  1206,  1930,  2334,  1931,  1955,
    1968,  1950,  2091,  1962,  2710,  1969,  2095,  2096,  1974,  1993,
    1996,  2061,   671,   677,  2027,  2711,  2029,  2031,   684,  1262,
    2055,  2054,   689,  2056,  2690,  2691,  2057,  1263,  2694,  2695,
    2062,  2065,  2698,  2699,  2128,  2064,  2066,  2069,  2100,  1207,
    2072,  1208,  2089,  1255,  2712,  2144,  2092,  2097,  2109,  2111,
    2101,  1256,  2112,  2106,  2149,  2150,  2113,  2110,  2115,  1257,
    2116,  2117,  2122,  2140,  2158,  2154,  2145,  2156,  2162,  2167,
    2170,  2171,  2186,  2118,  2193,  1264,  2194,  1258,  2195,   804,
    2119,  2206,   806,  2207,  1259,  2212,  2213,  2713,  1265,  2749,
    2214,  2736,  2215,   815,  2216,  2217,  2356,  2218,  2219,  2220,
    2403,  2222,  2223,  2224,  2435,  2436,  1266,  2438,  2225,  1260,
     819,  2226,  2227,   836,  2228,  2229,  2230,  1552,  2231,  2232,
    1261,  2233,  2539,  2234,  2235,  2236,  2237,  2449,  2450,  2451,
    2452,  2453,  2454,  2455,  2456,  2457,  2971,  2238,  2414,  2239,
    2240,  2241,  2242,  2856,  2243,  2244,  2245, -1181,  2246,  2247,
    2463,  2248,  2465,  2264,  2268,  2857,  2271,  2273,  2275,  2288,
    2858,  2294,  2295,  2296,  2297,  1262,  2298,  2331,  2340,  2472,
     475,  2333,   921,  1263,  2336,  2476,  2337,  2338,  2341,  2859,
    2342,  2345,  2714,  2347,  2479,  2480,  2481,  2482,  2483,  2484,
    2485,  2486,  2487,  2488,  2348,  2349,  2491,  2492,  2493,  2494,
    2495,  2496,  2497,  2498,  2499,  2500,  2501,  2502,  2353,  2505,
    2354,  2506,  2507,  2508,  2355,  2357,  2358,  2359,  2363,  2364,
    2373,  1264,  2366,  2367,  2971,   475,  2516,  2368,  2369,  2374,
    2410,   962,  2375,  2404,  1265,  2405,  2406,  2411,  2860,  2413,
    2415,  2416,   969,  2417,  2421,  2837,  2422,   966,  2424,  2426,
    2841,   977,  1266,  2427,  2429,  2430,  2861,  2432,  2439,  2441,
    2444,  2447,  2458,  2714,  2459,  2715,  2460,  2461,  2462,  2862,
    2466,  2504,  2509,  2510,  2864,  2513,  2514,  2531,  2517,  2532,
    2520,  2533,  2540,  2535,  2541,   475,  2537,  2546,  2538,  2876,
    2548,  2550,  2593,  2542,  2543,  2558,  2544,  2545,  2562,  2547,
    2563,  2549,  2564,  2565,  2566,  2596,  2598,  2553,  2601,  2554,
    2604,  2605,  2607,  2557,  2609,  2610,  2559,  2611,  2615,  1014,
    1015,  2716,  2616,   940,  2617,  2618,  2619,  2620,  2624,  1011,
    2625,  2633,  1019,  1702,  2626,  2627,  1016,  1022,  1703,  1017,
    2561,  2628,  2629,  2634,  1018,  2635,  1034,  2642,  1020,  2645,
    2653,  2656,  2659,  2660,  2661,  2664,  2669,  2673,  2689,  2747,
    2755,  2597,  1704,  1705,  2753,  1706,  1707,  2754,  2756,  2759,
    2761,  3053,  2764,  2766,  3023,  2767,  1708,  2768,  2985,  2769,
    2595,  2771,  2778,  2780,  2785,  2792,  2801,  2810,  2816,  2820,
    1709,  1710,  2826,  2834,  2863,  2838,  2846,  2889,  1711,  2878,
    2890,  1712,  2892,  2893,  2894,  2895,  2896,  2897,  2662,  2898,
    2900,  2968,  2906,  2912,  2938,  2944,  3024,  2948,  2949,  1713,
    2950,  2951,  2952,  2953,  2955,  2960,  2975,  2978,  1714,  1715,
    2976,  2977,  1716,  1093,  2979,  2980,  1095,  1096,  1097,  1098,
    2987,  2990,  3001,  3009,  3020,  3012,  3013,  3016,  1331,  3025,
    3026,  3033,  3036,     0,  3040,  3047,  3048,  3054,  3062,     0,
    3066,  3067,  2443,  3069,  3073,  2667,  3075,     0,  3076,  3077,
    3078,     0,     0,     0,     0,     0,  2674,  2675,  2676,  2677,
    2678,  2679,  2680,  2681,  2682,  2683,  2684,  3028,  3030,     0,
     390,     0,  2687,     0,     0,     0,   475,   475,   391,  2468,
     475,   475,     0,  1717,   475,   475,  2700,  2701,  2702,  2703,
    2704,  2705,     0,  2707,  2708,  2709,     0,     0,     0,  2723,
    2724,  2725,  2726,     0,  2728,  2729,  2730,  2731,  2732,  2733,
       0,  2735,     0,  1987,  2739,  2740,     0,     0,     0,     0,
       0,     0,     0,     0,  1253,  1997,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2748,     0,
       0,   475,  2750,     0,  1718,     0,  2752,  2058,  2059,     0,
    1719,  2757,  2758,     0,  2760,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1720,     0,     0,
       0,     0,     0,  1297,     0,     0,     0,     0,  1721,     0,
    1303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2781,     0,     0,     0,     0,  1722,
    1723,     0,     0,     0,     0,     0,     0,     0,     0,  2556,
       0,  1611,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1724,     0,     0,  2568,  2569,  2570,     0,     0,
    2572,     0,  2574,  2575,     0,     0,  2577,  2578,  2579,  1612,
       0,  2581,  2582,     0,     0,     0,  2586,     0,  2588,  2589,
       0,  2591,  1533,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2828,     0,  1725,     0,
    2830,     0,     0,     0,     0,  1613,     0,     0,     0,     0,
    2831,  2832,     0,  1614,     0,     0,  2836,   475,     0,  1615,
    1590,  2840,   475,     0,     0,     0,  1413,  2845,     0,     0,
    2849,  2850,     0,     0,     0,     0,     0,     0,  1418,     0,
    1412,  1616,     0,   392,     0,     0,   393,  1414,     0,     0,
       0,     0,  2868,  2869,     0,  2871,  2872,  2873,  2874,  2875,
       0,   475,  2877,  1617,     0,     0,  2880,     0,     0,     0,
       0,     0,     0,     0,     0,  1428,     0,     0,     0,  2891,
       0,  1618,     0,     0,     0,     0,     0,     0,  2663,  2899,
       0,  2666,  1430,  1431,     0,     0,  2670,  1435,     0,  2671,
    1438,     0,     0,     0,     0,     0,     0,     0,  2914,     0,
       0,     0,  1445,     0,     0,     0,     0,     0,  2686,  1619,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
    2926,     0,     0,     0,     0,  2930,     0,  2932,     0,     0,
    1620,     0,     0,  2935,  1522,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1621,     0,  2942,     0,     0,
       0,     0,     0,  2742,     0,     0,     0,     0,  1622,     0,
       0,     0,     0,     0,     0,     0,  2959,     0,     0,     0,
    2963,     0,  2996,     0,     0,     0,  2763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1623,
       0,     0,     0,     0,     0,     0,  2984,     0,     0,     0,
       0,     0,  1624,     0,  1625,  1626,     0,     0,  2773,  1595,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1673,
       0,     0,     0,     0,     0,     0,     0,  2999,     0,     0,
       0,     0,  3004,     0,  3006,     0,     0,     0,     0,     0,
       0,  3010,     0,     0,     0,  1627,     0,     0,     0,     0,
       0,  2344,  3014,     0,     0,     0,     0,  3017,     0,  2350,
    2351,     0,     0,     0,     0,     0,     0,     0,     0,  2360,
    2361,     0,     0,  1733,     0,     0,     0,     0,     0,  2370,
    2371,  3027,  3029,  1739,     0,     0,     0,     0,     0,  2825,
       0,     0,     0,     0,  2407,  2408,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2418,  2419,  3039,     0,  2833,
       0,  3041,  2425,     0,  3043,     0,     0,  2839,     0,  3035,
    2842,  2843,  2428,     0,  3049,  3050,  3051,  3052,     0,     0,
       0,     0,     0,     0,     0,     0,  3061,     0,     0,     0,
    3064,     0,     0,     0,     0,     0,     0,  3068,     0,  3070,
       0,  3056,     0,     0,  3059,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1971,  1972,  1973,     0,     0,     0,
       0,     0,     0,     0,  1975,  1976,  1977,     0,     0,     0,
       0,     0,  2882,  1988,  1989,  1990,  2887,     0,  1991,  1992,
       0,  1994,  1995,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1840,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1848,  1842,     0,  2067,  2068,     0,     0,  2070,
    2071,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2927,     0,
       0,     0,  1879,     0,     0,     0,     0,   234,   763,   764,
     235,  1873,  1885,     0,     0,     0,  1878,     0,  2937,     0,
       0,     0,     0,     0,     0,     0,  1884,     0,     0,  1900,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1912,     0,     0,     0,     0,  1919,   236,     0,     0,
       0,     0,     0,     0,   237,  2954,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   238,   239,   765,     0,     0,
       0,     0,   240,   766,     0,     0,     0,     0,     0,  2974,
       0,     0,   767,     0,   768,     0,     0,     0,     0,   769,
       0,     0,   770,     0,     0,     0,     0,     0,   771,     0,
       0,   241,  2997,  2998,     0,  3000,     0,  3002,  3003,   772,
    3005,     0,     0,     0,     0,     0,     0,   773,     0,   242,
       0,     0,     0,     0,     0,     0,   774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,     0,     0,     0,   245,   775,     0,     0,     0,     0,
       0,     0,     0,  2600,   711,   712,   713,     0,     0,     0,
       0,     0,     0,  2602,  2603,     0,     0,   776,     0,   246,
    3032,     0,     0,     0,  2606,     0,     0,     0,     0,     0,
       0,   714,     0,  2608,     0,   777,     0,  2612,  2613,  2074,
       0,     0,     0,     0,   715,     0,  2621,  2622,   778,   779,
      69,    70,     0,     0,     0,  2630,  2631,     0,     0,     0,
     716,  2636,   247,     0,  3046,     0,   115,  2094,  3065,     0,
       0,  2646,  2647,   780,     0,     0,     0,     0,     0,     0,
       0,     0,  2657,     0,  2658,     0,     0,     0,     0,     0,
       0,     0,   717,     0,     0,     0,     0,  2129,   781,     0,
    2130,     0,   718,     0,  2141,     0,   117,     0,     0,     0,
    2146,  2147,   782,     0,   783,     0,     0,   248,  2151,     0,
       0,  2143,     0,     0,   719,  2152,     0,     0,     0,   784,
     249,     0,     0,   720,   785,     0,     0,     0,     0,     0,
       0,     0,   786,     0,     0,     0,     0,     0,     0,     0,
     787,     0,     0,   721,   118,     0,     0,     0,     0,     0,
       0,   250,     0,     0,     0,  2191,     0,     0,     0,     0,
       0,   788,     0,     0,     0,   722,     0,  2202,     0,     0,
       0,  2192,     0,     0,     0,   789,   790,  2198,   791,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2335,     0,     0,     0,     0,   723,     0,     0,     0,
     120,   724,     0,     0,  2343,     0,     0,     0,     0,   792,
       0,     0,     0,     0,  2346,     0,     0,     0,   725,     0,
       0,   726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2783,
       0,     0,  2784,     0,     0,  2786,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2795,     0,     0,     0,  2255,
       0,     0,     0,     0,  2804,     0,     0,     0,     0,   125,
       0,  2253,     0,  2813,   126,     0,  2258,     0,     0,     0,
    2815,     0,     0,  2276,     0,     0,  2431,     0,     0,     0,
       0,  2819,     0,     0,     0,     0,     0,  2822,     0,  2285,
       0,     0,     0,     0,     0,     0,     0,  2278,     0,     0,
       0,     0,  2290,  2284,  2291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2299,     0,     0,  2301,  2302,  2303,
    2304,  2306,     0,  2308,     0,     0,  2309,     0,     0,     0,
    2300,  2310,  2312,  2313,  2314,  2315,  2317,  2307,  2318,  2319,
       0,     0,     0,  2321,  2322,  2323,  2324,     0,     0,  2325,
    2326,     0,     0,     0,     0,  2327,  2328,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,     0,     0,
       0,     0,     0,  2915,     0,     0,     0,     0,     0,     0,
    2916,     0,   115,     0,     0,     0,     0,     0,     0,  2918,
       0,     0,     0,     0,    69,    70,     0,     0,  2920,     0,
       0,     0,     0,   327,  2923,     0,     0,     0,  2925,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2434,
       0,     0,  2437,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2433,  2442,     0,     0,  2445,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,  2446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2464,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,  2469,  2470,     0,
       0,  2599,     0,     0,     0,     0,     0,     0,     0,  2471,
       0,     0,     0,     0,  2474,  2475,     0,     0,     0,  2477,
    2478,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,  2503,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,  2519,     0,     0,  2511,
       0,  2637,  2638,  2639,  2640,  2641,     0,  2643,  2644,   328,
    2518,     0,  2648,  2649,  2650,  2651,  2652,     0,  2654,  2655,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2534,     0,     0,     0,     0,   126,     0,
    2552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2551,  2560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2567,     0,     0,
       0,     0,  2571,  2584,     0,     0,     0,     0,  2576,   330,
       0,     0,     0,  2580,     0,  2594,     0,  2583,     0,  2585,
       0,  2587,     0,     0,  2590,     0,  2592,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,  2782,     0,     0,
       0,     0,     0,     0,     0,     0,  2787,  2788,  2789,  2790,
    2791,     0,  2793,  2794,     0,  2796,  2797,  2798,  2799,  2800,
       0,  2802,  2803,     0,  2805,  2806,  2807,  2808,  2809,  2665,
    2811,  2812,  2668,  2814,   569,     0,     0,     0,     0,     0,
    2672,     0,     0,  2817,  2818,     0,     0,     0,     0,   115,
       0,     0,     0,     0,  2821,     0,  2685,     0,     0,  2688,
       0,     0,     0,     0,     0,  2693,     0,     0,  2696,  2697,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2743,  2744,     0,     0,
       0,  2734,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2746,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2765,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
     542,   543,  2917,     0,     0,     0,   544,     0,     0,     0,
       0,  2919,  2779,   120,     0,     0,     0,     0,     0,     0,
    2921,     0,  2922,     0,     0,     0,  2924,     0,     0,   545,
       0,     0,     0,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2824,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2823,     0,   125,     0,   118,     0,  2827,   126,     0,     0,
    2829,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2844,     0,     0,     0,   120,  2835,     0,     0,     0,
       0,     0,  2855,     0,     0,     0,     0,     0,     0,     0,
     546,     0,     0,  2991,     0,  2992,     0,  2993,     0,     0,
    2994,     0,  2995,     0,     0,     0,     0,     0,     0,     0,
     547,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,  2885,  2886,     0,     0,   548,     0,     0,     0,     0,
    2905,     0,     0,     0,  2911,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,   672,     0,   115,   125,
       0,     0,     0,     0,   126,     0,     0,     0,     0,  2928,
    2929,     0,  2931,     0,   549,     0,     0,  2933,  2934,     0,
       0,     0,     0,  2936,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     673,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2946,     0,     0,     0,  2964,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   118,   550,     0,  2988,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   674,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3019,     0,   126,     0,     0,     0,     0,     0,
       0,     0,   675,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3034,     0,  3031,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3044,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3055,     0,     0,  3058,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,  3057,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3071,     0,     0,  3072,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     676,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1162,  1163,  1164,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,  1165,  1166,     0,     0,  1167,     0,     0,
    1168,     0,     0,     0,     0,     0,     0,  1169,     0,     0,
       0,  1170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1171,  1172,     0,     0,     0,     0,     0,     0,  1173,
    1174,     0,     0,     0,     0,   115,     0,     0,     0,  1457,
    1458,  1459,     0,     0,     0,     0,     0,  1175,     0,     0,
       0,     0,     0,     0,     0,  1176,     0,     0,     0,  1177,
    1178,     0,     0,  1179,     0,     0,     0,     0,     0,     0,
    1460,  1461,     0,     0,  1462,   117,     0,     0,     0,     0,
       0,  1463,     0,  1180,  1464,     0,     0,     0,  1465,     0,
     115,     0,     0,     0,     0,     0,     0,     0,  1466,  1467,
       0,     0,     0,     0,     0,  1181,  1468,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   556,  1182,     0,  1469,  1470,     0,     0,
    1471,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1521,
    1472,  1183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,  1473,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,  1184,     0,  1185,     0,     0,     0,     0,
       0,  1186,  1187,     0,     0,     0,     0,   118,     0,     0,
       0,  1474,     0,     0,     0,     0,     0,  1188,  1189,     0,
       0,  1475,     0,     0,     0,     0,     0,     0,     0,  1190,
    1191,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,  1192,
       0,  1193,     0,   126,     0,     0,     0,     0,     0,     0,
    1476,     0,  1477,   120,  1194,     0,  1195,     0,  1478,  1479,
       0,     0,     0,  1196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1480,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1481,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1197,   126,     0,
       0,     0,     0,     0,     0,     0,     0,   560,     0,     0,
       0,     0,     0,     0,     0,     0,  1482,     0,  1483,     0,
       0,     0,     0,     0,     0,     0,     0,   126,     0,  1484,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1485,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,   557,     0,  1486,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,    19,     0,     0,     0,
      20,     0,     0,     0,    21,    22,     0,     0,     0,     0,
      23,    24,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,    29,    30,    31,     0,     0,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    40,     0,
       0,   185,     0,     0,   186,    41,     0,   187,     0,    42,
       0,     0,     0,    43,     0,    44,     0,    45,     0,     0,
       0,     0,    46,     0,     0,     0,     0,   188,     0,     0,
       0,   189,   190,   191,     0,     0,     0,     0,    47,     0,
       0,   192,     0,   193,    48,     0,     0,     0,   194,     0,
     195,   196,   197,     0,     0,     0,     0,     0,   198,     0,
     199,     0,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,    52,     0,     0,
       0,     0,     0,     0,    53,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,     0,     0,    56,     0,
       0,     0,   202,     0,   203,   204,    57,   205,   206,     0,
       0,   207,     0,  1140,     0,   208,     0,   209,  1141,     0,
       0,     0,     0,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   212,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,     0,   214,  1566,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   216,     0,
     217,     0,     0,     0,     0,     0,     0,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,   224,
       0,     0,     0,     0,     0,     0,     0,   225,     0,     0,
       0,     0,     0,   226,     0,   227,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,  1567,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156
};

static const yytype_int16 yycheck[] =
{
       3,    55,  1650,  1028,   311,   783,   533,  1881,    11,  1883,
       5,     4,     4,    16,   489,   778,   779,  1016,  1017,  1018,
       4,     4,   103,  1163,   499,     3,     4,     5,     5,     4,
      26,     4,   163,    33,    37,     5,     5,    18,     5,    27,
       0,    13,    45,    18,    64,     3,     4,     3,     4,    48,
      16,    54,     3,     4,    57,    37,     5,    60,     3,     4,
      83,    64,    21,    51,    67,    33,    54,    20,    71,    72,
       4,     4,    75,    16,    21,    78,    79,    65,     4,    82,
     238,     5,    85,    86,    28,    27,    89,    15,     3,     4,
      45,    94,    64,   146,  1093,  1318,    41,     3,     4,  1322,
      16,    64,    90,    21,   107,   108,   109,   110,   111,   112,
     181,     3,     4,    11,    16,    27,   215,    62,     4,    28,
     108,   110,    59,     0,   120,   128,    33,     4,  2970,  1352,
    1353,  1354,     3,     4,     3,     4,   105,    92,    42,   121,
     136,   173,    99,    69,   113,   317,     3,     4,     3,     4,
       4,   251,  1130,   151,   129,  1133,     5,   288,    56,     5,
     163,   188,   119,   215,     5,    64,    27,   130,    37,   192,
     197,   271,   167,   205,   119,    16,  1154,    15,    76,  3021,
      37,   339,    37,    32,    41,   188,   285,    69,   104,   182,
     193,    45,    16,   158,    48,     3,     4,   167,   196,     3,
       4,     4,     5,   129,     4,     5,   206,   151,   106,   290,
     144,   193,     4,   195,    21,   197,   198,    34,     3,     4,
     209,   274,     3,     4,   295,   277,   208,    81,   257,   221,
     128,   133,   175,     4,   132,    89,   232,   229,   230,    21,
     212,   183,   151,   225,   130,     3,     4,   228,    64,   147,
     246,   226,   209,   228,   277,     3,     4,    21,   216,   214,
     235,   236,   119,    47,   135,   268,     5,    59,   252,    69,
       4,   216,   315,     4,   266,   129,   145,    11,    59,   282,
       3,     4,   215,   337,   186,    69,   281,  1065,   145,    64,
     145,    69,   220,    93,   209,   315,   299,   300,    69,   206,
     226,   155,    86,   302,   253,   242,   265,   211,   261,   235,
     236,   281,   315,   313,   317,     4,     5,     4,   265,     4,
     340,   293,   288,   265,   327,   328,   129,   330,   331,   129,
     333,   312,   304,   300,    27,   237,   319,   312,    69,   251,
     343,   304,   326,   338,   819,   313,   319,   265,   330,     4,
     353,   354,   152,   346,   329,    14,    15,   317,   129,   216,
     214,   339,   339,    22,   288,    21,   335,   339,   326,     4,
     326,    30,   226,   315,   377,   326,   321,   380,   381,    38,
     383,   235,   236,    93,   387,   388,   330,   383,   380,   243,
     251,   245,   326,   700,   318,   398,   399,     4,   129,   387,
      59,   185,   405,   329,   379,   209,   313,   410,   411,  1187,
     385,   386,    64,   237,    69,   418,   315,    76,   421,   273,
     326,   330,   337,   226,   209,   327,   226,  1205,   326,   275,
     215,  1430,   235,   236,   326,   235,   236,   440,   441,  1438,
     129,   340,   129,   251,   447,   448,   449,   450,   451,   452,
     242,   454,     4,   379,   457,   226,    64,   326,   265,   385,
     386,   242,     4,     4,   235,   236,   381,   382,   471,   326,
    1610,   326,   475,   258,   129,   329,  1239,   480,   481,   482,
     483,   484,   485,   265,   487,   233,   489,   490,   491,   151,
     183,   147,   346,   251,   129,   226,   499,   500,  1638,   315,
     285,   265,   977,   327,   235,   236,   488,    92,  1271,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   257,
    1660,    66,   129,   299,   340,   379,   329,    66,   251,   329,
      12,   385,   386,   337,   196,   335,    31,   226,     0,   226,
     315,   325,    27,    13,    14,  1020,   235,   236,   235,   236,
     553,   554,   337,     5,     4,    53,   340,     5,   329,     4,
       5,    13,    14,     4,  1787,   340,    41,   112,   571,    13,
      14,   226,   265,   112,     3,     4,   379,   381,   382,   379,
     235,   236,   385,   386,   384,   385,   386,    64,   173,     5,
      41,   226,    13,    14,    64,   577,   381,   382,   329,   653,
     235,   236,    60,  1581,   607,   100,  1584,   105,   379,   265,
       4,    35,    64,     4,   385,   386,   168,   169,   116,   226,
      64,     5,   315,    38,     4,   284,     3,     4,   235,   236,
       3,     4,   319,     5,    49,     5,     4,    31,   297,   298,
     329,   297,   329,    64,   119,    32,   335,   650,   379,   631,
      88,   149,   134,   130,   385,   386,     5,   346,     3,     4,
      29,     5,   187,   315,    79,   217,    11,   105,   119,    27,
     329,    64,    64,   215,   329,    92,  2550,   312,    92,    59,
     216,     3,     4,     4,   179,   143,   136,    46,   340,   743,
     379,   115,   379,  1138,   329,   698,   385,   386,   385,   386,
    1145,  1479,   187,    62,    64,   708,  1139,   315,   762,     3,
       4,     5,  1490,  1146,   373,   374,   375,   262,    69,   378,
     126,   273,   329,   262,   379,    93,   251,    86,   270,   211,
     385,   386,   340,   278,   279,   277,    69,   130,   130,   278,
     279,   216,   212,   213,   379,    67,   128,   106,   163,   288,
     385,   386,    24,    25,   126,     5,   173,   760,   135,   173,
     212,   213,   130,    13,    14,   216,   251,   126,   212,   213,
     130,   130,   379,   317,   777,     4,    41,   780,   385,   386,
     173,   231,   277,   177,   168,   169,    13,    14,   283,    64,
     141,   212,   213,   208,   252,   164,   168,   169,   323,   142,
     803,   160,   161,   227,   233,   808,   809,   810,   811,   267,
       4,   814,    64,   816,    64,   818,   819,   820,    47,   294,
     171,    50,  1297,   293,   193,    19,   113,   304,   197,   187,
     328,   103,   377,   378,   304,   305,   188,    64,   377,   378,
      69,   293,   214,   294,   238,     3,     4,    41,   221,   293,
       3,     4,   304,   305,   119,   130,   910,   309,    16,    88,
     304,   305,   242,    34,   223,    59,    69,   282,    47,   339,
       5,   265,   293,   291,    92,   234,   105,   292,   130,   337,
    1905,   299,   111,   304,   305,  1884,   255,   339,    67,   273,
      69,    15,   895,   251,   897,   339,    94,    92,     5,   902,
     903,   273,   905,   906,   907,   908,    13,    14,   251,   260,
     315,   304,   304,   107,    13,    14,   168,   169,   339,   922,
     923,   113,     4,     5,    69,   340,   929,   930,   300,   298,
      83,   258,   219,   162,    94,   129,    69,   291,   307,   308,
     299,   300,  2082,    64,   304,   299,   949,   950,   951,   952,
     953,   216,   955,   316,   957,   173,   185,    64,    77,  2099,
    1435,   142,   212,   213,    64,    64,   317,     4,     5,   972,
     973,   974,   315,   976,   977,   978,    32,   980,   173,   173,
      64,    29,  1745,     4,    64,   212,   213,  2127,   275,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  1001,    64,
    1003,     3,     4,    66,    47,  1983,   187,    50,     4,   130,
    1013,    92,  2780,    41,    64,    64,   375,  1020,  1021,  1001,
      41,   273,   216,  1026,   203,  2003,    69,   219,    64,   304,
     130,    64,   226,   692,    64,  2013,     5,     5,  2016,   192,
    1043,   235,   236,   293,  1047,  2023,   130,     4,   242,   112,
     130,   710,   304,   247,   304,   305,  1059,  1060,  1061,   309,
    2038,    64,   105,  2041,  1067,   130,   293,   296,   111,  1072,
     251,  2049,    64,   136,  2052,     5,    31,   304,   305,     4,
     130,   130,     4,   275,  1087,    22,  1140,   266,     5,   339,
      59,   119,   173,    26,   130,   324,   325,   130,   119,    68,
     130,     3,     4,  1106,     4,   212,   213,   336,     5,  2249,
       5,   340,   339,   212,   213,    52,   164,     4,    55,   162,
       5,    58,   611,   782,   277,   614,   615,   130,   787,     4,
       5,     5,  2900,   135,   315,   329,   315,     5,   130,    13,
      14,     3,     4,     4,  2912,   193,   325,   168,   169,   197,
      87,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
    1183,   118,     5,   304,   121,   379,   293,   120,   216,     5,
      64,   385,   386,  2192,   293,   216,   217,   304,   305,   262,
      62,  1204,   309,   136,   304,   304,   305,   255,  2856,  2708,
    1213,     4,   209,    93,     4,   278,   279,  2849,   215,    47,
     304,     5,   177,     4,   304,     5,  1229,     4,  1231,    13,
      14,   103,   339,  1236,  1237,  1238,  2868,   896,  2737,   304,
     339,    69,   175,  1246,   124,     5,  1249,   130,  1251,     4,
     298,    57,   273,   296,   304,   304,     3,     4,    86,   307,
     308,   258,     4,    87,    11,  1268,   300,  1270,   304,    13,
      14,   304,     4,   242,   304,  1278,  1279,     3,     4,     5,
      64,   324,   325,   238,     4,  2284,     3,     4,   285,    95,
    1293,  1294,    38,   336,  1297,  1298,  1299,   340,     4,   232,
     959,   304,  1305,    49,  1307,    43,    44,  1310,  2307,  1312,
     265,     5,   304,   246,   377,   378,   253,     4,    13,    14,
      64,     3,     4,  1377,     3,     4,     4,   207,     3,     4,
      87,     3,     4,    79,     4,    75,     4,     5,   212,   213,
     337,   165,     3,     4,   224,  2485,     4,   153,  2847,  2848,
     287,  2491,  2851,     4,  2853,  1358,  2496,     4,     5,    41,
    1363,     3,     4,     5,  1367,     4,  1369,  2866,  2867,    64,
    1373,   227,  2871,  2872,   221,   203,  2875,  3009,  1121,  1122,
     317,  2880,  2881,    62,  3016,   382,  1389,    62,  1391,     4,
    1393,  1394,  1395,  1396,     5,    63,  1399,  1400,     5,  1402,
    1403,    69,  1405,  2381,  1407,   477,   478,  1389,   165,   289,
     163,  1414,  2390,    10,     8,     5,   188,   163,  1421,   293,
     299,  2399,  1425,  1426,  1427,   249,   250,     4,   212,   213,
     304,   305,  1435,  1436,   151,   309,  1439,   119,   266,  2938,
     264,  3073,  2941,  3075,  1447,     4,  1449,  2946,   188,  1452,
       4,   188,   190,   191,   122,   335,   197,     4,  1440,  2958,
      19,    56,   208,     5,  2963,   339,   346,   273,   212,   213,
     220,   220,  2471,   141,     3,     4,  1458,     6,     7,   196,
       5,    76,     4,     4,   222,   220,   310,   315,   156,    88,
      69,   244,   249,   250,  1497,   163,  1499,   325,    93,  1502,
    1503,   210,  1505,   171,  1507,   210,   105,   264,    69,   293,
    1513,   106,  2511,    69,  1517,   251,     5,   212,   213,  2518,
     304,   305,   378,  1526,   252,   309,     5,     4,     4,   385,
       4,   387,   272,   128,   216,   288,   282,   132,    36,  3038,
       4,    92,   282,  3042,     4,     4,   292,   220,   107,   293,
       5,  1210,   147,   310,    92,   339,    92,     5,    92,     5,
     304,   305,     4,  3062,     5,   233,  2706,     5,   314,     3,
       4,     4,   105,     3,     4,     4,   322,  3076,   331,     5,
    3079,  3080,  2722,     5,  2583,   253,  2585,  2727,  2587,    16,
     258,  2590,   260,  2592,   340,   339,   195,    16,   293,   194,
       4,     4,     4,     4,  1607,  1608,  1609,    41,  1267,   304,
     305,    41,   103,     5,   173,     5,   114,    92,     4,   287,
     288,    92,  1281,    92,  1606,     5,  1629,     5,   296,     5,
    1633,    92,  2702,     3,     4,  2705,     4,  2707,     8,     9,
      10,   139,   140,     5,   339,   244,     5,     4,     4,   317,
     148,     5,     5,  2723,  2724,  1658,  1659,     3,     4,     5,
       6,     7,     4,    11,     5,  1668,     5,    22,  2143,  1672,
    2740,    64,   170,     5,     4,     4,  1679,     4,    67,     5,
      11,   280,   180,     4,     4,   119,     4,     4,   247,   119,
    1693,     5,     4,     4,   182,  1698,     5,    52,     5,  1702,
      55,  1704,  1705,     5,  1707,  1708,  1709,   375,  1711,     4,
       4,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,   173,  2198,  1727,  1728,  1729,  1730,   173,     5,
       4,    39,    87,   126,  1737,  1738,    39,   130,  1741,  1742,
    1743,   287,   287,   319,  1747,  1748,    69,  2746,   312,     5,
       4,  1410,  1411,     4,     4,   265,     5,  1760,  1761,     5,
    1763,  1764,    85,   118,     5,     5,   121,     4,     4,   301,
      37,    94,     5,     5,   301,   168,   169,     5,     5,     5,
     173,     4,   105,  2258,     4,   265,     5,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,     5,     5,     5,   141,     5,
       5,   214,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,  1835,     4,  1837,  1838,     4,     4,  1841,     5,
     163,     5,     5,  1846,  1847,     5,  1849,  1850,  1851,   265,
    1853,  1854,   113,  1856,   121,  1858,  1859,   265,  1861,  1862,
       5,  1864,    41,  1866,  1846,   113,  3006,    97,   265,   265,
     113,  1874,     5,   237,   237,   105,   269,   271,     5,  1882,
     273,     4,    41,   113,  1887,  1888,     5,     5,   237,     4,
    1893,     4,   237,     5,     5,     5,   219,     5,   253,  1902,
       5,   131,     4,   119,   119,     4,     4,   300,   138,     5,
       5,   304,     5,     5,     5,     4,   187,     5,     5,     4,
       0,    11,     5,   316,     5,   192,     4,   194,   195,     5,
     197,   198,   287,   163,  1937,  1917,     5,   260,    11,     4,
       4,   265,     5,  1602,   174,     5,  1928,     5,     4,     4,
    1932,     4,     4,   251,     5,     4,  1959,  1960,     5,   265,
     265,  1964,     4,   230,   265,   288,   265,  1970,   265,   233,
       4,   275,  1631,   220,    58,     4,  1635,  1636,     4,     4,
       4,     4,   249,   250,     5,    69,     5,     5,   255,   219,
       5,   301,   259,     5,  2469,  2470,     5,   227,  2473,  2474,
       4,     4,  2477,  2478,  1663,     5,     4,     4,   265,   332,
       5,   334,     5,    97,    98,  1674,     5,     5,   343,     4,
     265,   105,     4,   265,  1683,  1684,     4,   343,     4,   113,
       4,     4,     4,     4,   251,  1694,     5,     5,   251,     4,
     251,   251,   251,   343,     5,   275,     4,   131,     4,   316,
     343,     5,   319,     4,   138,     5,     5,   141,   288,  2534,
       4,   339,     5,   330,     5,     4,   301,     5,     5,     4,
     301,     5,     5,     4,  2077,  2078,   306,  2080,     5,   163,
     332,     5,     4,   350,     5,     5,     4,  1129,     5,     5,
     174,     4,    11,     5,     5,     4,     4,  2100,  2101,  2102,
    2103,  2104,  2105,  2106,  2107,  2108,  2884,     4,   301,     5,
       5,     4,     4,   388,     5,     5,     4,   317,     5,     5,
    2123,     4,  2125,     5,     4,   388,     5,     5,     4,     4,
     388,     5,     5,     5,     5,   219,     5,     4,     4,  2142,
    2143,     5,   394,   227,     5,  2148,     5,     5,     4,   388,
       5,     4,   317,     5,  2157,  2158,  2159,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,     5,     5,  2169,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,     4,  2182,
       4,  2184,  2185,  2186,     5,     5,     5,     5,     4,     4,
       4,   275,     5,     5,  2972,  2198,  2199,     5,     5,     4,
       4,   468,     5,     5,   288,     5,     5,     4,   388,     5,
       5,     5,   479,     5,     4,  2690,     4,   476,     5,     4,
    2695,   488,   306,     4,     4,     4,   388,     5,     5,     5,
       5,     5,     4,   317,     4,   319,     5,     4,     4,   388,
       5,     5,     4,     4,   388,     5,     5,  2250,     4,  2252,
       4,  2254,     5,  2256,     5,  2258,  2259,     5,  2261,  2734,
       4,     4,     4,  2266,  2267,     5,  2269,  2270,     5,  2272,
       5,  2274,     5,     5,     5,     5,     4,  2280,     4,  2282,
       4,     4,     4,  2286,     5,     5,  2289,     5,     4,   556,
     557,   375,     4,   425,     5,     5,     5,     5,     4,   551,
       4,     4,   569,    22,     5,     5,   558,   574,    27,   561,
    2292,     5,     5,     4,   566,     5,   583,     4,   570,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,  2334,    51,    52,     5,    54,    55,     5,     4,     4,
       4,  3031,     5,     4,   388,     5,    65,     4,  2899,     5,
    2332,     5,     5,     4,     4,     4,     4,     4,     4,     4,
      79,    80,     4,     4,  2717,     5,     4,     4,    87,     5,
       5,    90,     5,     4,     4,     4,     4,     4,  2432,     4,
       4,  2882,     5,     4,     4,     4,  2972,     5,     4,   108,
       5,     5,     5,     4,     4,     4,     4,     4,   117,   118,
       5,     5,   121,   655,     4,     4,   673,   674,   675,   676,
       4,     4,     4,     4,  2968,     5,     4,     4,   858,     5,
       5,     4,     4,    -1,     5,     5,     5,     5,     4,    -1,
       5,     5,  2091,     5,     4,  2438,     4,    -1,     5,     5,
       5,    -1,    -1,    -1,    -1,    -1,  2449,  2450,  2451,  2452,
    2453,  2454,  2455,  2456,  2457,  2458,  2459,  2984,  2985,    -1,
      15,    -1,  2465,    -1,    -1,    -1,  2469,  2470,    23,  2128,
    2473,  2474,    -1,   192,  2477,  2478,  2479,  2480,  2481,  2482,
    2483,  2484,    -1,  2486,  2487,  2488,    -1,    -1,    -1,  2492,
    2493,  2494,  2495,    -1,  2497,  2498,  2499,  2500,  2501,  2502,
      -1,  2504,    -1,  1545,  2507,  2508,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   781,  1557,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2531,    -1,
      -1,  2534,  2535,    -1,   253,    -1,  2539,  1579,  1580,    -1,
     259,  2544,  2545,    -1,  2547,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,    -1,    -1,   815,    -1,    -1,    -1,    -1,   287,    -1,
     822,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2597,    -1,    -1,    -1,    -1,   318,
     319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2285,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,  2301,  2302,  2303,    -1,    -1,
    2306,    -1,  2308,  2309,    -1,    -1,  2312,  2313,  2314,    69,
      -1,  2317,  2318,    -1,    -1,    -1,  2322,    -1,  2324,  2325,
      -1,  2327,  1115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2669,    -1,   387,    -1,
    2673,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
    2683,  2684,    -1,   113,    -1,    -1,  2689,  2690,    -1,   119,
    1153,  2694,  2695,    -1,    -1,    -1,   963,  2700,    -1,    -1,
    2703,  2704,    -1,    -1,    -1,    -1,    -1,    -1,   975,    -1,
     962,   141,    -1,   268,    -1,    -1,   271,   969,    -1,    -1,
      -1,    -1,  2725,  2726,    -1,  2728,  2729,  2730,  2731,  2732,
      -1,  2734,  2735,   163,    -1,    -1,  2739,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1012,    -1,    -1,    -1,  2752,
      -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,  2434,  2762,
      -1,  2437,  1014,  1015,    -1,    -1,  2442,  1019,    -1,  2445,
    1022,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2781,    -1,
      -1,    -1,  1034,    -1,    -1,    -1,    -1,    -1,  2464,   219,
      -1,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,    -1,
    2823,    -1,    -1,    -1,    -1,  2828,    -1,  2830,    -1,    -1,
     260,    -1,    -1,  2836,  1101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   275,    -1,  2850,    -1,    -1,
      -1,    -1,    -1,  2512,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2869,    -1,    -1,    -1,
    2873,    -1,  2926,    -1,    -1,    -1,  2552,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    -1,    -1,    -1,    -1,  2899,    -1,    -1,    -1,
      -1,    -1,   332,    -1,   334,   335,    -1,    -1,  2584,  1161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2930,    -1,    -1,
      -1,    -1,  2935,    -1,  2937,    -1,    -1,    -1,    -1,    -1,
      -1,  2944,    -1,    -1,    -1,   375,    -1,    -1,    -1,    -1,
      -1,  1993,  2955,    -1,    -1,    -1,    -1,  2960,    -1,  2001,
    2002,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2011,
    2012,    -1,    -1,  1240,    -1,    -1,    -1,    -1,    -1,  2021,
    2022,  2984,  2985,  1250,    -1,    -1,    -1,    -1,    -1,  2665,
      -1,    -1,    -1,    -1,  2036,  2037,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2047,  2048,  3010,    -1,  2685,
      -1,  3014,  2054,    -1,  3017,    -1,    -1,  2693,    -1,  3001,
    2696,  2697,  2064,    -1,  3027,  3028,  3029,  3030,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3039,    -1,    -1,    -1,
    3043,    -1,    -1,    -1,    -1,    -1,    -1,  3050,    -1,  3052,
      -1,  3033,    -1,    -1,  3036,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1527,  1528,  1529,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1537,  1538,  1539,    -1,    -1,    -1,
      -1,    -1,  2741,  1546,  1547,  1548,  2745,    -1,  1551,  1552,
      -1,  1554,  1555,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1371,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1389,  1375,    -1,  1588,  1589,    -1,    -1,  1592,
    1593,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2824,    -1,
      -1,    -1,  1419,    -1,    -1,    -1,    -1,    42,     4,     5,
      45,  1413,  1429,    -1,    -1,    -1,  1418,    -1,  2844,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1428,    -1,    -1,  1446,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1458,    -1,    -1,    -1,    -1,  1463,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    89,  2864,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,    63,    -1,    -1,
      -1,    -1,   107,    69,    -1,    -1,    -1,    -1,    -1,  2888,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      -1,   136,  2928,  2929,    -1,  2931,    -1,  2933,  2934,   105,
    2936,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,    -1,
      -1,    -1,    -1,    -1,   179,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2345,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,  2355,  2356,    -1,    -1,   163,    -1,   204,
    2996,    -1,    -1,    -1,  2366,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,  2375,    -1,   181,    -1,  2379,  2380,  1606,
      -1,    -1,    -1,    -1,   109,    -1,  2388,  2389,   194,   195,
       3,     4,    -1,    -1,    -1,  2397,  2398,    -1,    -1,    -1,
     125,  2403,   247,    -1,  3023,    -1,    19,  1634,  3044,    -1,
      -1,  2413,  2414,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2424,    -1,  2426,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,    -1,    -1,    -1,    -1,  1664,   244,    -1,
    1667,    -1,   167,    -1,  1671,    -1,    59,    -1,    -1,    -1,
    1677,  1678,   258,    -1,   260,    -1,    -1,   302,  1685,    -1,
      -1,  1673,    -1,    -1,   189,  1692,    -1,    -1,    -1,   275,
     315,    -1,    -1,   198,   280,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     296,    -1,    -1,   218,   107,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,    -1,  1732,    -1,    -1,    -1,    -1,
      -1,   317,    -1,    -1,    -1,   240,    -1,  1744,    -1,    -1,
      -1,  1733,    -1,    -1,    -1,   331,   332,  1739,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1974,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,
     173,   286,    -1,    -1,  1987,    -1,    -1,    -1,    -1,   375,
      -1,    -1,    -1,    -1,  1997,    -1,    -1,    -1,   303,    -1,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2601,
      -1,    -1,  2604,    -1,    -1,  2607,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2617,    -1,    -1,    -1,  1846,
      -1,    -1,    -1,    -1,  2626,    -1,    -1,    -1,    -1,   242,
      -1,  1843,    -1,  2635,   247,    -1,  1848,    -1,    -1,    -1,
    2642,    -1,    -1,  1870,    -1,    -1,  2069,    -1,    -1,    -1,
      -1,  2653,    -1,    -1,    -1,    -1,    -1,  2659,    -1,  1886,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1879,    -1,    -1,
      -1,    -1,  1899,  1885,  1901,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1911,    -1,    -1,  1914,  1915,  1916,
    1917,  1918,    -1,  1920,    -1,    -1,  1923,    -1,    -1,    -1,
    1912,  1928,  1929,  1930,  1931,  1932,  1933,  1919,  1935,  1936,
      -1,    -1,    -1,  1940,  1941,  1942,  1943,    -1,    -1,  1946,
    1947,    -1,    -1,    -1,    -1,  1952,  1953,    -1,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,  2785,    -1,    -1,    -1,    -1,    -1,    -1,
    2792,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,  2801,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,  2810,    -1,
      -1,    -1,    -1,    40,  2816,    -1,    -1,    -1,  2820,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2076,
      -1,    -1,  2079,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2074,  2090,    -1,    -1,  2093,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,  2094,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2129,  2130,    -1,
      -1,  2344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2141,
      -1,    -1,    -1,    -1,  2146,  2147,    -1,    -1,    -1,  2151,
    2152,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,  2180,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,  2203,    -1,    -1,  2191,
      -1,  2404,  2405,  2406,  2407,  2408,    -1,  2410,  2411,   216,
    2202,    -1,  2415,  2416,  2417,  2418,  2419,    -1,  2421,  2422,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2255,    -1,    -1,    -1,    -1,   247,    -1,
    2277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2276,  2292,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2299,    -1,    -1,
      -1,    -1,  2304,  2320,    -1,    -1,    -1,    -1,  2310,   326,
      -1,    -1,    -1,  2315,    -1,  2332,    -1,  2319,    -1,  2321,
      -1,  2323,    -1,    -1,  2326,    -1,  2328,    -1,    -1,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,    -1,    -1,  2600,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2609,  2610,  2611,  2612,
    2613,    -1,  2615,  2616,    -1,  2618,  2619,  2620,  2621,  2622,
      -1,  2624,  2625,    -1,  2627,  2628,  2629,  2630,  2631,  2436,
    2633,  2634,  2439,  2636,     4,    -1,    -1,    -1,    -1,    -1,
    2447,    -1,    -1,  2646,  2647,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,  2657,    -1,  2463,    -1,    -1,  2466,
      -1,    -1,    -1,    -1,    -1,  2472,    -1,    -1,  2475,  2476,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2513,  2514,    -1,    -1,
      -1,  2503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2519,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2565,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      68,    69,  2795,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      -1,  2804,  2594,   173,    -1,    -1,    -1,    -1,    -1,    -1,
    2813,    -1,  2815,    -1,    -1,    -1,  2819,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2664,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2662,    -1,   242,    -1,   107,    -1,  2668,   247,    -1,    -1,
    2672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2698,    -1,    -1,    -1,   173,  2688,    -1,    -1,    -1,
      -1,    -1,  2709,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     188,    -1,    -1,  2916,    -1,  2918,    -1,  2920,    -1,    -1,
    2923,    -1,  2925,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,  2743,  2744,    -1,    -1,   233,    -1,    -1,    -1,    -1,
    2767,    -1,    -1,    -1,  2771,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,    -1,    -1,    17,    -1,    19,   242,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,  2826,
    2827,    -1,  2829,    -1,   302,    -1,    -1,  2834,  2835,    -1,
      -1,    -1,    -1,  2840,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2855,    -1,    -1,    -1,  2874,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   107,   375,    -1,  2906,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2964,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3001,    -1,  2988,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3019,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3033,    -1,    -1,  3036,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,  3034,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3055,    -1,    -1,  3058,    -1,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,    51,    52,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,   117,
     118,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    -1,    55,    59,    -1,    -1,    -1,    -1,
      -1,    62,    -1,   141,    65,    -1,    -1,    -1,    69,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,   163,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,   192,    -1,   117,   118,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
     141,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,    -1,
      -1,   259,   260,    -1,    -1,    -1,    -1,   107,    -1,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   275,   276,    -1,
      -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,
     288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,   317,
      -1,   319,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    -1,   253,   173,   332,    -1,   334,    -1,   259,   260,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   317,    -1,   319,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     341,    -1,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
      -1,    -1,   321,    -1,   375,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,    -1,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,    42,    -1,    -1,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    -1,    -1,    -1,   154,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
     168,   169,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,   199,   200,   201,    -1,    -1,   204,   205,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,    -1,   241,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,   256,    -1,
      -1,    42,    -1,    -1,    45,   263,    -1,    48,    -1,   267,
      -1,    -1,    -1,   271,    -1,   273,    -1,   275,    -1,    -1,
      -1,    -1,   280,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    82,    -1,    84,   302,    -1,    -1,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    -1,    -1,    99,    -1,
     101,    -1,   320,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   333,    -1,   335,    -1,    -1,
      -1,    -1,    -1,    -1,   342,    -1,    -1,   345,   346,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,   376,    -1,
      -1,    -1,   163,    -1,   165,   166,   384,   168,   169,    -1,
      -1,   172,    -1,   173,    -1,   176,    -1,   178,   178,    -1,
      -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   204,   205,    -1,    -1,    -1,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   178,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,
     241,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   273,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,    -1,    -1,
      -1,    -1,    -1,   344,    -1,   346,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   384,    -1,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373
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
     321,   333,   335,   342,   345,   346,   376,   384,   390,    69,
      11,    56,    76,   106,   128,   132,   147,   326,   426,     3,
       4,   326,   391,   431,   209,   215,   258,   285,   337,   382,
     433,   317,     4,    41,   119,   168,   169,   216,   217,   273,
     438,    29,   164,   193,   197,   255,   298,   307,   308,   406,
     440,    88,   105,   195,   244,   280,   441,    41,    62,   119,
     216,   321,   391,   450,     4,    19,    41,    59,   107,   129,
     173,   216,   226,   235,   236,   242,   247,   329,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   379,   385,   386,
     393,   401,   402,   403,   452,    34,   453,   393,    45,    48,
      81,    89,   155,   214,   243,   245,   273,   346,   392,   393,
      67,   391,   455,   158,   456,    42,    45,    48,    68,    72,
      73,    74,    82,    84,    89,    91,    92,    93,    99,   101,
     136,   154,   163,   165,   166,   168,   169,   172,   176,   178,
     184,   204,   205,   209,   217,   221,   239,   241,   248,   273,
     275,   302,   320,   321,   330,   338,   344,   346,   384,   457,
      88,   105,   508,    19,    42,    45,    82,    89,   100,   101,
     107,   136,   154,   172,   173,   179,   204,   247,   302,   315,
     346,   511,    69,   393,    64,   315,   340,   595,    64,   315,
     340,   594,    93,   124,   207,   224,   289,   335,   346,   517,
      15,     4,    47,    50,    69,    88,   105,   111,   162,   185,
     296,   324,   325,   336,   340,   577,    26,   120,   136,   175,
     232,   246,   520,   257,   538,     5,    69,    93,   152,   335,
     384,   393,   539,     5,   540,    60,   143,   252,   267,   337,
     557,    47,    67,    69,   203,   266,   315,   325,   578,   315,
     593,    69,   227,   378,   385,   387,   579,    40,   216,   258,
     326,   391,   401,   403,   580,     5,   335,   346,   393,   583,
      75,   188,   272,   282,   584,     4,   585,    93,   557,    64,
     315,   340,   592,   216,   326,   391,   596,    26,   120,   136,
     232,   246,   383,   598,    53,   105,   116,   149,   328,   620,
     621,     4,    38,    49,    79,   163,   208,   282,   292,   314,
     322,   340,   419,     4,   136,   231,   622,   326,   391,   624,
      15,    23,   268,   271,   402,   625,   257,   629,   326,   391,
     630,     0,     5,   393,    62,   391,   427,   299,     5,     4,
     326,   391,   428,     5,    33,   313,   429,   135,   391,   430,
     135,   391,   432,   391,     4,   215,   270,   277,   436,   209,
     337,   381,   382,   391,   435,   393,   151,   196,   434,   221,
     391,    83,   192,   277,   391,   437,     5,   391,   391,   391,
       4,   168,   169,   217,   273,   439,     4,   391,   391,     5,
     253,   442,    32,   443,     5,   444,     5,   448,     5,    32,
     449,   391,     8,     9,    10,   391,   397,   398,   399,   400,
     391,   391,    41,   119,   216,   391,   451,   391,   216,   401,
     403,   391,    36,   114,   139,   140,   148,   170,   180,   408,
     391,     4,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   126,    69,    56,    76,    93,   106,   128,   132,
     147,   194,   460,   128,   462,   209,   215,   258,   285,   337,
     381,   382,   391,   445,   463,   317,   466,   188,   467,   188,
     197,   469,    68,    69,    74,    97,   188,   208,   233,   302,
     375,   401,   471,   391,   403,   474,    62,   321,   401,   475,
     311,   401,   403,   476,    34,   477,   401,   403,   478,     4,
     401,   403,   479,    46,    62,    86,   106,   126,   130,   160,
     161,   223,   234,   299,   300,   375,   483,   238,   339,   489,
      69,     5,    94,    64,   315,   340,   497,    64,   315,   340,
     496,     4,    93,   130,   481,     5,    68,   403,   480,    15,
      47,    69,    86,   185,   325,   340,   490,   557,    47,    69,
      86,   203,   266,   315,   325,   491,   315,   495,    69,   258,
     493,   316,    64,   315,   340,   494,    21,   147,   265,   297,
     498,    38,    49,    79,   163,   208,   282,   292,   340,   499,
     403,    94,    15,   220,   506,   401,   509,    69,    77,   512,
      32,   513,    45,    92,   214,   514,   163,   244,   288,   331,
     515,   401,    17,    61,   123,   193,   321,   401,   516,     5,
       5,   167,   281,   338,   401,     4,     5,   167,   281,   401,
       4,     4,   215,   519,     5,     4,     4,   130,   391,     4,
      47,    50,    69,   105,   111,   162,   296,   324,   325,   336,
     340,    69,    70,    71,    96,   109,   125,   157,   167,   189,
     198,   218,   240,   281,   286,   303,   306,   405,     5,     4,
     391,   393,     5,   168,   169,   273,   521,     5,   523,     5,
     126,   168,   169,   214,   273,   300,   524,    99,   119,   209,
     537,     5,   535,     5,   300,   536,     4,     5,   393,   393,
     391,   391,     5,     4,     5,    63,    69,    78,    80,    85,
      88,    94,   105,   113,   122,   141,   163,   181,   194,   195,
     219,   244,   258,   260,   275,   280,   288,   296,   317,   331,
     332,   334,   375,   541,   405,     5,     4,   221,   229,   230,
     266,   380,   404,   391,   401,   391,   401,     5,   391,    41,
     119,   391,   582,   393,   391,   401,   403,   581,   391,   408,
     391,     4,   402,    57,    95,   153,   273,   586,     4,     4,
     391,     4,   163,   288,   587,     5,   401,     4,    41,   119,
     391,   597,   391,   103,    64,   130,   168,   169,   273,   304,
     600,   130,   619,    64,   126,   130,   168,   169,   173,   214,
     269,   273,   300,   304,   316,   601,   602,    64,   130,   304,
     618,     5,    64,   130,   304,   599,     4,    35,   115,   227,
     591,    69,   393,   422,    69,   393,   423,    69,   393,   424,
      12,   134,   211,   590,   391,    18,   228,   312,   393,   420,
       4,   391,   251,   391,   425,   391,   300,     4,   391,   391,
       4,   252,   326,   628,     4,   319,   626,     4,   319,   627,
       4,   408,   135,   391,   631,   391,   391,     4,     5,   391,
      11,   391,   391,   391,    31,   100,   179,   277,   283,   407,
     407,     4,   221,   391,   391,     4,     4,     4,   391,   391,
     391,   391,   391,   391,     4,   391,     4,   391,     4,     4,
       5,     5,   401,     5,   391,   391,   397,   399,   399,   401,
     391,   391,   391,   391,   391,   391,   391,   401,   403,   400,
     391,   391,   400,   391,     5,   299,   110,   209,   461,   215,
     277,   464,   188,    83,   192,   277,   465,   151,   196,   446,
     446,     4,   468,     4,   470,   215,   285,   472,   197,   473,
     188,   408,   391,   391,   401,   401,   408,   408,   408,   401,
     408,   391,   401,     4,   486,     4,   403,   484,   220,     4,
     182,   346,   485,   220,   401,     4,   144,   326,   488,     5,
       5,   458,     4,   220,   146,   274,   394,   391,     4,   492,
     492,   492,   492,     4,     5,    63,    69,   122,   141,   156,
     163,   171,   233,   253,   258,   260,   287,   288,   296,   317,
     375,   551,   403,   210,   210,    69,   502,    69,   503,    69,
     504,    18,   228,   312,   500,   251,   505,   391,     5,   459,
     252,   507,   402,   408,     5,   401,   401,   401,   401,     4,
       4,     4,   393,     4,     4,   220,   391,   405,     5,   391,
     393,    13,    14,    64,   212,   213,   293,   304,   305,   339,
      92,    92,    92,     5,     5,    13,    14,    64,   212,   213,
     293,   304,   305,   309,   339,    92,    92,   173,    92,   173,
     173,   178,   402,   527,   532,    92,   173,     5,   525,     4,
       4,    13,    64,   212,   293,   304,   339,     5,     5,     4,
     391,   402,    20,    21,    22,    51,    52,    55,    58,    65,
      69,    79,    80,    87,    88,   105,   113,   117,   118,   121,
     141,   163,   192,   219,   251,   253,   259,   260,   275,   276,
     287,   288,   317,   319,   332,   334,   341,   375,    69,    85,
      94,   105,   141,   163,   219,   260,   288,   332,   334,     4,
      31,   177,   238,   265,   544,     5,    66,   112,   262,   278,
     279,   377,   378,   550,   105,   542,    16,   288,   548,    41,
     119,   216,   549,     4,     5,    16,   237,   327,   391,   288,
     550,   558,   136,   550,   559,    37,    41,   119,   145,   216,
     326,   391,   560,   401,   393,    97,   105,   113,   131,   138,
     163,   174,   219,   227,   275,   288,   306,   563,    41,   119,
     216,     5,   288,   318,   567,    16,   133,   186,   237,   327,
     568,   319,   393,   569,     5,   105,   113,   335,    16,    16,
       4,   391,   391,   391,   391,   391,   391,   408,   391,   391,
     400,   391,     4,   408,     4,    41,   119,   216,   294,   588,
      41,   119,   216,   294,   589,     4,   103,     5,     5,    92,
      92,    92,     4,     5,     5,    92,     5,    92,   173,    92,
     173,   602,    64,   130,   173,   304,   606,    64,   130,   304,
     617,    92,   173,    64,   130,   304,   604,     4,    64,   130,
     304,   603,     5,     5,     4,     5,     5,     4,     4,     5,
       5,     5,   391,   312,   393,   421,   391,   391,   391,   391,
       4,   391,   623,   391,   391,   402,    67,     4,     4,     5,
       4,     4,     5,     4,   103,   290,   409,   391,   391,    11,
       5,    11,   391,   391,    11,     4,    11,     4,     4,   391,
     391,   391,   391,   391,     4,   391,     5,   391,     4,   393,
       4,     4,   408,   401,   408,   391,   391,   391,   401,   391,
     400,   391,   391,     5,     5,   391,   403,   391,   401,   391,
     408,   408,   409,   409,   409,   408,   400,   391,   408,   391,
     394,   487,   182,     5,     4,   408,   173,   173,     4,     5,
       4,     4,   391,   482,    39,    39,   391,    20,    21,    22,
      51,    52,    55,    62,    65,    69,    79,    80,    87,   117,
     118,   121,   141,   163,   192,   202,   251,   253,   259,   260,
     276,   288,   317,   319,   330,   341,   375,    69,   141,   171,
     260,   317,    31,   177,   238,   265,   552,   391,   233,   391,
     553,    16,   391,   287,   563,   287,   233,   391,   554,   319,
     555,    16,   104,   391,   312,   501,   391,     5,   409,     4,
       4,    59,   401,     4,     5,   518,   391,     5,     5,     5,
     173,   205,   413,   413,   181,   295,   411,     4,     4,     5,
       5,   522,   522,   522,   301,   301,     5,     5,     5,    16,
     175,   412,   412,   411,     4,     4,   411,     5,     5,   526,
       5,   533,     5,   534,   533,   534,   178,   374,   402,   530,
       5,   529,     5,   533,   534,     5,    13,    14,    64,   212,
     213,   293,   304,   305,   309,   339,     4,     4,     5,     5,
     413,   411,     4,     5,     5,   408,    87,   165,   249,   250,
     264,   310,   416,     6,     7,   391,   396,   265,   265,   265,
     113,    41,    69,   105,   113,   119,   141,   163,   181,   219,
     260,   275,   288,   319,   332,   334,   335,   375,   543,   265,
       5,    27,   183,   265,   315,    28,   151,   330,   113,    22,
      52,    55,    87,   118,   121,   253,   287,    22,    52,    55,
      58,    87,   118,   121,   253,   287,   317,    41,   265,   265,
     113,     5,   237,    27,   251,    37,   145,   326,   391,   291,
     299,   251,   271,   401,   563,    41,   142,   251,   315,   271,
     237,     5,     5,   275,    27,   251,     4,     5,     5,   237,
      37,   145,   326,   391,   563,   237,   393,     4,     4,   391,
       5,   339,    22,    27,    51,    52,    54,    55,    65,    79,
      80,    87,    90,   108,   117,   118,   121,   192,   253,   259,
     276,   287,   318,   319,   341,   387,   545,   391,   391,   391,
     391,   391,   550,   401,     5,     4,     5,   391,   391,   401,
     391,   393,   391,   391,   550,     5,     5,   391,   391,   393,
       5,    16,     5,     5,   391,   391,   400,   391,   391,     4,
     391,   391,   119,   391,   391,   119,     4,    43,    44,   190,
     191,   222,   418,   418,    64,   130,   304,   614,    64,   130,
     304,   611,    64,   130,   304,   608,   418,     5,    64,   130,
     304,   605,    64,   130,   304,   616,    64,   130,   304,   615,
      64,   130,   304,   613,    64,   130,   304,   612,     5,     5,
      64,   130,   304,   607,     4,     5,     5,     4,    64,   130,
     304,   610,    64,   130,   304,   609,     5,     5,     4,     5,
       5,     4,   418,   418,   418,   391,   391,   391,   391,     4,
     401,   391,   408,   402,     5,     5,    11,   391,   401,   403,
     391,    11,   391,   391,   391,    62,   391,     4,   391,   391,
       4,   391,   391,     5,   391,     5,   391,    48,   302,   447,
       5,   393,   393,   408,   391,     4,     4,     4,   408,   401,
     391,   391,   391,   391,   408,   401,   409,   400,   391,     4,
     409,   391,     4,   403,     5,    24,    25,   103,   410,     4,
     401,   391,   391,     4,   391,     5,    87,   165,   249,   250,
     264,   310,   401,   403,   265,   265,   265,    21,   265,   401,
     265,    27,   183,   265,   315,    28,   151,   330,    21,   265,
     265,   265,    21,   265,    27,   187,   251,   187,   291,   299,
     251,   187,   251,   323,   563,   142,   187,   251,   315,     4,
     275,    27,   187,   251,   563,   233,   391,   391,   391,   391,
     391,   391,   220,   391,   391,    20,   261,   510,     4,     4,
     391,   413,   413,   413,     4,   413,   413,   413,    13,    14,
      64,   212,   213,   293,   304,   305,   339,   412,   413,   413,
     413,   413,   413,     4,   413,   413,     4,   412,    13,    14,
      64,   212,   213,   293,   304,   305,   339,     5,    13,    14,
      64,   212,   213,   293,   304,   305,   309,   339,    13,    14,
      64,   212,   213,   293,   304,   305,   339,     5,   528,     5,
     531,     5,     5,    13,    14,    64,   212,   213,   293,   304,
     305,   309,   339,     5,    13,    14,    64,   212,   213,   293,
     304,   305,   309,   339,   301,     5,     5,     5,   412,   412,
     411,     4,     4,   411,     5,     4,     4,   413,   413,     4,
     413,   413,     5,   393,   401,   403,     5,   391,   391,     5,
     391,     5,   396,   113,   219,   275,   113,   219,   275,     5,
     391,   393,     5,   391,   401,   393,   393,     5,     5,   396,
     265,   265,    21,   265,    21,   265,   265,    21,   265,   343,
     343,     4,     4,     4,   543,     4,     4,     4,   343,   343,
       4,     5,     4,   391,     5,   391,     5,   396,   393,   401,
     401,   391,    27,    51,    54,    65,    90,   108,   387,   414,
       4,   401,   391,   408,   393,     5,   401,   401,   391,   393,
     393,   401,   401,   391,   393,   391,     5,   391,   251,   251,
     391,   391,   251,   391,   251,   391,   391,     4,   546,   391,
     251,   251,   391,   391,   391,   391,   391,   391,   391,   391,
       5,   339,   391,   547,   391,   391,   251,   391,   391,   391,
     391,   401,   408,     5,     4,     4,   391,   391,   408,   391,
     391,   391,   401,   550,   391,   391,     5,     4,   391,   391,
     391,   391,     5,     5,     4,     5,     5,     4,     5,     5,
       4,   418,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   391,
     391,   391,   391,   408,   391,   401,   403,   391,   408,   391,
     391,   391,   391,   391,     5,   391,   391,   391,     4,   391,
     391,     5,   391,     5,   391,     4,   401,   391,   408,   197,
     406,   391,   406,   409,   408,   401,   391,   391,     4,   391,
     401,   401,   391,   394,     5,     5,     5,     5,     5,   401,
     408,   401,   401,   401,   401,   403,   401,   408,   401,   401,
     401,   403,   401,   401,   401,   401,   403,   401,   401,   401,
     391,   401,   401,   401,   401,   401,   401,   401,   401,   391,
     391,     4,   391,     5,   391,   413,     5,     5,     5,   411,
       4,     4,     5,   413,   412,     4,   413,     5,     5,     5,
     412,   412,   411,     4,     4,     5,   301,     5,     5,     5,
     412,   412,   411,     4,     4,   411,     5,     5,     5,     5,
     412,   412,   411,     4,     4,     5,    13,    14,    64,   212,
     213,   293,   304,   305,   339,    13,    14,    64,   212,   213,
     293,   304,   305,   339,    13,    14,    64,   212,   213,   293,
     304,   305,   339,   301,     5,     5,     5,   412,   412,   411,
       4,     4,   411,     5,   301,     5,     5,     5,   412,   412,
     411,     4,     4,   411,     5,   412,     4,     4,   412,     4,
       4,   413,     5,   408,   401,   391,   391,   401,   391,     5,
     396,     5,   401,   393,     5,   401,   408,     5,   396,   391,
     391,   391,   391,   391,   391,   391,   391,   391,     4,     4,
       5,     4,     4,   391,   401,   391,     5,   396,   393,   408,
     408,   408,   391,   400,   408,   408,   391,   408,   408,   391,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   556,
     564,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   401,     5,   391,   391,   391,   391,     4,
       4,   408,   409,     5,     5,   400,   391,     4,   408,   401,
       4,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     396,   391,   391,   391,   408,   391,   400,   391,   391,    11,
       5,     5,   391,   391,   391,   391,     5,   391,     4,   391,
       4,   408,   401,   391,   391,   409,   410,   391,     5,   391,
     401,   403,     5,     5,     5,     5,     5,   408,   410,   410,
     410,   408,   410,   409,   410,   410,   408,   410,   410,   410,
     408,   410,   410,   408,   401,   408,   410,   408,   410,   410,
     408,   410,   408,     4,   401,   403,     5,   391,     4,   413,
     412,     4,   412,   412,     4,     4,   412,     4,   412,     5,
       5,     5,   412,   412,   411,     4,     4,     5,     5,     5,
       5,   412,   412,   411,     4,     4,     5,     5,     5,     5,
     412,   412,   411,     4,     4,     5,   412,   413,   413,   413,
     413,   413,     4,   413,   413,     4,   412,   412,   413,   413,
     413,   413,   413,     4,   413,   413,     4,   412,   412,     4,
       4,     4,   402,   410,     4,   401,   410,   391,   401,     4,
     410,   410,   401,     4,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   401,   410,   391,   401,     4,
     400,   400,   409,   401,   400,   400,   401,   401,   400,   400,
     391,   391,   391,   391,   391,   391,   396,   391,   391,   391,
      58,    69,    98,   141,   317,   319,   375,   561,   562,   563,
     575,   576,   396,   391,   391,   391,   391,   396,   391,   391,
     391,   391,   391,   391,   408,   391,   339,   395,   396,   391,
     391,   409,   393,   401,   401,   409,   408,     4,   391,   400,
     391,    62,   391,     5,     5,     4,     4,   391,   391,     4,
     391,     4,   406,   410,     5,   408,     4,     5,     4,     5,
     401,     5,   409,   410,   409,   409,   409,   409,     5,   408,
       4,   391,   413,   412,   412,     4,   412,   413,   413,   413,
     413,   413,     4,   413,   413,   412,   413,   413,   413,   413,
     413,     4,   413,   413,   412,   413,   413,   413,   413,   413,
       4,   413,   413,   412,   413,   412,     4,   413,   413,   412,
       4,   413,   412,   408,   401,   410,     4,   408,   391,   408,
     391,   391,   391,   410,     4,   408,   391,   400,     5,   410,
     391,   400,   410,   410,   401,   391,     4,   415,   415,   391,
     391,   415,   396,   415,   564,   401,   388,   388,   388,   388,
     388,   388,   388,   562,   388,   396,   415,   415,   391,   391,
     396,   391,   391,   391,   391,   391,   400,   391,     5,   564,
     391,   415,   393,   565,   566,   408,   408,   393,   409,     4,
       5,   391,     5,     4,     4,     4,     4,     4,     4,   391,
       4,    33,   206,   313,   454,   401,     5,    33,   206,   313,
     417,   401,     4,   454,   391,   412,   412,   413,   412,   413,
     412,   413,   413,   412,   413,   412,   391,   410,   401,   401,
     391,   401,   391,   401,   401,   391,   401,   410,     4,   564,
     564,   395,   391,   564,     4,   564,   408,   543,     5,     4,
       5,     5,     5,     4,   393,     4,   564,   564,   395,   391,
       4,   564,   564,   391,   401,   564,   564,   564,   565,   572,
     573,   563,   570,   571,   393,     4,     5,     5,     4,     4,
       4,   209,   337,   382,   391,   445,   454,     4,   401,   454,
       4,   413,   413,   413,   413,   413,   402,   410,   410,   391,
     410,     4,   410,   410,   391,   410,   391,   564,   564,     4,
     391,   564,     5,     4,   391,   564,     4,   391,   564,   408,
     572,   574,   575,   388,   571,     5,     5,   391,   446,   391,
     446,   408,   410,     4,   401,   403,     4,   396,   395,   391,
       5,   391,   395,   391,   401,   575,   393,     5,     5,   391,
     391,   391,   391,   417,     5,   401,   403,   408,   401,   403,
     564,   391,     4,   564,   391,   410,     5,     5,   391,     5,
     391,   408,   408,     4,   564,     4,     5,     5,     5,   395,
     395,   564,   564,   564
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
#line 497 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 498 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 500 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 501 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 503 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 510 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 516 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 517 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 518 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 522 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 531 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 535 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 538 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 543 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 545 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 547 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 549 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 556 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 557 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 560 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 561 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 562 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 563 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 564 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 565 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 566 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 567 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 568 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 569 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 570 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 573 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 575 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 576 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 577 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 578 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 580 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 581 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 582 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 583 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 586 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 588 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 593 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 594 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 597 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 598 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 599 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 602 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 605 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 608 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 612 "frame/parser.Y"
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
#line 624 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 631 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 638 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 649 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 682 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 723 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 725 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 741 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 742 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 747 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 748 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 753 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 756 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 757 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 758 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 776 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 777 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 806 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 807 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 809 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 810 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 812 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 815 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 816 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 817 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 821 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 822 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 825 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 826 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 829 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 830 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 833 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 834 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 837 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 839 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 843 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 844 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 847 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 849 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 852 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 853 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 856 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 857 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 859 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 861 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 862 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 863 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 865 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 867 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 870 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 871 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 874 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 876 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 879 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 881 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 884 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 888 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 889 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 893 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 894 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 895 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 901 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 902 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 905 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 910 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 911 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 914 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 916 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 917 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 921 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 922 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 923 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 929 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 946 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 948 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 952 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 954 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 961 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 963 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 965 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 967 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 969 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 971 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 972 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 318:
#line 983 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 319:
#line 986 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 989 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 321:
#line 995 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 1000 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 323:
#line 1003 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 324:
#line 1004 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 325:
#line 1007 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 326:
#line 1008 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1010 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 328:
#line 1016 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 329:
#line 1017 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 330:
#line 1018 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 331:
#line 1019 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 332:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 333:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 334:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 335:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 336:
#line 1030 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 337:
#line 1031 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 338:
#line 1035 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 339:
#line 1037 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1040 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 341:
#line 1042 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 342:
#line 1045 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1047 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 345:
#line 1048 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 346:
#line 1049 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1052 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 348:
#line 1054 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1055 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1056 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1057 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1061 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 353:
#line 1063 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 354:
#line 1064 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 355:
#line 1065 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 356:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 357:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 358:
#line 1072 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 359:
#line 1074 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 360:
#line 1077 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 361:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 362:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 363:
#line 1082 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 364:
#line 1083 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 365:
#line 1086 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 366:
#line 1087 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 367:
#line 1090 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 368:
#line 1093 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 369:
#line 1094 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 383:
#line 1108 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 386:
#line 1111 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 387:
#line 1112 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 393:
#line 1118 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 394:
#line 1119 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 399:
#line 1124 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 400:
#line 1125 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 402:
#line 1128 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 404:
#line 1130 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 406:
#line 1132 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 408:
#line 1134 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 409:
#line 1136 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 412:
#line 1139 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 413:
#line 1143 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 414:
#line 1145 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 415:
#line 1149 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1151 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1154 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 418:
#line 1155 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 419:
#line 1156 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 420:
#line 1157 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 421:
#line 1158 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 422:
#line 1159 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 424:
#line 1161 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 425:
#line 1164 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 426:
#line 1165 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 427:
#line 1166 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 428:
#line 1169 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 429:
#line 1172 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 430:
#line 1174 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1176 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1177 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 433:
#line 1178 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 435:
#line 1180 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 437:
#line 1183 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 438:
#line 1189 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 439:
#line 1190 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 440:
#line 1193 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 442:
#line 1195 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 446:
#line 1205 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1207 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 448:
#line 1209 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 449:
#line 1212 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 451:
#line 1214 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 452:
#line 1218 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 453:
#line 1222 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1224 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 456:
#line 1225 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 457:
#line 1226 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 458:
#line 1227 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 459:
#line 1228 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 463:
#line 1234 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 464:
#line 1235 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 467:
#line 1240 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 468:
#line 1244 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 469:
#line 1246 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 470:
#line 1254 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1256 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 472:
#line 1258 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1261 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1263 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1264 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 476:
#line 1267 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 477:
#line 1270 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1272 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1276 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 480:
#line 1278 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 481:
#line 1281 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 482:
#line 1285 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 483:
#line 1286 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 484:
#line 1288 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 485:
#line 1291 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1292 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 488:
#line 1296 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 489:
#line 1297 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 490:
#line 1298 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 491:
#line 1301 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 492:
#line 1303 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 493:
#line 1304 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 495:
#line 1306 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 499:
#line 1310 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 500:
#line 1311 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 501:
#line 1312 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 502:
#line 1314 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 504:
#line 1316 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 505:
#line 1319 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1321 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 507:
#line 1323 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1324 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 509:
#line 1325 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 510:
#line 1326 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1329 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 512:
#line 1330 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 513:
#line 1334 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 514:
#line 1336 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 515:
#line 1339 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 516:
#line 1342 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 517:
#line 1343 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1345 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 519:
#line 1347 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1349 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 521:
#line 1352 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 522:
#line 1353 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 523:
#line 1354 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 524:
#line 1357 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 525:
#line 1358 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 526:
#line 1359 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1360 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 528:
#line 1361 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1362 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1365 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 531:
#line 1366 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 532:
#line 1367 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 533:
#line 1368 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 534:
#line 1369 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 535:
#line 1370 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 536:
#line 1371 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 537:
#line 1374 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 538:
#line 1375 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 539:
#line 1378 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 540:
#line 1381 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 541:
#line 1382 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 542:
#line 1383 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 543:
#line 1386 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 544:
#line 1389 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 545:
#line 1390 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 546:
#line 1391 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 547:
#line 1394 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 548:
#line 1395 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 549:
#line 1396 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 551:
#line 1400 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 552:
#line 1401 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 553:
#line 1402 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 554:
#line 1403 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 555:
#line 1404 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 560:
#line 1411 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 561:
#line 1412 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 563:
#line 1414 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 564:
#line 1417 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 565:
#line 1418 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 566:
#line 1419 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 568:
#line 1423 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 569:
#line 1424 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 570:
#line 1427 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 571:
#line 1428 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 572:
#line 1431 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 573:
#line 1432 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 574:
#line 1435 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 575:
#line 1436 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 576:
#line 1439 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 580:
#line 1445 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 582:
#line 1449 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 585:
#line 1457 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 586:
#line 1460 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 587:
#line 1467 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 588:
#line 1468 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 589:
#line 1471 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 590:
#line 1472 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 593:
#line 1475 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 594:
#line 1476 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 595:
#line 1477 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 596:
#line 1478 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 598:
#line 1480 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 599:
#line 1481 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 600:
#line 1482 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 602:
#line 1484 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 603:
#line 1485 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 604:
#line 1486 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 605:
#line 1487 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1491 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 608:
#line 1494 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 609:
#line 1495 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 610:
#line 1498 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 611:
#line 1499 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 612:
#line 1500 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 613:
#line 1501 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 614:
#line 1504 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 615:
#line 1505 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 616:
#line 1506 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 617:
#line 1507 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 618:
#line 1510 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 619:
#line 1511 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1512 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 621:
#line 1513 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 622:
#line 1514 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 623:
#line 1515 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1518 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 625:
#line 1519 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 626:
#line 1520 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 629:
#line 1524 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 630:
#line 1525 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 631:
#line 1528 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 632:
#line 1531 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 633:
#line 1532 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1536 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 635:
#line 1538 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 636:
#line 1539 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1553 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1555 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1556 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1562 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1564 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1566 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1572 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1573 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1574 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1575 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 659:
#line 1576 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 660:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 661:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1580 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1581 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 665:
#line 1588 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1590 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1592 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1594 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1596 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1598 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1600 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1602 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1605 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1607 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1609 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1621 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1622 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1623 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1624 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1625 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 690:
#line 1626 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1628 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1630 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 693:
#line 1631 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1632 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1633 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1636 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1637 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1638 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1639 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1640 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1644 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1645 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1688 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 726:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 727:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 736:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1757 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1759 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 745:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1778 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 756:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1806 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1807 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1808 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 762:
#line 1809 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1810 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 764:
#line 1811 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 766:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 767:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1818 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 770:
#line 1821 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1822 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1823 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1824 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1825 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1837 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1839 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1846 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 787:
#line 1850 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1851 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 790:
#line 1855 "frame/parser.Y"
    {;}
    break;

  case 791:
#line 1858 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 792:
#line 1859 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 794:
#line 1861 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 795:
#line 1862 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 796:
#line 1863 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 797:
#line 1864 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 800:
#line 1876 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1877 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 802:
#line 1879 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 803:
#line 1881 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1882 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 805:
#line 1883 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 807:
#line 1884 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 810:
#line 1887 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 811:
#line 1888 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 812:
#line 1890 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 813:
#line 1892 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 814:
#line 1894 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1897 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1899 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 817:
#line 1900 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 818:
#line 1902 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1905 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 820:
#line 1908 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 821:
#line 1912 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 822:
#line 1915 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 823:
#line 1918 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1921 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 825:
#line 1925 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 826:
#line 1929 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 827:
#line 1934 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1938 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 829:
#line 1940 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1943 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 833:
#line 1947 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1950 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1953 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 838:
#line 1955 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 839:
#line 1957 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 840:
#line 1960 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 841:
#line 1964 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 842:
#line 1968 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 843:
#line 1970 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 844:
#line 1972 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 845:
#line 1974 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1986 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 852:
#line 1988 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 853:
#line 1990 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 854:
#line 1992 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2005 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 863:
#line 2006 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 864:
#line 2007 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 865:
#line 2008 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2012 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 868:
#line 2016 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 869:
#line 2019 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 870:
#line 2022 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 871:
#line 2026 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 872:
#line 2030 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 873:
#line 2035 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 874:
#line 2039 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2040 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 876:
#line 2041 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 877:
#line 2043 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 878:
#line 2045 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 879:
#line 2049 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 881:
#line 2051 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 882:
#line 2053 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 883:
#line 2056 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 884:
#line 2059 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 885:
#line 2062 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 886:
#line 2065 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2066 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2070 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 889:
#line 2074 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2076 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 891:
#line 2077 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 892:
#line 2079 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 893:
#line 2082 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 894:
#line 2085 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 895:
#line 2086 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 896:
#line 2088 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 897:
#line 2089 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 898:
#line 2090 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2092 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 900:
#line 2093 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 901:
#line 2095 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 902:
#line 2098 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 903:
#line 2101 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 904:
#line 2103 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 905:
#line 2104 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 909:
#line 2109 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2110 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 911:
#line 2112 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 912:
#line 2114 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 913:
#line 2116 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 914:
#line 2117 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 918:
#line 2123 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 919:
#line 2124 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 920:
#line 2125 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 921:
#line 2126 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 922:
#line 2127 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 923:
#line 2128 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 924:
#line 2129 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2130 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 926:
#line 2131 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 927:
#line 2132 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 928:
#line 2134 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 929:
#line 2136 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 930:
#line 2137 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2138 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2139 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 933:
#line 2140 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 934:
#line 2142 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 935:
#line 2143 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 936:
#line 2144 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 937:
#line 2145 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 938:
#line 2146 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 939:
#line 2148 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 940:
#line 2149 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 941:
#line 2150 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 942:
#line 2151 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 943:
#line 2152 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 944:
#line 2153 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 945:
#line 2156 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 946:
#line 2157 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 947:
#line 2158 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 948:
#line 2159 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 949:
#line 2160 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 950:
#line 2161 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 951:
#line 2162 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 952:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 953:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 954:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 955:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 956:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 957:
#line 2168 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 958:
#line 2169 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 959:
#line 2170 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 960:
#line 2171 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 961:
#line 2172 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 962:
#line 2173 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 963:
#line 2174 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 964:
#line 2175 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 965:
#line 2176 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 966:
#line 2179 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 967:
#line 2180 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 968:
#line 2181 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 969:
#line 2182 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 970:
#line 2183 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 971:
#line 2185 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 972:
#line 2195 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2203 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2212 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2220 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2227 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2234 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2242 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2250 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2255 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2260 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2265 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2270 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2275 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2280 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2285 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2294 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2304 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2314 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2323 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2331 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2341 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2351 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2361 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2373 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2382 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2390 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 999:
#line 2392 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1000:
#line 2401 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1001:
#line 2403 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1002:
#line 2405 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1003:
#line 2410 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1004:
#line 2413 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1005:
#line 2414 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1006:
#line 2415 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1007:
#line 2422 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1008:
#line 2424 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1009:
#line 2425 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1010:
#line 2428 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1011:
#line 2429 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1012:
#line 2430 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1013:
#line 2431 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1014:
#line 2432 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1015:
#line 2433 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1016:
#line 2434 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1018:
#line 2438 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1019:
#line 2439 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1020:
#line 2440 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1021:
#line 2441 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1022:
#line 2442 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1023:
#line 2445 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1024:
#line 2447 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1025:
#line 2449 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1026:
#line 2451 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1027:
#line 2453 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1028:
#line 2455 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2457 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1030:
#line 2458 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1031:
#line 2459 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1032:
#line 2461 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1033:
#line 2463 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2466 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2468 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1036:
#line 2469 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1037:
#line 2470 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1038:
#line 2472 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2474 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1040:
#line 2477 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1041:
#line 2480 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1042:
#line 2481 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1043:
#line 2482 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1044:
#line 2483 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1045:
#line 2485 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2486 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1047:
#line 2487 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1048:
#line 2488 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1049:
#line 2489 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1050:
#line 2490 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1051:
#line 2491 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1052:
#line 2493 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2495 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2497 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1055:
#line 2499 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1056:
#line 2501 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2502 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1058:
#line 2504 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1059:
#line 2506 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1060:
#line 2508 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1061:
#line 2509 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1062:
#line 2510 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2512 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2514 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2517 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2520 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1067:
#line 2521 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1068:
#line 2523 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2526 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2529 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1071:
#line 2532 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2533 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1073:
#line 2534 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1074:
#line 2535 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2537 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2539 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1077:
#line 2541 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1078:
#line 2542 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1079:
#line 2544 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1080:
#line 2545 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1081:
#line 2546 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1082:
#line 2547 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1083:
#line 2548 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1084:
#line 2550 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1085:
#line 2552 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2554 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1087:
#line 2556 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1089:
#line 2558 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1090:
#line 2559 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1091:
#line 2561 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1092:
#line 2563 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1093:
#line 2564 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1094:
#line 2565 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1096:
#line 2567 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1098:
#line 2571 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1099:
#line 2572 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1100:
#line 2573 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1101:
#line 2574 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1102:
#line 2575 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1103:
#line 2576 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1104:
#line 2578 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1105:
#line 2579 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1106:
#line 2581 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1107:
#line 2584 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1108:
#line 2585 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1109:
#line 2586 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1110:
#line 2587 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1111:
#line 2590 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1112:
#line 2591 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1113:
#line 2594 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1114:
#line 2595 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1115:
#line 2598 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1116:
#line 2599 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1117:
#line 2602 "frame/parser.Y"
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

  case 1118:
#line 2615 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1119:
#line 2616 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1120:
#line 2620 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1121:
#line 2621 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1122:
#line 2625 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1123:
#line 2626 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1124:
#line 2631 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1125:
#line 2635 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1126:
#line 2640 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1127:
#line 2642 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1128:
#line 2645 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1129:
#line 2647 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1130:
#line 2650 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1131:
#line 2652 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1132:
#line 2655 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2656 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1134:
#line 2657 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1135:
#line 2658 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2659 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1137:
#line 2660 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1138:
#line 2662 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1141:
#line 2669 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1142:
#line 2670 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1143:
#line 2671 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1144:
#line 2672 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1145:
#line 2673 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1146:
#line 2674 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1149:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1150:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1151:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1152:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1153:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1154:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1155:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1156:
#line 2686 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1157:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1158:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1159:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1160:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1163:
#line 2697 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1164:
#line 2698 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1166:
#line 2702 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1167:
#line 2704 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1168:
#line 2705 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1169:
#line 2708 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1170:
#line 2709 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1171:
#line 2710 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1172:
#line 2711 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1173:
#line 2712 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1174:
#line 2713 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1175:
#line 2716 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1176:
#line 2717 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1179:
#line 2725 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2728 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1181:
#line 2729 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1185:
#line 2736 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1186:
#line 2739 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1187:
#line 2743 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1188:
#line 2744 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1189:
#line 2745 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1190:
#line 2746 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1191:
#line 2747 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2748 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1193:
#line 2749 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2750 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1196:
#line 2752 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1197:
#line 2753 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2754 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2756 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1200:
#line 2757 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1201:
#line 2758 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1202:
#line 2759 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1203:
#line 2760 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1204:
#line 2761 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1205:
#line 2762 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1206:
#line 2763 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1207:
#line 2764 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1208:
#line 2765 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1209:
#line 2766 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1211:
#line 2768 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1212:
#line 2769 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1214:
#line 2773 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2774 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2775 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1217:
#line 2776 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2777 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1219:
#line 2778 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2779 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1223:
#line 2787 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1224:
#line 2788 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1227:
#line 2795 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1228:
#line 2800 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1230:
#line 2802 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1232:
#line 2804 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2807 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2809 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1235:
#line 2814 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1236:
#line 2817 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1237:
#line 2818 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1238:
#line 2819 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2822 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1240:
#line 2824 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1241:
#line 2828 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2829 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1243:
#line 2833 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2834 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2835 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2836 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1247:
#line 2842 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1249:
#line 2849 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1250:
#line 2850 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1251:
#line 2851 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1252:
#line 2852 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1255:
#line 2860 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1256:
#line 2862 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1257:
#line 2863 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1258:
#line 2864 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1259:
#line 2868 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1260:
#line 2869 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1261:
#line 2870 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1262:
#line 2871 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1263:
#line 2874 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1264:
#line 2875 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1265:
#line 2876 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1266:
#line 2879 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1267:
#line 2880 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1268:
#line 2881 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1269:
#line 2884 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2885 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2886 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1272:
#line 2890 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2893 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1274:
#line 2894 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1275:
#line 2895 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1276:
#line 2896 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1277:
#line 2897 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1278:
#line 2900 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2901 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1280:
#line 2902 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1281:
#line 2903 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1282:
#line 2904 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1283:
#line 2905 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1284:
#line 2908 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1285:
#line 2909 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1287:
#line 2911 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1288:
#line 2912 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1289:
#line 2915 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1290:
#line 2916 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1291:
#line 2917 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1297:
#line 2925 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1298:
#line 2928 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1299:
#line 2929 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1300:
#line 2930 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1301:
#line 2934 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1302:
#line 2936 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1303:
#line 2938 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1320:
#line 2959 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1321:
#line 2960 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1322:
#line 2961 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1323:
#line 2964 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1324:
#line 2965 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1325:
#line 2966 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1326:
#line 2969 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1327:
#line 2970 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1328:
#line 2971 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1329:
#line 2974 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1330:
#line 2975 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 2976 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2980 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1334:
#line 2981 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1335:
#line 2982 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1336:
#line 2985 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2986 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2987 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 2991 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1340:
#line 2993 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1341:
#line 2995 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1342:
#line 2998 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 2999 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 3000 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 3003 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1346:
#line 3004 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3005 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1348:
#line 3009 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1349:
#line 3011 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1350:
#line 3013 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3016 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3017 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3018 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3021 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3022 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3023 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1357:
#line 3027 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3029 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1359:
#line 3031 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1360:
#line 3034 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3035 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3036 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1363:
#line 3039 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1364:
#line 3040 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3041 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1366:
#line 3044 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1367:
#line 3045 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3046 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1369:
#line 3050 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1370:
#line 3052 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1371:
#line 3054 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1372:
#line 3058 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1373:
#line 3062 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1374:
#line 3064 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1375:
#line 3068 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1376:
#line 3071 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1377:
#line 3072 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1378:
#line 3073 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1379:
#line 3074 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1380:
#line 3077 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1381:
#line 3079 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1382:
#line 3081 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1383:
#line 3084 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1385:
#line 3088 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1386:
#line 3089 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1387:
#line 3090 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1388:
#line 3093 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1389:
#line 3094 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1390:
#line 3098 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1392:
#line 3100 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3105 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1396:
#line 3106 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3107 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1398:
#line 3110 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1399:
#line 3111 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1400:
#line 3112 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1401:
#line 3115 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1402:
#line 3117 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1403:
#line 3122 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1404:
#line 3123 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1405:
#line 3126 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1406:
#line 3133 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1407:
#line 3135 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1408:
#line 3137 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1409:
#line 3142 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1411:
#line 3146 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1412:
#line 3147 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1413:
#line 3148 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1414:
#line 3150 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1415:
#line 3152 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1416:
#line 3157 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11921 "frame/parser.C"
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


#line 3161 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

