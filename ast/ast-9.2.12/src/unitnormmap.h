#if !defined( UNITNORMMAP_INCLUDED ) /* Include this file only once */
#define UNITNORMMAP_INCLUDED
/*
*+
*  Name:
*     unitnormmap.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the UnitNormMap class.

*  Invocation:
*     #include "unitnormmap.h"

*  Description:
*     This include file defines the interface to the UnitNormMap class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     A UnitNormMap is a Mapping which, in the forward direction,
*     subtracts the specified centre and then transforms the resulting vector
*     to a unit vector and the vector norm.
*     The forward direction outputs one more coordinate than is input.
*
*     The inverse transformation of a UnitNormMap multiplies each component
*     of the provided vector by the provided norm and adds the specified centre.
*     The forward direction outputs one fewer coordinate than is input.
*
*     Example: if centre = [1, -1] then [5, 2] transforms to [4, 3] after subtracting the centre;
*     the norm is 5, so the output is [0.8, 0.6, 5]
*
*     UnitNormMap is intended for applying radially symmetric distortions, as follows:
*     - apply a UnitNormMap to produce a unit vector and norm (radius)
*     - apply some one-dimensional mapping to the norm (radius), while passing the unit vector unchanged
*     - apply the same UnitNormMap in the inverse direction to produce the result
*

*  Inheritance:
*     The UnitNormMap class inherits from the Mapping class.

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
*           Clear an attribute value for a UnitNormMap.
*        GetAttrib
*           Get an attribute value for a UnitNormMap.
*        SetAttrib
*           Set an attribute value for a UnitNormMap.
*        TestAttrib
*           Test if an attribute value has been set for a UnitNormMap.
*        astMapMerge
*           Simplify a sequence of Mappings containing a UnitNormMap.
*        astTransform
*           Apply a UnitNormMap to transform a set of points.

*  New Methods Defined:
*     Public:
*        None.
*
*     Protected:
*        None.

*  Other Class Functions:
*     Public:
*        astIsAUnitNormMap
*           Test class membership.
*        astUnitNormMap
*           Create a UnitNormMap.
*
*     Protected:
*        astCheckUnitNormMap
*           Validate class membership.
*        astInitUnitNormMap
*           Initialise a UnitNormMap.
*        astInitUnitNormMapVtab
*           Initialise the virtual function table for the UnitNormMap class.
*        astLoadUnitNormMap
*           Load a UnitNormMap.

*  Macros:
*     None.

*  Type Definitions:
*     Public:
*        AstUnitNormMap
*           UnitNormMap object type.
*
*     Protected:
*        AstUnitNormMapVtab
*           UnitNormMap virtual function table type.

*  Feature Test Macros:
*     astCLASS
*        If the astCLASS macro is undefined, only public symbols are
*        made available, otherwise protected symbols (for use in other
*        class implementations) are defined. This macro also affects
*        the reporting of error context information, which is only
*        provided for external calls to the AST library.

*  Copyright:
*     Copyright (C) 2016 University of Washington

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
*     RO: Russell Owen (LSST)

*  History:
*     20-APR-2016 (RO):
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

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* Type Definitions. */
/* ================= */
/* UnitNormMap structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstUnitNormMap {

/* Attributes inherited from the parent class. */
   AstMapping mapping;           /* Parent class structure */

/* Attributes specific to objects in this class. */
   double *centre;                /* Pointer to array of shifts */

} AstUnitNormMap;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstUnitNormMapVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstMappingVtab mapping_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */

} AstUnitNormMapVtab;

#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within the
   object.c file. */

typedef struct AstUnitNormMapGlobals {
   AstUnitNormMapVtab Class_Vtab;
   int Class_Init;
} AstUnitNormMapGlobals;


/* Thread-safe initialiser for all global data used by this module. */
void astInitUnitNormMapGlobals_( AstUnitNormMapGlobals * );

#endif


#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(UnitNormMap)          /* Check class membership */
astPROTO_ISA(UnitNormMap)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstUnitNormMap *astUnitNormMap_( int, const double [], const char *, int *, ...);
#else
AstUnitNormMap *astUnitNormMapId_( int, const double [], const char *, ... )__attribute__((format(printf,3,4)));
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstUnitNormMap *astInitUnitNormMap_( void *, size_t, int, AstUnitNormMapVtab *,
                               const char *, int, const double *, int * );

/* Vtab initialiser. */
void astInitUnitNormMapVtab_( AstUnitNormMapVtab *, const char *, int * );

/* Loader. */
AstUnitNormMap *astLoadUnitNormMap_( void *, size_t, AstUnitNormMapVtab *,
                               const char *, AstChannel *, int * );
#endif

/* Prototypes for member functions. */
/* -------------------------------- */
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
#define astCheckUnitNormMap(this) astINVOKE_CHECK(UnitNormMap,this,0)
#define astVerifyUnitNormMap(this) astINVOKE_CHECK(UnitNormMap,this,1)

/* Test class membership. */
#define astIsAUnitNormMap(this) astINVOKE_ISA(UnitNormMap,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astUnitNormMap astINVOKE(F,astUnitNormMap_)
#else
#define astUnitNormMap astINVOKE(F,astUnitNormMapId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define \
astInitUnitNormMap(mem,size,init,vtab,name,ncoord,centre) \
astINVOKE(O,astInitUnitNormMap_(mem,size,init,vtab,name,ncoord,centre,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitUnitNormMapVtab(vtab,name) astINVOKE(V,astInitUnitNormMapVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadUnitNormMap(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadUnitNormMap_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckUnitNormMap to validate UnitNormMap pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#if defined(astCLASS)            /* Protected */
#endif

#endif
