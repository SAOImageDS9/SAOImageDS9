#if !defined( POLYGON_INCLUDED ) /* Include this file only once */
#define POLYGON_INCLUDED
/*
*+
*  Name:
*     polygon.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the Polygon class.

*  Invocation:
*     #include "polygon.h"

*  Description:
*     This include file defines the interface to the Polygon class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The Polygon class implements a Region which represents a collection
*     of points in a Frame.

*  Inheritance:
*     The Polygon class inherits from the Region class.

*  Feature Test Macros:
*     astCLASS
*        If the astCLASS macro is undefined, only public symbols are
*        made available, otherwise protected symbols (for use in other
*        class implementations) are defined. This macro also affects
*        the reporting of error context information, which is only
*        provided for external calls to the AST library.

*  Copyright:
*     Copyright (C) 1997-2006 Council for the Central Laboratory of the
*     Research Councils

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
*     26-OCT-2004 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "frame.h"               /* Coordinate systems */
#include "region.h"              /* Coordinate regions (parent class) */
#include "timeframe.h"           /* For AST__LT definition */

#if defined(astCLASS)            /* Protected */
#include "channel.h"             /* I/O channels */
#endif

/* C header files. */
/* --------------- */
#if defined(astCLASS)            /* Protected */
#include <stddef.h>
#endif

/* Macros */
/* ====== */

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* Flags used to indicate how astOutline<X> should define the pixel
   region to be outlined. We omit AST__LT here since it is defined in
   timeframe.h (with value 11). */
#define AST__LE 2
#define AST__EQ 3
#define AST__GE 4
#define AST__GT 5
#define AST__NE 6

/* Type Definitions. */
/* ================= */
/* Polygon structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstPolygon {

/* Attributes inherited from the parent class. */
   AstRegion region;          /* Parent class structure */

/* Attributes specific to objects in this class. */
   double in[2];           /* A point which is inside the polygon */
   double lbnd[2];         /* Lower axis limits of bounding box */
   double ubnd[2];         /* Upper axis limits of bounding box */
   AstLineDef **edges;     /* Cached description of edges */
   double *startsat;       /* Perimeter distance to each vertex */
   double totlen;          /* Total perimeter distance round polygon */
   int acw;                /* Are vertices stored in anti-clockwise order? */
   int stale;              /* Is cached information stale? */
   int simp_vertices;      /* Simplify by transforming vertices? */
} AstPolygon;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstPolygonVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstRegionVtab region_vtab;    /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
   AstPolygon *(* Downsize)( AstPolygon *, double, int, int * );

   int (* GetSimpVertices)( AstPolygon *, int * );
   int (* TestSimpVertices)( AstPolygon *, int * );
   void (* ClearSimpVertices)( AstPolygon *, int * );
   void (* SetSimpVertices)( AstPolygon *, int, int * );

} AstPolygonVtab;

#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within the
   object.c file. */

typedef struct AstPolygonGlobals {
   AstPolygonVtab Class_Vtab;
   int Class_Init;
   char GetAttrib_Buff[ 51 ];
} AstPolygonGlobals;


/* Thread-safe initialiser for all global data used by this module. */
void astInitPolygonGlobals_( AstPolygonGlobals * );

#endif


#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(Polygon)          /* Check class membership */
astPROTO_ISA(Polygon)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstPolygon *astPolygon_( void *, int, int, const double *, AstRegion *, const char *, int *, ...);
#else
AstPolygon *astPolygonId_( void *, int, int, const double *, AstRegion *, const char *, ... )__attribute__((format(printf,6,7)));
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstPolygon *astInitPolygon_( void *, size_t, int, AstPolygonVtab *, const char *, AstFrame *, int, int, const double *, AstRegion *, int * );

/* Vtab initialiser. */
void astInitPolygonVtab_( AstPolygonVtab *, const char *, int * );

/* Loader. */
AstPolygon *astLoadPolygon_( void *, size_t, AstPolygonVtab *,
                             const char *, AstChannel *, int * );

#endif

