#if !defined( XPHMAP_INCLUDED ) /* Include this file only once */
#define XPHMAP_INCLUDED
/*
*+
*  Name:
*     xphmap.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the XphMap class.

*  Invocation:
*     #include "xphmap.h"

*  Description:
*     This include file defines the interface to the XphMap class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The XphMap class implements Mappings which perform a "zoom"
*     transformation by multiplying all coordinate values by the same
*     scale factor (the inverse transformation is performed by
*     dividing by this scale factor).

*  Inheritance:
*     The XphMap class inherits from the Mapping class.

*  Copyright:
*     Copyright (C) 2018 East Asian Observatory
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
*     DSB: David S Berry (EAO)

*  History:
*     18-OCT-2018 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "mapping.h"             /* Coordinate mappings (parent class) */

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

#if defined(astCLASS)            /* Protected */

#define AST__HPX0  0             /* Projection types */
#define AST__HPX12 1
#define AST__XPHN  2
#define AST__XPHS  3

#define AST__MXPRJHPX 3          /* Highest projection type */

#endif

/* The maximum MOC order supported by this class. It's value, 27, is lower
   than the maximum of 29 specified by the MOC standard, and is chosen so
   that the X and Y grid indices within the whole sky HPX projection can
   be stored in a signed 4 byte integer. */
#define AST__MXORDHPX 27



/* Type Definitions. */
/* ================= */
/* XphMap structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstXphMap {

/* Attributes inherited from the parent class. */
   AstMapping mapping;           /* Parent class structure */

/* Attributes specific to objects in this class. */
   int order;                    /* HEALPix order */
   int type;                     /* Projection type */
} AstXphMap;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstXphMapVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstMappingVtab mapping_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
} AstXphMapVtab;


#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within this
   class. */
typedef struct AstXphMapGlobals {
   AstXphMapVtab Class_Vtab;
   int Class_Init;
} AstXphMapGlobals;

#endif

#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(XphMap)          /* Check class membership */
astPROTO_ISA(XphMap)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstXphMap *astXphMap_( int, int, const char *, int *, ...);
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstXphMap *astInitXphMap_( void *, size_t, int, AstXphMapVtab *,
                           const char *, int, int, int * );

/* Vtab initialiser. */
void astInitXphMapVtab_( AstXphMapVtab *, const char *, int * );

/* Loader. */
AstXphMap *astLoadXphMap_( void *, size_t, AstXphMapVtab *,
                             const char *, AstChannel *, int * );

/* Thread-safe initialiser for all global data used by this module. */
#if defined(THREAD_SAFE)
void astInitXphMapGlobals_( AstXphMapGlobals * );
#endif

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
#define astCheckXphMap(this) astINVOKE_CHECK(XphMap,this,0)
#define astVerifyXphMap(this) astINVOKE_CHECK(XphMap,this,1)

/* Test class membership. */
#define astIsAXphMap(this) astINVOKE_ISA(XphMap,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astXphMap astINVOKE(F,astXphMap_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitXphMap(mem,size,init,vtab,name,order,type) \
astINVOKE(O,astInitXphMap_(mem,size,init,vtab,name,order,type,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitXphMapVtab(vtab,name) astINVOKE(V,astInitXphMapVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadXphMap(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadXphMap_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckXphMap to validate XphMap pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#if defined(astCLASS)            /* Protected */
#endif
#endif





