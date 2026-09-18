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
     BASE_ = 295,
     BBOX_ = 296,
     BEGIN_ = 297,
     BG_ = 298,
     BIG_ = 299,
     BIGENDIAN_ = 300,
     BIN_ = 301,
     BITPIX_ = 302,
     BLEND_ = 303,
     BLOCK_ = 304,
     BORDER_ = 305,
     BOTTOM_ = 306,
     BOX_ = 307,
     BOXANNULUS_ = 308,
     BOXCAR_ = 309,
     BOXCIRCLE_ = 310,
     BPANDA_ = 311,
     BUFFER_ = 312,
     BW_ = 313,
     CALLBACK_ = 314,
     CANVAS_ = 315,
     CATALOG_ = 316,
     CELESTIAL_ = 317,
     CENTER_ = 318,
     CENTROID_ = 319,
     CHANNEL_ = 320,
     CIRCLE_ = 321,
     CIAO_ = 322,
     CLEAR_ = 323,
     CLIP_ = 324,
     COLOR_ = 325,
     COLORBURN_ = 326,
     COLORDODGE_ = 327,
     COLORBAR_ = 328,
     COLORMAP_ = 329,
     COLORSCALE_ = 330,
     COLORSPACE_ = 331,
     COLS_ = 332,
     COLUMN_ = 333,
     COMMAND_ = 334,
     COMPASS_ = 335,
     COMPOSITE_ = 336,
     COMPRESS_ = 337,
     CONTOUR_ = 338,
     CONTRAST_ = 339,
     COORDINATES_ = 340,
     COPY_ = 341,
     COUNT_ = 342,
     CPANDA_ = 343,
     CREATE_ = 344,
     CROP_ = 345,
     CROSS_ = 346,
     CROSSHAIR_ = 347,
     CUBE_ = 348,
     CURSOR_ = 349,
     CUT_ = 350,
     CMYK_ = 351,
     DARKEN_ = 352,
     DASH_ = 353,
     DASHLIST_ = 354,
     DATA_ = 355,
     DATAMIN_ = 356,
     DATASEC_ = 357,
     DEBUG_ = 358,
     DEGREES_ = 359,
     DEFAULT_ = 360,
     DELETE_ = 361,
     DEPTH_ = 362,
     DETECTOR_ = 363,
     DIAMOND_ = 364,
     DIFFERENCE_ = 365,
     DIM_ = 366,
     DOWN_ = 367,
     DS9_ = 368,
     EDIT_ = 369,
     ECLIPTIC_ = 370,
     ELEVATION_ = 371,
     ELLIPTIC_ = 372,
     ELLIPSE_ = 373,
     ELLIPSEANNULUS_ = 374,
     END_ = 375,
     ENVI_ = 376,
     EPANDA_ = 377,
     EPSILON_ = 378,
     EQUATORIAL_ = 379,
     ERASE_ = 380,
     EXCLUSION_ = 381,
     EXT_ = 382,
     FADE_ = 383,
     FACTOR_ = 384,
     FALSE_ = 385,
     FILE_ = 386,
     FILL_ = 387,
     FILTER_ = 388,
     FIRST_ = 389,
     FIP_ = 390,
     FIT_ = 391,
     FITS_ = 392,
     FITSY_ = 393,
     FIXED_ = 394,
     FK4_ = 395,
     FK5_ = 396,
     FONT_ = 397,
     FORMAT_ = 398,
     FOOTPRINT_ = 399,
     FROM_ = 400,
     FRONT_ = 401,
     FULL_ = 402,
     FUNCTION_ = 403,
     GALACTIC_ = 404,
     GAUSSIAN_ = 405,
     GET_ = 406,
     GLOBAL_ = 407,
     GRAPHICS_ = 408,
     GRAY_ = 409,
     GRID_ = 410,
     GZ_ = 411,
     HANDLE_ = 412,
     HARDLIGHT_ = 413,
     HAS_ = 414,
     HEAD_ = 415,
     HEADER_ = 416,
     HEIGHT_ = 417,
     HIDE_ = 418,
     HIGHLITE_ = 419,
     HISTEQU_ = 420,
     HISTOGRAM_ = 421,
     HORIZONTAL_ = 422,
     HUE_ = 423,
     HSV_ = 424,
     HLS_ = 425,
     ICRS_ = 426,
     ID_ = 427,
     IIS_ = 428,
     IMAGE_ = 429,
     INCLUDE_ = 430,
     INCR_ = 431,
     INFO_ = 432,
     ITERATION_ = 433,
     IRAF_ = 434,
     IRAFMIN_ = 435,
     J2000_ = 436,
     KEY_ = 437,
     KEYWORD_ = 438,
     LABEL_ = 439,
     LAYER_ = 440,
     LAYERNO_ = 441,
     LAST_ = 442,
     LENGTH_ = 443,
     LEVEL_ = 444,
     LIGHTEN_ = 445,
     LITTLE_ = 446,
     LITTLEENDIAN_ = 447,
     LINE_ = 448,
     LINEAR_ = 449,
     LIST_ = 450,
     LOAD_ = 451,
     LOCAL_ = 452,
     LOG_ = 453,
     LUMINOSITY_ = 454,
     MACOSX_ = 455,
     MAGNIFIER_ = 456,
     MATCH_ = 457,
     MAP_ = 458,
     MARK_ = 459,
     MARKER_ = 460,
     MASK_ = 461,
     MEDIAN_ = 462,
     MESSAGE_ = 463,
     METHOD_ = 464,
     MINMAX_ = 465,
     MINOR_ = 466,
     MIP_ = 467,
     MMAP_ = 468,
     MMAPINCR_ = 469,
     MOSAIC_ = 470,
     MODE_ = 471,
     MOTION_ = 472,
     MULTICOLOR_ = 473,
     MULTIPLY_ = 474,
     MOVE_ = 475,
     NAME_ = 476,
     NAN_ = 477,
     NATIVE_ = 478,
     NAXES_ = 479,
     NEW_ = 480,
     NEXT_ = 481,
     NO_ = 482,
     NONE_ = 483,
     NORMAL_ = 484,
     NONNAN_ = 485,
     NONZERO_ = 486,
     NOW_ = 487,
     NRRD_ = 488,
     NUMBER_ = 489,
     OBJECT_ = 490,
     OFF_ = 491,
     ON_ = 492,
     ONLY_ = 493,
     OPTION_ = 494,
     ORIENT_ = 495,
     OVERLAY_ = 496,
     PAN_ = 497,
     PANNER_ = 498,
     PARSER_ = 499,
     PASTE_ = 500,
     PERF_ = 501,
     PHOTO_ = 502,
     PHYSICAL_ = 503,
     PIXEL_ = 504,
     PLOT2D_ = 505,
     PLOT3D_ = 506,
     POINT_ = 507,
     POINTER_ = 508,
     POLYGON_ = 509,
     POSTSCRIPT_ = 510,
     POW_ = 511,
     PRECISION_ = 512,
     PRINT_ = 513,
     PRESERVE_ = 514,
     PROJECTION_ = 515,
     PROPERTY_ = 516,
     PUBLICATION_ = 517,
     PROS_ = 518,
     QUERY_ = 519,
     RADIAL_ = 520,
     RADIUS_ = 521,
     RANGE_ = 522,
     REGION_ = 523,
     REPLACE_ = 524,
     RESAMPLE_ = 525,
     RESCAN_ = 526,
     RESET_ = 527,
     RESOLUTION_ = 528,
     REVEAL_ = 529,
     RGB_ = 530,
     ROOT_ = 531,
     ROTATE_ = 532,
     RULER_ = 533,
     SAMPLE_ = 534,
     SAOIMAGE_ = 535,
     SAOTNG_ = 536,
     SAVE_ = 537,
     SATURATION_ = 538,
     SCALE_ = 539,
     SCAN_ = 540,
     SCIENTIFIC_ = 541,
     SCOPE_ = 542,
     SCREEN_ = 543,
     SEGMENT_ = 544,
     SELECT_ = 545,
     SET_ = 546,
     SEXAGESIMAL_ = 547,
     SHAPE_ = 548,
     SHADE_ = 549,
     SHARED_ = 550,
     SHIFT_ = 551,
     SHMID_ = 552,
     SHOW_ = 553,
     SIGMA_ = 554,
     SINH_ = 555,
     SIZE_ = 556,
     SLICE_ = 557,
     SMMAP_ = 558,
     SMOOTH_ = 559,
     SOFTLIGHT_ = 560,
     SOCKET_ = 561,
     SOCKETGZ_ = 562,
     SOURCE_ = 563,
     SQRT_ = 564,
     SQUARED_ = 565,
     SSHARED_ = 566,
     STATS_ = 567,
     STATUS_ = 568,
     STRENGTH_ = 569,
     SUM_ = 570,
     SYNC_ = 571,
     SYSTEM_ = 572,
     TABLE_ = 573,
     TAG_ = 574,
     TEMPLATE_ = 575,
     TEXT_ = 576,
     THREADS_ = 577,
     THREED_ = 578,
     THRESHOLD_ = 579,
     THICK_ = 580,
     TOP_ = 581,
     TRANSPARENCY_ = 582,
     TO_ = 583,
     TOGGLE_ = 584,
     TOPHAT_ = 585,
     TRUE_ = 586,
     TYPE_ = 587,
     UNDO_ = 588,
     UNHIGHLITE_ = 589,
     UNLOAD_ = 590,
     UNSELECT_ = 591,
     UPDATE_ = 592,
     UP_ = 593,
     USER_ = 594,
     VALUE_ = 595,
     VAR_ = 596,
     VIEW_ = 597,
     VECTOR_ = 598,
     VERSION_ = 599,
     VERTEX_ = 600,
     VERTICAL_ = 601,
     WARP_ = 602,
     WCS_ = 603,
     WCSA_ = 604,
     WCSB_ = 605,
     WCSC_ = 606,
     WCSD_ = 607,
     WCSE_ = 608,
     WCSF_ = 609,
     WCSG_ = 610,
     WCSH_ = 611,
     WCSI_ = 612,
     WCSJ_ = 613,
     WCSK_ = 614,
     WCSL_ = 615,
     WCSM_ = 616,
     WCSN_ = 617,
     WCSO_ = 618,
     WCSP_ = 619,
     WCSQ_ = 620,
     WCSR_ = 621,
     WCSS_ = 622,
     WCST_ = 623,
     WCSU_ = 624,
     WCSV_ = 625,
     WCSW_ = 626,
     WCSX_ = 627,
     WCSY_ = 628,
     WCSZ_ = 629,
     WCS0_ = 630,
     WFPC2_ = 631,
     WIDTH_ = 632,
     WIN32_ = 633,
     XML_ = 634,
     XY_ = 635,
     YES_ = 636,
     ZERO_ = 637,
     ZMAX_ = 638,
     ZSCALE_ = 639,
     PIXMASK_ = 640,
     ZOOM_ = 641,
     FIELDS_ = 642
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
#define BASE_ 295
#define BBOX_ 296
#define BEGIN_ 297
#define BG_ 298
#define BIG_ 299
#define BIGENDIAN_ 300
#define BIN_ 301
#define BITPIX_ 302
#define BLEND_ 303
#define BLOCK_ 304
#define BORDER_ 305
#define BOTTOM_ 306
#define BOX_ 307
#define BOXANNULUS_ 308
#define BOXCAR_ 309
#define BOXCIRCLE_ 310
#define BPANDA_ 311
#define BUFFER_ 312
#define BW_ 313
#define CALLBACK_ 314
#define CANVAS_ 315
#define CATALOG_ 316
#define CELESTIAL_ 317
#define CENTER_ 318
#define CENTROID_ 319
#define CHANNEL_ 320
#define CIRCLE_ 321
#define CIAO_ 322
#define CLEAR_ 323
#define CLIP_ 324
#define COLOR_ 325
#define COLORBURN_ 326
#define COLORDODGE_ 327
#define COLORBAR_ 328
#define COLORMAP_ 329
#define COLORSCALE_ 330
#define COLORSPACE_ 331
#define COLS_ 332
#define COLUMN_ 333
#define COMMAND_ 334
#define COMPASS_ 335
#define COMPOSITE_ 336
#define COMPRESS_ 337
#define CONTOUR_ 338
#define CONTRAST_ 339
#define COORDINATES_ 340
#define COPY_ 341
#define COUNT_ 342
#define CPANDA_ 343
#define CREATE_ 344
#define CROP_ 345
#define CROSS_ 346
#define CROSSHAIR_ 347
#define CUBE_ 348
#define CURSOR_ 349
#define CUT_ 350
#define CMYK_ 351
#define DARKEN_ 352
#define DASH_ 353
#define DASHLIST_ 354
#define DATA_ 355
#define DATAMIN_ 356
#define DATASEC_ 357
#define DEBUG_ 358
#define DEGREES_ 359
#define DEFAULT_ 360
#define DELETE_ 361
#define DEPTH_ 362
#define DETECTOR_ 363
#define DIAMOND_ 364
#define DIFFERENCE_ 365
#define DIM_ 366
#define DOWN_ 367
#define DS9_ 368
#define EDIT_ 369
#define ECLIPTIC_ 370
#define ELEVATION_ 371
#define ELLIPTIC_ 372
#define ELLIPSE_ 373
#define ELLIPSEANNULUS_ 374
#define END_ 375
#define ENVI_ 376
#define EPANDA_ 377
#define EPSILON_ 378
#define EQUATORIAL_ 379
#define ERASE_ 380
#define EXCLUSION_ 381
#define EXT_ 382
#define FADE_ 383
#define FACTOR_ 384
#define FALSE_ 385
#define FILE_ 386
#define FILL_ 387
#define FILTER_ 388
#define FIRST_ 389
#define FIP_ 390
#define FIT_ 391
#define FITS_ 392
#define FITSY_ 393
#define FIXED_ 394
#define FK4_ 395
#define FK5_ 396
#define FONT_ 397
#define FORMAT_ 398
#define FOOTPRINT_ 399
#define FROM_ 400
#define FRONT_ 401
#define FULL_ 402
#define FUNCTION_ 403
#define GALACTIC_ 404
#define GAUSSIAN_ 405
#define GET_ 406
#define GLOBAL_ 407
#define GRAPHICS_ 408
#define GRAY_ 409
#define GRID_ 410
#define GZ_ 411
#define HANDLE_ 412
#define HARDLIGHT_ 413
#define HAS_ 414
#define HEAD_ 415
#define HEADER_ 416
#define HEIGHT_ 417
#define HIDE_ 418
#define HIGHLITE_ 419
#define HISTEQU_ 420
#define HISTOGRAM_ 421
#define HORIZONTAL_ 422
#define HUE_ 423
#define HSV_ 424
#define HLS_ 425
#define ICRS_ 426
#define ID_ 427
#define IIS_ 428
#define IMAGE_ 429
#define INCLUDE_ 430
#define INCR_ 431
#define INFO_ 432
#define ITERATION_ 433
#define IRAF_ 434
#define IRAFMIN_ 435
#define J2000_ 436
#define KEY_ 437
#define KEYWORD_ 438
#define LABEL_ 439
#define LAYER_ 440
#define LAYERNO_ 441
#define LAST_ 442
#define LENGTH_ 443
#define LEVEL_ 444
#define LIGHTEN_ 445
#define LITTLE_ 446
#define LITTLEENDIAN_ 447
#define LINE_ 448
#define LINEAR_ 449
#define LIST_ 450
#define LOAD_ 451
#define LOCAL_ 452
#define LOG_ 453
#define LUMINOSITY_ 454
#define MACOSX_ 455
#define MAGNIFIER_ 456
#define MATCH_ 457
#define MAP_ 458
#define MARK_ 459
#define MARKER_ 460
#define MASK_ 461
#define MEDIAN_ 462
#define MESSAGE_ 463
#define METHOD_ 464
#define MINMAX_ 465
#define MINOR_ 466
#define MIP_ 467
#define MMAP_ 468
#define MMAPINCR_ 469
#define MOSAIC_ 470
#define MODE_ 471
#define MOTION_ 472
#define MULTICOLOR_ 473
#define MULTIPLY_ 474
#define MOVE_ 475
#define NAME_ 476
#define NAN_ 477
#define NATIVE_ 478
#define NAXES_ 479
#define NEW_ 480
#define NEXT_ 481
#define NO_ 482
#define NONE_ 483
#define NORMAL_ 484
#define NONNAN_ 485
#define NONZERO_ 486
#define NOW_ 487
#define NRRD_ 488
#define NUMBER_ 489
#define OBJECT_ 490
#define OFF_ 491
#define ON_ 492
#define ONLY_ 493
#define OPTION_ 494
#define ORIENT_ 495
#define OVERLAY_ 496
#define PAN_ 497
#define PANNER_ 498
#define PARSER_ 499
#define PASTE_ 500
#define PERF_ 501
#define PHOTO_ 502
#define PHYSICAL_ 503
#define PIXEL_ 504
#define PLOT2D_ 505
#define PLOT3D_ 506
#define POINT_ 507
#define POINTER_ 508
#define POLYGON_ 509
#define POSTSCRIPT_ 510
#define POW_ 511
#define PRECISION_ 512
#define PRINT_ 513
#define PRESERVE_ 514
#define PROJECTION_ 515
#define PROPERTY_ 516
#define PUBLICATION_ 517
#define PROS_ 518
#define QUERY_ 519
#define RADIAL_ 520
#define RADIUS_ 521
#define RANGE_ 522
#define REGION_ 523
#define REPLACE_ 524
#define RESAMPLE_ 525
#define RESCAN_ 526
#define RESET_ 527
#define RESOLUTION_ 528
#define REVEAL_ 529
#define RGB_ 530
#define ROOT_ 531
#define ROTATE_ 532
#define RULER_ 533
#define SAMPLE_ 534
#define SAOIMAGE_ 535
#define SAOTNG_ 536
#define SAVE_ 537
#define SATURATION_ 538
#define SCALE_ 539
#define SCAN_ 540
#define SCIENTIFIC_ 541
#define SCOPE_ 542
#define SCREEN_ 543
#define SEGMENT_ 544
#define SELECT_ 545
#define SET_ 546
#define SEXAGESIMAL_ 547
#define SHAPE_ 548
#define SHADE_ 549
#define SHARED_ 550
#define SHIFT_ 551
#define SHMID_ 552
#define SHOW_ 553
#define SIGMA_ 554
#define SINH_ 555
#define SIZE_ 556
#define SLICE_ 557
#define SMMAP_ 558
#define SMOOTH_ 559
#define SOFTLIGHT_ 560
#define SOCKET_ 561
#define SOCKETGZ_ 562
#define SOURCE_ 563
#define SQRT_ 564
#define SQUARED_ 565
#define SSHARED_ 566
#define STATS_ 567
#define STATUS_ 568
#define STRENGTH_ 569
#define SUM_ 570
#define SYNC_ 571
#define SYSTEM_ 572
#define TABLE_ 573
#define TAG_ 574
#define TEMPLATE_ 575
#define TEXT_ 576
#define THREADS_ 577
#define THREED_ 578
#define THRESHOLD_ 579
#define THICK_ 580
#define TOP_ 581
#define TRANSPARENCY_ 582
#define TO_ 583
#define TOGGLE_ 584
#define TOPHAT_ 585
#define TRUE_ 586
#define TYPE_ 587
#define UNDO_ 588
#define UNHIGHLITE_ 589
#define UNLOAD_ 590
#define UNSELECT_ 591
#define UPDATE_ 592
#define UP_ 593
#define USER_ 594
#define VALUE_ 595
#define VAR_ 596
#define VIEW_ 597
#define VECTOR_ 598
#define VERSION_ 599
#define VERTEX_ 600
#define VERTICAL_ 601
#define WARP_ 602
#define WCS_ 603
#define WCSA_ 604
#define WCSB_ 605
#define WCSC_ 606
#define WCSD_ 607
#define WCSE_ 608
#define WCSF_ 609
#define WCSG_ 610
#define WCSH_ 611
#define WCSI_ 612
#define WCSJ_ 613
#define WCSK_ 614
#define WCSL_ 615
#define WCSM_ 616
#define WCSN_ 617
#define WCSO_ 618
#define WCSP_ 619
#define WCSQ_ 620
#define WCSR_ 621
#define WCSS_ 622
#define WCST_ 623
#define WCSU_ 624
#define WCSV_ 625
#define WCSW_ 626
#define WCSX_ 627
#define WCSY_ 628
#define WCSZ_ 629
#define WCS0_ 630
#define WFPC2_ 631
#define WIDTH_ 632
#define WIN32_ 633
#define XML_ 634
#define XY_ 635
#define YES_ 636
#define ZERO_ 637
#define ZMAX_ 638
#define ZSCALE_ 639
#define PIXMASK_ 640
#define ZOOM_ 641
#define FIELDS_ 642




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
#line 931 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 944 "frame/parser.C"

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
#define YYFINAL  407
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6007

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  392
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  245
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1433
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3122

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   642

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
       2,   391,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   389,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   390,   388,
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
     385,   386,   387
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
    1863,  1866,  1869,  1872,  1875,  1878,  1881,  1884,  1887,  1892,
    1897,  1902,  1906,  1910,  1916,  1921,  1926,  1931,  1935,  1939,
    1943,  1947,  1951,  1955,  1958,  1961,  1966,  1970,  1974,  1978,
    1982,  1987,  1992,  1997,  2002,  2008,  2013,  2020,  2028,  2033,
    2038,  2044,  2047,  2051,  2055,  2059,  2063,  2067,  2071,  2075,
    2078,  2082,  2086,  2090,  2094,  2099,  2103,  2109,  2116,  2120,
    2124,  2129,  2133,  2137,  2141,  2145,  2149,  2155,  2159,  2163,
    2168,  2172,  2175,  2178,  2180,  2184,  2189,  2194,  2199,  2204,
    2209,  2216,  2221,  2226,  2232,  2237,  2242,  2247,  2252,  2258,
    2263,  2270,  2278,  2283,  2288,  2294,  2300,  2306,  2312,  2318,
    2324,  2332,  2338,  2344,  2351,  2356,  2361,  2366,  2371,  2376,
    2383,  2388,  2393,  2399,  2405,  2411,  2417,  2423,  2430,  2436,
    2444,  2453,  2459,  2465,  2472,  2476,  2480,  2484,  2488,  2493,
    2497,  2503,  2510,  2514,  2518,  2523,  2527,  2531,  2535,  2539,
    2543,  2549,  2553,  2557,  2562,  2567,  2572,  2576,  2582,  2587,
    2592,  2597,  2600,  2604,  2611,  2618,  2620,  2622,  2624,  2627,
    2630,  2633,  2637,  2641,  2644,  2657,  2660,  2663,  2665,  2669,
    2674,  2677,  2678,  2682,  2684,  2687,  2690,  2693,  2696,  2699,
    2704,  2709,  2714,  2719,  2723,  2727,  2732,  2738,  2747,  2754,
    2764,  2771,  2779,  2790,  2802,  2815,  2825,  2831,  2838,  2842,
    2848,  2854,  2861,  2867,  2872,  2877,  2882,  2892,  2903,  2915,
    2925,  2932,  2939,  2946,  2953,  2960,  2967,  2974,  2981,  2988,
    2996,  3004,  3007,  3012,  3017,  3022,  3027,  3033,  3038,  3043,
    3049,  3055,  3059,  3064,  3069,  3074,  3082,  3092,  3099,  3110,
    3122,  3135,  3145,  3149,  3152,  3156,  3162,  3170,  3175,  3179,
    3183,  3190,  3198,  3206,  3214,  3219,  3224,  3234,  3239,  3243,
    3248,  3256,  3264,  3267,  3271,  3275,  3279,  3284,  3287,  3290,
    3295,  3306,  3310,  3315,  3317,  3321,  3324,  3327,  3330,  3333,
    3337,  3343,  3348,  3354,  3357,  3360,  3363,  3366,  3370,  3373,
    3376,  3379,  3383,  3386,  3390,  3395,  3399,  3403,  3410,  3415,
    3418,  3422,  3425,  3428,  3433,  3437,  3441,  3444,  3448,  3450,
    3453,  3455,  3458,  3461,  3464,  3468,  3470,  3472,  3474,  3476,
    3479,  3481,  3484,  3487,  3489,  3492,  3495,  3497,  3500,  3502,
    3504,  3506,  3508,  3510,  3512,  3514,  3516,  3517,  3519,  3522,
    3525,  3528,  3532,  3538,  3546,  3554,  3561,  3568,  3575,  3582,
    3588,  3595,  3602,  3609,  3616,  3623,  3630,  3637,  3649,  3657,
    3665,  3673,  3683,  3693,  3704,  3717,  3730,  3734,  3737,  3738,
    3740,  3744,  3749,  3754,  3759,  3760,  3762,  3764,  3769,  3774,
    3776,  3778,  3780,  3782,  3784,  3786,  3788,  3790,  3793,  3795,
    3797,  3799,  3803,  3807,  3816,  3823,  3834,  3842,  3850,  3856,
    3863,  3870,  3874,  3877,  3880,  3884,  3889,  3895,  3901,  3907,
    3911,  3916,  3922,  3928,  3934,  3940,  3943,  3947,  3951,  3957,
    3961,  3965,  3969,  3973,  3977,  3982,  3988,  3994,  4000,  4006,
    4010,  4015,  4021,  4027,  4030,  4033,  4037,  4043,  4050,  4057,
    4061,  4065,  4072,  4079,  4085,  4091,  4094,  4098,  4102,  4108,
    4115,  4119,  4122,  4125,  4129,  4132,  4136,  4139,  4143,  4149,
    4156,  4159,  4162,  4165,  4168,  4170,  4175,  4180,  4182,  4185,
    4188,  4191,  4194,  4197,  4200,  4203,  4207,  4210,  4214,  4217,
    4221,  4223,  4225,  4227,  4229,  4231,  4233,  4234,  4237,  4238,
    4241,  4242,  4244,  4245,  4246,  4248,  4250,  4252,  4254,  4256,
    4264,  4273,  4276,  4283,  4286,  4293,  4296,  4300,  4303,  4305,
    4307,  4311,  4315,  4317,  4322,  4325,  4327,  4331,  4335,  4340,
    4344,  4348,  4352,  4354,  4356,  4358,  4360,  4362,  4364,  4366,
    4368,  4370,  4372,  4374,  4376,  4378,  4380,  4382,  4385,  4386,
    4387,  4390,  4397,  4405,  4408,  4410,  4414,  4416,  4420,  4422,
    4424,  4426,  4429,  4432,  4434,  4438,  4439,  4440,  4443,  4446,
    4448,  4452,  4458,  4459,  4461,  4463,  4466,  4469,  4473,  4476,
    4480,  4483,  4487,  4490,  4494,  4496,  4499,  4501,  4504,  4506,
    4509,  4511,  4514,  4516,  4519,  4521,  4524,  4526,  4529,  4531,
    4534,  4537,  4541,  4544,  4547,  4550,  4553,  4555,  4557,  4559,
    4561,  4566,  4569,  4573,  4577,  4580,  4584,  4587,  4590,  4593,
    4597,  4601,  4605,  4608,  4612,  4614,  4618,  4622,  4624,  4627,
    4630,  4633,  4636,  4646,  4653,  4655,  4657,  4659,  4661,  4664,
    4667,  4671,  4675,  4677,  4680,  4684,  4688,  4690,  4693,  4695,
    4697,  4699,  4701,  4703,  4705,  4707,  4709,  4712,  4715,  4720,
    4723,  4726,  4729,  4732,  4735,  4740,  4743,  4746,  4749,  4752,
    4755,  4760,  4762,  4765,  4768,  4771,  4775,  4777,  4779,  4781,
    4784,  4787,  4790,  4793,  4796,  4799,  4802,  4805,  4808,  4812,
    4816,  4820,  4824,  4828,  4832,  4834,  4837,  4840,  4843,  4847,
    4850,  4854,  4858,  4862,  4866,  4870,  4874,  4877,  4880,  4883,
    4886,  4889,  4892,  4895,  4898,  4901,  4904,  4907,  4910,  4913,
    4916,  4920,  4924,  4928,  4931,  4934,  4937,  4941,  4945,  4949,
    4952,  4955,  4958,  4961,  4964,  4967,  4971,  4975,  4979,  4982,
    4985,  4988,  4991,  4994,  4997,  5001,  5005,  5009,  5012,  5015,
    5018,  5021,  5024,  5027,  5030,  5033,  5036,  5040,  5044,  5048,
    5053,  5060,  5063,  5065,  5067,  5069,  5071,  5073,  5074,  5080,
    5082,  5089,  5093,  5095,  5098,  5101,  5104,  5108,  5112,  5115,
    5118,  5121,  5124,  5127,  5130,  5134,  5137,  5140,  5144,  5146,
    5150,  5155,  5158,  5160,  5163,  5169,  5176,  5183,  5186,  5188,
    5191,  5194,  5200,  5207
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     393,     0,    -1,   103,   395,    -1,    46,   429,    -1,    43,
      70,     5,    -1,    43,    70,   396,    -1,    49,   434,    -1,
      63,    -1,    68,    -1,    69,   436,    -1,    73,   319,     5,
      -1,    74,   441,    -1,    75,   443,    -1,    83,   444,    -1,
      90,   453,    -1,    92,   455,    -1,    93,   456,    -1,   102,
     396,    -1,   128,   458,    -1,   138,   459,    -1,   151,   460,
      -1,   155,   511,    -1,   159,   514,    -1,   163,    -1,   164,
     396,    -1,   164,    70,     5,    -1,   169,   600,    -1,   170,
     599,    -1,   173,   520,    -1,   179,    15,     4,    -1,   196,
     523,    -1,   200,   542,    -1,   201,   543,    -1,   202,   544,
      -1,   205,   561,   545,    -1,   206,   582,    -1,   185,   581,
      -1,   218,   598,    -1,   222,    70,     5,    -1,   240,   583,
      -1,   242,   584,    -1,   243,   587,    -1,   264,    94,    -1,
     257,   589,    -1,   255,   588,    -1,   272,    -1,   268,   561,
     591,    -1,   274,   596,    -1,   275,   597,    -1,   277,   601,
      -1,   282,   603,    -1,   298,    -1,   304,   625,    -1,   322,
       4,    -1,   323,   422,    -1,   335,    -1,   337,   627,    -1,
     344,    -1,   347,   629,    -1,   348,   630,    -1,   378,   634,
      -1,   386,   635,    -1,     3,    -1,     4,    -1,   396,    -1,
     215,   396,    -1,   244,   396,    -1,   246,   396,    -1,   348,
     396,    -1,    46,   396,    -1,    49,   396,    -1,    82,   396,
      -1,    90,   396,    -1,   156,   396,    -1,   275,   396,    -1,
       4,    -1,   381,    -1,   388,    -1,   237,    -1,   331,    -1,
     227,    -1,   389,    -1,   236,    -1,   130,    -1,    -1,   276,
      40,    -1,   147,    40,    -1,   276,    -1,   147,    -1,    -1,
     399,    -1,   394,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   400,   400,    -1,   401,   402,    -1,
     402,   402,    -1,   394,   394,    -1,   174,    -1,   248,    -1,
     108,    -1,    19,    -1,   405,    -1,   348,    -1,   349,    -1,
     350,    -1,   351,    -1,   352,    -1,   353,    -1,   354,    -1,
     355,    -1,   356,    -1,   357,    -1,   358,    -1,   359,    -1,
     360,    -1,   361,    -1,   362,    -1,   363,    -1,   364,    -1,
     365,    -1,   366,    -1,   367,    -1,   368,    -1,   369,    -1,
     370,    -1,   371,    -1,   372,    -1,   373,    -1,   374,    -1,
     375,    -1,    60,    -1,   243,    -1,    -1,   382,    -1,   231,
      -1,   222,    -1,   230,    -1,   267,    -1,    -1,   308,    -1,
     219,    -1,   288,    -1,   241,    -1,    97,    -1,   190,    -1,
      72,    -1,    71,    -1,   158,    -1,   305,    -1,   110,    -1,
     126,    -1,   168,    -1,   283,    -1,    70,    -1,   199,    -1,
     194,    -1,   198,    -1,   256,    -1,   309,    -1,   310,    -1,
      30,    -1,   300,    -1,   165,    -1,    32,    -1,   285,    -1,
     279,    -1,   101,    -1,   180,    -1,    -1,   140,    -1,    37,
      -1,   141,    -1,   181,    -1,   171,    -1,   149,    -1,   115,
      -1,    -1,   104,    -1,   292,    -1,    -1,   104,    -1,    24,
      -1,    25,    -1,    -1,   297,    -1,   182,    -1,    -1,    16,
      -1,   176,    -1,    -1,   174,    -1,   206,    -1,    -1,    66,
      -1,    52,    -1,   109,    -1,    91,    -1,   390,    -1,    27,
      -1,    55,    -1,    -1,     4,    -1,    88,    -1,   166,    -1,
     250,    -1,   251,    -1,   265,    -1,   312,    -1,    -1,    34,
      -1,   315,    -1,   207,    -1,    -1,   223,    -1,    44,    -1,
      45,    -1,   191,    -1,   192,    -1,   342,   428,    -1,    50,
     425,    -1,    80,   426,    -1,   164,   427,    -1,   209,   594,
      -1,    39,   595,    -1,   294,   423,    -1,   284,   394,    -1,
     316,     4,    -1,   324,   394,    -1,   396,    -1,    18,   394,
      -1,   314,   394,    -1,   229,   424,    -1,   396,    -1,   314,
     394,    -1,   396,    -1,    70,     5,    -1,   396,    -1,    70,
       5,    -1,   396,    -1,    70,     5,    -1,   394,   394,    -1,
     252,   394,   394,   394,   394,   394,    -1,    11,   430,    -1,
      77,     5,     5,     5,    -1,   107,     4,    -1,   129,   431,
      -1,   148,   432,    -1,    57,   301,     4,    -1,   328,   433,
      -1,   133,     5,    -1,    63,    -1,   394,   394,    -1,   394,
      -1,   394,   394,    -1,   394,    11,   394,   394,    -1,   394,
     394,    11,   394,   394,    -1,   328,   394,    -1,   328,   394,
     394,    -1,   328,   394,    11,   394,   394,    -1,   328,   394,
     394,    11,   394,   394,    -1,    34,    -1,   315,    -1,   136,
      -1,   394,   394,    11,    63,     5,     5,     5,    -1,   394,
     394,     4,   394,   394,    11,    63,     5,     5,     5,     5,
      -1,   394,   394,    11,   394,   394,     5,     5,     5,    -1,
     394,   394,     4,   394,   394,    11,   394,   394,     5,     5,
       5,     5,    -1,   394,    -1,   394,   394,    -1,   328,   435,
      -1,   136,    -1,   394,    -1,   394,   394,    -1,   287,   437,
      -1,   216,   438,    -1,   210,   439,    -1,   339,   394,   394,
      -1,   339,   222,   222,    -1,   384,   440,    -1,   259,   396,
      -1,   152,    -1,   197,    -1,   394,    -1,   210,    -1,   384,
      -1,   383,    -1,   339,    -1,     4,   410,    -1,   216,   410,
      -1,   279,     4,    -1,   271,    -1,   394,     4,     4,    -1,
      84,   394,    -1,   279,     4,    -1,   193,     4,    -1,     4,
     394,   394,     4,     4,    -1,   275,   394,   394,   394,   394,
     394,   394,     4,     4,    -1,   169,   394,   394,   394,   394,
     394,   394,     4,     4,    -1,   170,   394,   394,   394,   394,
     394,   394,     4,     4,    -1,   218,     4,     4,     5,     5,
       5,     4,    -1,    42,    -1,   217,   442,    -1,   120,    -1,
       4,   394,   394,     4,     4,    -1,   275,   394,   394,   394,
     394,   394,   394,     4,     4,    -1,   169,   394,   394,   394,
     394,   394,   394,     4,     4,    -1,   170,   394,   394,   394,
     394,   394,   394,     4,     4,    -1,   218,     4,     4,     5,
       5,     5,     4,    -1,   409,    -1,   198,   394,    -1,    89,
     445,    -1,    99,     4,     4,    -1,   106,   446,    -1,   196,
     447,    -1,   245,   451,    -1,   282,   452,    -1,     5,     4,
       4,   450,     4,     4,   409,   394,   448,   449,   394,   394,
       5,    -1,     5,     4,     4,   450,     4,     4,   409,   394,
     394,   449,   394,   394,     5,    -1,     5,     4,     4,   450,
       4,     4,   409,   394,   448,   394,   394,     5,    -1,     5,
       4,     4,   450,     4,     4,   409,   394,   394,   394,   394,
       5,    -1,   254,    -1,    -1,    33,    -1,     5,    -1,     5,
       5,     4,   396,    -1,     5,     4,   396,     5,   404,   411,
      -1,   210,    -1,   384,    -1,   383,    -1,   339,    -1,   152,
      -1,   197,    -1,   304,    -1,    49,    -1,     5,    -1,     5,
       5,     4,   396,    -1,     5,     5,     4,   396,     4,     4,
      -1,     5,   404,   411,    -1,    33,     5,   404,   411,    -1,
      -1,   394,   394,   394,   394,   404,   411,    -1,    63,   403,
     404,   411,   394,   394,   404,   413,    -1,   323,   454,    -1,
      42,   394,   394,    -1,   217,   394,   394,    -1,   120,   394,
     394,    -1,    -1,   394,   394,   404,   411,    -1,    42,   394,
     394,     4,    -1,   217,   394,   394,     4,    -1,   120,   394,
     394,     4,    -1,   406,   394,   394,    -1,   404,   411,   403,
      -1,   396,    -1,   347,   394,   394,    -1,    42,   217,   406,
     394,   394,    -1,   217,   406,   394,   394,    -1,    42,   217,
     404,   403,    -1,   217,   404,   403,    -1,    35,     4,    -1,
      -1,    34,    -1,   315,    -1,   207,    -1,   394,    -1,    68,
      -1,   159,   127,     5,    -1,    -1,    43,    70,    -1,    46,
     463,    -1,    49,   465,    -1,    69,   466,    -1,    74,   470,
      -1,    73,   469,    -1,    75,   472,    -1,    83,   474,    -1,
      85,   477,    -1,    90,   478,    -1,    92,   479,    -1,    94,
     481,    -1,    93,   480,    -1,   100,   482,    -1,   102,    -1,
     137,   486,    -1,   155,   492,    -1,   164,    70,    -1,   166,
       5,     5,     4,    -1,   167,    95,   461,    -1,   169,   500,
      -1,   170,   499,    -1,   173,   484,    -1,   177,   483,    -1,
     179,    15,    -1,   210,    -1,   205,   561,   555,    -1,   206,
     494,    -1,   185,   493,    -1,   218,   498,    -1,   222,    70,
      -1,   240,    -1,   242,   496,    -1,   249,   318,   406,   394,
     394,     4,     4,     5,    -1,   275,   497,    -1,   277,    -1,
     304,   501,    -1,   322,    -1,   323,   502,    -1,   332,    -1,
     340,   406,   394,   394,    -1,   346,    95,   462,    -1,   348,
     509,    -1,   386,    -1,     5,     5,   394,   394,   406,     4,
     457,    -1,     5,     5,   394,   394,   404,   411,     4,   457,
      -1,     5,     5,   394,   394,   406,     4,   457,    -1,     5,
       5,   394,   394,   404,   411,     4,   457,    -1,   107,    -1,
     129,    -1,   148,    -1,    57,   301,    -1,    94,    -1,   133,
      -1,    77,   464,    -1,   195,    -1,    -1,   210,     5,    -1,
     111,     5,    -1,   129,    -1,    -1,   448,   449,    -1,   394,
     449,    -1,   287,    -1,   216,    -1,   210,   467,    -1,   339,
     189,    -1,   384,   468,    -1,   259,    -1,   216,    -1,   279,
      -1,    84,    -1,   279,    -1,   193,    -1,    -1,   319,    -1,
     189,   471,    -1,     4,    -1,     4,   406,   394,   394,    -1,
       4,   394,   394,   409,   394,    -1,    -1,   189,   473,    -1,
     198,    -1,     4,   394,   394,   409,   394,    -1,   404,   411,
      -1,    69,   475,    -1,    70,    -1,    98,    -1,    99,    -1,
     189,    -1,   234,   189,    -1,   209,    -1,    75,   476,    -1,
     304,    -1,   377,    -1,    -1,   216,    -1,   287,    -1,    -1,
     198,    -1,   394,   394,   404,   411,   412,    -1,   406,   394,
     394,   404,   411,   412,    -1,   404,   411,   412,    -1,    63,
     404,   411,   412,   404,   413,    -1,   323,   404,   411,    -1,
     406,    -1,   404,   411,   412,    -1,   313,    -1,    35,    -1,
     406,    -1,   404,   411,   412,    -1,   404,   411,   403,   394,
     394,     5,    -1,     4,   404,   411,   403,   394,   394,     5,
      -1,   406,   394,   394,     4,     4,    -1,     5,   397,    -1,
      69,    -1,   406,   394,   394,     5,   397,    -1,     4,     4,
       4,     4,    -1,    94,    -1,   131,   221,   485,    -1,    -1,
       4,    -1,   394,   394,    -1,   224,    -1,    63,   404,   411,
     412,    -1,    87,    -1,   107,   489,    -1,    47,    -1,   127,
     487,    -1,   131,   221,   490,    -1,   161,   488,    -1,   162,
      -1,   235,   221,    -1,   301,    -1,   301,   404,   411,   413,
      -1,   302,   491,    -1,   377,    -1,     4,    -1,   406,   394,
     394,    -1,     4,    -1,   183,     5,    -1,     4,   183,     5,
      -1,   348,     4,    -1,    -1,     4,    -1,   397,    -1,   397,
     406,   394,   394,    -1,   397,     4,    -1,    -1,     4,    -1,
     145,   174,   404,    -1,   145,   174,     4,   404,    -1,   328,
     174,   394,   404,    -1,    -1,   239,    -1,   341,    -1,    87,
      -1,   186,    -1,    70,   495,    -1,    48,   495,    -1,   327,
     495,    -1,   342,   495,    -1,    70,    -1,   204,    -1,   267,
      -1,   317,    -1,   327,    -1,    87,    -1,    48,    -1,    -1,
       4,    -1,   259,    -1,    65,    -1,   317,    -1,   342,    -1,
     317,    -1,    65,    -1,   317,    -1,   342,    -1,    65,    -1,
     317,    -1,   342,    -1,   148,    -1,   266,    -1,   266,   211,
      -1,   299,    -1,   299,   211,    -1,    21,    -1,   342,   508,
      -1,    50,   505,    -1,    80,   506,    -1,   164,   507,    -1,
     209,    -1,    39,    -1,   294,   503,    -1,   284,    -1,    -1,
      18,    -1,   314,    -1,   229,   504,    -1,    -1,   314,    -1,
      -1,    70,    -1,    -1,    70,    -1,    -1,    70,    -1,    -1,
     252,    -1,    -1,    15,   510,    -1,   221,   405,    -1,    -1,
     253,    -1,    89,   512,    -1,   106,    -1,   404,   411,   412,
     513,     5,     5,    -1,   404,   411,   412,   513,     5,    -1,
      20,    -1,   262,    -1,    19,    -1,    43,    70,    -1,    46,
     515,    -1,    83,   516,    -1,    90,    -1,   101,    -1,   102,
      -1,   108,    -1,   137,   517,    -1,   155,    -1,   173,    -1,
     180,    -1,   205,   518,    -1,   248,    -1,   174,    -1,   304,
      -1,   317,   404,    -1,   348,   519,    -1,    78,     5,    -1,
      -1,    33,    -1,    -1,    46,    -1,    93,    -1,   215,    -1,
     164,    -1,   290,    -1,   245,    -1,   333,    -1,   404,    -1,
      62,   404,    -1,   124,   404,    -1,   194,   404,    -1,    17,
      -1,   323,   404,    -1,   225,     4,     4,    -1,   125,    -1,
     208,     5,    -1,    94,   522,    -1,   291,   131,   221,   521,
      -1,   291,     4,     4,     4,     4,    -1,   337,    -1,   348,
     394,   394,   394,   394,   394,   394,   394,   394,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    60,    -1,     4,
       4,   404,    -1,   216,   396,    -1,    26,   524,    -1,    29,
     539,    -1,   121,   526,    -1,   137,   527,    -1,   176,   541,
      -1,   233,   538,    -1,   247,   540,    -1,     5,    13,     5,
     416,    -1,     5,    14,     5,   416,    -1,     5,    65,     5,
     416,    -1,     5,   213,   416,    -1,     5,   214,   416,    -1,
       5,   295,   414,     4,   416,    -1,     5,   306,     4,   416,
      -1,     5,   307,     4,   416,    -1,     5,   341,     5,   416,
      -1,   275,    93,   525,    -1,   170,    93,   525,    -1,   169,
      93,   525,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    65,     5,    -1,     5,   213,    -1,     5,   214,
      -1,     5,   295,   414,     4,    -1,     5,   306,     4,    -1,
       5,   307,     4,    -1,     5,   341,     5,    -1,     5,     5,
     303,    -1,     5,    13,     5,   416,    -1,     5,    14,     5,
     416,    -1,     5,    65,     5,   416,    -1,     5,   213,   415,
     416,    -1,     5,     5,   303,   415,   416,    -1,     5,   214,
     415,   416,    -1,     5,   295,   414,     4,   415,   416,    -1,
       5,   311,   414,     4,     4,   415,   416,    -1,     5,   306,
       4,   416,    -1,     5,   307,     4,   416,    -1,     5,   341,
       5,   415,   416,    -1,   302,   528,    -1,   127,    93,   529,
      -1,   275,   174,   537,    -1,   275,    93,   536,    -1,   170,
     174,   537,    -1,   170,    93,   536,    -1,   169,   174,   537,
      -1,   169,    93,   536,    -1,   215,   530,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    65,     5,    -1,
       5,   213,   415,    -1,     5,     5,   303,   415,    -1,     5,
     214,   415,    -1,     5,   295,   414,     4,   415,    -1,     5,
     311,   414,     4,     4,   415,    -1,     5,   306,     4,    -1,
       5,   307,     4,    -1,     5,   341,     5,   415,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    65,     5,
      -1,     5,   213,   415,    -1,     5,   214,   415,    -1,     5,
     295,   414,     4,   415,    -1,     5,   306,     4,    -1,     5,
     307,     4,    -1,     5,   341,     5,   415,    -1,   174,   179,
     531,    -1,   179,   532,    -1,   174,   533,    -1,   535,    -1,
     174,   376,   534,    -1,     5,    13,     5,   416,    -1,     5,
      14,     5,   416,    -1,     5,    65,     5,   416,    -1,     5,
     213,   415,   416,    -1,     5,   214,   415,   416,    -1,     5,
     295,   414,     4,   415,   416,    -1,     5,   306,     4,   416,
      -1,     5,   307,     4,   416,    -1,     5,   341,     5,   415,
     416,    -1,     5,    13,     5,   416,    -1,     5,    14,     5,
     416,    -1,     5,    65,     5,   416,    -1,     5,   213,   415,
     416,    -1,     5,     5,   303,   415,   416,    -1,     5,   214,
     415,   416,    -1,     5,   295,   414,     4,   415,   416,    -1,
       5,   311,   414,     4,     4,   415,   416,    -1,     5,   306,
       4,   416,    -1,     5,   307,     4,   416,    -1,     5,   341,
       5,   415,   416,    -1,   405,     5,    13,     5,   416,    -1,
     405,     5,    14,     5,   416,    -1,   405,     5,    65,     5,
     416,    -1,   405,     5,   213,   415,   416,    -1,   405,     5,
     214,   415,   416,    -1,   405,     5,   295,   414,     4,   415,
     416,    -1,   405,     5,   306,     4,   416,    -1,   405,     5,
     307,     4,   416,    -1,   405,     5,   341,     5,   415,   416,
      -1,     5,    13,     5,   416,    -1,     5,    14,     5,   416,
      -1,     5,    65,     5,   416,    -1,     5,   213,   415,   416,
      -1,     5,   214,   415,   416,    -1,     5,   295,   414,     4,
     415,   416,    -1,     5,   306,     4,   416,    -1,     5,   307,
       4,   416,    -1,     5,   341,     5,   415,   416,    -1,   405,
       5,    13,     5,   416,    -1,   405,     5,    14,     5,   416,
      -1,   405,     5,    65,     5,   416,    -1,   405,     5,   213,
     415,   416,    -1,   405,     5,     5,   303,   415,   416,    -1,
     405,     5,   214,   415,   416,    -1,   405,     5,   295,   414,
       4,   415,   416,    -1,   405,     5,   311,   414,     4,     4,
     415,   416,    -1,   405,     5,   306,     4,   416,    -1,   405,
       5,   307,     4,   416,    -1,   405,     5,   341,     5,   415,
     416,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    65,     5,    -1,     5,   213,   415,    -1,     5,     5,
     303,   415,    -1,     5,   214,   415,    -1,     5,   295,   414,
       4,   415,    -1,     5,   311,   414,     4,     4,   415,    -1,
       5,   306,     4,    -1,     5,   307,     4,    -1,     5,   341,
       5,   415,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    65,     5,    -1,     5,   213,   415,    -1,     5,
     214,   415,    -1,     5,   295,   414,     4,   415,    -1,     5,
     306,     4,    -1,     5,   307,     4,    -1,     5,   341,     5,
     415,    -1,     5,    13,     5,   416,    -1,     5,    65,     5,
     416,    -1,     5,   213,   416,    -1,     5,   295,   414,     4,
     416,    -1,     5,   306,     4,   416,    -1,     5,   341,     5,
     416,    -1,     5,     5,     5,   416,    -1,     5,     5,    -1,
     302,     5,     5,    -1,   100,     4,     4,     4,     4,     4,
      -1,   210,     4,     4,     4,     4,     4,    -1,   120,    -1,
     258,    -1,   396,    -1,   153,   396,    -1,    94,   396,    -1,
      70,     5,    -1,     5,     4,     4,    -1,   337,   394,   394,
      -1,   386,   394,    -1,     5,     5,   405,   411,     5,     5,
     405,   411,   394,   405,   413,     5,    -1,    64,   548,    -1,
      70,     5,    -1,    86,    -1,    79,   554,     5,    -1,    79,
     554,   341,     5,    -1,    81,   106,    -1,    -1,    89,   546,
     549,    -1,    95,    -1,   106,   552,    -1,   114,   553,    -1,
     123,     4,    -1,   142,     5,    -1,   164,    16,    -1,   164,
     238,   394,   394,    -1,   164,   329,   394,   394,    -1,     4,
      20,   419,   396,    -1,    20,   312,    59,     5,    -1,    20,
     312,    59,    -1,     4,    21,   399,    -1,     4,    21,   399,
     406,    -1,     4,    21,   399,   404,   411,    -1,     4,    22,
     266,   394,   394,     4,   404,   413,    -1,     4,    22,   266,
       5,   404,   413,    -1,     4,    53,   266,   394,   394,   394,
       4,   404,   413,    -1,     4,    53,   266,     5,   404,   413,
      -1,     4,    52,   266,   394,   394,   404,   413,    -1,     4,
      56,   114,   399,   399,     4,   394,   394,   394,     4,    -1,
       4,    56,   114,   399,   399,     4,   394,   394,   394,     4,
     406,    -1,     4,    56,   114,   399,   399,     4,   394,   394,
     394,     4,   404,   411,    -1,     4,    56,   114,     5,     5,
     404,   411,   404,   413,    -1,     4,    59,   547,     5,     5,
      -1,     4,    66,   266,   394,   404,   413,    -1,     4,    70,
       5,    -1,     4,    80,    27,   396,   396,    -1,     4,    80,
     184,     5,     5,    -1,     4,    80,   266,   394,   404,   413,
      -1,     4,    80,   317,   404,   411,    -1,     4,    81,   152,
     396,    -1,     4,    81,    28,   396,    -1,     4,    81,   332,
       5,    -1,     4,    88,   114,   399,   399,     4,   394,   394,
       4,    -1,     4,    88,   114,   399,   399,     4,   394,   394,
       4,   406,    -1,     4,    88,   114,   399,   399,     4,   394,
     394,     4,   404,   411,    -1,     4,    88,   114,     5,     5,
     404,   411,   404,   413,    -1,     4,    89,    22,   266,   394,
     394,    -1,     4,    89,    53,   266,   394,   394,    -1,     4,
      89,    56,    21,   394,   394,    -1,     4,    89,    56,   266,
     394,   394,    -1,     4,    89,   119,   266,   394,   394,    -1,
       4,    89,   122,    21,   394,   394,    -1,     4,    89,   122,
     266,   394,   394,    -1,     4,    89,    88,    21,   394,   394,
      -1,     4,    89,    88,   266,   394,   394,    -1,     4,    89,
     254,   345,     4,   394,   394,    -1,     4,    89,   289,   345,
       4,   394,   394,    -1,     4,   106,    -1,     4,   106,    22,
       4,    -1,     4,   106,    53,     4,    -1,     4,   106,    56,
       4,    -1,     4,   106,   119,     4,    -1,     4,   106,    59,
     547,     5,    -1,     4,   106,   122,     4,    -1,     4,   106,
      88,     4,    -1,     4,   106,   254,   345,     4,    -1,     4,
     106,   289,   345,     4,    -1,     4,   106,   319,    -1,     4,
     106,   319,     5,    -1,     4,   106,   319,     4,    -1,     4,
     114,    42,     4,    -1,     4,   118,   266,   394,   394,   404,
     413,    -1,     4,   119,   266,   394,   394,   394,     4,   404,
     413,    -1,     4,   119,   266,     5,   404,   413,    -1,     4,
     122,   114,   399,   399,     4,   394,   394,   394,     4,    -1,
       4,   122,   114,   399,   399,     4,   394,   394,   394,     4,
     406,    -1,     4,   122,   114,   399,   399,     4,   394,   394,
     394,     4,   404,   411,    -1,     4,   122,   114,     5,     5,
     404,   411,   404,   413,    -1,     4,   142,     5,    -1,     4,
     164,    -1,     4,   164,   238,    -1,     4,   193,    27,   396,
     396,    -1,     4,   193,   252,   404,   411,   403,   403,    -1,
       4,   220,   394,   394,    -1,     4,   220,   146,    -1,     4,
     220,    38,    -1,     4,   220,   328,   404,   411,   403,    -1,
       4,   254,   252,   404,   411,   412,     5,    -1,     4,   254,
     272,   394,   394,   404,   413,    -1,     4,   289,   272,   394,
     394,   404,   413,    -1,     4,   252,   293,   417,    -1,     4,
     252,   301,     4,    -1,     4,   260,   404,   411,   403,   403,
     394,   404,   413,    -1,     4,   261,   567,   396,    -1,     4,
     277,    42,    -1,     4,   278,   143,     5,    -1,     4,   278,
     252,   404,   411,   403,   403,    -1,     4,   278,   317,   404,
     411,   404,   413,    -1,     4,   290,    -1,     4,   290,   238,
      -1,     4,   319,     5,    -1,     4,   321,     5,    -1,     4,
     321,   277,   396,    -1,     4,   334,    -1,     4,   336,    -1,
       4,   343,    27,   396,    -1,     4,   343,   252,   404,   411,
     403,   404,   413,   394,   399,    -1,     4,   377,     4,    -1,
       4,    99,     4,     4,    -1,   182,    -1,   182,   394,   394,
      -1,   195,   562,    -1,   196,   563,    -1,   220,   564,    -1,
     259,   396,    -1,   261,   567,   396,    -1,   261,   567,   396,
     394,   394,    -1,   277,    42,   394,   394,    -1,   277,   217,
     394,   394,     4,    -1,   277,   120,    -1,   282,   571,    -1,
     290,   572,    -1,   298,   573,    -1,     5,    70,     5,    -1,
       5,    86,    -1,     5,   106,    -1,     5,    95,    -1,     5,
     142,     5,    -1,     5,   164,    -1,     5,   164,   238,    -1,
       5,   220,   394,   394,    -1,     5,   220,   146,    -1,     5,
     220,    38,    -1,     5,   220,   328,   404,   411,   403,    -1,
       5,   261,   567,   396,    -1,     5,   290,    -1,     5,   290,
     238,    -1,     5,   334,    -1,     5,   336,    -1,   319,   114,
       5,     5,    -1,   319,   106,     5,    -1,   319,   106,    16,
      -1,   319,     5,    -1,   319,   337,     5,    -1,   245,    -1,
     245,   404,    -1,   333,    -1,   334,    16,    -1,   336,    16,
      -1,   377,     4,    -1,    99,     4,     4,    -1,   290,    -1,
     336,    -1,   164,    -1,   334,    -1,    42,   220,    -1,   220,
      -1,   120,   220,    -1,    42,   114,    -1,   114,    -1,   120,
     114,    -1,    42,   277,    -1,   277,    -1,   120,   277,    -1,
     106,    -1,   321,    -1,    70,    -1,   377,    -1,   261,    -1,
     142,    -1,   182,    -1,   337,    -1,    -1,     4,    -1,    32,
     396,    -1,   266,   394,    -1,   178,     4,    -1,   239,     4,
     394,    -1,    66,   394,   394,   394,   568,    -1,   118,   394,
     394,   394,   394,   398,   568,    -1,    52,   394,   394,   394,
     394,   398,   568,    -1,   254,   394,   394,   394,   394,   568,
      -1,   289,   394,   394,   394,   394,   568,    -1,   193,   394,
     394,   394,   394,   568,    -1,   343,   394,   394,   394,   394,
     568,    -1,   321,   394,   394,   398,   568,    -1,    66,   252,
     394,   394,   418,   568,    -1,    52,   252,   394,   394,   418,
     568,    -1,   109,   252,   394,   394,   418,   568,    -1,    91,
     252,   394,   394,   418,   568,    -1,   390,   252,   394,   394,
     418,   568,    -1,    27,   252,   394,   394,   418,   568,    -1,
      55,   252,   394,   394,   418,   568,    -1,   278,   394,   394,
     394,   394,   404,   411,   404,   413,     5,   568,    -1,    80,
     394,   394,   394,   404,   411,   568,    -1,   260,   394,   394,
     394,   394,   394,   568,    -1,    22,   394,   394,   394,   394,
       4,   568,    -1,   119,   394,   394,   394,   394,   394,     4,
     398,   568,    -1,    53,   394,   394,   394,   394,   394,     4,
     398,   568,    -1,    88,   394,   394,   399,   399,     4,   394,
     394,     4,   568,    -1,   122,   394,   394,   399,   399,     4,
     394,   394,   394,     4,   398,   568,    -1,    56,   394,   394,
     399,   399,     4,   394,   394,   394,     4,   398,   568,    -1,
      81,   550,   568,    -1,   320,   551,    -1,    -1,     4,    -1,
       5,   394,   394,    -1,   341,     5,   394,   394,    -1,   394,
     394,   341,     5,    -1,     5,   404,   411,   403,    -1,    -1,
     290,    -1,    16,    -1,    42,   394,   394,     4,    -1,   217,
     394,   394,     4,    -1,   120,    -1,   113,    -1,   379,    -1,
      67,    -1,   281,    -1,   280,    -1,   263,    -1,   380,    -1,
      64,   556,    -1,    70,    -1,   142,    -1,   123,    -1,   157,
     394,   394,    -1,   172,   394,   394,    -1,     4,    20,    88,
       5,     5,     5,   404,     4,    -1,     4,    20,   166,     5,
       5,     4,    -1,     4,    20,   250,     5,     5,     5,     5,
     404,   411,   420,    -1,     4,    20,   251,     5,     5,   404,
     420,    -1,     4,    20,   265,     5,     5,     5,   404,    -1,
       4,    20,   312,   404,   411,    -1,     4,    20,   312,   100,
     404,   411,    -1,    20,   312,    16,   100,   404,   411,    -1,
      20,   312,   387,    -1,   172,    16,    -1,     4,    21,    -1,
       4,    21,   406,    -1,     4,    21,   404,   411,    -1,     4,
      22,   266,   404,   413,    -1,     4,    53,   266,   404,   413,
      -1,     4,    52,   266,   404,   413,    -1,     4,    56,    21,
      -1,     4,    56,    21,   406,    -1,     4,    56,    21,   404,
     411,    -1,     4,    56,   266,   404,   413,    -1,     4,    63,
     404,   411,   412,    -1,     4,    66,   266,   404,   413,    -1,
       4,    70,    -1,     4,    80,    27,    -1,     4,    80,   184,
      -1,     4,    80,   266,   404,   413,    -1,     4,    80,   317,
      -1,     4,    81,   152,    -1,     4,    81,    28,    -1,     4,
      81,   332,    -1,     4,    88,    21,    -1,     4,    88,    21,
     406,    -1,     4,    88,    21,   404,   411,    -1,     4,    88,
     266,   404,   413,    -1,     4,   118,   266,   404,   413,    -1,
       4,   119,   266,   404,   413,    -1,     4,   122,    21,    -1,
       4,   122,    21,   406,    -1,     4,   122,    21,   404,   411,
      -1,     4,   122,   266,   404,   413,    -1,     4,   142,    -1,
       4,   164,    -1,     4,   193,    27,    -1,     4,   193,   188,
     404,   413,    -1,     4,   193,   252,   404,   411,   412,    -1,
       4,   203,   188,   394,   404,   413,    -1,     4,   252,   293,
      -1,     4,   252,   301,    -1,     4,   254,   252,   404,   411,
     412,    -1,     4,   260,   252,   404,   411,   412,    -1,     4,
     260,   188,   404,   413,    -1,     4,   260,   325,   404,   413,
      -1,     4,   261,    -1,     4,   261,   567,    -1,     4,   278,
     143,    -1,     4,   278,   188,   404,   413,    -1,     4,   278,
     252,   404,   411,   412,    -1,     4,   278,   317,    -1,     4,
     290,    -1,     4,   319,    -1,     4,   319,     4,    -1,     4,
     321,    -1,     4,   321,   277,    -1,     4,   332,    -1,     4,
     343,    27,    -1,     4,   343,   188,   404,   413,    -1,     4,
     343,   252,   404,   411,   412,    -1,     4,   377,    -1,     4,
      99,    -1,   164,   557,    -1,   164,   234,    -1,   234,    -1,
     254,   289,   394,   394,    -1,   289,   289,   394,   394,    -1,
     259,    -1,   261,   567,    -1,   290,   558,    -1,   290,   234,
      -1,   298,   559,    -1,     5,    70,    -1,     5,   142,    -1,
       5,   172,    -1,     5,   261,   567,    -1,     5,   319,    -1,
       5,   319,   234,    -1,   319,    16,    -1,   319,   105,   221,
      -1,   377,    -1,    99,    -1,    32,    -1,   266,    -1,   178,
      -1,   239,    -1,    -1,   394,   394,    -1,    -1,   394,   394,
      -1,    -1,   321,    -1,    -1,    -1,   253,    -1,   268,    -1,
     339,    -1,    61,    -1,   144,    -1,   554,   404,   411,   412,
     396,   569,   576,    -1,   290,   554,   404,   411,   412,   396,
     569,   576,    -1,   554,     5,    -1,   554,     5,     4,     5,
     404,   411,    -1,   554,     4,    -1,   554,     4,     4,     5,
     404,   411,    -1,   137,     5,    -1,   137,     5,     5,    -1,
     394,   394,    -1,   146,    -1,    38,    -1,    42,   394,   394,
      -1,   217,   394,   394,    -1,   120,    -1,   328,   404,   411,
     403,    -1,   565,   566,    -1,   566,    -1,   567,   391,   396,
      -1,    70,   391,     5,    -1,    99,   391,     4,     4,    -1,
     377,   391,     4,    -1,   142,   391,     5,    -1,   321,   391,
       5,    -1,   579,    -1,   580,    -1,   228,    -1,   290,    -1,
     164,    -1,    98,    -1,   139,    -1,   114,    -1,   220,    -1,
     277,    -1,   106,    -1,   175,    -1,   308,    -1,   132,    -1,
     560,    -1,   560,   565,    -1,    -1,    -1,   570,   574,    -1,
       5,   554,   404,   411,   412,   396,    -1,   290,     5,   554,
     404,   411,   412,   396,    -1,   320,     5,    -1,    16,    -1,
     238,   394,   394,    -1,   329,    -1,   329,   394,   394,    -1,
     134,    -1,   187,    -1,   396,    -1,   321,   396,    -1,   574,
     575,    -1,   575,    -1,   567,   391,   396,    -1,    -1,    -1,
     577,   578,    -1,   578,   579,    -1,   579,    -1,   319,   391,
       5,    -1,    59,   391,   547,     5,     5,    -1,    -1,    89,
      -1,     4,    -1,   186,     4,    -1,    70,     5,    -1,     4,
      70,     5,    -1,    48,   408,    -1,     4,    48,   408,    -1,
     327,   394,    -1,     4,   327,   394,    -1,   342,   396,    -1,
       4,   342,   396,    -1,   298,    -1,     4,   298,    -1,   163,
      -1,     4,   163,    -1,   106,    -1,     4,   106,    -1,   338,
      -1,     4,   338,    -1,   112,    -1,     4,   112,    -1,   326,
      -1,     4,   326,    -1,    51,    -1,     4,    51,    -1,    68,
      -1,    70,     5,    -1,   204,   407,    -1,   267,   394,   394,
      -1,   317,   404,    -1,   327,   394,    -1,    48,   408,    -1,
     204,     4,    -1,   390,    -1,   388,    -1,   380,    -1,   228,
      -1,   394,   394,   394,   394,    -1,   394,   394,    -1,   406,
     394,   394,    -1,   404,   411,   403,    -1,   328,   585,    -1,
      41,   394,   394,    -1,   217,   586,    -1,   259,   396,    -1,
     394,   394,    -1,   406,   394,   394,    -1,   404,   411,   403,
      -1,    42,   394,   394,    -1,   394,   394,    -1,   120,   394,
     394,    -1,   396,    -1,   348,   405,   411,    -1,     5,     4,
       4,    -1,   337,    -1,    76,   590,    -1,   189,     4,    -1,
     273,     4,    -1,   284,   394,    -1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,    -1,     4,     4,     4,     4,
       4,     4,    -1,    58,    -1,   154,    -1,   275,    -1,    96,
      -1,   164,   592,    -1,   290,   593,    -1,    42,   394,   394,
      -1,   217,   394,   394,    -1,   120,    -1,   296,   120,    -1,
      42,   394,   394,    -1,   217,   394,   394,    -1,   120,    -1,
     296,   120,    -1,   212,    -1,    12,    -1,   135,    -1,   228,
      -1,    36,    -1,   116,    -1,     4,    -1,    68,    -1,    65,
       5,    -1,   317,   404,    -1,   342,     4,     4,     4,    -1,
     317,   404,    -1,    65,     5,    -1,    65,   168,    -1,    65,
     283,    -1,   317,   404,    -1,   342,     4,     4,     4,    -1,
      65,     5,    -1,    65,   168,    -1,    65,   283,    -1,    65,
     340,    -1,   317,   404,    -1,   342,     4,     4,     4,    -1,
     394,    -1,   394,   104,    -1,   217,   602,    -1,   328,   394,
      -1,   328,   394,   104,    -1,    42,    -1,   394,    -1,   120,
      -1,    26,   605,    -1,   137,   606,    -1,   385,   604,    -1,
     233,   623,    -1,   121,   624,    -1,   247,     5,    -1,   131,
       5,    -1,    65,     5,    -1,   306,     4,    -1,   131,     5,
     421,    -1,    65,     5,   421,    -1,   306,     4,   421,    -1,
     275,    93,   613,    -1,   170,    93,   616,    -1,   169,    93,
     619,    -1,   607,    -1,   174,   607,    -1,   318,   608,    -1,
     302,   609,    -1,   127,    93,   610,    -1,   215,   611,    -1,
     275,   174,   614,    -1,   275,    93,   615,    -1,   170,   174,
     617,    -1,   170,    93,   618,    -1,   169,   174,   620,    -1,
     169,    93,   621,    -1,   270,   622,    -1,   131,     5,    -1,
      65,     5,    -1,   306,     4,    -1,   131,     5,    -1,    65,
       5,    -1,   306,     4,    -1,   131,     5,    -1,    65,     5,
      -1,   306,     4,    -1,   131,     5,    -1,    65,     5,    -1,
     306,     4,    -1,   174,   612,    -1,   131,     5,     4,    -1,
      65,     5,     4,    -1,   306,     4,     4,    -1,   131,     5,
      -1,    65,     5,    -1,   306,     4,    -1,   131,     5,   421,
      -1,    65,     5,   421,    -1,   306,     4,   421,    -1,   131,
       5,    -1,    65,     5,    -1,   306,     4,    -1,   131,     5,
      -1,    65,     5,    -1,   306,     4,    -1,   131,     5,   421,
      -1,    65,     5,   421,    -1,   306,     4,   421,    -1,   131,
       5,    -1,    65,     5,    -1,   306,     4,    -1,   131,     5,
      -1,    65,     5,    -1,   306,     4,    -1,   131,     5,   421,
      -1,    65,     5,   421,    -1,   306,     4,   421,    -1,   131,
       5,    -1,    65,     5,    -1,   306,     4,    -1,   131,     5,
      -1,    65,     5,    -1,   306,     4,    -1,   131,     5,    -1,
      65,     5,    -1,   306,     4,    -1,   131,     5,   421,    -1,
      65,     5,   421,    -1,   306,     4,   421,    -1,   131,     5,
       5,   421,    -1,   626,     4,     4,   394,   394,   399,    -1,
     626,     4,    -1,   106,    -1,    54,    -1,   330,    -1,   150,
      -1,   117,    -1,    -1,     4,   394,   394,   394,   394,    -1,
     232,    -1,   232,     4,   394,   394,   394,   394,    -1,   137,
     302,   628,    -1,     4,    -1,     4,     4,    -1,   394,   404,
      -1,   394,   394,    -1,   328,   394,   394,    -1,   405,   411,
     412,    -1,    15,   633,    -1,   272,     4,    -1,   269,   632,
      -1,    23,   631,    -1,     4,     4,    -1,     4,     5,    -1,
     321,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     321,     4,     5,    -1,     4,    -1,     4,   405,   411,    -1,
     328,     4,   405,   411,    -1,   253,    68,    -1,   258,    -1,
     394,   394,    -1,   394,   394,    11,   394,   394,    -1,   394,
     394,    11,   406,   394,   394,    -1,   394,   394,    11,   404,
     411,   403,    -1,   328,   636,    -1,   136,    -1,   136,   394,
      -1,   394,   394,    -1,   394,   394,    11,   394,   394,    -1,
     394,   394,    11,   406,   394,   394,    -1,   394,   394,    11,
     404,   411,   403,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   498,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   560,   561,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   577,   579,   580,   581,   582,
     584,   585,   586,   587,   590,   591,   592,   593,   594,   597,
     598,   601,   602,   603,   606,   609,   612,   615,   627,   634,
     641,   649,   650,   651,   652,   653,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   686,   687,   690,   691,   692,   693,
     694,   695,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   717,
     718,   719,   720,   721,   722,   723,   724,   727,   728,   729,
     730,   731,   734,   735,   736,   737,   738,   739,   740,   741,
     744,   745,   746,   749,   750,   751,   752,   755,   756,   757,
     760,   761,   762,   765,   766,   767,   770,   771,   772,   773,
     774,   775,   776,   777,   780,   781,   784,   785,   786,   787,
     788,   789,   792,   793,   794,   795,   798,   799,   800,   801,
     802,   803,   806,   807,   808,   809,   810,   811,   812,   813,
     814,   815,   819,   820,   821,   822,   825,   826,   829,   830,
     833,   834,   837,   838,   841,   842,   846,   847,   848,   849,
     850,   851,   852,   853,   856,   857,   860,   861,   862,   864,
     866,   867,   868,   870,   874,   875,   878,   879,   881,   884,
     886,   892,   893,   894,   897,   898,   899,   902,   903,   904,
     905,   906,   907,   908,   914,   915,   918,   919,   920,   921,
     922,   925,   926,   927,   928,   931,   932,   937,   942,   949,
     951,   953,   955,   957,   959,   960,   961,   964,   966,   968,
     970,   972,   975,   976,   979,   980,   981,   982,   983,   984,
     987,   990,   993,   999,  1005,  1008,  1009,  1012,  1013,  1014,
    1021,  1022,  1023,  1024,  1027,  1028,  1031,  1032,  1035,  1036,
    1037,  1041,  1043,  1047,  1048,  1051,  1053,  1054,  1055,  1056,
    1059,  1060,  1062,  1063,  1064,  1067,  1069,  1071,  1072,  1074,
    1076,  1078,  1080,  1084,  1087,  1088,  1089,  1090,  1093,  1094,
    1097,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,
    1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,  1128,
    1129,  1130,  1131,  1132,  1133,  1134,  1136,  1137,  1138,  1139,
    1140,  1141,  1142,  1144,  1145,  1146,  1149,  1151,  1155,  1157,
    1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1171,  1172,
    1173,  1176,  1179,  1180,  1182,  1184,  1185,  1186,  1187,  1188,
    1189,  1196,  1197,  1200,  1201,  1202,  1205,  1206,  1209,  1212,
    1213,  1215,  1219,  1220,  1221,  1224,  1228,  1230,  1231,  1232,
    1233,  1234,  1235,  1236,  1237,  1238,  1239,  1242,  1243,  1244,
    1247,  1248,  1251,  1253,  1261,  1263,  1265,  1269,  1270,  1272,
    1275,  1278,  1279,  1283,  1285,  1288,  1293,  1294,  1295,  1299,
    1300,  1301,  1304,  1305,  1306,  1309,  1310,  1312,  1313,  1314,
    1315,  1316,  1317,  1318,  1319,  1320,  1321,  1323,  1324,  1327,
    1328,  1331,  1332,  1333,  1334,  1337,  1338,  1341,  1343,  1346,
    1350,  1351,  1352,  1354,  1356,  1360,  1361,  1362,  1365,  1366,
    1367,  1368,  1369,  1370,  1373,  1374,  1375,  1376,  1377,  1378,
    1379,  1382,  1383,  1386,  1389,  1390,  1391,  1394,  1397,  1398,
    1399,  1402,  1403,  1404,  1407,  1408,  1409,  1410,  1411,  1412,
    1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1425,  1426,
    1427,  1428,  1431,  1432,  1435,  1436,  1439,  1440,  1443,  1444,
    1447,  1448,  1451,  1452,  1453,  1456,  1457,  1460,  1461,  1464,
    1467,  1475,  1476,  1479,  1480,  1481,  1482,  1483,  1484,  1485,
    1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,
    1496,  1499,  1502,  1503,  1506,  1507,  1508,  1509,  1512,  1513,
    1514,  1515,  1518,  1519,  1520,  1521,  1522,  1523,  1526,  1527,
    1528,  1529,  1530,  1531,  1533,  1534,  1539,  1540,  1543,  1545,
    1547,  1550,  1551,  1552,  1553,  1554,  1555,  1556,  1559,  1561,
    1563,  1565,  1566,  1568,  1570,  1572,  1574,  1576,  1577,  1578,
    1581,  1582,  1583,  1584,  1585,  1586,  1588,  1589,  1590,  1593,
    1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1613,  1615,
    1617,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,
    1630,  1631,  1632,  1633,  1634,  1635,  1636,  1638,  1640,  1641,
    1642,  1645,  1646,  1647,  1648,  1649,  1650,  1652,  1653,  1654,
    1657,  1658,  1659,  1660,  1661,  1664,  1667,  1670,  1673,  1676,
    1679,  1682,  1685,  1688,  1693,  1696,  1699,  1702,  1705,  1708,
    1711,  1714,  1717,  1720,  1723,  1728,  1731,  1734,  1737,  1740,
    1743,  1746,  1749,  1752,  1757,  1759,  1761,  1763,  1765,  1767,
    1772,  1774,  1776,  1780,  1783,  1786,  1789,  1792,  1795,  1798,
    1801,  1804,  1807,  1810,  1815,  1816,  1817,  1818,  1819,  1820,
    1821,  1823,  1825,  1826,  1827,  1830,  1831,  1832,  1833,  1834,
    1835,  1837,  1838,  1839,  1842,  1844,  1846,  1847,  1849,  1851,
    1858,  1862,  1863,  1866,  1867,  1868,  1871,  1874,  1875,  1876,
    1877,  1878,  1879,  1880,  1883,  1891,  1892,  1893,  1894,  1896,
    1898,  1899,  1899,  1900,  1901,  1902,  1903,  1904,  1906,  1907,
    1909,  1912,  1914,  1916,  1919,  1920,  1921,  1924,  1927,  1930,
    1934,  1937,  1940,  1943,  1947,  1952,  1957,  1959,  1961,  1962,
    1964,  1966,  1968,  1970,  1971,  1972,  1974,  1976,  1978,  1982,
    1987,  1989,  1991,  1993,  1995,  1997,  1999,  2001,  2003,  2005,
    2007,  2010,  2011,  2013,  2015,  2016,  2018,  2020,  2021,  2022,
    2024,  2026,  2027,  2028,  2030,  2031,  2034,  2038,  2041,  2044,
    2048,  2053,  2059,  2060,  2061,  2063,  2064,  2068,  2070,  2071,
    2072,  2075,  2078,  2081,  2084,  2086,  2088,  2093,  2096,  2097,
    2098,  2101,  2105,  2106,  2108,  2109,  2110,  2112,  2113,  2115,
    2116,  2121,  2122,  2124,  2125,  2127,  2128,  2129,  2130,  2131,
    2132,  2134,  2136,  2138,  2139,  2140,  2142,  2144,  2145,  2146,
    2147,  2148,  2149,  2150,  2151,  2152,  2153,  2154,  2156,  2158,
    2159,  2160,  2161,  2163,  2164,  2165,  2166,  2167,  2169,  2170,
    2171,  2172,  2173,  2174,  2175,  2178,  2179,  2180,  2181,  2182,
    2183,  2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,  2201,  2202,  2203,  2204,
    2205,  2206,  2214,  2221,  2230,  2239,  2246,  2253,  2261,  2269,
    2276,  2281,  2286,  2291,  2296,  2301,  2306,  2312,  2322,  2332,
    2342,  2349,  2359,  2369,  2378,  2390,  2403,  2409,  2412,  2413,
    2422,  2424,  2426,  2431,  2435,  2436,  2437,  2443,  2445,  2447,
    2450,  2451,  2452,  2453,  2454,  2455,  2456,  2459,  2460,  2461,
    2462,  2463,  2464,  2466,  2468,  2470,  2472,  2474,  2476,  2478,
    2480,  2482,  2485,  2486,  2487,  2488,  2490,  2493,  2495,  2497,
    2498,  2499,  2501,  2504,  2507,  2509,  2510,  2511,  2512,  2514,
    2515,  2516,  2517,  2518,  2519,  2520,  2522,  2524,  2526,  2529,
    2530,  2531,  2533,  2536,  2537,  2538,  2539,  2541,  2544,  2548,
    2549,  2550,  2553,  2556,  2559,  2561,  2562,  2563,  2564,  2566,
    2569,  2570,  2572,  2573,  2574,  2575,  2576,  2578,  2579,  2581,
    2584,  2585,  2586,  2587,  2588,  2589,  2591,  2593,  2594,  2595,
    2596,  2598,  2600,  2601,  2602,  2603,  2604,  2605,  2607,  2608,
    2610,  2611,  2614,  2615,  2616,  2617,  2620,  2621,  2624,  2625,
    2628,  2629,  2632,  2645,  2646,  2650,  2651,  2655,  2656,  2659,
    2663,  2669,  2671,  2674,  2676,  2679,  2681,  2685,  2686,  2687,
    2688,  2689,  2690,  2691,  2695,  2696,  2699,  2700,  2701,  2702,
    2703,  2704,  2705,  2706,  2709,  2710,  2711,  2712,  2713,  2714,
    2715,  2716,  2717,  2718,  2719,  2720,  2723,  2724,  2727,  2728,
    2728,  2731,  2733,  2735,  2738,  2739,  2740,  2741,  2742,  2743,
    2746,  2747,  2750,  2751,  2754,  2758,  2759,  2759,  2762,  2763,
    2766,  2769,  2773,  2774,  2775,  2776,  2777,  2778,  2779,  2780,
    2781,  2782,  2783,  2784,  2786,  2787,  2788,  2789,  2790,  2791,
    2792,  2793,  2794,  2795,  2796,  2797,  2798,  2799,  2802,  2803,
    2804,  2805,  2806,  2807,  2808,  2809,  2815,  2816,  2817,  2818,
    2821,  2823,  2824,  2829,  2831,  2832,  2833,  2834,  2837,  2838,
    2843,  2847,  2848,  2849,  2852,  2853,  2858,  2859,  2862,  2864,
    2865,  2866,  2871,  2873,  2879,  2880,  2881,  2882,  2885,  2886,
    2889,  2891,  2893,  2894,  2897,  2899,  2900,  2901,  2904,  2905,
    2906,  2909,  2910,  2911,  2914,  2915,  2918,  2919,  2920,  2923,
    2927,  2928,  2929,  2930,  2931,  2934,  2935,  2936,  2937,  2938,
    2939,  2942,  2943,  2944,  2945,  2946,  2949,  2950,  2951,  2954,
    2955,  2956,  2957,  2958,  2959,  2962,  2963,  2964,  2967,  2969,
    2971,  2973,  2974,  2975,  2978,  2979,  2980,  2981,  2982,  2983,
    2984,  2985,  2986,  2987,  2988,  2989,  2990,  2993,  2994,  2995,
    2998,  2999,  3000,  3003,  3004,  3005,  3008,  3009,  3010,  3013,
    3014,  3015,  3016,  3019,  3020,  3021,  3024,  3026,  3028,  3032,
    3033,  3034,  3037,  3038,  3039,  3042,  3044,  3046,  3050,  3051,
    3052,  3055,  3056,  3057,  3060,  3062,  3064,  3068,  3069,  3070,
    3073,  3074,  3075,  3078,  3079,  3080,  3083,  3085,  3087,  3091,
    3095,  3097,  3102,  3105,  3106,  3107,  3108,  3111,  3112,  3115,
    3117,  3119,  3122,  3123,  3124,  3127,  3128,  3131,  3133,  3134,
    3135,  3136,  3139,  3140,  3141,  3144,  3145,  3146,  3149,  3150,
    3155,  3157,  3160,  3167,  3168,  3170,  3175,  3177,  3180,  3181,
    3182,  3183,  3185,  3190
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
     635,   636,   637,   638,   639,   640,   641,   642,    89,    78,
      88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   392,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   394,   394,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   397,   397,   397,   397,   397,   398,
     398,   399,   399,   399,   400,   401,   402,   403,   403,   403,
     403,   404,   404,   404,   404,   404,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   406,   406,   407,   407,   407,   407,
     407,   407,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   409,
     409,   409,   409,   409,   409,   409,   409,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   412,   413,   413,   413,   413,   414,   414,   414,
     415,   415,   415,   416,   416,   416,   417,   417,   417,   417,
     417,   417,   417,   417,   418,   418,   419,   419,   419,   419,
     419,   419,   420,   420,   420,   420,   421,   421,   421,   421,
     421,   421,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   423,   423,   423,   423,   424,   424,   425,   425,
     426,   426,   427,   427,   428,   428,   429,   429,   429,   429,
     429,   429,   429,   429,   430,   430,   431,   431,   431,   431,
     431,   431,   431,   431,   432,   432,   433,   433,   433,   433,
     433,   434,   434,   434,   435,   435,   435,   436,   436,   436,
     436,   436,   436,   436,   437,   437,   438,   438,   438,   438,
     438,   439,   439,   439,   439,   440,   440,   440,   440,   441,
     441,   441,   441,   441,   441,   441,   441,   442,   442,   442,
     442,   442,   443,   443,   444,   444,   444,   444,   444,   444,
     445,   445,   445,   445,   445,   446,   446,   447,   447,   447,
     448,   448,   448,   448,   449,   449,   450,   450,   451,   451,
     451,   452,   452,   453,   453,   453,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   457,   457,   457,   457,   458,   458,
     459,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   461,   461,   462,   462,
     463,   463,   463,   463,   463,   463,   463,   463,   464,   464,
     464,   465,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   467,   467,   468,   468,   468,   469,   469,   470,   471,
     471,   471,   472,   472,   472,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   475,   475,   475,
     476,   476,   477,   477,   478,   478,   478,   479,   479,   479,
     480,   481,   481,   482,   482,   482,   483,   483,   483,   484,
     484,   484,   485,   485,   485,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   487,
     487,   488,   488,   488,   488,   489,   489,   490,   490,   490,
     491,   491,   491,   491,   491,   492,   492,   492,   493,   493,
     493,   493,   493,   493,   494,   494,   494,   494,   494,   494,
     494,   495,   495,   496,   497,   497,   497,   498,   499,   499,
     499,   500,   500,   500,   501,   501,   501,   501,   501,   501,
     502,   502,   502,   502,   502,   502,   502,   502,   503,   503,
     503,   503,   504,   504,   505,   505,   506,   506,   507,   507,
     508,   508,   509,   509,   509,   510,   510,   511,   511,   512,
     512,   513,   513,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   515,   516,   516,   517,   517,   517,   517,   518,   518,
     518,   518,   519,   519,   519,   519,   519,   519,   520,   520,
     520,   520,   520,   520,   520,   520,   521,   521,   522,   522,
     522,   523,   523,   523,   523,   523,   523,   523,   524,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   526,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   530,   530,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   536,   536,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   537,   537,   537,   537,   537,
     537,   537,   537,   537,   538,   538,   538,   538,   538,   538,
     539,   540,   540,   541,   541,   541,   542,   543,   543,   543,
     543,   543,   543,   543,   544,   545,   545,   545,   545,   545,
     545,   546,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   548,   548,   548,   548,
     548,   548,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   550,   550,
     551,   551,   551,   551,   552,   552,   552,   553,   553,   553,
     554,   554,   554,   554,   554,   554,   554,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   556,   556,   556,   556,   557,   557,   558,   558,
     559,   559,   560,   561,   561,   561,   561,   561,   561,   562,
     562,   563,   563,   563,   563,   563,   563,   564,   564,   564,
     564,   564,   564,   564,   565,   565,   566,   566,   566,   566,
     566,   566,   566,   566,   567,   567,   567,   567,   567,   567,
     567,   567,   567,   567,   567,   567,   568,   568,   569,   570,
     569,   571,   571,   571,   572,   572,   572,   572,   572,   572,
     573,   573,   574,   574,   575,   576,   577,   576,   578,   578,
     579,   580,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   581,   581,
     581,   581,   581,   581,   581,   581,   581,   581,   582,   582,
     582,   582,   582,   582,   582,   582,   583,   583,   583,   583,
     584,   584,   584,   584,   584,   584,   584,   584,   585,   585,
     585,   586,   586,   586,   587,   587,   587,   587,   588,   588,
     588,   588,   589,   589,   590,   590,   590,   590,   591,   591,
     592,   592,   592,   592,   593,   593,   593,   593,   594,   594,
     594,   595,   595,   595,   596,   596,   597,   597,   597,   598,
     599,   599,   599,   599,   599,   600,   600,   600,   600,   600,
     600,   601,   601,   601,   601,   601,   602,   602,   602,   603,
     603,   603,   603,   603,   603,   604,   604,   604,   605,   605,
     605,   605,   605,   605,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   607,   607,   607,
     608,   608,   608,   609,   609,   609,   610,   610,   610,   611,
     611,   611,   611,   612,   612,   612,   613,   613,   613,   614,
     614,   614,   615,   615,   615,   616,   616,   616,   617,   617,
     617,   618,   618,   618,   619,   619,   619,   620,   620,   620,
     621,   621,   621,   622,   622,   622,   623,   623,   623,   624,
     625,   625,   625,   626,   626,   626,   626,   627,   627,   627,
     627,   627,   628,   628,   628,   629,   629,   630,   630,   630,
     630,   630,   631,   631,   631,   632,   632,   632,   633,   633,
     633,   633,   634,   635,   635,   635,   635,   635,   636,   636,
     636,   636,   636,   636
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
       2,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     3,     5,     4,     4,     4,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     3,     3,     3,     3,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     2,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     5,     5,     5,     5,     5,
       7,     5,     5,     6,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     5,     5,     6,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     4,     4,     3,     5,     4,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     4,     3,     3,     4,     5,     8,     6,     9,
       6,     7,    10,    11,    12,     9,     5,     6,     3,     5,
       5,     6,     5,     4,     4,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     7,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     4,     1,     3,     2,     2,     2,     2,     3,
       5,     4,     5,     2,     2,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     3,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     3,     2,     0,     1,
       3,     4,     4,     4,     0,     1,     1,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     3,     3,     8,     6,    10,     7,     7,     5,     6,
       6,     3,     2,     2,     3,     4,     5,     5,     5,     3,
       4,     5,     5,     5,     5,     2,     3,     3,     5,     3,
       3,     3,     3,     3,     4,     5,     5,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     6,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     2,     3,     5,     6,
       2,     2,     2,     2,     1,     4,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     6,     2,     6,     2,     3,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     6,     7,     2,     1,     3,     1,     3,     1,     1,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     0,     1,     1,     2,     2,     3,     2,     3,
       2,     3,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     9,     6,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     4,     2,
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     1,     0,     5,     1,
       6,     3,     1,     2,     2,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     1,     3,
       4,     2,     1,     2,     5,     6,     6,     2,     1,     2,
       2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   343,     0,     0,     0,     0,     0,     0,   371,     0,
       0,    23,     0,     0,     0,     0,     0,  1202,     0,     0,
       0,     0,  1133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1133,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1397,    57,     0,     0,     0,     0,     0,
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
       0,     0,     0,  1133,     0,   397,     0,     0,   403,     0,
       0,     0,   407,     0,   409,     0,   411,     0,     0,   582,
     415,    20,     0,   588,    21,   593,     0,     0,   612,   597,
     598,   599,   600,   614,   602,   603,   607,   604,     0,   606,
     608,     0,     0,    22,     0,    24,     0,     0,     0,    26,
       0,     0,     0,    27,     0,   629,     0,     0,     0,   634,
       0,    28,     0,  1204,   142,  1226,     0,  1203,  1218,  1222,
    1216,     0,  1214,  1224,     0,  1220,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    30,   796,    31,     0,     0,
       0,     0,     0,     0,   797,    32,     0,    33,  1137,  1138,
    1134,  1135,  1136,     0,   142,  1228,     0,   136,     0,     0,
       0,    35,     0,    37,     0,  1239,  1238,  1237,  1236,    39,
       0,     0,     0,     0,     0,   172,     0,    40,     0,  1257,
       0,  1254,    41,     0,     0,     0,     0,    44,     0,    43,
      42,     0,  1284,  1285,    47,     0,     0,     0,    48,     0,
       0,  1301,    49,     0,     0,     0,     0,     0,     0,    50,
    1393,  1392,  1396,  1395,  1394,    52,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,  1399,    56,     0,     0,    58,     0,     0,     0,     0,
     172,    59,  1422,    60,     0,     0,    61,     1,     4,     5,
     254,     0,   246,     0,     0,   248,     0,   256,   249,   253,
     264,   265,   250,   266,     0,   252,   274,   275,   273,   272,
       0,     0,   294,     0,   279,   287,   290,   289,   288,   286,
     278,   283,   284,   285,   277,     0,     0,     0,     0,     0,
       0,   282,    10,     0,     0,     0,     0,     0,     0,     0,
       0,   305,     0,     0,   313,     0,   324,   314,     0,   326,
     316,   327,   317,   338,   318,     0,     0,   319,     0,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   346,     0,     0,     0,     0,     0,   174,
     179,   173,   175,   178,   177,   176,     0,     0,   363,    69,
      70,    71,    72,    73,    65,    66,    67,    74,    68,     0,
     372,     0,   428,   424,   420,   421,   425,   422,   427,   373,
     431,   374,   330,   436,   440,   435,   333,   332,   331,     0,
       0,   375,   447,   377,     0,   376,     0,   454,   378,   467,
     458,   470,   459,   460,   461,   463,     0,   465,   466,   172,
     379,     0,     0,   380,     0,     0,   172,   381,   479,   172,
     477,   382,   480,   384,   172,   481,   383,     0,   172,     0,
     385,   499,     0,   497,   515,     0,     0,     0,   503,   495,
       0,   505,   520,   508,   387,   526,   527,   388,   389,     0,
       0,   551,   552,   553,   392,   548,   549,   550,   393,     0,
     490,     0,   394,    84,   487,     0,   395,   396,   541,   541,
     528,   529,   541,   541,   400,     0,   540,   534,   539,   535,
     536,   537,   538,   399,   547,   401,   402,   543,   404,     0,
     544,   545,   546,   406,   559,   554,   555,   557,   408,   565,
     574,   576,   578,   564,   567,   568,   580,   410,     0,     0,
     585,     0,   414,   172,   587,   594,     0,   595,   613,   596,
     615,   616,   617,   601,   618,   620,   619,   621,   605,   609,
     626,     0,     0,     0,     0,   622,   610,    25,  1295,  1296,
    1297,  1298,  1299,     0,  1290,  1291,  1292,  1293,     0,     0,
       0,   631,   630,     0,     0,     0,     0,    29,   142,  1227,
       0,  1219,  1223,  1217,  1215,  1225,     0,  1221,     0,   157,
     150,   149,   147,   153,   154,   151,   155,   148,   158,   144,
     146,   156,   145,   152,   143,  1208,  1206,  1205,  1210,  1212,
       0,     0,     0,     0,   641,     0,   642,     0,   643,     0,
       0,     0,     0,     0,     0,     0,   644,     0,   795,     0,
     645,     0,   646,     0,     0,   647,     0,   800,   799,   798,
       0,   803,     0,     0,     0,     0,   976,     0,     0,     0,
     807,   811,   813,     0,  1014,     0,     0,     0,     0,   913,
       0,     0,     0,   948,     0,     0,     0,     0,     0,     0,
       0,   950,     0,     0,     0,    34,  1234,  1229,  1235,   139,
     140,   138,   141,   137,  1230,     0,  1232,  1233,  1289,    38,
       0,     0,     0,     0,  1246,  1247,     0,   172,     0,  1244,
    1241,     0,     0,     0,   172,  1264,  1267,  1265,  1266,  1258,
    1259,  1260,  1261,     0,     0,     0,    46,  1286,  1287,     0,
    1306,  1308,  1307,  1303,  1304,  1302,     0,     0,     0,     0,
       0,     0,  1309,     0,  1313,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1310,  1324,     0,
       0,     0,  1312,  1314,     0,     0,     0,  1311,  1391,  1282,
    1283,  1281,   227,     0,   238,   223,     0,   240,   224,     0,
     242,   225,  1279,  1280,  1278,   226,   229,     0,     0,     0,
     232,   228,   230,   231,     0,     0,   222,     0,     0,     0,
       0,  1405,  1418,     0,     0,  1408,     0,     0,  1411,     0,
       0,  1410,  1409,   180,  1428,     0,  1427,  1423,   255,   251,
       0,   260,     0,   257,     0,   276,   167,   170,   171,   169,
     168,   291,   292,   293,   281,   280,   296,   298,   297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,     0,     0,     0,   172,     0,   347,   100,    97,
      98,    99,   172,   349,   348,     0,     0,     0,     0,     0,
       0,     0,   362,     0,   358,   356,   355,   370,   423,     0,
       0,   426,   441,   442,   437,   438,   443,   445,   444,   439,
     334,   335,   434,   433,   449,   448,     0,   453,   468,   469,
     457,   471,   464,   462,   456,     0,     0,   172,   172,   180,
     180,   180,   172,     0,     0,   172,   516,   498,   509,     0,
     500,    84,   511,     0,     0,   502,   504,   172,   521,     0,
       0,   507,     0,     0,   391,     0,   492,    88,    87,   486,
       0,   542,   531,   530,   532,   533,     0,     0,     0,     0,
    1028,  1121,  1030,  1029,     0,  1126,     0,  1104,     0,  1107,
       0,     0,  1128,  1130,     0,  1120,   398,     0,   556,   558,
     575,   561,   577,   562,   579,   563,   569,   572,   570,   566,
     581,   560,     0,     0,   413,   586,   583,   584,   180,   611,
     623,   624,   625,   627,     0,     0,     0,   640,   628,     0,
       0,     0,  1209,  1207,  1211,  1213,     0,     0,     0,   193,
     193,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   689,
     713,     0,     0,     0,   681,     0,     0,     0,     0,   193,
     187,     0,     0,   791,     0,   801,   802,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   861,     0,     0,     0,     0,     0,   883,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   902,     0,
       0,   907,   908,     0,     0,     0,   928,   930,   929,     0,
     932,     0,     0,   939,   941,   942,     0,   977,     0,     0,
       0,     0,   805,   806,  1022,  1020,  1025,  1024,  1023,  1021,
    1026,     0,   810,     0,     0,  1016,  1015,   814,     0,  1019,
       0,   815,   816,   817,   818,     0,     0,     0,     0,     0,
     915,     0,     0,   916,  1149,     0,  1152,  1148,     0,     0,
       0,   917,   949,   918,  1167,  1172,  1169,  1175,  1168,  1166,
    1173,  1170,  1164,  1171,  1165,  1174,     0,     0,   923,     0,
       0,     0,     0,   924,  1184,  1188,  1189,     0,  1186,   925,
       0,  1190,   926,   946,     0,     0,     0,   951,   952,   953,
    1231,  1245,     0,     0,  1252,  1248,     0,     0,     0,  1243,
    1242,  1256,  1255,     0,     0,  1272,     0,     0,  1268,     0,
    1276,     0,     0,  1269,     0,  1305,   216,   216,     0,     0,
       0,   216,     0,  1338,     0,  1337,     0,     0,     0,     0,
    1325,     0,     0,     0,     0,  1329,     0,     0,     0,  1336,
       0,     0,     0,     0,     0,  1327,  1339,     0,     0,     0,
    1326,   216,   216,   216,  1316,  1315,  1317,     0,   239,   241,
     243,   233,     0,   236,   235,   234,     0,   244,     0,    63,
       0,  1401,     0,  1406,   172,  1421,     0,  1412,  1413,     0,
    1415,  1416,     0,   181,   182,  1407,  1429,  1430,     0,   247,
       0,   261,     0,     0,     0,     0,   295,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   341,   172,     0,     0,     0,     0,   172,     0,   361,
       0,   360,   430,   429,     0,     0,     0,   172,     0,   180,
     476,   474,   478,   482,     0,     0,     0,   180,     0,   517,
     501,     0,   512,   514,   183,     0,     0,   390,     0,     0,
      63,     0,   491,    86,    85,     0,     0,  1043,     0,     0,
       0,     0,     0,     0,  1055,     0,     0,     0,  1101,     0,
       0,     0,  1073,  1074,     0,     0,     0,     0,     0,  1085,
       0,  1091,  1092,  1094,  1096,     0,  1100,  1112,  1113,  1114,
       0,  1116,     0,  1122,  1124,  1125,  1123,  1027,     0,  1103,
       0,  1102,  1042,     0,     0,  1108,     0,  1110,     0,  1109,
    1131,  1111,  1118,     0,     0,   573,   571,   412,     0,     0,
    1300,  1294,   638,   639,     0,   636,   632,     0,   193,   193,
     193,   194,   195,   651,   652,   189,   188,     0,   193,   193,
     193,     0,   659,   658,   657,   193,   669,   190,   193,   193,
     193,   191,   192,   193,   193,     0,   193,   193,     0,   190,
       0,   682,     0,   688,     0,   687,   686,   685,     0,     0,
       0,   712,     0,   711,     0,   684,   683,     0,     0,     0,
       0,   190,   190,   187,     0,     0,   187,     0,     0,     0,
     193,   193,   786,     0,   193,   193,   792,     0,   206,   207,
     208,   209,   210,   211,     0,    92,    93,    91,   824,     0,
       0,     0,     0,     0,   970,   968,   963,     0,   973,   957,
     974,   960,   972,   966,   955,   969,   958,   956,   975,   971,
       0,     0,   838,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   871,
       0,     0,     0,     0,   882,   884,     0,     0,   889,   888,
       0,     0,   196,     0,     0,     0,   172,     0,   898,     0,
       0,     0,     0,   903,   904,   905,     0,     0,     0,   911,
     927,   931,   933,   936,   935,     0,     0,     0,   940,   823,
     978,   980,     0,   979,   808,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1008,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     812,   954,     0,     0,     0,     0,   914,     0,   172,  1145,
    1143,  1141,     0,     0,   172,  1147,   919,     0,     0,     0,
       0,  1183,     0,     0,  1191,   944,   945,     0,   947,  1251,
    1253,  1250,  1249,  1240,     0,     0,     0,  1273,     0,     0,
    1277,  1288,   218,   219,   220,   221,   217,  1319,  1318,     0,
       0,     0,  1323,     0,     0,     0,  1322,     0,     0,     0,
    1321,  1320,   216,     0,     0,     0,  1328,     0,     0,     0,
    1335,     0,     0,     0,  1334,     0,     0,     0,  1333,     0,
       0,     0,  1332,     0,     0,     0,     0,     0,  1349,     0,
    1384,  1383,  1385,     0,     0,     0,  1331,     0,     0,     0,
    1330,  1344,  1343,  1345,  1341,  1340,  1342,  1387,  1386,  1388,
       0,   237,     0,     0,  1403,  1404,     0,  1419,   172,  1414,
    1417,     0,     0,   172,     0,     0,     0,   258,     0,     0,
       0,     0,   299,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,   336,     0,     0,   328,   339,   342,     0,
     352,   354,   353,   351,   172,   359,     0,     0,     0,   180,
     172,     0,     0,     0,     0,   496,   510,   519,     0,   513,
     185,   186,   184,   506,     0,   522,     0,     0,   489,   494,
      84,     0,     0,     0,     0,     0,     0,   172,  1044,     0,
       0,     0,  1049,     0,   172,     0,  1056,  1057,     0,  1059,
    1061,  1060,  1062,  1063,     0,     0,     0,  1069,     0,  1075,
       0,     0,     0,  1079,  1080,     0,     0,     0,     0,  1086,
    1087,     0,     0,  1090,  1093,  1095,  1097,     0,     0,  1115,
    1117,     0,  1041,  1031,  1127,  1032,     0,     0,  1129,  1119,
       0,     0,   591,   592,     0,   633,   637,     0,   648,   649,
     650,   193,   654,   655,   656,     0,     0,     0,   663,   664,
     187,     0,     0,     0,   790,   193,   670,   671,   672,   673,
     675,   190,   678,   679,     0,   193,     0,     0,     0,   190,
     190,   187,     0,     0,     0,     0,     0,     0,     0,   190,
     190,   187,     0,     0,   187,     0,     0,     0,     0,   190,
     190,   187,     0,     0,     0,     0,   710,     0,   714,     0,
       0,     0,     0,     0,   190,   190,   187,     0,     0,   187,
       0,     0,     0,     0,     0,   190,   190,   187,     0,     0,
     187,     0,   190,   690,   691,   692,   693,   695,     0,   698,
     699,     0,   190,     0,     0,   784,   785,   193,   788,   789,
       0,   821,   172,   825,     0,     0,     0,     0,     0,     0,
       0,   962,   959,   965,   964,   961,   967,     0,     0,     0,
       0,     0,   172,   844,   843,   845,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
     862,   863,   864,     0,   868,   865,   867,     0,     0,   873,
     872,   874,     0,     0,     0,     0,     0,     0,   172,   172,
     887,   202,   198,   203,   197,   200,   199,   201,   894,   895,
     172,     0,     0,   897,   899,   172,   172,     0,   906,   909,
     172,   172,   934,   938,   822,   981,   809,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1009,  1132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1007,     0,     0,     0,     0,     0,   819,
     820,   172,   180,  1146,     0,     0,  1150,  1151,     0,     0,
     921,     0,   172,     0,  1185,  1187,   943,     0,  1270,  1271,
    1274,  1275,   216,   216,   216,   216,   216,   216,   216,   216,
     216,  1389,  1347,  1346,  1348,  1381,  1380,  1382,  1378,  1377,
    1379,  1372,  1371,  1373,  1369,  1368,  1370,  1351,  1350,  1354,
    1353,  1355,  1352,  1363,  1362,  1364,  1360,  1359,  1361,     0,
       0,  1398,     0,  1420,     0,   172,     0,  1424,     0,     0,
     262,     0,   259,     0,     0,     0,     0,     0,   307,     0,
       0,     0,     0,     0,     0,     0,   172,     0,     0,   344,
     160,     0,   450,     0,   472,   180,   183,     0,     0,   485,
       0,   523,   524,     0,   488,     0,     0,     0,     0,     0,
       0,   172,  1045,   183,   183,   183,   172,  1050,   183,   180,
     183,   183,   172,  1064,   183,   183,   183,   172,  1070,   183,
     183,   172,     0,   172,   183,   172,   183,   183,   172,   183,
     172,     0,  1105,  1106,     0,     0,   590,     0,   653,   660,
     661,   662,     0,   666,   667,   668,   674,   193,   190,   680,
     701,   702,   703,   704,   705,     0,   707,   708,   190,   190,
     764,   765,   766,   767,   769,     0,   772,   773,     0,   190,
     775,   776,   777,   778,   779,     0,   781,   782,   190,     0,
       0,     0,   190,   190,   187,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,     0,     0,
     190,   190,   187,     0,     0,     0,   190,   193,   193,   193,
     193,   193,     0,   193,   193,     0,   190,   190,   193,   193,
     193,   193,   193,     0,   193,   193,     0,   190,   694,   190,
       0,   700,     0,     0,   787,     0,   826,   183,     0,     0,
     183,     0,     0,     0,   836,   183,   839,   840,   183,   842,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   866,   869,   870,     0,   183,     0,     0,
       0,   885,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1176,  1006,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,     0,     0,    89,
       0,     0,  1017,  1018,   180,     0,     0,     0,  1153,   920,
     922,   180,   172,  1263,  1375,  1374,  1376,  1366,  1365,  1367,
    1357,  1356,  1358,  1390,     0,  1400,  1431,     0,     0,  1426,
    1425,   263,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,     0,     0,   329,   340,   183,   451,   455,   473,
     475,     0,   483,   518,   172,     0,     0,     0,     0,     0,
       0,   172,  1038,  1046,  1048,  1047,  1051,  1052,  1053,  1054,
    1058,  1065,  1066,  1067,  1068,  1071,  1072,  1076,   180,   183,
     180,  1083,   180,  1084,  1088,   180,  1098,   180,   172,     0,
     172,     0,   589,     0,   665,   676,   193,   190,   709,   768,
     190,     0,   774,   190,   783,   193,   193,   193,   193,   193,
       0,   193,   193,   190,   193,   193,   193,   193,   193,     0,
     193,   193,   190,   193,   193,   193,   193,   193,     0,   193,
     193,   190,   193,   724,   725,   726,   727,   729,   190,   732,
     733,     0,   193,   193,   753,   754,   755,   756,   758,   190,
     761,   762,     0,   193,   696,   190,   793,   794,   172,   828,
       0,   183,   830,     0,   172,     0,   837,   841,   172,     0,
     850,   851,   852,   853,   857,   858,   854,   855,   856,     0,
       0,   183,   877,     0,   172,     0,     0,   890,     0,   183,
       0,     0,   183,   183,     0,   937,     0,   204,   204,     0,
       0,   204,     0,   204,  1132,     0,     0,     0,     0,     0,
       0,     0,     0,  1177,  1155,     0,  1162,  1163,     0,   204,
     204,     0,     0,     0,     0,     0,     0,     0,     0,  1010,
       0,     0,     0,  1132,    90,     0,   204,     0,  1179,   172,
     172,     0,   180,     0,   245,  1433,  1432,     0,     0,   267,
       0,     0,     0,     0,     0,   311,     0,     0,     0,   345,
     484,     0,   364,     0,  1034,     0,   212,     0,  1039,  1077,
    1078,  1081,  1082,  1089,  1099,  1040,   405,     0,   364,     0,
     677,   706,   770,   190,   780,   715,   716,   717,   718,   719,
     190,   721,   722,   193,   744,   745,   746,   747,   748,   190,
     750,   751,   193,   735,   736,   737,   738,   739,   190,   741,
     742,   193,   728,   193,   190,   734,   757,   193,   190,   763,
     697,     0,   183,   831,     0,     0,     0,     0,     0,   859,
     860,   875,     0,     0,     0,   886,   891,   892,     0,   900,
     901,   893,   183,     0,   205,  1132,  1132,    89,     0,  1132,
       0,  1132,   982,   172,     0,     0,     0,     0,     0,     0,
       0,  1154,     0,     0,  1132,  1132,    89,     0,     0,  1132,
    1132,     0,     0,  1132,  1013,  1011,  1012,   989,  1132,  1132,
    1179,  1195,     0,  1144,  1142,  1181,     0,     0,     0,     0,
     269,   301,   302,     0,     0,     0,   300,     0,   364,   365,
     367,   366,   416,     0,     0,   213,   215,   214,  1036,  1037,
     364,   418,     0,   771,   193,   723,   193,   752,   193,   743,
     730,   193,   759,   193,     0,   827,   183,   183,     0,   183,
       0,   183,   183,     0,   183,     0,  1132,   995,   991,  1132,
       0,   996,     0,   990,  1132,     0,  1157,     0,  1160,  1200,
    1161,  1159,  1156,     0,   993,   992,  1132,     0,     0,   987,
     985,  1132,   172,   986,   988,   994,  1195,  1139,     0,     0,
    1180,  1193,  1182,  1262,     0,     0,   309,   310,   308,   330,
     333,   331,     0,     0,   417,  1033,   172,   419,   635,   720,
     749,   740,   731,   760,   183,   829,   835,     0,   849,   846,
     876,   881,     0,   896,     0,  1000,   984,    89,     0,   998,
       0,  1158,     0,   983,    89,     0,   999,     0,  1140,  1197,
    1199,     0,  1192,     0,     0,     0,     0,     0,     0,   212,
       0,   832,   172,   847,   878,   910,  1132,     0,  1201,     0,
    1132,     0,   183,  1198,  1194,   268,     0,     0,     0,     0,
       0,  1035,   804,   172,   833,   848,   172,   879,  1002,     0,
    1132,  1001,     0,     0,   270,   323,     0,   322,     0,   834,
     880,    89,  1003,    89,  1132,   321,   320,  1132,  1132,   997,
    1005,  1004
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1627,   180,   162,  1059,  2773,  2774,   483,   484,
     485,   486,   163,   164,   165,   814,   735,   100,   951,   506,
    1405,  1923,  1557,  1573,  1553,  2168,  2885,  1624,  2948,  1797,
     388,   911,  1384,   895,   898,   901,   916,    69,   412,   418,
     422,   425,    74,   428,    81,   444,   440,   434,   451,    91,
     461,   101,   108,   467,   470,   472,   540,  1012,  1894,   474,
     477,   115,   493,   166,   168,  2942,   184,   186,   231,  1054,
    1104,   529,  1001,   531,   541,  1004,  1009,   543,   545,  1015,
     548,  1017,   560,  1020,  1022,   563,   567,   571,   573,   576,
     580,   616,   612,  1472,   594,  1040,  1045,  1037,  1460,  1051,
     597,   624,   633,  1062,   638,   643,   635,   608,   604,   648,
     657,  1099,  1536,  1091,  1093,  1095,  1101,   662,  1106,   234,
     664,  1994,   253,   667,   669,   673,   678,   686,   271,  1546,
     701,   295,   744,  1562,   748,   756,  1164,  1581,  1159,  2056,
    1593,  1591,  2058,  1160,  1583,  1585,   762,   746,   765,   760,
     297,   305,   307,   805,  1243,  1650,  1232,  1750,  2198,  2213,
    1247,  1251,  1241,  1086,  1517,  1521,  1529,  1531,  2522,   313,
    1260,  1263,  1271,  2753,  2754,  2755,  2523,  2921,  2922,  1293,
    1299,  1302,  3010,  3011,  3007,  3008,  3059,  2756,  2757,   287,
     321,   329,   337,   829,   824,   342,   347,   349,   839,   846,
    1328,  1333,   905,   892,   354,   358,   323,   263,   259,   362,
     853,   369,   887,   862,   877,   878,  1370,  1365,  1816,  1355,
    1838,  1810,  1850,  1846,  1806,  1832,  1828,  1802,  1824,  1820,
    1359,   882,   864,   375,   376,   392,  1391,   395,   401,   928,
     931,   925,   403,   406,   936
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2800
static const yytype_int16 yypact[] =
{
    5394,    71,   108,    94, -2800, -2800,   898,  -137,  1592,   610,
    1512,   551,  2931,   263,   381,   117,   150,    93,  5621,   950,
    2525, -2800,   342,    90,   114,  1223,   475,   857,  1175,   305,
     131,   497,     0,   516,   268,   590,   897,  3428,   244,   796,
     645,   653,     0, -2800,   120,   125,   101,   -19, -2800,   129,
     755,  1321, -2800,   930, -2800,   112,  3926,   521,   130,   774,
     316,  1275,   520,   821,   885,   136,   940,    30,   841, -2800,
   -2800, -2800,  1046,   618, -2800,   375,    12,   381,    29,   721,
     676, -2800,   965,   618, -2800, -2800,   618,   618,   488,   931,
     618, -2800, -2800, -2800, -2800,   618, -2800, -2800, -2800, -2800,
   -2800, -2800,    42,   987,   981,  1033,  1039,   186, -2800,   618,
    1647,   618,   618,  1058,   618, -2800, -2800, -2800,   847, -2800,
   -2800, -2800, -2800,  4791, -2800, -2800, -2800, -2800, -2800, -2800,
     618, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800,  1427, -2800,   618, -2800,  1054, -2800, -2800,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   -2800, -2800, -2800, -2800, -2800,   939, -2800,   998,  1529,   941,
     139,   763,   901,   563,  4297,   616,  4844,  4762,  1072,  4791,
    2230, -2800,  1193,  -165,  1023,  1108,  1026,   165,   352,  1029,
     606,  1139,   529,     0,   788, -2800,   839,  1095, -2800,   908,
     851,   365, -2800,    25, -2800,   576, -2800,   146,  1079,    56,
   -2800, -2800,  5061, -2800, -2800, -2800,  1117,  1116,  1163, -2800,
   -2800, -2800, -2800,    74, -2800, -2800, -2800, -2800,   547, -2800,
   -2800,  5061,  4375, -2800,  1200, -2800,    36,  5061,  1194, -2800,
      89,  5061,  1203, -2800,    46, -2800,  1207,  1227,    53, -2800,
     618, -2800,  1230,  1213,  2930, -2800,  1212, -2800, -2800, -2800,
   -2800,  1232, -2800, -2800,   618, -2800,   381, -2800,   418,  1222,
    1241,   624,    77,  1243,    35, -2800, -2800, -2800,  1251,  1258,
     381,   381,   618,   618, -2800, -2800,  1261, -2800, -2800, -2800,
   -2800, -2800, -2800,  3360,  2930, -2800,  1267,    28,   618,  5061,
     618, -2800,  5061, -2800,  1271, -2800, -2800, -2800, -2800, -2800,
     618,  1216,   381,   778,   618,  1427,   618, -2800,  1277, -2800,
    4962, -2800, -2800,     5,  1288,  1295,   618, -2800,  1302, -2800,
   -2800,   138, -2800, -2800, -2800,  1303,  5061,  1312, -2800,  1360,
     618,  1214, -2800,   466,  1191,  1838,   133,  1322,   431, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800,  1326, -2800,   511,   346,
     367,   465,    54,   618,   369,  1328,   618,    64, -2800,   618,
    1041,  1346, -2800,   618,   618, -2800,    81,    26,    85,  1352,
    1427, -2800, -2800, -2800,  1074,   618, -2800, -2800, -2800, -2800,
   -2800,   618, -2800,  1369,  1370, -2800,   618,   661, -2800, -2800,
   -2800, -2800, -2800, -2800,   618, -2800, -2800,   618, -2800, -2800,
    1192,  1192, -2800,  1384, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800,  1162,   618,   618,  1429,  1443,
    1457, -2800, -2800,   618,   618,   618,   618,   618,   618,  1462,
     618, -2800,  1465,   618, -2800,  1466, -2800, -2800,  1468, -2800,
   -2800,  1239, -2800,  1470, -2800,  5061,  1471, -2800,   618, -2800,
   -2800, -2800,   618,  1474,  1469,  1469,  5061,   618,   618,   618,
     618,   618,   618, -2800,   618,  4791,  1647,   618,   618, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800,  1647,   618, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,  1478,
   -2800,  1185,     2, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800,  -128, -2800, -2800, -2800,  1299, -2800,   594,   393,
     393, -2800, -2800, -2800,  1485, -2800,  1486, -2800, -2800,   -64,
   -2800,  1294, -2800, -2800, -2800, -2800,  1304, -2800, -2800,  1427,
   -2800,   618,   618, -2800,  5061,  5061,  1427, -2800, -2800,  1427,
   -2800, -2800, -2800, -2800,  1427, -2800, -2800,  5061,  1427,   618,
   -2800, -2800,  5061, -2800,  1495,   506,  1279,    27, -2800, -2800,
    1280,  5061,    75, -2800, -2800, -2800, -2800, -2800, -2800,  1500,
    1504, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,  1506,
   -2800,  1291, -2800,   540, -2800,   618, -2800, -2800,  1509,  1509,
   -2800, -2800,  1509,  1509, -2800,   952, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,   146,
   -2800, -2800, -2800, -2800, -2800, -2800,  1307,  1308, -2800, -2800,
    1456,  1459,  1463, -2800, -2800,    68,  1282, -2800,   618,  1522,
    1293,  4962, -2800,  1427, -2800, -2800,  1527, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800,  5061,  5061,  5061,  5061, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800,  1533, -2800, -2800, -2800, -2800,  1534,  1545,
     381, -2800, -2800,  1552,  1555,  1340,   618, -2800,  2930, -2800,
    1567, -2800, -2800, -2800, -2800, -2800,   618, -2800,   381, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
     740,  1480,  1481,  1482, -2800,  1575, -2800,  1576, -2800,   596,
    1496,   555,   570,  4996,   855,  1577, -2800,  1584, -2800,  1588,
   -2800,   261, -2800,  1590,  1597, -2800,  1593, -2800, -2800, -2800,
     618, -2800,  4962,  4298,  1758,  1297,   684,  1598,   823,  1501,
   -2800, -2800, -2800,  1609,    32,    17,  1612,  1615,    40,   618,
     561,   601,   119,  5061,   381,  1937,   956,    39,    13,   459,
      44, -2800,  1605,  1606,  1620, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800,   618, -2800, -2800, -2800, -2800,
     618,   618,   618,   618, -2800, -2800,   618,  1427,   618, -2800,
     618,  1647,   618,  1627,  1427, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800,  1628,   519,   571, -2800, -2800, -2800,  1629,
   -2800, -2800, -2800, -2800,  1531, -2800,  1638,  1641,  1554,  1556,
    1568,  1656, -2800,  1659, -2800,  1660,  1573,  1662,   878,   948,
     492,    -5,   559,   994,   577,  1665,   578, -2800, -2800,  1667,
    1669,  1672, -2800, -2800,  1675,  1676,  1679, -2800,  1680, -2800,
   -2800, -2800, -2800,  1685, -2800, -2800,  1693, -2800, -2800,  1695,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800,   618,   414,   618,
   -2800, -2800, -2800, -2800,   618,   618, -2800,   618,  1337,   618,
     618, -2800,  4962,  1617,  1697, -2800,  1394,  1700, -2800,  1399,
    1705, -2800, -2800,   178,   618,   618, -2800,  1699, -2800, -2800,
    1709,  1205,   618,  1707,   232, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,  1712,
    1716,   618,   618,   618,   618,   618,  1718,   618,  1722,   618,
    1727, -2800,   381,  1729,  1730,  1427,  5061, -2800, -2800, -2800,
   -2800, -2800,  1427, -2800, -2800,   618,   618,   618,  5061,   618,
    1647,   618, -2800,   618, -2800, -2800, -2800, -2800, -2800,  1741,
    1743, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800,   616, -2800,   618, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800,  5061,   618,  1427,  1427,   178,
     178,   178,  1427,  1647,   618,  1427, -2800, -2800, -2800,   618,
   -2800,   540,  1570,  1749,  1752, -2800, -2800,  1427, -2800,  1607,
    1619, -2800,  1762,  1767, -2800,  1776,  1365,  1757,  1763, -2800,
     618, -2800, -2800, -2800, -2800, -2800,  4731,    33,  1490,   507,
   -2800, -2800, -2800, -2800,   618,   199,  1085, -2800,  1515, -2800,
    1937,  1516,   266,  1477,   158, -2800, -2800,   618, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800,  1494, -2800, -2800,
   -2800, -2800,   618,  1802, -2800, -2800, -2800, -2800,   178, -2800,
   -2800, -2800, -2800, -2800,  1807,  1808,  4890, -2800, -2800,  1809,
    1810,   618, -2800, -2800, -2800, -2800,  1811,  1812,  1813,   558,
     558,    -4,  1815,  1817,  1818,  1819,  1819,  1819,  1820,  1511,
    1519,  1821,  1827,  1828,   116,   116,    -4,  1831,  1832,    -4,
    1833,  1834,  1837,  1840,  1837,  1840,  5622,  1841,  1842, -2800,
   -2800,  1837,  1840,   882, -2800,  1839,  1844,  1847,  1849,   558,
      -4,  1845,  1850, -2800,  1851, -2800, -2800,  1427,  1379,  1298,
    1571,  1595,  1596,  1744,  2732,  1599,  1861,    24,     8,  1756,
     512,  1870,  1428,  1835,  1613,  1616,  1775,  1885,  1653,   159,
      34,   -72,   308,  5061,  1937,  1852,   766,  1621,  1654,  1890,
     123, -2800, -2800,   298,  1893,  1894, -2800, -2800, -2800,  1896,
    1664,    87,  1937,  1668, -2800, -2800,  1846, -2800,   381,  1903,
    1904,   618, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800,     7, -2800,  3820,  1907, -2800, -2800, -2800,   618, -2800,
     618, -2800, -2800, -2800, -2800,   618,   618,   618,   823,  5061,
   -2800,  1908,  1409, -2800, -2800,   618, -2800, -2800,   618,  5061,
     618, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800,   381,   618, -2800,   618,
     823,  1909,  1912, -2800, -2800, -2800, -2800,   618,   618, -2800,
     381, -2800, -2800, -2800,   208,  1913,  1914, -2800, -2800, -2800,
   -2800, -2800,   618,   618, -2800, -2800,  1647,   618,   618, -2800,
   -2800, -2800, -2800,  1916,   618, -2800,   618,  1778, -2800,   618,
   -2800,   618,  1792, -2800,  1917, -2800,  1047,  1047,   579,   588,
     719,  1047,  1918, -2800,   726, -2800,   757,   811,   813,   864,
   -2800,  1920,  1921,   865,  1923, -2800,  1952,  1957,  1924, -2800,
     909,   929,  1961,  1962,  1964, -2800, -2800,  1965,  1966,  1968,
   -2800,  1047,  1047,  1047, -2800, -2800, -2800,   618, -2800, -2800,
   -2800, -2800,   618, -2800, -2800, -2800,   618, -2800,   618,   717,
    5061, -2800,   618, -2800,  1427, -2800,  4962, -2800, -2800,  1969,
   -2800, -2800,  1970, -2800, -2800, -2800, -2800,  1971,   778, -2800,
     618,  1974,   618,   618,   618,  1343, -2800,  1972,   618,   618,
    1973,   618,   618,  1975,   618,  1976,   618,   -16,  1981,   381,
     381, -2800,  1427,   618,  1985,  1986,  1987,  1427,  5061, -2800,
     618, -2800, -2800, -2800,   618,   618,   618,  1427,  5061,   178,
   -2800, -2800, -2800, -2800,  1647,   618,  1988,   178,   618,   772,
   -2800,  1990, -2800, -2800,   171,  2068,   618, -2800,   618,  1989,
    1979,   618, -2800, -2800, -2800,  1992,  1403,  4791,  1733,  1734,
    1735,   172,  5061,  1737, -2800,    48,    65,   195, -2800,  1738,
    1739,   217, -2800, -2800,   611,  1785,   672,  1754,   554,  1937,
     583, -2800,  2005,  1736, -2800,   625, -2800, -2800, -2800, -2800,
    1937,  1777,     1, -2800, -2800, -2800, -2800, -2800,   618, -2800,
     618, -2800, -2800,   618,   618, -2800,   618, -2800,   618, -2800,
   -2800, -2800, -2800,  1789,   618, -2800, -2800, -2800,   618,    61,
   -2800, -2800, -2800, -2800,  2010,  2013, -2800,   618,   558,   558,
     558, -2800, -2800, -2800, -2800, -2800, -2800,  2014,   558,   558,
     558,   884, -2800, -2800, -2800,   558, -2800,   116,   558,   558,
     558, -2800, -2800,   558,   558,  2016,   558,   558,  2018,   116,
    1284, -2800,   962, -2800,  1364, -2800, -2800, -2800,  2019,  2021,
    2022, -2800,  1167, -2800,  1246, -2800, -2800,  1720,  2023,  2024,
    2025,   116,   116,    -4,  2027,  2028,    -4,  2029,  2032,  2033,
     558,   558, -2800,  2034,   558,   558, -2800,  2035, -2800, -2800,
   -2800, -2800, -2800, -2800,   381, -2800, -2800, -2800,  4791,  1107,
     618,  1285,  1635,   523, -2800, -2800, -2800,   808, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
    2039,   618, -2800,   381,  2042,   618,  5061,   381,   381,  2047,
    1690,  1773,  1788,   250,   255,  1790,   262,  1688,  1710,  2053,
    2054,  2055,  2056,  2732,  2057,  2058,  2059,  1719,  1721,  1421,
    2061,   618,  1435,  1772, -2800, -2800,   381,  5061, -2800, -2800,
    5061,   618,   -13,  2063,  5061,   618,  1427,   381, -2800,  2065,
    5061,  5061,   618, -2800, -2800, -2800,   381,   381,  5061, -2800,
   -2800, -2800, -2800, -2800, -2800,  5061,   618,   381, -2800,  2066,
   -2800, -2800,   618, -2800, -2800,  2069,   618,  1816,   142,   618,
    1823,   618,   167,   618,  2073,   618,  1826,  1830,   618,   618,
     618,   618,   618,   618,   618,   618,    23,   618,   618,  1836,
   -2800, -2800,   618,   618,   618,   618, -2800,  5061,  1427,  2074,
    2076,  2077,   618,   618,  1427, -2800,   618,   618,   618,  5061,
     823, -2800,   618,   618, -2800, -2800, -2800,  2079, -2800, -2800,
   -2800, -2800, -2800, -2800,  2081,   618,   618, -2800,   618,   618,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,  2084,
    2085,  2087, -2800,  2088,  2090,  2092, -2800,  2093,  2094,  2096,
   -2800, -2800,  1047,  2099,  2102,  2105, -2800,  2106,  2109,  2111,
   -2800,  2112,  2113,  2115, -2800,  2116,  2117,  2119, -2800,  2129,
    2130,  2120, -2800,  2132,  2133,  2134,  2136,  2138, -2800,  2139,
   -2800, -2800, -2800,  2141,  2142,  2144, -2800,  2145,  2147,  2149,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
     618, -2800,   618,   618, -2800, -2800,   618, -2800,  1427, -2800,
   -2800,   778,   618,  1427,   618,   618,   618, -2800,   618,   618,
    2150,   618, -2800,   618,   618,  2154,   618,   618,  2155,   618,
    2156,   618, -2800, -2800,  2158,  5061, -2800,  2159, -2800,   618,
   -2800, -2800, -2800, -2800,  1427, -2800,  1035,   618,  1035,   178,
    1427,  5061,   618,   618,  2162, -2800, -2800, -2800,   618, -2800,
   -2800, -2800, -2800, -2800,  5061, -2800,  5061,   618, -2800, -2800,
     540,  2165,  2166,  2167,  2168,  2170,  4920,  1427, -2800,  5061,
    5061,  5061,  4791,  5061,  1427,  5061, -2800, -2800,  5061, -2800,
   -2800, -2800, -2800,  4791,  5061,  5061,  5061,  4791,  5061, -2800,
    5061,  5061,   618, -2800, -2800,  5061,  5061,  5061,  5061, -2800,
   -2800,  5061,  5061, -2800, -2800, -2800, -2800,  5061,  5061, -2800,
   -2800,  2038, -2800, -2800, -2800, -2800,   618,   618, -2800, -2800,
    2163,   618, -2800, -2800,  2172, -2800, -2800,   618, -2800, -2800,
   -2800,   558, -2800, -2800, -2800,  2173,  2174,  2175, -2800, -2800,
      -4,  2177,  2178,  2189, -2800,   558, -2800, -2800, -2800, -2800,
   -2800,   116, -2800, -2800,  2179,   558,  2190,  2203,  2205,   116,
     116,    -4,  2211,  2212,  2213,  1770,  2214,  2215,  2216,   116,
     116,    -4,  2218,  2219,    -4,  2223,  2225,  2226,  2227,   116,
     116,    -4,  2220,  2231,  2232,  1380, -2800,  1489, -2800,  1493,
    1856,  2233,  2235,  2236,   116,   116,    -4,  2239,  2240,    -4,
    2241,  1933,  2242,  2243,  2246,   116,   116,    -4,  2248,  2250,
      -4,  2251,   116, -2800, -2800, -2800, -2800, -2800,  2253, -2800,
   -2800,  2254,   116,  2256,  2257, -2800, -2800,   558, -2800, -2800,
    2258, -2800,  1427, -2800,  5061,   618,   618,  5061,   618,  2259,
    1298, -2800, -2800, -2800, -2800, -2800, -2800,  2261,  5061,   381,
    2262,  5061,  1427, -2800, -2800, -2800,  2263,  1298,   618,   618,
     618,   618,   618,   618,   618,   618,   618,  2265,  2267, -2800,
   -2800, -2800, -2800,  2268, -2800, -2800, -2800,  2270,  2271, -2800,
   -2800, -2800,   618,  5061,   618,  2273,  1298,   381,  1427,  1427,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
    1427,   618,  1647, -2800, -2800,  1427,  1427,   618, -2800, -2800,
    1427,  1427, -2800, -2800, -2800, -2800, -2800,   618,   618,   618,
     618,   618,   618,   618,   618,   618,   618, -2800, -2800,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
    1581,  2275,   618, -2800,   618,   618,   618,  2272,  2278, -2800,
   -2800,  1427,   178, -2800,  2282,  2284, -2800, -2800,  1647,   618,
   -2800,  2288,  1427,  5061, -2800, -2800, -2800,  2291, -2800, -2800,
   -2800, -2800,  1047,  1047,  1047,  1047,  1047,  1047,  1047,  1047,
    1047, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,  1298,
     618, -2800,   618, -2800,   618,  1427,   618, -2800,  1647,   618,
   -2800,   618, -2800,  2143,  2293,  2295,   618,   618, -2800,   618,
     618,  2297,   618,  2299,   618,  2300,  1427,  2301,  5061, -2800,
   -2800,   618, -2800,   618, -2800,   178,   171,   618,  2306, -2800,
     618, -2800, -2800,  4791, -2800,  2307,  2308,  2310,  2313,  2314,
    5061,  1427, -2800,   171,   171,   171,  1427, -2800,   171,   178,
     171,   171,  1427, -2800,   171,   171,   171,  1427, -2800,   171,
     171,  1427,  5061,  1427,   171,  1427,   171,   171,  1427,   171,
    1427,  5061, -2800, -2800,  2316,  4791,  2317,   618, -2800, -2800,
   -2800, -2800,  2319, -2800, -2800, -2800, -2800,   558,   116, -2800,
   -2800, -2800, -2800, -2800, -2800,  2320, -2800, -2800,   116,   116,
   -2800, -2800, -2800, -2800, -2800,  2321, -2800, -2800,  2322,   116,
   -2800, -2800, -2800, -2800, -2800,  2323, -2800, -2800,   116,  2325,
    2326,  2327,   116,   116,    -4,  2329,  2330,  2331,  2332,  2334,
    2335,   116,   116,    -4,  2338,  2339,  2340,  2342,  2343,  2344,
     116,   116,    -4,  2346,  2347,  2348,   116,   558,   558,   558,
     558,   558,  2350,   558,   558,  2352,   116,   116,   558,   558,
     558,   558,   558,  2353,   558,   558,  2354,   116, -2800,   116,
    2355, -2800,  2356,  2357, -2800,  4962, -2800,   171,  2358,  5061,
     171,   618,  5061,  2359, -2800,   171, -2800, -2800,   171, -2800,
    5061,  2361,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   618,   618, -2800, -2800, -2800,  5061,   171,   618,  5061,
    2362, -2800,  1647,  1647,   178,  5061,  1647,  1647,  5061,  5061,
    1647,  1647,   618,   618,   618,   618,   618,   618,  1298,   618,
     618,   618,  5401, -2800,  1298,   618,   618,   618,   618,  1298,
     618,   618,   618,   618,   618,   618,  1427,   618,  1769,  1298,
     618,   618, -2800, -2800,   178,   381,  5061,  5061, -2800, -2800,
   -2800,   178,  1427,  2363, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800,   618, -2800, -2800,  1647,   618, -2800,
   -2800, -2800,  1383,  2364,  2365,  2367,  2368,   618,   618,  2369,
     618, -2800,  2370,  1035, -2800, -2800,   171, -2800, -2800, -2800,
   -2800,  2371, -2800, -2800,  1427,  2373,  2374,  2376,  2377,  5061,
    2378,  1427, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,   178,   171,
     178, -2800,   178, -2800, -2800,   178, -2800,   178,  1427,  2379,
    1427,  2381, -2800,   618, -2800, -2800,   558,   116, -2800, -2800,
     116,  2382, -2800,   116, -2800,   558,   558,   558,   558,   558,
    2383,   558,   558,   116,   558,   558,   558,   558,   558,  2385,
     558,   558,   116,   558,   558,   558,   558,   558,  2386,   558,
     558,   116,   558, -2800, -2800, -2800, -2800, -2800,   116, -2800,
   -2800,  2387,   558,   558, -2800, -2800, -2800, -2800, -2800,   116,
   -2800, -2800,  2388,   558, -2800,   116, -2800, -2800,  1427, -2800,
    5061,   171, -2800,  2389,  1427,   618, -2800, -2800,  1427,   618,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,   618,
     618,   171, -2800,  2390,  1427,   618,  1647, -2800,  2391,   171,
     618,  1647,   171,   171,  5061, -2800,   618,  2393,  2393,   618,
     618,  2393,  1298,  2393, -2800,  5061,  1725,  1864,  1871,  1930,
    1944,  1953,  1984,  5401, -2800,  2008, -2800, -2800,  1298,  2393,
    2393,   618,   618,  1298,   618,   618,   618,   618,   618, -2800,
    1647,   618,  2395, -2800, -2800,   618,  2393,   381,    19,  1427,
    1427,   381,   178,  2397, -2800, -2800, -2800,  2400,   618, -2800,
    2401,  2398,  2404,  2405,  2408, -2800,  2409,  2410,   618, -2800,
   -2800,  2411,    20,  5061, -2800,  2439,    78,  5061, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800,  2445,    20,   618,
   -2800, -2800, -2800,   116, -2800, -2800, -2800, -2800, -2800, -2800,
     116, -2800, -2800,   558, -2800, -2800, -2800, -2800, -2800,   116,
   -2800, -2800,   558, -2800, -2800, -2800, -2800, -2800,   116, -2800,
   -2800,   558, -2800,   558,   116, -2800, -2800,   558,   116, -2800,
   -2800,   618,   171, -2800,  5061,  5061,   618,  5061,   618, -2800,
   -2800, -2800,  5061,  5061,   618, -2800, -2800, -2800,  5061, -2800,
   -2800, -2800,   171,  2446, -2800, -2800, -2800,  1298,   618, -2800,
    2447, -2800, -2800,  1427,  2732,  2448,  2450,  2451,  2452,  2453,
    2455, -2800,   381,  2456, -2800, -2800,  1298,   618,  2457, -2800,
   -2800,   618,  5061, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
      19,  1898,  1937, -2800, -2800, -2800,   381,  2458,  2459,  2460,
   -2800, -2800, -2800,  2462,  2463,  2465, -2800,    21,    20, -2800,
   -2800, -2800, -2800,  2466,  5061, -2800, -2800, -2800, -2800, -2800,
      20, -2800,  2467, -2800,   558, -2800,   558, -2800,   558, -2800,
   -2800,   558, -2800,   558,  4962, -2800,   171,   171,   618,   171,
    2468,   171,   171,   618,   171,   618, -2800, -2800, -2800, -2800,
    2470, -2800,   618, -2800, -2800,  2471, -2800,  2473, -2800, -2800,
   -2800, -2800, -2800,   618, -2800, -2800, -2800,  2486,   618, -2800,
   -2800, -2800,  1427, -2800, -2800, -2800,  1898, -2800,  2062,  2064,
    1937, -2800, -2800, -2800,  2491,  2492, -2800, -2800, -2800, -2800,
   -2800, -2800,   827,   827, -2800, -2800,  1427, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800,   171, -2800, -2800,  2487, -2800,  4791,
   -2800, -2800,  2494, -2800,  1298, -2800, -2800,  1298,   618, -2800,
    2497, -2800,   618, -2800,  1298,   618, -2800,  5061, -2800,  2062,
   -2800,   381, -2800,  2500,  2501,   618,   618,   618,   618,    78,
    2510,  4791,  1427, -2800,  4791, -2800, -2800,   618, -2800,  2515,
   -2800,   618,   171, -2800, -2800, -2800,  2516,  2521,   618,  2528,
     618, -2800, -2800,  1427, -2800, -2800,  1427, -2800, -2800,  2531,
   -2800, -2800,  2532,  2534, -2800, -2800,  2536, -2800,  2537, -2800,
   -2800,  1298, -2800,  1298, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2800, -2800,    -3, -2800,   134, -1038, -1657, -1159,  1869, -2800,
     951,  -461,  1764,   -54,    45, -2800,  -309, -1902,  1947,  1829,
   -1008, -1808, -1032,   705,  1371, -2800,  -970, -2800,  -617, -1242,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800,  -474,  -529, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2173, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800,   773, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800,   321, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800,  -347,  -145, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -1672, -2800, -2800, -2800, -2800,
   -2800, -2800,  -781, -2800, -2800, -2800, -2800, -2800, -2800,   212,
   -2800, -2800, -2800, -2800,  -278,  -777, -1552,  -400, -2800, -2800,
   -2800, -2800, -2800,  -467,  -460, -2800, -2800, -2799, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800,  1677, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800, -2800,
   -2800, -2800, -2800, -2800, -2800
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1403
static const yytype_int16 yytable[] =
{
      73,  2143,   400,  1459,  2311,   806,  2313,   363,   114,  1259,
    1262,  1013,  1724,   183,  2161,    70,    71,  1981,  1286, -1178,
    1628,  1451,  1452,  1453,    70,    71,    70,    71,  2210,  1294,
     926,  1042,   808,  1892,   334,   992,  1657,    70,    71,  2162,
     763,   688,  2163,   361,  1290,   995,   644,   465,  1245,  1303,
     699,  1653,   394,  2164,  2939,   405,  1254,   704,   411,  1248,
    1351,   308,   417,   835,   420,   424,   902,    70,    71,   427,
     429,   660,  1688,   439,   595,  1946,   446,   450,  2165,  1048,
     453,  1992,   336,   454,   455,   922,  1096,   463,  1002,   929,
      70,    71,   464,  1950,   694,  1798,  2166,    70,    71,  1811,
    1539,   836,   364,  1507,    70,    71,   478,   482,   487,   488,
     492,   494,  2945,   999,  1575,    70,    71,  1578,   365,    61,
     670,   116,    70,    71,   352,  1713,  1352,   498,  1705,  1857,
    1858,  1859,  1571,    70,    71,   116,   298,  1249,  1613,    70,
      71,    60,    70,    71,   309,    70,    71,  1295,   169,   181,
    1304,  1003,  1018,    70,    71,   256,   255,  1264,  1305,   837,
    1658,  1265,   507,   170,   304,    62,   171,   671,   497,  1353,
      70,    71,   341,   645,  1532,  1508,   596,   757,  1555,   260,
    1689,   442,    82,   370,   705,    63,  1686,   539,   353,   903,
     355,   475,   561,  1942,   409,  1920,  1921,   758,   879,   172,
    1296,   299,    70,    71,   689,  1509,   119,   173,  1654,  3060,
    1043,   441,  1000,  1775,   366,    64,  1953,  1951,   182,   476,
    1049,  1692,   435,  1019,  1776,   300,   443,  2940,   367,  1693,
     601,  3019,  1947,  1714,  1250,   371,  1414,    65,  1957,  1266,
     562,    66,   570,  1415,   575,   579,   372,   121,   116,   338,
     809,  1297,   185,   310,   351,   615,    67,   695,   810,   811,
    3083,   121,   700,  1533,   880,  1267,   904,   706,   311,    70,
      71,  2130,   658,   174,  1167,  1922,  2132,   661,  1255,   373,
     838,   738,  1403,  2135,   301,  2946,   834,   759,  1893,   672,
    1655,   646,  1572,  1556,  1510,   812,   466,  1097,   167,   770,
     771,  1354,   844,  1525,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,  1948,   815,   914,   817,   359,   690,
     116,   408,  1246,  1993,   647,  1707,  1168,   820,   823,  1291,
     826,   830,   175,   832,   923,  2941,  1268,   764, -1178,   312,
    1659,  1656,  1298,   842,   124,   421,   116,   927,  1725,   532,
     116,   436,  1511,   125,   126,   533,   852,   854,   124,  1292,
    3020,   176,  1690,   177,  2211,  1949,   368,   125,   126,  1256,
    1319,   116,   696,   116,   121,  1044,   691,  2167,   828,   430,
     906,  1306,  1098,   913,   915,   116,   917,   907,  1982,   127,
     920,   921,   178,  2947,  2189,   437,   438,  1952,   534,  1122,
    1706,   935,   937,  1050,   537,  3021,   930,   257,   938,   924,
     813,  1687,   254,   941,   943,  1715,   893,   605,   116,  2194,
     739,   944,    72,   740,   945,   625,   535,  1697,   845,   360,
     640,   261,   258,  1519,   768,   769,    68,   896,  1943,   881,
     393,  1911,   356,   955,   956,  1717,   121,  1269,   129,  1915,
     960,   961,   962,   963,   964,   965,   262,   967,   404,   374,
     969,  1954,   129,   116,   416,   179,   825,   357,   302,   116,
    1404,   124,   121,  2110,  1169,   977,   121,  1757,   536,   978,
     125,   126,   602,  1958,   983,   984,   985,   986,   987,   988,
     272,   989,   456,   482,   993,   994,   884,   121,   159,   121,
    1527,  2127,   306,   482,   996,   160,   161,   603,  2590,  1769,
    1038,   121,   159,   894,   897,   900,  2131,   303,   910,   160,
     161,  2133,   537,   538,  2156,  2603,  2604,  2605,  2136,  1439,
    2607,   856,  2609,  2610,  1661,   899,  2612,  2613,  2614,  1513,
     991,  2616,  2617,   124,   121,  1010,  2621,   889,  2623,  2624,
    1708,  2626,   125,   126,    70,    71,  1170,   865,  1025,  1026,
    1694,  1324,   885,   296,   314,  1662,   119,  1171,  1663,   124,
    2251,  2088,  1455,   124,  2091,   129,  1034,   618,   125,   126,
    1695,   339,   125,   126,   315,   322,   316,   741,   742,   121,
    1011,   431,   340,   109,   124,   121,   124,   857,   908,   619,
    1664,  1140,  1172,   125,   126,   125,   126,  1107,   124,  1141,
    1142,   613,  1060,  1329,   110,   649,   620,   125,   126,    70,
      71,    70,    71,   867,  1356,   159,   650,   890,  1234,   749,
    1039,  1665,   160,   161,  1666,   858,   859,  2111,  1959,  1325,
      92,   124,  1362,  1367,  1799,  2951,   432,   129,  1152,   348,
     125,   126,  1976,  1803,   433,  1102,   651,   457,   458,  2699,
     324,  1143,  2702,  1154,    70,    71,   119,  2706,  1234,   606,
    2707,   111,   942,   129,  1235,   614,   119,   129,  1006,    70,
      71,  2798,   641,   909,  1087,  1514,   124,  1057,  1227,  2722,
    1357,  1330,   124,   743,   607,   125,   126,   159,   129,  1158,
     129,   125,   126,  1121,   160,   161,   459,   642,  1363,  1368,
    1800,   674,   129,  1124,  1235,   621,  1228, -1402,  1177,  1804,
     317,  1864,  1969,   159,    70,    71,  1970,   159,  1382,  1153,
     160,   161,  1551,  1979,   160,   161,  1326,   886,  1261,   891,
     652,   860,  1966,  2112,  1155,   129,  1515,   350,   159,   127,
     159,   750,   546,  1126,  1127,   160,   161,   160,   161,   377,
     447,   547,   159,   460,  1552,  3024,  1667,  1176,   112,   160,
     161,  1971,   861,  1516,   407,    93,  1917,  3027,  2799,   402,
    1300,    70,    71,   318,  1807,   653,  1257,  1007,  1331,  1270,
     129,  1813,   675,   751,   752,   159,   129,   117,   875,  1960,
    2113,  1668,   160,   161,    94,  1128,  1967,  1586,    95,  1144,
    1145,  2810,  1310,  1977,  1595,  1327,  1058,  1311,  1312,  1313,
    1314,   413,  1817,  1315,  1236,  1317,   414,  1318,   482,  1320,
      70,    71,   119,   319,  1117,  1972,   626,   676,   119,   753,
     159,  1237,  1238,   320,    70,    71,   159,   160,   161,   127,
    1808,  1258,  1125,   160,   161,  1781,   622,  1814,   627,   127,
     654,   273,  1229,  1961,  1236,  1358,    96,  1332,  1394,   448,
     655,   623,   343,  1008,   113,   628,  1821,  1978,  1825,  1968,
     677,  1237,  1238,  1364,  1369,  1801,   120,  1597,  1818,   415,
    1234,  1146,  2324,  2863,  1805,  1598,  1599,  2005,  2006,   754,
    1973,  2314,  1147,  1148,  1381,   274,  1385,  1149,   275,  1699,
      97,  1386,  1387,  2871,  1388,  1390,  1392,  1393,   656,    98,
      99,  2877,  2114,  1230,  2880,  2881,   755,   276,  1273,  1829,
    1835,  1406,  1407,  1301,   389,   462,  1235,  1150,  1411,  1412,
    1239,  1240,  1822,   445,  1826,   419,   277,  1600,  1161,  2007,
    1231,  2473,   122,  1129,  1130,   449,  1066,  1067,  1418,  1419,
    1420,  1421,  1422,   278,  1424,  1963,  1426,  2035,  2481,   279,
     452,  1346,  1068,  1964,  1843,  2036,  2037,   423,  2372,  1010,
    1239,  1240,  1434,  1435,  1436,   344,  1438,   482,  1440,  2233,
    1441,   468,   629,  1912,  1847,  1830,  1836,  2500,  1287,  2385,
    2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,  2395,
    1587,  1444,  2398,  1446,   469,   127,  1069,  1596,  1700,  2405,
     280,   127,  1070,  1448,  1011,  1809,   128,  2038,  2115,  1162,
     482,  1456,  1815,   609,  2442,  1131,  1458,  2445,   471,   232,
    1844,  1348,  1383,   281,   473,  2453,  1132,  1133,  2456,    70,
      71,  1071,  1347,  1471,  2965,   630,   233,  1475,   508,  1445,
    1848,    70,    71,  1819,   495,    92,   519,   390,   520,   345,
     530,  1518,  1520,  1523,  2975,  1072,  1288,    70,    71,  1528,
     346,  1134,   542,  1701,  1534,  2116,  1236,  1360,    70,    71,
     544,  1792,  1793,   598,  1073,  1601,  1602,  2008,  2009,  1537,
     489,  1522,  1590,  1237,  1238,   631,  1428,   572,    75,  1074,
      70,    71,  2104,   599,    76,   632,  1075,  1823,  1547,  1827,
    2563,   600,  1349,   610,  1076,   325,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   617,   282,   634,    77,  3035,  3036,
     611,  3038,   391,  3040,  3041,   636,  3043,   637,  1361,   639,
    1831,  1837,  2060,  1289,   659,  2039,  2040,  1603,   490,  2010,
    2061,  2062,   426,   283,   284,    78,  1077,   665,  1604,  1605,
    2011,  2012,  2892,  1606,   666,   285,   668,  1691,   693,   286,
      93,   288,  1239,  1240,   289,   687,  1078,   698,    70,    71,
     934,  1079,   702,  1080,  2545,  1845,  1410,   736,  1716,    70,
      71,  2917,  2985,  1607,   946,  2013,  3070,   745,  1723,    94,
    2979,   703,  2063,  2310,   707,  1849,   737,    79,  1794,  1795,
     581,  1081,  1082,   972,   973,  1752,   747,  1753,   761,  2996,
    1083,  2071,  1754,  1755,  1756,   766,   582,  2041,   821,  2072,
    2073,   708,  1762,   767,   709,  1763,   772,  1765,  2042,  2043,
    1796,  1084,   807,  2044,  3103,   491,   819,   326,    70,    71,
     583,   833,    80,   710,  1767,   327,  1768,   328,    70,    71,
    2107,    96,   840,   947,  1772,  1773,   290,  2026,  2027,   841,
     584,    70,    71,  2045,  1625,  1626,   843,  2589,   847,  1779,
    1780,  2074,   291,   482,  1782,  1783,   849,   264,   855,   711,
     585,  1785,   863,  1786,   586,   712,  1788,   883,  1789,  1085,
     888,  2608,   912,  2977,  2978,    97,   822,  2981,   410,  2983,
      70,  1389,  1868,   918,    98,    99,    70,    71,   265,  2028,
     919,   292,  2994,  2995,   587,   588,   932,  2999,  3000,  2742,
     378,  3003,  1720,    70,    71,  2758,  3004,  3005,    70,  1470,
    2763,   379,   948,   939,  1860,   940,   713,  2046,  2047,  1861,
    2064,  2065,  2650,  1862,   954,  1863,    70,    71,   953,  1866,
    3076,  2659,  1063,  2409,  2410,  1064,  1065,  3080,  1397,  1398,
    2668,   380,   850,  1400,  1401,  1872,  1880,  1875,   293,  1877,
    1878,  1879,  1881,  1760,  1761,  1883,  1884,   589,  1886,  1887,
    1766,  1889,   294,  1891,  3045,  2149,  2150,  3046,   590,  2048,
    1899,   266,  3049,   957,  1774,   980,   981,  1905,    70,    71,
    2153,  1906,  1907,  1908,  3053,  2411,  2787,   958,   267,  3056,
    1670,   482,  1913,  1874,  3117,  1916,  3118,  1563,  1564,  2075,
    2076,   959,  2066,  1926,   499,  1927,   966,  1618,  1929,   968,
     970,   949,   971,  2067,  2068,   974,   976,   950,  2069,   481,
     851,  1671,   479,   997,  1672,   381,   998,  1673,  1005,  1014,
    1016,  1931,  1021,  1023,   591,   592,  2728,  2029,  2030,  1036,
    1041,  1046,  2418,  2419,  1918,  1052,  2427,  2428,  2070,  1053,
    1055,   714,  1056,  1061,   268,  1983,  1674,  1984,  1088,  1089,
    1985,  1986,  1938,  1987,  3098,  1988,  1090,  1103,  3101,  1092,
     382,  1990,  1109,  1094,  1100,  1991,  2777,  1114,  1115,   715,
     716,  2077,   500,  2781,  1997,  1619,  1105,  1675,  3112,  1116,
    1676,   717,  2078,  2079,  2420,   718,  1118,  2080,  2429,  1119,
     269,  1120,  3119,  1896,  1897,  3120,  3121,   501,   502,  1932,
     593,   270,  1123,  1135,  1136,  1137,   503,  2049,  2050,  2031,
    1138,  1139,  1163,  2890,    70,    71,   521,  2081,  1165,  1151,
    2032,  2033,  1166,  2412,  2413,  1173,    83,  1175,   504,  2903,
     117,   102,  1174,  1233,  2908,   383,   522,  1242,   505,  1226,
    2809,   103,  2811,  1244,  2812,   384,  1252,  2813,   104,  2814,
    1253,  1307,  1308,   523,  1309,  2034,  2105,  2106,  2108,  1620,
    1621,  1321,  1323,  1334,    84,  1335,   524,   385,    70,    71,
    2109,  1625,  1626,  1336,  1622,   386,  1337,  1338,  2118,  1339,
      70,    71,  2121,  1933,  1934,   479,   480,   481,   525,  2051,
    1341,  1340,   526,   387,  1342,  1343,  1344,  1345,  1935,  1366,
    2052,  2053,  1371,  2103,  1372,  2414,  1373,   527,  2152,  2154,
    1374,  1375,  1677,  1376,  1377,  1395,  2415,  2416,  2160,   120,
    1378,  1623,  2171,    70,    71,  2126,  1625,  1626,  1379,  2177,
    1380,  1396,  2421,  2422,  1399,  2054,  2430,  2431,   105,  1402,
    1408,  2506,    85,  2182,  1409,  1936,  1416,  1678,  1413,  2185,
    1417,  2417,  1423,  2187,   528,  2190,  2191,  1425,  2193,  2195,
    2196,  1427,  2199,  1429,  1430,  2202,  2203,  2204,  2205,  2206,
    2207,  2208,  2209,  2212,  2214,  2215,  1442,  1679,  1443,  2217,
    2218,  2219,  2220,  1461,  1462,   122,  1463,   106,  2101,  2226,
    2227,    86,    87,  2229,  2230,  2231,  1467,  2548,  2886,  2234,
    2235,  2889,  1468,  2891,  2926,    70,    71,  2155,  1625,  1626,
    1469,  1465,  2238,  2239,  2423,  2240,  2241,  2119,  2432,  2904,
    2905,  2123,  2124,  1466,   107,  2424,  2425,  1473,  1530,  2433,
    2434,   335,  1512,  1474,  1524,  1526,  2919,  1538,  1535,    88,
      89,  1540,  1541,  1544,  1566,  1545,  1548,  1549,  1550,  1558,
    2157,  1559,  1567,  1560,  1561,  1565,  1568,  2569,  1215,   128,
    2426,  2173,  1569,  1570,  2435,  1576,  1577,  1629,  1579,  1580,
    2178,  2179,  1582,  1608,  1216,  1584,  1592,  1594,  1609,  1614,
    1574,  2183,  1610,  1217,  1611,  1615,  1616,  2279,  1632,  2280,
    2281,  1630,  1631,  2282,  1218,  1651,  1652,    90,  2284,  2287,
    1660,  2289,  2290,  2291,  1669,  2292,  2293,  1680,  2295,  1681,
    2296,  2297,  1682,  2299,  2300,  3075,  2302,   496,  2304,  1683,
    1684,  1685,  1703,  1702,  1698,  1704,  2308,  1709,  1787,  1710,
    1219,  1711,  1712,   865,  2312,  1719,  1718,  1721,  1722,  2317,
    2318,  1751,  1790,  1759,  1770,  2320,  2286,  1771,  1777,  1778,
    1784,  1791,  1220,  1812,  2323,  1833,  1834,  1839,  1842,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,  1840,   559,  2352,
     566,   569,  1841,   574,   578,   866,  1851,  1852,  1853,   867,
    1854,  1855,  1856,  1962,  1869,  1870,  1882,  1885,  1221,  -493,
    1888,  1890,  1871,  2362,  2363,  1876,  1895,  2337,  2365,  1900,
    1901,  1902,  1914,  1928,  2367,  1919,   663,  1930,  2343,  1939,
    1940,  1941,  2348,  1945,  1955,  1956,  1965,   868,   869,  1974,
    1989,  1980,   870,  1975,  1995,   679,   685,  1996,  2001,  1222,
    2021,   692,  2024,  2082,  2055,   697,  2057,  2059,  2083,  2084,
    2085,  2089,  2090,  2137,  2092,  1274,  2093,  2094,  2097,  2128,
    2100,  2726,  2727,  1275,  2117,  2730,  2731,  2120,  1223,  2734,
    2735,  1276,  2125,   871,  2129,  2138,  2134,  2139,  2140,  2141,
    2142,  2144,  2145,  2146,  2147,  2151,  2148,  2169,  2188,  1277,
    2174,  2184,  1924,  2389,  2186,  2192,  1278,  2197,  2200,  2223,
    2224,  2225,  2201,   816,  2236,  2237,   818,   117,  2216,  2242,
    2243,  2244,  1224,  2245,  1225,  2246,  2247,   827,  2248,  2249,
    2250,  1279,  2468,  2469,  2252,  2471,  2785,  2253,   872,  2254,
    2772,  2255,  1280,   873,  2256,  2257,  2894,  2258,  2259,  2260,
     848,  2261,  2262,  2263,  2266,  2482,  2483,  2484,  2485,  2486,
    2487,  2488,  2489,  2490,  2264,  2265,  2267,  2268,  2361,  2269,
     874,  2270,  2271,  2272,   875,  3009,  2273,  2274,  2275,  2496,
    2276,  2498,  2277,  2278,  2572,  2294,   876,  1281,  2298,  2436,
    2301,  2303,  2305,  2307,   831,  1282,  2319,  2364,  2505,   482,
    2325,  2326,  2327,  2328,  2509,  2329,   120,  2366,  2369,  2370,
    2371,  2373,  2374,  2378,  2512,  2513,  2514,  2515,  2516,  2517,
    2518,  2519,  2520,  2521,  2375,  2380,  2524,  2525,  2526,  2527,
    2528,  2529,  2530,  2531,  2532,  2533,  2534,  2535,  2381,  2538,
    2382,  2539,  2540,  2541,  1283,  2386,  2387, -1196,  2388,  2390,
    2391,  2392,  2396,  2397,  2406,   482,  2549,  1284,  2399,   933,
    2400,  2401,  2402,  3009,   577,  2407,  2447,  2408,  2437,   975,
    2438,  2439,   122,  2443,  2444,  1285,  2446,  2448,  2449,   117,
     982,  2450,  2454,  2476,  2455,  2895,  2457,  2459,  2460,   990,
    2462,  2463,  2896,  2465,  2472,  2875,  2474,  2477,  2480,  2491,
    2879,  2492,  2015,  2493,  2494,  2495,  2542,  2564,  2499,  2565,
    2537,  2566,  2543,  2568,  2025,   482,  2570,  2546,  2571,  2547,
     119,  2501,  2550,  2575,  2576,  2553,  2577,  2578,  2573,  2580,
    2574,  2582,  2579,  2581,  2583,  2585,  2086,  2087,  2587,  2914,
    2588,  2592,  2596,  2597,  2591,  2598,   128,  2593,  2599,  2600,
    2629,  2897,  2632,  2634,  2637,  2640,  2641,  2643,  1027,  1028,
    2645,  2646,  2647,  2651,  2652,  2898,  2653,  2654,   120,  2655,
    2656,  1032,  2660,  2661,  2899,  2662,  1035,  2663,  2664,  2665,
    2669,  2670,   979,  2671,  2678,  1047,  2681,  2689,  2692,  2695,
    2696,  2697,  2700,  2705,  2633,  2709,  2725,  2783,  2595,  2789,
    2790,  2791,  2792,  2795,  2797,  2900,  2800,  2802,   952,  2803,
    2804,  2750,  2805,  2807,  2816,  2818,  2823,  2830,  1024,  2839,
    2848,  2854,  2858,  2864,  2872,  1029,  2876,  2884,  1030,  2902,
    2916,  2927,  2931,  1031,   122,  2928,  2930,  1033,  2932,  2933,
    2631,  2698,  2934,  2935,  2936,  2938,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,  2944,  1110,  1111,  1112,  1113,  2950,
    2976,  2982,  3091,  2986,  2987,  3061,  2988,  2989,  2990,  2991,
    2993,  2998,  3013,  3023,  3014,  3015,  3016,  3017,  2703,  3018,
    3025,  3028,  3039,   127,  3047,  2901,  3050,  3051,   128,  2710,
    2711,  2712,  2713,  2714,  2715,  2716,  2717,  2718,  2719,  2720,
    3054,  3071,  1108,  3066,  3068,  2723,  3063,  3064,  3074,   482,
     482,  1554,  3078,   482,   482,  3085,  3086,   482,   482,  2736,
    2737,  2738,  2739,  2740,  2741,  3092,  2743,  2744,  2745,  3100,
    3006,  3104,  2759,  2760,  2761,  2762,  3105,  2764,  2765,  2766,
    2767,  2768,  2769,  3107,  2771,  3111,  3113,  2775,  2776,  3114,
    1612,  3115,  3116,  3062,   235,     0,  3058,  1350,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1272,     0,     0,
       0,  2784,     0,     0,   482,  2786,     0,     0,   236,  2788,
       0,   237,     0,     0,  2793,  2794,     0,  2796,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,   238,     0,
       0,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   240,   241,     0,     0,
    2819,     0,     0,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1316,     0,     0,     0,
       0,     0,   243,  1322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2778,
     244,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   245,   246,
       0,     0,  2866,     0,     0,   247,  2868,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2869,  2870,     0,     0,
       0,     0,  2874,   482,     0,     0,  2377,  2878,   482,     0,
     248,     0,     0,  2883,  2383,  2384,  2887,  2888,     0,     0,
    1432,     0,     0,     0,  2393,  2394,     0,     0,     0,     0,
       0,     0,  1437,     0,  2403,  2404,     0,     0,  2906,  2907,
       0,  2909,  2910,  2911,  2912,  2913,     0,   482,  2915,  2440,
    2441,     0,  2918,   249,  1633,     0,     0,     0,     0,     0,
    2451,  2452,     0,     0,     0,  2929,     0,  2458,     0,  1447,
       0,     0,     0,     0,     0,  2937,     0,  2461,     0,     0,
       0,     0,  1634,     0,  1431,     0,     0,     0,     0,     0,
       0,  1433,     0,     0,     0,     0,  2952,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,     0,     0,     0,     0,  1635,     0,
       0,     0,   251,     0,     0,     0,  1636,     0,     0,     0,
       0,     0,  1637,     0,     0,     0,  1449,  1450,  2964,     0,
       0,  1454,     0,  2968,  1457,  2970,     0,     0,     0,     0,
       0,  2973,     0,   252,  1638,     0,  1464,     0,     0,     0,
    1543,     0,     0,     0,     0,  2980,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1639,     0,     0,     0,
       0,     0,     0,     0,  2997,     0,     0,     0,  3001,     0,
    3034,  2920,     0,     0,  1640,  2925,     0,     0,     0,  1998,
    1999,  2000,     0,     0,     0,     0,     0,     0,     0,  2002,
    2003,  2004,     0,     0,  3022,   116,  2014,     0,     0,  2016,
    2017,  2018,     0,     0,  2019,  2020,     0,  2022,  2023,     0,
     117,     0,  1641,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3037,     0,  1696,     0,     0,
    3042,     0,  3044,   118,     0,     0,     0,     0,     0,  3048,
       0,  2095,  2096,     0,     0,  2098,  2099,     0,     0,     0,
    3052,   119,     0,  1642,     0,  3055,     0,     0,     0,     0,
     719,   720,   721,     0,     0,     0,  1617,     0,     0,  1643,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3065,
    3067,     0,  1644,  1758,     0,     0,     0,   722,     0,     0,
       0,     0,     0,  1764,     0,     0,  2992,     0,     0,   120,
     723,     0,     0,     0,     0,  3077,     0,     0,     0,  3079,
       0,     0,  3081,  1645,     0,     0,   724,     0,     0,     0,
    3012,   121,  3087,  3088,  3089,  3090,  1646,     0,  1647,  1648,
       0,     0,     0,     0,  3099,     0,     0,     0,  3102,     0,
       0,     0,     0,  2636,  3073,  3106,     0,  3108,   725,     0,
       0,     0,     0,  2638,  2639,     0,     0,     0,   726,     0,
       0,     0,     0,     0,  2642,   122,     0,     0,     0,  1649,
       0,     0,     0,  2644,     0,     0,  3094,  2648,  2649,  3097,
     727,     0,     0,     0,     0,     0,  2657,  2658,     0,   728,
       0,     0,     0,     0,     0,  2666,  2667,     0,     0,     0,
       0,  2672,     0,     0,     0,     0,     0,     0,   123,   729,
       0,  2682,  2683,     0,  1865,     0,     0,     0,   124,     0,
       0,     0,  2693,     0,  2694,     0,     0,   125,   126,     0,
       0,   730,  1873,     0,   127,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  3084,     0,     0,     0,     0,
       0,     0,  1904,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1910,   731,     0,     0,     0,     0,   732,     0,
       0,     0,     0,  1867,     0,     0,     0,     0,     0,  1925,
       0,     0,     0,     0,     0,   733,     0,     0,   734,     0,
       0,  1937,     0,     0,     0,     0,  1944,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1898,   129,     0,     0,     0,  1903,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1909,     0,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     0,     0,     0,
       0,     0,   159,     0,     0,     0,     0,     0,     0,   160,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2821,     0,     0,  2822,     0,     0,  2824,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2833,     0,
       0,     0,     0,     0,   773,   774,     0,  2842,     0,     0,
       0,     0,  2368,     0,     0,     0,  2851,     0,     0,     0,
     775,     0,     0,  2853,     0,     0,  2376,     0,     0,     0,
       0,     0,  2102,     0,  2857,     0,  2379,     0,     0,     0,
    2860,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2122,     0,     0,     0,   776,     0,     0,     0,     0,     0,
     777,    70,    71,     0,     0,     0,     0,     0,     0,   778,
       0,   779,     0,     0,     0,     0,   780,   117,     0,   781,
       0,  2158,     0,     0,  2159,   782,     0,     0,  2170,   783,
       0,     0,     0,     0,  2175,  2176,   784,     0,  2464,   330,
       0,     0,  2180,     0,   785,     0,     0,     0,     0,  2181,
       0,     0,     0,   786,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   787,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2221,     0,     0,   788,  2172,     0,     0,  2953,     0,
       0,     0,     0,  2232,     0,  2954,   120,     0,     0,     0,
       0,     0,   789,     0,  2956,     0,     0,     0,     0,     0,
       0,     0,     0,  2958,     0,   790,   791,     0,     0,  2961,
       0,     0,     0,  2963,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     792,     0,     0,     0,     0,     0,     0,  2222,     0,     0,
       0,     0,     0,  2228,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,   793,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   794,
       0,   795,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2285,     0,   796,     0,     0,
       0,     0,   797,     0,     0,   331,     0,     0,     0,     0,
     798,     0,     0,     0,     0,     0,     0,     0,   799,  2306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,     0,     0,     0,  2316,   128,     0,     0,   800,
       0,     0,     0,     0,     0,     0,     0,   332,  2321,     0,
    2322,     0,     0,   801,   802,     0,   803,  2283,     0,     0,
    2331,     0,  2288,  2333,  2334,  2335,  2336,  2338,     0,  2340,
       0,     0,  2341,     0,     0,     0,     0,  2342,  2344,  2345,
    2346,  2347,  2349,     0,  2350,  2351,     0,     0,     0,  2353,
    2354,  2355,  2356,  2309,     0,  2357,  2358,   804,     0,  2315,
       0,  2359,  2360,     0,     0,     0,     0,     0,  2635,     0,
       0,     0,     0,     0,     0,     0,   333,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2332,     0,     0,     0,
       0,     0,     0,  2339,     0,     0,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     0,     0,     0,     0,  2673,  2674,
    2675,  2676,  2677,     0,  2679,  2680,     0,     0,     0,  2684,
    2685,  2686,  2687,  2688,     0,  2690,  2691,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1726,     0,     0,     0,     0,  1727,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2467,     0,
       0,  2470,  1728,  1729,     0,  1730,  1731,     0,     0,     0,
       0,     0,  2475,     0,     0,  2478,  1732,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1733,  1734,     0,     0,     0,     0,     0,     0,  1735,     0,
       0,  1736,     0,     0,     0,     0,     0,  2497,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1737,
       0,  2466,     0,     0,     0,     0,     0,     0,  1738,  1739,
       0,   396,  1740,     0,     0,     0,     0,     0,     0,   397,
       0,  2479,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2536,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2502,  2503,     0,
       0,     0,     0,     0,     0,     0,     0,  2552,     0,  2504,
       0,     0,     0,     0,  2507,  2508,     0,  2820,     0,  2510,
    2511,     0,     0,  1741,     0,     0,  2825,  2826,  2827,  2828,
    2829,     0,  2831,  2832,     0,  2834,  2835,  2836,  2837,  2838,
       0,  2840,  2841,     0,  2843,  2844,  2845,  2846,  2847,     0,
    2849,  2850,     0,  2852,     0,     0,     0,     0,     0,     0,
    2544,     0,     0,  2855,  2856,     0,     0,     0,     0,     0,
       0,  2551,     0,     0,  2859,     0,     0,     0,     0,     0,
       0,     0,  2586,     0,  1742,     0,     0,     0,     0,     0,
    1743,     0,     0,     0,     0,     0,     0,  2594,     0,     0,
       0,     0,     0,     0,  2601,     0,     0,     0,  1744,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1745,
       0,     0,     0,     0,  2567,     0,  2619,     0,     0,     0,
       0,     0,     0,     0,     0,  2628,     0,     0,     0,  2630,
       0,     0,     0,     0,     0,  2584,     0,     0,     0,     0,
    1746,  1747,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2602,     0,     0,  1748,     0,  2606,     0,     0,     0,     0,
       0,  2611,     0,     0,     0,     0,  2615,     0,     0,     0,
    2618,     0,  2620,     0,  2622,     0,     0,  2625,     0,  2627,
       0,     0,     0,     0,     0,   398,     0,     0,   399,     0,
       0,     0,     0,     0,  2955,     0,     0,     0,     0,     0,
    1749,     0,     0,  2957,     0,     0,     0,     0,     0,     0,
       0,     0,  2959,     0,  2960,     0,     0,     0,  2962,     0,
       0,     0,     0,  2701,     0,     0,  2704,     0,     0,     0,
       0,     0,     0,     0,  2708,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2721,     0,     0,  2724,     0,     0,     0,     0,     0,  2729,
       0,     0,  2732,  2733,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     0,     0,     0,     0,
    2779,  2780,     0,     0,     0,     0,   117,     0,  1178,  1179,
    1180,     0,     0,     0,     0,  3029,     0,  3030,     0,  3031,
       0,     0,  3032,     0,  3033,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1181,  1182,     0,     0,  1183,     0,     0,  1184,     0,     0,
       0,     0,     0,  2806,  1185,  2770,   549,   550,  1186,     0,
       0,     0,   551,     0,     0,     0,     0,     0,  1187,  1188,
       0,  2782,     0,     0,     0,     0,  1189,  1190,     0,     0,
       0,     0,   680,     0,   117,   552,   553,  1191,     0,     0,
       0,     0,     0,     0,  1192,   120,     0,     0,     0,     0,
       0,     0,  1193,     0,     0,     0,  1194,  1195,     0,     0,
    1196,     0,     0,  2801,     0,     0,     0,     0,     0,     0,
    2808,     0,     0,     0,     0,     0,     0,   681,     0,     0,
    1197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2815,     0,  2817,
       0,     0,  1198,     0,  2862,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,   554,     0,     0,     0,
       0,  1199,     0,     0,     0,     0,     0,     0,  2882,   682,
       0,     0,     0,     0,     0,     0,   555,     0,     0,  2893,
       0,     0,     0,     0,     0,     0,     0,     0,  1200,     0,
       0,     0,     0,     0,     0,     0,     0,  2861,     0,     0,
       0,   556,     0,  2865,     0,     0,     0,  2867,     0,     0,
       0,     0,     0,     0,     0,   128,     0,     0,     0,   122,
    1201,     0,  1202,  2873,     0,     0,     0,     0,  1203,  1204,
       0,     0,     0,     0,     0,     0,     0,  2943,     0,   683,
       0,  2949,     0,     0,     0,  1205,  1206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1207,  1208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   557,     0,     0,     0,     0,     0,     0,  2923,  2924,
       0,     0,     0,     0,     0,     0,     0,  1209,     0,  1210,
       0,     0,     0,   128,     0,     0,     0,     0,  2966,  2967,
       0,  2969,  1211,     0,  1212,     0,  2971,  2972,     0,     0,
       0,  1213,  2974,     0,     0,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     0,   558,  1214,  3002,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   684,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3026,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2984,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,  1476,  1477,  1478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,  1479,  1480,     0,     0,  1481,     0,     0,
       0,     0,     0,     0,  1482,     0,     0,  1483,     0,     0,
       0,  1484,     0,  3072,     0,     0,     0,     0,     0,     0,
     117,  1485,  1486,     0,     0,     0,     0,     0,     0,  1487,
       0,  3082,   119,     0,     0,     0,     0,     0,     0,     0,
    1488,  3057,     0,     0,     0,  3093,     0,     0,  3096,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1489,
    1490,   119,     0,  1491,     0,  3069,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     120,     0,     0,  1492,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1493,     0,     0,     0,   120,
       0,  3095,     0,     0,     0,     0,     0,   564,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3109,     0,  1494,  3110,     0,     0,     0,     0,
       0,     0,     0,     0,  1495,     0,   122,     0,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1542,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1496,     0,  1497,     0,     0,     0,     0,
       0,  1498,  1499,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,  1500,
     128,     0,     0,     0,     0,     0,     0,     0,   122,     0,
    2330,  1501,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     0,     0,   127,     0,     0,     0,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1502,     0,  1503,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1504,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1505,   568,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1506,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   128,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   565,   128,   120,
    1156,     0,     0,     0,     0,  1157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,     0,     0,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     0,     0,
       0,     0,     0,     0,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     1,     0,     0,
       2,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
    2746,     0,     5,     6,     0,     0,     0,     7,     8,     9,
       0,  2747,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,     0,  1274,
    2748,     0,     0,     0,     0,     0,     0,  1275,     0,     0,
       0,     0,     0,     0,     0,  1276,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,  1277,     0,     0,     0,     0,     0,     0,
    1278,     0,     0,  2749,     0,    18,     0,     0,     0,    19,
       0,     0,     0,    20,     0,     0,     0,    21,    22,     0,
       0,     0,     0,    23,    24,  1279,     0,    25,     0,     0,
       0,     0,     0,    26,     0,     0,  1280,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,    29,    30,    31,     0,     0,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    35,     0,     0,     0,
       0,  1281,     0,     0,     0,     0,     0,     0,     0,  1282,
       0,     0,     0,     0,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,    42,     0,   187,     0,    43,   188,    44,    45,
     189,    46,     0,     0,     0,     0,    47,     0,  1283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,  1284,    48,     0,   191,   192,   193,     0,    49,     0,
       0,     0,     0,     0,   194,     0,   195,     0,     0,  1285,
       0,   196,     0,   197,   198,   199,    50,    51,     0,     0,
    2750,   200,  2751,   201,     0,     0,     0,     0,     0,    52,
       0,    53,     0,     0,     0,     0,     0,     0,    54,     0,
       0,    55,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,   203,     0,  2752,     0,
      58,     0,     0,     0,     0,   204,     0,   205,   206,     0,
     207,   208,     0,     0,   209,     0,     0,     0,   210,     0,
     211,  1588,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,   214,     0,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   219,     0,     0,     0,     0,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   221,     0,   222,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   225,     0,     0,     0,     0,     0,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,   228,     0,   229,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,  1589,     0,
       0,     0,     0,     0,     0,     0,     0,   230
};

static const yytype_int16 yycheck[] =
{
       3,  1673,    56,  1041,  1906,   314,  1908,    26,    11,   790,
     791,   540,     5,    16,    27,     3,     4,    16,   795,     0,
    1179,  1029,  1030,  1031,     3,     4,     3,     4,     5,    16,
       4,     4,     4,    49,    37,   496,    28,     3,     4,    52,
       5,     5,    55,    46,     5,   506,    21,     5,    16,     5,
       4,    27,    55,    66,    34,    58,    16,     4,    61,    42,
      65,    61,    65,    58,    34,    68,    12,     3,     4,    72,
      73,    15,    38,    76,   239,    27,    79,    80,    91,     4,
      83,    20,    37,    86,    87,     4,    18,    90,   216,     4,
       3,     4,    95,    28,     5,  1337,   109,     3,     4,  1341,
    1108,    96,   121,    70,     3,     4,   109,   110,   111,   112,
     113,   114,    34,   111,  1146,     3,     4,  1149,   137,    11,
      46,     4,     3,     4,     4,    38,   131,   130,     5,  1371,
    1372,  1373,    16,     3,     4,     4,     5,   120,  1170,     3,
       4,    70,     3,     4,   144,     3,     4,   134,    14,    15,
     106,   279,   216,     3,     4,    65,    22,    38,   114,   154,
     152,    42,   165,    46,    30,    57,    49,    93,   123,   174,
       3,     4,    38,   148,    16,   142,   341,   100,   182,    65,
     146,   152,   319,    54,   131,    77,    27,   190,    68,   135,
      65,     5,   195,    21,    60,    24,    25,   120,    65,    82,
     187,    70,     3,     4,   168,   172,    60,    90,   184,  3008,
     183,    77,   210,     5,   233,   107,    21,   152,    68,    33,
     145,   293,   210,   287,    16,    94,   197,   207,   247,   301,
      65,   210,   184,   146,   217,   106,     4,   129,    21,   120,
     195,   133,   197,    11,   199,   200,   117,   130,     4,     5,
     222,   238,   159,   253,    42,   210,   148,   168,   230,   231,
    3059,   130,   216,   105,   131,   146,   212,   270,   268,     3,
       4,    21,   227,   156,    13,   104,    21,   221,   238,   150,
     275,   284,   104,    21,   153,   207,   340,   210,   304,   215,
     266,   266,   176,   297,   261,   267,   254,   229,    35,   302,
     303,   306,   164,  1080,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   266,   318,   252,   320,   217,   283,
       4,     5,   290,   262,   299,    27,    65,   330,   331,   290,
     333,   334,   215,   336,   253,   315,   217,   302,   319,   339,
     332,   317,   329,   346,   227,   315,     4,   321,   341,   210,
       4,   339,   319,   236,   237,   216,   359,   360,   227,   320,
     339,   244,   328,   246,   341,   317,   385,   236,   237,   329,
     831,     4,   283,     4,   130,   348,   340,   390,   333,     4,
     383,   337,   314,   386,   387,     4,   389,    18,   387,   243,
     393,   394,   275,   315,   252,   383,   384,   332,   259,   708,
     277,   404,   405,   328,   383,   384,   321,   317,   411,   328,
     382,   252,    70,   416,   417,   328,    70,    65,     4,   252,
     286,   424,   328,     5,   427,   213,   287,  1204,   290,   328,
      65,   317,   342,   234,   300,   301,   328,    70,   266,   306,
     328,  1449,   317,   446,   447,  1222,   130,   328,   331,  1457,
     453,   454,   455,   456,   457,   458,   342,   460,   328,   330,
     463,   266,   331,     4,   328,   348,   332,   342,   337,     4,
     292,   227,   130,  1632,   213,   478,   130,  1258,   339,   482,
     236,   237,   317,   266,   487,   488,   489,   490,   491,   492,
      15,   494,     4,   496,   497,   498,    65,   130,   381,   130,
     234,  1660,     5,   506,   507,   388,   389,   342,  2316,  1290,
       4,   130,   381,   379,   380,   381,   266,   386,   384,   388,
     389,   266,   383,   384,  1683,  2333,  2334,  2335,   266,   990,
    2338,    65,  2340,  2341,    22,    70,  2344,  2345,  2346,    32,
     495,  2349,  2350,   227,   130,   152,  2354,    36,  2356,  2357,
     252,  2359,   236,   237,     3,     4,   295,    65,   561,   562,
     252,    42,   131,   258,    48,    53,    60,   306,    56,   227,
    1812,  1603,  1033,   227,  1606,   331,   579,    48,   236,   237,
     272,   337,   236,   237,    68,   317,    70,   169,   170,   130,
     197,   216,   348,    42,   227,   130,   227,   131,   229,    70,
      88,     5,   341,   236,   237,   236,   237,   661,   227,    13,
      14,     5,   615,    42,    63,    39,    87,   236,   237,     3,
       4,     3,     4,   131,    65,   381,    50,   116,    67,     5,
     585,   119,   388,   389,   122,   169,   170,   114,    27,   120,
      30,   227,    65,    65,    65,  2818,   271,   331,    93,     4,
     236,   237,    27,    65,   279,   658,    80,   169,   170,  2467,
      70,    65,  2470,    93,     3,     4,    60,  2475,    67,   317,
    2478,   120,    11,   331,   113,    69,    60,   331,    84,     3,
       4,  2583,   317,   314,   639,   178,   227,   147,     4,  2497,
     131,   120,   227,   275,   342,   236,   237,   381,   331,   753,
     331,   236,   237,   706,   388,   389,   218,   342,   131,   131,
     131,   164,   331,   716,   113,   186,    32,     0,   772,   131,
     204,     4,  1499,   381,     3,     4,   143,   381,   314,   174,
     388,   389,   174,  1510,   388,   389,   217,   306,   137,   228,
     164,   275,   188,   220,   174,   331,   239,    94,   381,   243,
     381,   127,   189,    13,    14,   388,   389,   388,   389,     4,
      84,   198,   381,   275,   206,  2938,   254,   770,   217,   388,
     389,   188,   306,   266,     0,   165,     4,  2950,  2586,   258,
     321,     3,     4,   267,    65,   209,   789,   193,   217,   792,
     331,    65,   245,   169,   170,   381,   331,    19,   306,   188,
     277,   289,   388,   389,   194,    65,   252,  1154,   198,   213,
     214,  2619,   815,   188,  1161,   296,   276,   820,   821,   822,
     823,   301,    65,   826,   263,   828,     5,   830,   831,   832,
       3,     4,    60,   317,   700,   252,    48,   290,    60,   215,
     381,   280,   281,   327,     3,     4,   381,   388,   389,   243,
     131,   290,   718,   388,   389,  1316,   327,   131,    70,   243,
     284,     4,   178,   252,   263,   306,   256,   296,   922,   193,
     294,   342,    76,   279,   323,    87,    65,   252,    65,   325,
     333,   280,   281,   306,   306,   306,   108,     5,   131,     4,
      67,   295,  1930,  2701,   306,    13,    14,    13,    14,   275,
     317,  1909,   306,   307,   907,    48,   909,   311,    51,   143,
     300,   914,   915,  2721,   917,   918,   919,   920,   342,   309,
     310,  2729,   114,   239,  2732,  2733,   302,    70,   794,    65,
      65,   934,   935,   799,     4,     4,   113,   341,   941,   942,
     379,   380,   131,   222,   131,     5,    89,    65,    93,    65,
     266,  2110,   174,   213,   214,   279,     4,     5,   961,   962,
     963,   964,   965,   106,   967,   293,   969,     5,  2127,   112,
       5,    93,    20,   301,    65,    13,    14,   136,  2010,   152,
     379,   380,   985,   986,   987,   189,   989,   990,   991,  1770,
     993,     4,   204,  1454,    65,   131,   131,  2156,    42,  2031,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2041,
    1155,  1014,  2044,  1016,    33,   243,    64,  1162,   252,  2051,
     163,   243,    70,  1026,   197,   306,   248,    65,   220,   174,
    1033,  1034,   306,     4,  2066,   295,  1039,  2069,     5,    89,
     131,    93,   908,   186,     5,  2077,   306,   307,  2080,     3,
       4,    99,   174,  1056,  2862,   267,   106,  1060,     4,  1014,
     131,     3,     4,   306,   217,    30,   127,   137,    70,   273,
     129,  1074,  1075,  1076,  2882,   123,   120,     3,     4,  1082,
     284,   341,   319,   317,  1087,   277,   263,    93,     3,     4,
     189,    44,    45,    70,   142,   213,   214,   213,   214,  1102,
      42,    16,  1156,   280,   281,   317,   972,    35,   210,   157,
       3,     4,     5,     5,   216,   327,   164,   306,  1121,   306,
    2279,    95,   174,    94,   172,   228,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,    15,   298,   317,   259,  2966,  2967,
     131,  2969,   232,  2971,  2972,    70,  2974,   259,   174,   318,
     306,   306,     5,   217,    95,   213,   214,   295,   120,   295,
      13,    14,   136,   326,   327,   287,   234,    70,   306,   307,
     306,   307,  2744,   311,    78,   338,    33,  1200,     4,   342,
     165,    26,   379,   380,    29,     5,   254,     4,     3,     4,
     136,   259,     5,   261,  2222,   306,    11,     5,  1221,     3,
       4,  2773,  2894,   341,    32,   341,  3034,     5,  1231,   194,
    2887,     4,    65,   198,     4,   306,     4,   339,   191,   192,
      47,   289,   290,     4,     5,  1248,     5,  1250,     5,  2906,
     298,     5,  1255,  1256,  1257,     4,    63,   295,    42,    13,
      14,    48,  1265,     5,    51,  1268,     5,  1270,   306,   307,
     223,   319,     5,   311,  3082,   217,     5,   380,     3,     4,
      87,     4,   384,    70,  1287,   388,  1289,   390,     3,     4,
       5,   256,     4,   101,  1297,  1298,   121,    13,    14,     4,
     107,     3,     4,   341,     6,     7,     4,  2315,     5,  1312,
    1313,    65,   137,  1316,  1317,  1318,     4,    94,   104,   106,
     127,  1324,   131,  1326,   131,   112,  1329,     5,  1331,   377,
       4,  2339,     4,  2885,  2886,   300,   120,  2889,    63,  2891,
       3,     4,  1396,   302,   309,   310,     3,     4,   125,    65,
       4,   176,  2904,  2905,   161,   162,     4,  2909,  2910,  2518,
      39,  2913,  1228,     3,     4,  2524,  2918,  2919,     3,     4,
    2529,    50,   180,     4,  1377,     5,   163,    13,    14,  1382,
     213,   214,  2414,  1386,   222,  1388,     3,     4,     4,  1392,
    3047,  2423,   619,    13,    14,   622,   623,  3054,     4,     5,
    2432,    80,    42,     4,     5,  1408,    63,  1410,   233,  1412,
    1413,  1414,  1415,     4,     5,  1418,  1419,   224,  1421,  1422,
    1286,  1424,   247,  1426,  2976,     4,     5,  2979,   235,    65,
    1433,   208,  2984,     4,  1300,   484,   485,  1440,     3,     4,
       5,  1444,  1445,  1446,  2996,    65,    63,     4,   225,  3001,
      22,  1454,  1455,  1408,  3111,  1458,  3113,  1136,  1137,   213,
     214,     4,   295,  1466,    37,  1468,     4,    88,  1471,     4,
       4,   279,     4,   306,   307,     5,     5,   285,   311,    10,
     120,    53,     8,     5,    56,   164,   301,    59,   189,     4,
       4,    88,   198,   189,   301,   302,  2504,   213,   214,     4,
     221,   221,    13,    14,  1459,     5,    13,    14,   341,     5,
       4,   298,   221,     4,   291,  1518,    88,  1520,   211,   211,
    1523,  1524,  1477,  1526,  3076,  1528,    70,     5,  3080,    70,
     209,  1534,     5,    70,   252,  1538,  2544,     4,     4,   326,
     327,   295,   115,  2551,  1547,   166,   253,   119,  3100,     4,
     122,   338,   306,   307,    65,   342,     4,   311,    65,     4,
     337,   221,  3114,  1429,  1430,  3117,  3118,   140,   141,   166,
     377,   348,     5,    93,    93,    93,   149,   213,   214,   295,
       5,     5,     5,  2742,     3,     4,    57,   341,     4,    93,
     306,   307,     4,   213,   214,     5,     4,     4,   171,  2758,
      19,    89,     5,     5,  2763,   284,    77,   106,   181,   312,
    2618,    99,  2620,     4,  2622,   294,     4,  2625,   106,  2627,
       5,    16,    16,    94,     4,   341,  1629,  1630,  1631,   250,
     251,     4,     4,     4,    42,   104,   107,   316,     3,     4,
       5,     6,     7,     5,   265,   324,     5,    93,  1651,    93,
       3,     4,  1655,   250,   251,     8,     9,    10,   129,   295,
       4,    93,   133,   342,     5,     5,    93,     5,   265,     4,
     306,   307,     5,  1628,     5,   295,     4,   148,  1681,  1682,
       5,     5,   254,     4,     4,    68,   306,   307,  1691,   108,
       5,   312,  1695,     3,     4,     5,     6,     7,     5,  1702,
       5,     4,   213,   214,     4,   341,   213,   214,   196,     4,
      11,  2172,   120,  1716,     5,   312,     4,   289,    11,  1722,
       4,   341,     4,  1726,   195,  1728,  1729,     5,  1731,  1732,
    1733,     4,  1735,     4,     4,  1738,  1739,  1740,  1741,  1742,
    1743,  1744,  1745,  1746,  1747,  1748,     5,   319,     5,  1752,
    1753,  1754,  1755,   183,     5,   174,     4,   245,  1624,  1762,
    1763,   169,   170,  1766,  1767,  1768,     4,  2228,  2738,  1772,
    1773,  2741,     5,  2743,  2782,     3,     4,     5,     6,     7,
       4,   174,  1785,  1786,   295,  1788,  1789,  1653,   295,  2759,
    2760,  1657,  1658,   174,   282,   306,   307,    40,   321,   306,
     307,    37,   312,    40,   289,   289,  2776,     5,   314,   217,
     218,     4,     4,     4,   303,     5,     5,     5,     5,     4,
    1686,     4,   303,     5,     5,     5,     5,  2288,    70,   248,
     341,  1697,     5,     5,   341,     4,     4,   266,     5,     5,
    1706,  1707,     5,     4,    86,     5,     5,     5,     4,     4,
    1145,  1717,     5,    95,     5,     5,     5,  1860,   114,  1862,
    1863,   266,   266,  1866,   106,   266,     5,   275,  1871,  1872,
     114,  1874,  1875,  1876,     4,  1878,  1879,    42,  1881,   266,
    1883,  1884,   266,  1886,  1887,  3044,  1889,   123,  1891,   114,
       5,   238,   238,   272,    42,     5,  1899,     4,   120,     5,
     142,     5,   238,    65,  1907,    59,   238,     4,     4,  1912,
    1913,     4,   120,     5,     5,  1918,  1871,     5,     5,     5,
       4,     4,   164,     5,  1927,     5,     5,     4,     4,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,     5,   194,  1962,
     196,   197,     5,   199,   200,   127,     5,     5,     4,   131,
       5,     5,     4,   188,     5,     5,     4,     4,   220,     0,
       5,     5,    11,  1986,  1987,    11,     5,  1942,  1991,     4,
       4,     4,     4,     4,  1997,     5,   232,     5,  1953,   266,
     266,   266,  1957,   266,   266,   266,   252,   169,   170,     4,
     221,   234,   174,   277,     4,   251,   252,     4,     4,   261,
       4,   257,     4,   303,     5,   261,     5,     5,     5,     5,
       5,     4,     4,   345,     5,    98,     4,     4,     4,   266,
       5,  2502,  2503,   106,     5,  2506,  2507,     5,   290,  2510,
    2511,   114,     5,   215,   266,   345,   266,     4,     4,     4,
       4,     4,     4,     4,   345,     4,   345,     4,   252,   132,
       5,     5,     4,   303,     5,   252,   139,     4,   252,     5,
       4,     4,   252,   319,     5,     4,   322,    19,   252,     5,
       5,     4,   334,     5,   336,     5,     4,   333,     5,     5,
       4,   164,  2105,  2106,     5,  2108,  2567,     5,   270,     4,
     341,     5,   175,   275,     5,     4,   391,     5,     5,     4,
     356,     5,     5,     4,     4,  2128,  2129,  2130,  2131,  2132,
    2133,  2134,  2135,  2136,     5,     5,     4,     4,   100,     5,
     302,     5,     4,     4,   306,  2922,     5,     5,     4,  2152,
       5,  2154,     5,     4,    11,     5,   318,   220,     4,   303,
       5,     5,     4,     4,   335,   228,     4,     4,  2171,  2172,
       5,     5,     5,     5,  2177,     5,   108,     5,     5,     5,
       5,     4,     4,     4,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,     5,     5,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,  2210,     5,  2212,
       5,  2214,  2215,  2216,   277,     4,     4,   319,     5,     5,
       5,     5,     4,     4,     4,  2228,  2229,   290,     5,   400,
       5,     5,     5,  3010,     4,     4,   303,     5,     5,   475,
       5,     5,   174,     4,     4,   308,     5,     5,     5,    19,
     486,     5,     4,  2119,     4,   391,     5,     4,     4,   495,
       4,     4,   391,     5,     5,  2726,     5,     5,     5,     4,
    2731,     4,  1567,     5,     4,     4,     4,  2280,     5,  2282,
       5,  2284,     4,  2286,  1579,  2288,  2289,     5,  2291,     5,
      60,  2157,     4,  2296,  2297,     4,  2299,  2300,     5,  2302,
       5,  2304,     5,     4,     4,     4,  1601,  1602,  2311,  2770,
    2313,     5,     5,     5,  2317,     5,   248,  2320,     5,     5,
       4,   391,     5,     4,     4,     4,     4,     4,   564,   565,
       5,     5,     5,     4,     4,   391,     5,     5,   108,     5,
       5,   577,     4,     4,   391,     5,   582,     5,     5,     5,
       4,     4,   483,     5,     4,   591,     4,     4,     4,     4,
       4,     4,     4,     4,  2367,     4,     4,     4,  2323,     5,
       5,     4,     4,     4,     4,   391,     5,     4,   431,     5,
       4,   319,     5,     5,     5,     4,     4,     4,   559,     4,
       4,     4,     4,     4,     4,   566,     5,     4,   569,   391,
       5,     4,     4,   574,   174,     5,     5,   578,     4,     4,
    2365,  2465,     4,     4,     4,     4,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,     5,   681,   682,   683,   684,     4,
       4,     4,  3069,     5,     4,   391,     5,     5,     5,     4,
       4,     4,     4,  2937,     5,     5,     4,     4,  2471,     4,
       4,     4,     4,   243,     4,  2753,     5,     4,   248,  2482,
    2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
       4,     4,   663,  3022,  3023,  2498,     5,     5,     4,  2502,
    2503,  1130,     5,  2506,  2507,     5,     5,  2510,  2511,  2512,
    2513,  2514,  2515,  2516,  2517,     5,  2519,  2520,  2521,     4,
    2920,     5,  2525,  2526,  2527,  2528,     5,  2530,  2531,  2532,
    2533,  2534,  2535,     5,  2537,     4,     4,  2540,  2541,     5,
    1169,     5,     5,  3010,    19,    -1,  3006,   870,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   793,    -1,    -1,
      -1,  2564,    -1,    -1,  2567,  2568,    -1,    -1,    43,  2572,
      -1,    46,    -1,    -1,  2577,  2578,    -1,  2580,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,
    2633,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   827,    -1,    -1,    -1,
      -1,    -1,   137,   834,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2545,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,
      -1,    -1,  2705,    -1,    -1,   180,  2709,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2719,  2720,    -1,    -1,
      -1,    -1,  2725,  2726,    -1,    -1,  2021,  2730,  2731,    -1,
     205,    -1,    -1,  2736,  2029,  2030,  2739,  2740,    -1,    -1,
     976,    -1,    -1,    -1,  2039,  2040,    -1,    -1,    -1,    -1,
      -1,    -1,   988,    -1,  2049,  2050,    -1,    -1,  2761,  2762,
      -1,  2764,  2765,  2766,  2767,  2768,    -1,  2770,  2771,  2064,
    2065,    -1,  2775,   248,    42,    -1,    -1,    -1,    -1,    -1,
    2075,  2076,    -1,    -1,    -1,  2788,    -1,  2082,    -1,  1025,
      -1,    -1,    -1,    -1,    -1,  2798,    -1,  2092,    -1,    -1,
      -1,    -1,    70,    -1,   975,    -1,    -1,    -1,    -1,    -1,
      -1,   982,    -1,    -1,    -1,    -1,  2819,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,   317,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,   120,    -1,    -1,    -1,  1027,  1028,  2861,    -1,
      -1,  1032,    -1,  2866,  1035,  2868,    -1,    -1,    -1,    -1,
      -1,  2874,    -1,   348,   142,    -1,  1047,    -1,    -1,    -1,
    1116,    -1,    -1,    -1,    -1,  2888,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2907,    -1,    -1,    -1,  2911,    -1,
    2964,  2777,    -1,    -1,   182,  2781,    -1,    -1,    -1,  1548,
    1549,  1550,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1558,
    1559,  1560,    -1,    -1,  2937,     4,  1565,    -1,    -1,  1568,
    1569,  1570,    -1,    -1,  1573,  1574,    -1,  1576,  1577,    -1,
      19,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2968,    -1,  1203,    -1,    -1,
    2973,    -1,  2975,    42,    -1,    -1,    -1,    -1,    -1,  2982,
      -1,  1610,  1611,    -1,    -1,  1614,  1615,    -1,    -1,    -1,
    2993,    60,    -1,   261,    -1,  2998,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    -1,  1177,    -1,    -1,   277,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3022,
    3023,    -1,   290,  1259,    -1,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,  1269,    -1,    -1,  2902,    -1,    -1,   108,
     110,    -1,    -1,    -1,    -1,  3048,    -1,    -1,    -1,  3052,
      -1,    -1,  3055,   321,    -1,    -1,   126,    -1,    -1,    -1,
    2926,   130,  3065,  3066,  3067,  3068,   334,    -1,   336,   337,
      -1,    -1,    -1,    -1,  3077,    -1,    -1,    -1,  3081,    -1,
      -1,    -1,    -1,  2378,  3039,  3088,    -1,  3090,   158,    -1,
      -1,    -1,    -1,  2388,  2389,    -1,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,  2399,   174,    -1,    -1,    -1,   377,
      -1,    -1,    -1,  2408,    -1,    -1,  3071,  2412,  2413,  3074,
     190,    -1,    -1,    -1,    -1,    -1,  2421,  2422,    -1,   199,
      -1,    -1,    -1,    -1,    -1,  2430,  2431,    -1,    -1,    -1,
      -1,  2436,    -1,    -1,    -1,    -1,    -1,    -1,   217,   219,
      -1,  2446,  2447,    -1,  1390,    -1,    -1,    -1,   227,    -1,
      -1,    -1,  2457,    -1,  2459,    -1,    -1,   236,   237,    -1,
      -1,   241,  1408,    -1,   243,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  3061,    -1,    -1,    -1,    -1,
      -1,    -1,  1438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1448,   283,    -1,    -1,    -1,    -1,   288,    -1,
      -1,    -1,    -1,  1394,    -1,    -1,    -1,    -1,    -1,  1465,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,   308,    -1,
      -1,  1477,    -1,    -1,    -1,    -1,  1482,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1432,   331,    -1,    -1,    -1,  1437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1447,    -1,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,    -1,    -1,    -1,
      -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,    -1,   388,
     389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2637,    -1,    -1,  2640,    -1,    -1,  2643,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2653,    -1,
      -1,    -1,    -1,    -1,     4,     5,    -1,  2662,    -1,    -1,
      -1,    -1,  2001,    -1,    -1,    -1,  2671,    -1,    -1,    -1,
      20,    -1,    -1,  2678,    -1,    -1,  2015,    -1,    -1,    -1,
      -1,    -1,  1628,    -1,  2689,    -1,  2025,    -1,    -1,    -1,
    2695,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1656,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      70,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    -1,    -1,    86,    19,    -1,    89,
      -1,  1687,    -1,    -1,  1690,    95,    -1,    -1,  1694,    99,
      -1,    -1,    -1,    -1,  1700,  1701,   106,    -1,  2097,    41,
      -1,    -1,  1708,    -1,   114,    -1,    -1,    -1,    -1,  1715,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1757,    -1,    -1,   164,  1696,    -1,    -1,  2823,    -1,
      -1,    -1,    -1,  1769,    -1,  2830,   108,    -1,    -1,    -1,
      -1,    -1,   182,    -1,  2839,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2848,    -1,   195,   196,    -1,    -1,  2854,
      -1,    -1,    -1,  2858,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,  1758,    -1,    -1,
      -1,    -1,    -1,  1764,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,
      -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1871,    -1,   277,    -1,    -1,
      -1,    -1,   282,    -1,    -1,   217,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,  1895,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,  1911,   248,    -1,    -1,   319,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   259,  1924,    -1,
    1926,    -1,    -1,   333,   334,    -1,   336,  1868,    -1,    -1,
    1936,    -1,  1873,  1939,  1940,  1941,  1942,  1943,    -1,  1945,
      -1,    -1,  1948,    -1,    -1,    -1,    -1,  1953,  1954,  1955,
    1956,  1957,  1958,    -1,  1960,  1961,    -1,    -1,    -1,  1965,
    1966,  1967,  1968,  1904,    -1,  1971,  1972,   377,    -1,  1910,
      -1,  1977,  1978,    -1,    -1,    -1,    -1,    -1,  2377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1937,    -1,    -1,    -1,
      -1,    -1,    -1,  1944,    -1,    -1,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,    -1,    -1,    -1,    -1,  2437,  2438,
    2439,  2440,  2441,    -1,  2443,  2444,    -1,    -1,    -1,  2448,
    2449,  2450,  2451,  2452,    -1,  2454,  2455,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2104,    -1,
      -1,  2107,    52,    53,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,  2118,    -1,    -1,  2121,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,  2153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,  2102,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,
      -1,    15,   122,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,  2122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2158,  2159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2233,    -1,  2170,
      -1,    -1,    -1,    -1,  2175,  2176,    -1,  2636,    -1,  2180,
    2181,    -1,    -1,   193,    -1,    -1,  2645,  2646,  2647,  2648,
    2649,    -1,  2651,  2652,    -1,  2654,  2655,  2656,  2657,  2658,
      -1,  2660,  2661,    -1,  2663,  2664,  2665,  2666,  2667,    -1,
    2669,  2670,    -1,  2672,    -1,    -1,    -1,    -1,    -1,    -1,
    2221,    -1,    -1,  2682,  2683,    -1,    -1,    -1,    -1,    -1,
      -1,  2232,    -1,    -1,  2693,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2308,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,    -1,    -1,  2323,    -1,    -1,
      -1,    -1,    -1,    -1,  2330,    -1,    -1,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
      -1,    -1,    -1,    -1,  2285,    -1,  2352,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2361,    -1,    -1,    -1,  2365,
      -1,    -1,    -1,    -1,    -1,  2306,    -1,    -1,    -1,    -1,
     320,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2331,    -1,    -1,   343,    -1,  2336,    -1,    -1,    -1,    -1,
      -1,  2342,    -1,    -1,    -1,    -1,  2347,    -1,    -1,    -1,
    2351,    -1,  2353,    -1,  2355,    -1,    -1,  2358,    -1,  2360,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,  2833,    -1,    -1,    -1,    -1,    -1,
     390,    -1,    -1,  2842,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2851,    -1,  2853,    -1,    -1,    -1,  2857,    -1,
      -1,    -1,    -1,  2469,    -1,    -1,  2472,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2480,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2496,    -1,    -1,  2499,    -1,    -1,    -1,    -1,    -1,  2505,
      -1,    -1,  2508,  2509,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2546,  2547,    -1,    -1,    -1,    -1,    19,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,  2954,    -1,  2956,    -1,  2958,
      -1,    -1,  2961,    -1,  2963,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,  2599,    66,  2536,    69,    70,    70,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,  2552,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    17,    -1,    19,    98,    99,    99,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   108,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,   118,   119,    -1,    -1,
     122,    -1,    -1,  2594,    -1,    -1,    -1,    -1,    -1,    -1,
    2601,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2628,    -1,  2630,
      -1,    -1,   164,    -1,  2700,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,  2734,   124,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,  2745,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2698,    -1,    -1,
      -1,   234,    -1,  2704,    -1,    -1,    -1,  2708,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,   174,
     252,    -1,   254,  2724,    -1,    -1,    -1,    -1,   260,   261,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2803,    -1,   194,
      -1,  2807,    -1,    -1,    -1,   277,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,  2779,  2780,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,   321,
      -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,  2864,  2865,
      -1,  2867,   334,    -1,   336,    -1,  2872,  2873,    -1,    -1,
      -1,   343,  2878,    -1,    -1,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,    -1,   377,   377,  2912,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2944,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2893,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    66,    -1,    -1,
      -1,    70,    -1,  3039,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,  3057,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,  3002,    -1,    -1,    -1,  3071,    -1,    -1,  3074,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,
     119,    60,    -1,   122,    -1,  3026,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   108,
      -1,  3072,    -1,    -1,    -1,    -1,    -1,    63,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3093,    -1,   193,  3096,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,   174,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,   261,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,   278,
     248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
     100,   290,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343,   313,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,    -1,   174,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   248,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   323,   248,   108,
     174,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,    -1,    -1,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,    -1,    -1,
      -1,    -1,    -1,    -1,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,    43,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      59,    -1,    68,    69,    -1,    -1,    -1,    73,    74,    75,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   138,   132,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,   142,    -1,   151,    -1,    -1,    -1,   155,
      -1,    -1,    -1,   159,    -1,    -1,    -1,   163,   164,    -1,
      -1,    -1,    -1,   169,   170,   164,    -1,   173,    -1,    -1,
      -1,    -1,    -1,   179,    -1,    -1,   175,    -1,    -1,   185,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    -1,    -1,    -1,   200,   201,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,    -1,    -1,    -1,   222,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   228,
      -1,    -1,    -1,    -1,   240,    -1,   242,   243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,   268,    -1,    43,    -1,   272,    46,   274,   275,
      49,   277,    -1,    -1,    -1,    -1,   282,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,   290,   298,    -1,    73,    74,    75,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    85,    -1,    -1,   308,
      -1,    90,    -1,    92,    93,    94,   322,   323,    -1,    -1,
     319,   100,   321,   102,    -1,    -1,    -1,    -1,    -1,   335,
      -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,
      -1,   347,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   378,    -1,    -1,    -1,   155,    -1,   377,    -1,
     386,    -1,    -1,    -1,    -1,   164,    -1,   166,   167,    -1,
     169,   170,    -1,    -1,   173,    -1,    -1,    -1,   177,    -1,
     179,   179,    -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   205,   206,    -1,    -1,
      -1,   210,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,   277,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,    -1,    -1,   346,    -1,   348,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   386
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    43,    46,    49,    63,    68,    69,    73,    74,    75,
      83,    90,    92,    93,   102,   103,   128,   138,   151,   155,
     159,   163,   164,   169,   170,   173,   179,   185,   196,   200,
     201,   202,   205,   206,   218,   222,   240,   242,   243,   255,
     257,   264,   268,   272,   274,   275,   277,   282,   298,   304,
     322,   323,   335,   337,   344,   347,   348,   378,   386,   393,
      70,    11,    57,    77,   107,   129,   133,   148,   328,   429,
       3,     4,   328,   394,   434,   210,   216,   259,   287,   339,
     384,   436,   319,     4,    42,   120,   169,   170,   217,   218,
     275,   441,    30,   165,   194,   198,   256,   300,   309,   310,
     409,   443,    89,    99,   106,   196,   245,   282,   444,    42,
      63,   120,   217,   323,   394,   453,     4,    19,    42,    60,
     108,   130,   174,   217,   227,   236,   237,   243,   248,   331,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   381,
     388,   389,   396,   404,   405,   406,   455,    35,   456,   396,
      46,    49,    82,    90,   156,   215,   244,   246,   275,   348,
     395,   396,    68,   394,   458,   159,   459,    43,    46,    49,
      69,    73,    74,    75,    83,    85,    90,    92,    93,    94,
     100,   102,   137,   155,   164,   166,   167,   169,   170,   173,
     177,   179,   185,   205,   206,   210,   218,   222,   240,   242,
     249,   275,   277,   304,   322,   323,   332,   340,   346,   348,
     386,   460,    89,   106,   511,    19,    43,    46,    83,    90,
     101,   102,   108,   137,   155,   173,   174,   180,   205,   248,
     304,   317,   348,   514,    70,   396,    65,   317,   342,   600,
      65,   317,   342,   599,    94,   125,   208,   225,   291,   337,
     348,   520,    15,     4,    48,    51,    70,    89,   106,   112,
     163,   186,   298,   326,   327,   338,   342,   581,    26,    29,
     121,   137,   176,   233,   247,   523,   258,   542,     5,    70,
      94,   153,   337,   386,   396,   543,     5,   544,    61,   144,
     253,   268,   339,   561,    48,    68,    70,   204,   267,   317,
     327,   582,   317,   598,    70,   228,   380,   388,   390,   583,
      41,   217,   259,   328,   394,   404,   406,   584,     5,   337,
     348,   396,   587,    76,   189,   273,   284,   588,     4,   589,
      94,   561,     4,    68,   596,    65,   317,   342,   597,   217,
     328,   394,   601,    26,   121,   137,   233,   247,   385,   603,
      54,   106,   117,   150,   330,   625,   626,     4,    39,    50,
      80,   164,   209,   284,   294,   316,   324,   342,   422,     4,
     137,   232,   627,   328,   394,   629,    15,    23,   269,   272,
     405,   630,   258,   634,   328,   394,   635,     0,     5,   396,
      63,   394,   430,   301,     5,     4,   328,   394,   431,     5,
      34,   315,   432,   136,   394,   433,   136,   394,   435,   394,
       4,   216,   271,   279,   439,   210,   339,   383,   384,   394,
     438,   396,   152,   197,   437,   222,   394,    84,   193,   279,
     394,   440,     5,   394,   394,   394,     4,   169,   170,   218,
     275,   442,     4,   394,   394,     5,   254,   445,     4,    33,
     446,     5,   447,     5,   451,     5,    33,   452,   394,     8,
       9,    10,   394,   400,   401,   402,   403,   394,   394,    42,
     120,   217,   394,   454,   394,   217,   404,   406,   394,    37,
     115,   140,   141,   149,   171,   181,   411,   394,     4,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   127,
      70,    57,    77,    94,   107,   129,   133,   148,   195,   463,
     129,   465,   210,   216,   259,   287,   339,   383,   384,   394,
     448,   466,   319,   469,   189,   470,   189,   198,   472,    69,
      70,    75,    98,    99,   189,   209,   234,   304,   377,   404,
     474,   394,   406,   477,    63,   323,   404,   478,   313,   404,
     406,   479,    35,   480,   404,   406,   481,     4,   404,   406,
     482,    47,    63,    87,   107,   127,   131,   161,   162,   224,
     235,   301,   302,   377,   486,   239,   341,   492,    70,     5,
      95,    65,   317,   342,   500,    65,   317,   342,   499,     4,
      94,   131,   484,     5,    69,   406,   483,    15,    48,    70,
      87,   186,   327,   342,   493,   561,    48,    70,    87,   204,
     267,   317,   327,   494,   317,   498,    70,   259,   496,   318,
      65,   317,   342,   497,    21,   148,   266,   299,   501,    39,
      50,    80,   164,   209,   284,   294,   342,   502,   406,    95,
      15,   221,   509,   404,   512,    70,    78,   515,    33,   516,
      46,    93,   215,   517,   164,   245,   290,   333,   518,   404,
      17,    62,   124,   194,   323,   404,   519,     5,     5,   168,
     283,   340,   404,     4,     5,   168,   283,   404,     4,     4,
     216,   522,     5,     4,     4,   131,   394,     4,    48,    51,
      70,   106,   112,   163,   298,   326,   327,   338,   342,    70,
      71,    72,    97,   110,   126,   158,   168,   190,   199,   219,
     241,   283,   288,   305,   308,   408,     5,     4,   394,   396,
       5,   169,   170,   275,   524,     5,   539,     5,   526,     5,
     127,   169,   170,   215,   275,   302,   527,   100,   120,   210,
     541,     5,   538,     5,   302,   540,     4,     5,   396,   396,
     394,   394,     5,     4,     5,    20,    64,    70,    79,    81,
      86,    89,    95,    99,   106,   114,   123,   142,   164,   182,
     195,   196,   220,   245,   259,   261,   277,   282,   290,   298,
     319,   333,   334,   336,   377,   545,   408,     5,     4,   222,
     230,   231,   267,   382,   407,   394,   404,   394,   404,     5,
     394,    42,   120,   394,   586,   396,   394,   404,   406,   585,
     394,   411,   394,     4,   405,    58,    96,   154,   275,   590,
       4,     4,   394,     4,   164,   290,   591,     5,   404,     4,
      42,   120,   394,   602,   394,   104,    65,   131,   169,   170,
     275,   306,   605,   131,   624,    65,   127,   131,   169,   170,
     174,   215,   270,   275,   302,   306,   318,   606,   607,    65,
     131,   306,   623,     5,    65,   131,   306,   604,     4,    36,
     116,   228,   595,    70,   396,   425,    70,   396,   426,    70,
     396,   427,    12,   135,   212,   594,   394,    18,   229,   314,
     396,   423,     4,   394,   252,   394,   428,   394,   302,     4,
     394,   394,     4,   253,   328,   633,     4,   321,   631,     4,
     321,   632,     4,   411,   136,   394,   636,   394,   394,     4,
       5,   394,    11,   394,   394,   394,    32,   101,   180,   279,
     285,   410,   410,     4,   222,   394,   394,     4,     4,     4,
     394,   394,   394,   394,   394,   394,     4,   394,     4,   394,
       4,     4,     4,     5,     5,   404,     5,   394,   394,   400,
     402,   402,   404,   394,   394,   394,   394,   394,   394,   394,
     404,   406,   403,   394,   394,   403,   394,     5,   301,   111,
     210,   464,   216,   279,   467,   189,    84,   193,   279,   468,
     152,   197,   449,   449,     4,   471,     4,   473,   216,   287,
     475,   198,   476,   189,   411,   394,   394,   404,   404,   411,
     411,   411,   404,   411,   394,   404,     4,   489,     4,   406,
     487,   221,     4,   183,   348,   488,   221,   404,     4,   145,
     328,   491,     5,     5,   461,     4,   221,   147,   276,   397,
     394,     4,   495,   495,   495,   495,     4,     5,    20,    64,
      70,    99,   123,   142,   157,   164,   172,   234,   254,   259,
     261,   289,   290,   298,   319,   377,   555,   406,   211,   211,
      70,   505,    70,   506,    70,   507,    18,   229,   314,   503,
     252,   508,   394,     5,   462,   253,   510,   405,   411,     5,
     404,   404,   404,   404,     4,     4,     4,   396,     4,     4,
     221,   394,   408,     5,   394,   396,    13,    14,    65,   213,
     214,   295,   306,   307,   341,    93,    93,    93,     5,     5,
       5,    13,    14,    65,   213,   214,   295,   306,   307,   311,
     341,    93,    93,   174,    93,   174,   174,   179,   405,   530,
     535,    93,   174,     5,   528,     4,     4,    13,    65,   213,
     295,   306,   341,     5,     5,     4,   394,   405,    20,    21,
      22,    52,    53,    56,    59,    66,    70,    80,    81,    88,
      89,    99,   106,   114,   118,   119,   122,   142,   164,   193,
     220,   252,   254,   260,   261,   277,   278,   289,   290,   319,
     321,   334,   336,   343,   377,    70,    86,    95,   106,   142,
     164,   220,   261,   290,   334,   336,   312,     4,    32,   178,
     239,   266,   548,     5,    67,   113,   263,   280,   281,   379,
     380,   554,   106,   546,     4,    16,   290,   552,    42,   120,
     217,   553,     4,     5,    16,   238,   329,   394,   290,   554,
     562,   137,   554,   563,    38,    42,   120,   146,   217,   328,
     394,   564,   404,   396,    98,   106,   114,   132,   139,   164,
     175,   220,   228,   277,   290,   308,   567,    42,   120,   217,
       5,   290,   320,   571,    16,   134,   187,   238,   329,   572,
     321,   396,   573,     5,   106,   114,   337,    16,    16,     4,
     394,   394,   394,   394,   394,   394,   411,   394,   394,   403,
     394,     4,   411,     4,    42,   120,   217,   296,   592,    42,
     120,   217,   296,   593,     4,   104,     5,     5,    93,    93,
      93,     4,     5,     5,    93,     5,    93,   174,    93,   174,
     607,    65,   131,   174,   306,   611,    65,   131,   306,   622,
      93,   174,    65,   131,   306,   609,     4,    65,   131,   306,
     608,     5,     5,     4,     5,     5,     4,     4,     5,     5,
       5,   394,   314,   396,   424,   394,   394,   394,   394,     4,
     394,   628,   394,   394,   405,    68,     4,     4,     5,     4,
       4,     5,     4,   104,   292,   412,   394,   394,    11,     5,
      11,   394,   394,    11,     4,    11,     4,     4,   394,   394,
     394,   394,   394,     4,   394,     5,   394,     4,   396,     4,
       4,   411,   404,   411,   394,   394,   394,   404,   394,   403,
     394,   394,     5,     5,   394,   406,   394,   404,   394,   411,
     411,   412,   412,   412,   411,   403,   394,   411,   394,   397,
     490,   183,     5,     4,   411,   174,   174,     4,     5,     4,
       4,   394,   485,    40,    40,   394,    20,    21,    22,    52,
      53,    56,    63,    66,    70,    80,    81,    88,    99,   118,
     119,   122,   142,   164,   193,   203,   252,   254,   260,   261,
     278,   290,   319,   321,   332,   343,   377,    70,   142,   172,
     261,   319,   312,    32,   178,   239,   266,   556,   394,   234,
     394,   557,    16,   394,   289,   567,   289,   234,   394,   558,
     321,   559,    16,   105,   394,   314,   504,   394,     5,   412,
       4,     4,    60,   404,     4,     5,   521,   394,     5,     5,
       5,   174,   206,   416,   416,   182,   297,   414,     4,     4,
       5,     5,   525,   525,   525,     5,   303,   303,     5,     5,
       5,    16,   176,   415,   415,   414,     4,     4,   414,     5,
       5,   529,     5,   536,     5,   537,   536,   537,   179,   376,
     405,   533,     5,   532,     5,   536,   537,     5,    13,    14,
      65,   213,   214,   295,   306,   307,   311,   341,     4,     4,
       5,     5,   416,   414,     4,     5,     5,   411,    88,   166,
     250,   251,   265,   312,   419,     6,     7,   394,   399,   266,
     266,   266,   114,    42,    70,   106,   114,   120,   142,   164,
     182,   220,   261,   277,   290,   321,   334,   336,   337,   377,
     547,   266,     5,    27,   184,   266,   317,    28,   152,   332,
     114,    22,    53,    56,    88,   119,   122,   254,   289,     4,
      22,    53,    56,    59,    88,   119,   122,   254,   289,   319,
      42,   266,   266,   114,     5,   238,    27,   252,    38,   146,
     328,   394,   293,   301,   252,   272,   404,   567,    42,   143,
     252,   317,   272,   238,     5,     5,   277,    27,   252,     4,
       5,     5,   238,    38,   146,   328,   394,   567,   238,    59,
     396,     4,     4,   394,     5,   341,    22,    27,    52,    53,
      55,    56,    66,    80,    81,    88,    91,   109,   118,   119,
     122,   193,   254,   260,   278,   289,   320,   321,   343,   390,
     549,     4,   394,   394,   394,   394,   394,   554,   404,     5,
       4,     5,   394,   394,   404,   394,   396,   394,   394,   554,
       5,     5,   394,   394,   396,     5,    16,     5,     5,   394,
     394,   403,   394,   394,     4,   394,   394,   120,   394,   394,
     120,     4,    44,    45,   191,   192,   223,   421,   421,    65,
     131,   306,   619,    65,   131,   306,   616,    65,   131,   306,
     613,   421,     5,    65,   131,   306,   610,    65,   131,   306,
     621,    65,   131,   306,   620,    65,   131,   306,   618,    65,
     131,   306,   617,     5,     5,    65,   131,   306,   612,     4,
       5,     5,     4,    65,   131,   306,   615,    65,   131,   306,
     614,     5,     5,     4,     5,     5,     4,   421,   421,   421,
     394,   394,   394,   394,     4,   404,   394,   411,   405,     5,
       5,    11,   394,   404,   406,   394,    11,   394,   394,   394,
      63,   394,     4,   394,   394,     4,   394,   394,     5,   394,
       5,   394,    49,   304,   450,     5,   396,   396,   411,   394,
       4,     4,     4,   411,   404,   394,   394,   394,   394,   411,
     404,   412,   403,   394,     4,   412,   394,     4,   406,     5,
      24,    25,   104,   413,     4,   404,   394,   394,     4,   394,
       5,    88,   166,   250,   251,   265,   312,   404,   406,   266,
     266,   266,    21,   266,   404,   266,    27,   184,   266,   317,
      28,   152,   332,    21,   266,   266,   266,    21,   266,    27,
     188,   252,   188,   293,   301,   252,   188,   252,   325,   567,
     143,   188,   252,   317,     4,   277,    27,   188,   252,   567,
     234,    16,   387,   394,   394,   394,   394,   394,   394,   221,
     394,   394,    20,   262,   513,     4,     4,   394,   416,   416,
     416,     4,   416,   416,   416,    13,    14,    65,   213,   214,
     295,   306,   307,   341,   416,   415,   416,   416,   416,   416,
     416,     4,   416,   416,     4,   415,    13,    14,    65,   213,
     214,   295,   306,   307,   341,     5,    13,    14,    65,   213,
     214,   295,   306,   307,   311,   341,    13,    14,    65,   213,
     214,   295,   306,   307,   341,     5,   531,     5,   534,     5,
       5,    13,    14,    65,   213,   214,   295,   306,   307,   311,
     341,     5,    13,    14,    65,   213,   214,   295,   306,   307,
     311,   341,   303,     5,     5,     5,   415,   415,   414,     4,
       4,   414,     5,     4,     4,   416,   416,     4,   416,   416,
       5,   396,   404,   406,     5,   394,   394,     5,   394,     5,
     399,   114,   220,   277,   114,   220,   277,     5,   394,   396,
       5,   394,   404,   396,   396,     5,     5,   399,   266,   266,
      21,   266,    21,   266,   266,    21,   266,   345,   345,     4,
       4,     4,     4,   547,     4,     4,     4,   345,   345,     4,
       5,     4,   394,     5,   394,     5,   399,   396,   404,   404,
     394,    27,    52,    55,    66,    91,   109,   390,   417,     4,
     404,   394,   411,   396,     5,   404,   404,   394,   396,   396,
     404,   404,   394,   396,     5,   394,     5,   394,   252,   252,
     394,   394,   252,   394,   252,   394,   394,     4,   550,   394,
     252,   252,   394,   394,   394,   394,   394,   394,   394,   394,
       5,   341,   394,   551,   394,   394,   252,   394,   394,   394,
     394,   404,   411,     5,     4,     4,   394,   394,   411,   394,
     394,   394,   404,   554,   394,   394,     5,     4,   394,   394,
     394,   394,     5,     5,     4,     5,     5,     4,     5,     5,
       4,   421,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   394,
     394,   394,   394,   411,   394,   404,   406,   394,   411,   394,
     394,   394,   394,   394,     5,   394,   394,   394,     4,   394,
     394,     5,   394,     5,   394,     4,   404,     4,   394,   411,
     198,   409,   394,   409,   412,   411,   404,   394,   394,     4,
     394,   404,   404,   394,   397,     5,     5,     5,     5,     5,
     100,   404,   411,   404,   404,   404,   404,   406,   404,   411,
     404,   404,   404,   406,   404,   404,   404,   404,   406,   404,
     404,   404,   394,   404,   404,   404,   404,   404,   404,   404,
     404,   100,   394,   394,     4,   394,     5,   394,   416,     5,
       5,     5,   414,     4,     4,     5,   416,   415,     4,   416,
       5,     5,     5,   415,   415,   414,     4,     4,     5,   303,
       5,     5,     5,   415,   415,   414,     4,     4,   414,     5,
       5,     5,     5,   415,   415,   414,     4,     4,     5,    13,
      14,    65,   213,   214,   295,   306,   307,   341,    13,    14,
      65,   213,   214,   295,   306,   307,   341,    13,    14,    65,
     213,   214,   295,   306,   307,   341,   303,     5,     5,     5,
     415,   415,   414,     4,     4,   414,     5,   303,     5,     5,
       5,   415,   415,   414,     4,     4,   414,     5,   415,     4,
       4,   415,     4,     4,   416,     5,   411,   404,   394,   394,
     404,   394,     5,   399,     5,   404,   396,     5,   404,   411,
       5,   399,   394,   394,   394,   394,   394,   394,   394,   394,
     394,     4,     4,     5,     4,     4,   394,   404,   394,     5,
     399,   396,   411,   411,   411,   394,   403,   411,   411,   394,
     411,   411,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,   560,   568,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   404,     5,   394,   394,
     394,   394,     4,     4,   411,   412,     5,     5,   403,   394,
       4,   411,   404,     4,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   399,   394,   394,   394,   411,   394,   403,
     394,   394,    11,     5,     5,   394,   394,   394,   394,     5,
     394,     4,   394,     4,   411,     4,   404,   394,   394,   412,
     413,   394,     5,   394,   404,   406,     5,     5,     5,     5,
       5,   404,   411,   413,   413,   413,   411,   413,   412,   413,
     413,   411,   413,   413,   413,   411,   413,   413,   411,   404,
     411,   413,   411,   413,   413,   411,   413,   411,   404,     4,
     404,   406,     5,   394,     4,   416,   415,     4,   415,   415,
       4,     4,   415,     4,   415,     5,     5,     5,   415,   415,
     414,     4,     4,     5,     5,     5,     5,   415,   415,   414,
       4,     4,     5,     5,     5,     5,   415,   415,   414,     4,
       4,     5,   415,   416,   416,   416,   416,   416,     4,   416,
     416,     4,   415,   415,   416,   416,   416,   416,   416,     4,
     416,   416,     4,   415,   415,     4,     4,     4,   405,   413,
       4,   404,   413,   394,   404,     4,   413,   413,   404,     4,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   404,   413,   394,   404,     4,   403,   403,   412,   404,
     403,   403,   404,   404,   403,   403,   394,   394,   394,   394,
     394,   394,   399,   394,   394,   394,    59,    70,    99,   142,
     319,   321,   377,   565,   566,   567,   579,   580,   399,   394,
     394,   394,   394,   399,   394,   394,   394,   394,   394,   394,
     411,   394,   341,   398,   399,   394,   394,   412,   396,   404,
     404,   412,   411,     4,   394,   403,   394,    63,   394,     5,
       5,     4,     4,   394,   394,     4,   394,     4,   409,   413,
       5,   411,     4,     5,     4,     5,   404,     5,   411,   412,
     413,   412,   412,   412,   412,   411,     5,   411,     4,   394,
     416,   415,   415,     4,   415,   416,   416,   416,   416,   416,
       4,   416,   416,   415,   416,   416,   416,   416,   416,     4,
     416,   416,   415,   416,   416,   416,   416,   416,     4,   416,
     416,   415,   416,   415,     4,   416,   416,   415,     4,   416,
     415,   411,   404,   413,     4,   411,   394,   411,   394,   394,
     394,   413,     4,   411,   394,   403,     5,   413,   394,   403,
     413,   413,   404,   394,     4,   418,   418,   394,   394,   418,
     399,   418,   568,   404,   391,   391,   391,   391,   391,   391,
     391,   566,   391,   399,   418,   418,   394,   394,   399,   394,
     394,   394,   394,   394,   403,   394,     5,   568,   394,   418,
     396,   569,   570,   411,   411,   396,   412,     4,     5,   394,
       5,     4,     4,     4,     4,     4,     4,   394,     4,    34,
     207,   315,   457,   404,     5,    34,   207,   315,   420,   404,
       4,   457,   394,   415,   415,   416,   415,   416,   415,   416,
     416,   415,   416,   415,   394,   413,   404,   404,   394,   404,
     394,   404,   404,   394,   404,   413,     4,   568,   568,   398,
     394,   568,     4,   568,   411,   547,     5,     4,     5,     5,
       5,     4,   396,     4,   568,   568,   398,   394,     4,   568,
     568,   394,   404,   568,   568,   568,   569,   576,   577,   567,
     574,   575,   396,     4,     5,     5,     4,     4,     4,   210,
     339,   384,   394,   448,   457,     4,   404,   457,     4,   416,
     416,   416,   416,   416,   405,   413,   413,   394,   413,     4,
     413,   413,   394,   413,   394,   568,   568,     4,   394,   568,
       5,     4,   394,   568,     4,   394,   568,   411,   576,   578,
     579,   391,   575,     5,     5,   394,   449,   394,   449,   411,
     413,     4,   404,   406,     4,   399,   398,   394,     5,   394,
     398,   394,   404,   579,   396,     5,     5,   394,   394,   394,
     394,   420,     5,   404,   406,   411,   404,   406,   568,   394,
       4,   568,   394,   413,     5,     5,   394,     5,   394,   411,
     411,     4,   568,     4,     5,     5,     5,   398,   398,   568,
     568,   568
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
#line 500 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 501 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 503 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 504 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 506 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 513 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 519 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 520 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 521 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 525 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 534 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 538 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 541 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 547 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 549 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 551 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 553 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 560 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 561 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 564 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 565 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 566 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 567 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 568 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 569 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 570 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 571 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 572 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 573 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 574 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 577 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 579 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 580 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 581 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 582 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 584 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 585 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 586 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 587 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 591 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 592 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 593 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 594 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 597 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 598 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 601 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 602 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 603 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 606 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 609 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 612 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 616 "frame/parser.Y"
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
#line 628 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 635 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 642 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 653 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 687 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 728 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 729 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 730 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 731 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 738 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 739 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 740 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 741 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 749 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 750 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 751 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 752 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 755 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 756 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 757 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 760 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 761 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 762 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 198:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 199:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 200:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 201:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 202:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 203:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 204:
#line 780 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 205:
#line 781 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 206:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 207:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 208:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 209:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 210:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 211:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 212:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 214:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 215:
#line 795 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 216:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 218:
#line 800 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 801 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 220:
#line 802 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 221:
#line 803 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 226:
#line 810 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 811 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 813 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 230:
#line 814 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 231:
#line 816 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 232:
#line 819 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 820 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 234:
#line 821 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 236:
#line 825 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 237:
#line 826 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 238:
#line 829 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 239:
#line 830 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 240:
#line 833 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 241:
#line 834 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 242:
#line 837 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 243:
#line 838 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 244:
#line 841 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 245:
#line 843 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 247:
#line 847 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 248:
#line 848 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 251:
#line 851 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 253:
#line 853 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 856 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 255:
#line 857 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 860 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 257:
#line 861 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 863 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 259:
#line 865 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 260:
#line 866 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 261:
#line 867 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 262:
#line 869 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 263:
#line 871 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 264:
#line 874 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 265:
#line 875 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 266:
#line 878 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 267:
#line 880 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 268:
#line 883 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 269:
#line 885 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 270:
#line 888 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 271:
#line 892 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 272:
#line 893 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 274:
#line 897 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 275:
#line 898 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 276:
#line 899 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 280:
#line 905 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 281:
#line 906 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 283:
#line 909 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 284:
#line 914 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 285:
#line 915 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 286:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 287:
#line 919 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 288:
#line 920 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 289:
#line 921 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 290:
#line 922 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 291:
#line 925 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 292:
#line 926 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 927 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 297:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 943 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 299:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 300:
#line 952 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 954 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 956 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 303:
#line 958 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 307:
#line 965 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 308:
#line 967 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 969 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 971 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 311:
#line 973 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 312:
#line 975 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 313:
#line 976 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 315:
#line 980 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 988 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 321:
#line 991 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 322:
#line 994 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 323:
#line 1000 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 324:
#line 1005 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 325:
#line 1008 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 326:
#line 1009 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 327:
#line 1012 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 328:
#line 1013 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1015 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 330:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 331:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 332:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 333:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 334:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 335:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 336:
#line 1031 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 337:
#line 1032 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 338:
#line 1035 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 339:
#line 1036 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1038 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 341:
#line 1042 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 342:
#line 1044 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1047 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 344:
#line 1049 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 345:
#line 1052 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 347:
#line 1054 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 348:
#line 1055 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1056 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 350:
#line 1059 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 351:
#line 1061 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1062 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1063 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1064 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 356:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 357:
#line 1071 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 358:
#line 1072 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 359:
#line 1075 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 360:
#line 1077 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 361:
#line 1079 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 362:
#line 1081 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 363:
#line 1084 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 364:
#line 1087 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 365:
#line 1088 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 366:
#line 1089 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 367:
#line 1090 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 368:
#line 1093 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 369:
#line 1094 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 370:
#line 1097 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 371:
#line 1100 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 372:
#line 1101 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 386:
#line 1115 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 389:
#line 1118 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 390:
#line 1119 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 396:
#line 1125 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 397:
#line 1126 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 402:
#line 1131 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 403:
#line 1132 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 405:
#line 1135 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 407:
#line 1137 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 409:
#line 1139 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 411:
#line 1141 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 412:
#line 1143 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 415:
#line 1146 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 416:
#line 1150 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 417:
#line 1152 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 418:
#line 1156 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 419:
#line 1158 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 420:
#line 1161 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 421:
#line 1162 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 422:
#line 1163 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 423:
#line 1164 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 424:
#line 1165 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 425:
#line 1166 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 427:
#line 1168 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 428:
#line 1171 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 429:
#line 1172 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 430:
#line 1173 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 431:
#line 1176 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 432:
#line 1179 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 433:
#line 1181 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1183 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 435:
#line 1184 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 436:
#line 1185 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 438:
#line 1187 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 441:
#line 1196 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 442:
#line 1197 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 443:
#line 1200 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 444:
#line 1201 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 445:
#line 1202 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 446:
#line 1205 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 447:
#line 1206 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 449:
#line 1212 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 450:
#line 1214 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 451:
#line 1216 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 452:
#line 1219 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 454:
#line 1221 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 455:
#line 1225 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 456:
#line 1229 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1231 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 459:
#line 1232 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 460:
#line 1233 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 461:
#line 1234 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 462:
#line 1235 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 463:
#line 1236 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 465:
#line 1238 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 466:
#line 1239 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 467:
#line 1242 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 468:
#line 1243 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 469:
#line 1244 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 470:
#line 1247 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 471:
#line 1248 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 472:
#line 1252 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 473:
#line 1254 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 474:
#line 1262 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1264 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 476:
#line 1266 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 477:
#line 1269 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1271 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1272 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 480:
#line 1275 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 481:
#line 1278 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1280 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 483:
#line 1284 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 484:
#line 1286 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 485:
#line 1289 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 486:
#line 1293 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 487:
#line 1294 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 488:
#line 1296 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 489:
#line 1299 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 490:
#line 1300 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 492:
#line 1304 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 493:
#line 1305 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 494:
#line 1306 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 495:
#line 1309 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 496:
#line 1311 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 497:
#line 1312 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 499:
#line 1314 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 503:
#line 1318 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 504:
#line 1319 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 505:
#line 1320 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 506:
#line 1322 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 508:
#line 1324 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 509:
#line 1327 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 510:
#line 1329 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 511:
#line 1331 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1332 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 513:
#line 1333 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 514:
#line 1334 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 515:
#line 1337 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 516:
#line 1338 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 517:
#line 1342 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1344 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 519:
#line 1347 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 520:
#line 1350 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 521:
#line 1351 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 522:
#line 1353 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 523:
#line 1355 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 524:
#line 1357 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 525:
#line 1360 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 526:
#line 1361 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 527:
#line 1362 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 528:
#line 1365 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 529:
#line 1366 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 530:
#line 1367 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1368 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 532:
#line 1369 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1370 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1373 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 535:
#line 1374 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 536:
#line 1375 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 537:
#line 1376 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 538:
#line 1377 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 539:
#line 1378 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 540:
#line 1379 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 541:
#line 1382 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 542:
#line 1383 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 543:
#line 1386 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 544:
#line 1389 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 545:
#line 1390 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 546:
#line 1391 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 547:
#line 1394 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 548:
#line 1397 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 549:
#line 1398 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 550:
#line 1399 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 551:
#line 1402 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 552:
#line 1403 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 553:
#line 1404 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 554:
#line 1407 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 555:
#line 1408 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 556:
#line 1409 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 557:
#line 1410 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 558:
#line 1411 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 559:
#line 1412 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 564:
#line 1419 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 565:
#line 1420 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 567:
#line 1422 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 568:
#line 1425 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 569:
#line 1426 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 570:
#line 1427 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 572:
#line 1431 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 573:
#line 1432 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 574:
#line 1435 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 575:
#line 1436 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 576:
#line 1439 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 577:
#line 1440 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 578:
#line 1443 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 579:
#line 1444 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 580:
#line 1447 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 581:
#line 1448 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 582:
#line 1451 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 584:
#line 1453 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1456 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 586:
#line 1457 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 588:
#line 1461 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 589:
#line 1465 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 590:
#line 1468 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 591:
#line 1475 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 592:
#line 1476 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 593:
#line 1479 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 594:
#line 1480 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 597:
#line 1483 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 598:
#line 1484 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 599:
#line 1485 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 600:
#line 1486 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 602:
#line 1488 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 603:
#line 1489 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 604:
#line 1490 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 606:
#line 1492 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 607:
#line 1493 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 608:
#line 1494 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 609:
#line 1495 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 611:
#line 1499 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 612:
#line 1502 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 613:
#line 1503 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 614:
#line 1506 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 615:
#line 1507 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 616:
#line 1508 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 617:
#line 1509 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 618:
#line 1512 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 619:
#line 1513 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 620:
#line 1514 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 621:
#line 1515 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 622:
#line 1518 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 623:
#line 1519 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1520 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 625:
#line 1521 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 626:
#line 1522 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 627:
#line 1523 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 628:
#line 1526 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 629:
#line 1527 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 630:
#line 1528 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 633:
#line 1532 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 634:
#line 1533 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 635:
#line 1536 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 636:
#line 1539 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 637:
#line 1540 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 638:
#line 1544 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 639:
#line 1546 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 640:
#line 1547 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 648:
#line 1560 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1562 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1564 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 653:
#line 1569 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1573 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1575 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1581 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1582 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1583 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1584 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 664:
#line 1585 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 665:
#line 1587 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 666:
#line 1588 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1589 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1590 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1593 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1601 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1603 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1607 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1609 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 677:
#line 1611 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 678:
#line 1614 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1616 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1618 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1630 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1631 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1632 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1633 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1634 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 695:
#line 1635 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1637 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 697:
#line 1639 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 698:
#line 1640 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1641 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1642 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 701:
#line 1645 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1646 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1647 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1648 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1649 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1651 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 707:
#line 1652 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1653 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1654 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 715:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 721:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 729:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 730:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 731:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 732:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 734:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 739:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 741:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1768 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 750:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 760:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 761:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 766:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 767:
#line 1818 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1819 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 769:
#line 1820 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 770:
#line 1822 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 771:
#line 1824 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 772:
#line 1825 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1826 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1827 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 775:
#line 1830 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 776:
#line 1831 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1832 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1833 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 781:
#line 1837 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 782:
#line 1838 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 783:
#line 1839 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1852 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1859 "frame/parser.Y"
    {fr->loadAsdfCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1862 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 792:
#line 1863 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 793:
#line 1866 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 794:
#line 1867 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1868 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 796:
#line 1871 "frame/parser.Y"
    {;}
    break;

  case 797:
#line 1874 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 798:
#line 1875 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 799:
#line 1876 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 800:
#line 1877 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1878 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 802:
#line 1879 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 803:
#line 1880 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 804:
#line 1884 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 806:
#line 1892 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 807:
#line 1893 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 808:
#line 1895 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 809:
#line 1897 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 810:
#line 1898 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 811:
#line 1899 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 813:
#line 1900 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 816:
#line 1903 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 817:
#line 1904 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 818:
#line 1906 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 819:
#line 1908 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 820:
#line 1910 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 821:
#line 1913 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1915 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1917 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 824:
#line 1919 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 825:
#line 1920 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 826:
#line 1922 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 827:
#line 1925 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 828:
#line 1928 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 829:
#line 1932 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 830:
#line 1935 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 831:
#line 1938 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1941 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 833:
#line 1945 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 834:
#line 1949 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 835:
#line 1954 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 836:
#line 1958 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 837:
#line 1960 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 838:
#line 1961 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1963 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 840:
#line 1965 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 841:
#line 1967 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 842:
#line 1969 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 843:
#line 1970 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1971 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1973 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1975 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 847:
#line 1977 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 849:
#line 1984 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 850:
#line 1988 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1990 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 853:
#line 1994 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 854:
#line 1996 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 855:
#line 1998 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 856:
#line 2000 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 857:
#line 2002 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 858:
#line 2004 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 859:
#line 2006 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 860:
#line 2008 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 861:
#line 2010 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 862:
#line 2012 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2014 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2015 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2017 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2019 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 867:
#line 2020 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2021 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2023 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 870:
#line 2025 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 871:
#line 2026 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 872:
#line 2027 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 873:
#line 2028 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 874:
#line 2030 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 875:
#line 2032 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 876:
#line 2036 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2039 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 878:
#line 2042 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 879:
#line 2046 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 880:
#line 2050 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 881:
#line 2055 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 882:
#line 2059 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 883:
#line 2060 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2061 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 885:
#line 2063 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 886:
#line 2065 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 887:
#line 2069 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 888:
#line 2070 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 889:
#line 2071 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 890:
#line 2073 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 891:
#line 2076 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 892:
#line 2079 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 893:
#line 2082 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 894:
#line 2085 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 895:
#line 2086 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2090 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 897:
#line 2094 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 898:
#line 2096 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 899:
#line 2097 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 900:
#line 2099 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 901:
#line 2102 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 902:
#line 2105 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 903:
#line 2106 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 904:
#line 2108 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 905:
#line 2109 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 906:
#line 2110 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 907:
#line 2112 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 908:
#line 2113 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 909:
#line 2115 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 910:
#line 2118 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 911:
#line 2121 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 912:
#line 2122 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 913:
#line 2124 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 914:
#line 2125 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 918:
#line 2130 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 919:
#line 2131 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 920:
#line 2133 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 921:
#line 2135 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 922:
#line 2137 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 923:
#line 2138 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 927:
#line 2144 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 928:
#line 2145 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 929:
#line 2146 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 930:
#line 2147 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2148 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 932:
#line 2149 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 933:
#line 2150 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 934:
#line 2151 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 935:
#line 2152 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2153 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 937:
#line 2155 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 938:
#line 2157 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 939:
#line 2158 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 940:
#line 2159 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 941:
#line 2160 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 942:
#line 2161 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 943:
#line 2163 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 944:
#line 2164 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 945:
#line 2165 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 946:
#line 2166 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 947:
#line 2167 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 948:
#line 2169 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 949:
#line 2170 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 950:
#line 2171 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 951:
#line 2172 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 952:
#line 2173 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 953:
#line 2174 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 954:
#line 2175 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 955:
#line 2178 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 956:
#line 2179 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 957:
#line 2180 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 958:
#line 2181 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 959:
#line 2182 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 960:
#line 2183 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 961:
#line 2184 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 962:
#line 2185 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 963:
#line 2186 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 964:
#line 2187 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 965:
#line 2188 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 966:
#line 2189 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 967:
#line 2190 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 968:
#line 2191 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 969:
#line 2192 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 970:
#line 2193 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 971:
#line 2194 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 972:
#line 2195 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 973:
#line 2196 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 974:
#line 2197 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 975:
#line 2198 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 976:
#line 2201 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 977:
#line 2202 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 978:
#line 2203 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 979:
#line 2204 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 980:
#line 2205 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 981:
#line 2207 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 982:
#line 2217 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2225 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2234 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2242 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2249 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2256 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2264 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2272 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2277 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2282 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2287 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2292 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2297 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2302 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2307 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 997:
#line 2316 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2326 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2336 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2345 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2353 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1002:
#line 2363 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2373 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1004:
#line 2383 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1005:
#line 2395 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1006:
#line 2404 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1008:
#line 2412 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1009:
#line 2414 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1010:
#line 2423 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1011:
#line 2425 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1012:
#line 2427 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1013:
#line 2432 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1014:
#line 2435 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1015:
#line 2436 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1016:
#line 2437 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1017:
#line 2444 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1018:
#line 2446 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1019:
#line 2447 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1020:
#line 2450 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1021:
#line 2451 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1022:
#line 2452 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1023:
#line 2453 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1024:
#line 2454 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1025:
#line 2455 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1026:
#line 2456 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1028:
#line 2460 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1029:
#line 2461 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1030:
#line 2462 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1031:
#line 2463 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1032:
#line 2464 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1033:
#line 2467 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1034:
#line 2469 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1035:
#line 2471 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1036:
#line 2473 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1037:
#line 2475 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1038:
#line 2477 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2479 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1040:
#line 2481 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1041:
#line 2483 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1042:
#line 2485 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1043:
#line 2486 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1044:
#line 2487 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1045:
#line 2489 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2491 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2494 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2496 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2497 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1050:
#line 2498 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1051:
#line 2500 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2502 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2505 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2508 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1055:
#line 2509 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1056:
#line 2510 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1057:
#line 2511 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1058:
#line 2513 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1059:
#line 2514 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1060:
#line 2515 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2516 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2517 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2518 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1064:
#line 2519 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1065:
#line 2521 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1066:
#line 2523 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2525 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2527 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1069:
#line 2529 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1070:
#line 2530 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1071:
#line 2532 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2534 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1073:
#line 2536 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1074:
#line 2537 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1075:
#line 2538 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1076:
#line 2540 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1077:
#line 2542 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1078:
#line 2545 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2548 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1080:
#line 2549 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2551 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1082:
#line 2554 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1083:
#line 2557 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1084:
#line 2560 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2561 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1086:
#line 2562 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1087:
#line 2563 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1088:
#line 2565 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1089:
#line 2567 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1090:
#line 2569 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1091:
#line 2570 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1092:
#line 2572 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1093:
#line 2573 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1094:
#line 2574 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1095:
#line 2575 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1096:
#line 2576 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1097:
#line 2578 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1098:
#line 2580 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1099:
#line 2582 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1100:
#line 2584 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1101:
#line 2585 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1103:
#line 2587 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1104:
#line 2588 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1105:
#line 2590 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1106:
#line 2592 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1107:
#line 2593 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1108:
#line 2594 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1110:
#line 2596 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1112:
#line 2600 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1113:
#line 2601 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1114:
#line 2602 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1115:
#line 2603 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1116:
#line 2604 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1117:
#line 2605 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1118:
#line 2607 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1119:
#line 2608 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1120:
#line 2610 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1121:
#line 2611 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1122:
#line 2614 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1123:
#line 2615 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1124:
#line 2616 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1125:
#line 2617 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1126:
#line 2620 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1127:
#line 2621 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1128:
#line 2624 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1129:
#line 2625 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1130:
#line 2628 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1131:
#line 2629 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1132:
#line 2632 "frame/parser.Y"
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

  case 1133:
#line 2645 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1134:
#line 2646 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1135:
#line 2650 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1136:
#line 2651 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1137:
#line 2655 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1138:
#line 2656 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1139:
#line 2661 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1140:
#line 2665 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1141:
#line 2670 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1142:
#line 2672 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1143:
#line 2675 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1144:
#line 2677 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1145:
#line 2680 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1146:
#line 2682 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1147:
#line 2685 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1148:
#line 2686 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1149:
#line 2687 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1150:
#line 2688 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2689 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2690 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1153:
#line 2692 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1156:
#line 2699 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1157:
#line 2700 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1158:
#line 2701 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1159:
#line 2702 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1160:
#line 2703 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1161:
#line 2704 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1164:
#line 2709 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1165:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1166:
#line 2711 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1167:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1168:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1169:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1170:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1171:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1172:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1173:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1174:
#line 2719 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1175:
#line 2720 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1178:
#line 2727 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1179:
#line 2728 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1181:
#line 2732 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1182:
#line 2734 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1183:
#line 2735 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1184:
#line 2738 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1185:
#line 2739 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2740 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1187:
#line 2741 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1188:
#line 2742 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1189:
#line 2743 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1190:
#line 2746 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1191:
#line 2747 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2755 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2758 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1196:
#line 2759 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1200:
#line 2766 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1201:
#line 2769 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1202:
#line 2773 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1203:
#line 2774 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1204:
#line 2775 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1205:
#line 2776 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2777 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2778 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1208:
#line 2779 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2780 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1210:
#line 2781 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1211:
#line 2782 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1212:
#line 2783 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2784 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1214:
#line 2786 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1215:
#line 2787 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1216:
#line 2788 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1217:
#line 2789 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1218:
#line 2790 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1219:
#line 2791 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1220:
#line 2792 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1221:
#line 2793 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1222:
#line 2794 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1223:
#line 2795 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1224:
#line 2796 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1225:
#line 2797 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1226:
#line 2798 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1227:
#line 2799 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1228:
#line 2802 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1229:
#line 2803 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2804 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2805 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1232:
#line 2806 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2807 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1234:
#line 2808 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1236:
#line 2815 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1237:
#line 2816 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1238:
#line 2817 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1239:
#line 2818 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1240:
#line 2822 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1241:
#line 2823 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1242:
#line 2825 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1243:
#line 2830 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1245:
#line 2832 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1247:
#line 2834 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2837 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2839 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1250:
#line 2844 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1251:
#line 2847 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1252:
#line 2848 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1254:
#line 2852 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1255:
#line 2854 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1256:
#line 2858 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2859 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1258:
#line 2863 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2864 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2865 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2866 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1262:
#line 2872 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1263:
#line 2873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1264:
#line 2879 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1265:
#line 2880 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1266:
#line 2881 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1267:
#line 2882 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1270:
#line 2890 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1271:
#line 2892 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1272:
#line 2893 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1273:
#line 2894 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1274:
#line 2898 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1275:
#line 2899 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1276:
#line 2900 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1277:
#line 2901 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1278:
#line 2904 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1279:
#line 2905 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1280:
#line 2906 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1281:
#line 2909 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1282:
#line 2910 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1283:
#line 2911 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1284:
#line 2914 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1285:
#line 2915 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1286:
#line 2918 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1287:
#line 2919 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1288:
#line 2920 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1289:
#line 2924 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1290:
#line 2927 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1291:
#line 2928 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1292:
#line 2929 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1293:
#line 2930 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1294:
#line 2931 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1295:
#line 2934 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1296:
#line 2935 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1297:
#line 2936 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1298:
#line 2937 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1299:
#line 2938 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1300:
#line 2939 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1301:
#line 2942 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1302:
#line 2943 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1304:
#line 2945 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1305:
#line 2946 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1306:
#line 2949 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1307:
#line 2950 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1308:
#line 2951 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1314:
#line 2959 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1315:
#line 2962 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2963 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2964 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2968 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1319:
#line 2970 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1320:
#line 2972 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1337:
#line 2993 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2994 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1339:
#line 2995 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1340:
#line 2998 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2999 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 3000 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1343:
#line 3003 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 3004 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 3005 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1346:
#line 3008 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 3009 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3010 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3014 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3015 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3016 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1353:
#line 3019 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3020 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3021 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1356:
#line 3025 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1357:
#line 3027 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3029 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1359:
#line 3032 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3033 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3034 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1362:
#line 3037 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1363:
#line 3038 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1364:
#line 3039 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1365:
#line 3043 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1366:
#line 3045 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1367:
#line 3047 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1368:
#line 3050 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1369:
#line 3051 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1370:
#line 3052 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1371:
#line 3055 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1372:
#line 3056 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3057 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1374:
#line 3061 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1375:
#line 3063 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1376:
#line 3065 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1377:
#line 3068 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1378:
#line 3069 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3070 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1380:
#line 3073 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1381:
#line 3074 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3075 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3078 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1384:
#line 3079 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1385:
#line 3080 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1386:
#line 3084 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1387:
#line 3086 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3088 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1389:
#line 3092 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1390:
#line 3096 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1391:
#line 3098 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1392:
#line 3102 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1393:
#line 3105 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1394:
#line 3106 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1395:
#line 3107 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1396:
#line 3108 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1397:
#line 3111 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1398:
#line 3113 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1399:
#line 3115 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1400:
#line 3118 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1402:
#line 3122 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1403:
#line 3123 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1404:
#line 3124 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1405:
#line 3127 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1406:
#line 3128 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1407:
#line 3132 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1409:
#line 3134 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1412:
#line 3139 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1413:
#line 3140 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1414:
#line 3141 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1415:
#line 3144 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3145 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3146 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1418:
#line 3149 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1419:
#line 3151 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1420:
#line 3156 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1421:
#line 3157 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1422:
#line 3160 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1423:
#line 3167 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1424:
#line 3169 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1425:
#line 3171 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1426:
#line 3176 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1428:
#line 3180 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1429:
#line 3181 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1430:
#line 3182 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1431:
#line 3184 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1432:
#line 3186 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1433:
#line 3191 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12031 "frame/parser.C"
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


#line 3195 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

