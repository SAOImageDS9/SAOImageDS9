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
     ASDF_ = 284,
     ASINH_ = 285,
     AST_ = 286,
     AUTO_ = 287,
     AUX_ = 288,
     AVERAGE_ = 289,
     AXES_ = 290,
     AZIMUTH_ = 291,
     B1950_ = 292,
     BACK_ = 293,
     BACKGROUND_ = 294,
     BAR_ = 295,
     BASE_ = 296,
     BBOX_ = 297,
     BEGIN_ = 298,
     BG_ = 299,
     BIG_ = 300,
     BIGENDIAN_ = 301,
     BIN_ = 302,
     BITPIX_ = 303,
     BLEND_ = 304,
     BLOCK_ = 305,
     BORDER_ = 306,
     BOTTOM_ = 307,
     BOX_ = 308,
     BOXANNULUS_ = 309,
     BOXCAR_ = 310,
     BOXCIRCLE_ = 311,
     BPANDA_ = 312,
     BUFFER_ = 313,
     BW_ = 314,
     CALLBACK_ = 315,
     CANVAS_ = 316,
     CATALOG_ = 317,
     CELESTIAL_ = 318,
     CENTER_ = 319,
     CENTROID_ = 320,
     CHANNEL_ = 321,
     CHEVRON_ = 322,
     CIRCLE_ = 323,
     CIAO_ = 324,
     CLEAR_ = 325,
     CLIP_ = 326,
     COLOR_ = 327,
     COLORBURN_ = 328,
     COLORDODGE_ = 329,
     COLORBAR_ = 330,
     COLORMAP_ = 331,
     COLORSCALE_ = 332,
     COLORSPACE_ = 333,
     COLS_ = 334,
     COLUMN_ = 335,
     COMMAND_ = 336,
     COMPASS_ = 337,
     COMPOSITE_ = 338,
     COMPRESS_ = 339,
     CONTOUR_ = 340,
     CONTRAST_ = 341,
     COORDINATES_ = 342,
     COPY_ = 343,
     COUNT_ = 344,
     CPANDA_ = 345,
     CREATE_ = 346,
     CROP_ = 347,
     CROSS_ = 348,
     CROSSHAIR_ = 349,
     CUBE_ = 350,
     CURSOR_ = 351,
     CUT_ = 352,
     CMYK_ = 353,
     DARKEN_ = 354,
     DASH_ = 355,
     DASHLIST_ = 356,
     DATA_ = 357,
     DATAMIN_ = 358,
     DATASEC_ = 359,
     DEBUG_ = 360,
     DEGREES_ = 361,
     DEFAULT_ = 362,
     DELETE_ = 363,
     DEPTH_ = 364,
     DETECTOR_ = 365,
     DIAMOND_ = 366,
     DIFFERENCE_ = 367,
     DIM_ = 368,
     DOWN_ = 369,
     DS9_ = 370,
     EDIT_ = 371,
     ECLIPTIC_ = 372,
     ELEVATION_ = 373,
     ELLIPTIC_ = 374,
     ELLIPSE_ = 375,
     ELLIPSEANNULUS_ = 376,
     END_ = 377,
     ENVI_ = 378,
     EPANDA_ = 379,
     EPSILON_ = 380,
     EQUATORIAL_ = 381,
     ERASE_ = 382,
     EXCLUSION_ = 383,
     EXT_ = 384,
     FADE_ = 385,
     FACTOR_ = 386,
     FALSE_ = 387,
     FILE_ = 388,
     FILL_ = 389,
     FILTER_ = 390,
     FIRST_ = 391,
     FIP_ = 392,
     FIT_ = 393,
     FITS_ = 394,
     FITSY_ = 395,
     FIXED_ = 396,
     FK4_ = 397,
     FK5_ = 398,
     FONT_ = 399,
     FORMAT_ = 400,
     FOOTPRINT_ = 401,
     FROM_ = 402,
     FRONT_ = 403,
     FULL_ = 404,
     FUNCTION_ = 405,
     GALACTIC_ = 406,
     GAUSSIAN_ = 407,
     GET_ = 408,
     GLOBAL_ = 409,
     GLYPH_ = 410,
     GRAPHICS_ = 411,
     GRAY_ = 412,
     GRID_ = 413,
     GZ_ = 414,
     HANDLE_ = 415,
     HARDLIGHT_ = 416,
     HAS_ = 417,
     HEAD_ = 418,
     HEADER_ = 419,
     HEIGHT_ = 420,
     HIDE_ = 421,
     HIGHLITE_ = 422,
     HISTEQU_ = 423,
     HISTOGRAM_ = 424,
     HORIZONTAL_ = 425,
     HUE_ = 426,
     HSV_ = 427,
     HLS_ = 428,
     ICRS_ = 429,
     ID_ = 430,
     IIS_ = 431,
     IMAGE_ = 432,
     INCLUDE_ = 433,
     INCR_ = 434,
     INFO_ = 435,
     ITERATION_ = 436,
     IRAF_ = 437,
     IRAFMIN_ = 438,
     J2000_ = 439,
     KEY_ = 440,
     KEYWORD_ = 441,
     LABEL_ = 442,
     LAYER_ = 443,
     LAYERNO_ = 444,
     LAST_ = 445,
     LENGTH_ = 446,
     LEVEL_ = 447,
     LIGHTEN_ = 448,
     LITTLE_ = 449,
     LITTLEENDIAN_ = 450,
     LINE_ = 451,
     LINEAR_ = 452,
     LIST_ = 453,
     LOAD_ = 454,
     LOCAL_ = 455,
     LOG_ = 456,
     LUMINOSITY_ = 457,
     MACOSX_ = 458,
     MAGNIFIER_ = 459,
     MATCH_ = 460,
     MAP_ = 461,
     MARK_ = 462,
     MARKER_ = 463,
     MASK_ = 464,
     MEDIAN_ = 465,
     MESSAGE_ = 466,
     METHOD_ = 467,
     MINMAX_ = 468,
     MINOR_ = 469,
     MIP_ = 470,
     MMAP_ = 471,
     MMAPINCR_ = 472,
     MOSAIC_ = 473,
     MODE_ = 474,
     MOTION_ = 475,
     MULTICOLOR_ = 476,
     MULTIPLY_ = 477,
     MOVE_ = 478,
     NAME_ = 479,
     NAN_ = 480,
     NATIVE_ = 481,
     NAXES_ = 482,
     NEW_ = 483,
     NEXT_ = 484,
     NO_ = 485,
     NONE_ = 486,
     NORMAL_ = 487,
     NONNAN_ = 488,
     NONZERO_ = 489,
     NOW_ = 490,
     NRRD_ = 491,
     NUMBER_ = 492,
     OBJECT_ = 493,
     OFF_ = 494,
     ON_ = 495,
     ONLY_ = 496,
     OPENARROW_ = 497,
     OPENBOX_ = 498,
     OPENCIRCLE_ = 499,
     OPENTRIANGLE_ = 500,
     OPTION_ = 501,
     ORIENT_ = 502,
     OVERLAY_ = 503,
     PAN_ = 504,
     PANNER_ = 505,
     PARSER_ = 506,
     PASTE_ = 507,
     PERF_ = 508,
     PHOTO_ = 509,
     PHYSICAL_ = 510,
     PIXEL_ = 511,
     PLOT2D_ = 512,
     PLOT3D_ = 513,
     POINT_ = 514,
     POINTER_ = 515,
     POLYGON_ = 516,
     POSTSCRIPT_ = 517,
     POW_ = 518,
     PRECISION_ = 519,
     PRINT_ = 520,
     PRESERVE_ = 521,
     PROJECTION_ = 522,
     PROPERTY_ = 523,
     PUBLICATION_ = 524,
     PROS_ = 525,
     QUERY_ = 526,
     RADIAL_ = 527,
     RADIUS_ = 528,
     RANGE_ = 529,
     REGION_ = 530,
     REPLACE_ = 531,
     RESAMPLE_ = 532,
     RESCAN_ = 533,
     RESET_ = 534,
     RESOLUTION_ = 535,
     REVEAL_ = 536,
     RGB_ = 537,
     ROOT_ = 538,
     ROTATE_ = 539,
     RULER_ = 540,
     SAMPLE_ = 541,
     SAOIMAGE_ = 542,
     SAOTNG_ = 543,
     SAVE_ = 544,
     SATURATION_ = 545,
     SCALE_ = 546,
     SCAN_ = 547,
     SCIENTIFIC_ = 548,
     SCOPE_ = 549,
     SCREEN_ = 550,
     SEGMENT_ = 551,
     SELECT_ = 552,
     SET_ = 553,
     SEXAGESIMAL_ = 554,
     SHAPE_ = 555,
     SHADE_ = 556,
     SHARED_ = 557,
     SHIFT_ = 558,
     SHMID_ = 559,
     SHOW_ = 560,
     SIGMA_ = 561,
     SINH_ = 562,
     SIZE_ = 563,
     SLICE_ = 564,
     SMMAP_ = 565,
     SMOOTH_ = 566,
     SOFTLIGHT_ = 567,
     SOCKET_ = 568,
     SOCKETGZ_ = 569,
     SOURCE_ = 570,
     SQRT_ = 571,
     SQUARED_ = 572,
     SSHARED_ = 573,
     STATS_ = 574,
     STATUS_ = 575,
     STRENGTH_ = 576,
     STYLE_ = 577,
     SUM_ = 578,
     SYNC_ = 579,
     SYSTEM_ = 580,
     TABLE_ = 581,
     TAG_ = 582,
     TEMPLATE_ = 583,
     TEXT_ = 584,
     THREADS_ = 585,
     THREED_ = 586,
     THRESHOLD_ = 587,
     THICK_ = 588,
     TOP_ = 589,
     TRANSPARENCY_ = 590,
     TRIANGLE_ = 591,
     TO_ = 592,
     TOGGLE_ = 593,
     TOPHAT_ = 594,
     TRUE_ = 595,
     TYPE_ = 596,
     UNDO_ = 597,
     UNHIGHLITE_ = 598,
     UNLOAD_ = 599,
     UNSELECT_ = 600,
     UPDATE_ = 601,
     UP_ = 602,
     USER_ = 603,
     VALUE_ = 604,
     VAR_ = 605,
     VIEW_ = 606,
     VECTOR_ = 607,
     VERSION_ = 608,
     VERTEX_ = 609,
     VERTICAL_ = 610,
     WARP_ = 611,
     WCS_ = 612,
     WCSA_ = 613,
     WCSB_ = 614,
     WCSC_ = 615,
     WCSD_ = 616,
     WCSE_ = 617,
     WCSF_ = 618,
     WCSG_ = 619,
     WCSH_ = 620,
     WCSI_ = 621,
     WCSJ_ = 622,
     WCSK_ = 623,
     WCSL_ = 624,
     WCSM_ = 625,
     WCSN_ = 626,
     WCSO_ = 627,
     WCSP_ = 628,
     WCSQ_ = 629,
     WCSR_ = 630,
     WCSS_ = 631,
     WCST_ = 632,
     WCSU_ = 633,
     WCSV_ = 634,
     WCSW_ = 635,
     WCSX_ = 636,
     WCSY_ = 637,
     WCSZ_ = 638,
     WCS0_ = 639,
     WFPC2_ = 640,
     WIDTH_ = 641,
     WIN32_ = 642,
     XML_ = 643,
     XY_ = 644,
     YES_ = 645,
     ZERO_ = 646,
     ZMAX_ = 647,
     ZSCALE_ = 648,
     PIXMASK_ = 649,
     ZOOM_ = 650,
     FIELDS_ = 651
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
#define ASDF_ 284
#define ASINH_ 285
#define AST_ 286
#define AUTO_ 287
#define AUX_ 288
#define AVERAGE_ 289
#define AXES_ 290
#define AZIMUTH_ 291
#define B1950_ 292
#define BACK_ 293
#define BACKGROUND_ 294
#define BAR_ 295
#define BASE_ 296
#define BBOX_ 297
#define BEGIN_ 298
#define BG_ 299
#define BIG_ 300
#define BIGENDIAN_ 301
#define BIN_ 302
#define BITPIX_ 303
#define BLEND_ 304
#define BLOCK_ 305
#define BORDER_ 306
#define BOTTOM_ 307
#define BOX_ 308
#define BOXANNULUS_ 309
#define BOXCAR_ 310
#define BOXCIRCLE_ 311
#define BPANDA_ 312
#define BUFFER_ 313
#define BW_ 314
#define CALLBACK_ 315
#define CANVAS_ 316
#define CATALOG_ 317
#define CELESTIAL_ 318
#define CENTER_ 319
#define CENTROID_ 320
#define CHANNEL_ 321
#define CHEVRON_ 322
#define CIRCLE_ 323
#define CIAO_ 324
#define CLEAR_ 325
#define CLIP_ 326
#define COLOR_ 327
#define COLORBURN_ 328
#define COLORDODGE_ 329
#define COLORBAR_ 330
#define COLORMAP_ 331
#define COLORSCALE_ 332
#define COLORSPACE_ 333
#define COLS_ 334
#define COLUMN_ 335
#define COMMAND_ 336
#define COMPASS_ 337
#define COMPOSITE_ 338
#define COMPRESS_ 339
#define CONTOUR_ 340
#define CONTRAST_ 341
#define COORDINATES_ 342
#define COPY_ 343
#define COUNT_ 344
#define CPANDA_ 345
#define CREATE_ 346
#define CROP_ 347
#define CROSS_ 348
#define CROSSHAIR_ 349
#define CUBE_ 350
#define CURSOR_ 351
#define CUT_ 352
#define CMYK_ 353
#define DARKEN_ 354
#define DASH_ 355
#define DASHLIST_ 356
#define DATA_ 357
#define DATAMIN_ 358
#define DATASEC_ 359
#define DEBUG_ 360
#define DEGREES_ 361
#define DEFAULT_ 362
#define DELETE_ 363
#define DEPTH_ 364
#define DETECTOR_ 365
#define DIAMOND_ 366
#define DIFFERENCE_ 367
#define DIM_ 368
#define DOWN_ 369
#define DS9_ 370
#define EDIT_ 371
#define ECLIPTIC_ 372
#define ELEVATION_ 373
#define ELLIPTIC_ 374
#define ELLIPSE_ 375
#define ELLIPSEANNULUS_ 376
#define END_ 377
#define ENVI_ 378
#define EPANDA_ 379
#define EPSILON_ 380
#define EQUATORIAL_ 381
#define ERASE_ 382
#define EXCLUSION_ 383
#define EXT_ 384
#define FADE_ 385
#define FACTOR_ 386
#define FALSE_ 387
#define FILE_ 388
#define FILL_ 389
#define FILTER_ 390
#define FIRST_ 391
#define FIP_ 392
#define FIT_ 393
#define FITS_ 394
#define FITSY_ 395
#define FIXED_ 396
#define FK4_ 397
#define FK5_ 398
#define FONT_ 399
#define FORMAT_ 400
#define FOOTPRINT_ 401
#define FROM_ 402
#define FRONT_ 403
#define FULL_ 404
#define FUNCTION_ 405
#define GALACTIC_ 406
#define GAUSSIAN_ 407
#define GET_ 408
#define GLOBAL_ 409
#define GLYPH_ 410
#define GRAPHICS_ 411
#define GRAY_ 412
#define GRID_ 413
#define GZ_ 414
#define HANDLE_ 415
#define HARDLIGHT_ 416
#define HAS_ 417
#define HEAD_ 418
#define HEADER_ 419
#define HEIGHT_ 420
#define HIDE_ 421
#define HIGHLITE_ 422
#define HISTEQU_ 423
#define HISTOGRAM_ 424
#define HORIZONTAL_ 425
#define HUE_ 426
#define HSV_ 427
#define HLS_ 428
#define ICRS_ 429
#define ID_ 430
#define IIS_ 431
#define IMAGE_ 432
#define INCLUDE_ 433
#define INCR_ 434
#define INFO_ 435
#define ITERATION_ 436
#define IRAF_ 437
#define IRAFMIN_ 438
#define J2000_ 439
#define KEY_ 440
#define KEYWORD_ 441
#define LABEL_ 442
#define LAYER_ 443
#define LAYERNO_ 444
#define LAST_ 445
#define LENGTH_ 446
#define LEVEL_ 447
#define LIGHTEN_ 448
#define LITTLE_ 449
#define LITTLEENDIAN_ 450
#define LINE_ 451
#define LINEAR_ 452
#define LIST_ 453
#define LOAD_ 454
#define LOCAL_ 455
#define LOG_ 456
#define LUMINOSITY_ 457
#define MACOSX_ 458
#define MAGNIFIER_ 459
#define MATCH_ 460
#define MAP_ 461
#define MARK_ 462
#define MARKER_ 463
#define MASK_ 464
#define MEDIAN_ 465
#define MESSAGE_ 466
#define METHOD_ 467
#define MINMAX_ 468
#define MINOR_ 469
#define MIP_ 470
#define MMAP_ 471
#define MMAPINCR_ 472
#define MOSAIC_ 473
#define MODE_ 474
#define MOTION_ 475
#define MULTICOLOR_ 476
#define MULTIPLY_ 477
#define MOVE_ 478
#define NAME_ 479
#define NAN_ 480
#define NATIVE_ 481
#define NAXES_ 482
#define NEW_ 483
#define NEXT_ 484
#define NO_ 485
#define NONE_ 486
#define NORMAL_ 487
#define NONNAN_ 488
#define NONZERO_ 489
#define NOW_ 490
#define NRRD_ 491
#define NUMBER_ 492
#define OBJECT_ 493
#define OFF_ 494
#define ON_ 495
#define ONLY_ 496
#define OPENARROW_ 497
#define OPENBOX_ 498
#define OPENCIRCLE_ 499
#define OPENTRIANGLE_ 500
#define OPTION_ 501
#define ORIENT_ 502
#define OVERLAY_ 503
#define PAN_ 504
#define PANNER_ 505
#define PARSER_ 506
#define PASTE_ 507
#define PERF_ 508
#define PHOTO_ 509
#define PHYSICAL_ 510
#define PIXEL_ 511
#define PLOT2D_ 512
#define PLOT3D_ 513
#define POINT_ 514
#define POINTER_ 515
#define POLYGON_ 516
#define POSTSCRIPT_ 517
#define POW_ 518
#define PRECISION_ 519
#define PRINT_ 520
#define PRESERVE_ 521
#define PROJECTION_ 522
#define PROPERTY_ 523
#define PUBLICATION_ 524
#define PROS_ 525
#define QUERY_ 526
#define RADIAL_ 527
#define RADIUS_ 528
#define RANGE_ 529
#define REGION_ 530
#define REPLACE_ 531
#define RESAMPLE_ 532
#define RESCAN_ 533
#define RESET_ 534
#define RESOLUTION_ 535
#define REVEAL_ 536
#define RGB_ 537
#define ROOT_ 538
#define ROTATE_ 539
#define RULER_ 540
#define SAMPLE_ 541
#define SAOIMAGE_ 542
#define SAOTNG_ 543
#define SAVE_ 544
#define SATURATION_ 545
#define SCALE_ 546
#define SCAN_ 547
#define SCIENTIFIC_ 548
#define SCOPE_ 549
#define SCREEN_ 550
#define SEGMENT_ 551
#define SELECT_ 552
#define SET_ 553
#define SEXAGESIMAL_ 554
#define SHAPE_ 555
#define SHADE_ 556
#define SHARED_ 557
#define SHIFT_ 558
#define SHMID_ 559
#define SHOW_ 560
#define SIGMA_ 561
#define SINH_ 562
#define SIZE_ 563
#define SLICE_ 564
#define SMMAP_ 565
#define SMOOTH_ 566
#define SOFTLIGHT_ 567
#define SOCKET_ 568
#define SOCKETGZ_ 569
#define SOURCE_ 570
#define SQRT_ 571
#define SQUARED_ 572
#define SSHARED_ 573
#define STATS_ 574
#define STATUS_ 575
#define STRENGTH_ 576
#define STYLE_ 577
#define SUM_ 578
#define SYNC_ 579
#define SYSTEM_ 580
#define TABLE_ 581
#define TAG_ 582
#define TEMPLATE_ 583
#define TEXT_ 584
#define THREADS_ 585
#define THREED_ 586
#define THRESHOLD_ 587
#define THICK_ 588
#define TOP_ 589
#define TRANSPARENCY_ 590
#define TRIANGLE_ 591
#define TO_ 592
#define TOGGLE_ 593
#define TOPHAT_ 594
#define TRUE_ 595
#define TYPE_ 596
#define UNDO_ 597
#define UNHIGHLITE_ 598
#define UNLOAD_ 599
#define UNSELECT_ 600
#define UPDATE_ 601
#define UP_ 602
#define USER_ 603
#define VALUE_ 604
#define VAR_ 605
#define VIEW_ 606
#define VECTOR_ 607
#define VERSION_ 608
#define VERTEX_ 609
#define VERTICAL_ 610
#define WARP_ 611
#define WCS_ 612
#define WCSA_ 613
#define WCSB_ 614
#define WCSC_ 615
#define WCSD_ 616
#define WCSE_ 617
#define WCSF_ 618
#define WCSG_ 619
#define WCSH_ 620
#define WCSI_ 621
#define WCSJ_ 622
#define WCSK_ 623
#define WCSL_ 624
#define WCSM_ 625
#define WCSN_ 626
#define WCSO_ 627
#define WCSP_ 628
#define WCSQ_ 629
#define WCSR_ 630
#define WCSS_ 631
#define WCST_ 632
#define WCSU_ 633
#define WCSV_ 634
#define WCSW_ 635
#define WCSX_ 636
#define WCSY_ 637
#define WCSZ_ 638
#define WCS0_ 639
#define WFPC2_ 640
#define WIDTH_ 641
#define WIN32_ 642
#define XML_ 643
#define XY_ 644
#define YES_ 645
#define ZERO_ 646
#define ZMAX_ 647
#define ZSCALE_ 648
#define PIXMASK_ 649
#define ZOOM_ 650
#define FIELDS_ 651




