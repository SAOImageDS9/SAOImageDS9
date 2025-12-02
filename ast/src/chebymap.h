#if !defined( CHEBYMAP_INCLUDED ) /* Include this file only once */
#define CHEBYMAP_INCLUDED
/*
*+
*  Name:
*     chebymap.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the ChebyMap class.

*  Invocation:
*     #include "chebymap.h"

*  Description:
*     This include file defines the interface to the ChebyMap class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.

*  Inheritance:
*     The ChebyMap class inherits from the PolyMap class.

*  Copyright:
*     Copyright (C) 2017 East Asian Observatory.
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
*     DSB: D.S. Berry (Starlink)

*  History:
*     2-MAR-2017 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "polymap.h"             /* Polynomial mappings (parent class) */

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

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* Type Definitions. */
/* ================= */
/* ChebyMap structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstChebyMap {

/* Attributes inherited from the parent class. */
   AstPolyMap polymap;        /* Parent class structure */

/* Attributes specific to objects in this class. */
   int cheby_f;               /* Is fwd transformation a Cheby poly? */
   int cheby_i;               /* Is inv transformation a Cheby poly? */
   double *scale_f;           /* Pointer to array of input axis scales */
   double *offset_f;          /* Pointer to array of input axis offsets */
   double *scale_i;           /* Pointer to array of input axis scales */
   double *offset_i;          /* Pointer to array of input axis offsets */
} AstChebyMap;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstChebyMapVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstPolyMapVtab polymap_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
   void (* ChebyDomain)( AstChebyMap *, int, double *, double *, int * );

} AstChebyMapVtab;

#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within the
   object.c file. */

typedef struct AstChebyMapGlobals {
   AstChebyMapVtab Class_Vtab;
   int Class_Init;
} AstChebyMapGlobals;


/* Thread-safe initialiser for all global data used by this module. */
void astInitChebyMapGlobals_( AstChebyMapGlobals * );

#endif


#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(ChebyMap)          /* Check class membership */
astPROTO_ISA(ChebyMap)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstChebyMap *astChebyMap_( int, int, int, const double[], int, const double[],
                           const double[], const double[], const double[], const double[],
                           const char *, int *, ...);
#else
AstChebyMap *astChebyMapId_( int, int, int, const double[], int, const double[], const double[], const double[], const double[], const double[], const char *, ... )__attribute__((format(printf,11,12)));
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstChebyMap *astInitChebyMap_( void *, size_t, int, AstChebyMapVtab *,
                               const char *, int, int, int, const double[],
                               int, const double[], const double[], const double[],
                               const double[], const double[], int * );

/* Vtab initialiser. */
void astInitChebyMapVtab_( AstChebyMapVtab *, const char *, int * );

/* Loader. */
AstChebyMap *astLoadChebyMap_( void *, size_t, AstChebyMapVtab *,
                               const char *, AstChannel *, int * );
#endif

/* Prototypes for member functions. */
/* -------------------------------- */
void astChebyDomain_( AstChebyMap *, int, double *, double *, int * );

# if defined(astCLASS)           /* Protected */
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
#define astCheckChebyMap(this) astINVOKE_CHECK(ChebyMap,this,0)
#define astVerifyChebyMap(this) astINVOKE_CHECK(ChebyMap,this,1)

/* Test class membership. */
#define astIsAChebyMap(this) astINVOKE_ISA(ChebyMap,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astChebyMap astINVOKE(F,astChebyMap_)
#else
#define astChebyMap astINVOKE(F,astChebyMapId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitChebyMap(mem,size,init,vtab,name,nin,nout,ncoeff_f,coeff_f,ncoeff_i,coeff_i,lbnd_f,ubnd_f,lbnd_i,ubnd_i) \
astINVOKE(O,astInitChebyMap_(mem,size,init,vtab,name,nin,nout,ncoeff_f,coeff_f,ncoeff_i,coeff_i,lbnd_f,ubnd_f,lbnd_i,ubnd_i,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitChebyMapVtab(vtab,name) astINVOKE(V,astInitChebyMapVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadChebyMap(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadChebyMap_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckChebyMap to validate ChebyMap pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#define astChebyDomain(this,forward,lbnd,ubnd) \
astINVOKE(V,astChebyDomain_(astCheckChebyMap(this),forward,lbnd,ubnd,STATUS_PTR))


#if defined(astCLASS)            /* Protected */

#endif
#endif





