#if !defined( YAMLCHAN_INCLUDED ) /* Include this file only once */
#define YAMLCHAN_INCLUDED
/*
*+
*  Name:
*     yamlchan.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the YamlChan class.

*  Invocation:
*     #include "yamlchan.h"

*  Description:
*     This include file defines the interface to the YamlChan class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The YamlChan class provides facilities for reading and writing AST
*     Objects in the form of YAML text.

*  Inheritance:
*     The YamlChan class inherits from the Channel class.

*  Copyright:
*     Copyright (C) 2020 East Asian Observatory.
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
*     30-APR-2020 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "channel.h"             /* I/O channels (parent class) */
#include "keymap.h"

/* C header files. */
/* --------------- */
#if defined(astCLASS)            /* Protected */
#include <stddef.h>
#endif

#if defined( YAML )
#include <yaml.h>
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
#define AST__YAMLCHAN_GETATTRIB_BUFF_LEN 200

/* Type Definitions. */
/* ================= */

/* YamlChan structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstYamlChan {

/* Attributes inherited from the parent class. */
   AstChannel channel;    /* Parent class structure */

/* Attributes specific to objects in this class. */
   int preservename;      /* Store ASDF 'name' as Ident? */
   int verboseread;       /* Echo yaml text to stdout as it is read? */
   int yamlencoding;      /* Output format to use when writing */
   int defenc;            /* Default yaml encoding */
   AstKeyMap *anchors;    /* KeyMap holding transient YAML anchor definitions */
   int gotwcs;            /* Has a complete WCS been read yet? */
   const char *objectname;/* Name of Object currently being written. */
   int objectset;         /* Is the Object currently being written set? */
   int write_isa;         /* Is the next "isA" really needed? */
   AstKeyMap *obj;        /* KeyMap holding the NATIVE object being read */
   int index;             /* Index of next item to read from "obj" */

#if defined( YAML )
   yaml_emitter_t emitter_data; /* The body of a yaml emitter */
   yaml_emitter_t *emitter;     /* Pointer to the above yaml emitter */
#endif

} AstYamlChan;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstYamlChanVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstChannelVtab channel_vtab;  /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */
   int (* GetVerboseRead)( AstYamlChan *, int * );
   int (* TestVerboseRead)( AstYamlChan *, int * );
   void (* ClearVerboseRead)( AstYamlChan *, int * );
   void (* SetVerboseRead)( AstYamlChan *, int, int * );

   int (* GetPreserveName)( AstYamlChan *, int * );
   int (* TestPreserveName)( AstYamlChan *, int * );
   void (* ClearPreserveName)( AstYamlChan *, int * );
   void (* SetPreserveName)( AstYamlChan *, int, int * );

   int (* GetYamlEncoding)( AstYamlChan *, int * );
   int (* TestYamlEncoding)( AstYamlChan *, int * );
   void (* ClearYamlEncoding)( AstYamlChan *, int * );
   void (* SetYamlEncoding)( AstYamlChan *, int, int * );

} AstYamlChanVtab;

#if defined(THREAD_SAFE)
typedef struct AstYamlChanGlobals {
   AstYamlChanVtab Class_Vtab;
   int Class_Init;
   char GetAttrib_Buff[ AST__YAMLCHAN_GETATTRIB_BUFF_LEN + 1 ];
   int Current_Indent;
   int Lines_Written;
   int Current_Indentation;
} AstYamlChanGlobals;

#endif
#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(YamlChan)          /* Check class membership */
astPROTO_ISA(YamlChan)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstYamlChan *astYamlChan_( const char *(*)( void ), void (*)( const char * ),
                          const char *, int *, ...);
#else
AstYamlChan *astYamlChanId_( const char *(*)( void ), void (*)( const char * ),
                            const char *, ... );
AstYamlChan *astYamlChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstYamlChan *astInitYamlChan_( void *, size_t, int, AstYamlChanVtab *,
                             const char *, const char *(*)( void ),
                             char *(*)( const char *(*)( void ), int * ),
                             void (*)( const char * ),
                             void (*)( void (*)( const char * ),
                             const char *, int * ), int * );

/* Vtab initialiser. */
void astInitYamlChanVtab_( AstYamlChanVtab *, const char *, int * );