/* Copy the first part of user declarations.  */
#line 10 "parser.Y"

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
#line 53 "parser.Y"
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
#line 949 "parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 962 "parser.C"

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
#define YYFINAL  410
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  401
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  247
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1471
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3190

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   651

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
       2,   400,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   398,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   399,   397,
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396
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
     448,   449,   451,   453,   454,   456,   458,   460,   462,   464,
     466,   468,   470,   472,   474,   476,   478,   480,   482,   483,
     485,   487,   489,   491,   493,   495,   497,   499,   500,   502,
     504,   506,   508,   510,   512,   514,   515,   517,   519,   521,
     522,   524,   526,   528,   530,   532,   535,   538,   541,   544,
     547,   550,   553,   556,   559,   562,   564,   567,   570,   573,
     575,   578,   580,   583,   585,   588,   590,   593,   596,   603,
     606,   611,   614,   617,   620,   624,   627,   630,   632,   635,
     637,   640,   645,   651,   654,   658,   664,   671,   673,   675,
     677,   685,   697,   706,   719,   721,   724,   727,   731,   733,
     735,   738,   741,   744,   747,   751,   755,   758,   761,   763,
     765,   767,   769,   771,   773,   775,   778,   781,   784,   786,
     790,   793,   796,   799,   805,   815,   825,   835,   843,   845,
     848,   850,   856,   866,   876,   886,   894,   896,   899,   902,
     906,   909,   912,   915,   918,   921,   935,   949,   962,   975,
     977,   978,   980,   982,   987,   994,   996,   998,  1000,  1002,
    1004,  1006,  1008,  1010,  1012,  1017,  1024,  1028,  1033,  1035,
    1038,  1043,  1050,  1051,  1058,  1067,  1070,  1074,  1078,  1082,
    1083,  1088,  1093,  1098,  1103,  1107,  1111,  1113,  1117,  1123,
    1128,  1133,  1137,  1140,  1141,  1143,  1145,  1147,  1149,  1151,
    1155,  1158,  1159,  1162,  1165,  1168,  1171,  1174,  1177,  1180,
    1183,  1186,  1189,  1192,  1195,  1198,  1201,  1203,  1206,  1209,
    1212,  1217,  1221,  1224,  1227,  1230,  1233,  1236,  1238,  1242,
    1245,  1248,  1251,  1254,  1256,  1259,  1268,  1271,  1273,  1276,
    1278,  1281,  1283,  1288,  1292,  1295,  1297,  1305,  1314,  1322,
    1331,  1333,  1335,  1337,  1340,  1342,  1344,  1347,  1349,  1350,
    1353,  1356,  1358,  1361,  1362,  1365,  1368,  1370,  1372,  1375,
    1378,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1394,  1396,
    1399,  1401,  1406,  1412,  1413,  1416,  1418,  1424,  1427,  1430,
    1432,  1434,  1436,  1438,  1441,  1443,  1446,  1448,  1450,  1453,
    1455,  1456,  1458,  1460,  1461,  1463,  1469,  1476,  1480,  1487,
    1491,  1493,  1497,  1499,  1501,  1503,  1507,  1514,  1522,  1528,
    1531,  1533,  1539,  1544,  1546,  1550,  1551,  1553,  1556,  1558,
    1563,  1565,  1568,  1570,  1573,  1577,  1580,  1582,  1585,  1587,
    1592,  1595,  1597,  1599,  1603,  1605,  1608,  1612,  1615,  1616,
    1618,  1620,  1625,  1628,  1629,  1631,  1635,  1640,  1645,  1646,
    1648,  1650,  1652,  1654,  1657,  1660,  1663,  1666,  1668,  1670,
    1672,  1674,  1676,  1678,  1680,  1681,  1683,  1685,  1687,  1689,
    1691,  1693,  1695,  1697,  1699,  1701,  1703,  1705,  1707,  1709,
    1712,  1714,  1717,  1719,  1722,  1725,  1728,  1731,  1733,  1735,
    1738,  1740,  1741,  1743,  1745,  1748,  1749,  1751,  1752,  1754,
    1755,  1757,  1758,  1760,  1761,  1763,  1764,  1767,  1770,  1771,
    1773,  1776,  1778,  1785,  1791,  1793,  1795,  1797,  1800,  1803,
    1806,  1808,  1810,  1812,  1814,  1817,  1819,  1821,  1823,  1826,
    1828,  1830,  1832,  1835,  1838,  1841,  1842,  1844,  1845,  1847,
    1849,  1851,  1853,  1855,  1857,  1859,  1861,  1864,  1867,  1870,
    1872,  1875,  1879,  1881,  1884,  1887,  1892,  1898,  1900,  1911,
    1913,  1916,  1920,  1924,  1927,  1930,  1933,  1936,  1939,  1942,
    1945,  1948,  1953,  1958,  1963,  1967,  1971,  1977,  1982,  1987,
    1992,  1996,  2000,  2004,  2008,  2012,  2016,  2019,  2022,  2027,
    2031,  2035,  2039,  2043,  2048,  2053,  2058,  2063,  2069,  2074,
    2081,  2089,  2094,  2099,  2105,  2108,  2112,  2116,  2120,  2124,
    2128,  2132,  2136,  2139,  2143,  2147,  2151,  2155,  2160,  2164,
    2170,  2177,  2181,  2185,  2190,  2194,  2198,  2202,  2206,  2210,
    2216,  2220,  2224,  2229,  2233,  2236,  2239,  2241,  2245,  2250,
    2255,  2260,  2265,  2270,  2277,  2282,  2287,  2293,  2298,  2303,
    2308,  2313,  2319,  2324,  2331,  2339,  2344,  2349,  2355,  2361,
    2367,  2373,  2379,  2385,  2393,  2399,  2405,  2412,  2417,  2422,
    2427,  2432,  2437,  2444,  2449,  2454,  2460,  2466,  2472,  2478,
    2484,  2491,  2497,  2505,  2514,  2520,  2526,  2533,  2537,  2541,
    2545,  2549,  2554,  2558,  2564,  2571,  2575,  2579,  2584,  2588,
    2592,  2596,  2600,  2604,  2610,  2614,  2618,  2623,  2628,  2633,
    2637,  2643,  2648,  2653,  2658,  2661,  2665,  2672,  2679,  2681,
    2683,  2685,  2688,  2691,  2694,  2698,  2702,  2705,  2718,  2721,
    2724,  2726,  2730,  2735,  2738,  2739,  2743,  2745,  2748,  2751,
    2754,  2757,  2760,  2765,  2770,  2775,  2780,  2784,  2788,  2793,
    2799,  2808,  2815,  2825,  2832,  2840,  2851,  2863,  2876,  2886,
    2892,  2899,  2903,  2909,  2915,  2921,  2928,  2934,  2939,  2944,
    2949,  2959,  2970,  2982,  2992,  2999,  3006,  3013,  3020,  3027,
    3034,  3041,  3048,  3055,  3063,  3071,  3074,  3079,  3084,  3089,
    3094,  3100,  3105,  3110,  3116,  3122,  3126,  3131,  3136,  3141,
    3149,  3159,  3166,  3177,  3189,  3202,  3212,  3216,  3219,  3223,
    3229,  3235,  3243,  3248,  3252,  3256,  3263,  3271,  3280,  3288,
    3296,  3301,  3306,  3311,  3321,  3326,  3330,  3335,  3343,  3351,
    3354,  3358,  3362,  3366,  3371,  3374,  3377,  3382,  3387,  3398,
    3402,  3407,  3409,  3413,  3416,  3419,  3422,  3425,  3429,  3435,
    3440,  3446,  3449,  3452,  3455,  3458,  3462,  3465,  3468,  3471,
    3475,  3478,  3482,  3487,  3491,  3495,  3502,  3507,  3510,  3514,
    3517,  3520,  3525,  3529,  3533,  3536,  3540,  3542,  3545,  3547,
    3550,  3553,  3556,  3560,  3562,  3564,  3566,  3568,  3571,  3573,
    3576,  3579,  3581,  3584,  3587,  3589,  3592,  3594,  3596,  3598,
    3600,  3602,  3604,  3606,  3608,  3609,  3611,  3614,  3617,  3620,
    3624,  3630,  3638,  3646,  3653,  3659,  3665,  3672,  3679,  3686,
    3692,  3699,  3706,  3713,  3720,  3727,  3734,  3741,  3748,  3756,
    3768,  3776,  3784,  3792,  3802,  3812,  3823,  3836,  3849,  3853,
    3856,  3857,  3859,  3863,  3868,  3873,  3878,  3879,  3881,  3883,
    3888,  3893,  3895,  3897,  3899,  3901,  3903,  3905,  3907,  3909,
    3912,  3914,  3916,  3918,  3922,  3926,  3935,  3942,  3953,  3961,
    3969,  3975,  3982,  3989,  3993,  3996,  3999,  4003,  4008,  4014,
    4020,  4026,  4030,  4035,  4041,  4047,  4053,  4059,  4062,  4066,
    4070,  4074,  4080,  4084,  4088,  4092,  4096,  4100,  4105,  4111,
    4117,  4123,  4129,  4133,  4138,  4144,  4150,  4153,  4156,  4160,
    4164,  4170,  4177,  4184,  4188,  4192,  4196,  4203,  4210,  4216,
    4222,  4225,  4229,  4233,  4239,  4246,  4250,  4253,  4256,  4260,
    4263,  4267,  4270,  4274,  4278,  4284,  4291,  4294,  4297,  4300,
    4303,  4305,  4310,  4315,  4317,  4320,  4323,  4326,  4329,  4332,
    4335,  4338,  4342,  4345,  4349,  4352,  4356,  4358,  4360,  4362,
    4364,  4366,  4368,  4369,  4372,  4373,  4376,  4377,  4379,  4380,
    4381,  4383,  4385,  4387,  4389,  4391,  4399,  4408,  4411,  4418,
    4421,  4428,  4431,  4435,  4438,  4440,  4442,  4446,  4450,  4452,
    4457,  4460,  4462,  4466,  4470,  4475,  4479,  4483,  4487,  4489,
    4491,  4493,  4495,  4497,  4499,  4501,  4503,  4505,  4507,  4509,
    4511,  4513,  4515,  4517,  4520,  4521,  4522,  4525,  4532,  4540,
    4543,  4545,  4549,  4551,  4555,  4557,  4559,  4561,  4564,  4567,
    4569,  4573,  4574,  4575,  4578,  4581,  4583,  4587,  4593,  4594,
    4596,  4598,  4601,  4604,  4608,  4611,  4615,  4618,  4622,  4625,
    4629,  4631,  4634,  4636,  4639,  4641,  4644,  4646,  4649,  4651,
    4654,  4656,  4659,  4661,  4664,  4666,  4669,  4672,  4676,  4679,
    4682,  4685,  4688,  4690,  4692,  4694,  4696,  4701,  4704,  4708,
    4712,  4715,  4719,  4722,  4725,  4728,  4732,  4736,  4740,  4743,
    4747,  4749,  4753,  4757,  4759,  4762,  4765,  4768,  4771,  4781,
    4788,  4790,  4792,  4794,  4796,  4799,  4802,  4806,  4810,  4812,
    4815,  4819,  4823,  4825,  4828,  4830,  4832,  4834,  4836,  4838,
    4840,  4842,  4844,  4847,  4850,  4855,  4858,  4861,  4864,  4867,
    4870,  4875,  4878,  4881,  4884,  4887,  4890,  4895,  4897,  4900,
    4903,  4906,  4910,  4912,  4914,  4916,  4919,  4922,  4925,  4928,
    4931,  4934,  4937,  4940,  4943,  4947,  4951,  4955,  4959,  4963,
    4967,  4969,  4972,  4975,  4978,  4982,  4985,  4989,  4993,  4997,
    5001,  5005,  5009,  5012,  5015,  5018,  5021,  5024,  5027,  5030,
    5033,  5036,  5039,  5042,  5045,  5048,  5051,  5055,  5059,  5063,
    5066,  5069,  5072,  5076,  5080,  5084,  5087,  5090,  5093,  5096,
    5099,  5102,  5106,  5110,  5114,  5117,  5120,  5123,  5126,  5129,
    5132,  5136,  5140,  5144,  5147,  5150,  5153,  5156,  5159,  5162,
    5165,  5168,  5171,  5175,  5179,  5183,  5188,  5195,  5198,  5200,
    5202,  5204,  5206,  5208,  5209,  5215,  5217,  5224,  5228,  5231,
    5236,  5238,  5241,  5244,  5247,  5251,  5255,  5258,  5261,  5264,
    5267,  5270,  5273,  5277,  5280,  5283,  5287,  5289,  5293,  5298,
    5301,  5303,  5306,  5312,  5319,  5326,  5329,  5331,  5334,  5337,
    5343,  5350
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     402,     0,    -1,   105,   404,    -1,    47,   439,    -1,    44,
      72,     5,    -1,    44,    72,   405,    -1,    50,   444,    -1,
      64,    -1,    70,    -1,    71,   446,    -1,    75,   327,     5,
      -1,    76,   451,    -1,    77,   453,    -1,    85,   454,    -1,
      92,   464,    -1,    94,   466,    -1,    95,   467,    -1,   104,
     405,    -1,   130,   469,    -1,   140,   470,    -1,   153,   471,
      -1,   158,   522,    -1,   162,   525,    -1,   166,    -1,   167,
     405,    -1,   167,    72,     5,    -1,   172,   611,    -1,   173,
     610,    -1,   176,   531,    -1,   182,    15,     4,    -1,   199,
     534,    -1,   203,   553,    -1,   204,   554,    -1,   205,   555,
      -1,   208,   572,   556,    -1,   209,   593,    -1,   188,   592,
      -1,   221,   609,    -1,   225,    72,     5,    -1,   247,   594,
      -1,   249,   595,    -1,   250,   598,    -1,   271,    96,    -1,
     264,   600,    -1,   262,   599,    -1,   279,    -1,   275,   572,
     602,    -1,   281,   607,    -1,   282,   608,    -1,   284,   612,
      -1,   289,   614,    -1,   305,    -1,   311,   636,    -1,   330,
       4,    -1,   331,   432,    -1,   344,    -1,   346,   638,    -1,
     353,    -1,   356,   640,    -1,   357,   641,    -1,   387,   645,
      -1,   395,   646,    -1,     3,    -1,     4,    -1,   405,    -1,
     218,   405,    -1,   251,   405,    -1,   253,   405,    -1,   357,
     405,    -1,    47,   405,    -1,    50,   405,    -1,    84,   405,
      -1,    92,   405,    -1,   159,   405,    -1,   282,   405,    -1,
       4,    -1,   390,    -1,   397,    -1,   240,    -1,   340,    -1,
     230,    -1,   398,    -1,   239,    -1,   132,    -1,    -1,   283,
      41,    -1,   149,    41,    -1,   283,    -1,   149,    -1,    -1,
     408,    -1,   403,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   409,   409,    -1,   410,   411,    -1,
     411,   411,    -1,   403,   403,    -1,   177,    -1,   255,    -1,
     110,    -1,    19,    -1,   414,    -1,   357,    -1,   358,    -1,
     359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
     364,    -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,
     374,    -1,   375,    -1,   376,    -1,   377,    -1,   378,    -1,
     379,    -1,   380,    -1,   381,    -1,   382,    -1,   383,    -1,
     384,    -1,    61,    -1,   250,    -1,    -1,   391,    -1,   234,
      -1,   225,    -1,   233,    -1,   274,    -1,    -1,   315,    -1,
     222,    -1,   295,    -1,   248,    -1,    99,    -1,   193,    -1,
      74,    -1,    73,    -1,   161,    -1,   312,    -1,   112,    -1,
     128,    -1,   171,    -1,   290,    -1,    72,    -1,   202,    -1,
     197,    -1,   201,    -1,   263,    -1,   316,    -1,   317,    -1,
      30,    -1,   307,    -1,   168,    -1,    32,    -1,   292,    -1,
     286,    -1,   103,    -1,   183,    -1,    -1,   142,    -1,    37,
      -1,   143,    -1,   184,    -1,   174,    -1,   151,    -1,   117,
      -1,    -1,   106,    -1,   299,    -1,    -1,   106,    -1,    24,
      -1,    25,    -1,    -1,   304,    -1,   185,    -1,    -1,    16,
      -1,   179,    -1,    -1,   177,    -1,   209,    -1,     4,    -1,
     231,    -1,    27,    -1,   242,    -1,    67,    -1,    68,    -1,
     244,    -1,    53,    -1,   243,    -1,   336,    -1,   245,    -1,
      40,    -1,    -1,    68,    -1,    53,    -1,   111,    -1,    93,
      -1,   399,    -1,    27,    -1,    56,    -1,   155,    -1,    -1,
       4,    -1,    90,    -1,   169,    -1,   257,    -1,   258,    -1,
     272,    -1,   319,    -1,    -1,    34,    -1,   323,    -1,   210,
      -1,    -1,   226,    -1,    45,    -1,    46,    -1,   194,    -1,
     195,    -1,   351,   438,    -1,    51,   435,    -1,    82,   436,
      -1,   167,   437,    -1,   212,   605,    -1,    39,   606,    -1,
     301,   433,    -1,   291,   403,    -1,   324,     4,    -1,   332,
     403,    -1,   405,    -1,    18,   403,    -1,   321,   403,    -1,
     232,   434,    -1,   405,    -1,   321,   403,    -1,   405,    -1,
      72,     5,    -1,   405,    -1,    72,     5,    -1,   405,    -1,
      72,     5,    -1,   403,   403,    -1,   259,   403,   403,   403,
     403,   403,    -1,    11,   440,    -1,    79,     5,     5,     5,
      -1,   109,     4,    -1,   131,   441,    -1,   150,   442,    -1,
      58,   308,     4,    -1,   337,   443,    -1,   135,     5,    -1,
      64,    -1,   403,   403,    -1,   403,    -1,   403,   403,    -1,
     403,    11,   403,   403,    -1,   403,   403,    11,   403,   403,
      -1,   337,   403,    -1,   337,   403,   403,    -1,   337,   403,
      11,   403,   403,    -1,   337,   403,   403,    11,   403,   403,
      -1,    34,    -1,   323,    -1,   138,    -1,   403,   403,    11,
      64,     5,     5,     5,    -1,   403,   403,     4,   403,   403,
      11,    64,     5,     5,     5,     5,    -1,   403,   403,    11,
     403,   403,     5,     5,     5,    -1,   403,   403,     4,   403,
     403,    11,   403,   403,     5,     5,     5,     5,    -1,   403,
      -1,   403,   403,    -1,   337,   445,    -1,   225,   391,   405,
      -1,   138,    -1,   403,    -1,   403,   403,    -1,   294,   447,
      -1,   219,   448,    -1,   213,   449,    -1,   348,   403,   403,
      -1,   348,   225,   225,    -1,   393,   450,    -1,   266,   405,
      -1,   154,    -1,   200,    -1,   403,    -1,   213,    -1,   393,
      -1,   392,    -1,   348,    -1,     4,   419,    -1,   219,   419,
      -1,   286,     4,    -1,   278,    -1,   403,     4,     4,    -1,
      86,   403,    -1,   286,     4,    -1,   196,     4,    -1,     4,
     403,   403,     4,     4,    -1,   282,   403,   403,   403,   403,
     403,   403,     4,     4,    -1,   172,   403,   403,   403,   403,
     403,   403,     4,     4,    -1,   173,   403,   403,   403,   403,
     403,   403,     4,     4,    -1,   221,     4,     4,     5,     5,
       5,     4,    -1,    43,    -1,   220,   452,    -1,   122,    -1,
       4,   403,   403,     4,     4,    -1,   282,   403,   403,   403,
     403,   403,   403,     4,     4,    -1,   172,   403,   403,   403,
     403,   403,   403,     4,     4,    -1,   173,   403,   403,   403,
     403,   403,   403,     4,     4,    -1,   221,     4,     4,     5,
       5,     5,     4,    -1,   418,    -1,   201,   403,    -1,    91,
     455,    -1,   101,     4,     4,    -1,   108,   456,    -1,   199,
     457,    -1,   252,   461,    -1,   289,   462,    -1,   322,   463,
      -1,     5,     4,     4,   460,     4,     4,   418,   403,   458,
     459,   403,   403,     5,    -1,     5,     4,     4,   460,     4,
       4,   418,   403,   403,   459,   403,   403,     5,    -1,     5,
       4,     4,   460,     4,     4,   418,   403,   458,   403,   403,
       5,    -1,     5,     4,     4,   460,     4,     4,   418,   403,
     403,   403,   403,     5,    -1,   261,    -1,    -1,    33,    -1,
       5,    -1,     5,     5,     4,   405,    -1,     5,     4,   405,
       5,   413,   420,    -1,   213,    -1,   393,    -1,   392,    -1,
     348,    -1,   154,    -1,   200,    -1,   311,    -1,    50,    -1,
       5,    -1,     5,     5,     4,   405,    -1,     5,     5,     4,
     405,     4,     4,    -1,     5,   413,   420,    -1,    33,     5,
     413,   420,    -1,    70,    -1,     4,    70,    -1,     4,     5,
       4,     4,    -1,     4,     5,     4,     4,     4,     4,    -1,
      -1,   403,   403,   403,   403,   413,   420,    -1,    64,   412,
     413,   420,   403,   403,   413,   422,    -1,   331,   465,    -1,
      43,   403,   403,    -1,   220,   403,   403,    -1,   122,   403,
     403,    -1,    -1,   403,   403,   413,   420,    -1,    43,   403,
     403,     4,    -1,   220,   403,   403,     4,    -1,   122,   403,
     403,     4,    -1,   415,   403,   403,    -1,   413,   420,   412,
      -1,   405,    -1,   356,   403,   403,    -1,    43,   220,   415,
     403,   403,    -1,   220,   415,   403,   403,    -1,    43,   220,
     413,   412,    -1,   220,   413,   412,    -1,    35,     4,    -1,
      -1,    34,    -1,   323,    -1,   210,    -1,   403,    -1,    70,
      -1,   162,   129,     5,    -1,   180,     5,    -1,    -1,    44,
      72,    -1,    47,   474,    -1,    50,   476,    -1,    71,   477,
      -1,    76,   481,    -1,    75,   480,    -1,    77,   483,    -1,
      85,   485,    -1,    87,   488,    -1,    92,   489,    -1,    94,
     490,    -1,    96,   492,    -1,    95,   491,    -1,   102,   493,
      -1,   104,    -1,   139,   497,    -1,   158,   503,    -1,   167,
      72,    -1,   169,     5,     5,     4,    -1,   170,    97,   472,
      -1,   172,   511,    -1,   173,   510,    -1,   176,   495,    -1,
     180,   494,    -1,   182,    15,    -1,   213,    -1,   208,   572,
     566,    -1,   209,   505,    -1,   188,   504,    -1,   221,   509,
      -1,   225,    72,    -1,   247,    -1,   249,   507,    -1,   256,
     326,   415,   403,   403,     4,     4,     5,    -1,   282,   508,
      -1,   284,    -1,   311,   512,    -1,   330,    -1,   331,   513,
      -1,   341,    -1,   349,   415,   403,   403,    -1,   355,    97,
     473,    -1,   357,   520,    -1,   395,    -1,     5,     5,   403,
     403,   415,     4,   468,    -1,     5,     5,   403,   403,   413,
     420,     4,   468,    -1,     5,     5,   403,   403,   415,     4,
     468,    -1,     5,     5,   403,   403,   413,   420,     4,   468,
      -1,   109,    -1,   131,    -1,   150,    -1,    58,   308,    -1,
      96,    -1,   135,    -1,    79,   475,    -1,   198,    -1,    -1,
     213,     5,    -1,   113,     5,    -1,   131,    -1,   225,   391,
      -1,    -1,   458,   459,    -1,   403,   459,    -1,   294,    -1,
     219,    -1,   213,   478,    -1,   348,   192,    -1,   393,   479,
      -1,   266,    -1,   219,    -1,   286,    -1,    86,    -1,   286,
      -1,   196,    -1,    -1,   327,    -1,   192,   482,    -1,     4,
      -1,     4,   415,   403,   403,    -1,     4,   403,   403,   418,
     403,    -1,    -1,   192,   484,    -1,   201,    -1,     4,   403,
     403,   418,   403,    -1,   413,   420,    -1,    71,   486,    -1,
      72,    -1,   100,    -1,   101,    -1,   192,    -1,   237,   192,
      -1,   212,    -1,    77,   487,    -1,   311,    -1,   322,    -1,
     322,     4,    -1,   386,    -1,    -1,   219,    -1,   294,    -1,
      -1,   201,    -1,   403,   403,   413,   420,   421,    -1,   415,
     403,   403,   413,   420,   421,    -1,   413,   420,   421,    -1,
      64,   413,   420,   421,   413,   422,    -1,   331,   413,   420,
      -1,   415,    -1,   413,   420,   421,    -1,   320,    -1,    35,
      -1,   415,    -1,   413,   420,   421,    -1,   413,   420,   412,
     403,   403,     5,    -1,     4,   413,   420,   412,   403,   403,
       5,    -1,   415,   403,   403,     4,     4,    -1,     5,   406,
      -1,    71,    -1,   415,   403,   403,     5,   406,    -1,     4,
       4,     4,     4,    -1,    96,    -1,   133,   224,   496,    -1,
      -1,     4,    -1,   403,   403,    -1,   227,    -1,    64,   413,
     420,   421,    -1,    89,    -1,   109,   500,    -1,    48,    -1,
     129,   498,    -1,   133,   224,   501,    -1,   164,   499,    -1,
     165,    -1,   238,   224,    -1,   308,    -1,   308,   413,   420,
     422,    -1,   309,   502,    -1,   386,    -1,     4,    -1,   415,
     403,   403,    -1,     4,    -1,   186,     5,    -1,     4,   186,
       5,    -1,   357,     4,    -1,    -1,     4,    -1,   406,    -1,
     406,   415,   403,   403,    -1,   406,     4,    -1,    -1,     4,
      -1,   147,   177,   413,    -1,   147,   177,     4,   413,    -1,
     337,   177,   403,   413,    -1,    -1,   246,    -1,   350,    -1,
      89,    -1,   189,    -1,    72,   506,    -1,    49,   506,    -1,
     335,   506,    -1,   351,   506,    -1,    72,    -1,   207,    -1,
     274,    -1,   325,    -1,   335,    -1,    89,    -1,    49,    -1,
      -1,     4,    -1,   266,    -1,    66,    -1,   325,    -1,   351,
      -1,   325,    -1,    66,    -1,   325,    -1,   351,    -1,    66,
      -1,   325,    -1,   351,    -1,   150,    -1,   273,    -1,   273,
     214,    -1,   306,    -1,   306,   214,    -1,    21,    -1,   351,
     519,    -1,    51,   516,    -1,    82,   517,    -1,   167,   518,
      -1,   212,    -1,    39,    -1,   301,   514,    -1,   291,    -1,
      -1,    18,    -1,   321,    -1,   232,   515,    -1,    -1,   321,
      -1,    -1,    72,    -1,    -1,    72,    -1,    -1,    72,    -1,
      -1,   259,    -1,    -1,    15,   521,    -1,   224,   414,    -1,
      -1,   260,    -1,    91,   523,    -1,   108,    -1,   413,   420,
     421,   524,     5,     5,    -1,   413,   420,   421,   524,     5,
      -1,    20,    -1,   269,    -1,    19,    -1,    44,    72,    -1,
      47,   526,    -1,    85,   527,    -1,    92,    -1,   103,    -1,
     104,    -1,   110,    -1,   139,   528,    -1,   158,    -1,   176,
      -1,   183,    -1,   208,   529,    -1,   255,    -1,   177,    -1,
     311,    -1,   325,   413,    -1,   357,   530,    -1,    80,     5,
      -1,    -1,    33,    -1,    -1,    47,    -1,    95,    -1,   218,
      -1,   167,    -1,   297,    -1,   252,    -1,   342,    -1,   413,
      -1,    63,   413,    -1,   126,   413,    -1,   197,   413,    -1,
      17,    -1,   331,   413,    -1,   228,     4,     4,    -1,   127,
      -1,   211,     5,    -1,    96,   533,    -1,   298,   133,   224,
     532,    -1,   298,     4,     4,     4,     4,    -1,   346,    -1,
     357,   403,   403,   403,   403,   403,   403,   403,   403,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    61,    -1,
       4,     4,   413,    -1,   219,   405,    -1,    26,   535,    -1,
      29,   550,    -1,   123,   537,    -1,   139,   538,    -1,   179,
     552,    -1,   236,   549,    -1,   254,   551,    -1,     5,    13,
       5,   425,    -1,     5,    14,     5,   425,    -1,     5,    66,
       5,   425,    -1,     5,   216,   425,    -1,     5,   217,   425,
      -1,     5,   302,   423,     4,   425,    -1,     5,   313,     4,
     425,    -1,     5,   314,     4,   425,    -1,     5,   350,     5,
     425,    -1,   282,    95,   536,    -1,   173,    95,   536,    -1,
     172,    95,   536,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    66,     5,    -1,     5,   216,    -1,     5,
     217,    -1,     5,   302,   423,     4,    -1,     5,   313,     4,
      -1,     5,   314,     4,    -1,     5,   350,     5,    -1,     5,
       5,   310,    -1,     5,    13,     5,   425,    -1,     5,    14,
       5,   425,    -1,     5,    66,     5,   425,    -1,     5,   216,
     424,   425,    -1,     5,     5,   310,   424,   425,    -1,     5,
     217,   424,   425,    -1,     5,   302,   423,     4,   424,   425,
      -1,     5,   318,   423,     4,     4,   424,   425,    -1,     5,
     313,     4,   425,    -1,     5,   314,     4,   425,    -1,     5,
     350,     5,   424,   425,    -1,   309,   539,    -1,   129,    95,
     540,    -1,   282,   177,   548,    -1,   282,    95,   547,    -1,
     173,   177,   548,    -1,   173,    95,   547,    -1,   172,   177,
     548,    -1,   172,    95,   547,    -1,   218,   541,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    66,     5,
      -1,     5,   216,   424,    -1,     5,     5,   310,   424,    -1,
       5,   217,   424,    -1,     5,   302,   423,     4,   424,    -1,
       5,   318,   423,     4,     4,   424,    -1,     5,   313,     4,
      -1,     5,   314,     4,    -1,     5,   350,     5,   424,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    66,
       5,    -1,     5,   216,   424,    -1,     5,   217,   424,    -1,
       5,   302,   423,     4,   424,    -1,     5,   313,     4,    -1,
       5,   314,     4,    -1,     5,   350,     5,   424,    -1,   177,
     182,   542,    -1,   182,   543,    -1,   177,   544,    -1,   546,
      -1,   177,   385,   545,    -1,     5,    13,     5,   425,    -1,
       5,    14,     5,   425,    -1,     5,    66,     5,   425,    -1,
       5,   216,   424,   425,    -1,     5,   217,   424,   425,    -1,
       5,   302,   423,     4,   424,   425,    -1,     5,   313,     4,
     425,    -1,     5,   314,     4,   425,    -1,     5,   350,     5,
     424,   425,    -1,     5,    13,     5,   425,    -1,     5,    14,
       5,   425,    -1,     5,    66,     5,   425,    -1,     5,   216,
     424,   425,    -1,     5,     5,   310,   424,   425,    -1,     5,
     217,   424,   425,    -1,     5,   302,   423,     4,   424,   425,
      -1,     5,   318,   423,     4,     4,   424,   425,    -1,     5,
     313,     4,   425,    -1,     5,   314,     4,   425,    -1,     5,
     350,     5,   424,   425,    -1,   414,     5,    13,     5,   425,
      -1,   414,     5,    14,     5,   425,    -1,   414,     5,    66,
       5,   425,    -1,   414,     5,   216,   424,   425,    -1,   414,
       5,   217,   424,   425,    -1,   414,     5,   302,   423,     4,
     424,   425,    -1,   414,     5,   313,     4,   425,    -1,   414,
       5,   314,     4,   425,    -1,   414,     5,   350,     5,   424,
     425,    -1,     5,    13,     5,   425,    -1,     5,    14,     5,
     425,    -1,     5,    66,     5,   425,    -1,     5,   216,   424,
     425,    -1,     5,   217,   424,   425,    -1,     5,   302,   423,
       4,   424,   425,    -1,     5,   313,     4,   425,    -1,     5,
     314,     4,   425,    -1,     5,   350,     5,   424,   425,    -1,
     414,     5,    13,     5,   425,    -1,   414,     5,    14,     5,
     425,    -1,   414,     5,    66,     5,   425,    -1,   414,     5,
     216,   424,   425,    -1,   414,     5,     5,   310,   424,   425,
      -1,   414,     5,   217,   424,   425,    -1,   414,     5,   302,
     423,     4,   424,   425,    -1,   414,     5,   318,   423,     4,
       4,   424,   425,    -1,   414,     5,   313,     4,   425,    -1,
     414,     5,   314,     4,   425,    -1,   414,     5,   350,     5,
     424,   425,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    66,     5,    -1,     5,   216,   424,    -1,     5,
       5,   310,   424,    -1,     5,   217,   424,    -1,     5,   302,
     423,     4,   424,    -1,     5,   318,   423,     4,     4,   424,
      -1,     5,   313,     4,    -1,     5,   314,     4,    -1,     5,
     350,     5,   424,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    66,     5,    -1,     5,   216,   424,    -1,
       5,   217,   424,    -1,     5,   302,   423,     4,   424,    -1,
       5,   313,     4,    -1,     5,   314,     4,    -1,     5,   350,
       5,   424,    -1,     5,    13,     5,   425,    -1,     5,    66,
       5,   425,    -1,     5,   216,   425,    -1,     5,   302,   423,
       4,   425,    -1,     5,   313,     4,   425,    -1,     5,   350,
       5,   425,    -1,     5,     5,     5,   425,    -1,     5,     5,
      -1,   309,     5,     5,    -1,   102,     4,     4,     4,     4,
       4,    -1,   213,     4,     4,     4,     4,     4,    -1,   122,
      -1,   265,    -1,   405,    -1,   156,   405,    -1,    96,   405,
      -1,    72,     5,    -1,     5,     4,     4,    -1,   346,   403,
     403,    -1,   395,   403,    -1,     5,     5,   414,   420,     5,
       5,   414,   420,   403,   414,   422,     5,    -1,    65,   559,
      -1,    72,     5,    -1,    88,    -1,    81,   565,     5,    -1,
      81,   565,   350,     5,    -1,    83,   108,    -1,    -1,    91,
     557,   560,    -1,    97,    -1,   108,   563,    -1,   116,   564,
      -1,   125,     4,    -1,   144,     5,    -1,   167,    16,    -1,
     167,   241,   403,   403,    -1,   167,   338,   403,   403,    -1,
       4,    20,   429,   405,    -1,    20,   319,    60,     5,    -1,
      20,   319,    60,    -1,     4,    21,   408,    -1,     4,    21,
     408,   415,    -1,     4,    21,   408,   413,   420,    -1,     4,
      22,   273,   403,   403,     4,   413,   422,    -1,     4,    22,
     273,     5,   413,   422,    -1,     4,    54,   273,   403,   403,
     403,     4,   413,   422,    -1,     4,    54,   273,     5,   413,
     422,    -1,     4,    53,   273,   403,   403,   413,   422,    -1,
       4,    57,   116,   408,   408,     4,   403,   403,   403,     4,
      -1,     4,    57,   116,   408,   408,     4,   403,   403,   403,
       4,   415,    -1,     4,    57,   116,   408,   408,     4,   403,
     403,   403,     4,   413,   420,    -1,     4,    57,   116,     5,
       5,   413,   420,   413,   422,    -1,     4,    60,   558,     5,
       5,    -1,     4,    68,   273,   403,   413,   422,    -1,     4,
      72,     5,    -1,     4,    82,    27,   405,   405,    -1,     4,
      82,   122,   426,   426,    -1,     4,    82,   187,     5,     5,
      -1,     4,    82,   273,   403,   413,   422,    -1,     4,    82,
     325,   413,   420,    -1,     4,    83,   154,   405,    -1,     4,
      83,    28,   405,    -1,     4,    83,   341,     5,    -1,     4,
      90,   116,   408,   408,     4,   403,   403,     4,    -1,     4,
      90,   116,   408,   408,     4,   403,   403,     4,   415,    -1,
       4,    90,   116,   408,   408,     4,   403,   403,     4,   413,
     420,    -1,     4,    90,   116,     5,     5,   413,   420,   413,
     422,    -1,     4,    91,    22,   273,   403,   403,    -1,     4,
      91,    54,   273,   403,   403,    -1,     4,    91,    57,    21,
     403,   403,    -1,     4,    91,    57,   273,   403,   403,    -1,
       4,    91,   121,   273,   403,   403,    -1,     4,    91,   124,
      21,   403,   403,    -1,     4,    91,   124,   273,   403,   403,
      -1,     4,    91,    90,    21,   403,   403,    -1,     4,    91,
      90,   273,   403,   403,    -1,     4,    91,   261,   354,     4,
     403,   403,    -1,     4,    91,   296,   354,     4,   403,   403,
      -1,     4,   108,    -1,     4,   108,    22,     4,    -1,     4,
     108,    54,     4,    -1,     4,   108,    57,     4,    -1,     4,
     108,   121,     4,    -1,     4,   108,    60,   558,     5,    -1,
       4,   108,   124,     4,    -1,     4,   108,    90,     4,    -1,
       4,   108,   261,   354,     4,    -1,     4,   108,   296,   354,
       4,    -1,     4,   108,   327,    -1,     4,   108,   327,     5,
      -1,     4,   108,   327,     4,    -1,     4,   116,    43,     4,
      -1,     4,   120,   273,   403,   403,   413,   422,    -1,     4,
     121,   273,   403,   403,   403,     4,   413,   422,    -1,     4,
     121,   273,     5,   413,   422,    -1,     4,   124,   116,   408,
     408,     4,   403,   403,   403,     4,    -1,     4,   124,   116,
     408,   408,     4,   403,   403,   403,     4,   415,    -1,     4,
     124,   116,   408,   408,     4,   403,   403,   403,     4,   413,
     420,    -1,     4,   124,   116,     5,     5,   413,   420,   413,
     422,    -1,     4,   144,     5,    -1,     4,   167,    -1,     4,
     167,   241,    -1,     4,   196,    27,   405,   405,    -1,     4,
     196,   122,   426,   426,    -1,     4,   196,   259,   413,   420,
     412,   412,    -1,     4,   223,   403,   403,    -1,     4,   223,
     148,    -1,     4,   223,    38,    -1,     4,   223,   337,   413,
     420,   412,    -1,     4,   261,   259,   413,   420,   421,     5,
      -1,     4,   261,   259,   413,   420,   421,   350,     5,    -1,
       4,   261,   279,   403,   403,   413,   422,    -1,     4,   296,
     279,   403,   403,   413,   422,    -1,     4,   259,   300,   427,
      -1,     4,   259,   308,     4,    -1,     4,   259,   155,     5,
      -1,     4,   267,   413,   420,   412,   412,   403,   413,   422,
      -1,     4,   268,   578,   405,    -1,     4,   284,    43,    -1,
       4,   285,   145,     5,    -1,     4,   285,   259,   413,   420,
     412,   412,    -1,     4,   285,   325,   413,   420,   413,   422,
      -1,     4,   297,    -1,     4,   297,   241,    -1,     4,   327,
       5,    -1,     4,   329,     5,    -1,     4,   329,   284,   405,
      -1,     4,   343,    -1,     4,   345,    -1,     4,   352,    27,
     405,    -1,     4,   352,   122,   426,    -1,     4,   352,   259,
     413,   420,   412,   413,   422,   403,   408,    -1,     4,   386,
       4,    -1,     4,   101,     4,     4,    -1,   185,    -1,   185,
     403,   403,    -1,   198,   573,    -1,   199,   574,    -1,   223,
     575,    -1,   266,   405,    -1,   268,   578,   405,    -1,   268,
     578,   405,   403,   403,    -1,   284,    43,   403,   403,    -1,
     284,   220,   403,   403,     4,    -1,   284,   122,    -1,   289,
     582,    -1,   297,   583,    -1,   305,   584,    -1,     5,    72,
       5,    -1,     5,    88,    -1,     5,   108,    -1,     5,    97,
      -1,     5,   144,     5,    -1,     5,   167,    -1,     5,   167,
     241,    -1,     5,   223,   403,   403,    -1,     5,   223,   148,
      -1,     5,   223,    38,    -1,     5,   223,   337,   413,   420,
     412,    -1,     5,   268,   578,   405,    -1,     5,   297,    -1,
       5,   297,   241,    -1,     5,   343,    -1,     5,   345,    -1,
     327,   116,     5,     5,    -1,   327,   108,     5,    -1,   327,
     108,    16,    -1,   327,     5,    -1,   327,   346,     5,    -1,
     252,    -1,   252,   413,    -1,   342,    -1,   343,    16,    -1,
     345,    16,    -1,   386,     4,    -1,   101,     4,     4,    -1,
     297,    -1,   345,    -1,   167,    -1,   343,    -1,    43,   223,
      -1,   223,    -1,   122,   223,    -1,    43,   116,    -1,   116,
      -1,   122,   116,    -1,    43,   284,    -1,   284,    -1,   122,
     284,    -1,   108,    -1,   329,    -1,    72,    -1,   386,    -1,
     268,    -1,   144,    -1,   185,    -1,   346,    -1,    -1,     4,
      -1,    32,   405,    -1,   273,   403,    -1,   181,     4,    -1,
     246,     4,   403,    -1,    68,   403,   403,   403,   579,    -1,
     120,   403,   403,   403,   403,   407,   579,    -1,    53,   403,
     403,   403,   403,   407,   579,    -1,   261,   403,   403,   403,
     403,   579,    -1,   261,    61,   350,     5,   579,    -1,   296,
      61,   350,     5,   579,    -1,   296,   403,   403,   403,   403,
     579,    -1,   196,   403,   403,   403,   403,   579,    -1,   352,
     403,   403,   403,   403,   579,    -1,   329,   403,   403,   407,
     579,    -1,    68,   259,   403,   403,   428,   579,    -1,    53,
     259,   403,   403,   428,   579,    -1,   111,   259,   403,   403,
     428,   579,    -1,    93,   259,   403,   403,   428,   579,    -1,
     399,   259,   403,   403,   428,   579,    -1,    27,   259,   403,
     403,   428,   579,    -1,    56,   259,   403,   403,   428,   579,
      -1,   155,   259,   403,   403,     5,   579,    -1,   155,   259,
     403,   403,     4,     5,   579,    -1,   285,   403,   403,   403,
     403,   413,   420,   413,   422,     5,   579,    -1,    82,   403,
     403,   403,   413,   420,   579,    -1,   267,   403,   403,   403,
     403,   403,   579,    -1,    22,   403,   403,   403,   403,     4,
     579,    -1,   121,   403,   403,   403,   403,   403,     4,   407,
     579,    -1,    54,   403,   403,   403,   403,   403,     4,   407,
     579,    -1,    90,   403,   403,   408,   408,     4,   403,   403,
       4,   579,    -1,   124,   403,   403,   408,   408,     4,   403,
     403,   403,     4,   407,   579,    -1,    57,   403,   403,   408,
     408,     4,   403,   403,   403,     4,   407,   579,    -1,    83,
     561,   579,    -1,   328,   562,    -1,    -1,     4,    -1,     5,
     403,   403,    -1,   350,     5,   403,   403,    -1,   403,   403,
     350,     5,    -1,     5,   413,   420,   412,    -1,    -1,   297,
      -1,    16,    -1,    43,   403,   403,     4,    -1,   220,   403,
     403,     4,    -1,   122,    -1,   115,    -1,   388,    -1,    69,
      -1,   288,    -1,   287,    -1,   270,    -1,   389,    -1,    65,
     567,    -1,    72,    -1,   144,    -1,   125,    -1,   160,   403,
     403,    -1,   175,   403,   403,    -1,     4,    20,    90,     5,
       5,     5,   413,     4,    -1,     4,    20,   169,     5,     5,
       4,    -1,     4,    20,   257,     5,     5,     5,     5,   413,
     420,   430,    -1,     4,    20,   258,     5,     5,   413,   430,
      -1,     4,    20,   272,     5,     5,     5,   413,    -1,     4,
      20,   319,   413,   420,    -1,     4,    20,   319,   102,   413,
     420,    -1,    20,   319,    16,   102,   413,   420,    -1,    20,
     319,   396,    -1,   175,    16,    -1,     4,    21,    -1,     4,
      21,   415,    -1,     4,    21,   413,   420,    -1,     4,    22,
     273,   413,   422,    -1,     4,    54,   273,   413,   422,    -1,
       4,    53,   273,   413,   422,    -1,     4,    57,    21,    -1,
       4,    57,    21,   415,    -1,     4,    57,    21,   413,   420,
      -1,     4,    57,   273,   413,   422,    -1,     4,    64,   413,
     420,   421,    -1,     4,    68,   273,   413,   422,    -1,     4,
      72,    -1,     4,    82,    27,    -1,     4,    82,   122,    -1,
       4,    82,   187,    -1,     4,    82,   273,   413,   422,    -1,
       4,    82,   325,    -1,     4,    83,   154,    -1,     4,    83,
      28,    -1,     4,    83,   341,    -1,     4,    90,    21,    -1,
       4,    90,    21,   415,    -1,     4,    90,    21,   413,   420,
      -1,     4,    90,   273,   413,   422,    -1,     4,   120,   273,
     413,   422,    -1,     4,   121,   273,   413,   422,    -1,     4,
     124,    21,    -1,     4,   124,    21,   415,    -1,     4,   124,
      21,   413,   420,    -1,     4,   124,   273,   413,   422,    -1,
       4,   144,    -1,     4,   167,    -1,     4,   196,    27,    -1,
       4,   196,   122,    -1,     4,   196,   191,   413,   422,    -1,
       4,   196,   259,   413,   420,   421,    -1,     4,   206,   191,
     403,   413,   422,    -1,     4,   259,   300,    -1,     4,   259,
     308,    -1,     4,   259,   155,    -1,     4,   261,   259,   413,
     420,   421,    -1,     4,   267,   259,   413,   420,   421,    -1,
       4,   267,   191,   413,   422,    -1,     4,   267,   333,   413,
     422,    -1,     4,   268,    -1,     4,   268,   578,    -1,     4,
     285,   145,    -1,     4,   285,   191,   413,   422,    -1,     4,
     285,   259,   413,   420,   421,    -1,     4,   285,   325,    -1,
       4,   297,    -1,     4,   327,    -1,     4,   327,     4,    -1,
       4,   329,    -1,     4,   329,   284,    -1,     4,   341,    -1,
       4,   352,    27,    -1,     4,   352,   122,    -1,     4,   352,
     191,   413,   422,    -1,     4,   352,   259,   413,   420,   421,
      -1,     4,   386,    -1,     4,   101,    -1,   167,   568,    -1,
     167,   237,    -1,   237,    -1,   261,   296,   403,   403,    -1,
     296,   296,   403,   403,    -1,   266,    -1,   268,   578,    -1,
     297,   569,    -1,   297,   237,    -1,   305,   570,    -1,     5,
      72,    -1,     5,   144,    -1,     5,   175,    -1,     5,   268,
     578,    -1,     5,   327,    -1,     5,   327,   237,    -1,   327,
      16,    -1,   327,   107,   224,    -1,   386,    -1,   101,    -1,
      32,    -1,   273,    -1,   181,    -1,   246,    -1,    -1,   403,
     403,    -1,    -1,   403,   403,    -1,    -1,   329,    -1,    -1,
      -1,   260,    -1,   275,    -1,   348,    -1,    62,    -1,   146,
      -1,   565,   413,   420,   421,   405,   580,   587,    -1,   297,
     565,   413,   420,   421,   405,   580,   587,    -1,   565,     5,
      -1,   565,     5,     4,     5,   413,   420,    -1,   565,     4,
      -1,   565,     4,     4,     5,   413,   420,    -1,   139,     5,
      -1,   139,     5,     5,    -1,   403,   403,    -1,   148,    -1,
      38,    -1,    43,   403,   403,    -1,   220,   403,   403,    -1,
     122,    -1,   337,   413,   420,   412,    -1,   576,   577,    -1,
     577,    -1,   578,   400,   405,    -1,    72,   400,     5,    -1,
     101,   400,     4,     4,    -1,   386,   400,     4,    -1,   144,
     400,     5,    -1,   329,   400,     5,    -1,   590,    -1,   591,
      -1,   231,    -1,   297,    -1,   167,    -1,   100,    -1,   141,
      -1,   116,    -1,   223,    -1,   284,    -1,   108,    -1,   178,
      -1,   315,    -1,   134,    -1,   571,    -1,   571,   576,    -1,
      -1,    -1,   581,   585,    -1,     5,   565,   413,   420,   421,
     405,    -1,   297,     5,   565,   413,   420,   421,   405,    -1,
     328,     5,    -1,    16,    -1,   241,   403,   403,    -1,   338,
      -1,   338,   403,   403,    -1,   136,    -1,   190,    -1,   405,
      -1,   329,   405,    -1,   585,   586,    -1,   586,    -1,   578,
     400,   405,    -1,    -1,    -1,   588,   589,    -1,   589,   590,
      -1,   590,    -1,   327,   400,     5,    -1,    60,   400,   558,
       5,     5,    -1,    -1,    91,    -1,     4,    -1,   189,     4,
      -1,    72,     5,    -1,     4,    72,     5,    -1,    49,   417,
      -1,     4,    49,   417,    -1,   335,   403,    -1,     4,   335,
     403,    -1,   351,   405,    -1,     4,   351,   405,    -1,   305,
      -1,     4,   305,    -1,   166,    -1,     4,   166,    -1,   108,
      -1,     4,   108,    -1,   347,    -1,     4,   347,    -1,   114,
      -1,     4,   114,    -1,   334,    -1,     4,   334,    -1,    52,
      -1,     4,    52,    -1,    70,    -1,    72,     5,    -1,   207,
     416,    -1,   274,   403,   403,    -1,   325,   413,    -1,   335,
     403,    -1,    49,   417,    -1,   207,     4,    -1,   399,    -1,
     397,    -1,   389,    -1,   231,    -1,   403,   403,   403,   403,
      -1,   403,   403,    -1,   415,   403,   403,    -1,   413,   420,
     412,    -1,   337,   596,    -1,    42,   403,   403,    -1,   220,
     597,    -1,   266,   405,    -1,   403,   403,    -1,   415,   403,
     403,    -1,   413,   420,   412,    -1,    43,   403,   403,    -1,
     403,   403,    -1,   122,   403,   403,    -1,   405,    -1,   357,
     414,   420,    -1,     5,     4,     4,    -1,   346,    -1,    78,
     601,    -1,   192,     4,    -1,   280,     4,    -1,   291,   403,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    59,    -1,
     157,    -1,   282,    -1,    98,    -1,   167,   603,    -1,   297,
     604,    -1,    43,   403,   403,    -1,   220,   403,   403,    -1,
     122,    -1,   303,   122,    -1,    43,   403,   403,    -1,   220,
     403,   403,    -1,   122,    -1,   303,   122,    -1,   215,    -1,
      12,    -1,   137,    -1,   231,    -1,    36,    -1,   118,    -1,
       4,    -1,    70,    -1,    66,     5,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,   325,   413,    -1,    66,     5,
      -1,    66,   171,    -1,    66,   290,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,    66,     5,    -1,    66,   171,
      -1,    66,   290,    -1,    66,   349,    -1,   325,   413,    -1,
     351,     4,     4,     4,    -1,   403,    -1,   403,   106,    -1,
     220,   613,    -1,   337,   403,    -1,   337,   403,   106,    -1,
      43,    -1,   403,    -1,   122,    -1,    26,   616,    -1,   139,
     617,    -1,   394,   615,    -1,   236,   634,    -1,   123,   635,
      -1,   254,     5,    -1,   133,     5,    -1,    66,     5,    -1,
     313,     4,    -1,   133,     5,   431,    -1,    66,     5,   431,
      -1,   313,     4,   431,    -1,   282,    95,   624,    -1,   173,
      95,   627,    -1,   172,    95,   630,    -1,   618,    -1,   177,
     618,    -1,   326,   619,    -1,   309,   620,    -1,   129,    95,
     621,    -1,   218,   622,    -1,   282,   177,   625,    -1,   282,
      95,   626,    -1,   173,   177,   628,    -1,   173,    95,   629,
      -1,   172,   177,   631,    -1,   172,    95,   632,    -1,   277,
     633,    -1,   133,     5,    -1,    66,     5,    -1,   313,     4,
      -1,   133,     5,    -1,    66,     5,    -1,   313,     4,    -1,
     133,     5,    -1,    66,     5,    -1,   313,     4,    -1,   133,
       5,    -1,    66,     5,    -1,   313,     4,    -1,   177,   623,
      -1,   133,     5,     4,    -1,    66,     5,     4,    -1,   313,
       4,     4,    -1,   133,     5,    -1,    66,     5,    -1,   313,
       4,    -1,   133,     5,   431,    -1,    66,     5,   431,    -1,
     313,     4,   431,    -1,   133,     5,    -1,    66,     5,    -1,
     313,     4,    -1,   133,     5,    -1,    66,     5,    -1,   313,
       4,    -1,   133,     5,   431,    -1,    66,     5,   431,    -1,
     313,     4,   431,    -1,   133,     5,    -1,    66,     5,    -1,
     313,     4,    -1,   133,     5,    -1,    66,     5,    -1,   313,
       4,    -1,   133,     5,   431,    -1,    66,     5,   431,    -1,
     313,     4,   431,    -1,   133,     5,    -1,    66,     5,    -1,
     313,     4,    -1,   133,     5,    -1,    66,     5,    -1,   313,
       4,    -1,   133,     5,    -1,    66,     5,    -1,   313,     4,
      -1,   133,     5,   431,    -1,    66,     5,   431,    -1,   313,
       4,   431,    -1,   133,     5,     5,   431,    -1,   637,     4,
       4,   403,   403,   408,    -1,   637,     4,    -1,   108,    -1,
      55,    -1,   339,    -1,   152,    -1,   119,    -1,    -1,     4,
     403,   403,   403,   403,    -1,   235,    -1,   235,     4,   403,
     403,   403,   403,    -1,   139,   309,   639,    -1,   139,    64,
      -1,   139,    64,   403,   403,    -1,     4,    -1,     4,     4,
      -1,   403,   413,    -1,   403,   403,    -1,   337,   403,   403,
      -1,   414,   420,   421,    -1,    15,   644,    -1,   279,     4,
      -1,   276,   643,    -1,    23,   642,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   329,     4,     5,    -1,     4,    -1,     4,
     414,   420,    -1,   337,     4,   414,   420,    -1,   260,    70,
      -1,   265,    -1,   403,   403,    -1,   403,   403,    11,   403,
     403,    -1,   403,   403,    11,   415,   403,   403,    -1,   403,
     403,    11,   413,   420,   412,    -1,   337,   647,    -1,   138,
      -1,   138,   403,    -1,   403,   403,    -1,   403,   403,    11,
     403,   403,    -1,   403,   403,    11,   415,   403,   403,    -1,
     403,   403,    11,   413,   420,   412,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   508,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   570,   571,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   587,   589,   590,   591,   592,
     594,   595,   596,   597,   600,   601,   602,   603,   604,   607,
     608,   611,   612,   613,   616,   619,   622,   625,   637,   644,
     651,   659,   660,   661,   662,   663,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   696,   697,   700,   701,   702,   703,
     704,   705,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,   720,   721,   722,   723,   724,   727,
     728,   729,   730,   731,   732,   733,   734,   737,   738,   739,
     740,   741,   744,   745,   746,   747,   748,   749,   750,   751,
     754,   755,   756,   759,   760,   761,   762,   765,   766,   767,
     770,   771,   772,   775,   776,   777,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   806,   807,   810,
     811,   812,   813,   814,   815,   818,   819,   820,   821,   824,
     825,   826,   827,   828,   829,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   845,   846,   847,   848,   851,
     852,   855,   856,   859,   860,   863,   864,   867,   868,   872,
     873,   874,   875,   876,   877,   878,   879,   882,   883,   886,
     887,   888,   890,   892,   893,   894,   896,   900,   901,   904,
     905,   907,   910,   912,   918,   919,   920,   921,   924,   925,
     926,   929,   930,   931,   932,   933,   934,   935,   941,   942,
     945,   946,   947,   948,   949,   952,   953,   954,   955,   958,
     959,   964,   969,   976,   978,   980,   982,   984,   986,   987,
     988,   991,   993,   995,   997,   999,  1002,  1003,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1015,  1018,  1021,  1027,  1033,
    1036,  1037,  1040,  1041,  1042,  1049,  1050,  1051,  1052,  1055,
    1056,  1059,  1060,  1063,  1064,  1065,  1069,  1071,  1075,  1076,
    1077,  1078,  1081,  1082,  1085,  1087,  1088,  1089,  1090,  1093,
    1094,  1096,  1097,  1098,  1101,  1103,  1105,  1106,  1108,  1110,
    1112,  1114,  1118,  1121,  1122,  1123,  1124,  1127,  1128,  1131,
    1132,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1145,  1146,  1147,  1148,  1149,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1179,  1180,  1181,  1184,  1186,  1190,  1192,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1206,  1207,
    1208,  1211,  1212,  1215,  1216,  1218,  1220,  1221,  1222,  1223,
    1224,  1225,  1232,  1233,  1236,  1237,  1238,  1241,  1242,  1245,
    1248,  1249,  1251,  1255,  1256,  1257,  1260,  1264,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
    1280,  1281,  1282,  1285,  1286,  1289,  1291,  1299,  1301,  1303,
    1307,  1308,  1310,  1313,  1316,  1317,  1321,  1323,  1326,  1331,
    1332,  1333,  1337,  1338,  1339,  1342,  1343,  1344,  1347,  1348,
    1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,
    1361,  1362,  1365,  1366,  1369,  1370,  1371,  1372,  1375,  1376,
    1379,  1381,  1384,  1388,  1389,  1390,  1392,  1394,  1398,  1399,
    1400,  1403,  1404,  1405,  1406,  1407,  1408,  1411,  1412,  1413,
    1414,  1415,  1416,  1417,  1420,  1421,  1424,  1427,  1428,  1429,
    1432,  1435,  1436,  1437,  1440,  1441,  1442,  1445,  1446,  1447,
    1448,  1449,  1450,  1453,  1454,  1455,  1456,  1457,  1458,  1459,
    1460,  1463,  1464,  1465,  1466,  1469,  1470,  1473,  1474,  1477,
    1478,  1481,  1482,  1485,  1486,  1489,  1490,  1491,  1494,  1495,
    1498,  1499,  1502,  1505,  1513,  1514,  1517,  1518,  1519,  1520,
    1521,  1522,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,
    1531,  1532,  1533,  1534,  1537,  1540,  1541,  1544,  1545,  1546,
    1547,  1550,  1551,  1552,  1553,  1556,  1557,  1558,  1559,  1560,
    1561,  1564,  1565,  1566,  1567,  1568,  1569,  1571,  1572,  1577,
    1578,  1581,  1583,  1585,  1588,  1589,  1590,  1591,  1592,  1593,
    1594,  1597,  1599,  1601,  1603,  1604,  1606,  1608,  1610,  1612,
    1614,  1615,  1616,  1619,  1620,  1621,  1622,  1623,  1624,  1626,
    1627,  1628,  1631,  1634,  1636,  1638,  1640,  1642,  1644,  1646,
    1648,  1651,  1653,  1655,  1657,  1658,  1659,  1660,  1661,  1662,
    1663,  1664,  1665,  1668,  1669,  1670,  1671,  1672,  1673,  1674,
    1676,  1678,  1679,  1680,  1683,  1684,  1685,  1686,  1687,  1688,
    1690,  1691,  1692,  1695,  1696,  1697,  1698,  1699,  1702,  1705,
    1708,  1711,  1714,  1717,  1720,  1723,  1726,  1731,  1734,  1737,
    1740,  1743,  1746,  1749,  1752,  1755,  1758,  1761,  1766,  1769,
    1772,  1775,  1778,  1781,  1784,  1787,  1790,  1795,  1797,  1799,
    1801,  1803,  1805,  1810,  1812,  1814,  1818,  1821,  1824,  1827,
    1830,  1833,  1836,  1839,  1842,  1845,  1848,  1853,  1854,  1855,
    1856,  1857,  1858,  1859,  1861,  1863,  1864,  1865,  1868,  1869,
    1870,  1871,  1872,  1873,  1875,  1876,  1877,  1880,  1882,  1884,
    1885,  1887,  1889,  1896,  1900,  1901,  1904,  1905,  1906,  1909,
    1912,  1913,  1914,  1915,  1916,  1917,  1918,  1921,  1929,  1930,
    1931,  1932,  1934,  1936,  1937,  1937,  1938,  1939,  1940,  1941,
    1942,  1944,  1945,  1947,  1950,  1952,  1954,  1957,  1958,  1959,
    1962,  1965,  1968,  1972,  1975,  1978,  1981,  1985,  1990,  1995,
    1997,  1999,  2000,  2002,  2004,  2006,  2008,  2010,  2011,  2012,
    2014,  2016,  2018,  2022,  2027,  2029,  2031,  2033,  2035,  2037,
    2039,  2041,  2043,  2045,  2047,  2050,  2051,  2053,  2055,  2056,
    2058,  2060,  2061,  2062,  2064,  2066,  2067,  2068,  2070,  2071,
    2074,  2078,  2081,  2084,  2088,  2093,  2099,  2100,  2101,  2103,
    2104,  2105,  2109,  2111,  2112,  2113,  2116,  2119,  2122,  2125,
    2128,  2130,  2131,  2133,  2138,  2141,  2142,  2143,  2146,  2150,
    2151,  2153,  2154,  2155,  2157,  2158,  2160,  2161,  2162,  2167,
    2168,  2170,  2171,  2173,  2174,  2175,  2176,  2177,  2178,  2180,
    2182,  2184,  2185,  2186,  2188,  2190,  2191,  2192,  2193,  2194,
    2195,  2196,  2197,  2198,  2199,  2200,  2202,  2204,  2205,  2206,
    2207,  2209,  2210,  2211,  2212,  2213,  2215,  2216,  2217,  2218,
    2219,  2220,  2221,  2224,  2225,  2226,  2227,  2228,  2229,  2230,
    2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,
    2241,  2242,  2243,  2244,  2247,  2248,  2249,  2250,  2251,  2252,
    2260,  2267,  2276,  2285,  2292,  2297,  2302,  2309,  2317,  2325,
    2332,  2337,  2342,  2347,  2352,  2357,  2362,  2367,  2372,  2378,
    2388,  2398,  2408,  2415,  2425,  2435,  2444,  2456,  2469,  2475,
    2478,  2479,  2488,  2490,  2492,  2497,  2501,  2502,  2503,  2509,
    2511,  2513,  2516,  2517,  2518,  2519,  2520,  2521,  2522,  2525,
    2526,  2527,  2528,  2529,  2530,  2532,  2534,  2536,  2538,  2540,
    2542,  2544,  2546,  2548,  2551,  2552,  2553,  2554,  2556,  2559,
    2561,  2563,  2564,  2565,  2567,  2570,  2573,  2575,  2576,  2577,
    2578,  2579,  2581,  2582,  2583,  2584,  2585,  2586,  2587,  2589,
    2591,  2593,  2596,  2597,  2598,  2600,  2603,  2604,  2605,  2606,
    2607,  2609,  2612,  2616,  2617,  2618,  2619,  2622,  2625,  2628,
    2630,  2631,  2632,  2633,  2635,  2638,  2639,  2641,  2642,  2643,
    2644,  2645,  2647,  2648,  2649,  2651,  2654,  2655,  2656,  2657,
    2658,  2659,  2661,  2663,  2664,  2665,  2666,  2668,  2670,  2671,
    2672,  2673,  2674,  2675,  2677,  2678,  2680,  2681,  2684,  2685,
    2686,  2687,  2690,  2691,  2694,  2695,  2698,  2699,  2702,  2715,
    2716,  2720,  2721,  2725,  2726,  2729,  2733,  2739,  2741,  2744,
    2746,  2749,  2751,  2755,  2756,  2757,  2758,  2759,  2760,  2761,
    2765,  2766,  2769,  2770,  2771,  2772,  2773,  2774,  2775,  2776,
    2779,  2780,  2781,  2782,  2783,  2784,  2785,  2786,  2787,  2788,
    2789,  2790,  2793,  2794,  2797,  2798,  2798,  2801,  2803,  2805,
    2808,  2809,  2810,  2811,  2812,  2813,  2816,  2817,  2820,  2821,
    2824,  2828,  2829,  2829,  2832,  2833,  2836,  2839,  2843,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2856,  2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,  2865,
    2866,  2867,  2868,  2869,  2872,  2873,  2874,  2875,  2876,  2877,
    2878,  2879,  2885,  2886,  2887,  2888,  2891,  2893,  2894,  2899,
    2901,  2902,  2903,  2904,  2907,  2908,  2913,  2917,  2918,  2919,
    2922,  2923,  2928,  2929,  2932,  2934,  2935,  2936,  2941,  2943,
    2949,  2950,  2951,  2952,  2955,  2956,  2959,  2961,  2963,  2964,
    2967,  2969,  2970,  2971,  2974,  2975,  2976,  2979,  2980,  2981,
    2984,  2985,  2988,  2989,  2990,  2993,  2997,  2998,  2999,  3000,
    3001,  3004,  3005,  3006,  3007,  3008,  3009,  3012,  3013,  3014,
    3015,  3016,  3019,  3020,  3021,  3024,  3025,  3026,  3027,  3028,
    3029,  3032,  3033,  3034,  3037,  3039,  3041,  3043,  3044,  3045,
    3048,  3049,  3050,  3051,  3052,  3053,  3054,  3055,  3056,  3057,
    3058,  3059,  3060,  3063,  3064,  3065,  3068,  3069,  3070,  3073,
    3074,  3075,  3078,  3079,  3080,  3083,  3084,  3085,  3086,  3089,
    3090,  3091,  3094,  3096,  3098,  3102,  3103,  3104,  3107,  3108,
    3109,  3112,  3114,  3116,  3120,  3121,  3122,  3125,  3126,  3127,
    3130,  3132,  3134,  3138,  3139,  3140,  3143,  3144,  3145,  3148,
    3149,  3150,  3153,  3155,  3157,  3161,  3165,  3167,  3172,  3175,
    3176,  3177,  3178,  3181,  3182,  3185,  3187,  3189,  3190,  3191,
    3195,  3196,  3197,  3200,  3201,  3204,  3206,  3207,  3208,  3209,
    3212,  3213,  3214,  3217,  3218,  3219,  3222,  3223,  3228,  3230,
    3233,  3240,  3241,  3243,  3248,  3250,  3253,  3254,  3255,  3256,
    3258,  3263
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
  "ARRAY_", "ARROW_", "AREA_", "ASDF_", "ASINH_", "AST_", "AUTO_", "AUX_",
  "AVERAGE_", "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_",
  "BAR_", "BASE_", "BBOX_", "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_",
  "BITPIX_", "BLEND_", "BLOCK_", "BORDER_", "BOTTOM_", "BOX_",
  "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_",
  "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_",
  "CHANNEL_", "CHEVRON_", "CIRCLE_", "CIAO_", "CLEAR_", "CLIP_", "COLOR_",
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
  "GLOBAL_", "GLYPH_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HARDLIGHT_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_",
  "HIGHLITE_", "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_",
  "HLS_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_",
  "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_",
  "LABEL_", "LAYER_", "LAYERNO_", "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_",
  "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_",
  "LOCAL_", "LOG_", "LUMINOSITY_", "MACOSX_", "MAGNIFIER_", "MATCH_",
  "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_", "MESSAGE_", "METHOD_",
  "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_",
  "MOTION_", "MULTICOLOR_", "MULTIPLY_", "MOVE_", "NAME_", "NAN_",
  "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NORMAL_",
  "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_",
  "ON_", "ONLY_", "OPENARROW_", "OPENBOX_", "OPENCIRCLE_", "OPENTRIANGLE_",
  "OPTION_", "ORIENT_", "OVERLAY_", "PAN_", "PANNER_", "PARSER_", "PASTE_",
  "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_",
  "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_",
  "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_",
  "QUERY_", "RADIAL_", "RADIUS_", "RANGE_", "REGION_", "REPLACE_",
  "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_", "REVEAL_", "RGB_",
  "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_",
  "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHADE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_",
  "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_",
  "STRENGTH_", "STYLE_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_", "TAG_",
  "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_",
  "TOP_", "TRANSPARENCY_", "TRIANGLE_", "TO_", "TOGGLE_", "TOPHAT_",
  "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_",
  "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_",
  "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_",
  "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_",
  "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_",
  "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_",
  "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_",
  "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_", "'Y'", "'N'", "'X'",
  "'='", "$accept", "command", "numeric", "debug", "yesno", "fileNameType",
  "optangle", "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "lineEnd", "pointShape", "pointSize", "analysisTask",
  "analysisMethod", "endian", "threed", "threedShade", "threedShadeNormal",
  "threedBorder", "threedCompass", "threedHighlite", "threedView", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "contourStyle", "crop",
  "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy", "get",
  "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
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
  "loadFitsRGBImage", "loadNRRD", "loadAsdf", "loadPhoto", "loadIncr",
  "macosx", "magnifier", "match", "marker", "@1", "markerCallBack",
  "markerCentroid", "markerCreate", "compositeOperation",
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
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
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   401,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   406,   406,   406,   406,   406,   407,
     407,   408,   408,   408,   409,   410,   411,   412,   412,   412,
     412,   413,   413,   413,   413,   413,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   415,   415,   416,   416,   416,   416,
     416,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   418,
     418,   418,   418,   418,   418,   418,   418,   419,   419,   419,
     419,   419,   420,   420,   420,   420,   420,   420,   420,   420,
     421,   421,   421,   422,   422,   422,   422,   423,   423,   423,
     424,   424,   424,   425,   425,   425,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   428,   428,   429,
     429,   429,   429,   429,   429,   430,   430,   430,   430,   431,
     431,   431,   431,   431,   431,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   433,   433,   433,   433,   434,
     434,   435,   435,   436,   436,   437,   437,   438,   438,   439,
     439,   439,   439,   439,   439,   439,   439,   440,   440,   441,
     441,   441,   441,   441,   441,   441,   441,   442,   442,   443,
     443,   443,   443,   443,   444,   444,   444,   444,   445,   445,
     445,   446,   446,   446,   446,   446,   446,   446,   447,   447,
     448,   448,   448,   448,   448,   449,   449,   449,   449,   450,
     450,   450,   450,   451,   451,   451,   451,   451,   451,   451,
     451,   452,   452,   452,   452,   452,   453,   453,   454,   454,
     454,   454,   454,   454,   454,   455,   455,   455,   455,   455,
     456,   456,   457,   457,   457,   458,   458,   458,   458,   459,
     459,   460,   460,   461,   461,   461,   462,   462,   463,   463,
     463,   463,   464,   464,   464,   464,   464,   464,   464,   465,
     465,   465,   465,   465,   466,   466,   466,   466,   466,   466,
     466,   466,   467,   468,   468,   468,   468,   469,   469,   470,
     470,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   472,   472,   473,   473,
     474,   474,   474,   474,   474,   474,   474,   474,   475,   475,
     475,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   478,   479,   479,   479,   480,   480,   481,
     482,   482,   482,   483,   483,   483,   484,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     486,   486,   486,   487,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   491,   492,   492,   493,   493,   493,   494,
     494,   494,   495,   495,   495,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   498,   498,   499,   499,   499,   499,   500,   500,
     501,   501,   501,   502,   502,   502,   502,   502,   503,   503,
     503,   504,   504,   504,   504,   504,   504,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   507,   508,   508,   508,
     509,   510,   510,   510,   511,   511,   511,   512,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     513,   514,   514,   514,   514,   515,   515,   516,   516,   517,
     517,   518,   518,   519,   519,   520,   520,   520,   521,   521,
     522,   522,   523,   523,   524,   524,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   526,   527,   527,   528,   528,   528,
     528,   529,   529,   529,   529,   530,   530,   530,   530,   530,
     530,   531,   531,   531,   531,   531,   531,   531,   531,   532,
     532,   533,   533,   533,   534,   534,   534,   534,   534,   534,
     534,   535,   535,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   536,   536,   536,   536,   536,   536,   536,
     536,   536,   537,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   541,   541,   541,   541,   541,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   549,   549,   549,
     549,   549,   549,   550,   551,   551,   552,   552,   552,   553,
     554,   554,   554,   554,   554,   554,   554,   555,   556,   556,
     556,   556,   556,   556,   557,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   558,   558,   558,   559,   559,   559,   559,   559,   559,
     560,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     561,   561,   562,   562,   562,   562,   563,   563,   563,   564,
     564,   564,   565,   565,   565,   565,   565,   565,   565,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   566,   567,   567,
     567,   567,   568,   568,   569,   569,   570,   570,   571,   572,
     572,   572,   572,   572,   572,   573,   573,   574,   574,   574,
     574,   574,   574,   575,   575,   575,   575,   575,   575,   575,
     576,   576,   577,   577,   577,   577,   577,   577,   577,   577,
     578,   578,   578,   578,   578,   578,   578,   578,   578,   578,
     578,   578,   579,   579,   580,   581,   580,   582,   582,   582,
     583,   583,   583,   583,   583,   583,   584,   584,   585,   585,
     586,   587,   588,   587,   589,   589,   590,   591,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   593,   593,   593,   593,   593,   593,
     593,   593,   594,   594,   594,   594,   595,   595,   595,   595,
     595,   595,   595,   595,   596,   596,   596,   597,   597,   597,
     598,   598,   598,   598,   599,   599,   599,   599,   600,   600,
     601,   601,   601,   601,   602,   602,   603,   603,   603,   603,
     604,   604,   604,   604,   605,   605,   605,   606,   606,   606,
     607,   607,   608,   608,   608,   609,   610,   610,   610,   610,
     610,   611,   611,   611,   611,   611,   611,   612,   612,   612,
     612,   612,   613,   613,   613,   614,   614,   614,   614,   614,
     614,   615,   615,   615,   616,   616,   616,   616,   616,   616,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   617,   617,   618,   618,   618,   619,   619,   619,   620,
     620,   620,   621,   621,   621,   622,   622,   622,   622,   623,
     623,   623,   624,   624,   624,   625,   625,   625,   626,   626,
     626,   627,   627,   627,   628,   628,   628,   629,   629,   629,
     630,   630,   630,   631,   631,   631,   632,   632,   632,   633,
     633,   633,   634,   634,   634,   635,   636,   636,   636,   637,
     637,   637,   637,   638,   638,   638,   638,   638,   638,   638,
     639,   639,   639,   640,   640,   641,   641,   641,   641,   641,
     642,   642,   642,   643,   643,   643,   644,   644,   644,   644,
     645,   646,   646,   646,   646,   646,   647,   647,   647,   647,
     647,   647
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
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     6,     2,
       4,     2,     2,     2,     3,     2,     2,     1,     2,     1,
       2,     4,     5,     2,     3,     5,     6,     1,     1,     1,
       7,    11,     8,    12,     1,     2,     2,     3,     1,     1,
       2,     2,     2,     2,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     3,
       2,     2,     2,     5,     9,     9,     9,     7,     1,     2,
       1,     5,     9,     9,     9,     7,     1,     2,     2,     3,
       2,     2,     2,     2,     2,    13,    13,    12,    12,     1,
       0,     1,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     3,     4,     1,     2,
       4,     6,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     3,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     3,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     3,     2,     1,     7,     8,     7,     8,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     2,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     4,     5,     0,     2,     1,     5,     2,     2,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     2,     1,
       0,     1,     1,     0,     1,     5,     6,     3,     6,     3,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     2,
       1,     5,     4,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     3,     4,     4,     0,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     2,
       1,     0,     1,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     6,     5,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     2,     2,     2,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     3,     1,     2,     2,     4,     5,     1,    10,     1,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     3,     3,     5,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     2,     2,     4,     3,
       3,     3,     3,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     3,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     4,     4,     4,
       4,     5,     4,     6,     7,     4,     4,     5,     5,     5,
       5,     5,     5,     7,     5,     5,     6,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     5,     5,     5,     5,
       6,     5,     7,     8,     5,     5,     6,     3,     3,     3,
       3,     4,     3,     5,     6,     3,     3,     4,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     4,     4,     3,
       5,     4,     4,     4,     2,     3,     6,     6,     1,     1,
       1,     2,     2,     2,     3,     3,     2,    12,     2,     2,
       1,     3,     4,     2,     0,     3,     1,     2,     2,     2,
       2,     2,     4,     4,     4,     4,     3,     3,     4,     5,
       8,     6,     9,     6,     7,    10,    11,    12,     9,     5,
       6,     3,     5,     5,     5,     6,     5,     4,     4,     4,
       9,    10,    11,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     7,     2,     4,     4,     4,     4,
       5,     4,     4,     5,     5,     3,     4,     4,     4,     7,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       5,     7,     4,     3,     3,     6,     7,     8,     7,     7,
       4,     4,     4,     9,     4,     3,     4,     7,     7,     2,
       3,     3,     3,     4,     2,     2,     4,     4,    10,     3,
       4,     1,     3,     2,     2,     2,     2,     3,     5,     4,
       5,     2,     2,     2,     2,     3,     2,     2,     2,     3,
       2,     3,     4,     3,     3,     6,     4,     2,     3,     2,
       2,     4,     3,     3,     2,     3,     1,     2,     1,     2,
       2,     2,     3,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     3,
       5,     7,     7,     6,     5,     5,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,     6,     7,    11,
       7,     7,     7,     9,     9,    10,    12,    12,     3,     2,
       0,     1,     3,     4,     4,     4,     0,     1,     1,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     3,     8,     6,    10,     7,     7,
       5,     6,     6,     3,     2,     2,     3,     4,     5,     5,
       5,     3,     4,     5,     5,     5,     5,     2,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     4,     5,     5,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     3,
       5,     6,     6,     3,     3,     3,     6,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     3,     5,     6,     2,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     1,     0,     0,
       1,     1,     1,     1,     1,     7,     8,     2,     6,     2,
       6,     2,     3,     2,     1,     1,     3,     3,     1,     4,
       2,     1,     3,     3,     4,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     0,     2,     6,     7,     2,
       1,     3,     1,     3,     1,     1,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     0,     1,
       1,     2,     2,     3,     2,     3,     2,     3,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     2,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     2,     3,     3,
       2,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     9,     6,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     2,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     4,     2,     2,     2,     2,     2,
       4,     2,     2,     2,     2,     2,     4,     1,     2,     2,
       2,     3,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     2,     4,
       1,     2,     2,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     1,     3,     4,     2,
       1,     2,     5,     6,     6,     2,     1,     2,     2,     5,
       6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   362,     0,     0,     0,     0,     0,     0,   391,     0,
       0,    23,     0,     0,     0,     0,     0,  1238,     0,     0,
       0,     0,  1169,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1169,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1433,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   284,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   318,   320,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   326,    12,     0,     0,   340,     0,     0,     0,     0,
      13,     0,     0,     0,     0,   369,     0,    14,    75,   104,
       0,   134,   103,    83,   101,     0,    80,    82,    78,   135,
     102,    79,     0,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    76,    77,    81,   376,   172,   105,     0,    15,     0,
      16,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    64,   388,   387,    18,     0,     0,    19,
       0,     0,     0,   453,   467,     0,   473,     0,     0,     0,
       0,     0,     0,     0,   406,     0,   548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1169,     0,   417,     0,
       0,   423,     0,     0,     0,   427,     0,   429,     0,   431,
       0,     0,   605,   435,    20,     0,   611,    21,   616,     0,
       0,   635,   620,   621,   622,   623,   637,   625,   626,   630,
     627,     0,   629,   631,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   652,     0,
       0,     0,   657,     0,    28,     0,  1240,   142,  1262,     0,
    1239,  1254,  1258,  1252,     0,  1250,  1260,     0,  1256,     0,
      36,     0,     0,     0,     0,     0,     0,     0,    30,   819,
      31,     0,     0,     0,     0,     0,     0,   820,    32,     0,
      33,  1173,  1174,  1170,  1171,  1172,     0,   142,  1264,     0,
     136,     0,     0,     0,    35,     0,    37,     0,  1275,  1274,
    1273,  1272,    39,     0,     0,     0,     0,     0,   172,     0,
      40,     0,  1293,     0,  1290,    41,     0,     0,     0,     0,
      44,     0,    43,    42,     0,  1320,  1321,    47,     0,     0,
       0,    48,     0,     0,  1337,    49,     0,     0,     0,     0,
       0,     0,    50,  1429,  1428,  1432,  1431,  1430,    52,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     0,  1435,    56,     0,     0,    58,     0,
       0,     0,     0,   172,    59,  1460,    60,     0,     0,    61,
       1,     4,     5,   267,     0,   259,     0,     0,   261,     0,
     269,   262,   266,   277,   278,   263,   279,     0,   265,     0,
     288,   289,   286,   285,     0,     0,   308,     0,   293,   301,
     304,   303,   302,   300,   292,   297,   298,   299,   291,     0,
       0,     0,     0,     0,     0,   296,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,   327,     0,
     339,   328,     0,   341,   330,   342,   331,   353,   332,     0,
       0,   333,     0,   358,   334,     0,    94,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     365,     0,     0,     0,     0,     0,   174,   179,   173,   175,
     178,   177,   176,     0,     0,   382,    69,    70,    71,    72,
      73,    65,    66,    67,    74,    68,     0,   390,   392,     0,
     448,   444,   440,   441,   445,   442,   447,   393,   451,     0,
     394,   345,   457,   461,   456,   348,   347,   346,     0,     0,
     395,   468,   397,     0,   396,     0,   475,   398,   490,   479,
     493,   480,   481,   482,   484,     0,   486,   487,   489,   172,
     399,     0,     0,   400,     0,     0,   172,   401,   502,   172,
     500,   402,   503,   404,   172,   504,   403,     0,   172,     0,
     405,   522,     0,   520,   538,     0,     0,     0,   526,   518,
       0,   528,   543,   531,   407,   549,   550,   408,   409,     0,
       0,   574,   575,   576,   412,   571,   572,   573,   413,     0,
     513,     0,   414,    84,   510,     0,   415,   416,   564,   564,
     551,   552,   564,   564,   420,     0,   563,   557,   562,   558,
     559,   560,   561,   419,   570,   421,   422,   566,   424,     0,
     567,   568,   569,   426,   582,   577,   578,   580,   428,   588,
     597,   599,   601,   587,   590,   591,   603,   430,     0,     0,
     608,     0,   434,   172,   610,   617,     0,   618,   636,   619,
     638,   639,   640,   624,   641,   643,   642,   644,   628,   632,
     649,     0,     0,     0,     0,   645,   633,    25,  1331,  1332,
    1333,  1334,  1335,     0,  1326,  1327,  1328,  1329,     0,     0,
       0,   654,   653,     0,     0,     0,     0,    29,   142,  1263,
       0,  1255,  1259,  1253,  1251,  1261,     0,  1257,     0,   157,
     150,   149,   147,   153,   154,   151,   155,   148,   158,   144,
     146,   156,   145,   152,   143,  1244,  1242,  1241,  1246,  1248,
       0,     0,     0,     0,   664,     0,   665,     0,   666,     0,
       0,     0,     0,     0,     0,     0,   667,     0,   818,     0,
     668,     0,   669,     0,     0,   670,     0,   823,   822,   821,
       0,   826,     0,     0,     0,     0,  1004,     0,     0,     0,
     830,   834,   836,     0,  1046,     0,     0,     0,     0,   941,
       0,     0,     0,   976,     0,     0,     0,     0,     0,     0,
       0,   978,     0,     0,     0,    34,  1270,  1265,  1271,   139,
     140,   138,   141,   137,  1266,     0,  1268,  1269,  1325,    38,
       0,     0,     0,     0,  1282,  1283,     0,   172,     0,  1280,
    1277,     0,     0,     0,   172,  1300,  1303,  1301,  1302,  1294,
    1295,  1296,  1297,     0,     0,     0,    46,  1322,  1323,     0,
    1342,  1344,  1343,  1339,  1340,  1338,     0,     0,     0,     0,
       0,     0,  1345,     0,  1349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1346,  1360,     0,
       0,     0,  1348,  1350,     0,     0,     0,  1347,  1427,  1318,
    1319,  1317,   240,     0,   251,   236,     0,   253,   237,     0,
     255,   238,  1315,  1316,  1314,   239,   242,     0,     0,     0,
     245,   241,   243,   244,     0,     0,   235,     0,  1438,     0,
       0,     0,  1443,  1456,     0,     0,  1446,     0,     0,  1449,
       0,     0,  1448,  1447,   180,  1466,     0,  1465,  1461,   268,
     264,     0,   273,     0,   270,     0,   287,   290,   167,   170,
     171,   169,   168,   305,   306,   307,   295,   294,   310,   312,
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   329,     0,     0,     0,   172,     0,     0,
     359,   366,   100,    97,    98,    99,   172,   368,   367,     0,
       0,     0,     0,     0,     0,     0,   381,     0,   377,   375,
     374,   389,   443,     0,     0,   446,   452,   462,   463,   458,
     459,   464,   466,   465,   460,   349,   350,   455,   454,   470,
     469,     0,   474,   491,   492,   478,   494,   485,   483,   488,
     477,     0,     0,   172,   172,   180,   180,   180,   172,     0,
       0,   172,   539,   521,   532,     0,   523,    84,   534,     0,
       0,   525,   527,   172,   544,     0,     0,   530,     0,     0,
     411,     0,   515,    88,    87,   509,     0,   565,   554,   553,
     555,   556,     0,     0,     0,     0,  1060,  1157,  1062,  1061,
       0,  1162,     0,  1140,     0,  1143,     0,     0,  1164,  1166,
       0,  1156,   418,     0,   579,   581,   598,   584,   600,   585,
     602,   586,   592,   595,   593,   589,   604,   583,     0,     0,
     433,   609,   606,   607,   180,   634,   646,   647,   648,   650,
       0,     0,     0,   663,   651,     0,     0,     0,  1245,  1243,
    1247,  1249,     0,     0,     0,   193,   193,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   712,   736,     0,     0,     0,
     704,     0,     0,     0,     0,   193,   187,     0,     0,   814,
       0,   824,   825,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   885,     0,
       0,     0,     0,     0,   907,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   929,     0,     0,   934,   935,     0,
       0,     0,   956,   958,   957,     0,   960,     0,     0,   967,
     969,   970,     0,  1005,     0,     0,     0,     0,   828,   829,
    1054,  1052,  1057,  1056,  1055,  1053,  1058,     0,   833,     0,
       0,  1048,  1047,   837,     0,  1051,     0,   838,   839,   840,
     841,     0,     0,     0,     0,     0,   943,     0,     0,   944,
    1185,     0,  1188,  1184,     0,     0,     0,   945,   977,   946,
    1203,  1208,  1205,  1211,  1204,  1202,  1209,  1206,  1200,  1207,
    1201,  1210,     0,     0,   951,     0,     0,     0,     0,   952,
    1220,  1224,  1225,     0,  1222,   953,     0,  1226,   954,   974,
       0,     0,     0,   979,   980,   981,  1267,  1281,     0,     0,
    1288,  1284,     0,     0,     0,  1279,  1278,  1292,  1291,     0,
       0,  1308,     0,     0,  1304,     0,  1312,     0,     0,  1305,
       0,  1341,   229,   229,     0,     0,     0,   229,     0,  1374,
       0,  1373,     0,     0,     0,     0,  1361,     0,     0,     0,
       0,  1365,     0,     0,     0,  1372,     0,     0,     0,     0,
       0,  1363,  1375,     0,     0,     0,  1362,   229,   229,   229,
    1352,  1351,  1353,     0,   252,   254,   256,   246,     0,   249,
     248,   247,     0,   257,     0,     0,    63,     0,  1437,     0,
    1444,   172,  1459,     0,  1450,  1451,     0,  1453,  1454,     0,
     181,   182,  1445,  1467,  1468,     0,   260,     0,   274,     0,
       0,     0,     0,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   356,   172,
       0,     0,     0,     0,     0,   172,     0,   380,     0,   379,
     450,   449,     0,     0,     0,   172,     0,   180,   499,   497,
     501,   505,     0,     0,     0,   180,     0,   540,   524,     0,
     535,   537,   183,     0,     0,   410,     0,     0,    63,     0,
     514,    86,    85,     0,     0,  1075,     0,     0,     0,     0,
       0,     0,  1087,     0,     0,     0,  1137,     0,     0,     0,
    1106,  1107,     0,     0,     0,     0,     0,  1120,     0,  1126,
    1127,  1129,  1131,     0,  1136,  1148,  1149,  1150,     0,  1152,
       0,  1158,  1160,  1161,  1159,  1059,     0,  1139,     0,  1138,
    1074,     0,     0,  1144,     0,  1146,     0,  1145,  1167,  1147,
    1154,     0,     0,   596,   594,   432,     0,     0,  1336,  1330,
     661,   662,     0,   659,   655,     0,   193,   193,   193,   194,
     195,   674,   675,   189,   188,     0,   193,   193,   193,     0,
     682,   681,   680,   193,   692,   190,   193,   193,   193,   191,
     192,   193,   193,     0,   193,   193,     0,   190,     0,   705,
       0,   711,     0,   710,   709,   708,     0,     0,     0,   735,
       0,   734,     0,   707,   706,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,     0,     0,   193,   193,
     809,     0,   193,   193,   815,     0,   219,   220,   221,   222,
     223,   224,     0,    92,    93,    91,   847,     0,     0,     0,
       0,     0,   998,   996,   991,     0,  1001,   985,  1002,   988,
    1000,   994,   983,   997,   986,   984,  1003,   999,     0,     0,
     861,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   895,     0,
       0,     0,     0,   906,   908,     0,     0,     0,   914,   913,
       0,     0,     0,   208,     0,     0,     0,   172,     0,   925,
       0,     0,     0,     0,   930,   931,   932,     0,     0,     0,
       0,   939,   955,   959,   961,   964,   963,     0,     0,     0,
     968,   846,  1006,  1008,     0,  1007,   831,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1040,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   835,   982,     0,     0,     0,     0,   942,
       0,   172,  1181,  1179,  1177,     0,     0,   172,  1183,   947,
       0,     0,     0,     0,  1219,     0,     0,  1227,   972,   973,
       0,   975,  1287,  1289,  1286,  1285,  1276,     0,     0,     0,
    1309,     0,     0,  1313,  1324,   231,   232,   233,   234,   230,
    1355,  1354,     0,     0,     0,  1359,     0,     0,     0,  1358,
       0,     0,     0,  1357,  1356,   229,     0,     0,     0,  1364,
       0,     0,     0,  1371,     0,     0,     0,  1370,     0,     0,
       0,  1369,     0,     0,     0,  1368,     0,     0,     0,     0,
       0,  1385,     0,  1420,  1419,  1421,     0,     0,     0,  1367,
       0,     0,     0,  1366,  1380,  1379,  1381,  1377,  1376,  1378,
    1423,  1422,  1424,     0,   250,     0,     0,  1439,  1441,  1442,
       0,  1457,   172,  1452,  1455,     0,     0,   172,     0,     0,
       0,   271,     0,     0,     0,     0,   313,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   352,   351,     0,     0,
     343,   354,   357,   360,     0,   371,   373,   372,   370,   172,
     378,     0,     0,     0,   180,   172,     0,     0,     0,     0,
     519,   533,   542,     0,   536,   185,   186,   184,   529,     0,
     545,     0,     0,   512,   517,    84,     0,     0,     0,     0,
       0,     0,   172,  1076,     0,     0,     0,  1081,     0,   172,
       0,  1088,  1089,  1090,     0,  1092,  1094,  1093,  1095,  1096,
       0,     0,     0,  1102,     0,  1108,  1109,     0,     0,     0,
    1115,  1113,  1114,     0,     0,     0,     0,  1121,  1122,     0,
       0,  1125,  1128,  1130,  1132,  1133,     0,     0,  1151,  1153,
       0,  1073,  1063,  1163,  1064,     0,     0,  1165,  1155,     0,
       0,   614,   615,     0,   656,   660,     0,   671,   672,   673,
     193,   677,   678,   679,     0,     0,     0,   686,   687,   187,
       0,     0,     0,   813,   193,   693,   694,   695,   696,   698,
     190,   701,   702,     0,   193,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,     0,     0,     0,   190,   190,
     187,     0,     0,   187,     0,     0,     0,     0,   190,   190,
     187,     0,     0,     0,     0,   733,     0,   737,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,   190,   713,   714,   715,   716,   718,     0,   721,   722,
       0,   190,     0,     0,   807,   808,   193,   811,   812,     0,
     844,   172,   848,     0,     0,     0,     0,     0,     0,     0,
     990,   987,   993,   992,   989,   995,     0,     0,     0,   196,
     198,   207,   203,   200,   201,   197,   199,   204,   202,   206,
     205,     0,     0,     0,   172,   868,   867,   869,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   940,   886,   887,   888,     0,   892,   889,   891,     0,
       0,   897,   896,   898,     0,     0,     0,     0,     0,     0,
       0,   172,   172,   912,   922,   214,   210,   215,   209,   212,
     211,   216,   213,   920,   921,   172,     0,     0,   924,   926,
     172,   172,     0,   933,   936,   937,   172,   172,   962,   966,
     845,  1009,   832,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1041,  1168,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1039,     0,     0,     0,     0,     0,   842,   843,
     172,   180,  1182,     0,     0,  1186,  1187,     0,     0,   949,
       0,   172,     0,  1221,  1223,   971,     0,  1306,  1307,  1310,
    1311,   229,   229,   229,   229,   229,   229,   229,   229,   229,
    1425,  1383,  1382,  1384,  1417,  1416,  1418,  1414,  1413,  1415,
    1408,  1407,  1409,  1405,  1404,  1406,  1387,  1386,  1390,  1389,
    1391,  1388,  1399,  1398,  1400,  1396,  1395,  1397,     0,     0,
    1434,     0,  1458,     0,   172,     0,  1462,     0,     0,   275,
       0,   272,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,   172,     0,     0,     0,   363,
     160,     0,   471,     0,   495,   180,   183,     0,     0,   508,
       0,   546,   547,     0,   511,     0,     0,     0,     0,     0,
       0,   172,  1077,   183,   183,   183,   172,  1082,   183,   180,
     183,   183,   172,  1097,   183,   183,   183,   172,  1103,   183,
     183,   172,     0,   172,   183,   172,   183,   183,   172,   183,
     172,     0,  1141,  1142,     0,     0,   613,     0,   676,   683,
     684,   685,     0,   689,   690,   691,   697,   193,   190,   703,
     724,   725,   726,   727,   728,     0,   730,   731,   190,   190,
     787,   788,   789,   790,   792,     0,   795,   796,     0,   190,
     798,   799,   800,   801,   802,     0,   804,   805,   190,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,     0,   190,   193,   193,   193,
     193,   193,     0,   193,   193,     0,   190,   190,   193,   193,
     193,   193,   193,     0,   193,   193,     0,   190,   717,   190,
       0,   723,     0,     0,   810,     0,   849,   183,     0,     0,
     183,     0,     0,     0,   859,   183,   862,   863,   864,   183,
     866,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   890,   893,   894,     0,   183,     0,
       0,     0,   909,   910,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1212,  1038,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,     0,     0,    89,     0,     0,  1049,  1050,   180,
       0,     0,     0,  1189,   948,   950,   180,   172,  1299,  1411,
    1410,  1412,  1402,  1401,  1403,  1393,  1392,  1394,  1426,     0,
    1436,  1469,     0,     0,  1464,  1463,   276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,     0,     0,   344,
     355,   361,   183,   472,   476,   496,   498,     0,   506,   541,
     172,     0,     0,     0,     0,     0,     0,   172,  1070,  1078,
    1080,  1079,  1083,  1084,  1085,  1086,  1091,  1098,  1099,  1100,
    1101,  1104,  1105,  1110,   180,   183,   180,  1118,   180,  1119,
    1123,   180,  1134,   180,   172,     0,   172,     0,   612,     0,
     688,   699,   193,   190,   732,   791,   190,     0,   797,   190,
     806,   193,   193,   193,   193,   193,     0,   193,   193,   190,
     193,   193,   193,   193,   193,     0,   193,   193,   190,   193,
     193,   193,   193,   193,     0,   193,   193,   190,   193,   747,
     748,   749,   750,   752,   190,   755,   756,     0,   193,   193,
     776,   777,   778,   779,   781,   190,   784,   785,     0,   193,
     719,   190,   816,   817,   172,   851,     0,   183,   853,     0,
     172,     0,   860,   865,   172,     0,   874,   875,   876,   877,
     881,   882,   878,   879,   880,     0,     0,   183,   901,     0,
     172,     0,     0,   915,     0,   183,     0,     0,   183,   183,
       0,   965,     0,   217,   217,     0,     0,   217,     0,   217,
    1168,     0,     0,     0,     0,     0,     0,     0,     0,  1213,
    1191,     0,  1198,  1199,     0,   217,   217,     0,     0,     0,
       0,     0,  1168,     0,     0,     0,  1168,     0,  1042,     0,
       0,     0,  1168,    90,     0,   217,     0,  1215,   172,   172,
       0,   180,     0,   258,  1471,  1470,     0,     0,   280,     0,
       0,     0,     0,     0,   325,     0,     0,     0,   364,   507,
       0,   383,     0,  1066,     0,   225,     0,  1071,  1111,  1112,
    1116,  1117,  1124,  1135,  1072,   425,     0,   383,     0,   700,
     729,   793,   190,   803,   738,   739,   740,   741,   742,   190,
     744,   745,   193,   767,   768,   769,   770,   771,   190,   773,
     774,   193,   758,   759,   760,   761,   762,   190,   764,   765,
     193,   751,   193,   190,   757,   780,   193,   190,   786,   720,
       0,   183,   854,     0,     0,     0,     0,     0,   883,   884,
     899,     0,     0,     0,   911,   916,     0,   918,     0,   927,
     928,   919,   183,     0,   218,  1168,  1168,    89,     0,  1168,
       0,  1168,  1010,   172,     0,     0,     0,     0,     0,     0,
       0,  1190,     0,     0,  1168,  1168,    89,     0,     0,     0,
    1168,  1168,  1014,  1168,     0,     0,  1015,  1168,  1045,  1043,
    1044,  1019,  1168,  1168,  1215,  1231,     0,  1180,  1178,  1217,
       0,     0,     0,     0,   282,   315,   316,     0,     0,     0,
     314,     0,   383,   384,   386,   385,   436,     0,     0,   226,
     228,   227,  1068,  1069,   383,   438,     0,   794,   193,   746,
     193,   775,   193,   766,   753,   193,   782,   193,     0,   850,
     183,   183,     0,   183,     0,   183,   183,     0,   917,   183,
       0,  1168,  1025,  1021,  1168,     0,  1026,     0,  1020,  1168,
       0,  1193,     0,  1196,  1236,  1197,  1195,  1192,     0,  1023,
    1022,  1168,     0,     0,  1168,  1027,  1017,  1013,  1168,   172,
    1016,  1018,  1024,  1231,  1175,     0,     0,  1216,  1229,  1218,
    1298,     0,     0,   323,   324,   322,   345,   348,   346,     0,
       0,   437,  1065,   172,   439,   658,   743,   772,   763,   754,
     783,   183,   852,   858,     0,   873,   870,   900,   905,     0,
     923,     0,  1032,  1012,    89,     0,  1030,     0,  1194,     0,
    1011,    89,     0,  1028,  1031,     0,  1176,  1233,  1235,     0,
    1228,     0,     0,     0,     0,     0,     0,   225,     0,   855,
     172,   871,   902,   938,  1168,     0,  1237,     0,  1168,     0,
     183,  1234,  1230,   281,     0,     0,     0,     0,     0,  1067,
     827,   172,   856,   872,   172,   903,  1034,     0,  1168,  1033,
       0,     0,   283,   338,     0,   337,     0,   857,   904,    89,
    1035,    89,  1168,   336,   335,  1168,  1168,  1029,  1037,  1036
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1645,   182,   164,  1075,  2832,  2833,   490,   491,
     492,   493,   165,   166,   167,   824,   745,   101,   963,   513,
    1422,  1948,  1575,  1591,  1571,  2161,  2213,  2945,  1642,  3012,
    1820,   391,   921,  1400,   905,   908,   911,   926,    69,   415,
     421,   425,   428,    75,   432,    82,   448,   444,   438,   455,
      92,   465,   102,   110,   471,   474,   476,   549,  1027,  1918,
     478,   481,   484,   117,   500,   168,   170,  3006,   186,   189,
     234,  1070,  1120,   537,  1015,   540,   550,  1019,  1024,   552,
     554,  1030,   557,  1032,   570,  1035,  1037,   573,   577,   581,
     583,   586,   590,   626,   622,  1490,   604,  1056,  1061,  1053,
    1478,  1067,   607,   634,   643,  1078,   648,   653,   645,   618,
     614,   658,   667,  1115,  1554,  1107,  1109,  1111,  1117,   672,
    1122,   237,   674,  2023,   256,   677,   679,   683,   688,   696,
     274,  1564,   711,   298,   754,  1580,   758,   766,  1180,  1599,
    1175,  2085,  1611,  1609,  2087,  1176,  1601,  1603,   772,   756,
     775,   770,   300,   308,   310,   815,  1259,  1668,  1248,  1773,
    2244,  2262,  1263,  1267,  1257,  1102,  1535,  1539,  1547,  1549,
    2574,   316,  1276,  1279,  1287,  2809,  2810,  2811,  2575,  2985,
    2986,  1309,  1315,  1318,  3077,  3078,  3074,  3075,  3127,  2812,
    2813,   290,   324,   332,   340,   839,   834,   345,   350,   352,
     849,   856,  1344,  1349,   915,   902,   357,   361,   326,   266,
     262,   365,   863,   372,   897,   872,   887,   888,  1386,  1381,
    1839,  1371,  1861,  1833,  1873,  1869,  1829,  1855,  1851,  1825,
    1847,  1843,  1375,   892,   874,   378,   379,   395,  1408,   398,
     404,   939,   942,   936,   406,   409,   947
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2918
static const yytype_int16 yypact[] =
{
    5629,    35,    43,    24, -2918, -2918,  1018,  -254,  1439,   922,
    1063,   578,  3158,   192,   464,    55,  1219,   494,  5862,   130,
    2706, -2918,   169,   248,   263,   663,   134,   745,  1577,  -114,
     167,   220,   374,   538,   -12,   189,  1143,  1142,   126,   861,
     445,   425,   374, -2918,   535,   279,   133,    -6, -2918,   128,
     541,   293, -2918,    92, -2918,   141,  2075,   305,   153,   558,
     203,  1169,   370,   676,   680,   182,   713,    56,   124, -2918,
   -2918, -2918,   357,   576,  1247, -2918,    33,    37,   464,   496,
     166,   669, -2918,   771,  1247, -2918, -2918,  1247,  1247,   419,
     789,  1247, -2918, -2918, -2918, -2918,  1247, -2918, -2918, -2918,
   -2918, -2918, -2918,    61,   812,   822,   859,   862,   171,   721,
   -2918,  1247,  1659,  1247,  1247,  1232,  1247, -2918, -2918, -2918,
     659, -2918, -2918, -2918, -2918,  4916, -2918, -2918, -2918, -2918,
   -2918, -2918,  1247, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,  1586, -2918,  1247, -2918,   880,
   -2918, -2918,   464,   464,   464,   464,   464,   464,   464,   464,
     464,   464, -2918, -2918, -2918, -2918, -2918,   802,   912, -2918,
     872,  1920,    34,   337,   620,   759,   -17,  4183,   616,  4970,
    4882,   925,  4916,  3800, -2918,  1325,  -104,   895,   985,   906,
     396,   431,   146,   621,   996,   506,   374,  1025, -2918,   734,
    1004, -2918,   800,   742,   475, -2918,   271, -2918,  1086, -2918,
      59,  1015,   213, -2918, -2918,  5288, -2918, -2918, -2918,  1009,
    1011,  1087, -2918, -2918, -2918, -2918,    51, -2918, -2918, -2918,
   -2918,   -91, -2918, -2918,  5288,  4508, -2918,  1123, -2918,    64,
    5288,  1144, -2918,   136,  5288,  1149, -2918,    38, -2918,  1145,
    1152,   110, -2918,  1247, -2918,  1158,  1745,  2675, -2918,  1154,
   -2918, -2918, -2918, -2918,  1166, -2918, -2918,  1247, -2918,   464,
   -2918,   114,  1171,  1177,   606,   111,  1188,    48, -2918, -2918,
   -2918,  1193,  1195,   464,   464,  1247,  1247, -2918, -2918,  1200,
   -2918, -2918, -2918, -2918, -2918, -2918,  3087,  2675, -2918,  1204,
      31,  1247,  5288,  1247, -2918,  5288, -2918,  1210, -2918, -2918,
   -2918, -2918, -2918,  1247,  1198,   464,  3390,  1247,  1586,  1247,
   -2918,  1215, -2918,  4082, -2918, -2918,  1098,  1217,  1222,  1247,
   -2918,  1238, -2918, -2918,   -19, -2918, -2918, -2918,  1240,  5288,
    1252, -2918,  1566,  1247,  1173, -2918,   842,  1168,  1651,   536,
    1316,   600, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1323,
   -2918,    44,   249,   278,   367,    75,  1247,   308,  1331,  1247,
      79, -2918,  1247,   -26,  1337, -2918,  1247,  1247, -2918,    40,
      22,    26,  1343,  1586, -2918, -2918, -2918,   634,  1247, -2918,
   -2918, -2918, -2918, -2918,  1247, -2918,  1349,  1356, -2918,  1247,
    1412, -2918, -2918, -2918, -2918, -2918, -2918,  1247, -2918,   464,
   -2918,  1247, -2918, -2918,   583,   583, -2918,  1361, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1161,
    1247,  1247,  1384,  1392,  1396, -2918, -2918,  1247,  1247,  1247,
    1247,  1247,  1247,  1401,  1247, -2918,  1405,  1247, -2918,  1413,
   -2918, -2918,  1421, -2918, -2918,  1301, -2918,  1434, -2918,  5288,
    1442, -2918,   211, -2918, -2918,  1247, -2918, -2918, -2918,  1247,
    1460,  1461,  1461,  5288,  1247,  1247,  1247,  1247,  1247,  1247,
   -2918,  1247,  4916,  1659,  1247,  1247, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918,  1659,  1247, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918,  1471, -2918, -2918,  1170,
      11, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1089,
   -2918,   -81, -2918, -2918, -2918,  1295, -2918,   607,   660,   660,
   -2918, -2918, -2918,  1494, -2918,  1526, -2918, -2918,   -23, -2918,
    1326, -2918, -2918, -2918, -2918,  1342, -2918,  1540, -2918,  1586,
   -2918,  1247,  1247, -2918,  5288,  5288,  1586, -2918, -2918,  1586,
   -2918, -2918, -2918, -2918,  1586, -2918, -2918,  5288,  1586,  1247,
   -2918, -2918,  5288, -2918,  1544,   679,  1330,    15, -2918, -2918,
    1344,  5288,    82, -2918, -2918, -2918, -2918, -2918, -2918,  1568,
    1569, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1567,
   -2918,  1363, -2918,   414, -2918,  1247, -2918, -2918,  1584,  1584,
   -2918, -2918,  1584,  1584, -2918,   881, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,    59,
   -2918, -2918, -2918, -2918, -2918, -2918,  1378,  1381, -2918, -2918,
    1525,  1527,  1530, -2918, -2918,    57,  1345, -2918,  1247,  1591,
    1350,  4082, -2918,  1586, -2918, -2918,  1609, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918,  5288,  5288,  5288,  5288, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918,  1611, -2918, -2918, -2918, -2918,  1612,  1620,
     464, -2918, -2918,  1622,  1624,  1418,  1247, -2918,  2675, -2918,
    1638, -2918, -2918, -2918, -2918, -2918,  1247, -2918,   464, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
      50,  1534,  1559,  1560, -2918,  1660, -2918,  1668, -2918,   471,
    1579,    45,   490,  3419,   569,  1670, -2918,  1673, -2918,  1675,
   -2918,   259, -2918,  1676,  1677, -2918,  1687, -2918, -2918, -2918,
    1247, -2918,  4082,  4636,  1724,  1374,   788,  1690,   960,  1556,
   -2918, -2918, -2918,  1692,    52,   589,  1695,  1697,    63,  1247,
     456,   823,   511,  5288,   464,  1822,  1155,    46,   386,   312,
      27, -2918,  1689,  1691,  1705, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,  1247, -2918, -2918, -2918, -2918,
    1247,  1247,  1247,  1247, -2918, -2918,  1247,  1586,  1247, -2918,
    1247,  1659,  1247,  1708,  1586, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918,  1710,   540,   593, -2918, -2918, -2918,  1714,
   -2918, -2918, -2918, -2918,  1613, -2918,  1719,  1720,  1631,  1635,
    1636,  1723, -2918,  1727, -2918,  1729,  1641,  1733,   657,   673,
     692,   557,   709,   710,   714,  1739,   744, -2918, -2918,  1741,
    1744,  1740, -2918, -2918,  1750,  1764,  1767, -2918,  1772, -2918,
   -2918, -2918, -2918,  1773, -2918, -2918,  1774, -2918, -2918,  1776,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1247,   421,  1247,
   -2918, -2918, -2918, -2918,  1247,  1247, -2918,  1247,  1247,  1390,
    1247,  1247, -2918,  4082,  1707,  1785, -2918,  1416,  1786, -2918,
    1480,  1787, -2918, -2918,   -39,  1247,  1247, -2918,  1784, -2918,
   -2918,  1794,  1438,  1247,  1791,   763, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918,  1803,  1806,  1247,  1247,  1247,  1247,  1247,  1807,  1247,
    1810,  1247,  1812, -2918,   464,  1814,  1815,  1586,  5288,  1816,
   -2918, -2918, -2918, -2918, -2918, -2918,  1586, -2918, -2918,  1247,
    1247,  1247,  5288,  1247,  1659,  1247, -2918,  1247, -2918, -2918,
   -2918, -2918, -2918,  1821,  1824, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,   616,
   -2918,  1247, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918,  5288,  1247,  1586,  1586,   -39,   -39,   -39,  1586,  1659,
    1247,  1586, -2918, -2918, -2918,  1247, -2918,   414,  1644,  1833,
    1823, -2918, -2918,  1586, -2918,  1662,  1663, -2918,  1838,  1844,
   -2918,  1847,  1447,  1811,  1813, -2918,  1247, -2918, -2918, -2918,
   -2918, -2918,  4885,   627,  1536,  1090, -2918, -2918, -2918, -2918,
    1247,   902,  1353, -2918,  1561, -2918,  1822,  1564,   991,  1532,
     116, -2918, -2918,  1247, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918,  1535, -2918, -2918, -2918, -2918,  1247,  1857,
   -2918, -2918, -2918, -2918,   -39, -2918, -2918, -2918, -2918, -2918,
    1863,  1866,  5013, -2918, -2918,  1867,  1870,  1247, -2918, -2918,
   -2918, -2918,  1871,  1872,  1873,    -9,    -9,   -64,  1868,  1875,
    1876,  1879,  1879,  1879,  1880,  1578,  1580,  1889,  1893,  1896,
     118,   118,   -64,  1899,  1902,   -64,  1909,  1912,  1919,  1921,
    1919,  1921,  3642,  1932,  1934, -2918, -2918,  1919,  1921,   666,
   -2918,  1937,  1938,  1939,  1940,    -9,   -64,  1944,  1945, -2918,
    1947, -2918, -2918,  1586,  1288,  1683,  1652,  1680,  1681,  1827,
    1742,  1682,  1952,   533,     1,  1843,  1192,  1957,  1286,  1923,
    1694,  1696,  1856,  1968,  1734,   754,   150,   -32,   573,  5288,
    1822,  1931,  1206,  1700,  1743,  1976,    98, -2918, -2918,   813,
    1978,  1980, -2918, -2918, -2918,  1982,  1747,   199,  1822,  1749,
   -2918, -2918,  1933, -2918,   464,  1979,  1987,  1247, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918,    12, -2918,  1537,
    1990, -2918, -2918, -2918,  1247, -2918,  1247, -2918, -2918, -2918,
   -2918,  1247,  1247,  1247,   960,  5288, -2918,  1992,  1489, -2918,
   -2918,  1247, -2918, -2918,  1247,  5288,  1247, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918,   464,  1247, -2918,  1247,   960,  1993,  1996, -2918,
   -2918, -2918, -2918,  1247,  1247, -2918,   464, -2918, -2918, -2918,
     175,  1997,  1998, -2918, -2918, -2918, -2918, -2918,  1247,  1247,
   -2918, -2918,  1659,  1247,  1247, -2918, -2918, -2918, -2918,  1991,
    1247, -2918,  1247,  1882, -2918,  1247, -2918,  1247,  1883, -2918,
    2002, -2918,  1446,  1446,   757,   831,   874,  1446,  2003, -2918,
     891, -2918,   897,   953,   994,  1005, -2918,  2004,  2006,  1032,
    2010, -2918,  2013,  2015,  2011, -2918,  1066,  1085,  2017,  2019,
    2023, -2918, -2918,  2027,  2029,  2024, -2918,  1446,  1446,  1446,
   -2918, -2918, -2918,  1247, -2918, -2918, -2918, -2918,  1247, -2918,
   -2918, -2918,  1247, -2918,  1247,  1247,   903,  5288, -2918,  1247,
   -2918,  1586, -2918,  4082, -2918, -2918,  2030, -2918, -2918,  2031,
   -2918, -2918, -2918, -2918,  2026,  3390, -2918,  1247,  2033,  1247,
    1247,  1247,  1291, -2918,  2036,  1247,  1247,  2038,  1247,  1247,
    2041,  1247,  2042,  1247,     6,  2043,   464,   464, -2918,  1586,
    2045,  1247,  2050,  2052,  2053,  1586,  5288, -2918,  1247, -2918,
   -2918, -2918,  1247,  1247,  1247,  1586,  5288,   -39, -2918, -2918,
   -2918, -2918,  1659,  1247,  2054,   -39,  1247,   708, -2918,  2055,
   -2918, -2918,   875,  3962,  1247, -2918,  1247,  2057,  2062,  1247,
   -2918, -2918, -2918,  2058,  1328,  4916,  1792,  1793,  1795,    85,
    5288,  1800, -2918,   664,    90,   145, -2918,  1801,  1804,   168,
   -2918, -2918,   597,  1885,   777,  1805,   -99,  1822,   984, -2918,
    2074,  1799, -2918,   819, -2918, -2918, -2918, -2918,  1822,  1849,
       2, -2918, -2918, -2918, -2918, -2918,  1247, -2918,  1247, -2918,
   -2918,  1247,  1247, -2918,  1247, -2918,  1247, -2918, -2918, -2918,
   -2918,  1860,  1247, -2918, -2918, -2918,  1247,    41, -2918, -2918,
   -2918, -2918,  2085,  2087, -2918,  1247,    -9,    -9,    -9, -2918,
   -2918, -2918, -2918, -2918, -2918,  2090,    -9,    -9,    -9,   437,
   -2918, -2918, -2918,    -9, -2918,   118,    -9,    -9,    -9, -2918,
   -2918,    -9,    -9,  2091,    -9,    -9,  2093,   118,   867, -2918,
     749, -2918,   974, -2918, -2918, -2918,  2094,  2095,  2096, -2918,
     972, -2918,   978, -2918, -2918,  1797,  2097,  2098,  2099,   118,
     118,   -64,  2101,  2104,   -64,  2105,  2107,  2108,    -9,    -9,
   -2918,  2109,    -9,    -9, -2918,  2111, -2918, -2918, -2918, -2918,
   -2918, -2918,   464, -2918, -2918, -2918,  4916,  1028,  1247,  1441,
    1632,     9, -2918, -2918, -2918,   547, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  2112,  1247,
   -2918,   464,  1139,  2115,  1247,  5288,   464,   464,  2116,  1646,
    1836,  1850,   173,   190,  1851,   233,  1760,  1768,  2121,  2122,
    2123,  2125,  1742,  2126,  2129,  2131,  1782,  1788,  1491,  2134,
    1247,  1459,  1841, -2918, -2918,   464,  1139,  5288, -2918, -2918,
    5288,  1247,  2138,     4,  2135,  5288,  1247,  1586,   464, -2918,
    2141,  5288,  5288,  1247, -2918, -2918, -2918,   464,   464,  1139,
    5288, -2918, -2918, -2918, -2918, -2918, -2918,  5288,  1247,   464,
   -2918,  2142, -2918, -2918,  1247, -2918, -2918,  2145,  1247,  1892,
     214,  1247,  1894,  1247,   609,  1247,  2148,  1247,  1895,  1897,
    1247,  1247,  1247,  1898,  1247,   216,  1247,  1247,  1256,    20,
    1247,  1247,  1900, -2918, -2918,  1247,  1247,  1247,  1247, -2918,
    5288,  1586,  2150,  2154,  2156,  1247,  1247,  1586, -2918,  1247,
    1247,  1247,  5288,   960, -2918,  1247,  1247, -2918, -2918, -2918,
    2157, -2918, -2918, -2918, -2918, -2918, -2918,  2159,  1247,  1247,
   -2918,  1247,  1247, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918,  2160,  2161,  2172, -2918,  2173,  2174,  2176, -2918,
    2177,  2178,  2180, -2918, -2918,  1446,  2182,  2183,  2181, -2918,
    2184,  2185,  2188, -2918,  2189,  2191,  2193, -2918,  2194,  2195,
    2197, -2918,  2198,  2199,  2201, -2918,  2202,  2203,  2205,  2206,
    2208, -2918,  2211, -2918, -2918, -2918,  2212,  2215,  2217, -2918,
    2218,  2219,  2221, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918,  1247, -2918,  1247,  1247, -2918, -2918, -2918,
    1247, -2918,  1586, -2918, -2918,  3390,  1247,  1586,  1247,  1247,
    1247, -2918,  1247,  1247,  2222,  1247, -2918,  1247,  1247,  2224,
    1247,  1247,  2235,  1247,  2236,  1247, -2918, -2918,  2225,  5288,
   -2918,  2246, -2918,  2250,  1247, -2918, -2918, -2918, -2918,  1586,
   -2918,  1096,  1247,  1096,   -39,  1586,  5288,  1247,  1247,  2253,
   -2918, -2918, -2918,  1247, -2918, -2918, -2918, -2918, -2918,  5288,
   -2918,  5288,  1247, -2918, -2918,   414,  2254,  2258,  2259,  2260,
    2261,  5047,  1586, -2918,  5288,  5288,  5288,  4916,  5288,  1586,
    5288, -2918, -2918, -2918,  5288, -2918, -2918, -2918, -2918,  4916,
    5288,  5288,  5288,  4916,  5288, -2918, -2918,  5288,  5288,  1247,
   -2918, -2918, -2918,  5288,  5288,  5288,  5288, -2918, -2918,  5288,
    5288, -2918, -2918, -2918, -2918, -2918,  5288,  5288, -2918, -2918,
    2059, -2918, -2918, -2918, -2918,  1247,  1247, -2918, -2918,  2263,
    1247, -2918, -2918,  2264, -2918, -2918,  1247, -2918, -2918, -2918,
      -9, -2918, -2918, -2918,  2265,  2266,  2267, -2918, -2918,   -64,
    2269,  2272,  2273, -2918,    -9, -2918, -2918, -2918, -2918, -2918,
     118, -2918, -2918,  2275,    -9,  2276,  2277,  2278,   118,   118,
     -64,  2280,  2281,  2282,  1854,  2283,  2284,  2287,   118,   118,
     -64,  2289,  2290,   -64,  2291,  2292,  2293,  2294,   118,   118,
     -64,  2296,  2297,  2299,  1117, -2918,  1523, -2918,  1618,  1888,
    2300,  2301,  2304,   118,   118,   -64,  2298,  2306,   -64,  2307,
    1906,  2308,  2309,  2310,   118,   118,   -64,  2312,  2314,   -64,
    2315,   118, -2918, -2918, -2918, -2918, -2918,  2317, -2918, -2918,
    2318,   118,  2319,  2320, -2918, -2918,    -9, -2918, -2918,  2322,
   -2918,  1586, -2918,  5288,  1247,  1247,  5288,  1247,  2324,  1683,
   -2918, -2918, -2918, -2918, -2918, -2918,  2326,  5288,   464, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918,  1139,  2328,  5288,  1586, -2918, -2918, -2918,  2331,  1683,
    1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  1247,  2321,
    2334, -2918, -2918, -2918, -2918,  2335, -2918, -2918, -2918,  2337,
    2340, -2918, -2918, -2918,  1247,  5288,  1247,  2342,  1683,   464,
    1139,  1586,  1586, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,  1586,  1247,  1659, -2918, -2918,
    1586,  1586,  1247, -2918, -2918, -2918,  1586,  1586, -2918, -2918,
   -2918, -2918, -2918,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247, -2918, -2918,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1831,  1247,  1247,  1247,  1852,  1247,  3568,
    2344,  1247, -2918,  1247,  1247,  1247,  2349,  2351, -2918, -2918,
    1586,   -39, -2918,  2352,  2354, -2918, -2918,  1659,  1247, -2918,
    2357,  1586,  5288, -2918, -2918, -2918,  2358, -2918, -2918, -2918,
   -2918,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,  1446,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1683,  1247,
   -2918,  1247, -2918,  1247,  1586,  1247, -2918,  1659,  1247, -2918,
    1247, -2918,  2166,  2360,  2361,  1247,  1247, -2918,  1247,  1247,
    2364,  1247,  2366,  1247,  2367,  1586,  2368,  2370,  5288, -2918,
   -2918,  1247, -2918,  1247, -2918,   -39,   875,  1247,  2371, -2918,
    1247, -2918, -2918,  4916, -2918,  2372,  2373,  2374,  2375,  2376,
    5288,  1586, -2918,   875,   875,   875,  1586, -2918,   875,   -39,
     875,   875,  1586, -2918,   875,   875,   875,  1586, -2918,   875,
     875,  1586,  5288,  1586,   875,  1586,   875,   875,  1586,   875,
    1586,  5288, -2918, -2918,  2378,  4916,  2379,  1247, -2918, -2918,
   -2918, -2918,  2381, -2918, -2918, -2918, -2918,    -9,   118, -2918,
   -2918, -2918, -2918, -2918, -2918,  2382, -2918, -2918,   118,   118,
   -2918, -2918, -2918, -2918, -2918,  2383, -2918, -2918,  2384,   118,
   -2918, -2918, -2918, -2918, -2918,  2385, -2918, -2918,   118,  2386,
    2387,  2388,   118,   118,   -64,  2391,  2392,  2393,  2394,  2395,
    2396,   118,   118,   -64,  2398,  2399,  2400,  2401,  2406,  2407,
     118,   118,   -64,  2409,  2413,  2414,   118,    -9,    -9,    -9,
      -9,    -9,  2416,    -9,    -9,  2417,   118,   118,    -9,    -9,
      -9,    -9,    -9,  2418,    -9,    -9,  2419,   118, -2918,   118,
    2420, -2918,  2421,  2422, -2918,  4082, -2918,   875,  2423,  5288,
     875,  1247,  5288,  2425, -2918,   875, -2918, -2918, -2918,   875,
   -2918,  5288,  2426,  1247,  1247,  1247,  1247,  1247,  1247,  1247,
    1247,  1247,  1247,  1247, -2918, -2918, -2918,  5288,   875,  1247,
    5288,  2427, -2918, -2918,  1659,  1659,   -39,  5288,  1659,  1659,
    5288,  5288,  1659,  1659,  1247,  1247,  1247,  1247,  1247,  1247,
    1683,  1247,  1247,  1247,  2751, -2918,  1683,  1247,  1247,  1247,
    1247,  1683,  1247,  1247,  2456,  1247,  1247,  1247,  2457,  1247,
    1247,  1586,  1247,  1918,  1683,  1247,  1247, -2918, -2918,   -39,
     464,  5288,  5288, -2918, -2918, -2918,   -39,  1586,  2459, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1247,
   -2918, -2918,  1659,  1247, -2918, -2918, -2918,  1300,  2460,  2461,
    2463,  2464,  1247,  1247,  2465,  1247, -2918,  2466,  1096, -2918,
   -2918, -2918,   875, -2918, -2918, -2918, -2918,  2467, -2918, -2918,
    1586,  2469,  2470,  2477,  2479,  5288,  2480,  1586, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918,   -39,   875,   -39, -2918,   -39, -2918,
   -2918,   -39, -2918,   -39,  1586,  2481,  1586,  2488, -2918,  1247,
   -2918, -2918,    -9,   118, -2918, -2918,   118,  2491, -2918,   118,
   -2918,    -9,    -9,    -9,    -9,    -9,  2492,    -9,    -9,   118,
      -9,    -9,    -9,    -9,    -9,  2493,    -9,    -9,   118,    -9,
      -9,    -9,    -9,    -9,  2494,    -9,    -9,   118,    -9, -2918,
   -2918, -2918, -2918, -2918,   118, -2918, -2918,  2495,    -9,    -9,
   -2918, -2918, -2918, -2918, -2918,   118, -2918, -2918,  2496,    -9,
   -2918,   118, -2918, -2918,  1586, -2918,  5288,   875, -2918,  2497,
    1586,  1247, -2918, -2918,  1586,  1247, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,  1247,  1247,   875, -2918,  2499,
    1586,  1247,  1659, -2918,    17,   875,  1247,  1659,   875,   875,
    5288, -2918,  1247,  2500,  2500,  1247,  1247,  2500,  1683,  2500,
   -2918,  5288,  1826,  1886,  1911,  1956,  1975,  1983,  2018,  2751,
   -2918,  2064, -2918, -2918,  1683,  2500,  2500,  1247,  1247,  1683,
    1524,  1247, -2918,  1247,  1247,  1247, -2918,  1247, -2918,  1659,
    1247,  2501, -2918, -2918,  1247,  2500,   464,    21,  1586,  1586,
     464,   -39,  2503, -2918, -2918, -2918,  2504,  1247, -2918,  2505,
    2507,  2508,  2509,  2510, -2918,  2511,  2512,  1247, -2918, -2918,
    2513,     5,  5288, -2918,  2515,    16,  5288, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918,  2517,     5,  1247, -2918,
   -2918, -2918,   118, -2918, -2918, -2918, -2918, -2918, -2918,   118,
   -2918, -2918,    -9, -2918, -2918, -2918, -2918, -2918,   118, -2918,
   -2918,    -9, -2918, -2918, -2918, -2918, -2918,   118, -2918, -2918,
      -9, -2918,    -9,   118, -2918, -2918,    -9,   118, -2918, -2918,
    1247,   875, -2918,  5288,  5288,  1247,  5288,  1247, -2918, -2918,
   -2918,  5288,  5288,  1247, -2918, -2918,  2518, -2918,  5288, -2918,
   -2918, -2918,   875,  2520, -2918, -2918, -2918,  1683,  1247, -2918,
    2521, -2918, -2918,  1586,  1742,  2522,  2524,  2536,  2539,  2540,
    2525, -2918,   464,  2543, -2918, -2918,  1683,  1247,  2544,  2545,
   -2918, -2918, -2918, -2918,  1247,  5288, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918,    21,  1953,  1822, -2918, -2918, -2918,
     464,  2550,  2552,  2553, -2918, -2918, -2918,  2563,  2567,  2568,
   -2918,    42,     5, -2918, -2918, -2918, -2918,  2569,  5288, -2918,
   -2918, -2918, -2918, -2918,     5, -2918,  2574, -2918,    -9, -2918,
      -9, -2918,    -9, -2918, -2918,    -9, -2918,    -9,  4082, -2918,
     875,   875,  1247,   875,  2577,   875,   875,  1247, -2918,   875,
    1247, -2918, -2918, -2918, -2918,  2581, -2918,  1247, -2918, -2918,
    2583, -2918,  2586, -2918, -2918, -2918, -2918, -2918,  1247, -2918,
   -2918, -2918,  2587,  1247, -2918, -2918, -2918, -2918, -2918,  1586,
   -2918, -2918, -2918,  1953, -2918,  2012,  2071,  1822, -2918, -2918,
   -2918,  2590,  2591, -2918, -2918, -2918, -2918, -2918, -2918,    91,
      91, -2918, -2918,  1586, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918,   875, -2918, -2918,  2593, -2918,  4916, -2918, -2918,  2594,
   -2918,  1683, -2918, -2918,  1683,  1247, -2918,  2595, -2918,  1247,
   -2918,  1683,  1247, -2918, -2918,  5288, -2918,  2012, -2918,   464,
   -2918,  2597,  2598,  1247,  1247,  1247,  1247,    16,  2600,  4916,
    1586, -2918,  4916, -2918, -2918,  1247, -2918,  2602, -2918,  1247,
     875, -2918, -2918, -2918,  2603,  2605,  1247,  2606,  1247, -2918,
   -2918,  1586, -2918, -2918,  1586, -2918, -2918,  2608, -2918, -2918,
    2610,  2612, -2918, -2918,  2613, -2918,  2616, -2918, -2918,  1683,
   -2918,  1683, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2918, -2918,    -3, -2918,   354, -1053, -1954, -1104,  1732, -2918,
    1059,  -414,  1716,   -55,   -21, -2918,  -303, -1922,  1884,  2025,
    -998,   265, -1150,  1146,   -11, -1696, -2918, -1093, -2918,  -842,
   -1190, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918,  -611,  -547, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2207, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,   739, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918,   426, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918,  -369,  -259, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -1689, -2918, -2918,
   -2918, -2918, -2918, -2918,  -794, -2918, -2918, -2918, -2918, -2918,
   -2918,    58, -2918, -2918, -2918, -2918,  -412,  -800, -1928,  -580,
   -2918, -2918, -2918, -2918, -2918,  -603,  -568, -2918, -2918, -2917,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918,  1628, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918, -2918,
   -2918, -2918, -2918, -2918, -2918, -2918, -2918
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1441
static const yytype_int16 yytable[] =
{
      74,   403,  1028,  2185,  1477,  1302,  1275,  1278,   116,  2361,
    2200,  2363,  1593,   185,   816,  1596,   339,  1746,  2010,  1058,
     366, -1214,  2935,    70,    71,  2259,   937,    70,    71,  1676,
     940,  2205,  1319,  2225,   337,   818,  1631,   434,   928,  3003,
      70,    71,   709,   364,   933,    70,    71,  1469,  1470,  1471,
    3009,  1306,   397,   773,    61,   408,  1916,  2206,   414,   118,
    2207,  2021,   420,  1142,  1143,   427,   469,  1420,  1261,   698,
     431,   433,  2208,    83,   443,  1112,   684,   450,   454,  1270,
     899,   457,    70,    71,   458,   459,  1064,   912,   467,  1006,
     423,  1646,  1994,   468,    70,    71,   392,  2209,   680,  1009,
     354,    62,   172,  1726,   504,   173,  1967,    60,   485,   489,
     494,   495,   499,   501,   714,  2210,  1144,   367,  1976,   750,
     121,  1573,    63,  1712,  1013,  2140,  1557,    70,    71,   505,
     118,   341,  1550,   368,  1589,  1320,    70,    71,  1017,   174,
    1168,   704,   605,  1321,    70,    71,   681,   175,   854,   275,
     619,   299,    64,    70,    71,  1677,    70,    71,  3128,  2211,
    1995,   685,   900,  1821,   514,   538,  1979,  1834,  1569,    70,
      71,   118,   301,   118,    65,   555,   479,   572,    66,   580,
    1798,   585,   589,   373,   556,    70,    71,   123,  1708,  1983,
     548,  1799,   625,    67,  2172,   571,  1033,  1880,  1881,  1882,
    1570,  1059,    70,    71,   480,  1018,   686,   118,   411,   668,
    3151,  2174,   913,   767,   176,  3004,   989,    70,    71,    70,
      71,   235,  1169,  1551,  1014,   309,  3010,   169,   670,  1065,
     369,   393,  2141,   768,  1996,   699,   374,  1735,   236,   302,
    1574,   257,   620,   715,  1977,  1025,   606,   375,   370,    72,
     439,   687,   435,   118,  2177,  3086,   819,   710,   123,   539,
    1421,   327,   426,   303,   820,   821,  1145,  1146,  1713,   682,
     716,  1034,  1183,   177,   635,   901,  1714,  2253,   855,   621,
     376,   990,   118,   929,   748,   126,   751,   752,   844,  1113,
     914,  1026,   654,  2142,   127,   128,  1543,  1590,  1709,   123,
     934,   123,   780,   781,  1271,   822,   178,   705,   179,   129,
    2022,   436,   118,   325,   259,   838,   118,  1917,   825,   437,
     827,   903,   470,   304,   769,  1184,   917,   394,  3005,   263,
     830,   833,   381,   836,   840,   123,   842,   180,   924,  3011,
      70,    71,  1678,  1307,   382,   358,   852,  1736, -1214,  1262,
     906,   938,  1147,   362,   700,   941,   126,   774,  1968,   862,
     864,    73,  1747,  1148,  1149,   127,   128,  2936,   171,   183,
    2260,   118,  1060,  1322,  1308,   383,   258,   935,  1114,   424,
      68,   123,  1727,   916,   307,   440,   923,   925,   371,   927,
    3087,   449,   344,   931,   932,   131,   753,   126,  2011,   126,
    1150,  1272,  1310,  2212,   946,   948,   127,   128,   127,   128,
     123,   949,   181,   701,   412,  1138,   952,   954,  1980,  1066,
    1718,   655,   823,   460,   955,   118,   706,  1335,   957,   441,
     442,  1978,   445,   126,   546,  3088,   311,   671,  1739,   909,
     123,  1984,   127,   128,   123,   161,  2173,   967,   968,   351,
    2034,  2035,   162,   163,   972,   973,   974,   975,   976,   977,
     384,   979,   611,  2175,   981,  2527,   131,   377,   118,  1936,
     363,  2117,   342,  2235,  2120,  1185,  1156,  1940,   396,   126,
    1780,  1005,   991,   343,  1157,  1158,   992,  1710,   127,   128,
     407,   997,   998,   999,  1000,  1001,  1002,   615,  1003,   123,
     489,  1007,  1008,  2036,  2553,   385,  2178,   131,   126,   131,
     489,  1010,  1792,   305,    70,    71,   161,   127,   128,   419,
     312,   353,  1311,   162,   163,  1250,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,  1737,  1159,   126,   355,
     918,   650,   126,   131,   656,   380,  2139,   127,   128,  1280,
     541,   127,   128,   123,  1281,   628,   542,   161,   410,   161,
    1671,  1186,   306,  1073,   162,   163,   162,   163,  1041,  1042,
     405,  1251,  1187,   260,  1055,  2169,  1312,   657,   629,    70,
      71,    70,    71,  1340,   386,  1170,  1050,   317,   264,   131,
    1457,   461,   462,   161,   387,   630,   123,   126,  2198,   261,
     162,   163,   889,   543,   359,   356,   127,   128,   318,  1188,
     319,   759,    70,    71,   265,   958,  1123,   388,   131,    70,
      71,   111,  1076,  1367,  1985,   389,   623,  1313,  1103,   919,
     360,   544,  1264,  1282,   313,  1473,  1345,    70,    71,   161,
     463,  1316,   112,   749,   390,  2300,   162,   163,   131,   314,
     446,   126,   131,  2037,  2038,  1672,   187,   778,   779,  1283,
     127,   128,  1341,  2143,  1177,  1118,   894,  1171,   161,   890,
    3015,  1615,    70,    71,   188,   162,   163,   121,   416,  1616,
    1617,   417,   121,  1054,   418,   545,   959,  1160,  1161,   835,
    1368,  1971,   624,  1021,   126,   631,   447,  1074,   161,  1525,
     113,   464,   161,   127,   128,   162,   163,   131,  1174,   162,
     163,  1265,  1942,  1137,   430,  1346,  2857,  1997,   422,  1986,
    1673,   612,   315,  1140,  1314,   482,  1252,  1193,  2008,   546,
     547,  1284,  1618,   895,  1369,   760,   904,   907,   910,  2039,
     121,   920,  1398,  1253,  1254,   320,  1178,   613,   429,   276,
    2040,  2041,  1362,  1274,  2064,   451,   616,   161,   875,   267,
    1342,   131,  2065,  2066,   162,   163,   960,  1431,  1364,   121,
    2144,  1526,   945,  1162,  1432,  1372,   456,  1192,   761,   762,
    1378,  1705,   617,   956,  1163,  1164,  1972,  2042,  1987,  1165,
     268,   483,  1243,   466,   277,  3091,  1273,   278,   114,  1286,
     651,  1604,  1527,  1022,   131,  1376,  1674,  3094,  1613,  1266,
    1383,   161,   321,  1347,  1025,  2067,   472,   279,   162,   163,
    1244,  1166,  1326,  1822,   763,   877,   652,  1327,  1328,  1329,
    1330,  2145,  1715,  1331,  1363,  1333,   280,  1334,   489,  1336,
    1728,   632,  1373,  1343,  1255,  1256,  2004,  1379,  1285,   891,
    1365,  1973,  1716,   281,   161,   473,  1988,   633,  1675,   282,
    1026,   162,   163,   322,   475,   452,   129,   477,  2240,   961,
    1370,   129,  2952,   323,   269,   962,  1706,  1384,  1411,   502,
    2055,  2056,  1619,  1620,   515,  1082,  1083,  1377,   764,  2422,
    1823,   270,  1250,  1023,  2972,  1528,  1348,  1826,  2976,  1945,
    1946,  1084,  2374, -1440,  2981,    70,    71,  1888,   866,   115,
    2435,   283,  1605,   896,  1397,   765,  1401,   527,  1804,  1614,
    2445,  1402,  1403,  2448,  1404,  1405,  1407,  1409,  1410,   129,
    2455,   526,  1990,  2057,   284,  1729,  2364,  1974,  1251,   346,
    1830,  2005,  1423,  1424,   528,  2492,  1085,   551,  2495,  1428,
    1429,   553,    93,  1086,  1529,   453,  2503,  1836,   129,  2506,
     582,   271,  1277,  1840,  1827,  2068,  2069,   608,  1621,  1245,
    1435,  1436,  1437,  1438,  1439,   867,  1441,  2089,  1443,  1622,
    1623,  1947,  1087,  2100,  1624,  2090,  2091,  2075,  2076,  1975,
     609,  2101,  2102,  3044,    70,    71,  1452,  1453,  1454,  2282,
    1456,   489,  1458,   610,  1459,   885,  1088,  1831,  1463,   272,
    2006,   627,  3061,  1707,   868,   869,  1625,  3042,  3043,  1844,
     273,  3046,  1374,  3048,  1837,  1089,  1462,  1380,  1464,  1250,
    1841,    70,    71,  2133,  1246,  2523,  3059,  3060,  2092,  1466,
    2077,  1090,  3065,  3066,  2103,  3067,   489,  1474,  1091,  3070,
     285,  2070,  1476,   347,  3071,  3072,  1092,  1385,  1937,   644,
    1848,  1247,  2071,  2072,  1133,  2532,   647,  2073,   649,  1489,
    1824,  1852,  1730,  1493,   636,  1251,   646,  1991,  2007,   286,
     287,   675,  1141,  2058,  2059,  1992,  1845,  1536,  1538,  1541,
      94,   676,   288,  1252,  2551,  1546,   289,   637,  1858,  2074,
    1552,  2609,  2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,
    1253,  1254,   669,  3112,   638,  1555,  3113,  1608,  1093,    95,
     678,  3116,  1531,    96,   870,   659,    93,  1849,   697,  1998,
    2459,  2460,  1866,  3120,  1565,  1572,  3123,   660,  1853,  1537,
    3124,   348,  1094,  2149,  1828,    70,    71,  1095,   703,  1096,
     712,  1870,   349,   708,   103,   871,   713,   845,  1289,   746,
    3144,   119,   717,  1317,   104,  1859,  2150,  3148,   661,  2060,
     747,   105,    70,    71,  1630,  1999,   755,  1097,  1098,  2151,
    2061,  2062,   757,  2461,   333,    97,  1099,  1832,  2093,  2094,
    2078,  2079,  2152,   771,  2104,  2105,   846,   776,  1303,  1867,
     777,    70,    71,   121,  1838,   782,  2153,  2154,  1100,   817,
    1842,  1255,  1256,  1711,  1680,   829,  3166,  2063,  1871,   843,
    3169,   850,    70,    71,  2618,  3185,   851,  3186,  1545,    98,
    1252,    76,   639,   413,  1738,    70,    71,    77,    99,   100,
    3180,   831,   853,  2000,  1745,   857,  1681,  1253,  1254,  1682,
      70,    71,   122,   662,  3187,   847,   859,  3188,  3189,    70,
      71,  1775,   106,  1776,    94,  3050,  1846,  1101,  1777,  1778,
    1779,  1532,  1399,  2600,  2095,   496,  2080,  1304,  1785,   865,
    2106,  1786,  1683,  1788,    78,  2096,  2097,  2081,  2082,   184,
    2098,  2107,  2108,    95,    70,    71,  2109,  2360,   663,   640,
    1790,   873,  1791,    70,    71,   984,   985,  1850,  1689,  2001,
    1795,  1796,    79,  1684,  2706,   107,  1685,  2257,  1854,   124,
     832,   893,  2099,  2715,  2083,  1802,  1803,   898,  2110,   489,
    1805,  1806,  2724,  2462,  2463,   922,  1533,  1808,  1445,  1809,
    1690,   930,  1811,  1691,  1812,  1860,  1692,   943,  1255,  1256,
     641,  1720,   108,   950,   497,  1904,    70,    71,  1892,    97,
     642,   951,   334,  1534,  2846,   965,    80,  2645,  1079,  1540,
    2155,  1080,  1081,   591,   328,  1305,  1693,   664,  1636,  1868,
     848,  2156,  2157,  2158,  2159,   109,   966,   665,   969,   592,
    1883,  2664,   129,    70,  1406,  1884,   970,   130,  1872,  1885,
     971,  1886,  1887,    98,  1898,   978,  1890,  1694,   335,   980,
    1695,    81,    99,   100,   593,    70,    71,   982,  1956,  2464,
    1414,  1415,  1896,   953,  1899,   983,  1901,  1902,  1903,  1905,
    2465,  2466,  1907,  1908,   594,  1910,  1911,   666,  1913,   986,
    1915,    70,    71,    84,    70,    71,  2136,   988,  1924,  1427,
      70,  1488,   498,  1686,   595,  1930,  1943,  1637,   596,  1931,
    1932,  1933,    70,    71,  2195,  1721,  2798,  2467,   486,   489,
    1938,   488,  2814,  1941,  1963,  2160,  1011,  2819,  1012,   336,
    1016,  1951,    85,  1952,  1417,  1418,  1954,  1020,  1687,   597,
     598,  1815,  1816,  1783,  1784,  2191,  2192,  1957,  1029,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1036,  2969,  2970,
    1031,  1722,   329,  2012,  1038,  2013,  2468,  2469,  2014,  2015,
     330,  2016,   331,  2017,  1039,  1638,  1639,  1696,  1052,  2019,
     994,   995,   599,  2020,  1057,  2027,  2028,  2029,  2784,  1748,
    1640,    86,  2026,   600,  1749,  2031,  2032,  2033,  1062,    70,
      71,  1071,  2043,  1068,  1069,  2045,  2046,  2047,  1581,  1582,
    2048,  2049,  1697,  2051,  2052,  1958,  1959,  1072,  1077,  2470,
    1750,  1751,  1104,  1752,  1753,  1105,  1119,  1106,  1742,  1108,
    1960,  2836,  1110,   291,  1116,  1754,   292,  1641,  2840,   860,
    1121,    87,    88,  1698,  1125,  1130,  1131,  2124,  2125,  1755,
    1756,  2127,  2128,   506,  1132,  2132,  1134,  1757,  1135,  1151,
    1758,  2477,  2478,   601,   602,    70,    71,  2138,  1643,  1644,
    1817,  1818,  1136,  1139,  2134,  2135,  2137,  1961,  1759,    70,
      71,  2168,  1643,  1644,  1152,  1153,  1789,  1760,  1761,    89,
      90,  1762,    70,    71,  1258,  1154,  2147,   486,   487,   488,
    1797,  2163,  1819,  1155,  1167,  1179,  2868,  1181,  2870,  1182,
    2871,  1189,  1190,  2872,  2479,  2873,    70,    71,   861,  1643,
    1644,  1191,  1763,  1242,  2950,  1249,  1260,  2194,  2196,  1268,
     293,  2946,  1269,   507,  2949,  1323,  2951,  1324,  2203,  1325,
    2963,   603,  1337,  2216,  1339,  2968,   294,   875,  1350,  1351,
    2222,    91,  2964,  2965,  1352,  1353,  1354,  1357,   508,   509,
    1355,  1356,  1358,  1764,  1359,  2228,  1360,   510,  1361,  2471,
    2472,  2231,  2983,  1382,  1389,  2233,  1387,  2236,  2237,  1388,
    2239,  2241,  2242,   338,  2245,  1390,   295,  2248,  2249,  2250,
     511,  2252,  2254,  2255,  2256,  2258,  2261,  2263,  2264,  1391,
     512,  1392,  2266,  2267,  2268,  2269,  1393,  1412,  1394,  1395,
     876,  1396,  2275,  2276,   877,  1651,  2278,  2279,  2280,  1413,
    1416,  1419,  2283,  2284,   718,  1425,  1231,   719,  1765,  1426,
    1920,  1921,  1430,  2558,  1766,  2287,  2288,  1433,  2289,  2290,
    1434,  1440,  1232,   296,  1652,  1442,  1444,   720,  1446,  1447,
    1450,  1233,  1767,   878,   879,  2473,  1460,  1481,   880,  1461,
    1479,   297,  1234,  1768,  2480,  2481,  2474,  2475,  1480,  1483,
    1484,   503,  1485,  2990,    70,    71,  2197,  1643,  1644,  1486,
    1653,  1487,  1491,   721,  1492,  1530,  1553,  1542,  1654,   722,
    1544,  1548,  1556,  2603,  1655,  1769,  1770,  1558,  1235,   881,
    1559,  1562,  1576,  2476,  2335,  1563,  1566,  1567,  1568,  1577,
    2328,  1578,  2329,  2330,  1579,  1583,  1656,  2331,  1584,  1771,
    1585,  1236,  2333,  2336,  1586,  2338,  2339,  2340,  1587,  2341,
    2342,  1588,  2344,  1594,  2345,  2346,  1595,  2348,  2349,  1657,
    2351,   723,  2353,   569,  1597,   576,   579,  1598,   584,   588,
    2482,  2358,  1290,  2624,  1600,  1647,  1602,  1658,   882,  2362,
    1291,  2483,  2484,   883,  2367,  2368,  1772,  1610,  1292,  1612,
    2370,  1626,  1627,  1650,  1628,  1629,  2387,  1237,  1632,  2373,
    1633,   673,  1634,  1648,  1649,  1669,  1293,  1670,  2393,  1679,
     884,  1688,  2398,  1294,   885,  1659,  1699,  1700,  2485,  1701,
     689,   695,  1702,  1703,  1719,  1704,   702,   886,   529,  1723,
     707,  1725,  1731,  1743,  1724,  1732,  2402,  1733,  1734,  1295,
    1740,  1744,  1238,  1741,  1774,  1807,  2130,  1782,  1793,   530,
    1296,  1794,  1800,  1801,  1810,  1813,  1814,  3143,  1835,  1856,
    1660,  1857,  2412,  2413,  1862,  1865,   531,  2415,  1863,  2418,
    1864,  1239,  1874,  2417,  1875,  2148,  1661,  1876,  1879,   532,
    2165,  2166,  1877,  2426,  1878,  1893,  1894,  1895,   826,  1662,
    1906,   828,  1909,  2429,  1900,  1297,  1912,  1914,  1919,  1923,
     724,   533,   837,  1298,  1925,   534,  1926,  1927,  1939,  2199,
    1944,  1953,  -516,  1955,  1993,  1964,  1965,  1240,  1966,  1241,
     535,  1663,  2218,  1970,  1981,   858,  1989,  1982,  2002,   725,
     726,  2223,  2224,  2003,  2018,  1664,  2009,  1665,  1666,  2024,
     399,  2025,   727,  2229,  2030,  2050,   728,  2053,   400,  2084,
    2086,  2088,  2112,  2113,  2114,  2118,  1299,  2111,  2119,  2170,
    2121,  2122,  2123,  2126,  2179,  2514,  2129,  2146,   536,  1300,
    2162,  2167,  2180,  2171,  2176,  2181,  2182,  2183,  1667,  2184,
    2186,  2518,  2519,  2187,  2521,  2188,  2189,  1301,  2193,  2214,
    2782,  2783,  2190,  2204,  2786,  2787,  2219,  2230,  2790,  2791,
    2232,  2234,  2243,  2238,  2246,  2272,  2247,  2251,  2273,  2265,
    2274,  2411,  2285,  2286,  2439,  2291,  2292,  2533,  2534,  2535,
    2536,  2537,  2538,  2539,  2540,  2541,  2293,  2627,  2294,  2295,
    2296,  2584,  2297,  2298,  2299,  2303,  3076,  2301,  2302,  2304,
    2305,  2547,  2306,  2549,  2307,   987,  2308,  2309,  2486,  2310,
    2311,  2312,  2588,  2313,  2314,  2315,  2316,  2317,  2844,   996,
    2318,  2319,  2320,  2557,   489,  2321,  2497,  2322,  1004,  2561,
    2323,  2324,   993,  2325,  2326,  2327,  2954,  2343,  2347,  2354,
    2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,
    2350,  2352,  2576,  2577,  2578,  2579,  2580,  2581,  2582,  2583,
    2356,  2585,  2586,  2587,  2357,  2589,  2590,  2369,  2593,  2375,
    2594,  2595,  2596,  2376,  2377,  2378,  2379,  2414,  2831,  2416,
    2419,  2420,  2421,  2423,   489,  2604,  2424,  3076,  2425,  2428,
   -1232,  2430,  2431,  2432,  2436,  2437,  2955,  2438,  2440,  2441,
    1043,  1044,  2442,  2446,  2447,  3159,  2449,  2450,  2451,  2452,
    2456,  2457,  2493,  1048,  2458,  2487,  2488,  1592,  1051,  2489,
    2494,  2956,  2496,  2498,  2499,  2500,  2504,  1063,  2505,   964,
    2507,  2509,  2510,  2512,  2513,  2542,  2619,  2515,  2620,  2522,
    2621,  2524,  2623,  2528,   489,  2625,  2531,  2626,  2543,  2806,
    2544,  2545,  2630,  2631,  2546,  2632,  2633,  2550,  2635,  2592,
    2637,   401,  2651,  2597,   402,  2598,  2957,  2601,  2643,  2602,
    2644,  2605,  2608,   841,  2647,  2628,  2629,  2649,  2934,  2634,
    2636,  2638,  2640,  2939,  2641,  2958,  2648,  2652,  2653,  2654,
    2655,  2656,  2685,  2959,  2688,  2690,  2693,  2696,  2697,  2699,
    3090,  2701,  2702,  2703,  2687,  2707,  2708,  2961,  2709,  2710,
    2711,  2712,  2716,  2717,  3073,  2718,  2719,  1126,  1127,  1128,
    1129,  2720,  2721,  2725,  2689,  2978,  2691,  2726,  2960,  2727,
    2734,  2737,  2745,  2748,  2751,  2752,  2753,  2756,   944,  2761,
    2765,  2781,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
    2754,  2822,  2826,  2842,  2962,  2848,  2849,  2850,  2851,  2854,
    2856,  3129,  2859,  2861,  3130,  2862,  2729,  2730,  2731,  2732,
    2733,  2863,  2735,  2736,  2864,  2866,  2875,  2740,  2741,  2742,
    2743,  2744,  2877,  2746,  2747,  2882,  2889,  2898,  2907,  2913,
    2917,  2923,  2526,  2931,  2944,  3126,  2980,  2991,  1366,  2992,
    2994,  2995,  2996,  2997,  2998,  2999,  3000,  3002,  2759,  1288,
    3008,  3014,     0,  3038,  3041,  3047,     0,  3051,  3052,  3056,
    2766,  2767,  2768,  2769,  2770,  2771,  2772,  2773,  2774,  2775,
    2776,  3053,  3134,  3136,  3054,  3055,  2779,  3058,  3063,     0,
    3064,   489,   489,  2552,  3080,   489,   489,  3081,  3082,   489,
     489,  2792,  2793,  2794,  2795,  2796,  2797,  3083,  2799,  2800,
    2801,  3084,  3085,  3092,  2815,  2816,  2817,  2818,  3095,  2820,
    2821,  3106,  2823,  2824,  2825,  3114,  2827,  2828,  3117,  2830,
    3118,  3121,  2834,  2835,  1040,  3131,  3132,  3139,  3142,     0,
    3146,  1045,  3153,  3154,  1046,  3160,  3168,     0,  3172,  1047,
    3173,  3175,  3179,  1049,  3181,     0,  2843,  3182,  3183,   489,
    2845,  3184,     0,     0,  2847,     0,     0,     0,     0,  2852,
    2853,  2646,  2855,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2659,  2660,
    2661,     0,     0,  2663,     0,  2665,  2666,     0,     0,  2668,
    2669,  2670,     0,     0,  2672,  2673,     0,     0,     0,  2677,
       0,  2679,  2680,     0,  2682,     0,     0,     0,     0,     0,
       0,  2879,     0,     0,     0,     0,  2878,     0,     0,     0,
    2884,  2885,  2886,  2887,  2888,     0,  2890,  2891,  1124,  2893,
    2894,  2895,  2896,  2897,  1449,  2899,  2900,     0,  2902,  2903,
    2904,  2905,  2906,     0,  2908,  2909,     0,  2911,  1455,     0,
       0,     0,     0,     0,     0,   238,     0,  2914,  2915,     0,
       0,  2044,     0,     0,     0,     0,     0,     0,  2918,     0,
       0,     0,     0,  2054,     0,     0,     0,   729,   730,   731,
     239,     0,     0,   240,     0,     0,     0,  1465,  2925,     0,
       0,     0,  2927,     0,     0,  2115,  2116,     0,     0,     0,
       0,     0,  2928,  2929,   732,     0,     0,     0,  2933,   489,
       0,     0,  2755,  2938,   489,  2758,     0,   733,     0,  2943,
    2762,   241,  2947,  2948,  2763,     0,     0,     0,   242,     0,
       0,     0,     0,   734,     0,     0,     0,     0,     0,   243,
     244,  2802,     0,  2778,  2966,  2967,   245,     0,  2971,     0,
    2973,  2974,  2975,  2803,  2977,     0,   489,  2979,     0,     0,
       0,  2982,     0,     0,     0,     0,   735,     0,     0,     0,
       0,     0,     0,     0,  2993,   246,   736,     0,  1561,     0,
       0,  1290,  2804,     0,  3001,     0,     0,     0,     0,  1291,
       0,     0,  1332,     0,   247,     0,     0,  1292,   737,  1338,
       0,     0,     0,     0,     0,  3016,     0,   738,     0,     0,
       0,  3019,   248,   249,     0,  1293,     0,     0,     0,   250,
    3021,     0,  1294,     0,     0,  2805,     0,   739,     0,  3023,
       0,  3024,     0,     0,     0,  3026,     0,  2858,     0,     0,
       0,     0,     0,     0,   251,     0,     0,  3028,  1295,     0,
       0,     0,  3032,   740,  3034,     0,     0,     0,     0,  1296,
    3037,     0,     0,     0,     0,  1717,     0,     0,     0,     0,
    2869,     0,     0,     0,     0,  3045,     0,     0,     0,     0,
       0,     0,     0,     0,  2837,     0,     0,     0,     0,     0,
       0,   252,     0,     0,  3062,   741,     0,     0,     0,     0,
     742,  3068,     0,  3101,  1297,     0,     0,     0,     0,     0,
       0,     0,  1298,     0,     0,     0,     0,   743,     0,     0,
     744,  1781,     0,     0,     0,     0,     0,     0,  3089,     0,
       0,  1787,     0,     0,     0,     0,     0,  3096,     0,  3097,
       0,  3098,  1448,     0,  3099,     0,  3100,   253,     0,     0,
       0,  1451,  2922,     0,     0,     0,     0,     0,     0,  3104,
       0,   254,     0,     0,  3109,  1299,     0,  3111,     0,     0,
       0,     0,  2930,     0,  3115,     0,     0,     0,  1300,     0,
    2937,     0,     0,  2940,  2941,  3119,     0,     0,     0,     0,
    3122,     0,     0,   255,     0,     0,  1301,     0,  1467,  1468,
       0,     0,     0,  1472,     0,     0,  1475,     0,  2806,     0,
    2807,     0,     0,     0,     0,  3141,  3133,  3135,  1482,     0,
       0,   783,   784,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   785,     0,     0,
       0,     0,  3145,     0,     0,     0,  3147,     0,  3162,  3149,
       0,  3165,     0,  1889,     0,     0,     0,     0,     0,     0,
    3155,  3156,  3157,  3158,     0,     0,     0,  2808,     0,     0,
       0,  1897,  3167,     0,     0,     0,  3170,     0,     0,     0,
       0,     0,   786,  3174,     0,  3176,     0,     0,     0,   787,
       0,     0,   118,     0,     0,     0,     0,     0,   788,     0,
     789,     0,  1929,     0,     0,   790,     0,   119,   791,     0,
       0,     0,  1935,     0,   792,     0,  3029,     0,   793,     0,
    2984,     0,     0,     0,  2989,   794,  2427,     0,     0,  1950,
       0,   120,     0,   795,  2433,  2434,     0,  3040,     0,     0,
       0,  1962,   796,     0,  2443,  2444,  1969,     0,  1635,   121,
       0,     0,     0,     0,  2453,  2454,     0,     0,     0,     0,
       0,   797,     0,     0,     0,     0,     0,     0,     0,  2490,
    2491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2501,  2502,     0,     0,   798,     0,     0,  2508,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2511,   122,     0,
       0,     0,   799,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   800,   801,     0,     0,     0,
     123,     0,     0,     0,     0,  3102,  3103,     0,  3105,     0,
    3107,  3108,     0,     0,  3110,     0,     0,     0,     0,     0,
     802,     0,     0,     0,     0,     0,  3057,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,   803,
       0,     0,     0,     0,  3079,     0,     0,     0,     0,     0,
       0,     0,     0,   804,     0,   805,     0,     0,     0,     0,
       0,     0,  2131,     0,     0,     0,  3138,     0,     0,     0,
       0,   806,     0,     0,     0,     0,   807,     0,   125,     0,
       0,     0,     0,     0,   808,     0,     0,     0,   126,     0,
       0,  2164,   809,    70,    71,     0,     0,   127,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   119,
       0,     0,     0,   130,   810,  3171,     0,     0,     0,     0,
       0,     0,     0,  2201,     0,     0,  2202,     0,     0,   811,
     812,  2215,   813,     0,     0,     0,  1891,  2220,  2221,     0,
       0,     0,     0,     0,     0,     0,  2226,     0,     0,     0,
       0,   121,     0,  2227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   814,  1922,     0,     0,     0,     0,     0,
    1928,     0,     0,  3152,     0,     0,     0,     0,     0,     0,
    1934,     0,     0,     0,     0,     0,  2270,     0,   131,     0,
     122,     0,     0,     0,     0,     0,     0,     0,  2281,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,     0,     0,     0,   161,     0,
       0,     0,     0,     0,     0,   162,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,     0,     0,
       0,    70,    71,     0,  2692,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2694,  2695,     0,   119,     0,     0,
       0,     0,     0,     0,     0,  2698,  1172,     0,     0,     0,
       0,  1173,     0,     0,  2700,     0,     0,     0,  2704,  2705,
       0,  2334,     0,     0,     0,     0,     0,  2713,  2714,     0,
       0,     0,     0,     0,     0,     0,  2722,  2723,     0,     0,
       0,     0,  2728,     0,     0,  2355,     0,     0,     0,     0,
     129,     0,  2738,  2739,     0,   130,     0,     0,     0,     0,
       0,     0,  2366,  2749,     0,  2750,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2371,     0,  2372,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2381,   122,     0,
    2383,  2384,  2385,  2386,  2388,     0,  2390,     0,     0,     0,
    2391,     0,     0,     0,     0,  2392,  2394,  2395,  2396,  2397,
    2399,     0,     0,  2400,  2401,     0,     0,     0,     0,  2403,
    2404,  2405,  2406,     0,     0,  2407,  2408,     0,     0,     0,
       0,     0,  2409,  2410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2217,     0,     0,   124,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   587,     0,  2271,     0,     0,     0,
       0,     0,  2277,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,   130,  1606,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2880,
       0,     0,  2881,     0,     0,  2883,     0,     0,     0,  2517,
       0,     0,  2520,     0,     0,  2892,     0,     0,     0,     0,
       0,   121,     0,  2525,  2901,     0,     0,     0,     0,     0,
       0,     0,     0,  2910,     0,     0,     0,     0,     0,  2529,
    2912,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2916,     0,     0,     0,     0,     0,  2919,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,  2548,     0,     0,     0,     0,     0,  2332,     0,     0,
       0,     0,  2337,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,  2359,     0,     0,     0,     0,     0,
    2365,     0,     0,     0,     0,     0,  1949,     0,     0,     0,
       0,     0,     0,     0,     0,  2591,     0,   124,     0,     0,
       0,   119,     0,     0,     0,     0,     0,  2382,     0,     0,
       0,     0,     0,     0,  2389,     0,     0,     0,  2607,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,  1607,  3017,     0,
       0,     0,     0,     0,     0,  3018,     0,     0,     0,     0,
       0,     0,     0,     0,  3020,     0,     0,     0,     0,     0,
     129,     0,     0,  3022,     0,   130,     0,     0,     0,  3025,
       0,     0,     0,  3027,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,  2642,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2650,
       0,     0,     0,     0,     0,     0,  2657,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2675,     0,
       0,     0,     0,     0,     0,     0,     0,  2684,     0,     0,
       0,  2686,     0,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2516,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,     0,  2530,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   130,     0,     0,
       0,     0,     0,     0,     0,     0,  2554,  2555,     0,     0,
       0,     0,     0,     0,     0,  2757,     0,     0,  2760,     0,
    2556,     0,     0,     0,     0,  2559,  2560,  2764,     0,     0,
       0,  2562,  2563,     0,   558,   559,     0,     0,     0,     0,
     560,     0,     0,  2777,     0,     0,  2780,     0,     0,     0,
       0,     0,     0,  2785,     0,     0,  2788,  2789,     0,     0,
       0,     0,     0,   561,   562,     0,     0,     0,     0,     0,
       0,     0,     0,   122,     0,  2599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2606,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2838,  2839,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2622,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2865,     0,     0,     0,   563,     0,     0,     0,     0,
    2639,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   564,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2658,     0,     0,     0,
       0,  2662,     0,     0,     0,     0,     0,  2667,     0,     0,
     565,     0,  2671,     0,     0,     0,  2674,     0,  2676,     0,
    2678,     0,     0,  2681,     0,  2683,     0,     0,   130,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,     0,     0,
       0,     0,  2921,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   566,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   567,  2942,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2953,     0,     0,
       0,     0,     0,     0,     0,   690,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,   568,
       0,   691,     0,     0,     0,     0,     0,     0,  3007,     0,
       0,     0,  3013,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2829,     0,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2841,     0,   692,     0,     0,     0,     0,  3030,
    3031,     0,  3033,     0,     0,     0,     0,  3035,  3036,     0,
       0,     0,     0,     0,  3039,     0,  1194,  1195,  1196,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2860,     0,     0,     0,     0,
       0,     0,  2867,     0,     0,   124,     0,     0,     0,  1197,
    1198,  3069,     0,  1199,     0,     0,  1200,     0,     0,     0,
       0,     0,     0,     0,  1201,   693,     0,     0,  1202,  2874,
       0,  2876,     0,     0,     0,     0,     0,     0,  1203,  1204,
       0,     0,     0,     0,  3093,     0,  1205,  1206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1207,     0,     0,
       0,     0,     0,     0,  1208,     0,     0,     0,     0,     0,
       0,     0,  1209,     0,     0,     0,  1210,  1211,     0,     0,
    1212,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2920,
    1213,     0,     0,     0,     0,  2924,     0,     0,     0,  2926,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1214,     0,  2932,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1215,     0,     0,     0,     0,     0,     0,   694,
       0,  3150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3161,     0,     0,  3164,  1216,
       0,     0,     0,  2987,  2988,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     0,     0,  1217,     0,  1218,     0,     0,
       0,   119,     0,  1219,  1220,  1494,  1495,  1496,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1221,  1222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1223,  1224,     0,   119,     0,     0,  1497,  1498,
       0,     0,  1499,   121,     0,     0,     0,     0,     0,  1500,
       0,     0,     0,  1501,     0,     0,     0,  1502,     0,     0,
       0,     0,     0,  1225,     0,  1226,     0,  1503,  1504,     0,
       0,     0,     0,     0,     0,  1505,     0,   121,  3049,  1227,
       0,  1228,     0,     0,     0,     0,  1506,     0,  1229,   119,
       0,     0,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1507,  1508,     0,     0,  1509,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1230,     0,     0,     0,   122,     0,     0,  1510,
       0,     0,   119,     0,   574,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1511,     0,     0,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,  1560,     0,     0,     0,     0,     0,
     122,  1512,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1513,     0,   124,  3125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3137,     0,
       0,     0,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,   130,     0,     0,
       0,     0,     0,     0,  1514,     0,  1515,   124,     0,  2380,
       0,     0,  1516,  1517,     0,     0,     0,   122,     0,     0,
       0,     0,     0,     0,     0,  3163,   129,     0,     0,     0,
    1518,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1519,     0,     0,     0,  3177,     0,     0,  3178,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1520,     0,  1521,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   130,  1522,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1523,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,     0,   130,     0,
       0,  1524,     0,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   575,   130,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   122,     0,
       0,     0,     0,     0,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     5,
       6,     0,     0,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,     0,     0,     0,     0,    19,     0,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    40,     0,     0,     0,     0,     0,     0,
      41,     0,     0,     0,    42,     0,   190,     0,    43,   191,
      44,    45,   192,    46,     0,     0,     0,     0,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,    48,     0,     0,   194,   195,   196,
      49,     0,     0,     0,     0,     0,     0,   197,     0,   198,
       0,     0,     0,     0,   199,     0,   200,   201,   202,    50,
      51,     0,     0,     0,   203,     0,   204,     0,     0,     0,
       0,     0,     0,    52,     0,    53,     0,     0,     0,     0,
       0,     0,    54,     0,     0,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,     0,     0,
     206,     0,     0,     0,    58,     0,     0,     0,     0,   207,
       0,   208,   209,     0,   210,   211,     0,     0,   212,     0,
       0,     0,   213,     0,   214,     0,     0,     0,     0,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,   217,     0,     0,     0,   218,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   221,
       0,   222,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   227,   228,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   229,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,     0,     0,   231,     0,   232,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   233
};

static const yytype_int16 yycheck[] =
{
       3,    56,   549,  1692,  1057,   805,   800,   801,    11,  1931,
    1706,  1933,  1162,    16,   317,  1165,    37,     5,    16,     4,
      26,     0,     5,     3,     4,     5,     4,     3,     4,    28,
       4,    27,     5,  1729,    37,     4,  1186,     4,    64,    34,
       3,     4,     4,    46,     4,     3,     4,  1045,  1046,  1047,
      34,     5,    55,     5,    11,    58,    50,    53,    61,     4,
      56,    20,    65,    13,    14,    68,     5,   106,    16,     5,
      73,    74,    68,   327,    77,    18,   167,    80,    81,    16,
      36,    84,     3,     4,    87,    88,     4,    12,    91,   503,
      34,  1195,   191,    96,     3,     4,     4,    93,    47,   513,
      42,    58,    47,     5,   125,    50,    21,    72,   111,   112,
     113,   114,   115,   116,     4,   111,    66,   123,    28,     5,
      61,   185,    79,   155,   113,   116,  1124,     3,     4,   132,
       4,     5,    16,   139,    16,   108,     3,     4,   219,    84,
      95,     5,   246,   116,     3,     4,    95,    92,   167,    15,
       4,   265,   109,     3,     4,   154,     3,     4,  3075,   155,
     259,   252,   118,  1353,   167,   131,    21,  1357,   177,     3,
       4,     4,     5,     4,   131,   192,     5,   198,   135,   200,
       5,   202,   203,    55,   201,     3,     4,   132,    38,    21,
     193,    16,   213,   150,    21,   198,   219,  1387,  1388,  1389,
     209,   186,     3,     4,    33,   286,   297,     4,     5,   230,
    3127,    21,   137,   102,   159,   210,     5,     3,     4,     3,
       4,    91,   177,   107,   213,     5,   210,    35,    15,   147,
     236,   139,   223,   122,   333,   171,   108,    38,   108,    72,
     304,    72,    96,   133,   154,   154,   350,   119,   254,   225,
     213,   342,   219,     4,    21,   213,   225,   219,   132,   225,
     299,    72,   138,    96,   233,   234,   216,   217,   300,   218,
     273,   294,    13,   218,   216,   231,   308,    61,   297,   133,
     152,    70,     4,   309,   287,   230,   172,   173,   343,   232,
     215,   200,    21,   284,   239,   240,  1096,   179,   148,   132,
     260,   132,   305,   306,   241,   274,   251,   171,   253,   250,
     269,   278,     4,   325,    66,   336,     4,   311,   321,   286,
     323,    72,   261,   156,   213,    66,    18,   235,   323,    66,
     333,   334,    39,   336,   337,   132,   339,   282,   259,   323,
       3,     4,   341,   297,    51,    66,   349,   148,   327,   297,
      72,   329,   302,   220,   290,   329,   230,   309,   273,   362,
     363,   337,   350,   313,   314,   239,   240,   350,    14,    15,
     350,     4,   357,   346,   328,    82,    22,   337,   321,   323,
     337,   132,   284,   386,    30,   348,   389,   390,   394,   392,
     348,   225,    38,   396,   397,   340,   282,   230,   396,   230,
     350,   338,    16,   399,   407,   408,   239,   240,   239,   240,
     132,   414,   357,   349,    60,   718,   419,   420,   273,   337,
    1220,   150,   391,     4,   427,     4,   290,   841,   431,   392,
     393,   341,    78,   230,   392,   393,    62,   224,  1238,    72,
     132,   273,   239,   240,   132,   390,   273,   450,   451,     4,
      13,    14,   397,   398,   457,   458,   459,   460,   461,   462,
     167,   464,    66,   273,   467,  2161,   340,   339,     4,  1467,
     337,  1621,   346,   259,  1624,   216,     5,  1475,   337,   230,
    1274,   502,   485,   357,    13,    14,   489,   337,   239,   240,
     337,   494,   495,   496,   497,   498,   499,    66,   501,   132,
     503,   504,   505,    66,  2200,   212,   273,   340,   230,   340,
     513,   514,  1306,   346,     3,     4,   390,   239,   240,   337,
     146,    96,   136,   397,   398,    69,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   337,    66,   230,     4,
     232,    66,   230,   340,   273,     4,  1650,   239,   240,    38,
     213,   239,   240,   132,    43,    49,   219,   390,     0,   390,
      27,   302,   395,   149,   397,   398,   397,   398,   571,   572,
     265,   115,   313,   325,   595,  1679,   190,   306,    72,     3,
       4,     3,     4,    43,   291,    95,   589,    49,   325,   340,
    1004,   172,   173,   390,   301,    89,   132,   230,  1702,   351,
     397,   398,    66,   266,   325,    70,   239,   240,    70,   350,
      72,     5,     3,     4,   351,    32,   671,   324,   340,     3,
       4,    43,   625,    66,    27,   332,     5,   241,   649,   321,
     351,   294,    43,   122,   260,  1049,    43,     3,     4,   390,
     221,   329,    64,   289,   351,  1835,   397,   398,   340,   275,
     154,   230,   340,   216,   217,   122,   162,   303,   304,   148,
     239,   240,   122,   116,    95,   668,    66,   177,   390,   133,
    2877,     5,     3,     4,   180,   397,   398,    61,   308,    13,
      14,     5,    61,     4,     4,   348,   103,   216,   217,   335,
     133,    27,    71,    86,   230,   189,   200,   283,   390,    72,
     122,   282,   390,   239,   240,   397,   398,   340,   763,   397,
     398,   122,     4,   716,   138,   122,  2638,  1517,     5,   122,
     187,   325,   348,   726,   338,     4,   270,   782,  1528,   392,
     393,   220,    66,   133,   177,   129,   382,   383,   384,   302,
      61,   387,   321,   287,   288,   207,   177,   351,   391,     4,
     313,   314,    95,   297,     5,    86,   325,   390,    66,    96,
     220,   340,    13,    14,   397,   398,   183,     4,    95,    61,
     223,   144,   138,   302,    11,    66,     5,   780,   172,   173,
      66,    27,   351,   429,   313,   314,   122,   350,   191,   318,
     127,    70,     4,     4,    49,  3002,   799,    52,   220,   802,
     325,  1170,   175,   196,   340,    95,   273,  3014,  1177,   220,
      66,   390,   274,   220,   154,    66,     4,    72,   397,   398,
      32,   350,   825,    66,   218,   133,   351,   830,   831,   832,
     833,   284,   259,   836,   177,   838,    91,   840,   841,   842,
      27,   335,   133,   303,   388,   389,    27,   133,   337,   313,
     177,   187,   279,   108,   390,    33,   259,   351,   325,   114,
     200,   397,   398,   325,     5,   196,   250,     5,   259,   286,
     313,   250,  2800,   335,   211,   292,   122,   133,   933,   220,
      13,    14,   216,   217,     4,     4,     5,   177,   282,  2039,
     133,   228,    69,   286,  2822,   268,   303,    66,  2826,    24,
      25,    20,  1955,     0,  2832,     3,     4,     4,    66,   331,
    2060,   166,  1171,   313,   917,   309,   919,     5,  1332,  1178,
    2070,   924,   925,  2073,   927,   928,   929,   930,   931,   250,
    2080,   129,   155,    66,   189,   122,  1934,   273,   115,    78,
      66,   122,   945,   946,    72,  2095,    65,   327,  2098,   952,
     953,   192,    30,    72,   327,   286,  2106,    66,   250,  2109,
      35,   298,   139,    66,   133,   216,   217,    72,   302,   181,
     973,   974,   975,   976,   977,   133,   979,     5,   981,   313,
     314,   106,   101,     5,   318,    13,    14,    13,    14,   325,
       5,    13,    14,  2947,     3,     4,   999,  1000,  1001,  1793,
    1003,  1004,  1005,    97,  1007,   313,   125,   133,  1029,   346,
     191,    15,  2966,   259,   172,   173,   350,  2945,  2946,    66,
     357,  2949,   313,  2951,   133,   144,  1029,   313,  1031,    69,
     133,     3,     4,     5,   246,  2139,  2964,  2965,    66,  1042,
      66,   160,  2970,  2971,    66,  2973,  1049,  1050,   167,  2977,
     305,   302,  1055,   192,  2982,  2983,   175,   313,  1472,   325,
      66,   273,   313,   314,   710,  2169,   266,   318,   326,  1072,
     313,    66,   259,  1076,    49,   115,    72,   300,   259,   334,
     335,    72,   728,   216,   217,   308,   133,  1090,  1091,  1092,
     168,    80,   347,   270,  2198,  1098,   351,    72,    66,   350,
    1103,  2291,  2292,  2293,  2294,  2295,  2296,  2297,  2298,  2299,
     287,   288,    97,  3041,    89,  1118,  3044,  1172,   237,   197,
      33,  3049,    32,   201,   282,    39,    30,   133,     5,   145,
      13,    14,    66,  3061,  1137,  1146,  3064,    51,   133,   237,
    3068,   280,   261,     4,   313,     3,     4,   266,     4,   268,
       5,    66,   291,     4,    91,   313,     4,    59,   804,     5,
    3114,    19,     4,   809,   101,   133,    27,  3121,    82,   302,
       4,   108,     3,     4,  1185,   191,     5,   296,   297,    40,
     313,   314,     5,    66,    42,   263,   305,   313,   216,   217,
     216,   217,    53,     5,   216,   217,    98,     4,    43,   133,
       5,     3,     4,    61,   313,     5,    67,    68,   327,     5,
     313,   388,   389,  1216,    22,     5,  3144,   350,   133,     4,
    3148,     4,     3,     4,  2328,  3179,     4,  3181,   237,   307,
     270,   213,   207,    64,  1237,     3,     4,   219,   316,   317,
    3168,    43,     4,   259,  1247,     5,    54,   287,   288,    57,
       3,     4,   110,   167,  3182,   157,     4,  3185,  3186,     3,
       4,  1264,   199,  1266,   168,  2954,   313,   386,  1271,  1272,
    1273,   181,   918,  2271,   302,    43,   302,   122,  1281,   106,
     302,  1284,    90,  1286,   266,   313,   314,   313,   314,    70,
     318,   313,   314,   197,     3,     4,   318,   201,   212,   274,
    1303,   133,  1305,     3,     4,     4,     5,   313,    22,   325,
    1313,  1314,   294,   121,  2464,   252,   124,    61,   313,   177,
     122,     5,   350,  2473,   350,  1328,  1329,     4,   350,  1332,
    1333,  1334,  2482,   216,   217,     4,   246,  1340,   984,  1342,
      54,     4,  1345,    57,  1347,   313,    60,     4,   388,   389,
     325,   145,   289,     4,   122,    64,     3,     4,  1413,   263,
     335,     5,   220,   273,    64,     4,   348,  2365,   629,    16,
     231,   632,   633,    48,   231,   220,    90,   291,    90,   313,
     282,   242,   243,   244,   245,   322,   225,   301,     4,    64,
    1393,  2389,   250,     3,     4,  1398,     4,   255,   313,  1402,
       4,  1404,  1405,   307,  1425,     4,  1409,   121,   266,     4,
     124,   393,   316,   317,    89,     3,     4,     4,    90,   302,
       4,     5,  1425,    11,  1427,     4,  1429,  1430,  1431,  1432,
     313,   314,  1435,  1436,   109,  1438,  1439,   351,  1441,     5,
    1443,     3,     4,     4,     3,     4,     5,     5,  1451,    11,
       3,     4,   220,   261,   129,  1458,  1477,   169,   133,  1462,
    1463,  1464,     3,     4,     5,   259,  2570,   350,     8,  1472,
    1473,    10,  2576,  1476,  1495,   336,     5,  2581,   308,   337,
     391,  1484,    43,  1486,     4,     5,  1489,   192,   296,   164,
     165,    45,    46,     4,     5,     4,     5,   169,     4,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   201,     4,     5,
       4,   325,   389,  1536,   192,  1538,    13,    14,  1541,  1542,
     397,  1544,   399,  1546,     4,   257,   258,   261,     4,  1552,
     491,   492,   227,  1556,   224,  1566,  1567,  1568,  2556,    22,
     272,   122,  1565,   238,    27,  1576,  1577,  1578,   224,     3,
       4,     4,  1583,     5,     5,  1586,  1587,  1588,  1152,  1153,
    1591,  1592,   296,  1594,  1595,   257,   258,   224,     4,    66,
      53,    54,   214,    56,    57,   214,     5,    72,  1244,    72,
     272,  2599,    72,    26,   259,    68,    29,   319,  2606,    43,
     260,   172,   173,   327,     5,     4,     4,  1628,  1629,    82,
      83,  1632,  1633,    37,     4,  1646,     4,    90,     4,    95,
      93,    13,    14,   308,   309,     3,     4,     5,     6,     7,
     194,   195,   224,     5,  1647,  1648,  1649,   319,   111,     3,
       4,     5,     6,     7,    95,    95,  1302,   120,   121,   220,
     221,   124,     3,     4,   108,     5,  1669,     8,     9,    10,
    1316,  1674,   226,     5,    95,     5,  2674,     4,  2676,     4,
    2678,     5,     5,  2681,    66,  2683,     3,     4,   122,     6,
       7,     4,   155,   319,  2798,     5,     4,  1700,  1701,     4,
     123,  2794,     5,   117,  2797,    16,  2799,    16,  1711,     4,
    2814,   386,     4,  1716,     4,  2819,   139,    66,     4,   106,
    1723,   282,  2815,  2816,     5,     5,    95,     4,   142,   143,
      95,    95,     5,   196,     5,  1738,    95,   151,     5,   216,
     217,  1744,  2835,     4,     4,  1748,     5,  1750,  1751,     5,
    1753,  1754,  1755,    37,  1757,     5,   179,  1760,  1761,  1762,
     174,  1764,  1765,  1766,  1767,  1768,  1769,  1770,  1771,     5,
     184,     4,  1775,  1776,  1777,  1778,     4,    70,     5,     5,
     129,     5,  1785,  1786,   133,    43,  1789,  1790,  1791,     4,
       4,     4,  1795,  1796,    49,    11,    72,    52,   261,     5,
    1446,  1447,    11,  2217,   267,  1808,  1809,     4,  1811,  1812,
       4,     4,    88,   236,    72,     5,     4,    72,     4,     4,
       4,    97,   285,   172,   173,   302,     5,     4,   177,     5,
     186,   254,   108,   296,   216,   217,   313,   314,     5,   177,
     177,   125,     4,  2841,     3,     4,     5,     6,     7,     5,
     108,     4,    41,   108,    41,   319,   321,   296,   116,   114,
     296,   329,     5,  2277,   122,   328,   329,     4,   144,   218,
       4,     4,     4,   350,  1895,     5,     5,     5,     5,     4,
    1883,     5,  1885,  1886,     5,     5,   144,  1890,   310,   352,
     310,   167,  1895,  1896,     5,  1898,  1899,  1900,     5,  1902,
    1903,     5,  1905,     4,  1907,  1908,     4,  1910,  1911,   167,
    1913,   166,  1915,   197,     5,   199,   200,     5,   202,   203,
     302,  1924,   100,  2337,     5,   273,     5,   185,   277,  1932,
     108,   313,   314,   282,  1937,  1938,   399,     5,   116,     5,
    1943,     4,     4,   116,     5,     5,  1967,   223,     4,  1952,
       5,   235,     5,   273,   273,   273,   134,     5,  1979,   116,
     309,     4,  1983,   141,   313,   223,    43,   273,   350,   273,
     254,   255,   116,     5,    43,   241,   260,   326,    58,   279,
     264,     5,     4,     4,   241,     5,  1989,     5,   241,   167,
     241,     4,   268,    60,     4,     4,  1642,     5,     5,    79,
     178,     5,     5,     5,   122,   122,     4,  3111,     5,     5,
     268,     5,  2015,  2016,     4,     4,    96,  2020,     5,  2030,
       5,   297,     5,  2026,     5,  1671,   284,     4,     4,   109,
    1676,  1677,     5,  2044,     5,     5,     5,    11,   322,   297,
       4,   325,     4,  2054,    11,   223,     5,     5,     5,     4,
     305,   131,   336,   231,     4,   135,     4,     4,     4,  1705,
       5,     4,     0,     5,   259,   273,   273,   343,   273,   345,
     150,   329,  1718,   273,   273,   359,   191,   273,     4,   334,
     335,  1727,  1728,   284,   224,   343,   237,   345,   346,     4,
      15,     4,   347,  1739,     4,     4,   351,     4,    23,     5,
       5,     5,     5,     5,     5,     4,   284,   310,     4,   273,
       5,     4,     4,     4,   354,  2126,     5,     5,   198,   297,
       5,     5,   354,   273,   273,     4,     4,     4,   386,     4,
       4,  2134,  2135,     4,  2137,     4,   354,   315,     4,     4,
    2554,  2555,   354,     5,  2558,  2559,     5,     5,  2562,  2563,
       5,   259,     4,   259,   259,     5,   259,   259,     4,   259,
       4,   102,     5,     4,   310,     5,     5,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,     4,    11,     5,     5,
       4,   350,     5,     5,     4,     4,  2986,     5,     5,     5,
       5,  2194,     4,  2196,     5,   479,     5,     4,   310,     5,
       5,     4,   350,     5,     5,     4,     4,     4,  2622,   493,
       5,     5,     4,  2216,  2217,     4,   310,     5,   502,  2222,
       5,     4,   490,     5,     5,     4,   400,     5,     4,     4,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
       5,     5,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
       4,  2254,  2255,  2256,     4,  2258,  2259,     4,  2261,     5,
    2263,  2264,  2265,     5,     5,     5,     5,     4,   350,     5,
       5,     5,     5,     4,  2277,  2278,     4,  3077,     5,     4,
     327,     5,     5,     5,     4,     4,   400,     5,     5,     5,
     574,   575,     5,     4,     4,  3137,     5,     5,     5,     5,
       4,     4,     4,   587,     5,     5,     5,  1161,   592,     5,
       4,   400,     5,     5,     5,     5,     4,   601,     4,   435,
       5,     4,     4,     4,     4,     4,  2329,     5,  2331,     5,
    2333,     5,  2335,     5,  2337,  2338,     5,  2340,     4,   327,
       5,     4,  2345,  2346,     4,  2348,  2349,     5,  2351,     5,
    2353,   276,  2373,     4,   279,     4,   400,     5,  2361,     5,
    2363,     4,     4,   338,  2367,     5,     5,  2370,  2782,     5,
       4,     4,     4,  2787,     4,   400,     5,     5,     5,     5,
       5,     5,     4,   400,     5,     4,     4,     4,     4,     4,
    3001,     5,     5,     5,  2415,     4,     4,  2809,     5,     5,
       5,     5,     4,     4,  2984,     5,     5,   691,   692,   693,
     694,     5,     5,     4,  2417,  2829,  2427,     4,   400,     5,
       4,     4,     4,     4,     4,     4,     4,     4,   403,     4,
       4,     4,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
    2515,     5,     5,     4,   400,     5,     5,     4,     4,     4,
       4,   400,     5,     4,  3077,     5,  2487,  2488,  2489,  2490,
    2491,     4,  2493,  2494,     5,     5,     5,  2498,  2499,  2500,
    2501,  2502,     4,  2504,  2505,     4,     4,     4,     4,     4,
       4,     4,  2148,     4,     4,  3073,     5,     4,   880,     5,
       5,     4,     4,     4,     4,     4,     4,     4,  2521,   803,
       5,     4,    -1,     5,     4,     4,    -1,     5,     4,     4,
    2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,
    2543,     5,  3089,  3090,     5,     5,  2549,     4,     4,    -1,
       5,  2554,  2555,  2199,     4,  2558,  2559,     5,     5,  2562,
    2563,  2564,  2565,  2566,  2567,  2568,  2569,     4,  2571,  2572,
    2573,     4,     4,     4,  2577,  2578,  2579,  2580,     4,  2582,
    2583,     4,  2585,  2586,  2587,     4,  2589,  2590,     5,  2592,
       4,     4,  2595,  2596,   569,     5,     5,     4,     4,    -1,
       5,   576,     5,     5,   579,     5,     4,    -1,     5,   584,
       5,     5,     4,   588,     4,    -1,  2619,     5,     5,  2622,
    2623,     5,    -1,    -1,  2627,    -1,    -1,    -1,    -1,  2632,
    2633,  2366,  2635,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2383,  2384,
    2385,    -1,    -1,  2388,    -1,  2390,  2391,    -1,    -1,  2394,
    2395,  2396,    -1,    -1,  2399,  2400,    -1,    -1,    -1,  2404,
      -1,  2406,  2407,    -1,  2409,    -1,    -1,    -1,    -1,    -1,
      -1,  2692,    -1,    -1,    -1,    -1,  2689,    -1,    -1,    -1,
    2701,  2702,  2703,  2704,  2705,    -1,  2707,  2708,   673,  2710,
    2711,  2712,  2713,  2714,   988,  2716,  2717,    -1,  2719,  2720,
    2721,  2722,  2723,    -1,  2725,  2726,    -1,  2728,  1002,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,  2738,  2739,    -1,
      -1,  1585,    -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,
      -1,    -1,    -1,  1597,    -1,    -1,    -1,    72,    73,    74,
      44,    -1,    -1,    47,    -1,    -1,    -1,  1041,  2761,    -1,
      -1,    -1,  2765,    -1,    -1,  1619,  1620,    -1,    -1,    -1,
      -1,    -1,  2775,  2776,    99,    -1,    -1,    -1,  2781,  2782,
      -1,    -1,  2517,  2786,  2787,  2520,    -1,   112,    -1,  2792,
    2525,    85,  2795,  2796,  2529,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,   103,
     104,    60,    -1,  2548,  2817,  2818,   110,    -1,  2821,    -1,
    2823,  2824,  2825,    72,  2827,    -1,  2829,  2830,    -1,    -1,
      -1,  2834,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2847,   139,   171,    -1,  1132,    -1,
      -1,   100,   101,    -1,  2857,    -1,    -1,    -1,    -1,   108,
      -1,    -1,   837,    -1,   158,    -1,    -1,   116,   193,   844,
      -1,    -1,    -1,    -1,    -1,  2878,    -1,   202,    -1,    -1,
      -1,  2892,   176,   177,    -1,   134,    -1,    -1,    -1,   183,
    2901,    -1,   141,    -1,    -1,   144,    -1,   222,    -1,  2910,
      -1,  2912,    -1,    -1,    -1,  2916,    -1,  2642,    -1,    -1,
      -1,    -1,    -1,    -1,   208,    -1,    -1,  2920,   167,    -1,
      -1,    -1,  2925,   248,  2927,    -1,    -1,    -1,    -1,   178,
    2933,    -1,    -1,    -1,    -1,  1219,    -1,    -1,    -1,    -1,
    2675,    -1,    -1,    -1,    -1,  2948,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2600,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,  2967,   290,    -1,    -1,    -1,    -1,
     295,  2974,    -1,  3028,   223,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,   312,    -1,    -1,
     315,  1275,    -1,    -1,    -1,    -1,    -1,    -1,  3001,    -1,
      -1,  1285,    -1,    -1,    -1,    -1,    -1,  3018,    -1,  3020,
      -1,  3022,   987,    -1,  3025,    -1,  3027,   311,    -1,    -1,
      -1,   996,  2757,    -1,    -1,    -1,    -1,    -1,    -1,  3032,
      -1,   325,    -1,    -1,  3037,   284,    -1,  3040,    -1,    -1,
      -1,    -1,  2777,    -1,  3047,    -1,    -1,    -1,   297,    -1,
    2785,    -1,    -1,  2788,  2789,  3058,    -1,    -1,    -1,    -1,
    3063,    -1,    -1,   357,    -1,    -1,   315,    -1,  1043,  1044,
      -1,    -1,    -1,  1048,    -1,    -1,  1051,    -1,   327,    -1,
     329,    -1,    -1,    -1,    -1,  3106,  3089,  3090,  1063,    -1,
      -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,  3115,    -1,    -1,    -1,  3119,    -1,  3139,  3122,
      -1,  3142,    -1,  1407,    -1,    -1,    -1,    -1,    -1,    -1,
    3133,  3134,  3135,  3136,    -1,    -1,    -1,   386,    -1,    -1,
      -1,  1425,  3145,    -1,    -1,    -1,  3149,    -1,    -1,    -1,
      -1,    -1,    65,  3156,    -1,  3158,    -1,    -1,    -1,    72,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      83,    -1,  1456,    -1,    -1,    88,    -1,    19,    91,    -1,
      -1,    -1,  1466,    -1,    97,    -1,  2921,    -1,   101,    -1,
    2836,    -1,    -1,    -1,  2840,   108,  2050,    -1,    -1,  1483,
      -1,    43,    -1,   116,  2058,  2059,    -1,  2942,    -1,    -1,
      -1,  1495,   125,    -1,  2068,  2069,  1500,    -1,  1193,    61,
      -1,    -1,    -1,    -1,  2078,  2079,    -1,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2093,
    2094,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2104,  2105,    -1,    -1,   167,    -1,    -1,  2111,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2121,   110,    -1,
      -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,  3030,  3031,    -1,  3033,    -1,
    3035,  3036,    -1,    -1,  3039,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,    -1,    -1,  2962,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,  2990,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   266,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,  1646,    -1,    -1,    -1,  3101,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,   289,    -1,   220,    -1,
      -1,    -1,    -1,    -1,   297,    -1,    -1,    -1,   230,    -1,
      -1,  1675,   305,     3,     4,    -1,    -1,   239,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    19,
      -1,    -1,    -1,   255,   327,  3150,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1707,    -1,    -1,  1710,    -1,    -1,   342,
     343,  1715,   345,    -1,    -1,    -1,  1411,  1721,  1722,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1730,    -1,    -1,    -1,
      -1,    61,    -1,  1737,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   386,  1449,    -1,    -1,    -1,    -1,    -1,
    1455,    -1,    -1,  3129,    -1,    -1,    -1,    -1,    -1,    -1,
    1465,    -1,    -1,    -1,    -1,    -1,  1780,    -1,   340,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1792,    -1,
      -1,    -1,    -1,    -1,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,    -1,    -1,    -1,   390,    -1,
      -1,    -1,    -1,    -1,    -1,   397,   398,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,
      -1,     3,     4,    -1,  2428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2438,  2439,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2449,   177,    -1,    -1,    -1,
      -1,   182,    -1,    -1,  2458,    -1,    -1,    -1,  2462,  2463,
      -1,  1895,    -1,    -1,    -1,    -1,    -1,  2471,  2472,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2480,  2481,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,  1919,    -1,    -1,    -1,    -1,
     250,    -1,  2496,  2497,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,  1936,  2507,    -1,  2509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1949,    -1,  1951,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1961,   110,    -1,
    1964,  1965,  1966,  1967,  1968,    -1,  1970,    -1,    -1,    -1,
    1974,    -1,    -1,    -1,    -1,  1979,  1980,  1981,  1982,  1983,
    1984,    -1,    -1,  1987,  1988,    -1,    -1,    -1,    -1,  1993,
    1994,  1995,  1996,    -1,    -1,  1999,  2000,    -1,    -1,    -1,
      -1,    -1,  2006,  2007,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1717,    -1,    -1,   177,    -1,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,     4,    -1,  1781,    -1,    -1,    -1,
      -1,    -1,  1787,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   255,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2693,
      -1,    -1,  2696,    -1,    -1,  2699,    -1,    -1,    -1,  2133,
      -1,    -1,  2136,    -1,    -1,  2709,    -1,    -1,    -1,    -1,
      -1,    61,    -1,  2147,  2718,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2727,    -1,    -1,    -1,    -1,    -1,  2163,
    2734,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2745,    -1,    -1,    -1,    -1,    -1,  2751,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,  2195,    -1,    -1,    -1,    -1,    -1,  1892,    -1,    -1,
      -1,    -1,  1897,    -1,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,  1929,    -1,    -1,    -1,    -1,    -1,
    1935,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2259,    -1,   177,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,  1962,    -1,    -1,
      -1,    -1,    -1,    -1,  1969,    -1,    -1,    -1,  2282,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,  2882,    -1,
      -1,    -1,    -1,    -1,    -1,  2889,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2898,    -1,    -1,    -1,    -1,    -1,
     250,    -1,    -1,  2907,    -1,   255,    -1,    -1,    -1,  2913,
      -1,    -1,    -1,  2917,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,  2358,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2373,
      -1,    -1,    -1,    -1,    -1,    -1,  2380,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2411,    -1,    -1,
      -1,  2415,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2131,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,    -1,    -1,    -1,  2164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2201,  2202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2519,    -1,    -1,  2522,    -1,
    2215,    -1,    -1,    -1,    -1,  2220,  2221,  2531,    -1,    -1,
      -1,  2226,  2227,    -1,    71,    72,    -1,    -1,    -1,    -1,
      77,    -1,    -1,  2547,    -1,    -1,  2550,    -1,    -1,    -1,
      -1,    -1,    -1,  2557,    -1,    -1,  2560,  2561,    -1,    -1,
      -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,  2270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2281,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2601,  2602,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2334,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2655,    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,
    2355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2381,    -1,    -1,    -1,
      -1,  2386,    -1,    -1,    -1,    -1,    -1,  2392,    -1,    -1,
     237,    -1,  2397,    -1,    -1,    -1,  2401,    -1,  2403,    -1,
    2405,    -1,    -1,  2408,    -1,  2410,    -1,    -1,   255,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,    -1,    -1,
      -1,    -1,  2756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,  2790,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2801,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,    -1,   386,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,  2862,    -1,
      -1,    -1,  2866,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2591,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2607,    -1,   126,    -1,    -1,    -1,    -1,  2923,
    2924,    -1,  2926,    -1,    -1,    -1,    -1,  2931,  2932,    -1,
      -1,    -1,    -1,    -1,  2938,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2650,    -1,    -1,    -1,    -1,
      -1,    -1,  2657,    -1,    -1,   177,    -1,    -1,    -1,    53,
      54,  2975,    -1,    57,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,   197,    -1,    -1,    72,  2684,
      -1,  2686,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,  3008,    -1,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,    -1,    -1,
     124,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2754,
     144,    -1,    -1,    -1,    -1,  2760,    -1,    -1,    -1,  2764,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,  2780,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   331,
      -1,  3125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3139,    -1,    -1,  3142,   223,
      -1,    -1,    -1,  2838,  2839,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    -1,    -1,   259,    -1,   261,    -1,    -1,
      -1,    19,    -1,   267,   268,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,    -1,    19,    -1,    -1,    53,    54,
      -1,    -1,    57,    61,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    -1,   327,    -1,   329,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    61,  2953,   343,
      -1,   345,    -1,    -1,    -1,    -1,   101,    -1,   352,    19,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   120,   121,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   386,    -1,    -1,    -1,   110,    -1,    -1,   144,
      -1,    -1,    19,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
     110,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   206,    -1,   177,  3069,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3093,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,    -1,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   261,   177,    -1,   102,
      -1,    -1,   267,   268,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3140,   250,    -1,    -1,    -1,
     285,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,  3161,    -1,    -1,  3164,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,   329,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,   255,   341,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   352,    -1,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,    -1,   255,    -1,
      -1,   386,    -1,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   331,   255,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   110,    -1,
      -1,    -1,    -1,    -1,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,    44,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   158,    -1,    -1,
      -1,   162,    -1,    -1,    -1,   166,   167,    -1,    -1,    -1,
      -1,   172,   173,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,
      -1,    -1,   203,   204,   205,    -1,    -1,   208,   209,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   249,   250,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,   275,    -1,    44,    -1,   279,    47,
     281,   282,    50,   284,    -1,    -1,    -1,    -1,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,   305,    -1,    -1,    75,    76,    77,
     311,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,   330,
     331,    -1,    -1,    -1,   102,    -1,   104,    -1,    -1,    -1,
      -1,    -1,    -1,   344,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,   353,    -1,    -1,   356,   357,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   387,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,   167,
      -1,   169,   170,    -1,   172,   173,    -1,    -1,   176,    -1,
      -1,    -1,   180,    -1,   182,    -1,    -1,    -1,    -1,    -1,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208,   209,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,   284,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,   355,    -1,   357,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    44,    47,    50,    64,    70,    71,    75,    76,    77,
      85,    92,    94,    95,   104,   105,   130,   140,   153,   158,
     162,   166,   167,   172,   173,   176,   182,   188,   199,   203,
     204,   205,   208,   209,   221,   225,   247,   249,   250,   262,
     264,   271,   275,   279,   281,   282,   284,   289,   305,   311,
     330,   331,   344,   346,   353,   356,   357,   387,   395,   402,
      72,    11,    58,    79,   109,   131,   135,   150,   337,   439,
       3,     4,   225,   337,   403,   444,   213,   219,   266,   294,
     348,   393,   446,   327,     4,    43,   122,   172,   173,   220,
     221,   282,   451,    30,   168,   197,   201,   263,   307,   316,
     317,   418,   453,    91,   101,   108,   199,   252,   289,   322,
     454,    43,    64,   122,   220,   331,   403,   464,     4,    19,
      43,    61,   110,   132,   177,   220,   230,   239,   240,   250,
     255,   340,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   390,   397,   398,   405,   413,   414,   415,   466,    35,
     467,   405,    47,    50,    84,    92,   159,   218,   251,   253,
     282,   357,   404,   405,    70,   403,   469,   162,   180,   470,
      44,    47,    50,    71,    75,    76,    77,    85,    87,    92,
      94,    95,    96,   102,   104,   139,   158,   167,   169,   170,
     172,   173,   176,   180,   182,   188,   208,   209,   213,   221,
     225,   247,   249,   256,   282,   284,   311,   330,   331,   341,
     349,   355,   357,   395,   471,    91,   108,   522,    19,    44,
      47,    85,    92,   103,   104,   110,   139,   158,   176,   177,
     183,   208,   255,   311,   325,   357,   525,    72,   405,    66,
     325,   351,   611,    66,   325,   351,   610,    96,   127,   211,
     228,   298,   346,   357,   531,    15,     4,    49,    52,    72,
      91,   108,   114,   166,   189,   305,   334,   335,   347,   351,
     592,    26,    29,   123,   139,   179,   236,   254,   534,   265,
     553,     5,    72,    96,   156,   346,   395,   405,   554,     5,
     555,    62,   146,   260,   275,   348,   572,    49,    70,    72,
     207,   274,   325,   335,   593,   325,   609,    72,   231,   389,
     397,   399,   594,    42,   220,   266,   337,   403,   413,   415,
     595,     5,   346,   357,   405,   598,    78,   192,   280,   291,
     599,     4,   600,    96,   572,     4,    70,   607,    66,   325,
     351,   608,   220,   337,   403,   612,    26,   123,   139,   236,
     254,   394,   614,    55,   108,   119,   152,   339,   636,   637,
       4,    39,    51,    82,   167,   212,   291,   301,   324,   332,
     351,   432,     4,   139,   235,   638,   337,   403,   640,    15,
      23,   276,   279,   414,   641,   265,   645,   337,   403,   646,
       0,     5,   405,    64,   403,   440,   308,     5,     4,   337,
     403,   441,     5,    34,   323,   442,   138,   403,   443,   391,
     138,   403,   445,   403,     4,   219,   278,   286,   449,   213,
     348,   392,   393,   403,   448,   405,   154,   200,   447,   225,
     403,    86,   196,   286,   403,   450,     5,   403,   403,   403,
       4,   172,   173,   221,   282,   452,     4,   403,   403,     5,
     261,   455,     4,    33,   456,     5,   457,     5,   461,     5,
      33,   462,     4,    70,   463,   403,     8,     9,    10,   403,
     409,   410,   411,   412,   403,   403,    43,   122,   220,   403,
     465,   403,   220,   413,   415,   403,    37,   117,   142,   143,
     151,   174,   184,   420,   403,     4,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   129,     5,    72,    58,
      79,    96,   109,   131,   135,   150,   198,   474,   131,   225,
     476,   213,   219,   266,   294,   348,   392,   393,   403,   458,
     477,   327,   480,   192,   481,   192,   201,   483,    71,    72,
      77,   100,   101,   192,   212,   237,   311,   322,   386,   413,
     485,   403,   415,   488,    64,   331,   413,   489,   320,   413,
     415,   490,    35,   491,   413,   415,   492,     4,   413,   415,
     493,    48,    64,    89,   109,   129,   133,   164,   165,   227,
     238,   308,   309,   386,   497,   246,   350,   503,    72,     5,
      97,    66,   325,   351,   511,    66,   325,   351,   510,     4,
      96,   133,   495,     5,    71,   415,   494,    15,    49,    72,
      89,   189,   335,   351,   504,   572,    49,    72,    89,   207,
     274,   325,   335,   505,   325,   509,    72,   266,   507,   326,
      66,   325,   351,   508,    21,   150,   273,   306,   512,    39,
      51,    82,   167,   212,   291,   301,   351,   513,   415,    97,
      15,   224,   520,   413,   523,    72,    80,   526,    33,   527,
      47,    95,   218,   528,   167,   252,   297,   342,   529,   413,
      17,    63,   126,   197,   331,   413,   530,     5,     5,   171,
     290,   349,   413,     4,     5,   171,   290,   413,     4,     4,
     219,   533,     5,     4,     4,   133,   403,     4,    49,    52,
      72,   108,   114,   166,   305,   334,   335,   347,   351,    72,
      73,    74,    99,   112,   128,   161,   171,   193,   202,   222,
     248,   290,   295,   312,   315,   417,     5,     4,   403,   405,
       5,   172,   173,   282,   535,     5,   550,     5,   537,     5,
     129,   172,   173,   218,   282,   309,   538,   102,   122,   213,
     552,     5,   549,     5,   309,   551,     4,     5,   405,   405,
     403,   403,     5,     4,     5,    20,    65,    72,    81,    83,
      88,    91,    97,   101,   108,   116,   125,   144,   167,   185,
     198,   199,   223,   252,   266,   268,   284,   289,   297,   305,
     327,   342,   343,   345,   386,   556,   417,     5,     4,   225,
     233,   234,   274,   391,   416,   403,   413,   403,   413,     5,
     403,    43,   122,   403,   597,   405,   403,   413,   415,   596,
     403,   420,   403,     4,   414,    59,    98,   157,   282,   601,
       4,     4,   403,     4,   167,   297,   602,     5,   413,     4,
      43,   122,   403,   613,   403,   106,    66,   133,   172,   173,
     282,   313,   616,   133,   635,    66,   129,   133,   172,   173,
     177,   218,   277,   282,   309,   313,   326,   617,   618,    66,
     133,   313,   634,     5,    66,   133,   313,   615,     4,    36,
     118,   231,   606,    72,   405,   435,    72,   405,   436,    72,
     405,   437,    12,   137,   215,   605,   403,    18,   232,   321,
     405,   433,     4,   403,   259,   403,   438,   403,    64,   309,
       4,   403,   403,     4,   260,   337,   644,     4,   329,   642,
       4,   329,   643,     4,   420,   138,   403,   647,   403,   403,
       4,     5,   403,    11,   403,   403,   405,   403,    32,   103,
     183,   286,   292,   419,   419,     4,   225,   403,   403,     4,
       4,     4,   403,   403,   403,   403,   403,   403,     4,   403,
       4,   403,     4,     4,     4,     5,     5,   413,     5,     5,
      70,   403,   403,   409,   411,   411,   413,   403,   403,   403,
     403,   403,   403,   403,   413,   415,   412,   403,   403,   412,
     403,     5,   308,   113,   213,   475,   391,   219,   286,   478,
     192,    86,   196,   286,   479,   154,   200,   459,   459,     4,
     482,     4,   484,   219,   294,   486,   201,   487,   192,     4,
     420,   403,   403,   413,   413,   420,   420,   420,   413,   420,
     403,   413,     4,   500,     4,   415,   498,   224,     4,   186,
     357,   499,   224,   413,     4,   147,   337,   502,     5,     5,
     472,     4,   224,   149,   283,   406,   403,     4,   506,   506,
     506,   506,     4,     5,    20,    65,    72,   101,   125,   144,
     160,   167,   175,   237,   261,   266,   268,   296,   297,   305,
     327,   386,   566,   415,   214,   214,    72,   516,    72,   517,
      72,   518,    18,   232,   321,   514,   259,   519,   403,     5,
     473,   260,   521,   414,   420,     5,   413,   413,   413,   413,
       4,     4,     4,   405,     4,     4,   224,   403,   417,     5,
     403,   405,    13,    14,    66,   216,   217,   302,   313,   314,
     350,    95,    95,    95,     5,     5,     5,    13,    14,    66,
     216,   217,   302,   313,   314,   318,   350,    95,    95,   177,
      95,   177,   177,   182,   414,   541,   546,    95,   177,     5,
     539,     4,     4,    13,    66,   216,   302,   313,   350,     5,
       5,     4,   403,   414,    20,    21,    22,    53,    54,    57,
      60,    68,    72,    82,    83,    90,    91,   101,   108,   116,
     120,   121,   124,   144,   167,   196,   223,   259,   261,   267,
     268,   284,   285,   296,   297,   327,   329,   343,   345,   352,
     386,    72,    88,    97,   108,   144,   167,   223,   268,   297,
     343,   345,   319,     4,    32,   181,   246,   273,   559,     5,
      69,   115,   270,   287,   288,   388,   389,   565,   108,   557,
       4,    16,   297,   563,    43,   122,   220,   564,     4,     5,
      16,   241,   338,   403,   297,   565,   573,   139,   565,   574,
      38,    43,   122,   148,   220,   337,   403,   575,   413,   405,
     100,   108,   116,   134,   141,   167,   178,   223,   231,   284,
     297,   315,   578,    43,   122,   220,     5,   297,   328,   582,
      16,   136,   190,   241,   338,   583,   329,   405,   584,     5,
     108,   116,   346,    16,    16,     4,   403,   403,   403,   403,
     403,   403,   420,   403,   403,   412,   403,     4,   420,     4,
      43,   122,   220,   303,   603,    43,   122,   220,   303,   604,
       4,   106,     5,     5,    95,    95,    95,     4,     5,     5,
      95,     5,    95,   177,    95,   177,   618,    66,   133,   177,
     313,   622,    66,   133,   313,   633,    95,   177,    66,   133,
     313,   620,     4,    66,   133,   313,   619,     5,     5,     4,
       5,     5,     4,     4,     5,     5,     5,   403,   321,   405,
     434,   403,   403,   403,   403,   403,     4,   403,   639,   403,
     403,   414,    70,     4,     4,     5,     4,     4,     5,     4,
     106,   299,   421,   403,   403,    11,     5,    11,   403,   403,
      11,     4,    11,     4,     4,   403,   403,   403,   403,   403,
       4,   403,     5,   403,     4,   405,     4,     4,   420,   413,
       4,   420,   403,   403,   403,   413,   403,   412,   403,   403,
       5,     5,   403,   415,   403,   413,   403,   420,   420,   421,
     421,   421,   420,   412,   403,   420,   403,   406,   501,   186,
       5,     4,   420,   177,   177,     4,     5,     4,     4,   403,
     496,    41,    41,   403,    20,    21,    22,    53,    54,    57,
      64,    68,    72,    82,    83,    90,   101,   120,   121,   124,
     144,   167,   196,   206,   259,   261,   267,   268,   285,   297,
     327,   329,   341,   352,   386,    72,   144,   175,   268,   327,
     319,    32,   181,   246,   273,   567,   403,   237,   403,   568,
      16,   403,   296,   578,   296,   237,   403,   569,   329,   570,
      16,   107,   403,   321,   515,   403,     5,   421,     4,     4,
      61,   413,     4,     5,   532,   403,     5,     5,     5,   177,
     209,   425,   425,   185,   304,   423,     4,     4,     5,     5,
     536,   536,   536,     5,   310,   310,     5,     5,     5,    16,
     179,   424,   424,   423,     4,     4,   423,     5,     5,   540,
       5,   547,     5,   548,   547,   548,   182,   385,   414,   544,
       5,   543,     5,   547,   548,     5,    13,    14,    66,   216,
     217,   302,   313,   314,   318,   350,     4,     4,     5,     5,
     425,   423,     4,     5,     5,   420,    90,   169,   257,   258,
     272,   319,   429,     6,     7,   403,   408,   273,   273,   273,
     116,    43,    72,   108,   116,   122,   144,   167,   185,   223,
     268,   284,   297,   329,   343,   345,   346,   386,   558,   273,
       5,    27,   122,   187,   273,   325,    28,   154,   341,   116,
      22,    54,    57,    90,   121,   124,   261,   296,     4,    22,
      54,    57,    60,    90,   121,   124,   261,   296,   327,    43,
     273,   273,   116,     5,   241,    27,   122,   259,    38,   148,
     337,   403,   155,   300,   308,   259,   279,   413,   578,    43,
     145,   259,   325,   279,   241,     5,     5,   284,    27,   122,
     259,     4,     5,     5,   241,    38,   148,   337,   403,   578,
     241,    60,   405,     4,     4,   403,     5,   350,    22,    27,
      53,    54,    56,    57,    68,    82,    83,    90,    93,   111,
     120,   121,   124,   155,   196,   261,   267,   285,   296,   328,
     329,   352,   399,   560,     4,   403,   403,   403,   403,   403,
     565,   413,     5,     4,     5,   403,   403,   413,   403,   405,
     403,   403,   565,     5,     5,   403,   403,   405,     5,    16,
       5,     5,   403,   403,   412,   403,   403,     4,   403,   403,
     122,   403,   403,   122,     4,    45,    46,   194,   195,   226,
     431,   431,    66,   133,   313,   630,    66,   133,   313,   627,
      66,   133,   313,   624,   431,     5,    66,   133,   313,   621,
      66,   133,   313,   632,    66,   133,   313,   631,    66,   133,
     313,   629,    66,   133,   313,   628,     5,     5,    66,   133,
     313,   623,     4,     5,     5,     4,    66,   133,   313,   626,
      66,   133,   313,   625,     5,     5,     4,     5,     5,     4,
     431,   431,   431,   403,   403,   403,   403,   403,     4,   413,
     403,   420,   414,     5,     5,    11,   403,   413,   415,   403,
      11,   403,   403,   403,    64,   403,     4,   403,   403,     4,
     403,   403,     5,   403,     5,   403,    50,   311,   460,     5,
     405,   405,   420,     4,   403,     4,     4,     4,   420,   413,
     403,   403,   403,   403,   420,   413,   421,   412,   403,     4,
     421,   403,     4,   415,     5,    24,    25,   106,   422,     4,
     413,   403,   403,     4,   403,     5,    90,   169,   257,   258,
     272,   319,   413,   415,   273,   273,   273,    21,   273,   413,
     273,    27,   122,   187,   273,   325,    28,   154,   341,    21,
     273,   273,   273,    21,   273,    27,   122,   191,   259,   191,
     155,   300,   308,   259,   191,   259,   333,   578,   145,   191,
     259,   325,     4,   284,    27,   122,   191,   259,   578,   237,
      16,   396,   403,   403,   403,   403,   403,   403,   224,   403,
     403,    20,   269,   524,     4,     4,   403,   425,   425,   425,
       4,   425,   425,   425,    13,    14,    66,   216,   217,   302,
     313,   314,   350,   425,   424,   425,   425,   425,   425,   425,
       4,   425,   425,     4,   424,    13,    14,    66,   216,   217,
     302,   313,   314,   350,     5,    13,    14,    66,   216,   217,
     302,   313,   314,   318,   350,    13,    14,    66,   216,   217,
     302,   313,   314,   350,     5,   542,     5,   545,     5,     5,
      13,    14,    66,   216,   217,   302,   313,   314,   318,   350,
       5,    13,    14,    66,   216,   217,   302,   313,   314,   318,
     350,   310,     5,     5,     5,   424,   424,   423,     4,     4,
     423,     5,     4,     4,   425,   425,     4,   425,   425,     5,
     405,   413,   415,     5,   403,   403,     5,   403,     5,   408,
     116,   223,   284,   116,   223,   284,     5,   403,   405,     4,
      27,    40,    53,    67,    68,   231,   242,   243,   244,   245,
     336,   426,     5,   403,   413,   405,   405,     5,     5,   408,
     273,   273,    21,   273,    21,   273,   273,    21,   273,   354,
     354,     4,     4,     4,     4,   558,     4,     4,     4,   354,
     354,     4,     5,     4,   403,     5,   403,     5,   408,   405,
     426,   413,   413,   403,     5,    27,    53,    56,    68,    93,
     111,   155,   399,   427,     4,   413,   403,   420,   405,     5,
     413,   413,   403,   405,   405,   426,   413,   413,   403,   405,
       5,   403,     5,   403,   259,   259,   403,   403,   259,   403,
     259,   403,   403,     4,   561,   403,   259,   259,   403,   403,
     403,   259,   403,    61,   403,   403,   403,    61,   403,     5,
     350,   403,   562,   403,   403,   259,   403,   403,   403,   403,
     413,   420,     5,     4,     4,   403,   403,   420,   403,   403,
     403,   413,   565,   403,   403,     5,     4,   403,   403,   403,
     403,     5,     5,     4,     5,     5,     4,     5,     5,     4,
     431,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   403,   403,
     403,   403,   420,   403,   413,   415,   403,   420,   403,   403,
     403,   403,   403,     5,   403,   403,   403,     4,   403,   403,
       5,   403,     5,   403,     4,   413,     4,     4,   403,   420,
     201,   418,   403,   418,   421,   420,   413,   403,   403,     4,
     403,   413,   413,   403,   406,     5,     5,     5,     5,     5,
     102,   413,   420,   413,   413,   413,   413,   415,   413,   420,
     413,   413,   413,   415,   413,   413,   413,   413,   415,   413,
     413,   413,   403,   413,   413,   413,   413,   413,   413,   413,
     413,   102,   403,   403,     4,   403,     5,   403,   425,     5,
       5,     5,   423,     4,     4,     5,   425,   424,     4,   425,
       5,     5,     5,   424,   424,   423,     4,     4,     5,   310,
       5,     5,     5,   424,   424,   423,     4,     4,   423,     5,
       5,     5,     5,   424,   424,   423,     4,     4,     5,    13,
      14,    66,   216,   217,   302,   313,   314,   350,    13,    14,
      66,   216,   217,   302,   313,   314,   350,    13,    14,    66,
     216,   217,   302,   313,   314,   350,   310,     5,     5,     5,
     424,   424,   423,     4,     4,   423,     5,   310,     5,     5,
       5,   424,   424,   423,     4,     4,   423,     5,   424,     4,
       4,   424,     4,     4,   425,     5,   420,   413,   403,   403,
     413,   403,     5,   408,     5,   413,   405,   426,     5,   413,
     420,     5,   408,   403,   403,   403,   403,   403,   403,   403,
     403,   403,     4,     4,     5,     4,     4,   403,   413,   403,
       5,   408,   405,   426,   420,   420,   420,   403,   412,   420,
     420,   403,   420,   420,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   571,   579,   403,   403,   403,   403,
     403,   403,   403,   403,   350,   403,   403,   403,   350,   403,
     403,   413,     5,   403,   403,   403,   403,     4,     4,   420,
     421,     5,     5,   412,   403,     4,   420,   413,     4,   431,
     431,   431,   431,   431,   431,   431,   431,   431,   408,   403,
     403,   403,   420,   403,   412,   403,   403,    11,     5,     5,
     403,   403,   403,   403,     5,   403,     4,   403,     4,   420,
       4,     4,   413,   403,   403,   421,   422,   403,     5,   403,
     413,   415,     5,     5,     5,     5,     5,   413,   420,   422,
     422,   422,   420,   422,   421,   422,   422,   420,   422,   422,
     422,   420,   422,   422,   420,   413,   420,   422,   420,   422,
     422,   420,   422,   420,   413,     4,   413,   415,     5,   403,
       4,   425,   424,     4,   424,   424,     4,     4,   424,     4,
     424,     5,     5,     5,   424,   424,   423,     4,     4,     5,
       5,     5,     5,   424,   424,   423,     4,     4,     5,     5,
       5,     5,   424,   424,   423,     4,     4,     5,   424,   425,
     425,   425,   425,   425,     4,   425,   425,     4,   424,   424,
     425,   425,   425,   425,   425,     4,   425,   425,     4,   424,
     424,     4,     4,     4,   414,   422,     4,   413,   422,   403,
     413,     4,   422,   422,   413,     4,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   413,   422,   403,
     413,     4,   412,   412,   421,   413,   412,   412,   413,   413,
     412,   412,   403,   403,   403,   403,   403,   403,   408,   403,
     403,   403,    60,    72,   101,   144,   327,   329,   386,   576,
     577,   578,   590,   591,   408,   403,   403,   403,   403,   408,
     403,   403,     5,   403,   403,   403,     5,   403,   403,   420,
     403,   350,   407,   408,   403,   403,   421,   405,   413,   413,
     421,   420,     4,   403,   412,   403,    64,   403,     5,     5,
       4,     4,   403,   403,     4,   403,     4,   418,   422,     5,
     420,     4,     5,     4,     5,   413,     5,   420,   421,   422,
     421,   421,   421,   421,   420,     5,   420,     4,   403,   425,
     424,   424,     4,   424,   425,   425,   425,   425,   425,     4,
     425,   425,   424,   425,   425,   425,   425,   425,     4,   425,
     425,   424,   425,   425,   425,   425,   425,     4,   425,   425,
     424,   425,   424,     4,   425,   425,   424,     4,   425,   424,
     420,   413,   422,     4,   420,   403,   420,   403,   403,   403,
     422,     4,   420,   403,   412,     5,   350,   422,   403,   412,
     422,   422,   413,   403,     4,   428,   428,   403,   403,   428,
     408,   428,   579,   413,   400,   400,   400,   400,   400,   400,
     400,   577,   400,   408,   428,   428,   403,   403,   408,     4,
       5,   403,   579,   403,   403,   403,   579,   403,   412,   403,
       5,   579,   403,   428,   405,   580,   581,   420,   420,   405,
     421,     4,     5,   403,     5,     4,     4,     4,     4,     4,
       4,   403,     4,    34,   210,   323,   468,   413,     5,    34,
     210,   323,   430,   413,     4,   468,   403,   424,   424,   425,
     424,   425,   424,   425,   425,   424,   425,   424,   403,   422,
     413,   413,   403,   413,   403,   413,   413,   403,     5,   413,
     422,     4,   579,   579,   407,   403,   579,     4,   579,   420,
     558,     5,     4,     5,     5,     5,     4,   405,     4,   579,
     579,   407,   403,     4,     5,   579,   579,   579,   403,   413,
     579,   579,   579,   580,   587,   588,   578,   585,   586,   405,
       4,     5,     5,     4,     4,     4,   213,   348,   393,   403,
     458,   468,     4,   413,   468,     4,   425,   425,   425,   425,
     425,   414,   422,   422,   403,   422,     4,   422,   422,   403,
     422,   403,   579,   579,     4,   403,   579,     5,     4,   403,
     579,     4,   403,   579,   579,   420,   587,   589,   590,   400,
     586,     5,     5,   403,   459,   403,   459,   420,   422,     4,
     413,   415,     4,   408,   407,   403,     5,   403,   407,   403,
     413,   590,   405,     5,     5,   403,   403,   403,   403,   430,
       5,   413,   415,   420,   413,   415,   579,   403,     4,   579,
     403,   422,     5,     5,   403,     5,   403,   420,   420,     4,
     579,     4,     5,     5,     5,   407,   407,   579,   579,   579
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
#line 510 "parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 511 "parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 513 "parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 514 "parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 516 "parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 523 "parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 529 "parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 530 "parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 531 "parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 535 "parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 544 "parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 548 "parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 551 "parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 557 "parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 559 "parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 561 "parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 563 "parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 570 "parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 571 "parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 574 "parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 575 "parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 576 "parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 577 "parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 578 "parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 579 "parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 580 "parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 581 "parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 582 "parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 583 "parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 584 "parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 587 "parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 589 "parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 590 "parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 591 "parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 592 "parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 594 "parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 595 "parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 596 "parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 597 "parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 600 "parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 601 "parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 602 "parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 603 "parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 604 "parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 607 "parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 608 "parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 611 "parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 612 "parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 613 "parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 616 "parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 619 "parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 622 "parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 626 "parser.Y"
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
#line 638 "parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 645 "parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 652 "parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 659 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 660 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 661 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 662 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 663 "parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 666 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 667 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 668 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 669 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 670 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 671 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 672 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 673 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 674 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 675 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 676 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 677 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 678 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 679 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 680 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 681 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 682 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 683 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 684 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 685 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 686 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 687 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 688 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 689 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 690 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 691 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 692 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 693 "parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 696 "parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 697 "parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 700 "parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 701 "parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 702 "parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 703 "parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 704 "parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 705 "parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 708 "parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 709 "parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 710 "parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 711 "parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 712 "parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 713 "parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 714 "parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 715 "parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 716 "parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 717 "parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 718 "parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 719 "parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 720 "parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 721 "parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 722 "parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 723 "parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 724 "parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 727 "parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 728 "parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 729 "parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 730 "parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 731 "parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 732 "parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 733 "parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 734 "parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 737 "parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 738 "parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 739 "parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 740 "parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 741 "parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 744 "parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 745 "parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 746 "parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 747 "parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 748 "parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 749 "parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 750 "parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 751 "parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 754 "parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 755 "parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 756 "parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 759 "parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 760 "parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 761 "parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 762 "parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 765 "parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 766 "parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 767 "parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 770 "parser.Y"
    {;}
    break;

  case 191:
#line 771 "parser.Y"
    {;}
    break;

  case 192:
#line 772 "parser.Y"
    {;}
    break;

  case 193:
#line 775 "parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 776 "parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 777 "parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 781 "parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer) ? Marker::ARROW : Marker::NOEND;;}
    break;

  case 197:
#line 782 "parser.Y"
    {(yyval.integer) = Marker::NOEND;;}
    break;

  case 198:
#line 783 "parser.Y"
    {(yyval.integer) = Marker::ARROW;;}
    break;

  case 199:
#line 784 "parser.Y"
    {(yyval.integer) = Marker::OPENARROW;;}
    break;

  case 200:
#line 785 "parser.Y"
    {(yyval.integer) = Marker::CHEVRON;;}
    break;

  case 201:
#line 786 "parser.Y"
    {(yyval.integer) = Marker::CIRCLE;;}
    break;

  case 202:
#line 787 "parser.Y"
    {(yyval.integer) = Marker::OPENCIRCLE;;}
    break;

  case 203:
#line 788 "parser.Y"
    {(yyval.integer) = Marker::BOX;;}
    break;

  case 204:
#line 789 "parser.Y"
    {(yyval.integer) = Marker::OPENBOX;;}
    break;

  case 205:
#line 790 "parser.Y"
    {(yyval.integer) = Marker::TRIANGLE;;}
    break;

  case 206:
#line 791 "parser.Y"
    {(yyval.integer) = Marker::OPENTRIANGLE;;}
    break;

  case 207:
#line 792 "parser.Y"
    {(yyval.integer) = Marker::BAR;;}
    break;

  case 208:
#line 795 "parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 209:
#line 796 "parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 210:
#line 797 "parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 211:
#line 798 "parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 212:
#line 799 "parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 213:
#line 800 "parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 214:
#line 801 "parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 215:
#line 802 "parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 216:
#line 803 "parser.Y"
    {(yyval.integer) = Point::GLYPH;;}
    break;

  case 217:
#line 806 "parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 218:
#line 807 "parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 219:
#line 810 "parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 220:
#line 811 "parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 221:
#line 812 "parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 222:
#line 813 "parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 223:
#line 814 "parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 224:
#line 815 "parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 225:
#line 818 "parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 226:
#line 819 "parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 227:
#line 820 "parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 228:
#line 821 "parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 229:
#line 824 "parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 230:
#line 825 "parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 231:
#line 826 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 232:
#line 827 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 233:
#line 828 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 234:
#line 829 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 239:
#line 836 "parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 240:
#line 837 "parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 242:
#line 839 "parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 243:
#line 840 "parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 244:
#line 842 "parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 245:
#line 845 "parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 246:
#line 846 "parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 247:
#line 847 "parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 249:
#line 851 "parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 250:
#line 852 "parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 251:
#line 855 "parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 252:
#line 856 "parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 859 "parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 254:
#line 860 "parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 255:
#line 863 "parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 256:
#line 864 "parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 257:
#line 867 "parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 258:
#line 869 "parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 260:
#line 873 "parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 261:
#line 874 "parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 264:
#line 877 "parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 266:
#line 879 "parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 267:
#line 882 "parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 268:
#line 883 "parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 269:
#line 886 "parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 270:
#line 887 "parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 271:
#line 889 "parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 272:
#line 891 "parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 273:
#line 892 "parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 274:
#line 893 "parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 275:
#line 895 "parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 276:
#line 897 "parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 277:
#line 900 "parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 278:
#line 901 "parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 279:
#line 904 "parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 280:
#line 906 "parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 281:
#line 909 "parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 282:
#line 911 "parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 283:
#line 914 "parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 284:
#line 918 "parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 285:
#line 919 "parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 287:
#line 921 "parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 288:
#line 924 "parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 289:
#line 925 "parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 290:
#line 926 "parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 294:
#line 932 "parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 295:
#line 933 "parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 297:
#line 936 "parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 298:
#line 941 "parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 299:
#line 942 "parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 300:
#line 945 "parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 301:
#line 946 "parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 302:
#line 947 "parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 303:
#line 948 "parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 304:
#line 949 "parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 305:
#line 952 "parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 306:
#line 953 "parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 307:
#line 954 "parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 308:
#line 955 "parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 309:
#line 958 "parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 960 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 311:
#line 965 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 312:
#line 970 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 313:
#line 977 "parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 314:
#line 979 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 315:
#line 981 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 316:
#line 983 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 317:
#line 985 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 321:
#line 992 "parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 322:
#line 994 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 323:
#line 996 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 324:
#line 998 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 325:
#line 1000 "parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 326:
#line 1002 "parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 327:
#line 1003 "parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 329:
#line 1007 "parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 335:
#line 1016 "parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 336:
#line 1019 "parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 337:
#line 1022 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 338:
#line 1028 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 339:
#line 1033 "parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 340:
#line 1036 "parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 341:
#line 1037 "parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 342:
#line 1040 "parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 343:
#line 1041 "parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 344:
#line 1043 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 345:
#line 1049 "parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 346:
#line 1050 "parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 347:
#line 1051 "parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 348:
#line 1052 "parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 349:
#line 1055 "parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 350:
#line 1056 "parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 351:
#line 1059 "parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 352:
#line 1060 "parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 353:
#line 1063 "parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 354:
#line 1064 "parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1066 "parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 356:
#line 1070 "parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 357:
#line 1072 "parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 358:
#line 1075 "parser.Y"
    {fr->contourStyleClearCmd();;}
    break;

  case 359:
#line 1076 "parser.Y"
    {fr->contourStyleClearCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 360:
#line 1077 "parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer),0,0);;}
    break;

  case 361:
#line 1078 "parser.Y"
    {fr->contourStyleCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 362:
#line 1081 "parser.Y"
    {fr->cropCmd();;}
    break;

  case 363:
#line 1083 "parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 364:
#line 1086 "parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 366:
#line 1088 "parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 367:
#line 1089 "parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 368:
#line 1090 "parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 369:
#line 1093 "parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 370:
#line 1095 "parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 371:
#line 1096 "parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1097 "parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 373:
#line 1098 "parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 374:
#line 1102 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 375:
#line 1104 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 376:
#line 1105 "parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 377:
#line 1106 "parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 378:
#line 1109 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 379:
#line 1111 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 380:
#line 1113 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 381:
#line 1115 "parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 382:
#line 1118 "parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 383:
#line 1121 "parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 384:
#line 1122 "parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 385:
#line 1123 "parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 386:
#line 1124 "parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 387:
#line 1127 "parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 388:
#line 1128 "parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 389:
#line 1131 "parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 390:
#line 1132 "parser.Y"
    {fr->fitsyInfoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 391:
#line 1135 "parser.Y"
    {fr->getCmd();;}
    break;

  case 392:
#line 1136 "parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 406:
#line 1150 "parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 409:
#line 1153 "parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 410:
#line 1154 "parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 416:
#line 1160 "parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 417:
#line 1161 "parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 422:
#line 1166 "parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 423:
#line 1167 "parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 425:
#line 1170 "parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 427:
#line 1172 "parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 429:
#line 1174 "parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 431:
#line 1176 "parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 432:
#line 1178 "parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 435:
#line 1181 "parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 436:
#line 1185 "parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 437:
#line 1187 "parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 438:
#line 1191 "parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 439:
#line 1193 "parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 440:
#line 1196 "parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 441:
#line 1197 "parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 442:
#line 1198 "parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 443:
#line 1199 "parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 444:
#line 1200 "parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 445:
#line 1201 "parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 447:
#line 1203 "parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 448:
#line 1206 "parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 449:
#line 1207 "parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 450:
#line 1208 "parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 451:
#line 1211 "parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 452:
#line 1212 "parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 453:
#line 1215 "parser.Y"
    {fr->getClipCmd();;}
    break;

  case 454:
#line 1217 "parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1219 "parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 456:
#line 1220 "parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 457:
#line 1221 "parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 459:
#line 1223 "parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 461:
#line 1226 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 462:
#line 1232 "parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 463:
#line 1233 "parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 464:
#line 1236 "parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 465:
#line 1237 "parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 466:
#line 1238 "parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 467:
#line 1241 "parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 468:
#line 1242 "parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 470:
#line 1248 "parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1250 "parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 472:
#line 1252 "parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 473:
#line 1255 "parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 475:
#line 1257 "parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 476:
#line 1261 "parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 477:
#line 1265 "parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1267 "parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 480:
#line 1268 "parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 481:
#line 1269 "parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 482:
#line 1270 "parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 483:
#line 1271 "parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 484:
#line 1272 "parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 486:
#line 1274 "parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 487:
#line 1275 "parser.Y"
    {fr->getContourStyleCmd();;}
    break;

  case 488:
#line 1276 "parser.Y"
    {fr->getContourStyleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 489:
#line 1277 "parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 490:
#line 1280 "parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 491:
#line 1281 "parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 492:
#line 1282 "parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 493:
#line 1285 "parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 494:
#line 1286 "parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 495:
#line 1290 "parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 496:
#line 1292 "parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 497:
#line 1300 "parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 498:
#line 1302 "parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 499:
#line 1304 "parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 500:
#line 1307 "parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 501:
#line 1309 "parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 502:
#line 1310 "parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 503:
#line 1313 "parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 504:
#line 1316 "parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 505:
#line 1318 "parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 506:
#line 1322 "parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 507:
#line 1324 "parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 508:
#line 1327 "parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 509:
#line 1331 "parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 510:
#line 1332 "parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 511:
#line 1334 "parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 512:
#line 1337 "parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 513:
#line 1338 "parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 515:
#line 1342 "parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 516:
#line 1343 "parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1344 "parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 518:
#line 1347 "parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 519:
#line 1349 "parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1350 "parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 522:
#line 1352 "parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 526:
#line 1356 "parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 527:
#line 1357 "parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 528:
#line 1358 "parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 529:
#line 1360 "parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 531:
#line 1362 "parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 532:
#line 1365 "parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1367 "parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 534:
#line 1369 "parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 535:
#line 1370 "parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 536:
#line 1371 "parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 537:
#line 1372 "parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1375 "parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 539:
#line 1376 "parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 540:
#line 1380 "parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 541:
#line 1382 "parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 542:
#line 1385 "parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 543:
#line 1388 "parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 544:
#line 1389 "parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 545:
#line 1391 "parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 546:
#line 1393 "parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 547:
#line 1395 "parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 548:
#line 1398 "parser.Y"
    {fr->getGridCmd();;}
    break;

  case 549:
#line 1399 "parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 550:
#line 1400 "parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 551:
#line 1403 "parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 552:
#line 1404 "parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 553:
#line 1405 "parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1406 "parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 555:
#line 1407 "parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1408 "parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1411 "parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 558:
#line 1412 "parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 559:
#line 1413 "parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 560:
#line 1414 "parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 561:
#line 1415 "parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 562:
#line 1416 "parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 563:
#line 1417 "parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 564:
#line 1420 "parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 565:
#line 1421 "parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 566:
#line 1424 "parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 567:
#line 1427 "parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 568:
#line 1428 "parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 569:
#line 1429 "parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 570:
#line 1432 "parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 571:
#line 1435 "parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 572:
#line 1436 "parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 573:
#line 1437 "parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 574:
#line 1440 "parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 575:
#line 1441 "parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 576:
#line 1442 "parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 577:
#line 1445 "parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 578:
#line 1446 "parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 579:
#line 1447 "parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 580:
#line 1448 "parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 581:
#line 1449 "parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 582:
#line 1450 "parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 587:
#line 1457 "parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 588:
#line 1458 "parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 590:
#line 1460 "parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 591:
#line 1463 "parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 592:
#line 1464 "parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 593:
#line 1465 "parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 595:
#line 1469 "parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 596:
#line 1470 "parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 597:
#line 1473 "parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 598:
#line 1474 "parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 599:
#line 1477 "parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 600:
#line 1478 "parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 601:
#line 1481 "parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 602:
#line 1482 "parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 603:
#line 1485 "parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 604:
#line 1486 "parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 605:
#line 1489 "parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 607:
#line 1491 "parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 608:
#line 1494 "parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 609:
#line 1495 "parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 611:
#line 1499 "parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 612:
#line 1503 "parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 613:
#line 1506 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 614:
#line 1513 "parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 615:
#line 1514 "parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 616:
#line 1517 "parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 617:
#line 1518 "parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 620:
#line 1521 "parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 621:
#line 1522 "parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 622:
#line 1523 "parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 623:
#line 1524 "parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 625:
#line 1526 "parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 626:
#line 1527 "parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 627:
#line 1528 "parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 629:
#line 1530 "parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 630:
#line 1531 "parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 631:
#line 1532 "parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 632:
#line 1533 "parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1537 "parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 635:
#line 1540 "parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 636:
#line 1541 "parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 637:
#line 1544 "parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 638:
#line 1545 "parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 639:
#line 1546 "parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 640:
#line 1547 "parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 641:
#line 1550 "parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 642:
#line 1551 "parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 643:
#line 1552 "parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 644:
#line 1553 "parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 645:
#line 1556 "parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 646:
#line 1557 "parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 647:
#line 1558 "parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 648:
#line 1559 "parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1560 "parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 650:
#line 1561 "parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 651:
#line 1564 "parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 652:
#line 1565 "parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 653:
#line 1566 "parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 656:
#line 1570 "parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1571 "parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 658:
#line 1574 "parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 659:
#line 1577 "parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 660:
#line 1578 "parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 661:
#line 1582 "parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 662:
#line 1584 "parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 663:
#line 1585 "parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 671:
#line 1598 "parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1600 "parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1602 "parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1603 "parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 675:
#line 1605 "parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 676:
#line 1607 "parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1609 "parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1611 "parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1613 "parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1619 "parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1620 "parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1621 "parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1622 "parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 687:
#line 1623 "parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 688:
#line 1625 "parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 689:
#line 1626 "parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1627 "parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1628 "parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1631 "parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 693:
#line 1635 "parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1637 "parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1639 "parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1641 "parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1643 "parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1645 "parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1647 "parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1649 "parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 701:
#line 1652 "parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1654 "parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1656 "parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1668 "parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1669 "parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1670 "parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1671 "parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1672 "parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 718:
#line 1673 "parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1675 "parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 720:
#line 1677 "parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 721:
#line 1678 "parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1679 "parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1680 "parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 724:
#line 1683 "parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 725:
#line 1684 "parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1685 "parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1686 "parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1687 "parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1689 "parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 730:
#line 1690 "parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1691 "parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1692 "parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 738:
#line 1703 "parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1706 "parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1709 "parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1712 "parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1715 "parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1718 "parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1721 "parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1724 "parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1727 "parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 747:
#line 1732 "parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1735 "parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1738 "parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1741 "parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1744 "parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1747 "parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1750 "parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1753 "parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1756 "parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1759 "parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1762 "parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1767 "parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1770 "parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1773 "parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1776 "parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1779 "parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1782 "parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 764:
#line 1785 "parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1788 "parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 766:
#line 1791 "parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1796 "parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1798 "parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1800 "parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1802 "parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1804 "parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1806 "parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 773:
#line 1811 "parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1813 "parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1815 "parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1819 "parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1822 "parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1825 "parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1828 "parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1831 "parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 781:
#line 1834 "parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1837 "parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1840 "parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 784:
#line 1843 "parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1846 "parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1849 "parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 787:
#line 1853 "parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 788:
#line 1854 "parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 789:
#line 1855 "parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 790:
#line 1856 "parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 791:
#line 1857 "parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 792:
#line 1858 "parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 793:
#line 1860 "parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 794:
#line 1862 "parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 795:
#line 1863 "parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 796:
#line 1864 "parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 797:
#line 1865 "parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 798:
#line 1868 "parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 799:
#line 1869 "parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 800:
#line 1870 "parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 801:
#line 1871 "parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 802:
#line 1872 "parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 803:
#line 1874 "parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 804:
#line 1875 "parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 805:
#line 1876 "parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 806:
#line 1877 "parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 807:
#line 1881 "parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1883 "parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1884 "parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 810:
#line 1886 "parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 811:
#line 1888 "parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1890 "parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1897 "parser.Y"
    {fr->loadAsdfCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1900 "parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 815:
#line 1901 "parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1904 "parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 817:
#line 1905 "parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 818:
#line 1906 "parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 819:
#line 1909 "parser.Y"
    {;}
    break;

  case 820:
#line 1912 "parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 821:
#line 1913 "parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 822:
#line 1914 "parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 823:
#line 1915 "parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 824:
#line 1916 "parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 825:
#line 1917 "parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 826:
#line 1918 "parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 827:
#line 1922 "parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 829:
#line 1930 "parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 830:
#line 1931 "parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 831:
#line 1933 "parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 832:
#line 1935 "parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 833:
#line 1936 "parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 834:
#line 1937 "parser.Y"
    {maperr =0;;}
    break;

  case 836:
#line 1938 "parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 839:
#line 1941 "parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 840:
#line 1942 "parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 841:
#line 1944 "parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 842:
#line 1946 "parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 843:
#line 1948 "parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1951 "parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1953 "parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1955 "parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 847:
#line 1957 "parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 848:
#line 1958 "parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 849:
#line 1960 "parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 850:
#line 1963 "parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 851:
#line 1966 "parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 852:
#line 1970 "parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 853:
#line 1973 "parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 854:
#line 1976 "parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 855:
#line 1979 "parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 856:
#line 1983 "parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 857:
#line 1987 "parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 858:
#line 1992 "parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 859:
#line 1996 "parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 860:
#line 1998 "parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 861:
#line 1999 "parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 862:
#line 2001 "parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 863:
#line 2003 "parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 864:
#line 2005 "parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 865:
#line 2007 "parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 866:
#line 2009 "parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 867:
#line 2010 "parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2011 "parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2013 "parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 870:
#line 2015 "parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 871:
#line 2017 "parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 872:
#line 2020 "parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 873:
#line 2024 "parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 874:
#line 2028 "parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 875:
#line 2030 "parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 876:
#line 2032 "parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 877:
#line 2034 "parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 878:
#line 2036 "parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 879:
#line 2038 "parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 880:
#line 2040 "parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 881:
#line 2042 "parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 882:
#line 2044 "parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 883:
#line 2046 "parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 884:
#line 2048 "parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 885:
#line 2050 "parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 886:
#line 2052 "parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2054 "parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2055 "parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 889:
#line 2057 "parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 890:
#line 2059 "parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 891:
#line 2060 "parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 892:
#line 2061 "parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 893:
#line 2063 "parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 894:
#line 2065 "parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 895:
#line 2066 "parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 896:
#line 2067 "parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 897:
#line 2068 "parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2070 "parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2072 "parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 900:
#line 2076 "parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 901:
#line 2079 "parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 902:
#line 2082 "parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 903:
#line 2086 "parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 904:
#line 2090 "parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 905:
#line 2095 "parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 906:
#line 2099 "parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 907:
#line 2100 "parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 908:
#line 2101 "parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 909:
#line 2103 "parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 910:
#line 2104 "parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 911:
#line 2106 "parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 912:
#line 2110 "parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 913:
#line 2111 "parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 914:
#line 2112 "parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 915:
#line 2114 "parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 916:
#line 2117 "parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 917:
#line 2120 "parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 918:
#line 2123 "parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 919:
#line 2126 "parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 920:
#line 2129 "parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 921:
#line 2130 "parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 922:
#line 2131 "parser.Y"
    {fr->markerPointGlyphCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 923:
#line 2135 "parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 924:
#line 2139 "parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 925:
#line 2141 "parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 926:
#line 2142 "parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 927:
#line 2144 "parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 928:
#line 2147 "parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 929:
#line 2150 "parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 930:
#line 2151 "parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 931:
#line 2153 "parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 932:
#line 2154 "parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 933:
#line 2155 "parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2157 "parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 935:
#line 2158 "parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 936:
#line 2160 "parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2161 "parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2164 "parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 939:
#line 2167 "parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 940:
#line 2168 "parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 941:
#line 2170 "parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 942:
#line 2171 "parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 946:
#line 2176 "parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 947:
#line 2177 "parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 948:
#line 2179 "parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 949:
#line 2181 "parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 950:
#line 2183 "parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2184 "parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 955:
#line 2190 "parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 956:
#line 2191 "parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 957:
#line 2192 "parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 958:
#line 2193 "parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 959:
#line 2194 "parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 960:
#line 2195 "parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 961:
#line 2196 "parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 962:
#line 2197 "parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 963:
#line 2198 "parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 964:
#line 2199 "parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 965:
#line 2201 "parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 966:
#line 2203 "parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 967:
#line 2204 "parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 968:
#line 2205 "parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 969:
#line 2206 "parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 970:
#line 2207 "parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 971:
#line 2209 "parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 972:
#line 2210 "parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 973:
#line 2211 "parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 974:
#line 2212 "parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 975:
#line 2213 "parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 976:
#line 2215 "parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 977:
#line 2216 "parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 978:
#line 2217 "parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 979:
#line 2218 "parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 980:
#line 2219 "parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 981:
#line 2220 "parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 982:
#line 2221 "parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 983:
#line 2224 "parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 984:
#line 2225 "parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 985:
#line 2226 "parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 986:
#line 2227 "parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 987:
#line 2228 "parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 988:
#line 2229 "parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 989:
#line 2230 "parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 990:
#line 2231 "parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 991:
#line 2232 "parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 992:
#line 2233 "parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 993:
#line 2234 "parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 994:
#line 2235 "parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 995:
#line 2236 "parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 996:
#line 2237 "parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 997:
#line 2238 "parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 998:
#line 2239 "parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 999:
#line 2240 "parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 1000:
#line 2241 "parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 1001:
#line 2242 "parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 1002:
#line 2243 "parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 1003:
#line 2244 "parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 1004:
#line 2247 "parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 1005:
#line 2248 "parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1006:
#line 2249 "parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1007:
#line 2250 "parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1008:
#line 2251 "parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1009:
#line 2253 "parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 1010:
#line 2263 "parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1011:
#line 2271 "parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1012:
#line 2280 "parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1013:
#line 2288 "parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1014:
#line 2294 "parser.Y"
    {fr->createPolygonCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1015:
#line 2299 "parser.Y"
    {fr->createSegmentCanvasVarCmd((yyvsp[(4) - (5)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1016:
#line 2305 "parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1017:
#line 2312 "parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1018:
#line 2320 "parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1019:
#line 2328 "parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1020:
#line 2333 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1021:
#line 2338 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1022:
#line 2343 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1023:
#line 2348 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1024:
#line 2353 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1025:
#line 2358 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1026:
#line 2363 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1027:
#line 2368 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::GLYPH, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(5) - (6)].str));;}
    break;

  case 1028:
#line 2373 "parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),Coord::CANVAS),
	    Point::GLYPH, (yyvsp[(5) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist,(yyvsp[(6) - (7)].str));;}
    break;

  case 1029:
#line 2382 "parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1030:
#line 2392 "parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1031:
#line 2402 "parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1032:
#line 2411 "parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1033:
#line 2419 "parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1034:
#line 2429 "parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1035:
#line 2439 "parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1036:
#line 2449 "parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1037:
#line 2461 "parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1038:
#line 2470 "parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1040:
#line 2478 "parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1041:
#line 2480 "parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1042:
#line 2489 "parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1043:
#line 2491 "parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1044:
#line 2493 "parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1045:
#line 2498 "parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1046:
#line 2501 "parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1047:
#line 2502 "parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1048:
#line 2503 "parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1049:
#line 2510 "parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1050:
#line 2512 "parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1051:
#line 2513 "parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1052:
#line 2516 "parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1053:
#line 2517 "parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1054:
#line 2518 "parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1055:
#line 2519 "parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1056:
#line 2520 "parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1057:
#line 2521 "parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1058:
#line 2522 "parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1060:
#line 2526 "parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1061:
#line 2527 "parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1062:
#line 2528 "parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1063:
#line 2529 "parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1064:
#line 2530 "parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1065:
#line 2533 "parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1066:
#line 2535 "parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1067:
#line 2537 "parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1068:
#line 2539 "parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1069:
#line 2541 "parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1070:
#line 2543 "parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1071:
#line 2545 "parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1072:
#line 2547 "parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1073:
#line 2549 "parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1074:
#line 2551 "parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1075:
#line 2552 "parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1076:
#line 2553 "parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1077:
#line 2555 "parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1078:
#line 2557 "parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1079:
#line 2560 "parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1080:
#line 2562 "parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1081:
#line 2563 "parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1082:
#line 2564 "parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1083:
#line 2566 "parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2568 "parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2571 "parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2574 "parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1087:
#line 2575 "parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1088:
#line 2576 "parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2577 "parser.Y"
    {fr->getMarkerCompassEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1090:
#line 2578 "parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2580 "parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1092:
#line 2581 "parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1093:
#line 2582 "parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1094:
#line 2583 "parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1095:
#line 2584 "parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1096:
#line 2585 "parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2586 "parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1098:
#line 2588 "parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2590 "parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2592 "parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1101:
#line 2594 "parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1102:
#line 2596 "parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1103:
#line 2597 "parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1104:
#line 2599 "parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1105:
#line 2601 "parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1106:
#line 2603 "parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1107:
#line 2604 "parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1108:
#line 2605 "parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1109:
#line 2606 "parser.Y"
    {fr->getMarkerLineEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1110:
#line 2608 "parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1111:
#line 2610 "parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1112:
#line 2613 "parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1113:
#line 2616 "parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1114:
#line 2617 "parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1115:
#line 2618 "parser.Y"
    {fr->getMarkerPointGlyphCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1116:
#line 2620 "parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1117:
#line 2623 "parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1118:
#line 2626 "parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1119:
#line 2629 "parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1120:
#line 2630 "parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1121:
#line 2631 "parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1122:
#line 2632 "parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1123:
#line 2634 "parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1124:
#line 2636 "parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1125:
#line 2638 "parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1126:
#line 2639 "parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1127:
#line 2641 "parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1128:
#line 2642 "parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1129:
#line 2643 "parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1130:
#line 2644 "parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1131:
#line 2645 "parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1132:
#line 2647 "parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1133:
#line 2648 "parser.Y"
    {fr->getMarkerVectorEndCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1134:
#line 2650 "parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1135:
#line 2652 "parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1136:
#line 2654 "parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1137:
#line 2655 "parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1139:
#line 2657 "parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1140:
#line 2658 "parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1141:
#line 2660 "parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1142:
#line 2662 "parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1143:
#line 2663 "parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1144:
#line 2664 "parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2666 "parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1148:
#line 2670 "parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1149:
#line 2671 "parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1150:
#line 2672 "parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1151:
#line 2673 "parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1152:
#line 2674 "parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1153:
#line 2675 "parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1154:
#line 2677 "parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1155:
#line 2678 "parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1156:
#line 2680 "parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1157:
#line 2681 "parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1158:
#line 2684 "parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1159:
#line 2685 "parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1160:
#line 2686 "parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1161:
#line 2687 "parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1162:
#line 2690 "parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1163:
#line 2691 "parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1164:
#line 2694 "parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1165:
#line 2695 "parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1166:
#line 2698 "parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1167:
#line 2699 "parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1168:
#line 2702 "parser.Y"
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

  case 1169:
#line 2715 "parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1170:
#line 2716 "parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1171:
#line 2720 "parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1172:
#line 2721 "parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1173:
#line 2725 "parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1174:
#line 2726 "parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1175:
#line 2731 "parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1176:
#line 2735 "parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1177:
#line 2740 "parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1178:
#line 2742 "parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1179:
#line 2745 "parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1180:
#line 2747 "parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1181:
#line 2750 "parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1182:
#line 2752 "parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1183:
#line 2755 "parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1184:
#line 2756 "parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1185:
#line 2757 "parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1186:
#line 2758 "parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2759 "parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1188:
#line 2760 "parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1189:
#line 2762 "parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1192:
#line 2769 "parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2770 "parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1194:
#line 2771 "parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1195:
#line 2772 "parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1196:
#line 2773 "parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1197:
#line 2774 "parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1200:
#line 2779 "parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1201:
#line 2780 "parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1202:
#line 2781 "parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1203:
#line 2782 "parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1204:
#line 2783 "parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1205:
#line 2784 "parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1206:
#line 2785 "parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1207:
#line 2786 "parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1208:
#line 2787 "parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1209:
#line 2788 "parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1210:
#line 2789 "parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1211:
#line 2790 "parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1214:
#line 2797 "parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1215:
#line 2798 "parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1217:
#line 2802 "parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1218:
#line 2804 "parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1219:
#line 2805 "parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2808 "parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1221:
#line 2809 "parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1222:
#line 2810 "parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1223:
#line 2811 "parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1224:
#line 2812 "parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1225:
#line 2813 "parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1226:
#line 2816 "parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1227:
#line 2817 "parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2825 "parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1231:
#line 2828 "parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1232:
#line 2829 "parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1236:
#line 2836 "parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1237:
#line 2839 "parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1238:
#line 2843 "parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1239:
#line 2844 "parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1240:
#line 2845 "parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1241:
#line 2846 "parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2847 "parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2848 "parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1244:
#line 2849 "parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2850 "parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1246:
#line 2851 "parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1247:
#line 2852 "parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1248:
#line 2853 "parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2854 "parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1250:
#line 2856 "parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1251:
#line 2857 "parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1252:
#line 2858 "parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1253:
#line 2859 "parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1254:
#line 2860 "parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1255:
#line 2861 "parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1256:
#line 2862 "parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1257:
#line 2863 "parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1258:
#line 2864 "parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1259:
#line 2865 "parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1260:
#line 2866 "parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1261:
#line 2867 "parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1262:
#line 2868 "parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1263:
#line 2869 "parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1264:
#line 2872 "parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1265:
#line 2873 "parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2874 "parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2875 "parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1268:
#line 2876 "parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2877 "parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1270:
#line 2878 "parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2879 "parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1272:
#line 2885 "parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1273:
#line 2886 "parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1274:
#line 2887 "parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1275:
#line 2888 "parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1276:
#line 2892 "parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1277:
#line 2893 "parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2895 "parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1279:
#line 2900 "parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1281:
#line 2902 "parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1283:
#line 2904 "parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2907 "parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1285:
#line 2909 "parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1286:
#line 2914 "parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1287:
#line 2917 "parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1288:
#line 2918 "parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1289:
#line 2919 "parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1290:
#line 2922 "parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1291:
#line 2924 "parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1292:
#line 2928 "parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1293:
#line 2929 "parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1294:
#line 2933 "parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1295:
#line 2934 "parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1296:
#line 2935 "parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1297:
#line 2936 "parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1298:
#line 2942 "parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1299:
#line 2943 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1300:
#line 2949 "parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1301:
#line 2950 "parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1302:
#line 2951 "parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1303:
#line 2952 "parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1306:
#line 2960 "parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1307:
#line 2962 "parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1308:
#line 2963 "parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1309:
#line 2964 "parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1310:
#line 2968 "parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1311:
#line 2969 "parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1312:
#line 2970 "parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1313:
#line 2971 "parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1314:
#line 2974 "parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1315:
#line 2975 "parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1316:
#line 2976 "parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1317:
#line 2979 "parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1318:
#line 2980 "parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1319:
#line 2981 "parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1320:
#line 2984 "parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1321:
#line 2985 "parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1322:
#line 2988 "parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2989 "parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1324:
#line 2990 "parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1325:
#line 2994 "parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1326:
#line 2997 "parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1327:
#line 2998 "parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1328:
#line 2999 "parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1329:
#line 3000 "parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1330:
#line 3001 "parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1331:
#line 3004 "parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1332:
#line 3005 "parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1333:
#line 3006 "parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1334:
#line 3007 "parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1335:
#line 3008 "parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1336:
#line 3009 "parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1337:
#line 3012 "parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1338:
#line 3013 "parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1340:
#line 3015 "parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1341:
#line 3016 "parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1342:
#line 3019 "parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1343:
#line 3020 "parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1344:
#line 3021 "parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1350:
#line 3029 "parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3032 "parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3033 "parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3034 "parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3038 "parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1355:
#line 3040 "parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1356:
#line 3042 "parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1373:
#line 3063 "parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3064 "parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1375:
#line 3065 "parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3068 "parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1377:
#line 3069 "parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3070 "parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3073 "parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3074 "parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3075 "parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1382:
#line 3078 "parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3079 "parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1384:
#line 3080 "parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1386:
#line 3084 "parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3085 "parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3086 "parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1389:
#line 3089 "parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1390:
#line 3090 "parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1391:
#line 3091 "parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1392:
#line 3095 "parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1393:
#line 3097 "parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1394:
#line 3099 "parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1395:
#line 3102 "parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3103 "parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1397:
#line 3104 "parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1398:
#line 3107 "parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1399:
#line 3108 "parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1400:
#line 3109 "parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1401:
#line 3113 "parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1402:
#line 3115 "parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1403:
#line 3117 "parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1404:
#line 3120 "parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1405:
#line 3121 "parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1406:
#line 3122 "parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3125 "parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1408:
#line 3126 "parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1409:
#line 3127 "parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1410:
#line 3131 "parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1411:
#line 3133 "parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3135 "parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1413:
#line 3138 "parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3139 "parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1415:
#line 3140 "parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3143 "parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3144 "parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1418:
#line 3145 "parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3148 "parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3149 "parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1421:
#line 3150 "parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1422:
#line 3154 "parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1423:
#line 3156 "parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1424:
#line 3158 "parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1425:
#line 3162 "parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1426:
#line 3166 "parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1427:
#line 3168 "parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1428:
#line 3172 "parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1429:
#line 3175 "parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1430:
#line 3176 "parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1431:
#line 3177 "parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1432:
#line 3178 "parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1433:
#line 3181 "parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1434:
#line 3183 "parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1435:
#line 3185 "parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1436:
#line 3188 "parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1438:
#line 3190 "parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1439:
#line 3192 "parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1440:
#line 3195 "parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1441:
#line 3196 "parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1442:
#line 3197 "parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1443:
#line 3200 "parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1444:
#line 3201 "parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1445:
#line 3205 "parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1447:
#line 3207 "parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1450:
#line 3212 "parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1451:
#line 3213 "parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1452:
#line 3214 "parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1453:
#line 3217 "parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1454:
#line 3218 "parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1455:
#line 3219 "parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1456:
#line 3222 "parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1457:
#line 3224 "parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1458:
#line 3229 "parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1459:
#line 3230 "parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1460:
#line 3233 "parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1461:
#line 3240 "parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1462:
#line 3242 "parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1463:
#line 3244 "parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1464:
#line 3249 "parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1466:
#line 3253 "parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1467:
#line 3254 "parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1468:
#line 3255 "parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1469:
#line 3257 "parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1470:
#line 3259 "parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1471:
#line 3264 "parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12347 "parser.C"
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


#line 3268 "parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

