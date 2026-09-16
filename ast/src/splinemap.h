#if !defined( SPLINEMAP_INCLUDED ) /* Include this file only once */
#define SPLINEMAP_INCLUDED
/*
*+
*  Name:
*     splinemap.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the SplineMap class.

*  Invocation:
*     #include "splinemap.h"

*  Description:
*     This include file defines the interface to the SplineMap class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The SplineMap class implements Mappings transform coordinates
*     using a bi-cubic spline.

*  Inheritance:
*     The SplineMap class inherits from the Mapping class.

*  Attributes Over-Ridden:
*     None.

*  New Attributes Defined:
*     None.

*  Methods Over-Ridden:
*     Public:
*        None.
*
*     Protected:
*        ClearAttrib
*           Clear an attribute value for a SplineMap.
*        GetAttrib
*           Get an attribute value for a SplineMap.
*        SetAttrib
*           Set an attribute value for a SplineMap.
*        TestAttrib
*           Test if an attribute value has been set for a SplineMap.
*        astMapMerge
*           Simplify a sequence of Mappings containing a SplineMap.
*        astTransform
*           Apply a SplineMap to transform a set of points.

*  New Methods Defined:
*     Public:
*        None.
*
*     Protected:
*        None.

*  Other Class Functions:
*     Public:
*        astIsASplineMap
*           Test class membership.
*        astSplineMap
*           Create a SplineMap.
*
*     Protected:
*        astCheckSplineMap
*           Validate class membership.
*        astInitSplineMap
*           Initialise a SplineMap.
*        astInitSplineMapVtab
*           Initialise the virtual function table for the SplineMap class.
*        astLoadSplineMap
*           Load a SplineMap.

*  Macros:
*     None.

*  Type Definitions:
*     Public:
*        AstSplineMap
*           SplineMap object type.
*
*     Protected:
*        AstSplineMapVtab
*           SplineMap virtual function table type.

*  Feature Test Macros:
*     astCLASS
*        If the astCLASS macro is undefined, only public symbols are
*        made available, otherwise protected symbols (for use in other
*        class implementations) are defined. This macro also affects
*        the reporting of error context information, which is only
*        provided for external calls to the AST library.

*  Copyright:
*     Copyright (C) 2025 David Stuart Berry

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
*     DSB: D.S. Berry

*  History:
*     8-SEP-2025 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "mapping.h"             /* Coordinate mappings (parent class) */

#if defined(astCLASS)            /* Protected */
#include "pointset.h"            /* Sets of points/coordinates */
#include "channel.h"             /* I/O channels */
#endif

/* C header files. */
/* --------------- */
#if defined(astCLASS)            /* Protected */
#include <stddef.h>
#endif

/* Macros */
/* ====== */
#if defined(astCLASS) || defined(astFORTRAN77)
#define STATUS_PTR status
#else
#define STATUS_PTR astGetStatusPtr
#endif

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* Type Definitions. */
/* ================= */
/* SplineMap structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstSplineMap {

/* Attributes inherited from the parent class. */
   AstMapping mapping;           /* Parent class structure */

/* Attributes specific to objects in this class. */
   int kx;                       /* Polynomial order in X input direction */
   int ky;                       /* Polynomial order in Y input direction */
   int nx;                       /* No. of coeffs in X input direction */
   int ny;                       /* No. of coeffs in Y input direction */
   double *tx;                   /* Array of knot positions on X input */
   double *ty;                   /* Array of knot positions on Y input */
   double *cu;                   /* Array of coefficients defining U output */
   double *cv;                   /* Array of coefficients defining V output */
   int invniter;                 /* Max number of iterations for iterative inverse */
   int outunit;                  /* How to handle out-of-bounds inputs */
   double invtol;                /* Target relative error for iterative inverse */
} AstSplineMap;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstSplineMapVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstMappingVtab mapping_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
   int (*GetInvNiter)( AstSplineMap *, int * );
   int (* TestInvNiter)( AstSplineMap *, int * );
   void (* ClearInvNiter)( AstSplineMap *, int * );
   void (* SetInvNiter)( AstSplineMap *, int, int * );

   int (*GetOutUnit)( AstSplineMap *, int * );
   int (* TestOutUnit)( AstSplineMap *, int * );
   void (* ClearOutUnit)( AstSplineMap *, int * );
   void (* SetOutUnit)( AstSplineMap *, int, int * );

   double (*GetInvTol)( AstSplineMap *, int * );
   int (* TestInvTol)( AstSplineMap *, int * );
   void (* ClearInvTol)( AstSplineMap *, int * );
   void (* SetInvTol)( AstSplineMap *, double, int * );

   int (* GetSplineKx)( AstSplineMap *, int * );
   int (* GetSplineKy)( AstSplineMap *, int * );
   int (* GetSplineNx)( AstSplineMap *, int * );
   int (* GetSplineNy)( AstSplineMap *, int * );

   void (* SplineCoeffs)( AstSplineMap *, int, int, int, double *, int *);
   void (* SplineKnots)( AstSplineMap *, int, int, double *, int *);

} AstSplineMapVtab;

#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within the
   object.c file. */

typedef struct AstSplineMapGlobals {
   AstSplineMapVtab Class_Vtab;
   int Class_Init;
   char GetAttrib_Buff[ AST__GETATTRIB_BUFF_LEN + 1 ];
} AstSplineMapGlobals;


/* Thread-safe initialiser for all global data used by this module. */
void astInitSplineMapGlobals_( AstSplineMapGlobals * );

#endif


