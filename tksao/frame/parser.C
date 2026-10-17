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
     REVEAL_ = 528,
     RGB_ = 529,
     ROOT_ = 530,
     ROTATE_ = 531,
     RULER_ = 532,
     SAMPLE_ = 533,
     SAOIMAGE_ = 534,
     SAOTNG_ = 535,
     SAVE_ = 536,
     SATURATION_ = 537,
     SCALE_ = 538,
     SCAN_ = 539,
     SCIENTIFIC_ = 540,
     SCOPE_ = 541,
     SCREEN_ = 542,
     SEGMENT_ = 543,
     SELECT_ = 544,
     SET_ = 545,
     SEXAGESIMAL_ = 546,
     SHAPE_ = 547,
     SHADE_ = 548,
     SHARED_ = 549,
     SHIFT_ = 550,
     SHMID_ = 551,
     SHOW_ = 552,
     SIGMA_ = 553,
     SINH_ = 554,
     SIZE_ = 555,
     SLICE_ = 556,
     SMMAP_ = 557,
     SMOOTH_ = 558,
     SOFTLIGHT_ = 559,
     SOCKET_ = 560,
     SOCKETGZ_ = 561,
     SOURCE_ = 562,
     SQRT_ = 563,
     SQUARED_ = 564,
     SSHARED_ = 565,
     STATS_ = 566,
     STATUS_ = 567,
     STRENGTH_ = 568,
     SUM_ = 569,
     SYNC_ = 570,
     SYSTEM_ = 571,
     TABLE_ = 572,
     TAG_ = 573,
     TEMPLATE_ = 574,
     TEXT_ = 575,
     THREADS_ = 576,
     THREED_ = 577,
     THRESHOLD_ = 578,
     THICK_ = 579,
     TOP_ = 580,
     TRANSPARENCY_ = 581,
     TO_ = 582,
     TOGGLE_ = 583,
     TOPHAT_ = 584,
     TRUE_ = 585,
     TYPE_ = 586,
     UNDO_ = 587,
     UNHIGHLITE_ = 588,
     UNLOAD_ = 589,
     UNSELECT_ = 590,
     UPDATE_ = 591,
     UP_ = 592,
     USER_ = 593,
     VALUE_ = 594,
     VAR_ = 595,
     VIEW_ = 596,
     VECTOR_ = 597,
     VERSION_ = 598,
     VERTEX_ = 599,
     VERTICAL_ = 600,
     WARP_ = 601,
     WCS_ = 602,
     WCSA_ = 603,
     WCSB_ = 604,
     WCSC_ = 605,
     WCSD_ = 606,
     WCSE_ = 607,
     WCSF_ = 608,
     WCSG_ = 609,
     WCSH_ = 610,
     WCSI_ = 611,
     WCSJ_ = 612,
     WCSK_ = 613,
     WCSL_ = 614,
     WCSM_ = 615,
     WCSN_ = 616,
     WCSO_ = 617,
     WCSP_ = 618,
     WCSQ_ = 619,
     WCSR_ = 620,
     WCSS_ = 621,
     WCST_ = 622,
     WCSU_ = 623,
     WCSV_ = 624,
     WCSW_ = 625,
     WCSX_ = 626,
     WCSY_ = 627,
     WCSZ_ = 628,
     WCS0_ = 629,
     WFPC2_ = 630,
     WIDTH_ = 631,
     WIN32_ = 632,
     XML_ = 633,
     XY_ = 634,
     YES_ = 635,
     ZERO_ = 636,
     ZMAX_ = 637,
     ZSCALE_ = 638,
     PIXMASK_ = 639,
     ZOOM_ = 640,
     FIELDS_ = 641
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
#define REVEAL_ 528
#define RGB_ 529
#define ROOT_ 530
#define ROTATE_ 531
#define RULER_ 532
#define SAMPLE_ 533
#define SAOIMAGE_ 534
#define SAOTNG_ 535
#define SAVE_ 536
#define SATURATION_ 537
#define SCALE_ 538
#define SCAN_ 539
#define SCIENTIFIC_ 540
#define SCOPE_ 541
#define SCREEN_ 542
#define SEGMENT_ 543
#define SELECT_ 544
#define SET_ 545
#define SEXAGESIMAL_ 546
#define SHAPE_ 547
#define SHADE_ 548
#define SHARED_ 549
#define SHIFT_ 550
#define SHMID_ 551
#define SHOW_ 552
#define SIGMA_ 553
#define SINH_ 554
#define SIZE_ 555
#define SLICE_ 556
#define SMMAP_ 557
#define SMOOTH_ 558
#define SOFTLIGHT_ 559
#define SOCKET_ 560
#define SOCKETGZ_ 561
#define SOURCE_ 562
#define SQRT_ 563
#define SQUARED_ 564
#define SSHARED_ 565
#define STATS_ 566
#define STATUS_ 567
#define STRENGTH_ 568
#define SUM_ 569
#define SYNC_ 570
#define SYSTEM_ 571
#define TABLE_ 572
#define TAG_ 573
#define TEMPLATE_ 574
#define TEXT_ 575
#define THREADS_ 576
#define THREED_ 577
#define THRESHOLD_ 578
#define THICK_ 579
#define TOP_ 580
#define TRANSPARENCY_ 581
#define TO_ 582
#define TOGGLE_ 583
#define TOPHAT_ 584
#define TRUE_ 585
#define TYPE_ 586
#define UNDO_ 587
#define UNHIGHLITE_ 588
#define UNLOAD_ 589
#define UNSELECT_ 590
#define UPDATE_ 591
#define UP_ 592
#define USER_ 593
#define VALUE_ 594
#define VAR_ 595
#define VIEW_ 596
#define VECTOR_ 597
#define VERSION_ 598
#define VERTEX_ 599
#define VERTICAL_ 600
#define WARP_ 601
#define WCS_ 602
#define WCSA_ 603
#define WCSB_ 604
#define WCSC_ 605
#define WCSD_ 606
#define WCSE_ 607
#define WCSF_ 608
#define WCSG_ 609
#define WCSH_ 610
#define WCSI_ 611
#define WCSJ_ 612
#define WCSK_ 613
#define WCSL_ 614
#define WCSM_ 615
#define WCSN_ 616
#define WCSO_ 617
#define WCSP_ 618
#define WCSQ_ 619
#define WCSR_ 620
#define WCSS_ 621
#define WCST_ 622
#define WCSU_ 623
#define WCSV_ 624
#define WCSW_ 625
#define WCSX_ 626
#define WCSY_ 627
#define WCSZ_ 628
#define WCS0_ 629
#define WFPC2_ 630
#define WIDTH_ 631
#define WIN32_ 632
#define XML_ 633
#define XY_ 634
#define YES_ 635
#define ZERO_ 636
#define ZMAX_ 637
#define ZSCALE_ 638
#define PIXMASK_ 639
#define ZOOM_ 640
#define FIELDS_ 641




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
#line 929 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 942 "frame/parser.C"

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
#define YYFINAL  406
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  391
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  244
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1432
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3118

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   641

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
       2,   390,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   388,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   389,   387,
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
     385,   386
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
     151,   154,   156,   159,   162,   165,   167,   170,   172,   175,
     178,   181,   184,   186,   188,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   239,   242,   245,   247,   249,
     250,   252,   254,   256,   258,   260,   262,   264,   267,   270,
     273,   276,   278,   280,   282,   284,   286,   288,   290,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   336,   338,   340,   342,   344,   346,   347,   349,   351,
     353,   355,   357,   358,   360,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   404,   406,   408,   410,
     412,   414,   416,   417,   419,   421,   423,   425,   427,   429,
     431,   432,   434,   436,   437,   439,   441,   443,   444,   446,
     448,   449,   451,   453,   454,   456,   458,   459,   461,   463,
     465,   467,   469,   471,   473,   474,   476,   478,   480,   482,
     484,   486,   488,   489,   491,   493,   495,   496,   498,   500,
     502,   504,   506,   509,   512,   515,   518,   521,   524,   527,
     530,   533,   536,   538,   541,   544,   547,   549,   552,   554,
     557,   559,   562,   564,   567,   570,   577,   580,   585,   588,
     591,   594,   598,   601,   604,   606,   609,   611,   614,   619,
     625,   628,   632,   638,   645,   647,   649,   651,   659,   671,
     680,   693,   695,   698,   701,   703,   705,   708,   711,   714,
     717,   721,   725,   728,   731,   733,   735,   737,   739,   741,
     743,   745,   748,   751,   754,   756,   760,   763,   766,   769,
     775,   785,   795,   805,   813,   815,   818,   820,   826,   836,
     846,   856,   864,   866,   869,   872,   876,   879,   882,   885,
     888,   902,   916,   929,   942,   944,   945,   947,   949,   954,
     961,   963,   965,   967,   969,   971,   973,   975,   977,   979,
     984,   991,   995,  1000,  1001,  1008,  1017,  1020,  1024,  1028,
    1032,  1033,  1038,  1043,  1048,  1053,  1057,  1061,  1063,  1067,
    1073,  1078,  1083,  1087,  1090,  1091,  1093,  1095,  1097,  1099,
    1101,  1105,  1106,  1109,  1112,  1115,  1118,  1121,  1124,  1127,
    1130,  1133,  1136,  1139,  1142,  1145,  1148,  1150,  1153,  1156,
    1159,  1164,  1168,  1171,  1174,  1177,  1180,  1183,  1185,  1189,
    1192,  1195,  1198,  1201,  1203,  1206,  1215,  1218,  1220,  1223,
    1225,  1228,  1230,  1235,  1239,  1242,  1244,  1252,  1261,  1269,
    1278,  1280,  1282,  1284,  1287,  1289,  1291,  1294,  1296,  1297,
    1300,  1303,  1305,  1306,  1309,  1312,  1314,  1316,  1319,  1322,
    1325,  1327,  1329,  1331,  1333,  1335,  1337,  1338,  1340,  1343,
    1345,  1350,  1356,  1357,  1360,  1362,  1368,  1371,  1374,  1376,
    1378,  1380,  1382,  1385,  1387,  1390,  1392,  1394,  1395,  1397,
    1399,  1400,  1402,  1408,  1415,  1419,  1426,  1430,  1432,  1436,
    1438,  1440,  1442,  1446,  1453,  1461,  1467,  1470,  1472,  1478,
    1483,  1485,  1489,  1490,  1492,  1495,  1497,  1502,  1504,  1507,
    1509,  1512,  1516,  1519,  1521,  1524,  1526,  1531,  1534,  1536,
    1538,  1542,  1544,  1547,  1551,  1554,  1555,  1557,  1559,  1564,
    1567,  1568,  1570,  1574,  1579,  1584,  1585,  1587,  1589,  1591,
    1593,  1596,  1599,  1602,  1605,  1607,  1609,  1611,  1613,  1615,
    1617,  1619,  1620,  1622,  1624,  1626,  1628,  1630,  1632,  1634,
    1636,  1638,  1640,  1642,  1644,  1646,  1648,  1651,  1653,  1656,
    1658,  1661,  1664,  1667,  1670,  1672,  1674,  1677,  1679,  1680,
    1682,  1684,  1687,  1688,  1690,  1691,  1693,  1694,  1696,  1697,
    1699,  1700,  1702,  1703,  1706,  1709,  1710,  1712,  1715,  1717,
    1724,  1730,  1732,  1734,  1736,  1739,  1742,  1745,  1747,  1749,
    1751,  1753,  1756,  1758,  1760,  1762,  1765,  1767,  1769,  1771,
    1774,  1777,  1780,  1781,  1783,  1784,  1786,  1788,  1790,  1792,
    1794,  1796,  1798,  1800,  1803,  1806,  1809,  1811,  1814,  1818,
    1820,  1823,  1826,  1831,  1837,  1839,  1850,  1852,  1855,  1859,
    1863,  1866,  1869,  1872,  1875,  1878,  1881,  1884,  1889,  1894,
    1899,  1903,  1907,  1913,  1918,  1923,  1928,  1932,  1936,  1940,
    1944,  1948,  1952,  1955,  1958,  1963,  1967,  1971,  1975,  1979,
    1984,  1989,  1994,  1999,  2005,  2010,  2017,  2025,  2030,  2035,
    2041,  2044,  2048,  2052,  2056,  2060,  2064,  2068,  2072,  2075,
    2079,  2083,  2087,  2091,  2096,  2100,  2106,  2113,  2117,  2121,
    2126,  2130,  2134,  2138,  2142,  2146,  2152,  2156,  2160,  2165,
    2169,  2172,  2175,  2177,  2181,  2186,  2191,  2196,  2201,  2206,
    2213,  2218,  2223,  2229,  2234,  2239,  2244,  2249,  2255,  2260,
    2267,  2275,  2280,  2285,  2291,  2297,  2303,  2309,  2315,  2321,
    2329,  2335,  2341,  2348,  2353,  2358,  2363,  2368,  2373,  2380,
    2385,  2390,  2396,  2402,  2408,  2414,  2420,  2427,  2433,  2441,
    2450,  2456,  2462,  2469,  2473,  2477,  2481,  2485,  2490,  2494,
    2500,  2507,  2511,  2515,  2520,  2524,  2528,  2532,  2536,  2540,
    2546,  2550,  2554,  2559,  2564,  2569,  2573,  2579,  2584,  2589,
    2592,  2596,  2603,  2610,  2612,  2614,  2616,  2619,  2622,  2625,
    2629,  2633,  2636,  2649,  2652,  2655,  2657,  2661,  2666,  2669,
    2670,  2674,  2676,  2679,  2682,  2685,  2688,  2691,  2696,  2701,
    2706,  2711,  2715,  2719,  2724,  2730,  2739,  2746,  2756,  2763,
    2771,  2782,  2794,  2807,  2817,  2823,  2830,  2834,  2840,  2846,
    2853,  2859,  2864,  2869,  2874,  2884,  2895,  2907,  2917,  2924,
    2931,  2938,  2945,  2952,  2959,  2966,  2973,  2980,  2988,  2996,
    2999,  3004,  3009,  3014,  3019,  3025,  3030,  3035,  3041,  3047,
    3051,  3056,  3061,  3066,  3074,  3084,  3091,  3102,  3114,  3127,
    3137,  3141,  3144,  3148,  3154,  3162,  3167,  3171,  3175,  3182,
    3190,  3199,  3207,  3215,  3220,  3225,  3235,  3240,  3244,  3249,
    3257,  3265,  3268,  3272,  3276,  3280,  3285,  3288,  3291,  3296,
    3307,  3311,  3316,  3318,  3322,  3325,  3328,  3331,  3334,  3338,
    3344,  3349,  3355,  3358,  3361,  3364,  3367,  3371,  3374,  3377,
    3380,  3384,  3387,  3391,  3396,  3400,  3404,  3411,  3416,  3419,
    3423,  3426,  3429,  3434,  3438,  3442,  3445,  3449,  3451,  3454,
    3456,  3459,  3462,  3465,  3469,  3471,  3473,  3475,  3477,  3480,
    3482,  3485,  3488,  3490,  3493,  3496,  3498,  3501,  3503,  3505,
    3507,  3509,  3511,  3513,  3515,  3517,  3518,  3520,  3523,  3526,
    3529,  3533,  3539,  3547,  3555,  3562,  3569,  3576,  3583,  3589,
    3596,  3603,  3610,  3617,  3624,  3631,  3638,  3650,  3658,  3666,
    3674,  3684,  3694,  3705,  3718,  3731,  3735,  3738,  3739,  3741,
    3745,  3750,  3755,  3760,  3761,  3763,  3765,  3770,  3775,  3777,
    3779,  3781,  3783,  3785,  3787,  3789,  3791,  3794,  3796,  3798,
    3800,  3804,  3808,  3817,  3824,  3835,  3843,  3851,  3857,  3864,
    3871,  3875,  3878,  3881,  3885,  3890,  3896,  3902,  3908,  3912,
    3917,  3923,  3929,  3935,  3941,  3944,  3948,  3952,  3958,  3962,
    3966,  3970,  3974,  3978,  3983,  3989,  3995,  4001,  4007,  4011,
    4016,  4022,  4028,  4031,  4034,  4038,  4044,  4051,  4058,  4062,
    4066,  4073,  4080,  4086,  4092,  4095,  4099,  4103,  4109,  4116,
    4120,  4123,  4126,  4130,  4133,  4137,  4140,  4144,  4150,  4157,
    4160,  4163,  4166,  4169,  4171,  4176,  4181,  4183,  4186,  4189,
    4192,  4195,  4198,  4201,  4204,  4208,  4211,  4215,  4218,  4222,
    4224,  4226,  4228,  4230,  4232,  4234,  4235,  4238,  4239,  4242,
    4243,  4245,  4246,  4247,  4249,  4251,  4253,  4255,  4257,  4265,
    4274,  4277,  4284,  4287,  4294,  4297,  4301,  4304,  4306,  4308,
    4312,  4316,  4318,  4323,  4326,  4328,  4332,  4336,  4341,  4345,
    4349,  4353,  4355,  4357,  4359,  4361,  4363,  4365,  4367,  4369,
    4371,  4373,  4375,  4377,  4379,  4381,  4383,  4386,  4387,  4388,
    4391,  4398,  4406,  4409,  4411,  4415,  4417,  4421,  4423,  4425,
    4427,  4430,  4433,  4435,  4439,  4440,  4441,  4444,  4447,  4449,
    4453,  4459,  4460,  4462,  4464,  4467,  4470,  4474,  4477,  4481,
    4484,  4488,  4491,  4495,  4497,  4500,  4502,  4505,  4507,  4510,
    4512,  4515,  4517,  4520,  4522,  4525,  4527,  4530,  4532,  4535,
    4538,  4542,  4545,  4548,  4551,  4554,  4556,  4558,  4560,  4562,
    4567,  4570,  4574,  4578,  4581,  4585,  4588,  4591,  4594,  4598,
    4602,  4606,  4609,  4613,  4615,  4619,  4623,  4625,  4628,  4631,
    4634,  4637,  4647,  4654,  4656,  4658,  4660,  4662,  4665,  4668,
    4672,  4676,  4678,  4681,  4685,  4689,  4691,  4694,  4696,  4698,
    4700,  4702,  4704,  4706,  4708,  4710,  4713,  4716,  4721,  4724,
    4727,  4730,  4733,  4736,  4741,  4744,  4747,  4750,  4753,  4756,
    4761,  4763,  4766,  4769,  4772,  4776,  4778,  4780,  4782,  4785,
    4788,  4791,  4794,  4797,  4800,  4803,  4806,  4809,  4813,  4817,
    4821,  4825,  4829,  4833,  4835,  4838,  4841,  4844,  4848,  4851,
    4855,  4859,  4863,  4867,  4871,  4875,  4878,  4881,  4884,  4887,
    4890,  4893,  4896,  4899,  4902,  4905,  4908,  4911,  4914,  4917,
    4921,  4925,  4929,  4932,  4935,  4938,  4942,  4946,  4950,  4953,
    4956,  4959,  4962,  4965,  4968,  4972,  4976,  4980,  4983,  4986,
    4989,  4992,  4995,  4998,  5002,  5006,  5010,  5013,  5016,  5019,
    5022,  5025,  5028,  5031,  5034,  5037,  5041,  5045,  5049,  5054,
    5061,  5064,  5066,  5068,  5070,  5072,  5074,  5075,  5081,  5083,
    5090,  5094,  5096,  5099,  5102,  5105,  5109,  5113,  5116,  5119,
    5122,  5125,  5128,  5131,  5135,  5138,  5141,  5145,  5147,  5151,
    5156,  5159,  5161,  5164,  5170,  5177,  5184,  5187,  5189,  5192,
    5195,  5201,  5208
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     392,     0,    -1,   102,   394,    -1,    45,   428,    -1,    42,
      69,     5,    -1,    42,    69,   395,    -1,    48,   433,    -1,
      62,    -1,    67,    -1,    68,   435,    -1,    72,   318,     5,
      -1,    73,   440,    -1,    74,   442,    -1,    82,   443,    -1,
      89,   452,    -1,    91,   454,    -1,    92,   455,    -1,   101,
     395,    -1,   127,   457,    -1,   137,   458,    -1,   150,   459,
      -1,   154,   510,    -1,   158,   513,    -1,   162,    -1,   163,
     395,    -1,   163,    69,     5,    -1,   168,   598,    -1,   169,
     597,    -1,   172,   519,    -1,   178,    15,     4,    -1,   195,
     522,    -1,   199,   540,    -1,   200,   541,    -1,   201,   542,
      -1,   204,   559,   543,    -1,   205,   580,    -1,   184,   579,
      -1,   217,   596,    -1,   221,    69,     5,    -1,   239,   581,
      -1,   241,   582,    -1,   242,   585,    -1,   263,    93,    -1,
     256,   587,    -1,   254,   586,    -1,   271,    -1,   267,   559,
     589,    -1,   273,   594,    -1,   274,   595,    -1,   276,   599,
      -1,   281,   601,    -1,   297,    -1,   303,   623,    -1,   321,
       4,    -1,   322,   421,    -1,   334,    -1,   336,   625,    -1,
     343,    -1,   346,   627,    -1,   347,   628,    -1,   377,   632,
      -1,   385,   633,    -1,     3,    -1,     4,    -1,   395,    -1,
     214,   395,    -1,   243,   395,    -1,   245,   395,    -1,   347,
     395,    -1,    45,   395,    -1,    48,   395,    -1,    81,   395,
      -1,    89,   395,    -1,   155,   395,    -1,   274,   395,    -1,
       4,    -1,   380,    -1,   387,    -1,   236,    -1,   330,    -1,
     226,    -1,   388,    -1,   235,    -1,   129,    -1,    -1,   275,
      39,    -1,   146,    39,    -1,   275,    -1,   146,    -1,    -1,
     398,    -1,   393,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   399,   399,    -1,   400,   401,    -1,
     401,   401,    -1,   393,   393,    -1,   173,    -1,   247,    -1,
     107,    -1,    19,    -1,   404,    -1,   347,    -1,   348,    -1,
     349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,
     354,    -1,   355,    -1,   356,    -1,   357,    -1,   358,    -1,
     359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
     364,    -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,
     374,    -1,    59,    -1,   242,    -1,    -1,   381,    -1,   230,
      -1,   221,    -1,   229,    -1,   266,    -1,    -1,   307,    -1,
     218,    -1,   287,    -1,   240,    -1,    96,    -1,   189,    -1,
      71,    -1,    70,    -1,   157,    -1,   304,    -1,   109,    -1,
     125,    -1,   167,    -1,   282,    -1,    69,    -1,   198,    -1,
     193,    -1,   197,    -1,   255,    -1,   308,    -1,   309,    -1,
      29,    -1,   299,    -1,   164,    -1,    31,    -1,   284,    -1,
     278,    -1,   100,    -1,   179,    -1,    -1,   139,    -1,    36,
      -1,   140,    -1,   180,    -1,   170,    -1,   148,    -1,   114,
      -1,    -1,   103,    -1,   291,    -1,    -1,   103,    -1,    24,
      -1,    25,    -1,    -1,   296,    -1,   181,    -1,    -1,    16,
      -1,   175,    -1,    -1,   173,    -1,   205,    -1,    -1,    65,
      -1,    51,    -1,   108,    -1,    90,    -1,   389,    -1,    27,
      -1,    54,    -1,    -1,     4,    -1,    87,    -1,   165,    -1,
     249,    -1,   250,    -1,   264,    -1,   311,    -1,    -1,    33,
      -1,   314,    -1,   206,    -1,    -1,   222,    -1,    43,    -1,
      44,    -1,   190,    -1,   191,    -1,   341,   427,    -1,    49,
     424,    -1,    79,   425,    -1,   163,   426,    -1,   208,   592,
      -1,    38,   593,    -1,   293,   422,    -1,   283,   393,    -1,
     315,     4,    -1,   323,   393,    -1,   395,    -1,    18,   393,
      -1,   313,   393,    -1,   228,   423,    -1,   395,    -1,   313,
     393,    -1,   395,    -1,    69,     5,    -1,   395,    -1,    69,
       5,    -1,   395,    -1,    69,     5,    -1,   393,   393,    -1,
     251,   393,   393,   393,   393,   393,    -1,    11,   429,    -1,
      76,     5,     5,     5,    -1,   106,     4,    -1,   128,   430,
      -1,   147,   431,    -1,    56,   300,     4,    -1,   327,   432,
      -1,   132,     5,    -1,    62,    -1,   393,   393,    -1,   393,
      -1,   393,   393,    -1,   393,    11,   393,   393,    -1,   393,
     393,    11,   393,   393,    -1,   327,   393,    -1,   327,   393,
     393,    -1,   327,   393,    11,   393,   393,    -1,   327,   393,
     393,    11,   393,   393,    -1,    33,    -1,   314,    -1,   135,
      -1,   393,   393,    11,    62,     5,     5,     5,    -1,   393,
     393,     4,   393,   393,    11,    62,     5,     5,     5,     5,
      -1,   393,   393,    11,   393,   393,     5,     5,     5,    -1,
     393,   393,     4,   393,   393,    11,   393,   393,     5,     5,
       5,     5,    -1,   393,    -1,   393,   393,    -1,   327,   434,
      -1,   135,    -1,   393,    -1,   393,   393,    -1,   286,   436,
      -1,   215,   437,    -1,   209,   438,    -1,   338,   393,   393,
      -1,   338,   221,   221,    -1,   383,   439,    -1,   258,   395,
      -1,   151,    -1,   196,    -1,   393,    -1,   209,    -1,   383,
      -1,   382,    -1,   338,    -1,     4,   409,    -1,   215,   409,
      -1,   278,     4,    -1,   270,    -1,   393,     4,     4,    -1,
      83,   393,    -1,   278,     4,    -1,   192,     4,    -1,     4,
     393,   393,     4,     4,    -1,   274,   393,   393,   393,   393,
     393,   393,     4,     4,    -1,   168,   393,   393,   393,   393,
     393,   393,     4,     4,    -1,   169,   393,   393,   393,   393,
     393,   393,     4,     4,    -1,   217,     4,     4,     5,     5,
       5,     4,    -1,    41,    -1,   216,   441,    -1,   119,    -1,
       4,   393,   393,     4,     4,    -1,   274,   393,   393,   393,
     393,   393,   393,     4,     4,    -1,   168,   393,   393,   393,
     393,   393,   393,     4,     4,    -1,   169,   393,   393,   393,
     393,   393,   393,     4,     4,    -1,   217,     4,     4,     5,
       5,     5,     4,    -1,   408,    -1,   197,   393,    -1,    88,
     444,    -1,    98,     4,     4,    -1,   105,   445,    -1,   195,
     446,    -1,   244,   450,    -1,   281,   451,    -1,     5,     4,
       4,   449,     4,     4,   408,   393,   447,   448,   393,   393,
       5,    -1,     5,     4,     4,   449,     4,     4,   408,   393,
     393,   448,   393,   393,     5,    -1,     5,     4,     4,   449,
       4,     4,   408,   393,   447,   393,   393,     5,    -1,     5,
       4,     4,   449,     4,     4,   408,   393,   393,   393,   393,
       5,    -1,   253,    -1,    -1,    32,    -1,     5,    -1,     5,
       5,     4,   395,    -1,     5,     4,   395,     5,   403,   410,
      -1,   209,    -1,   383,    -1,   382,    -1,   338,    -1,   151,
      -1,   196,    -1,   303,    -1,    48,    -1,     5,    -1,     5,
       5,     4,   395,    -1,     5,     5,     4,   395,     4,     4,
      -1,     5,   403,   410,    -1,    32,     5,   403,   410,    -1,
      -1,   393,   393,   393,   393,   403,   410,    -1,    62,   402,
     403,   410,   393,   393,   403,   412,    -1,   322,   453,    -1,
      41,   393,   393,    -1,   216,   393,   393,    -1,   119,   393,
     393,    -1,    -1,   393,   393,   403,   410,    -1,    41,   393,
     393,     4,    -1,   216,   393,   393,     4,    -1,   119,   393,
     393,     4,    -1,   405,   393,   393,    -1,   403,   410,   402,
      -1,   395,    -1,   346,   393,   393,    -1,    41,   216,   405,
     393,   393,    -1,   216,   405,   393,   393,    -1,    41,   216,
     403,   402,    -1,   216,   403,   402,    -1,    34,     4,    -1,
      -1,    33,    -1,   314,    -1,   206,    -1,   393,    -1,    67,
      -1,   158,   126,     5,    -1,    -1,    42,    69,    -1,    45,
     462,    -1,    48,   464,    -1,    68,   465,    -1,    73,   469,
      -1,    72,   468,    -1,    74,   471,    -1,    82,   473,    -1,
      84,   476,    -1,    89,   477,    -1,    91,   478,    -1,    93,
     480,    -1,    92,   479,    -1,    99,   481,    -1,   101,    -1,
     136,   485,    -1,   154,   491,    -1,   163,    69,    -1,   165,
       5,     5,     4,    -1,   166,    94,   460,    -1,   168,   499,
      -1,   169,   498,    -1,   172,   483,    -1,   176,   482,    -1,
     178,    15,    -1,   209,    -1,   204,   559,   553,    -1,   205,
     493,    -1,   184,   492,    -1,   217,   497,    -1,   221,    69,
      -1,   239,    -1,   241,   495,    -1,   248,   317,   405,   393,
     393,     4,     4,     5,    -1,   274,   496,    -1,   276,    -1,
     303,   500,    -1,   321,    -1,   322,   501,    -1,   331,    -1,
     339,   405,   393,   393,    -1,   345,    94,   461,    -1,   347,
     508,    -1,   385,    -1,     5,     5,   393,   393,   405,     4,
     456,    -1,     5,     5,   393,   393,   403,   410,     4,   456,
      -1,     5,     5,   393,   393,   405,     4,   456,    -1,     5,
       5,   393,   393,   403,   410,     4,   456,    -1,   106,    -1,
     128,    -1,   147,    -1,    56,   300,    -1,    93,    -1,   132,
      -1,    76,   463,    -1,   194,    -1,    -1,   209,     5,    -1,
     110,     5,    -1,   128,    -1,    -1,   447,   448,    -1,   393,
     448,    -1,   286,    -1,   215,    -1,   209,   466,    -1,   338,
     188,    -1,   383,   467,    -1,   258,    -1,   215,    -1,   278,
      -1,    83,    -1,   278,    -1,   192,    -1,    -1,   318,    -1,
     188,   470,    -1,     4,    -1,     4,   405,   393,   393,    -1,
       4,   393,   393,   408,   393,    -1,    -1,   188,   472,    -1,
     197,    -1,     4,   393,   393,   408,   393,    -1,   403,   410,
      -1,    68,   474,    -1,    69,    -1,    97,    -1,    98,    -1,
     188,    -1,   233,   188,    -1,   208,    -1,    74,   475,    -1,
     303,    -1,   376,    -1,    -1,   215,    -1,   286,    -1,    -1,
     197,    -1,   393,   393,   403,   410,   411,    -1,   405,   393,
     393,   403,   410,   411,    -1,   403,   410,   411,    -1,    62,
     403,   410,   411,   403,   412,    -1,   322,   403,   410,    -1,
     405,    -1,   403,   410,   411,    -1,   312,    -1,    34,    -1,
     405,    -1,   403,   410,   411,    -1,   403,   410,   402,   393,
     393,     5,    -1,     4,   403,   410,   402,   393,   393,     5,
      -1,   405,   393,   393,     4,     4,    -1,     5,   396,    -1,
      68,    -1,   405,   393,   393,     5,   396,    -1,     4,     4,
       4,     4,    -1,    93,    -1,   130,   220,   484,    -1,    -1,
       4,    -1,   393,   393,    -1,   223,    -1,    62,   403,   410,
     411,    -1,    86,    -1,   106,   488,    -1,    46,    -1,   126,
     486,    -1,   130,   220,   489,    -1,   160,   487,    -1,   161,
      -1,   234,   220,    -1,   300,    -1,   300,   403,   410,   412,
      -1,   301,   490,    -1,   376,    -1,     4,    -1,   405,   393,
     393,    -1,     4,    -1,   182,     5,    -1,     4,   182,     5,
      -1,   347,     4,    -1,    -1,     4,    -1,   396,    -1,   396,
     405,   393,   393,    -1,   396,     4,    -1,    -1,     4,    -1,
     144,   173,   403,    -1,   144,   173,     4,   403,    -1,   327,
     173,   393,   403,    -1,    -1,   238,    -1,   340,    -1,    86,
      -1,   185,    -1,    69,   494,    -1,    47,   494,    -1,   326,
     494,    -1,   341,   494,    -1,    69,    -1,   203,    -1,   266,
      -1,   316,    -1,   326,    -1,    86,    -1,    47,    -1,    -1,
       4,    -1,   258,    -1,    64,    -1,   316,    -1,   341,    -1,
     316,    -1,    64,    -1,   316,    -1,   341,    -1,    64,    -1,
     316,    -1,   341,    -1,   147,    -1,   265,    -1,   265,   210,
      -1,   298,    -1,   298,   210,    -1,    21,    -1,   341,   507,
      -1,    49,   504,    -1,    79,   505,    -1,   163,   506,    -1,
     208,    -1,    38,    -1,   293,   502,    -1,   283,    -1,    -1,
      18,    -1,   313,    -1,   228,   503,    -1,    -1,   313,    -1,
      -1,    69,    -1,    -1,    69,    -1,    -1,    69,    -1,    -1,
     251,    -1,    -1,    15,   509,    -1,   220,   404,    -1,    -1,
     252,    -1,    88,   511,    -1,   105,    -1,   403,   410,   411,
     512,     5,     5,    -1,   403,   410,   411,   512,     5,    -1,
      20,    -1,   261,    -1,    19,    -1,    42,    69,    -1,    45,
     514,    -1,    82,   515,    -1,    89,    -1,   100,    -1,   101,
      -1,   107,    -1,   136,   516,    -1,   154,    -1,   172,    -1,
     179,    -1,   204,   517,    -1,   247,    -1,   173,    -1,   303,
      -1,   316,   403,    -1,   347,   518,    -1,    77,     5,    -1,
      -1,    32,    -1,    -1,    45,    -1,    92,    -1,   214,    -1,
     163,    -1,   289,    -1,   244,    -1,   332,    -1,   403,    -1,
      61,   403,    -1,   123,   403,    -1,   193,   403,    -1,    17,
      -1,   322,   403,    -1,   224,     4,     4,    -1,   124,    -1,
     207,     5,    -1,    93,   521,    -1,   290,   130,   220,   520,
      -1,   290,     4,     4,     4,     4,    -1,   336,    -1,   347,
     393,   393,   393,   393,   393,   393,   393,   393,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    59,    -1,     4,
       4,   403,    -1,   215,   395,    -1,    26,   523,    -1,   120,
     525,    -1,   136,   526,    -1,   175,   539,    -1,   232,   537,
      -1,   246,   538,    -1,     5,    13,     5,   415,    -1,     5,
      14,     5,   415,    -1,     5,    64,     5,   415,    -1,     5,
     212,   415,    -1,     5,   213,   415,    -1,     5,   294,   413,
       4,   415,    -1,     5,   305,     4,   415,    -1,     5,   306,
       4,   415,    -1,     5,   340,     5,   415,    -1,   274,    92,
     524,    -1,   169,    92,   524,    -1,   168,    92,   524,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    64,
       5,    -1,     5,   212,    -1,     5,   213,    -1,     5,   294,
     413,     4,    -1,     5,   305,     4,    -1,     5,   306,     4,
      -1,     5,   340,     5,    -1,     5,     5,   302,    -1,     5,
      13,     5,   415,    -1,     5,    14,     5,   415,    -1,     5,
      64,     5,   415,    -1,     5,   212,   414,   415,    -1,     5,
       5,   302,   414,   415,    -1,     5,   213,   414,   415,    -1,
       5,   294,   413,     4,   414,   415,    -1,     5,   310,   413,
       4,     4,   414,   415,    -1,     5,   305,     4,   415,    -1,
       5,   306,     4,   415,    -1,     5,   340,     5,   414,   415,
      -1,   301,   527,    -1,   126,    92,   528,    -1,   274,   173,
     536,    -1,   274,    92,   535,    -1,   169,   173,   536,    -1,
     169,    92,   535,    -1,   168,   173,   536,    -1,   168,    92,
     535,    -1,   214,   529,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    64,     5,    -1,     5,   212,   414,
      -1,     5,     5,   302,   414,    -1,     5,   213,   414,    -1,
       5,   294,   413,     4,   414,    -1,     5,   310,   413,     4,
       4,   414,    -1,     5,   305,     4,    -1,     5,   306,     4,
      -1,     5,   340,     5,   414,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    64,     5,    -1,     5,   212,
     414,    -1,     5,   213,   414,    -1,     5,   294,   413,     4,
     414,    -1,     5,   305,     4,    -1,     5,   306,     4,    -1,
       5,   340,     5,   414,    -1,   173,   178,   530,    -1,   178,
     531,    -1,   173,   532,    -1,   534,    -1,   173,   375,   533,
      -1,     5,    13,     5,   415,    -1,     5,    14,     5,   415,
      -1,     5,    64,     5,   415,    -1,     5,   212,   414,   415,
      -1,     5,   213,   414,   415,    -1,     5,   294,   413,     4,
     414,   415,    -1,     5,   305,     4,   415,    -1,     5,   306,
       4,   415,    -1,     5,   340,     5,   414,   415,    -1,     5,
      13,     5,   415,    -1,     5,    14,     5,   415,    -1,     5,
      64,     5,   415,    -1,     5,   212,   414,   415,    -1,     5,
       5,   302,   414,   415,    -1,     5,   213,   414,   415,    -1,
       5,   294,   413,     4,   414,   415,    -1,     5,   310,   413,
       4,     4,   414,   415,    -1,     5,   305,     4,   415,    -1,
       5,   306,     4,   415,    -1,     5,   340,     5,   414,   415,
      -1,   404,     5,    13,     5,   415,    -1,   404,     5,    14,
       5,   415,    -1,   404,     5,    64,     5,   415,    -1,   404,
       5,   212,   414,   415,    -1,   404,     5,   213,   414,   415,
      -1,   404,     5,   294,   413,     4,   414,   415,    -1,   404,
       5,   305,     4,   415,    -1,   404,     5,   306,     4,   415,
      -1,   404,     5,   340,     5,   414,   415,    -1,     5,    13,
       5,   415,    -1,     5,    14,     5,   415,    -1,     5,    64,
       5,   415,    -1,     5,   212,   414,   415,    -1,     5,   213,
     414,   415,    -1,     5,   294,   413,     4,   414,   415,    -1,
       5,   305,     4,   415,    -1,     5,   306,     4,   415,    -1,
       5,   340,     5,   414,   415,    -1,   404,     5,    13,     5,
     415,    -1,   404,     5,    14,     5,   415,    -1,   404,     5,
      64,     5,   415,    -1,   404,     5,   212,   414,   415,    -1,
     404,     5,     5,   302,   414,   415,    -1,   404,     5,   213,
     414,   415,    -1,   404,     5,   294,   413,     4,   414,   415,
      -1,   404,     5,   310,   413,     4,     4,   414,   415,    -1,
     404,     5,   305,     4,   415,    -1,   404,     5,   306,     4,
     415,    -1,   404,     5,   340,     5,   414,   415,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    64,     5,
      -1,     5,   212,   414,    -1,     5,     5,   302,   414,    -1,
       5,   213,   414,    -1,     5,   294,   413,     4,   414,    -1,
       5,   310,   413,     4,     4,   414,    -1,     5,   305,     4,
      -1,     5,   306,     4,    -1,     5,   340,     5,   414,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    64,
       5,    -1,     5,   212,   414,    -1,     5,   213,   414,    -1,
       5,   294,   413,     4,   414,    -1,     5,   305,     4,    -1,
       5,   306,     4,    -1,     5,   340,     5,   414,    -1,     5,
      13,     5,   415,    -1,     5,    64,     5,   415,    -1,     5,
     212,   415,    -1,     5,   294,   413,     4,   415,    -1,     5,
     305,     4,   415,    -1,     5,   340,     5,   415,    -1,     5,
       5,    -1,   301,     5,     5,    -1,    99,     4,     4,     4,
       4,     4,    -1,   209,     4,     4,     4,     4,     4,    -1,
     119,    -1,   257,    -1,   395,    -1,   152,   395,    -1,    93,
     395,    -1,    69,     5,    -1,     5,     4,     4,    -1,   336,
     393,   393,    -1,   385,   393,    -1,     5,     5,   404,   410,
       5,     5,   404,   410,   393,   404,   412,     5,    -1,    63,
     546,    -1,    69,     5,    -1,    85,    -1,    78,   552,     5,
      -1,    78,   552,   340,     5,    -1,    80,   105,    -1,    -1,
      88,   544,   547,    -1,    94,    -1,   105,   550,    -1,   113,
     551,    -1,   122,     4,    -1,   141,     5,    -1,   163,    16,
      -1,   163,   237,   393,   393,    -1,   163,   328,   393,   393,
      -1,     4,    20,   418,   395,    -1,    20,   311,    58,     5,
      -1,    20,   311,    58,    -1,     4,    21,   398,    -1,     4,
      21,   398,   405,    -1,     4,    21,   398,   403,   410,    -1,
       4,    22,   265,   393,   393,     4,   403,   412,    -1,     4,
      22,   265,     5,   403,   412,    -1,     4,    52,   265,   393,
     393,   393,     4,   403,   412,    -1,     4,    52,   265,     5,
     403,   412,    -1,     4,    51,   265,   393,   393,   403,   412,
      -1,     4,    55,   113,   398,   398,     4,   393,   393,   393,
       4,    -1,     4,    55,   113,   398,   398,     4,   393,   393,
     393,     4,   405,    -1,     4,    55,   113,   398,   398,     4,
     393,   393,   393,     4,   403,   410,    -1,     4,    55,   113,
       5,     5,   403,   410,   403,   412,    -1,     4,    58,   545,
       5,     5,    -1,     4,    65,   265,   393,   403,   412,    -1,
       4,    69,     5,    -1,     4,    79,    27,   395,   395,    -1,
       4,    79,   183,     5,     5,    -1,     4,    79,   265,   393,
     403,   412,    -1,     4,    79,   316,   403,   410,    -1,     4,
      80,   151,   395,    -1,     4,    80,    28,   395,    -1,     4,
      80,   331,     5,    -1,     4,    87,   113,   398,   398,     4,
     393,   393,     4,    -1,     4,    87,   113,   398,   398,     4,
     393,   393,     4,   405,    -1,     4,    87,   113,   398,   398,
       4,   393,   393,     4,   403,   410,    -1,     4,    87,   113,
       5,     5,   403,   410,   403,   412,    -1,     4,    88,    22,
     265,   393,   393,    -1,     4,    88,    52,   265,   393,   393,
      -1,     4,    88,    55,    21,   393,   393,    -1,     4,    88,
      55,   265,   393,   393,    -1,     4,    88,   118,   265,   393,
     393,    -1,     4,    88,   121,    21,   393,   393,    -1,     4,
      88,   121,   265,   393,   393,    -1,     4,    88,    87,    21,
     393,   393,    -1,     4,    88,    87,   265,   393,   393,    -1,
       4,    88,   253,   344,     4,   393,   393,    -1,     4,    88,
     288,   344,     4,   393,   393,    -1,     4,   105,    -1,     4,
     105,    22,     4,    -1,     4,   105,    52,     4,    -1,     4,
     105,    55,     4,    -1,     4,   105,   118,     4,    -1,     4,
     105,    58,   545,     5,    -1,     4,   105,   121,     4,    -1,
       4,   105,    87,     4,    -1,     4,   105,   253,   344,     4,
      -1,     4,   105,   288,   344,     4,    -1,     4,   105,   318,
      -1,     4,   105,   318,     5,    -1,     4,   105,   318,     4,
      -1,     4,   113,    41,     4,    -1,     4,   117,   265,   393,
     393,   403,   412,    -1,     4,   118,   265,   393,   393,   393,
       4,   403,   412,    -1,     4,   118,   265,     5,   403,   412,
      -1,     4,   121,   113,   398,   398,     4,   393,   393,   393,
       4,    -1,     4,   121,   113,   398,   398,     4,   393,   393,
     393,     4,   405,    -1,     4,   121,   113,   398,   398,     4,
     393,   393,   393,     4,   403,   410,    -1,     4,   121,   113,
       5,     5,   403,   410,   403,   412,    -1,     4,   141,     5,
      -1,     4,   163,    -1,     4,   163,   237,    -1,     4,   192,
      27,   395,   395,    -1,     4,   192,   251,   403,   410,   402,
     402,    -1,     4,   219,   393,   393,    -1,     4,   219,   145,
      -1,     4,   219,    37,    -1,     4,   219,   327,   403,   410,
     402,    -1,     4,   253,   251,   403,   410,   411,     5,    -1,
       4,   253,   251,   403,   410,   411,   340,     5,    -1,     4,
     253,   271,   393,   393,   403,   412,    -1,     4,   288,   271,
     393,   393,   403,   412,    -1,     4,   251,   292,   416,    -1,
       4,   251,   300,     4,    -1,     4,   259,   403,   410,   402,
     402,   393,   403,   412,    -1,     4,   260,   565,   395,    -1,
       4,   276,    41,    -1,     4,   277,   142,     5,    -1,     4,
     277,   251,   403,   410,   402,   402,    -1,     4,   277,   316,
     403,   410,   403,   412,    -1,     4,   289,    -1,     4,   289,
     237,    -1,     4,   318,     5,    -1,     4,   320,     5,    -1,
       4,   320,   276,   395,    -1,     4,   333,    -1,     4,   335,
      -1,     4,   342,    27,   395,    -1,     4,   342,   251,   403,
     410,   402,   403,   412,   393,   398,    -1,     4,   376,     4,
      -1,     4,    98,     4,     4,    -1,   181,    -1,   181,   393,
     393,    -1,   194,   560,    -1,   195,   561,    -1,   219,   562,
      -1,   258,   395,    -1,   260,   565,   395,    -1,   260,   565,
     395,   393,   393,    -1,   276,    41,   393,   393,    -1,   276,
     216,   393,   393,     4,    -1,   276,   119,    -1,   281,   569,
      -1,   289,   570,    -1,   297,   571,    -1,     5,    69,     5,
      -1,     5,    85,    -1,     5,   105,    -1,     5,    94,    -1,
       5,   141,     5,    -1,     5,   163,    -1,     5,   163,   237,
      -1,     5,   219,   393,   393,    -1,     5,   219,   145,    -1,
       5,   219,    37,    -1,     5,   219,   327,   403,   410,   402,
      -1,     5,   260,   565,   395,    -1,     5,   289,    -1,     5,
     289,   237,    -1,     5,   333,    -1,     5,   335,    -1,   318,
     113,     5,     5,    -1,   318,   105,     5,    -1,   318,   105,
      16,    -1,   318,     5,    -1,   318,   336,     5,    -1,   244,
      -1,   244,   403,    -1,   332,    -1,   333,    16,    -1,   335,
      16,    -1,   376,     4,    -1,    98,     4,     4,    -1,   289,
      -1,   335,    -1,   163,    -1,   333,    -1,    41,   219,    -1,
     219,    -1,   119,   219,    -1,    41,   113,    -1,   113,    -1,
     119,   113,    -1,    41,   276,    -1,   276,    -1,   119,   276,
      -1,   105,    -1,   320,    -1,    69,    -1,   376,    -1,   260,
      -1,   141,    -1,   181,    -1,   336,    -1,    -1,     4,    -1,
      31,   395,    -1,   265,   393,    -1,   177,     4,    -1,   238,
       4,   393,    -1,    65,   393,   393,   393,   566,    -1,   117,
     393,   393,   393,   393,   397,   566,    -1,    51,   393,   393,
     393,   393,   397,   566,    -1,   253,   393,   393,   393,   393,
     566,    -1,   288,   393,   393,   393,   393,   566,    -1,   192,
     393,   393,   393,   393,   566,    -1,   342,   393,   393,   393,
     393,   566,    -1,   320,   393,   393,   397,   566,    -1,    65,
     251,   393,   393,   417,   566,    -1,    51,   251,   393,   393,
     417,   566,    -1,   108,   251,   393,   393,   417,   566,    -1,
      90,   251,   393,   393,   417,   566,    -1,   389,   251,   393,
     393,   417,   566,    -1,    27,   251,   393,   393,   417,   566,
      -1,    54,   251,   393,   393,   417,   566,    -1,   277,   393,
     393,   393,   393,   403,   410,   403,   412,     5,   566,    -1,
      79,   393,   393,   393,   403,   410,   566,    -1,   259,   393,
     393,   393,   393,   393,   566,    -1,    22,   393,   393,   393,
     393,     4,   566,    -1,   118,   393,   393,   393,   393,   393,
       4,   397,   566,    -1,    52,   393,   393,   393,   393,   393,
       4,   397,   566,    -1,    87,   393,   393,   398,   398,     4,
     393,   393,     4,   566,    -1,   121,   393,   393,   398,   398,
       4,   393,   393,   393,     4,   397,   566,    -1,    55,   393,
     393,   398,   398,     4,   393,   393,   393,     4,   397,   566,
      -1,    80,   548,   566,    -1,   319,   549,    -1,    -1,     4,
      -1,     5,   393,   393,    -1,   340,     5,   393,   393,    -1,
     393,   393,   340,     5,    -1,     5,   403,   410,   402,    -1,
      -1,   289,    -1,    16,    -1,    41,   393,   393,     4,    -1,
     216,   393,   393,     4,    -1,   119,    -1,   112,    -1,   378,
      -1,    66,    -1,   280,    -1,   279,    -1,   262,    -1,   379,
      -1,    63,   554,    -1,    69,    -1,   141,    -1,   122,    -1,
     156,   393,   393,    -1,   171,   393,   393,    -1,     4,    20,
      87,     5,     5,     5,   403,     4,    -1,     4,    20,   165,
       5,     5,     4,    -1,     4,    20,   249,     5,     5,     5,
       5,   403,   410,   419,    -1,     4,    20,   250,     5,     5,
     403,   419,    -1,     4,    20,   264,     5,     5,     5,   403,
      -1,     4,    20,   311,   403,   410,    -1,     4,    20,   311,
      99,   403,   410,    -1,    20,   311,    16,    99,   403,   410,
      -1,    20,   311,   386,    -1,   171,    16,    -1,     4,    21,
      -1,     4,    21,   405,    -1,     4,    21,   403,   410,    -1,
       4,    22,   265,   403,   412,    -1,     4,    52,   265,   403,
     412,    -1,     4,    51,   265,   403,   412,    -1,     4,    55,
      21,    -1,     4,    55,    21,   405,    -1,     4,    55,    21,
     403,   410,    -1,     4,    55,   265,   403,   412,    -1,     4,
      62,   403,   410,   411,    -1,     4,    65,   265,   403,   412,
      -1,     4,    69,    -1,     4,    79,    27,    -1,     4,    79,
     183,    -1,     4,    79,   265,   403,   412,    -1,     4,    79,
     316,    -1,     4,    80,   151,    -1,     4,    80,    28,    -1,
       4,    80,   331,    -1,     4,    87,    21,    -1,     4,    87,
      21,   405,    -1,     4,    87,    21,   403,   410,    -1,     4,
      87,   265,   403,   412,    -1,     4,   117,   265,   403,   412,
      -1,     4,   118,   265,   403,   412,    -1,     4,   121,    21,
      -1,     4,   121,    21,   405,    -1,     4,   121,    21,   403,
     410,    -1,     4,   121,   265,   403,   412,    -1,     4,   141,
      -1,     4,   163,    -1,     4,   192,    27,    -1,     4,   192,
     187,   403,   412,    -1,     4,   192,   251,   403,   410,   411,
      -1,     4,   202,   187,   393,   403,   412,    -1,     4,   251,
     292,    -1,     4,   251,   300,    -1,     4,   253,   251,   403,
     410,   411,    -1,     4,   259,   251,   403,   410,   411,    -1,
       4,   259,   187,   403,   412,    -1,     4,   259,   324,   403,
     412,    -1,     4,   260,    -1,     4,   260,   565,    -1,     4,
     277,   142,    -1,     4,   277,   187,   403,   412,    -1,     4,
     277,   251,   403,   410,   411,    -1,     4,   277,   316,    -1,
       4,   289,    -1,     4,   318,    -1,     4,   318,     4,    -1,
       4,   320,    -1,     4,   320,   276,    -1,     4,   331,    -1,
       4,   342,    27,    -1,     4,   342,   187,   403,   412,    -1,
       4,   342,   251,   403,   410,   411,    -1,     4,   376,    -1,
       4,    98,    -1,   163,   555,    -1,   163,   233,    -1,   233,
      -1,   253,   288,   393,   393,    -1,   288,   288,   393,   393,
      -1,   258,    -1,   260,   565,    -1,   289,   556,    -1,   289,
     233,    -1,   297,   557,    -1,     5,    69,    -1,     5,   141,
      -1,     5,   171,    -1,     5,   260,   565,    -1,     5,   318,
      -1,     5,   318,   233,    -1,   318,    16,    -1,   318,   104,
     220,    -1,   376,    -1,    98,    -1,    31,    -1,   265,    -1,
     177,    -1,   238,    -1,    -1,   393,   393,    -1,    -1,   393,
     393,    -1,    -1,   320,    -1,    -1,    -1,   252,    -1,   267,
      -1,   338,    -1,    60,    -1,   143,    -1,   552,   403,   410,
     411,   395,   567,   574,    -1,   289,   552,   403,   410,   411,
     395,   567,   574,    -1,   552,     5,    -1,   552,     5,     4,
       5,   403,   410,    -1,   552,     4,    -1,   552,     4,     4,
       5,   403,   410,    -1,   136,     5,    -1,   136,     5,     5,
      -1,   393,   393,    -1,   145,    -1,    37,    -1,    41,   393,
     393,    -1,   216,   393,   393,    -1,   119,    -1,   327,   403,
     410,   402,    -1,   563,   564,    -1,   564,    -1,   565,   390,
     395,    -1,    69,   390,     5,    -1,    98,   390,     4,     4,
      -1,   376,   390,     4,    -1,   141,   390,     5,    -1,   320,
     390,     5,    -1,   577,    -1,   578,    -1,   227,    -1,   289,
      -1,   163,    -1,    97,    -1,   138,    -1,   113,    -1,   219,
      -1,   276,    -1,   105,    -1,   174,    -1,   307,    -1,   131,
      -1,   558,    -1,   558,   563,    -1,    -1,    -1,   568,   572,
      -1,     5,   552,   403,   410,   411,   395,    -1,   289,     5,
     552,   403,   410,   411,   395,    -1,   319,     5,    -1,    16,
      -1,   237,   393,   393,    -1,   328,    -1,   328,   393,   393,
      -1,   133,    -1,   186,    -1,   395,    -1,   320,   395,    -1,
     572,   573,    -1,   573,    -1,   565,   390,   395,    -1,    -1,
      -1,   575,   576,    -1,   576,   577,    -1,   577,    -1,   318,
     390,     5,    -1,    58,   390,   545,     5,     5,    -1,    -1,
      88,    -1,     4,    -1,   185,     4,    -1,    69,     5,    -1,
       4,    69,     5,    -1,    47,   407,    -1,     4,    47,   407,
      -1,   326,   393,    -1,     4,   326,   393,    -1,   341,   395,
      -1,     4,   341,   395,    -1,   297,    -1,     4,   297,    -1,
     162,    -1,     4,   162,    -1,   105,    -1,     4,   105,    -1,
     337,    -1,     4,   337,    -1,   111,    -1,     4,   111,    -1,
     325,    -1,     4,   325,    -1,    50,    -1,     4,    50,    -1,
      67,    -1,    69,     5,    -1,   203,   406,    -1,   266,   393,
     393,    -1,   316,   403,    -1,   326,   393,    -1,    47,   407,
      -1,   203,     4,    -1,   389,    -1,   387,    -1,   379,    -1,
     227,    -1,   393,   393,   393,   393,    -1,   393,   393,    -1,
     405,   393,   393,    -1,   403,   410,   402,    -1,   327,   583,
      -1,    40,   393,   393,    -1,   216,   584,    -1,   258,   395,
      -1,   393,   393,    -1,   405,   393,   393,    -1,   403,   410,
     402,    -1,    41,   393,   393,    -1,   393,   393,    -1,   119,
     393,   393,    -1,   395,    -1,   347,   404,   410,    -1,     5,
       4,     4,    -1,   336,    -1,    75,   588,    -1,   188,     4,
      -1,   272,     4,    -1,   283,   393,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    57,    -1,   153,    -1,   274,    -1,
      95,    -1,   163,   590,    -1,   289,   591,    -1,    41,   393,
     393,    -1,   216,   393,   393,    -1,   119,    -1,   295,   119,
      -1,    41,   393,   393,    -1,   216,   393,   393,    -1,   119,
      -1,   295,   119,    -1,   211,    -1,    12,    -1,   134,    -1,
     227,    -1,    35,    -1,   115,    -1,     4,    -1,    67,    -1,
      64,     5,    -1,   316,   403,    -1,   341,     4,     4,     4,
      -1,   316,   403,    -1,    64,     5,    -1,    64,   167,    -1,
      64,   282,    -1,   316,   403,    -1,   341,     4,     4,     4,
      -1,    64,     5,    -1,    64,   167,    -1,    64,   282,    -1,
      64,   339,    -1,   316,   403,    -1,   341,     4,     4,     4,
      -1,   393,    -1,   393,   103,    -1,   216,   600,    -1,   327,
     393,    -1,   327,   393,   103,    -1,    41,    -1,   393,    -1,
     119,    -1,    26,   603,    -1,   136,   604,    -1,   384,   602,
      -1,   232,   621,    -1,   120,   622,    -1,   246,     5,    -1,
     130,     5,    -1,    64,     5,    -1,   305,     4,    -1,   130,
       5,   420,    -1,    64,     5,   420,    -1,   305,     4,   420,
      -1,   274,    92,   611,    -1,   169,    92,   614,    -1,   168,
      92,   617,    -1,   605,    -1,   173,   605,    -1,   317,   606,
      -1,   301,   607,    -1,   126,    92,   608,    -1,   214,   609,
      -1,   274,   173,   612,    -1,   274,    92,   613,    -1,   169,
     173,   615,    -1,   169,    92,   616,    -1,   168,   173,   618,
      -1,   168,    92,   619,    -1,   269,   620,    -1,   130,     5,
      -1,    64,     5,    -1,   305,     4,    -1,   130,     5,    -1,
      64,     5,    -1,   305,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   305,     4,    -1,   130,     5,    -1,    64,     5,
      -1,   305,     4,    -1,   173,   610,    -1,   130,     5,     4,
      -1,    64,     5,     4,    -1,   305,     4,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   305,     4,    -1,   130,     5,
     420,    -1,    64,     5,   420,    -1,   305,     4,   420,    -1,
     130,     5,    -1,    64,     5,    -1,   305,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   305,     4,    -1,   130,     5,
     420,    -1,    64,     5,   420,    -1,   305,     4,   420,    -1,
     130,     5,    -1,    64,     5,    -1,   305,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   305,     4,    -1,   130,     5,
     420,    -1,    64,     5,   420,    -1,   305,     4,   420,    -1,
     130,     5,    -1,    64,     5,    -1,   305,     4,    -1,   130,
       5,    -1,    64,     5,    -1,   305,     4,    -1,   130,     5,
      -1,    64,     5,    -1,   305,     4,    -1,   130,     5,   420,
      -1,    64,     5,   420,    -1,   305,     4,   420,    -1,   130,
       5,     5,   420,    -1,   624,     4,     4,   393,   393,   398,
      -1,   624,     4,    -1,   105,    -1,    53,    -1,   329,    -1,
     149,    -1,   116,    -1,    -1,     4,   393,   393,   393,   393,
      -1,   231,    -1,   231,     4,   393,   393,   393,   393,    -1,
     136,   301,   626,    -1,     4,    -1,     4,     4,    -1,   393,
     403,    -1,   393,   393,    -1,   327,   393,   393,    -1,   404,
     410,   411,    -1,    15,   631,    -1,   271,     4,    -1,   268,
     630,    -1,    23,   629,    -1,     4,     4,    -1,     4,     5,
      -1,   320,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   320,     4,     5,    -1,     4,    -1,     4,   404,   410,
      -1,   327,     4,   404,   410,    -1,   252,    67,    -1,   257,
      -1,   393,   393,    -1,   393,   393,    11,   393,   393,    -1,
     393,   393,    11,   405,   393,   393,    -1,   393,   393,    11,
     403,   410,   402,    -1,   327,   634,    -1,   135,    -1,   135,
     393,    -1,   393,   393,    -1,   393,   393,    11,   393,   393,
      -1,   393,   393,    11,   405,   393,   393,    -1,   393,   393,
      11,   403,   410,   402,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   497,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   559,   560,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   576,   578,   579,   580,   581,
     583,   584,   585,   586,   589,   590,   591,   592,   593,   596,
     597,   600,   601,   602,   605,   608,   611,   614,   626,   633,
     640,   648,   649,   650,   651,   652,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   685,   686,   689,   690,   691,   692,
     693,   694,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   716,
     717,   718,   719,   720,   721,   722,   723,   726,   727,   728,
     729,   730,   733,   734,   735,   736,   737,   738,   739,   740,
     743,   744,   745,   748,   749,   750,   751,   754,   755,   756,
     759,   760,   761,   764,   765,   766,   769,   770,   771,   772,
     773,   774,   775,   776,   779,   780,   783,   784,   785,   786,
     787,   788,   791,   792,   793,   794,   797,   798,   799,   800,
     801,   802,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   818,   819,   820,   821,   824,   825,   828,   829,
     832,   833,   836,   837,   840,   841,   845,   846,   847,   848,
     849,   850,   851,   852,   855,   856,   859,   860,   861,   863,
     865,   866,   867,   869,   873,   874,   877,   878,   880,   883,
     885,   891,   892,   893,   896,   897,   898,   901,   902,   903,
     904,   905,   906,   907,   913,   914,   917,   918,   919,   920,
     921,   924,   925,   926,   927,   930,   931,   936,   941,   948,
     950,   952,   954,   956,   958,   959,   960,   963,   965,   967,
     969,   971,   974,   975,   978,   979,   980,   981,   982,   983,
     986,   989,   992,   998,  1004,  1007,  1008,  1011,  1012,  1013,
    1020,  1021,  1022,  1023,  1026,  1027,  1030,  1031,  1034,  1035,
    1036,  1040,  1042,  1046,  1047,  1050,  1052,  1053,  1054,  1055,
    1058,  1059,  1061,  1062,  1063,  1066,  1068,  1070,  1071,  1073,
    1075,  1077,  1079,  1083,  1086,  1087,  1088,  1089,  1092,  1093,
    1096,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,  1135,  1136,  1137,  1138,
    1139,  1140,  1141,  1143,  1144,  1145,  1148,  1150,  1154,  1156,
    1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1170,  1171,
    1172,  1175,  1178,  1179,  1181,  1183,  1184,  1185,  1186,  1187,
    1188,  1195,  1196,  1199,  1200,  1201,  1204,  1205,  1208,  1211,
    1212,  1214,  1218,  1219,  1220,  1223,  1227,  1229,  1230,  1231,
    1232,  1233,  1234,  1235,  1236,  1237,  1238,  1241,  1242,  1243,
    1246,  1247,  1250,  1252,  1260,  1262,  1264,  1268,  1269,  1271,
    1274,  1277,  1278,  1282,  1284,  1287,  1292,  1293,  1294,  1298,
    1299,  1300,  1303,  1304,  1305,  1308,  1309,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1322,  1323,  1326,
    1327,  1330,  1331,  1332,  1333,  1336,  1337,  1340,  1342,  1345,
    1349,  1350,  1351,  1353,  1355,  1359,  1360,  1361,  1364,  1365,
    1366,  1367,  1368,  1369,  1372,  1373,  1374,  1375,  1376,  1377,
    1378,  1381,  1382,  1385,  1388,  1389,  1390,  1393,  1396,  1397,
    1398,  1401,  1402,  1403,  1406,  1407,  1408,  1409,  1410,  1411,
    1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1424,  1425,
    1426,  1427,  1430,  1431,  1434,  1435,  1438,  1439,  1442,  1443,
    1446,  1447,  1450,  1451,  1452,  1455,  1456,  1459,  1460,  1463,
    1466,  1474,  1475,  1478,  1479,  1480,  1481,  1482,  1483,  1484,
    1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494,
    1495,  1498,  1501,  1502,  1505,  1506,  1507,  1508,  1511,  1512,
    1513,  1514,  1517,  1518,  1519,  1520,  1521,  1522,  1525,  1526,
    1527,  1528,  1529,  1530,  1532,  1533,  1538,  1539,  1542,  1544,
    1546,  1549,  1550,  1551,  1552,  1553,  1554,  1557,  1559,  1561,
    1563,  1564,  1566,  1568,  1570,  1572,  1574,  1575,  1576,  1579,
    1580,  1581,  1582,  1583,  1584,  1586,  1587,  1588,  1591,  1594,
    1596,  1598,  1600,  1602,  1604,  1606,  1608,  1611,  1613,  1615,
    1617,  1618,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1628,
    1629,  1630,  1631,  1632,  1633,  1634,  1636,  1638,  1639,  1640,
    1643,  1644,  1645,  1646,  1647,  1648,  1650,  1651,  1652,  1655,
    1656,  1657,  1658,  1659,  1662,  1665,  1668,  1671,  1674,  1677,
    1680,  1683,  1686,  1691,  1694,  1697,  1700,  1703,  1706,  1709,
    1712,  1715,  1718,  1721,  1726,  1729,  1732,  1735,  1738,  1741,
    1744,  1747,  1750,  1755,  1757,  1759,  1761,  1763,  1765,  1770,
    1772,  1774,  1778,  1781,  1784,  1787,  1790,  1793,  1796,  1799,
    1802,  1805,  1808,  1813,  1814,  1815,  1816,  1817,  1818,  1819,
    1821,  1823,  1824,  1825,  1828,  1829,  1830,  1831,  1832,  1833,
    1835,  1836,  1837,  1840,  1842,  1844,  1845,  1847,  1849,  1853,
    1854,  1857,  1858,  1859,  1862,  1865,  1866,  1867,  1868,  1869,
    1870,  1871,  1874,  1882,  1883,  1884,  1885,  1887,  1889,  1890,
    1890,  1891,  1892,  1893,  1894,  1895,  1897,  1898,  1900,  1903,
    1905,  1907,  1910,  1911,  1912,  1915,  1918,  1921,  1925,  1928,
    1931,  1934,  1938,  1943,  1948,  1950,  1952,  1953,  1955,  1957,
    1959,  1961,  1962,  1963,  1965,  1967,  1969,  1973,  1978,  1980,
    1982,  1984,  1986,  1988,  1990,  1992,  1994,  1996,  1998,  2001,
    2002,  2004,  2006,  2007,  2009,  2011,  2012,  2013,  2015,  2017,
    2018,  2019,  2021,  2022,  2025,  2029,  2032,  2035,  2039,  2044,
    2050,  2051,  2052,  2054,  2055,  2059,  2061,  2062,  2063,  2066,
    2069,  2072,  2075,  2078,  2080,  2082,  2087,  2090,  2091,  2092,
    2095,  2099,  2100,  2102,  2103,  2104,  2106,  2107,  2109,  2110,
    2115,  2116,  2118,  2119,  2121,  2122,  2123,  2124,  2125,  2126,
    2128,  2130,  2132,  2133,  2134,  2136,  2138,  2139,  2140,  2141,
    2142,  2143,  2144,  2145,  2146,  2147,  2148,  2150,  2152,  2153,
    2154,  2155,  2157,  2158,  2159,  2160,  2161,  2163,  2164,  2165,
    2166,  2167,  2168,  2169,  2172,  2173,  2174,  2175,  2176,  2177,
    2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189,  2190,  2191,  2192,  2195,  2196,  2197,  2198,  2199,
    2200,  2208,  2215,  2224,  2233,  2240,  2247,  2255,  2263,  2270,
    2275,  2280,  2285,  2290,  2295,  2300,  2306,  2316,  2326,  2336,
    2343,  2353,  2363,  2372,  2384,  2397,  2403,  2406,  2407,  2416,
    2418,  2420,  2425,  2429,  2430,  2431,  2437,  2439,  2441,  2444,
    2445,  2446,  2447,  2448,  2449,  2450,  2453,  2454,  2455,  2456,
    2457,  2458,  2460,  2462,  2464,  2466,  2468,  2470,  2472,  2474,
    2476,  2479,  2480,  2481,  2482,  2484,  2487,  2489,  2491,  2492,
    2493,  2495,  2498,  2501,  2503,  2504,  2505,  2506,  2508,  2509,
    2510,  2511,  2512,  2513,  2514,  2516,  2518,  2520,  2523,  2524,
    2525,  2527,  2530,  2531,  2532,  2533,  2535,  2538,  2542,  2543,
    2544,  2547,  2550,  2553,  2555,  2556,  2557,  2558,  2560,  2563,
    2564,  2566,  2567,  2568,  2569,  2570,  2572,  2573,  2575,  2578,
    2579,  2580,  2581,  2582,  2583,  2585,  2587,  2588,  2589,  2590,
    2592,  2594,  2595,  2596,  2597,  2598,  2599,  2601,  2602,  2604,
    2605,  2608,  2609,  2610,  2611,  2614,  2615,  2618,  2619,  2622,
    2623,  2626,  2639,  2640,  2644,  2645,  2649,  2650,  2653,  2657,
    2663,  2665,  2668,  2670,  2673,  2675,  2679,  2680,  2681,  2682,
    2683,  2684,  2685,  2689,  2690,  2693,  2694,  2695,  2696,  2697,
    2698,  2699,  2700,  2703,  2704,  2705,  2706,  2707,  2708,  2709,
    2710,  2711,  2712,  2713,  2714,  2717,  2718,  2721,  2722,  2722,
    2725,  2727,  2729,  2732,  2733,  2734,  2735,  2736,  2737,  2740,
    2741,  2744,  2745,  2748,  2752,  2753,  2753,  2756,  2757,  2760,
    2763,  2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,
    2776,  2777,  2778,  2780,  2781,  2782,  2783,  2784,  2785,  2786,
    2787,  2788,  2789,  2790,  2791,  2792,  2793,  2796,  2797,  2798,
    2799,  2800,  2801,  2802,  2803,  2809,  2810,  2811,  2812,  2815,
    2817,  2818,  2823,  2825,  2826,  2827,  2828,  2831,  2832,  2837,
    2841,  2842,  2843,  2846,  2847,  2852,  2853,  2856,  2858,  2859,
    2860,  2865,  2867,  2873,  2874,  2875,  2876,  2879,  2880,  2883,
    2885,  2887,  2888,  2891,  2893,  2894,  2895,  2898,  2899,  2900,
    2903,  2904,  2905,  2908,  2909,  2912,  2913,  2914,  2917,  2921,
    2922,  2923,  2924,  2925,  2928,  2929,  2930,  2931,  2932,  2933,
    2936,  2937,  2938,  2939,  2940,  2943,  2944,  2945,  2948,  2949,
    2950,  2951,  2952,  2953,  2956,  2957,  2958,  2961,  2963,  2965,
    2967,  2968,  2969,  2972,  2973,  2974,  2975,  2976,  2977,  2978,
    2979,  2980,  2981,  2982,  2983,  2984,  2987,  2988,  2989,  2992,
    2993,  2994,  2997,  2998,  2999,  3002,  3003,  3004,  3007,  3008,
    3009,  3010,  3013,  3014,  3015,  3018,  3020,  3022,  3026,  3027,
    3028,  3031,  3032,  3033,  3036,  3038,  3040,  3044,  3045,  3046,
    3049,  3050,  3051,  3054,  3056,  3058,  3062,  3063,  3064,  3067,
    3068,  3069,  3072,  3073,  3074,  3077,  3079,  3081,  3085,  3089,
    3091,  3096,  3099,  3100,  3101,  3102,  3105,  3106,  3109,  3111,
    3113,  3116,  3117,  3118,  3121,  3122,  3125,  3127,  3128,  3129,
    3130,  3133,  3134,  3135,  3138,  3139,  3140,  3143,  3144,  3149,
    3151,  3154,  3161,  3162,  3164,  3169,  3171,  3174,  3175,  3176,
    3177,  3179,  3184
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
  "RESET_", "RESOLUTION_", "REVEAL_", "RGB_", "ROOT_", "ROTATE_", "RULER_",
  "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_",
  "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_",
  "SET_", "SEXAGESIMAL_", "SHAPE_", "SHADE_", "SHARED_", "SHIFT_",
  "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_",
  "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_",
  "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "STRENGTH_", "SUM_",
  "SYNC_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_",
  "THREED_", "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_",
  "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
  "UNLOAD_", "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_",
  "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_",
  "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_",
  "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_",
  "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_",
  "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_",
  "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_",
  "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug",
  "yesno", "fileNameType", "optangle", "angle", "sexagesimal", "hms",
  "dms", "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
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
  "renderBackground", "reveal", "rgb", "multicolor", "hls", "hsv",
  "rotate", "rotateMotion", "save", "savePixelMask", "saveArray",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveArrayRGBCube", "saveFitsRGBImage", "saveFitsRGBCube",
  "saveArrayHLSCube", "saveFitsHLSImage", "saveFitsHLSCube",
  "saveArrayHSVCube", "saveFitsHSVImage", "saveFitsHSVCube",
  "saveFitsResample", "saveNRRD", "saveENVI", "smooth", "smoothFunction",
  "update", "updateFitsSlice", "warp", "wcs", "wcsAppend", "wcsReplace",
  "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     635,   636,   637,   638,   639,   640,   641,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   391,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   393,   393,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   396,   396,   396,   396,   396,   397,
     397,   398,   398,   398,   399,   400,   401,   402,   402,   402,
     402,   403,   403,   403,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   411,   412,   412,   412,   412,   413,   413,   413,
     414,   414,   414,   415,   415,   415,   416,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   418,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   420,   420,   420,   420,
     420,   420,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   422,   422,   422,   422,   423,   423,   424,   424,
     425,   425,   426,   426,   427,   427,   428,   428,   428,   428,
     428,   428,   428,   428,   429,   429,   430,   430,   430,   430,
     430,   430,   430,   430,   431,   431,   432,   432,   432,   432,
     432,   433,   433,   433,   434,   434,   434,   435,   435,   435,
     435,   435,   435,   435,   436,   436,   437,   437,   437,   437,
     437,   438,   438,   438,   438,   439,   439,   439,   439,   440,
     440,   440,   440,   440,   440,   440,   440,   441,   441,   441,
     441,   441,   442,   442,   443,   443,   443,   443,   443,   443,
     444,   444,   444,   444,   444,   445,   445,   446,   446,   446,
     447,   447,   447,   447,   448,   448,   449,   449,   450,   450,
     450,   451,   451,   452,   452,   452,   452,   452,   452,   452,
     453,   453,   453,   453,   453,   454,   454,   454,   454,   454,
     454,   454,   454,   455,   456,   456,   456,   456,   457,   457,
     458,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   460,   460,   461,   461,
     462,   462,   462,   462,   462,   462,   462,   462,   463,   463,
     463,   464,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   466,   466,   467,   467,   467,   468,   468,   469,   470,
     470,   470,   471,   471,   471,   472,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   474,   474,   474,
     475,   475,   476,   476,   477,   477,   477,   478,   478,   478,
     479,   480,   480,   481,   481,   481,   482,   482,   482,   483,
     483,   483,   484,   484,   484,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   486,
     486,   487,   487,   487,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   490,   490,   491,   491,   491,   492,   492,
     492,   492,   492,   492,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   495,   496,   496,   496,   497,   498,   498,
     498,   499,   499,   499,   500,   500,   500,   500,   500,   500,
     501,   501,   501,   501,   501,   501,   501,   501,   502,   502,
     502,   502,   503,   503,   504,   504,   505,   505,   506,   506,
     507,   507,   508,   508,   508,   509,   509,   510,   510,   511,
     511,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   514,   515,   515,   516,   516,   516,   516,   517,   517,
     517,   517,   518,   518,   518,   518,   518,   518,   519,   519,
     519,   519,   519,   519,   519,   519,   520,   520,   521,   521,
     521,   522,   522,   522,   522,   522,   522,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   525,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   529,
     529,   529,   529,   529,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   533,   533,   533,   533,   533,   533,   533,
     533,   533,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   537,   537,   537,   537,   537,   537,   538,
     538,   539,   539,   539,   540,   541,   541,   541,   541,   541,
     541,   541,   542,   543,   543,   543,   543,   543,   543,   544,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   546,
     546,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   548,   548,   549,
     549,   549,   549,   550,   550,   550,   551,   551,   551,   552,
     552,   552,   552,   552,   552,   552,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   554,   554,   554,   554,   555,   555,   556,   556,   557,
     557,   558,   559,   559,   559,   559,   559,   559,   560,   560,
     561,   561,   561,   561,   561,   561,   562,   562,   562,   562,
     562,   562,   562,   563,   563,   564,   564,   564,   564,   564,
     564,   564,   564,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   566,   566,   567,   568,   567,
     569,   569,   569,   570,   570,   570,   570,   570,   570,   571,
     571,   572,   572,   573,   574,   575,   574,   576,   576,   577,
     578,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   580,   580,   580,
     580,   580,   580,   580,   580,   581,   581,   581,   581,   582,
     582,   582,   582,   582,   582,   582,   582,   583,   583,   583,
     584,   584,   584,   585,   585,   585,   585,   586,   586,   586,
     586,   587,   587,   588,   588,   588,   588,   589,   589,   590,
     590,   590,   590,   591,   591,   591,   591,   592,   592,   592,
     593,   593,   593,   594,   594,   595,   595,   595,   596,   597,
     597,   597,   597,   597,   598,   598,   598,   598,   598,   598,
     599,   599,   599,   599,   599,   600,   600,   600,   601,   601,
     601,   601,   601,   601,   602,   602,   602,   603,   603,   603,
     603,   603,   603,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   605,   605,   605,   606,
     606,   606,   607,   607,   607,   608,   608,   608,   609,   609,
     609,   609,   610,   610,   610,   611,   611,   611,   612,   612,
     612,   613,   613,   613,   614,   614,   614,   615,   615,   615,
     616,   616,   616,   617,   617,   617,   618,   618,   618,   619,
     619,   619,   620,   620,   620,   621,   621,   621,   622,   623,
     623,   623,   624,   624,   624,   624,   625,   625,   625,   625,
     625,   626,   626,   626,   627,   627,   628,   628,   628,   628,
     628,   629,   629,   629,   630,   630,   630,   631,   631,   631,
     631,   632,   633,   633,   633,   633,   633,   634,   634,   634,
     634,   634,   634
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     2,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     2,     6,     2,     4,     2,     2,
       2,     3,     2,     2,     1,     2,     1,     2,     4,     5,
       2,     3,     5,     6,     1,     1,     1,     7,    11,     8,
      12,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     3,     2,     2,     2,     5,
       9,     9,     9,     7,     1,     2,     1,     5,     9,     9,
       9,     7,     1,     2,     2,     3,     2,     2,     2,     2,
      13,    13,    12,    12,     1,     0,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     1,     1,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     3,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     3,     2,     1,     7,     8,     7,     8,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     0,     1,     1,
       0,     1,     5,     6,     3,     6,     3,     1,     3,     1,
       1,     1,     3,     6,     7,     5,     2,     1,     5,     4,
       1,     3,     0,     1,     2,     1,     4,     1,     2,     1,
       2,     3,     2,     1,     2,     1,     4,     2,     1,     1,
       3,     1,     2,     3,     2,     0,     1,     1,     4,     2,
       0,     1,     3,     4,     4,     0,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     2,     1,     0,     1,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     6,
       5,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     2,     3,     1,
       2,     2,     4,     5,     1,    10,     1,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     3,     5,     4,     4,     4,     3,     3,     3,     3,
       3,     3,     2,     2,     4,     3,     3,     3,     3,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       2,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     3,
       2,     2,     1,     3,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     5,     5,     5,     5,     5,     7,
       5,     5,     6,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       5,     5,     6,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     4,     4,     3,     5,     4,     4,     2,
       3,     6,     6,     1,     1,     1,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     1,     3,     4,     2,     0,
       3,     1,     2,     2,     2,     2,     2,     4,     4,     4,
       4,     3,     3,     4,     5,     8,     6,     9,     6,     7,
      10,    11,    12,     9,     5,     6,     3,     5,     5,     6,
       5,     4,     4,     4,     9,    10,    11,     9,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     7,     2,
       4,     4,     4,     4,     5,     4,     4,     5,     5,     3,
       4,     4,     4,     7,     9,     6,    10,    11,    12,     9,
       3,     2,     3,     5,     7,     4,     3,     3,     6,     7,
       8,     7,     7,     4,     4,     9,     4,     3,     4,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,    10,
       3,     4,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     2,     2,     2,     3,     2,     2,     2,
       3,     2,     3,     4,     3,     3,     6,     4,     2,     3,
       2,     2,     4,     3,     3,     2,     3,     1,     2,     1,
       2,     2,     2,     3,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     2,
       3,     5,     7,     7,     6,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,    11,     7,     7,     7,
       9,     9,    10,    12,    12,     3,     2,     0,     1,     3,
       4,     4,     4,     0,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     8,     6,    10,     7,     7,     5,     6,     6,
       3,     2,     2,     3,     4,     5,     5,     5,     3,     4,
       5,     5,     5,     5,     2,     3,     3,     5,     3,     3,
       3,     3,     3,     4,     5,     5,     5,     5,     3,     4,
       5,     5,     2,     2,     3,     5,     6,     6,     3,     3,
       6,     6,     5,     5,     2,     3,     3,     5,     6,     3,
       2,     2,     3,     2,     3,     2,     3,     5,     6,     2,
       2,     2,     2,     1,     4,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     0,     1,     1,     1,     1,     1,     7,     8,
       2,     6,     2,     6,     2,     3,     2,     1,     1,     3,
       3,     1,     4,     2,     1,     3,     3,     4,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     2,
       6,     7,     2,     1,     3,     1,     3,     1,     1,     1,
       2,     2,     1,     3,     0,     0,     2,     2,     1,     3,
       5,     0,     1,     1,     2,     2,     3,     2,     3,     2,
       3,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     2,
       3,     2,     2,     2,     2,     1,     1,     1,     1,     4,
       2,     3,     3,     2,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     9,     6,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     2,     2,
       2,     2,     2,     4,     2,     2,     2,     2,     2,     4,
       1,     2,     2,     2,     3,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     3,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     1,     0,     5,     1,     6,
       3,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     1,     3,     4,
       2,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   343,     0,     0,     0,     0,     0,     0,   371,     0,
       0,    23,     0,     0,     0,     0,     0,  1201,     0,     0,
       0,     0,  1132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1132,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1396,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,   271,     6,     0,     0,     0,     0,     0,
       0,     9,     0,     0,   304,   306,     0,     0,     0,     0,
       0,    11,   164,   166,   159,   160,   161,   165,   162,   163,
     312,    12,     0,     0,   325,     0,     0,     0,    13,     0,
       0,     0,     0,   350,     0,    14,    75,   104,     0,   134,
     103,    83,   101,     0,    80,    82,    78,   135,   102,    79,
       0,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,    76,
      77,    81,   357,   172,   105,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    64,   369,   368,    18,     0,    19,     0,     0,     0,
     432,   446,     0,   452,     0,     0,     0,     0,     0,     0,
       0,   386,     0,   525,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1132,     0,   397,     0,     0,   403,     0,
       0,     0,   407,     0,   409,     0,   411,     0,     0,   582,
     415,    20,     0,   588,    21,   593,     0,     0,   612,   597,
     598,   599,   600,   614,   602,   603,   607,   604,     0,   606,
     608,     0,     0,    22,     0,    24,     0,     0,     0,    26,
       0,     0,     0,    27,     0,   629,     0,     0,     0,   634,
       0,    28,     0,  1203,   142,  1225,     0,  1202,  1217,  1221,
    1215,     0,  1213,  1223,     0,  1219,     0,    36,     0,     0,
       0,     0,     0,     0,    30,   794,    31,     0,     0,     0,
       0,     0,     0,   795,    32,     0,    33,  1136,  1137,  1133,
    1134,  1135,     0,   142,  1227,     0,   136,     0,     0,     0,
      35,     0,    37,     0,  1238,  1237,  1236,  1235,    39,     0,
       0,     0,     0,     0,   172,     0,    40,     0,  1256,     0,
    1253,    41,     0,     0,     0,     0,    44,     0,    43,    42,
       0,  1283,  1284,    47,     0,     0,     0,    48,     0,     0,
    1300,    49,     0,     0,     0,     0,     0,     0,    50,  1392,
    1391,  1395,  1394,  1393,    52,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
    1398,    56,     0,     0,    58,     0,     0,     0,     0,   172,
      59,  1421,    60,     0,     0,    61,     1,     4,     5,   254,
       0,   246,     0,     0,   248,     0,   256,   249,   253,   264,
     265,   250,   266,     0,   252,   274,   275,   273,   272,     0,
       0,   294,     0,   279,   287,   290,   289,   288,   286,   278,
     283,   284,   285,   277,     0,     0,     0,     0,     0,     0,
     282,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     305,     0,     0,   313,     0,   324,   314,     0,   326,   316,
     327,   317,   338,   318,     0,     0,   319,     0,    94,    95,
      96,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   346,     0,     0,     0,     0,     0,   174,   179,
     173,   175,   178,   177,   176,     0,     0,   363,    69,    70,
      71,    72,    73,    65,    66,    67,    74,    68,     0,   372,
       0,   428,   424,   420,   421,   425,   422,   427,   373,   431,
     374,   330,   436,   440,   435,   333,   332,   331,     0,     0,
     375,   447,   377,     0,   376,     0,   454,   378,   467,   458,
     470,   459,   460,   461,   463,     0,   465,   466,   172,   379,
       0,     0,   380,     0,     0,   172,   381,   479,   172,   477,
     382,   480,   384,   172,   481,   383,     0,   172,     0,   385,
     499,     0,   497,   515,     0,     0,     0,   503,   495,     0,
     505,   520,   508,   387,   526,   527,   388,   389,     0,     0,
     551,   552,   553,   392,   548,   549,   550,   393,     0,   490,
       0,   394,    84,   487,     0,   395,   396,   541,   541,   528,
     529,   541,   541,   400,     0,   540,   534,   539,   535,   536,
     537,   538,   399,   547,   401,   402,   543,   404,     0,   544,
     545,   546,   406,   559,   554,   555,   557,   408,   565,   574,
     576,   578,   564,   567,   568,   580,   410,     0,     0,   585,
       0,   414,   172,   587,   594,     0,   595,   613,   596,   615,
     616,   617,   601,   618,   620,   619,   621,   605,   609,   626,
       0,     0,     0,     0,   622,   610,    25,  1294,  1295,  1296,
    1297,  1298,     0,  1289,  1290,  1291,  1292,     0,     0,     0,
     631,   630,     0,     0,     0,     0,    29,   142,  1226,     0,
    1218,  1222,  1216,  1214,  1224,     0,  1220,     0,   157,   150,
     149,   147,   153,   154,   151,   155,   148,   158,   144,   146,
     156,   145,   152,   143,  1207,  1205,  1204,  1209,  1211,     0,
       0,     0,     0,   641,     0,   642,     0,     0,     0,     0,
       0,     0,     0,   643,     0,   793,     0,   644,     0,   645,
       0,     0,   646,     0,   798,   797,   796,     0,   801,     0,
       0,     0,     0,   975,     0,     0,     0,   805,   809,   811,
       0,  1013,     0,     0,     0,     0,   912,     0,     0,     0,
     947,     0,     0,     0,     0,     0,     0,     0,   949,     0,
       0,     0,    34,  1233,  1228,  1234,   139,   140,   138,   141,
     137,  1229,     0,  1231,  1232,  1288,    38,     0,     0,     0,
       0,  1245,  1246,     0,   172,     0,  1243,  1240,     0,     0,
       0,   172,  1263,  1266,  1264,  1265,  1257,  1258,  1259,  1260,
       0,     0,     0,    46,  1285,  1286,     0,  1305,  1307,  1306,
    1302,  1303,  1301,     0,     0,     0,     0,     0,     0,  1308,
       0,  1312,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1309,  1323,     0,     0,     0,  1311,
    1313,     0,     0,     0,  1310,  1390,  1281,  1282,  1280,   227,
       0,   238,   223,     0,   240,   224,     0,   242,   225,  1278,
    1279,  1277,   226,   229,     0,     0,     0,   232,   228,   230,
     231,     0,     0,   222,     0,     0,     0,     0,  1404,  1417,
       0,     0,  1407,     0,     0,  1410,     0,     0,  1409,  1408,
     180,  1427,     0,  1426,  1422,   255,   251,     0,   260,     0,
     257,     0,   276,   167,   170,   171,   169,   168,   291,   292,
     293,   281,   280,   296,   298,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,     0,
       0,     0,   172,     0,   347,   100,    97,    98,    99,   172,
     349,   348,     0,     0,     0,     0,     0,     0,     0,   362,
       0,   358,   356,   355,   370,   423,     0,     0,   426,   441,
     442,   437,   438,   443,   445,   444,   439,   334,   335,   434,
     433,   449,   448,     0,   453,   468,   469,   457,   471,   464,
     462,   456,     0,     0,   172,   172,   180,   180,   180,   172,
       0,     0,   172,   516,   498,   509,     0,   500,    84,   511,
       0,     0,   502,   504,   172,   521,     0,     0,   507,     0,
       0,   391,     0,   492,    88,    87,   486,     0,   542,   531,
     530,   532,   533,     0,     0,     0,     0,  1027,  1120,  1029,
    1028,     0,  1125,     0,  1103,     0,  1106,     0,     0,  1127,
    1129,     0,  1119,   398,     0,   556,   558,   575,   561,   577,
     562,   579,   563,   569,   572,   570,   566,   581,   560,     0,
       0,   413,   586,   583,   584,   180,   611,   623,   624,   625,
     627,     0,     0,     0,   640,   628,     0,     0,     0,  1208,
    1206,  1210,  1212,     0,     0,     0,   193,   193,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   688,   712,     0,     0,     0,
     680,     0,     0,     0,     0,   193,   187,     0,     0,   789,
       0,   799,   800,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   859,     0,
       0,     0,     0,     0,   881,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   901,     0,     0,   906,   907,     0,
       0,     0,   927,   929,   928,     0,   931,     0,     0,   938,
     940,   941,     0,   976,     0,     0,     0,     0,   803,   804,
    1021,  1019,  1024,  1023,  1022,  1020,  1025,     0,   808,     0,
       0,  1015,  1014,   812,     0,  1018,     0,   813,   814,   815,
     816,     0,     0,     0,     0,     0,   914,     0,     0,   915,
    1148,     0,  1151,  1147,     0,     0,     0,   916,   948,   917,
    1166,  1171,  1168,  1174,  1167,  1165,  1172,  1169,  1163,  1170,
    1164,  1173,     0,     0,   922,     0,     0,     0,     0,   923,
    1183,  1187,  1188,     0,  1185,   924,     0,  1189,   925,   945,
       0,     0,     0,   950,   951,   952,  1230,  1244,     0,     0,
    1251,  1247,     0,     0,     0,  1242,  1241,  1255,  1254,     0,
       0,  1271,     0,     0,  1267,     0,  1275,     0,     0,  1268,
       0,  1304,   216,   216,     0,     0,     0,   216,     0,  1337,
       0,  1336,     0,     0,     0,     0,  1324,     0,     0,     0,
       0,  1328,     0,     0,     0,  1335,     0,     0,     0,     0,
       0,  1326,  1338,     0,     0,     0,  1325,   216,   216,   216,
    1315,  1314,  1316,     0,   239,   241,   243,   233,     0,   236,
     235,   234,     0,   244,     0,    63,     0,  1400,     0,  1405,
     172,  1420,     0,  1411,  1412,     0,  1414,  1415,     0,   181,
     182,  1406,  1428,  1429,     0,   247,     0,   261,     0,     0,
       0,     0,   295,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,   172,     0,
       0,     0,     0,   172,     0,   361,     0,   360,   430,   429,
       0,     0,     0,   172,     0,   180,   476,   474,   478,   482,
       0,     0,     0,   180,     0,   517,   501,     0,   512,   514,
     183,     0,     0,   390,     0,     0,    63,     0,   491,    86,
      85,     0,     0,  1042,     0,     0,     0,     0,     0,     0,
    1054,     0,     0,     0,  1100,     0,     0,     0,  1072,  1073,
       0,     0,     0,     0,     0,  1084,     0,  1090,  1091,  1093,
    1095,     0,  1099,  1111,  1112,  1113,     0,  1115,     0,  1121,
    1123,  1124,  1122,  1026,     0,  1102,     0,  1101,  1041,     0,
       0,  1107,     0,  1109,     0,  1108,  1130,  1110,  1117,     0,
       0,   573,   571,   412,     0,     0,  1299,  1293,   638,   639,
       0,   636,   632,     0,   193,   193,   193,   194,   195,   650,
     651,   189,   188,     0,   193,   193,   193,     0,   658,   657,
     656,   668,   190,   193,   193,   193,   191,   192,   193,   193,
       0,   193,   193,     0,   190,     0,   681,     0,   687,     0,
     686,   685,   684,     0,     0,     0,   711,     0,   710,     0,
     683,   682,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,   193,   193,   785,     0,   193,
     193,   790,     0,   206,   207,   208,   209,   210,   211,     0,
      92,    93,    91,   822,     0,     0,     0,     0,     0,   969,
     967,   962,     0,   972,   956,   973,   959,   971,   965,   954,
     968,   957,   955,   974,   970,     0,     0,   836,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   869,     0,     0,     0,     0,   880,
     882,     0,     0,   887,   886,     0,     0,   196,     0,     0,
       0,   172,     0,   897,     0,     0,     0,     0,   902,   903,
     904,     0,     0,     0,   910,   926,   930,   932,   935,   934,
       0,     0,     0,   939,   821,   977,   979,     0,   978,   806,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1007,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   810,   953,     0,     0,     0,
       0,   913,     0,   172,  1144,  1142,  1140,     0,     0,   172,
    1146,   918,     0,     0,     0,     0,  1182,     0,     0,  1190,
     943,   944,     0,   946,  1250,  1252,  1249,  1248,  1239,     0,
       0,     0,  1272,     0,     0,  1276,  1287,   218,   219,   220,
     221,   217,  1318,  1317,     0,     0,     0,  1322,     0,     0,
       0,  1321,     0,     0,     0,  1320,  1319,   216,     0,     0,
       0,  1327,     0,     0,     0,  1334,     0,     0,     0,  1333,
       0,     0,     0,  1332,     0,     0,     0,  1331,     0,     0,
       0,     0,     0,  1348,     0,  1383,  1382,  1384,     0,     0,
       0,  1330,     0,     0,     0,  1329,  1343,  1342,  1344,  1340,
    1339,  1341,  1386,  1385,  1387,     0,   237,     0,     0,  1402,
    1403,     0,  1418,   172,  1413,  1416,     0,     0,   172,     0,
       0,     0,   258,     0,     0,     0,     0,   299,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   337,   336,     0,
       0,   328,   339,   342,     0,   352,   354,   353,   351,   172,
     359,     0,     0,     0,   180,   172,     0,     0,     0,     0,
     496,   510,   519,     0,   513,   185,   186,   184,   506,     0,
     522,     0,     0,   489,   494,    84,     0,     0,     0,     0,
       0,     0,   172,  1043,     0,     0,     0,  1048,     0,   172,
       0,  1055,  1056,     0,  1058,  1060,  1059,  1061,  1062,     0,
       0,     0,  1068,     0,  1074,     0,     0,     0,  1078,  1079,
       0,     0,     0,     0,  1085,  1086,     0,     0,  1089,  1092,
    1094,  1096,     0,     0,  1114,  1116,     0,  1040,  1030,  1126,
    1031,     0,     0,  1128,  1118,     0,     0,   591,   592,     0,
     633,   637,     0,   647,   648,   649,   193,   653,   654,   655,
       0,     0,     0,   662,   663,   187,     0,     0,     0,   193,
     669,   670,   671,   672,   674,   190,   677,   678,     0,   193,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
     709,     0,   713,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,   190,   689,   690,   691,
     692,   694,     0,   697,   698,     0,   190,     0,     0,   783,
     784,   193,   787,   788,     0,   819,   172,   823,     0,     0,
       0,     0,     0,     0,     0,   961,   958,   964,   963,   960,
     966,     0,     0,     0,     0,     0,   172,   842,   841,   843,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   911,   860,   861,   862,     0,   866,   863,
     865,     0,     0,   871,   870,   872,     0,     0,     0,     0,
       0,     0,   172,   172,   885,   202,   198,   203,   197,   200,
     199,   201,   893,   894,   172,     0,     0,   896,   898,   172,
     172,     0,   905,   908,   172,   172,   933,   937,   820,   980,
     807,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1008,  1131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1006,     0,     0,
       0,     0,     0,   817,   818,   172,   180,  1145,     0,     0,
    1149,  1150,     0,     0,   920,     0,   172,     0,  1184,  1186,
     942,     0,  1269,  1270,  1273,  1274,   216,   216,   216,   216,
     216,   216,   216,   216,   216,  1388,  1346,  1345,  1347,  1380,
    1379,  1381,  1377,  1376,  1378,  1371,  1370,  1372,  1368,  1367,
    1369,  1350,  1349,  1353,  1352,  1354,  1351,  1362,  1361,  1363,
    1359,  1358,  1360,     0,     0,  1397,     0,  1419,     0,   172,
       0,  1423,     0,     0,   262,     0,   259,     0,     0,     0,
       0,     0,   307,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,   344,   160,     0,   450,     0,   472,   180,
     183,     0,     0,   485,     0,   523,   524,     0,   488,     0,
       0,     0,     0,     0,     0,   172,  1044,   183,   183,   183,
     172,  1049,   183,   180,   183,   183,   172,  1063,   183,   183,
     183,   172,  1069,   183,   183,   172,     0,   172,   183,   172,
     183,   183,   172,   183,   172,     0,  1104,  1105,     0,     0,
     590,     0,   652,   659,   660,   661,     0,   665,   666,   667,
     673,   193,   190,   679,   700,   701,   702,   703,   704,     0,
     706,   707,   190,   190,   763,   764,   765,   766,   768,     0,
     771,   772,     0,   190,   774,   775,   776,   777,   778,     0,
     780,   781,   190,     0,     0,     0,   190,   190,   187,     0,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,     0,
     190,   193,   193,   193,   193,   193,     0,   193,   193,     0,
     190,   190,   193,   193,   193,   193,   193,     0,   193,   193,
       0,   190,   693,   190,     0,   699,     0,     0,   786,     0,
     824,   183,     0,     0,   183,     0,     0,     0,   834,   183,
     837,   838,   183,   840,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   864,   867,   868,
       0,   183,     0,     0,     0,   883,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1175,  1005,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,    89,     0,     0,  1016,  1017,   180,     0,
       0,     0,  1152,   919,   921,   180,   172,  1262,  1374,  1373,
    1375,  1365,  1364,  1366,  1356,  1355,  1357,  1389,     0,  1399,
    1430,     0,     0,  1425,  1424,   263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   303,     0,     0,   329,   340,
     183,   451,   455,   473,   475,     0,   483,   518,   172,     0,
       0,     0,     0,     0,     0,   172,  1037,  1045,  1047,  1046,
    1050,  1051,  1052,  1053,  1057,  1064,  1065,  1066,  1067,  1070,
    1071,  1075,   180,   183,   180,  1082,   180,  1083,  1087,   180,
    1097,   180,   172,     0,   172,     0,   589,     0,   664,   675,
     193,   190,   708,   767,   190,     0,   773,   190,   782,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   193,
     193,   193,   193,     0,   193,   193,   190,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   723,   724,   725,
     726,   728,   190,   731,   732,     0,   193,   193,   752,   753,
     754,   755,   757,   190,   760,   761,     0,   193,   695,   190,
     791,   792,   172,   826,     0,   183,   828,     0,   172,     0,
     835,   839,   172,     0,   848,   849,   850,   851,   855,   856,
     852,   853,   854,     0,     0,   183,   875,     0,   172,     0,
       0,   888,     0,   183,     0,     0,   183,   183,     0,   936,
       0,   204,   204,     0,     0,   204,     0,   204,  1131,     0,
       0,     0,     0,     0,     0,     0,     0,  1176,  1154,     0,
    1161,  1162,     0,   204,   204,     0,     0,     0,     0,     0,
       0,     0,     0,  1009,     0,     0,     0,  1131,    90,     0,
     204,     0,  1178,   172,   172,     0,   180,     0,   245,  1432,
    1431,     0,     0,   267,     0,     0,     0,     0,     0,   311,
       0,     0,     0,   345,   484,     0,   364,     0,  1033,     0,
     212,     0,  1038,  1076,  1077,  1080,  1081,  1088,  1098,  1039,
     405,     0,   364,     0,   676,   705,   769,   190,   779,   714,
     715,   716,   717,   718,   190,   720,   721,   193,   743,   744,
     745,   746,   747,   190,   749,   750,   193,   734,   735,   736,
     737,   738,   190,   740,   741,   193,   727,   193,   190,   733,
     756,   193,   190,   762,   696,     0,   183,   829,     0,     0,
       0,     0,     0,   857,   858,   873,     0,     0,     0,   884,
     889,     0,   891,     0,   899,   900,   892,   183,     0,   205,
    1131,  1131,    89,     0,  1131,     0,  1131,   981,   172,     0,
       0,     0,     0,     0,     0,     0,  1153,     0,     0,  1131,
    1131,    89,     0,     0,  1131,  1131,     0,     0,  1131,  1012,
    1010,  1011,   988,  1131,  1131,  1178,  1194,     0,  1143,  1141,
    1180,     0,     0,     0,     0,   269,   301,   302,     0,     0,
       0,   300,     0,   364,   365,   367,   366,   416,     0,     0,
     213,   215,   214,  1035,  1036,   364,   418,     0,   770,   193,
     722,   193,   751,   193,   742,   729,   193,   758,   193,     0,
     825,   183,   183,     0,   183,     0,   183,   183,     0,   890,
     183,     0,  1131,   994,   990,  1131,     0,   995,     0,   989,
    1131,     0,  1156,     0,  1159,  1199,  1160,  1158,  1155,     0,
     992,   991,  1131,     0,     0,   986,   984,  1131,   172,   985,
     987,   993,  1194,  1138,     0,     0,  1179,  1192,  1181,  1261,
       0,     0,   309,   310,   308,   330,   333,   331,     0,     0,
     417,  1032,   172,   419,   635,   719,   748,   739,   730,   759,
     183,   827,   833,     0,   847,   844,   874,   879,     0,   895,
       0,   999,   983,    89,     0,   997,     0,  1157,     0,   982,
      89,     0,   998,     0,  1139,  1196,  1198,     0,  1191,     0,
       0,     0,     0,     0,     0,   212,     0,   830,   172,   845,
     876,   909,  1131,     0,  1200,     0,  1131,     0,   183,  1197,
    1193,   268,     0,     0,     0,     0,     0,  1034,   802,   172,
     831,   846,   172,   877,  1001,     0,  1131,  1000,     0,     0,
     270,   323,     0,   322,     0,   832,   878,    89,  1002,    89,
    1131,   321,   320,  1131,  1131,   996,  1004,  1003
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1622,   180,   162,  1056,  2767,  2768,   482,   483,
     484,   485,   163,   164,   165,   811,   734,   100,   948,   505,
    1401,  1918,  1553,  1568,  1549,  2162,  2880,  1619,  2943,  1792,
     387,   908,  1380,   892,   895,   898,   913,    69,   411,   417,
     421,   424,    74,   427,    81,   443,   439,   433,   450,    91,
     460,   101,   108,   466,   469,   471,   539,  1009,  1889,   473,
     476,   115,   492,   166,   168,  2937,   184,   186,   231,  1051,
    1101,   528,   998,   530,   540,  1001,  1006,   542,   544,  1012,
     547,  1014,   559,  1017,  1019,   562,   566,   570,   572,   575,
     579,   615,   611,  1468,   593,  1037,  1042,  1034,  1456,  1048,
     596,   623,   632,  1059,   637,   642,   634,   607,   603,   647,
     656,  1096,  1532,  1088,  1090,  1092,  1098,   661,  1103,   234,
     663,  1989,   253,   666,   668,   672,   677,   685,   271,  1542,
     700,   294,   743,  1558,   745,   753,  1160,  1576,  1155,  2050,
    1588,  1586,  2052,  1156,  1578,  1580,   759,   762,   757,   296,
     304,   306,   802,  1239,  1645,  1228,  1745,  2192,  2207,  1243,
    1247,  1237,  1083,  1513,  1517,  1525,  1527,  2516,   312,  1256,
    1259,  1267,  2747,  2748,  2749,  2517,  2916,  2917,  1289,  1295,
    1298,  3006,  3007,  3003,  3004,  3055,  2750,  2751,   287,   320,
     328,   336,   826,   821,   341,   346,   348,   836,   843,  1324,
    1329,   902,   889,   353,   357,   322,   263,   259,   361,   850,
     368,   884,   859,   874,   875,  1366,  1361,  1811,  1351,  1833,
    1805,  1845,  1841,  1801,  1827,  1823,  1797,  1819,  1815,  1355,
     879,   861,   374,   375,   391,  1387,   394,   400,   925,   928,
     922,   402,   405,   933
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2426
static const yytype_int16 yypact[] =
{
    5452,   207,   566,    42, -2426, -2426,  1329,   -21,  1002,   555,
    1181,   150,  2947,   304,   391,    75,   570,   290,  5679,    69,
    2561, -2426,    22,   119,   182,   742,   529,  1495,  1403,   232,
     139,   561,   -29,   809,   238,   534,  1004,  3004,   161,  1056,
     627,   541,   -29, -2426,   115,   230,    46,     4, -2426,   420,
     632,   480, -2426,   624, -2426,    71,  1121,   383,   112,   674,
     275,   169,   386,   690,   712,   131,   740,   -12,   725, -2426,
   -2426, -2426,   964,  1054, -2426,   527,    32,   391,   -25,   649,
     869, -2426,   748,  1054, -2426, -2426,  1054,  1054,   492,   757,
    1054, -2426, -2426, -2426, -2426,  1054, -2426, -2426, -2426, -2426,
   -2426, -2426,    66,   765,   769,   799,   813,   137, -2426,  1054,
    1563,  1054,  1054,  1174,  1054, -2426, -2426, -2426,   558, -2426,
   -2426, -2426, -2426,  4803, -2426, -2426, -2426, -2426, -2426, -2426,
    1054, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426,  1414, -2426,  1054, -2426,   826, -2426, -2426,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   -2426, -2426, -2426, -2426, -2426,   710, -2426,   777,  1781,   723,
     218,   520,   673,   -52,  4385,   560,  4976,  4762,   843,  4803,
    3838, -2426,  1274,   -91,   814,   884,   798,   231,   297,   933,
     731,   887,   549,   -29,   638, -2426,   589,   838, -2426,   663,
     634,   330, -2426,   413, -2426,   992, -2426,    29,   878,   220,
   -2426, -2426,  5071, -2426, -2426, -2426,   942,   954,  1014, -2426,
   -2426, -2426, -2426,    33, -2426, -2426, -2426, -2426,  1063, -2426,
   -2426,  5071,  4590, -2426,  1044, -2426,    23,  5071,  1075, -2426,
     299,  5071,  1087, -2426,    62, -2426,  1077,  1091,   135, -2426,
    1054, -2426,  1100,  1116,  2143, -2426,  1129, -2426, -2426, -2426,
   -2426,  1136, -2426, -2426,  1054, -2426,   391, -2426,   578,  1145,
     848,   436,  1148,    43, -2426, -2426, -2426,  1152,  1156,   391,
     391,  1054,  1054, -2426, -2426,  1169, -2426, -2426, -2426, -2426,
   -2426, -2426,  2579,  2143, -2426,  1178,    57,  1054,  5071,  1054,
   -2426,  5071, -2426,  1187, -2426, -2426, -2426, -2426, -2426,  1054,
    1263,   391,  3459,  1054,  1414,  1054, -2426,  1175, -2426,  5748,
   -2426, -2426,   998,  1194,  1200,  1054, -2426,  1202, -2426, -2426,
     281, -2426, -2426, -2426,  1212,  5071,  1216, -2426,  1312,  1054,
    1120, -2426,  1039,   930,  2322,    73,  1227,   557, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426,  1236, -2426,   495,   302,   317,
     350,    92,  1054,    38,  1238,  1054,   155, -2426,  1054,   944,
    1250, -2426,  1054,  1054, -2426,    40,    20,    60,  1256,  1414,
   -2426, -2426, -2426,  1177,  1054, -2426, -2426, -2426, -2426, -2426,
    1054, -2426,  1269,  1279, -2426,  1054,  1248, -2426, -2426, -2426,
   -2426, -2426, -2426,  1054, -2426, -2426,  1054, -2426, -2426,   913,
     913, -2426,  1285, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  1093,  1054,  1054,  1321,  1342,  1347,
   -2426, -2426,  1054,  1054,  1054,  1054,  1054,  1054,  1350,  1054,
   -2426,  1357,  1054, -2426,  1359, -2426, -2426,  1365, -2426, -2426,
     593, -2426,  1369, -2426,  5071,  1373, -2426,  1054, -2426, -2426,
   -2426,  1054,  1378,  1384,  1384,  5071,  1054,  1054,  1054,  1054,
    1054,  1054, -2426,  1054,  4803,  1563,  1054,  1054, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426,  1563,  1054, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,  1383, -2426,
    1096,    87, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426,   824, -2426, -2426, -2426,  1214, -2426,   565,   -20,   -20,
   -2426, -2426, -2426,  1405, -2426,  1412, -2426, -2426,   246, -2426,
    1221, -2426, -2426, -2426, -2426,  1244, -2426, -2426,  1414, -2426,
    1054,  1054, -2426,  5071,  5071,  1414, -2426, -2426,  1414, -2426,
   -2426, -2426, -2426,  1414, -2426, -2426,  5071,  1414,  1054, -2426,
   -2426,  5071, -2426,  1432,   640,  1220,    16, -2426, -2426,  1234,
    5071,    49, -2426, -2426, -2426, -2426, -2426, -2426,  1451,  1453,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,  1456, -2426,
    1243, -2426,   -87, -2426,  1054, -2426, -2426,  1492,  1492, -2426,
   -2426,  1492,  1492, -2426,   776, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,    29, -2426,
   -2426, -2426, -2426, -2426, -2426,  1288,  1291, -2426, -2426,  1437,
    1440,  1443, -2426, -2426,    11,  1273, -2426,  1054,  1515,  1278,
    5748, -2426,  1414, -2426, -2426,  1532, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
    5071,  5071,  5071,  5071, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426,  1528, -2426, -2426, -2426, -2426,  1537,  1539,   391,
   -2426, -2426,  1542,  1545,  1341,  1054, -2426,  2143, -2426,  1571,
   -2426, -2426, -2426, -2426, -2426,  1054, -2426,   391, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,   594,
    1476,  1485,  1487, -2426,  1580, -2426,   575,  1494,    56,   599,
    5680,   639,  1583, -2426,  1587, -2426,  1588, -2426,    41, -2426,
    1592,  1594, -2426,  1598, -2426, -2426, -2426,  1054, -2426,  5748,
    4249,  2007,  1292,   502,  1600,   -19,  1509, -2426, -2426, -2426,
    1612,    83,   679,  1613,  1620,   184,  1054,   644,   479,   109,
    5071,   391,  1811,  1168,    18,   284,   279,    28, -2426,  1611,
    1616,  1630, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426,  1054, -2426, -2426, -2426, -2426,  1054,  1054,  1054,
    1054, -2426, -2426,  1054,  1414,  1054, -2426,  1054,  1563,  1054,
    1635,  1414, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
    1638,   459,   584, -2426, -2426, -2426,  1642, -2426, -2426, -2426,
   -2426,  1549, -2426,  1643,  1653,  1567,  1570,  1573,  1659, -2426,
    1661, -2426,  1664,  1578,  1666,   721,   851,   605,   503,   832,
     955,   905,  1668,   957, -2426, -2426,  1671,  1672,  1674, -2426,
   -2426,  1676,  1677,  1675, -2426,  1680, -2426, -2426, -2426, -2426,
    1692, -2426, -2426,  1693, -2426, -2426,  1701, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  1054,   388,  1054, -2426, -2426, -2426,
   -2426,  1054,  1054, -2426,  1054,  1261,  1054,  1054, -2426,  5748,
    1618,  1703, -2426,   991,  1705, -2426,  1330,  1709, -2426, -2426,
     -66,  1054,  1054, -2426,  1706, -2426, -2426,  1711,  1511,  1054,
    1708,   927, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426,  1718,  1722,  1054,  1054,
    1054,  1054,  1054,  1724,  1054,  1736,  1054,  1725, -2426,   391,
    1739,  1749,  1414,  5071, -2426, -2426, -2426, -2426, -2426,  1414,
   -2426, -2426,  1054,  1054,  1054,  5071,  1054,  1563,  1054, -2426,
    1054, -2426, -2426, -2426, -2426, -2426,  1751,  1756, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426,   560, -2426,  1054, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426,  5071,  1054,  1414,  1414,   -66,   -66,   -66,  1414,
    1563,  1054,  1414, -2426, -2426, -2426,  1054, -2426,   -87,  1581,
    1757,  1763, -2426, -2426,  1414, -2426,  1593,  1597, -2426,  1767,
    1768, -2426,  1770,  1355,  1733,  1737, -2426,  1054, -2426, -2426,
   -2426, -2426, -2426,  4945,   956,  1464,   585, -2426, -2426, -2426,
   -2426,  1054,    82,  1209, -2426,  1491, -2426,  1811,  1496,   309,
    1462,   147, -2426, -2426,  1054, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  1470, -2426, -2426, -2426, -2426,  1054,
    1780, -2426, -2426, -2426, -2426,   -66, -2426, -2426, -2426, -2426,
   -2426,  1782,  1783,  5033, -2426, -2426,  1785,  1786,  1054, -2426,
   -2426, -2426, -2426,  1788,  1789,  1790,   -35,   -35,   -63,  1792,
    1793,  1795,  1796,  1796,  1796,  1488,  1502,  1800,  1803,  1804,
      84,    84,   -63,  1794,  1807,   -63,  1808,  1809,  1810,  1812,
    1810,  1812,  5719,  1813,  1814, -2426, -2426,  1810,  1812,   636,
   -2426,  1818,  1820,  1823,  1824,   -35,   -63,  1829,  1830, -2426,
    1833, -2426, -2426,  1414,  1340,  1552,  1551,  1562,  1577,  1730,
     551,  1579,  1840,   151,    68,  1734,   993,  1842,  1055,  1815,
    1584,  1586,  1735,  1848,  1628,     5,    64,   365,  -119,  5071,
    1811,  1831,   531,  1606,  1645,  1875,    67, -2426, -2426,    24,
    1882,  1883, -2426, -2426, -2426,  1884,  1655,   118,  1811,  1656,
   -2426, -2426,  1832, -2426,   391,  1890,  1891,  1054, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426,     7, -2426,  1078,
    1893, -2426, -2426, -2426,  1054, -2426,  1054, -2426, -2426, -2426,
   -2426,  1054,  1054,  1054,   -19,  5071, -2426,  1895,  1367, -2426,
   -2426,  1054, -2426, -2426,  1054,  5071,  1054, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426,   391,  1054, -2426,  1054,   -19,  1897,  1898, -2426,
   -2426, -2426, -2426,  1054,  1054, -2426,   391, -2426, -2426, -2426,
     966,  1902,  1907, -2426, -2426, -2426, -2426, -2426,  1054,  1054,
   -2426, -2426,  1563,  1054,  1054, -2426, -2426, -2426, -2426,  1910,
    1054, -2426,  1054,  1798, -2426,  1054, -2426,  1054,  1802, -2426,
    1918, -2426,  1422,  1422,   978,  1037,  1042,  1422,  1920, -2426,
    1045, -2426,  1052,  1060,  1123,  1125, -2426,  1921,  1922,  1138,
    1925, -2426,  1926,  1927,  1929, -2426,  1141,  1147,  1930,  1931,
    1933, -2426, -2426,  1934,  1935,  1940, -2426,  1422,  1422,  1422,
   -2426, -2426, -2426,  1054, -2426, -2426, -2426, -2426,  1054, -2426,
   -2426, -2426,  1054, -2426,  1054,   175,  5071, -2426,  1054, -2426,
    1414, -2426,  5748, -2426, -2426,  1941, -2426, -2426,  1942, -2426,
   -2426, -2426, -2426,  1919,  3459, -2426,  1054,  1923,  1054,  1054,
    1054,  1226, -2426,  1944,  1054,  1054,  1946,  1054,  1054,  1950,
    1054,  1952,  1054,    47,  1955,   391,   391, -2426,  1414,  1054,
    1947,  1959,  1960,  1414,  5071, -2426,  1054, -2426, -2426, -2426,
    1054,  1054,  1054,  1414,  5071,   -66, -2426, -2426, -2426, -2426,
    1563,  1054,  1961,   -66,  1054,   680, -2426,  1962, -2426, -2426,
    1527,  3925,  1054, -2426,  1054,  1964,  1938,  1054, -2426, -2426,
   -2426,  1965,  1446,  4803,  1704,  1707,  1712,    76,  5071,  1715,
   -2426,   468,   133,   128, -2426,  1716,  1719,   165, -2426, -2426,
     538,  1758,   451,  1720,   353,  1811,   872, -2426,  1969,  1690,
   -2426,   568, -2426, -2426, -2426, -2426,  1811,  1743,    -2, -2426,
   -2426, -2426, -2426, -2426,  1054, -2426,  1054, -2426, -2426,  1054,
    1054, -2426,  1054, -2426,  1054, -2426, -2426, -2426, -2426,  1766,
    1054, -2426, -2426, -2426,  1054,   273, -2426, -2426, -2426, -2426,
    1984,  1986, -2426,  1054,   -35,   -35,   -35, -2426, -2426, -2426,
   -2426, -2426, -2426,  1987,   -35,   -35,   -35,   713, -2426, -2426,
   -2426, -2426,    84,   -35,   -35,   -35, -2426, -2426,   -35,   -35,
    1988,   -35,   -35,  1991,    84,   778, -2426,   780, -2426,  1024,
   -2426, -2426, -2426,  1994,  1995,  1996, -2426,   854, -2426,  1335,
   -2426, -2426,  1694,  1998,  1999,  2000,    84,    84,   -63,  2002,
    2003,   -63,  2004,  2006,  2008,   -35,   -35, -2426,  2011,   -35,
     -35, -2426,  2013, -2426, -2426, -2426, -2426, -2426, -2426,   391,
   -2426, -2426, -2426,  4803,  1605,  1054,  1633,  1685,   474, -2426,
   -2426, -2426,   489, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426,  2021,  1054, -2426,   391,  2022,
    1054,  5071,   391,   391,  2023,  1698,  1746,  1769,   203,   296,
    1772,   403,  1687,  1688,  2029,  2031,  2037,  2038,   551,  2067,
    2068,  2069,  1731,  1738,  1417,  2070,  1054,  1651,  1745, -2426,
   -2426,   391,  5071, -2426, -2426,  5071,  1054,   162,  2073,  5071,
    1054,  1414,   391, -2426,  2074,  5071,  5071,  1054, -2426, -2426,
   -2426,   391,   391,  5071, -2426, -2426, -2426, -2426, -2426, -2426,
    5071,  1054,   391, -2426,  2079, -2426, -2426,  1054, -2426, -2426,
    2080,  1054,  1827,   177,  1054,  1835,  1054,   181,  1054,  2084,
    1054,  1838,  1839,  1054,  1054,  1054,  1054,  1054,  1054,  1054,
    1054,    13,  1054,  1054,  1844, -2426, -2426,  1054,  1054,  1054,
    1054, -2426,  5071,  1414,  2086,  2094,  2098,  1054,  1054,  1414,
   -2426,  1054,  1054,  1054,  5071,   -19, -2426,  1054,  1054, -2426,
   -2426, -2426,  2099, -2426, -2426, -2426, -2426, -2426, -2426,  2101,
    1054,  1054, -2426,  1054,  1054, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  2102,  2103,  2105, -2426,  2106,  2108,
    2110, -2426,  2111,  2124,  2126, -2426, -2426,  1422,  2127,  2128,
    2130, -2426,  2131,  2132,  2134, -2426,  2135,  2136,  2138, -2426,
    2139,  2141,  2145, -2426,  2142,  2146,  2148, -2426,  2149,  2150,
    2152,  2153,  2151, -2426,  2155, -2426, -2426, -2426,  2156,  2159,
    2161, -2426,  2162,  2164,  2167, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426,  1054, -2426,  1054,  1054, -2426,
   -2426,  1054, -2426,  1414, -2426, -2426,  3459,  1054,  1414,  1054,
    1054,  1054, -2426,  1054,  1054,  2168,  1054, -2426,  1054,  1054,
    2170,  1054,  1054,  2171,  1054,  2172,  1054, -2426, -2426,  2184,
    5071, -2426,  2185, -2426,  1054, -2426, -2426, -2426, -2426,  1414,
   -2426,   948,  1054,   948,   -66,  1414,  5071,  1054,  1054,  2198,
   -2426, -2426, -2426,  1054, -2426, -2426, -2426, -2426, -2426,  5071,
   -2426,  5071,  1054, -2426, -2426,   -87,  2199,  2203,  2204,  2205,
    2206,  5119,  1414, -2426,  5071,  5071,  5071,  4803,  5071,  1414,
    5071, -2426, -2426,  5071, -2426, -2426, -2426, -2426,  4803,  5071,
    5071,  5071,  4803,  5071, -2426,  5071,  5071,  1054, -2426, -2426,
    5071,  5071,  5071,  5071, -2426, -2426,  5071,  5071, -2426, -2426,
   -2426, -2426,  5071,  5071, -2426, -2426,  1909, -2426, -2426, -2426,
   -2426,  1054,  1054, -2426, -2426,  2211,  1054, -2426, -2426,  2213,
   -2426, -2426,  1054, -2426, -2426, -2426,   -35, -2426, -2426, -2426,
    2217,  2218,  2219, -2426, -2426,   -63,  2212,  2221,  2222,   -35,
   -2426, -2426, -2426, -2426, -2426,    84, -2426, -2426,  2224,   -35,
    2225,  2226,  2227,    84,    84,   -63,  2229,  2230,  2232,  1801,
    2233,  2236,  2237,    84,    84,   -63,  2231,  2239,   -63,  2241,
    2243,  2244,  2246,    84,    84,   -63,  2240,  2249,  2250,  1313,
   -2426,  1556, -2426,  1647,  1837,  2252,  2253,  2254,    84,    84,
     -63,  2256,  2257,   -63,  2258,  1858,  2259,  2260,  2261,    84,
      84,   -63,  2265,  2266,   -63,  2267,    84, -2426, -2426, -2426,
   -2426, -2426,  2270, -2426, -2426,  2272,    84,  2274,  2277, -2426,
   -2426,   -35, -2426, -2426,  2278, -2426,  1414, -2426,  5071,  1054,
    1054,  5071,  1054,  2280,  1552, -2426, -2426, -2426, -2426, -2426,
   -2426,  2281,  5071,   391,  2284,  5071,  1414, -2426, -2426, -2426,
    2287,  1552,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,
    1054,  2290,  2293, -2426, -2426, -2426, -2426,  2294, -2426, -2426,
   -2426,  2297,  2299, -2426, -2426, -2426,  1054,  5071,  1054,  2300,
    1552,   391,  1414,  1414, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  1414,  1054,  1563, -2426, -2426,  1414,
    1414,  1054, -2426, -2426,  1414,  1414, -2426, -2426, -2426, -2426,
   -2426,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,  1054,
    1054, -2426, -2426,  1054,  1054,  1054,  1054,  1054,  1054,  1054,
    1054,  1054,  1054,  1054,  1696,  2301,  1054, -2426,  1054,  1054,
    1054,  2303,  2305, -2426, -2426,  1414,   -66, -2426,  2307,  2308,
   -2426, -2426,  1563,  1054, -2426,  2310,  1414,  5071, -2426, -2426,
   -2426,  2311, -2426, -2426, -2426, -2426,  1422,  1422,  1422,  1422,
    1422,  1422,  1422,  1422,  1422, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426,  1552,  1054, -2426,  1054, -2426,  1054,  1414,
    1054, -2426,  1563,  1054, -2426,  1054, -2426,  2095,  2312,  2313,
    1054,  1054, -2426,  1054,  1054,  2314,  1054,  2316,  1054,  2317,
    1414,  2318,  5071, -2426, -2426,  1054, -2426,  1054, -2426,   -66,
    1527,  1054,  2319, -2426,  1054, -2426, -2426,  4803, -2426,  2323,
    2324,  2325,  2326,  2328,  5071,  1414, -2426,  1527,  1527,  1527,
    1414, -2426,  1527,   -66,  1527,  1527,  1414, -2426,  1527,  1527,
    1527,  1414, -2426,  1527,  1527,  1414,  5071,  1414,  1527,  1414,
    1527,  1527,  1414,  1527,  1414,  5071, -2426, -2426,  2330,  4803,
    2331,  1054, -2426, -2426, -2426, -2426,  2333, -2426, -2426, -2426,
   -2426,   -35,    84, -2426, -2426, -2426, -2426, -2426, -2426,  2335,
   -2426, -2426,    84,    84, -2426, -2426, -2426, -2426, -2426,  2340,
   -2426, -2426,  2341,    84, -2426, -2426, -2426, -2426, -2426,  2342,
   -2426, -2426,    84,  2344,  2345,  2346,    84,    84,   -63,  2343,
    2349,  2350,  2351,  2352,  2354,    84,    84,   -63,  2356,  2359,
    2360,  2361,  2362,  2363,    84,    84,   -63,  2365,  2366,  2367,
      84,   -35,   -35,   -35,   -35,   -35,  2369,   -35,   -35,  2370,
      84,    84,   -35,   -35,   -35,   -35,   -35,  2371,   -35,   -35,
    2372,    84, -2426,    84,  2373, -2426,  2374,  2375, -2426,  5748,
   -2426,  1527,  2377,  5071,  1527,  1054,  5071,  2378, -2426,  1527,
   -2426, -2426,  1527, -2426,  5071,  2380,  1054,  1054,  1054,  1054,
    1054,  1054,  1054,  1054,  1054,  1054,  1054, -2426, -2426, -2426,
    5071,  1527,  1054,  5071,  2381, -2426,  1563,  1563,   -66,  5071,
    1563,  1563,  5071,  5071,  1563,  1563,  1054,  1054,  1054,  1054,
    1054,  1054,  1552,  1054,  1054,  1054,  3111, -2426,  1552,  1054,
    1054,  1054,  1054,  1552,  1054,  1054,  1054,  1054,  1054,  1054,
    1414,  1054,  1775,  1552,  1054,  1054, -2426, -2426,   -66,   391,
    5071,  5071, -2426, -2426, -2426,   -66,  1414,  2384, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,  1054, -2426,
   -2426,  1563,  1054, -2426, -2426, -2426,  1230,  2386,  2387,  2385,
    2389,  1054,  1054,  2390,  1054, -2426,  2392,   948, -2426, -2426,
    1527, -2426, -2426, -2426, -2426,  2393, -2426, -2426,  1414,  2396,
    2397,  2399,  2402,  5071,  2403,  1414, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426,   -66,  1527,   -66, -2426,   -66, -2426, -2426,   -66,
   -2426,   -66,  1414,  2404,  1414,  2406, -2426,  1054, -2426, -2426,
     -35,    84, -2426, -2426,    84,  2407, -2426,    84, -2426,   -35,
     -35,   -35,   -35,   -35,  2408,   -35,   -35,    84,   -35,   -35,
     -35,   -35,   -35,  2409,   -35,   -35,    84,   -35,   -35,   -35,
     -35,   -35,  2410,   -35,   -35,    84,   -35, -2426, -2426, -2426,
   -2426, -2426,    84, -2426, -2426,  2411,   -35,   -35, -2426, -2426,
   -2426, -2426, -2426,    84, -2426, -2426,  2412,   -35, -2426,    84,
   -2426, -2426,  1414, -2426,  5071,  1527, -2426,  2413,  1414,  1054,
   -2426, -2426,  1414,  1054, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426,  1054,  1054,  1527, -2426,  2414,  1414,  1054,
    1563, -2426,    17,  1527,  1054,  1563,  1527,  1527,  5071, -2426,
    1054,  2415,  2415,  1054,  1054,  2415,  1552,  2415, -2426,  5071,
    1741,  1760,  1776,  1864,  1872,  1908,  1937,  3111, -2426,  1945,
   -2426, -2426,  1552,  2415,  2415,  1054,  1054,  1552,  1054,  1054,
    1054,  1054,  1054, -2426,  1563,  1054,  2416, -2426, -2426,  1054,
    2415,   391,    27,  1414,  1414,   391,   -66,  2418, -2426, -2426,
   -2426,  2419,  1054, -2426,  2421,  2423,  2424,  2425,  2427, -2426,
    2428,  2429,  1054, -2426, -2426,  2430,     8,  5071, -2426,  2431,
     127,  5071, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426,  2433,     8,  1054, -2426, -2426, -2426,    84, -2426, -2426,
   -2426, -2426, -2426, -2426,    84, -2426, -2426,   -35, -2426, -2426,
   -2426, -2426, -2426,    84, -2426, -2426,   -35, -2426, -2426, -2426,
   -2426, -2426,    84, -2426, -2426,   -35, -2426,   -35,    84, -2426,
   -2426,   -35,    84, -2426, -2426,  1054,  1527, -2426,  5071,  5071,
    1054,  5071,  1054, -2426, -2426, -2426,  5071,  5071,  1054, -2426,
   -2426,  2434, -2426,  5071, -2426, -2426, -2426,  1527,  2436, -2426,
   -2426, -2426,  1552,  1054, -2426,  2437, -2426, -2426,  1414,   551,
    2441,  2445,  2446,  2448,  2449,  2451, -2426,   391,  2452, -2426,
   -2426,  1552,  1054,  2453, -2426, -2426,  1054,  5071, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426,    27,  1817,  1811, -2426, -2426,
   -2426,   391,  2454,  2455,  2456, -2426, -2426, -2426,  2459,  2460,
    2461, -2426,    99,     8, -2426, -2426, -2426, -2426,  2462,  5071,
   -2426, -2426, -2426, -2426, -2426,     8, -2426,  2463, -2426,   -35,
   -2426,   -35, -2426,   -35, -2426, -2426,   -35, -2426,   -35,  5748,
   -2426,  1527,  1527,  1054,  1527,  2464,  1527,  1527,  1054, -2426,
    1527,  1054, -2426, -2426, -2426, -2426,  2465, -2426,  1054, -2426,
   -2426,  2466, -2426,  2468, -2426, -2426, -2426, -2426, -2426,  1054,
   -2426, -2426, -2426,  2483,  1054, -2426, -2426, -2426,  1414, -2426,
   -2426, -2426,  1817, -2426,  1854,  1974,  1811, -2426, -2426, -2426,
    2487,  2491, -2426, -2426, -2426, -2426, -2426, -2426,    86,    86,
   -2426, -2426,  1414, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
    1527, -2426, -2426,  2484, -2426,  4803, -2426, -2426,  2495, -2426,
    1552, -2426, -2426,  1552,  1054, -2426,  2504, -2426,  1054, -2426,
    1552,  1054, -2426,  5071, -2426,  1854, -2426,   391, -2426,  2508,
    2509,  1054,  1054,  1054,  1054,   127,  2510,  4803,  1414, -2426,
    4803, -2426, -2426,  1054, -2426,  2496, -2426,  1054,  1527, -2426,
   -2426, -2426,  2515,  2522,  1054,  2524,  1054, -2426, -2426,  1414,
   -2426, -2426,  1414, -2426, -2426,  2526, -2426, -2426,  2529,  2530,
   -2426, -2426,  2532, -2426,  2533, -2426, -2426,  1552, -2426,  1552,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2426, -2426,    -3, -2426,  1124, -1034, -1514, -1156,  1747, -2426,
     961,  -480,  1762,   -54,    45, -2426,  -304, -1896,  1886,  1822,
    -988, -2133, -1085,  1109,  2032, -2426, -1172, -2426,  -955, -1239,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426,  -757,  -533, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -1893, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426,   617, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426,   401, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  -106,   -32, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -1667, -2426, -2426, -2426, -2426, -2426,
   -2426,  -777, -2426, -2426, -2426, -2426, -2426, -2426,    21, -2426,
   -2426, -2426, -2426,  -424,  -789, -1074,  -561, -2426, -2426, -2426,
   -2426, -2426,  -635,  -605, -2426, -2426, -2425, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426,  1534, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426, -2426,
   -2426, -2426, -2426, -2426
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1402
static const yytype_int16 yytable[] =
{
      73,  2137,   399,  1282,  1455,  2305,  1010,  2307,   114,   803,
    1255,  1258,  1719,   183,  1976,   989,    70,    71,  2204,  1623,
    1039,   419,  2870,  1286,   923,   992,   116, -1177,   687,  1093,
     362,   307,  1681,  1299,   333,    70,    71,  1399,  1447,  1448,
    1449,  2934,   116,   360,   919,    70,    71,  1230,   760,    70,
      71,  1702,   393,  1045,  1163,   404,   904,  1570,   410,  1054,
    1573,   805,   416,   350,   926,   423,   698,    70,    71,   426,
     428,   464,  1700,   438,    70,    71,   445,   449,   669,   116,
     452,  1608,   335,   453,   454,    70,    71,   462,   119,    70,
      71,   254,   463,  1231,  1793,  1887,  1652,  1937,  1806,  1241,
    1566,  1683,    70,    71,   899,  1164,   477,   481,   486,   487,
     491,   493,    70,    71,   308,    70,    71,  1535,  1551,   351,
     170,    70,    71,   171,   363,   670,   441,   497,  1852,  1853,
    1854,  1007,  1689,  1300,    70,    71,   545,   876,  1547,   703,
     364,  1301,   474,   116,   297,   546,  1260,   594,  1148,  1948,
    1261,   121,  1690,    70,    71,  1708,   172,   232,    70,    71,
    2940,  1945,   506,  1528,   173,   116,   337,   121,   496,   475,
    1548,   442,    70,    71,   233, -1401,  1008,  2584,  1648,  1859,
      70,    71,   352,   256,    70,    71,  1952,   538,  1055,  2155,
     688,   109,   560,  1046,  2597,  2598,  2599,   996,  1040,  2601,
    1250,  2603,  2604,   877,   121,  2606,  2607,  2608,   298,  1684,
    2610,  2611,   110,  2156,  2935,  2615,  2157,  2617,  2618,  1653,
    2620,    70,    71,   309,  2124,  1400,   900,  2158,  1262,  1149,
     174,   409,   299,  1552,   624,   659,   365,  1007,   310,  1094,
     561,   434,   569,  1232,   574,   578,   260,   671,   124,   595,
     366,  1529,  2159,  1165,  1263,   614,  1682,   125,   126,  1567,
    1233,  1234,   358,  1709,   124,   704,   905,   705,   121,   111,
    2160,   127,   657,   125,   126,  1703,    60,   699,   806,   116,
     407,   737,  1008,   116,  1946,   831,   807,   808,  1521,   175,
     121,   300,   920,  1987,   354,   600,   997,    82,   767,   768,
    1290,   124,   420,   901,   693,   689,   116,  1287,  3015,   311,
     125,   126,    70,    71,   812,  1515,   814,  2126,   176,   465,
     177,   116,  2936,   809,  1095,  1264,   817,   820,  2693,   823,
     827,  2696,   829,  2941,  1649,  1166,  2700,  1288,   167,  2701,
     924,  1938,   839,  1701,   761, -1177,  1167,  1720,  1315,   178,
    1888,   906,   129,  2205,   116,   849,   851,  2871,  2716,  1235,
    1236,   604,   690,  1041,  1302,   124,   112,   921,   129,    72,
     435,   890,  1242,   359,   125,   126,  1047,   825,   878,   903,
     927,  1168,   910,   912,  1977,   914,   893,   124,   367,   917,
     918,  1685,   116,  1949,   639,   116,   125,   126,   392,  1654,
     932,   934,   159,  1119,   121,   129,   911,   935,   121,   160,
     161,  1692,   938,   940,   436,   437,  1650,  1291,   159,   896,
     941,  1251,   179,   942,  2129,   160,   161,   531,  2183,  1712,
    1953,   121,  2188,   532,   643,   257,  1265,  3016,   810,   403,
     660,  2942,   952,   953,   841,  1710,   121,  2793,   185,   957,
     958,   959,   960,   961,   962,   159,   964,  1906,   415,   966,
     258,  1015,   160,   161,  1947,  1910,   694,  1651,  2125,   129,
    1292,  2104,   113,   369,   974,   301,   533,  1752,   975,   121,
    2804,   536,  3017,   980,   981,   982,   983,   984,   985,   295,
     986,   129,   481,   990,   991,  1941,   455,   338,   261,  2121,
    1320,   124,   481,   993,   534,   124,  1223,  1435,   339,  1764,
     125,   126,  1252,  2082,   125,   126,  2085,   121,   377,   159,
     121,  1293,  2150,   262,   302,   370,   160,   161,   124,   378,
     886,   429,  1016,  1224,  1988,   754,   371,   125,   126,   988,
    1961,   159,  1523,   124,   272,  1230,   355,   601,   160,   161,
    1451,  2161,   125,   126,   321,   755,   535,  1022,  1023,   379,
     644,  2127,  2857,    70,    71,  1954,   305,  1347,  2245,   372,
     842,   356,   602,    70,    71,  1031,   124,    61,  1321,  3056,
    1136,   695,  2865,   739,    92,   125,   126,  2105,  1137,  1138,
    2872,  1231,  1628,  2875,  2876,  1971,   617,   969,   970,  1296,
     536,   537,  2108,   323,  1962,   129,  1104,  1123,  1124,   129,
     887,  1057,  1294,   605,   124,  1257,  1509,   124,   618,   119,
    1629,   881,    62,   125,   126,  1325,   125,   126,   388,  1036,
    3079,   347,   129,  1348,   349,   619,   376,   182,   606,  1139,
     401,  1592,    63,   380,  1035,   756,   640,   129,  1003,  1593,
    1594,  1942,    70,    71,  1099,   159,  1630,  1687,  1125,   159,
     456,   457,   160,   161,  1631,  1688,   160,   161,  2130,   862,
    1632,   641,    64,  1694,   406,  1322,  1349,  1963,   645,  1225,
     129,  2792,   159,  1084,  1912,   625,   412,   882,   381,   160,
     161,  1150,  1633,  2106,    65,   413,  1154,   159,    66,   119,
    1595,  1378,  1118,  1326,   160,   161,  1964,   626,  2109,   458,
    1230,   646,  1121,    67,  1634,  1173,   414,  1974,   129,    93,
    1244,   129,   888,  2960,   627,  1955,  2000,  2001,    70,    71,
     159,  1157,  1635,  1943,   620,   864,   612,   160,   161,   119,
    1226,  1232,   430,  1958,  2971,   418,   740,   741,    94,   373,
    2107,  1959,    95,   451,  1323,  1972,  1231,  1004,  1233,  1234,
     389,   461,  1510,   382,  1172,  2110,   459,  1227,   159,   467,
    1636,   159,  1151,   383,   494,   160,   161,  2002,   160,   161,
    1063,  1064,  1695,  1253,  1944,  2029,  1266,  1140,  1141,  1956,
     119,  2020,  2021,  2030,  2031,   384,  1065,   431,  1245,   613,
    1327,   468,   127,   385,   470,   432,  1126,  1127,  1350,  1306,
      96,  1637,  1158,  1342,  1307,  1308,  1309,  1310,   472,  1973,
    1311,   386,  1313,  1511,  1314,   481,  1316,  1638,  3031,  3032,
     507,  3034,  1776,  3036,  3037,   264,   518,  3039,   541,  1066,
    1639,   628,  2022,  1005,  2032,  1067,   519,  1696,  1596,  1597,
    1512,   529,   742,   746,    97,   390,   313,  1235,  1236,  2054,
     422,   543,   883,    98,    99,  1390,   265,  2055,  2056,  1142,
     444,  1640,    70,    71,  1068,   621,   314,   571,   315,  1328,
    1143,  1144,   127,   597,  1641,  1145,  1642,  1643,  1128,   598,
     622,  2318,   599,    68,  1343,  1246,  1352,  3066,  1069,  1129,
    1130,  1377,   616,  1381,   629,   633,  1232,   635,  1382,  1383,
     872,  1384,  1386,  1388,  1389,  1146,  2308,  1070,  2057,  2946,
    2366,   636,   127,  1233,  1234,  2003,  2004,  1644,  1402,  1403,
    1598,  1410,  1071,  1254,  1131,  1407,  1408,   608,  1411,  1072,
    2379,  1599,  1600,  1344,   943,  3099,  1601,  1073,  2467,   266,
    2389,   638,   446,  2392,   630,  1414,  1415,  1416,  1417,  1418,
    2399,  1420,  1353,  1422,   631,  2475,   267,    70,    71,  1358,
    1907,  1770,   658,   127,   747,  2436,  1602,    92,  2439,  1430,
    1431,  1432,  1771,  1434,   481,  1436,  2447,  1437,  2227,  2450,
    2023,  2024,  2033,  2034,  2494,  1393,  1394,  2548,  2549,  2550,
    2551,  2552,  2553,  2554,  2555,  2556,    83,  2005,  1440,  1074,
    1442,   664,   316,   944,  1965,  1656,   748,   749,  2006,  2007,
    1444,  1363,  1235,  1236,  1345,  1503,   609,   481,  1452,  1075,
     648,   665,   268,  1454,  1076,  1359,  1077,  2040,  2041,   999,
    3020,   649,  1794,    84,  1581,  1657,   667,  1356,  1658,   686,
    1467,  1590,  3023,  2008,  1471,   832,  1441,    70,    71,  1966,
     860,   447,   750,   610,  1078,  1079,  2058,  2059,  1514,  1516,
    1519,   650,  2025,  1080,  2035,   317,  1524,  1665,   269,   692,
    1659,  1530,   701,  2026,  2027,  2036,  2037,  1364,  2042,   270,
    2038,   697,   945,   833,  1081,   702,  1533,  1504,  1585,   425,
    1721,  1798,  1000,   853,   706,  1722,  1802,  1666,  1795,  1808,
    1667,  1660,    93,  1668,  1661,  1543,  1812,  2557,  2028,  1582,
    2039,    85,   751,  1967,  1816,   318,  1591,  1505,  1357,  1723,
    1724,   342,  1725,  1726,   735,   319,   395,  1354,   169,   181,
     736,    94,  1669,  1727,   396,  2304,   255,   448,  2060,   752,
     744,   834,  1082,   758,   303,   651,   763,  1728,  1729,  2061,
    2062,   764,   340,   707,  2063,  1730,   708,  1799,  1731,   854,
      86,    87,  1803,  1670,   769,  1809,  1671,    70,    71,   830,
      70,    71,  1813,   804,   408,   709,  1732,  1820,  1968,  1824,
    1817,   946,   816,  1686,  2064,  1733,  1734,   947,   837,  1735,
     652,   440,  1830,    96,   838,  1838,   840,   855,   856,  1283,
    1360,  1842,    70,    71,  1711,   488,  1506,   844,    88,    89,
     846,   710,  2981,   852,  1718,  1518,   673,   711,  2539,    70,
      71,   324,   880,    70,    71,  1060,  2043,  2044,  1061,  1062,
     885,  1747,   909,  1748,   343,   915,  1662,    97,  1749,  1750,
    1751,    70,    71,  1821,   916,  1825,    98,    99,  1757,   939,
     929,  1758,  1365,  1760,    70,  1385,    70,    71,  1831,   102,
    1736,  1839,   835,   936,  1507,   653,    90,  1843,   712,   103,
    1762,  1663,  1763,  1796,   937,   654,   104,  1284,  1875,   950,
    1767,  1768,  2781,   489,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   818,  1774,  1775,   674,  1672,   481,
    1777,  1778,   931,   857,   951,    70,    71,  1780,  2045,  1781,
     580,  2583,  1783,  2644,  1784,   954,  2403,  2404,   344,  2046,
    2047,  1737,  2653,   655,  1396,  1397,   581,  1738,  1863,   345,
    2065,  2662,  1800,  1673,   858,  2602,   955,  1804,  2066,  2067,
    1810,   956,   675,   847,   963,  1739,  2736,  1814,    70,  1466,
     582,   965,  2752,   967,  2048,  1818,  1740,  2757,  2975,   968,
    1855,  1755,  1756,  1674,   971,  1856,   105,  2405,   973,  1857,
     583,  1858,   819,   325,  1285,  1861,   478,  2992,   994,   397,
     490,   326,   398,   327,   480,   676,   995,  1741,  1742,  2068,
     584,  1867,  1002,  1870,   585,  1872,  1873,  1874,  1876,  1011,
     738,  1878,  1879,   713,  1881,  1882,  1013,  1884,  1018,  1886,
    1743,  2143,  2144,   765,   766,   106,  1894,  1613,  1822,   288,
    1826,   848,  1020,  1900,   586,   587,  1033,  1901,  1902,  1903,
    1038,   714,   715,  1832,   977,   978,  1840,   481,  1908,  1869,
     498,  1911,  1844,   716,  1043,   822,  1049,   717,  1050,  1921,
    1052,  1922,   107,  1053,  1924,  1787,  1788,  1744,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,  1058,   588,  1085,   273,
    1913,  1086,   891,   894,   897,  1614,  1087,   907,   589,  1089,
    2722,  1978,  1091,  1979,    70,    71,  1980,  1981,  1933,  1982,
    1100,  1983,  1406,   289,  1097,  2406,  2407,  1985,   499,  3072,
    1102,  1986,  1111,  1926,  1559,  1560,  3076,  1106,    75,   290,
    1992,  1112,   274,  1113,    76,   275,  1115,  2069,  2070,  1116,
    2771,  1915,  1916,   500,   501,    70,    71,  2775,  1620,  1621,
    2881,  1117,   502,  2884,   276,  2886,    70,    71,  1132,  2412,
    2413,   478,   479,   480,   590,   591,  1120,  1133,   291,  1134,
    2885,  2899,  2900,   277,   503,  1135,  1147,    77,  1159,  1615,
    1616,  1161,  1162,  3113,   504,  3114,  2898,  1169,  2914,  1170,
     278,  2903,  1171,  1222,  1617,  1229,   279,  2408,    70,    71,
    2098,  1927,  1789,  1790,  1238,    78,  1240,  1248,  2409,  2410,
    2414,  2099,  2100,  2102,  2803,  1249,  2805,  1303,  2806,  2071,
    1917,  2807,  1304,  2808,  1305,   292,    70,    71,  2101,  1317,
    2072,  2073,  1319,  2112,  1791,  2074,  1330,  2115,  1332,   293,
     592,  1618,  1331,  2411,    70,    71,  2147,   280,  1333,  1334,
    2421,  2422,  1335,  1337,  2887,  1336,  1338,    79,  2097,  1339,
    1340,  1341,  1362,  2146,  2148,  2075,  1367,  1368,  1369,  1372,
     281,  1370,  1371,  2154,  1373,  1391,  2500,  2165,    70,    71,
    2103,  1620,  1621,  2912,  2171,  1928,  1929,  1374,  1375,    70,
      71,    70,    71,  2120,  1620,  1621,  1376,  1392,  2176,  1395,
    1930,  2423,    80,  1398,  2179,   117,  1405,  1404,  2181,  1409,
    2184,  2185,  1412,  2187,  2189,  2190,  1413,  2193,  1419,  1423,
    2196,  2197,  2198,  2199,  2200,  2201,  2202,  2203,  2206,  2208,
    2209,  1421,  2542,  1425,  2211,  2212,  2213,  2214,    70,    71,
    2149,  1620,  1621,  1426,  2220,  2221,  1438,  1931,  2223,  2224,
    2225,  1439,  1458,  1457,  2228,  2229,  1461,  1459,  2415,  2416,
    1462,  1463,  1469,  1464,  1465,  1508,  1470,  2232,  2233,  1520,
    2234,  2235,  1526,  1531,  1522,  1534,  1536,  1537,  2921,  1540,
    1561,  1541,   282,  1544,  1545,  1546,  1554,  1555,  1571,   334,
    1556,  1557,  2563,   120,  1562,  1563,  2973,  2974,  1564,  1565,
    2977,  1572,  2979,  1574,  1575,  1577,  1624,  1579,  1587,  1589,
     283,   284,  1603,  1114,  1604,  2990,  2991,  1625,  1605,  1606,
    2995,  2996,   285,  1609,  2999,  1610,   286,   520,  1611,  3000,
    3001,  1122,  1626,  1627,  1646,  1647,  1664,  1655,  1678,  1676,
    2417,  1677,  2273,  1679,  2274,  2275,  1675,   521,  2276,  2424,
    2425,  2418,  2419,  2278,  2281,  1680,  2283,  2284,  2285,   122,
    2286,  2287,  1693,  2289,   522,  2290,  2291,  1697,  2293,  2294,
    1699,  2296,  1698,  2298,  3071,   495,  1704,   523,  1705,  1706,
    1714,  2302,  1707,  1713,  1716,  1717,  2420,  1746,  3041,  2306,
    1754,  3042,  1765,  1766,  2311,  2312,  3045,  1772,  1270,   524,
    2314,  2280,  1773,   525,  1779,  1269,  1271,  1782,  3049,  2317,
    1297,  1785,  1786,  3052,  1272,  1807,  1828,  1829,   526,  1834,
    1866,  1835,  1836,  1837,  1871,  1846,  1847,  1848,  -493,  1849,
    1850,  2426,  1273,   128,  1851,  1957,  1864,  1865,  1877,  1274,
    1880,  1895,  2427,  2428,  2346,  1883,   558,  1885,   565,   568,
    1890,   573,   577,  1896,  1897,  1909,  1970,  1914,  1923,  1934,
    1925,  1960,  1935,  1969,  1275,   527,  1975,  1936,  2356,  2357,
    1940,  1950,  2331,  2359,  1951,  1276,  1984,  2429,  1990,  2361,
    1991,  1996,  2015,  2337,   662,  2018,  2076,  2342,  3094,  2049,
    2051,  2053,  3097,  2077,  2078,  2079,  2083,  2084,  2355,  2086,
    2087,  2122,  2088,   678,   684,  2091,  2720,  2721,  2094,   691,
    2724,  2725,  3108,   696,  2728,  2729,  2111,  2114,  2119,  1379,
    1277,  2131,  2132,  2133,  2123,  2134,  3115,  2128,  1278,  3116,
    3117,  2135,  2136,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,  2138,  2139,  2140,  2145,  2141,  1211,  2163,  2182,  2168,
     813,  2779,  2142,   815,  2178,  2180,  2186,  1279,  2191,  2194,
    2195,  2217,  1212,  1424,   824,  2210,  2462,  2463,  2218,  2465,
    1280,  1213,  2219,  2383,  2230,  2231,  2566,  2236,  2237,  2238,
    3087,  2239,  1214,  2240,  2241,  2766,  2242,   845,  1281,  2476,
    2477,  2478,  2479,  2480,  2481,  2482,  2483,  2484,  3005,  2243,
    2244,  2889,  2246,  2247,  2248, -1195,  2249,  2250,  2251,  2430,
    2252,  2253,  2254,  2490,  2255,  2492,  2256,  2258,  1215,  2257,
    2890,  2259,  2260,  2261,  2262,  2265,   828,  2263,  2264,  2266,
    2441,  2267,  2499,   481,  2268,  2269,  2891,  2270,  2503,  2271,
    1216,  2272,  2744,  2288,  2292,  3019,  2295,  2297,  2506,  2507,
    2508,  2509,  2510,  2511,  2512,  2513,  2514,  2515,  2299,  2301,
    2518,  2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,
    2528,  2529,  2313,  2532,  2319,  2533,  2534,  2535,  2320,  2321,
    2322,  2323,   718,   719,   720,  2358,  2367,  3005,  2360,   481,
    2543,   930,  2363,  2364,  2365,  2368,  1217,  2369,  2372,   976,
    2374,  2375,  2376,  2380,  2381,  2390,   972,  2382,  2384,   721,
    2869,  2385,  2386,  2391,  2400,  2874,  2393,   979,  2394,  2395,
    1569,  2396,   722,  2401,  2892,  2402,   987,  2431,  2432,  2433,
    2437,  2438,  2893,  2440,  2442,  2443,  2444,  1218,   723,  2448,
    2449,  2558,  2451,  2559,  2453,  2560,  2454,  2562,  2456,   481,
    2564,  2457,  2565,  2459,  2909,  2466,  2468,  2569,  2570,  2471,
    2571,  2572,  2474,  2574,  2485,  2576,  1219,  2486,  2894,  2487,
     724,  2488,  2581,  2489,  2582,  2493,  2531,  2536,  2585,  2537,
     725,  2587,  2540,  2541,  2544,  2547,   949,  2567,  2568,  2573,
    2575,  2577,  2579,  2896,  2586,  1024,  1025,  2895,  2590,  2591,
    2592,  2593,   726,  2594,  2623,  2897,  2626,  2628,  1029,  2631,
    1220,   727,  1221,  1032,  2634,  2635,  2637,  2645,  1715,  2639,
    2640,  2641,  1044,  2646,  3002,  2647,  2648,  2649,  2627,  2650,
    2654,   728,  2589,  2655,  3057,  2656,  2657,  2658,  2659,  2663,
    2664,  3058,  2665,  2672,  2675,  2683,  2686,  2689,  2690,  2691,
    1021,  2694,  2699,   729,  2703,  2719,   862,  1026,  2777,  2785,
    1027,  2783,  2784,  2786,  2789,  1028,  2791,  3054,  2794,  1030,
    2796,  1346,  2797,  2798,  2625,  2692,  1761,  2799,  2801,  2810,
    2812,  2817,  2824,  2833,  2842,  2848,  2852,  2858,  2866,  2879,
    1769,  2911,  2922,     0,  2923,   730,  2925,  2926,  2927,  2928,
     731,  2929,  2930,  2931,  2933,     0,  2939,  2945,     0,  2969,
    2972,  2978,  1107,  1108,  1109,  1110,  2982,   732,   863,  2983,
     733,  2984,   864,  2985,  2986,  2987,  2989,  2994,  3009,     0,
    3010,  3011,  2697,  3012,  3013,  3014,  3021,  3024,  3035,  3043,
       0,  3046,  3047,  2704,  2705,  2706,  2707,  2708,  2709,  2710,
    2711,  2712,  2713,  2714,  1105,  3062,  3064,  3050,  3067,  2717,
     865,   866,  3059,   481,   481,   867,  3060,   481,   481,  3070,
    3096,   481,   481,  2730,  2731,  2732,  2733,  2734,  2735,  3074,
    2737,  2738,  2739,  3081,  3082,  3088,  2753,  2754,  2755,  2756,
    3100,  2758,  2759,  2760,  2761,  2762,  2763,  3101,  2765,  3103,
    3107,  2769,  2770,  3109,     0,  3110,   868,  3111,  3112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1891,
    1892,     0,  1268,     0,     0,  2778,     0,     0,   481,  2780,
       0,     0,     0,  2782,     0,     0,     0,     0,  2787,  2788,
       0,  2790,     0,     0,     0,     0,     0,     0,     0,     0,
     235,     0,     0,   770,   771,     0,     0,     0,     0,     0,
       0,   869,     0,     0,     0,     0,   870,     0,     0,   772,
       0,     0,     0,   236,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   871,  2813,     0,     0,   872,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   873,
       0,     0,   773,   238,     0,     0,  1312,     0,   774,     0,
     239,     0,     0,  1318,     0,     0,     0,   775,     0,   776,
       0,   240,   241,     0,   777,     0,     0,   778,   242,     0,
       0,  2009,     0,   779,     0,     0,     0,   780,     0,     0,
       0,     0,     0,  2019,   781,     0,     0,     0,     0,     0,
       0,     0,   782,     0,     0,     0,  2860,   243,     0,     0,
    2862,   783,     0,     0,     0,  2080,  2081,     0,     0,     0,
    2863,  2864,     0,     0,     0,   244,  2868,   481,     0,     0,
     784,  2873,   481,     0,     0,     0,     0,  2878,     0,     0,
    2882,  2883,     0,   245,   246,  1428,     0,     0,     0,     0,
     247,     0,   785,  2095,     0,     0,     0,  1433,     0,     0,
       0,     0,  2901,  2902,     0,  2904,  2905,  2906,  2907,  2908,
     786,   481,  2910,     0,     0,   248,  2913,     0,     0,     0,
       0,     0,  2113,   787,   788,     0,  2117,  2118,     0,  2924,
       0,     0,     0,     0,  1443,     0,     0,     0,     0,  2932,
       0,     0,     0,     0,  1427,     0,     0,     0,   789,     0,
       0,  1429,     0,     0,     0,  2151,     0,     0,   249,     0,
    2947,     0,     0,     0,     0,     0,  2167,     0,     0,     0,
       0,     0,     0,   790,     0,  2172,  2173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2177,   791,     0,   792,
       0,     0,     0,     0,     0,     0,  1445,  1446,     0,     0,
       0,  1450,  2959,     0,  1453,   793,     0,  2963,     0,  2965,
     794,     0,     0,     0,   250,  2968,  1460,     0,   795,     0,
       0,     0,     0,     0,     0,  1539,   796,   251,     0,     0,
    2976,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   797,     0,  2993,
       0,     0,     0,  2997,     0,  3030,     0,     0,   252,     0,
       0,   798,   799,     0,   800,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3018,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,   801,     0,     0,     0,     0,
    3033,  1691,     0,     0,     0,  3038,   117,     0,  3040,     0,
       0,     0,     0,     0,     0,  3044,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3048,     0,   118,     0,
       0,  3051,     0,     0,     0,  1612,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,    70,    71,     0,
       0,     0,     0,     0,     0,  3061,  3063,  1753,     0,     0,
       0,     0,     0,   117,     0,     0,     0,  1759,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3073,     0,     0,   329,  3075,     0,     0,  3077,     0,
       0,     0,     0,     0,   120,     0,     0,     0,  3083,  3084,
    3085,  3086,     0,   119,     0,     0,     0,     0,     0,     0,
    3095,     0,     0,     0,  3098,     0,   121,     0,     0,     0,
    3069,  3102,     0,  3104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,  3090,     0,     0,  3093,     0,     0,     0,     0,
     122,     0,     0,     0,  2371,     0,     0,     0,     0,     0,
       0,     0,  2377,  2378,     0,     0,     0,     0,     0,     0,
       0,     0,  2387,  2388,     0,     0,     0,     0,  1860,     0,
       0,     0,  2397,  2398,     0,     0,     0,     0,     0,  1550,
       0,     0,     0,   123,     0,     0,  1868,  2434,  2435,  2740,
       0,     0,     0,   124,     0,     0,     0,   122,  2445,  2446,
    2741,     0,   125,   126,     0,  2452,     0,     0,     0,   127,
       0,     0,     0,     0,   128,  2455,  1899,  1607,     0,     0,
       0,     0,     0,     0,     0,     0,  1905,     0,  1270,  2742,
       0,     0,  1862,     0,     0,     0,  1271,     0,     0,     0,
     330,     0,     0,  1920,  1272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1932,     0,  2470,     0,     0,
    1939,     0,  1273,     0,     0,     0,   127,     0,     0,  1274,
    1893,   128,  2743,     0,     0,  1898,     0,     0,     0,     0,
       0,     0,   331,     0,     0,  1904,     0,     0,     0,     0,
       0,     0,     0,     0,  1275,  2495,     0,   129,     0,     0,
       0,     0,     0,     0,     0,  1276,     0,     0,     0,     0,
       0,     0,     0,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     0,   159,     0,     0,
    1277,   332,     0,     0,   160,   161,     0,     0,  1278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     0,
       0,     0,     0,     0,     0,  2096,     0,  1279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2116,     0,     0,     0,     0,  1281,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2744,
       0,  2745,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2152,     0,     0,  2153,     0,     0,
       0,  2164,     0,     0,     0,     0,     0,  2169,  2170,     0,
       0,     0,    70,    71,     0,  2174,     0,     0,     0,     0,
       0,     0,  2175,     0,     0,     0,     0,     0,   117,     0,
       0,  2630,     0,     0,     0,     0,     0,  2746,     0,     0,
       0,  2632,  2633,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2636,     0,     0,     0,     0,     0,     0,     0,
       0,  2638,     0,  2166,  2215,  2642,  2643,     0,   119,     0,
       0,     0,     0,     0,  2651,  2652,  2226,     0,     0,     0,
       0,     0,     0,  2660,  2661,     0,     0,     0,     0,  2666,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2676,
    2677,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2687,     0,  2688,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,  2216,  1993,  1994,  1995,     0,
       0,  2222,     0,     0,     0,     0,  1997,  1998,  1999,     0,
       0,     0,     0,     0,     0,  2010,  2011,  2012,     0,     0,
    2013,  2014,     0,  2016,  2017,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2279,     0,
       0,     0,   122,     0,     0,     0,     0,  2089,  2090,     0,
       0,  2092,  2093,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2300,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2772,     0,     0,     0,     0,  2310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2315,     0,  2316,     0,  2277,     0,     0,     0,     0,
    2282,     0,     0,  2325,     0,     0,  2327,  2328,  2329,  2330,
    2332,   127,  2334,     0,     0,  2335,   128,     0,     0,     0,
    2336,  2338,  2339,  2340,  2341,  2343,     0,  2344,  2345,     0,
       0,  2303,  2347,  2348,  2349,  2350,     0,  2309,  2351,  2352,
       0,     0,     0,     0,  2353,  2354,     0,     0,     0,     0,
    2815,     0,     0,  2816,     0,     0,  2818,     0,     0,     0,
       0,     0,     0,     0,  2326,     0,  2827,     0,     0,     0,
       0,  2333,     0,     0,     0,  2836,     0,     0,     0,     0,
       0,     0,     0,     0,  2845,     0,     0,     0,     0,     0,
       0,  2847,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2851,     0,     0,     0,     0,     0,  2854,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
    2461,     0,     0,  2464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2469,     0,     0,  2472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2915,     0,   119,     0,  2920,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2491,
       0,     0,     0,     0,     0,     0,     0,     0,  2460,     0,
       0,     0,     0,     0,     0,     0,  2948,     0,     0,  1919,
       0,     0,     0,  2949,     0,     0,     0,     0,  2473,     0,
       0,     0,  2951,     0,   117,   120,     0,     0,     0,     0,
       0,  2953,     0,     0,     0,     0,     0,  2956,     0,     0,
       0,  2958,     0,     0,     0,     0,  2530,     0,     0,     0,
       0,     0,     0,     0,  2496,  2497,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2498,     0,     0,  2546,
       0,  2501,  2502,     0,     0,     0,  2504,  2505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2988,     0,     0,     0,     0,     0,     0,  2362,     0,
       0,     0,   120,     0,     0,     0,     0,  2538,     0,     0,
       0,  2370,     0,     0,     0,  3008,     0,     0,  2545,     0,
       0,  2373,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2580,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2588,
     127,     0,     0,     0,     0,   128,  2595,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,     0,
       0,  2561,     0,     0,     0,     0,     0,     0,  2613,     0,
       0,     0,     0,     0,     0,     0,     0,  2622,     0,     0,
       0,  2624,  2578,  2458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2596,     0,     0,
       0,     0,  2600,     0,     0,     0,     0,     0,  2605,     0,
       0,     0,     0,  2609,     0,     0,     0,  2612,     0,  2614,
       0,  2616,   128,     0,  2619,     0,  2621,     0,     0,     0,
       0,  3080,     0,     0,     0,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2695,     0,     0,  2698,     0,
       0,     0,     0,     0,     0,     0,  2702,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2715,     0,     0,  2718,     0,     0,     0,     0,
       0,  2723,     0,     0,  2726,  2727,     0,     0,     0,  1174,
    1175,  1176,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
    1177,  1178,  2773,  2774,  1179,     0,     0,  1180,     0,     0,
       0,     0,     0,     0,  1181,     0,     0,     0,  1182,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1183,  1184,
       0,     0,     0,     0,     0,     0,  1185,  1186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1187,     0,     0,
       0,     0,  2764,     0,  1188,  2800,     0,     0,     0,     0,
       0,     0,  1189,     0,     0,     0,  1190,  1191,  2776,     0,
    1192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2629,   117,     0,     0,     0,     0,     0,
    2795,     0,  1194,     0,     0,     0,     0,  2802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1195,     0,     0,  2809,     0,  2811,     0,     0,     0,
       0,     0,     0,   548,   549,     0,  2856,     0,     0,   550,
       0,     0,     0,  2667,  2668,  2669,  2670,  2671,  1196,  2673,
    2674,     0,     0,     0,  2678,  2679,  2680,  2681,  2682,     0,
    2684,  2685,   551,   552,     0,     0,     0,     0,     0,     0,
    2877,     0,   120,     0,     0,     0,     0,     0,     0,     0,
    1197,  2888,  1198,     0,     0,     0,     0,     0,  1199,  1200,
       0,     0,     0,     0,  2855,     0,     0,     0,     0,     0,
    2859,     0,     0,     0,  2861,  1201,  1202,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1203,  1204,     0,
    2867,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,  2938,
       0,     0,     0,  2944,     0,     0,     0,  1205,     0,  1206,
       0,     0,     0,   553,     0,     0,     0,     0,     0,     0,
       0,     0,  1207,     0,  1208,     0,     0,     0,     0,     0,
       0,  1209,     0,   554,     0,  2918,  2919,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   679,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,   555,     0,
    2961,  2962,     0,  2964,     0,  1210,     0,     0,  2966,  2967,
       0,     0,   128,     0,     0,  2970,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   680,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2814,     0,     0,     0,     0,     0,     0,  2998,
       0,  2819,  2820,  2821,  2822,  2823,     0,  2825,  2826,     0,
    2828,  2829,  2830,  2831,  2832,     0,  2834,  2835,   556,  2837,
    2838,  2839,  2840,  2841,     0,  2843,  2844,   120,  2846,     0,
       0,  3022,     0,     0,     0,     0,     0,     0,  2849,  2850,
    2980,     0,     0,   681,     0,     0,     0,     0,     0,  2853,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,   557,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,   682,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  3068,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3078,     0,     0,     0,     0,
    3053,   119,   117,     0,     0,     0,     0,     0,     0,  3089,
       0,     0,  3092,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,  3065,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2950,
       0,     0,   119,     0,     0,     0,     0,     0,  2952,   120,
       0,     0,     0,     0,     0,     0,     0,  2954,     0,  2955,
       0,     0,     0,  2957,     0,     0,     0,     0,     0,     0,
    3091,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,  3105,   683,     0,  3106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,  1472,  1473,  1474,     0,     0,
       0,     0,     0,     0,     0,     0,   122,     0,     0,     0,
       0,  3025,     0,  3026,     0,  3027,     0,     0,  3028,     0,
    3029,     0,     0,     0,     0,   117,  1475,  1476,     0,     0,
    1477,     0,     0,     0,   127,     0,     0,  1478,     0,   128,
    1479,     0,     0,     0,  1480,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1481,  1482,     0,     0,     0,     0,
       0,     0,  1483,     0,     0,     0,     0,     0,   563,     0,
       0,     0,     0,  1484,     0,   127,     0,     0,     0,     0,
     128,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1485,  1486,     0,     0,  1487,     0,     0,     0,
       0,     0,     0,     0,   567,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,  1488,     0,     0,     0,
     117,     0,  1538,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1489,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,  1490,   117,     0,
     120,     0,     0,     0,     0,     0,     0,  1491,     0,   122,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1492,     0,  1493,     0,
       0,     0,     0,     0,  1494,  1495,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2324,     0,
       0,     0,  1496,   128,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,  1497,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1498,     0,  1499,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1500,     0,     0,     0,
     128,     0,     0,     0,     0,     0,     0,  1501,     0,     0,
       0,     0,   122,     0,     0,     0,     0,     0,   564,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,     0,
       0,  1502,     0,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     1,     0,     0,     2,     0,     0,
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
       0,     0,     0,     0,     0,    41,     0,     0,     0,    42,
       0,   187,     0,    43,   188,    44,    45,   189,    46,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,     0,    48,
       0,   191,   192,   193,     0,    49,     0,     0,     0,     0,
       0,   194,     0,   195,     0,     0,     0,     0,   196,     0,
     197,   198,   199,    50,    51,     0,     0,     0,   200,     0,
     201,     0,     0,     0,     0,     0,    52,     0,    53,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    55,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,     0,   203,     0,     0,     0,    58,     0,     0,
       0,     0,   204,     0,   205,   206,     0,   207,   208,     0,
       0,   209,     0,  1152,     0,   210,     0,   211,  1153,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,   214,     0,     0,     0,   215,     0,
       0,     0,     0,     0,     0,     0,   216,  1583,     0,     0,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,     0,
     219,     0,     0,     0,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,     0,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   225,     0,     0,     0,     0,     0,     0,     0,     0,
     226,     0,     0,     0,     0,     0,     0,     0,   227,     0,
       0,     0,     0,     0,   228,     0,   229,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,  1584,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158
};

static const yytype_int16 yycheck[] =
{
       3,  1668,    56,   792,  1038,  1901,   539,  1903,    11,   313,
     787,   788,     5,    16,    16,   495,     3,     4,     5,  1175,
       4,    33,     5,     5,     4,   505,     4,     0,     5,    18,
      26,    60,    27,     5,    37,     3,     4,   103,  1026,  1027,
    1028,    33,     4,    46,     4,     3,     4,    66,     5,     3,
       4,    27,    55,     4,    13,    58,    18,  1142,    61,   146,
    1145,     4,    65,    42,     4,    68,     4,     3,     4,    72,
      73,     5,     5,    76,     3,     4,    79,    80,    45,     4,
      83,  1166,    37,    86,    87,     3,     4,    90,    59,     3,
       4,    69,    95,   112,  1333,    48,    28,    21,  1337,    16,
      16,    37,     3,     4,    12,    64,   109,   110,   111,   112,
     113,   114,     3,     4,   143,     3,     4,  1105,   181,     4,
      45,     3,     4,    48,   120,    92,   151,   130,  1367,  1368,
    1369,   151,   251,   105,     3,     4,   188,    64,   173,     4,
     136,   113,     5,     4,     5,   197,    37,   238,    92,    21,
      41,   129,   271,     3,     4,    37,    81,    88,     3,     4,
      33,    28,   165,    16,    89,     4,     5,   129,   123,    32,
     205,   196,     3,     4,   105,     0,   196,  2310,    27,     4,
       3,     4,    67,    64,     3,     4,    21,   190,   275,    27,
     167,    41,   195,   144,  2327,  2328,  2329,   110,   182,  2332,
      16,  2334,  2335,   130,   129,  2338,  2339,  2340,    69,   145,
    2343,  2344,    62,    51,   206,  2348,    54,  2350,  2351,   151,
    2353,     3,     4,   252,    21,   291,   134,    65,   119,   173,
     155,    62,    93,   296,   213,    15,   232,   151,   267,   228,
     195,   209,   197,   262,   199,   200,    64,   214,   226,   340,
     246,   104,    90,   212,   145,   210,   251,   235,   236,   175,
     279,   280,   216,   145,   226,   130,   228,   270,   129,   119,
     108,   242,   227,   235,   236,   251,    69,   215,   221,     4,
       5,   284,   196,     4,   151,   339,   229,   230,  1077,   214,
     129,   152,   252,    20,    64,    64,   209,   318,   301,   302,
      16,   226,   314,   211,     5,   282,     4,   289,   209,   338,
     235,   236,     3,     4,   317,   233,   319,    21,   243,   253,
     245,     4,   314,   266,   313,   216,   329,   330,  2461,   332,
     333,  2464,   335,   206,   183,   294,  2469,   319,    34,  2472,
     320,   265,   345,   276,   301,   318,   305,   340,   828,   274,
     303,   313,   330,   340,     4,   358,   359,   340,  2491,   378,
     379,    64,   339,   347,   336,   226,   216,   327,   330,   327,
     338,    69,   289,   327,   235,   236,   327,   332,   305,   382,
     320,   340,   385,   386,   386,   388,    69,   226,   384,   392,
     393,   327,     4,   265,    64,     4,   235,   236,   327,   331,
     403,   404,   380,   707,   129,   330,   251,   410,   129,   387,
     388,  1200,   415,   416,   382,   383,   265,   133,   380,    69,
     423,   237,   347,   426,    21,   387,   388,   209,   251,  1218,
     265,   129,   251,   215,    21,   316,   327,   338,   381,   327,
     220,   314,   445,   446,   163,   327,   129,  2580,   158,   452,
     453,   454,   455,   456,   457,   380,   459,  1445,   327,   462,
     341,   215,   387,   388,   331,  1453,   167,   316,   265,   330,
     186,  1627,   322,    53,   477,   336,   258,  1254,   481,   129,
    2613,   382,   383,   486,   487,   488,   489,   490,   491,   257,
     493,   330,   495,   496,   497,    27,     4,   336,   316,  1655,
      41,   226,   505,   506,   286,   226,     4,   987,   347,  1286,
     235,   236,   328,  1598,   235,   236,  1601,   129,    38,   380,
     129,   237,  1678,   341,   385,   105,   387,   388,   226,    49,
      35,     4,   286,    31,   261,    99,   116,   235,   236,   494,
     187,   380,   233,   226,    15,    66,   316,   316,   387,   388,
    1030,   389,   235,   236,   316,   119,   338,   560,   561,    79,
     147,   265,  2695,     3,     4,    27,     5,    64,  1807,   149,
     289,   341,   341,     3,     4,   578,   226,    11,   119,  3004,
       5,   282,  2715,     5,    29,   235,   236,   113,    13,    14,
    2723,   112,    41,  2726,  2727,    27,    47,     4,     5,   320,
     382,   383,   113,    69,   251,   330,   660,    13,    14,   330,
     115,   614,   328,   316,   226,   136,    31,   226,    69,    59,
      69,    64,    56,   235,   236,    41,   235,   236,     4,   584,
    3055,     4,   330,   130,    93,    86,     4,    67,   341,    64,
     257,     5,    76,   163,     4,   209,   316,   330,    83,    13,
      14,   183,     3,     4,   657,   380,   105,   292,    64,   380,
     168,   169,   387,   388,   113,   300,   387,   388,   265,    64,
     119,   341,   106,   142,     0,   216,   173,   324,   265,   177,
     330,  2577,   380,   638,     4,    47,   300,   130,   208,   387,
     388,    92,   141,   219,   128,     5,   750,   380,   132,    59,
      64,   313,   705,   119,   387,   388,  1495,    69,   219,   217,
      66,   298,   715,   147,   163,   769,     4,  1506,   330,   164,
      41,   330,   227,  2856,    86,   187,    13,    14,     3,     4,
     380,    92,   181,   265,   185,   130,     5,   387,   388,    59,
     238,   262,   215,   292,  2877,     5,   168,   169,   193,   329,
     276,   300,   197,     5,   295,   187,   112,   192,   279,   280,
     136,     4,   177,   283,   767,   276,   274,   265,   380,     4,
     219,   380,   173,   293,   216,   387,   388,    64,   387,   388,
       4,     5,   251,   786,   316,     5,   789,   212,   213,   251,
      59,    13,    14,    13,    14,   315,    20,   270,   119,    68,
     216,    32,   242,   323,     5,   278,   212,   213,   305,   812,
     255,   260,   173,    92,   817,   818,   819,   820,     5,   251,
     823,   341,   825,   238,   827,   828,   829,   276,  2961,  2962,
       4,  2964,  1312,  2966,  2967,    93,   126,  2970,   318,    63,
     289,   203,    64,   278,    64,    69,    69,   316,   212,   213,
     265,   128,   274,     5,   299,   231,    47,   378,   379,     5,
     135,   188,   305,   308,   309,   919,   124,    13,    14,   294,
     221,   320,     3,     4,    98,   326,    67,    34,    69,   295,
     305,   306,   242,    69,   333,   310,   335,   336,   294,     5,
     341,  1925,    94,   327,   173,   216,    64,  3030,   122,   305,
     306,   904,    15,   906,   266,   316,   262,    69,   911,   912,
     305,   914,   915,   916,   917,   340,  1904,   141,    64,  2812,
    2005,   258,   242,   279,   280,   212,   213,   376,   931,   932,
     294,     4,   156,   289,   340,   938,   939,     4,    11,   163,
    2025,   305,   306,    92,    31,  3078,   310,   171,  2104,   207,
    2035,   317,    83,  2038,   316,   958,   959,   960,   961,   962,
    2045,   964,   130,   966,   326,  2121,   224,     3,     4,    64,
    1450,     5,    94,   242,   126,  2060,   340,    29,  2063,   982,
     983,   984,    16,   986,   987,   988,  2071,   990,  1765,  2074,
     212,   213,   212,   213,  2150,     4,     5,  2236,  2237,  2238,
    2239,  2240,  2241,  2242,  2243,  2244,     4,   294,  1011,   233,
    1013,    69,   203,   100,   142,    22,   168,   169,   305,   306,
    1023,    64,   378,   379,   173,    69,    93,  1030,  1031,   253,
      38,    77,   290,  1036,   258,   130,   260,    13,    14,   215,
    2933,    49,    64,    41,  1150,    52,    32,    92,    55,     5,
    1053,  1157,  2945,   340,  1057,    57,  1011,     3,     4,   187,
     130,   192,   214,   130,   288,   289,   212,   213,  1071,  1072,
    1073,    79,   294,   297,   294,   266,  1079,    22,   336,     4,
      87,  1084,     5,   305,   306,   305,   306,   130,    64,   347,
     310,     4,   179,    95,   318,     4,  1099,   141,  1152,   135,
      22,    64,   278,    64,     4,    27,    64,    52,   130,    64,
      55,   118,   164,    58,   121,  1118,    64,  2273,   340,  1151,
     340,   119,   274,   251,    64,   316,  1158,   171,   173,    51,
      52,    75,    54,    55,     5,   326,    15,   305,    14,    15,
       4,   193,    87,    65,    23,   197,    22,   278,   294,   301,
       5,   153,   376,     5,    30,   163,     4,    79,    80,   305,
     306,     5,    38,    47,   310,    87,    50,   130,    90,   130,
     168,   169,   130,   118,     5,   130,   121,     3,     4,     4,
       3,     4,   130,     5,    60,    69,   108,    64,   316,    64,
     130,   278,     5,  1196,   340,   117,   118,   284,     4,   121,
     208,    77,    64,   255,     4,    64,     4,   168,   169,    41,
     305,    64,     3,     4,  1217,    41,   260,     5,   216,   217,
       4,   105,  2889,   103,  1227,    16,   163,   111,  2216,     3,
       4,   227,     5,     3,     4,   618,   212,   213,   621,   622,
       4,  1244,     4,  1246,   188,   301,   253,   299,  1251,  1252,
    1253,     3,     4,   130,     4,   130,   308,   309,  1261,    11,
       4,  1264,   305,  1266,     3,     4,     3,     4,   130,    88,
     192,   130,   274,     4,   318,   283,   274,   130,   162,    98,
    1283,   288,  1285,   305,     5,   293,   105,   119,    62,     4,
    1293,  1294,    62,   119,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,    41,  1308,  1309,   244,   253,  1312,
    1313,  1314,   135,   274,   221,     3,     4,  1320,   294,  1322,
      46,  2309,  1325,  2408,  1327,     4,    13,    14,   272,   305,
     306,   253,  2417,   341,     4,     5,    62,   259,  1392,   283,
       5,  2426,   305,   288,   305,  2333,     4,   305,    13,    14,
     305,     4,   289,    41,     4,   277,  2512,   305,     3,     4,
      86,     4,  2518,     4,   340,   305,   288,  2523,  2882,     4,
    1373,     4,     5,   318,     5,  1378,   195,    64,     5,  1382,
     106,  1384,   119,   379,   216,  1388,     8,  2901,     5,   268,
     216,   387,   271,   389,    10,   332,   300,   319,   320,    64,
     126,  1404,   188,  1406,   130,  1408,  1409,  1410,  1411,     4,
     286,  1414,  1415,   297,  1417,  1418,     4,  1420,   197,  1422,
     342,     4,     5,   299,   300,   244,  1429,    87,   305,    26,
     305,   119,   188,  1436,   160,   161,     4,  1440,  1441,  1442,
     220,   325,   326,   305,   483,   484,   305,  1450,  1451,  1404,
      36,  1454,   305,   337,   220,   331,     5,   341,     5,  1462,
       4,  1464,   281,   220,  1467,    43,    44,   389,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,     4,   223,   210,     4,
    1455,   210,   378,   379,   380,   165,    69,   383,   234,    69,
    2498,  1514,    69,  1516,     3,     4,  1519,  1520,  1473,  1522,
       5,  1524,    11,   120,   251,   212,   213,  1530,   114,  3043,
     252,  1534,     4,    87,  1133,  1134,  3050,     5,   209,   136,
    1543,     4,    47,     4,   215,    50,     4,   212,   213,     4,
    2538,    24,    25,   139,   140,     3,     4,  2545,     6,     7,
    2732,   220,   148,  2735,    69,  2737,     3,     4,    92,    13,
      14,     8,     9,    10,   300,   301,     5,    92,   175,    92,
    2736,  2753,  2754,    88,   170,     5,    92,   258,     5,   249,
     250,     4,     4,  3107,   180,  3109,  2752,     5,  2770,     5,
     105,  2757,     4,   311,   264,     5,   111,   294,     3,     4,
       5,   165,   190,   191,   105,   286,     4,     4,   305,   306,
      64,  1624,  1625,  1626,  2612,     5,  2614,    16,  2616,   294,
     103,  2619,    16,  2621,     4,   232,     3,     4,     5,     4,
     305,   306,     4,  1646,   222,   310,     4,  1650,     5,   246,
     376,   311,   103,   340,     3,     4,     5,   162,     5,    92,
      13,    14,    92,     4,  2738,    92,     5,   338,  1623,     5,
      92,     5,     4,  1676,  1677,   340,     5,     5,     4,     4,
     185,     5,     5,  1686,     4,    67,  2166,  1690,     3,     4,
       5,     6,     7,  2767,  1697,   249,   250,     5,     5,     3,
       4,     3,     4,     5,     6,     7,     5,     4,  1711,     4,
     264,    64,   383,     4,  1717,    19,     5,    11,  1721,    11,
    1723,  1724,     4,  1726,  1727,  1728,     4,  1730,     4,     4,
    1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,
    1743,     5,  2222,     4,  1747,  1748,  1749,  1750,     3,     4,
       5,     6,     7,     4,  1757,  1758,     5,   311,  1761,  1762,
    1763,     5,     5,   182,  1767,  1768,   173,     4,   212,   213,
     173,     4,    39,     5,     4,   311,    39,  1780,  1781,   288,
    1783,  1784,   320,   313,   288,     5,     4,     4,  2776,     4,
     302,     5,   297,     5,     5,     5,     4,     4,     4,    37,
       5,     5,  2282,   107,   302,     5,  2880,  2881,     5,     5,
    2884,     4,  2886,     5,     5,     5,   265,     5,     5,     5,
     325,   326,     4,   699,     4,  2899,  2900,   265,     5,     5,
    2904,  2905,   337,     4,  2908,     5,   341,    56,     5,  2913,
    2914,   717,   265,   113,   265,     5,     4,   113,   113,   265,
     294,   265,  1855,     5,  1857,  1858,    41,    76,  1861,   212,
     213,   305,   306,  1866,  1867,   237,  1869,  1870,  1871,   173,
    1873,  1874,    41,  1876,    93,  1878,  1879,   271,  1881,  1882,
       5,  1884,   237,  1886,  3040,   123,     4,   106,     5,     5,
      58,  1894,   237,   237,     4,     4,   340,     4,  2972,  1902,
       5,  2975,     5,     5,  1907,  1908,  2980,     5,    97,   128,
    1913,  1866,     5,   132,     4,   791,   105,   119,  2992,  1922,
     796,   119,     4,  2997,   113,     5,     5,     5,   147,     4,
      11,     5,     5,     4,    11,     5,     5,     4,     0,     5,
       5,   294,   131,   247,     4,   187,     5,     5,     4,   138,
       4,     4,   305,   306,  1957,     5,   194,     5,   196,   197,
       5,   199,   200,     4,     4,     4,   276,     5,     4,   265,
       5,   251,   265,     4,   163,   194,   233,   265,  1981,  1982,
     265,   265,  1937,  1986,   265,   174,   220,   340,     4,  1992,
       4,     4,     4,  1948,   232,     4,   302,  1952,  3072,     5,
       5,     5,  3076,     5,     5,     5,     4,     4,    99,     5,
       4,   265,     4,   251,   252,     4,  2496,  2497,     5,   257,
    2500,  2501,  3096,   261,  2504,  2505,     5,     5,     5,   905,
     219,   344,   344,     4,   265,     4,  3110,   265,   227,  3113,
    3114,     4,     4,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,     4,     4,     4,     4,   344,    69,     4,   251,     5,
     318,  2561,   344,   321,     5,     5,   251,   276,     4,   251,
     251,     5,    85,   969,   332,   251,  2099,  2100,     4,  2102,
     289,    94,     4,   302,     5,     4,    11,     5,     5,     4,
    3065,     5,   105,     5,     4,   340,     5,   355,   307,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2917,     5,
       4,   390,     5,     5,     4,   318,     5,     5,     4,   302,
       5,     5,     4,  2146,     5,  2148,     5,     5,   141,     4,
     390,     5,     4,     4,     4,     4,   334,     5,     5,     4,
     302,     5,  2165,  2166,     5,     4,   390,     5,  2171,     5,
     163,     4,   318,     5,     4,  2932,     5,     5,  2181,  2182,
    2183,  2184,  2185,  2186,  2187,  2188,  2189,  2190,     4,     4,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,     4,  2206,     5,  2208,  2209,  2210,     5,     5,
       5,     5,    69,    70,    71,     4,     4,  3006,     5,  2222,
    2223,   399,     5,     5,     5,     4,   219,     5,     4,   482,
       5,     5,     5,     4,     4,     4,   474,     5,     5,    96,
    2720,     5,     5,     4,     4,  2725,     5,   485,     5,     5,
    1141,     5,   109,     4,   390,     5,   494,     5,     5,     5,
       4,     4,   390,     5,     5,     5,     5,   260,   125,     4,
       4,  2274,     5,  2276,     4,  2278,     4,  2280,     4,  2282,
    2283,     4,  2285,     5,  2764,     5,     5,  2290,  2291,     5,
    2293,  2294,     5,  2296,     4,  2298,   289,     4,   390,     5,
     157,     4,  2305,     4,  2307,     5,     5,     4,  2311,     4,
     167,  2314,     5,     5,     4,     4,   430,     5,     5,     5,
       4,     4,     4,  2747,     5,   563,   564,   390,     5,     5,
       5,     5,   189,     5,     4,   390,     5,     4,   576,     4,
     333,   198,   335,   581,     4,     4,     4,     4,  1224,     5,
       5,     5,   590,     4,  2915,     5,     5,     5,  2361,     5,
       4,   218,  2317,     4,   390,     5,     5,     5,     5,     4,
       4,  3006,     5,     4,     4,     4,     4,     4,     4,     4,
     558,     4,     4,   240,     4,     4,    64,   565,     4,     4,
     568,     5,     5,     4,     4,   573,     4,  3002,     5,   577,
       4,   867,     5,     4,  2359,  2459,  1282,     5,     5,     5,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    1296,     5,     4,    -1,     5,   282,     5,     4,     4,     4,
     287,     4,     4,     4,     4,    -1,     5,     4,    -1,     5,
       4,     4,   680,   681,   682,   683,     5,   304,   126,     4,
     307,     5,   130,     5,     5,     4,     4,     4,     4,    -1,
       5,     5,  2465,     4,     4,     4,     4,     4,     4,     4,
      -1,     5,     4,  2476,  2477,  2478,  2479,  2480,  2481,  2482,
    2483,  2484,  2485,  2486,   662,  3018,  3019,     4,     4,  2492,
     168,   169,     5,  2496,  2497,   173,     5,  2500,  2501,     4,
       4,  2504,  2505,  2506,  2507,  2508,  2509,  2510,  2511,     5,
    2513,  2514,  2515,     5,     5,     5,  2519,  2520,  2521,  2522,
       5,  2524,  2525,  2526,  2527,  2528,  2529,     5,  2531,     5,
       4,  2534,  2535,     4,    -1,     5,   214,     5,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1425,
    1426,    -1,   790,    -1,    -1,  2558,    -1,    -1,  2561,  2562,
      -1,    -1,    -1,  2566,    -1,    -1,    -1,    -1,  2571,  2572,
      -1,  2574,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    20,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   301,  2627,    -1,    -1,   305,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,
      -1,    -1,    63,    82,    -1,    -1,   824,    -1,    69,    -1,
      89,    -1,    -1,   831,    -1,    -1,    -1,    78,    -1,    80,
      -1,   100,   101,    -1,    85,    -1,    -1,    88,   107,    -1,
      -1,  1562,    -1,    94,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,  1574,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,  2699,   136,    -1,    -1,
    2703,   122,    -1,    -1,    -1,  1596,  1597,    -1,    -1,    -1,
    2713,  2714,    -1,    -1,    -1,   154,  2719,  2720,    -1,    -1,
     141,  2724,  2725,    -1,    -1,    -1,    -1,  2730,    -1,    -1,
    2733,  2734,    -1,   172,   173,   973,    -1,    -1,    -1,    -1,
     179,    -1,   163,  1619,    -1,    -1,    -1,   985,    -1,    -1,
      -1,    -1,  2755,  2756,    -1,  2758,  2759,  2760,  2761,  2762,
     181,  2764,  2765,    -1,    -1,   204,  2769,    -1,    -1,    -1,
      -1,    -1,  1648,   194,   195,    -1,  1652,  1653,    -1,  2782,
      -1,    -1,    -1,    -1,  1022,    -1,    -1,    -1,    -1,  2792,
      -1,    -1,    -1,    -1,   972,    -1,    -1,    -1,   219,    -1,
      -1,   979,    -1,    -1,    -1,  1681,    -1,    -1,   247,    -1,
    2813,    -1,    -1,    -1,    -1,    -1,  1692,    -1,    -1,    -1,
      -1,    -1,    -1,   244,    -1,  1701,  1702,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1712,   258,    -1,   260,
      -1,    -1,    -1,    -1,    -1,    -1,  1024,  1025,    -1,    -1,
      -1,  1029,  2855,    -1,  1032,   276,    -1,  2860,    -1,  2862,
     281,    -1,    -1,    -1,   303,  2868,  1044,    -1,   289,    -1,
      -1,    -1,    -1,    -1,    -1,  1113,   297,   316,    -1,    -1,
    2883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,    -1,  2902,
      -1,    -1,    -1,  2906,    -1,  2959,    -1,    -1,   347,    -1,
      -1,   332,   333,    -1,   335,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2932,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,
    2963,  1199,    -1,    -1,    -1,  2968,    19,    -1,  2971,    -1,
      -1,    -1,    -1,    -1,    -1,  2978,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2989,    -1,    41,    -1,
      -1,  2994,    -1,    -1,    -1,  1173,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,  3018,  3019,  1255,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,  1265,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3044,    -1,    -1,    40,  3048,    -1,    -1,  3051,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,  3061,  3062,
    3063,  3064,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
    3073,    -1,    -1,    -1,  3077,    -1,   129,    -1,    -1,    -1,
    3035,  3084,    -1,  3086,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,  3067,    -1,    -1,  3070,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,  2015,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2023,  2024,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2033,  2034,    -1,    -1,    -1,    -1,  1386,    -1,
      -1,    -1,  2043,  2044,    -1,    -1,    -1,    -1,    -1,  1127,
      -1,    -1,    -1,   216,    -1,    -1,  1404,  2058,  2059,    58,
      -1,    -1,    -1,   226,    -1,    -1,    -1,   173,  2069,  2070,
      69,    -1,   235,   236,    -1,  2076,    -1,    -1,    -1,   242,
      -1,    -1,    -1,    -1,   247,  2086,  1434,  1165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1444,    -1,    97,    98,
      -1,    -1,  1390,    -1,    -1,    -1,   105,    -1,    -1,    -1,
     216,    -1,    -1,  1461,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1473,    -1,  2113,    -1,    -1,
    1478,    -1,   131,    -1,    -1,    -1,   242,    -1,    -1,   138,
    1428,   247,   141,    -1,    -1,  1433,    -1,    -1,    -1,    -1,
      -1,    -1,   258,    -1,    -1,  1443,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,  2151,    -1,   330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,    -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,
     219,   327,    -1,    -1,   387,   388,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,    -1,
      -1,    -1,    -1,    -1,    -1,  1623,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1651,    -1,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,
      -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1682,    -1,    -1,  1685,    -1,    -1,
      -1,  1689,    -1,    -1,    -1,    -1,    -1,  1695,  1696,    -1,
      -1,    -1,     3,     4,    -1,  1703,    -1,    -1,    -1,    -1,
      -1,    -1,  1710,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,  2372,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,
      -1,  2382,  2383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2402,    -1,  1691,  1752,  2406,  2407,    -1,    59,    -1,
      -1,    -1,    -1,    -1,  2415,  2416,  1764,    -1,    -1,    -1,
      -1,    -1,    -1,  2424,  2425,    -1,    -1,    -1,    -1,  2430,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2440,
    2441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2451,    -1,  2453,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1753,  1544,  1545,  1546,    -1,
      -1,  1759,    -1,    -1,    -1,    -1,  1554,  1555,  1556,    -1,
      -1,    -1,    -1,    -1,    -1,  1563,  1564,  1565,    -1,    -1,
    1568,  1569,    -1,  1571,  1572,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1866,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,  1605,  1606,    -1,
      -1,  1609,  1610,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1890,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2539,    -1,    -1,    -1,    -1,  1906,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1919,    -1,  1921,    -1,  1863,    -1,    -1,    -1,    -1,
    1868,    -1,    -1,  1931,    -1,    -1,  1934,  1935,  1936,  1937,
    1938,   242,  1940,    -1,    -1,  1943,   247,    -1,    -1,    -1,
    1948,  1949,  1950,  1951,  1952,  1953,    -1,  1955,  1956,    -1,
      -1,  1899,  1960,  1961,  1962,  1963,    -1,  1905,  1966,  1967,
      -1,    -1,    -1,    -1,  1972,  1973,    -1,    -1,    -1,    -1,
    2631,    -1,    -1,  2634,    -1,    -1,  2637,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1932,    -1,  2647,    -1,    -1,    -1,
      -1,  1939,    -1,    -1,    -1,  2656,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2665,    -1,    -1,    -1,    -1,    -1,
      -1,  2672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2683,    -1,    -1,    -1,    -1,    -1,  2689,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
    2098,    -1,    -1,  2101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2112,    -1,    -1,  2115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2771,    -1,    59,    -1,  2775,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2096,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2817,    -1,    -1,     4,
      -1,    -1,    -1,  2824,    -1,    -1,    -1,    -1,  2116,    -1,
      -1,    -1,  2833,    -1,    19,   107,    -1,    -1,    -1,    -1,
      -1,  2842,    -1,    -1,    -1,    -1,    -1,  2848,    -1,    -1,
      -1,  2852,    -1,    -1,    -1,    -1,  2204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2152,  2153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2164,    -1,    -1,  2227,
      -1,  2169,  2170,    -1,    -1,    -1,  2174,  2175,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2897,    -1,    -1,    -1,    -1,    -1,    -1,  1996,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,  2215,    -1,    -1,
      -1,  2009,    -1,    -1,    -1,  2921,    -1,    -1,  2226,    -1,
      -1,  2019,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2302,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2317,
     242,    -1,    -1,    -1,    -1,   247,  2324,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,  2279,    -1,    -1,    -1,    -1,    -1,    -1,  2346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2355,    -1,    -1,
      -1,  2359,  2300,  2091,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2325,    -1,    -1,
      -1,    -1,  2330,    -1,    -1,    -1,    -1,    -1,  2336,    -1,
      -1,    -1,    -1,  2341,    -1,    -1,    -1,  2345,    -1,  2347,
      -1,  2349,   247,    -1,  2352,    -1,  2354,    -1,    -1,    -1,
      -1,  3057,    -1,    -1,    -1,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2463,    -1,    -1,  2466,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2474,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2490,    -1,    -1,  2493,    -1,    -1,    -1,    -1,
      -1,  2499,    -1,    -1,  2502,  2503,    -1,    -1,    -1,    20,
      21,    22,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
      51,    52,  2540,  2541,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,  2530,    -1,   105,  2593,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,   117,   118,  2546,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2371,    19,    -1,    -1,    -1,    -1,    -1,
    2588,    -1,   163,    -1,    -1,    -1,    -1,  2595,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,    -1,    -1,  2622,    -1,  2624,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    -1,  2694,    -1,    -1,    74,
      -1,    -1,    -1,  2431,  2432,  2433,  2434,  2435,   219,  2437,
    2438,    -1,    -1,    -1,  2442,  2443,  2444,  2445,  2446,    -1,
    2448,  2449,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
    2728,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,  2739,   253,    -1,    -1,    -1,    -1,    -1,   259,   260,
      -1,    -1,    -1,    -1,  2692,    -1,    -1,    -1,    -1,    -1,
    2698,    -1,    -1,    -1,  2702,   276,   277,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,   289,    -1,
    2718,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,  2797,
      -1,    -1,    -1,  2801,    -1,    -1,    -1,   318,    -1,   320,
      -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,   335,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,   208,    -1,  2773,  2774,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
    2858,  2859,    -1,  2861,    -1,   376,    -1,    -1,  2866,  2867,
      -1,    -1,   247,    -1,    -1,  2873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2630,    -1,    -1,    -1,    -1,    -1,    -1,  2907,
      -1,  2639,  2640,  2641,  2642,  2643,    -1,  2645,  2646,    -1,
    2648,  2649,  2650,  2651,  2652,    -1,  2654,  2655,   303,  2657,
    2658,  2659,  2660,  2661,    -1,  2663,  2664,   107,  2666,    -1,
      -1,  2939,    -1,    -1,    -1,    -1,    -1,    -1,  2676,  2677,
    2888,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,  2687,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
      -1,   376,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3035,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3053,    -1,    -1,    -1,    -1,
    2998,    59,    19,    -1,    -1,    -1,    -1,    -1,    -1,  3067,
      -1,    -1,  3070,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,  3022,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2827,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,  2836,   107,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2845,    -1,  2847,
      -1,    -1,    -1,  2851,    -1,    -1,    -1,    -1,    -1,    -1,
    3068,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     107,  3089,   322,    -1,  3092,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,  2949,    -1,  2951,    -1,  2953,    -1,    -1,  2956,    -1,
    2958,    -1,    -1,    -1,    -1,    19,    51,    52,    -1,    -1,
      55,    -1,    -1,    -1,   242,    -1,    -1,    62,    -1,   247,
      65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    98,    -1,   242,    -1,    -1,    -1,    -1,
     247,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,   141,    -1,    -1,    -1,
      19,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   192,    19,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,   173,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,    -1,    -1,    -1,   259,   260,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,   277,   247,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,   376,    -1,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,    42,    -1,    -1,    45,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,    -1,   267,
      -1,    42,    -1,   271,    45,   273,   274,    48,   276,    -1,
      -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,   297,
      -1,    72,    73,    74,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      91,    92,    93,   321,   322,    -1,    -1,    -1,    99,    -1,
     101,    -1,    -1,    -1,    -1,    -1,   334,    -1,   336,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,
      -1,    -1,    -1,   154,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,   163,    -1,   165,   166,    -1,   168,   169,    -1,
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
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   339,    -1,
      -1,    -1,    -1,    -1,   345,    -1,   347,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   385,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    42,    45,    48,    62,    67,    68,    72,    73,    74,
      82,    89,    91,    92,   101,   102,   127,   137,   150,   154,
     158,   162,   163,   168,   169,   172,   178,   184,   195,   199,
     200,   201,   204,   205,   217,   221,   239,   241,   242,   254,
     256,   263,   267,   271,   273,   274,   276,   281,   297,   303,
     321,   322,   334,   336,   343,   346,   347,   377,   385,   392,
      69,    11,    56,    76,   106,   128,   132,   147,   327,   428,
       3,     4,   327,   393,   433,   209,   215,   258,   286,   338,
     383,   435,   318,     4,    41,   119,   168,   169,   216,   217,
     274,   440,    29,   164,   193,   197,   255,   299,   308,   309,
     408,   442,    88,    98,   105,   195,   244,   281,   443,    41,
      62,   119,   216,   322,   393,   452,     4,    19,    41,    59,
     107,   129,   173,   216,   226,   235,   236,   242,   247,   330,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   380,
     387,   388,   395,   403,   404,   405,   454,    34,   455,   395,
      45,    48,    81,    89,   155,   214,   243,   245,   274,   347,
     394,   395,    67,   393,   457,   158,   458,    42,    45,    48,
      68,    72,    73,    74,    82,    84,    89,    91,    92,    93,
      99,   101,   136,   154,   163,   165,   166,   168,   169,   172,
     176,   178,   184,   204,   205,   209,   217,   221,   239,   241,
     248,   274,   276,   303,   321,   322,   331,   339,   345,   347,
     385,   459,    88,   105,   510,    19,    42,    45,    82,    89,
     100,   101,   107,   136,   154,   172,   173,   179,   204,   247,
     303,   316,   347,   513,    69,   395,    64,   316,   341,   598,
      64,   316,   341,   597,    93,   124,   207,   224,   290,   336,
     347,   519,    15,     4,    47,    50,    69,    88,   105,   111,
     162,   185,   297,   325,   326,   337,   341,   579,    26,   120,
     136,   175,   232,   246,   522,   257,   540,     5,    69,    93,
     152,   336,   385,   395,   541,     5,   542,    60,   143,   252,
     267,   338,   559,    47,    67,    69,   203,   266,   316,   326,
     580,   316,   596,    69,   227,   379,   387,   389,   581,    40,
     216,   258,   327,   393,   403,   405,   582,     5,   336,   347,
     395,   585,    75,   188,   272,   283,   586,     4,   587,    93,
     559,     4,    67,   594,    64,   316,   341,   595,   216,   327,
     393,   599,    26,   120,   136,   232,   246,   384,   601,    53,
     105,   116,   149,   329,   623,   624,     4,    38,    49,    79,
     163,   208,   283,   293,   315,   323,   341,   421,     4,   136,
     231,   625,   327,   393,   627,    15,    23,   268,   271,   404,
     628,   257,   632,   327,   393,   633,     0,     5,   395,    62,
     393,   429,   300,     5,     4,   327,   393,   430,     5,    33,
     314,   431,   135,   393,   432,   135,   393,   434,   393,     4,
     215,   270,   278,   438,   209,   338,   382,   383,   393,   437,
     395,   151,   196,   436,   221,   393,    83,   192,   278,   393,
     439,     5,   393,   393,   393,     4,   168,   169,   217,   274,
     441,     4,   393,   393,     5,   253,   444,     4,    32,   445,
       5,   446,     5,   450,     5,    32,   451,   393,     8,     9,
      10,   393,   399,   400,   401,   402,   393,   393,    41,   119,
     216,   393,   453,   393,   216,   403,   405,   393,    36,   114,
     139,   140,   148,   170,   180,   410,   393,     4,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   126,    69,
      56,    76,    93,   106,   128,   132,   147,   194,   462,   128,
     464,   209,   215,   258,   286,   338,   382,   383,   393,   447,
     465,   318,   468,   188,   469,   188,   197,   471,    68,    69,
      74,    97,    98,   188,   208,   233,   303,   376,   403,   473,
     393,   405,   476,    62,   322,   403,   477,   312,   403,   405,
     478,    34,   479,   403,   405,   480,     4,   403,   405,   481,
      46,    62,    86,   106,   126,   130,   160,   161,   223,   234,
     300,   301,   376,   485,   238,   340,   491,    69,     5,    94,
      64,   316,   341,   499,    64,   316,   341,   498,     4,    93,
     130,   483,     5,    68,   405,   482,    15,    47,    69,    86,
     185,   326,   341,   492,   559,    47,    69,    86,   203,   266,
     316,   326,   493,   316,   497,    69,   258,   495,   317,    64,
     316,   341,   496,    21,   147,   265,   298,   500,    38,    49,
      79,   163,   208,   283,   293,   341,   501,   405,    94,    15,
     220,   508,   403,   511,    69,    77,   514,    32,   515,    45,
      92,   214,   516,   163,   244,   289,   332,   517,   403,    17,
      61,   123,   193,   322,   403,   518,     5,     5,   167,   282,
     339,   403,     4,     5,   167,   282,   403,     4,     4,   215,
     521,     5,     4,     4,   130,   393,     4,    47,    50,    69,
     105,   111,   162,   297,   325,   326,   337,   341,    69,    70,
      71,    96,   109,   125,   157,   167,   189,   198,   218,   240,
     282,   287,   304,   307,   407,     5,     4,   393,   395,     5,
     168,   169,   274,   523,     5,   525,     5,   126,   168,   169,
     214,   274,   301,   526,    99,   119,   209,   539,     5,   537,
       5,   301,   538,     4,     5,   395,   395,   393,   393,     5,
       4,     5,    20,    63,    69,    78,    80,    85,    88,    94,
      98,   105,   113,   122,   141,   163,   181,   194,   195,   219,
     244,   258,   260,   276,   281,   289,   297,   318,   332,   333,
     335,   376,   543,   407,     5,     4,   221,   229,   230,   266,
     381,   406,   393,   403,   393,   403,     5,   393,    41,   119,
     393,   584,   395,   393,   403,   405,   583,   393,   410,   393,
       4,   404,    57,    95,   153,   274,   588,     4,     4,   393,
       4,   163,   289,   589,     5,   403,     4,    41,   119,   393,
     600,   393,   103,    64,   130,   168,   169,   274,   305,   603,
     130,   622,    64,   126,   130,   168,   169,   173,   214,   269,
     274,   301,   305,   317,   604,   605,    64,   130,   305,   621,
       5,    64,   130,   305,   602,     4,    35,   115,   227,   593,
      69,   395,   424,    69,   395,   425,    69,   395,   426,    12,
     134,   211,   592,   393,    18,   228,   313,   395,   422,     4,
     393,   251,   393,   427,   393,   301,     4,   393,   393,     4,
     252,   327,   631,     4,   320,   629,     4,   320,   630,     4,
     410,   135,   393,   634,   393,   393,     4,     5,   393,    11,
     393,   393,   393,    31,   100,   179,   278,   284,   409,   409,
       4,   221,   393,   393,     4,     4,     4,   393,   393,   393,
     393,   393,   393,     4,   393,     4,   393,     4,     4,     4,
       5,     5,   403,     5,   393,   393,   399,   401,   401,   403,
     393,   393,   393,   393,   393,   393,   393,   403,   405,   402,
     393,   393,   402,   393,     5,   300,   110,   209,   463,   215,
     278,   466,   188,    83,   192,   278,   467,   151,   196,   448,
     448,     4,   470,     4,   472,   215,   286,   474,   197,   475,
     188,   410,   393,   393,   403,   403,   410,   410,   410,   403,
     410,   393,   403,     4,   488,     4,   405,   486,   220,     4,
     182,   347,   487,   220,   403,     4,   144,   327,   490,     5,
       5,   460,     4,   220,   146,   275,   396,   393,     4,   494,
     494,   494,   494,     4,     5,    20,    63,    69,    98,   122,
     141,   156,   163,   171,   233,   253,   258,   260,   288,   289,
     297,   318,   376,   553,   405,   210,   210,    69,   504,    69,
     505,    69,   506,    18,   228,   313,   502,   251,   507,   393,
       5,   461,   252,   509,   404,   410,     5,   403,   403,   403,
     403,     4,     4,     4,   395,     4,     4,   220,   393,   407,
       5,   393,   395,    13,    14,    64,   212,   213,   294,   305,
     306,   340,    92,    92,    92,     5,     5,    13,    14,    64,
     212,   213,   294,   305,   306,   310,   340,    92,    92,   173,
      92,   173,   173,   178,   404,   529,   534,    92,   173,     5,
     527,     4,     4,    13,    64,   212,   294,   305,   340,     5,
       5,     4,   393,   404,    20,    21,    22,    51,    52,    55,
      58,    65,    69,    79,    80,    87,    88,    98,   105,   113,
     117,   118,   121,   141,   163,   192,   219,   251,   253,   259,
     260,   276,   277,   288,   289,   318,   320,   333,   335,   342,
     376,    69,    85,    94,   105,   141,   163,   219,   260,   289,
     333,   335,   311,     4,    31,   177,   238,   265,   546,     5,
      66,   112,   262,   279,   280,   378,   379,   552,   105,   544,
       4,    16,   289,   550,    41,   119,   216,   551,     4,     5,
      16,   237,   328,   393,   289,   552,   560,   136,   552,   561,
      37,    41,   119,   145,   216,   327,   393,   562,   403,   395,
      97,   105,   113,   131,   138,   163,   174,   219,   227,   276,
     289,   307,   565,    41,   119,   216,     5,   289,   319,   569,
      16,   133,   186,   237,   328,   570,   320,   395,   571,     5,
     105,   113,   336,    16,    16,     4,   393,   393,   393,   393,
     393,   393,   410,   393,   393,   402,   393,     4,   410,     4,
      41,   119,   216,   295,   590,    41,   119,   216,   295,   591,
       4,   103,     5,     5,    92,    92,    92,     4,     5,     5,
      92,     5,    92,   173,    92,   173,   605,    64,   130,   173,
     305,   609,    64,   130,   305,   620,    92,   173,    64,   130,
     305,   607,     4,    64,   130,   305,   606,     5,     5,     4,
       5,     5,     4,     4,     5,     5,     5,   393,   313,   395,
     423,   393,   393,   393,   393,     4,   393,   626,   393,   393,
     404,    67,     4,     4,     5,     4,     4,     5,     4,   103,
     291,   411,   393,   393,    11,     5,    11,   393,   393,    11,
       4,    11,     4,     4,   393,   393,   393,   393,   393,     4,
     393,     5,   393,     4,   395,     4,     4,   410,   403,   410,
     393,   393,   393,   403,   393,   402,   393,   393,     5,     5,
     393,   405,   393,   403,   393,   410,   410,   411,   411,   411,
     410,   402,   393,   410,   393,   396,   489,   182,     5,     4,
     410,   173,   173,     4,     5,     4,     4,   393,   484,    39,
      39,   393,    20,    21,    22,    51,    52,    55,    62,    65,
      69,    79,    80,    87,    98,   117,   118,   121,   141,   163,
     192,   202,   251,   253,   259,   260,   277,   289,   318,   320,
     331,   342,   376,    69,   141,   171,   260,   318,   311,    31,
     177,   238,   265,   554,   393,   233,   393,   555,    16,   393,
     288,   565,   288,   233,   393,   556,   320,   557,    16,   104,
     393,   313,   503,   393,     5,   411,     4,     4,    59,   403,
       4,     5,   520,   393,     5,     5,     5,   173,   205,   415,
     415,   181,   296,   413,     4,     4,     5,     5,   524,   524,
     524,   302,   302,     5,     5,     5,    16,   175,   414,   414,
     413,     4,     4,   413,     5,     5,   528,     5,   535,     5,
     536,   535,   536,   178,   375,   404,   532,     5,   531,     5,
     535,   536,     5,    13,    14,    64,   212,   213,   294,   305,
     306,   310,   340,     4,     4,     5,     5,   415,   413,     4,
       5,     5,   410,    87,   165,   249,   250,   264,   311,   418,
       6,     7,   393,   398,   265,   265,   265,   113,    41,    69,
     105,   113,   119,   141,   163,   181,   219,   260,   276,   289,
     320,   333,   335,   336,   376,   545,   265,     5,    27,   183,
     265,   316,    28,   151,   331,   113,    22,    52,    55,    87,
     118,   121,   253,   288,     4,    22,    52,    55,    58,    87,
     118,   121,   253,   288,   318,    41,   265,   265,   113,     5,
     237,    27,   251,    37,   145,   327,   393,   292,   300,   251,
     271,   403,   565,    41,   142,   251,   316,   271,   237,     5,
       5,   276,    27,   251,     4,     5,     5,   237,    37,   145,
     327,   393,   565,   237,    58,   395,     4,     4,   393,     5,
     340,    22,    27,    51,    52,    54,    55,    65,    79,    80,
      87,    90,   108,   117,   118,   121,   192,   253,   259,   277,
     288,   319,   320,   342,   389,   547,     4,   393,   393,   393,
     393,   393,   552,   403,     5,     4,     5,   393,   393,   403,
     393,   395,   393,   393,   552,     5,     5,   393,   393,   395,
       5,    16,     5,     5,   393,   393,   402,   393,   393,     4,
     393,   393,   119,   393,   393,   119,     4,    43,    44,   190,
     191,   222,   420,   420,    64,   130,   305,   617,    64,   130,
     305,   614,    64,   130,   305,   611,   420,     5,    64,   130,
     305,   608,    64,   130,   305,   619,    64,   130,   305,   618,
      64,   130,   305,   616,    64,   130,   305,   615,     5,     5,
      64,   130,   305,   610,     4,     5,     5,     4,    64,   130,
     305,   613,    64,   130,   305,   612,     5,     5,     4,     5,
       5,     4,   420,   420,   420,   393,   393,   393,   393,     4,
     403,   393,   410,   404,     5,     5,    11,   393,   403,   405,
     393,    11,   393,   393,   393,    62,   393,     4,   393,   393,
       4,   393,   393,     5,   393,     5,   393,    48,   303,   449,
       5,   395,   395,   410,   393,     4,     4,     4,   410,   403,
     393,   393,   393,   393,   410,   403,   411,   402,   393,     4,
     411,   393,     4,   405,     5,    24,    25,   103,   412,     4,
     403,   393,   393,     4,   393,     5,    87,   165,   249,   250,
     264,   311,   403,   405,   265,   265,   265,    21,   265,   403,
     265,    27,   183,   265,   316,    28,   151,   331,    21,   265,
     265,   265,    21,   265,    27,   187,   251,   187,   292,   300,
     251,   187,   251,   324,   565,   142,   187,   251,   316,     4,
     276,    27,   187,   251,   565,   233,    16,   386,   393,   393,
     393,   393,   393,   393,   220,   393,   393,    20,   261,   512,
       4,     4,   393,   415,   415,   415,     4,   415,   415,   415,
      13,    14,    64,   212,   213,   294,   305,   306,   340,   414,
     415,   415,   415,   415,   415,     4,   415,   415,     4,   414,
      13,    14,    64,   212,   213,   294,   305,   306,   340,     5,
      13,    14,    64,   212,   213,   294,   305,   306,   310,   340,
      13,    14,    64,   212,   213,   294,   305,   306,   340,     5,
     530,     5,   533,     5,     5,    13,    14,    64,   212,   213,
     294,   305,   306,   310,   340,     5,    13,    14,    64,   212,
     213,   294,   305,   306,   310,   340,   302,     5,     5,     5,
     414,   414,   413,     4,     4,   413,     5,     4,     4,   415,
     415,     4,   415,   415,     5,   395,   403,   405,     5,   393,
     393,     5,   393,     5,   398,   113,   219,   276,   113,   219,
     276,     5,   393,   395,     5,   393,   403,   395,   395,     5,
       5,   398,   265,   265,    21,   265,    21,   265,   265,    21,
     265,   344,   344,     4,     4,     4,     4,   545,     4,     4,
       4,   344,   344,     4,     5,     4,   393,     5,   393,     5,
     398,   395,   403,   403,   393,    27,    51,    54,    65,    90,
     108,   389,   416,     4,   403,   393,   410,   395,     5,   403,
     403,   393,   395,   395,   403,   403,   393,   395,     5,   393,
       5,   393,   251,   251,   393,   393,   251,   393,   251,   393,
     393,     4,   548,   393,   251,   251,   393,   393,   393,   393,
     393,   393,   393,   393,     5,   340,   393,   549,   393,   393,
     251,   393,   393,   393,   393,   403,   410,     5,     4,     4,
     393,   393,   410,   393,   393,   393,   403,   552,   393,   393,
       5,     4,   393,   393,   393,   393,     5,     5,     4,     5,
       5,     4,     5,     5,     4,   420,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   393,   393,   393,   393,   410,   393,   403,
     405,   393,   410,   393,   393,   393,   393,   393,     5,   393,
     393,   393,     4,   393,   393,     5,   393,     5,   393,     4,
     403,     4,   393,   410,   197,   408,   393,   408,   411,   410,
     403,   393,   393,     4,   393,   403,   403,   393,   396,     5,
       5,     5,     5,     5,    99,   403,   410,   403,   403,   403,
     403,   405,   403,   410,   403,   403,   403,   405,   403,   403,
     403,   403,   405,   403,   403,   403,   393,   403,   403,   403,
     403,   403,   403,   403,   403,    99,   393,   393,     4,   393,
       5,   393,   415,     5,     5,     5,   413,     4,     4,     5,
     415,   414,     4,   415,     5,     5,     5,   414,   414,   413,
       4,     4,     5,   302,     5,     5,     5,   414,   414,   413,
       4,     4,   413,     5,     5,     5,     5,   414,   414,   413,
       4,     4,     5,    13,    14,    64,   212,   213,   294,   305,
     306,   340,    13,    14,    64,   212,   213,   294,   305,   306,
     340,    13,    14,    64,   212,   213,   294,   305,   306,   340,
     302,     5,     5,     5,   414,   414,   413,     4,     4,   413,
       5,   302,     5,     5,     5,   414,   414,   413,     4,     4,
     413,     5,   414,     4,     4,   414,     4,     4,   415,     5,
     410,   403,   393,   393,   403,   393,     5,   398,     5,   403,
     395,     5,   403,   410,     5,   398,   393,   393,   393,   393,
     393,   393,   393,   393,   393,     4,     4,     5,     4,     4,
     393,   403,   393,     5,   398,   395,   410,   410,   410,   393,
     402,   410,   410,   393,   410,   410,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   558,   566,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     403,     5,   393,   393,   393,   393,     4,     4,   410,   411,
       5,     5,   402,   393,     4,   410,   403,     4,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   398,   393,   393,
     393,   410,   393,   402,   393,   393,    11,     5,     5,   393,
     393,   393,   393,     5,   393,     4,   393,     4,   410,     4,
     403,   393,   393,   411,   412,   393,     5,   393,   403,   405,
       5,     5,     5,     5,     5,   403,   410,   412,   412,   412,
     410,   412,   411,   412,   412,   410,   412,   412,   412,   410,
     412,   412,   410,   403,   410,   412,   410,   412,   412,   410,
     412,   410,   403,     4,   403,   405,     5,   393,     4,   415,
     414,     4,   414,   414,     4,     4,   414,     4,   414,     5,
       5,     5,   414,   414,   413,     4,     4,     5,     5,     5,
       5,   414,   414,   413,     4,     4,     5,     5,     5,     5,
     414,   414,   413,     4,     4,     5,   414,   415,   415,   415,
     415,   415,     4,   415,   415,     4,   414,   414,   415,   415,
     415,   415,   415,     4,   415,   415,     4,   414,   414,     4,
       4,     4,   404,   412,     4,   403,   412,   393,   403,     4,
     412,   412,   403,     4,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   403,   412,   393,   403,     4,
     402,   402,   411,   403,   402,   402,   403,   403,   402,   402,
     393,   393,   393,   393,   393,   393,   398,   393,   393,   393,
      58,    69,    98,   141,   318,   320,   376,   563,   564,   565,
     577,   578,   398,   393,   393,   393,   393,   398,   393,   393,
     393,   393,   393,   393,   410,   393,   340,   397,   398,   393,
     393,   411,   395,   403,   403,   411,   410,     4,   393,   402,
     393,    62,   393,     5,     5,     4,     4,   393,   393,     4,
     393,     4,   408,   412,     5,   410,     4,     5,     4,     5,
     403,     5,   410,   411,   412,   411,   411,   411,   411,   410,
       5,   410,     4,   393,   415,   414,   414,     4,   414,   415,
     415,   415,   415,   415,     4,   415,   415,   414,   415,   415,
     415,   415,   415,     4,   415,   415,   414,   415,   415,   415,
     415,   415,     4,   415,   415,   414,   415,   414,     4,   415,
     415,   414,     4,   415,   414,   410,   403,   412,     4,   410,
     393,   410,   393,   393,   393,   412,     4,   410,   393,   402,
       5,   340,   412,   393,   402,   412,   412,   403,   393,     4,
     417,   417,   393,   393,   417,   398,   417,   566,   403,   390,
     390,   390,   390,   390,   390,   390,   564,   390,   398,   417,
     417,   393,   393,   398,   393,   393,   393,   393,   393,   402,
     393,     5,   566,   393,   417,   395,   567,   568,   410,   410,
     395,   411,     4,     5,   393,     5,     4,     4,     4,     4,
       4,     4,   393,     4,    33,   206,   314,   456,   403,     5,
      33,   206,   314,   419,   403,     4,   456,   393,   414,   414,
     415,   414,   415,   414,   415,   415,   414,   415,   414,   393,
     412,   403,   403,   393,   403,   393,   403,   403,   393,     5,
     403,   412,     4,   566,   566,   397,   393,   566,     4,   566,
     410,   545,     5,     4,     5,     5,     5,     4,   395,     4,
     566,   566,   397,   393,     4,   566,   566,   393,   403,   566,
     566,   566,   567,   574,   575,   565,   572,   573,   395,     4,
       5,     5,     4,     4,     4,   209,   338,   383,   393,   447,
     456,     4,   403,   456,     4,   415,   415,   415,   415,   415,
     404,   412,   412,   393,   412,     4,   412,   412,   393,   412,
     393,   566,   566,     4,   393,   566,     5,     4,   393,   566,
       4,   393,   566,   410,   574,   576,   577,   390,   573,     5,
       5,   393,   448,   393,   448,   410,   412,     4,   403,   405,
       4,   398,   397,   393,     5,   393,   397,   393,   403,   577,
     395,     5,     5,   393,   393,   393,   393,   419,     5,   403,
     405,   410,   403,   405,   566,   393,     4,   566,   393,   412,
       5,     5,   393,     5,   393,   410,   410,     4,   566,     4,
       5,     5,     5,   397,   397,   566,   566,   566
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
#line 499 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 500 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 502 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 503 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 505 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 512 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 518 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 519 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 520 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 524 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 533 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 537 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 540 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 546 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 548 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 550 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 552 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 559 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 560 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 563 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 564 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 565 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 566 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 567 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 568 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 569 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 570 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 571 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 572 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 573 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 576 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 578 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 579 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 580 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 581 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 583 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 584 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 585 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 586 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 591 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 592 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 593 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 596 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 597 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 600 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 601 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 602 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 605 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 608 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 611 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 615 "frame/parser.Y"
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

  case 98:
#line 627 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 634 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 641 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 652 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 728 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 729 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 730 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 738 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 739 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 740 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 743 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 748 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 749 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 750 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 751 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 755 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 756 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 759 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 760 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 761 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 198:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 199:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 200:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 201:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 202:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 203:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 204:
#line 779 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 205:
#line 780 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 206:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 207:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 208:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 209:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 210:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 211:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 212:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 214:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 215:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 216:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 218:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 800 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 220:
#line 801 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 221:
#line 802 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 226:
#line 809 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 810 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 812 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 230:
#line 813 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 231:
#line 815 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 232:
#line 818 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 819 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 234:
#line 820 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 236:
#line 824 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 237:
#line 825 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 238:
#line 828 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 239:
#line 829 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 240:
#line 832 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 241:
#line 833 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 242:
#line 836 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 243:
#line 837 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 244:
#line 840 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 245:
#line 842 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 247:
#line 846 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 248:
#line 847 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 251:
#line 850 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 253:
#line 852 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 855 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 255:
#line 856 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 859 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 257:
#line 860 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 862 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 259:
#line 864 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 260:
#line 865 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 261:
#line 866 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 262:
#line 868 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 263:
#line 870 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 264:
#line 873 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 265:
#line 874 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 266:
#line 877 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 267:
#line 879 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 268:
#line 882 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 269:
#line 884 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 270:
#line 887 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 271:
#line 891 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 272:
#line 892 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 274:
#line 896 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 275:
#line 897 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 276:
#line 898 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 280:
#line 904 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 281:
#line 905 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 283:
#line 908 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 284:
#line 913 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 285:
#line 914 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 286:
#line 917 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 287:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 288:
#line 919 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 289:
#line 920 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 290:
#line 921 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 291:
#line 924 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 297:
#line 937 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 942 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 299:
#line 949 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
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
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 303:
#line 957 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 307:
#line 964 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
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
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 311:
#line 972 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 312:
#line 974 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 313:
#line 975 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 315:
#line 979 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 987 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 321:
#line 990 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 322:
#line 993 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 323:
#line 999 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 324:
#line 1004 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 325:
#line 1007 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 326:
#line 1008 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 327:
#line 1011 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 328:
#line 1012 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1014 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 330:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 331:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 332:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 333:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 334:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 335:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 336:
#line 1030 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 337:
#line 1031 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 338:
#line 1034 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 339:
#line 1035 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1037 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 341:
#line 1041 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 342:
#line 1043 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1046 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 344:
#line 1048 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 345:
#line 1051 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 347:
#line 1053 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 348:
#line 1054 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1055 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 350:
#line 1058 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 351:
#line 1060 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1061 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1067 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 356:
#line 1069 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 357:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 358:
#line 1071 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 359:
#line 1074 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 363:
#line 1083 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 364:
#line 1086 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 365:
#line 1087 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 366:
#line 1088 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 368:
#line 1092 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 370:
#line 1096 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 371:
#line 1099 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 372:
#line 1100 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 386:
#line 1114 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 389:
#line 1117 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 390:
#line 1118 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 396:
#line 1124 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 397:
#line 1125 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 402:
#line 1130 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 403:
#line 1131 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 405:
#line 1134 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 407:
#line 1136 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 409:
#line 1138 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 411:
#line 1140 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 412:
#line 1142 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 415:
#line 1145 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 416:
#line 1149 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 417:
#line 1151 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 418:
#line 1155 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 419:
#line 1157 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 420:
#line 1160 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 421:
#line 1161 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 422:
#line 1162 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 423:
#line 1163 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 424:
#line 1164 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 425:
#line 1165 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 427:
#line 1167 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 428:
#line 1170 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 429:
#line 1171 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 430:
#line 1172 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 431:
#line 1175 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 432:
#line 1178 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 433:
#line 1180 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1182 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 435:
#line 1183 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 436:
#line 1184 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 438:
#line 1186 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 440:
#line 1189 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 441:
#line 1195 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 442:
#line 1196 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 443:
#line 1199 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 444:
#line 1200 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 446:
#line 1204 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 449:
#line 1211 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 450:
#line 1213 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 451:
#line 1215 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 452:
#line 1218 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 455:
#line 1224 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 456:
#line 1228 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1230 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 459:
#line 1231 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 460:
#line 1232 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 461:
#line 1233 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 462:
#line 1234 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 463:
#line 1235 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 465:
#line 1237 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 466:
#line 1238 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 467:
#line 1241 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 468:
#line 1242 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 470:
#line 1246 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 471:
#line 1247 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 472:
#line 1251 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 473:
#line 1253 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 474:
#line 1261 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1263 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 476:
#line 1265 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 477:
#line 1268 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1270 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1271 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 480:
#line 1274 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 481:
#line 1277 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1279 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 483:
#line 1283 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 484:
#line 1285 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 485:
#line 1288 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 486:
#line 1292 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 487:
#line 1293 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 488:
#line 1295 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 489:
#line 1298 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 490:
#line 1299 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 492:
#line 1303 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 493:
#line 1304 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 494:
#line 1305 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 495:
#line 1308 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 496:
#line 1310 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 497:
#line 1311 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 499:
#line 1313 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 503:
#line 1317 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 504:
#line 1318 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 505:
#line 1319 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 506:
#line 1321 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 508:
#line 1323 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 509:
#line 1326 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 510:
#line 1328 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 511:
#line 1330 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1331 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 513:
#line 1332 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 514:
#line 1333 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 515:
#line 1336 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 516:
#line 1337 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1341 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1343 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 519:
#line 1346 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 520:
#line 1349 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 521:
#line 1350 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 522:
#line 1352 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 523:
#line 1354 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 524:
#line 1356 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 525:
#line 1359 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 526:
#line 1360 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 527:
#line 1361 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 528:
#line 1364 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 529:
#line 1365 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 530:
#line 1366 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1367 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 532:
#line 1368 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1369 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1372 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 535:
#line 1373 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 536:
#line 1374 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 537:
#line 1375 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 538:
#line 1376 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 539:
#line 1377 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 540:
#line 1378 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 541:
#line 1381 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 542:
#line 1382 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 543:
#line 1385 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 544:
#line 1388 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 545:
#line 1389 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 546:
#line 1390 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 547:
#line 1393 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 548:
#line 1396 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 549:
#line 1397 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 550:
#line 1398 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 551:
#line 1401 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 552:
#line 1402 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 553:
#line 1403 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 554:
#line 1406 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 555:
#line 1407 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 556:
#line 1408 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 558:
#line 1410 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 559:
#line 1411 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 564:
#line 1418 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 565:
#line 1419 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 567:
#line 1421 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 568:
#line 1424 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 569:
#line 1425 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 570:
#line 1426 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 572:
#line 1430 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 573:
#line 1431 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 574:
#line 1434 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 575:
#line 1435 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 576:
#line 1438 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 577:
#line 1439 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 578:
#line 1442 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 579:
#line 1443 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 580:
#line 1446 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 581:
#line 1447 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 582:
#line 1450 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 584:
#line 1452 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1455 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 586:
#line 1456 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 588:
#line 1460 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 589:
#line 1464 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 590:
#line 1467 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 591:
#line 1474 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 592:
#line 1475 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 593:
#line 1478 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 594:
#line 1479 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 597:
#line 1482 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 598:
#line 1483 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 599:
#line 1484 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 600:
#line 1485 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 602:
#line 1487 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 603:
#line 1488 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 604:
#line 1489 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 606:
#line 1491 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 607:
#line 1492 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 608:
#line 1493 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 609:
#line 1494 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 611:
#line 1498 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 612:
#line 1501 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 613:
#line 1502 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 614:
#line 1505 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 615:
#line 1506 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 616:
#line 1507 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 617:
#line 1508 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 618:
#line 1511 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 619:
#line 1512 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 620:
#line 1513 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 621:
#line 1514 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 622:
#line 1517 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 623:
#line 1518 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1519 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 625:
#line 1520 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 626:
#line 1521 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 627:
#line 1522 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 628:
#line 1525 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 629:
#line 1526 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 630:
#line 1527 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 633:
#line 1531 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 634:
#line 1532 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 635:
#line 1535 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 636:
#line 1538 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 637:
#line 1539 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 638:
#line 1543 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1558 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1562 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1573 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1580 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1582 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 664:
#line 1585 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 665:
#line 1586 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1587 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1588 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1591 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 669:
#line 1595 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1601 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1603 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1607 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1609 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 677:
#line 1612 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1614 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1616 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1628 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1629 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1630 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1631 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1632 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 694:
#line 1633 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1635 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 696:
#line 1637 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 697:
#line 1638 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1639 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1640 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 700:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1644 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1645 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1646 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1647 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1649 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1650 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1651 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1652 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 714:
#line 1663 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1666 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 720:
#line 1681 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1687 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1692 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 731:
#line 1716 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 739:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 740:
#line 1745 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1766 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 749:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 759:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 760:
#line 1803 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1806 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1809 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 764:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 766:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 768:
#line 1818 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1820 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 770:
#line 1822 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 771:
#line 1823 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1824 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 774:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1829 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 776:
#line 1830 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1831 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 780:
#line 1835 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 781:
#line 1836 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 782:
#line 1837 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1844 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1853 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 790:
#line 1854 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1858 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 794:
#line 1862 "frame/parser.Y"
    {;}
    break;

  case 795:
#line 1865 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 796:
#line 1866 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 797:
#line 1867 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 799:
#line 1869 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 800:
#line 1870 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 801:
#line 1871 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 802:
#line 1875 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 804:
#line 1883 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 805:
#line 1884 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 806:
#line 1886 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1888 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 808:
#line 1889 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 809:
#line 1890 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 811:
#line 1891 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 814:
#line 1894 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 815:
#line 1895 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 816:
#line 1897 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 817:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 818:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1906 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 821:
#line 1908 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 822:
#line 1910 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 823:
#line 1911 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 824:
#line 1913 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 825:
#line 1916 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 826:
#line 1919 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 827:
#line 1923 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1926 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 829:
#line 1929 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 830:
#line 1932 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 831:
#line 1936 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 832:
#line 1940 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 833:
#line 1945 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 835:
#line 1951 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 836:
#line 1952 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1954 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 838:
#line 1956 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 839:
#line 1958 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 840:
#line 1960 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 841:
#line 1961 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1962 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1964 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 844:
#line 1966 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 845:
#line 1968 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 846:
#line 1971 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 847:
#line 1975 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 853:
#line 1989 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 854:
#line 1991 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 855:
#line 1993 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 859:
#line 2001 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 860:
#line 2003 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 861:
#line 2005 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 862:
#line 2006 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2008 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2010 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 865:
#line 2011 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 868:
#line 2016 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 869:
#line 2017 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 870:
#line 2018 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 872:
#line 2021 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 873:
#line 2023 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 874:
#line 2027 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 875:
#line 2030 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 876:
#line 2033 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 877:
#line 2037 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 878:
#line 2041 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 879:
#line 2046 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2051 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 882:
#line 2052 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 883:
#line 2054 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 884:
#line 2056 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 885:
#line 2060 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 886:
#line 2061 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 887:
#line 2062 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 888:
#line 2064 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 889:
#line 2067 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 890:
#line 2070 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 891:
#line 2073 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 892:
#line 2076 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 893:
#line 2079 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 894:
#line 2080 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2084 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 896:
#line 2088 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2090 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 898:
#line 2091 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 899:
#line 2093 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 900:
#line 2096 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 901:
#line 2099 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 902:
#line 2100 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 903:
#line 2102 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 904:
#line 2103 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 905:
#line 2104 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 906:
#line 2106 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 907:
#line 2107 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 908:
#line 2109 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 909:
#line 2112 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 910:
#line 2115 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 911:
#line 2116 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 912:
#line 2118 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 913:
#line 2119 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 917:
#line 2124 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 918:
#line 2125 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 919:
#line 2127 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 920:
#line 2129 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 921:
#line 2131 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 922:
#line 2132 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 926:
#line 2138 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 927:
#line 2139 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 928:
#line 2140 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 929:
#line 2141 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 930:
#line 2142 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 931:
#line 2143 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 932:
#line 2144 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 933:
#line 2145 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 934:
#line 2146 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 935:
#line 2147 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2149 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 937:
#line 2151 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2152 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 939:
#line 2153 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 940:
#line 2154 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 941:
#line 2155 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 942:
#line 2157 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 943:
#line 2158 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 944:
#line 2159 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 945:
#line 2160 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 946:
#line 2161 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 947:
#line 2163 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 948:
#line 2164 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 949:
#line 2165 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 950:
#line 2166 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 951:
#line 2167 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 952:
#line 2168 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 953:
#line 2169 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 954:
#line 2172 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 955:
#line 2173 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 956:
#line 2174 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 957:
#line 2175 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 958:
#line 2176 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 959:
#line 2177 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 960:
#line 2178 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 961:
#line 2179 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 962:
#line 2180 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 963:
#line 2181 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 964:
#line 2182 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 965:
#line 2183 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 966:
#line 2184 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 967:
#line 2185 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 968:
#line 2186 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 969:
#line 2187 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 970:
#line 2188 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 971:
#line 2189 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 972:
#line 2190 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 973:
#line 2191 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 974:
#line 2192 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 975:
#line 2195 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 976:
#line 2196 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 977:
#line 2197 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 978:
#line 2198 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 979:
#line 2199 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 980:
#line 2201 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 981:
#line 2211 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2219 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2228 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2236 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2243 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2250 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2258 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2266 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2271 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2276 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2281 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2286 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2291 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2296 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2301 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2310 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 997:
#line 2320 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2330 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2339 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2347 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2357 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1002:
#line 2367 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2377 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1004:
#line 2389 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1005:
#line 2398 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1007:
#line 2406 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1008:
#line 2408 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1009:
#line 2417 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1010:
#line 2419 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1011:
#line 2421 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1012:
#line 2426 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1013:
#line 2429 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1014:
#line 2430 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1015:
#line 2431 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1016:
#line 2438 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1017:
#line 2440 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1018:
#line 2441 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1019:
#line 2444 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1020:
#line 2445 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1021:
#line 2446 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1022:
#line 2447 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1023:
#line 2448 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1024:
#line 2449 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1025:
#line 2450 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1027:
#line 2454 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1028:
#line 2455 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1029:
#line 2456 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1030:
#line 2457 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1031:
#line 2458 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1032:
#line 2461 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1033:
#line 2463 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1034:
#line 2465 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1035:
#line 2467 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1036:
#line 2469 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1037:
#line 2471 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2473 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1039:
#line 2475 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1040:
#line 2477 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1041:
#line 2479 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1042:
#line 2480 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1043:
#line 2481 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1044:
#line 2483 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1045:
#line 2485 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2488 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2490 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2491 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1049:
#line 2492 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1050:
#line 2494 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1051:
#line 2496 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2499 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2502 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2503 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1055:
#line 2504 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2505 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2507 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1058:
#line 2508 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1059:
#line 2509 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1060:
#line 2510 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2511 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2512 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2513 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1064:
#line 2515 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1065:
#line 2517 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1066:
#line 2519 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2521 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2523 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1069:
#line 2524 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1070:
#line 2526 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1071:
#line 2528 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2530 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1073:
#line 2531 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1074:
#line 2532 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2534 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1076:
#line 2536 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1077:
#line 2539 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1078:
#line 2542 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1079:
#line 2543 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1080:
#line 2545 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2548 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2551 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1083:
#line 2554 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2555 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1085:
#line 2556 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1086:
#line 2557 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1087:
#line 2559 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1088:
#line 2561 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1089:
#line 2563 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2564 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1091:
#line 2566 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1092:
#line 2567 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1093:
#line 2568 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1094:
#line 2569 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2570 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1096:
#line 2572 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2574 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1098:
#line 2576 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1099:
#line 2578 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1100:
#line 2579 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1102:
#line 2581 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1103:
#line 2582 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1104:
#line 2584 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1105:
#line 2586 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1106:
#line 2587 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1107:
#line 2588 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1109:
#line 2590 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1111:
#line 2594 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1112:
#line 2595 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1113:
#line 2596 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1114:
#line 2597 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1115:
#line 2598 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1116:
#line 2599 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1117:
#line 2601 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1118:
#line 2602 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1119:
#line 2604 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1120:
#line 2605 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1121:
#line 2608 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1122:
#line 2609 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1123:
#line 2610 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1124:
#line 2611 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1125:
#line 2614 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1126:
#line 2615 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1127:
#line 2618 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1128:
#line 2619 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2622 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1130:
#line 2623 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1131:
#line 2626 "frame/parser.Y"
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

  case 1132:
#line 2639 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1133:
#line 2640 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1134:
#line 2644 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1135:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1136:
#line 2649 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1137:
#line 2650 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1138:
#line 2655 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1139:
#line 2659 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1140:
#line 2664 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1141:
#line 2666 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1142:
#line 2669 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1143:
#line 2671 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1144:
#line 2674 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1145:
#line 2676 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1146:
#line 2679 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1147:
#line 2680 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1148:
#line 2681 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1149:
#line 2682 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2683 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2684 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1152:
#line 2686 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1155:
#line 2693 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1156:
#line 2694 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1157:
#line 2695 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1158:
#line 2696 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1159:
#line 2697 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1160:
#line 2698 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1163:
#line 2703 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1164:
#line 2704 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1165:
#line 2705 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1166:
#line 2706 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1167:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1168:
#line 2708 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1169:
#line 2709 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1170:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1171:
#line 2711 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1172:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1173:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1174:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1177:
#line 2721 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1178:
#line 2722 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1180:
#line 2726 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1181:
#line 2728 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1182:
#line 2729 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1183:
#line 2732 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1184:
#line 2733 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2734 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1186:
#line 2735 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1188:
#line 2737 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1189:
#line 2740 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1190:
#line 2741 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2749 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2752 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1195:
#line 2753 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1199:
#line 2760 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1200:
#line 2763 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1201:
#line 2767 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1202:
#line 2768 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1203:
#line 2769 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1204:
#line 2770 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2771 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2772 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1207:
#line 2773 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2774 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2775 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1210:
#line 2776 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1211:
#line 2777 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2778 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2780 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1214:
#line 2781 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1215:
#line 2782 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1216:
#line 2783 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1217:
#line 2784 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1218:
#line 2785 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1219:
#line 2786 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1220:
#line 2787 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1221:
#line 2788 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1222:
#line 2789 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1223:
#line 2790 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1224:
#line 2791 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1227:
#line 2796 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1228:
#line 2797 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2799 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2801 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1233:
#line 2802 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2803 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1238:
#line 2812 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1239:
#line 2816 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1240:
#line 2817 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2819 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1242:
#line 2824 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1244:
#line 2826 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1246:
#line 2828 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2831 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1248:
#line 2833 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1249:
#line 2838 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1250:
#line 2841 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1251:
#line 2842 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1252:
#line 2843 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1253:
#line 2846 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1254:
#line 2848 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1255:
#line 2852 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1256:
#line 2853 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1257:
#line 2857 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2858 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2859 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2860 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1261:
#line 2866 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1262:
#line 2867 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1263:
#line 2873 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1264:
#line 2874 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1265:
#line 2875 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1269:
#line 2884 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1270:
#line 2886 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1271:
#line 2887 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1272:
#line 2888 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1273:
#line 2892 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1274:
#line 2893 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1275:
#line 2894 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1276:
#line 2895 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1277:
#line 2898 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1278:
#line 2899 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1279:
#line 2900 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1280:
#line 2903 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1281:
#line 2904 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1282:
#line 2905 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1283:
#line 2908 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1284:
#line 2909 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1285:
#line 2912 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1286:
#line 2913 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1287:
#line 2914 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1288:
#line 2918 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1289:
#line 2921 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1290:
#line 2922 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1291:
#line 2923 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1292:
#line 2924 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2925 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1294:
#line 2928 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1295:
#line 2929 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1296:
#line 2930 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1297:
#line 2931 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1298:
#line 2932 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1299:
#line 2933 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1300:
#line 2936 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1301:
#line 2937 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1303:
#line 2939 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1304:
#line 2940 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1305:
#line 2943 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1306:
#line 2944 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1307:
#line 2945 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1313:
#line 2953 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1314:
#line 2956 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1315:
#line 2957 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2958 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1317:
#line 2962 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1318:
#line 2964 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1319:
#line 2966 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1336:
#line 2987 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1337:
#line 2988 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2989 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1339:
#line 2992 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2993 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2994 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1342:
#line 2997 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 2998 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 2999 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 3002 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1346:
#line 3003 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3004 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1349:
#line 3008 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1350:
#line 3009 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3010 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3013 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3014 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3015 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1355:
#line 3019 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1356:
#line 3021 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1357:
#line 3023 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3026 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1359:
#line 3027 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3028 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1361:
#line 3031 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3032 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1363:
#line 3033 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1364:
#line 3037 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1365:
#line 3039 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1366:
#line 3041 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1367:
#line 3044 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1368:
#line 3045 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1369:
#line 3046 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3051 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1373:
#line 3055 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1374:
#line 3057 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1375:
#line 3059 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1376:
#line 3062 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3063 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3064 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3067 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3068 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3069 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1382:
#line 3072 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3073 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1384:
#line 3074 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1385:
#line 3078 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1386:
#line 3080 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3082 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3086 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1389:
#line 3090 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1390:
#line 3092 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1391:
#line 3096 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1392:
#line 3099 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1393:
#line 3100 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1394:
#line 3101 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1395:
#line 3102 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1396:
#line 3105 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1397:
#line 3107 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1398:
#line 3109 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1399:
#line 3112 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1401:
#line 3116 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1402:
#line 3117 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1403:
#line 3118 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3121 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1405:
#line 3122 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1406:
#line 3126 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1408:
#line 3128 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1411:
#line 3133 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1412:
#line 3134 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1413:
#line 3135 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1414:
#line 3138 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3139 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1416:
#line 3140 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1417:
#line 3143 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1418:
#line 3145 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1419:
#line 3150 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1420:
#line 3151 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1421:
#line 3154 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1422:
#line 3161 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1423:
#line 3163 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1424:
#line 3165 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1425:
#line 3170 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1427:
#line 3174 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1428:
#line 3175 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1429:
#line 3176 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1430:
#line 3178 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1431:
#line 3180 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1432:
#line 3185 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12051 "frame/parser.C"
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


#line 3189 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