/* Prototypes for member functions. */
/* -------------------------------- */
AstPolygon *astDownsize_( AstPolygon *, double, int, int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
AstPolygon *astOutline4LD_( long double, int, const long double[], const int[2], const int[2], double, int, const int[2], int, int * );
#endif
AstPolygon *astOutline4B_( signed char, int, const signed char[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4D_( double, int, const double[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4F_( float, int, const float[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4I_( int, int, const int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4L_( long int, int, const long int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4S_( short int, int, const short int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4UB_( unsigned char, int, const unsigned char[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4UI_( unsigned int, int, const unsigned int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4UL_( unsigned long int, int, const unsigned long int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutline4US_( unsigned short int, int, const unsigned short int[], const int[2], const int[2], double, int, const int[2], int, int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
AstPolygon *astOutline8LD_( long double, int, const long double[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
#endif
AstPolygon *astOutline8B_( signed char, int, const signed char[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8D_( double, int, const double[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8F_( float, int, const float[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8I_( int, int, const int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8L_( long int, int, const long int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8S_( short int, int, const short int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8UB_( unsigned char, int, const unsigned char[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8UI_( unsigned int, int, const unsigned int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8UL_( unsigned long int, int, const unsigned long int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );
AstPolygon *astOutline8US_( unsigned short int, int, const unsigned short int[], const AstDim[2], const AstDim[2], double, int, const AstDim[2], int, int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
AstPolygon *astConvex4LD_( long double, int, const long double[], const int[2], const int[2], int, int * );
#endif
AstPolygon *astConvex4B_( signed char, int, const signed char[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4D_( double, int, const double[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4F_( float, int, const float[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4I_( int, int, const int[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4L_( long int, int, const long int[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4S_( short int, int, const short int[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4UB_( unsigned char, int, const unsigned char[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4UI_( unsigned int, int, const unsigned int[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4UL_( unsigned long int, int, const unsigned long int[], const int[2], const int[2], int, int * );
AstPolygon *astConvex4US_( unsigned short int, int, const unsigned short int[], const int[2], const int[2], int, int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
AstPolygon *astConvex8LD_( long double, int, const long double[], const AstDim[2], const AstDim[2], int, int * );
#endif
AstPolygon *astConvex8B_( signed char, int, const signed char[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8D_( double, int, const double[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8F_( float, int, const float[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8I_( int, int, const int[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8L_( long int, int, const long int[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8S_( short int, int, const short int[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8UB_( unsigned char, int, const unsigned char[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8UI_( unsigned int, int, const unsigned int[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8UL_( unsigned long int, int, const unsigned long int[], const AstDim[2], const AstDim[2], int, int * );
AstPolygon *astConvex8US_( unsigned short int, int, const unsigned short int[], const AstDim[2], const AstDim[2], int, int * );

# if defined(astCLASS)           /* Protected */
int astGetSimpVertices_( AstPolygon *, int * );
int astTestSimpVertices_( AstPolygon *, int * );
void astClearSimpVertices_( AstPolygon *, int * );
void astSetSimpVertices_( AstPolygon *, int, int * );
#endif

/* Function interfaces. */
/* ==================== */
/* These macros are wrap-ups for the functions defined by this class
   to make them easier to invoke (e.g. to avoid type mis-matches when
   passing pointers to objects from derived classes). */

/* Interfaces to standard class functions. */
/* --------------------------------------- */
/* Some of these functions provide validation, so we cannot use them
   to validate their own arguments. We must use a cast when passing
   object pointers (so that they can accept objects from derived
   classes). */

/* Check class membership. */
#define astCheckPolygon(this) astINVOKE_CHECK(Polygon,this,0)
#define astVerifyPolygon(this) astINVOKE_CHECK(Polygon,this,1)

/* Test class membership. */
#define astIsAPolygon(this) astINVOKE_ISA(Polygon,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astPolygon astINVOKE(F,astPolygon_)
#else
#define astPolygon astINVOKE(F,astPolygonId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitPolygon(mem,size,init,vtab,name,frame,npnt,indim,points,unc) \
astINVOKE(O,astInitPolygon_(mem,size,init,vtab,name,frame,npnt,indim,points,unc,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitPolygonVtab(vtab,name) astINVOKE(V,astInitPolygonVtab_(vtab,name,STATUS_PTR))

/* Loader. */
#define astLoadPolygon(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadPolygon_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckPolygon to validate Polygon pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#define astDownsize(this,maxerr,maxvert) \
astINVOKE(O,astDownsize_(astCheckPolygon(this),maxerr,maxvert,STATUS_PTR))



#if HAVE_LONG_DOUBLE     /* Not normally implemented */
#define astOutlineLD(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4LD_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#endif

#define astOutlineB(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4B_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineD(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4D_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineF(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4F_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineI(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4I_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineL(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4L_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineS(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4S_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUB(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4UB_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUI(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4UI_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUL(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4UL_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUS(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline4US_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))


#if HAVE_LONG_DOUBLE     /* Not normally implemented */
#define astOutline8LD(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8LD_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#endif

#define astOutline8B(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8B_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8D(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8D_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8F(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8F_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8I(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8I_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8L(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8L_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8S(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8S_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8UB(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8UB_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8UI(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8UI_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8UL(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8UL_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutline8US(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) \
astINVOKE(O,astOutline8US_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
#define astConvexLD(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O,astConvex4LD_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#endif

#define  astConvexB(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4B_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexD(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4D_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexF(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4F_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexI(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4I_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexL(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4L_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexS(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4S_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexUB(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4UB_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexUI(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4UI_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexUL(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4UL_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvexUS(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex4US_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
#define astConvex8LD(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O,astConvex8LD_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#endif

#define  astConvex8B(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8B_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8D(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8D_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8F(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8F_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8I(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8I_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8L(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8L_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8S(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8S_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8UB(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8UB_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8UI(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8UI_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8UL(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8UL_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define  astConvex8US(value,oper,array,lbnd,ubnd,starpix) \
astINVOKE(O, astConvex8US_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))

#if defined(astCLASS)            /* Protected */
#define astClearSimpVertices(this) \
astINVOKE(V,astClearSimpVertices_(astCheckPolygon(this),STATUS_PTR))
#define astGetSimpVertices(this) \
astINVOKE(V,astGetSimpVertices_(astCheckPolygon(this),STATUS_PTR))
#define astSetSimpVertices(this,value) \
astINVOKE(V,astSetSimpVertices_(astCheckPolygon(this),value,STATUS_PTR))
#define astTestSimpVertices(this) \
astINVOKE(V,astTestSimpVertices_(astCheckPolygon(this),STATUS_PTR))
#endif
#endif