#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(SplineMap)          /* Check class membership */
astPROTO_ISA(SplineMap)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstSplineMap *astSplineMap_( int, int, int, int, const double[], const double[], const double[], const double[], const char *, int *, ...);
#else
AstSplineMap *astSplineMapId_( int, int, int, int, const double[], const double[], const double[], const double[], const char *, ... )__attribute__((format(printf,9,10)));
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstSplineMap *astInitSplineMap_( void *, size_t, int, AstSplineMapVtab *,
                                 const char *, int, int, int, int,
                                 const double[], const double[],
                                 const double[], const double[], int * );

/* Vtab initialiser. */
void astInitSplineMapVtab_( AstSplineMapVtab *, const char *, int * );

/* Loader. */
AstSplineMap *astLoadSplineMap_( void *, size_t, AstSplineMapVtab *,
                                 const char *, AstChannel *, int * );
#endif

/* Prototypes for member functions. */
/* -------------------------------- */
void astSplineCoeffs_( AstSplineMap *, int, int, int, double *, int *);
void astSplineKnots_( AstSplineMap *, int, int, double *, int *);

# if defined(astCLASS)           /* Protected */

   int astGetInvNiter_( AstSplineMap *, int * );
   int astTestInvNiter_( AstSplineMap *, int * );
   void astClearInvNiter_( AstSplineMap *, int * );
   void astSetInvNiter_( AstSplineMap *, int, int * );

   int astGetOutUnit_( AstSplineMap *, int * );
   int astTestOutUnit_( AstSplineMap *, int * );
   void astClearOutUnit_( AstSplineMap *, int * );
   void astSetOutUnit_( AstSplineMap *, int, int * );

   double astGetInvTol_( AstSplineMap *, int * );
   int astTestInvTol_( AstSplineMap *, int * );
   void astClearInvTol_( AstSplineMap *, int * );
   void astSetInvTol_( AstSplineMap *, double, int * );

   int astGetSplineKx_( AstSplineMap *, int * );
   int astGetSplineKy_( AstSplineMap *, int * );
   int astGetSplineNx_( AstSplineMap *, int * );
   int astGetSplineNy_( AstSplineMap *, int * );

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
#define astCheckSplineMap(this) astINVOKE_CHECK(SplineMap,this,0)
#define astVerifySplineMap(this) astINVOKE_CHECK(SplineMap,this,1)

/* Test class membership. */
#define astIsASplineMap(this) astINVOKE_ISA(SplineMap,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astSplineMap astINVOKE(F,astSplineMap_)
#else
#define astSplineMap astINVOKE(F,astSplineMapId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define \
astInitSplineMap(mem,size,init,vtab,name,kx,ky,nx,ny,tx,ty,cu,cv) \
astINVOKE(O,astInitSplineMap_(mem,size,init,vtab,name,kx,ky,nx,ny,tx,ty,cu,cv,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitSplineMapVtab(vtab,name) astINVOKE(V,astInitSplineMapVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadSplineMap(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadSplineMap_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckSplineMap to validate SplineMap pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#define astSplineCoeffs(this,axis,nel,coeffs) \
astINVOKE(V,astSplineCoeffs_(astCheckSplineMap(this),0,axis,nel,coeffs,STATUS_PTR))

#define astSplineCoeffs_F77(this,axis,nel,coeffs) \
astINVOKE(V,astSplineCoeffs_(astCheckSplineMap(this),1,axis,nel,coeffs,STATUS_PTR))

#define astSplineKnots(this,axis,nel,knots) \
astINVOKE(V,astSplineKnots_(astCheckSplineMap(this),axis,nel,knots,STATUS_PTR))

#if defined(astCLASS)            /* Protected */

#define astClearInvNiter(this) \
        astINVOKE(V,astClearInvNiter_(astCheckSplineMap(this),STATUS_PTR))
#define astGetInvNiter(this) \
        astINVOKE(V,astGetInvNiter_(astCheckSplineMap(this),STATUS_PTR))
#define astSetInvNiter(this,value) \
        astINVOKE(V,astSetInvNiter_(astCheckSplineMap(this),value,STATUS_PTR))
#define astTestInvNiter(this) \
        astINVOKE(V,astTestInvNiter_(astCheckSplineMap(this),STATUS_PTR))

#define astClearOutUnit(this) \
	astINVOKE(V,astClearOutUnit_(astCheckSplineMap(this),STATUS_PTR))
	#define astGetOutUnit(this) \
	astINVOKE(V,astGetOutUnit_(astCheckSplineMap(this),STATUS_PTR))
	#define astSetOutUnit(this,value) \
	astINVOKE(V,astSetOutUnit_(astCheckSplineMap(this),value,STATUS_PTR))
	#define astTestOutUnit(this) \
	astINVOKE(V,astTestOutUnit_(astCheckSplineMap(this),STATUS_PTR))

#define astClearInvTol(this) \
        astINVOKE(V,astClearInvTol_(astCheckSplineMap(this),STATUS_PTR))
#define astGetInvTol(this) \
        astINVOKE(V,astGetInvTol_(astCheckSplineMap(this),STATUS_PTR))
#define astSetInvTol(this,value) \
        astINVOKE(V,astSetInvTol_(astCheckSplineMap(this),value,STATUS_PTR))
#define astTestInvTol(this) \
        astINVOKE(V,astTestInvTol_(astCheckSplineMap(this),STATUS_PTR))

#define astGetSplineKx(this) \
        astINVOKE(V,astGetSplineKx_(astCheckSplineMap(this),STATUS_PTR))
#define astGetSplineKy(this) \
        astINVOKE(V,astGetSplineKy_(astCheckSplineMap(this),STATUS_PTR))
#define astGetSplineNx(this) \
        astINVOKE(V,astGetSplineNx_(astCheckSplineMap(this),STATUS_PTR))
#define astGetSplineNy(this) \
        astINVOKE(V,astGetSplineNy_(astCheckSplineMap(this),STATUS_PTR))

#endif

#endif





