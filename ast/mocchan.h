#if !defined( MOCCHAN_INCLUDED ) /* Include this file only once */
#define MOCCHAN_INCLUDED
/*
*+
*  Name:
*     mocchan.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the MocChan class.

*  Invocation:
*     #include "mocchan.h"

*  Description:
*     This include file defines the interface to the MocChan class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The MocChan class provides facilities for reading and writing AST
*     Moc Objects in either JSON or string form, using the serialisations
*     defined in the IVOA's MOC recommendation, version 1.1.

*  Inheritance:
*     The MocChan class inherits from the Channel class.

*  Copyright:
*     Copyright (C) 2019 East Asian Observatory
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
*     DSB: D.S. Berry (EAO)

*  History:
*     7-MAY-2019 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "channel.h"             /* I/O channels (parent class) */

/* C header files. */
/* --------------- */
#if defined(astCLASS)            /* Protected */
#include <stddef.h>
#endif

/* Macros. */
/* ------- */

#if defined(astCLASS) || defined(astFORTRAN77)
#define STATUS_PTR status
#else
#define STATUS_PTR astGetStatusPtr
#endif

/* Define constants used to size global arrays in this module. */
/* Define other numerical constants for use in this module. */
#define AST__MOCCHAN_GETATTRIB_BUFF_LEN 200

/* Type Definitions. */
/* ================= */

/* MocChan structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstMocChan {

/* Attributes inherited from the parent class. */
   AstChannel channel;          /* Parent class structure */

/* Attributes specific to objects in this class. */
   int mocformat;               /* Encoding scheme */
   int moclinelen;               /* Buffer length */
} AstMocChan;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstMocChanVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstChannelVtab channel_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
   int (* GetMocFormat)( AstMocChan *, int * );
   int (* TestMocFormat)( AstMocChan *, int * );
   void (* SetMocFormat)( AstMocChan *, int, int * );
   void (* ClearMocFormat)( AstMocChan *, int * );

   int (* GetMocLineLen)( AstMocChan *, int * );
   int (* TestMocLineLen)( AstMocChan *, int * );
   void (* ClearMocLineLen)( AstMocChan *, int * );
   void (* SetMocLineLen)( AstMocChan *, int, int * );

} AstMocChanVtab;

#if defined(THREAD_SAFE)
typedef struct AstMocChanGlobals {
   AstMocChanVtab Class_Vtab;
   int Class_Init;
   char GetAttrib_Buff[ AST__MOCCHAN_GETATTRIB_BUFF_LEN + 1 ];
} AstMocChanGlobals;

#endif
#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(MocChan)          /* Check class membership */
astPROTO_ISA(MocChan)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstMocChan *astMocChan_( const char *(*)( void ), void (*)( const char * ),
                         const char *, int *, ...);
#else
AstMocChan *astMocChanId_( const char *(*)( void ), void (*)( const char * ),
                           const char *, ... );
AstMocChan *astMocChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstMocChan *astInitMocChan_( void *, size_t, int, AstMocChanVtab *,
                             const char *, const char *(*)( void ),
                             char *(*)( const char *(*)( void ), int * ),
                             void (*)( const char * ),
                             void (*)( void (*)( const char * ),
                             const char *, int * ), int * );

/* Vtab initialiser. */
void astInitMocChanVtab_( AstMocChanVtab *, const char *, int * );



/* Loader. */
AstMocChan *astLoadMocChan_( void *, size_t, AstMocChanVtab *,
                               const char *, AstChannel *, int * );

/* Thread-safe initialiser for all global data used by this module. */
#if defined(THREAD_SAFE)
void astInitMocChanGlobals_( AstMocChanGlobals * );
#endif

#endif

/* Prototypes for member functions. */
/* -------------------------------- */

# if defined(astCLASS)           /* Protected */
int astGetMocFormat_( AstMocChan *, int * );
int astTestMocFormat_( AstMocChan *, int * );
void astSetMocFormat_( AstMocChan *, int, int * );
void astClearMocFormat_( AstMocChan *, int * );

int astGetMocLineLen_( AstMocChan *, int * );
int astTestMocLineLen_( AstMocChan *, int * );
void astClearMocLineLen_( AstMocChan *, int * );
void astSetMocLineLen_( AstMocChan *, int, int * );

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
#define astCheckMocChan(this) astINVOKE_CHECK(MocChan,this,0)
#define astVerifyMocChan(this) astINVOKE_CHECK(MocChan,this,1)

/* Test class membership. */
#define astIsAMocChan(this) astINVOKE_ISA(MocChan,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astMocChan astINVOKE(F,astMocChan_)
#else
#define astMocChan astINVOKE(F,astMocChanId_)
#define astMocChanFor astINVOKE(F,astMocChanForId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitMocChan(mem,size,init,vtab,name,source,source_wrap,sink,sink_wrap) \
astINVOKE(O,astInitMocChan_(mem,size,init,vtab,name,source,source_wrap,sink,sink_wrap,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitMocChanVtab(vtab,name) astINVOKE(V,astInitMocChanVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadMocChan(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadMocChan_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to member functions. */
/* ------------------------------- */
/* Here we make use of astCheckMocChan to validate MocChan pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */


#if defined(astCLASS)            /* Protected */

#define astClearMocFormat(this) \
astINVOKE(V,astClearMocFormat_(astCheckMocChan(this),STATUS_PTR))
#define astGetMocFormat(this) \
astINVOKE(V,astGetMocFormat_(astCheckMocChan(this),STATUS_PTR))
#define astSetMocFormat(this,mocformat) \
astINVOKE(V,astSetMocFormat_(astCheckMocChan(this),mocformat,STATUS_PTR))
#define astTestMocFormat(this) \
astINVOKE(V,astTestMocFormat_(astCheckMocChan(this),STATUS_PTR))


#define astClearMocLineLen(this) \
astINVOKE(V,astClearMocLineLen_(astCheckMocChan(this),STATUS_PTR))
#define astGetMocLineLen(this) \
astINVOKE(V,astGetMocLineLen_(astCheckMocChan(this),STATUS_PTR))
#define astSetMocLineLen(this,moclinelen) \
astINVOKE(V,astSetMocLineLen_(astCheckMocChan(this),moclinelen,STATUS_PTR))
#define astTestMocLineLen(this) \
astINVOKE(V,astTestMocLineLen_(astCheckMocChan(this),STATUS_PTR))

#endif
#endif