/* Loader. */
AstYamlChan *astLoadYamlChan_( void *, size_t, AstYamlChanVtab *,
                               const char *, AstChannel *, int * );

/* Thread-safe initialiser for all global data used by this module. */
#if defined(THREAD_SAFE)
void astInitYamlChanGlobals_( AstYamlChanGlobals * );
#endif

#endif

/* Prototypes for member functions. */
/* -------------------------------- */

# if defined(astCLASS)           /* Protected */

int astGetVerboseRead_( AstYamlChan *, int * );
int astTestVerboseRead_( AstYamlChan *, int * );
void astClearVerboseRead_( AstYamlChan *, int * );
void astSetVerboseRead_( AstYamlChan *, int, int * );

int astGetPreserveName_( AstYamlChan *, int * );
int astTestPreserveName_( AstYamlChan *, int * );
void astClearPreserveName_( AstYamlChan *, int * );
void astSetPreserveName_( AstYamlChan *, int, int * );

int astGetYamlEncoding_( AstYamlChan *, int * );
int astTestYamlEncoding_( AstYamlChan *, int * );
void astClearYamlEncoding_( AstYamlChan *, int * );
void astSetYamlEncoding_( AstYamlChan *, int, int * );

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
#define astCheckYamlChan(this) astINVOKE_CHECK(YamlChan,this,0)
#define astVerifyYamlChan(this) astINVOKE_CHECK(YamlChan,this,1)

/* Test class membership. */
#define astIsAYamlChan(this) astINVOKE_ISA(YamlChan,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astYamlChan astINVOKE(F,astYamlChan_)
#else
#define astYamlChan astINVOKE(F,astYamlChanId_)
#define astYamlChanFor astINVOKE(F,astYamlChanForId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitYamlChan(mem,size,init,vtab,name,source,source_wrap,sink,sink_wrap) \
astINVOKE(O,astInitYamlChan_(mem,size,init,vtab,name,source,source_wrap,sink,sink_wrap,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitYamlChanVtab(vtab,name) astINVOKE(V,astInitYamlChanVtab_(vtab,name,STATUS_PTR))
/* Loader. */
#define astLoadYamlChan(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadYamlChan_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to member functions. */
/* ------------------------------- */
/* Here we make use of astCheckYamlChan to validate YamlChan pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */


#if defined(astCLASS)            /* Protected */
#define astClearVerboseRead(this) \
astINVOKE(V,astClearVerboseRead_(astCheckYamlChan(this),STATUS_PTR))
#define astGetVerboseRead(this) \
astINVOKE(V,astGetVerboseRead_(astCheckYamlChan(this),STATUS_PTR))
#define astSetVerboseRead(this,value) \
astINVOKE(V,astSetVerboseRead_(astCheckYamlChan(this),value,STATUS_PTR))
#define astTestVerboseRead(this) \
astINVOKE(V,astTestVerboseRead_(astCheckYamlChan(this),STATUS_PTR))

#define astClearPreserveName(this) \
astINVOKE(V,astClearPreserveName_(astCheckYamlChan(this),STATUS_PTR))
#define astGetPreserveName(this) \
astINVOKE(V,astGetPreserveName_(astCheckYamlChan(this),STATUS_PTR))
#define astSetPreserveName(this,value) \
astINVOKE(V,astSetPreserveName_(astCheckYamlChan(this),value,STATUS_PTR))
#define astTestPreserveName(this) \
astINVOKE(V,astTestPreserveName_(astCheckYamlChan(this),STATUS_PTR))

#define astClearYamlEncoding(this) astINVOKE(V,astClearYamlEncoding_(astCheckYamlChan(this),STATUS_PTR))
#define astGetYamlEncoding(this) astINVOKE(V,astGetYamlEncoding_(astCheckYamlChan(this),STATUS_PTR))
#define astSetYamlEncoding(this,yamlencoding) astINVOKE(V,astSetYamlEncoding_(astCheckYamlChan(this),yamlencoding,STATUS_PTR))
#define astTestYamlEncoding(this) astINVOKE(V,astTestYamlEncoding_(astCheckYamlChan(this),STATUS_PTR))

#endif
#endif




