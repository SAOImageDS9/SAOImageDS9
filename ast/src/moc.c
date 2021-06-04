/*
*class++
*  Name:
*     Moc

*  Purpose:
*     An arbitrary region of the sky expressed as a collection of HEALPix
*     cells.

*  Constructor Function:
c     astMoc
f     AST_MOC

*  Description:
*     The Moc class uses the IVOA MOC (Multi-Order Coverage) recommendation
*     to describe a region on the sky. The region is made up of an
*     arbitrary collection of cells from the HEALPix sky tessellation,
*     and thus may represent any area on the sky, subject to the
*     constraint that the edges of the area correspond to edges of the
*     HEALPix cells. See the MOC recommendation for further information
*     (http://www.ivoa.net/documents/MOC/).
*
*     The Moc class describes an arbitrary collection of cells on the sky,
*     whereas other subclasses of Region describe exact geometric shapes
*     in any arbitrary domain. This results in some differences between
*     Mocs and other types of Region, the main one being that Mocs have
*     no associated uncertainty.
*
*     The MOC recommendation requires that a MOC always describes a sky
*     area using the ICRS coordinate system. However, the Moc class, like
*     other subclasses of Region, allows its attributes to be changed so
*     that it represents the equivalent area in any celestial coordinate
*     system that can be mapped to ICRS. See attribute Adaptive.
*
*     In practice, to use this class an empty Moc object (i.e. a Moc
*     describing a null area of the sky) should first be created using the
c     astMoc
f     AST_MOC
*     constructor. Areas of the sky should then be added into the empty
*     Moc using one or more of the class methods.
*
*     If it is required to write a Moc out to a FITS binary table, the
*     data value and headers to put in the table can be obtained using
*     methods
c     astGetMocData and astGetMocHeader
f     AST_GETMOCDATA and AST_GETMOCHEADER.
*     The MOC described by an existing FITS binary table can be added
*     into a Moc object using the
c     astAddMocData method.
f     AST_ADDMOCDATA method.
*
*     Note, this class is limited to MOCs for which the number of cells
*     in the normalised MOC can be represented in a four byte signed integer.

*  Inheritance:
*     The Moc class inherits from the Region class.

*  Attributes:
*     In addition to those attributes common to all Regions, every
*     Moc also has the following attributes:
*     - MaxOrder: the highest HEALPix order used in the MOC
*     - MaxRes: the best resolution of the MOC, in arc-seconds
*     - MinOrder: the lowest HEALPix order used in the MOC
*     - MinRes: the worst resolution of the MOC, in arc-seconds
*     - MocArea: the area of the MOC
*     - MocLength: the table length used to describe a MOC in FITS
*     - MocType: the data type used to describe a MOC in FITS

*  Functions:
c     In addition to those functions applicable to all Regions, the
c     following functions may also be applied to all Mocs:
f     In addition to those routines applicable to all Regions, the
f     following routines may also be applied to all Mocs:
*
c     - astAddCell: Adds a single HEALPix cell into an existing Moc
f     - AST_ADDCELL: Adds a single HEALPix cell into an existing Moc
c     - astAddMocData: Adds a FITS binary table into an existing Moc
f     - ADT_ADDMOCDATA: Adds a FITS binary table into an existing Moc
c     - astAddMocString: Adds a JSON or string-encoded MOC into an existing Moc
f     - ADT_ADDMOCSTRING: Adds a JSON or string-encoded MOC into an existing Moc
c     - astAddPixelMask<X>: Adds a pixel mask to an existing Moc
f     - AST_ADDPIXELMASK<X>: Adds a pixel mask to an existing Moc
c     - astAddRegion: Adds a Region to an existing Moc
f     - AST_ADDREGION: Adds a Region to an existing Moc
c     - astGetCell: Identify the next cell included in a Moc
f     - AST_GETCELL: Identify the next cell included in a Moc
c     - astGetMocData: Get the FITS binary table data describing a Moc
f     - AST_GETMOCDATA: Get the FITS binary table data describing a Moc
c     - astGetMocHeader: Get the FITS binary table headers describing a Moc
f     - AST_GETMOCHEADER: Get the FITS binary table headers describing a Moc
c     - astGetMocString: Get the JSON or string-encoded form of a Moc
f     - AST_GETMOCSTRING: Get the JSON or string-encoded form of a Moc
c     - astTestCell: Test if a single HEALPix cell is included in a Moc
f     - AST_TESTCELL: Test if a single HEALPix cell is included in a Moc

*  Copyright:
*     Copyright (C) 2018 East Asian Observatory
*     All Rights Reserved.

*  Licence:
*     This program is free software: you can redistribute it and/or
*     modify it under the terms of the GNU Lesser General Public
*     License as published by the Free Software Foundation, either
*     version 3 of the License, or (at your option) any later
*     version.
*
*     This program is distributed in the hope that it will be useful,
*     but WITHOUT ANY WARRANTY; without even the implied warranty of
*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*     GNU Lesser General Public License for more details.
*
*     You should have received a copy of the GNU Lesser General
*     License along with this program.  If not, see
*     <http://www.gnu.org/licenses/>.

*  Authors:
*     DSB: David S. Berry (Starlink)

*  History:
*     10-OCT-2018 (DSB):
*        Original version.
*     6-MAY-2019 (DSB):
*        Added methods astAddMocString and astGetMocString.
*     7-MAY-2019 (DSB):
*        Modify astAddMocString and astGetMocString so that they can
*        handle JSON encoding as well as string encodiing.
*     12-SEP-2019 (DSB):
*        - Fix bugs in RegBaseMesh that could cause complex outlines to
*        fail.
*        - Check for illegal order values possibly caused by inappropriate
*        removal of white space within the source function when reading
*        string encoded MOCs.
*     17-SEP-2019 (DSB):
*        Modify the meshdist attribute of the Moc structure so that each
*        disjoint region ends with a copy of the first point in the region.
*        This causes the boundary drawn around each region to be closed.
*     1-OCT-2019 (DSB):
*        Speed up MOC generation by changing PutCell so that it:
*        1: puts many cells (rather than just one cell) into the MOC in a
*           single call, and
*        2: only traces the edge recursively through subcells that have at
*           least one corner in and one corner out of the region of interest.
*        Also changed to use astCalloc rather than astMalloc since astCalloc
*        seems to be much faster.
*     2-OCT-2019  (DSB):
*        - Shorten the labels used by Dump/astLoadMoc so that larger MOCs
*        can be dumped withotu hitting the limit on label size imposed by
*        the Channel class.
*        - Fix two memory leaks.
*     4-MAR-2020 (DSB):
*        Changes to remove bugs that occur only when running on 32-bit
*        systems.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS Moc

/* Date type identification codes */
#define LONG_DOUBLE 0
#define DOUBLE 1
#define LONG_INT 2
#define UNSIGNED_LONG_INT 3
#define INT 4
#define UNSIGNED_INT 5
#define SHORT_INT 6
#define UNSIGNED_SHORT_INT 7
#define SIGNED_CHAR 8
#define UNSIGNED_CHAR 9
#define FLOAT 10

/* The declination (rads) at the transition between the polar and equatorial
   regions of the HEALPix projection - arcsin(2/3). */
#define THETAX 0.729727656226966

/* A value that is slightly less than to 0.5. Used as increments to be
   added to the grid coords at a cell centre, in order to get the grid
   coords at the cell edges. Using exactly 0.5 causes problems for cells
   that are adjacent to a discontinuity. */
#define HALF 0.49999

/* The maximum "npix" value for a given order. */
#define MaxNpix(order) (12*(1L<<(2*(order)))-1)

/* A 64 bit literal integer value of 1 */
#define ONE INT64_C(1)


/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "channel.h"             /* I/O channels */
#include "cmpmap.h"              /* Compound mappings */
#include "cmpregion.h"           /* AST__AND/OR/XOR */
#include "error.h"               /* Error reporting facilities */
#include "fitschan.h"            /* Converts FITS headers to FrameSets */
#include "frame.h"               /* Coordinate system description */
#include "frameset.h"            /* Collections of inter-related Frames */
#include "globals.h"             /* Thread-safe global data access */
#include "mapping.h"             /* Position mappings */
#include "matrixmap.h"           /* Matrix Mappings */
#include "memory.h"              /* Memory allocation facilities */
#include "moc.h"                 /* Interface definition for this class */
#include "object.h"              /* Base Object class */
#include "permmap.h"             /* Axis permutations */
#include "polygon.h"             /* AST__LE/GT etc */
#include "region.h"              /* Frame regions (parent class) */
#include "shiftmap.h"            /* Shift of origin Mappings */
#include "skyframe.h"            /* Celestial coordinate systems */
#include "unitmap.h"             /* Unit Mappings */
#include "wcsmap.h"              /* AST__DR2D */
#include "winmap.h"              /* Mappings between windows */
#include "xphmap.h"              /* Mappings between HPX projection types */
#include "circle.h"              /* Circles */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <ctype.h>
#include <float.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <inttypes.h>

/* Type definitions. */
/* ================= */
typedef struct PixelMask {
   const void *data;
   void *value;
   void *bad;
   int type;
   AstDim nx;
   AstDim ny;
   int oper;
} PixelMask;

typedef struct CellList {
   int maxorder;
   AstXphMap *maps[ AST__MXORDHPX + 1 ];
   double *(ix[ AST__MXORDHPX + 1 ]);
   double *(iy[ AST__MXORDHPX + 1 ]);
   int len[ AST__MXORDHPX + 1 ];
} CellList;


struct Cell;
struct Corner;

typedef struct Cell {
   struct Corner *bl;
   struct Corner *tl;
   struct Corner *tr;
   struct Corner *br;
   int ix;
   int iy;
   char interior;
   struct Cell *prev;
} Cell;

typedef struct Corner {
   double ra;
   double dec;
   double cosdec;
   struct Cell *cells[4];
   int ncell;
   char interior;
   int dist;
   struct Corner *prev;
} Corner;

typedef struct SinkData {
   char *string;
   size_t mxsize;
} SinkData;

typedef struct SourceData {
   const char *string;
   size_t mxsize;
} SourceData;

typedef struct List {
   int64_t nval;
   size_t *values;
} List;

typedef struct EndPoint {
   int64_t value;
   int start;
} EndPoint;



/* Module Variables. */
/* ================= */

/* Table used by log2_64 function. */
static const int Tab64[64] = {
    63,  0, 58,  1, 59, 47, 53,  2,
    60, 39, 48, 27, 54, 33, 42,  3,
    61, 51, 37, 40, 49, 18, 28, 20,
    55, 30, 34, 11, 43, 14, 22,  4,
    62, 57, 46, 52, 38, 26, 32, 41,
    50, 36, 17, 19, 29, 10, 13, 21,
    56, 45, 25, 31, 35, 16,  9, 12,
    44, 24, 15,  8, 23,  7,  6,  5};

/* Table used by log2_32 function. */
static const int Tab32[32] = {
     0,  9,  1, 10, 13, 21,  2, 29,
    11, 14, 16, 18, 22, 25,  3, 30,
     8, 12, 20, 28, 15, 17, 24,  7,
    19, 27, 23,  6, 26,  5,  4, 31};

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are extended by this class. */
static AstPointSet *(* parent_transform)( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static const char *(* parent_getattrib)( AstObject *, const char *, int * );
static int (* parent_testattrib)( AstObject *, const char *, int * );
static void (* parent_clearattrib)( AstObject *, const char *, int * );
static void (* parent_setattrib)( AstObject *, const char *, int * );
static int (* parent_equal)( AstObject *, AstObject *, int * );


#ifdef THREAD_SAFE
/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Comp_Corner_tol = 0.0; \
   globals->Comp_Corner_exact = 0; \
   globals->Comp_Corner_loop = 0; \
   globals->Comp_Decra_ptr1 = NULL; \
   globals->Comp_Decra_ptr2 = NULL; \
   globals->Class_Init = 0; \
   globals->GetAttrib_Buff[ 0 ] = 0;

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(Moc)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(Moc,Class_Init)
#define Comp_Corner_Tol astGLOBAL(Moc,Comp_Corner_tol)
#define Comp_Corner_Exact astGLOBAL(Moc,Comp_Corner_exact)
#define Comp_Corner_Loop astGLOBAL(Moc,Comp_Corner_loop)
#define class_vtab astGLOBAL(Moc,Class_Vtab)
#define getattrib_buff astGLOBAL(Moc,GetAttrib_Buff)
#define Comp_Decra_Ptr1 astGLOBAL(Moc,Comp_Decra_ptr1)
#define Comp_Decra_Ptr2 astGLOBAL(Moc,Comp_Decra_ptr2)


#include <pthread.h>


#else

static char getattrib_buff[ 51 ];

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstMocVtab class_vtab;    /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

/* Used to pass data to qsort comparison functions */
static double Comp_Corner_Tol = 0.0;
static int Comp_Corner_Exact = 0;
static int Comp_Corner_Loop = 0;
static double *Comp_Decra_Ptr1 = NULL;
static double *Comp_Decra_Ptr2 = NULL;

#endif

/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstMoc *astMocId_( const char *, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstFitsChan *GetMocHeader( AstMoc *, int * );
static AstFrame *FindSkyAxes( AstFrame *, const char *, int * );
static AstFrameSet *GetHPX12FrameSet( AstMoc *, int, int * );
static AstMapping *GetCachedMapping( AstMoc *, int, const char *, int * );
static AstPointSet *RegBaseMesh( AstRegion *, int * );
static AstPointSet *Transform( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static AstRegion *GetDefUnc( AstRegion *, int * );
static Cell *MakeCell( int, int, int, Cell **, int * );
static double GetMocArea( AstMoc *, int * );
static double GetPixelArea( AstFrameSet *, const AstDim *, int * );
static double OrderToRes( int order );
static int Comp_corner( const void *, const void * );
static int Comp_decra( const void *, const void * );
static int Comp_endpoint( const void *, const void * );
static int Comp_range( const void *, const void * );
static int Comp_int64( const void *, const void * );
static int Equal( AstObject *, AstObject *, int * );
static int RegPins( AstRegion *, AstPointSet *, AstRegion *, int **, int * );
static int RegTrace( AstRegion *, int, double *, double **, int * );
static int ResToOrder( double );
static int log2_32( int );
static int log2_64( int64_t );
static int TestCell( AstMoc *, int, int64_t, int, int * );
static int64_t XyToNested( int, int, int );
static void AddCell( AstMoc *, int, int, int64_t, int * );
static void AddMocData( AstMoc *, int, int, int, int, int, const void *, int * );
static void AddMocString( AstMoc *, int, int, int, size_t, const char *, int *, int * );
static void AddRegion( AstMoc *, int, AstRegion *, int * );
static void AppendChildren( AstMoc *, Cell *, int, Cell **, int *);
static void ClearCache( AstMoc *, int * );
static void CombineRanges( AstMoc *, int, const char *, int * );
static void Copy( const AstObject *, AstObject *, int * );
static void Delete( AstObject *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void GetCell( AstMoc *, int, int *, int64_t *, int * );
static void GetMocData( AstMoc *, size_t, void *, int * );
static void GetMocString( AstMoc *, int, size_t, char *, size_t *, int * );
static void GetNorm( AstMoc *, const char *, int * );
static void IncorporateCells( AstMoc *, CellList *, int, int, const char *, int * );
static void MakeCorners( AstMoc *, int, Cell *, Corner **, int, int * );
static void MergeRanges( AstMoc *, int, int * );
static void NegateRanges( AstMoc *, int, int, int * );
static void NestedToXy( int64_t, int, int *, int * );
static void PutCell( AstMoc *, AstMapping **, AstDim, AstDim *, AstDim *, int, CellList *, int, void *, int, int *, const char *, int * );
static void RegBaseBox( AstRegion *, double *, double *, int * );
static void Sink1( void *, size_t, const char *, int * );
static void Sink2( void *, size_t, const char *, int * );
static const char *Source1( void *, size_t *, int * );
static void TestPixels( PixelMask *, AstDim, AstPointSet *, int *, int *);

/* For debugging of astRegBaseMesh and astRegTrace. If the macro
   MESH_DEBUG is defined, output ascii tables will be created when the
   boundary of a MOC is plotted. The moctohtml script in the ast_tester
   subdirectory of AST will convert these ascii tables into an HTML file
   that allows the boundary-walking algorithm to be explored in a web
   browser. See moctohtml for more details. */
#ifdef MESH_DEBUG
static void dump_cell( AstMoc *, Cell *, int );
static void dump_corner( Corner *this, int );
static void dump_moc( AstMoc *, const char *, int *);
#endif

static const char *GetAttrib( AstObject *, const char *, int * );
static void ClearAttrib( AstObject *, const char *, int * );
static void SetAttrib( AstObject *, const char *, int * );
static int TestAttrib( AstObject *, const char *, int * );

static int GetMaxOrder( AstMoc *, int * );
static int TestMaxOrder( AstMoc *, int * );
static void ClearMaxOrder( AstMoc *, int * );
static void SetMaxOrder( AstMoc *, int, int * );

static int GetMinOrder( AstMoc *, int * );
static int TestMinOrder( AstMoc *, int * );
static void ClearMinOrder( AstMoc *, int * );
static void SetMinOrder( AstMoc *, int, int * );

static int GetMocType( AstMoc *, int * );
static int GetMocLength( AstMoc *, int * );



/* Define a macro that expands to a single prototype for function
   AddPixelMask for a given data type. Then use it to define all
   AddPixelMask prototypes for all data types. */
#define ADDPIXELMASK_PROTO(X,Xtype) \
static void AddPixelMask##X( AstMoc *, int, AstFrameSet *, Xtype, int, \
                             int, Xtype, const Xtype[], const AstDim[2], int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
ADDPIXELMASK_PROTO(LD,long double)
#endif
ADDPIXELMASK_PROTO(D,double)
ADDPIXELMASK_PROTO(L,long int)
ADDPIXELMASK_PROTO(UL,unsigned long int)
ADDPIXELMASK_PROTO(I,int)
ADDPIXELMASK_PROTO(UI,unsigned int)
ADDPIXELMASK_PROTO(S,short int)
ADDPIXELMASK_PROTO(US,unsigned short int)
ADDPIXELMASK_PROTO(B,signed char)
ADDPIXELMASK_PROTO(UB,unsigned char)
ADDPIXELMASK_PROTO(F,float)

/* Define a macro that expands to a single prototype for function
   GetSelectionBounds for a given data type and operation. */
#define GETSELECTIONBOUNDS_PROTO0(X,Xtype,Oper) \
static int GetSelectionBounds##Oper##X( Xtype, const Xtype[], const AstDim[ 2 ], AstDim *, AstDim *, AstDim *, AstDim *, int * );

/* Define a macro that expands to a set of prototypes for all operations
   for function GetSelectionBounds for a given data type. */
#define GETSELECTIONBOUNDS_PROTO(X,Xtype) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,LT) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,LE) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,EQ) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,GE) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,GT) \
GETSELECTIONBOUNDS_PROTO0(X,Xtype,NE)

/* Use the above macros to define all GetSelectionBounds prototypes for all
   data types and operations. */
#if HAVE_LONG_DOUBLE     /* Not normally implemented */
GETSELECTIONBOUNDS_PROTO(LD,long double)
#endif
GETSELECTIONBOUNDS_PROTO(D,double)
GETSELECTIONBOUNDS_PROTO(L,long int)
GETSELECTIONBOUNDS_PROTO(UL,unsigned long int)
GETSELECTIONBOUNDS_PROTO(I,int)
GETSELECTIONBOUNDS_PROTO(UI,unsigned int)
GETSELECTIONBOUNDS_PROTO(S,short int)
GETSELECTIONBOUNDS_PROTO(US,unsigned short int)
GETSELECTIONBOUNDS_PROTO(B,signed char)
GETSELECTIONBOUNDS_PROTO(UB,unsigned char)
GETSELECTIONBOUNDS_PROTO(F,float)



/* Member functions. */
/* ================= */
static void AddCell( AstMoc *this, int cmode, int order, int64_t npix,
                     int *status ) {
/*
*++
*  Name:
c     astAddCell
f     AST_ADDCELL

*  Purpose:
*     Adds a single HEALPix cell into an existing Moc.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     void astAddCell( AstMoc *this, int cmode, int order, int64_t npix )
f     CALL AST_ADDCELL( THIS, CMODE, ORDER, NPIX, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function modifies a Moc by combining it with a single
*     specified HEALPix cell. The way in which they are combined is
*     determined by the
c     "cmode" parameter.
f     CMODE parameter.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     cmode
f     CMODE = INTEGER (Given)
*        Indicates how the Moc and specified cell are to be combined. Any
*        of the following values may be supplied:
*        - AST__AND: If the specified cell is included in the Moc, it is
*        removed. Otherwise the Moc is left unchanged.
*        - AST__OR: If the specified cell is not included in the Moc, it is
*        added. Otherwise the Moc is left unchanged.
*        - AST__XOR: The specified cell is toggled - it is removed from
*        the Moc if originally present, and it is added to the Moc if not
*        originally present.
c     order
f     ORDER = INTEGER (Given)
*        The HEALPix order of the cell. An error is reported if this is
*        higher than the maximum order allowed in the Moc (as given by its
*        MaxOrder attribute). If no value has been set for the MaxOrder
*        attribute, calling this method causes it to be set to the supplied
*        order value. So the highest order cells should usually be added
*        first.
c     npix
f     NPIX = INTEGER*8 (Given)
*        The "npix" value identifying the required cell (see the MOC
*        recommendation for more details).
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*--
*/

/* Local Variables: */
   int irange;
   int maxorder;
   int shift;
   int64_t *pr;
   int64_t ihigh;
   int64_t ilow;

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate */
   if( order < 0 || order > AST__MXORDHPX ) {
      astError( AST__INVAR, "astAddCell(%s): Invalid value (%d) "
                "supplied for parameter 'order' - must be no greater "
                "than %d.", status, astGetClass( this ), order,
                AST__MXORDHPX );

   } else if( npix < 0 || npix > MaxNpix( order ) ) {
      astError( AST__INVAR, "astAddCell(%s): Invalid value (%zu) "
                "supplied for parameter 'npix' - must be greater "
                "than 0 and less than %zu.", status, astGetClass( this ),
                npix, MaxNpix( order ) + 1 );

/* Get MaxOrder, if set, and check "order" is no greater than MaxOrder. */
   } else if( astTestMaxOrder( this ) ) {
      maxorder = astGetMaxOrder( this );
      if( maxorder < order && astOK ) {
         astError( AST__INVAR, "astAddCell(%s): Invalid value (%d) "
                   "supplied for parameter 'order' - must be no "
                   "greater than the Moc's MaxOrder attribute (%d).",
                   status, astGetClass( this ), order, maxorder );
      }

/* If MaxOrder is not set, set it to "order". */
   } else {
      maxorder = order;
      astSetMaxOrder( this, order );
   }

/* Get the upper and lower bounds of the range of cells at MaxOrder
   that corresponds to the specified cell. */
   if( astOK ) {
      shift = 2*( maxorder - order );
      ilow = ( npix << shift );
      ihigh = ( (npix + 1 ) << shift ) - 1;

/*  Add this range to the array of ranges in the Moc. */
      irange = this->nrange++;
      this->range = astGrow( this->range, this->nrange, 2*sizeof(*(this->range)) );
      if( astOK ) {
         pr = this->range + 2*irange;
         pr[ 0 ] = ilow;
         pr[ 1 ] = ihigh;
      }

/* Normalise the Moc. */
      astMocNorm( this, cmode == AST__AND, cmode, irange, maxorder,
                  "astAddCell" );
   }
}

static void AddMocData( AstMoc *this, int cmode, int negate, int maxorder,
                        int len, int nbyte, const void *data, int *status ) {
/*
*++
*  Name:
c     astAddMocData
f     AST_ADDMOCDATA

*  Purpose:
*     Adds a FITS binary table into an existing Moc.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     void astAddMocData( AstMoc *this, int cmode, int negate, int maxorder,
c                         int len, int nbyte, const void *data );
f     CALL AST_ADDMOCDATA( THIS, CMODE, NEGATE, MAXORDER, LEN, NBYTE, DATA,
f                          STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function modifies a Moc by combining it with a binary data array
*     describing a MOC read from a FITS binary table. The way in which they
*     are combined is determined by the
c     "cmode" parameter.
f     CMODE parameter.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     cmode
f     CMODE = INTEGER (Given)
*        Indicates how the Moc and data are to be combined. Any of the
*        following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the data.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the data.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the data.
c     negate
f     NEGATE = LOGICAL (Given)
*        If
c        non-zero,
f        .FALSE.,
*        the cells added to the Moc will be those included in the
*        supplied data array.
*        If
c        zero,
f        .TRUE.,
*        the cells added to the Moc will be those not included in the
*        supplied data array.
c     maxorder
f     MAXORDER = INTEGER (Given)
*        The maximum HEALPix order to use. If a negative value is supplied,
*        the maximum order will be determined by searching the data array
*        (this will take extra time). In either case, if a value has already
*        been set for the MaxOrder attribute in the Moc, then the attribute
*        value is used in preference to the value supplied for this parameter.
*        Any HEALPix cells in the data array that refer to an order greater
*        than
c        "maxorder"
f        MAXORDER
*        are ignored.
c     len
f     LEN = INTEGER (Given)
*        The length of the supplied array (i.e. the number of 4 or 8 byte
*        integer values it contains). Note, this class only supports binary
*        MOCs with lengths that can be represented in a 4 byte signed
*        integer.
c     nbyte
f     NBYTE = INTEGER (Given)
*        The number of bytes in each integer value stored in the supplied
*        array. Must be 4 or 8.
c     data
f     DATA( * ) = BYTE (Given)
c        Pointer to the
f        The
*        data array holding a description of a MOC in the form used by
*        FITS binary tables. See the IVOA MOC recommendation for details.
*        The values in this array are signed integers, each with the
*        number of bytes specified by parameter
c        "nbyte".
f        NBYTE.
*        The number of bytes in this array should be at least
c        "len*nbyte".
f        LEN*NBYTE.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*     - If no value has yet been set for attribute MaxOrder, then this
*     function will automatically set it to the value supplied for
c     "Maxorder",
f     MAXORDER,
*     or to the largest order present in the supplied binary MOC if
c     "Maxorder" is negative.
f     MAXORDER  is negative.
*--
*/

/* Local Variables: */
   const int *pni;
   const int64_t *pnk;
   int icell;
   int irange;
   int nold;
   int order;
   int shift;
   int64_t *pr;
   int64_t ihigh;
   int64_t ilow;
   int64_t npix;

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate */
   if( nbyte != 4 && nbyte != 8 ) {
      astError( AST__INVAR, "astAddMocData(%s): Invalid value (%d) "
                "supplied for parameter 'nbyte' - must be 4 or 8",
                status, astGetClass( this ), nbyte );

   } else if( maxorder > AST__MXORDHPX ) {
      astError( AST__INVAR, "astAddMocData(%s): Invalid value (%d) "
                "supplied for parameter 'maxorder' - must be no greater "
                "than %d.", status, astGetClass( this ), maxorder,
                AST__MXORDHPX );

   } else if( len < 0 ) {
      astError( AST__INVAR, "astAddMocData(%s): Invalid value (%d) "
                "supplied for parameter 'len' - must be greater "
                "than 0.", status, astGetClass( this ), len );

/* If the supplied MOC is empty (i.e. len==0) then the resulting Moc
   will be unchanged unless "cmode" is AST__AND, in which case the
   resulting Moc will be empty. */
   } else if( len == 0 ) {
      if( cmode == AST__AND ) {
         this->nrange = 0;
         this->range = astFree( this->range );
         ClearCache( this, status );
      }

/* Otherwise, read a MOC from the data array and combine it with the
   supplied Moc. */
   } else {

/* If the MaxOrder attribute is set in the Moc, use it in preference to
   the value supplied for parameter "maxorder". */
      if( astTestMaxOrder( this ) ) {
         maxorder = astGetMaxOrder( this );

/* Otherwise, we use the supplied "maxorder" value. If "maxorder" was
   not supplied (i.e. is negative), make an initial pass through the array
   to determine the maximum order. */
      } else {
         if( maxorder < 0 ) {
            if( nbyte == 4 ) {
               pni = data;
               for( icell = 0; icell < len; icell++ ) {
                  order = log2_32( *(pni++) / 4 ) / 2;
                  if( order > maxorder ) maxorder = order;
               }
            } else {
               pnk = data;
               for( icell = 0; icell < len; icell++ ) {
                  order = log2_64( *(pnk++) / 4 ) / 2;
                  if( order > maxorder ) maxorder = order;
               }
            }
         }

/* Use this value as the Moc's MaxOrder attribute value from now on. */
         astSetMaxOrder( this, maxorder );
      }

/* Record the orginal number of ranges in the Moc. */
      nold =this->nrange;

/* Convert the supplied MOC data to a list of ranges of cells at
  "maxorder" and append to the end of the ranges currently in the Moc. */
      if( nbyte == 4 ) {
         pni = data;
      } else {
         pnk = data;
      }
      for( icell = 0; icell < len; icell++ ) {

/* Decode the data value (a "nuniq" value) to get the order and npix, using
   a fast log2 function. */
         if( nbyte == 4 ) {
            order = log2_32( *pni / 4 ) / 2;
            npix = *(pni++) - ( 1 << (2 + 2*order) );
         } else {
            order = log2_64( *pnk / 4 ) / 2;
            npix = *(pnk++) - ( ONE << (2 + 2*order) );
         }

/* Ignore cells at orders higher than maxorder. */
         if( order <= maxorder ) {

/* Get the upper and lower bounds of the cells at maxorder contained
   within this cell at order. */
            shift = 2*( maxorder - order );
            ilow = ( npix << shift );
            ihigh = ( (npix + 1 ) << shift ) - 1;

/* Append this as a new range to the Moc. */
            irange = this->nrange++;
            this->range = astGrow( this->range, this->nrange, 2*sizeof(*(this->range)) );
            if( astOK ) {
               pr = this->range + 2*irange;
               pr[ 0 ] = ilow;
               pr[ 1 ] = ihigh;
            } else {
               break;
            }
         }
      }

/* Normalise the Moc. */
      astMocNorm( this, negate, cmode, nold, maxorder, "astAddMocData" );
   }
}

static void AddMocString( AstMoc *this, int cmode, int negate, int maxorder,
                          size_t len, const char *string, int *json,
                          int *status ) {
/*
*++
*  Name:
c     astAddMocString
f     AST_ADDMOCSTRING

*  Purpose:
*     Adds a JSON or string-encoded MOC into an existing Moc.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     void astAddMocString( AstMoc *this, int cmode, int negate, int maxorder,
c                           size_t len, const char*string, int *json );
f     CALL AST_ADDMOCSTRING( THIS, CMODE, NEGATE, MAXORDER, LEN, STRING,
f                            JSON, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function modifies a Moc by combining it with the MOC described
*     by the supplied string - assumed to be encoded using either the string
*     or JSON serialisation described in the MOC recommendation. The way in
*     which they are combined is determined by the
c     "cmode" parameter.
f     CMODE parameter.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     cmode
f     CMODE = INTEGER (Given)
*        Indicates how the supplied MOC is to be combined with the
*        existing Moc. Any of the following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the sipplied MOC.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the supplied MOC.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the supplied MOC.
c     negate
f     NEGATE = LOGICAL (Given)
*        If
c        non-zero,
f        .FALSE.,
*        the cells added to the existing Moc will be those included in the
*        supplied MOC.
*        If
c        zero,
f        .TRUE.,
*        the cells added to the existing Moc will be those not included in the
*        supplied MOC.
c     maxorder
f     MAXORDER = INTEGER (Given)
*        The maximum HEALPix order to use. If a negative value is supplied,
*        the maximum order will be determined by searching the supplied MOC
*        (this will take extra time). In either case, if a value has already
*        been set for the MaxOrder attribute in the Moc, then the attribute
*        value is used in preference to the value supplied for this parameter.
*        Any HEALPix cells in the supplied MOC that refer to an order greater
*        than
c        "maxorder"
f        MAXORDER
*        are ignored.
c     len
f     LEN = INTEGER (Given)
*        The number of characters to read from the supplied string. If
*        this is greater than the length of the string, it is ignored and the
*        whole string is read.
c     string
f     STRING = CHARACTER * ( * ) (Given)
c        Pointer to the
f        The
*        array of characters holding the supplied MOC. It should be
*        encoded using either the string or JSON serialisation described
*        in the MOC recommendation. The used serialisation is determined
*        from the first non-blank character, which should be either a
*        curly brace ('{'- JSON serialisation) or a digit (string
*        serialisation).
c     json
f     JSON = LOGICAL (Returned)
c        Pointer to an int in which to return a
f        A
*        boolean flag indicating if the supplied string was interpreted
c        using the JSON (non-zero) or string (zero) serialisation.
f        using the JSON (.TRUE.) or string (.FALSE.) serialisation.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*     - If no value has yet been set for attribute MaxOrder, then this
*     function will automatically set it to the value supplied for
c     "Maxorder",
f     MAXORDER,
*     or to the largest order present in the supplied string MOC if
c     "Maxorder" is negative.
f     MAXORDER  is negative.
*--
*/

/* Local Variables: */
   int nold;
   SourceData data;

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate */
   if( maxorder > AST__MXORDHPX ) {
      astError( AST__INVAR, "astAddMocString(%s): Invalid value (%d) "
                "supplied for parameter 'maxorder' - must be no greater "
                "than %d.", status, astGetClass( this ), maxorder,
                AST__MXORDHPX );

/* If the supplied MOC is empty (i.e. len==0) then the resulting Moc
   will be unchanged unless "cmode" is AST__AND, in which case the
   resulting Moc will be empty. */
   } else if( len == 0 ) {
      if( cmode == AST__AND ) {
         this->nrange = 0;
         this->range = astFree( this->range );
         ClearCache( this, status );
      }

/* Otherwise, read a MOC from the string and combine it with the supplied
   Moc. */
   } else {
      nold = this->nrange;
      data.string = string;
      data.mxsize = len;
      astAddMocText( this, maxorder, Source1, &data, "astAddMocString", json );
      astMocNorm( this, negate, cmode, nold, astGetMaxOrder( this ),
                  "astAddMocString" );
   }
}

void astAddMocText_( AstMoc *this, int maxorder,
                     const char *(*source)( void *, size_t *nc, int * ),
                     void *data, const char *method, int *json, int *status ){
/*
*+
*  Name:
*     astAddMocText

*  Purpose:
*     Adds a JSON or string-encoded MOC into an existing Moc but does not
*     normalise.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     void astAddMocText_( AstMoc *this, int maxorder,
*                          const char *(*source)( void *, size_t *, int * ),
*                          void *data, const char *method, int *json )

*  Class Membership:
*     Moc method.

*  Description:
*     This function identifies the ranges of cells at "maxorder" that are
*     included in the supplied JSON or string-encoded MOC, and appends them
*     to the cell ranges stored in the supplied Moc. It does not normalise
*     the Moc (astMocNorm should be called to do this one all ranges have
*     been added to the Moc).

*  Parameters:
*     this
*        Pointer to the Moc to be modified.
*     maxorder
*        The maximum HEALPix order to use. If a negative value is supplied,
*        the maximum order will be determined by searching the supplied MOC.
*        In either case, if a value has already been set for the MaxOrder
*        attribute in the Moc, then the attribute value is used in preference
*        to the value supplied for this parameter. Any HEALPix cells in the
*        supplied MOC that refer to an order greater than "maxorder" are
*        ignored.
*     source
*        A function that will be called to read in each section of the MOC's
*        string representation. It should have the following synopsis:
*
*        const char *source( void *data, size_t *nc, int *status )
*
*        The source function should return a pointer to a string holding the
*        next set of characters within the JSON or string encoded MOC. It
*        should also return the maximum number of characters (nc) to be
*        used from the string. If a null character is found in the string
*        before 'nc' characters have been read, parsing of the string
*        ends at that point. The "data" pointer can be used for any purpose.
*        A NULL pointer should be returned if there are no more characters
*        to return.
*     data
*        A pointer to an arbitrary structure to be passed to the source
*        function. Can be NULL.
*     method
*        Method name to include in error messages.
*     json
*        Pointer to an int in which to return a boolean flag indicating if
*        the supplied string was interpreted using the JSON (non-zero) or
*        string (zero) serialisation.

*  Notes:
*     - If no value has yet been set for attribute MaxOrder, then this
*     function will automatically set it to the value supplied for "Maxorder",
*     or to the largest order present in the supplied MOC if "Maxorder"
*     is negative.
*-
*/

/* Local Variables: */
   List orders[ 1 + AST__MXORDHPX ];
   const char *text;
   const char *pt;
   const char *pend;
   int first;
   int irange;
   int isrange;
   int mxord;
   int order;
   int shift;
   int state;
   int64_t *pr;
   int64_t ihigh;
   int64_t ilow;
   int64_t ipix;
   int64_t nadd;
   int64_t npix0;
   int64_t npix;
   int64_t nval;
   size_t *values;
   size_t nbyte;
   size_t nc;

/* Initialise */
   *json = 0;

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate */
   if( maxorder > AST__MXORDHPX ) {
      astError( AST__INVAR, "%s(%s): Invalid value (%d) supplied for parameter"
                " 'maxorder' - must be no greater than %d.", status, method,
                astGetClass( this ), maxorder, AST__MXORDHPX );

/* Otherwise, read in and process the text. */
   } else {

/* Initialise the maximum order found in the text. */
      mxord = -1;

/* Initialise the current order and npix value. */
      order = -1;
      npix = 0;

/* Indicate we are not in a string-format range. */
      isrange = 0;
      npix0 = 0;

/* Indicate we are currently looking for the first non-space character,
   from which we determine the format of the supplied string. */
      state = 0;

/* Use the source function to get a pointer to a null-terminated string
   holding the first characters to read. */
      text = (*source)( data, &nc, status );

/* Initialise the list of NPIX values at each order. */
      for( order = 0; order <= AST__MXORDHPX; order++ ) {
         orders[ order ].nval = 0;
         orders[ order ].values = NULL;
      }

/* Loop to parse all available text. This loop populates the above array
   of "Order" structures, which hold the orders used, and the NPIX values
   at each order. It also determines the maximum order. But it does not
   modifiy the supplied Moc structure. */
      while( text && astOK ) {

/* Process each character in the current text string, Stop when 'nc'
   characters have been read or a null character is encountered, which ever
   happens first.  */
         pend = text + nc;
         pt = text;
         while( *pt && pt < pend ){

/* If we are currently looking for the first non-space character... */
            if( state == 0 ) {

/* If the first non-space character is an opening curly brace, assume the
   text uses JSON-serialisation, and indicate we are now looking for an
   order value. */
               if( *pt == '{' ) {
                  *json = 1;
                  state = 1;

/* If the first non-space character is a digit, assume the text uses
   string-serialisation, and indicate we are now looking for an order
   value. Backup by one character so that the digit is re-read on the
   next pass. */
               } else if( isdigit( *pt ) ) {
                  *json = 0;
                  state = 1;
                  pt--;

/* If the first non-space character is anything else, report an error. */
               } else if( !isspace( *pt ) ) {
                  astError( AST__INMOC, "%s(%s): Invalid textual MOC supplied: '%.30s...'",
                            status, method, astGetClass( this ), pt );
                  astError( AST__INMOC, "Cannot determine the serialisation from "
                            "the first character.", status );
                  break;
               }

/* First deal with JSON-serialisation. */
            } else if( *json ) {

/* If we are looking for the double quote starting an order value, skip
   spaces until we find a double quote... */
               if( state == 1 ) {
                  if( *pt == '"' ) {
                     order = 0;
                     state = 2;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected double quote at '%.15s'.",
                               status, pt );
                     break;
                  }

/* If we are looking for the digits in an order value, record digits until
   we find a double quote... */
               } else if( state == 2 ) {
                  if( isdigit( *pt ) ) {
                     order = ( *pt - '0' ) + 10*order;
                     if( order > AST__MXORDHPX ){
                        astError( AST__INMOC, "%s(%s): Error reading JSON MOC: '%.30s...'",
                                  status, method, astGetClass( this ), text );
                        astError( AST__INMOC, "Invalid MOC order %d encountrered.",
                                  status, order );
                        break;
                     }
                  } else if( *pt == '"' ) {
                     state = 3;
                  } else {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected double quote or digit "
                               "at '%.15s'.", status, pt );
                     break;
                  }

/* If we are looking for the colon following an order value, skip spaces
   until we find a colon. */
               } else if( state == 3 ) {
                  if( *pt == ':' ) {
                     state = 4;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected colon at '%.15s'.",
                               status, pt );
                     break;
                  }

/* If we are looking for the opening square bracket that marks the start
   of a list of NPIX values, skip spaces until we find an opening square
   bracket. */
               } else if( state == 4 ) {
                  if( *pt == '[' ) {
                     first = 1;
                     state = 5;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected opening square bracket "
                               "at '%.15s'.", status, pt );
                     break;
                  }

/* If we are looking for the first digit in an NPIX value, skip spaces until
   we find a digit. Record the digit. Note an empty list of NPIX values is
   acceptable so also check for a closing square bacrket so long as we
   have not yet found any NPIX values in this list. */
               } else if( state == 5 ) {
                  if( isdigit( *pt ) ){
                     state = 6;
                     npix = *pt - '0';

                  } else if( first && *pt == ']' ){
                     if( order > mxord ) mxord = order;
                     state = 8;

                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected digit at '%.15s'.",
                               status, pt );
                     break;
                  }

/* If we are looking for the terminator marking the end of an NPIX value,
   skip digits until we find a space, comma or closing square bracket.
   Update the NPIX value with any digits. */
               } else if( state == 6 ) {
                  first = 0;

                  if( isdigit( *pt ) ){
                     npix = ( *pt - '0' ) + 10*npix;
                  } else if( isspace( *pt ) ) {
                     state = 7;
                  } else if( *pt == ',' ) {
                     state = 5;
                  } else if( *pt == ']' ) {
                     state = 8;
                  } else {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected digit, comma or "
                               "closing square bracket at '%.15s'.", status, pt );
                     break;
                  }

/* When the NPIX value is complete append it to the current list of NPIX
   values for the current order. */
                  if( state != 6 ) {
                     nval = orders[ order ].nval;
                     if( nval == 0 && order > mxord ) mxord = order;
                     nbyte = ( nval + 1 )*sizeof( size_t );
                     values = astGrow( orders[ order ].values, 1, nbyte );
                     if( astOK ) {
                        values[ nval ] = npix;
                        orders[ order ].values = values;
                        orders[ order ].nval = nval + 1;
                     }
                  }

/* If we are looking for a comma or closing square bracket marking the
   end of an NPIX value, skip spaces until we find one. */
               } else if( state == 7 ) {
                  if( *pt == ',' ){
                     state = 5;
                  } else if( *pt == ']' ) {
                     state = 8;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected comma or closing "
                               "square bracket at '%.15s'.", status, pt );
                     break;
                  }

/* If we are looking for a comma or closing curly brace following a list
   of NPIX values, skip spaces until we find one. */
               } else if( state == 8 ) {
                  if( *pt == ',' ){
                     state = 1;
                  } else if( *pt == '}' ) {
                     state = 9;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected comma or closing "
                               "curly brace at '%.15s'.", status, pt );
                     break;
                  }

/* If we are looking for any non-space characters following the closing
   curly brace, report an error if any are found. */
               } else if( state == 9 ) {
                  if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Illegal non-blank characters "
                               "following final closing curly brace at '%.15s'.",
                               status, pt );
                     break;
                  }

/* No other state value should be encountered. */
               } else {
                  astError( AST__INMOC, "%s(%s): Invalid JSON 'state' value "
                            "(%d) (internal AST programming error).", status,
                            method, astGetClass( this ), state );
                  break;
               }

/* Now deal with string-serialisation. */
            } else {

/* If we are looking for the first digit of an order or npix value, skip
   spaces until we find a digit. We do not know yet whether it is an order
   or npix value, but we use "npix" to record the value anyway. */
               if( state == 1 ) {
                  if( isdigit( *pt ) ) {
                     npix = *pt - '0';
                     state = 2;
                  } else if( !isspace( *pt ) ) {
                     astError( AST__INMOC, "%s(%s): Invalid string MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Expected digit at '%.15s'.",
                               status, pt );
                     break;
                  }

/* If we are looking for the second and subsequent digits in an order or
   npix value, record digits until we find a space, comma, slash or dash... */
               } else if( state == 2 ) {

/* digit - update the order or npix value recorded in "npix". */
                  if( isdigit( *pt ) ) {
                     npix = ( *pt - '0' ) + 10*npix;

/* space or comma - the value previously recorded is an npix value,
   either a single npix value or the end of a range of npix values.
   Record the npix values and then look for the start of the next
   numerical value. Report an error if the order has not yet been
   specified. */
                  } else if( isspace( *pt ) || *pt == ',') {
                     if( order < 0 ) {
                        astError( AST__INMOC, "%s(%s): Invalid string MOC supplied: '%.30s...'",
                                  status, method, astGetClass( this ), text );
                        astError( AST__INMOC, "No order value found at start "
                                  "of string.", status );
                        break;
                     }

                     if( !isrange ) {
                        npix0 = npix;
                        nadd = 1;
                     } else if( npix >= npix0 ){
                        isrange = 0;
                        nadd = npix - npix0 + 1;
                     } else {
                        astError( AST__INMOC, "%s(%s): Invalid string MOC supplied: '%.30s...'",
                                  status, method, astGetClass( this ), text );
                        astError( AST__INMOC, "Range start (%zu) is after range "
                                  "end (%zu).", status, npix0, npix );
                        break;
                     }

                     nval = orders[ order ].nval;
                     nbyte = ( nval + nadd )*sizeof( size_t );
                     values = astGrow( orders[ order ].values, 1, nbyte );
                     if( astOK ) {
                        for( ; npix0 <= npix; npix0++ ) {
                           values[ nval++ ] = npix0;
                        }

                        orders[ order ].values = values;
                        orders[ order ].nval = nval;
                     }

                     state = 1;

/* slash - the value previously recorded is an order value. Update the
   maximum order and then look for the start of the next numerical value. */
                  } else if( *pt == '/' ) {
                     order = npix;
                     if( order > AST__MXORDHPX ){
                        astError( AST__INMOC, "%s(%s): Error reading string MOC: '%.30s...'",
                                  status, method, astGetClass( this ), text );
                        astError( AST__INMOC, "Invalid MOC order %d encountrered.",
                                  status, order );
                        break;
                     }
                     if( order > mxord ) mxord = order;
                     state = 1;

/* dash - the value previously recorded is an npix value marking the
   start of a range. Remember the range start then look for the start
   of the next numerical value. */
                  } else if( *pt == '-' ) {
                     isrange = 1;
                     npix0 = npix;
                     state = 1;

                  } else {
                     astError( AST__INMOC, "%s(%s): Invalid string MOC supplied: '%.30s...'",
                               status, method, astGetClass( this ), text );
                     astError( AST__INMOC, "Illegal character at '%.15s'.",
                               status, pt );
                     break;
                  }

/* No other state value should be encountered. */
               } else {
                  astError( AST__INMOC, "%s(%s): Invalid string 'state' value "
                            "(%d) (internal AST programming error).", status,
                            method, astGetClass( this ), state );
                  break;
               }
            }

/* Advance to look at the next character in the text string. */
            pt++;
         }

/* Use the source function to get a pointer to a null-terminated string
   holding the next set of characters to read. NULL is returned if there
   are no more characters to read. */
         text = (*source)( data, &nc, status );
      }

/* Check no error has occurred. */
      if( astOK ) {

/* Report an error if no text was obtained. */
         if( state == 0 ) {
            astError( AST__INMOC, "%s(%s): Blank MOC text supplied.",
                      status, method, astGetClass( this ) );

/* Check JSON mocs are terminated properly. */
         } else if( *json ) {
            if( state != 9 && astOK ) {
               astError( AST__INMOC, "%s(%s): Invalid JSON MOC supplied: '%.30s...'",
                         status, method, astGetClass( this ), text );
               astError( AST__INMOC, "No closing curly brace found.", status );
            }

/* Incorporate any final numerical value in a string moc. The end of
   string is like a terminator (space or comma) in "state 2" for
   string mocs above. */
         } else if( state == 2 ) {
            if( order < 0 ) {
               astError( AST__INMOC, "%s(%s): Invalid string MOC supplied: '%.30s...'",
                         status, method, astGetClass( this ), text );
               astError( AST__INMOC, "No order value found at start of string.",
                         status );
            }

            if( !isrange ) {
               npix0 = npix;
               nadd = 1;
            } else {
               isrange = 0;
               nadd = npix - npix0 + 1;
            }

            nval = orders[ order ].nval;
            nbyte = ( nval + nadd )*sizeof( size_t );
            values = astGrow( orders[ order ].values, 1, nbyte );
            if( astOK ) {
               for( ; npix0 <= npix; npix0++ ) {
                  values[ nval++ ] = npix0;
               }

               orders[ order ].values = values;
               orders[ order ].nval = nval;
            }
         }

/* If the MaxOrder attribute is set in the Moc, use it in preference to
   the value supplied for parameter "maxorder". */
         if( astTestMaxOrder( this ) ) {
            maxorder = astGetMaxOrder( this );

/* Otherwise, we use the supplied "maxorder" value unless "maxorder" was
   not supplied (i.e. is negative), in which case we use the value
   determind above from the supplied text. */
         } else {
            if( maxorder < 0 ) {
               if( mxord < 0 && astOK ) {
                  astError( AST__INMOC, "%s(%s): Failed to read string MOC.",
                         status, method, astGetClass( this ) );
                  astError( AST__INMOC, "No order value found.", status );
               } else {
                  maxorder = mxord;
               }
            }
            astSetMaxOrder( this, maxorder );
         }

/* For each order and NPIX value found during the parsing of the text
   (except for any that have an order greater than 'maxorder', which are
   ignored), get the upper and lower bounds of the cells at maxorder
   contained within this cell, and append this as a new range to the Moc. */
         for( order = 0; order <= maxorder; order++ ) {
            nval = orders[ order ].nval;
            values = orders[ order ].values;
            shift = 2*( maxorder - order );

            for( ipix = 0; ipix < nval; ipix++,values++ ){

               ilow = ( *values << shift );
               ihigh = ( (*values + 1 ) << shift ) - 1;

               irange = this->nrange++;
               this->range = astGrow( this->range, this->nrange, 2*sizeof(*(this->range)) );
               if( astOK ) {
                  pr = this->range + 2*irange;
                  pr[ 0 ] = ilow;
                  pr[ 1 ] = ihigh;
               } else {
                  break;
               }
            }

/* Free the list of NPIX values at each order. */
            orders[ order ].values = astFree( orders[ order ].values );
         }

/* Free the list of NPIX values at any unused orders. */
         for( ; order <= AST__MXORDHPX; order++ ) {
            orders[ order ].values = astFree( orders[ order ].values );
         }
      }
   }
}

/*
*++
*  Name:
c     astAddPixelMask<X>
f     AST_ADDPIXELMASK<X>

*  Purpose:
*     Add a set of pixels to a Moc

*  Type:
*     Public function.

*  Synopsis:
c     #include "moc.h"
c     void astAddPixelMask<X>( AstMoc *this, int cmode, AstFrameSet *wcs,
c                              <Xtype> value, int oper, int flags,
c                              <Xtype> badval, const <Xtype> array[],
c                              const int dims[2] )
f     CALL AST_ADDPIXELMASK<X>( THIS, CMODE, WCS, VALUE, OPER, FLAGS,
f                               BADVAL, ARRAY, DIMS, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This is a set of functions that modifies a Moc by combining it
*     with a subset of the pixel positions contained within a supplied
*     2-dimensional array. A FrameSet must be supplied describing the World
*     Coordinate Systems associated with the array. The current Frame of
*     this FrameSet must be a SkyFrame or a CmpFrame containing a SkyFrame.
*
*     The subset of pixels to be combined with the Moc are selected using
c     the "value" and "oper"
f     the VALUE and OPER
*     parameters. The way in which the existing Moc and the selected pixels
*     are combined together is determined by the
c     "cmode" parameter.
f     CMODE parameter.
*
*     An adaptive alogorithm is used to find the HEALPix cells that are
*     inside the selected area in the pixel array. An initial grid,
*     corresponding to the HEALPix cells at the order given by the Moc's
*     "MinOrder" attribute, is placed over the pixel array. Each of these
*     cells is tested at 9 positions (corners, edge-centres and cell-centre).
*     If all 9 positions are inside the selected area of pixels, then the
*     whole cell is assumed to be inside. If no positions are inside the
*     selected area, then the whole cell is assumed to be outside. If there
*     is a mix of inside and outside positions, the cell is divided into
*     four sub-cells at HEALPix order "MinOrder+1", and the same test is
*     applied to each sub-cell in turn. When the HEALPix order reaches the
*     value of the Moc's "MaxOrder" attribute, each cell is tested only at
*     the cell centre, and is assumed to be inside the selected area if the
*     cell centre is inside the selected area.
*
*     This process means that contiguous "islands" or "holes" in the
*     supplied pixel mask may be missed if they are smaller than the cell
*     size associated with HEALPix order "MinOrder".
*
*     If no value has yet been set for the MaxOrder attribute, then this
*     function will automatically set it to the smallest value that results
*     in the cells in the Moc being no larger than half the size of the pixels
*     in the centre of the array. Note, if the value set for attribute
*     MinOrder is greater than or equal to MaxOrder, a value of
*     (MaxOrder-1) will be used in place of MinOrder.
*
*     You should use a function which matches the numerical type of the
*     data you are processing by replacing <X> in the generic function
*     name
c     astAddPixelMask<X>
f     AST_ADDPIXELMASK<X>
c     by an appropriate 1- or 2-character type code. For example, if you
*     are procesing data with type
c     "float", you should use the function astAddPixelMaskF
f     REAL, you should use the function AST_ADDPIXELMASKR
*     (see the "Data Type Codes" section below for the codes appropriate to
*     other numerical types).

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     cmode
f     CMODE = INTEGER (Given)
*        Indicates how the Moc and select pixels are to be combined. Any of the
*        following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the selected pixels.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the selected pixels.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the selected pixels.
c     wcs
f     WCS = AstFrameSet * (Given)
*        Pointer to a FrameSet defining the World Coordinate Systems
*        associated with the image. The current Frame should be a SkyFrame
*        or a CmpFrame containing a SkyFrame. The base Frame should have
*        the same number of axes as the current Frame and should represent
*        "grid" coordinates within a pixel array (i.e. the first pixel is
*        centred at (1.0,1.0,...) and the distance between pixel centres
*        is 1.0 on both axes).  The array supplied for parameter
c        "array"
f        ARRAY
*        is assumed to be a 2-dimensional slice from this array, spanned
*        by the grid axes corresponding to the SkyFrame axes.
c     value
f     VALUE = <Xtype> (Given)
*        A data value that specifies the selected pixels. See parameter
c        "oper".
f        OPER.
c     oper
f     OPER = INTEGER (Given)
*        Indicates how the
c        "value"
f        VALUE
*        parameter is used to select the required pixels. It can
*        have any of the following values:
c        - AST__LT: select pixels with value less than "value".
c        - AST__LE: select pixels with value less than or equal to "value".
c        - AST__EQ: select pixels with value equal to "value".
c        - AST__NE: select pixels with value not equal to "value".
c        - AST__GE: select pixels with value greater than or equal to "value".
c        - AST__GT: select pixels with value greater than "value".
f        - AST__LT: select pixels with value less than VALUE.
f        - AST__LE: select pixels with value less than or equal to VALUE.
f        - AST__EQ: select pixels with value equal to VALUE.
f        - AST__NE: select pixels with value not equal to VALUE.
f        - AST__GE: select pixels with value greater than or equal to VALUE.
f        - AST__GT: select pixels with value greater than VALUE.
c     flags
f     FLAGS = INTEGER (Given)
c        The bitwise OR of a set of flag values which may be used to
f        The sum of a set of flag values which may be used to
*        provide additional control over the operation. See
*        the "Control Flags" section below for a description of the
*        options available.  If no flag values are to be set, a value
*        of zero should be given.
c     badval
f     BADVAL = <Xtype> (Given)
*        This parameter should have the same type as the elements of
*        the data array. It specifies the value used to flag missing
*        data (bad pixels). Such pixels are never included in the Moc.
*
c        If the AST__USEBAD flag is set via the "flags" parameter,
f        If the AST__USEBAD flag is set via the FLAGS parameter,
*        then this value is used to test for bad pixels in the
*        supplied data array.
c     array
f     ARRAY( * ) = <Xtype> (Given)
c        Pointer to the
f        The
*        2-dimensional data array. The numerical type of this array should
*        match the 1- or 2-character type code appended to the function name
*        (e.g. if you are using
c        astAddPixelMaskF, the type of each array element should be "float").
f        AST_ADDPIXELMASKR, the type of each array element should be REAL).
*
*        The storage order of data within this array should be such that the
*        index of the first grid dimension varies most rapidly (i.e.
c        Fortran array indexing is used).
f        normal Fortran array storage order).
c     dims
f     DIMS( 2 ) = INTEGER (Given)
c        Pointer to an array
f        An array
*        containing the length of each pixel axis, in pixels.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Control Flags:
c     The following flags are defined in the "ast.h" header file and
f     The following flags are defined in the AST_PAR include file and
*     may be used to provide additional control over the process.
*     Having selected a set of flags, you should supply the
c     bitwise OR of their values via the "flags" parameter:
f     sum of their values via the FLAGS parameter:
*
*     - AST__USEBAD: Indicates that there may be bad pixels in the
*     input array which must be recognised by comparing with the
c     value given for "badval".
f     value given for BADVAL.
*     If this flag is not set, all input values are treated literally.

*  Data Type Codes:
*     To select the appropriate masking function, you should
c     replace <X> in the generic function name astAddPixelMask<X> with a
f     replace <X> in the generic function name AST_ADDPIXELMASK<X> with a
*     1- or 2-character data type code, so as to match the numerical
*     type <Xtype> of the data you are processing, as follows:
c     - D: double
c     - F: float
c     - L: long int
c     - UL: unsigned long int
c     - I: int
c     - UI: unsigned int
c     - S: short int
c     - US: unsigned short int
c     - B: byte (signed char)
c     - UB: unsigned byte (unsigned char)
f     - D: DOUBLE PRECISION
f     - R: REAL
f     - I: INTEGER
f     - UI: INTEGER (treated as unsigned)
f     - S: INTEGER*2 (short integer)
f     - US: INTEGER*2 (short integer, treated as unsigned)
f     - B: BYTE (treated as signed)
f     - UB: BYTE (treated as unsigned)
*
c     For example, astAddPixelMaskD would be used to process "double"
c     data, while astAddPixelMaskS would be used to process "short int"
c     data, etc.
f     For example, AST_ADDPIXELMASKD would be used to process DOUBLE
f     PRECISION data, while AST_ADDPIXELMASKS would be used to process
f     short integer data (stored in an INTEGER*2 array), etc.
f
f     For compatibility with other Starlink facilities, the codes W
f     and UW are provided as synonyms for S and US respectively (but
f     only in the Fortran interface to AST).

*  Handling of Huge Pixel Arrays:
*     If the input grid is so large that an integer pixel index,
*     (or a count of pixels) could exceed the largest value that can be
*     represented by a 4-byte integer, then the alternative "8-byte"
*     interface for this function should be used. This alternative interface
*     uses 8 byte integer arguments (instead of 4-byte) to hold pixel
*     indices and pixel counts. Specifically, the argument
c     "dims" is  changed from type "int" to type "int64_t" (defined in header file
c     stdint.h).
f     DIMS is changed from type INTEGER to type INTEGER*8.
*     The function name is changed by inserting the digit "8" before the
*     trailing data type code. Thus,
c     astAddPixelMask<X> becomes astAddPixelMask8<X>.
f     AST_ADDPIXELMASK<X> becomes AST_ADDPIXELMASK8<X>.

*--
*/

/* Define a macro to implement the function for a specific data type. */
#define MAKE_ADDPIXELMASK(X,Xtype,XtypeId) \
static void AddPixelMask##X( AstMoc *this, int cmode, AstFrameSet *wcs, \
                             Xtype value, int oper, int flags, \
                             Xtype badval, const Xtype array[], \
                             const AstDim dims[2], int *status ) { \
\
/* Local Variables: */ \
   AstCmpMap *array2proj;   /* Mapping for HEALPix grid coordinates */ \
   AstCmpMap *array2proj_min;/* Mapping for best HEALPix grid coordinates */ \
   AstCmpMap *tempmap;      /* Temporary Mapping pointer */ \
   AstDim *ilist;           /* Index array */ \
   AstDim *jlist;           /* Index array */ \
   AstDim *pi;              /* Pointer to next element in index array */ \
   AstDim *pj;              /* Pointer to next element in index array */ \
   AstDim glbnd_min[2];     /* Best lower bounds of region in grid coords */ \
   AstDim gubnd_min[2];     /* Best upper bounds of region in grid coords */ \
   AstDim hx;               /* Upper bound on 1st grid axis of selection box */ \
   AstDim hy;               /* Upper bound on 2ns grid axis of selection box */ \
   AstDim i;                /* Loop count */ \
   AstDim j;                /* Loop count */ \
   AstDim lx;               /* Lower bound on 1st grid axis of selection box */ \
   AstDim ly;               /* Lower bound on 2nd grid axis of selection box */ \
   AstDim ncell;            /* No. of cells in bounding box */ \
   AstDim npix;             /* Number of pixels in bounding box */ \
   AstDim npix_min;         /* Number of pixels in smallest bounding box */ \
   AstFrameSet *array2hpx12;/* Array grid coords -> HPX12 grid coords */ \
   AstFrameSet *fs;         /* Connects grid and sky using HPX projection */ \
   AstFrameSet *fsconv;     /* Conversion FrameSet */ \
   AstFrameSet *picked;     /* WCS FrameSet with 2-dimensional current Frame */ \
   AstMapping *maps[ AST__MXORDHPX + 1 ]; /* hpx->grid mappings for all orders */ \
   AstMapping *tempmap2;    /* Temporary Mapping */ \
   AstWinMap *incmap;       /* Mapping from grid coords at order N+1 to order N */ \
   AstXphMap *xphmap;       /* "iproj" grid coords -> HPX12 grid coords */ \
   CellList clist;          /* Staging area for list of cells in the Moc */ \
   PixelMask pixelmask;     /* Strucure defining the pixel mask */ \
   double delta;            /* Width of safety margin */ \
   double glbnd[2];         /* Lower bounds of region in grid coords */ \
   double gubnd[2];         /* Upper bounds of region in grid coords */ \
   double ina[2];           /* Bottom left corner of input box */ \
   double inb[2];           /* Top right corner of input box */ \
   double lbnd_in[ 2 ];     /* Grid coord bounds of selected array pixels */ \
   double outa[2];          /* Bottom left corner of output box */ \
   double outb[2];          /* Top right corner of output box */ \
   double pixarea;          /* Area of array pixel in square arc-sec */ \
   double res;              /* Mean pixel resolution in arc-sec */ \
   double ubnd_in[ 2 ];     /* Grid coord bounds of selected array pixels */ \
   int iax;                 /* Axis index */ \
   int iproj;               /* Identifier for type of HEALPix projection */ \
   int iproj_min;           /* Identifier for best type of HEALPix projection */ \
   int maxorder;            /* MOC order for final grid */ \
   int minorder;            /* MOC order for initial grid */ \
   int ok;                  /* At least one selected pixel? */ \
\
/* Check the global error status. */ \
   if ( !astOK ) return; \
\
/* Validate. */ \
   if( !astIsAFrameSet( wcs ) ) { \
      astError( AST__BDCLS, "astAddPixelMask"#X"(%s): A %s was supplied for " \
                "parameter 'wcs' but a FrameSet is required.", status,  \
                astGetClass(this), astGetClass(wcs) ); \
   } \
\
   if( dims[ 0 ] < 1 || dims[ 1 ] < 1 ) { \
      astError( AST__INVAR, "astAddPixelMask"#X"(%s): Invalid values (%" \
                AST__DIMFMT ",%" AST__DIMFMT ") supplied for parameter \
                'dims'.", status,  astGetClass(this), dims[ 0 ], dims[ 1 ] ); \
   } \
\
/* The current Frame of the supplied FrameSet must contain a SkyFrame  \
   (possibly plus other Frames).  Identify the sky axes in the FrameSet, \
   and create a FrameSet by picking the associated pixel axes from the  \
   base Frame axes. */ \
   picked = (AstFrameSet *) FindSkyAxes( (AstFrame *) wcs, "astAddPixelMask"#X, \
                                         status ); \
\
/* We proceed only if a SkyFrame was found. */ \
   if( picked ) { \
\
/* If the MaxOrder attribute has not been set, set it now to the smallest \
   value that gives cells that are no larger than half the pixel size at  \
   centre of the array (i.e 0.25 of the pixel area). */ \
      if( !astTestMaxOrder( this ) ) { \
         pixarea = GetPixelArea( picked, dims, status ); \
         res = sqrt( 0.25*pixarea ); \
         maxorder = ResToOrder( res ); \
         res = OrderToRes( maxorder ); \
         if( res*res > 0.25*pixarea ) maxorder++; \
         astSetMaxOrder( this, maxorder ); \
      } else { \
         maxorder = astGetMaxOrder( this ); \
      } \
\
/* Get the minimum order that defines the spacing of the initial grid. \
   Bounded holes within selected areas that are smaller than a cell of \
   this grid may be missed (i.e. "filled in"). */ \
   minorder = astGetMinOrder( this ); \
\
/* Ensure we do not start at a higher order than we can handle. */ \
   if( minorder >= maxorder ) minorder = maxorder - 1; \
   if( minorder < 0 && astOK ) { \
      astError( AST__INVAR, "astAddPixelMask"#X"(%s): Invalid value " \
                "(%d) supplied for parameter 'MinOrder'.", status,  \
                astGetClass(this), minorder ); \
   } \
\
/* Invert the WCS FrameSet for the picked (i.e. sky) axes, so that the \
   current Frame represents grid coords in the array and the base Frame \
   represents sky coords. */ \
      astInvert( picked ); \
\
/* Get the integer grid coordinate bounds of the region within the array \
   that contains the selected pixels. */ \
      if( oper == AST__LT ) { \
         ok = GetSelectionBoundsLT##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( oper == AST__LE ) { \
         ok = GetSelectionBoundsLE##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( oper == AST__EQ ) { \
         ok = GetSelectionBoundsEQ##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( oper == AST__NE ) { \
         ok = GetSelectionBoundsNE##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( oper == AST__GE ) { \
         ok = GetSelectionBoundsGE##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( oper == AST__GT ) { \
         ok = GetSelectionBoundsGT##X( value, array, dims, &lx, &hx, \
                                       &ly, &hy, status ); \
      } else if( astOK ){ \
         astError( AST__OPRIN, "astAddPixelMask"#X"(%s): Invalid operation " \
                   "code (%d) supplied (programming error).", status, \
                   astGetClass( this ), oper ); \
      } \
\
/* If no pixels are selected, the resulting Moc will be unchanged unless \
   "cmode" is AST__AND, in which case the resulting Moc will be empty. */ \
      if( !ok ) { \
         if( cmode == AST__AND ) { \
            this->nrange = 0; \
            this->range = astFree( this->range ); \
            ClearCache( this, status ); \
         } \
\
/* Otherwise, get a FrameSet describing a map of the whole sky using an \
   HPX12 projection, with the maximum MOC order. Invert it so that the base \
   frame represents ICRS and the current Frame represents HEALPix grid \
   coordinates. Each pixel in the grid corresponds to a HEALPix cell on \
   the sky. */ \
      } else { \
         fs = GetHPX12FrameSet( this, maxorder, status ); \
         astInvert( fs ); \
\
/* Get the Mapping from the array's grid coords to HPX12 grid coords at \
   maxorder. */ \
         fsconv = astConvert( picked, fs, "" ); \
         array2hpx12 = astGetMapping( fsconv, AST__BASE, AST__CURRENT ); \
         fsconv = astAnnul( fsconv ); \
         fs = astAnnul( fs ); \
\
/* We need to map the array into a HEALPix projection, of which there \
   are four: HPX centred on RA=0 (HPX0), HPX centred on RA=12h (HPX12), \
   XPH centred on the north pole (XPHN), XPH centred on the south pole \
   (XPHS). Problems arise if the array spans any of discontinuities in \
   the projection, so loop round all four projections and find the one \
   that maps the array onto the smallest box in HEALPix grid coords. */ \
         npix_min = 0; \
         iproj_min = -1; \
         array2proj_min = NULL; \
         for( iproj = 0; iproj <= AST__MXPRJHPX; iproj++ ) { \
\
/* Extend the array2hpx12 Mapping to get a Mapping from the array's grid \
   coords to grid coords in the current variant HPX projection. The \
   "xphmap" Mapping goes from grid coords in the projection given by \
   "iproj" into grid coords within an HPX12 projection. */ \
            xphmap = astXphMap( maxorder, iproj, " ", status ); \
            astInvert( xphmap ); \
            array2proj = astCmpMap( array2hpx12, xphmap, 1, "", status ); \
            xphmap = astAnnul( xphmap ); \
\
/* Use this Mapping to determine the bounding box of the selected pixels \
   within HEALPix grid coords in the projection given by "iproj" at \
   "maxorder. */ \
            lbnd_in[ 0 ] = lx - HALF; \
            ubnd_in[ 0 ] = hx + HALF; \
            lbnd_in[ 1 ] = ly - HALF; \
            ubnd_in[ 1 ] = hy + HALF; \
\
            for( iax = 0; iax < 2; iax++ ){ \
               astMapBox( array2proj, lbnd_in, ubnd_in, 1, iax, glbnd + iax, \
                          gubnd + iax, NULL, NULL ); \
            } \
\
/* Get the number of HEALPix cells in the bounding box. */ \
            npix = (AstDim)( ( gubnd[ 0 ] - glbnd[ 0 ] + 1 )* \
                             ( gubnd[ 1 ] - glbnd[ 1 ] + 1 ) ); \
\
/* If this is the smallest bounding box found so far, record its details, \
   increasing its size by 5% at each edge for safety. */ \
            if( iproj == 0 || npix < npix_min ) { \
               delta =  0.05*( gubnd[0] - glbnd[0] + 1 ); \
               glbnd_min[ 0 ] = (AstDim) ( glbnd[ 0 ] - delta ); \
               gubnd_min[ 0 ] = (AstDim) ( gubnd[ 0 ] + delta ); \
               delta =  0.05*( gubnd[1] - glbnd[1] + 1 ); \
               glbnd_min[ 1 ] = (AstDim) ( glbnd[ 1 ] - delta ); \
               gubnd_min[ 1 ] = (AstDim) ( gubnd[ 1 ] + delta ); \
               npix_min = npix; \
               iproj_min = iproj; \
               if( array2proj_min ) array2proj_min = astAnnul( array2proj_min ); \
               array2proj_min = astClone( array2proj ); \
            } \
\
/* Free resources. */ \
            array2proj = astAnnul( array2proj ); \
         } \
\
/* Report an error if the pixel mask could not be mapped into a \
   defined region using any of the available HPX-like projections. */ \
         if( !array2proj_min && astOK ) { \
            astError( AST__NODEF, "astAddPixelMask"#X"(%s): The supplied " \
                      "pixel array cannot be mapped to HEALPix coordinates.", \
                      status, astGetClass( this ) ); \
         } \
\
/* Store information defining the pixel mask in a structure so that it \
   can be passed easily to other functions. */ \
         pixelmask.data = array; \
         pixelmask.value = astStore( NULL, &value, sizeof(value) ); \
         if( flags & AST__USEBAD ) { \
            pixelmask.bad = astStore( NULL, &badval, sizeof(badval) ); \
         } else { \
            pixelmask.bad = NULL; \
         } \
         pixelmask.type = XtypeId; \
         pixelmask.nx = dims[ 0 ]; \
         pixelmask.ny = dims[ 1 ]; \
         pixelmask.oper = oper; \
\
         if( astOK ) { \
\
/* Generate Mappings for all required orders. Each of these Mappings goes \
   from grid coords in the HPX like projection at order N to grid coords \
   in the pixel array. The Mapping for order (N-1) is derived from the \
   Mapping for order N by dividing each grid cell at order (N-1) into four. \
   This is done by prepending a suitable WinMap to the start of the Mapping \
   for order N. The winmap maps the bottom left 2x2 box of pixels at order \
   N (0.5:2.5,0.5:2.5) onto the bottom left pixel at order (N-1) \
   (0.5:1.5,0.5:1.5). */ \
            ina[ 0 ] = 0.5; \
            ina[ 1 ] = 0.5; \
            inb[ 0 ] = 1.5; \
            inb[ 1 ] = 1.5; \
            outa[ 0 ] = 0.5; \
            outa[ 1 ] = 0.5; \
            outb[ 0 ] = 2.5; \
            outb[ 1 ] = 2.5; \
            incmap = astWinMap( 2, ina, inb, outa, outb, "", status ); \
            astInvert( array2proj_min ); \
            for( i = maxorder; i >= 0; i-- ) { \
               if( i < minorder ) { \
                  maps[ i ] = NULL; \
               } else { \
                  maps[ i ] = astSimplify( array2proj_min ); \
                  tempmap = astCmpMap( incmap, array2proj_min, \
                                               1, "", status ); \
                  (void) astAnnul( array2proj_min ); \
                  array2proj_min = tempmap; \
               } \
            } \
            incmap = astAnnul( incmap ); \
\
/* Get the Mapping from hpx-like grid coords at order maxorder to \
   hpx-like grid coords at order minorder. */ \
            astInvert( maps[minorder] ); \
            tempmap = astCmpMap( maps[maxorder], maps[minorder], 1, \
                                 " ", status ); \
            astInvert( maps[minorder] ); \
            tempmap2 = astSimplify( tempmap ); \
            tempmap = astAnnul( tempmap ); \
\
/* Use this Mapping to transform the bounding box from maxorder to \
   minorder. Add a one pixel safety margin. */ \
            ina[ 0 ] = glbnd_min[ 0 ]; \
            inb[ 0 ] = glbnd_min[ 1 ]; \
            ina[ 1 ] = gubnd_min[ 0 ]; \
            inb[ 1 ] = gubnd_min[ 1 ]; \
            astTran2( tempmap2, 2, ina, inb, 1, outa, outb ); \
            glbnd_min[ 0 ] = (AstDim)( outa[ 0 ] + 0.5 ) - 1; \
            glbnd_min[ 1 ] = (AstDim)( outb[ 0 ] + 0.5 ) - 1; \
            gubnd_min[ 0 ] = (AstDim)( outa[ 1 ] + 0.5 ) + 1; \
            gubnd_min[ 1 ] = (AstDim)( outb[ 1 ] + 0.5 ) + 1; \
            tempmap2 = astAnnul( tempmap2 ); \
\
/* Initialise a CellList structure holding the grid coords of the cells \
   to add into the Moc at each order. This also holds Mappings from \
   projection "iproj_min" to HPX12 at each order. */ \
            memset( &clist, 0, sizeof(clist) ); \
            clist.maxorder = maxorder; \
            for( i = minorder; i <= maxorder; i++ ) { \
               clist.maps[ i ] = astXphMap( i, iproj_min, " ", status ); \
            } \
\
/* Allocate memory to hold lists of cell indices. */ \
            ncell = ( gubnd_min[ 0 ] -  glbnd_min[ 0 ] + 1 )* \
                    ( gubnd_min[ 1 ] -  glbnd_min[ 1 ] + 1 ); \
            ilist = astCalloc( ncell, sizeof(*ilist) ); \
            jlist = astCalloc( ncell, sizeof(*jlist) ); \
\
/* Loop over all cells in the best bounding box and store the \
   corresponding indices in the above memory. */ \
            if( astOK ) { \
               pi = ilist; \
               pj = jlist; \
               for( j = glbnd_min[ 1 ]; j <= gubnd_min[ 1 ]; j++ ) { \
                  for( i = glbnd_min[ 0 ]; i <= gubnd_min[ 0 ]; i++ ) { \
                     *(pi++) = i; \
                     *(pj++) = j; \
                  } \
               } \
            } \
\
/* Add to the Moc any parts of the each of the above cells that are \
   within the selected areas. */ \
            PutCell( this, maps, ncell, ilist, jlist, minorder, &clist, 1, \
                     &pixelmask, cmode, NULL, "astAddPixelMask"#X, status ); \
\
/* Free the indices arrays */ \
            ilist = astFree( ilist ); \
            jlist = astFree( jlist ); \
         } \
\
/* Convert all the grid coords stored in "clist" into nested indices at \
   order "maxorder" and incorporate them into the current contents of the \
   Moc. */ \
         IncorporateCells( this, &clist, 0, cmode, "astAddPixelMask"#X, \
                           status ); \
\
/* Free resources. */ \
         for( i = minorder; i <= maxorder; i++ ) { \
            maps[ i ] = astAnnul( maps[ i ] ) ; \
            clist.ix[ i ] = astFree( clist.ix[ i ] ); \
            clist.iy[ i ] = astFree( clist.iy[ i ] ); \
            clist.maps[ i ] = astAnnul( clist.maps[ i ] ); \
         } \
         for( i = 0; i <= maxorder; i++ ) { \
            if( maps[ i ] ) maps[ i ] = astAnnul( maps[ i ] ) ; \
         } \
         pixelmask.value = astFree( pixelmask.value ); \
         pixelmask.bad = astFree( pixelmask.bad ); \
         array2hpx12 = astAnnul( array2hpx12 ); \
         array2proj_min = astAnnul( array2proj_min ); \
      } \
\
      picked = astAnnul( picked ); \
   } \
}

/* Expand the above macro to generate a function for each required
   data type. */
#if HAVE_LONG_DOUBLE     /* Not normally implemented */
MAKE_ADDPIXELMASK(LD,long double,LONG_DOUBLE)
#endif
MAKE_ADDPIXELMASK(D,double,DOUBLE)
MAKE_ADDPIXELMASK(L,long int,LONG_INT)
MAKE_ADDPIXELMASK(UL,unsigned long int,UNSIGNED_LONG_INT)
MAKE_ADDPIXELMASK(I,int,INT)
MAKE_ADDPIXELMASK(UI,unsigned int,UNSIGNED_INT)
MAKE_ADDPIXELMASK(S,short int,SHORT_INT)
MAKE_ADDPIXELMASK(US,unsigned short int,UNSIGNED_SHORT_INT)
MAKE_ADDPIXELMASK(B,signed char,SIGNED_CHAR)
MAKE_ADDPIXELMASK(UB,unsigned char,UNSIGNED_CHAR)
MAKE_ADDPIXELMASK(F,float,FLOAT)

/* Undefine the macro. */
#undef MAKE_ADDPIXELMASK



static void AddRegion( AstMoc *this, int cmode, AstRegion *region, int *status ){
/*
*++
*  Name:
c     astAddRegion
f     AST_ADDREGION

*  Purpose:
*     Add a Region into a Moc.

*  Type:
*     Public virtual function.


*  Synopsis:
c     #include "moc.h"
c     void astAddRegion( AstMoc *this, int cmode, AstRegion *region )
f     CALL AST_ADDREGION( THIS, CMODE, REGION, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function modifies a Moc by combining it with a supplied Region.
*     The Region must be defined within a SkyFrame, or within a CmpFrame that
*     contains a SkyFrame. The Region will be converted to ICRS before being
*     combined with the Moc. The way in which they are combined is determined
*     by the
c     "cmode" parameter.
f     CMODE parameter.
*
*     Note, since Moc is a subclass of Region this method can be used to add
*     a Moc into another Moc. In such cases, the data is transferred from
*     one Moc to another directly. For other classes of Region an adaptive
*     algorithm is used to find the HEALPix cells that are inside the Region.
*     An initial grid, corresponding to the HEALPix cells at the order given
*     by the Moc's "MinOrder" attribute, is placed over the bounding box of
*     the supplied Region. Each of these cells is tested at 9 positions
*     (corners, edge-centres and cell-centre). If all 9 positions are inside
*     the supplied Region, then the whole cell is assumed to be inside the
*     Region. If no positions are inside the supplied Region, then the whole
*     cell is assumed to be outside the Region. If there is a mix of inside
*     and outside positions, the cell is divided into four sub-cells at
*     HEALPix order "MinOrder+1", and the same test is applied to each
*     sub-cell in turn. When the HEALPix order reaches the value of the
*     Moc's "MaxOrder" attribute, each cell is tested only at the cell
*     centre, and is assumed to be inside the Region if the cell centre is
*     in the Region.
*
*     This process means that contiguous "islands" or "holes" in the
*     supplied region may be missed if they are smaller than the cell size
*     associated with HEALPix order "MinOrder".

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     cmode
f     CMODE = INTEGER (Given)
*        Indicates how the Moc and Region are to be combined. Any of the
*        following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the Region.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the Region.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the Region.
c     region
f     REGION = INTEGER (Given)
*        Pointer to the Region to be combined with the Moc.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*     - When combining the Region with the Moc, it is assumed that the Moc
*     has not been inverted (i.e. the current value of the Moc's 'Negated'
*     attribute is ignored).
*     - If no value has yet been set for attribute MaxOrder, then this
*     function will automatically set it to a value that depends on the
*     class of Region being added. If the Region being added is another
*     Moc, the MaxOrder attribute of the Moc is used. For other classes
*     of Region, the value used corresponds to the resolution closest to
*     0.1% of the linear size of the Region being added (determined using
*     method astGetRegionDisc).
*--
*/

/* Local Variables: */
   AstCmpMap *reg2proj;     /* Region coords -> "iproj" grid coords */
   AstCmpMap *tempmap;      /* Temporary Mapping pointer */
   AstDim *ilist;           /* Index array */
   AstDim *jlist;           /* Index array */
   AstDim *pi;              /* Pointer to next element in index array */
   AstDim *pj;              /* Pointer to next element in index array */
   AstDim glbnd_min[2];     /* Best lower bounds of region in grid coords */
   AstDim gubnd_min[2];     /* Best upper bounds of region in grid coords */
   AstDim i;                /* Loop counter */
   AstDim j;                /* Loop counter */
   AstDim ncell;            /* No. of cells in bounding box */
   AstFrame *gridframe;     /* Pointer to a Frame describing grid coords */
   AstFrame *picked_frame;  /* Frame in which picked Region is defined */
   AstFrameSet *fs;         /* Connects grid and sky using HPX projection */
   AstFrameSet *fsconv;     /* Conversion FrameSet */
   AstFrameSet *reg2hpx12;  /* Connects Region coords and HPX12 grid coords */
   AstMapping *hpx2region;  /* HEALPix grid coordinates -> mapped region */
   AstMapping *maps[ AST__MXORDHPX + 1 ]; /* hpx->grid mappings for all orders */
   AstMapping *tempmap2;    /* Temporary Mapping pointer */
   AstMoc *that;            /* The Moc being added to "this" */
   AstRegion *mapped;       /* Region Mapped into HEALPix grid coordinates */
   AstRegion *mapped_min;   /* Region Mapped into best HEALPix grid coordinates */
   AstRegion *picked;       /* Region spanning just sky axes */
   AstWinMap *incmap;       /* Mapping from grid coords at order N+1 to order N */
   AstXphMap *xphmap;       /* "iproj" grid coords -> HPX12 grid coords */
   CellList clist;          /* Staging area for list of cells in the Moc */
   double centre[2];        /* Centre of bounding disc */
   double delta;            /* Width of safety margin */
   double glbnd[2];         /* Lower bounds of region in grid coords */
   double gubnd[2];         /* Upper bounds of region in grid coords */
   double ina[2];           /* Bottom left corner of input box */
   double inb[2];           /* Top right corner of input box */
   double outa[2];          /* Bottom left corner of output box */
   double outb[2];          /* Top right corner of output box */
   double radius;           /* Radius of bounding disc */
   int iproj;               /* Identifier for type of HEALPix projection */
   int iproj_min;           /* Identifier for best type of HEALPix projection */
   int irange;              /* Index of range in "that" */
   int maxorder;            /* Maximum HEALPix order */
   int minorder;            /* Minimum HEALPix order */
   int negated;             /* Is the Region negated? */
   int nold;                /* Number of ranges originally in "this" */
   int shift;               /* No. of bits to shift from that_order to maxorder */
   int that_order;          /* Order of Moc being added to "this" */
   int64_t *pr2;            /* Point to next range in "this" */
   int64_t *pr;             /* Point to next range in "that" */
   int64_t ihigh;           /* High bound of range at maxorder */
   int64_t ilow;            /* Low bound of range at maxorder */
   size_t npix;             /* Number of pixels in bounding box */
   size_t npix_min;         /* Number of pixels in smallest bounding box */

/* Check inherited status */
   if( !astOK ) return;

/* First handle cases where a Moc is being added. */
   if( astIsAMoc( region ) ) {

/* Get a pointer to the Moc being added. */
      that = (AstMoc *) region;

/* If the Moc being added ("that") is empty then the resulting Moc will be
   unchanged unless "cmode" is AST__AND, in which case the resulting Moc
   will be empty. */
      if( that->nrange == 0 ) {
         if( cmode == AST__AND ) {
            this->nrange = 0;
            this->range = astFree( this->range );
            ClearCache( this, status );
         }

/* If "that" is not empty, append its cell ranges to "this". */
      } else {

/* Get the order of the Moc being added. */
         that_order = astGetMaxOrder( that );

/* Get the HEALPix order of the Moc being modified. Set it to the MaxOrder
   value of the Moc being added if it has not already been set. */
         if( astTestMaxOrder( this ) ){
            maxorder = astGetMaxOrder( this );
         } else {
            maxorder = that_order;
            astSetMaxOrder( this, that_order );
         }

/* Record the original number of ranges in "this". */
         nold = this->nrange;

/* Append each cell range in "that" to the end of the array of cell
   ranges in "this", converting them to MaxOrder first. */
         shift = 2*( maxorder - that_order );
         pr = that->range;
         for( irange = 0; irange < that->nrange; irange++, pr += 2 ) {

/* Convert the bounds of the curent range from "that_order" to
   "maxorder". */
            if( shift > 0 ) {
               ilow = ( pr[ 0 ] << shift );
               ihigh = ( ( pr[ 1 ] + 1 ) << shift ) - 1;
            } else {
               ilow = ( pr[ 0 ] >> -shift );
               ihigh = ( pr[ 1 ] >> -shift );
            }

/* Append it to the end of the array of ranges in "this". */
            this->range = astGrow( this->range, this->nrange + 1, 2*sizeof(*(this->range)) );
            if( astOK ) {
               pr2 = this->range +2*(this->nrange++);
               pr2[ 0 ] = ilow;
               pr2[ 1 ] = ihigh;
            } else {
               break;
            }
         }

/* Normalise the Moc. */
         astMocNorm( this, astGetNegated( that ), cmode, nold, maxorder,
                     "astAddRegion" );
      }

/* Mow handle cases where the Region being added is not a Moc. */
   } else {

/* The supplied Region must contain a SkyFrame (possibly plus other
   Frames).  Identify the sky axes in the Region and attempt to create
   a new Region containing just the sky axes. */
      picked = (AstRegion *) FindSkyAxes( (AstFrame *) region, "astAddRegion",
                                          status );

/* We proceed only if a SkyFrame was found. */
      if( picked ) {

/* Record the Nagated flag for the Region then set it false. */
         negated = astGetNegated( picked );
         astClearNegated( picked );

/* Get the maximum HEALPix order. This defines the finest resolution of
   the resulting MOC. Set it to 0.1 % of the diameter of the Region if it
   has not already been set. */
         if( astTestMaxOrder( this ) ){
            maxorder = astGetMaxOrder( this );
         } else {
            astGetRegionDisc( picked, centre, &radius );
            maxorder = ResToOrder( 0.001*radius*AST__DR2D*3600.0 );
            astSetMaxOrder( this, maxorder );
         }

/* Get the minimum order that defines the spacing of the initial grid.
   Bounded holes within selected areas that are smaller than a cell of
   this grid may be missed (i.e. "filled in"). */
         minorder = astGetMinOrder( this );

/* Ensure we do not start at a higher order than we can handle. */
         if( minorder >= maxorder ) minorder = maxorder - 1;

/* Get a pointer to the Frame in which the Region is defined. We use this
   with astConvert below, rather than the original Region, so that the
   FrameSet returned by astConvert will not include the masking effects of
   the Region. */
         picked_frame = astRegFrame( picked );

/* Get a FrameSet describing a map of the whole sky in ICRS using an
   HPX12 projection, with the maximum MOC order. Invert it so that the
   base frame represents ICRS and the current Frame represents HPX12 grid
   coordinates. Each pixel in the grid corresponds to a HEALPix cell on
   the sky (order "maxorder"). We use an HPX12 projection rather than
   HPX0 because the grid indices in an HPX12 projection are more easily
   converted to a HEALPix nested index (one less shift on each axis). */
         fs = GetHPX12FrameSet( this, maxorder, status );
         gridframe = astGetFrame( fs, AST__BASE );
         astInvert( fs );

/* Get the Mapping from the Region's coords to HPX12 grid coords at
   "maxorder". */
         fsconv = astConvert( picked_frame, fs, "" );
         reg2hpx12 = astGetMapping( fsconv, AST__BASE, AST__CURRENT );
         fsconv = astAnnul( fsconv );
         fs = astAnnul( fs );

/* We need to map the region into a HEALPix projection, of which there
   are four variants: HPX centred on RA=0, HPX centred on RA=12h, XPH
   centred on the north pole, XPH centred on the south pole. Problems
   arise if the region spans any of discontinuities in the projection, so
   loop round all four projections and find the one that maps the region
   onto the smallest box in grid coords. */
         npix_min = 0;
         iproj_min = -1;
         mapped_min = NULL;
         for( iproj = 0; iproj <= AST__MXPRJHPX; iproj++ ) {

/* Extend the reg2hpx12 Mapping to get a Mapping from the region's
   coords to grid coords in the current variant HPX projection. The
   "xphmap" Mapping goes from grid coords in the projection given by
   "iproj" into grid coords within an HPX12 projection so invert it
   before using it. */
            xphmap = astXphMap( maxorder, iproj, " ", status );
            astInvert( xphmap );
            reg2proj = astCmpMap( reg2hpx12, xphmap, 1, "", status );
            xphmap = astAnnul( xphmap );

/* Use this FrameSet to map the picked region into grid coords within the
   projection specified by "iproj". If the Region is undefined in the
   current projection, annull the error so that we can skip to the
   next projection. */
            if( astOK ) {
               int rep = astReporting( 0 );
               mapped = astMapRegion( picked, reg2proj, gridframe );
               if( astStatus == AST__NODEF ) astClearStatus;
               astReporting( rep );
            } else {
               mapped = 0;
            }

/* Find the bounds of the Region in grid coords. Get the number of pixels
   in the bounding box. */
            if( mapped ) {
               astGetRegionBounds( mapped, glbnd, gubnd );
               npix = (int)( ( gubnd[0] - glbnd[0] + 1 )*( gubnd[1] - glbnd[1] + 1 ) );

/* If this is the smallest bounding box found so far, record its details,
   increasing its size by 5% at each edge for safety. */
               if( iproj == 0 || npix < npix_min ) {
                  delta =  0.05*( gubnd[0] - glbnd[0] + 1 );
                  glbnd_min[ 0 ] = (AstDim) ( glbnd[ 0 ] + HALF - delta );
                  gubnd_min[ 0 ] = (AstDim) ( gubnd[ 0 ] + HALF + delta );
                  delta =  0.05*( gubnd[1] - glbnd[1] + 1 );
                  glbnd_min[ 1 ] = (AstDim) ( glbnd[ 1 ] + HALF - delta );
                  gubnd_min[ 1 ] = (AstDim) ( gubnd[ 1 ] + HALF + delta );
                  npix_min = npix;
                  iproj_min = iproj;
                  if( mapped_min ) mapped_min = astAnnul( mapped_min );
                  mapped_min = astClone( mapped );
               }

/* Free resources. */
               mapped = astAnnul( mapped );
            }
            reg2proj = astAnnul( reg2proj );
         }

/* Report an error if the supplied Region could not be mapped into a
   defined region using any of the available HPX-like projections. */
         if( !mapped_min && astOK ) {
            astError( AST__NODEF, "astAddRegion(%s): The supplied %s cannot "
                      "be mapped to HEALPix coordinates.", status,
                      astGetClass( this ), astGetClass( region ) );
         }

/* Generate Mappings for all required orders. Each of these Mappings goes
   from grid coords in the HPX like projection at order N to grid coords
   in the pixel array. The Mapping for order (N-1) is derived from the
   Mapping for order N by dividing each grid cell at order (N-1) into four.
   This is done by prepending a suitable WinMap to the start of the Mapping
   for order N. The winmap maps the bottom left 2x2 box of pixels at order
   N (0.5:2.5,0.5:2.5) onto the bottom left pixel at order (N-1)
   (0.5:1.5,0.5:1.5). */
         ina[ 0 ] = 0.5;
         ina[ 1 ] = 0.5;
         inb[ 0 ] = 1.5;
         inb[ 1 ] = 1.5;
         outa[ 0 ] = 0.5;
         outa[ 1 ] = 0.5;
         outb[ 0 ] = 2.5;
         outb[ 1 ] = 2.5;
         incmap = astWinMap( 2, ina, inb, outa, outb, "", status );
         hpx2region = (AstMapping *) astUnitMap( 2, "", status );
         for( i = maxorder; i >= 0; i-- ) {
            if( i < minorder ) {
               maps[ i ] = NULL;
            } else {
               maps[ i ] = astSimplify( hpx2region );
               tempmap = astCmpMap( incmap, hpx2region, 1, "", status );
               (void) astAnnul( hpx2region );
               hpx2region = (AstMapping *) tempmap;
            }
         }
         incmap = astAnnul( incmap );
         hpx2region = astAnnul( hpx2region );

/* Get the Mapping from hpx-like grid coords at order maxorder to
   hpx-like grid coords at order minorder. */
         astInvert( maps[minorder] );
         tempmap = astCmpMap( maps[maxorder], maps[minorder], 1, " ", status );
         astInvert( maps[minorder] );
         tempmap2 = astSimplify( tempmap );
         tempmap = astAnnul( tempmap );

/* Use this Mapping to transform the bounding box from maxorder to
   minorder. Add a one pixel safety margin. */
         ina[ 0 ] = glbnd_min[ 0 ];
         inb[ 0 ] = glbnd_min[ 1 ];
         ina[ 1 ] = gubnd_min[ 0 ];
         inb[ 1 ] = gubnd_min[ 1 ];
         astTran2( tempmap2, 2, ina, inb, 1, outa, outb );
         glbnd_min[ 0 ] = (AstDim)( outa[ 0 ] + 0.5 ) - 1;
         glbnd_min[ 1 ] = (AstDim)( outb[ 0 ] + 0.5 ) - 1;
         gubnd_min[ 0 ] = (AstDim)( outa[ 1 ] + 0.5 ) + 1;
         gubnd_min[ 1 ] = (AstDim)( outb[ 1 ] + 0.5 ) + 1;
         tempmap2 = astAnnul( tempmap2 );

/* Initialise a CellList structure holding the grid coords of the cells
   to add into the Moc at each order. This also holds Mappings from
   projection "iproj_min" to HPX12 at each order. */
         memset( &clist, 0, sizeof(clist) );
         clist.maxorder = maxorder;
         for( i = minorder; i <= maxorder; i++ ) {
            clist.maps[ i ] = astXphMap( i, iproj_min, " ", status );
         }

/* Allocate memory to hold lists of cell indices. */
         ncell = ( gubnd_min[ 0 ] -  glbnd_min[ 0 ] + 1 )*
                 ( gubnd_min[ 1 ] -  glbnd_min[ 1 ] + 1 );
         ilist = astCalloc( ncell, sizeof(*ilist) );
         jlist = astCalloc( ncell, sizeof(*jlist) );

/* Loop over all cells in the best bounding box and store the
   corresponding indices in the above memory. */
         if( astOK ) {
            pi = ilist;
            pj = jlist;
            for( j = glbnd_min[ 1 ]; j <= gubnd_min[ 1 ]; j++ ) {
               for( i = glbnd_min[ 0 ]; i <= gubnd_min[ 0 ]; i++ ) {
                  *(pi++) = i;
                  *(pj++) = j;
               }
            }
         }

/* Add to the Moc any parts of the each of the above cells that are
   within the selected areas. */
         PutCell( this, maps, ncell, ilist, jlist, minorder, &clist, 0,
                  mapped_min, cmode, NULL, "astAddRegion", status );

/* Free the indices arrays */
         ilist = astFree( ilist );
         jlist = astFree( jlist );

/* Convert all the grid coords stored in "clist" into nested indices at
   order "maxorder" and incorporate them into the current contents of the
   Moc. */
         IncorporateCells( this, &clist, negated, cmode, "astAddRegion", status );

/* Reinstate the original value of the Nagated flag for the Region. */
         astSetNegated( picked, negated );

/* Free resources. */
         for( i = minorder; i <= maxorder; i++ ) {
            maps[ i ] = astAnnul( maps[ i ] ) ;
            clist.ix[ i ] = astFree( clist.ix[ i ] );
            clist.iy[ i ] = astFree( clist.iy[ i ] );
            clist.maps[ i ] = astAnnul( clist.maps[ i ] );
         }
         picked = astAnnul( picked );
         mapped_min = astAnnul( mapped_min );
         picked_frame = astAnnul( picked_frame );
         reg2hpx12 = astAnnul( reg2hpx12 );
         gridframe = astAnnul( gridframe );
      }
   }
}

static void AppendChildren( AstMoc *this, Cell *cell, int order,
                            Cell **cell_foot, int *status ){
/*
*  Name:
*     AppendChildren

*  Purpose:
*     Create Cells for the direct children of a specified Cell.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void AppendChildren( AstMoc *this, Cell *cell, int order,
*                          Cell **cell_foot, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function creates Cell structures to describe the four direct
*     children of the supplied cell, and appends them to the chain of
*     linked Cells for order (order+1). If the parent cell is flagged as
*     an interior cell, then all the children are also flagged as interior.

*  Parameters:
*     this
*        The Moc.
*     cell
*        The Cell structure describing the cell to be subdivided.
*     order
*        The order of the cell to be subdivided.
*     cell_foot
*        Pointer to an array with (AST__MXORDHPX+1) elements, one for
*        each order. Ech element is a pointer to the last Cell structure
*        in a chain of linked structures holding information about the cells
*        at the corresponding order.
*     status
*        Pointer to inherited status.

*/

/* Local Variables: */
   Cell *new_cell;
   int gx0;
   int gy0;
   int ix;
   int iy;

/* Check inherited status */
   if( !astOK ) return;

/* Increment the order to get the order for the new child cells. */
   order++;

/* Get the grid coords in an HPX12 projection at the centre of the bottom
   left child cell at the new order. */
   gx0 = 2*cell->ix - 1;
   gy0 = 2*cell->iy - 1;

/* Loop over the four direct children of the supplied cell. */
   for( iy = 0; iy < 2; iy++ ) {
      for( ix = 0; ix < 2; ix++ ) {

/* Create the new Cell, appending it to the chain of Cells for the new
   order. */
         new_cell = MakeCell( gx0 + ix, gy0 + iy, order, cell_foot, status );

/* If the parent Cell is interior, the child cells are also interior. */
         new_cell->interior = cell->interior;
      }
   }
}

static void ClearAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     ClearAttrib

*  Purpose:
*     Clear an attribute value for a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void ClearAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     Moc member function (over-rides the astClearAttrib protected
*     method inherited from the Region class).

*  Description:
*     This function clears the value of a specified attribute for a
*     Moc, so that the default value will subsequently be used.

*  Parameters:
*     this
*        Pointer to the Moc.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstMoc *this;             /* Pointer to the Moc structure */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_object;

/* Check the attribute name and clear the appropriate attribute. */

/* MaxOrder and MaxRes. */
/* -------------------- */
   if ( !strcmp( attrib, "maxorder" ) || !strcmp( attrib, "maxres" ) ) {
      if( astTestMaxOrder( this ) ) {
         astError( AST__NOWRT, "astClear: Invalid attempt to clear the \"%s\" "
                   "value for a %s.", status, attrib, astGetClass( this ) );
         astError( AST__NOWRT, "The previously set value cannot be changed." ,
                   status);
      } else {
         astClearMaxOrder( this );
      }

/* MinOrder. */
/* --------- */
   } else if ( !strcmp( attrib, "minorder" ) ) {
      astClearMinOrder( this );

/* MinRes. */
/* ------- */
   } else if ( !strcmp( attrib, "minres" ) ) {
      astClearMinOrder( this );

/* If the name was not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then report an
   error. */
   } else if ( !strcmp( attrib, "moctype" ) ||
               !strcmp( attrib, "moclength" ) ||
               !strcmp( attrib, "mocarea" ) ){
      astError( AST__NOWRT, "astClear: Invalid attempt to clear the \"%s\" "
                "value for a %s.", status, attrib, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_clearattrib)( this_object, attrib, status );
   }
}

static void ClearCache( AstMoc *this, int *status ){
/*
*
*  Name:
*     ClearCache

*  Purpose:
*     Clear the cached values stored in a Moc structure.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void ClearCache( AstMoc *this, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     Clears the cached values stored in a Moc structure. It should be
*     called whenever anythiong modifies the region represented by the Moc.

*  Parameters:
*     this
*        The Moc.
*     status
*        Pointer to the inherited status variable.

*/

/* Check the global error status. */
   if ( !astOK ) return;

/* Delete the normalised form so that it is recalculated when it is
   next required. */
   this->inorm = astFree( this->inorm );
   this->knorm = astFree( this->knorm );

/* Delete the Moc's base mesh and the index of the base mesh that
   orders the mesh points around the perimeter. */
   if( this->basemesh ) this->basemesh = astAnnul( this->basemesh );
   this->meshdist = astFree( this->meshdist );
   this->mdlen = 0;

/* Indicate the bounding box needs to be recalculated. */
   this->lbnd[ 0 ] = AST__BAD;
   this->lbnd[ 1 ] = AST__BAD;
   this->ubnd[ 0 ] = AST__BAD;
   this->ubnd[ 1 ] = AST__BAD;

/* Indicate the Moc's area needs to be recalculated. */
   this->mocarea = AST__BAD;

/* The default uncertainty. */
   if( this->unc ) this->unc = astAnnul( this->unc );
}

static void ClearMaxOrder( AstMoc *this, int *status ){
/*
*
*  Name:
*     ClearMaxOrder

*  Purpose:
*     Clear the value for the MaxOrder attribute

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void ClearMaxOrder( AstMoc *this, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     Clears the value of the MaxPlot attribute.

*  Parameters:
*     this
*        The Moc.
*     status
*        Pointer to the inherited status variable.

*/

/* Check the global error status. */
   if ( !astOK ) return;

/* Clear the value */
   this->maxorder = -INT_MAX;

/* Clear cached items that depend on the max order value. */
   ClearCache( this, status );
}

static void CombineRanges( AstMoc *this, int cmode, const char *method,
                           int *status ){
/*
*  Name:
*     CombineRanges

*  Purpose:
*     Combine the ranges of nested indices currently stored in a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void CombineRanges( AstMoc *this, int cmode, const char *method,
*                         int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function combines the separate ranges of nested index stored
*     in a Moc, using the specified combination method.

*  Parameters:
*     this
*        Pointer to the Moc.
*     cmode
*        Indicates how the ranges are to be combined. Any of the following
*        values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the cell list.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the cell list.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the cell list.
*     method:
*        Name of calling method.
*     status
*        The inherited status.

*/

/* Local Variables: */
   EndPoint *list;
   EndPoint *plist;
   int depth;
   int ipoint;
   int irange;
   int isstart;
   int nnew;
   int npoint;
   int64_t *newranges;
   int64_t *pnew;
   int64_t *pcur;
   int64_t *pw;
   int64_t *pr;

/* Check inherited status */
   if( !astOK ) return;

/* Nothing to do if there are fewer than 2 ranges in the Moc. */
   if( this->nrange > 1 ) {

/* Create an array of structures, each holding the start or end value of
   a range, and a flag indicating if the value is the start or the end. */
      npoint = 2*this->nrange;
      list = astCalloc( npoint, sizeof( *list ) );
      if( astOK ) {
         plist = list;
         pnew = this->range;
         isstart = 1;
         for( ipoint = 0; ipoint < npoint; ipoint++,plist++,pnew++ ) {
            plist->value = *pnew;
            plist->start = isstart;
            isstart = ( isstart == 0 );
         }

/* Sort these structures into ascending value. */
         qsort( list, npoint, sizeof(*list), Comp_endpoint );

/* Allocate an initial array to hold the new list of merged ranges. This
   array will grow in size dynamically if required. */
         newranges = astCalloc( npoint, sizeof( *(this->range) ) );
      }

      if( astOK ) {

/* Initialise the number of input ranges that encompass the current
   value. */
         depth = 0;

/* Result is union of old and new */
/* ------------------------------ */
         if( cmode == AST__OR ){

/* The number of new ranges will never be greater than the number of original
   ranges, so we can safely use the initial newranges array without checking
   its size. Loop round each end-point in the sorted list. Maintain a depth
   indicating how many input ranges are active at each point. */
            nnew = 0;
            pnew = newranges;
            plist = list;
            for( ipoint = 0; ipoint < npoint; ipoint++,plist++ ) {

/* If this end-point is the start of one of the original ranges, and we
   are not currently inside a range, record the start of a new range.
   Increment the number of original ranges that include the current value. */
               if( plist->start ) {
                  if( !depth ) pnew[ 0 ] = plist->value;
                  depth++;

/* If this end-point is the end of one of the original ranges, decrement
   the number of original ranges that include the current value. If we
   are then no longer inside a range, record the end of a new range. */
               } else {
                  depth--;
                  if( !depth ) {
                     pnew[ 1 ] = plist->value;
                     nnew++;
                     pnew += 2;
                  } else if( depth < 0 ) {
                     astError( AST__INTER, "CombineRanges(%s): Negative "
                               "depth at end-point %zu (internal programming"
                               " error).", status, astGetClass(this),
                               plist->value );
                     break;
                  }
               }
            }

/* Result is intersection of old and new */
/* ------------------------------ */
         } else if( cmode == AST__AND ){

/* We cannot put a limit on how many ranges we shall end up with, so
   we grow the newranges array dynamically as required. Loop round
   each end-point in the sorted list. Maintain a depth indicating how many
   input ranges are active at each point. */
            nnew = 0;
            pnew = newranges;
            plist = list;
            for( ipoint = 0; ipoint < npoint; ipoint++,plist++ ) {

/* If this end-point is the start of one of the original ranges,
   increment the number of ranges that are active at the current value.
   Otherwise, decrement the number. */
               if( plist->start ) {
                  depth++;
               } else {
                  depth--;
               }

/* If the depth has risen to more than 2, report an error. */
               if( depth > 2 ) {
                  astError( AST__INTER, "CombineRanges(%s): More than 2 "
                            "active ranges at %zu (internal programming "
                            "error).", status, astGetClass(this), plist->value );
                  break;

/* If the depth has risen to 2, record the start of a new range. */
               } else if( depth == 2 ) {
                  newranges = astGrow( newranges, nnew + 1,
                                       2*sizeof( *newranges ) );
                  if( astOK ) {
                     pnew = newranges + 2*nnew;
                     pnew[ 0 ] = plist->value;
                     nnew++;
                  } else {
                     break;
                  }

/* If the depth has dropped to 1, record the end of the new range. */
               } else if( depth == 1 && !plist->start ){
                  pnew[ 1 ] = plist->value;

/* If the depth has become negative, report an error. */
               } else if( depth < 0 ) {
                  astError( AST__INTER, "CombineRanges(%s): Negative depth at "
                            "%zu (internal programming error).", status,
                            astGetClass(this), plist->value );
                  break;

/* Otherwise (depth has risen to 1 or dropped to 0), do nothing. */
               } else {
               }
            }

/* Result is exclusive disjunction of old and new */
/* ---------------------------------------------- */
         } else if( cmode == AST__XOR ){

/* We cannot put a limit on how many ranges we shall end up with, so
   we grow the newranges array dynamically as required. Loop round
   each end-point in the sorted list. Maintain a depth indicating how many
   input ranges are active at each point. */
            nnew = 0;
            pnew = newranges;
            plist = list;
            for( ipoint = 0; ipoint < npoint; ipoint++,plist++ ) {

/* If this end-point is the start of one of the original ranges,
   increment the number of ranges that are active at the current value.
   Otherwise, decrement the number. */
               if( plist->start ) {
                  depth++;
               } else {
                  depth--;
               }

/* If the depth has risen to more than 2, report an error. */
               if( depth > 2 ) {
                  astError( AST__INTER, "CombineRanges(%s): More than 2 "
                            "active ranges at %zu (internal programming "
                            "error).", status, astGetClass(this), plist->value );
                  break;

/* If the depth has risen to 2, end the current range. Ignore ranges that
   have negative length. */
               } else if( depth == 2 ) {
                  pnew[ 1 ] = plist->value - 1;
                  if( pnew[ 1 ] < pnew[ 0 ] ) nnew--;

/* If the depth has dropped or risen to 1, record the start of a new range. */
               } else if( depth == 1 ){
                  newranges = astGrow( newranges, nnew + 1,
                                       2*sizeof( *newranges ) );
                  if( astOK ) {
                     pnew = newranges + 2*nnew;
                     pnew[ 0 ] = plist->value;
                     if( !plist->start ) pnew[ 0 ]++;
                     nnew++;
                  } else {
                     break;
                  }

/* If the depth has become negative, report an error. */
               } else if( depth < 0 ) {
                  astError( AST__INTER, "CombineRanges(%s): Negative depth at "
                            "%zu (internal programming error).", status,
                            astGetClass(this), plist->value );
                  break;

/* Otherwise (depth has dropped to 0), end the current range. Ignore
   ranges that have negative length. */
               } else {
                  pnew[ 1 ] = plist->value;
                  if( pnew[ 1 ] < pnew[ 0 ] ) nnew--;
               }
            }

/* Unknown operation new */
/* --------------------- */
         } else if( astOK ){
            astError( AST__BDPAR, "%s(%s): Bad value (%d) suppied for "
                      "parameter 'cmode'.", status, method,
                      astGetClass(this), cmode );
         }

/* Report an error if the final depth is non-zero. */
         if( depth != 0 && astOK ) {
            astError( AST__INTER, "CombineRanges(%s): Un-balanced ranges - "
                      "final depth %d (internal programming error).", status,
                      astGetClass(this), depth );
         }
      }

/* Store the new ranges in the Moc. */
      if( astOK ) {
         (void) astFree( this->range );
         this->range = newranges;
         this->nrange =  nnew;
      }

/* Check the new ranges do not overlap and are not reversed. */
      if( astOK && this->nrange > 0 ) {
         pcur = this->range;
         if( pcur[ 1 ] < pcur[ 0 ] ) {
            astError( AST__INTER, "CombineRanges(%s): Range 0 [%zu:%zu]"
                      " - upper bound lower than lower bound (internal "
                      "programming error).", status, astGetClass(this),
                      pcur[ 0 ], pcur[ 1 ] );
         } else {
            pnew = this->range + 2;
            for( irange = 1; irange < this->nrange; irange++,pnew += 2 ) {
               if( pnew[ 1 ] < pnew[ 0 ] ) {
                  astError( AST__INTER, "CombineRanges(%s): Range %d [%zu:%zu]"
                            " - upper bound lower than lower bound (internal "
                            "programming error).", status, astGetClass(this),
                            irange, pnew[ 0 ], pnew[ 1 ] );
                  break;

               } else if( pcur[ 1 ] >= pnew[ 0 ] ) {
                  astError( AST__INTER, "CombineRanges(%s): Range %d [%zu:%zu]"
                            " overlaps range %d [%zu:%zu] (internal programming "
                            "error).", status, astGetClass(this), irange - 1,
                            pcur[ 0 ], pcur[ 1 ], irange, pnew[ 0 ], pnew[ 1 ] );
                  break;

/* Flag adjacent ranges to be merged. */
               } else if( pcur[ 1 ] == pnew[ 0 ] - 1 ) {
                  pcur[ 1 ] = INT64_MIN;
                  pnew[ 0 ] = INT64_MIN;
                  nnew--;
               }
               pcur = pnew;
            }

/* Merge any adjacent ranges. */
            if( nnew < this->nrange ) {
               npoint = 2*this->nrange;
               pr = this->range;
               pw = this->range;
               for( ipoint = 0; ipoint < npoint; ipoint++,pr++ ){
                  if( *pr != INT64_MIN ) *(pw++) = *pr;
               }
               this->nrange = nnew;
            }
         }
      }

/* Free resources */
      list = astFree( list );
   }

/* Clear the cached information stored in the Moc structure so that it is
   re-calculated when next needed. */
   ClearCache( this, status );
}

static int Comp_corner( const void *a, const void *b ){
/*
*  Name:
*     Comp_corner

*  Purpose:
*     A comparison function for use with the qsort function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int Comp_corner( const void *a, const void *b )

*  Class Membership:
*     Moc member function

*  Description:
*     This function compares two sky positions (held in two Corner
*     structures) and returns a value indicating which comes first.
*     Positions are sorted first by Dec and then by RA.
*
*     Values that are close to each other in Dec and RA are considered
*     to be co-incident. The tolerance in Dec is given by Comp_Corner_Tol.
*     The tolerance in RA depends on the value of Comp_Corner_Exact:
*        0 - The RA equivalent of the arc-distance given by Comp_Corner_Tol
*        1 - Zero tolerance (i.e. RA values must match exactly to be
*            considered co-incident).

*  Parameters:
*     a
*        Pointer to the address of the first Corner.
*     b
*        Pointer to the address of the second Corner.

*  Returned Value:
*     An integer less than, equal to, or greater than  zero if  the
*     first  parameter  is considered to be respectively less than,
*     equal to, or greater than the second.

*/
   astDECLARE_GLOBALS
   astGET_GLOBALS(NULL);
   double ratol;

   Corner *ac = *((Corner **) a);
   Corner *bc = *((Corner **) b);

   double ra1 = ac->ra;
   double dec1 = ac->dec;
   double ra2 = bc->ra;
   double dec2 = bc->dec;

/* If required, shift the RA values from [0,2.PI[ to [-PI,+PI[. */
   if( Comp_Corner_Loop != 0 ) {
      while( ra1 < -AST__DPI ) ra1 += 2*AST__DPI;
      while( ra2 < -AST__DPI ) ra2 += 2*AST__DPI;
      while( ra1 >= AST__DPI ) ra1 -= 2*AST__DPI;
      while( ra2 >= AST__DPI ) ra2 -= 2*AST__DPI;
   }

/* Get the tolerance to allow in RA. */
   if( Comp_Corner_Exact ) {
      ratol = 0.0;
   } else if( ac->cosdec > bc->cosdec ){
      ratol = Comp_Corner_Tol/ac->cosdec;
   } else {
      ratol = Comp_Corner_Tol/bc->cosdec;
   }

/* Compare Dec, then RA. Allow some tolerance on Dec so that the cells on
   a single HEALPix ring (constant Dec) get sorted by RA together. */
   if( fabs( dec1 - dec2 ) <= Comp_Corner_Tol ) {
      if( fabs( ra1 - ra2 ) <= ratol ) {
         return 0;
      } else if( ra1 < ra2 ) {
         return -1;
      } else {
         return 1;
      }
   } else if( dec1 < dec2 ) {
      return -1;
   } else {
      return 1;
   }
}

static int Comp_decra( const void *a, const void *b ){
/*
*  Name:
*     Comp_decra

*  Purpose:
*     A comparison function for use with the qsort function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int Comp_decra( const void *a, const void *b )

*  Class Membership:
*     Moc member function

*  Description:
*     This function compares two sky positions (held in two double
*     arrays) and returns a value indicating which comes first.
*     Positions are sorted first by Dec and then by RA.

*  Parameters:
*     a
*        Pointer to the integer index of the first position within
*        the arrays pointed to by Comp_Decra_Ptr1/2. (Ptr1 holds RA
*        values, Ptr2 holds Dec values).
*     b
*        Pointer to the index of the second position.

*  Returned Value:
*     An integer less than, equal to, or greater than  zero if  the
*     first  parameter  is considered to be respectively less than,
*     equal to, or greater than the second.

*/
   astDECLARE_GLOBALS
   astGET_GLOBALS(NULL);

/* Get the integer indices of the two points */
   int ia = *((int *) a);
   int ib = *((int *) b);

/* Get the RA and Dec of the two points */
   double ra1 = Comp_Decra_Ptr1[ ia ];
   double dec1 = Comp_Decra_Ptr2[ ia ];
   double ra2 = Comp_Decra_Ptr1[ ib ];
   double dec2 = Comp_Decra_Ptr2[ ib ];

/* Compare Dec, then RA. */
   if( dec1 == dec2 ) {
      if( ra1 == ra2 ) {
         return 0;
      } else if( ra1 < ra2 ) {
         return -1;
      } else {
         return 1;
      }
   } else if( dec1 < dec2 ) {
      return -1;
   } else {
      return 1;
   }
}

static int Comp_endpoint( const void *a, const void *b ){
/*
*  Name:
*     Comp_endpoint

*  Purpose:
*     A comparison function for use with the qsort function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int Comp_endpoint( const void *a, const void *b )

*  Class Membership:
*     Moc member function

*  Description:
*     This function compares two EndPoint structures and returns
*     a value indicating which has the larger value. If they are the
*     same, then the end point is considered larger than the start point.

*  Parameters:
*     a
*        Pointer to the first EndPoint.
*     b
*        Pointer to the second EndPoint.

*  Returned Value:
*     An integer less than, equal to, or greater than  zero if  the
*     first  parameter  is considered to be respectively less than,
*     equal to, or greater than the second.

*/
   if( ((EndPoint *) a)->value < ((EndPoint *) b)->value ) {
      return -1;
   } else if( ((EndPoint *) a)->value > ((EndPoint *) b)->value ) {
      return 1;
   } else if( ((EndPoint *) a)->start && !((EndPoint *) b)->start ) {
      return -1;
   } else if( !((EndPoint *) a)->start && ((EndPoint *) b)->start ) {
      return 1;
   } else {
      return 0;
   }
}

static int Comp_range( const void *a, const void *b ){
/*
*  Name:
*     Comp_range

*  Purpose:
*     A comparison function for use with the qsort function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int Comp_range( const void *a, const void *b )

*  Class Membership:
*     Moc member function

*  Description:
*     This function compares two Moc ranges and returns a
*     value indicating which has the larger lower bound. A
*     range is a pair of consecutive int64_t values, in the
*     order (lower bound, upper bound).

*  Parameters:
*     a
*        Pointer to the first range.
*     b
*        Pointer to the second range.

*  Returned Value:
*     An integer less than, equal to, or greater than  zero if  the
*     first  parameter  is considered to be respectively less than,
*     equal to, or greater than the second.

*/
   if( *(int64_t *) a < *(int64_t *) b ) {
      return -1;
   } else if( *(int64_t *) a > *(int64_t *) b ) {
      return 1;
   } else {
      return 0;
   }
}

static int Comp_int64( const void *a, const void *b ){
/*
*  Name:
*     Comp_int64

*  Purpose:
*     A comparison function for use with the qsort function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int Comp_int64( const void *a, const void *b )

*  Class Membership:
*     Moc member function

*  Description:
*     This function compares two signed 64 bit integers and returns a
*     value indicating which is larger.

*  Parameters:
*     a
*        Pointer to the first uint_64 value.
*     b
*        Pointer to the second uint_64 value.

*  Returned Value:
*     An integer less than, equal to, or greater than  zero if  the
*     first  parameter  is considered to be respectively less than,
*     equal to, or greater than the second.

*/
   if( *(int64_t *) a < *(int64_t *) b ) {
      return -1;
   } else if( *(int64_t *) a > *(int64_t *) b ) {
      return 1;
   } else {
      return 0;
   }
}

static int Equal( AstObject *this_object, AstObject *that_object, int *status ) {
/*
*  Name:
*     Equal

*  Purpose:
*     Test if two Objects are equivalent.

*  Type:
*     Private function.

*  Synopsis:
*     #include "object.h"
*     int Equal( AstObject *this_object, AstObject *that_object, int *status )

*  Class Membership:
*     Moc member function (over-rides the astEqual protected
*     method inherited from the Region class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     two Mocs are equivalent.

*  Parameters:
*     this
*        Pointer to the first Moc.
*     that
*        Pointer to the second Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the Mocs are equivalent, zero otherwise.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstMoc *that;
   AstMoc *this;
   int irange;
   int result;
   int64_t *p1;
   int64_t *p2;

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Invoke the Equal method inherited from the parent Region class. This checks
   that the Objects are both of the same class, and have the same Negated
   and Closed flags (amongst other things). */
   if( (*parent_equal)( this_object, that_object, status ) ) {

/* Obtain pointers to the two Moc structures. */
      this = (AstMoc *) this_object;
      that = (AstMoc *) that_object;

/* Test their MaxOrder values are equal. */
      if( astGetMaxOrder(this) == astGetMaxOrder(that) ) {

/* Test the ranges of cells included in both are equal. */
         if( this->nrange == that->nrange ) {
            result = 1;
            p1 = this->range;
            p2 = that->range;
            for( irange = 0; irange < this->nrange; irange++ ) {
               if( p1[ 0 ] != p2[ 0 ] ||
                   p1[ 1 ] != p2[ 1 ] ) {
                  result = 0;
                  break;
               }
               p1 += 2;
               p2 += 2;
            }
         }
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

static AstFrame *FindSkyAxes( AstFrame *frame, const char *method,
                              int *status ){
/*
*  Name:
*     FindSkyAxes

*  Purpose:
*     Extract the sky axes from a supplied Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     AstFrame *FindSkyAxes( AstFrame *frame, const char *method,
*                            int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function searches the supplied Frame for a SkyFrame. If found,
*     it creates a new Frame containing just the sky axes and returns a
*     pointer to the new Frame. If the supplied Frame is itself a SkyFrame,
*     then the returned pointer is just a clone of the supplied pointer.
*
*     The supplied Frame must be either a Region or a FrameSet. If it is
*     a Region, an error will be reported if the returned Frame is not
*     also a Region. If it is a FrameSet, the returned Frame will be a
*     FrameSet in which the current Frame is a SkyFrame, and the base Frame
*     holds the two corresponding axes from the supplied baseFrame. An
*     error will be reported if the sky axes do not correspond to a
*     distinct pair of axes in the supplied FrameSet.

*  Parameters:
*     frame
*        Pointer to the Frame - a Region with any number of axes, or a
*        FrameSet with a 2D base Frame (the current frame can have any
*        number of axes).
*     method
*        The name of the calling method.
*     status
*        Inherited status value.

*  Returned Value:
*     Pointer to the new Frame.

*/

/* Local Variables: */
   AstFrame *bfrm;
   AstFrame *check_frame;
   AstFrame *frm;
   AstFrame *result = NULL;
   AstMapping *map2;
   AstMapping *map;
   AstPermMap *pm;
   int *perm;
   int iax;
   int nax;
   int pax;
   int skyaxes[ 2 ];

/* Check the global error status. */
   if( !astOK ) return result;

/* Get the Frame to check for sky axes. */
   if( astIsARegion( frame ) ){
      check_frame = astRegFrame( frame );
   } else if( astIsAFrameSet( frame ) ){
      check_frame = astGetFrame( frame, AST__CURRENT );
   } else {
      check_frame = astClone( frame );
   }

/* Get the indices of the sky axes in the supplied Frame. */
   skyaxes[ 0 ] = -1;
   skyaxes[ 1 ] = -1;
   nax = astGetNaxes( check_frame );
   for( iax = 0; iax < nax; iax++ ) {
      astPrimaryFrame( check_frame, iax, &frm, &pax );
      if( astIsASkyFrame( frm ) ){
         if( pax == 0 ){
            skyaxes[ 0 ] = iax;
         } else {
            skyaxes[ 1 ] = iax;
         }
      }
      frm = astAnnul( frm );
   }
   check_frame = astAnnul( check_frame );

/* Report an error if a pair of skyaxes was not found. */
   if( skyaxes[ 0 ] == -1 || skyaxes[ 1 ] == -1 ) {
      if( astOK ) {
         astError( AST__NOSKY, "%s(Moc): The supplied %s does not contain "
                   "a pair of celestial coordinate axes.", status, method,
                   astGetClass(frame) );
      }

/* We proceed only if a SkyFrame was found. First deal with Regions. */
   } else if( astIsARegion( frame ) ){

/* The Region may also contain other axes in addition to the sky axes. So
   attempt to pick the sky axes from the Region. Report an error if this is
   not possible (as indicated by the returned object not being a Region). */
      result = astPickAxes( frame, 2, skyaxes, NULL );
      if( !astIsARegion( result ) && astOK ){
         astError( AST__BDSKY, "%s(Moc): The region of sky described by the "
                   "supplied %s cannot be determined.", status, method,
                   astGetClass(frame) );
      }

/* Now deal with FrameSets. */
   } else if( astIsAFrameSet( frame ) ){

/* The astMapSplit has no "invert" parameter and so can only pick inputs, not
   outputs. But we want to pick the sky axis outputs, so we need to invert
   the FrameSet before calling astMapSplit. */
      astInvert( frame );

/* Split the mapping in parallel to obtain a Mapping from the output sky
   axes to the corresponding two inputs. This may or may not be possible
   depending on the nature of the Mapping. */
      perm = astMapSplit( (AstMapping *) frame, 2, skyaxes, &map );

/* Re-invert the FrameSet to bring it back top its original state. */
      astInvert( frame );

/* Check if the above map split was successful. */
      if( map && astGetNout( map ) == 2 ) {

/* Create the returned FrameSet, and initialise it to hold a copy of the
   required two axes from the base Frame in the supplied FrameSet. */
         bfrm = astGetFrame( frame, AST__BASE );
         frm = astPickAxes( bfrm, 2, skyaxes, NULL );
         result = (AstFrame *) astFrameSet( frm, "", status );
         frm = astAnnul( frm );
         bfrm = astAnnul( bfrm );

/* Invert the Mapping returned by astMapSplit so that it goes from grid
   coords to sky coords. */
         astInvert( map );

/* Create PermMap that permutes the grid coords from the order used in
   the supplied FrameSet to the order expected for the inputs of "map".
   No need to do this if there is no actual change of axes. */
         if( perm[ 0 ] != 0 ) {
            pm = astPermMap( 2, perm, 2, perm, NULL, "", status );
            map2 = (AstMapping *) astCmpMap( pm, map, 1, "", status );
            pm = astAnnul( pm );
            astAnnul( map );
            map = map2;
         }
         perm = astFree( perm );

/* Get a Frame containing the sky axes picked from the supplied current
   Frame. The Frame will be a SkyFrame. Add it into the returned
   FrameSet, using the above Mapping to connect it to the base Frame. It
   becomes the new current Frame. */
         frm = astPickAxes( frame, 2, skyaxes, NULL );
         astAddFrame( result, AST__BASE, map, frm );
         frm = astAnnul( frm );
         map = astAnnul( map );

/* Report an error if the sky axes are not independent of the other axes. */
      } else if( astOK ) {
         astError( AST__BDSKY, "%s(Moc): The sky axes in the supplied WCS "
                   "FrameSet cannot be split from the other axes.", status,
                   method );
      }

/* Report an error for any other class of Frame. */
   } else if( astOK ) {
      astError( AST__BDCLS, "FindSkyAxes(Moc): A %s was supplied but a "
                "Region or FrameSet is required.", status,
                astGetClass( frame ) );
   }

/* Return the resulting Frame. */
   return result;
}

static const char *GetAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     GetAttrib

*  Purpose:
*     Get the value of a specified attribute for a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     const char *GetAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     Moc member function (over-rides the protected astGetAttrib
*     method inherited from the Region class).

*  Description:
*     This function returns a pointer to the value of a specified
*     attribute for a Moc, formatted as a character string.

*  Parameters:
*     this
*        Pointer to the Moc.
*     attrib
*        Pointer to a null-terminated string containing the name of
*        the attribute whose value is required. This name should be in
*        lower case, with all white space removed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     - Pointer to a null-terminated string containing the attribute
*     value.

*  Notes:
*     - The returned string pointer may point at memory allocated
*     within the Moc, or at static memory. The contents of the
*     string may be over-written or the pointer may become invalid
*     following a further invocation of the same function or any
*     modification of the Moc. A copy of the string should
*     therefore be made if necessary.
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstMoc *this;                 /* Pointer to the Moc structure */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   const char *result;           /* Pointer value to return */
   double dval;                  /* Floating point attribute value */
   int ival;                     /* Integer attribute value */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(this_object);

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_object;

/* Compare "attrib" with each recognised attribute name in turn,
   obtaining the value of the required attribute. If necessary, write
   the value into "getattrib_buff" as a null-terminated string in an appropriate
   format.  Set "result" to point at the result string. */

/* MaxOrder. */
/* --------- */
   if ( !strcmp( attrib, "maxorder" ) ) {
      ival = astGetMaxOrder( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* MaxRes. */
/* ------- */
   } else if ( !strcmp( attrib, "maxres" ) ) {
      if( !astTestMaxOrder( this ) ) {
         dval = 0.0;
      } else {
         ival = astGetMaxOrder( this );
         dval = OrderToRes( ival );
      }
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* MinOrder. */
/* --------- */
   } else if ( !strcmp( attrib, "minorder" ) ) {
      ival = astGetMinOrder( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* MinRes. */
/* ------- */
   } else if ( !strcmp( attrib, "minres" ) ) {
      ival = astGetMinOrder( this );
      dval = OrderToRes( ival );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* MocArea. */
/* -------- */
   } else if ( !strcmp( attrib, "mocarea" ) ) {
      dval = astGetMocArea( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* MocType. */
/* -------- */
   } else if ( !strcmp( attrib, "moctype" ) ) {
      ival = astGetMocType( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* MocLength. */
/* ---------- */
   } else if ( !strcmp( attrib, "moclength" ) ) {
      ival = astGetMocLength( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* If the attribute name was not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_getattrib)( this_object, attrib, status );
   }

/* Return the result. */
   return result;

}

static AstMapping *GetCachedMapping( AstMoc *this, int order,
                                     const char *method, int *status ){
/*
*  Name:
*     GetCachedMapping

*  Purpose:
*     Get a Mapping from ICRS to HPX12 grid coords.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     AstMapping *GetCachedMapping( AstMoc *this, int order,
*                                   const char *method, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns a Mapping that goes from ICRS to grid
*     coordinates within an all-sky HPX12 projection.

*  Parameters:
*     this
*        The Moc.
*     order
*        The required HEALPix order.
*     method
*        A string holding the name of the calling methid. Used in error
*        messages.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Mapping. This is a direct copy of the cached pointer, so it
*     should not be annulled by the calling function when no longer needed.

*/

/* Local Variables: */
   AstFrameSet *fs;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* If the cache does not contain a Mapping for the requested order,
   create one now. */
   if( !this->cached_maps[ order ] ) {

/* Get a FrameSet describing a map of the whole sky in ICRS using an
   HPX12 projection, with the maximum MOC order. The current frame
   represents ICRS and the base Frame represents HPX12 grid coordinates.
   Each pixel in the grid corresponds to a HEALPix cell on the sky. */
      fs = GetHPX12FrameSet( this, order, status );

/* Get the Mapping and store the cache. */
      this->cached_maps[ order ] = astGetMapping( fs, AST__CURRENT,
                                                  AST__BASE );
/* Free resources */
      fs = astAnnul( fs );
   }

/* Return the cached Mapping. */
   return this->cached_maps[ order ];
}

static void GetCell( AstMoc *this, int icell, int *order, int64_t *npix,
                     int *status ) {
/*
*++
*  Name:
c     astGetCell
f     AST_GETCELL

*  Purpose:
*     Identify the next cell in a normalised Moc.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     void astGetCell( AstMoc *this, int icell, int *order, int64_t *npix )
f     CALL AST_GETCELL( THIS, ICELL, ORDER, NPIX, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function returns the order and "npix" value for the cell at a
*     specified index in the normalised Moc. See the MOC recommendation
*     for more information about "npix" values and MOC normalisation.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     icell
f     ICELL = INTEGER (Given)
*        The index of the cell for which information is required. The
*        first cell has index
c        zero.
f        one.
*        An error will be reported if the supplied value is greater than
c        or equal to
*        the value of the MocLength attribute.
c     order
f     ORDER = INTEGER (Returned)
*        Returned holding the HEALPix order of the cell at the requested
*        index.
c     npix
f     NPIX = INTEGER*8 (Returned)
*        Returned holding the "npix" value of the cell at the requested
*        index.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*--
*/

/* Local Variables: */
   int moclen;

/* Check the global error status. */
   if ( !astOK ) return;

/* Ensure we have the normalised form available in the Moc structure. */
   GetNorm( this, "astGetCell", status );

/* Validate. */
   moclen = astGetMocLength( this );
   if( icell < 0 ) {
      astError( AST__INVAR, "astGetCell(%s): Invalid value (%d "
                "zero-based) supplied for parameter 'icell' - "
                "must be greater than or equal to zero.", status,
                astGetClass( this ), icell );

   } else if( icell >= moclen ) {
      astError( AST__INVAR, "astGetCell(%s): Invalid value (%d "
                "zero-based) supplied for parameter 'icell' - "
                "must be less than %d.", status, astGetClass( this ),
                 icell, moclen );

/* Decode the nuniq value to get the order and npix, using a fast log2
   function. */
   } else {
      if( this->inorm ) {
         *order = log2_32( (this->inorm)[ icell ] / 4 ) / 2;
         *npix = (this->inorm)[ icell ] - ( 1 << (2 + 2*(*order)) );
      } else {
         *order = log2_64( (this->knorm)[ icell ] / 4 ) / 2;
         *npix = (this->knorm)[ icell ] - ( ONE << (2 + 2*(*order)) );
      }
   }
}

static AstRegion *GetDefUnc( AstRegion *this_region, int *status ) {
/*
*  Name:
*     GetDefUnc

*  Purpose:
*     Obtain a pointer to the default uncertainty Region for a mOC.

*  Type:
*     Private function.

*  Synopsis:
*     #include "region.h"
*     AstRegion *GetDefUnc( AstRegion *this, int *status )

*  Class Membership:
*     Moc member function (over-rides the astGetDefUnc protected
*     method inherited from the Region class).

*  Description:
*     This function returns a pointer to a Region which represents the
*     default uncertainty associated with a position on the boundary of the
*     given Moc. The returned Region refers to the base Frame within the
*     FrameSet encapsulated by the Moc (always ICRS).

*  Parameters:
*     this
*        Pointer to the Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the Region. This should be annulled (using astAnnul)
*     when no longer needed.

*  Notes:
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstFrame *bfrm;
   AstMoc *this;
   AstRegion *result;
   double centre[ 2 ];
   double res;

/* Initialise */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the Moc structure. */
   this = (AstMoc *) this_region;

/* If the default uncertainty Region is not available within the Moc
   structure, create it now. */
   if( !this->unc ) {

/* Get the resolution in rads. */
      res = AST__DD2R*OrderToRes( astGetMaxOrder( this ) )/3600.0;

/* Create a Circle centred at the origin of ICRS with a radius equal to
   the resolution. The base Frame of the FrameSet encapsulated by the
   parent Region structure will always be ICRS. */
      bfrm = astGetFrame( this_region->frameset, AST__BASE );
      centre[ 0 ] = 0.0;
      centre[ 1 ] = 0.0;
      this->unc = (AstRegion *) astCircle( bfrm, 1, centre, &res, NULL,
                                           " ", status );
      bfrm = astAnnul( bfrm );
   }

/* Return a pointer to the cached unertainty Region. */
   result = astClone( this->unc );

/* Return NULL if an error occurred. */
   if( !astOK ) result = astAnnul( result );

/* Return the required pointer. */
   return result;
}

static AstFrameSet *GetHPX12FrameSet( AstMoc *this, int order, int *status ){
/*
*  Name:
*     GetHPX12FrameSet

*  Purpose:
*     Get a WCS FrameSet for an all-sky HPX12 projection.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     AstFrameSet *GetHPX12FrameSet( AstMoc *this, int order, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns a FrameSet containing two Frames. The base
*     Frame represents grid coordinates in an all-sky HPX12 projection.
*     The current Frame represents ICRS.

*  Parameters:
*     this
*        The Moc.
*     order
*        The HEALPix order.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The WCS FrameSet.

*/

/* Local Variables: */
   AstCmpMap *map1;
   AstCmpMap *map2;
   AstCmpMap *map3;
   AstFrame *gf;
   AstFrameSet *result;
   AstMatrixMap *mm;
   AstShiftMap *sm1;
   AstShiftMap *sm2;
   AstSkyFrame *sf;
   AstWcsMap *wm;
   double m;
   double matrix[ 4 ];
   double shift[ 2 ];
   int nppf;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Get the number of pixels along one edge of a facet. */
   nppf = ( 1 << order );

/* A ShiftMap that puts the origin at the centre of the array. The array
   of values has dimensions (5*nppf,5*nppf). */
   shift[ 0 ] = -0.5*( 1.0 + 5*nppf );
   shift[ 1 ] = shift[ 0 ];
   sm1 = astShiftMap( 2, shift, " ", status );

/* A MatrixMap that converts grid coordinates into radians and rotates by
   45 degrees. */
   m = AST__DPI/( 4.0*nppf );
   matrix[ 0 ] = m;
   matrix[ 1 ] = m;
   matrix[ 2 ] = -m;
   matrix[ 3 ] = m;
   mm = astMatrixMap( 2, 2, 0, matrix, " ", status );

/* The HPX projection, with "LONPOLE" set to 180 degrees. This needs to
   be inverted so it goes from cartesian to spherical coords. Set the
   protected LonCheck attribute so that the projection is not clipped for
   longitude values outside the primary range. */
   wm = astWcsMap( 2, AST__HPX, 1, 2, "PV1_3=180", status );
   astSetLonCheck( wm, 0 );
   astInvert( wm );

/* A shiftmap to put the origin of native spherical coords at 12 hours. */
   shift[ 0 ] = AST__DPI;
   shift[ 1 ] = 0.0;
   sm2 = astShiftMap( 2, shift, " ", status );

/* Join them all together in series to get the mapping form grid coords
   to ICRS (lon,lat). */
   map1 = astCmpMap( sm1, mm, 1, " ", status );
   sm1 = astAnnul( sm1 );
   mm = astAnnul( mm );

   map2 = astCmpMap( map1, wm, 1, " ", status );
   map1 = astAnnul( map1 );
   wm = astAnnul( wm );

   map3 = astCmpMap( map2, sm2, 1, " ", status );
   map2 = astAnnul( map2 );
   sm2 = astAnnul( sm2 );

/* Create a basic 2D Frame to represent grid coords. */
   gf = astFrame( 2, "Domain=GRID", status );

/* Create a SkyFrame representing ICRS. */
   sf = astSkyFrame( "System=ICRS", status );

/* Create the required FrameSet, initially containing just the grid frame. */
   result = astFrameSet( gf, " ", status );
   gf = astAnnul( gf );

/* Add in the ICRS Frame. */
   astAddFrame( result, AST__BASE, map3, sf );
   map3 = astAnnul( map3 );
   sf = astAnnul( sf );

/* Return the FrameSet. */
   return result;
}

static void GetMocData( AstMoc *this, size_t mxsize, void *data, int *status ) {
/*
*++
*  Name:
c     astGetMocData
f     AST_GETMOCDATA

*  Purpose:
*     Get the FITS binary table data describing a Moc

*  Type:
*     Public function.

*  Synopsis:
c     #include "moc.h"
c     void astGetMocData( AstMoc *this, size_t mxsize, void *data )
f     CALL AST_GETMOCDATA( THIS, MXSIZE, DATA, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function retrieves the data values that form the FITS binary
*     table representation of the MOC and stores them in a supplied array.
*     Such a table contains a single scalar-valued column in which each
*     row holds a signed integer identifier for a single HEALPix cell,
*     following the scheme described in the MOC recommendation. Depending
*     on the order of the Moc, these integers may be 4 bytes or 8 bytes.
*
*     The number of rows in the table and the required integer data type
*     are available through the MocType and MocLength attributes of the
*     Moc class.
*
*     The FITS headers to store in the FITS binary table can be obtained
*     using function
c     astGetMocHeader.
f     AST_GETMOCHEADER.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     mxsize
f     MXSIZE = INTEGER (Given)
*        The length of the supplied array in bytes. An error will be reported
*        if this value is smaller than the number required to describe the
*        Moc (the product of the MocType and MocLength attributes).
c     data
f     DATA( * ) = BYTE (Returned)
c        Pointer to the
f        The
*        area of memory in which to return the signed integer cell
*        identifiers. This area is assumed to contain at least
c        "mxsize" bytes.
f        MXSIZE bytes.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*--
*/

/* Local Variables: */
   size_t nbyte;
   int moclen;
   int type;

/* Check the global error status. */
   if ( !astOK ) return;

/* Ensure we have the normalised form available in the Moc structure. */
   GetNorm( this, "astGetMocData", status );

/* Validate. */
   type = astGetMocType( this );
   moclen = astGetMocLength( this );
   nbyte = type*moclen;
   if( mxsize < nbyte && astOK ) {
      astError( AST__BADSIZ, "astGetMocData(%s): The supplied array "
                "has %zu bytes but %zu are required.", status,
                astGetClass(this), mxsize, nbyte );

/* Copy the data into the supplied array. */
   } else {
      if( this->inorm ) {
         memcpy( data, this->inorm, nbyte );
      } else {
         memcpy( data, this->knorm, nbyte );
      }
   }
}

static AstFitsChan *GetMocHeader( AstMoc *this, int *status ){
/*
*++
*  Name:
c     astGetMocHeader
f     AST_GETMOCHEADER

*  Purpose:
*     Get the FITS binary table headers describing a Moc

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     AstFitsCHan *astGetMocHeader( AstMoc *this )
f     RESULT = AST_GETMOCHEADER( THIS, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function returns a FitsChan holding the headers that should be
*     stored in a FITS binary table extension describing the supplied Moc.
*     The data values for the extension can be obtained using method
c     astGetMocData.
f     AST_GETMOCDATA.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*--
*/

/* Local Variables: */
   AstFitsChan *result;
   int maxorder;
   int type;
   int moclen;

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Create an empty FitsChan. */
   result = astFitsChan( NULL, NULL, "", status );

/* Get the Moc data type, length and highest order. */
   type = astGetMocType( this );
   moclen = astGetMocLength( this );
   maxorder = astGetMaxOrder( this );

/* Store the required values in it. */
   astSetFitsS( result, "XTENSION", "BINTABLE", "HEALPix Multi Order"
                " Coverage map", 1 );
   astSetFitsI( result, "BITPIX", 8, NULL, 1 );
   astSetFitsI( result, "NAXIS", 2, NULL, 1 );
   astSetFitsI( result, "NAXIS1", type, "Bytes per row", 1 );
   astSetFitsI( result, "NAXIS2", moclen, "No. of rows", 1 );
   astSetFitsI( result, "PCOUNT", 0, NULL, 1 );
   astSetFitsI( result, "GCOUNT", 1, NULL, 1 );
   astSetFitsI( result, "TFIELDS", 1, NULL, 1 );
   astSetFitsS( result, "TFORM1", (type==4)?"1J":"1K", NULL, 1 );
   astSetFitsS( result, "TTYPE1", "UNIQ", "HEALPix UNIQ pixel number", 1 );
   astSetFitsS( result, "PIXTYPE", "HEALPIX", "HEALPix magic code", 1 );
   astSetFitsS( result, "ORDERING", "NUNIQ", "NUNIQ coding method", 1 );
   astSetFitsS( result, "COORDSYS", "C", "ICRS coordinates", 1 );
   astSetFitsI( result, "MOCORDER", maxorder, "MOC resolution (best order)", 1 );

/* If an error occurred, annul the returned FitsChan. */
   if ( !astOK ) result = astAnnul( result );

/* Return the result. */
   return result;
}

static double GetMocArea( AstMoc *this, int *status ){
/*
*  Name:
*     GetMocArea

*  Purpose:
*     Get the value of the MocArea attribute.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     double GetMocArea( AstMoc *this, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the value of the MocArea attribute.

*  Parameters:
*     this
*        Pointer to the Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The MocArea value.

*/

/* Local Variables; */
   double res;
   int irange;
   int64_t *pr;
   int64_t count;

/* Check the global error status. */
   if ( !astOK ) return 0.0;

/* If the area of the moc has not yet been calculated, calculate it now. */
   if( this->mocarea == AST__BAD ) {

/* All cells in a MOC have equal area, so first Count the number of cells
   in the Moc. These are all at HEALPix order given by the MaxOrder
   attribute. The "this->range" array contains the lower and upper bounds
   of a set of contiguous ranges in nested index at order MaxOrder. */
      count = 0;
      pr = this->range;
      for( irange = 0; irange < this->nrange; irange++, pr += 2 ) { \

/* Increment count by the length of the current range of nested index. */
         count += ( pr[ 1 ] - pr[ 0 ] + 1 );
      }

/* Get the mean resolution of the MOC, in arc-mins. This is the square root
   of the cell area. */
      res = OrderToRes( astGetMaxOrder( this ) )/60.0;

/* Get the total area. */
      this->mocarea = res*res*count;
   }

/* Return the MocArea value. */
   return this->mocarea;
}

static int GetMocLength( AstMoc *this, int *status ){
/*
*  Name:
*     GetMocLength

*  Purpose:
*     Get the value of the MocLength attribute.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int GetMocLength( AstMoc *this, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the value of the MocLength attribute.

*  Parameters:
*     this
*        Pointer to the Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Moclength value.

*/


/* Check the global error status. */
   if ( !astOK ) return 0;

/* Ensure the the normalised form of the MOC is available. */
   GetNorm( this, "astGetMocLength", status );

/* Return the MocLength value. */
   return this->moclength;
}

static void GetMocString( AstMoc *this, int json, size_t mxsize, char *string,
                          size_t *size, int *status ){
/*
*++
*  Name:
c     astGetMocString
f     AST_GETMOCSTRING

*  Purpose:
*     Get the JSON or string-encoded representation of a Moc

*  Type:
*     Public function.

*  Synopsis:
c     #include "moc.h"
c     void astGetMocString( AstMoc *this, int json, size_t mxsize,
c                           char *string, size_t *size, int *status )
f     CALL AST_GETMOCSTRING( THIS, JSON, MXSIZE, STRING, SIZE, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function stores the JSON or string-encoded representation of
*     the supplied Moc in the supplied string buffer.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc.
c     json
f     JSON = LOGICAL (Given)
c        If non-zero,
f        If .TRUE.,
*        the Moc is encoded using JSON serialisation. Otherwise it is
*        encoded using string-serialisation.
c     mxsize
f     MXSIZE = INTEGER (Given)
*        The length of the supplied string buffer in bytes. An error will
*        be reported if this value is smaller than the number required to
*        describe the Moc. However, if zero is supplied, the buffer will
*        be ignored - no string will be returned but the required size of
*        the buffer will still be returned in
c        'size'.
f        SIZE.
c     string
f     STRING( * ) = BYTE (Returned)
c        Pointer to the
f        The
*        area of memory in which to return the JSON or string-encoded
*        representation of the Moc. This area is assumed to contain at least
c        'mxsize' bytes. Only used if 'mxsize' is greater than zero.
f        MXSIZE bytes. Only used if MXSIZE is greater than zero.
c        Note, the string is not null-terminated.
c     size
f     SIZE = INTEGER*8 (Returned)
*        Returned holding the number of bytes needed to store the complete
*        JSON or string-encoded representation of the Moc.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*--
*/

/* Local Variables: */
   SinkData data2;
   void *data;
   void (*sink)( void *, size_t, const char *, int * );
   size_t buflen;

/* Initialise */
   *size = 0;

/* Check the global error status. */
   if ( !astOK ) return;

/* If a buffer size of zero has been supplied, use a sink function that
   just accumulates the length of the strings. */
   if( mxsize == 0 ) {
      data = size;
      sink = Sink1;

/* Otherwise use a sink function that appends the strings to the supplied
   buffer. */
   } else {
      data2.string = string;
      data2.mxsize = mxsize;
      data = &data2;
      sink = Sink2;
   }

/* Do the work. The sink function is called to write out the buffer each
   time the buffer is filled. */
   buflen = ( mxsize > 0 ) ? mxsize : 80;
   astGetMocText( this, json, buflen, sink, data, "astGetMocString" );

/* Return the used size, if it is not already there. */
   if( mxsize > 0 ) *size = mxsize - data2.mxsize;
}

void astGetMocText_( AstMoc *this, int json, size_t buflen,
                     void (*sink)( void *, size_t, const char *, int * ),
                     void *data, const char *method, int *status ){
/*
*+
*  Name:
*     astGetMocText

*  Purpose:
*     Gets a JSON or string-encoded representation of the supplied Moc.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     void astGetMocText( AstMoc *this, int json, size_t buflen,
*                         void (*sink)( void *, size_t, const char *, int * ),
*                         void *data, const char *method, int *status )

*  Class Membership:
*     Moc method.

*  Description:
*     This function converts the supplied Moc to a text string using the
*     JSON or string serialisation described in the MOC recommendation.

*  Parameters:
*     this
*        Pointer to the Moc.
*     json
*        If non-zero, the Moc is encoded using JSON serialisation. Otherwise
*        it is encoded using string-serialisation.
*     buflen
*        The maximum number of characters sent to the sink function in each
*        call.
*     sink
*        A function to call to write out each section of the MOC's JSON or
*        string representation. It should have the following synopsis:
*
*        void sink( void *data, size_t bufsize, const char *buf, int *status )
*
*        The sink function should write out the first "bufsize" bytes
*        from "buf" to the appropriate external destination. The "data"
*        pointer can be used for any purpose. The text supplied to the
*        sink function in the buffer will not be null terminated. A NULL
*        pointer may be supplied, in which case the text will be written
*        out to standard output.
*     data
*        A pointer to an arbitrary structure to be passed to the sink
*        function. Can be NULL.
*     method
*        Method name to include in error messages.
*-
*/

/* Macro to write a number of characters from the buffer to the sink
   function or to standard output. */
#define STRING_WRITE(NC) \
   if( sink ) { \
      (*sink)( data, (NC), buf, status ); \
   } else { \
      printf( "%.*s\n", (int) (NC), buf ); \
   }

/* Macro to append a token to the buffer, flushing the buffer using the
   sink function if the buffer fills up. */
#define TOKEN_WRITE \
\
/* Copy characters from the token to the buffer until the whole token has \
   been copied or the end of the buffer is reached. */ \
   ptok = token; \
   mc = nc; \
   while( nleft > 0 && mc > 0 ) { \
      *(pwrite++) = *(ptok++); \
      nleft--; \
      mc--; \
   } \
\
/* If the end of the buffer was reached before the whole token had been \
   copied, find the last space or comma in the buffer. */ \
   if( nleft == 0 && mc > 0 ) { \
      pc = pwrite - 1; \
      while( pc >= buf && *pc != ' ' && *pc != ',' ) pc--; \
\
/* Write out the buffer up to and including the final space or comma. */ \
      if( pc >= buf ) { \
         STRING_WRITE( pc - buf + 1 ); \
\
/* Copy any remaining characters following the comma or space to the  \
   start of the buffer. */ \
         nleft = pc - buf + 1; \
         pwrite = buf  + buflen - nleft; \
         memcpy( buf, pc + 1, pwrite - buf ); \
\
/* Append the remaining part of the token to the buffer. */ \
         while( nleft > 0 && mc > 0 ) { \
            *(pwrite++) = *(ptok++); \
            nleft--; \
            mc--; \
         } \
\
/* Report an error if the whole token has still not been copied. */ \
         if( nleft == 0 && mc > 0 ) { \
            astError( AST__SMBUF, "%s(%s): Supplied buffer length (%zu) " \
                      "is too small.", status, method, astGetClass(this), \
                      buflen ); \
         } \
\
/* Report an error if no previous comma or space was found in the buffer. */ \
      } else { \
         astError( AST__SMBUF, "%s(%s): Supplied buffer length (%zu) " \
                   "is too small.", status, method, astGetClass(this), \
                   buflen ); \
      } \
   }


/* Local Variables: */
   char *buf;
   char *pc;
   char *ptok;
   char *pwrite;
   char token[ 30 ];
   int first;
   int icell;
   int maxorder;
   int moclen;
   int neworder;
   int order;
   int64_t npix;
   int64_t npix_prev;
   int64_t npix_start;
   size_t mc;
   size_t nc;
   size_t nleft;

/* Check the global error status. */
   if ( !astOK ) return;

/* Ensure we have the normalised form available in the Moc structure. */
   GetNorm( this, method, status );

/* Allocate a suitable buffer */
   buf = astMalloc( buflen );

/* Initialise a pointer into the buffer at which to store the next
   character, and the number of elements currently left in the buffer. */
   pwrite = buf;
   nleft = buflen;

/* Loop over all cells in the Moc. */
   first = 1;
   order = -1;
   npix_start = 0;
   npix_prev = 0;
   npix = 0;
   moclen = astGetMocLength( this );
   for( icell = 0; icell < moclen; icell++ ){

/* Decode the nuniq value to get the order and npix, using a fast log2
   function. */
      if( this->inorm ) {
         neworder = log2_32( (this->inorm)[ icell ] / 4 ) / 2;
         npix = (this->inorm)[ icell ] - ( 1 << (2 + 2*(neworder)) );
      } else {
         neworder = log2_64( (this->knorm)[ icell ] / 4 ) / 2;
         npix = (this->knorm)[ icell ] - ( ONE << (2 + 2*(neworder)) );
      }

/* First do JSON serialisatioon... */
      if( json ) {

/* If the order has changed, complete any previous pixlist, and start a
   new one. */
         if( neworder != order){
            order = neworder;
            nc = sprintf( token, first?"{\"%d\":[%zu":"],\"%d\":[%zu",
                          order, npix );
            first = 0;
            TOKEN_WRITE;

/* If the order has not changed, just append the new npix value to the
   existing pixlist. */
         } else {
            nc = sprintf( token, ",%zu", npix );
            TOKEN_WRITE;
         }

/* Now do string serialisation... */
      } else {

/* If the order has changed, finish any previous pixlist, record the new
   order then append " <order>/<npix>" to the sink. */
         if( neworder != order){
            if( npix_start < npix_prev ) {
               nc = sprintf( token, "-%zu", npix_prev );
               TOKEN_WRITE;
            }
            order = neworder;
            npix_start = npix;
            nc = sprintf( token, first?"%d/%zu":" %d/%zu", order, npix );
            first = 0;
            TOKEN_WRITE;

/* If we have reached the first non-contiguous npix value, write out the
   end of the previous range. */
         } else if( npix > npix_prev + 1 ) {
            if( npix_start < npix_prev ) {
               nc = sprintf( token, "-%zu", npix_prev );
               TOKEN_WRITE;
            }

/* Then write the (potential) start of the new range. */
            nc = sprintf( token, ",%zu", npix );
            TOKEN_WRITE;
            npix_start = npix;
         }
         npix_prev = npix;
      }
   }

/* Terminate the last pixlist (if any pixlist has been started). */
   if( !first ) {
      if( json ) {
         nc = sprintf( token, "]" );
         TOKEN_WRITE;
      } else if( npix_start < npix ) {
         nc = sprintf( token, "-%zu", npix );
         TOKEN_WRITE;
      }
   }

/* If the Moc's maximum order has not yet been reached, append it
   explicity. */
   maxorder = astGetMaxOrder( this );
   if( order < maxorder ) {
      if( json ) {
         nc = sprintf( token, first?"{\"%d\":[]":",\"%d\":[]", maxorder );
      } else {
         nc = sprintf( token, first?"%d/":" %d/", maxorder );
      }
      TOKEN_WRITE;
   }

/* Terminate the complete JSON string. */
   if( json ) {
      nc = sprintf( token, "}" );
      TOKEN_WRITE;
   }

/* Flush anything remaining in the buffer. */
   if( pwrite > buf ) {
      STRING_WRITE(pwrite - buf);
   }

/* Free the buffer. */
   buf = astFree( buf );
}

#undef TOKEN_WRITE
#undef STRING_WRITE

static int GetMocType( AstMoc *this, int *status ){
/*
*  Name:
*     GetMocType

*  Purpose:
*     Get the value of the MocType attribute.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int GetMocType( AstMoc *this, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the value of the MocType attribute.

*  Parameters:
*     this
*        Pointer to the Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The MocType value - 4 or 8.

*/


/* Check the global error status. */
   if ( !astOK ) return 4;

/* Ensure the the normalised form of the MOC is available. */
   GetNorm( this, "astGetMocType", status );

/* Return 4 or 8, depending on whether "iorm" or "knorm" is used to store
   the normalised data within the moc structure. */
   return ( this->inorm == NULL ) ? 8 : 4;
}


static void GetNorm( AstMoc *this, const char *method, int *status ){
/*
*  Name:
*     GetNorm

*  Purpose:
*     Get the normalised form of a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void GetNorm( AstMoc *this, const char *method, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function ensures that a normalised form of the Moc is
*     available within the Moc structure. It uses the "unmap"
*     algorithm described in the MOC recommendation.

*  Parameters:
*     this
*        Pointer to the Moc.
*     method
*        The name of the calling method, for error messages.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   int maxorder;
   int order;
   int irange;
   int moclen;
   size_t nnew;
   size_t nrange;
   size_t shift;
   int64_t *newranges;
   int64_t *pr;
   int64_t *ranges;
   int64_t m1;
   int64_t m2;
   int64_t max;
   int64_t min;
   int64_t npix;
   int64_t offset;

/* Check the global error status. */
   if ( !astOK ) return;

/* Do nothing if the normalised form is already available. */
   if( !this->inorm && !this->knorm ) {
      nrange = this->nrange;
      ranges = astStore( NULL, this->range, 2*nrange*sizeof(*ranges));
      moclen = 0;
      maxorder = astGetMaxOrder( this );
      if( astOK ) {

/* Define a macro to do the work for a generic data type. */
#define UNMAP \
         norm = NULL; \
         for( order = 0; order <= maxorder && nrange > 0; order++ ) { \
            nuniq_offset = ( ONE << 2*( order + 1 ) ); \
\
            shift = 2*( maxorder - order ); \
            offset = ( ONE << shift ) - 1; \
\
            newranges = NULL; \
            nnew = 0; \
            pr = ranges; \
            for( irange = 0; irange < nrange; irange++ ) { \
               min = *(pr++); \
               max = *(pr++); \
               m1 = ( ( min + offset ) >> shift ); \
               m2 = ( ( max + 1 ) >> shift ); \
               if( m2 > m1 ) { \
                  if( INT_MAX - moclen < m2 - m1 + 2 ) { \
                     astError( AST__BGMOC, "%s(%s): The normalised MOC " \
                               "has too many elements.", status, method, \
                               astGetClass( this ) ); \
                     break; \
                  } else { \
                     for( npix = m1; npix < m2; npix++ ) { \
                        norm = astGrow( norm, moclen+1, sizeof(*norm) ); \
                        if( astOK ) { \
                           norm[ moclen++ ] =  nuniq_offset + npix; \
                       } \
                     } \
                  } \
                  m1 = ( m1 << shift ); \
                  m2 = ( m2 << shift ) - 1; \
                  if( m1 <= min ) { \
                     if( m2 >= max ) { \
                        /* Nothing to do if whole range has been removed */ \
                     } else { \
                        newranges = astGrow( newranges, nnew+1, 2*sizeof(*newranges) ); \
                        if( astOK ) { \
                           newranges[ 2*nnew ] = m2 + 1; \
                           newranges[ 2*nnew + 1 ] = max; \
                           nnew++; \
                        } \
                     } \
                  } else { \
                     if( m2 >= max ) { \
                        newranges = astGrow( newranges, nnew+1, 2*sizeof(*newranges) ); \
                        if( astOK ) { \
                           newranges[ 2*nnew ] = min; \
                           newranges[ 2*nnew + 1 ] = m1 - 1; \
                           nnew++; \
                        } \
                     } else { \
                        newranges = astGrow( newranges, nnew+2, 2*sizeof(*newranges) ); \
                        if( astOK ) { \
                           newranges[ 2*nnew ] = min; \
                           newranges[ 2*nnew + 1 ] = m1 - 1; \
                           newranges[ 2*nnew + 2 ] = m2 + 1; \
                           newranges[ 2*nnew + 3 ] = max; \
                           nnew += 2; \
                        } \
                     } \
                  } \
               } else { \
                  newranges = astGrow( newranges, nnew+1, 2*sizeof(*newranges) ); \
                  if( astOK ) { \
                     newranges[ 2*nnew ] = min; \
                     newranges[ 2*nnew + 1 ] = max; \
                     nnew++; \
                  } \
               } \
            } \
\
            ranges = astFree( ranges ); \
            ranges = newranges; \
            nrange = nnew; \
         } \
\
         ranges = astFree( ranges ); \
         this->moclength = moclen;

/* Use the above macro to do the work for 4 byte identifiers... */
         if( maxorder < 14 ) {
            int *norm, nuniq_offset;
            UNMAP
            this->inorm = norm;
            this->knorm = astFree( this->knorm );

/* Use the above macro to do the work for 8 byte identifiers... */
         } else {
            int64_t *norm, nuniq_offset;
            UNMAP
            this->knorm = norm;
            this->inorm = astFree( this->inorm );
         }
      }
   }

#undef UNMAP

}

static double GetPixelArea( AstFrameSet *wcs, const AstDim *dims, int *status ){
/*
*  Name:
*     GetPixelArea

*  Purpose:
*     Get the area of a pixel in the centre of a 2D array.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     double GetPixelArea( AstFrameSet *wcs, const AstDim *dims, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the area of a pixel at the centre of the
*     supplied 2-dimensional array, in square arc-seconds.

*  Parameters:
*     wcs
*        Pointer to the WCS FrameSet describing the 2D array. The base
*        Frame is assumed to describe grid coordinates. The current Frame
*        should be a SkyFrame.
*     dims
*        Pointer to an array holding the dimensions of the array, in
*        pixels.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The pixel area, in square arc-seconds.

*/

/* Local Variables: */
   double a[ 3 ];
   double b[ 3 ];
   double d1;
   double d2;
   double p1[ 2];
   double p2[ 2];
   double result;
   double x[ 3 ];
   double y[ 3 ];

/* Initialise. */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Transform the central grid coords, plus the grid coords at positions
   offset one pixel along each grid axis, into sky coords. */
   x[ 0 ] = 0.5*( dims[ 0 ] + 1.0 );
   x[ 1 ] = x[ 0 ] + 1.0;
   x[ 2 ] = x[ 0 ];
   y[ 0 ] = 0.5*( dims[ 1 ] + 1.0 );
   y[ 1 ] = y[ 0 ];
   y[ 2 ] = y[ 0 ] + 1.0;
   astTran2( wcs, 3, x, y, 1, a, b );

/* Find the arc-distances, in radians, from the centre to the other two
   positions. */
   p1[ 0 ] = a[ 0 ];
   p1[ 1 ] = b[ 0 ];
   p2[ 0 ] = a[ 1 ];
   p2[ 1 ] = b[ 1 ];
   d1 = astDistance( wcs, p1, p2 );
   p2[ 0 ] = a[ 2 ];
   p2[ 1 ] = b[ 2 ];
   d2 = astDistance( wcs, p1, p2 );

/* Calculate the area, converting to square arc-seconds. */
   if( d1 != AST__BAD && d2 != AST__BAD ) {
      d1 *= AST__DR2D*3600.0;
      d2 *= AST__DR2D*3600.0;
      result = d1*d2;
   }

/* Return the pixel size. */
   return result;
}

/*
*  Name:
*     GetSelectionBounds

*  Purpose:
*     Get the grid bounds of a box containing all selected pixels.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int GetSelectionBounds<Oper><X>( <Xtype> value, const <Xtype> array[],
*                                      const AstDim dims[ 2 ], AstDim *lx, AstDim *hx,
*                                      AstDim *ly, AstDim *hy, int *status );

*  Class Membership:
*     Moc member function

*  Description:
*     The bounds of a box in grid coordinates that contain all selected
*     pixels is returned.

*  Parameters:
*     value
*        The data value defining selected pixels.
*     array
*        The data array.
*     dims
*        The number of pixels along each pixel axis.
*     lx
*        Returned holding the lowest index on the first grid axis
*        of the selected pixels.
*     hx
*        Returned holding the highest index on the first grid axis
*        of the selected pixels.
*     ly
*        Returned holding the lowest index on the second grid axis
*        of the selected pixels.
*     hy
*        Returned holding the highest index on the second grid axis
*        of the selected pixels.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A flag indicating if one or more selected pixels were found. Zero
*     is returned if no selected pixels were found.

*  Notes:
*     - <Oper> must be one of LT, LE, EQ, NE, GE, GT.

*/

/* Define a macro to implement the function for a specific data
   type and operation. */
#define MAKE_GETSELECTIONBOUNDS(X,Xtype,Oper,OperI) \
static int GetSelectionBounds##Oper##X( Xtype value, const Xtype array[], \
                                        const AstDim dims[ 2 ], AstDim *lx, AstDim *hx, \
                                        AstDim *ly, AstDim *hy, int *status ){ \
\
/* Local Variables: */ \
   const Xtype *pv;     /* Pointer to next data value to test */ \
   AstDim ix;           /* Pixel column */ \
   AstDim iy;           /* Pixel row */ \
\
/* Initialise the bounding box. */ \
   *lx = INT64_MAX; \
   *hx = -INT64_MAX; \
   *ly = INT64_MAX; \
   *hy = -INT64_MAX; \
\
/* Check the global error status. */ \
   if ( !astOK ) return 0; \
\
/* Loop round all pixels in the array. */ \
   pv = array;  \
   for( iy = 1; iy <= dims[ 1 ]; iy++ ) { \
      for( ix = 1; ix <= dims[ 0 ]; ix++,pv++ ) { \
\
/* Test the pixel value, extending the bounding box if the test is \
   passed. This relies on the compiler optimisation to remove the  \
   "if" statements for all but the operation appropriate to the  \
   function being defined. */  \
         if( OperI == AST__LT ) {  \
            if( *pv < value ) EXTEND_BOX; \
         } else if( OperI == AST__LE ) { \
            if( *pv <= value ) EXTEND_BOX; \
         } else if( OperI == AST__EQ ) { \
            if( *pv == value ) EXTEND_BOX; \
         } else if( OperI == AST__NE ) { \
            if( *pv != value ) EXTEND_BOX; \
         } else if( OperI == AST__GE ) { \
            if( *pv >= value ) EXTEND_BOX; \
         } else  if( OperI == AST__GT ) { \
            if( *pv > value ) EXTEND_BOX; \
         }  \
      } \
   } \
\
/* Return the appropriate flag value. */ \
   return ( *lx <= *hx ) && ( *ly <= *hy ); \
}




/* Define a macro to extend the bound box. */
#define EXTEND_BOX { \
   if( ix < *lx ) *lx = ix; \
   if( ix > *hx ) *hx = ix; \
   if( iy < *ly ) *ly = iy; \
   if( iy > *hy ) *hy = iy; \
}

/* Define a macro that uses the above macros to to create implementations
   of GetSelectionBounds for all operations. */
#define MAKEALL_GETSELECTIONBOUNDS(X,Xtype) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,LT,AST__LT) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,LE,AST__LE) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,EQ,AST__EQ) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,GE,AST__GE) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,GT,AST__GT) \
MAKE_GETSELECTIONBOUNDS(X,Xtype,NE,AST__NE)

/* Expand the above macro to generate a function for each required
   data type and operation. */
#if HAVE_LONG_DOUBLE     /* Not normally implemented */
MAKEALL_GETSELECTIONBOUNDS(LD,long double)
#endif
MAKEALL_GETSELECTIONBOUNDS(D,double)
MAKEALL_GETSELECTIONBOUNDS(L,long int)
MAKEALL_GETSELECTIONBOUNDS(UL,unsigned long int)
MAKEALL_GETSELECTIONBOUNDS(I,int)
MAKEALL_GETSELECTIONBOUNDS(UI,unsigned int)
MAKEALL_GETSELECTIONBOUNDS(S,short int)
MAKEALL_GETSELECTIONBOUNDS(US,unsigned short int)
MAKEALL_GETSELECTIONBOUNDS(B,signed char)
MAKEALL_GETSELECTIONBOUNDS(UB,unsigned char)
MAKEALL_GETSELECTIONBOUNDS(F,float)

/* Undefine the macros. */
#undef MAKE_GETSELECTIONBOUNDS
#undef MAKEALL_GETSELECTIONBOUNDS
#undef EXTEND_BOX


static void IncorporateCells( AstMoc *this, CellList *clist, int negate,
                              int cmode, const char *method, int *status ){
/*
*  Name:
*     IncorporateCells

*  Purpose:
*     Incorporate a list of HEALPix cells into the given Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void IncorporateCells( AstMoc *this, CellList *clist, int negate,
*                            int cmode, const char *method, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function incorporates the supplied list of HEALPix cells into
*     the Moc.

*  Parameters:
*     this
*        Pointer to the Moc.
*     clist
*        Structure holding information about the cells to be incorporated
*        in the Moc.
*     negate
*        If zero, the list of HEALPix cells to incorporate into the
*        Moc are those included in "clist". If non-zero, the list of
*        HEALPix cells to incorporate into the Moc are those NOT included
*        in "clist".
*     cmode
*        Indicates how the Moc is to be combined with the incorporated
*        cells. Any of the following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the cell list.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the cell list.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the cell list.
*     method:
*        Name of calling method.
*     status
*        The inherited status.

*/

/* Local Variables: */
   AstPointSet *ps1;
   AstPointSet *ps2;
   double **ptr2;
   double *ptr1[ 2 ];
   double *px;
   double *py;
   int i;
   int irange;
   int nold;
   int order;
   int shift;
   int64_t *nested;
   int64_t *pend;
   int64_t *pn;
   int64_t *pr;
   int64_t ihigh;
   int64_t ilow;

/* Check inherited status */
   if( !astOK ) return;

/* Record the original number of ranges of nested indices in the Moc. */
   nold = this->nrange;

/* Loop over each order present in the CellList structure. */
   for( order = 0; order <= clist->maxorder; order++ ) {
      if( clist->len[ order ] > 0 ) {
         nested = astCalloc( clist->len[ order ], sizeof( *nested ) );

/* Transform the grid coords at the current order from their own
   HPX-like projection to the HPX12 projection. */
         ps1 = astPointSet( clist->len[ order ], 2, "", status );
         ptr1[ 0 ] = clist->ix[ order ];
         ptr1[ 1 ] = clist->iy[ order ];
         astSetPoints( ps1, ptr1 );
         ps2 = astTransform( clist->maps[ order ], ps1, 1, NULL );
         ptr2 = astGetPoints( ps2 );
         if( astOK ) {

/* Round each one to the nearest pixel centre and convert to a nested
   HEALPix index at the current order. */
            pn = nested;
            px = ptr2[ 0 ];
            py = ptr2[ 1 ];
            for( i = 0; i < clist->len[ order ]; i++ ) {
               if( *px != AST__BAD && *py != AST__BAD ) {
                  *(pn++) = XyToNested( order, (int)( *(px++) + 0.5 ),
                                               (int)( *(py++) + 0.5 ) );
               } else if( astOK ) {
                  astError( AST__INTER, "%s(%s): Bad HPX12 grid coord "
                            "element %d order %d (internal programming "
                            "error).", status, method, astGetClass(this ),
                             i, order );
                  break;
               }
            }
         }

/* Check no errors above. */
         if( astOK ) {

/* Sort them into ascending order. */
            qsort( nested, clist->len[ order ], sizeof(*nested),
                   Comp_int64 );

/* Look for ranges within the sorted list of indices. */
            shift = 2*( clist->maxorder - order );
            pn = nested;
            pend = nested + clist->len[ order ];
            while( pn < pend ) {
               ilow = *pn;
               ihigh = ilow;
               while( ++pn < pend && *pn == ihigh + 1 ) ihigh++;

/* Process index range ilow->ihigh. Get the equivalent range at order
   "maxorder", and append to the list of ranges in the Moc. */
               irange = this->nrange++;
               this->range = astGrow( this->range, this->nrange, 2*sizeof(*(this->range)) );
               if( astOK ) {
                  pr = this->range + 2*irange;
                  pr[ 0 ] = ( ilow << shift );
                  pr[ 1 ] = ( ( ihigh + 1 ) << shift ) - 1;
               } else {
                  break;
               }
            }
         }

/* Free resources. */
         ps1 = astAnnul( ps1 );
         ps2 = astAnnul( ps2 );
         nested = astFree( nested );
      }
   }

/* Normalise the Moc. */
   astMocNorm( this, negate, cmode, nold, clist->maxorder, method );
}

void astInitMocVtab_(  AstMocVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitMocVtab

*  Purpose:
*     Initialise a virtual function table for a Moc.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     void astInitMocVtab( AstMocVtab *vtab, const char *name )

*  Class Membership:
*     Moc vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the Moc class.

*  Parameters:
*     vtab
*        Pointer to the virtual function table. The components used by
*        all ancestral classes will be initialised if they have not already
*        been initialised.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the virtual function table belongs (it
*        is this pointer value that will subsequently be returned by the Object
*        astClass function).
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstMappingVtab *mapping;      /* Pointer to Mapping component of Vtab */
   AstObjectVtab *object;        /* Pointer to Object component of Vtab */
   AstRegionVtab *region;        /* Pointer to Region component of Vtab */

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitRegionVtab( (AstRegionVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsAMoc) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstRegionVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */
/* Store pointers to the member functions (implemented here) that provide
   virtual methods for this class. */
   vtab->AddRegion = AddRegion;
   vtab->AddMocData = AddMocData;
   vtab->AddMocString = AddMocString;
   vtab->GetMocString = GetMocString;
   vtab->AddCell = AddCell;
   vtab->GetCell = GetCell;
   vtab->TestCell = TestCell;

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
   vtab->AddPixelMaskLD = AddPixelMaskLD;
#endif
   vtab->AddPixelMaskB  = AddPixelMaskB;
   vtab->AddPixelMaskD  = AddPixelMaskD;
   vtab->AddPixelMaskF  = AddPixelMaskF;
   vtab->AddPixelMaskI  = AddPixelMaskI;
   vtab->AddPixelMaskL  = AddPixelMaskL;
   vtab->AddPixelMaskS  = AddPixelMaskS;
   vtab->AddPixelMaskUB = AddPixelMaskUB;
   vtab->AddPixelMaskUI = AddPixelMaskUI;
   vtab->AddPixelMaskUL = AddPixelMaskUL;
   vtab->AddPixelMaskUS = AddPixelMaskUS;

   vtab->GetMocArea = GetMocArea;
   vtab->GetMocData = GetMocData;
   vtab->GetMocType = GetMocType;
   vtab->GetMocLength = GetMocLength;
   vtab->GetMocHeader = GetMocHeader;

   vtab->ClearMaxOrder = ClearMaxOrder;
   vtab->GetMaxOrder = GetMaxOrder;
   vtab->SetMaxOrder = SetMaxOrder;
   vtab->TestMaxOrder = TestMaxOrder;

   vtab->ClearMinOrder = ClearMinOrder;
   vtab->GetMinOrder = GetMinOrder;
   vtab->SetMinOrder = SetMinOrder;
   vtab->TestMinOrder = TestMinOrder;

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   mapping = (AstMappingVtab *) vtab;
   region = (AstRegionVtab *) vtab;

   parent_clearattrib = object->ClearAttrib;
   object->ClearAttrib = ClearAttrib;
   parent_getattrib = object->GetAttrib;
   object->GetAttrib = GetAttrib;
   parent_setattrib = object->SetAttrib;
   object->SetAttrib = SetAttrib;
   parent_testattrib = object->TestAttrib;
   object->TestAttrib = TestAttrib;
   parent_equal = object->Equal;
   object->Equal = Equal;

   parent_transform = mapping->Transform;
   mapping->Transform = Transform;

   region->RegBaseBox = RegBaseBox;
   region->RegBaseMesh = RegBaseMesh;
   region->RegPins = RegPins;
   region->GetDefUnc = GetDefUnc;
   region->RegTrace = RegTrace;

/* Declare the copy constructor, destructor and class dump
   functions. */
   astSetDump( vtab, Dump, "Moc", "IVOA Multi-Order Coverage map" );
   astSetDelete( vtab, Delete );
   astSetCopy( vtab, Copy );

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static int log2_64( int64_t svalue ) {
/*
*  Name:
*     log2_64

*  Purpose:
*     Fast log2 function for signed 64 bit integers.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int log2_64( int64_t svalue )

*  Description:
*     This function returns the log base 2 of the supplied 64 bit integer
*     value. By Desmond Hume.

*/
    uint64_t value = svalue;
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    value |= value >> 32;
    return Tab64[((uint64_t)((value - (value >> 1))*0x07EDD5E59A4E28C2)) >> 58];
}

static int log2_32( int svalue ) {
/*
*  Name:
*     log2_32

*  Purpose:
*     Fast log2 forunction for 32 bit integers.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int log2_32( int svalue )

*  Description:
*     This function returns the log base 2 of the supplied 32 bit integer
*     value. By Desmond Hume.

*/
    unsigned int value = svalue;
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    return Tab32[(unsigned int)(value*0x07C4ACDD) >> 27];
}

static Cell *MakeCell( int ix, int iy, int order, Cell **foot, int *status ){
/*
*  Name:
*     MakeCell

*  Purpose:
*     Create a structure holding a descripion of a single HEALPix cell.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     Cell *MakeCell( int ix, int iy, int order, Cell **foot, int *status )

*  Description:
*     This function creates a Cell structure, initialising its contents
*     to null values, and then stores the supplied grid indices in the
*     Cell and adds it to the end of the linked list of Cell structures.

*  Parameters:
*     ix
*        The one-based integer grid X index for the HPX12 pixel to be
*        described by the Cell.
*     iy
*        The one-based integer grid Y index for the HPX12 pixel to be
*        described by the Cell.
*     order
*        The HEALPix order at which the pixel is defined.
*     foot
*        Address of the last existing Cell pointer currently on the
*        linked list of Cell pointers. It is updated on exit to point to
*        the new Cell.
*     status
*        Pointer to the inherited status.

*  Returned Value:
*     Pointer to the new Cell. It should be freed using astFree when no
*     longer needed.

*/

/* Local Variables: */
   Cell *new;

/* Check inherited status */
   if( !astOK ) return NULL;

/* Allocate new structure, initialising it to all zeros to nullify all
   fields. */
   new = astCalloc( 1, sizeof( *new ) );
   if( new ) {

/* Store supplied values in the new Cell. */
      new->ix = ix;
      new->iy = iy;

/* Append it to the end of the chain of Cells at the same order. */
      new->prev = foot[ order ];
      foot[ order ] = new;
   }

   return new;
}

static void MakeCorners( AstMoc *this, int order, Cell *cell_foot,
                         Corner **corner_foot, int sort, int *status ){
/*
*  Name:
*     MakeCorners

*  Purpose:
*     Incorporate cell information into a linked list of structures
*     holding information about corners.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void MakeCorners( AstMoc *this, int order, Cell *cell_foot,
*                       Corner **corner_foot, int sort, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function finds the four corner positions of each Cell
*     in the chain specified by "cell_foot", and for each one registers
*     the cell with the corresponding Corner structure. New Corner
*     structures are created for any corner positions that do not
*     already have a corresponding structure, and appended to the
*     end of the supplied linked list of Corner structures. Co-incident
*     Corner structures are then merged.

*  Parameters:
*     this
*        The Moc.
*     order
*        The HEALPix order of the supplied cells.
*     cell_foot
*        Pointer to the last Cell structure in a chain of linked structures
*        holding information about the cells for which corners are to be
*        created.
*     corner_foot
*        Pointer to a Corner pointer, in which to return a pointer to the
*        last Corner created by this function. This is the last Corner in
*        a chain of linked Corner structures holding information about
*        the corners at the corresponding order. All RA values are in the
*        range [0,2.PI[.
*     sort
*        If non-zero, the created chain of Corner structures is sorted,
*        first by Dec then by RA.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables; */
   AstMapping *map;
   AstPointSet *ps1;
   AstPointSet *ps2;
   Cell **pcell;
   Cell *cell;
   Corner *root;
   Corner **index;
   Corner *foot;
   Corner *prev;
   Corner *next;
   Corner *corner;
   Corner **pi;
   astDECLARE_GLOBALS
   double **ptr2;
   double **ptr1;
   double *p1;
   double *p0;
   double dectol;
   double ratol;
   int cross;
   int icell;
   int icorner;
   int lim;
   int ncell;
   int ncorner;
   int nppf;
   int s1;
   int s2;
   int sxy;

/* Check inherited status */
   if( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(this);

/* Initialise */
   foot = NULL;

/* Count the number of Cells in the supplied chain of cells. Create four
   new empty Corner structures for each one, and append them to the end
   of the chain of Corners. */
   ncell = 0;
   cell = cell_foot;
   while( cell ) {
      ncell++;
      cell = cell->prev;
      for( icorner = 0; icorner < 4; icorner++ ) {
         corner = astCalloc( 1, sizeof( *corner ) );
         corner->prev = foot;
         foot = corner;
      }
   }

/* The number of new corners - four per cell. */
   if( ncell > INT_MAX/4 - 2 ) {
      astError( AST__BGMOC, "astRegBaseMesh(%s): The normalised MOC has "
                "too many elements.", status, astGetClass( this ) );
   } else {
      ncorner = 4*ncell;
   }

/* Get a pointset to hold the grid coords at the four corners of each
   cell. */
   ps1 = astPointSet( ncorner, 2, " ", status );
   ptr1 = astGetPoints( ps1 );

/* Get a pointset to hold the corresponding sky coords at the four
   corners of each cell. */
   ps2 = astPointSet( ncorner, 2, " ", status );
   ptr2 = astGetPoints( ps2 );

/* Check all pointers are safe to use. */
   if( astOK ) {

/* Get the sums of ix and iy that correspond to the RA=0h/24h line. */
      nppf = ( 1 << order );
      s1 = nppf + 1;
      s2 = 9*nppf + 1;
      lim = nppf;

/* Get the grid coords at the corners, within an HPX12 projection at the
   specified order. Note, to avoid problems at discontinuities, the corner
   positions are very slighly inside the cell rather than being exactly
   on the boundary. Also get a flag ("cross") which indicates if any cell
   falls on the RA=0h/RA=24h discontinuity. */
      cross = 0;
      p0 = ptr1[ 0 ];
      p1 = ptr1[ 1 ];
      cell = cell_foot;
      for( icell = 0; icell < ncell; icell++ ) {
         *(p0++) = cell->ix - HALF;
         *(p0++) = cell->ix - HALF;
         *(p0++) = cell->ix + HALF;
         *(p0++) = cell->ix + HALF;
         *(p1++) = cell->iy - HALF;
         *(p1++) = cell->iy + HALF;
         *(p1++) = cell->iy + HALF;
         *(p1++) = cell->iy - HALF;

         sxy = cell->ix + cell->iy;
         if( abs( sxy - s1 ) <= lim || abs( sxy - s2 ) <= lim ) cross = 1;

         cell = cell->prev;
      }

/* Get a Mapping that goes from ICRS to grid coordinates in an HPX12
   projection of the whole sky at the specified order. Do not annul
   the Mapping pointer since it has not been cloned in GetCachedMapping. */
      map = GetCachedMapping( this, order, "astRegBaseMesh", status );

/* Use the inverse transformation of this mapping to convert the grid
   coords at the cell corners into sky coords. */
      (void) astTransform( map, ps1, 0, ps2 );

/* Ensure all RA values are in range [0,2PI[ and store the (RA,Dec) values
   in the relevant Corner structures. Set up the links between the new
   Corners and the Cells to which they refer. */
      p0 = ptr2[ 0 ];
      p1 = ptr2[ 1 ];
      cell = cell_foot;
      corner = foot;
      for( icell = 0; icell < ncell && astOK; icell++ ){

         for( icorner = 0; icorner < 4; icorner++,p0++,p1++ ){
            if( *p0 == AST__BAD || *p1 == AST__BAD ) {
               astError( AST__INTER, "astRegBaseMesh(%s): Bad sky coords "
                         "at corner (internal programming error).", status,
                         astGetClass( this ) );
               break;
            }

            while( *p0 >= 2*AST__DPI ) *p0 -= 2*AST__DPI;
            while( *p0 < 0 ) *p0 += 2*AST__DPI;

            corner->ra = *p0;
            corner->dec = *p1;
            corner->cosdec = cos( *p1 );
            corner->ncell = 1;
            corner->cells[ 0 ] = cell;

            if( icorner == 0 ) {
               cell->bl = corner;
            } else if( icorner == 1 ) {
               cell->tl = corner;
            } else if( icorner == 2 ) {
               cell->tr = corner;
            } else {
               cell->br = corner;
            }
            corner = corner->prev;
         }

         cell = cell->prev;
      }
   }

/* Free resources. */
   ps1 = astAnnul( ps1 );
   ps2 = astAnnul( ps2 );

/* If any cells cross the RA=0/24 line, we need to sort and merge adjacent
   corners twice, once centred on RA=12 and once centred on RA=0. Otherwise
   adjacent corners on either side of the RA=0/24 line will not be merged. */
   for( Comp_Corner_Loop = 0; Comp_Corner_Loop <= cross; Comp_Corner_Loop++ ) {

/* We now sort the corners, using DEC as the primary key and Ra as the
   secondary key (Dec is primary because the HEALPix cells form a number
   of rings on the sky, each at constant Dec). First create an index of
   the Corners in the linked list. This index is simply an array of
   pointers to the Corners in their initial positions within the linked
   list. */
      index = astCalloc( ncorner, sizeof(*index) );
      if( astOK ) {
         pi = index;
         icorner = 0;
         corner = foot;
         while( corner ) {
            icorner++;
            *(pi++) = corner;
            corner = corner->prev;
         }

/* Sanity check. */
         if( icorner != ncorner && astOK ) {
            astError( AST__INTER, "astRegBaseMesh(%s): Expected %d corners "
                      "but found %d (internal programming error).", status,
                      astGetClass(this), ncorner, icorner );
         }

/* Sort the index. For Comp_Corner_Loop==0 they are sorted around RA=12h.
   For Comp_Corner_Loop==1 they are sorted around RA=0/24h. Sort them
   exactly in RA (i.e. zero tolerance in RA) */
         Comp_Corner_Exact = 1;
         if( astOK ) qsort( index, ncorner, sizeof(*index), Comp_corner );

/* Merge corners that are co-incident. To begin with, use the first
   corner as the reference (root) corner and compare each subsequent
   corner to it. Allow some tolerance in RA. */
         Comp_Corner_Exact = 0;
         root = index[ 0 ];
         pi = index + 1;
         for( icorner = 1; icorner < ncorner; icorner++,pi++ ) {

/* If the current Corner is co-incident with the root corner, transfer
   information from the current Corner to the root Corner, and then mark
   the current Corner as unused by setting its RA bad. */
            if( Comp_corner( &root, pi ) == 0 ) {

/* Check the merged Corner will not be used by more than four cells. */
               if( root->ncell + (*pi)->ncell > 4 ) {
                  astError( AST__INTER, "astRegBaseMesh(%s): Corner is used "
                            "more than 4 times (internal programming error).",
                            status, astGetClass( this ) );
                  break;

/* Merge the cells from the current Corner into the root Corner. Update
   the pointers within each cell to point to the root corner instead of
   the current corner. */
               } else {
                  pcell = (*pi)->cells;
                  for( icell = 0; icell < (*pi)->ncell; icell++,pcell++ ) {
                     root->cells[ (root->ncell)++ ] = *pcell;

                     if( (*pcell)->bl == *pi ) {
                        (*pcell)->bl = root;
                     } else if( (*pcell)->tl == *pi ) {
                        (*pcell)->tl = root;
                     } else if( (*pcell)->tr == *pi ) {
                        (*pcell)->tr = root;
                     } else if( (*pcell)->br == *pi ) {
                        (*pcell)->br = root;
                     } else {
                        astError( AST__INTER, "astRegBaseMesh(%s): Orphaned "
                               "Corner (internal programming error).", status,
                               astGetClass( this ) );
                        break;
                     }
                  }
                  (*pi)->ra = AST__BAD;
               }

/* If the current cell is not co-incident with the root cell, use the
   current cell as the root cell from now on.  */
            } else {
               root = *pi;
            }
         }

/* If required, re-order the Corner structures within the chain so that
   they follow the same order as the index (i.e. sorted into increasing
   Dec). */
         if( sort ) {
            pi = index + ncorner - 1;
            foot = *pi;
            foot->prev = NULL;
            for( icorner = 1; icorner < ncorner; icorner++ ) {
               corner = *(--pi);
               corner->prev = foot;
               foot = corner;
            }
         }

/* Remove corners that have been flagged with a bad RA value, and fix up
   the links between the corners on either side. */
         ncorner = 0;
         next = NULL;
         corner = foot;
         while( corner ) {
            prev = corner->prev;

            if( corner->ra == AST__BAD ) {
               if( next ) next->prev = prev;
               if( corner == foot ) foot = prev;
               corner = astFree( corner );
            } else {
               ncorner++;
               next = corner;
            }

            corner = prev;
         }
      }

/* Free resources. */
      index = astFree( index );
   }

/* Indicate if each remaining corner is an interior position (i.e. surrounded
   by cells on all sides OR is at the corner of at least one interior cell
   from an earlier order). */
   corner = foot;
   while( corner ) {

/* If the corner touches a cell that has been flagged as interior at a
   previous order, then it must be interior at this order too. */
      pcell = corner->cells;
      for( icell = 0; icell < corner->ncell; icell++,pcell++ ) {
         if( (*pcell)->interior ) {
            corner->interior = 1;
            break;
         }
      }

/* In general, each corner of a cell is coincident with three other
   corners from three neighbouring cells. So each corner position occurs
   four times at an interior position. However, there are 8 corner
   positions where only three cells meet. These are at the southern and
   northern corners of the equatorial facets. If the current corner is
   used three times, we need to see if this is a four-corner position
   that is missing a corner, or a three-corner position which is not
   missing a corner (i.e. an interior position). */
      if( !corner->interior ) {
         if( corner->ncell == 3 ) {
            dectol = Comp_Corner_Tol;
            ratol = dectol/cos(THETAX);
            if( fabs( corner->ra ) < ratol ||
                fabs( corner->ra - AST__DPIBY2 ) < ratol ||
                fabs( corner->ra - AST__DPI ) < ratol ||
                fabs( corner->ra - 3*AST__DPIBY2 ) < ratol ||
                fabs( corner->ra - 2*AST__DPI ) < ratol ) {
               if( fabs( corner->dec - THETAX ) < dectol ||
                   fabs( corner->dec + THETAX ) < dectol ) {
                  corner->interior = 1;
               }
            }

/* Other corners are interior if they are used 4 times. */
         } else if( corner->ncell == 4 ) {
            corner->interior = 1;
         }
      }


/* Initialise the distance of the corner around the perimeter to indicate
   no distance has yet been found. */
      corner->dist = INT_MAX;

/* Move on to the next corner in the chain. */
      corner = corner->prev;
   }

/* Return a pointer to the corner that's now at the foot of the chain. */
   *corner_foot = foot;

}

static void MergeRanges( AstMoc *this, int start, int *status ){
/*
*  Name:
*     MergeRanges

*  Purpose:
*     Merge contiguous cell ranges in a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void MergeRanges( AstMoc *this, int start, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function merges any conntiguous ranges of cells within a Moc,
*     starting at a specified range (earlier ranges are left unchanged).
*     The merged ranges are also ordered into increasing lower bound.

*  Parameters:
*     this
*        The Moc to use.
*     start
*        The index of the first range to check.
*     status
*        Pointer to the inherited status.

*/

/* Local Variables: */
   int irange;
   int nnew;
   int64_t *pr;
   int64_t *pw;

/* Check inherited status */
   if( !astOK ) return;

/* Nothing to do if the Moc is empty or has only one range, or if the
   first range to be merged is the last range. */
   if( this->nrange > 1 && start < this->nrange - 1 ) {

/* Sort the specified ranges into increasing order of lower bound. */
      qsort( this->range + 2*start, this->nrange - start,
             2*sizeof(*(this->range)), Comp_range );

/* "nnew" is the number of ranges in the Moc after the merge. Initialise
   it to the number of ranges not being merged, plus one (because the
   two or more ranges being merged must produce at least one merged
   range). */
      nnew = start + 1;

/* Merge contiguous or overlapping ranges. */
      pw = this->range + 2*start;
      pr = this->range + 2*start + 2;
      for( irange = nnew; irange < this->nrange; irange++, pr += 2 ) {

/* If the new range starts at or before the end of the current range, and
   the new range ends after the end of the current range, extend the
   current range to include the new range. */
         if( pr[ 0 ] <= pw[ 1 ] + 1 ) {
            if( pr[ 1 ] > pw[ 1 ] ) {
               pw[ 1 ] = pr[ 1 ];
            }

/* If the new range starts after the end of the current range, increment
   the current range and initialise it to the bounds of the current
   range. */
         } else {
            pw += 2;
            pw[ 0 ] = pr[ 0 ];
            pw[ 1 ] = pr[ 1 ];
            nnew++;
         }
      }

/* Store the new number of ranges in the Moc. This may be smaller than
   the original number, but will never be greater. Then realloc the
   ranges array to save space. */
      this->nrange = nnew;
      this->range = astRealloc( this->range, 2*nnew*sizeof(*(this->range)) );
   }

/* Clear the cached information stored in the Moc structure so that it is
   re-calculated when next needed. */
   ClearCache( this, status );
}

void astMocNorm_( AstMoc *this, int negate, int cmode, int nold,
                  int maxorder, const char *method, int *status ){
/*
*+
*  Name:
*     astMocNorm

*  Purpose:
*     Normalise the supplied Moc.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     void astMocNorm( AstMoc *this, int negate, int cmode, int nold,
*                      int maxorder, const char *method )

*  Class Membership:
*     Moc member function

*  Description:
*     This function normalises the supplied Moc. It is assumed that the
*     ranges of HEALPix cell indices within the Moc structure are in two
*     groups: 1) range zero to range 'nold-1' are assumed to be already
*     normalised, 2) ranges 'nold' to the end are assumed not be be
*     normalised.

*  Parameters:
*     this
*        Pointer to the Moc.
*     negate
*        If non-zero, the HEALPix cells in ranges "nold" to the end are
*        negated before being merged with the earlier ranges.
*     cmode
*        Indicates how ranges 'nold' to the end are to be combined with the
*        earlier ranges. Any of the following values may be supplied:
*        - AST__AND: The modified Moc is the intersection of the original
*        Moc and the cell list.
*        - AST__OR: The modified Moc is the union of the original Moc and
*        the cell list.
*        - AST__XOR: The modified Moc is the exclusive disjunction of the
*        original Moc and the cell list.
*     nold
*        The number of cell ranges that are already normalised.
*     maxorder
*        The maximum HEALPix order.
*     method:
*        Name of calling method to include in error messages.
*     status
*        The inherited status.

*/

/* Check inherited status */
   if( !astOK ) return;

/* Sort the new ranges into increasing order of lower bound. */
   MergeRanges( this, nold, status );

/* If the cell list is to be inverted, we replace the new ranges
   with the gaps between the new ranges. */
   if( negate ) NegateRanges( this, nold, maxorder, status );

/* Combine all the ranges using the specified combination method. */
   CombineRanges( this, cmode, method, status );
}

static void NegateRanges( AstMoc *this, int start, int order,
                          int *status ){
/*
*  Name:
*     NegateRanges

*  Purpose:
*     Negate the ranges of contiguous cells in a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void NegateRanges( AstMoc *this, int start, int order,
*                        int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function negates the specified ranges of cells within a Moc
*     by replacing the ranges with new ranges that describe the gaps
*     between the original ranges. Ranges before "start" are left
*     unchanged.
*
*     Note, it is assumed that the ranges being negated are sorted into
*     increasing order of lower bound and that they do not overlap or
*     touch. These conditions can be achieved by calling CombineRanges
*     before calling this function.

*  Parameters:
*     this
*        The Moc to use.
*     start
*        The index of the first range to negate.
*     order
*        The HEALPix order to which the ranges refer.
*     status
*        Pointer to the inherited status.

*/

/* Local Variables: */
   int irange;
   int64_t *pr;
   int64_t istart;
   int64_t max_nest;
   int64_t next_start;

/* Check inherited status */
   if( !astOK ) return;

/* Nothing to do if the Moc is empty, or no ranges are to be negated. */
   if( this->nrange > 0 && start < this->nrange ) {

/* Get the maximum number of nested indices at the highest order in use.
   The indices go from zero to (max_nest-1). */
      max_nest = 12*( ONE << 2*order );

/* Does the first range to be negated start at zero? If so, there is no
   gap before it. */
      if( this->range[ 2*start ] == 0 ) {

/* Loop round all the ranges to be negated. Replace each range with the gap
   between it and the following range. */
         pr = this->range + 2*start;
         for( irange = start; irange < this->nrange; irange++ ) {

/* If the current range extends all the way to the last nested index
   value, there is no gap after it, so break out of the loop without
   storing another gap. */
            if( pr[ 1 ] >= max_nest - 1 ) {
               break;

/* Otherwise, if there is another range to do, store the gap between the
   end of the current range and the start of the next range. */
            } else if( irange < this->nrange - 1 ) {
               pr[ 0 ] = pr[ 1 ] + 1;
               pr[ 1 ] = pr[ 2 ] - 1;

/* Otherwise, if this is the last range, store the gap between the
   end of the current range and the last nested index value. */
            } else {
               pr[ 0 ] = pr[ 1 ] + 1;
               pr[ 1 ] = max_nest - 1;
            }

/* Increment the pointer to the next range. */
            pr += 2;
         }

/* If the last range extended to the last nested index value, we will end
   up with one fewer range than we had to begin with. */
         this->nrange = irange;

/* Now handle cases where the first range does not start at zero. There
   will be a gap before it. */
      } else {

/* Loop round all the ranges to be negated. Replace each range with the
   gap between it and the preceding range (or cell zero if there is no
   preceding range). */
         istart = 0;
         pr = this->range + 2*start;
         for( irange = start; irange < this->nrange; irange++ ) {

/* Record the index at which the next gap (if any) starts. */
            next_start = pr[ 1 ] + 1;

/* The end of the "current range" is changed to be the end of the gap
   between the previous range and the current range. Note, we have
   already checked that "pr[0]" is greater than zero. */
            pr[ 1 ] = pr[ 0 ] - 1;

/* The start of the "current range" is changed to be the start of the gap
   between the previous range and the current range. */
            pr[ 0 ] = istart;

/* Update the start of the next gap. */
            istart = next_start;

/* Increment the pointer to the next range. */
            pr += 2;
         }

/* If the last range ended before the last nested index value, there
   is a gap after it and so we will end up with one more range than we
   had to begin with. Extend the ranges array and then add in the gap
   following the final range. */
         if( istart < max_nest ) {
            irange = this->nrange++;
            this->range = astGrow( this->range, this->nrange, 2*sizeof(*(this->range)) );
            pr = this->range + 2*irange;
            if( astOK ) {
               pr[ 0 ] = istart;
               pr[ 1 ] = max_nest - 1;
            }
         }
      }
   }
}

static void NestedToXy( int64_t nested, int order, int *ix, int *iy ){
/*
*  Name:
*     NestedToXy

*  Purpose:
*     Get the HPX12 grid coords of the cell at given HEALPix nested index

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void NestedToXy( int64_t nested, int order, int *ix, int *iy )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the HPX12 grid coords of the cell at given
*     HEALPix nested index. This function is the inverse of XyToNested.

*  Parameters:
*     nested
*        The nested index of the required HEALPix cell.
*     order
*        The HEALPix order.
*     ix
*        Pointer to an int returned holding the one-based grid X index of
*        the cell within the HPX12 projection.
*     iy
*        Pointer to an int returned holding the one-based grid Y index of
*        the cell within the HPX12 projection.

*/

/* Local Variables: */
   int fi;
   int fx;
   int fy;
   int nppf;
   int64_t tx;
   int64_t ty;
   int64_t tj;

/* The least significant "2*order" bits hold the x index in the even bits
   and the y index in the odd bits (both relative to the south corner of
   the facet). The next more significant four bits holds the facet index.
   Get the zero-based facet index. */
   fi = ( nested >> (2*order) );

/* Facet indices must be in the range 0-11. */
   if( fi < 12 ) {

/* Get the lowest "2*order" bits. */
      tj = nested & ( ( ONE << (2*order) ) - 1 );

/* Reverse the process in XyToNested to extract the even and odd bits
   from "tj" into "tx" and "ty" - the zero-based offsets from the bottom
   left (i.e. south) corner of the facet to the requested cell. */
      tx = (tj >> 1 ) & 0x5555555555555555;
      ty = tj & 0x5555555555555555;

      tx = (tx | (tx >> 1))  & 0x3333333333333333;
      tx = (tx | (tx >> 2))  & 0x0F0F0F0F0F0F0F0F;
      tx = (tx | (tx >> 4))  & 0x00FF00FF00FF00FF;
      tx = (tx | (tx >> 8))  & 0x0000FFFF0000FFFF;
      tx = (tx | (tx >> 16)) & 0x00000000FFFFFFFF;

      ty = (ty | (ty >> 1))  & 0x3333333333333333;
      ty = (ty | (ty >> 2))  & 0x0F0F0F0F0F0F0F0F;
      ty = (ty | (ty >> 4))  & 0x00FF00FF00FF00FF;
      ty = (ty | (ty >> 8))  & 0x0000FFFF0000FFFF;
      ty = (ty | (ty >> 16)) & 0x00000000FFFFFFFF;

/* Get the number of cells along one edge of a facet.*/
      nppf = ( 1 << order );

/* Change tx so that it is measured in the opposite direction, starting
   at the bottom left corner of the facet. */
      tx = nppf - 1 - tx;

/* Get the offset in facet along X and Y from the bottom left corner of
   the HPX12 projection to the botton left corner of the facet. */
      if( fi < 4 ) {
         fx = fi;
         fy = fx + 1;
      } else if( fi < 8 ) {
         fx = fi - 4;
         fy = fx;
      } else {
         fx = fi - 7;
         fy = fx - 1;
      }

/* Convert these offsets from facets to cells and add them onto the
   offsets within the facet found above. Increment to get the required
   1-based X and Y indices. */
      *ix = tx + fx*nppf + 1;
      *iy = ty + fy*nppf + 1;

/* Return -1 if the facet index is out of bounds */
   } else {
      *ix = -1;
      *iy = -1;
   }

}

static double OrderToRes( int order ){
/*
*  Name:
*     OrderToRes

*  Purpose:
*     Get the mean resolution of a specified HEALPix order.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     double OrderToRes( int order )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the mean resolution, in arc-seconds, corresponding
*     to the supplied HEALPix order.

*  Parameters:
*     order
*        The HEALPix order.

*  Returned Value:
*     The mean resolution, in arc-seconds.
*/

/* Check the supplied value. */
   if ( order < 0 || order > AST__MXORDHPX ) return 0;

/* There are 12*4^(order) equal area pixels covering the whole sphere. So
   divide 4.pi steradians by 12*4^(order) to get the area of one pixel.
   Convert to square arc-seconds and then take the square root to get he
   mean pixel size. */
   return 211076.29/(double)( 1 << order );
}

static void PutCell( AstMoc *this, AstMapping **map, AstDim ncell, AstDim *ix,
                     AstDim *iy, int order, CellList *clist, int regtype,
                     void *data, int cmode, int *inorout, const char *method,
                     int *status ){
/*
*  Name:
*     PutCell

*  Purpose:
*     Add a list of HEALPix cells into a CellList if it is an interior cell.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void PutCell( AstMoc *this, AstMapping **map, AstDim ncell, AstDim *ix,
*                   AstDim *iy, int order, CellList *clist, int regtype,
*                   void *data, int cmode, int *inorout, const char *method,
*                   int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function examines a each specified HEALPix cell at a
*     specified order to see if it overlaps a specified region of
*     interest on the sky. If the cell is contained entirely within the
*     region of interest, the complete cell is added to the supplied
*     CellList. If the cell falls entirely outside the region of interest
*     it is ignored. If it falls on the edge of the region of interest, the
*     cell is subdivided into four child cells (i.e. the HEALPix order is
*     increased by one), and this function is called recursively to check
*     each child cell.

*  Parameters:
*     this
*        Pointer to the Moc.
*     map
*        Pointer to an array of Mapping pointers. Each Mapping transforms
*        from grid coordinates within an all-sky HPX-like projection
*        to  the coordinate system used for determining if a given position
*        is inside or outside the region of interest (as indicated by the
*        value of parameter "regtype"). The Mapping stored at index "i"
*        within the supplied array of pointers is for HEALPix order "i".
*        The supplied array should have "maxorder+1" elements. The
*        HPX-like projection used is indicated by the "iproj" field in the
*        "clist" structure, as is the maxorder value.
*     ncell
*        The number of cells  supplied in "ix" and "iy", each to be put
*        into the CellList.
*     ix
*        A list of the 1-based grid index of each cell to be added, on the
*        first (X) input axis of Mapping "map[order]". Length of this
*        array is given by "ncell".
*     iy
*        A list of the 1-based grid index of the cell to be added, on the
*        second (Y) input axis of Mapping "map[order]". Length of this
*        array is given by "ncell".
*     order
*        The 0-based order to which "ix" and "iy" refer.
*     clist
*        Pointer to a structure holding a list of the grid coords, at
*        all orders, at the centre of the cells that are inside the region
*        of interest. The contents of this structure are updated on exit to
*        hold any parts of the supplied cell that are inside the region of
*        intertest.
*     regtype
*        Indicates how the region of interest is defined:
*        0: By an AST Region object. The outputs of "map" should be in
*        the Frame represented by the Region. The "data" pointer should
*        be a pointer to the Region.
*        1: By a 2D pixel array. The outputs of "map" should be in grid
*        coordinates within the pixel array. The "data" pointer should
*        be a pointer to a PixelMask structure.
*     data
*        Pointer to an object that defines the region of interest. See
*        "regtype".
*     inorout
*        Array of flags, one for each cell to be put into the cell list.
*        If a flag is positive, all corners of the corresponding cell are
*        outside the region of interest, so assume the whole cell is outside.
*        If negative, all corners are inside the region of interest, so
*        assume the whole cell is inside.
*        If zero, some corners of the cell are inside and some are
*        outside the region of interest, so subdivide.
*        If NULL is suppliued, zero is assumed for all cells.
*     method
*        Name of calling method - for error messages.
*     status
*        Inherited status value.

*  Notes:
*     - Speeding up this algorithm by passing down corner information
*     from the higher level sounds plausible, but in fact causes problems
*     for regions which intersect the discontinuities at RA=0/6/12/18/24
*     hours. At such points, the fact that a corner position is a valid
*     interior point at order N does not guarantee that it is a valid
*     interior point at order N+1, because the edges of the valid region
*     of the projection changes with the order.

*/

/* Local Variables: */
   AstDim *ilist;
   AstDim *jlist;
   AstDim icell;
   AstDim ixc;
   AstDim iyc;
   AstDim nput;
   AstDim psize;
   AstPointSet *ps2;
   AstPointSet *ps1;
   AstPointSet *ps3;
   AstRegion *region;
   double **ptr3;
   double **ptr1;
   double *px;
   double *py;
   int *inside;
   int *iolist;
   int *pin;
   int allin;
   int allout;
   int i;
   int ii;
   int j;
   int k;
   int npoint;
   int pinc;

/* Check the global error status. */
   if( !astOK ) return;

/* Initialise */
   inside = NULL;

/* How many test points per cell? If we have reached the maximum order,
   just test the centre of each specified cell. Otherwise, test a 3x3
   grid of points. */
   if( order == clist->maxorder ) {
      npoint = 1;
   } else {
      npoint = 9;
   }

/* Count how many zero values there are in the inorout array. Each zero
   value (meaning that the "in-or-our" state of the cell is unknown)
   requires 1/9 test points to be transformed. A NULL pointer means "all
   zeros". */
   if( inorout ){
      psize = 0;
      for( icell = 0; icell < ncell; icell++ ) {
         if( !inorout[ icell ] ) psize++;
      }
   } else {
      psize = ncell;
   }

/* If the in/out state of any cell is not known, we find it now. */
   if( psize > 0 ) {

/* Create a PointSet that will be needed and get pointers to its data
   arrays. */
      ps1 = astPointSet( psize*npoint, 2, "", status );
      ptr1 = astGetPoints( ps1 );
      if( astOK ) {
         px = ptr1[ 0 ];
         py = ptr1[ 1 ];

/* Loop round each cell to be added to the moc. */
         for( icell = 0; icell < ncell; icell++ ) {

/* If we do not yet know if the cell is either completely inside or
   completely outside the ROI, we test a grid of points (1 or 9) spread
   over the cell. So add the grid of points to be tested to the relevant
   PointSet. */
            if( !inorout || !inorout[ icell ] ) {

/* If we have reached the maximum order, just test the centre of each
   specified cell. */
               if( order == clist->maxorder ) {
                  *(px++) = ix[ icell ];
                  *(py++) = iy[ icell ];

/* Otherwise, test a 3x3 grid of points covering each specified cell. */
               } else {
                  for( j = -1; j <= 1; j++ ) {
                     for( i = -1; i <= 1; i++ ) {
                        *(px++) = ix[ icell ] + HALF*i;
                        *(py++) = iy[ icell ] + HALF*j;
                     }
                  }
               }
            }
         }

/* Transform these positions into region of interest coordinates. */
         ps2 = astTransform( map[order], ps1, 1, NULL );

/* Allocate room to hold a flag for each test point indicating if the
   test point isiinside the ROI.  */
         inside = astCalloc( npoint*psize, sizeof(*inside) );
         if( astOK ) {

/* If all the positions for a single cell are inside the region of interest,
   set the flag inicating that the entire cell is inside the region of
   interest.  First do ROIs defined by a Region... */
            if( regtype == 0 ) {

/* If the ROI is defined by an AST Region object, use the Region to
   transform the points in ps2. The results will be bad if the point is
   outside the Region. Construct an array of 9 flags indicating which
   points on the 3x3 grid covering the cell are inside the ROI. The array
   of flags is in raster order, bottom left to top right. */
               region = (AstRegion *) data;
               ps3 = astTransform( region, ps2, 1, NULL );
               ptr3 = astGetPoints( ps3 );
               if( astOK ) {
                  px = ptr3[ 0 ];
                  pin = inside;
                  for( icell = 0; icell < psize; icell++ ) {

/* If only a single point is being tested, test it. */
                     if( npoint == 1  ){
                        *(pin++) = ( *(px++) != AST__BAD );

/* Otherwise a 3x3 grid of points is being tested. */
                     } else {
                        for( i = 0; i < npoint; i++ ) {
                           *(pin++) = ( *(px++) != AST__BAD );
                        }
                     }
                  }
               }
               ps3 = astAnnul( ps3 );

/* If the ROI is defined by a pixel array, see which of the positions
   correspond to selected pixels in the array and fill the "inside"
   array with appropriate values. */
            } else {
               TestPixels( (PixelMask *) data, npoint*psize, ps2, inside,
                           status );
            }
         }

/* Free resources. */
         ps2 = astAnnul( ps2 );
      }
      ps1 = astAnnul( ps1 );
   }

/* If all has gone OK, do each supplied cell in turn. */
   if( astOK ){
      nput = 0;
      ilist = NULL;
      jlist = NULL;
      iolist = NULL;
      pin = inside;
      for( icell = 0; icell < ncell; icell++ ) {

/* Determine if the cell is all inside or all outside the region of
   interest. First deal with cases where we were not told if the cell is
   in or out, and therefore we need to use the test points determined
   above. */
         if( !inorout || !inorout[ icell ] ) {
            pinc = 1;
            allin = 1;
            allout = 1;
            for( i = 0; i < npoint; i++ ) {
               if( pin[ i ] ) {
                  allout = 0;
               } else {
                  allin = 0;
               }
            }

/* Otherwise, set the allin and allout flags approprtiately. */
         } else if( inorout[ icell ] > 0 ) {
            pinc = 0;
            allout = 1;
            allin = 0;
         } else {
            pinc = 0;
            allout = 0;
            allin = 1;
         }

/* If the current cell appears to be inside the region of interest, add it
   to the supplied CellList. */
         if( allin ) {
            if( clist->len[ order ] < INT_MAX - 2 ) {
               ii = clist->len[ order ]++;
               clist->ix[ order ] = astGrow( clist->ix[ order ], ii + 1,
                                             sizeof(*(clist->ix[ order ])));
               clist->iy[ order ] = astGrow( clist->iy[ order ], ii + 1,
                                             sizeof(*(clist->iy[ order ])));
            } else {
               astError( AST__BGMOC, "%s(%s): The normalised MOC has too "
                         "many elements.", status, method, astGetClass( this ) );
            }
            if( astOK ) {
               clist->ix[ order ][ ii ] = ix[ icell ];
               clist->iy[ order ][ ii ] = iy[ icell ];
            }

/* Otherwise, if the cell appears to be partially inside the region of
   interest, divide up the current cell into 4 cells at order "order+1", and
   call this function recursively to add the bits of each one that are inside
   the region of interest. Do not do this if we are at the maximum order.
   Of the four sub-cells, only sub-divide the ones for which at least one
   corner is inside and at least one corner is outside. */
         } else if( !allout && order < clist->maxorder ) {
            k = 0;
            iyc = 2*iy[ icell ] - 1;
            for( j = 0; j < 2; j++,iyc++,k++ ) {
               ixc = 2*ix[ icell ] - 1;
               for( i = 0; i < 2; i++,ixc++,k++ ) {

/* See if the four corners of the current sub-cell are entirely inside or
   entirely outside the ROI. */
                  allin = 1;
                  allout = 1;

                  if( pin[k] ) {
                     allout = 0;
                  } else {
                     allin = 0;
                  }

                  if( pin[k+1] ) {
                     allout = 0;
                  } else {
                     allin = 0;
                  }

                  if( pin[k+3] ) {
                     allout = 0;
                  } else {
                     allin = 0;
                  }

                  if( pin[k+4] ) {
                     allout = 0;
                  } else {
                     allin = 0;
                  }

/* Add the current sub-cell to the list to be put into the moc. */
                  nput++;
                  ilist = astGrow( ilist,  nput, sizeof(*ilist) );
                  jlist = astGrow( jlist,  nput, sizeof(*jlist) );
                  iolist = astGrow( iolist,  nput, sizeof(*iolist) );
                  if( astOK ) {
                     ilist[ nput - 1 ] = ixc;
                     jlist[ nput - 1 ] = iyc;
                     iolist[ nput - 1 ] = allout-allin;
                  }
               }
            }
         }

/* Move on to the next "inside" flag if this cell had an associated set
   of "inside" flags. */
         if( pinc ) pin += npoint;
      }

/* If there are any subcells to be put into the moc, do it then free the
   lists. */
      if( nput ) {
         PutCell( this, map, nput, ilist, jlist, order + 1, clist, regtype,
                  data, cmode, iolist, method, status );
         ilist = astFree( ilist );
         jlist = astFree( jlist );
         iolist = astFree( iolist );
      }
   }

/* Free the array of inside flags */
   inside = astFree( inside );
}

static void RegBaseBox( AstRegion *this_region, double *lbnd,
                        double *ubnd, int *status ){
/*
*  Name:
*     RegBaseBox

*  Purpose:
*     Returns the bounding box of an un-negated Region in the base Frame of
*     the encapsulated FrameSet.

*  Type:
*     Private function.

*  Synopsis:
*     #include "circle.h"
*     void RegBaseBox( AstRegion *this, double *lbnd, double *ubnd,
*                      int *status )

*  Class Membership:
*     Circle member function (over-rides the astRegBaseBox protected
*     method inherited from the Region class).

*  Description:
*     This function returns the upper and lower axis bounds of a Region in
*     the base Frame of the encapsulated FrameSet, assuming the Region
*     has not been negated. That is, the value of the Negated attribute
*     is ignored.

*  Parameters:
*     this
*        Pointer to the Region.
*     lbnd
*        Pointer to an array in which to return the lower axis bounds
*        covered by the Region in the base Frame of the encapsulated
*        FrameSet. It should have at least as many elements as there are
*        axes in the base Frame.
*     ubnd
*        Pointer to an array in which to return the upper axis bounds
*        covered by the Region in the base Frame of the encapsulated
*        FrameSet. It should have at least as many elements as there are
*        axes in the base Frame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstMoc *this;
   AstPointSet *ps;
   double **ptr;
   double *pdec;
   double *pra;
   double maxdec;
   double maxra0;
   double maxra12;
   double mindec;
   double minra0;
   double minra12;
   double ra0;
   double ra12;
   double wid0;
   double wid12;
   int ip;
   int np;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get a pointer to the Moc structure */
   this = (AstMoc *) this_region;

/* The bounding box is cached in the Moc structure, in the form of RA and
   Dec values. If the bounds have not yet been calculated, calculate them
   now. */
   if( this->lbnd[ 0 ] == AST__BAD ) {

/* Get a mesh of points over the boundary of the MOC, in ICRS (the base
   Frame). */
     ps = astRegBaseMesh( this );
     ptr = astGetPoints( ps );
     np = astGetNpoint( ps );
     if( astOK ) {

/* Go though all the positions in the mesh, maintaining two bounding
   boxes - one centred on RA=0 and one centred on RA=12. */
        mindec = DBL_MAX;
        maxdec = -DBL_MAX;
        minra0 = DBL_MAX;
        maxra0 = -DBL_MAX;
        minra12 = DBL_MAX;
        maxra12 = -DBL_MAX;

        pra = ptr[ 0 ];
        pdec = ptr[ 1 ];
        for( ip = 0; ip < np; ip++,pdec++,pra++ ){
           if( *pdec < mindec ) mindec = *pdec;
           if( *pdec > maxdec ) maxdec = *pdec;

           ra12 = *pra;
           while( ra12 < 0.0 ) ra12 += 2*AST__DPI;
           while( ra12 > 2*AST__DPI ) ra12 -= 2*AST__DPI;
           if( ra12 < minra12 ) minra12 = ra12;
           if( ra12 > maxra12 ) maxra12 = ra12;

           ra0 = *pra;
           while( ra0 < -AST__DPI ) ra0 += 2*AST__DPI;
           while( ra0 > AST__DPI ) ra0 -= 2*AST__DPI;
           if( ra0 < minra0 ) minra0 = ra0;
           if( ra0 > maxra0 ) maxra0 = ra0;
         }

/* Get the width of the two bounding boxes, and choose the narrower. */
         wid0 = maxra0 - minra0;
         wid12 = maxra12 - minra12;
         if( wid0 < wid12 ) {
            this->lbnd[ 0 ] = minra0;
            this->ubnd[ 0 ] = maxra0;
         } else {
            this->lbnd[ 0 ] = minra12;
            this->ubnd[ 0 ] = maxra12;
         }

         this->lbnd[ 1 ] = mindec;
         this->ubnd[ 1 ] = maxdec;
      }

/* Free resources */
      ps = astAnnul( ps );
   }

/* Return the bounds. */
   lbnd[ 0 ] = this->lbnd[ 0 ];
   ubnd[ 0 ] = this->ubnd[ 0 ];
   lbnd[ 1 ] = this->lbnd[ 1 ];
   ubnd[ 1 ] = this->ubnd[ 1 ];
}

static AstPointSet *RegBaseMesh( AstRegion *this_region, int *status ){
/*
*  Name:
*     RegBaseMesh

*  Purpose:
*     Return a PointSet containing points spread around the boundary of a
*     Region.

*  Type:
*     Private function.

*  Synopsis:
*     #include "region.h"
*     AstPointSet *RegBaseMesh( AstRegion *this )

*  Class Membership:
*     Region virtual function.

*  Description:
*     This function returns a PointSet containing a set of points on
*     the boundary of the Moc. The points refer to the base Frame of
*     the encapsulated FrameSet (which is always ICRS for a Moc). The
*     points in the returned PointSet are ordered so that Dec increased
*     from start to end. Points with equal Dec (allowing for rounding
*     error) are sorted into increasing RA. All RA values are in the
*     range [0,2PI[.

*  Parameters:
*     this
*        Pointer to the Region.

*  Returned Value:
*     Pointer to the PointSet.

*  Notes:
*    - A NULL pointer is returned if an error has already occurred, or if
*    this function should fail for any reason.
*    - The implementation for the Moc class ignores the MeshSize
*    attribute defined by the parent Region class. Instead, a mesh point is
*    placed at every normalised Moc cell corner that falls on the boundary.
*/

/* Local Variables: */
   AstMoc *this;
   AstPointSet *result;
   Cell **neb;
   Cell *cell0;
   Cell *cell1;
   Cell *cell2;
   Cell *cell;
   Cell *cell_foot[ AST__MXORDHPX + 1 ];
   Cell *prev_cell;
   Corner *corner;
   Corner *corner_foot;
   Corner *new_corner;
   Corner *old_corner;
   Corner *prev_corner;
   Corner *start;
   astDECLARE_GLOBALS
   double **ptr;
   double *pdec;
   double *pra;
   int *newdist;
   int *pni;
   int core;
   int dist;
   int dstart;
   int icell;
   int icorner;
   int i;
   int ix;
   int iy;
   int j;
   int maxorder;
   int minorder;
   int ndis;
   int npoint;
   int nused;
   int order;
   int64_t *pnk;
   int64_t npix;

/* Initialise */
   result = NULL;

/* Check the local error status. */
   if ( !astOK ) return result;

/* Get a pointer to the Moc structure. */
   this = (AstMoc *) this_region;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(this);

/* If the Moc structure contains a pointer to a PointSet holding
   a previously created mesh, return it. */
   if( this->basemesh ) {
      result = astClone( this->basemesh );

/* Otherwise, if the Moc is empty, or covers the whole sky, indicate that
   it has no boundary by returned a PointSet containing a single point with
   a value of AST__BAD on every axis. */
   } else if( this->nrange == 0 || ( this->range[0] == 0 &&
              this->range[1] == 12*( ONE << 2*astGetMaxOrder(this) ) - 1 )){

      this->basemesh = astPointSet( 1, 2, "", status );
      ptr = astGetPoints( this->basemesh );
      this->meshdist = astMalloc( sizeof( *(this->meshdist ) ) );
      this->mdlen = 1;
      if( ptr ) {
         ptr[ 0 ][ 0 ] = AST__BAD;
         ptr[ 1 ][ 0 ] = AST__BAD;
         this->meshdist[ 0 ] = 0.0;
      }
      result = astClone( this->basemesh );

/* Otherwise, create a new mesh. */
   } else {

/* Get the resolution of the Moc. Convert from arc-seconds to radians.
   Use a tenth of the MOC resolution at the current order. */
      Comp_Corner_Tol = 0.1*AST__DD2R*OrderToRes( astGetMaxOrder( this ) )/3600.0;

/* Initialise pointers to the end of the chain of Cell structures at each
   order. */
      for( order = 0; order <= AST__MXORDHPX; order++ ) {
         cell_foot[ order ] = NULL;
      }

/* Ensure the normalised form of the MOC is available. */
      GetNorm( this, "astRegBaseMesh", status );

/* Set the pointer to the first nuniq value in the normalised moc. Use a
   local variable appropriate to the type of the normalised moc. */
      if( this->knorm ) {
         pnk = this->knorm;
         pni = NULL;
      } else {
         pni = this->inorm;
         pnk = NULL;
      }

/* Go through all the nuniq values in the normalised MOC. */
      minorder = -1;
      maxorder = -1;
      for( icell = 0; icell < this->moclength; icell++ ) {

/* Decode the nuniq value to get the order and npix, using a fast log2
   function. Increment the pointer to the next nuniq value. */
         if( pnk ) {
            order = log2_64( *pnk / 4 ) / 2;
            npix = *pnk - ( ONE << (2 + 2*order) );
            pnk++;
         } else {
            order = log2_32( *pni / 4 ) / 2;
            npix = *pni - ( 1 << (2 + 2*order) );
            pni++;
         }

/* Convert the nested index (npix) to grid coords in an HPX12 projection. */
         NestedToXy( npix, order, &ix, &iy );

/* Create a Cell structure to describe the current nuniq value and append it
   to the end of the chain of Cell structures at the current order. */
         (void) MakeCell( ix, iy, order, cell_foot, status );

/* Keep track of the highest and lowest order for which we have cells. */
         if( cell_foot[ order ] ) {
            if( minorder == -1 ) minorder = order;
            maxorder = order;
         }
      }

/* Find the edges of the cells at increasing orders. Each pass round this
   loop moves boundary cells from 'order' to the equivalent 4 child cells
   at 'order+1', and then deletes all remaining (i.e. non-boundary) cells
   at 'order'. So after the final pass (which has order = maxorder-1), all
   cells will be at order 'maxorder'. */
      for( order = minorder; order < maxorder; order++ ) {

/* Skip this order if there are no cells at it. */
         if( cell_foot[ order ] && astOK ) {

/* Create chains of Corner structures for all cells at the current order.
   A Corner holds the (RA,Dec) of a point on the sky, plus pointers to
   up to four Cell structures that have that point at one of its corners.
   A Corner is an "interior position" if it corresponds to a corner of
   exactly four cells (there are a few special cases where interior
   points may only be used by 3 cells). Note, whether a corner is
   interior does not depend on whether the adjacent cells are flagged
   as interior, it just depends on how many cells touch the corner. */
            MakeCorners( this, order, cell_foot[ order ],
                         &corner_foot, 0, status );

/* Identify interior cells (cells for which all the corners are
   interior positions). Cells which are children of interior cells
   at the next lower order will already be flagged as interior. */
            cell = cell_foot[ order ];
            while( cell ) {
               if( cell->bl->interior && cell->tl->interior &&
                   cell->tr->interior && cell->br->interior ) {
                  cell->interior = 1;
               }
               cell = cell->prev;
            }

/* Find interior cells that are adjacent to at least one boundary cell
   (i.e. find interior cells that are not also "core" cells). Subdivide
   these, plus all boundary cells, into four child cells at the next
   order, and add these child cells to the chain of cells at the next
   order. We need to retain a layer of interior cells that are on the
   inside of the boundary layer to prevent the inside edge of the hole
   of unused cells in the middle of the region being mistaken for a
   boundary of the region. */
            cell = cell_foot[ order ];
            while( cell ) {

/* Assume this cell is a core cell (i.e. surrounded by interior cells on
   all sides). */
               core = 1;

/* If the bottom left corner touches a cell that is not interior, then
   the current cell is not a core cell. */
               neb = cell->bl->cells;
               for( icell = 0; icell < cell->bl->ncell; icell++ ) {
                  if( !((*(neb++))->interior) ) {
                     core = 0;
                     break;
                  }
               }

/* Otherwise, if the top left corner touches a cell that is not interior,
   then the current cell is not a core cell. */
               if( core ) {
                  neb = cell->tl->cells;
                  for( icell = 0; icell < cell->tl->ncell; icell++ ) {
                     if( !((*(neb++))->interior) ) {
                        core = 0;
                        break;
                     }
                  }
               }

/* Otherwise, if the top right corner touches a cell that is not interior,
   then the current cell is not a core cell. */
               if( core ) {
                  neb = cell->tr->cells;
                  for( icell = 0; icell < cell->tr->ncell; icell++ ) {
                     if( !((*(neb++))->interior) ) {
                        core = 0;
                        break;
                     }
                  }
               }

/* Otherwise, if the bottom right corner touches a cell that is not interior,
   then the current cell is not a core cell. */
               if( core ) {
                  neb = cell->br->cells;
                  for( icell = 0; icell < cell->br->ncell; icell++ ) {
                     if( !((*(neb++))->interior) ) {
                        core = 0;
                        break;
                     }
                  }
               }

/* If the current cell is core, check it is flagged as interior. */
               if( core ) {
                  if( !( cell->interior ) && astOK ) {
                     astError( AST__INTER, "astRegBaseMesh(%s): Core cell "
                               "not flagged as interior (internal programming "
                               "error).", status, astGetClass( this ) );
                     break;
                  }

/* If the current cell is not core, append its children to the end of the
   chain of cells at the next order. These child cells will be flagged as
   interior if the parent cell is interior. */
               } else {
                  AppendChildren( this, cell, order, cell_foot, status );
               }

/* Move on to the next cell. */
               cell = cell->prev;
            }

/* Delete all cells at the current order */
            cell = cell_foot[ order ];
            while( cell ) {
                prev_cell = cell->prev;
                (void) astFree( cell );
                cell = prev_cell;
            }

/* Delete all corners at the current order */
            corner = corner_foot;
            while( corner ) {
                prev_corner = corner->prev;
                (void) astFree( corner );
                corner = prev_corner;
            }

/* Ensure the Cell foot pointer is nullified for this order. */
            cell_foot[ order ] = NULL;
         }
      }

/* All cells are now at the maximum order and "core" cells have been
   removed (i.e. each remaining cell is either a boundary cell or
   adjacent to a boundary cell). Create the chain of Corners for the
   cells at this order.  Indicate that the chain should be sorted
   (primary key is Dec, secondary key is RA). */
      MakeCorners( this, maxorder, cell_foot[ maxorder ], &corner_foot,
                   1, status );


#ifdef MESH_DEBUG
corner = corner_foot;
while( corner ) {
   dump_corner( corner, maxorder );
   corner = corner->prev;
}

cell = cell_foot[ maxorder ];
while( cell ) {
   dump_cell( this, cell, maxorder );
   cell = cell->prev;
}

FILE *fd = fopen( "path.asc", "w" );
fprintf( fd, "# corner dist\n" );
#endif



/* We now measure how far around the perimeter we need to go to reach
   each non-interior corner, starting from an arbitrary starting point.
   This information is needed by the astRegTrace method. The distance
   to each non-interior corner (in units of corners) is stored in the
   "dist" component of the Corner structure. These will have been
   initialised above to INT_MAX, indicating "no distance yet found".
   Initialise the distance from the start to zero and then loop
   until all non-interior corners have a distance. */
      dist = 0;
      while( astOK ) {

/* Find the first non-interior corner that has not yet been assigned a
   perimeter distance. */
         corner = corner_foot;
         while( corner && ( corner->interior || corner->dist != INT_MAX ) ) {
             corner = corner->prev;
         }

/* We are done if no such non-interior corner was found. */
         if( !corner ) break;

/* There could be several disjoint areas in the Moc, each having its own
   permimeter. The corner we have found above marks the start of such a
   perimeter. Loop until we arrive back at the starting corner. */
         old_corner = NULL;
         start = corner;
         while( astOK  ) {

/* Store the distance (as a number of corners) along the perimeter from the
   start to the current corner. If the corner already has a distance
   (i.e. because it is the touching point between two otherwise disjoint
   regions), leave the existing distance unchanged. */
            if( corner->dist == INT_MAX ) {
               corner->dist = dist++;

/* The Moc may contain several disjoint regions. We mark the start of each such
   region with a negative "dist" value ( "dist" == 0 marks the start of
   the first disjoint region). */
               if( !old_corner ) corner->dist = -corner->dist;
            }

#ifdef MESH_DEBUG
fprintf( fd, "%p %d\n", corner, corner->dist );
#endif

/* Indicate we have not yet chosen the next corner on the path. */
            new_corner = NULL;

/* Since the current corner is not interior it can be used by at most 3
   cells. Save convenience pointers to them. These pointers are checked
   in the order "cell0", "cell1", "cell2" to see if an onward route can
   be found to a corner of the cell. If the corner is used by only one
   cell, it becomes "cell0". */
            if( corner->ncell == 1 ) {
               cell0 = corner->cells[ 0 ];
               cell1 = NULL;
               cell2 = NULL;

/* If the corner is used by two cells, the cell that contains the old
   corner as well as the current corner becomes "cell1", and the other
   cell becomes "cell0". This gives priority to onward routes that go to
   the new cell ("cell0") rather than going back to the old cell. If
   there is no old corner (i.e. this is the start of a new disjoint
   region), the choice is arbitrary. */
            } else if( corner->ncell == 2 ) {
               cell1 = corner->cells[ 0 ];
               if( cell1->bl == old_corner ||
                   cell1->tl == old_corner ||
                   cell1->tr == old_corner ||
                   cell1->br == old_corner ) {
                  cell0 = corner->cells[ 1 ];
               } else {
                  cell0 = cell1;
                  cell1 = corner->cells[ 1 ];
               }
               cell2 = NULL;

/* If the corner is used by three cells, the cell that contains the old
   corner as well as the current corner becomes "cell2" (lowest priority),
   and the other two cells become "cell0" and "cell1". This gives priority
   to onward routes that do not go back to the old cell. If there is no
   old corner (i.e. this is the start of a new disjoint region), the choice
   is arbitrary. */
            } else if( corner->ncell == 3 ) {
               if( old_corner ) {
                  for( icell = 0; icell < 3; icell++ ) {
                     cell2 = corner->cells[ icell ];
                     if( cell2->bl == old_corner ||
                         cell2->tl == old_corner ||
                         cell2->tr == old_corner ||
                         cell2->br == old_corner ) break;
                  }
                  if( icell == 4 && old_corner ) {
                     astError( AST__INTER, "astRegBaseMesh(%s): Old corner "
                               "not found (internal programming error).",
                               status, astGetClass( this ) );
                     break;
                  }
               } else {
                  icell = 0;
                  cell2 = corner->cells[ 0 ];
               }

/* Of the other two cells, prefer routes that continue to the cell that
   is diagonally opposite the cell containing the old corner. Assign the
   remaining two cells to "cell0" and "cell1", then swap them if cell1
   is diagonally opposite "cell2". */
               cell0 = corner->cells[ ( icell + 1 ) % 3 ];
               cell1 = corner->cells[ ( icell + 2 ) % 3 ];
               if( ( cell2->tr == corner && cell1->bl == corner ) ||
                   ( cell2->br == corner && cell1->tl == corner ) ||
                   ( cell2->bl == corner && cell1->tr == corner ) ||
                   ( cell2->tl == corner && cell1->br == corner ) ) {
                  cell = cell0;
                  cell0 = cell1;
                  cell1 = cell;
               }

/* The corner should never be used by more than 3 cells. */
            } else {
               astError( AST__INTER, "astRegBaseMesh(%s): Boundary corner "
                         "used by %d cells (internal programming error).",
                         status, astGetClass( this ), corner->ncell );
               break;
            }

/* Find the corner in cell0 and see if the neighbouring corner in the
   clockwise direction within cell0 is a boundary point that has not yet
   been included in the path. If so, we use it as the next corner. */
            new_corner = NULL;
            if( corner == cell0->bl && !cell0->tl->interior && cell0->tl->dist == INT_MAX ) {
               new_corner = cell0->tl;
            } else if( corner == cell0->tl && !cell0->tr->interior && cell0->tr->dist == INT_MAX ) {
               new_corner = cell0->tr;
            } else if( corner == cell0->tr && !cell0->br->interior && cell0->br->dist == INT_MAX ) {
               new_corner = cell0->br;
            } else if( corner == cell0->br && !cell0->bl->interior && cell0->bl->dist == INT_MAX ) {
               new_corner = cell0->bl;
            }

/* If both the original corner and the new corner are corners of one of the
   neighbouring cells, then the boundary cannot pass between them since the
   line between the two corners must be a border between the two cells. */
            if( new_corner ) {
               if( cell1 &&( new_corner == cell1->tl ||
                             new_corner == cell1->tr ||
                             new_corner == cell1->br ||
                             new_corner == cell1->bl ) ){
                  new_corner = NULL;
               } else if( cell2 &&( new_corner == cell2->tl ||
                             new_corner == cell2->tr ||
                             new_corner == cell2->br ||
                             new_corner == cell2->bl ) ){
                  new_corner = NULL;
               }
            }

/* If this failed to produce a new corner, then do the same using cell1
   (if it exists). */
            if( !new_corner && cell1 ) {
               if( corner == cell1->bl && !cell1->tl->interior && cell1->tl->dist == INT_MAX ) {
                  new_corner = cell1->tl;
               } else if( corner == cell1->tl && !cell1->tr->interior && cell1->tr->dist == INT_MAX ) {
                  new_corner = cell1->tr;
               } else if( corner == cell1->tr && !cell1->br->interior && cell1->br->dist == INT_MAX ) {
                  new_corner = cell1->br;
               } else if( corner == cell1->br && !cell1->bl->interior && cell1->bl->dist == INT_MAX ) {
                  new_corner = cell1->bl;
               }

               if( new_corner ) {
                  if( cell0 &&( new_corner == cell0->tl ||
                                new_corner == cell0->tr ||
                                new_corner == cell0->br ||
                                new_corner == cell0->bl ) ){
                     new_corner = NULL;
                  } else if( cell2 &&( new_corner == cell2->tl ||
                                new_corner == cell2->tr ||
                                new_corner == cell2->br ||
                                new_corner == cell2->bl ) ){
                     new_corner = NULL;
                  }
               }
            }

/* If this failed to produce a new corner, then do the same using cell2
   (if it exists). */
            if( !new_corner && cell2 ) {
               if( corner == cell2->bl && !cell2->tl->interior && cell2->tl->dist == INT_MAX ) {
                  new_corner = cell2->tl;
               } else if( corner == cell2->tl && !cell2->tr->interior && cell2->tr->dist == INT_MAX ) {
                  new_corner = cell2->tr;
               } else if( corner == cell2->tr && !cell2->br->interior && cell2->br->dist == INT_MAX ) {
                  new_corner = cell2->br;
               } else if( corner == cell2->br && !cell2->bl->interior && cell2->bl->dist == INT_MAX ) {
                  new_corner = cell2->bl;
               }
               if( new_corner ) {
                  if( cell0 &&( new_corner == cell0->tl ||
                                new_corner == cell0->tr ||
                                new_corner == cell0->br ||
                                new_corner == cell0->bl ) ){
                     new_corner = NULL;
                  } else if( cell1 &&( new_corner == cell1->tl ||
                                new_corner == cell1->tr ||
                                new_corner == cell1->br ||
                                new_corner == cell1->bl ) ){
                     new_corner = NULL;
                  }
               }
            }

/* The above may fail to find a suitable new corner if two disjoint
   regions touch at the new corner, since that corner will already
   have a distance assigned to it when it comes to be checked as part of
   tracing the second disjoint region. So try the whole thing again, but
   this time allowing the new corner to have a pre-assigned distance (i.e.
   to already have been used). This means we give priority to adjacent
   corners that have not already been used, but allow used corners to be
   re-used if necessary. */
            if( !new_corner ) {
               if( corner == cell0->bl && !cell0->tl->interior ) {
                  new_corner = cell0->tl;
               } else if( corner == cell0->tl && !cell0->tr->interior ) {
                  new_corner = cell0->tr;
               } else if( corner == cell0->tr && !cell0->br->interior ) {
                  new_corner = cell0->br;
               } else if( corner == cell0->br && !cell0->bl->interior ) {
                  new_corner = cell0->bl;
               }

               if( new_corner ) {
                  if( cell1 &&( new_corner == cell1->tl ||
                                new_corner == cell1->tr ||
                                new_corner == cell1->br ||
                                new_corner == cell1->bl ) ){
                     new_corner = NULL;
                  } else if( cell2 &&( new_corner == cell2->tl ||
                                new_corner == cell2->tr ||
                                new_corner == cell2->br ||
                                new_corner == cell2->bl ) ){
                     new_corner = NULL;
                  }
               }

               if( !new_corner && cell1 ) {
                  if( corner == cell1->bl && !cell1->tl->interior ) {
                     new_corner = cell1->tl;
                  } else if( corner == cell1->tl && !cell1->tr->interior ) {
                     new_corner = cell1->tr;
                  } else if( corner == cell1->tr && !cell1->br->interior ) {
                     new_corner = cell1->br;
                  } else if( corner == cell1->br && !cell1->bl->interior ) {
                     new_corner = cell1->bl;
                  }

                  if( new_corner ) {
                     if( cell0 &&( new_corner == cell0->tl ||
                                   new_corner == cell0->tr ||
                                   new_corner == cell0->br ||
                                   new_corner == cell0->bl ) ){
                        new_corner = NULL;
                     } else if( cell2 &&( new_corner == cell2->tl ||
                                   new_corner == cell2->tr ||
                                   new_corner == cell2->br ||
                                   new_corner == cell2->bl ) ){
                        new_corner = NULL;
                     }
                  }

                  if( !new_corner && cell2 ) {
                     if( corner == cell2->bl && !cell2->tl->interior ) {
                        new_corner = cell2->tl;
                     } else if( corner == cell2->tl && !cell2->tr->interior ) {
                        new_corner = cell2->tr;
                     } else if( corner == cell2->tr && !cell2->br->interior ) {
                        new_corner = cell2->br;
                     } else if( corner == cell2->br && !cell2->bl->interior ) {
                        new_corner = cell2->bl;
                     }
                     if( new_corner ) {
                        if( cell0 &&( new_corner == cell0->tl ||
                                      new_corner == cell0->tr ||
                                      new_corner == cell0->br ||
                                      new_corner == cell0->bl ) ){
                           new_corner = NULL;
                        } else if( cell1 &&( new_corner == cell1->tl ||
                                      new_corner == cell1->tr ||
                                      new_corner == cell1->br ||
                                      new_corner == cell1->bl ) ){
                           new_corner = NULL;
                        }
                     }
                  }
               }

/* Count the number of consecutive corners that have already been used.
   Abort if the last five corners were all re-used, since we have
   probably got into a loop. */
               if( new_corner && ++nused == 5 && astOK ) {
                  astError( AST__INTER, "astRegBaseMesh(%s): Re-drawing "
                            "previously drawn corners (internal "
                            "programming error).", status, astGetClass( this ) );
               }

            } else {
               nused = 0;
            }

/* If we have arrived back at the first corner, break out of the loop. */
            if( new_corner == start ) break;

/* Sanity check. Check the next corner selected above is OK. */
            if( ( !new_corner || new_corner->interior ) && astOK ) {
               if( !new_corner ) {
                  astError( AST__INTER, "astRegBaseMesh(%s): Next perimeter "
                            "corner is undefined (internal programming error).",
                            status, astGetClass( this ) );
               } else {
                  astError( AST__INTER, "astRegBaseMesh(%s): Next perimeter "
                            "corner is interior (internal programming error).",
                            status, astGetClass( this ) );
               }
            }

/* Record the previous corner, and move on to the next corner. */
            old_corner = corner;
            corner = new_corner;
         }
      }

#ifdef MESH_DEBUG
fclose( fd );
#endif

/* Create the returned PointSet and put the (ra,dec) values into it
   from each non-interior corner. First count the number of non-interior
   corners. */
      if( astOK ){
         npoint = 0;
         corner = corner_foot;
         while( corner ) {
            if( !(corner->interior) ) npoint++;
            corner = corner->prev;
         }
      }

/* Allocate an array to hold the indices within the returned PointSet in
   order of increasing perimeter distance. */
      this->meshdist = astCalloc( npoint, sizeof( *(this->meshdist ) ) );

/* Create the PointSet, and get pointers to its data arrays. */
      result = astPointSet( npoint, 2, " ", status );
      ptr = astGetPoints( result );
      if( astOK ) {
         pra = ptr[ 0 ];
         pdec = ptr[ 1 ];

/* Store the RA and Dec values at all non-interior corners, then delete
   the corners. Also invert the "distance" values stored in the Corner
   structures to get an array that indexes the mesh in order of distance
   around the perimeter. Negative values in this array indicate breaks
   in the perimeter between separate disjoint regions. Count the number
   of disjoint regions. */
         ndis = 1;
         icorner = 0;
         corner = corner_foot;
         while( corner ) {
             if( !corner->interior ) {
                *(pra++) = corner->ra;
                *(pdec++) = corner->dec;

                if( corner->dist >= 0 ) {
                   (this->meshdist)[ corner->dist ] = icorner++;
                } else {
                   (this->meshdist)[ -corner->dist ] = -(icorner++);
                   ndis++;
                }

             }
             prev_corner = corner->prev;
             (void) astFree( corner );
             corner = prev_corner;
         }

/* Store it in the parent Region structure for future use. */
         this->basemesh = astClone( result );
      }

/* Add an extra point into the meshdist array at the end of each disjoint
   region. This extra point is set to be a copy of the first point in the
   same disjoint region, and causes each region to be closed (last point
   joined to first point). */
      this->mdlen = npoint + ndis;
      newdist = astCalloc( this->mdlen, sizeof( *newdist ) );
      if( astOK ) {
         j = 0;
         dstart = (this->meshdist)[ 0 ];

/* Loop round each point in the existing meshdist array. */
         for( i = 0; i < npoint; i++ ) {

/* If the meshdist value is negative, insert a copy of the meshdist value
   from the start of the current disjoint region. Then record the
   distance at the start of the new disjoint region, negating it to make
   it positive. */
            if( (this->meshdist)[ i ] < 0 ) {
               newdist[ j++ ] = dstart;
               dstart = -(this->meshdist)[ i ];
            }

/* Copy the current meshdist value to the new array. */
            newdist[ j++ ] = (this->meshdist)[ i ];
         }

/* Finish with a copy of the distance at the start of the final disjoint
   region. */
         newdist[ j++ ] = dstart;

/* Sanity check. */
         if( j != this->mdlen && astOK ) {
            astError( AST__INTER, "astRegBaseMesh(%s): Mesh distance "
                      "array has wrong length (internal programming error).",
                      status, astGetClass( this ) );
         }

/* Free the original meshdist array and use the new one instead. */
         (void) astFree( this->meshdist );
         this->meshdist = newdist;
      }

/* Free the remaining cells. */
      cell = cell_foot[ maxorder ];
      while( cell ) {
          prev_cell = cell->prev;
          (void) astFree( cell );
          cell = prev_cell;
      }
   }

/* Annul the result if an error has occurred. */
   if( !astOK ) result = astAnnul( result );

/* Return a pointer to the output PointSet. */
   return result;
}

static int RegPins( AstRegion *this_region, AstPointSet *pset, AstRegion *unc,
                    int **mask, int *status ){
/*
*  Name:
*     RegPins

*  Purpose:
*     Check if a set of points fall on the boundary of a given Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int RegPins( AstRegion *this, AstPointSet *pset, AstRegion *unc,
*                  int **mask, int *status ){

*  Class Membership:
*     Moc member function (over-rides the astRegPins protected
*     method inherited from the Region class).

*  Description:
*     This function returns a flag indicating if the supplied set of
*     points all fall on the boundary of the given Moc.
*
*     Some tolerance is allowed, as specified by the resolution of the Moc,
*     and the supplied uncertainty Region "unc" which describes the
*     uncertainty of the supplied points.

*  Parameters:
*     this
*        Pointer to the Moc.
*     pset
*        Pointer to the PointSet. The points are assumed to refer to the
*        base Frame of the FrameSet encapsulated by "this" (always ICRS
*        for a Moc)
*     unc
*        Pointer to a Region representing the uncertainties in the points
*        given by "pset". The Region is assumed to represent the base Frame
*        of the FrameSet encapsulated by "this". Zero uncertainity is assumed
*        if NULL is supplied.
*     mask
*        Pointer to location at which to return a pointer to a newly
*        allocated dynamic array of ints. The number of elements in this
*        array is equal to the value of the Npoint attribute of "pset".
*        Each element in the returned array is set to 1 if the
*        corresponding position in "pset" is on the boundary of the Region
*        and is set to zero otherwise. A NULL value may be supplied
*        in which case no array is created. If created, the array should
*        be freed using astFree when no longer needed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the points all fall on the boundary of the given
*     Region, to within the tolerance specified. Zero otherwise.

*/

/* Local variables: */
   AstMoc *this;
   AstPointSet *mesh;
   astDECLARE_GLOBALS
   double **ptr_mesh;
   double **ptr_pins;
   double *pdec_mesh2;
   double *pdec_mesh;
   double *pra_mesh;
   double *pra_mesh2;
   double *safe;
   double cosdec;
   double dec_high;
   double dec_low;
   double dec_pin;
   double dra;
   double drad;
   double l1;
   double l2;
   double lbnd_unc[ 2 ];
   double ra_high;
   double ra_low;
   double ra_pin;
   double ubnd_unc[ 2 ];
   int *index;
   int *pi;
   int *pm;
   int imesh2;
   int imesh;
   int ipin;
   int len_mesh;
   int len_pins;
   int on;
   int result;

/* Initialise */
   result = 0;
   if( mask ) *mask = NULL;

/* Check the inherited status. */
   if( !astOK ) return result;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(this_region);

/* Get a pointer to the Moc structure. */
   this = (AstMoc *) this_region;

/* Check the supplied PointSet has the 2 axis values per point. */
   if( astGetNcoord( pset ) != 2 && astOK ) {
      astError( AST__INTER, "astRegPins(%s): Illegal number of axis "
                "values per point (%d) in the supplied PointSet - should be "
                "2 (internal AST programming error).", status, astGetClass( this ),
                astGetNcoord( pset ) );
   }

/* Get the number of axes in the uncertainty Region and check it is the
   same as above. */
   if( unc && astGetNaxes( unc ) != 2 && astOK ) {
      astError( AST__INTER, "astRegPins(%s): Illegal number of axes "
                "(%d) in the supplied uncertainty Region - should be 2 "
                "(internal AST programming error).", status,
                astGetClass( this ), astGetNaxes( unc ) );
   }

/* Get the centre of the region in the base Frame. We use this as a "safe"
   interior point within the region. */
   safe = astRegCentre( this, NULL, NULL, 0, AST__BASE );

/* We now find the maximum distance on each axis that a point can be from the
   boundary of the Moc for it still to be considered to be on the boundary.
   First get the resolution of the Moc, in radians. */
   l1 = AST__DD2R*OrderToRes( astGetMaxOrder( this ) )/3600.0;

/* Get the Region which defines the uncertainty of the supplied points and
   get its bounding box. First re-centre the uncertainty at the interior
   position to avoid problems from uncertainties that straddle a discontinuity. */
   if( unc ) {
      if( safe ) astRegCentre( unc, safe, NULL, 0, AST__CURRENT );
      astGetRegionBounds( unc, lbnd_unc, ubnd_unc );

/* Find the geodesic length of the diagonal of this bounding box. */
      l2 = astDistance( unc, lbnd_unc, ubnd_unc );

/* Use a zero sized box "unc" if no box was supplied. */
   } else {
      l2 = 0.0;
   }

/* The required border width is the total diagonal of the two bounding
   boxes. */
   drad = l1 + l2;

/* Get a mesh of points on the boundary of the Moc. The mesh is sorted into
   increasing Dec (values with equal Dec are sorted into increasing RA).
   All RA values are in the range [0,2PI[. */
   mesh = astRegBaseMesh( this );
   ptr_mesh = astGetPoints( mesh );
   len_mesh = astGetNpoint( mesh );

/* Get pointers to the (ra,dec) values at all pis, and the number of
   pins. */
   ptr_pins = astGetPoints( pset );
   len_pins = astGetNpoint( pset );

/* If a mask is required, allocate it now, initialising it to all zeros. */
   if( mask ) *mask = astCalloc( len_pins, sizeof(**mask) );

/* Sort the supplied PointSet in the same way. Use an index to avoid
   modifying the supplied PointSet. */
   index = astCalloc( len_pins, sizeof( *index ) );
   if( astOK ) {
      Comp_Decra_Ptr1 = ptr_pins[ 0 ];
      Comp_Decra_Ptr2 = ptr_pins[ 1 ];
      pi = index;
      for( ipin = 0; ipin < len_pins; ipin++ ) *(pi++) = ipin;
      qsort( index, len_pins, sizeof(*index), Comp_decra );

/* Initialise pointers to the first point in the mesh, and its index. */
      pra_mesh = ptr_mesh[ 0 ];
      pdec_mesh = ptr_mesh[ 1 ];
      imesh = 0;

/* For the moment, assume all pins are on the boundary. */
      result = 1;

/* Now loop through the sorted pins. */
      pm = mask ? *mask : NULL;
      pi = index;
      for( ipin = 0; ipin < len_pins; ipin++,pi++,pm++ ) {
         ra_pin = ptr_pins[ 0 ][ *pi ];
         dec_pin = ptr_pins[ 1 ][ *pi ];

/* Get the bounds of the box in which a mesh point must fall for the pin
   to be on the boundary. */
         cosdec= cos( dec_pin );
         if( cosdec > 0.0 ) {
            dra = drad/cos( dec_pin );
            ra_low = ra_pin - dra;
            ra_high = ra_pin + dra;
         } else {
            ra_low = -DBL_MAX;
            ra_high = DBL_MAX;
         }
         dec_low = dec_pin - drad;
         dec_high = dec_pin + drad;

/* Move forward through the mesh until a mesh point is found that has a
   Dec value larger than or equal to the lower Dec limit for the current
   pin. */
         for( ; imesh < len_mesh; imesh++,pra_mesh++,pdec_mesh++ ) {
            if( *pdec_mesh >= dec_low ) break;
         }

/* If no such mesh point is found, the current pin and all subsequent
   pins in the sorted list do not fall on the boundary. So we can break
   out of the pin loop. */
         if( imesh == len_mesh ) {
            result = 0;
            break;
         }

/* Move forward through the mesh until a mesh point is found that has a
   RA value within the RA limits for the current pin, or the upper Dec
   limit is exceeded. Modify each mesh RA value so that it is within
   [-PI,+PI[ of the pin's RA before checking if it is within the limits.
   If such a mesh point is found, the pin is on the boundary. */
         pra_mesh2 = pra_mesh;
         pdec_mesh2 = pdec_mesh;
         imesh2 = imesh;
         on = 0;
         for( ; imesh2 < len_mesh; imesh2++,pra_mesh2++,pdec_mesh2++ ) {
            if( *pdec_mesh2 > dec_high ) break;

            dra = *pra_mesh2 - ra_pin;
            while( dra >= AST__DPI ) dra -= 2*AST__DPI;
            while( dra < -AST__DPI ) dra += 2*AST__DPI;
            dra += ra_pin;

            if( dra >= ra_low && dra <= ra_high ) {
               on = 1;
               break;
            }
         }

/* If a suitable mesh point was found and a mask is being created, flag
   that the pin is on the boundary and continue to check further pins. */
         if( on ) {
            if( mask ) *pm = 1;

/* If no suitable mesh point was found, the current pin does not fall on
   the boundary but later ones may do. We can break out of the pin loop
   unless a mask is being created, in which case we need to continue to
   check later pins. */
         } else {
            result = 0;
            if( !mask ) break;
         }
      }
   }

/* Free resources */
   mesh = astAnnul( mesh );
   index = astFree( index );
   safe = astFree( safe );

/* If an error has occurred, return zero. */
   if( !astOK ) {
      result = 0;
      if( mask ) *mask = astFree( *mask );
   }

/* Return the result. */
   return result;
}

static int RegTrace( AstRegion *this_region, int n, double *dist, double **ptr,
                     int *status ){
/*
*  Name:
*     RegTrace

*  Purpose:
*     Return requested positions on the boundary of a 2D Region.

*  Type:
*     Private function.

*  Synopsis:
*     #include "region.h"
*     int astRegTrace( AstRegion *this, int n, double *dist, double **ptr );

*  Class Membership:
*     Moc member function (overrides the astRegTrace method inherited from
*     the parent Region class).

*  Description:
*     This function returns positions on the boundary of the supplied
*     Region, if possible. The required positions are indicated by a
*     supplied list of scalar parameter values in the range zero to one.
*     Zero corresponds to some arbitrary starting point on the boundary,
*     and one corresponds to the end (which for a closed region will be
*     the same place as the start).

*  Parameters:
*     this
*        Pointer to the Region.
*     n
*        The number of positions to return. If this is zero, the function
*        returns without action (but the returned function value still
*        indicates if the method is supported or not).
*     dist
*        Pointer to an array of "n" scalar parameter values in the range
*        0 to 1.0.
*     ptr
*        A pointer to an array of pointers. The number of elements in
*        this array should equal tthe number of axes in the Frame spanned
*        by the Region. Each element of the array should be a pointer to
*        an array of "n" doubles, in which to return the "n" values for
*        the corresponding axis. The contents of the arrays are unchanged
*        if the supplied Region belongs to a class that does not
*        implement this method.

*  Returned Value:
*     Non-zero if the astRegTrace method is implemented by the class
*     of Region supplied, and zero if not.

*/

/* Local Variables; */
   AstMoc *this;
   AstPointSet *mesh;
   double **ptr_mesh;
   double whi;
   double wlo;
   double x;
   int i;
   int imesh;
   int imesh_lo;
   int imesh_hi;
   int jhi;
   int jlo;
   int len_mesh;

/* Check inherited status. */
   if( ! astOK ) return 0;

/* Get a pointer to the Moc structure. */
   this = (AstMoc *) this_region;

/* Check we have some points to find. */
   if( n > 0 ) {

/* Get a mesh of points on the boundary of the Moc. The mesh is sorted into
   increasing Dec (values with equal Dec are sorted into increasing RA).
   All RA values are in the range [0,2PI[. */
      mesh = astRegBaseMesh( this );
      ptr_mesh = astGetPoints( mesh );
      len_mesh = this->mdlen;  /* Length of this->meshdist array */
      if( astOK ) {

/* Another array is created at the same time as the above mesh, which
   holds indices into the mesh array. These index values are sorted
   so that the corresponding mesh positions move monotonically around
   the perimeter of the MOC. We use this array to find the required
   positions. Do each required distance in turn. */
         for( i = 0; i < n; i++ ) {

/* Scale the supplied distance (in the range 0 -> 1) into the range 0
   -> len_mesh-1. Do linear interpolation between adjacent points. A Moc
   may contain several disjoint regions. If so, the first point in the
   second and each subsequent region is indicated by a negative value in
   the "meshdist" array. Return bad values for positions between the
   start of each such regioon and the end of the previous. This tells the
   curve plotting algorithm in the Plot class to introduce a break, rather
   than connecting the two regions with a straight line. The
   "this->meshdist" converts distance values into indices into the mesh. */
            x = dist[ i ]*( len_mesh - 1 );
            jlo = (int)( x );
            jhi = jlo + 1;
            whi = x - jlo;
            wlo = 1.0 - whi;

            if( jlo < 0 ) {
               imesh =  (this->meshdist)[ 0 ];
               ptr[ 0 ][ i ] = ptr_mesh[ 0 ][ imesh ];
               ptr[ 1 ][ i ] = ptr_mesh[ 1 ][ imesh ];

            } else if( jhi >= len_mesh ) {
               imesh =  (this->meshdist)[ len_mesh - 1 ];
               ptr[ 0 ][ i ] = ptr_mesh[ 0 ][ imesh ];
               ptr[ 1 ][ i ] = ptr_mesh[ 1 ][ imesh ];

            } else {
               imesh_hi = (this->meshdist)[ jhi ];
               if( imesh_hi < 0 ) {
                  ptr[ 0 ][ i ] = AST__BAD;
                  ptr[ 1 ][ i ] = AST__BAD;
               } else {
                  imesh_lo = (this->meshdist)[ jlo ];
                  if( imesh_lo < 0 ) imesh_lo = -imesh_lo;

                  ptr[ 0 ][ i ] = wlo*ptr_mesh[ 0 ][ imesh_lo ] +
                                  whi*ptr_mesh[ 0 ][ imesh_hi ];
                  ptr[ 1 ][ i ] = wlo*ptr_mesh[ 1 ][ imesh_lo ] +
                                  whi*ptr_mesh[ 1 ][ imesh_hi ];
               }
            }
         }
      }

/* Free resources. */
      mesh = astAnnul( mesh );
   }

/* Return the result. */
   return 1;
}

static int ResToOrder( double res ){
/*
*  Name:
*     ResToOrder

*  Purpose:
*     Get the HEALPix order for a given resolution.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int ResToOrder( double res )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the HEALPix order that gives a resolution
*     closest to the supplied resolution.

*  Parameters:
*     res
*        The resolution, in arc-seconds.

*  Returned Value:
*     The HEALPix order.
*/

/* Check the supplied value. */
   if ( res <= 0.0 ) return 0;

/* The inverse of OrderToRes. */
   return (int)( 0.5 + log( 211076.29/res )/0.6931472 );
}


static void SetAttrib( AstObject *this_object, const char *setting, int *status ) {
/*
*  Name:
*     SetAttrib

*  Purpose:
*     Set an attribute value for a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void SetAttrib( AstObject *this, const char *setting, int *status )

*  Class Membership:
*     Moc member function (extends the astSetAttrib method inherited from
*     the Region class).

*  Description:
*     This function assigns an attribute value for a Moc, the attribute
*     and its value being specified by means of a string of the form:
*
*        "attribute= value "
*
*     Here, "attribute" specifies the attribute name and should be in lower
*     case with no white space present. The value to the right of the "="
*     should be a suitable textual representation of the value to be assigned
*     and this will be interpreted according to the attribute's data type.
*     White space surrounding the value is only significant for string
*     attributes.

*  Parameters:
*     this
*        Pointer to the Moc.
*     setting
*        Pointer to a null terminated string specifying the new attribute
*        value.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void
*/

/* Local Vaiables: */
   AstMoc *this;                 /* Pointer to the Moc structure */
   double dval;                  /* Floating point attribute value */
   int ival;                     /* Integer attribute value */
   int len;                      /* Length of setting string */
   int nc;                       /* Number of characters read by astSscanf */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_object;

/* Obtain the length of the setting string. */
   len = strlen( setting );

/* Test for each recognised attribute in turn, using "astSscanf" to parse the
   setting string and extract the attribute value (or an offset to it in the
   case of string values). In each case, use the value set in "nc" to check
   that the entire string was matched. Once a value has been obtained, use the
   appropriate method to set it. */

/* MaxOrder. */
/* --------- */
   if ( nc = 0,
               ( 1 == astSscanf( setting, "maxorder= %d %n", &ival, &nc ) )
               && ( nc >= len ) ) {
      if( astTestMaxOrder( this ) ) {
         astError( AST__NOWRT, "astSet: The setting \"%s\" is invalid for a %s.",
                   status, setting, astGetClass( this ) );
         astError( AST__NOWRT, "The previously set \"MaxOrder\" value cannot "
                   "be changed." , status );
      } else {
         astSetMaxOrder( this, ival );
      }

/* MaxRes. */
/* ------- */
   } else if ( nc = 0,
               ( 1 == astSscanf( setting, "maxres= %lg %n", &dval, &nc ) )
               && ( nc >= len ) ) {
      if( astTestMaxOrder( this ) ) {
         astError( AST__NOWRT, "astSet: The setting \"%s\" is invalid for a %s.",
                   status, setting, astGetClass( this ) );
         astError( AST__NOWRT, "The previously set \"MaxRes\" value cannot "
                   "be changed." , status );
      } else {
         ival = ResToOrder( dval );
         astSetMaxOrder( this, ival );
      }

/* MinOrder. */
/* --------- */
   } else if ( nc = 0,
               ( 1 == astSscanf( setting, "minorder= %d %n", &ival, &nc ) )
               && ( nc >= len ) ) {
      astSetMinOrder( this, ival );

/* MinRes. */
/* ------- */
   } else if ( nc = 0,
               ( 1 == astSscanf( setting, "minres= %lg %n", &dval, &nc ) )
               && ( nc >= len ) ) {
      ival = ResToOrder( dval );
      astSetMinOrder( this, ival );

/* Define a macro to see if the setting string matches any of the
   read-only attributes of this class. */
#define MATCH(attrib) \
        ( nc = 0, ( 0 == astSscanf( setting, attrib "=%*[^\n]%n", &nc ) ) && \
                  ( nc >= len ) )

/* If the attribute was not recognised, use this macro to report an error
   if a read-only attribute has been specified. */
   } else if ( MATCH( "moctype" ) ||
               MATCH( "moclength" ) ||
               MATCH( "mocarea" ) ){
      astError( AST__NOWRT, "astSet: The setting \"%s\" is invalid for a %s.", status,
                setting, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_setattrib)( this_object, setting, status );
   }

/* Undefine macros local to this function. */
#undef MATCH
}

static void SetMaxOrder( AstMoc *this, int value, int *status ){
/*
*
*  Name:
*     SetMaxOrder

*  Purpose:
*     Sety the value for the MaxOrder attribute

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void SetMaxOrder( AstMoc *this, int value, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     Sets the value of the MaxPlot attribute.

*  Parameters:
*     this
*        The Moc.
*     value
*        The new attribute value.
*     status
*        Pointer to the inherited status variable.

*/

/* Check the global error status. */
   if ( !astOK ) return;

/* If out of bounds, report an error. Otherwise, store the supplied value. */
   if( value < 0 || value > AST__MXORDHPX ) {
      astError( AST__INVAR, "astSetMaxOrder(%s): Invalid value "
                "(%d) supplied for parameter 'MaxOrder'.", status,
                astGetClass(this), value );
   } else {
      this->maxorder = value;
   }

/* Clear the cached information stored in the Moc structure so that it is
   re-calculated when next needed. */
   ClearCache( this, status );
}

static void Sink1( void *data, size_t nc, const char *buf, int *status ){
/*
*  Name:
*     Sink1

*  Purpose:
*     A sink function for use with astGetMocText

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void Sink1( void *data, size_t nc, const char *buf, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function accumulates the length of the strings written out by
*     astGetMocText, but does not actually write the strings out anywhere.

*  Parameters:
*     data
*        Pointer to an arbitrary structure used to communicate with the
*        code that is calling astGetMocText.
*     nc
*        The number of character to be written out from "buf".
*     buf
*        A buffer holding the characters to be written out.
*     status
*        Pointer to the inherited status variable.

*/
   if( data ) *((size_t *) data) += nc;
}

static void Sink2( void *data, size_t nc, const char *buf, int *status ){
/*
*  Name:
*     Sink2

*  Purpose:
*     A sink function for use with astGetMocText

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void Sink2( void *data, size_t nc, const char *buf, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function appends the supplied strings to the string pointed to
*     by the supplied data structure, reporting an error if the string is
*     too small.

*  Parameters:
*     data
*        Pointer to an arbitrary structure used to communicate with the
*        code that is calling astGetMocText.
*     nc
*        The number of character to be written out from "buf".
*     buf
*        A buffer holding the characters to be written out.
*     status
*        Pointer to the inherited status variable.

*/
   if( !astOK ) return;

   SinkData *data2 = (SinkData *) data;

   if( nc > data2->mxsize ) {
      astError( AST__SMBUF, "astGetMocString(Moc): The supplied string "
                "buffer is too small.", status );
   } else {
      memcpy( data2->string, buf, nc );
      data2->string += nc;
      data2->mxsize -= nc;
   }
}

static const char *Source1( void *data, size_t *nc, int *status ){
/*
*  Name:
*     Source1

*  Purpose:
*     A source function for use with astAddMocText

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     const char *Source1( void *data, size_t *nc, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns a pointer to the next set of characters to be
*     added into the Moc by astAddMocText, together with the number of
*     characters in the set.

*  Parameters:
*     data
*        Pointer to an arbitrary structure used to communicate with the
*        code that is calling astAddMocText.
*     nc
*        Returned holding the number of character to be added into the Moc.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the characters to be added into the Moc, or NULL if no
*     more characters remain to be added or an error has occurred.

*/

   SourceData *data2 = (SourceData *) data;
   const char *result = NULL;
   *nc = 0;

   if( !astOK || ! data ) return result;

   result = data2->string;
   *nc = data2->mxsize;

   data2->string = NULL;
   data2->mxsize = 0;

   return result;
}

static int TestAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     TestAttrib

*  Purpose:
*     Test if a specified attribute value is set for a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int TestAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     Moc member function (over-rides the astTestAttrib protected
*     method inherited from the Region class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     a value has been set for one of a Moc's attributes.

*  Parameters:
*     this
*        Pointer to the Moc.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if a value has been set, otherwise zero.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstMoc *this;             /* Pointer to the Moc structure */
   int result;                   /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_object;

/* Check the attribute name and test the appropriate attribute. */

/* MaxOrder. */
/* --------- */
   if ( !strcmp( attrib, "maxorder" ) ) {
      result = astTestMaxOrder( this );

/* MaxRes. */
/* ------- */
   } else if ( !strcmp( attrib, "maxres" ) ) {
      result = astTestMaxOrder( this );

/* MinOrder. */
/* --------- */
   } else if ( !strcmp( attrib, "minorder" ) ) {
      result = astTestMinOrder( this );

/* MinRes. */
/* ------- */
   } else if ( !strcmp( attrib, "minres" ) ) {
      result = astTestMinOrder( this );

/* If the name is not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then return
   zero. */
   } else if ( !strcmp( attrib, "moctype" ) ||
               !strcmp( attrib, "moclength" ) ||
               !strcmp( attrib, "mocarea" ) ) {
      result = 0;

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_testattrib)( this_object, attrib, status );
   }

/* Return the result, */
   return result;
}

static int TestCell( AstMoc *this, int order, int64_t npix, int parent,
                     int *status ) {
/*
*++
*  Name:
c     astTestCell
f     AST_TESTCELL

*  Purpose:
*     Tests if a single HEALPix cell is included in a Moc.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "moc.h"
c     void astTestCell( AstMoc *this, int order, int64_t npix, int parent )
f     RESULT = AST_TESTCELL( THIS, ORDER, NPIX, PARENT, STATUS )

*  Class Membership:
*     Moc method.

*  Description:
*     This function returns
c     a non-zero value
f     .TRUE.
*     if the Moc includes the specified cell.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the Moc to be modified.
c     order
f     ORDER = INTEGER (Given)
*        The HEALPix order of the cell to test.
c        Zero
f        .FALSE.
*        is returned if this is higher than the maximum order allowed in
*        the Moc (as given by its MaxOrder attribute).
c     npix
f     NPIX = INTEGER*8 (Given)
*        The "npix" value identifying the cell to test (see the MOC
*        recommendation for more details).
c     parent
f     PARENT = LOGICAL (Given)
*        Indicates the value to return if the tested cell is not included
*        at the specified order, but a parent cell (at a lower order) is
*        included.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Returned Value:
c     astTestCell()
c        One if the specified cell is included in the Moc at the
c        specified order, of (if "parent" is non-zero) a parent cell is
c        included in the Moc. Zero otherwise.
f     AST_TESTCELL = LOGICAL
f        .TRUE. if the specified cell is included in the Moc at the
f        specified order, of (if PARENT is non-zero) a parent cell is
f        included in the Moc. .FALSE. otherwise.

*--
*/

/* Local Variables: */
   int irange;
   int maxorder;
   int shift;
   int64_t *pr;
   int64_t ihigh;
   int64_t ilow;
   int result;

/* Initialise */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Validate */
   if( order < 0 || order > AST__MXORDHPX ) {
      astError( AST__INVAR, "astTestCell(%s): Invalid value (%d) "
                "supplied for parameter 'order' - must be no greater "
                "than %d.", status, astGetClass( this ), order,
                AST__MXORDHPX );

   } else if( npix < 0 || npix > MaxNpix( order ) ) {
      astError( AST__INVAR, "astTestCell(%s): Invalid value (%zu) "
                "supplied for parameter 'npix' - must be greater "
                "than 0 and less than %zu.", status, astGetClass( this ),
                npix, MaxNpix( order ) + 1 );
   }

/* If the specified order is greater than the MaxOrder attribute, return
   zero. */
   maxorder = astGetMaxOrder( this );
   if( order <= maxorder && astOK ) {

/* Get the upper and lower bounds of the range of cells at MaxOrder
   that corresponds to the specified cell. */
      shift = 2*( maxorder - order );
      ilow = ( npix << shift );
      ihigh = ( (npix + 1 ) << shift ) - 1;

/* See if this range of cells is included in the Moc. */
      pr = this->range;
      for( irange = 0; irange < this->nrange; irange++, pr += 2 ) {
         if( pr[ 0 ] <= ilow && pr[ 1 ] >= ihigh ) {
            result = 1;
            break;
         }
      }

/* If it is included, it may be that the entire parent cell is included.
   We should return non-zero for this only if "parent" is non-zero. So
   if parent is zero, check that the entire parent is NOT included in
   the MOC. */
      if( result && !parent ) {

/* Get the npix value for the immediate parent cell at order (order-1). */
         npix = ( npix >> 2 );

/* Get the upper and lower bounds of the range of cells at MaxOrder
   that corresponds to the immediate parent cell. */
         shift += 2;
         ilow = ( npix << shift );
         ihigh = ( (npix + 1 ) << shift ) - 1;

/* See if this range of cells is included in the Moc. If so return zero. */
         pr = this->range;
         for( irange = 0; irange < this->nrange; irange++, pr += 2 ) {
            if( pr[ 0 ] <= ilow && pr[ 1 ] >= ihigh ) {
               result = 0;
               break;
            }
         }
      }
   }

/* Return the result. */
   return result;
}



#define MAKE_TESTOP(test) \
\
/* First handle cases where a bad value is defined. */ \
   if( bad ) { \
\
/* Loop round all positions to be tested. */ \
      for( ipos = 0; ipos < npos; ipos++,px++,py++) { \
         inside[ ipos ] = 0; \
\
/* Get the 1-based grid indices of the pixel containing the position. */ \
         if( *px != AST__BAD && *py != AST__BAD ) { \
            ix = (AstDim)( *px + 0.5 ); \
            iy = (AstDim)( *py + 0.5 ); \
\
/* Check that the position is within the array. */ \
            if( ix > 0 && ix <= nx && \
                iy > 0 && iy <= ny ){ \
\
/* Get the vector index of the required array element. */ \
               ii = ( ix - 1 ) + ( iy - 1 )*nx; \
\
/* If it passes the selection test, set the returned flag to zero. */ \
               inside[ ipos ] = ( p[ii] != *bad && (test) ); \
            } \
         } \
      } \
\
/* Now handle cases where no bad value is defined. */ \
   } else { \
\
/* Loop round all positions to be tested. */ \
      for( ipos = 0; ipos < npos; ipos++,px++,py++ ) { \
         inside[ ipos ] = 0; \
\
/* Get the 1-based grid indices of the pixel containing the position. */ \
         if( *px != AST__BAD && *py != AST__BAD ) { \
            ix = (AstDim)( *px + 0.5 ); \
            iy = (AstDim)( *py + 0.5 ); \
\
/* Check that the position is within the array. */ \
            if( ix > 0 && ix <= nx && \
                iy > 0 && iy <= ny ){ \
\
/* Get the vector index of the required array element. */ \
               ii = ( ix - 1 ) + ( iy - 1 )*nx; \
\
/* If it passes the selection test, set the returned flag to zero. */ \
               inside[ ipos ] = ( test ); \
            } \
         } \
      } \
   }

#define MAKE_TESTTYPE(Xtype) \
\
   const Xtype *p = (Xtype *) pixelmask->data; \
   Xtype *v = (Xtype *) pixelmask->value; \
   Xtype *bad = (Xtype *) pixelmask->bad; \
 \
/* Do each type of test. */ \
   if( pixelmask->oper == AST__LT ) {  \
      MAKE_TESTOP( p[ii] < *v ); \
   } else if( pixelmask->oper == AST__LE ) { \
      MAKE_TESTOP( p[ii] <= *v ); \
   } else if( pixelmask->oper == AST__EQ ) { \
      MAKE_TESTOP( p[ii] == *v ); \
   } else if( pixelmask->oper == AST__NE ) { \
      MAKE_TESTOP( p[ii] != *v ); \
   } else if( pixelmask->oper == AST__GE ) { \
      MAKE_TESTOP( p[ii] >= *v ); \
   } else  if( pixelmask->oper == AST__GT ) { \
      MAKE_TESTOP( p[ii] > *v ); \
   }


static void TestPixels( PixelMask *pixelmask, AstDim npos, AstPointSet *ps,
                        int *inside, int *status ){
/*
*  Name:
*     TestPixels

*  Purpose:
*     Test if a set of positions are inside a pixel array.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     void TestPixels( PixelMask *pixelmask, AstDim npos, AstPointSet *ps,
*                      int *inside, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns flags indicating which of the supplied positions
*     correspond to selected pixels in the supplied pixel array.

*  Parameters:
*     pixelmask
*        Structure defining the pixel mask.
*     npos
*        Supplied holding the number of positions in the supplied PointSet.
*     ps
*        PointSet holding the 2D positions to be tested, in grid coords.
*     inside
*        Pointer to an array of "npos" ints that are returned non-zero
*        if the corresponding position is inside the region of interest.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstDim ii;
   AstDim ipos;
   AstDim ix;
   AstDim iy;
   AstDim nx;
   AstDim ny;
   double **ptr;
   double *px;
   double *py;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get pointers to the arrays of X and Y grid coordinate values. */
   ptr = astGetPoints( ps );
   if( astOK ) {
      px = ptr[ 0 ];
      py = ptr[ 1 ];

/* Store convenience values */
      nx = pixelmask->nx;
      ny = pixelmask->ny;

/* Do each data type in turn. This stores "npos" flags, corresponding to
   the "npos" positions in "ps", at the start of the "inside" array. */
      if( pixelmask->type == DOUBLE ){
         MAKE_TESTTYPE(double)
      } else if( pixelmask->type == LONG_INT ){
         MAKE_TESTTYPE(long int)
      } else if( pixelmask->type == UNSIGNED_LONG_INT ){
         MAKE_TESTTYPE(unsigned long int)
      } else if( pixelmask->type == INT ){
         MAKE_TESTTYPE(int)
      } else if( pixelmask->type == UNSIGNED_INT ){
         MAKE_TESTTYPE(unsigned int)
      } else if( pixelmask->type == SHORT_INT ){
         MAKE_TESTTYPE(short int)
      } else if( pixelmask->type == UNSIGNED_SHORT_INT ){
         MAKE_TESTTYPE(unsigned short int)
      } else if( pixelmask->type == SIGNED_CHAR ){
         MAKE_TESTTYPE(signed char)
      } else if( pixelmask->type == UNSIGNED_CHAR ){
         MAKE_TESTTYPE(unsigned char)
      } else if( pixelmask->type == FLOAT ){
         MAKE_TESTTYPE(float)

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
      } else if( pixelmask->type == LONG_DOUBLE ){
         MAKE_TESTTYPE(long double)
#endif

      } else {
        astError( AST__INTER, "TestPixel(Moc): Unsupported data type %d "
                  "(internal programming error).", status, pixelmask->type );
      }
   }
}

#undef MAKE_TESTOP
#undef MAKE_TESTTYPE

static AstPointSet *Transform( AstMapping *this_mapping, AstPointSet *in,
                               int forward, AstPointSet *out, int *status ) {
/*
*  Name:
*     Transform

*  Purpose:
*     Apply a Moc to transform a set of points.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     AstPointSet *Transform( AstMapping *this, AstPointSet *in,
*                             int forward, AstPointSet *out, int *status )

*  Class Membership:
*     Moc member function (over-rides the astTransform protected
*     method inherited from the Region class).

*  Description:
*     This function takes a Moc and a set of points encapsulated in a
*     PointSet and transforms the points by setting axis values to
*     AST__BAD for all points which are outside the Moc. Points inside
*     the Moc are copied unchanged from input to output.

*  Parameters:
*     this
*        Pointer to the Moc.
*     in
*        Pointer to the PointSet holding the input coordinate data.
*     forward
*        A non-zero value indicates that the forward coordinate transformation
*        should be applied, while a zero value requests the inverse
*        transformation.
*     out
*        Pointer to a PointSet which will hold the transformed (output)
*        coordinate values. A NULL value may also be given, in which case a
*        new PointSet will be created by this function.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the output (possibly new) PointSet.

*  Notes:
*     -  The forward and inverse transformations are identical for a
*     Region.
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*     -  The number of coordinate values per point in the input PointSet must
*     match the number of axes in the Frame represented by the Moc.
*     -  If an output PointSet is supplied, it must have space for sufficient
*     number of points and coordinate values per point to accommodate the
*     result. Any excess space will be ignored.
*/

/* Local Variables: */
   AstMapping *map1;        /* Sky->HPX12 grid coords Mapping */
   AstMoc *this;            /* Pointer to Moc */
   AstPointSet *ps1;        /* PointSet holding HPX12 grid coords */
   AstPointSet *pset_tmp;   /* Pointer to PointSet holding ICRS positions */
   AstPointSet *result;     /* Pointer to output PointSet */
   double **ptr;            /* Pointer to grid (x,y) coordinate data */
   double **ptr_out;        /* Pointer to output current Frame coordinate data */
   double *px;              /* Pointer to grid X values */
   double *px_out;          /* Pointer to output X values */
   double *py;              /* Pointer to grid Y values */
   double *py_out;          /* Pointer to output Y values */
   int inside;              /* Point inside Moc? */
   int ipoint;              /* Index of input point */
   int irange;              /* Index of current range */
   int neg;                 /* Has the Region been negated? */
   int npoint;              /* No. of input points */
   int order;               /* HEALPix order used by the moc */
   int64_t *pn;            /* Pointer to range of nested index */
   int64_t inest;          /* Nested index of cell holding current position */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_mapping;

/* Apply the parent mapping using the stored pointer to the Transform member
   function inherited from the parent Region class. This function validates
   all parameters and generates an output PointSet if necessary,
   containing a copy of the input PointSet. */
   result = (*parent_transform)( this_mapping, in, forward, out, status );

/* First use the encapsulated FrameSet to transform the supplied positions
   from the current Frame in the encapsulated FrameSet (the Frame
   represented by the Region), to the base Frame (the Frame in which the
   Moc is defined - i.e. ICRS). Note, the returned pointer may be a clone
   of the "in" pointer, and so we must be carefull not to modify the
   contents of the returned PointSet. */
   pset_tmp = astRegTransform( this, in, 0, NULL, NULL );

/* Get the number of points to be transformed. */
   npoint = astGetNpoint( pset_tmp );

/* Get a pointer to the output axis values. */
   ptr_out = astGetPoints( result );

/* See if the Region has been negated. */
   neg = astGetNegated( this );

/* We will now extend the parent astTransform method by performing the
   calculations needed to generate the output coordinate values. */

/* Perform coordinate arithmetic. */
/* ------------------------------ */
   if ( astOK ) {

/* Get the HEALPix order used by the Moc. */
      order = astGetMaxOrder( this );

/* Get a Mapping that goes from ICRS to grid coordinates in an HPX12
   projection of the whole sky with the Moc's order. */
      map1 = GetCachedMapping( this, order, "astTransform", status );

/* Use this Mapping to convert all the ICRS positions to HPX12 grid
   coords. Note the inverse and forward transformations of a Moc are
   identical so we do not need to consider the value of the Invert
   attribute. */
      ps1 = astTransform( map1, pset_tmp, 1, NULL );

/* Get pointers to the first X and Y grid coordinate values. */
      ptr = astGetPoints( ps1 );
      px = ptr[ 0 ];
      py = ptr[ 1 ];

/* Get pointers to the first output sky coordinate values. */
      ptr_out = astGetPoints( result );
      px_out = ptr_out[ 0 ];
      py_out = ptr_out[ 1 ];

/* Check all the positions. */
      for( ipoint = 0; ipoint < npoint; ipoint++ ) {

/* Convert from grid (x,y) to nested index. */
         inest = XyToNested( order, (int)( *(px++) + 0.5 ),
                             (int)( *(py++) + 0.5 ) );

/* Test if this nested index is contained in the Moc. Each pair of
   adjacent values in the "this->range" array are the upper and lower
   bounds of a range of nested index contained in the Moc. The ranges are
   stored in ascending order. Loop until a range is found that ends
   after or at the value of "inest". */
         inside = 0;
         pn = this->range;
         for( irange = 0; irange < this->nrange; irange++ ) {
            if( pn[ 1 ] >= inest ) {

/* The current range ends at or after "inest". The current position is
   inside the Moc if the current range starts at or before "inest". */
               if( pn[ 0 ] <= inest ) inside = 1;

/* No need to check any more ranges. */
               break;
            }
            pn += 2;
         }

/* Negate the inside flag if the Region has been negated. */
         if( neg ) inside = !inside;

/* Set the output values bad if the current position is no inside the Moc. */
         if( !inside ) {
            *px_out = AST__BAD;
            *py_out = AST__BAD;
         }

/* Move on to the next output position. */
         px_out++;
         py_out++;
      }

/* Free resources */
      ps1 = astAnnul( ps1 );
   }
   pset_tmp = astAnnul( pset_tmp );

/* Annul the result if an error has occurred. */
   if( !astOK ) result = astAnnul( result );

/* Return a pointer to the output PointSet. */
   return result;
}

static int64_t XyToNested( int order, int ix, int iy ){
/*
*  Name:
*     XyToNested

*  Purpose:
*     Get the HEALPix nested index of the cell at given HPX12 grid coords.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     int64_t XyToNested( int order, int ix, int iy )

*  Class Membership:
*     Moc member function

*  Description:
*     This function returns the HEALPix nested index of a cell with given
*     grid coords in the HPX12 projection.

*  Parameters:
*     order
*        The HEALPix order.
*     ix
*        The one-based grid X index of the cell within the HPX12
*        projection.
*     iy
*        The one-based grid Y index of the cell within the HPX12
*        projection.

*  Notes:
*     The (ix,iy) values give the grid coords within the all-sky projection
*     and so can be very large. For this reason, the AstMoc class
*     restricts the maximum order to 27, compared to the value of 29
*     included in the MOC recommendation. Using a value of 27 means that the
*     largest value of ix and iy will fit into a signed 4 byte integer.

*  Returned Value:
*     The HEALPix nested index, or int64_MAX if the supplied grid
*     indices do not correspond to a HEALPix cell.
*/

/* Local Variables: */
   int fi;
   int fx;
   int fy;
   int nppf;
   int64_t tx;
   int64_t ty;
   int64_t result;

/* Initialise the returned index to a "bad" value. */
   result = INT64_MAX;

/* Get the number of cells along one edge of a facet.*/
   nppf = ( 1 << order );

/* Get the zero based facet (x,y) indices - offsets from the bottom left
   facet in Calabretta & Roukema 2005 Fig 3. Convert ix and iy from
   one-based to zero-based before doing the calculations. */
   fx = (--ix)/nppf;
   fy = (--iy)/nppf;

/* Get the (x,y) offsets of the cell into the facet, measured from the
   bottom left corner of the facet as shown in Calabretta & Roukema 2005
   Fig 3. Do this now before moving the top right facet to the bottom
   left. */
   tx = ix - nppf*fx;
   ty = iy - nppf*fy;

/* The top right facet is the same as the bottom left facet. */
   if( fx == 4 && fy == 4 ) {
      fx = 0;
      fy = 0;
   }

/* Check that the facet indices are legal. */
   if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
       fx >= fy - 1 && fx <= fy + 1 ) {

/* Get the facet index in the range 0 - 11. The facet numbering scheme is
   shown in Fig 5 of the HEALPix paper (Gorski et al 2005). For instance
   (fx,fy)=(0,0) (bottom left facet in Calabretta & Roukema 2005 Fig 3) has
   fi=4, and (fx,fy)=(2,2) (centre facet) has fi=6. Facet 4 is duplicated,
   occupying at both the bottom left and the top right corners. */
      if( fx != 4 || fy != 4 ) {
         fi = ( fx + fy )/2 + ( fx - fy + 1 )*4;
      } else {
         fi = 4;
      }

/* Change tx so that it is measured in the opposite direction, starting
   at the bottom right corner of the facet. */
      tx = nppf - 1 - tx;

/* Get the scalar index of the tile within the facet. Interleave the bits
   of tx and ty (tx gives the even bits) and add this index onto
   the index of the first tile in the facet, to get the index of the
   required tile. Interleaving is performed using the "Binary
   Magic Numbers" method with code based on the public domain
   example (collection (C) 1997-2005 Sean Eron Anderson) available at:
   http://graphics.stanford.edu/~seander/bithacks.html#InterleaveBMN */
      tx = (tx | (tx << 16)) & 0x0000FFFF0000FFFF;
      tx = (tx | (tx <<  8)) & 0x00FF00FF00FF00FF;
      tx = (tx | (tx <<  4)) & 0x0F0F0F0F0F0F0F0F;
      tx = (tx | (tx <<  2)) & 0x3333333333333333;
      tx = (tx | (tx <<  1)) & 0x5555555555555555;

      ty = (ty | (ty << 16)) & 0x0000FFFF0000FFFF;
      ty = (ty | (ty <<  8)) & 0x00FF00FF00FF00FF;
      ty = (ty | (ty <<  4)) & 0x0F0F0F0F0F0F0F0F;
      ty = (ty | (ty <<  2)) & 0x3333333333333333;
      ty = (ty | (ty <<  1)) & 0x5555555555555555;

/* Combine them all together. to form the final index. */
      result = ( (int64_t) fi << ( 2*order ) ) | ty | (tx << 1);
   }

/* Return the result */
   return result;
}


/* Functions which access class attributes. */
/* ---------------------------------------- */
/* Implement member functions to access the attributes associated with
   this class using the macros defined for this purpose in the
   "object.h" file. For a description of each attribute, see the class
   interface (in the associated .h file). */

/*
*att++
*  Name:
*     MaxOrder

*  Purpose:
*     The highest HEALPix order used in the MOC.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This attribute gives the best resolution of the MOC expressed as a
*     HEALPix order in the range zero to 27 (this class does not support
*     orders greater than 27). It's value can only be set once (for
*     instance as an option when the Moc constructor is invoked). An
*     error will be reported if a subsequent attempt to set or clear the
*     attribute is made. If no value is supplied for MaxOrder before the
*     first area of sky is added to the empty Moc, then a default value
*     will be selected and set, depending on the method used to add the
*     first area to the Moc:

c     - astAddCell: the order of the specified cell.
f     - AST_ADDCELL: the order of the specified cell.
*
c     - astAddRegion: if the added Region is a Moc, then the Moc's MaxOrder
f     - AST_ADDREGION: if the added Region is a Moc, then the Moc's MaxOrder
*                     value is used, Otherwise the value used corresponds to
*                     the resolution closest to 0.1% of the linear size of
*                     the Region being added (determined using method
c                     astGetRegionDisc).
f                     AST_GETREGIONDISC).
*
c     - astAddPixelMask<X>: the smallest order that results in the cells in
f     - AST_ADDPIXELMASK<X>: the smallest order that results in the cells in
*     the Moc being no larger than the size of the pixels in the centre of
*     the pixel mask.
*
c     - astAddMocData: the largest order present in the supplied normalised
f     - AST_ADDMOCDATA: the largest order present in the supplied normalised
*      MOC data array.
*
c     - astAddMocString: the largest order present in the supplied MOC.
f     - AST_ADDMOCString: the largest order present in the supplied MOC.
*
*     A default value of -1 will be returned for the MaxOrder attribute
*     prior to its value being set.
*
*     The MaxRes attribute is equivalent to MaxOrder but expresses the
*     resolution as a number of arc-seconds rather than as a HEALPix order.
*
*     Increasing the HEALPix order by one roughly halves the resolution of the
*     Moc. For instance, a value of 18 corresponds to a resolution of about
*     0.8 arc-second, and 19 corresponds to about 0.4 arc-seconds.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/
astMAKE_GET(Moc,MaxOrder,int,0,( ( this->maxorder != -INT_MAX ) ?
                                   this->maxorder : -1 ))
astMAKE_TEST(Moc,MaxOrder,( this->maxorder != -INT_MAX ))


/*
*att++
*  Name:
*     MinOrder

*  Purpose:
*     The lowest HEALPix order used in the MOC.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This attribute controls the size of the largest hole or island that
*     could be missed when adding Regions or pixel masks into a Moc using
c     methods astAddRegion or astAddPixelMask.
f     methods AST_ADDREGION or AST__ADDPIXELMASK.
*     It gives the resolution of the initial grid used to identify areas
*     that are inside or outside the Region or pixel mask, expressed as a
*     HEALPix order in the range zero to 27 (this class does not support
*     orders greater than 27). Unselected areas (i.e. bounded "holes" or
*     or "islands"in the selection) that are smaller than one cell of this
*     initial grid may be missed (i.e. such holes may be "filled in" and
*     islands omitted in the resulting Moc).
*
*     The default value is (MaxOrder-4), with a lower limit of zero. For
*     instance, if MaxOrder is 16 (a resolution of 3.2 arc-seconds), then
*     MinOrder will be 12, meaning that bounded holes within selected areas
*     may be filled in if the hole is smaller than 51 arc-seconds. Increase
*     the value of this attribute to ensures that only holes smaller than
*     this value can be missed. Note, doing so will increase the time spent
*     creating the Moc.
*
*     To ensure no pixels are missed, set MinOrder to some very large
*     value (larger than 27). If MinOrder is set greater than MaxOrder, the
*     value of MaxOrder will be used whenever MinOrder is required.
*
*     The MinRes attribute is equivalent to MinOrder but expresses the
*     resolution as a number of arc-seconds rather than as a HEALPix order.
*     Any change made to MinOrder will cause a corresponding change in the
*     MinRes attribute.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/
astMAKE_CLEAR(Moc,MinOrder,minorder,-INT_MAX)
astMAKE_GET(Moc,MinOrder,int,0,( ( this->minorder != -INT_MAX ) ?
                                this->minorder:astMAX(0,astGetMaxOrder(this)-5)))
astMAKE_SET(Moc,MinOrder,int,minorder, astMIN(astMAX(value,0),AST__MXORDHPX))
astMAKE_TEST(Moc,MinOrder,( this->minorder != -INT_MAX ))


/*
*att++
*  Name:
*     MaxRes

*  Purpose:
*     The best resolution of the MOC.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point, read-only.

*  Description:
*     This attribute is an alternative to the MaxOrder attribute and gives
*     the best resolution of the MOC expressed as a number of arc-seconds.
*     It can be set only when the Moc is constructed - an error is
*     reported if any subsequent attempt is made to set or clear the value
*     of MaxRes. See attribute MaxOrder for more details.
*
*     A default value of zero will be returned for the MaxRes attribute
*     prior to its value (or the value of MaxOrder) being set.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/

/*
*att++
*  Name:
*     MinRes

*  Purpose:
*     The worst resolution of the MOC.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute gives the poorest resolution of the MOC expressed as
*     a number of arc-seconds. When a new value is set for MinRes, the
*     MinOrder attribute will be set to the order that gives a resolution
*     closest to the requested resolution. When the current value of
*     MinRes is requested, the resolution corresponding to the current
*     value of MinOrder will be returned. When MinRes is tested or
*     cleared, the MinOrder attribute will be tested or cleared.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/


/*
*att++
*  Name:
*     MocType

*  Purpose:
*     The data type used to describe a Moc in FITS

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This read-only attribute gives the data type to be used when
*     writing out the Moc to a FITS binary table. The attribute takes the
*     value 4 or 8. The binary table should contain a single column of
*     signed integer values in which each integer has 4 or 8 bytes, as
*     indicated by the value of this attribute.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/

/*
*att++
*  Name:
*     MocArea

*  Purpose:
*     The area covered by the Moc, in square arc-minutes.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point, read-only.

*  Description:
*     This read-only attribute gives the area covered by the Moc, in
*     square arc-minutes.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/

/*
*att++
*  Name:
*     MocLength

*  Purpose:
*     The table length used to describe a Moc in FITS

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This read-only attribute gives the length of the number of rows
*     needed to describe the Moc in a FITS binary table. This is the
*     number of cells in the normalised Moc.

*  Applicability:
*     Moc
*        All Mocs have this attribute.

*att--
*/




/* Copy constructor. */
/* ----------------- */
static void Copy( const AstObject *objin, AstObject *objout, int *status ) {
/*
*  Name:
*     Copy

*  Purpose:
*     Copy constructor for Moc objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Copy( const AstObject *objin, AstObject *objout, int *status )

*  Description:
*     This function implements the copy constructor for Moc objects.

*  Parameters:
*     objin
*        Pointer to the object to be copied.
*     objout
*        Pointer to the object being constructed.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     -  This constructor makes a deep copy.
*/

/* Local Variables: */
   AstMoc *out;
   AstMoc *in;
   int order;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain pointers to the input and output Mocs. */
   in = (AstMoc *) objin;
   out = (AstMoc *) objout;

/* Ensure safe values. */
   out->range = NULL;
   out->knorm = NULL;
   out->inorm = NULL;
   out->basemesh = NULL;
   out->meshdist = NULL;
   out->unc = NULL;

/* Copy dynamic arrays */
   out->range = astStore( NULL, in->range, astSizeOf( in->range ) );
   if( in->knorm ) out->knorm = astStore( NULL, in->knorm,
                                          astSizeOf( in->knorm ));
   if( in->inorm ) out->inorm = astStore( NULL, in->inorm,
                                          astSizeOf( in->inorm ));
   if( in->meshdist ) out->meshdist = astStore( NULL, in->meshdist,
                                          astSizeOf( in->meshdist ));
   if( in->unc ) out->unc = astCopy( in->unc );
   if( in->basemesh ) out->basemesh = astCopy( in->basemesh );

/* Ensure the output has no cached Mappings. These will be re-generated
   when required. */
   for( order = 0; order <= AST__MXORDHPX; order++ ) {
      out->cached_maps[ order ] = NULL;
   }
}


/* Destructor. */
/* ----------- */
static void Delete( AstObject *obj, int *status ) {
/*
*  Name:
*     Delete

*  Purpose:
*     Destructor for Moc objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Delete( AstObject *obj, int *status )

*  Description:
*     This function implements the destructor for Moc objects.

*  Parameters:
*     obj
*        Pointer to the object to be deleted.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     This function attempts to execute even if the global error status is
*     set.
*/

/* Local Variables: */
   AstMoc *this;
   int order;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) obj;

/* Free all resources. */
   this->range = astFree( this->range );
   this->knorm = astFree( this->knorm );
   this->inorm = astFree( this->inorm );
   this->meshdist = astFree( this->meshdist );

   for( order = 0; order <= AST__MXORDHPX; order++ ) {
      if( this->cached_maps[ order ] ) this->cached_maps[ order ] = astAnnul( this->cached_maps[ order ] );
   }

   if( this->unc ) this->unc = astAnnul( this->unc );
   if( this->basemesh ) this->basemesh = astAnnul( this->basemesh );
}

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for Moc objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the Moc class to an output Channel.

*  Parameters:
*     this
*        Pointer to the Moc whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstMoc *this;                 /* Pointer to the Moc structure */
   char name[50];                /* Name for output item */
   int irange;                   /* Index of current range */
   int ival;                     /* Integer attribute value */
   int set;                      /* Attribute value set? */
   int64_t *pr;                 /* Pointer to next range's bound value */

/* A union used to convert an signed 8 byte integer into two 4 byte
   integers. */
   union {
      int a[2];
      int64_t b;
   } un;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the Moc structure. */
   this = (AstMoc *) this_object;

/* Write out values representing the instance variables for the
   Moc class.  Accompany these with appropriate comment strings,
   possibly depending on the values being written.*/

/* In the case of attributes, we first use the appropriate (private)
   Test...  member function to see if they are set. If so, we then use
   the (private) Get... function to obtain the value to be written
   out.

   For attributes which are not set, we use the astGet... method to
   obtain the value instead. This will supply a default value
   (possibly provided by a derived class which over-rides this method)
   which is more useful to a human reader as it corresponds to the
   actual default attribute value.  Since "set" will be zero, these
   values are for information only and will not be read back. */

/* MaxOrder. */
/* --------- */
/* Write out the MaxOrder attribute. */
   set = TestMaxOrder( this, status );
   ival = set ? GetMaxOrder( this, status ) : astGetMaxOrder( this );
   astWriteInt( channel, "MaxOrder", set, 0, ival, "Maximum HEALPix order" );

/* MinOrder. */
/* --------- */
/* Write out the MinOrder attribute. */
   set = TestMinOrder( this, status );
   ival = set ? GetMinOrder( this, status ) : astGetMinOrder( this );
   astWriteInt( channel, "MinOrder", set, 0, ival, "Minimum HEALPix order" );

/* Number of ranges. */
/* ----------------- */
   astWriteInt( channel, "NRange", 1, 0, this->nrange, "Number of ranges" );

/* The ranges of nested indices in the MOC. */
/* ---------------------------------------- */
/* The Channel class does not have support for 64 bit ints, so each 64 bit
   int is written out as two 4 byte ints. Each is only written out if it
   is non-zero. Only write out the upper bound if it is not the same as
   the lower bound. */
   pr = this->range;
   for( irange = 0; irange < this->nrange; irange++, pr += 2 ) {
      un.b = pr[0];
      if( un.a[0] ) {
         sprintf( name, "I%d", irange );
         astWriteInt( channel, name, 1, 0, un.a[0], "" );
      }
      if( un.a[1] ) {
         sprintf( name, "J%d", irange );
         astWriteInt( channel, name, 1, 0, un.a[1], "" );
      }

      if( pr[1] != pr[0] ) {
         un.b = pr[1];
         if( un.a[0] ) {
            sprintf( name, "K%d", irange );
            astWriteInt( channel, name, 1, 0, un.a[0], "" );
         }
         if( un.a[1] ) {
            sprintf( name, "L%d", irange );
            astWriteInt( channel, name, 1, 0, un.a[1], "" );
         }
      }
   }

}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAMoc and astCheckMoc functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(Moc,Region)
astMAKE_CHECK(Moc)

AstMoc *astMoc_( const char *options, int *status, ...) {
/*
*++
*  Name:
c     astMoc
f     AST_MOC

*  Purpose:
*     Create a Moc.

*  Type:
*     Public function.

*  Synopsis:
c     #include "moc.h"
c     AstMoc *astMoc( const char *options, ... )
f     RESULT = AST_MOC( OPTIONS, STATUS )

*  Class Membership:
*     Moc constructor.

*  Description:
*     This function creates a new Moc object and optionally initialises
*     its attributes.
*
*     The Moc class uses the IVOA MOC (Multi-Order Coverage) recommendation
*     to describe a region on the sky. The region is made up of an
*     arbitrary collection of cells from the HEALPix sky tessellation,
*     and thus may represent any area on the sky, subject to the
*     constraint that the edges of the area correspond to edges of the
*     HEALPix cells. See the MOC recommendation for further information
*     (http://www.ivoa.net/documents/MOC/).
*
*     The Moc class describes an arbitrary collection of cells on the sky,
*     whereas other subclasses of Region describe exact geometric shapes
*     in any arbitrary domain. This results in some differences between
*     Mocs and other types of Region, the main one being that Mocs have
*     no associated uncertainty.
*
*     The MOC recommendation requires that a MOC always describes a sky
*     area using the ICRS coordinate system. However, the Moc class, like
*     other subclasses of Region, allows its attributes to be changed so
*     that it represents the equivalent area in any celestial coordinate
*     system that can be mapped to ICRS. See attribute Adaptive.
*
*     In practice, to use this class an empty Moc object (i.e. a Moc
*     describing a null area of the sky) should first be created using the
c     astMoc
f     AST_MOC
*     constructor. Areas of the sky should then be added into the empty
*     Moc using one or more of the class methods.
*
*     If it is required to write a Moc out to a FITS binary table, the
*     data value and headers to put in the table can be obtained using
*     methods
c     astGetMocData and astGetMocHeader
f     AST_GETMOCDATA and AST_GETMOCHEADER.
*     The MOC described by an existing FITS binary table can be added
*     into a Moc object using the
c     astAddMocData method.
f     AST_ADDMOCDATA method.
*
*     Note, this class is limited to MOCs for which the number of cells
*     in the normalised MOC can be represented in a four byte signed integer.

*  Parameters:
c     maxorder
f     MAXORDER = INTEGER (Given)
*
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new Moc. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new Moc. The syntax used is identical to that for the
f        AST_SET routine.
c     ...
c        If the "options" string contains "%" format specifiers, then
c        an optional list of additional parameters may follow it in
c        order to supply values to be substituted for these
c        specifiers. The rules for supplying these are identical to
c        those for the astSet function (and for the C "printf"
c        function).
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Returned Value:
c     astMoc()
f     AST_MOC = INTEGER
*        A pointer to the new Moc.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.

*  Status Handling:
*     The protected interface to this function includes an extra
*     parameter at the end of the parameter list descirbed above. This
*     parameter is a pointer to the integer inherited status
*     variable: "int *status".

*--
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstMoc *new;                  /* Pointer to new Moc */
   va_list args;                 /* Variable parameter list */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the Moc, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitMoc( NULL, sizeof( AstMoc ), !class_init,
                     &class_vtab, "Moc" );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable parameter list and pass it along with the options string
   to the astVSet method to initialise the new Moc's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }


/* Return a pointer to the new Moc. */
   return new;
}

AstMoc *astMocId_( const char *options, ... ) {
/*
*  Name:
*     astMocId_

*  Purpose:
*     Create a Moc.

*  Type:
*     Private function.

*  Synopsis:
*     #include "moc.h"
*     AstMoc *astMocId_( const char *options, ... )

*  Class Membership:
*     Moc constructor.

*  Description:
*     This function implements the external (public) interface to the
*     astMoc constructor function. It returns an ID value (instead
*     of a true C pointer) to external users, and must be provided
*     because astMoc_ has a variable parameter list which cannot be
*     encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable parameter list also prevents this function from
*     invoking astMoc_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astMoc_.

*  Returned Value:
*     The ID value associated with the new Moc.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstMoc *new;                  /* Pointer to new Moc */
   va_list args;                 /* Variable parameter list */
   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the Moc, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitMoc( NULL, sizeof( AstMoc ), !class_init,
                     &class_vtab, "Moc" );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable parameter list and pass it along with the options string
   to the astVSet method to initialise the new Moc's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new Moc. */
   return astMakeId( new );
}

AstMoc *astInitMoc_( void *mem, size_t size, int init, AstMocVtab *vtab,
                     const char *name, int *status ) {
/*
*+
*  Name:
*     astInitMoc

*  Purpose:
*     Initialise a Moc.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     AstMoc *astInitMoc( void *mem, size_t size, int init, AstMocVtab *vtab,
*                         const char *name )

*  Class Membership:
*     Moc initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new Moc object. It allocates memory (if necessary) to accommodate
*     the Moc plus any additional data associated with the derived class.
*     It then initialises a Moc structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a Moc at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the Moc is to be initialised.
*        This must be of sufficient size to accommodate the Moc data
*        (sizeof(Moc)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the Moc (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the Moc
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the Moc's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new Moc.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).

*  Returned Value:
*     A pointer to the new Moc.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstMoc *new;
   AstSkyFrame *sf;
   int order;

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitMocVtab( vtab, name );

/* Initialise. */
   new = NULL;

/* Create an ICRS SkyFrame to be the Frame in which the Region is
   defined. */
   sf = astSkyFrame( "System=ICRS", status );

/* Initialise a Region structure (the parent class) as the first component
   within the Moc structure, allocating memory if necessary. */
   new = (AstMoc *) astInitRegion( mem, size, 0, (AstRegionVtab *) vtab,
                                   name, sf, NULL, NULL );
   if ( astOK ) {

/* Initialise the Moc data. */
/* ------------------------------ */
      new->unc = NULL;
      new->basemesh = NULL;
      new->knorm = NULL;
      new->inorm = NULL;
      new->moclength = 0;
      new->mocarea = AST__BAD;
      new->nrange = 0;
      new->meshdist = NULL;
      new->mdlen = 0;
      new->maxorder = -INT_MAX;
      new->minorder = -INT_MAX;
      new->lbnd[ 0 ] = AST__BAD;
      new->lbnd[ 1 ] = AST__BAD;
      new->ubnd[ 0 ] = AST__BAD;
      new->ubnd[ 1 ] = AST__BAD;

/* An array of cached Mappings, one for each HEALPix order. Each
   Mapping goes from ICRS to 1-based grid indices in an HPX12
   projection at the corresponding order. These Mappings are
   created as they are needed. */
      for( order = 0; order <= AST__MXORDHPX; order++ ) {
         new->cached_maps[ order ] = NULL;
      }

/* If an error occurred, clean up by deleting the new Moc. */
      if ( !astOK ) new = astDelete( new );
   }

/* Free the SkyFrame */
   sf = astAnnul( sf );

/* Return a pointer to the new Moc. */
   return new;
}

AstMoc *astLoadMoc_( void *mem, size_t size, AstMocVtab *vtab,
                     const char *name, AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadMoc

*  Purpose:
*     Load a Moc.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "moc.h"
*     AstMoc *astLoadMoc( void *mem, size_t size, AstMocVtab *vtab,
*                         const char *name, AstChannel *channel )

*  Class Membership:
*     Moc loader.

*  Description:
*     This function is provided to load a new Moc using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     Moc structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a Moc at the start of the memory
*     passed via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory into which the Moc is to be
*        loaded.  This must be of sufficient size to accommodate the
*        Moc data (sizeof(Moc)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the Moc (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the Moc structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstMoc) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new Moc. If this is NULL, a pointer
*        to the (static) virtual function table for the Moc class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "Moc" is used instead.

*  Returned Value:
*     A pointer to the new Moc.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstMoc *new;                  /* Pointer to the new Moc */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   char buff[50];                /* Buffer for item name */
   int irange;                   /* The index of the current range */
   int order;                    /* HEALPix order */
   int64_t *pr;                 /* Pointer to next range */
   int64_t llast;               /* Lower bounds of last range */
   int64_t ulast;               /* Upper bounds of last range */
   int64_t max_nest;            /* No of cells in whole sky */

/* A union used to convert an signed 8 byte integer into two 4 byte
   integers. */
   union {
      int a[2];
      int64_t b;
   } un;

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if ( !astOK ) return new;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this Moc. In this case the
   Moc belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstMoc );
      vtab = &class_vtab;
      name = "Moc";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitMocVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built Moc. */
   new = astLoadRegion( mem, size, (AstRegionVtab *) vtab, name,
                        channel );
   if ( astOK ) {

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "Moc" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */

/* In the case of attributes, we first read the "raw" input value,
   supplying the "unset" value as the default. If a "set" value is
   obtained, we then use the appropriate (private) Set... member
   function to validate and set the value properly. */
      new->maxorder = astReadInt( channel, "maxorder", -INT_MAX );
      if ( TestMaxOrder( new, status ) ) SetMaxOrder( new, new->maxorder, status );

      new->minorder = astReadInt( channel, "minorder", -INT_MAX );
      if ( TestMinOrder( new, status ) ) SetMinOrder( new, new->minorder, status );

/* Get the maximum number of nested indices at the order in use. */
      max_nest = 12*( ONE << (2*new->maxorder) );

/* Initialise other class properties. */
      new->nrange = astReadInt( channel, "nrange", 0 );
      new->range = astCalloc( 2*new->nrange, sizeof(*(new->range)) );
      if( astOK ) {
         llast = 0;
         ulast = 0;

         pr = new->range;
         for( irange = 0; irange < new->nrange; irange++,pr += 2 ) {
            (void) sprintf( buff, "i%d", irange );
            un.a[0] = astReadInt( channel, buff, 0 );
            (void) sprintf( buff, "j%d", irange );
            un.a[1] = astReadInt( channel, buff, 0 );
            pr[ 0 ] = un.b;

            (void) sprintf( buff, "k%d", irange );
            un.a[0] = astReadInt( channel, buff, 0 );
            (void) sprintf( buff, "l%d", irange );
            un.a[1] = astReadInt( channel, buff, 0 );
            pr[ 1 ] = ( un.b > 0 ) ? un.b : pr[ 0 ];

            if( pr[ 1 ] >= max_nest ) {
               astError( AST__LDERR, "astLoadMoc(Moc): Ill-formed Moc.",
                         status );
               astError( AST__LDERR, "Upper bound (%zu) is too high for "
                         "order %d.", status, pr[ 1 ], new->maxorder );
               break;

            } else if( pr[ 0 ] > pr[ 1 ] ) {
               astError( AST__LDERR, "astLoadMoc(Moc): Ill-formed Moc.",
                         status );
               astError( AST__LDERR, "Upper bound (%zu) lower than lower "
                         "bound (%zu).", status, pr[ 1 ], pr[ 0 ] );
               break;

            } else if( pr[ 0 ] <= ulast && irange != 0 ) {
               astError( AST__LDERR, "astLoadMoc(Moc): Ill-formed Moc.",
                         status );
               astError( AST__LDERR, "Range [%zu:%zu] overlaps range "
                         "[%zu:%zu].", status, pr[ 0 ], pr[ 1 ], llast,
                         ulast );
               break;
            }

            llast = pr[ 0 ];
            ulast = pr[ 1 ];
         }
      }

/* Initialise other values */
      new->unc = NULL;
      new->basemesh = NULL;
      new->inorm = NULL;
      new->knorm = NULL;
      new->moclength = 0;
      new->mocarea = AST__BAD;
      new->meshdist = NULL;
      new->mdlen = 0;
      new->lbnd[ 0 ] = AST__BAD;
      new->lbnd[ 1 ] = AST__BAD;
      new->ubnd[ 0 ] = AST__BAD;
      new->ubnd[ 1 ] = AST__BAD;

/* An array of cached Mappings, one for each HEALPix order. Each
   Mapping goes from ICRS to 1-based grid indices in an HPX12
   projection at the corresponding order. These Mappings are
   created as they are needed. */
      for( order = 0; order <= AST__MXORDHPX; order++ ) {
         new->cached_maps[ order ] = NULL;
      }

/* If an error occurred, clean up by deleting the new Moc. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return the new Moc pointer. */
   return new;
}

/* Virtual function interfaces. */
/* ============================ */
/* These provide the external interface to the virtual functions defined by
   this class. Each simply checks the global error status and then locates and
   executes the appropriate member function, using the function pointer stored
   in the object's virtual function table (this pointer is located using the
   astMEMBER macro defined in "object.h").

   Note that the member function may not be the one defined here, as it may
   have been over-ridden by a derived class. However, it should still have the
   same interface. */

void astAddRegion_( AstMoc *this, int cmode, AstRegion *region, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,AddRegion))( this, cmode, region, status );
}

int astGetMocType_( AstMoc *this, int *status ){
   if ( !astOK ) return 4;
   return (**astMEMBER(this,Moc,GetMocType))( this, status );
}

int astGetMocLength_( AstMoc *this, int *status ){
   if ( !astOK ) return 0;
   return (**astMEMBER(this,Moc,GetMocLength))( this, status );
}

double astGetMocArea_( AstMoc *this, int *status ) {
   if ( !astOK ) return 0.0;
   return (**astMEMBER(this,Moc,GetMocArea))( this, status );
}

AstFitsChan *astGetMocHeader_( AstMoc *this, int *status ) {
   if ( !astOK ) return NULL;
   return (**astMEMBER(this,Moc,GetMocHeader))( this, status );
}

void astGetMocData_( AstMoc *this, size_t mxsize, void *array, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,GetMocData))( this, mxsize, array, status );
}

void astGetMocString_( AstMoc *this, int json, size_t mxsize, char *string,
                       size_t *size, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,GetMocString))( this, json, mxsize, string, size,
                                         status );
}

void astSetMaxOrder_( AstMoc *this, int value, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,SetMaxOrder))( this, value, status );
}

void astClearMaxOrder_( AstMoc *this, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,ClearMaxOrder))( this, status );
}

void astAddMocData_( AstMoc *this, int cmode, int negate, int maxorder,
                     int len, int nbyte, const void *data, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,AddMocData))( this, cmode, negate, maxorder, len,
                                       nbyte, data, status );
}

void astAddMocString_( AstMoc *this, int cmode, int negate, int maxorder,
                     size_t len, const char *string, int *json, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,AddMocString))( this, cmode, negate, maxorder, len,
                                         string, json, status );
}

void astAddCell_( AstMoc *this, int cmode, int order, int64_t npix, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,Moc,AddCell))( this, cmode, order, npix, status );
}

int astTestCell_( AstMoc *this, int order, int64_t npix, int parents, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,Moc,TestCell))( this, order, npix, parents, status );
}

void astGetCell_( AstMoc *this, int icell, int *order, int64_t *npix,
                  int *status ) {
   if ( !astOK ) return;
   return (**astMEMBER(this,Moc,GetCell))( this, icell, order, npix, status );
}



#define MAKE_ADDPIXELMASK_(X,Xtype) \
void astAddPixelMask8##X##_( AstMoc *this, int cmode, AstFrameSet *wcs, Xtype value, \
                            int oper, int flags, Xtype badval, const Xtype array[], \
                            const AstDim dims[2], int *status ) { \
   if ( !astOK ) return; \
   (**astMEMBER(this,Moc,AddPixelMask##X))( this, cmode, wcs, value, oper, \
                                            flags, badval, array, dims, status ); \
}
#if HAVE_LONG_DOUBLE     /* Not normally implemented */
MAKE_ADDPIXELMASK_(LD,long double)
#endif
MAKE_ADDPIXELMASK_(D,double)
MAKE_ADDPIXELMASK_(F,float)
MAKE_ADDPIXELMASK_(L,long int)
MAKE_ADDPIXELMASK_(UL,unsigned long int)
MAKE_ADDPIXELMASK_(I,int)
MAKE_ADDPIXELMASK_(UI,unsigned int)
MAKE_ADDPIXELMASK_(S,short int)
MAKE_ADDPIXELMASK_(US,unsigned short int)
MAKE_ADDPIXELMASK_(B,signed char)
MAKE_ADDPIXELMASK_(UB,unsigned char)
#undef MAKE_ADDPIXELMASK_


#define MAKE_ADDPIXELMASK_(X,Xtype) \
void astAddPixelMask4##X##_( AstMoc *this, int cmode, AstFrameSet *wcs, Xtype value, \
                            int oper, int flags, Xtype badval, const Xtype array[], \
                            const int dims[2], int *status ) { \
   AstDim dims8[2]; \
   if ( !astOK ) return; \
   dims8[ 0 ] = dims[ 0 ]; \
   dims8[ 1 ] = dims[ 1 ]; \
   (**astMEMBER(this,Moc,AddPixelMask##X))( this, cmode, wcs, value, oper, \
                                            flags, badval, array, dims8, status ); \
}
#if HAVE_LONG_DOUBLE     /* Not normally implemented */
MAKE_ADDPIXELMASK_(LD,long double)
#endif
MAKE_ADDPIXELMASK_(D,double)
MAKE_ADDPIXELMASK_(F,float)
MAKE_ADDPIXELMASK_(L,long int)
MAKE_ADDPIXELMASK_(UL,unsigned long int)
MAKE_ADDPIXELMASK_(I,int)
MAKE_ADDPIXELMASK_(UI,unsigned int)
MAKE_ADDPIXELMASK_(S,short int)
MAKE_ADDPIXELMASK_(US,unsigned short int)
MAKE_ADDPIXELMASK_(B,signed char)
MAKE_ADDPIXELMASK_(UB,unsigned char)
#undef MAKE_ADDPIXELMASK_





/* For debugging of astRegBaseMesh and astRegTrace...... */
#ifdef MESH_DEBUG

static void dump_corner( Corner *this, int order ) {
   static FILE *fd = NULL;
   int i;
   double alpha, beta;

   if( !fd ) {
      fd = fopen( "corners.asc", "w" );
      fprintf( fd, "# this ra dec alpha beta order int dist prev cell0 cell1 cell2 cell3\n");

   }

   alpha = cos( this->dec )*cos( this->ra );
   beta = cos( this->dec )*sin( this->ra );

   fprintf( fd, "%p %g %g %g %g %d %d %d %p ", this, this->ra, this->dec,
            alpha, beta, order, this->interior, this->dist, this->prev );
   for( i = 0; i < this->ncell; i++ ) fprintf(fd, "%p ", this->cells[i] );
   for( ; i < 4; i++ ) fprintf( fd, "null " );
   fprintf(fd, "\n");

}

static void dump_cell( AstMoc *this, Cell *cell, int order ) {
   int status_value;
   int *old_status;
   int *status;
   double x, y, ra, dec, alpha, beta;
   static FILE *fd = NULL;

   status_value = 0;
   status = &status_value;
   old_status = astWatch( status );

   if( !fd ) {
      fd = fopen( "cells.asc", "w" );
      fprintf( fd, "# this x18 y18 ix iy ra dec alpha beta order int prev bl tl tr br\n");

   }

   AstMapping *map = GetCachedMapping( this, order, "dump_cell",
                                       status );

   x = cell->ix;
   y = cell->iy;
   astTran2( map, 1, &x, &y, 0, &ra, &dec );
   alpha = cos( dec )*cos( ra );
   beta = cos( dec )*sin( ra );


   double x18 = ( ONE << (18 - order) )*( cell->ix - 0.5 ) + 0.5;
   double y18 = ( ONE << (18 - order) )*( cell->iy - 0.5 ) + 0.5;

   fprintf( fd, "%p %g %g %d %d %g %g %g %g %d %d %p ", cell, x18, y18, cell->ix, cell->iy,
            ra, dec, alpha, beta, order, cell->interior, cell->prev );

   if( cell->bl ) {
      fprintf(fd, "%p ", cell->bl );
   } else {
      fprintf(fd, "null " );
   }

   if( cell->tl ) {
      fprintf(fd, "%p ", cell->tl );
   } else {
      fprintf(fd, "null " );
   }

   if( cell->tr ) {
      fprintf(fd, "%p ", cell->tr );
   } else {
      fprintf(fd, "null " );
   }

   if( cell->br ) {
      fprintf(fd, "%p ", cell->br );
   } else {
      fprintf(fd, "null " );
   }

   fprintf(fd, "\n");

   astWatch( old_status );

}


static void dump_moc( AstMoc *this, const char *fname, int *status ) {
   double *px, *py, *pa, *pb;
   FILE *fd;
   int64_t npix, *pr;
   int npoint, maxorder, irange, ix, iy;
   AstMapping *map;
   AstPointSet *ps, *ps2;
   double **ptr, **ptr2, alpha, beta;

   if( !astOK ) return;

   fd = fopen( fname, "w" );
   fprintf( fd, "# ix iy ra dec alpha beta\n");

   maxorder = astGetMaxOrder( this );
   map = GetCachedMapping( this, maxorder, "dump_moc", status );

   pr = this->range;
   for( irange = 0; irange < this->nrange; irange++, pr += 2 ){

      npoint = pr[ 1 ] - pr[ 0 ]  + 1;
      ps = astPointSet( npoint, 2, " ", status );
      ptr = astGetPoints( ps );
      if( astOK ) {
        px = ptr[ 0 ];
        py = ptr[ 1 ];
        for( npix = pr[ 0 ]; npix <= pr[1 ]; npix++ ) {
           NestedToXy( npix, maxorder, &ix, &iy );
           *(px++) = ix;
           *(py++) = iy;
        }
      }

      ps2 = astTransform( map, ps, 0, NULL );
      ptr2 = astGetPoints( ps2 );
      if( astOK ) {
        px = ptr[ 0 ];
        py = ptr[ 1 ];
        pa = ptr2[ 0 ];
        pb = ptr2[ 1 ];
        for( npix = pr[ 0 ]; npix <= pr[1 ]; npix++ ) {
           alpha = cos(*pb)*cos(*pa);
           beta = cos(*pb)*sin(*pa);
           fprintf( fd, "%g %g %g %g %g %g\n", *(px++), *(py++), *(pa++),
                    *(pb++), alpha, beta  );
        }
      }

      ps = astAnnul( ps );
      ps2 = astAnnul( ps2 );

   }

   fclose( fd );
}

#endif


