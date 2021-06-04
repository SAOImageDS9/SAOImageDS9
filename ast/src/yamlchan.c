/*
*class++
*  Name:
*     YamlChan

*  Purpose:
*     I/O Channel that uses YAML to represent Objects.

*  Constructor Function:
c     astYamlChan
f     AST_YAMLCHAN

*  Description:
*     A YamlChan is a specialised form of Channel which supports
*     YAML I/O operations. Writing an Object to a YamlChan (using
c     astWrite) will, if the Object is suitable, generate an
f     AST_WRITE) will, if the Object is suitable, generate an
*     YAML description of that Object, and reading from a YamlChan will
*     create a new Object from its YAML description.
*
*     YAML itself does not define a way to store coordinate systems or
*     transformations - such definitions must be provided by a suitable
*     WCS-oriented schema.  The scheme to use is defined by the
*     YamlEncoding attribute. Currently, the only schema supported by this
*     class is "ASDF", defined by the Space Telescope Science Institute.
*     (see http://asdf-standard.readthedocs.io). At some point in the future
*     support will be added for the AST NATIVE scheme.
*
*     Normally, when you use a YamlChan, you should provide "source"
c     and "sink" functions which connect it to an external data store
c     by reading and writing the resulting text. These functions
f     and "sink" routines which connect it to an external data store
f     by reading and writing the resulting text. These routines
*     should perform any conversions needed between external character
c     encodings and the internal ASCII encoding. If no such functions
f     encodings and the internal ASCII encoding. If no such routines
*     are supplied, a Channel will read from standard input and write
*     to standard output.
*
*     Alternatively, a YamlChan can be told to read or write from
*     specific text files using the SinkFile and SourceFile attributes,
*     in which case no sink or source function need be supplied.

*  Inheritance:
*     The YamlChan class inherits from the Channel class.

*  Attributes:
*     In addition to those attributes common to all Channels, every
*     YamlChan also has the following attributes:
*
*     - VerboseRead: Echo YAML text to standard output as it is read?
*     - PreserveName: Save the ASDF name attributes as AST Ident values?
*     - YamlEncoding: The external formatting system to use.

*  Functions:
c     The YamlChan class does not define any new functions beyond those
f     The YamlChan class does not define any new routines beyond those
*     which are applicable to all Channels.

*  Notes:
*     - This class uses the limyaml library to read and write yaml. If the
*     libyaml library cannot be found when the AST library is configured,
*     then an error will be reported if any YamlChan methods are invoked.

*  Copyright:
*     Copyright (C) 2020 East Asian Observatory
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
*     DSB: David Berry (EAO)

*  History:
*     30-APR-2020 (DSB):
*        Original version.
*     5-OCT-2020 (DSB):
*        Add a NAITVE encoding option (see YamlEncoding attribute).
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS YamlChan

/* Max length of string returned by GetAttrib */
#define GETATTRIB_BUFF_LEN 50

/* Length of an identifier for yuse as a yaml anchor. */
#define ID_LENGTH 16

/* YAML tag prefix for all ASDF and gWCS objects */
#define STSCI_TAG "tag:stsci.edu:"

/* YAML tag prefix for all AST-encoded objects */
#define STARLINK_TAG "tag:starlink.ac.uk:"

/* YAML tag prefix for all ASDF-encoded objects */
#define ASDF_TAG STSCI_TAG"asdf/"

/* YAML tag prefix for all AST-encoded objects */
#define AST_TAG STARLINK_TAG"ast/"

/* YAML tag prefix for all gWCS objects */
#define GWCS_TAG STSCI_TAG"gwcs/"

/* YAML tag prefix for astropy objects. */
#define ASTROPY_TAG "tag:astropy.org:"

/* YAML tag for the root node in the YAML tree. */
#define ROOT_TAG STSCI_TAG"asdf/core/asdf-1.1.0"

/* The ASDF version header. */
#define ASDF_HEADER "#ASDF 1.0.0"

/* The major version numbers required by this module for the two
   supported STSci schemas (gwcs/ and asdf/transform/). */
#define TRANSFORM_MAJOR 1
#define GWCS_MAJOR 1

/* The minimum minor version numbers required by this module for the
   two supported STSci schemas (gwcs/ and asdf/transform/). */
#define TRANSFORM_MINOR 2
#define GWCS_MINOR 0

/* Maximum number of axes in a Frame */
#define MXDIM 10

/* Maximum order for a polynomial */
#define MXORD 100

/* The type given to YAML Mappings that have no specified type. */
#define ANON_TYPE "<anonymous>"

/* The type given to YAML Sequences (these can contain objects of
   different classes). */
#define SEQ_TYPE "<sequence>"

/* The yaml strings to mark the start of the forward and inverse
   operations within a TAtomic. */
#define FORWARD_OPERATION "forward: !<trans:TForward>"
#define INVERSE_OPERATION "inverse: !<trans:TInverse>"

/* The yaml strings to indicate the TOperations within a Mapping should
   be swapped. */
#define MAPPING_INVERT "invert: 1"

/* Value for proxy pointer used to indicate that a CmpMap has been
   checked and found not to be equivalent to an atomic ASDF transform. */
#define NOTASDF ((void *)0x1)

/* Encodings */
#define UNKNOWN_ENCODING  -1
#define ASDF_ENCODING     0
#define NATIVE_ENCODING   1
#define MAX_ENCODING      1
#define UNKNOWN_STRING    "UNKNOWN"
#define ASDF_STRING       "ASDF"
#define NATIVE_STRING     "NATIVE"

/* Value for proxy pointer used to indicate that the inverse transform of a
   Mapping should not be used. */
#define NOINV ((void *)0x2)

/* Report an error saying YAML is not support. */
#define YAML_ERR(Method) \
   if( astOK ) astError( AST__NOYAML, "%s(YamlChan): AST was " \
                         "configured without YAML support.", status, \
                         Method );

/* Emit a YAML event and report an error if it fails. */
#if defined( YAML )
static int TraceOutput = 0;
static int nest_depth = 0;
static int nest_type[ 100 ];
#define EMIT \
   if( TraceOutput && astOK ) { \
      for( int kk = 0; kk < nest_depth; kk++ ) printf(" "); \
      printf("Emitting %s ", YamlEventType(event) ); \
      if( event.type == YAML_SCALAR_EVENT ) { \
         printf("('%s') ", (char *) event.data.scalar.value ); \
      } else if( event.type == YAML_SEQUENCE_START_EVENT ) { \
         nest_type[ nest_depth++ ] = 1; \
         if( event.data.sequence_start.tag ) \
            printf("(%s) ", (char *) event.data.sequence_start.tag ); \
      } else if( event.type == YAML_MAPPING_START_EVENT ) { \
         nest_type[ nest_depth++ ] = 0; \
         if( event.data.mapping_start.tag ) \
            printf("(%s) ", (char *) event.data.mapping_start.tag ); \
      } else if( event.type == YAML_SEQUENCE_END_EVENT ) { \
         if( nest_depth == 0 ) { \
            astError( AST__INTER, "astWrite(YamlChan): yaml nesting " \
                      "error (too many _END_ events).", status ); \
         } else if( nest_type[ --nest_depth ] != 1 ) { \
            astError( AST__INTER, "astWrite(YamlChan): yaml nesting " \
                      "error (SEQUENCE_END where MAPPING_END expected).",  \
                      status ); \
         } \
      } else if( event.type == YAML_MAPPING_END_EVENT ) { \
         if( nest_depth == 0 ) { \
            astError( AST__INTER, "astWrite(YamlChan): yaml nesting " \
                      "error (too many _END_ events).", status ); \
         } else if( nest_type[ --nest_depth ] != 0 ) { \
            astError( AST__INTER, "astWrite(YamlChan): yaml nesting " \
                      "error (MAPPING_END where SEQUENCE_END expected).",  \
                      status ); \
         } \
      } \
      printf("\n"); \
   } \
   if( !yaml_emitter_emit( emitter, &event ) ){ \
      astError( AST__LYAML, "astWrite(%s): Failed to emit libyaml " \
                "%s", status, astGetClass( this ), YamlEventType(event) ); \
      LibYamlEmitterError( emitter, status ); \
   }
#endif

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "pal.h"                 /* SLALIB replacement */
#include "channel.h"             /* Interface for parent class */
#include "cmpmap.h"              /* Compound Mappings */
#include "error.h"               /* Error reporting facilities */
#include "frame.h"               /* Generic cartesian coordinate systems */
#include "skyframe.h"            /* Celestial coordinate systems */
#include "timeframe.h"           /* Time coordinate systems */
#include "globals.h"             /* Thread-safe global data access */
#include "keymap.h"              /* KeyMap interface */
#include "loader.h"              /* Interface to the global loader */
#include "matrixmap.h"           /* Matrix Mappings */
#include "memory.h"              /* Memory allocation facilities */
#include "object.h"              /* Base Object class */
#include "polymap.h"             /* Polynomial Mappings */
#include "shiftmap.h"            /* Shift of origin Mappings */
#include "sphmap.h"              /* Spherical -> Cartesian Mappings */
#include "yamlchan.h"            /* Interface definition for this class */
#include "unitmap.h"             /* Unit mappings */
#include "wcsmap.h"              /* PI-related constants */
#include "tranmap.h"             /* Mappings with specified transformations */
#include "winmap.h"              /* Window Mappings */
#include "zoommap.h"             /* Scale Mappings */
#include "chebymap.h"            /* Chebyshev Mappings */
#include "fitschan.h"            /* FITS header channels */
#include "permmap.h"             /* Axis permutation Mappings */
#include "unit.h"                /* Unit handling */
#include "erfa.h"                /* SOFA interface */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Include the libyaml header if it is available. Otherwise, define
   local stubs for the selected definitions in yaml.h */
#if defined( YAML )
#include <yaml.h>
#else
typedef int yaml_parser_t;
typedef int yaml_event_t;
#endif

/* Module Variables. */
/* ================= */

/* Pointers to parent class methods which are extended by this class. */
static const char *(* parent_getattrib)( AstObject *, const char *, int * );
static int (* parent_testattrib)( AstObject *, const char *, int * );
static void (* parent_clearattrib)( AstObject *, const char *, int * );
static void (* parent_setattrib)( AstObject *, const char *, int * );
static int (* parent_getindent)( AstChannel *, int * );
static void (* parent_setindent)( AstChannel *, int, int * );
static AstObject *(* parent_read)( AstChannel *, int * );

/* Text values used to represent YamlEncoding values externally. These
   should be in the order defined by the associated constants above. */
static const char *xencod[1] = { ASDF_STRING };

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Define macros for accessing each item of thread specific global data. */
#ifdef THREAD_SAFE

/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->GetAttrib_Buff[ 0 ] = 0; \
   globals->Lines_Written = 0; \
   globals->Class_Init = 0; \

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(YamlChan)

/* Define macros for accessing each item of thread specific global data. */
#define getattrib_buff astGLOBAL(YamlChan,GetAttrib_Buff)
#define class_init astGLOBAL(YamlChan,Class_Init)
#define class_vtab astGLOBAL(YamlChan,Class_Vtab)
#if defined( YAML )
#define lines_written astGLOBAL(YamlChan,Lines_Written)
#endif

/* If thread safety is not needed, declare and initialise globals as static
   variables. */
#else

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstYamlChanVtab class_vtab;   /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

/* Buffer returned by GetAttrib. */
static char getattrib_buff[ GETATTRIB_BUFF_LEN + 1 ];

#if defined( YAML )

/* Number of lines written to the output. */
static int lines_written = 0;

#endif

#endif

/* Data types used in this class */
/* ============================= */


/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstYamlChan *astYamlChanForId_( const char *(*)( void ),
                                char *(*)( const char *(*)( void ), int * ),
                                void (*)( const char * ),
                                void (*)( void (*)( const char * ), const char *, int * ),
                                const char *, ... );
AstYamlChan *astYamlChanId_( const char *(* source)( void ),
                             void (* sink)( const char * ),
                             const char *options, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */
#if defined( YAML )

static AstFrame *ReadFrame( AstKeyMap *, int, AstMapping **, int *status );
static AstFrameSet *ReadWcs( AstYamlChan *, AstKeyMap *, int * );
static AstObject *ReadNative( AstYamlChan *, AstKeyMap *, int * );
static AstKeyMap *AddR2D( AstYamlChan *, AstKeyMap **, int, int, int, int * );
static AstKeyMap *Get0A( AstKeyMap *, const char *, int, AstKeyMap *, const char *, int * );
static AstKeyMap *IsAsdfTransform( AstYamlChan *, AstCmpMap *, AstObject *, const char *, AstCmpMap **, int * );
static AstKeyMap *ReadValues( AstYamlChan *, yaml_parser_t *, int * );
static AstKeyMap *ReadYAMLMapping( AstYamlChan *, yaml_parser_t *, int * );
static AstKeyMap *StartAsdfKeyMap( AstYamlChan *, int, const char *, int * );
static AstKeyMap *StartAsdfTransform( AstYamlChan *, AstObject *, const char *, const char *, int * );
static AstKeyMap *StoreKeyMap( AstYamlChan *, const char *, AstKeyMap *, AstKeyMap **, int * );
static AstKeyMap *WriteAsdfAffine( AstYamlChan *, int, double *, double *, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfBaseFrame( AstYamlChan *, AstSkyFrame *, int * );
static AstKeyMap *WriteAsdfCelestialFrame( AstYamlChan *, AstSkyFrame *, int * );
static AstKeyMap *WriteAsdfCompose( AstYamlChan *, AstObject *, AstObject *, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfConcatenate( AstYamlChan *, AstObject *, AstObject *, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfConstant( AstYamlChan *, int, double, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfEarthLocation( AstYamlChan *, double[3], int * );
static AstKeyMap *WriteAsdfFrame( AstYamlChan *, AstFrame *, int * );
static AstKeyMap *WriteAsdfIdentity( AstYamlChan *, int, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfNdArray( AstYamlChan *, int, const int *, double *, int * );
static AstKeyMap *WriteAsdfPolynomial( AstYamlChan *, int, int, int, int, double *, int, double *, double *, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfProjection( AstYamlChan *, const char *, int, AstKeyMap *, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfQuantity( AstYamlChan *, int, const int *, double *, const char *, int * );
static AstKeyMap *WriteAsdfRemapAxes( AstYamlChan *, int, int, int *, AstObject *, const char *,int * );
static AstKeyMap *WriteAsdfRotate3d( AstYamlChan *, double[3], AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfScale( AstYamlChan *, double, AstObject *, const char *,  int * );
static AstKeyMap *WriteAsdfShift( AstYamlChan *, double, AstObject *, const char *, int * );
static AstKeyMap *WriteAsdfStep( AstYamlChan *, AstFrame *, AstMapping *, AstFrame *, int * );
static AstKeyMap *WriteAsdfTime( AstYamlChan *, double, double[3], int * );
static AstKeyMap *WriteAsdfWcs( AstYamlChan *, AstFrameSet *, int * );
static AstKeyMap *WriteFrame( AstYamlChan *, AstFrame *, int * );
static AstKeyMap *WriteFrameSet( AstYamlChan *, AstFrameSet *, int * );
static AstKeyMap *WriteMapping( AstYamlChan *, AstMapping *, AstObject *, const char *, int * );
static AstKeyMap *WriteMatrixMap( AstYamlChan *, AstMatrixMap *, AstObject *, const char *, int *);
static AstKeyMap *WritePermMap( AstYamlChan *, AstPermMap *, AstObject *, const char *, int *);
static AstKeyMap *WritePolyMap( AstYamlChan *, AstPolyMap *, AstObject *, const char *,  int *);
static AstKeyMap *WriteProxy( AstYamlChan *, AstMapping *, AstObject *, const char *, int * );
static AstKeyMap *WriteShiftMap( AstYamlChan *, AstShiftMap *, AstObject *, const char *, int *);
static AstKeyMap *WriteTranMap( AstYamlChan *, AstTranMap *, AstObject *, const char *, int *);
static AstKeyMap *WriteUnitMap( AstYamlChan *, AstUnitMap *, AstObject *, const char *, int *);
static AstKeyMap *WriteWcsMap( AstYamlChan *, AstWcsMap *, AstObject *, const char *,  int *);
static AstKeyMap *WriteWinMap( AstYamlChan *, AstWinMap *, AstObject *, const char *, int *);
static AstKeyMap *WriteZoomMap( AstYamlChan *, AstZoomMap *, AstObject *, const char *,  int *);
static AstKeyMap* WriteCmpMap( AstYamlChan *, AstCmpMap *, AstObject *, const char *, int *);
static AstMapping *IsPolyMap( AstMapping *, int * );
static AstMapping *ReadAffine( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadCompose( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadConcatenate( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadConstant( AstKeyMap *, int * );
static AstMapping *ReadFixInputs( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadIdentity( AstKeyMap *, int * );
static AstMapping *ReadLinear1d( AstKeyMap *, int * );
static AstMapping *ReadMultiplyScale( AstKeyMap *, int * );
static AstMapping *ReadOrthoPolynomial( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadPlanar2d( AstKeyMap *, int * );
static AstMapping *ReadPoly( AstYamlChan *, AstKeyMap *, int, int * );
static AstMapping *ReadPolynomial( AstYamlChan *, AstKeyMap *, int * );
static AstMapping *ReadRemapAxes( AstKeyMap *, int * );
static AstMapping *ReadRotate2d( AstKeyMap *, int * );
static AstMapping *ReadRotate3d( AstKeyMap *, int * );
static AstMapping *ReadRotateSequence3d( AstKeyMap *, int * );
static AstMapping *ReadScale( AstKeyMap *, int * );
static AstMapping *ReadShift( AstKeyMap *, int * );
static AstMapping *ReadSkyProjection( AstKeyMap *, int * );
static AstMapping *ReadTransform( AstYamlChan *, AstKeyMap *, int * );
static AstObject *YamlToAst( AstYamlChan *, AstKeyMap *, int * );
static AstSkyFrame *ReadCelestialFrame( AstKeyMap *, AstMapping **, int *status );
static char *Get1C( AstKeyMap *, const char *, int, int, const char **, int *, int * );
static const char *FmtDouble( double, size_t, char * );
static const char *Get0C( AstKeyMap *, const char *, int, const char *, int * );
static const char *GetAsdfClass( AstKeyMap *, int * );
static const char *GetNativeClass( AstKeyMap *, int * );
static const char *GetName( AstYamlChan *, const char *, AstMapping *, int * );
static const char *YamlEventType( yaml_event_t );
static double *GetQuantityV( AstYamlChan *, AstKeyMap *, const char *, const char *, int, int, int *, int *,  int * );
static double *GetSequence( AstYamlChan *, AstKeyMap *, const char *, int, int, int *, int *, int *status );
static double *ReadNDArray( AstYamlChan *, AstKeyMap *, int, int *, int *, int * );
static double *ReadSequence( AstYamlChan *, AstKeyMap *, const char *, int, int *, int *, int * );
static double Get0D( AstKeyMap *, const char *, int, double, int * );
static double GetQuantity( AstKeyMap *, const char *, const char *, int, double, int * );
static double GetTime( AstKeyMap *, const char *, AstFrame *, int * );
static int FindAffine( int, int *, AstMapping **, int *, int * );
static int FindRotate3d( int, int *, AstMapping **, int *, int * );
static int Get0I( AstKeyMap *, const char *, int, int, int * );
static int Get1A( AstKeyMap *, const char *, int, int, AstKeyMap **, int *, int * );
static int Get1D( AstKeyMap *, const char *, int, int, double *, int *, int * );
static int Get1I( AstKeyMap *, const char *, int, int, int *, int *, int * );
static int GetChoice( AstKeyMap *, const char *, const char *, int, int, int * );
static int IsA( AstKeyMap *, const char *, int * );
static int LibYamlReader( void *, yaml_char_t *, size_t, size_t * );
static int LibYamlWriter( void *, yaml_char_t *, long unsigned int );
static int ReadBaseFrame( AstKeyMap *, AstSkyFrame *, int * );
static int SimplifyAsdf( AstYamlChan *, AstKeyMap **, int *);
static int Use( AstYamlChan *, int, int, int * );
static void Deuler( const char *, double *, double[3][3], int * );
static void ExpandAsdf( AstYamlChan *, AstKeyMap *, int, int *, AstKeyMap ***, int * );
static void GetUCD( int, const char **, const char ** );
static void LibYamlEmitterError( yaml_emitter_t *, int * );
static void LibYamlParserError( yaml_parser_t *, int * );
static void PutIntoKeyMap( AstKeyMap *, const char *, int, void *, int * );
static void ReadEarthLocation( AstKeyMap *, AstFrame *, int * );
static void ReadStep( AstYamlChan *, AstKeyMap *, int, AstMapping **, AstFrame **, AstMapping **, int * );
static void ReadYAMLAlias( AstYamlChan *, AstKeyMap *, const char *, const char *, int * );
static void ReadYAMLEvent( AstYamlChan *, yaml_parser_t *, yaml_event_t *, AstKeyMap *, const char *, int * );
static void ReadYAMLItem( AstYamlChan *, yaml_parser_t *, AstKeyMap *, const char *, int * );
static void ReadYAMLSequence( AstYamlChan *, AstKeyMap *, const char *, yaml_parser_t *, int * );
static void SetNotAsdf( AstCmpMap *, int * );
static void EndYamlDoc( AstYamlChan *, yaml_emitter_t *, int * );
static void StartYamlDoc( AstYamlChan *, yaml_emitter_t *, int * );
static void StartYamlMapping( AstYamlChan *, const char *, const char *, yaml_emitter_t *, int * );
static void Store0C( AstYamlChan *, const char *, int, AstKeyMap *, const char *, const char *, int * );
static void Store0D( AstYamlChan *, const char *, AstKeyMap *, double, int * );
static void Store0I( AstYamlChan *, const char *, AstKeyMap *, int, int * );
static void Store1C( AstYamlChan *, const char *, int, AstKeyMap *, int, const char *[], const char *, int * );
static void Store1D( AstYamlChan *, const char *, AstKeyMap *, int, const double *, int * );
static void Store1I( AstYamlChan *, const char *, AstKeyMap *, int, const int *, int * );
static void StoreAnchor( AstYamlChan *, const char *, AstKeyMap *, const char *, int * );
static void StoreYaml0C( AstYamlChan *, const char *, int, yaml_emitter_t *, int, const char *, const char *, int * );
static void StoreYaml0D( AstYamlChan *, const char *, yaml_emitter_t *, int, double, int * );
static void StoreYaml0I( AstYamlChan *, const char *, yaml_emitter_t *, int, int, int * );
static void StoreYaml0K( AstYamlChan *, const char *, yaml_emitter_t *, int, int64_t, int * );
static void StoreYaml1C( AstYamlChan *, const char *, int, yaml_emitter_t *, int, const char *[], const char *, int * );
static void StoreYaml1D( AstYamlChan *, const char *, yaml_emitter_t *, int, const double *, int * );
static void StoreYaml1I( AstYamlChan *, const char *, yaml_emitter_t *, int, const int *, int * );
static void WriteValues( AstYamlChan *, const char *key, AstKeyMap *, int * );
static void WriteYamlEntry( AstYamlChan *, AstKeyMap *, const char *, const char *, const char *, yaml_emitter_t *, int * );
static void WriteYamlObject( AstYamlChan *, const char *, AstKeyMap *, yaml_emitter_t *, int * );
static void WriteBegin( AstChannel *, const char *, const char *, int * );
static void WriteDouble( AstChannel *, const char *, int, int, double, const char *, int * );
static void WriteEnd( AstChannel *, const char *, int * );
static void WriteInt( AstChannel *, const char *, int, int, int, const char *, int * );
static void WriteInt64( AstChannel *, const char *, int, int, int64_t, const char *, int * );
static void WriteIsA( AstChannel *, const char *, const char *, int * );
static void WriteObject( AstChannel *, const char *, int, int, AstObject *, const char *, int * );
static void WriteString( AstChannel *, const char *, int, int, const char *, const char *, int * );
static void GetNextData( AstChannel *, int, char **, char **, int * );

/* Prototypes for ASDF class testing functions. */
#define MAKE_PROTO(Class) static int IsA##Class( const char *class, int *status );
MAKE_PROTO(Wcs)
MAKE_PROTO(Step)
MAKE_PROTO(Celestial_Frame)
MAKE_PROTO(Frame2d)
MAKE_PROTO(Identity)
MAKE_PROTO(Scale)
MAKE_PROTO(MultiplyScale)
MAKE_PROTO(Remap_Axes)
MAKE_PROTO(Shift)
MAKE_PROTO(Compose)
MAKE_PROTO(Concatenate)
MAKE_PROTO(Constant)
MAKE_PROTO(Fix_Inputs)
MAKE_PROTO(Affine)
MAKE_PROTO(Rotate2d)
MAKE_PROTO(Rotate_Sequence_3d)
MAKE_PROTO(Rotate3d)
MAKE_PROTO(Linear1d)
MAKE_PROTO(Ortho_Polynomial)
MAKE_PROTO(Planar2d)
MAKE_PROTO(Polynomial)
MAKE_PROTO(Conic_Equal_Area)
MAKE_PROTO(Conic_Equidistant)
MAKE_PROTO(Conic_Orthomorphic)
MAKE_PROTO(Conic_Perspective)
MAKE_PROTO(Cylindrical_Equal_Area)
MAKE_PROTO(Cylindrical_Perspective)
MAKE_PROTO(Mercator)
MAKE_PROTO(Plate_Carree)
MAKE_PROTO(Healpix)
MAKE_PROTO(Healpix_Polar)
MAKE_PROTO(Bonne_Equal_Area)
MAKE_PROTO(PolyConic)
MAKE_PROTO(Hammer_Aitoff)
MAKE_PROTO(Molleweide)
MAKE_PROTO(Parabolic)
MAKE_PROTO(Sanson_Flamsteed)
MAKE_PROTO(Cobe_Quad_Spherical_Cube)
MAKE_PROTO(Quad_Spherical_Cube)
MAKE_PROTO(Tangential_Spherical_Cube)
MAKE_PROTO(Airy)
MAKE_PROTO(Gnomonic)
MAKE_PROTO(Slant_Orthographic)
MAKE_PROTO(Slant_Zenithal_Perspective)
MAKE_PROTO(Stereographic)
MAKE_PROTO(Zenithal_Equal_Area)
MAKE_PROTO(Zenithal_Equidistant)
MAKE_PROTO(Zenithal_Perspective)
MAKE_PROTO(Frame)
MAKE_PROTO(Transform)
MAKE_PROTO(SkyProjection)
MAKE_PROTO(Conic)
MAKE_PROTO(Cylindrical)
MAKE_PROTO(PseudoConic)
MAKE_PROTO(PseudoCylindrical)
MAKE_PROTO(QuadCube)
MAKE_PROTO(Zenithal)
MAKE_PROTO(Fk4)
MAKE_PROTO(Fk4Noeterms)
MAKE_PROTO(Fk5)
MAKE_PROTO(Galactic)
MAKE_PROTO(SuperGalactic)
MAKE_PROTO(Icrs)
MAKE_PROTO(Ecliptic)
MAKE_PROTO(Altaz)
MAKE_PROTO(Baseframe)
MAKE_PROTO(Time)
MAKE_PROTO(EarthLocation)
MAKE_PROTO(Quantity)
MAKE_PROTO(NDArray)
#undef MAKE_PROTO

#endif

static AstObject *Read( AstChannel *, int * );
static char *SourceWrap( const char *(*)( void ), int * );
static const char *GetAttrib( AstObject *, const char *, int * );
static int FindString( int, const char *[], const char *, const char *, const char *, const char *, int * );
static int GetIndent( AstChannel *, int * );
static int TestAttrib( AstObject *, const char *, int * );
static int Ustrcmp( const char *, const char *, int * );
static int Ustrncmp( const char *, const char *, size_t, int * );
static int Write( AstChannel *, AstObject *, int * );
static void ClearAttrib( AstObject *, const char *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void SetAttrib( AstObject *, const char *, int * );
static void SetIndent( AstChannel *, int, int * );
static void SinkWrap( void (*)( const char * ), const char *, int * );

static int GetVerboseRead( AstYamlChan *, int * );
static int TestVerboseRead( AstYamlChan *, int * );
static void ClearVerboseRead( AstYamlChan *, int * );
static void SetVerboseRead( AstYamlChan *, int, int * );

static int GetPreserveName( AstYamlChan *, int * );
static int TestPreserveName( AstYamlChan *, int * );
static void ClearPreserveName( AstYamlChan *, int * );
static void SetPreserveName( AstYamlChan *, int, int * );

static void ClearYamlEncoding( AstYamlChan *, int * );
static int GetYamlEncoding( AstYamlChan *, int * );
static int TestYamlEncoding( AstYamlChan *, int * );
static void SetYamlEncoding( AstYamlChan *, int, int * );


/* Member functions that are available even if libyaml is not available. */
/* ===================================================================== */


static void ClearAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     ClearAttrib

*  Purpose:
*     Clear an attribute value for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ClearAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the astClearAttrib protected
*     method inherited from the Channel class).

*  Description:
*     This function clears the value of a specified attribute for a
*     YamlChan, so that the default value will subsequently be used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;              /* Pointer to the YamlChan structure */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = ( AstYamlChan *) this_object;

/* Check the attribute name and clear the appropriate attribute. */
   if ( !strcmp( attrib, "verboseread" ) ) {
      astClearVerboseRead( this );

   } else if ( !strcmp( attrib, "preservename" ) ) {
      astClearPreserveName( this );

   } else if ( !strcmp( attrib, "yamlencoding" ) ) {
      astClearYamlEncoding( this );

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_clearattrib)( this_object, attrib, status );
   }
}

static int FindString( int n, const char *list[], const char *test,
                       const char *text, const char *method,
                       const char *class, int *status ){
/*
*  Name:
*     FindString

*  Purpose:
*     Find a given string within an array of character strings.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int FindString( int n, const char *list[], const char *test,
*                     const char *text, const char *method, const char *class, int *status )

*  Class Membership:
*     YamlChan method.

*  Description:
*     This function identifies a supplied string within a supplied
*     array of valid strings, and returns the index of the string within
*     the array. The test option may not be abbreviated, but case is
*     insignificant.

*  Parameters:
*     n
*        The number of strings in the array pointed to be "list".
*     list
*        A pointer to an array of legal character strings.
*     test
*        A candidate string.
*     text
*        A string giving a description of the object, parameter,
*        attribute, etc, to which the test value refers.
*        This is only for use in constructing error messages. It should
*        start with a lower case letter.
*     method
*        Pointer to a string holding the name of the calling method.
*        This is only for use in constructing error messages.
*     class
*        Pointer to a string holding the name of the supplied object class.
*        This is only for use in constructing error messages.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The index of the identified string within the supplied array, starting
*     at zero.

*  Notes:
*     -  A value of -1 is returned if an error has already occurred, or
*     if this function should fail for any reason (for instance if the
*     supplied option is not specified in the supplied list).
*/

/* Local Variables: */
   int ret;                /* The returned index */

/* Check global status. */
   if( !astOK ) return -1;

/* Compare the test string with each element of the supplied list. Leave
   the loop when a match is found. */
   for( ret = 0; ret < n; ret++ ) {
      if( !Ustrcmp( test, list[ ret ], status ) ) break;
   }

/* Report an error if the supplied test string does not match any element
   in the supplied list. */
   if( ret >= n && astOK ) {
      astError( AST__RDERR, "%s(%s): Illegal value '%s' supplied for %s.", status,
                method, class, test, text );
      ret = -1;
   }

/* Return the answer. */
   return ret;
}

static const char *GetAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     GetAttrib

*  Purpose:
*     Get the value of a specified attribute for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *GetAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected astGetAttrib
*     method inherited from the Channel class).

*  Description:
*     This function returns a pointer to the value of a specified
*     attribute for a YamlChan, formatted as a character string.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     attrib
*        Pointer to a null terminated string containing the name of
*        the attribute whose value is required. This name should be in
*        lower case, with all white space removed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     - Pointer to a null terminated string containing the attribute
*     value.

*  Notes:
*     - The returned string pointer may point at memory allocated
*     within the YamlChan, or at static memory. The contents of the
*     string may be over-written or the pointer may become invalid
*     following a further invocation of the same function or any
*     modification of the YamlChan. A copy of the string should
*     therefore be made if necessary.
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstYamlChan *this;            /* Pointer to the YamlChan structure */
   const char *result;           /* Pointer value to return */
   int ival;                     /* Integer attribute value */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this_object);

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_object;

/* Compare "attrib" with each recognised attribute name in turn,
   obtaining the value of the required attribute. If necessary, write
   the value into "getattrib_buff" as a null terminated string in an appropriate
   format.  Set "result" to point at the result string. */

/* Test for each attribute name is turn. */
   if ( !strcmp( attrib, "verboseread" ) ) {
      ival = astGetVerboseRead( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

   } else if ( !strcmp( attrib, "preservename" ) ) {
      ival = astGetPreserveName( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

   } else if ( !strcmp( attrib, "yamlencoding" ) ) {
      ival = astGetYamlEncoding( this );
      if ( astOK ) {
         if( ival == ASDF_ENCODING ){
            result = ASDF_STRING;
         } else if( ival == NATIVE_ENCODING ){
            result = NATIVE_STRING;
         } else {
            result = UNKNOWN_STRING;
         }
      }

/* If the attribute name was not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_getattrib)( this_object, attrib, status );
   }

/* Return the result. */
   return result;

}

static int GetIndent( AstChannel *this, int *status ) {
/*
*  Name:
*     GetIndent

*  Purpose:
*     Get the value of the Indent attribute for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int GetIndent( AstChannel *this, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected astGetIndent
*     method inherited from the Channel class).

*  Description:
*     This function returns the value of the Indent attribute, supplying
*     a default value appropriate to a YamlChan.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     - The Indent value to use.

*/

/* If the attribute is set, return its value. Otherwise return a value of
   two. */
   return astTestIndent( this ) ? (*parent_getindent)( this, status ) : 2;
}

void astInitYamlChanVtab_(  AstYamlChanVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitYamlChanVtab

*  Purpose:
*     Initialise a virtual function table for a YamlChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "yamlchan.h"
*     void astInitYamlChanVtab( AstYamlChanVtab *vtab, const char *name )

*  Class Membership:
*     YamlChan vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the YamlChan class.

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
   AstObjectVtab *object;        /* Pointer to Object component of Vtab */
   AstChannelVtab *channel;      /* Pointer to Channel component of Vtab */

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitChannelVtab( (AstChannelVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsAYamlChan) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstChannelVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   channel = (AstChannelVtab *) vtab;

   parent_clearattrib = object->ClearAttrib;
   object->ClearAttrib = ClearAttrib;
   parent_getattrib = object->GetAttrib;
   object->GetAttrib = GetAttrib;
   parent_setattrib = object->SetAttrib;
   object->SetAttrib = SetAttrib;
   parent_testattrib = object->TestAttrib;
   object->TestAttrib = TestAttrib;

   channel->Write = Write;
   parent_read = channel->Read;
   channel->Read = Read;

#if defined( YAML )
   channel->GetNextData = GetNextData;
   channel->WriteBegin = WriteBegin;
   channel->WriteIsA = WriteIsA;
   channel->WriteEnd = WriteEnd;
   channel->WriteInt = WriteInt;
   channel->WriteInt64 = WriteInt64;
   channel->WriteDouble = WriteDouble;
   channel->WriteString = WriteString;
   channel->WriteObject = WriteObject;
#endif

   parent_getindent = channel->GetIndent;
   channel->GetIndent = GetIndent;

   parent_setindent = channel->SetIndent;
   channel->SetIndent = SetIndent;

   vtab->ClearVerboseRead = ClearVerboseRead;
   vtab->GetVerboseRead = GetVerboseRead;
   vtab->SetVerboseRead = SetVerboseRead;
   vtab->TestVerboseRead = TestVerboseRead;

   vtab->ClearPreserveName = ClearPreserveName;
   vtab->GetPreserveName = GetPreserveName;
   vtab->SetPreserveName = SetPreserveName;
   vtab->TestPreserveName = TestPreserveName;

   vtab->ClearYamlEncoding = ClearYamlEncoding;
   vtab->GetYamlEncoding = GetYamlEncoding;
   vtab->SetYamlEncoding = SetYamlEncoding;
   vtab->TestYamlEncoding = TestYamlEncoding;

/* Declare the Dump function for this class. There is no destructor or
   copy constructor. */
   astSetDump( vtab, Dump, "YamlChan", "YAML I/O Channel" );

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static AstObject *Read( AstChannel *this_channel, int *status ) {
/*
*  Name:
*     Read

*  Purpose:
*     Read an Object from a Channel.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstObject *Read( AstChannel *this_channel, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the astRead method
*     inherited from the Channel class).

*  Description:
*     This function reads an Object from a YamlChan.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Object.
*/


/* Check libyaml is available. */
#if !defined( YAML )
   YAML_ERR("Read")
   return NULL;
#else

/* Local Variables: */
   AstObject *new;
   yaml_parser_t parser;
   AstYamlChan *this;
   AstKeyMap *values;

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if ( !astOK ) return new;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If this function has been called to read an object embedded within a
   higher level object which is already being read from a YamlChan, just use
   the parent Read method. */
   if( this->obj ) return (*parent_read)( (AstChannel *) this, status );

/* Create the KeyMap holding definitions for YAML anchors. Delete any
   pre-existing KeyMap first. */
   if( this->anchors ) this->anchors = astAnnul( this->anchors );
   this->anchors = astKeyMap( " ", status );

/* Indicate we have not yet read a complete WCS object. */
   this->gotwcs = 0;

/* Indicate we have not yet determined the default yaml encoding. */
   this->defenc = UNKNOWN_ENCODING;

/* Initialize a libyaml parser */
   if( !yaml_parser_initialize( &parser ) ){
      astError( AST__LYAML, "astRead(%s): Failed to initialize libyaml "
                "parser", status, astGetClass( this ) );
      LibYamlParserError( &parser, status );

/* Register the source function with the parser. */
   } else {
      yaml_parser_set_input( &parser, LibYamlReader, this );

/* Read the YAML object from the external source, parse it, and
   create a KeyMap containing the parsed values. This will set the
   default yaml encoding on the basis of the tags found in the
   supplied yaml. */
      values = ReadValues( this, &parser, status );

/* Delete the parser. */
      yaml_parser_delete( &parser );
   }

/* Create an AST object from the KeyMap. */
   new = YamlToAst( this, values, status );

/* Free resources */
   values = astAnnul( values );
   if( this->anchors ) this->anchors = astAnnul( this->anchors );

/* If an error occurred, clean up by deleting the new Object and
   return a NULL pointer. */
   if ( !astOK ) new = astDelete( new );

/* Return the pointer to the new Object. */
   return new;

#endif
}

static void SetAttrib( AstObject *this_object, const char *setting, int *status ) {
/*
*  Name:
*     SetAttrib

*  Purpose:
*     Set an attribute value for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void SetAttrib( AstObject *this, const char *setting )

*  Class Membership:
*     YamlChan member function (over-rides the astSetAttrib protected
*     method inherited from the Channel class).

*  Description:
*     This function assigns an attribute value for a YamlChan, the
*     attribute and its value being specified by means of a string of
*     the form:
*
*        "attribute= value "
*
*     Here, "attribute" specifies the attribute name and should be in
*     lower case with no white space present. The value to the right
*     of the "=" should be a suitable textual representation of the
*     value to be assigned and this will be interpreted according to
*     the attribute's data type.  White space surrounding the value is
*     only significant for string attributes.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     setting
*        Pointer to a null terminated string specifying the new attribute
*        value.
*/

/* Local Variables: */
   AstYamlChan *this;          /* Pointer to the YamlChan structure */
   int ival;                   /* Integer attribute value */
   int len;                    /* Length of setting string */
   int nc;                     /* Number of characters read by "astSscanf" */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_object;

/* Obtain the length of the setting string. */
   len = (int) strlen( setting );

/* Test for each recognised attribute in turn, using "astSscanf" to parse
   the setting string and extract the attribute value (or an offset to
   it in the case of string values). In each case, use the value set
   in "nc" to check that the entire string was matched. Once a value
   has been obtained, use the appropriate method to set it. */

/* Test for each attribute name in turn. */
   if ( nc = 0,
               ( 1 == astSscanf( setting, "verboseread= %d %n", &ival, &nc ) )
               && ( nc >= len ) ) {
      astSetVerboseRead( this, ival );

   } else if ( nc = 0,
               ( 1 == astSscanf( setting, "preservename= %d %n", &ival, &nc ) )
               && ( nc >= len ) ) {
      astSetPreserveName( this, ival );

   } else if( nc = 0,
        ( 0 == astSscanf( setting, "yamlencoding=%n%*[^\n]%n", &ival, &nc ) )
        && ( nc >= len ) ) {

      nc = astChrLen( setting + ival );

      if( !Ustrncmp( setting + ival, ASDF_STRING, nc, status ) ){
         astSetYamlEncoding( this, ASDF_ENCODING );

      } else if( !Ustrncmp( setting + ival, NATIVE_STRING, nc, status ) ){
         astSetYamlEncoding( this, NATIVE_ENCODING );

      } else {
         astError( AST__BADAT, "astSet(%s): Unknown YAML encoding '%s' "
                   "requested for a %s.", status, astGetClass( this ), setting + ival,
                   astGetClass( this ) );
      }

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_setattrib)( this_object, setting, status );
   }
}

static void SetIndent( AstChannel *this, int value, int *status ) {
/*
*  Name:
*     SetIndent

*  Purpose:
*     Set the value of the Indent attribute for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void SetIndent( AstChannel *this, int value, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected astSetIndent
*     method inherited from the Channel class).

*  Description:
*     This function stores a new value for the Indent attribute.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     value
*        The new attribute value.
*     status
*        Pointer to the inherited status variable.

*/

   if( value > 0 && value <= 10 ) {
      (*parent_setindent)( this, value, status );

   } else if( astOK ) {
      astError( AST__ATSER, "astSetIndent(%s): Supplied Indent value (%d) "
                "is illegal for a %s.", status, astGetClass( this ), value,
                astGetClass( this ));
      astError( AST__ATSER, "Indent must be in the range 1 to 10 inclusive.",
                status );
   }
}

static void SinkWrap( void (* sink)( const char * ), const char *line, int *status ) {
/*
*  Name:
*     SinkWrap

*  Purpose:
*     Wrapper function to invoke a C YamlChan sink function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void SinkWrap( void (* sink)( const char * ), const char *line, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function invokes the sink function whose pointer is
*     supplied in order to write an output line to an external data
*     store.

*  Parameters:
*     sink
*        Pointer to a sink function, whose single parameter is a
*        pointer to a const, null-terminated string containing the
*        text to be written, and which returns void. This is the form
*        of YamlChan sink function employed by the C language interface
*        to the AST library.
*     status
*        Pointer to the inherited status variable.
*/

/* Check the global error status. */
   if ( !astOK ) return;

/* Invoke the sink function. */
   ( *sink )( line );
}

static char *SourceWrap( const char *(* source)( void ), int *status ) {
/*
*  Name:
*     SourceWrap

*  Purpose:
*     Wrapper function to invoke a C YamlChan source function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     char *SourceWrap( const char *(* source)( void ), int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function invokes the source function whose pointer is
*     supplied in order to read the next input line from an external
*     data store. It then returns a pointer to a dynamic string
*     containing a copy of the text that was read.

*  Parameters:
*     source
*        Pointer to a source function, with no parameters, that
*        returns a pointer to a const, null-terminated string
*        containing the text that it read. This is the form of YamlChan
*        source function employed by the C language interface to the
*        AST library.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a dynamically allocated, null terminated string
*     containing a copy of the text that was read. This string must be
*     freed by the caller (using astFree) when no longer required.
*
*     A NULL pointer will be returned if there is no more input text
*     to read.

*  Notes:
*     - A NULL pointer value will be returned if this function is
*     invoked with the global error status set or if it should fail
*     for any reason.
*/

/* Local Variables: */
   char *result;                 /* Pointer value to return */
   const char *line;             /* Pointer to input line */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Invoke the source function to read the next input line and return a
   pointer to the resulting string. */
   line = ( *source )();

/* If a string was obtained, make a dynamic copy of it and save the
   resulting pointer. */
   if ( line ) result = astString( line, (int) strlen( line ) );

/* Return the result. */
   return result;
}

static int TestAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     TestAttrib

*  Purpose:
*     Test if a specified attribute value is set for a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int TestAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the astTestAttrib protected
*     method inherited from the Object class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     a value has been set for one of a YamlChan's attributes.

*  Parameters:
*     this
*        Pointer to the YamlChan.
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
   AstYamlChan *this;            /* Pointer to the YamlChan structure */
   int result;                   /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_object;

/* Check the attribute name and test the appropriate attribute. */
   if ( !strcmp( attrib, "verboseread" ) ) {
      result = astTestVerboseRead( this );

   } else if ( !strcmp( attrib, "preservename" ) ) {
      result = astTestPreserveName( this );

   } else if ( !strcmp( attrib, "yamlencoding" ) ) {
      result = astTestYamlEncoding( this );

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_testattrib)( this_object, attrib, status );
   }

/* Return the result, */
   return result;
}

static int Ustrcmp( const char *a, const char *b, int *status ){
/*
*  Name:
*     Ustrcmp

*  Purpose:
*     A case blind version of strcmp.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Ustrcmp( const char *a, const char *b, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     Returns 0 if there are no differences between the two strings, and 1
*     otherwise. Comparisons are case blind.

*  Parameters:
*     a
*        Pointer to first string.
*     b
*        Pointer to second string.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Zero if the strings match, otherwise one.

*  Notes:
*     -  This function does not consider the sign of the difference between
*     the two strings, whereas "strcmp" does.
*     -  This function attempts to execute even if an error has occurred.
*/

/* Local Variables: */
   const char *aa;         /* Pointer to next "a" character */
   const char *bb;         /* Pointer to next "b" character */
   int ret;                /* Returned value */

/* Initialise the returned value to indicate that the strings match. */
   ret = 0;

/* Initialise pointers to the start of each string. */
   aa = a;
   bb = b;

/* Loop round each character. */
   while( 1 ){

/* We leave the loop if either of the strings has been exhausted. */
      if( !(*aa ) || !(*bb) ){

/* If one of the strings has not been exhausted, indicate that the
   strings are different. */
         if( *aa || *bb ) ret = 1;

/* Break out of the loop. */
         break;

/* If neither string has been exhausted, convert the next characters to
   upper case and compare them, incrementing the pointers to the next
   characters at the same time. If they are different, break out of the
   loop. */
      } else {
         if( toupper( (int) *(aa++) ) != toupper( (int) *(bb++) ) ){
            ret = 1;
            break;
         }
      }
   }

/* Return the result. */
   return ret;
}

static int Ustrncmp( const char *a, const char *b, size_t n, int *status ){
/*
*  Name:
*     Ustrncmp

*  Purpose:
*     A case blind version of strncmp.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Ustrncmp( const char *a, const char *b, size_t n, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     Returns 0 if there are no differences between the first "n"
*     characters of the two strings, and 1 otherwise. Comparisons are
*     case blind.

*  Parameters:
*     a
*        Pointer to first string.
*     b
*        Pointer to second string.
*     n
*        The maximum number of characters to compare.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Zero if the strings match, otherwise one.

*  Notes:
*     -  This function does not consider the sign of the difference between
*     the two strings, whereas "strncmp" does.
*     -  This function attempts to execute even if an error has occurred.
*/

/* Local Variables: */
   const char *aa;         /* Pointer to next "a" character */
   const char *bb;         /* Pointer to next "b" character */
   int i;                  /* Character index */
   int ret;                /* Returned value */

/* Initialise the returned value to indicate that the strings match. */
   ret = 0;

/* Initialise pointers to the start of each string. */
   aa = a;
   bb = b;

/* Compare up to "n" characters. */
   for( i = 0; i < (int) n; i++ ){

/* We leave the loop if either of the strings has been exhausted. */
      if( !(*aa ) || !(*bb) ){

/* If one of the strings has not been exhausted, indicate that the
   strings are different. */
         if( *aa || *bb ) ret = 1;

/* Break out of the loop. */
         break;

/* If neither string has been exhausted, convert the next characters to
   upper case and compare them, incrementing the pointers to the next
   characters at the same time. If they are different, break out of the
   loop. */
      } else {
         if( toupper( (int) *(aa++) ) != toupper( (int) *(bb++) ) ){
            ret = 1;
            break;
         }
      }
   }

/* Return the result. */
   return ret;
}

static int Write( AstChannel *this_channel, AstObject *obj, int *status ) {
/*
*  Name:
*     Write

*  Purpose:
*     Write an Object to a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Write( AstChannel *this, AstObject *obj, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the astWrite method
*     inherited from the Channel class).

*  Description:
*     This function writes an Object to a YamlChan.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the Object which is to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The number of Objects written to the YamlChan by this invocation of
*     astWrite.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the AST error status set, or if it should fail for any
*     reason.
*/

/* Check libyaml is available. */
#if !defined( YAML )
   YAML_ERR("Write")
   return 0;
#else

/* Local Variables: */
   AstKeyMap *km;
   AstYamlChan *this;
   const char *key;
   int enc;
   int ret;
   yaml_emitter_t *emitter;
   yaml_event_t event;

/* Initialise. */
   ret = 0;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* Get the encoding to use. */
   enc = astGetYamlEncoding( this );

/* For AST NATIVE encoding... */
   if( enc == NATIVE_ENCODING ) {

/* Initialise a libyaml emitter (stored in the YamlChan structure so that
   the astWriteXxx functions can access it), and start a yaml document. */
      emitter = &(this->emitter_data);
      StartYamlDoc( this, emitter, status );

/* Start an anonymous yaml mapping to hold a single named item - the top
   level AST object */
      StartYamlMapping( this, NULL, NULL, &(this->emitter_data), status );

/* Indicate that the object has set values and so should always be
   written out (regardless of the value of the YamlChan's "Full" attribute
   value. */
      this->objectset = 1;

/* Write out the supplied object. */
      astDump( obj, this );
      ret = 1;

/* End the anonymous yaml mapping. */
      yaml_mapping_end_event_initialize( &event );
      EMIT

/* End the yaml document and delete the libyaml emitter. */
      EndYamlDoc( this, emitter, status );

/* For ASDF encoding... */
   } else if( enc == ASDF_ENCODING ) {

/* Check the supplied object is of a suitable AST class. Since Frames and
   FrameSets are subclasses of Mapping, we can just test that the supplied
   object is a Mapping. */
      if( astIsAMapping( obj ) ) {

/* Convert the AST object to a set of ASDF objects, each stored as a list
   of properties in a KeyMap. Check the AST class in order of decreasing
   specialism (for instance, if we tested for Mappings first we would end
   up writing out Frames and FrameSets as the equivalent Mapping). */
         if( astIsAFrameSet( obj ) ) {
            key = "wcs";
            km = WriteFrameSet( this, (AstFrameSet *) obj, status );

         } else if( astIsAFrame( obj ) ) {
            key = "frame";
            km = WriteFrame( this, (AstFrame *) obj, status );

         } else if( astIsAMapping( obj ) ) {
            key = "transform";
            km = WriteMapping( this, (AstMapping *) obj, NULL, NULL, status );
         }

/* If the object was written to the KeyMap successfully, write it out as
   YAML through the sink function and then free the KeyMap. */
         if( km ) {
            WriteValues( this, key, km, status );
            km = astAnnul( km );
            ret = 1;
         }

      }

/* Unknown encoding */
   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Unsupported encoding %d",
                status, enc );
   }

/* Ensure all output is flushed to any associated output file specified
   by the SinkFile attribute. */
   astWriteFlush( this );

/* If an error has occurred, return zero. */
   if( !astOK ) ret = 0;

/* Return the answer. */
   return ret;
#endif
}

/* Member functions that are only available if libyaml is available. */
/* ================================================================= */
#if defined( YAML )

static AstKeyMap *AddR2D( AstYamlChan *this, AstKeyMap **km, int r2d,
                          int before, int nax, int *status ){
/*
*  Name:
*     AddR2D

*  Purpose:
*     Add a radians:degrees conversion to an ASDF transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstKeyMap *AddR2D( AstYamlChan *this, AstKeyMap *km, int r2d,
*                        int before, int nax, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function returns a KeyMap that contains an ASDF "compose"
*     containing the ASDF transform supplied in KeyMap *km and a newly
*     created ASDF "scale" transform that converts between radians and
*     degrees.
*
*     The "scale" is given the name "AST__DD2R" or "AST__DR2D" and will
*     usually cancel out when the whole ASDF transform chain is simplified
*     before being written out as yaml.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Address of a pointer to a KeyMap holding the input transform.
*        The supplied KeyMap pointer will be anulled on exit.
*     r2d
*        If non-zero, the scale converts radians to degrees. If zero, it
*        converts degrees to radians.
*     before
*        If non-zero, the scale is placed before the supplied transform
*        in the returned compose. Otherwise, it is placed after the
*        supplied transform.
*     nax
*        The number of inputs (if "before" is non-zero) or outputs (if
*        "before" is zero) of the ASDF transform in the supplied KeyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a new KeyMap holding the required ASDF compose, or NULL
*     if an error occurs.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstZoomMap *zm;

/* Initialise */
   ret = NULL;

/* Check inherited status. */
   if( !astOK ) return ret;

/* Create the ZoomMap. Set the appropriate AST attribute in the ZoomMap
   so that the resulting ASDF "scale" gets the name "AST__DR2D". */
   if( r2d ) {
      if( astGetPreserveName( this ) ) {
         zm = astZoomMap( nax, AST__DR2D, "Ident=AST__DR2D", status );
      } else {
         zm = astZoomMap( nax, AST__DR2D, "ID=AST__DR2D", status );
      }
   } else {
      if( astGetPreserveName( this ) ) {
         zm = astZoomMap( nax, AST__DD2R, "Ident=AST__DD2R", status );
      } else {
         zm = astZoomMap( nax, AST__DD2R, "ID=AST__DD2R", status );
      }
   }

/* Create the compose. */
   if( before ) {
      ret = WriteAsdfCompose( this, (AstObject *) zm, (AstObject *) *km,
                              NULL, NULL, status );
   } else {
      ret = WriteAsdfCompose( this, (AstObject *) *km, (AstObject *) zm,
                              NULL, NULL, status );
   }

/* Free the ZoomMap pointer */
   zm = astAnnul( zm );

/* Annul the supplied KeyMap. */
   *km = astAnnul( *km );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static void Deuler( const char *order, double *angles, double rmat[3][3],
                    int *status ) {
/*
*  Name:
*     Deuler

*  Purpose:
*     Form a rotation matrix from the Euler angles

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void Deuler( const char *order, double *angles, double rmat[3][3],
*                  int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function is like palDeuler, except it accepts any number of
*     rotations (palDeuler accepts only 3).
*
*     A rotation is positive when the reference frame rotates
*     anticlockwise as seen looking towards the origin from the
*     positive region of the specified axis.
*
*     The characters of ORDER define which axes the three successive
*     rotations are about.  A typical value is 'ZXZ', indicating that
*     RMAT is to become the direction cosine matrix corresponding to
*     rotations of the reference frame through PHI radians about the
*     old Z-axis, followed by THETA radians about the resulting X-axis,
*     then PSI radians about the resulting Z-axis.
*
*     The axis names can be any of the following, in any order or
*     combination:  X, Y, Z, uppercase or lowercase, 1, 2, 3.  Normal
*     axis labelling/numbering conventions apply;  the xyz (=123)
*     triad is right-handed.  Thus, the 'ZXZ' example given above
*     could be written 'zxz' or '313' (or even 'ZxZ' or '3xZ').  ORDER
*     is terminated by length or by the first unrecognized character.

*  Parameters:
*     order
*        A string in which each character specifies axis about which the
*        corresponding rotation occurs
*     angles
*        Pointer to an array of angles in radians. The length of this
*        array must be at least equal to the number of characters in "order".
*     rmat
*        Rotation matrix
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   int i;

/* Check the global error status. */
   if ( !astOK ) return;

/* Initialise rmat */
   eraIr( rmat );

/* Loop round all angles */
   i = 0;
   while( order[ i ] != '\0') {
      switch (order[i]) {
         case 'X':
         case 'x':
         case '1':
           eraRx( angles[i], rmat );
           break;

         case 'Y':
         case 'y':
         case '2':
           eraRy( angles[i], rmat );
           break;

         case 'Z':
         case 'z':
         case '3':
           eraRz( angles[i], rmat );
           break;

/* break out the loop if we do not recognize something */
         default:
           break;
      }

/* Go to the next position */
      i++;
   }
}

static void EndYamlDoc( AstYamlChan *this, yaml_emitter_t *emitter,
                        int *status ) {
/*
*  Name:
*     EndYamlDoc

*  Purpose:
*     End a document and delete a yaml emitter.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void EndYamlDoc( AstYamlChan *this, yaml_emitter_t *emitter,
*                      int *status )

*  Description:
*     This function

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     emitter
*        Pointer to the libyaml emitter to be destroyed.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   yaml_event_t event;

/* Create and emit the DOCUMENT-END event. */
   if( astOK ) {
      yaml_document_end_event_initialize( &event, 0 );
      EMIT
   }

/* Create and emit the STREAM-END event. */
   if( astOK ) {
      yaml_stream_end_event_initialize( &event );
      EMIT
   }

/* Delete the emitter. */
   yaml_emitter_delete( emitter );

/* Nullify the emitter pointer in the YamlChan structure. */
   this->emitter = NULL;
}

static void ExpandAsdf( AstYamlChan *this, AstKeyMap *km,
                        int ignore_inverse, int *nkm,
                        AstKeyMap ***km_list, int *status ){
/*
*  Name:
*     ExpandAsdf

*  Purpose:
*     Expand an ASDF transform into a set of transforms to be
*     applied in series.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ExpandAsdf( AstYamlChan *this, AstKeyMap *km,
*                      int ignore_inverse, int *nkm,
*                      AstKeyMap ***km_list, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function expands the supplied ASDF transform into a
*     list of transforms to be applied in series and appends these
*     transforms to a supplied list of transforms. If the transform
*     is a compose the returned list will be extended by two or more
*     transforms. Otherwise, it will be extended by one (the supplied
*     transform itself).

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to a KeyMap containing a description of an ASDF compose.
*     ignore_inverse
*        If non-zero, expand the supplied compose even if it has a
*        custom inverse (the custom inverse will be ignored). Otherwise,
*        if the supplied compose has a custom inverse it will be added
*        as a single item to the returned list (i.e. it will not be
*        expanded). This is done to preserve the association between the
*        compose and its inverse.
*     nkm
*        The address of an int which holds a count of the number of
*        individual transforms in the decomposition. On entry, this
*        should count the number of transforms already in the
*        "*km_list" array (below). On exit, it is updated to include
*        any new transforms appended by this function.
*     km_list
*        Address of a pointer to an array of KeyMap pointers, each
*        containing a description of an ASDF transform. On entry,
*        this array pointer should either be NULL (if no transforms
*        have yet been obtained) or should point at a dynamically
*        allocated array containing KeyMap pointers ("*nkm" in
*        number) which have been obtained from a previous invocation
*        of this function.
*
*        On exit, the dynamic array will be enlarged to contain any
*        new KeyMap pointers that result from the decomposition
*        requested. These pointers will be appended to any previously
*        present, and the array pointer will be updated as necessary
*        to refer to the enlarged array (any space released by the
*        original array will be freed automatically).
*
*        The new KeyMap pointers returned will identify a sequence of
*        transforms which, when applied in order, will perform a forward
*        transformation equivalent to that of the original transform
*
*        All the KeyMap pointers returned by this function should be
*        annulled by the caller, using astAnnul, when no longer
*        required. The dynamic array holding these pointers should
*        also be freed, using astFree.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstKeyMap *tr[ 2 ];
   const char *tag;
   int expanded;
   int nel;

/* Check the global error status. */
   if ( !astOK ) return;

/* Indicate we have not yet expanded the supplied transform. */
   expanded = 0;

/* Get the asdf class of the supplied transform. */
   if( !astMapGet0C( km, "YAMLTAG", &tag ) && astOK ) {
      if( astOK ) {
         astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF object has "
                   "no tag in ExpandAsdf (internal AST programming error).",
                   status );
      }

/* First handle ASDF composes. */
   } else if( strstr( tag, "/compose" ) ){

/* If the compose has a custom inverse, we only expand it if the
   "ignore_inverse" flag was supplied. Otherwise it will be treated
   like a single atomic transform that cannot be decomposed. */
      if( ignore_inverse || !astMapHasKey( km, "inverse" ) ){

/* Get pointers to the KeyMaps holding the two component transforms
   inside the compose. */
         if( !astMapGet1A( km, "forward", 2, &nel, tr ) ) {
            if( astOK ) {
               astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF compose "
                         "has no 'forward' component in ExpandAsdf (internal AST "
                         "programming error).", status );
            }
         } else if( nel != 2 ) {
            if( astOK ) {
               astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF compose "
                         "has unxepcted number (%d) of forward transforms in "
                         "ExpandAsdf (internal AST programming error).", status, nel );
            }
         }

/* Expand the first transform, appending the resulting atomic transforms
   to the end of the supplied list. */
         ExpandAsdf( this, tr[ 0 ], 0, nkm,  km_list, status );

/* Expand the second transform, appending the resulting atomic transforms
   to the end of the supplied list. */
         ExpandAsdf( this, tr[ 1 ], 0, nkm,  km_list, status );

/* Free resources */
         tr[ 0 ] = astAnnul( tr[ 0 ] );
         tr[ 1 ] = astAnnul( tr[ 1 ] );

/* Indicate we have now expanded the supplied transform. */
         expanded = 1;
      }
   }

/* If the supplied transform could not be exapnded, append it to the
   end of the supplied list as a single transform. */
   if( !expanded ) {
      *km_list = astGrow( *km_list, *nkm + 1, sizeof( AstKeyMap * ) );
      if( astOK ) {
         ( *km_list )[ *nkm ] = astClone( km );
         if( astOK ) ( *nkm )++;
      }
   }
}

static int FindAffine( int series, int *nmap, AstMapping **map_list,
                       int *invert_list, int *status ){
/*
*  Name:
*     FindAffine

*  Purpose:
*     Search a list of CmpMaps for a sequence corresponding to an ASDF
*     affine.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int FindAffine( int series, int *nmap, AstMapping **map_list,
*                     int *invert_list, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function searches the supplied list of Mappings for sequences
*     that correspond to an ASDF affine. If no matching sequence is found,
*     0 will be returned and the list will be left unchanged. If one or more
*     matching sequences are found, 1 will be returned  and the list will be
*     changed so that each whole affine sequence is contained in a single
*     element of the list. Each such element will be a CmpMap and its proxy
*     pointer will point to a KeyMap containing the properties of the
*     equivalent ASDF affine (the KeyMap will have two entries named
*     "AFFINE_SHIFT" and "AFFINE_MATRIX", each being a 1D vector of doubles).
*
*     A matching sequence must look like [MatrixMap,ShiftMap]. Any
*     such sequence is removed from the list and replaced by a single CmpMap
*     holding the same Mappings (i.e. the 2 supplied Mapping pointers are
*     replaced by 1 new Mapping pointer). In addition, the new CmpMap has a
*     proxy pointer to a KeyMap holding the shift and matrix that are
*     equivalent to the two Mappings in the sequence.

*  Parameters:
*     series
*        If this value is non-zero, the supplied list of Mapping pointers
*        should be applied in series. Otherwise, they should be applied in
*        parallel.
*     nmap
*        Address of an int which counts the number of Mappings in the
*        list. On entry this should be set to the initial number
*        of Mappings. On exit it will be updated to record the number
*        of Mappings remaining after merging of any sequences matching a
*        rotate3d.
*     map_list
*        Address of an array of Mapping pointers (produced, for example,
*        by the astMapList method) which identifies the list of Mappings.
*        On entry, the initial sequence of Mappings to be searched should
*        be supplied. On exit the contents of the list will be changed if
*        any sequences matching a rotate3d were found - the set of
*        pointers corresponding to the matching sequence will be
*        replaced by a single pointer for a CmpMap that combines the
*        matching pointers together. This CmpMap will have its proxy
*        pointer (see AstObject class) set to a pointer to a KeyMap
*        holding the properties of the corresponding ASDF rotate3d.
*        Later Mappings in the list will be shuffled down to fill the
*        gaps (NULL pointers will be introduced at the end of the list).
*     invert_list
*        Address of an array which, on entry, should contain values to be
*        assigned to the Invert attributes of the Mappings identified in
*        the "*map_list" array before they are applied (this array might
*        have been produced, for example, by the astMapList method).
*        These values will be used by this function instead of the
*        actual Invert attributes of the Mappings supplied, which are
*        ignored.
*
*        On exit, the contents of this array will be updated to
*        correspond with the possibly modified contents of the
*        "map_list" array.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if a sequence of Mappings matching
*     a rotate3d is found in the supplied Mapping list. Otherwis,e zero
*     is returned.

*/

/* Local Variables: */
   AstCmpMap *new;
   AstKeyMap *km;
   double *shifts;
   double *matrix;
   int form;
   int imap;
   int jmap;
   int nmaps;
   int oldinv0;
   int oldinv1;
   int result;

/* Initialise */
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Loop through the Mappings in the list. We do not check the final
   Mapping since it cannot be the first Mapping in a sequence of two. */
   for( imap = 0; imap < *nmap - 1; imap++ ) {

/* Check if the next two Mappings are a MatrixMap followed by a ShiftMap. */
      if( astIsAMatrixMap( map_list[ imap ] ) &&
          astIsAShiftMap( map_list[ imap + 1 ] ) ) {

/* An ASDF affine is restricted to be exactly 2-dimensional. */
         if( astGetNin( map_list[ imap ] ) == 2 &&
             astGetNin( map_list[ imap + 1 ] ) == 2 &&
             astGetNout( map_list[ imap + 1 ] ) == 2 ){

/* Create a KeyMap to store the properties of the affine. */
            km = astKeyMap( " ", status );

/* Save the currrent values of the Invert flags for the two Mappings. */
            oldinv0 = astGetInvert( map_list[ imap + 0 ] );
            oldinv1 = astGetInvert( map_list[ imap + 1 ] );

/* Temporarily set the Invert flag for both Mappings to the value it had
   when the supplied CmpMap was created. */
            astSetInvert( map_list[ imap + 0 ], invert_list[ imap + 0 ] );
            astSetInvert( map_list[ imap + 1 ], invert_list[ imap + 1 ] );

/* Get a pointer to a new array holding the shifts, put them into the
   KeyMap and free the array. */
            shifts = astGetShifts( map_list[ imap + 1 ] );
            astMapPut1D( km, "AFFINE_SHIFT", 2, shifts, NULL );
            shifts = astFree( shifts );

/* Get a pointer to a new array holding the matrix, put it into the
   KeyMap and free the array. */
            matrix = astMtrGet( map_list[ imap ], 1, 1, &form );
            astMapPut1D( km, "AFFINE_MATRIX", 4, matrix, NULL );
            matrix = astFree( matrix );

/* Create CmpMap holding the two Mappings. */
            new = astCmpMap( map_list[ imap ], map_list[ imap + 1 ], 1, " ",
                             status );

/* Restore the original Invert flags. */
            astSetInvert( map_list[ imap + 0 ], oldinv0 );
            astSetInvert( map_list[ imap + 1 ], oldinv1 );

/* Annull the Mapping pointers. */
            map_list[ imap ] = astAnnul( map_list[ imap ] );
            map_list[ imap + 1 ] = astAnnul( map_list[ imap + 1 ] );

/* Store the KeyMap as the proxy pointer in the new CmpMap. Note the
   KeyMap pointer is not cloned, so we must not annull it in this function. */
            astSetProxy( new, km );

/* Store the new CmpMap pointer in place of the first Note, we do not use
   astClone here, we must not then annull "new" in this */
            map_list[ imap ] = (AstMapping *) new;

/* Skip over the following nullified pointer. */
            imap++;

/* Indicate we have found a matching sequence. */
            result = 1;

         }
      }
   }

/* Shuffle the pointers down to fill the gaps left by the nullified
   pointers. */
   if( result ) {
      jmap = 0;
      for( imap = 0; imap < *nmap; imap++ ) {
         if( map_list[ imap ] ) {
            map_list[ jmap ] = map_list[ imap ];
            invert_list[ jmap++ ] = invert_list[ imap ];
         }
      }

/* Nullify any remaining slots. */
      nmaps = jmap;
      for( ; jmap < *nmap; jmap++ ) {
         map_list[ jmap ] = NULL;
         invert_list[ jmap ] = 0;
      }

/* Return the remaining number of non-NULL Mappings. */
      *nmap = nmaps;
   }

/* Return the Mapping */
   return result;
}

static int FindRotate3d( int series, int *nmap, AstMapping **map_list,
                         int *invert_list, int *status ){
/*
*  Name:
*     FindRotate3d

*  Purpose:
*     Search a list of CmpMaps for a sequence corresponding to an ASDF
*     rotate3d.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int FindRotate3d( int series, int *nmap, AstMapping **map_list,
*                       int *invert_list, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function searches the supplied list of Mappings for sequences
*     that correspond to an ASDF rotate3d. If no matching sequence is found,
*     0 will be returned and the list will be left unchanged. If one or more
*     matching sequences are found, 1 will be returned  and the list will be
*     changed so that each whole rotate3d sequence is contained in a single
*     element of the list. Each such element will be a CmpMap and its proxy
*     pointer will point to a KeyMap containing the properties of the
*     equivalent ASDF rotate3d (the KeyMap will have a single entry named
*     "ANGLES" containig the three Euler angles).
*
*     A matching sequence must look like [SphMap,3x3 MatrixMap,SphMap]. Any
*     such sequence that represents a spherical rotation is removed from
*     the list and replaced by a single CmpMap holding the same Mappings
*     (i.e. the 3 supplied Mapping pointers are replaced by 1 new Mapping
*     pointer). In addition, the new CmpMap has a proxy pointer to a
*     KeyMap holding the three Euler angles, in degree, that are equivalent
*     to the spherical rotation implemented by the sequence of 3 supplied
*     Mappings. These rotations should be applied around the X, Z and X
*     axis in that order, as described in the prologue of MatrixMap method
*     astMtrEuler.

*  Parameters:
*     series
*        If this value is non-zero, the supplied list of Mapping pointers
*        should be applied in series. Otherwise, they should be applied in
*        parallel.
*     nmap
*        Address of an int which counts the number of Mappings in the
*        list. On entry this should be set to the initial number
*        of Mappings. On exit it will be updated to record the number
*        of Mappings remaining after merging of any sequences matching a
*        rotate3d.
*     map_list
*        Address of an array of Mapping pointers (produced, for example,
*        by the astMapList method) which identifies the list of Mappings.
*        On entry, the initial sequence of Mappings to be searched should
*        be supplied. On exit the contents of the list will be changed if
*        any sequences matching a rotate3d were found - the set of
*        pointers corresponding to the matching sequence will be
*        replaced by a single pointer for a CmpMap that combines the
*        matching pointers together. This CmpMap will have its proxy
*        pointer (see AstObject class) set to a pointer to a KeyMap
*        holding the properties of the corresponding ASDF rotate3d.
*        Later Mappings in the list will be shuffled down to fill the
*        gaps (NULL pointers will be introduced at the end of the list).
*     invert_list
*        Address of an array which, on entry, should contain values to be
*        assigned to the Invert attributes of the Mappings identified in
*        the "*map_list" array before they are applied (this array might
*        have been produced, for example, by the astMapList method).
*        These values will be used by this function instead of the
*        actual Invert attributes of the Mappings supplied, which are
*        ignored.
*
*        On exit, the contents of this array will be updated to
*        correspond with the possibly modified contents of the
*        "map_list" array.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if a sequence of Mappings matching
*     a rotate3d is found in the supplied Mapping list. Otherwis,e zero
*     is returned.

*/

/* Local Variables: */
   AstCmpMap *new;
   AstKeyMap *km;
   AstMapping *tmp;
   double angles[ 3 ];
   int imap;
   int jmap;
   int nmaps;
   int oldinv0;
   int oldinv1;
   int oldinv2;
   int result;

/* Initialise */
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Loop through the Mappings in the list. We do not check the final two
   Mappings since they cannot be the first Mapping in a sequence of
   three. */
   for( imap = 0; imap < *nmap - 2; imap++ ) {

/* Check if the next three Mappings are a SphMap, a MatrixMap and another
   SphMap. */
      if( astIsASphMap( map_list[ imap ] ) &&
          astIsAMatrixMap( map_list[ imap + 1 ] ) &&
          astIsASphMap( map_list[ imap + 2 ] ) ) {

/* Check that the SphMap Invert flags are suitable for the three Mappings
   to form a spherical rotation. */
         if( invert_list[ imap  ] && !invert_list[ imap  + 2 ] ){

/* Save the currrent values of the Invert flags for the three Mappings. */
            oldinv0 = astGetInvert( map_list[ imap + 0 ] );
            oldinv1 = astGetInvert( map_list[ imap + 1 ] );
            oldinv2 = astGetInvert( map_list[ imap + 2 ] );

/* Temporarily set the Invert flag for the MatrixMap to the value it had
   when the supplied CmpMap was created. */
            astSetInvert( map_list[ imap + 1 ], invert_list[ imap + 1 ] );

/* See if the MatrixMap can be represented by three Euler angles (axis
   order "XZX"). */
            if( astMtrEuler( map_list[ imap + 1 ], 1, angles ) ) {

/* If so, convert them to degrees and store in a KeyMap. */
               angles[ 0 ] *= AST__DR2D;
               angles[ 1 ] *= AST__DR2D;
               angles[ 2 ] *= AST__DR2D;
               km = astKeyMap( " ", status );
               astMapPut1D( km, "ANGLES", 3, angles, NULL );

/* Create CmpMap holding the three Mappings. */
               astSetInvert( map_list[ imap ], 1 );
               tmp = (AstMapping *) astCmpMap( map_list[ imap ],
                                               map_list[ imap + 1 ], 1, " ",
                                               status );
               astSetInvert( map_list[ imap + 2 ], 0 );
               new = astCmpMap( tmp, map_list[ imap + 2 ], 1, " ", status );

/* Restore the original Invert flags. */
               astSetInvert( map_list[ imap + 0 ], oldinv0 );
               astSetInvert( map_list[ imap + 1 ], oldinv1 );
               astSetInvert( map_list[ imap + 2 ], oldinv2 );

/* Annull the Mapping pointers. */
               tmp = astAnnul( tmp );
               map_list[ imap ] = astAnnul( map_list[ imap ] );
               map_list[ imap + 1 ] = astAnnul( map_list[ imap + 1 ] );
               map_list[ imap + 2 ] = astAnnul( map_list[ imap + 2 ] );

/* Store the KeyMap as the proxy pointer in the new CmpMap. Note the
   KeyMap pointer is not clone, so we must not annull it in this function. */
               astSetProxy( new, km );

/* Store the new CmpMap pointer in place of the first Note, we do not use
   astClone here, we must not then annull "new" in this */
               map_list[ imap ] = (AstMapping *) new;

/* Skip over the following two nullified pointers. */
               imap += 2;

/* Indicate we have found a matching sequence. */
               result = 1;

/* Restore the original MatrixMap Invert flag. */
            } else {
               astSetInvert( map_list[ imap + 1 ], oldinv1 );
            }
         }
      }
   }

/* Shuffle the pointers down to fill the gaps left by the nullified
   pointers. */
   if( result ) {
      jmap = 0;
      for( imap = 0; imap < *nmap; imap++ ) {
         if( map_list[ imap ] ) {
            map_list[ jmap ] = map_list[ imap ];
            invert_list[ jmap++ ] = invert_list[ imap ];
         }
      }

/* Nullify any remaining slots. */
      nmaps = jmap;
      for( ; jmap < *nmap; jmap++ ) {
         map_list[ jmap ] = NULL;
         invert_list[ jmap ] = 0;
      }

/* Return the remaining number of non-NULL Mappings. */
      *nmap = nmaps;
   }

/* Return the Mapping */
   return result;
}

static const char *FmtDouble( double dval, size_t buflen, char *buf ) {
/*
*  Name:
*     FmtDouble

*  Purpose:
*     Format a double value into a string.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*      const char *FmtDouble( double dval, size_t buflen, char *buf )

*  Description:
*     This function converts a double value into a string.

*  Parameters:
*     dval
*        The double value
*     buflen
*        The length of the "buf" array.
*     buf
*        Pointer to an array in which to return the formated string.

*  Returned Value:
*     A pointer to "buf".
*/
#define MINDIG 4
#define EXTRA 8

/* Local Variables: */
   int nc;
   int n1;
   int n2;

/* If the supplied value was AST__BAD, store the value of macro
   AST__BAD_STRING ("<bad>") in the returned string (truncated if
   the string is too short to hold it). Also do this if the buffer
   is too short to hold a full formatted value. */
   if( dval == AST__BAD || buflen < EXTRA + MINDIG ) {
      nc = strlen( AST__BAD_STRING );
      if( nc > buflen - 1 ) nc = buflen - 1;
      strncpy( buf, AST__BAD_STRING, nc );
      buf[ nc ] = 0;

   } else {

/* Work out the maximum number of sig figs we can fit into the supplied
   buffer. No point in using more than AST__DBL_DIG. */
      nc = buflen - EXTRA;
      if( nc > AST__DBL_DIG ) nc = AST__DBL_DIG;

/* If reducing the number of sig figs by two produces a saving of 10 or
   more characters, assume the least significant two characters are
   rounding error. Also check for "-0" and change to "0". */
      n1 = sprintf( buf, "%.*g", nc - 2, dval );
      if( !strcmp( buf, "-0" ) ) {
         buf[ 0 ] = '0';
         buf[ 1 ] = '\0';
      } else {
         n2 = sprintf( buf, "%.*g", nc, dval );
         if( n2 - n1 > 9 ) {
            sprintf( buf, "%.*g", nc - 2, dval );
         }
      }
   }

/* Ensure there is a decimal point in the string. */
   if( !strchr( buf, '.' ) ) {
      n1 = strlen( buf );
      strcpy( buf + n1, ".0" );
   }

   return buf;
}

static AstKeyMap *Get0A( AstKeyMap *km, const char *name, int usedef,
                         AstKeyMap *def, const char *class, int *status ){
/*
*  Name:
*     Get0A

*  Purpose:
*     Get a scalar AST Object from a named KeyMap entry, supplying a default.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstKeyMap *Get0A( AstKeyMap *km, const char *name, int usedef,
*                       AstKeyMap *def, const char *class, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a scalar AST Object from a named entry in a KeyMap.
*     If the name is not present in the KeyMap, a default value is returned or
*     an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default pointer is still returned though).
*     def
*        The default Object pointer to use if the specified name is not
*        present in the KeyMap, or an error occurrs.
*     class
*        Pointer to a null-terminated string holding the expected ASDF
*        class name for the object read from the KeyMap. An error is
*        reported if the object is not of this class (or a subclass).
*        A NULL pointer may be supplied if the class check is not required.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstObject *obj;
   AstKeyMap *result;
   const char *ina;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the value. If it is not there, report a message or return the
   default value. */
   if( !astMapGet0A( km, name, &obj ) ) {
      if( usedef ) {
         result = def;
      } else if( astOK ){
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* If found, check it has the right ASDFclass. */
   } else {
      result = (AstKeyMap *) obj;
      if( class && !IsA( result, class, status ) && astOK ) {
         ina = GetAsdfClass( km, status );
         if( astChrLen( ina ) > 0 ) {
            astError( AST__BYAML, "astRead(YamlChan): Property '%s' in "
                      "a '%s' has class '%s' which is not of the required "
                      "class '%s'.", status, name, ina,
                       GetAsdfClass( result, status ), class );
         } else {
            astError( AST__BYAML, "astRead(YamlChan): Property '%s' has "
                      "class '%s' which is not of the required class "
                      "'%s'.", status, name, GetAsdfClass( result, status ),
                      class );
         }
      }
   }

/* Return the Mapping */
   return result;
}

static const char *Get0C( AstKeyMap *km, const char *name, int usedef,
                          const char *def, int *status ){
/*
*  Name:
*     Get0C

*  Purpose:
*     Get a scalar string from a named KeyMap entry, supplying a default.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *Get0C( AstKeyMap *km, const char *name, int usedef,
*                        const char *def, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a scalar string from a named KeyMap entry. If
*     the name is not present in the KeyMap, a default value is returned or
*     an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default value is still returned though).
*     def
*        The default value to use if the specified name is not present
*        in the KeyMap, or an error occurrs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the required string. This pointer is guaranteed to
*     remain valid and the string to which it points will not be
*     over-written for a total of 50 successive invocations of the
*     astMapGet0C function. After this, the memory containing the string
*     may be re-used, so a copy of the string should be made if it is
*     needed for longer than this. The calling code should never attempt
*     to free the returned pointer (for instance, using astFree).

*/

/* Local Variables: */
   const char *result;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the value. If it is not there, report a message or return the
   default value. */
   if( !astMapGet0C( km, name, &result ) ) {
      if( usedef ) {
         result = def;
      } else {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }
   }

/* Return the string. */
   return result;
}

static double Get0D( AstKeyMap *km, const char *name, int usedef, double def,
                     int *status ){
/*
*  Name:
*     Get0D

*  Purpose:
*     Get a scalar double from a named KeyMap entry, supplying a default.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double Get0D( AstKeyMap *km, const char *name, int usedef, double def,
*                   int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a scalar double from a named KeyMap entry. If
*     the name is not present in the KeyMap, a default value is returned or
*     an error is reported. The entry may hold a scalar value that can be
*     converted to double, or a Quantity (in which case the quantity units
*     are ignored and the value of the quantity is returned).

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default value is still returned though).
*     def
*        The default value to use if the specified name is not present
*        in the KeyMap, or an error occurrs.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   double result;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* If the named entry is an AST Object, assume the entry holds a
   Quantity. So use GetQuantity to get its value, ignoring the units in
   the quantity. */
   if( astMapType( km, name ) == AST__OBJECTTYPE ) {
      result = GetQuantity( km, name, NULL, usedef, def, status );

/* Otherwise, attemp to get a double value form the named entry. If it
   is not there, report a message or return the default value. */
   } else if( !astMapGet0D( km, name, &result ) ) {
      if( usedef ) {
         result = def;
      } else {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }
   }

/* Return the Mapping */
   return result;
}

static int Get0I( AstKeyMap *km, const char *name, int usedef, int def,
                  int *status ){
/*
*  Name:
*     Get0I

*  Purpose:
*     Get a scalar integer from a named KeyMap entry, supplying a default.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Get0I( AstKeyMap *km, const char *name, int usedef, int def,
*                int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a scalar integer from a named KeyMap entry. If
*     the name is not present in the KeyMap, a default value is returned or
*     an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default value is still returned though).
*     def
*        The default value to use if the specified name is not present
*        in the KeyMap, or an error occurrs.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   int result;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the value. If it is not there, report a message or return the
   default value. */
   if( !astMapGet0I( km, name, &result ) ) {
      if( usedef ) {
         result = def;
      } else if( astOK ){
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }
   }

/* Return the Mapping */
   return result;
}

static int Get1A( AstKeyMap *km, const char *name, int usedef, int mxval,
                  AstKeyMap **vals, int *nval, int *status ){
/*
*  Name:
*     Get1A

*  Purpose:
*     Get a vector of KeyMaps from a named KeyMap entry.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Get1A( AstKeyMap *km, const char *name, int usedef, int mxval,
*                AstKeyMap **vals, int *nval, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of KeyMap pointers from a named KeyMap
*     entry. If the name is not present in the KeyMap, or the named element has
*     an incorrect length, an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied values unchanged without error if the name
*        is not present in the KeyMap? Otherwise an error is reported
*        (the supplied values are still returned unchanged though).
*     mxval
*        The maximimum allowed length of the vector. If this is negative,
*        an error is reported if the number of values obtained (*nval) is
*        not exactly equal to abs(mxval).
*     vals
*        An array in which to return the vector of KeyMap pointers. It
*        should have length "mxval". All these KeyMap pointers should be
*        annulled using astAnnul when no longer needed.
*     *nval
*        Pointer to an int returned holding the number of values stored
*        in "vals".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the named entry was found in the KeyMap. Zero otherwise.

*/

/* Local Variables: */
   int report;
   int result;

/* Initialise returned values. */
   *nval = 0;
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* See if we should report an error if the number of values obtained
   from the KeyMap is not as expected. */
   if( mxval < 0 ) {
      report = 1;
      mxval= -mxval;
   } else {
      report = 0;
   }

/* Get the values. */
   if( !astMapGet1A( km, name, mxval, nval, (AstObject **) vals ) ) {

/* If the named entry does not exist in the KeyMap, return the supplied
   values without error unless "usedef" is zero, indicating an error should
   be reported. */
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* If the entry exists but has an unexpected number of values, report an error
   if required. */
   } else if( report && ( *nval != mxval ) && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Property '%s' in a '%s' "
                "has wrong length (is %d, should be %d).", status, name,
                GetAsdfClass( km, status ), mxval, *nval );

/* Indicate the property was obtained successfully. */
   } else {
      result = 1;
   }

   return result;
}

static char *Get1C( AstKeyMap *km, const char *name, int usedef, int mxval,
                    const char **vals, int *nval, int *status ){
/*
*  Name:
*     Get1C

*  Purpose:
*     Get a vector of character strings from a named KeyMap entry.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     char *Get1C( AstKeyMap *km, const char *name, int usedef, int mxval,
*                  const char **vals, int *nval, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of strings from a named KeyMap entry.
*     If the name is not present in the KeyMap, or the named element has an
*     incorrect length, an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return a NULL pointer without error if the name is not present in
*        the KeyMap? Otherwise an error is reported (a NULL pointer is still
*        returned though).
*     mxval
*        The maximimum allowed length of the vector. If this is negative,
*        an error is reported if the number of values obtained (*nval) is
*        not exactly equal to abs(mxval).
*     vals
*        An array in which to return the vector of values. It should have
*        length "mxval". Each value is a pointer to a null terminated string,
*        and points into the buffer returned as the function value.
*     *nval
*        Pointer to an int returned holding the number of values stored
*        in "vals".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a buffer holding the character data. This should be
*     freed when no longer needed using astFree. The pointers returned in
*     the "vals" array point into this buffer.

*/


/* Local Variables: */
   int i;
   int report;
   char *result;
   size_t ncmax;

/* Initialise returned values. */
   *nval = 0;
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* See if we should report an error if the number of values obtained
   from the KeyMap is not as expected. */
   if( mxval < 0 ) {
      report = 1;
      mxval= -mxval;
   } else {
      report = 0;
   }

/* Get the maximum length of a string in the entry (excluding null
   terminators). */
   ncmax = astMapLenC( km, name );

/* If the named entry does not exist in the KeyMap, return the supplied
   values without error unless "usedef" is zero, indicating an error should
   be reported. */
   if( ncmax == 0 ){
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* Otherwise, allocate a zero-filled buffer of the required size, including
   null terminators. */
   } else {
      ncmax++;
      result = astCalloc( mxval*ncmax, 1 );
      if( astOK ) {

/* Copy the values into the buiffer. */
         astMapGet1C( km, name, ncmax, mxval, nval, result );

/* Report an error (if required) if the number of values is incorrect. */
         if( report && ( *nval != mxval ) && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Property '%s' in a '%s' "
                      "has wrong length (is %d, should be %d).", status, name,
                      GetAsdfClass( km, status ), mxval, *nval );

/* Otherwise, store a pointer to the start of each string in the vals
   array. */
         } else {
            for( i = 0; i < *nval; i++ ) {
               vals[ i ] = result + i*ncmax;
            }
         }
      }
   }

   return result;
}

static int Get1D( AstKeyMap *km, const char *name, int usedef, int mxval,
                  double *vals, int *nval, int *status ){
/*
*  Name:
*     Get1D

*  Purpose:
*     Get a vector of doubles from a named KeyMap entry.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Get1D( AstKeyMap *km, const char *name, int usedef, int mxval,
*                double *vals, int *nval, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of doubles from a named KeyMap entry.
*     If the name is not present in the KeyMap, or the named element has
*     incorrect length, an error may be reported, depending on "usedef".

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied values unchanged without error if the name
*        is not present in the KeyMap? Otherwise an error is reported
*        (the supplied values are still returned unchanged though).
*     mxval
*        The maximimum allowed length of the vector. If this is negative,
*        an error is reported if the number of values obtained (*nval) is
*        not exactly equal to abs(mxval).
*     vals
*        An array in which to return the vector of values. It should have
*        length "mxval".
*     *nval
*        Pointer to an int returned holding the number of values stored
*        in "vals".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the named entry was found in the KeyMap. Zero otherwise.

*/

/* Local Variables: */
   int report;
   int result;

/* Initialise returned values. */
   *nval = 0;
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* See if we should report an error if the number of values obtaiubed
   from the KeyMap is not as expected. */
   if( mxval < 0 ) {
      report = 1;
      mxval= -mxval;
   } else {
      report = 0;
   }

/* Get the values. */
   if( !astMapGet1D( km, name, mxval, nval, vals ) ) {

/* If the named entry does not exist in the KeyMap, return the supplied
   values without error unless "usedef" is zero, indicating an error should
   be reported. */
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* If the entry exists but has an unexpected number of values, report an error
   if required. */
   } else if( report && ( *nval != mxval ) && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Property '%s' in a '%s' "
                "has wrong length (is %d, should be %d).", status, name,
                GetAsdfClass( km, status ), mxval, *nval );

/* Indicate the property was obtained successfully. */
   } else {
      result = 1;
   }

   return result;
}

static int Get1I( AstKeyMap *km, const char *name, int usedef, int mxval,
                  int *vals, int *nval, int *status ){
/*
*  Name:
*     Get1I

*  Purpose:
*     Get a vector of integers from a named KeyMap entry.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Get1I( AstKeyMap *km, const char *name, int usedef, int mxval,
*                int *vals, int *nval, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of integer from a named KeyMap entry.
*     If the name is not present in the KeyMap, or the named element has
*     incorrect length, an error may be reported, depending on "usedef".

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return the supplied values unchanged without error if the name
*        is not present in the KeyMap? Otherwise an error is reported
*        (the supplied values are still returned unchanged though).
*     mxval
*        The maximimum allowed length of the vector. If this is negative,
*        an error is reported if the number of values obtained (*nval) is
*        not exactly equal to abs(mxval).
*     vals
*        An array in which to return the vector of values. It should have
*        length "mxval".
*     *nval
*        Pointer to an int returned holding the number of values stored
*        in "vals".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the named entry was found in the KeyMap. Zero otherwise.

*/

/* Local Variables: */
   int report;
   int result;

/* Initialise returned values. */
   *nval = 0;
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* See if we should report an error if the number of values obtaiubed
   from the KeyMap is not as expected. */
   if( mxval < 0 ) {
      report = 1;
      mxval= -mxval;
   } else {
      report = 0;
   }

/* Get the values. */
   if( !astMapGet1I( km, name, mxval, nval, vals ) ) {

/* If the named entry does not exist in the KeyMap, return the supplied
   values without error unless "usedef" is zero, indicating an error should
   be reported. */
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* If the entry exists but has an unexpected number of values, report an error
   if required. */
   } else if( report && ( *nval != mxval ) && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Property '%s' in a '%s' "
                "has wrong length (is %d, should be %d).", status, name,
                GetAsdfClass( km, status ), mxval, *nval );

/* Indicate the property was obtained successfully. */
   } else {
      result = 1;
   }

   return result;
}

static const char *GetAsdfClass( AstKeyMap *km, int *status ){
/*
*  Name:
*     GetAsdfClass

*  Purpose:
*     Get the ASDF class name of the object held in the supplied KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *GetAsdfClass( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function gets the ASDF class name of the object held in
*     the supplied KeyMap. An error is reported if the KeyMap does not
*     hold an appropriate ASDF object.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a string identifying the class name, or a pointer to a
*     blank string if the object has no type. For ASDF, the class will
*     be something like "gwcs/step-1.0.0", "asdf/transform/concatenate-1.2.0",
*     etc. The string to which it points will not be over-written for a
*     total of 50 successive invocations of this function. After this, the
*     memory containing the string may be re-used, so a copy of the string
*     should be made if it is needed for longer than this. The calling code
*     should never attempt to free the returned pointer (for instance, using
*     astFree).

*/

/* Local Variables; */
   const char *result;

/* Initialise */
   result = NULL;

/* Check inherited status. Also return if an earlier check passed. */
   if( !astOK ) return result;

/* Get the ASDFclass entry from the KeyMap. Report an error if it is not
   there or if it is blank. */
   if( !astMapGet0C( km, "ASDFclass", &result ) ) {
      astError( AST__INTER, "astRead(YamlChan): No ASDFclass found in "
                "KeyMap (internal AST programming error)", status );
      result = NULL;

   } else if( !result || astChrLen( result ) == 0 ) {
      astError( AST__INTER, "astRead(YamlChan): Blank ASDFclass found "
                "in KeyMap (internal AST programming error)", status );
      result = NULL;

/* Return a pointer to a blank string if the  item has no class or is a
   sequence of potentially disparate objects. */
   } else if( !strcmp( result, ANON_TYPE ) ||
              !strcmp( result, SEQ_TYPE ) ) {
      result = "";

/* Skip over the prefix - STSci or astropy. */
   } else if( !strncmp( result, STSCI_TAG, strlen(STSCI_TAG) ) ) {
      result += strlen(STSCI_TAG);

   } else if( !strncmp( result, ASTROPY_TAG, strlen(ASTROPY_TAG) ) ) {
      result += strlen( ASTROPY_TAG );

/* Report an error if it does not start with an appropriate prefix. */
   } else if( astOK ) {
      astError( AST__BASDF, "astRead(YamlChan): ASDFclass (%s) has wrong "
                "prefix: should be '%s...' or '%s...'", status, result,
                STSCI_TAG, ASTROPY_TAG );
      result = NULL;
   }

/* Return the class name. */
   return result;
}

static int GetChoice( AstKeyMap *km, const char *name, const char *options,
                      int usedef, int def, int *status ){
/*
*  Name:
*     GetChoice

*  Purpose:
*     Get a choice from a list of textual options.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int GetChoice( AstKeyMap *km, const char *name, const char *options,
*                    int usedef, int def, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a scalar string from a named KeyMap entry. If
*     it matches one of the supplied options, its index in the list of
*     options is returned. Otherwise an error is reported. The comparison
*     is case-insensitive. If the name is not present in the KeyMap, a
*     default value is returned or an error is reported.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     options
*        A space separated list of the legal options.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default value is still returned though).
*     def
*        The default value to return if the specified name is not present
*        in the KeyMap, or an error occurrs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The zero-based index of the selected option within the list of
*     legal options supplied via "options".

*/

/* Local Variables: */
   char **words;
   const char *text;
   int i;
   int nopt;
   int result;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the string associated with the supplied name. This reports an
   error (if required) if the name is not found in the keymap. */
   text = Get0C( km, name, usedef, NULL, status );

/* If the name was found, check it is one of the supplied options. */
   if( text ) {

/* Extract the words form the supplied list of options. */
      words = astChrSplit( options, &nopt );
      if( words ) {

/* Check each word in turn against the text obtained from the KeyMap.
   Free the memory holding each option after it has been used. */
         result = -1;
         for( i = 0; i < nopt; i++ ) {
            if( astChrMatch( words[ i ], text ) ) result = i;
            words[ i ] = astFree( words[ i ] );
         }

/* Free the memory holding the option pointers. */
         words = astFree( words );

/* Report an error if the text did not match any of the options. */
         if( result == -1 && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Value '%s' for item "
                      "'%s' in a '%s' is not supported.", status, text,
                      name, GetAsdfClass( km, status ) );
         }
      }
   }

/* Return the option index. */
   return result;
}

static const char *GetNativeClass( AstKeyMap *km, int *status ){
/*
*  Name:
*     GetNativeClass

*  Purpose:
*     Get the NATIVE AST class name of the object held in the supplied KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *GetNativeClass( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function gets the AST class name of the NATIVE object held in
*     the supplied KeyMap. No error is reported if the KeyMap does not
*     hold an NATIVE object (but NULL is returned).

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a string identifying the class name (e.g. "FrameSet"),
*     or NULL if the object is not an AST object. The string to which it
*     points will not be over-written for a total of 50 successive invocations
*     of this function. After this, the memory containing the string may be
*     re-used, so a copy of the string should be made if it is needed for
*     longer than this. The calling code should never attempt to free the
*     returned pointer (for instance, using astFree).

*/

/* Local Variables; */
   const char *result;

/* Initialise */
   result = NULL;

/* Check inherited status. Also return if an earlier check passed. */
   if( !astOK ) return result;

/* Get the ASDFclass (used for both ASDF and NATIVE class names) entry from
   the KeyMap. Report an error if it is not there or if it is blank. */
   if( !astMapGet0C( km, "ASDFclass", &result ) ) {
      astError( AST__INTER, "astRead(YamlChan): No ASDFclass found in "
                "KeyMap (internal AST programming error)", status );
      result = NULL;

   } else if( !result || astChrLen( result ) == 0 ) {
      astError( AST__INTER, "astRead(YamlChan): Blank ASDFclass found "
                "in KeyMap (internal AST programming error)", status );
      result = NULL;

/* Return a NULL pointer if the  item has no class or is a sequence of
   potentially disparate objects. */
   } else if( !strcmp( result, ANON_TYPE ) ||
              !strcmp( result, SEQ_TYPE ) ) {
      result = NULL;

/* Skip over the prefix. */
   } else if( !strncmp( result, AST_TAG, strlen(AST_TAG) ) ) {
      result += strlen(AST_TAG);

/* Return NULL if it does not start with an appropriate prefix. */
   } else if( astOK ) {
      result = NULL;
   }

/* Return the class name. */
   return result;
}

static void GetNextData( AstChannel *this_channel, int skip, char **name,
                         char **val, int *status ) {
/*
*  Name:
*     GetNextData

*  Purpose:
*     Read the next item of data from a data source.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void GetNextData( AstChannel *this, int skip, char **name, char **val )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astGetNextData method inherited from the Channel class).

*  Description:
*     This function reads the next item of input data from a data
*     source associated with a YamlChan and returns the result.  It
*     decodes the data item and returns name/value pairs ready for
*     use.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     skip
*        A non-zero value indicates that a new Object is to be read,
*        and that all input data up to the next "Begin" item are to be
*        skipped in order to locate it. This is useful if the data
*        source contains AST objects interspersed with other data (but
*        note that these other data cannot appear inside AST Objects,
*        only between them).
*
*        A zero value indicates that all input data are significant
*        and the next item will therefore be read and an attempt made
*        to interpret it whatever it contains. Any other data
*        inter-mixed with AST Objects will then result in an error.
*     name
*        An address at which to store a pointer to a null-terminated
*        dynamically allocated string containing the name of the next
*        item in the input data stream. This name will be in lower
*        case with no surrounding white space.  It is the callers
*        responsibilty to free the memory holding this string (using
*        astFree) when it is no longer required.
*
*        A NULL pointer value will be returned (without error) to
*        indicate when there are no further input data items to be
*        read.
*     val
*        An address at which to store a pointer to a null-terminated
*        dynamically allocated string containing the value associated
*        with the next item in the input data stream. No case
*        conversion is performed on this string and all white space is
*        potentially significant.  It is the callers responsibilty to
*        free the memory holding this string (using astFree) when it
*        is no longer required.
*
*        The returned pointer will be NULL if an Object data item is
*        read (see the "Data Representation" section).

*  Data Representation:

*     The returned data items fall into the following categories:
*
*     - Begin: Identified by the name string "begin", this indicates
*     the start of an Object definition. The associated value string
*     gives the class name of the Object being defined.
*
*     - IsA: Identified by the name string "isa", this indicates the
*     end of the data associated with a particular class structure
*     within the definiton of a larger Object. The associated value
*     string gives the name of the class whose data have just been
*     read.
*
*     - End: Identified by the name string "end", this indicates the
*     end of the data associated with a complete Object
*     definition. The associated value string gives the class name of
*     the Object whose definition is being ended.
*
*     - Non-Object: Identified by any other name string plus a
*     non-NULL "val" pointer, this gives the value of a non-Object
*     structure component (instance variable). The name identifies
*     which instance variable it is (within the context of the class
*     whose data are being read) and the value is encoded as a string.
*
*     - Object: Identified by any other name string plus a NULL "val"
*     pointer, this identifies the value of an Object structure
*     component (instance variable).  The name identifies which
*     instance variable it is (within the context of the class whose
*     data are being read) and the value is given by subsequent data
*     items (so the next item should be a "Begin" item).

*  Notes:
*     - NULL pointer values will be returned if this function is
*     invoked with the global error status set, or if it should fail
*     for any reason.
*/

/* Local Variables: */
   AstKeyMap *km;
   AstYamlChan *this;
   const char *cptr;
   const char *key;
   const char *suf_start;
   int klen;
   void *pv;

/* Initialise the returned pointer values. */
   *name = NULL;
   *val = NULL;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* The data values are stored in a KeyMap. A pointer to this KeyMap is
   stored in the YamlChan structure (this->obj), together with the index
   of the next entry to read from this KeyMap (this->index). If we are
   about to read the first item, then first  return a "Begin" item. */
   if( this->index == -1 ){
      *name = astString( "begin", 5 );

/* Get the AST class name and return a copy in dynamically allocated memory. */
      cptr = GetNativeClass( this->obj, status );
      *val = astString( cptr, strlen(cptr) );

/* Increment the index of the next item to read from the object KeyMap. */
      (this->index)++;

/* If we have previously read the last item, then return an "End" item. */
   } else if( this->index >= astMapSize( this->obj ) ){
      *name = astString( "end", 3 );

/* Get the AST class name and return a copy in dynamically allocated memory. */
      cptr = GetNativeClass( this->obj, status );
      *val = astString( cptr, strlen(cptr) );

/* Re-instate the values stored before the start of the object that has just
   ended, so that subsequent calls to this function will carry on reading
   from where it left off. Note, if this->obj represents a top-level
   object, these items will not exist. So test for this. */
      if( astMapGet0P( this->obj, "PARENT_KM", &pv ) ) {
         astMapRemove( this->obj, "PARENT_KM" );
         astMapGet0I( this->obj, "PARENT_INDEX", &(this->index) );
         astMapRemove( this->obj, "PARENT_INDEX" );
         astAnnul( this->obj );
         this->obj = (AstKeyMap *) pv;

/* Increment the index of the next item to read from the object KeyMap. */
         (this->index)++;
      }

/* Otherwise, read the required item from the Object KeyMap. */
   } else {
      key = astMapKey( this->obj, this->index );

/* If this key holds YamlChan metadata used to describe the contents of the
   KeyMap, skip it. */
      while( !strcmp( key, "PARENT_KM" ) || !strcmp( key, "PARENT_INDEX" ) ||
             !strcmp( key, "ASDFclass" ) || !strcmp( key, "PREVIOUS_KEY" ) ){
         if( ++(this->index) < astMapSize( this->obj ) ){
            key = astMapKey( this->obj, this->index );
         } else {
            key = NULL;
            break;
         }
      }

/* If no  usable entry was found, return an "end". */
      if( !key ) {
         *name = astString( "end", 3 );

/* Get the AST class name and return a copy in dynamically allocated memory. */
         cptr = GetNativeClass( this->obj, status );
         *val = astString( cptr, strlen(cptr) );

/* Re-instate the values stored before the start of the object that has just
   ended, so that subsequent calls to this function will carry on reading
   from where it left off. Note, if this->obj represents a top-level
   object, these items will not exist. So test for this. */
         if( astMapGet0P( this->obj, "PARENT_KM", &pv ) ){
            astMapRemove( this->obj, "PARENT_KM" );
            astMapGet0I( this->obj, "PARENT_INDEX", &(this->index) );
            astMapRemove( this->obj, "PARENT_INDEX" );
            astAnnul( this->obj );
            this->obj = (AstKeyMap *) pv;

/* Increment the index of the next item to read from the object KeyMap. */
            (this->index)++;
         }

/* Otherwise, store the key and get its value. */
      } else {

/* Store a copy of the key in a dynamically allocated string. If the Key has
   been modified to make it unique within the KeyMap (see function
   PutIntoKeyMap), then exclude the suffix added by PutIntoKeyMap. */
         klen = strlen( key );
         suf_start = strchr( key, '%' );
         if( suf_start && key[ klen - 1 ] == '%' &&
             suf_start < key + klen - 1 ) klen = suf_start - key;
         *name = astString( key, klen );

/* Convert to lower case. */
         astChrCase( NULL, *name, 0, 0 );

/* If the entry is not an Object... */
         if( astMapType( this->obj, key ) != AST__OBJECTTYPE ) {

/* Get its value as a string. */
            astMapGet0C( this->obj, key, &cptr );
            *val = astString( cptr, strlen(cptr) );

/* Increment the index of the next item to read from the object KeyMap. */
            (this->index)++;

/* If the entry is an Object, prepare to read subsequent data items from it. */
         } else {

/* Get a pointer to the KeyMap holding the object data. */
            astMapGet0A( this->obj, key, &km );

/* Store a void pointer to the current KeyMap and the index within the current
   KeyMap so that we can reinstated them when the object has been read.
   Note we cannot store a full Object pointer using astMapPut0A because
   that would result in a circular referecne (km would contain this->obj
   which would contain km). */
            astMapPut0P( km, "PARENT_KM", this->obj, NULL );
            astMapPut0I( km, "PARENT_INDEX", this->index, NULL );

/* Store the new pointer in the YamlChan structure, and re-initialise the
   index so that subsequent calls to this function will read data items from
   it. */
            this->obj = km;
            this->index = -1;
         }
      }
   }

/* If an error occurred, ensure that any allocated memory is freed and
   that NULL pointer values are returned. */
   if ( !astOK ) {
      *name = astFree( *name );
      *val = astFree( *val );
   }
}

static double GetQuantity( AstKeyMap *km, const char *name, const char *unit,
                           int usedef, double def, int *status ){
/*
*  Name:
*     GetQuantity

*  Purpose:
*     Get the value of a scalar Quantity from a named KeyMap entry, in
*     specified units.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double GetQuantity( AstKeyMap *km, const char *name, const char *unit,
*                         int usedef, double def, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions get a scalar value from a named Quantity entry in a
*     supplied KeyMap. The value is converted to the supplied units and
*     returned.
*
*     See:
*     https://asdf-standard.readthedocs.io/en/1.5.0/generated/stsci.edu/asdf/unit/quantity-1.1.0.html

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     unit
*        A string describing the units in which the Quantity value is to
*        be returned. An error is reported if the QUantity cannot be
*        converted to these units. No conversion occurrs if this is NULL.
*     usedef
*        Return the supplied default value without error if the name is
*        not present in the KeyMap? Otherwise an error is reported (the
*        default value is still returned though).
*     def
*        The default value to use if the specified name is not present
*        in the KeyMap, or an error occurrs.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstKeyMap *km_quantity;
   AstMapping *unitmap;
   const char *qunit;
   double result;

/* Initialise */
   result = def;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the Quantity. If it is not there, report a message or return the
   default value. */
   if( !astMapGet0A( km, name, &km_quantity ) ) {
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* Get the value from the Quantity. */
   }  else {
      result = Get0D( km_quantity, "value", 0, 0, status );

/* If required convert to the supplied units. */
      if( unit ) {

/* Get the units string from the Quantity. */
         qunit = Get0C( km_quantity, "unit", 0, NULL, status );

/* Get the Mapping from the unit of the Quantity to the supplied unit. */
         unitmap = astUnitMapper( qunit, unit, NULL, NULL );

/* Report an error if the quantity unit is incompatible with the
   requested units. */
         if( !unitmap && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Failed to convert "
                      "Quantity '%s' from '%s' to '%s'.", status, name,
                      qunit, unit );

/* Otherwise, use the mapping to transform the quantity value into th
   requested units. */
         } else {
            astTran1( unitmap, 1, &result, 1, &result );
         }

/* Free resources. */
         unitmap = astAnnul( unitmap );
      }
      km_quantity = astAnnul( km_quantity );
   }

/* Return the Mapping */
   return result;
}

static double *GetQuantityV( AstYamlChan *this, AstKeyMap *km, const char *name,
                             const char *unit, int usedef, int mxdim, int *ndim,
                             int *dims, int *status ){
/*
*  Name:
*     GetQuantityV

*  Purpose:
*     Get the value of a vector Quantity from a named KeyMap entry, in
*     specified units.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double *GetQuantityV( AstYamlChan *this, AstKeyMap *km, const char *name,
*                           const char *unit, int usedef, int mxdim, int *ndim,
*                           int *dims, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of valued from a named Quantity entry in
*     a supplied KeyMap. The value is converted to the supplied units and
*     returned.
*
*     See:
*     https://asdf-standard.readthedocs.io/en/1.5.0/generated/stsci.edu/asdf/unit/quantity-1.1.0.html

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     unit
*        A string describing the units in which the Quantity value is to
*        be returned. An error is reported if the QUantity cannot be
*        converted to these units. No conversion occurrs if this is NULL.
*     usedef
*        Return a NULL pointer without error if the name is not present in
*        the KeyMap? Otherwise an error is reported (a NULL pointer is
*        still returned).
*     mxdim
*        The maximum allowed number of dimensions within the returned
*        vectorised values array. A value of zero may be supplied if the
*        Quantity must be a scalar.
*     ndim
*        Pointer to an int in which to return the actual number of dimensions
*        within the returned vectorised values array. A value of zero is
*        returned if the Quantity is a scalar.
*     dims
*        An array with "mxdim" elements in which are returned the dimensions
*        of the returned vectorised values array. Ignored if "mxdim" is
*        zero.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a newly allocated array holding the vectorised values
*     array read from the Quantity, or NULL if an error occurs. The array
*     should be freed using astFree when it is no longer needed.

*/

/* Local Variables: */
   AstKeyMap *km_quantity;
   AstKeyMap *subkm;
   AstMapping *unitmap;
   const char *qunit;
   double *buf;
   double *result;
   int idim;
   size_t nel;

/* Initialise. */
   result = NULL;
   *ndim = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the Quantity. If it is not there, report a message if required. */
   if( !astMapGet0A( km, name, &km_quantity ) ) {
      if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s' in a '%s'.", status, name,
                   GetAsdfClass( km, status ) );
      }

/* Get the values from the Quantity - either an array or a scalar. */
   }  else {

/* If the the "value" entry in the quantity KeyMap is itself a KeyMap, then
   it must hold an ndarray. */
      if( astMapType( km_quantity, "value" ) == AST__OBJECTTYPE ) {

/* Get a pointer to the KeyMap holding the ndarray, read the values from
   the ndarray and release the KeyMap. */
         subkm = Get0A( km_quantity, "value", 0, NULL, "ndarray", status );
         result = ReadNDArray( this, subkm, mxdim, ndim, dims, status );
         subkm = astAnnul( subkm );

/* Get the total number of values. */
         nel = 1;
         for( idim = 0; idim < *ndim; idim++ ) nel *= dims[ idim ];

/* If the the "value" entry in the quantity KeyMap is not a KeyMap, then
   it must be a scalar numerical value. */
      } else {

/* Allocate a single element array to hold the value and then store the
   value in it. If the value is not there, annull the returned array.
   Otherwise, set the returned values to indicate a scalar is being
   returned. */
         result = astMalloc( sizeof(*result) );
         if( astOK ) {
            result[ 0 ] = Get0D( km_quantity, "value", 0, AST__BAD, status );
            if( result[ 0 ] == AST__BAD ) {
               result = astFree( result );
            } else {
               nel = 1;
               *ndim = 0;
               if( mxdim > 0 ) dims[ 0 ] = 0;
            }
         }
      }

/* If required convert the values array to the supplied units. */
      if( unit ) {

/* Get the units string from the Quantity. */
         qunit = Get0C( km_quantity, "unit", 0, NULL, status );

/* Get the Mapping from the unit of the Quantity to the supplied unit. */
         unitmap = astUnitMapper( qunit, unit, NULL, NULL );

/* Report an error if the quantity unit is incompatible with the
   requested units. */
         if( !unitmap && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Failed to convert "
                      "Quantity '%s' from '%s' to '%s'.", status, name,
                      qunit, unit );

/* Otherwise, use the mapping to transform the quantity values into the
   requested units. */
         } else {
            buf = astStore( NULL, result, nel*sizeof(*buf) );
            astTran1( unitmap, nel, buf, 1, result );
            buf = astFree( buf );
         }

/* Free resources. */
         unitmap = astAnnul( unitmap );
      }
      km_quantity = astAnnul( km_quantity );
   }

/* Return the values array. */
   return result;
}

static double *GetSequence( AstYamlChan *this, AstKeyMap *km, const char *name,
                            int usedef, int mxdim, int *ndim, int *dims,
                            int *status ){
/*
*  Name:
*     GetSequence

*  Purpose:
*     Get an array of values from a KeyMap holding a numerical YAML sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double *GetSequence( AstYamlChan *this, AstKeyMap *km, const char *name,
*                          int usedef, int mxdim, int *ndim, int *dims,
*                          int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of values from a named entry in a supplied
*     KeyMap. The named entry must hold an array of numerical values read
*     from a YAML sequence as created by function ReadTYAMLSequence.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap.
*     name
*        Pointer to a null-terminated string holding the name of the
*        KeyMap entry to use.
*     usedef
*        Return a NULL pointer without error if the name is not present in
*        the KeyMap? Otherwise an error is reported (a NULL pointer is
*        still returned).
*     mxdim
*        The maximum allowed number of dimensions within the returned
*        vectorised values array. A value of zero may be supplied if the
*        array must be a scalar.
*     ndim
*        Pointer to an int in which to return the actual number of dimensions
*        within the returned vectorised values array. A value of zero is
*        returned if the array is a scalar.
*     dims
*        An array with "mxdim" elements in which are returned the dimensions
*        of the returned vectorised values array. Ignored if "mxdim" is
*        zero.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a newly allocated array holding the vectorised values
*     array read from the sequence, or NULL if an error occurs. The array
*     should be freed using astFree when it is no longer needed.

*/

/* Local Variables: */
   AstKeyMap *subkm;
   double *result;
   int len;
   int type;

/* Initialise. */
   result = NULL;
   *ndim = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Verify args. */
   if( mxdim > MXDIM ){
      astError( AST__INTER, "astRead(YamlChan): mxdim value (%d) passed "
                "to GetSequence is too large - (internal AST programming "
                "error).", status, mxdim );
   }

/* If the sequence is 1D it will be stored as a single vector valued
   entry in the supplied KeyMap. Otherwise, it will be stored in a nested
   KeyMap. First deal with nested KeyMaps. */
   type = astMapType( km, name );
   if( type == AST__OBJECTTYPE ){

/* Get a pointer to the sub KeyMap. */
      astMapGet0A( km, name, &subkm );

/* Read the array from it. */
      result = ReadSequence( this, subkm, name, mxdim, ndim, dims, status );

/* Free resources */
      subkm = astAnnul( subkm );

/* Now deal with 1D sequences. */
   } else {

/* Get the length of the 1D vector. */
      len = astMapLength( km, name );

/* Allocate memory to hold it. */
      result = astMalloc( len*sizeof( *result ) );

/* Check we have some memory. */
      if( result ) {

/* Read the values into the allocated memory. */
         astMapGet1D( km, name, len, dims, result );

/* Check the length is 1 if a scalar is required. */
         if( mxdim == 0 ) {
            *ndim = 0;
            if( dims[ 0 ] > 1 && astOK ) {
               astError( AST__BYAML, "astRead(YamlChan): Expected a "
                         "scalar - found a vector of length %d.", status,
                         dims[ 0 ] );
            }
         } else {
            *ndim = 1;
         }

/* If no memory, the named entry was not found. Report an error if
   required. */
      } else if( !usedef && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Failed to find "
                   "property '%s'.", status, name );
      }
   }

/* Report a context error. */
   if( !astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Failed to get a "
                "sequence from property '%s' in a '%s'.", status, name,
                GetAsdfClass( km, status ) );
   }

/* Return the values array. */
   return result;
}

static const char *GetName( AstYamlChan *this, const char *name,
                            AstMapping *map, int *status ){
/*
*  Name:
*     GetName

*  Purpose:
*     Get a string to use as the name property of an ASDF transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *GetName( AstYamlChan *this, const char *name,
*                          AstMapping *map, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function returns a string to use as the name property of an ASDF
*     transform.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     name
*        Pointer to the 'name' string to use. If NULL, an alternative is
*        derived from the attributes of 'map'.
*     map
*        The AST Mapping being used to create the ASDF tranform.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The string to use as the 'name' property of the ASDF transform. May
*     be NULL.

*/

/* Local Variables: */
   const char *result;

/* Initialise */
   result = name;

/* Check inherited status. Return immediately if a name was supplied or
   if no Mapping was supplied. */
   if( !astOK || result || !map ) return result;

/* The name is taken from either the Ident or the ID attribute of the
   supplied Mapping, depending on the value of the PreserveName attribute in
   the YamlChan. A NULL value is returned unless the appropriate
   attribute has a set value.  */
   if( astGetPreserveName( this ) ) {
      if( astTestIdent( map ) ) result = astGetIdent( map  );
   } else {
      if( astTestID( map ) ) result = astGetID( map  );
   }

   return result;
}

static double GetTime( AstKeyMap *km, const char *name, AstFrame *frm,
                       int *status ){
/*
*  Name:
*     GetTime

*  Purpose:
*     Get a TBD MJD time from a named time entry in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double GetTime( AstKeyMap *km, const char *name, AstFrame *frm,
*                     int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function reads an ASDF time from a named entry in a KeyMap and return
*     it as a TBD MJD. See:
*
*     https://asdf-standard.readthedocs.io/en/1.5.0/generated/stsci.edu/asdf/time/time-1.1.0.html

*  Parameters:
*     km
*        Pointer to a KeyMap.
*     name
*        The key of the entry within "km" that holds the Time value.
*     frm
*        An AST Frame that defines the observer location via its ObsLat,
*        ObsLon and ObsAlt attributyes.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The time as an MJD in the TBD timescale.

*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstTimeFrame *tfrm;
   char vbuf[ 200 ];
   const char *value;
   const char *format;
   const char *scale;
   double result;
   int type;
   size_t nc;
   size_t f;

/* Initialise */
   result = AST__BAD;

/* Check inherited status */
   if( !astOK ) return result;

/* See if the named entry is a string. If so, get it. */
   type = astMapType( km, name );
   if( type == AST__STRINGTYPE ) {
      value = Get0C( km, name, 1, " ", status );
      format = NULL;
      scale = NULL;

/* See if the named entry is an object. If so get the KeyMap holding the
   object. */
   } else if( type == AST__OBJECTTYPE ) {
      subkm = Get0A( km, name, 0, NULL, "time", status );

/* Report an error if the KeyMap does not represent a Time. */
      if( !IsA( subkm, "time", status ) ) {
         astError( AST__BYAML, "astRead(YamlChan): Expected "
                   "KeyMap to hold a time but got a %s",
                   status, GetAsdfClass(subkm,status) );

/* Read the properties of the supplied time. */
      } else {
         value = Get0C( subkm, "value", 0, NULL, status );
         format = Get0C( subkm, "format", 1, NULL, status );
         scale = Get0C( subkm, "scale", 0, NULL, status );

/* Skip over any leading white space. */
         if( value ) {
            astFandl( value, 1, 0, &f, NULL );
            value += f;
         }
         if( format ) {
            astFandl( format, 1, 0, &f, NULL );
            format += f;
         }
         if( scale ) {
            astFandl( scale, 1, 0, &f, NULL );
            scale += f;
         }

/* Check the format is supported by AST. */
         if( format &&
             strcmp( format, "iso" ) &&
             strcmp( format, "byear" ) &&
             strcmp( format, "jyear" ) &&
             strcmp( format, "jd" ) &&
             strcmp( format, "mjd" ) ){
            astError( AST__BYAML, "astRead(YamlChan): Supplied ASDF Time "
                      "uses unsupported format '%s'.", status, format );
         }
      }

/* Free the KeyMap. */
      subkm = astAnnul( subkm );

/* Report an error if the named entry is not a string or an object. */
   } else if( astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): The format of the Time object "
                "'%s' is not supported by AST.", status, name );
   }

/* Create a TimeFrame and set its properties, getting the
   geodetic position of the observer from the supplied Frame. */
   tfrm = astTimeFrame( " ", status );
   astSetC( tfrm, "TimeScale", scale?scale:"UTC" );
   astSetObsLat( tfrm, astGetObsLat( frm ) );
   astSetObsLon( tfrm, astGetObsLon( frm ) );
   astSetObsAlt( tfrm, astGetObsAlt( frm ) );

/* If the format is specified, ensure the string includes any prefix
   required by the TimeFrame. */
   if( format ) {
      if( !strcmp( format, "byear" ) &&
          strncasecmp( format, "B", 1 ) ){
         sprintf( vbuf, "B%s", value );
         value = vbuf;
      } else if( !strcmp( format, "jyear" ) &&
                 strncasecmp( format, "J", 1 ) ){
         sprintf( vbuf, "J%s", value );
         value = vbuf;
      } else if( !strcmp( format, "jd" ) &&
                 strncasecmp( format, "JD", 2 ) ){
         sprintf( vbuf, "JD %s", value );
         value = vbuf;
      } else if( !strcmp( format, "mjd" ) &&
                 strncasecmp( format, "MJD", 2 ) ){
         sprintf( vbuf, "MJD %s", value );
         value = vbuf;
      }
   }

/* Read a numerical MJD value from the value string. */
   nc = astUnformat( tfrm, 0, value, &result );

/* Report an error if the whole string was not read. */
   if( nc != strlen( value ) && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): The format of the Time object "
                "'%s' ('%s') is not supported by AST.", status, name, value );

/* Otherwise, convert the MJD from the original timescale to a TBD MJD. */
   } else {
      astSetTimeOrigin( tfrm, result );
      astSetTimeScale( tfrm, AST__TDB );
      result = astGetTimeOrigin( tfrm );
   }

/* Free the TimeFrame. */
   tfrm = astAnnul( tfrm );

   return result;
}

static void GetUCD( int system, const char **lon_ucd, const char **lat_ucd ){
/*
*  Name:
*     GetUCD

*  Purpose:
*     Get the UCD1+ values corresponding to a given AST celestial system.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void GetUCD( int system, const char **lon_ucd, const char **lat_ucd )

*  Description:
*     This function returns a pair of strings holding the UCD1+ value
*     corresponding to longitude and latitude in the supplied AST system.

*  Parameters:
*     system
*        An integer value for the AST SkyFrame System attribute.
*     lon_ucd
*        Address at which to return a pointer to a string holding the
*        UCD1+ string for longitude in the supplied system. Returned set
*        to NULL if the supplied system is unknown or has no known UCD.
*     lat_ucd
*        Address at which to return a pointer to a string holding the
*        UCD1+ string for latitude in the supplied system. Returned set
*        to NULL if the supplied system is unknown or has no known UCD.

*/

/* Get the expected UCD strings. */
   if( system == AST__ICRS ||
       system == AST__FK4 ||
       system == AST__FK4_NO_E ||
       system == AST__FK5 ||
       system == AST__GAPPT ||
       system == AST__J2000 ){
      *lat_ucd = "pos.eq.dec";
      *lon_ucd = "pos.eq.ra";

   } else if( system == AST__ECLIPTIC ){
      *lat_ucd = "pos.ecliptic.lat";
      *lon_ucd = "pos.ecliptic.lon";

   } else if( system == AST__GALACTIC ){
      *lat_ucd = "pos.galactic.lat";
      *lon_ucd = "pos.galactic.lon";

   } else if( system == AST__SUPERGALACTIC ){
      *lat_ucd = "pos.supergalactic.lat";
      *lon_ucd = "pos.supergalactic.lon";

   } else if( system == AST__AZEL ){
      *lat_ucd = "pos.az.alt";
      *lon_ucd = "pos.az.azi";

   } else {
      *lon_ucd = NULL;
      *lat_ucd = NULL;
   }
}

static int IsA( AstKeyMap *km, const char *class, int *status ) {
/*
*  Name:
*     IsA

*  Purpose:
*     Tests if a KeyMap holds an ASDF object of a specified class.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int IsA( AstKeyMap *km, const char *class, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function gets the name of the ASDF class represented by
*     the supplied KeyMap and compares it to the supplied class
*     name. An error is reported if the ASDF object is of an unsupported
*     class or version.

*  Parameters:
*     km
*        Pointer to a KeyMap holding the YAML values for an instance of
*        an ASDF object.
*     class
*        Pointer to a null-terminated string holding the ASDF class name
*        to be checked, without any schema specification (e.g. "wcs",
*        "step", "concatenate", "affine", etc).
*     status
*        Pointer to the global status

*  Returned Value:
*    Non-zero if the KeyMap holds an instance of the specified YAML
*    class. Zero otherwise.

*/

/* Local Variables: */
   int result;
   const char *km_class;

/* Initialise */
   result = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Get the class of the YAML object in the KeyMap. */
   km_class = GetAsdfClass( km, status );
   if( km_class ) {

/* Do the appropriate test */
      if( !strncmp( km_class, "gwcs/", 5 ) ){
         if( !strcmp( "wcs", class ) ){
            result = IsAWcs( km_class, status );
         } else if( !strcmp( "step", class ) ){
            result = IsAStep( km_class, status );
         } else if( !strcmp( "celestial_frame", class ) ){
            result = IsACelestial_Frame( km_class, status );
         } else if( !strcmp( "frame", class ) ){
            result = IsAFrame( km_class, status );
         } else if( !strcmp( "frame2d", class ) ){
            result = IsAFrame2d( km_class, status );
         }

      } else if( !strncmp( km_class, "asdf/transform/", 15 ) ) {
         if( !strcmp( "transform", class ) ){
            result = IsATransform( km_class, status );
         } else if( !strcmp( "skyprojection", class ) ){
            result = IsASkyProjection( km_class, status );
         } else if( !strcmp( "identity", class ) ){
            result = IsAIdentity( km_class, status );
         } else if( !strcmp( "scale", class ) ){
            result = IsAScale( km_class, status );
         } else if( !strcmp( "multiplyscale", class ) ){
            result = IsAMultiplyScale( km_class, status );
         } else if( !strcmp( "remap_axes", class ) ){
            result = IsARemap_Axes( km_class, status );
         } else if( !strcmp( "shift", class ) ){
            result = IsAShift( km_class, status );
         } else if( !strcmp( "compose", class ) ){
            result = IsACompose( km_class, status );
         } else if( !strcmp( "concatenate", class ) ){
            result = IsAConcatenate( km_class, status );
         } else if( !strcmp( "constant", class ) ){
            result = IsAConstant( km_class, status );
         } else if( !strcmp( "fix_inputs", class ) ){
            result = IsAFix_Inputs( km_class, status );
         } else if( !strcmp( "affine", class ) ){
            result = IsAAffine( km_class, status );
         } else if( !strcmp( "rotate2d", class ) ){
            result = IsARotate2d( km_class, status );
         } else if( !strcmp( "rotate_sequence_3d", class ) ){
            result = IsARotate_Sequence_3d( km_class, status );
         } else if( !strcmp( "rotate3d", class ) ){
            result = IsARotate3d( km_class, status );
         } else if( !strcmp( "linear1d", class ) ){
            result = IsALinear1d( km_class, status );
         } else if( !strcmp( "ortho_polynomial", class ) ){
            result = IsAOrtho_Polynomial( km_class, status );
         } else if( !strcmp( "planar2d", class ) ){
            result = IsAPlanar2d( km_class, status );
         } else if( !strcmp( "polynomial", class ) ){
            result = IsAPolynomial( km_class, status );
         } else if( !strcmp( "conic", class ) ){
            result = IsAConic( km_class, status );
         } else if( !strcmp( "conic_equal_area", class ) ){
            result = IsAConic_Equal_Area( km_class, status );
         } else if( !strcmp( "conic_equidistant", class ) ){
            result = IsAConic_Equidistant( km_class, status );
         } else if( !strcmp( "conic_orthomorphic", class ) ){
            result = IsAConic_Orthomorphic( km_class, status );
         } else if( !strcmp( "conic_perspective", class ) ){
            result = IsAConic_Perspective( km_class, status );
         } else if( !strcmp( "cylindrical", class ) ){
            result = IsACylindrical( km_class, status );
         } else if( !strcmp( "cylindrical_equal_area", class ) ){
            result = IsACylindrical_Equal_Area( km_class, status );
         } else if( !strcmp( "cylindrical_perspective", class ) ){
            result = IsACylindrical_Perspective( km_class, status );
         } else if( !strcmp( "mercator", class ) ){
            result = IsAMercator( km_class, status );
         } else if( !strcmp( "plate_carree", class ) ){
            result = IsAPlate_Carree( km_class, status );
         } else if( !strcmp( "healpix", class ) ){
            result = IsAHealpix( km_class, status );
         } else if( !strcmp( "healpix_polar", class ) ){
            result = IsAHealpix_Polar( km_class, status );
         } else if( !strcmp( "pseudoconic", class ) ){
            result = IsAPseudoConic( km_class, status );
         } else if( !strcmp( "bonne_equal_area", class ) ){
            result = IsABonne_Equal_Area( km_class, status );
         } else if( !strcmp( "polyconic", class ) ){
            result = IsAPolyConic( km_class, status );
         } else if( !strcmp( "pseudocylindrical", class ) ){
            result = IsAPseudoCylindrical( km_class, status );
         } else if( !strcmp( "hammer_aitoff", class ) ){
            result = IsAHammer_Aitoff( km_class, status );
         } else if( !strcmp( "molleweide", class ) ){
            result = IsAMolleweide( km_class, status );
         } else if( !strcmp( "parabolic", class ) ){
            result = IsAParabolic( km_class, status );
         } else if( !strcmp( "sanson_flamsteed", class ) ){
            result = IsASanson_Flamsteed( km_class, status );
         } else if( !strcmp( "quadcube", class ) ){
            result = IsAQuadCube( km_class, status );
         } else if( !strcmp( "cobe_quad_spherical_cube", class ) ){
            result = IsACobe_Quad_Spherical_Cube( km_class, status );
         } else if( !strcmp( "quad_spherical_cube", class ) ){
            result = IsAQuad_Spherical_Cube( km_class, status );
         } else if( !strcmp( "tangential_spherical_cube", class ) ){
            result = IsATangential_Spherical_Cube( km_class, status );
         } else if( !strcmp( "zenithal", class ) ){
            result = IsAZenithal( km_class, status );
         } else if( !strcmp( "airy", class ) ){
            result = IsAAiry( km_class, status );
         } else if( !strcmp( "gnomonic", class ) ){
            result = IsAGnomonic( km_class, status );
         } else if( !strcmp( "slant_orthographic", class ) ){
            result = IsASlant_Orthographic( km_class, status );
         } else if( !strcmp( "slant_zenithal_perspective", class ) ){
            result = IsASlant_Zenithal_Perspective( km_class, status );
         } else if( !strcmp( "stereographic", class ) ){
            result = IsAStereographic( km_class, status );
         } else if( !strcmp( "zenithal_equal_area", class ) ){
            result = IsAZenithal_Equal_Area( km_class, status );
         } else if( !strcmp( "zenithal_equidistant", class ) ){
            result = IsAZenithal_Equidistant( km_class, status );
         } else if( !strcmp( "zenithal_perspective", class ) ){
            result = IsAZenithal_Perspective( km_class, status );
         }

      } else if( !strncmp( km_class, "asdf/time/", 10 ) ) {
         if( !strcmp( "time", class ) ){
            result = IsATime( km_class, status );
         }

      } else if( !strncmp( km_class, "asdf/unit/", 10 ) ) {
         if( !strcmp( "quantity", class ) ){
            result = IsAQuantity( km_class, status );
         }

      } else if( !strncmp( km_class, "asdf/core/", 10 ) ) {
         if( !strcmp( "ndarray", class ) ){
            result = IsANDArray( km_class, status );
         }

      } else if( !strncmp( km_class, "astropy/coordinates/earthlocation/", 34 ) ) {
         if( !strcmp( "earthlocation", class ) ){
            result = IsAEarthLocation( km_class, status );
         }

      } else if( !strncmp( km_class, "astropy/coordinates/frames/", 27 ) ) {
         if( !strcmp( "baseframe", class ) ){
            result = IsABaseframe( km_class, status );
         } else if( !strcmp( "fk4", class ) ){
            result = IsAFk4( km_class, status );
         } else if( !strcmp( "fk4noeterms", class ) ){
            result = IsAFk4Noeterms( km_class, status );
         } else if( !strcmp( "fk5", class ) ){
            result = IsAFk5( km_class, status );
         } else if( !strcmp( "barycentricmeanecliptic", class ) ){
            result = IsAEcliptic( km_class, status );
         } else if( !strcmp( "altaz", class ) ){
            result = IsAAltaz( km_class, status );
         } else if( !strcmp( "galactic", class ) ){
            result = IsAGalactic( km_class, status );
         } else if( !strcmp( "supergalactic", class ) ){
            result = IsASuperGalactic( km_class, status );
         } else if( !strcmp( "icrs", class ) ){
            result = IsAIcrs( km_class, status );
         }
      }
   }

   return result;
}

/*
*  Name:
*     IsAxxx

*  Purpose:
*     Test ASDF class inheritance

*  Synopsis:
*     #include "yamlchan.h"
*     int IsA<Class>( const char *name )

*  Description:
*     Each of these functions returns a flag indicating if <name> is a
*     subclass of <Class>.

*  Parameters:
*     name
*        Pointer to a null-terminated string holding the ASDF class name
*        to check (case insensitive) (e.g. "gwcs/wcs-1.0.0").

*  Returned Value:
*    Non-zero if <name> is the same as Class, or if <name> is a subclass
*    of Class. Zero otherwise.

*/

/* First do leaf classes (i.e. concrete classes that have no subclasses). */
#define MAKE_TEST(Class,Schema,Major,Minor) \
static int IsA##Class( const char *class, int *status ){ \
\
/* Local Variables: */ \
   const char *pversion; \
   int major; \
   int minor; \
   int patch; \
   int result; \
\
/* Check inherited status and check that a string was supplied. */ \
   result = 0; \
   if( !astOK || !class ) return result; \
\
/* Get a pointer to the start of the version string in the supplied class \
   name. */ \
   pversion = strchr( class, '-' ); \
   if( pversion ) { \
\
/* Compare the class string with the class name, excluding the version number. */ \
      result = strncasecmp( class, #Schema "/" #Class, pversion - class )?0:1;  \
\
/* If they match, parse the version string into 3 integers. */ \
      if( result ){ \
         if( 3 == astSscanf( pversion, "-%d.%d.%d", &major, &minor, &patch ) ) { \
\
/* Check the major and minor version numbers can be handled by this module. */ \
            if( major != Major ){ \
               astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) " \
                         "unsupported major version number %d (should " \
                         "be %d).", status, class, major, Major ); \
            } else if( minor > Minor ){ \
               astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) " \
                         "unsupported minor version number %d (should be " \
                         "at least %d).", status, class, minor, Minor ); \
            } \
   \
         } else {  \
            astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) has " \
                      "unexpected version number format.", status, class ); \
         } \
      } \
   } else { \
      astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) has no " \
                "version number.", status, class ); \
   } \
\
   return result; \
}

MAKE_TEST(Wcs,gwcs,1,0)
MAKE_TEST(Step,gwcs,1,0)
MAKE_TEST(Celestial_Frame,gwcs,1,0)
MAKE_TEST(Frame2d,gwcs,1,0)
MAKE_TEST(Identity,asdf/transform,1,2)
MAKE_TEST(Scale,asdf/transform,1,2)
MAKE_TEST(MultiplyScale,asdf/transform,1,0)
MAKE_TEST(Remap_Axes,asdf/transform,1,3)
MAKE_TEST(Shift,asdf/transform,1,2)
MAKE_TEST(Compose,asdf/transform,1,2)
MAKE_TEST(Concatenate,asdf/transform,1,2)
MAKE_TEST(Constant,asdf/transform,1,4)
MAKE_TEST(Fix_Inputs,asdf/transform,1,2)
MAKE_TEST(Affine,asdf/transform,1,3)
MAKE_TEST(Rotate2d,asdf/transform,1,3)
MAKE_TEST(Rotate_Sequence_3d,asdf/transform,1,3)
MAKE_TEST(Rotate3d,asdf/transform,1,3)
MAKE_TEST(Linear1d,asdf/transform,1,0)
MAKE_TEST(Ortho_Polynomial,asdf/transform,1,0)
MAKE_TEST(Planar2d,asdf/transform,1,0)
MAKE_TEST(Polynomial,asdf/transform,1,2)
MAKE_TEST(Conic_Equal_Area,asdf/transform,1,3)
MAKE_TEST(Conic_Equidistant,asdf/transform,1,3)
MAKE_TEST(Conic_Orthomorphic,asdf/transform,1,3)
MAKE_TEST(Conic_Perspective,asdf/transform,1,3)
MAKE_TEST(Cylindrical_Equal_Area,asdf/transform,1,3)
MAKE_TEST(Cylindrical_Perspective,asdf/transform,1,3)
MAKE_TEST(Mercator,asdf/transform,1,2)
MAKE_TEST(Plate_Carree,asdf/transform,1,2)
MAKE_TEST(Healpix,asdf/transform,1,2)
MAKE_TEST(Healpix_Polar,asdf/transform,1,2)
MAKE_TEST(Bonne_Equal_Area,asdf/transform,1,3)
MAKE_TEST(PolyConic,asdf/transform,1,2)
MAKE_TEST(Hammer_Aitoff,asdf/transform,1,2)
MAKE_TEST(Molleweide,asdf/transform,1,2)
MAKE_TEST(Parabolic,asdf/transform,1,2)
MAKE_TEST(Sanson_Flamsteed,asdf/transform,1,2)
MAKE_TEST(Cobe_Quad_Spherical_Cube,asdf/transform,1,2)
MAKE_TEST(Quad_Spherical_Cube,asdf/transform,1,2)
MAKE_TEST(Tangential_Spherical_Cube,asdf/transform,1,2)
MAKE_TEST(Airy,asdf/transform,1,2)
MAKE_TEST(Gnomonic,asdf/transform,1,2)
MAKE_TEST(Slant_Orthographic,asdf/transform,1,2)
MAKE_TEST(Slant_Zenithal_Perspective,asdf/transform,1,2)
MAKE_TEST(Stereographic,asdf/transform,1,2)
MAKE_TEST(Zenithal_Equal_Area,asdf/transform,1,2)
MAKE_TEST(Zenithal_Equidistant,asdf/transform,1,2)
MAKE_TEST(Zenithal_Perspective,asdf/transform,1,3)
MAKE_TEST(Fk4,astropy/coordinates/frames,1,0)
MAKE_TEST(Fk4Noeterms,astropy/coordinates/frames,1,0)
MAKE_TEST(Fk5,astropy/coordinates/frames,1,0)
MAKE_TEST(Ecliptic,astropy/coordinates/frames,1,0)
MAKE_TEST(Altaz,astropy/coordinates/frames,1,0)
MAKE_TEST(Galactic,astropy/coordinates/frames,1,0)
MAKE_TEST(SuperGalactic,astropy/coordinates/frames,1,0)
MAKE_TEST(Icrs,astropy/coordinates/frames,1,1)
MAKE_TEST(Time,asdf/time,1,1)
MAKE_TEST(EarthLocation,astropy/coordinates/earthlocation,1,0)
MAKE_TEST(Quantity,asdf/unit,1,1)
MAKE_TEST(NDArray,asdf/core,1,0)
#undef MAKE_TEST



/* Concrete classes with one or more subclasses. */
#define MAKE_TEST(Class,Schema,Major,Minor,Subtest) \
static int IsA##Class( const char *class, int *status ){ \
\
/* Local Variables: */ \
   const char *pversion; \
   int major; \
   int minor; \
   int patch; \
   int result; \
\
/* Check inherited status and check that a string was supplied. */ \
   if( !astOK || !class ) return 0; \
\
/* See if the supplied class name is the name of a sub-class. */ \
   if( Subtest ) { \
      result = 1; \
\
/* Otherwise, get a pointer to the start of the version string in the supplied class \
   name. */ \
   } else { \
\
/* Otherwise, get a pointer to the start of the version string in the supplied class \
   name. */ \
      pversion = strchr( class, '-' ); \
      if( pversion ) { \
\
/* Compare the class string with the class name, excluding the version number. */ \
         result = strncasecmp( class, #Schema "/" #Class, pversion - class )?0:1; \
\
/* If they match, parse the version string into 3 integers. */ \
         if( result ){ \
            if( 3 == astSscanf( pversion, "-%d.%d.%d", &major, &minor, &patch ) ) { \
\
/* Check the major and minor version numbers can be handled by this module. */ \
               if( major != Major ){ \
                  astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) " \
                            "unsupported major version number %d (should " \
                            "be %d).", status, class, major, Major ); \
               } else if( minor < Minor ){ \
                  astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) " \
                            "unsupported minor version number %d (should be " \
                            "at least %d).", status, class, minor, Minor ); \
               } \
\
            } else { \
               astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) has " \
                         "unexpected version number format.", status, class ); \
            } \
         } \
      } else { \
         astError( AST__BASDF, "astRead(YamlChan): ASDF class (%s) has no " \
                   "version number.", status, class ); \
      } \
   } \
\
   return result; \
}



MAKE_TEST(Frame,gwcs,1,0,
          IsACelestial_Frame(class,status)||
          IsAFrame2d(class,status))
MAKE_TEST(Baseframe,astropy/coordinates/frames,1,0,
          IsAFk4(class,status)||
          IsAFk4Noeterms(class,status)||
          IsAFk5(class,status)||
          IsAEcliptic(class,status)||
          IsAAltaz(class,status)||
          IsAGalactic(class,status)||
          IsASuperGalactic(class,status)||
          IsAIcrs(class,status))
#undef MAKE_TEST




/* Abstract classes with one or more subclasses. */

static int IsATransform( const char *class, int *status ){
   return IsAIdentity( class, status ) ||
          IsAScale( class, status ) ||
          IsAMultiplyScale( class, status ) ||
          IsARemap_Axes( class, status ) ||
          IsAShift( class, status ) ||
          IsACompose( class, status ) ||
          IsAConcatenate( class, status ) ||
          IsAConstant( class, status ) ||
          IsAFix_Inputs( class, status ) ||
          IsAAffine( class, status ) ||
          IsARotate2d( class, status ) ||
          IsARotate_Sequence_3d( class, status ) ||
          IsARotate3d( class, status ) ||
          IsALinear1d( class, status ) ||
          IsAOrtho_Polynomial( class, status ) ||
          IsAPlanar2d( class, status ) ||
          IsAPolynomial( class, status ) ||
          IsASkyProjection( class, status );
}

static int IsASkyProjection( const char *class, int *status ){
   return IsAConic( class, status ) ||
          IsACylindrical( class, status ) ||
          IsAPseudoConic( class, status ) ||
          IsAPseudoCylindrical( class, status ) ||
          IsAQuadCube( class, status ) ||
          IsAZenithal( class, status );
}

static int IsAConic( const char *class, int *status ){
   return IsAConic_Equal_Area( class, status ) ||
          IsAConic_Equidistant( class, status ) ||
          IsAConic_Orthomorphic( class, status ) ||
          IsAConic_Perspective( class, status );
}

static int IsACylindrical( const char *class, int *status ){
   return IsACylindrical_Equal_Area( class, status ) ||
          IsACylindrical_Perspective( class, status ) ||
          IsAMercator( class, status ) ||
          IsAPlate_Carree( class, status );
}

static int IsAPseudoConic(  const char *class, int *status ){
   return IsABonne_Equal_Area( class, status ) ||
          IsAPolyConic( class, status );
}

static int IsAPseudoCylindrical(  const char *class, int *status ){
   return IsAHammer_Aitoff( class, status ) ||
          IsAMolleweide( class, status ) ||
          IsAParabolic( class, status ) ||
          IsASanson_Flamsteed( class, status );
}

static int IsAQuadCube(  const char *class, int *status ){
   return IsACobe_Quad_Spherical_Cube( class, status ) ||
          IsAQuad_Spherical_Cube( class, status ) ||
          IsATangential_Spherical_Cube( class, status );
}

static int IsAZenithal(  const char *class, int *status ){
   return IsAAiry( class, status ) ||
          IsAGnomonic( class, status ) ||
          IsASlant_Orthographic( class, status ) ||
          IsASlant_Zenithal_Perspective( class, status ) ||
          IsAStereographic( class, status ) ||
          IsAZenithal_Equal_Area( class, status ) ||
          IsAZenithal_Equidistant( class, status ) ||
          IsAZenithal_Perspective( class, status );
}

static AstKeyMap *IsAsdfTransform( AstYamlChan *this, AstCmpMap *map,
                                   AstObject *mapinv, const char *name,
                                   AstCmpMap **newmap, int *status ){
/*
*  Name:
*     IsAsdfTransform

*  Purpose:
*     Check if a CmpMap is equivalent to an atomic ASDF transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *IsAsdfTransform( AstYamlChan *this, AstCmpMap *map,
*                                 AstObject *mapinv, const char *name,
*                                 AstCmpMap **newmap, int *status )

*  Description:
*     This function checks the supplied CmpMap to see if it is equivalent
*     to a single atomic ASDF transform. For instance, some series
*     combinations of (SphMap,MatrixMap,SphMap) are equivalent to an ASDF
*     rotate3d. If the CmpMap is equivalent to an ASDF transform, a KeyMap
*     is returned as the function value holding the properties of the transform.
*
*     If the CmpMap is not itself equivalent to an ASDF transform but
*     contains a sequence of component Mappings that is, then the CmpMap
*     is re-structured to ensure that the sequence is contained in a single
*     embedded CmpMap (which will eventually be written out using
*     WriteCmpMap) and the properties of the equivalent ASDF transform
*     are stored in a KeyMap associated with the CmpMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        A pointer to the CmpMap that is to be checked.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     newmap
*        Address at which to return a pointer to the restructured CmpMap.
*        A clone of the supplied "map" pointer is returned if the CmpMap
*        does not need to be restructured.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the equivalent ASDF transform, or NULL if the
*     supplied CmpMap was not equivalent to a single atomic ASDF transform.

*  Notes:
*     - NULL will be returned if this function is invoked with the AST
*     error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstCmpMap *tmp;
   AstKeyMap *ret;
   AstMapping *new;
   AstMapping **map_list;
   int *invert_list;
   int changed1;
   int changed2;
   int imap;
   int nmap;
   int old_inv0;
   int old_inv1;
   int series;
   void *proxy;

/* Initialise returned values. */
   ret = NULL;
   *newmap = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Clone the supplied CmpMap pointer. */
   *newmap = astClone( map );

/* If the supplied CmpMap has already been checked and is not equivalent
   to a single ASDF transform, return immediately. The "proxy" pointer
   provided by the AstObject class is subverted here to provide an
   indication of whether the CmpMap has been checked. If the proxy pointer
   associated with the supplied CmpMap is NULL (the default), then it has
   not previously been checked. If the proxy pointer is equal to the value
   of macro NOTASDF, then it has been checked and found not to be equivalent
   to an ASDF transform. If the proxy pointer has any other value, the
   CmpMap has been checked and has been found to be equivalent to an ASDF
   transform. The proxy pointer value will then be a pointer to a KeyMap
   holding the properties of the equivalent ASDF transform. */
   proxy = astGetProxy( map );
   if( proxy == NOTASDF ) {
      return ret;

/* If the supplied CmpMap has already been checked and is equivalent
   to a single ASDF transform, write out the equivalent ASDF transform
   and return. This annulls the KeyMap pointer. */
   } else if( proxy ){
      ret = WriteProxy( this, (AstMapping *) map, mapinv, name, status );

/* If the supplied CmpMap has not been checked, we check it now. */
   } else {

/* Decompose the supplied CmpMap into a sequence of Mappings to be applied
   in series or parallel, as appropriate, and an associated list of Invert
   flags. */
      series = map->series;
      nmap = 0;
      map_list = NULL;
      invert_list = NULL;
      astMapList( (AstMapping *) map, series, astGetInvert( map ),
                  &nmap, &map_list, &invert_list );

/* Now search the list for sequences that match an equivalent ASDF
   transform. Currently, the only two we check for are affine and rotate3d.
   If no matching sequence is found, 0 will be returned and the list will be
   left unchanged. If one or more matching sequences are found, 1 will be
   returned  and the list will be changed so that each whole sequence is
   contained in a single element of the list. Each such element will be
   a CmpMap and its proxy pointer will point to a KeyMap containing the
   properties of the equivalent ASDF transform. */
      changed1 = FindRotate3d( series, &nmap, map_list, invert_list, status );
      changed2 = FindAffine( series, &nmap, map_list, invert_list, status );

/* If the list was changed, the supplied CmpMap either is, or contains,
   one or more sequences that are equivalent to an ASDF transform. */
      if( changed1 || changed2  ) {

/* If the list contains only a single element, it must be a CmpMap that
   is equivalent to an ASDF transform. So write it out. */
         if( nmap == 1 ) {
            ret = WriteProxy( this, map_list[ 0 ], mapinv, name, status );

/* Annul the Mapping */
            map_list[ 0 ] = astAnnul( map_list[ 0 ] );

/* If the list contains more than one element, we need to construct a new
   CmpMap from the list and return it in place of the supplied CmpMap. */
         } else {

/* Save the original values of the Invert attribute in the first two
   Mappings, then set them to the required values. */
            old_inv0 = astGetInvert( map_list[ 0 ] );
            astSetInvert( map_list[ 0 ], invert_list[ 0 ] );
            old_inv1 = astGetInvert( map_list[ 1 ] );
            astSetInvert( map_list[ 1 ], invert_list[ 1 ] );

/* Combine the first two Mappings. */
            new = (AstMapping *) astCmpMap( map_list[ 0 ], map_list[ 1 ],
                                            series, " ", status );

/* Restore their original Invert values. */
            astSetInvert( map_list[ 0 ], old_inv0 );
            astSetInvert( map_list[ 1 ], old_inv1 );

/* Annul the pointers since we do not need them any more. */
            map_list[ 0 ] = astAnnul( map_list[ 0 ] );
            map_list[ 1 ] = astAnnul( map_list[ 1 ] );

/* Indicate that the new CmpMap has been checked and so does not need to
   be checked again. */
            astSetProxy( new, NOTASDF );

/* Loop round any remaining Mappings in the list. */
            for( imap = 2; imap < nmap; imap++ ) {

/* Save the original value of the Invert attribute in the current list
   Mapping then set it to the required value. */
               old_inv0 = astGetInvert( map_list[ imap ] );
               astSetInvert( map_list[ imap ], invert_list[ imap ] );

/* Combine the current list Mapping with the CmpMap containing the
   previous list Mappings. */
               tmp = astCmpMap( new, map_list[ imap ], series, " ",
                                status );
               (void *) astAnnul( new );
               new = (AstMapping *) tmp;

/* Restore the original Invert value. */
               astSetInvert( map_list[ imap ], old_inv0 );

/* Annul the pointer since we do not need it any more. */
               map_list[ imap ] = astAnnul( map_list[ imap ] );

/* Indicate that the new CmpMap has been checked and so does not need to
   be checked again. */
               astSetProxy( new, NOTASDF );
            }

/* Annul the cloned CmpMap pointer and return the new one. */
            (void *) astAnnul( *newmap );
            *newmap = (AstCmpMap *) new;
         }

/* If no matching sequences of Mappings were found inside the supplied
   CmpMap, indicate that all the CmpMaps inside the supplied CmpMap have
   been checked and so do not need to be checked again. Then annul the
   Mapping pointers.  */
      } else {
         SetNotAsdf( map, status );
         for( imap = 0; imap < nmap; imap++ ) {
            map_list[ imap ] = astAnnul( map_list[ imap ] );
         }
      }

/* Free resources. */
      map_list = astFree( map_list );
      invert_list = astFree( invert_list );
   }

/* Return the answer. */
   return ret;
}

static AstMapping *IsPolyMap( AstMapping *map, int *status ){
/*
*  Name:
*     IsPolyMap

*  Purpose:
*     See if a supplied AST Mapping can be converted to a single PolyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *IsPolyMap( AstMapping *map, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function examines the supplied AST Mapping to see if it has
*     the form used by the WritePolyMap function to represent a PolyMap.
*     If so, it returns a new pointer to the equivalent PolyMap. Otherwise
*     it returns a clone of the supplied pointer. In all cases, the
*     supplied pointer is annulled.

*  Parameters:
*     map
*        Pointer to the AST Mapping to be examined. The supplied pointer
*        is annulled before exit.
*     status
*        Pointer to the global status

*  Returned Value:
*     Pointer to the equivalent PolyMap, or a clone of the supplied
*     pointer. NULL is returned if an error occurs.

*/

/* Local Variables; */
   AstMapping **map_list;
   AstMapping *result;
   AstMapping *map2;
   AstMapping *map1;
   double *coeffs;
   double *p;
   double lbnd[ MXDIM ];
   double this_ubnd[ MXDIM ];
   double this_lbnd[ MXDIM ];
   double ubnd[ MXDIM ];
   int *invert_list;
   int *outperm;
   int *pi;
   int i;
   int invert1;
   int invert2;
   int ischeby;
   int j;
   int ncoeff;
   int ncoeff_this;
   int nel;
   int nin_perm;
   int nmap;
   int nout_perm;
   int ok;
   int oldinvert2;
   int oldinvert;
   int series;

/* Initialise */
   result = NULL;

/* Check the inherited status */
   if( !astOK ) return result;

/* The supplied Mapping must be a CmpMap. */
   if( astIsACmpMap( map ) ) {

/* Temporarily clear the Invert flag so that the forward transformation
   of the CmpMap is as it was when it was first constructed. */
      oldinvert = astGetInvert( map );
      astClearInvert( map );

/* Get the details of the CmpMap (the two component Mappings, invert flags
   and serial flag). */
      astDecompose( map, &map1, &map2, &series, &invert1, &invert2 );

/* The CmpMap must be a serial CmpMap. The first Mapping must be a
   PermMap and the second Mapping must be a CmpMap. */
      if( series && astIsAPermMap( map1 ) && astIsACmpMap( map2 ) ) {

/* Get the number of inputs and outputs for the PermMap, taking account
   of whether its Invert flag is currently set to the required value.
   Also get a copy of the PermMaps outperm array. */
         if( invert1 == astGetInvert( map1 ) ){
            outperm = astGetOutPerm( map1 );
            nin_perm = astGetNin( map1 );
            nout_perm = astGetNout( map1 );
         } else {
            outperm = astGetInPerm( map1 );
            nin_perm = astGetNout( map1 );
            nout_perm = astGetNin( map1 );
         }

/* Expand the second Mapping (the CmpMap) into a list of component
   mappings to be applied in parallel. */
         nmap = 0;
         map_list = NULL;
         invert_list = NULL;
         astMapList( map2, 0, invert2, &nmap, &map_list, &invert_list );

/* There must be more than one parallel component mappings. Also, the PermMap
   must provide a set of "nin_perm" outputs for each component Mapping. */
         if( astOK && nmap > 1 && nout_perm == nin_perm*nmap ) {

/* Each component Mapping must be a PolyMap of the same type (base or
   Chebyshev) with one output and the same number of inputs as the PermMap.
   Also find the total number of coefficients used by the forward
   transformations of all PolyMaps. */
            ncoeff = 0;
            ok = 1;
            for( i = 0; i < nmap && ok; i++ ) {
               oldinvert2 = astGetInvert( map_list[ i ] );
               astSetInvert( map_list[ i ], invert_list[ i ] );

               ok = ( astIsAPolyMap( map_list[ i ] ) &&
                      astGetNout( map_list[ i ] ) == 1 &&
                      astGetNin( map_list[ i ] ) == nin_perm );

               if( i == 0 ){
                  ischeby = astIsAChebyMap( map_list[ i ] );
               } else if( ischeby && !astIsAChebyMap( map_list[ i ] ) ){
                  ok = 0;
               } else if( !ischeby && astIsAChebyMap( map_list[ i ] ) ){
                  ok = 0;
               }

               if( ok ) {
                  astPolyCoeffs( map_list[ i ], 1, 0, NULL, &ncoeff_this );
                  ncoeff += ncoeff_this;

/* if we are combining ChebyMaps, all domains should be the same but take
   the intersection of them in case tehre is any rounding error. */
                  if( ischeby ) {
                     if( i == 0 ) {
                        astChebyDomain(  map_list[ i ], 1, lbnd, ubnd );
                     } else {
                        astChebyDomain(  map_list[ i ], 1, this_lbnd, this_ubnd );
                        for( j = 0; j < nin_perm; j++ ) {
                           if( this_lbnd[ j ] > lbnd[ j ] ) lbnd[ j ] = this_lbnd[ j ];
                           if( this_ubnd[ j ] < ubnd[ j ] ) ubnd[ j ] = this_ubnd[ j ];
                        }
                     }
                  }
               }

               astSetInvert( map_list[ i ], oldinvert2 );
            }

/* The PermMap must create a copy of its inputs for each component
   Mapping. */
            pi = outperm;
            for( i = 0; i < nmap && ok; i++ ) {
               for( j = 0; j < nin_perm && ok; j++ ) {
                  if( *(pi++) != j ) ok = 0;
               }
            }

/* If all tests were passed, construct the equivalent PolyMap. */
            if( ok ) {

/* Allocate an array to store the array of forward coefficients for the
   full PolyMap */
               nel = ncoeff*( nin_perm + 2 );
               coeffs = astMalloc( nel*sizeof( *coeffs ) );
               if( astOK ) {

/* Loop round each component PolyMap, settings its invert flag
   temporarily to the required value. */
                  p = coeffs;
                  for( i = 0; i < nmap; i++ ) {
                     oldinvert2 = astGetInvert( map_list[ i ] );
                     astSetInvert( map_list[ i ], invert_list[ i ] );

/* Get the forward coefficients for this PolyMap, appending them to the end
   of the "coeffs" array. */
                     astPolyCoeffs( map_list[ i ], 1, nel, p, &ncoeff_this );

/* For each coeff, modify its output axis to refer to the index of the
   current component Mapping. */
                     for( j = 0; j < ncoeff_this; j++ ) {
                        p[ 1 + j*( 2 + nin_perm ) ] = i + 1;
                     }

/* Move on to the remaining part of the "coeffs" array. */
                     p += ncoeff_this*( 2 + nin_perm );
                     nel -= ncoeff_this*( 2 + nin_perm );

/* Re-instate the original invert flag. */
                     astSetInvert( map_list[ i ], oldinvert2 );
                  }
               }

/* Construct the PolyMap. */
               if( ischeby ){
                  result = (AstMapping *) astChebyMap( nin_perm, nmap, ncoeff,
                                                       coeffs, 0, NULL, lbnd, ubnd,
                                                       NULL, NULL, " ", status );
               } else {
                  result = (AstMapping *) astPolyMap( nin_perm, nmap, ncoeff,
                                                      coeffs, 0, NULL, " ",
                                                      status );
               }

/* Free resources. */
               coeffs = astFree( coeffs );
            }
         }

/* Free resources. */
         outperm = astFree( outperm );
         if( map_list ) {
            for( i = 0; i < nmap; i++ ) {
               map_list[ i ] = astAnnul( map_list[ i ] );
            }
            map_list = astFree( map_list );
            invert_list = astFree( invert_list );
         }
      }

/* Free resources. */
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );

/* Re-instate the original invert flag. */
      if( oldinvert ) astInvert( map );
   }

/* If the supplied Mapping was not equivalent to a PolyMap, return a
   clone of the supplied pointer. */
   if( astOK ) {
      if( !result ) result = astClone( map );

/* Annul the supplied pointer. */
      map = astAnnul( map );
   }

/* Return the result. */
   return result;
}

static void LibYamlEmitterError( yaml_emitter_t *emitter, int *status ){
/*
*  Name:
*     LibYamlEmitterError

*  Purpose:
*     Emit AST error messages describing the most recent libyaml error.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void LibYamlEmitterError( yaml_emitter_t *emitter, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function reports a set of error messages (using astError) that
*     describe the most recent libyaml error.

*  Parameters:
*     emitter
*        Pointer to the libyaml emitter.
*     status
*        Pointer to the global status

*/
   if( emitter ) {
      astError( *status, "libyaml says '%s'", status, emitter->problem );
   }
}

static void LibYamlParserError( yaml_parser_t *parser, int *status ){
/*
*  Name:
*     LibYamlParserError

*  Purpose:
*     Emit AST error messages describing the most recent libyaml error.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void LibYamlParserError( yaml_parser_t *parser, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function reports a set of error messages (using astError) that
*     describe the most recent libyaml error.

*  Parameters:
*     parser
*        Pointer to the libyaml parser.
*     status
*        Pointer to the global status

*/

   if( parser ) {
      astError( *status, "libyaml says '%s'", status, parser->problem );
      astError( *status, "near: '%s'", status, parser->context );
   }

}

static int LibYamlReader( void *data, yaml_char_t *buffer, size_t size,
                          size_t *size_read ){
/*
*  Name:
*     LibYamlReader

*  Purpose:
*     Called by libyaml to read a line of text from the source.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int LibYamlReader( void *data, yaml_char_t *buffer, size_t size,
                         size_t *size_read )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function is called by libyaml to read a line of text from the
*     source.

*  Parameters:
*     data
*        Pointer to the YamlChan.
*     buffer
*        A buffer in which to return the text read from the source.
*     size
*        The size of the buffer.
*     size_read
*        The actual number of bytes read from the source.

*  Returned Value:
*     On success, returns 1.  On failure, returns 0.  On EOF, "size_read"
*     is returned holding 0 and the returned function value is 1.

*/

/* Local Variables: */
   AstYamlChan * this;
   char *text;
   int *status;
   int result;

/* Initialise */
   result = 0;
   *size_read = 0;
   buffer[ 0 ] = 0;

/* Get the AST status pointer */
   status = astGetStatusPtr;

/* Check the status is good. */
   if( !astOK ) return result;

/* Get a pointer to the YamlChan */
   this = (AstYamlChan *) data;

/* Invoke the source function from the parent Channel class until we get
   a non-blank line of text. . */
   text = astGetNextText( this );
   while( astOK && text && strlen( text ) == 0 ) {
      text = astFree( text );
      text = astGetNextText( this );
   }

/* If successful... */
   if( astOK ) {
      result = 1;

/* If there is any text to return... */
      if( text ) {

/* Check the text will fit in the supplied buffer. Report an error if
   not. Allow room for a newline character to ba appended to the end. */
         *size_read = strlen( text ) + 1;
         if( *size_read > size ) {
            result = 0;
            *size_read = 0;
            buffer[ 0 ] = 0;
            astError( AST__TRUNC, "astRead(yamlchan): Input text is too "
                      "long for the libyaml buffer:", status );
            astError( AST__TRUNC, "'%.50s'", status, text );

/* If so, copy the text into the buffer. */
         } else {
            memcpy( buffer, text, *size_read );

/* Append a newline character (stripped by astGetNextText but required by
   libyaml). */
            buffer[ *size_read - 1 ] = '\n';
         }
      }
   }

   text = astFree( text );

/* If required echo the yaml as it is read. */
   if( astGetVerboseRead(this) ) printf( "%.*s", (int) *size_read, buffer );

   return result;
}

static int LibYamlWriter( void *data, yaml_char_t *buffer,
                          long unsigned int size ){
/*
*  Name:
*     LibYamlWriter

*  Purpose:
*     Called by libyaml to write a line of text to the sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int LibYamlWriter( void *data, yaml_char_t *buffer,
*                        long unsigned int size )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function is called by libyaml to write a line of text to the
*     sink.

*  Parameters:
*     data
*        Pointer to the YamlChan.
*     buffer
*        A buffer containg the text to write to the sink.
*     size
*        The number of characters to write.

*  Returned Value:
*     On success, returns 1.  On failure, returns 0.

*/

/* Local Variables: */
   AstYamlChan * this;
   char *line;
   char *pb;
   char *pend;
   char *pstart;
   int *status;
   int nc;

/* Get the AST status pointer */
   status = astGetStatusPtr;

/* Check the status is good. */
   if( !astOK ) return 0;

/* Get a pointer to the YamlChan */
   this = (AstYamlChan *) data;

/* Get a pointer to the first character beyond the end of the buffer. */
   pend = (char *) buffer + size;

/* Initialise a pointer to the next buffer character to write out. */
   pb  = (char *) buffer;

/* Initialise a pointer to the first character in the next line to be
   written out. */
   pstart = pb;

/* Loop round all buffer characters. */
   line = NULL;
   pb--;
   while( ++pb <= pend ){

/* If the current buffer character is a newline, or we have reached the
   end of the buffer, get a null terminated copy of the line that ends
   here, then write it out using astPutNextText. */
      if( pb == pend || *pb == '\n' ){
         nc = pb - pstart;
         line = astStore( line, pstart, nc + 1 );
         if( astOK ) line[ nc ] = 0;
         astPutNextText( this, line );

/* Indicate any subsequent line starts at the next character. */
         pstart = pb + 1;
      }
   }

/* Free the line copy. */
   line = astFree( line );

   return astOK ? 1 : 0;
}

static AstKeyMap *MergeAsdf( AstYamlChan *this, AstKeyMap *km,
                             int r2d, int before, int *status ){
/*
*  Name:
*     MergeAsdf

*  Purpose:
*     Merge a deg:rad conversion into a neighbouring ASDF transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstKeyMap *MergeAsdf( AstYamlChan *this, AstKeyMap *km,
*                           int r2d, int before, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function attempts to merge an ASDF transform representing a
*     conversion between degrees and radians into a neighbouring ASDF
*     transform. The two transforms are assumed to be applied in series.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to a KeyMap holding a description of an arbitrary ASDF
*        transform.
*     r2d
*        If non-zero, the adjoining transform is a scale that converts
*        from radians to degrees when ued in the forward direction.
*        Otherwise, it converts from degrees to radians.
*     before
*        If non-zero, the degrees/radians conversion comes before
*        the transform given by "km". Otherwise, it comes after the
*        transform given by "km".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     If the transforms could be merged, a pointer to a new KeyMap
*     containing the ASDF properties of the merged transform is returned.
*     Otherwise, NULL is returned. NULL is also returned if an error
*     occurs or if a null pointer is supplied for "km".
*/

/* Local Variables: */
   AstKeyMap *inv;
   AstKeyMap *new0;
   AstKeyMap *new1;
   AstKeyMap *new;
   AstKeyMap *ret;
   AstKeyMap *subkm;
   AstKeyMap *subkm2;
   AstKeyMap *tr[ 2 ];
   char rowkey[30];
   const char *name;
   const char *tag;
   double dval;
   double row[ MXDIM ];
   double trans[ MXDIM ];
   int i;
   int irow;
   int nel;
   int ok;

/* Initialise */
   ret = NULL;

/* Check inherited status */
   if( !astOK || !km ) return ret;

/* Get the YAML tag describing the ASDF object in the supplied KeyMap. */
   if( !astMapGet0C( km, "YAMLTAG", &tag ) && astOK ) {
      if( astOK ) {
         astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF object has "
                   "no tag in MergeAsdf (internal AST programming error).",
                   status );
      }

/* If the adjoining transform is a concatenate, we split it up into its
   two components, and apply this function to each component. */
   } else if( strstr( tag, "/concatenate" ) ){

/* If the supplied transform has a custom inverse, get a pointer to it
   and attempt to merge it with the (inverted) rad:deg conversion. */
      ok = 1;
      inv = NULL;
      if( astMapGet0A( km, "inverse", &inv ) ){
         new = MergeAsdf( this, inv, !r2d, !before, status );
         inv = astAnnul( inv );

/* If it was merged succesfully, use the merged inverse in the
   returned transform. */
         if( new ) {
            inv = new;

/* If the custom inverse could not be merged, we cannot merge the
   transform. */
         } else {
            ok = 0;
         }
      }

/* Only proceed if the custom inverse was merged succesfully or there was
   no custom inverse. */
      if( ok ) {

/* Get pointers to the KeyMaps holding the two component transforms
   inside the concatenate. */
         if( !astMapGet1A( km, "forward", 2, &nel, tr ) ) {
            if( astOK ) {
               astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF concatenate "
                         "has no 'forward' component in MergeAsdf (internal AST "
                         "programming error).", status );
            }
         } else if( nel != 2 ) {
            if( astOK ) {
               astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF concatenate "
                         "has unxepcted number (%d) of forward transforms in "
                         "MergeAsdf (internal AST programming error).", status, nel );
            }
         }

/* Call this function recursively on each one. */
         new0 = MergeAsdf( this, tr[ 0 ], r2d, before, status );
         new1 = MergeAsdf( this, tr[ 1 ], r2d, before, status );

/* If both were merged, construct a new concatenate containing the merged
   transforms. */
         if( new0 && new1 ) {

/* Get the name from the supplied concatenate. */
            if( !astMapGet0C( km, "name", &name ) ) name = NULL;

/* Create the new concatenate. */
            ret = WriteAsdfConcatenate( this, (AstObject *) new0,
                                        (AstObject *) new1,
                                        (AstObject *) inv, name, status );
         }

/* Free resoures. */
         if( new0 ) new0 = astAnnul( new0 );
         if( new1 ) new1 = astAnnul( new1 );
      }

/* Free resoures. */
      if( inv ) inv = astAnnul( inv );

/* If the adjoining transform is a scale, we can merge. */
   } else if( strstr( tag, "/scale" ) ){

/* Create a deep copy of the supplied transform to return. */
      ret = astCopy( km );

/* Get the original scale factor. */
      astMapGet0D( ret, "factor", &dval );

/* Multiply it by the conversion factor. */
      dval *= r2d ? AST__DR2D : AST__DD2R;

/* Store the new scale factor. */
      astMapPut0D( ret, "factor", dval, NULL );

/* If the adjoining transform is an affine, we can merge. */
   } else if( strstr( tag, "/affine" ) ){

/* Create a deep copy of the supplied transform to return. */
      ret = astCopy( km );

/* Get the factor by which the affine inputs or outputs are scaled. */
      dval = r2d ? AST__DR2D : AST__DD2R;

/* If the scaling comes after the affine, we need to scale the translation
   vector as well as the matrix. */
      if( !before ){

/* Get the NdArray holding the translation. */
         astMapGet0A( ret, "translation", &subkm );

/* Get the "data" component (a 1D vector of double) from the NdArray. */
         astMapGet1D( subkm, "data", MXDIM, &nel, trans );

/* Scale all the translation values using the scaling factor and store
   back in the NdArray. */
         for( i = 0; i < nel; i++ ) trans[ i ] *= dval;
         astMapPut1D( subkm, "data", nel, trans, NULL );

/* Free resources */
         subkm = astAnnul( subkm );
      }

/* Get the NdArray holding the matrix. */
      astMapGet0A( ret, "matrix", &subkm );

/* Get the "data" component (a nested KeyMap) from the NdArray. */
      astMapGet0A( subkm, "data", &subkm2 );

/* Loop round rows of the matrix. */
      for( irow = 0; irow < MXDIM; irow++ ) {

/* Get the key for this row. */
         sprintf( rowkey, "data_%d", irow );

/* Attempt to get the row from the matrix NdArray. */
         if( astMapGet1D( subkm2, rowkey, MXDIM, &nel, row ) ){

/* If it exists, scale all its values and store back in the returned
   affine transform. */
            for( i = 0; i < nel; i++ ) row[ i ] *= dval;
            astMapPut1D( subkm2, rowkey, nel, row, NULL );

/* If it does not exist, leave the loop. */
         } else {
            break;
         }
      }

/* Free resources */
      subkm2 = astAnnul( subkm2 );
      subkm = astAnnul( subkm );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static void PutIntoKeyMap( AstKeyMap *km, const char *id, int type,
                           void *data, int *status ){
/*
*  Name:
*     PutIntoKeyMap

*  Purpose:
*     Put an item into a KeyMap

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void PutIntoKeyMap( AstKeyMap *km, const char *id, int type,
*                         void *data, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function puts a value into  KeyMap. If the supplied key
*     already exists in the KeyMap, this function decided where to append
*     the new value to the existing vector entry, or to create a new
*     entry with a modified name.

*  Parameters:
*     km
*        Pointer to the KeyMap.
*     id
*        The key to associated with the new entry.
*     type
*        The data type of the new entry.
*     data
*        Pointer to the data for the new entry.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   char buf[ 100 ];
   const char *key;
   const char *pkey;
   int index;
   int keydiff;
   size_t idlen;
   size_t plen;

/* Check inherited status */
   if( !astOK ) return;

/* Get the key associated with the previous entry added to the KeyMap. If
   found, compare to the supplied key. If not found, assume the new key
   is different to the old key. */
   if( astMapGet0C( km, "PREVIOUS_KEY", &pkey ) ){
      keydiff = strcmp( pkey, id );

/* If the supplied id is different to the previously added key, see if
   the previously added key was a modified form of the supplied id
   (modified like "%123%" as done below). */
      if( keydiff ) {
         plen = strlen( pkey );
         idlen = strlen( id );
         if( plen > idlen+2 && pkey[ idlen ] == '%' && pkey[ plen - 1 ] == '%' ) {
            keydiff = 0;
         }
      }
   } else {
      keydiff = 1;
   }

/* If the key associated with the new key is not the same as the previous key
   added to the KeyMap, assume we are not reading a yaml sequence. In
   which case the new value is stored as a separate entry in the KeyMap. */
   if( keydiff ) {

/* If an entry already exists in the KeyMap with the supplied Key, then
   modify the supplied id so that the new value will not overwrite the old
   value. For instance if "Fred" already exists in the KeyMap, try storing
   it as "Fred%1%" instead, etc. */
      key = id;
      index = 1;
      while( astMapHasKey( km, key ) ) {
         sprintf( buf, "%s%%%d%%", id, index++ );
         key = buf;
      }

/* Store the new value with the key determined above. */
      if( type == AST__OBJECTTYPE ){
         astMapPut0A( km, key, (AstObject *) data, NULL );
      } else if( type == AST__INTTYPE ){
         astMapPut0I( km, key, *((int *) data), NULL );
      } else if( type == AST__DOUBLETYPE ){
         astMapPut0D( km, key, *((double *) data), NULL );
      } else if( type == AST__STRINGTYPE ){
         astMapPut0C( km, key, (const char *) data, NULL );
      } else if( type == AST__FLOATTYPE ){
         astMapPut0F( km, key, *((float *) data), NULL );
      } else if( type == AST__POINTERTYPE ){
         astMapPut0P( km, key, data, NULL );
      } else if( type == AST__SINTTYPE ){
         astMapPut0S( km, key, *((short int *) data), NULL );
      } else if( type == AST__BYTETYPE ){
         astMapPut0B( km, key, *((unsigned char *) data), NULL );
      } else if( type == AST__KINTTYPE ){
         astMapPut0K( km, key, *((int64_t *) data), NULL );
      } else if( astOK ){
         astError( AST__INTER, "astRead(YamlChan): PutIntoKeyMap does not "
                   "support data type %d (internal AST programming error).",
                   status, type );
      }

/* Store the new key in the KeyMap so that it can be used next time this
   function is called. */
      astMapPut0C( km, "PREVIOUS_KEY", key, NULL );

/* If the new value has the same id as the previously added value, assume
   we are reading a yaml sequence and so append the new value to the end of
   the vector entry for the supplied key. */
   } else {
      if( type == AST__OBJECTTYPE ){
         astMapPutElemA( km, pkey, -1, (AstObject *) data );
      } else if( type == AST__INTTYPE ){
         astMapPutElemI( km, pkey, -1, *((int *) data) );
      } else if( type == AST__DOUBLETYPE ){
         astMapPutElemD( km, pkey, -1, *((double *) data) );
      } else if( type == AST__STRINGTYPE ){
         astMapPutElemC( km, pkey, -1, (const char *) data );
      } else if( type == AST__FLOATTYPE ){
         astMapPutElemF( km, pkey, -1, *((float *) data) );
      } else if( type == AST__POINTERTYPE ){
         astMapPutElemP( km, pkey, -1, data );
      } else if( type == AST__SINTTYPE ){
         astMapPutElemS( km, pkey, -1, *((short int *) data) );
      } else if( type == AST__BYTETYPE ){
         astMapPutElemB( km, pkey, -1, *((unsigned char *) data) );
      } else if( type == AST__KINTTYPE ){
         astMapPutElemK( km, pkey, -1, *((int64_t *) data) );
      } else if( astOK ){
         astError( AST__INTER, "astRead(YamlChan): PutIntoKeyMap does not "
                   "support data type %d (internal AST programming error).",
                   status, type );
      }
   }
}



static AstMapping *ReadAffine( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadAffine

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF affine transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadAffine( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF affine.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstCmpMap *cm;
   AstKeyMap *subkm;
   AstMapping *result;
   AstMatrixMap *mm;
   AstShiftMap *sm;
   double *mat_ptr;
   double *tra_ptr;
   double matrix[ MXDIM*MXDIM ];
   double trans[ MXDIM ];
   int dims[ MXDIM ];
   int ndim;
   int type;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF affine. */
   if( !IsA( km, "affine", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF affine but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* The matrix array may be stored in a vector-valued Quantity or in an
   NDarray or in an array of arrays. None of these are primitive and so
   the matrix will be stored in a nested KeyMap. */
      subkm = Get0A( km, "matrix", 0, NULL, NULL, status );

/* First deal with matrices stored as a Quantity. Ignore the units. */
      mat_ptr = NULL;
      if( IsA( subkm, "quantity", status ) ){
         mat_ptr = GetQuantityV( this, km, "matrix", NULL, 0, 2, &ndim, dims,
                                 status );

/* Now deal with matrices stored as an ndarray. */
      } else if( IsA( subkm, "ndarray", status ) ){
         mat_ptr = ReadNDArray( this, subkm, 2, &ndim, dims, status );

/* Now deal with matrices stored as a list of lists. */
      } else {
         mat_ptr = ReadSequence( this, subkm, "matrix", 2, &ndim, dims, status );
      }

/* Report an error if the matrix is not 2D or square. */
      if( ndim != 2 && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): The array inside an "
                   "ASDF affine transform has %d dimensions (must be 2).",
                   status, ndim );
      } else if( dims[ 0 ] != dims[ 1 ] && astOK ){
        astError( AST__BYAML, "astRead(YamlChan): The matrix inside an ASDF "
                   "affine transform has dimensions (%d,%d) - matrices must "
                   "be square.", status, dims[0], dims[1] );
      }

/* Create the MatrixMap. */
      mm = astMatrixMap( dims[ 0 ], dims[ 1 ], 0, mat_ptr, " ", status );

/* Free resources. */
      subkm = astAnnul( subkm );
      if( mat_ptr != matrix ) mat_ptr = astFree( mat_ptr );

/* The translation vector may be stored in a vector-valued Quantity or in
   an NDarray or in an array. None of these are primitive and so
   the matrix will be stored in a nested KeyMap. */
      type = astMapType( km, "translation" );
      if( type == AST__DOUBLETYPE ){
         Get1D( km, "translation", 0, MXDIM, trans, dims, status );
         sm = astShiftMap( dims[ 0 ], trans, " ", status );

      } else {
         subkm = Get0A( km, "translation", 0, NULL, NULL, status );

/* First deal with translations stored as a Quantity. Ignore the units. */
         tra_ptr = NULL;
         if( IsA( subkm, "quantity", status ) ){
            tra_ptr = GetQuantityV( this, km, "translation", NULL, 0, 1,
                                    &ndim, dims, status );

/* Now deal with translations stored as an ndarray. */
         } else if( IsA( subkm, "ndarray", status ) ){
            tra_ptr = ReadNDArray( this, subkm, 1, &ndim, dims, status );

         } else if( astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): The translation inside "
                      "an ASDF affine transform is stored in an unsupported "
                      "way.", status );
         }

/* Create the ShiftMap */
         sm = astShiftMap( dims[ 0 ], tra_ptr, " ", status );

/* Free resources. */
         subkm = astAnnul( subkm );
         tra_ptr = astFree( tra_ptr );
      }

/* Combine the translation and matrix in series, and simplify. */
      cm = astCmpMap( mm, sm, 1, " ", status );
      result = astSimplify( cm );

/* Free resources. */
      sm = astAnnul( sm );
      mm = astAnnul( mm );
      cm = astAnnul( cm );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'affine' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static int ReadBaseFrame( AstKeyMap *km, AstSkyFrame *frm, int *status ){
/*
*  Name:
*     ReadBaseFrame

*  Purpose:
*     Reads properties of an astropy coordinates baseframe (or any
*     subclass) from a supplied KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int ReadBaseFrame( AstKeyMap *km, AstSkyFrame *frm, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function reads proprties of an astropy coordinates baseframe,
*     or any subclass, from the supplied KeyMap  and stores corresponding
*     attribute values in a supplied AST Frame. See:
*
*     https://github.com/astropy/astropy/tree/master/astropy/io/misc/asdf/data/schemas/astropy.org/astropy/coordinates/frames
*
*     As of 19/5/2020 some (ecliptic, supergalactic, azel) do not yet have
*     schemas on the above page. These are defined by the classes at:
*
*     https://docs.astropy.org/en/latest/coordinates/index.html

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent a baseframe.
*     frm
*        An AST Frame in which tot store the attributes read from the
*        ASDF baseframe.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The integer identifier for the AST system corresponding to the
*     baseframe. AST__UNKNOWN is returned if there is no corresponding AST
*     system.
*/

/* Local Variables: */
   int result;
   AstKeyMap *subkm;
   AstKeyMap *attskm;

/* Initialise */
   result = AST__UNKNOWN;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent a
   baseframe. */
   if( !IsA( km, "baseframe", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap "
                "to hold a baseframe but got a %s", status,
                GetAsdfClass(km,status) );

/* Read the properties of the supplied baseframe */
   } else {

/* Get the integer identifier and textual name of the corresponding AST
   system. */
      if( IsA( km, "icrs", status ) ) {
         result = AST__ICRS;
      } else if( IsA( km, "fk4", status ) ) {
         result = AST__FK4;
      } else if( IsA( km, "fk4noeterms", status ) ) {
         result = AST__FK4_NO_E;
      } else if( IsA( km, "fk5", status ) ) {
         result = AST__FK5;
      } else if( IsA( km, "galactic", status ) ) {
         result = AST__GALACTIC;
      } else if( IsA( km, "supergalactic", status ) ) {
         result = AST__SUPERGALACTIC;
      } else if( IsA( km, "barycentricmeanecliptic", status ) ) {
         result = AST__ECLIPTIC;
      } else if( IsA( km, "altaz", status ) ) {
         result = AST__AZEL;
      } else if( astOK ) {
         astError( AST__BASDF, "astRead(YamlChan): The supplied ASDF "
                   "celestial_frame has an unsupported reference frame (%s).",
                   status, GetAsdfClass( km, status ) );
      }

/* Set the System attribute in the Frame */
      astSetSystem( frm, result );

/* Get a KeyMap holding the "frame_attributes" object. */
      attskm = Get0A( km, "frame_attributes", 0, NULL, NULL, status );
      if( attskm ) {

/* Set the observer location if appropriate. */
         if( result == AST__AZEL ){
            subkm = Get0A( attskm, "location", 0, NULL, "earthlocation", status );
            ReadEarthLocation( subkm, (AstFrame *) frm, status );
            subkm = astAnnul( subkm );
         }

/* Set the epoch if appropriate. */
         if( result == AST__FK4 || result == AST__FK4_NO_E ||
             result == AST__AZEL ){
            astSetEpoch( frm, GetTime( attskm, "obstime", (AstFrame *) frm,
                                        status ) );
         }

/* Set the equinox if appropriate. */
         if( result == AST__FK4 || result == AST__FK4_NO_E ||
             result == AST__FK5 || result == AST__ECLIPTIC ){
            astSetEquinox( frm, GetTime( attskm, "equinox", (AstFrame *) frm,
                                          status ) );
         }

/* Free the "frame_attributes" KeyMap. */
         attskm = astAnnul( attskm );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'base_frame' "
                "object.", status );
   }

   return result;
}

static AstSkyFrame *ReadCelestialFrame( AstKeyMap *km, AstMapping **map,
                                        int *status ){
/*
*  Name:
*     ReadCelestialFrame

*  Purpose:
*     Read an AST SkyFrame from a KeyMap holding an ASDF celestial_frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstSkyFrame *ReadCelestialFrame( AstKeyMap *km, AstMapping **map,
*                                      int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST SkyFrame from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF celestial_frame.
*     map
*        Address at which to return a pointer to a Mapping that
*        transforms axis values from the frame represented by the ASDF
*        celestial_frame, to the returned SkyFrame. For instance, a
*        ZoomMap that converts degrees to radians will be returned if
*        the celestial_frame axes are in units of degrees. A NULL pointer
*        will be returned if the celestial_frame and SkyFrame axes are
*        identical.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new SkyFrame.
*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstSkyFrame *result;
   char *axis_physical_types_buffer;
   char *unit_buffer;
   const char *axis_physical_types[ MXDIM ];
   const char *lat_ucd;
   const char *lon_ucd;
   const char *unit[ MXDIM ];
   double lscale;
   double scale[ 2 ];
   int do_scale;
   int iaxis;
   int system;
   int ndim;
   int perm[ 2 ] = { 2, 1 };
   int swap;
   int useMatrixMap;

/* Initialise */
   result = NULL;
   *map = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent a
   celestial_frame. */
   if( !IsA( km, "celestial_frame", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap "
                "to hold a frame but got a %s", status,
                GetAsdfClass(km,status) );

/* Create an AST SkyFrame with attributes read from the ASDF
   celestial_frame. */
   } else {

/* Create a default SkyFrame. */
      result = astSkyFrame( " ", status );

/* Get the reference_frame object (mandatory). Extract the required
   information from it. */
      subkm = Get0A( km, "reference_frame", 0, NULL, "baseframe",
                     status );
      system = ReadBaseFrame( subkm, result, status );
      subkm = astAnnul( subkm );

/* Get the units (mandatory), ensuring exactly two values are obtained. */
      unit_buffer = Get1C( km, "unit", 0, -2, unit, &ndim, status );

/* Create any Mapping needed to convert from the celestial_frame units to
   radians. */
      if( unit_buffer ) {

/* Get the scale factor for each axis, noting if any scaling is needed
   and whether the factor differs from axis to axis (in which case a
   MatrixMap must be used to do the scaling). Only "deg", "arcsec",
   "arcmin" and "rad" units are supported. */
         useMatrixMap = 0;
         do_scale = 0;
         lscale = 0.0;
         for( iaxis = 0; iaxis < 2; iaxis++ ) {
            if( !strcmp( unit[ iaxis ], "deg" ) ){
               scale[ iaxis ] = AST__DD2R;
               do_scale = 1;
            } else if( !strcmp( unit[ iaxis ], "arcmin" ) ){
               scale[ iaxis ] = AST__DD2R/60.0;
               do_scale = 1;
            } else if( !strcmp( unit[ iaxis ], "arcsec" ) ){
               scale[ iaxis ] = AST__DD2R/60.0;
               do_scale = 1;
            } else if( strcmp( unit[ iaxis ], "rad" ) && astOK ){
               astError( AST__BASDF, "astRead(YamlChan): The supplied ASDF "
                         "celestial_frame uses unsupported unit '%s' on "
                         "axis %d.", status, unit[ iaxis ], iaxis + 1 );
               do_scale = 0;
               break;
            }
            if( iaxis > 0 && scale[ iaxis ] != lscale ) useMatrixMap = 1;
            lscale = scale[ iaxis ];
         }

         if( do_scale ) {
            if( useMatrixMap ) {
               *map = (AstMapping *) astMatrixMap( 2, 2, 1, scale, " ", status );
            } else {
               *map = (AstMapping *) astZoomMap( ndim, scale[ 0 ], " ", status );
            }

/* We will be simplifying the total Mapping in order to merge the above
   scaling into the neighbouring Mappings. But we do not want to change
   the overall structire of the total Mapping. So we will be doing a
   "restricted simplification" - this is a simplification that only
   affects component Mappings that have been nominated for simplification
   by being flagged using astSetAllowSimplify. So flag the above mapping
   now to indicate that it can be merged durinfg the subsequent restricted
   simplification. */
             astSetAllowSimplify( *map );
         }
      }

/* Get the axis physical types (mandatory). */
      axis_physical_types_buffer = Get1C( km, "axis_physical_types", 0, -2,
                                          axis_physical_types, &ndim, status );

/* A SkyFrame has axis order (long,lat) by default. See if we need to swap
   them to match the supplied celestial_frame. Also check that the axis
   types and frame type are consistent. */
      swap = 0;
      if( axis_physical_types_buffer && astOK ) {
         GetUCD( system, &lon_ucd, &lat_ucd );
         if( !lon_ucd || !lat_ucd ) {
            astError( AST__BASDF, "astRead(YamlChan): The supplied ASDF "
                      "celestial_frame has an unsupported system (%s).",
                      status, astSystemString( result, system ) );
         } else {

/* Check that the axis types have the expected UCD strings. Set a flag
   indicating the SkyFrame axes need to be swapped if the UCD order is
   (lat,lon). */
            if( !strcmp( axis_physical_types[ 0 ], lat_ucd ) &&
                !strcmp( axis_physical_types[ 1 ], lon_ucd ) ){
               swap = 1;
            } else if( strcmp( axis_physical_types[ 0 ], lon_ucd ) ||
                       strcmp( axis_physical_types[ 1 ], lat_ucd ) ){
               if( astOK ) {
                  astError( AST__BASDF, "astRead(YamlChan): The supplied ASDF "
                            "%s celestial_frame unexpected axis types '%s' "
                            "and '%s' (expected %s and %s).", status,
                            astSystemString( result, system ), axis_physical_types[ 0 ],
                            axis_physical_types[ 1 ], lon_ucd, lat_ucd );
               }
            }
         }
      }

/* Swap the axes if required. */
      if( swap ) astPermAxes( result, perm );

/* Free resources. */
      unit_buffer = astFree( unit_buffer );
      axis_physical_types_buffer = astFree( axis_physical_types_buffer );
   }

/* Free the returned SkyFrame if an error has occurred. */
   if( !astOK ) result = astAnnul( result );

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'celestial_frame' "
                "object.", status );
   }

/* Return the Frame. */
   return result;
}

static AstMapping *ReadCompose( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadCompose

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF compose transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadCompose( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF compose.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstCmpMap *tmap1;
   AstKeyMap **map_kms;
   AstMapping *result;
   AstMapping *tmap0;
   int imap;
   int nmap;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF compose. */
   if( !IsA( km, "compose", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF compose but got a %s", status, GetAsdfClass(km,status) );

/* Get a sequence of Transforms to be applied in series. */
   } else {
      nmap = astMapLength( km, "forward" );
      map_kms = astMalloc( nmap*sizeof(*map_kms) );
      if( astOK ) {

/* Get a list of KeyMaps, each holding one of the transforms that are to be
   applied in series. */
         Get1A( km, "forward", 0, nmap, map_kms, &nmap, status );

/* Create an AST Mapping from the first transform. */
         result = ReadTransform( this, map_kms[ 0 ], status );
         map_kms[ 0 ] = astAnnul( map_kms[ 0 ] );

/* Loop round each remaining transform. */
         for( imap = 1; imap < nmap; imap++ ) {

/* Create an AST Mapping from the current transform. */
            tmap0 = ReadTransform( this, map_kms[ imap ], status );
            map_kms[ imap ] = astAnnul( map_kms[ imap ] );

/* Combine it in series with the previous Mappings. Then annull the
   original Mapping pointers and use the new CmpMap as the result. */
            tmap1 = astCmpMap( result, tmap0, 1, " ", status );
            result = astAnnul( result );
            tmap0 = astAnnul( tmap0 );
            result = (AstMapping *) tmap1;
         }

/* See if the Compose is equivalent to single PolyMap (see WritePolyMap).
   If so, "result" is replaced with a pointer to the equivalent PolyMap. */
         result = IsPolyMap( result, status );

/* Free resources. */
         map_kms = astFree( map_kms );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'compose' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadConcatenate( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadConcatenate

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF concatenate transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadConcatenate( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF concatenate.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstCmpMap *tmap1;
   AstKeyMap **map_kms;
   AstMapping *result;
   AstMapping *smap;
   AstMapping *tmap0;
   int imap;
   int nmap;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF concatenate. */
   if( !IsA( km, "concatenate", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF concatenate but got a %s", status, GetAsdfClass(km,status) );

/* Get a sequence of Transforms to be applied in parallel. */
   } else {
      nmap = astMapLength( km, "forward" );
      map_kms = astMalloc( nmap*sizeof(*map_kms) );
      if( astOK ) {

/* Get a list of KeyMaps, each holding one of the transforms that are to be
   applied in parallel. */
         Get1A( km, "forward", 0, nmap, map_kms, &nmap, status );

/* Create an AST Mapping from the first transform. */
         result = ReadTransform( this, map_kms[ 0 ], status );
         map_kms[ 0 ] = astAnnul( map_kms[ 0 ] );

/* Loop round each remaining transform. */
         for( imap = 1; imap < nmap; imap++ ) {

/* Create an AST Mapping from the current transform. */
            tmap0 = ReadTransform( this, map_kms[ imap ], status );
            map_kms[ imap ] = astAnnul( map_kms[ imap ] );

/* Combine it in parallel with the previous Mappings. Then annull the
   original Mapping pointers and use the new CmpMap as the result. */
            tmap1 = astCmpMap( result, tmap0, 0, " ", status );
            result = astAnnul( result );
            tmap0 = astAnnul( tmap0 );
            result = (AstMapping *) tmap1;
         }

/* Free resources. */
         map_kms = astFree( map_kms );

/* Try to simplify the CmpMap. If the result is atomic (i.e. not a
   CmpMap), then return it in place of the original. */
         smap = astSimplify( result );
         if( !astIsACmpMap( smap ) ) {
            (void) astAnnul( result );
            result = smap;
         } else {
            smap = astAnnul( smap );
         }
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'concatenate' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadConstant( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadConstant

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF constant transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadConstant( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF constant.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double value;
   int *inperm;
   int idim;
   int ndim;
   int outperm;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF constant. */
   if( !IsA( km, "constant", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF constant but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the constant value. */
      value = Get0D( km, "value", 0, AST__BAD, status );

/* Get the number of dimensions. */
      ndim = Get0I( km, "dimensions", 0, 0, status );

/* Allocate the inperm array. */
      inperm = astMalloc( ndim*sizeof(*inperm) );
      if( astOK ) {

/* Create an equivalent PermMap. Fill the inperm array with the index of
   a non-existant output (2) so that all inputs will be assigned AST__BAD
   by the inverse transformation (note, the protected interface for the
   PermMap constructor uses zero-based axis indices). The single outperm
   value - corresponding to the single output axis - is assigned -1
   causing it to be assigned the first (and only) constant value. */
         for( idim = 0; idim < ndim; idim++ ) inperm[ idim ] = 2;
         outperm = -1;
         result = (AstMapping *) astPermMap( ndim, inperm, 1, &outperm,
                                             &value, " ", status );
      }

/* Free resources. */
      inperm = astFree( inperm );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'constant' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static void ReadEarthLocation( AstKeyMap *km, AstFrame *frm, int *status ){
/*
*  Name:
*     ReadEarthLocation

*  Purpose:
*     Reads properties of an astropy coordinates earthlocation, or any
*     subclass.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadEarthLocation( AstKeyMap *km, AstFrame *frm, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function reads proprties of an astropy coordinates EarthLocation
*     or any subclass from the supplied KeyMap, and stores corresponding attribute
*     values in a supplied AST Frame. It stores these values as the ObsLon, ObsLat
*     and ObsAlt attributes of the supplied Frame.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF
*        earthlocation.
*     frm
*        An AST Frame in which tot store the attributes read from the
*        ASDF object.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   const char *ellipsoid;
   double geolon;
   double geolat;
   double h;
   double obsgeo[ 3 ];

/* Check inherited status */
   if( !astOK ) return;

/* Report an error if the supplied KeyMap does not represent an
   EarthLocation. */
   if( !IsA( km, "earthlocation", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap "
                "to hold an earthlocation but got a %s", status,
                GetAsdfClass(km,status) );

/* We can only support WGS84 positions. */
   } else {
      ellipsoid = Get0C( km, "ellipsoid", 1, "WGS84", status );
      if( ellipsoid && astOK ) {
         if( strcmp( ellipsoid, "WGS84" ) ) {
            astError( AST__BYAML, "astRead(YamlChan): Earth locations with "
                      "respect to the %s ellipsoid are not supported by AST.",
                      status, ellipsoid );

/* Read the geocentric (x,y,z) Cartesian coordinates, in metres, from the
   supplied object. */
         } else {
            obsgeo[ 0 ] = GetQuantity( km, "x", "m", 0, 0, status );
            obsgeo[ 1 ] = GetQuantity( km, "y", "m", 0, 0, status );
            obsgeo[ 2 ] = GetQuantity( km, "z", "m", 0, 0, status );

/* Convert to geodetic (lon,lat,alt). */
            eraGc2gd( 1, obsgeo, &geolon, &geolat, &h );

/* Store in the supplied Frame. */
            astSetObsLat( frm, geolat );
            astSetObsLon( frm, geolon );
            astSetObsAlt( frm, h );
         }
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'earth_location' "
                "object.", status );
   }

}

static AstMapping *ReadFixInputs( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadFixInputs

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF fix_inputs transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadFixInputs( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF fix_inputs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstKeyMap *subkm[2];
   AstMapping *map;
   AstMapping *result;
   AstPermMap *pmap;
   double values[ MXDIM ];
   int *inperm;
   int *outperm;
   int iin;
   int ikey;
   int iout;
   int keys[ MXDIM ];
   int nin;
   int nkey;
   int nout;
   int nval;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF fix_inputs. */
   if( !IsA( km, "fix_inputs", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF fix_inputs but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* The "forward" item should be a vector of two KeyMaps. */
      Get1A( km, "forward", 0, -2, subkm, &nval, status );

/* Read a Mapping from the first, which should contain a transform. */
      map = ReadTransform( this, subkm[ 0 ], status );

/* The second should contain two vector items: "keys" and "values". The
   keys list could be strings, but we can only handle integers here. */
      Get1I( subkm[ 1 ], "keys", 0, MXDIM, keys, &nkey, status );
      Get1D( subkm[ 1 ], "values", 0, MXDIM, values, &nval, status );

/* Check the number of keys and values match. */
      if( nkey != nval && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): Different numbers of "
                   "keys and values (%d and %d) found.", status, nkey,
                   nval );

/* If no inputs are fixed, return the Mapping read above unchanged. */
      } else if( nkey == 0 ) {
         result = astClone( map );

/* Otherwise, create a PermMap to feed the inputs of the Mapping read
   above, and combine them in series. */
      } else {

/* Get the number of outputs and inputs for the PermMap. */
         nout = astGetNin( map );
         nin = nout - nkey;

/* Allocate memory for the arrays required by the PermMap constructor. */
         outperm = astMalloc( nout*sizeof( *outperm ) );
         inperm = astMalloc( nin*sizeof( *inperm ) );
         if( astOK ) {

/* Fill the outperm array with -9999 to indicate that no outputs have yet
   had a value or input assigned to them. */
            for( iout = 0; iout < nout; iout++ ) outperm[ iout ] = -9999;

/* Store negative values that refer to the constants read from the KeyMap,
   as the values to be assigned to the appropriate PermMap outputs. This leaves
   all unfixed outputs still holding -9999. */
            for( ikey = 0; ikey < nkey; ikey++ ) {
               outperm[ keys[ ikey ] ] = -( ikey + 1 );
            }

/* Assign inputs sequentially to the remaining unfixed outputs. */
            iin = 0;
            for( iout = 0; iout < nout; iout++ ) {
               if( outperm[ iout ] == -9999 ) {
                  outperm[ iout ] = iin;
                  inperm[ iin ] = iout;
                  iin++;
               }
            }

/* Create the PermMap. */
            pmap = astPermMap( nin, inperm, nout, outperm, values, " " ,
                               status );

/* The returned Mapping is a compound Mapping that combines the PermMap
   and the other map in series. */
            result = (AstMapping *) astCmpMap( pmap, map, 1, " ", status );

/* Free resources. */
            pmap = astAnnul( pmap );
         }

         inperm = astFree( inperm );
         outperm = astFree( outperm );
      }

      map = astAnnul( map );
      subkm[ 0 ] = astAnnul( subkm[ 0 ] );
      subkm[ 1 ] = astAnnul( subkm[ 1 ] );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'fix_inputs' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstFrame *ReadFrame( AstKeyMap *km, int nax, AstMapping **map, int *status ){
/*
*  Name:
*     ReadFrame

*  Purpose:
*     Read an AST Frame from a KeyMap holding an ASDF frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstFrame *ReadFrame( AstKeyMap *km, int nax, AstMapping **map, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Frame from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF frame.
*     nax
*        The number of axes expected for the frame.
*     map
*        Address at which to return a pointer to a Mapping that
*        transforms axis values from the ASDF frame to the AST Frame.
*        For instance, a ZoomMap that converts degrees to radians will
*        be returned if the ASDF frame is a celestial_frame in units
*        of degrees (since the equivalent AST SkyFrame will use radians).
*        A NULL pointer will be returned if the ASDF and AST axes are
*        identical.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Frame.
*/

/* Local Variables: */
   AstFrame *result;
   char *axes_names_buffer;
   char *axis_physical_types_buffer;
   char *unit_buffer;
   const char *axes_names[ MXDIM ];
   const char *axis_physical_types[ MXDIM ];
   const char *km_class;
   const char *name;
   const char *unit[ MXDIM ];
   int axes_order[ MXDIM ];
   int axes_order_supplied;
   int iaxis;
   int mxdim;
   int ndim;

/* Initialise */
   result = NULL;
   *map = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent a frame. */
   if( !IsA( km, "frame", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "a frame but got a %s", status, GetAsdfClass(km,status) );

/* Create a SkyFrame if the supplied object is an ASDF celestial_frame. */
   } else if( IsA( km, "celestial_frame", status ) ){
      result = (AstFrame *) ReadCelestialFrame( km, map, status );

/* Create a generic AST Frame if the supplied object is an ASDF frame or
   frame2d. Here we need to get the ASDF class string directly from the
   KeyMap rather than using the IsA function since we want to guard against
   attempting to read any of the currently unsupported subclasses of frame
   (e.g. spectral_frame). */
   } else {
      km_class = GetAsdfClass( km, status );
      if( strstr( km_class, "/frame" ) ) {

/* Get the user-friendly name (optional). */
         name = Get0C( km, "name", 1, NULL, status );

/* Get the axes_order list (optional). If it exists, the length of
   the vector defines the number of axes in the frame, in which case
   subsequent vectors within the frame must have the same length and so
   we set "mxdim" negative to force an error if a vector is found with
   a different length. */
         axes_order_supplied = Get1I( km, "axes_order", 1, MXDIM,
                                      axes_order, &ndim, status );
         if( axes_order_supplied ) {
            mxdim = -ndim;
         } else {
            mxdim = MXDIM;
         }

/* Get the axes_names list (optional). */
         axes_names_buffer = Get1C( km, "axes_names", 1, mxdim, axes_names,
                                    &ndim, status );
         if( axes_names_buffer ) {
            mxdim = -ndim;
         } else {
            mxdim = MXDIM;
         }

/* Get the units (optional). */
         unit_buffer = Get1C( km, "unit", 1, mxdim, unit, &ndim, status );
         if( unit_buffer ) {
            mxdim = -ndim;
         } else {
            mxdim = MXDIM;
         }

/* Get the axis physical types (optional). */
         axis_physical_types_buffer = Get1C( km, "axis_physical_types", 1, mxdim,
                                             axis_physical_types, &ndim, status );
         if( axis_physical_types_buffer ) {
            mxdim = -ndim;
         } else {
            mxdim = MXDIM;
         }


/* If the number of axes in the frame is not known, use the supplied
   expected number of axes. */
         if( mxdim >= 0 ) {
            ndim = nax;

/* If the number of axes in the frame is known, report an error if it is
   not the expected value. */
         } else if( ndim != nax && astOK ) {
            if( name ) {
               astError( AST__BASDF, "astRead(YamlChan): The number of "
                         "axes in the ASDF '%s' frame (%d) is wrong - "
                         "expected %d.", status, name, ndim, nax );
            } else {
               astError( AST__BASDF, "astRead(YamlChan): The number of "
                         "axes in the supplied ASDF frame (%d) is wrong - "
                         "expected %d.", status, ndim, nax );
            }
         }

/* Create the Frame, setting its Domain to the user-friendly name (if
   supplied). */
         result = astFrame( ndim, " ", status);
         if( name ) astSetDomain( result, name );

/* Set the axis properties. */
         for( iaxis = 0; iaxis < ndim; iaxis++ ) {
            if( axes_names_buffer ) astSetSymbol( result, iaxis,
                                                  axes_names[ iaxis ] );
            if( unit_buffer ) astSetUnit( result, iaxis, unit[ iaxis ] );
            if( axis_physical_types_buffer ) {
               astSetLabel( result, iaxis, axis_physical_types[ iaxis ] );
            } else if( axes_names_buffer ) {
               astSetLabel( result, iaxis, axes_names[ iaxis ] );
            }
         }

/* Free resources. */
         unit_buffer = astFree( unit_buffer );
         axes_names_buffer = astFree( axes_names_buffer );
         axis_physical_types_buffer = astFree( axis_physical_types_buffer );

/* Report an error if AST does not yet support the type of frame included
   in the KeyMap. */
      } else {
         astError( AST__BYAML, "astRead(YamlChan): The supplied ASDF wcs "
                   "contains a '%s' obect, which is not yet supported by "
                   "the AST library.", status, km_class );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'frame' "
                "object.", status );
   }

/* Return the Frame. */
   return result;
}

static AstMapping *ReadIdentity( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadIdentity

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF identity transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadIdentity( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF identity.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   int ndim;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an identity. */
   if( !IsA( km, "identity", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an identity but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {
      ndim = Get0I( km, "n_dims", 0, 0, status );
      result = (AstMapping *) astUnitMap( ndim, " ", status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'identity' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadLinear1d( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadLinear1d

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF linear1d transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadLinear1d( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF linear1d.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double ina;
   double inb;
   double offset;
   double outa;
   double outb;
   double slope;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF linear1d. */
   if( !IsA( km, "linear1d", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF linear1d but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the slope and offset. Report an error if the slope is zero. */
      slope = Get0D( km, "slope", 0, AST__BAD, status );
      offset = Get0D( km, "offset", 0, AST__BAD, status );
      if( slope == 0.0 ) {
         if( astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Supplied ASDF "
                      "'linear1d' transform contained a slope of zero.",
                      status );
         }

/* Ortherwise, create a corresponding winmap. */
      } else {
         ina = 0.0;
         outa = offset;
         inb = offset/slope;
         outa = 2*offset;
         result = (AstMapping *) astWinMap( 1, &ina, &inb, &outa, &outb,
                                            " ", status );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'linear1d' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadMultiplyScale( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadMultiplyScale

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF multiplyscale transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadMultiplyScale( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF multiplyscale.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double factor;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF multiplyscale. */
   if( !IsA( km, "multiplyscale", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF multiplyscale but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the scale factor. */
      factor = Get0D( km, "factor", 0, AST__BAD, status );

/* Create a 1-D ZoomMap. */
      result = (AstMapping *) astZoomMap( 1, factor, " ", status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'multiply_scale' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstObject *ReadNative( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadNative

*  Purpose:
*     Attempt to read an AST Object from a KeyMap holding NATIVE yaml.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstObject *ReadNative( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function checks to see if the supplied KeyMap represents a
*     NATIVE-encoded Object and if so, recreates and returned the Object.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents need not be NATIVE yaml.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Object, or NULL if the supplied KeyMap does
*     not contain NATIVE yaml.
*/

/* Local Variables: */
   AstObject *result;

/* Initialise */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Check if the supplied KeyMap holds a NATIVE object. If so the AST
   class name is returned. Otherwise NULL is returned */
   if( GetNativeClass( km, status ) ) {

/* Store a pointer to the KeyMap holding the object values. Set
   "this->index" so that, after incrementing, it becomes the index of the
   next item from the KeyMap to be read. */
      this->obj = km;
      this->index = -1;

/* Use the Read method inherited from the parent Channel class to read the
   object. */
      result = (*parent_read)( (AstChannel *) this, status );
   }

/* Ensure there is no object in the YamlChan since the Read method uses
   this to determine if we are in the middle of reading a Native object. */
   this->obj = NULL;

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading a native AST "
                "object.", status );
   }

/* Return the AST FrameSet. */
   return result;
}

static double *ReadNDArray( AstYamlChan *this, AstKeyMap *km, int mxdim,
                            int *ndim, int *dims, int *status ){
/*
*  Name:
*     ReadNDArray

*  Purpose:
*     Read a vectorised array of doubles from a KeyMap holding an ASDF NDArray.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double *ReadNDArray( AstYamlChan *this, AstKeyMap *km, int mxdim,
*                          int *ndim, int *dims, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function allocates and returns an array of doubles holding
*     values read from the suppliedKeyMap, which should hold an ASDF NDArray.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF
*        ndarray.
*     mxdim
*        The maximum allowed number of dimensions within the returned
*        vectorised values array. A value of zero may be supplied if the
*        ndarray must hold a scalar.
*     ndim
*        Pointer to an int in which to return the actual number of dimensions
*        within the returned vectorised values array. A value of zero is
*        returned if the ndarray holds a scalar.
*     dims
*        An array with "mxdim" elements in which are returned the dimensions
*        of the returned vectorised values array. Ignored if "mxdim" is
*        zero.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a newly allocated array holding the vectorised array of
*     values read from the NDArray, or NULL if an error occurs. The array
*     should be freed using astFree when it is no longer needed.
*/

/* Local Variables: */
   AstKeyMap *subkm;
   double *result;
   int type;

/* Initialise */
   result = NULL;
   *ndim = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF
   NDArray. */
   if( !IsA( km, "ndarray", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold an "
                "ASDF ndarray but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned array. */
   } else {

/* This class can only handle arrays defined inline. */
      if( astMapHasKey( km, "source" ) ){
         astError( AST__BYAML, "astRead(YamlChan): ndarray is not defined "
                   "inline - AST can only handle ndarrays that are defined "
                   "inline.", status );

/* If the supplied KeyMap contains a "data" element it may be a KeyMap
   holding a set of vectors (each corresponding to one row of the data
   array). Attempt to get a pointer to the "data" entry. */
      } else {
         type = astMapType( km, "data" );
         if( type == AST__OBJECTTYPE ) {
            subkm = Get0A( km, "data", 1, NULL, NULL, status );

/* If the "data" entry did not exist, the data array is stored (in the
   same manner) at the top level of the "ndarray" object. */
            if( !subkm ) subkm = astClone( km );

/* Get an array from the KeyMap. */
            result = ReadSequence( this, subkm, "data", mxdim, ndim, dims, status );

/* Free resources. */
            subkm = astAnnul( subkm );

/* Otherwise, assume the "data" is a sequence of doubles. */
         } else {
            dims[ 0 ] = astMapLength( km, "data" );
            result = astMalloc( dims[ 0 ]*sizeof(*result) );
            Get1D( km, "data", 0, dims[ 0 ], result, dims, status );
         }
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      result = astFree( result );
      astError( astStatus, "Error occurred when reading an ASDF 'ndarray' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadOrthoPolynomial( AstYamlChan *this, AstKeyMap *km,
                                        int *status ){
/*
*  Name:
*     ReadOrthoPolynomial

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF ortho_polynomial transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadOrthoPolynomial( AstYamlChan *this, AstKeyMap *km,
*                                      int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF ortho_polynomial.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF ortho_polynomial. */
   if( !IsA( km, "ortho_polynomial", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF ortho_polynomial but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {
      result = ReadPoly( this, km, 1, status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'ortho_polynomial' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadPlanar2d( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadPlanar2d

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF planar2d transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadPlanar2d( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF planar2d.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   AstMatrixMap *mm;
   AstShiftMap *sm;
   double m[2];
   double intercept;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF planar2d. */
   if( !IsA( km, "planar2d", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF planar2d but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping - a 2x1 MatrixMap and a ShiftMap. */
   } else {

/* Get the matrix elements, and create the MatrixMap. */
      m[ 0 ] = Get0D( km, "slope_x", 0, AST__BAD, status );
      m[ 1 ] = Get0D( km, "slope_y", 0, AST__BAD, status );
      mm = astMatrixMap( 2, 1, 0, m, " ", status );

/* Get the intercept and create a shiftmap. */
      intercept = Get0D( km, "intercept", 0, AST__BAD, status );
      sm = astShiftMap( 1, &intercept, " ", status );

/* The result is a series combination of these two. */
      result = (AstMapping *) astCmpMap( mm, sm, 1, " ", status );

/* Free resources. */
      mm = astAnnul( mm );
      sm = astAnnul( sm );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'planar2d' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadPoly( AstYamlChan *this, AstKeyMap *km, int isortho,
                             int *status ){
/*
*  Name:
*     ReadPoly

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF polynomial or
*     ortho_polynomial transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadPoly( AstYamlChan *this, AstKeyMap *km, int isortho,
*                           int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF
*        polynomial or ortho_polynomial, as indicated by "isortho".
*     isortho
*        Non-zero if "km" holds an ortho_polynomial and zero if "km"
*        holds a polynomial.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstMapping *sm;
   AstMapping *result;
   AstMapping *pm;
   AstWinMap *wm;
   char rowname[20];
   double *cof_ptr;
   double *coeff_f;
   double *domain;
   double *pc;
   double *pinfo;
   double *window;
   double cofs[ MXORD*MXORD ];
   double ina[ 2 ];
   double inb[ 2 ];
   double outa[ 2 ];
   double outb[ 2 ];
   int dims[ 2 ];
   int dimd;
   int dimw;
   int i;
   int irow;
   int j;
   int ncoeff_f;
   int ncol0;
   int ncol;
   int ndim;
   int ndimd;
   int ndimw;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* The coefficients array may be stored in a vector-valued Quantity or in an
   NDarray or in an array of arrays. None of these are primitive and so
   the array will be stored in a nested KeyMap. */
   subkm = Get0A( km, "coefficients", 0, NULL, NULL, status );

/* First deal with coefficients stored as a Quantity. Ignore the units. */
   cof_ptr = NULL;
   if( IsA( subkm, "quantity", status ) ){
      cof_ptr = GetQuantityV( this, km, "coefficients", NULL, 0, 2, &ndim,
                              dims, status );

/* Now deal with coefficients stored as an ndarray. */
   } else if( IsA( subkm, "ndarray", status ) ){
      cof_ptr = ReadNDArray( this, subkm, 2, &ndim, dims, status );

/* Now deal with coefficients stored as a list of lists. */
   } else {

/* Loop round reading each row of coefficients into the local "cof"
   array. Each row is stored in a separate vector entry in the KeyMap.
   Report an error if the number of columns in a row changes. */
      ncol0 = 0;
      irow = 0;
      cof_ptr = cofs;
      while( astOK ) {
         sprintf( rowname, "coefficients_%d", irow++ );
         if( Get1D( subkm, rowname, 1, MXORD, cof_ptr, &ncol, status ) ){
            if( irow == 1 ) {
               ncol0 = ncol;
            } else if( ncol != ncol0 && astOK ) {
               cof_ptr = NULL;
               astError( AST__BYAML, "astRead(YamlChan): The coefficients "
                         "array has %d column(s) for row 1 but %d column(s) "
                         "for row %d.", status, ncol0, ncol, irow );
               break;
            }
            cof_ptr += ncol;
         } else {
            break;
         }
      }

      ndim = 2;
      dims[ 0 ] = ncol0;
      dims[ 1 ] = irow-1;
      cof_ptr = cofs;
   }

/* Report an error if the coefficients array is not 1D or 2D. */
   if( ndim != 1 && ndim != 2 && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): The coefficients array has "
                "%d dimensions (must be 1 or 2).", status, ndim );
   }

/* Store the coefficients in the form required by the PolyMap or ChebyMap
   constructor. First find the number of non-zero coefficients. */
   if( ndim == 1 ) dims[ 1 ] = 1;

   ncoeff_f = 0;
   pc = cof_ptr;
   for( j = 0; j < dims[ 1 ]; j++ ) {
      for( i = 0; i < dims[ 0 ]; i++ ) {
         if( *(pc++) != 0.0 ) ncoeff_f++;
      }
   }

/* Allocate room for the info required by the PolyMap or ChebyMap
   constructor. */
   coeff_f = astMalloc( ncoeff_f*( 2 + ndim )*sizeof( *coeff_f ) );
   if( astOK ) {

/* Store the required info. */
      pinfo = coeff_f;
      pc = cof_ptr;
      for( j = 0; j < dims[ 1 ]; j++ ) {
         for( i = 0; i < dims[ 0 ]; i++,pc++ ) {
            if( *pc != 0.0 ) {
               pinfo[ 0 ] = *pc;  /* Coeff value */
               pinfo[ 1 ] = 1;    /* Output index */
               pinfo[ 2 ] = j;    /* Power for input 1 */
               if( ndim == 2 ){
                  pinfo[ 3 ] = i; /* Power for input 2 */
                  pinfo += 4;
               } else {
                  pinfo += 3;
               }
            }
         }
      }

/* If the supplied KeyMap contains a "domain", read the vectorised domain
   array into a newly allocated memory block. */
      domain = GetSequence( this, km, "domain", 1, ndim, &ndimd, &dimd, status );

/* If the supplied KeyMap contains a "window", read the vectorised window
   array into a newly allocated memory block. */
      window = GetSequence( this, km, "window", 1, ndim, &ndimw, &dimw, status );

/* If neither exist, just return the basic PolyMap or ChebyMap (the
   ChebyMap assumes a domain of [-1,1] on each axis. */
      if( !domain && !window ) {
         if( isortho ){
            ina[ 0 ] = -1.0;
            ina[ 1 ] = -1.0;
            inb[ 0 ] = 1.0;
            inb[ 1 ] = 1.0;
            result = (AstMapping *) astChebyMap( ndim, 1, ncoeff_f, coeff_f, 0,
                                                 NULL, ina, inb, NULL, NULL,
                                                 " ", status );
         } else {
            result = (AstMapping *) astPolyMap( ndim, 1, ncoeff_f, coeff_f, 0, NULL, " ", status );
         }

/* If either exist, we may need to precede the PolyMap or ChebyMap with a
   WinMap that maps the domain onto the window. */
      } else {

/* Get the input positions at the two corners of the domain, as required
   by the WinMap constructor. Use a domain of [-1,1] on each axis if no
   domain was supplied. */
         if( domain ) {
            if( dimd != ndim ) {
               astError( AST__BYAML, "astRead(YamlChan): The domain array "
                         "has wrong length (%d) - should be %d.", status,
                         dimd, ndim );
            } else {
               ina[ 0 ] = domain[ 0 ];
               if( ndim == 2 ) ina[ 1 ] = domain[ 2 ];
               inb[ 0 ] = domain[ 1 ];
               if( ndim == 2 ) inb[ 1 ] = domain[ 3 ];
            }
         } else {
            ina[ 0 ] = -1.0;
            ina[ 1 ] = -1.0;
            inb[ 0 ] = 1.0;
            inb[ 1 ] = 1.0;
         }

/* Get the corresponding WinMap output positions (the two corners of the
   window), as required by the WinMap constructor. Use a window of [-1,1]
   on each axis if no domain was supplied. */
         if( window ) {
            if( dimw != ndim ) {
               astError( AST__BYAML, "astRead(YamlChan): The window array "
                         "has wrong length (%d) - should be %d.", status,
                         dimw, ndim );
            } else {
               outa[ 0 ] = window[ 0 ];
               if( ndim == 2 ) outa[ 1 ] = window[ 2 ];
               outb[ 0 ] = window[ 1 ];
               if( ndim == 2 ) outb[ 1 ] = window[ 3 ];
            }
         } else {
            outa[ 0 ] = -1.0;
            outa[ 1 ] = -1.0;
            outb[ 0 ] = 1.0;
            outb[ 1 ] = 1.0;
         }

/* If we are creating a ChebyMap and the window is [-1,1] on each axis,
   we can use the domain directly in the ChebyMap constructor rather than
   using a separate WinMap, since the ChebyMap constructor effectively
   assumes a window of [-1,1] on each axis. */
         if( isortho && outa[ 0 ] == -1.0 && outa[ 1 ] == -1.0 &&
                        outb[ 0 ] == 1.0 && outb[ 1 ] == 1.0 ){
            result = (AstMapping *) astChebyMap( ndim, 1, ncoeff_f, coeff_f, 0,
                                                 NULL, ina, inb, NULL, NULL,
                                                 " ", status );

/* Otherwise, we need to use a WinMap that maps the domain onto the window. */
         } else {

/* Construct the required PolyMap or ChebyMap. The ChebyMap assumes a
   domain of [-1,1] on each axis since we assume the WinMap will scale
   the inputs into that domain. */
            if( isortho ){
               ina[ 0 ] = -1.0;
               ina[ 1 ] = -1.0;
               inb[ 0 ] = 1.0;
               inb[ 1 ] = 1.0;
               pm = (AstMapping *) astChebyMap( ndim, 1, ncoeff_f, coeff_f, 0,
                                                    NULL, ina, inb, NULL, NULL,
                                                    " ", status );
            } else {
               pm = (AstMapping *) astPolyMap( ndim, 1, ncoeff_f, coeff_f, 0, NULL, " ", status );
            }

/* Construct the WinMap that maps the domain into the window. */
            wm = astWinMap( ndim, ina, inb, outa, outb, " ", status );

/* If it is equivalent to a UnitMap, just return the PolyMap or ChebyMap. */
            sm = astSimplify( wm );
            if( astIsAUnitMap( sm ) ){
               result = astClone( pm );

/* Otherwise, construct the returned compound mapping by combining the WinMap
   and PolyMap/ChebyMap in series. */
            } else {
               result = (AstMapping *) astCmpMap( wm, pm, 1, " ", status );
            }

/* Free resources. */
            wm = astAnnul( wm );
            pm = astAnnul( pm );
            sm = astAnnul( sm );
         }
         domain = astFree( domain );
         window = astFree( window );
      }
   }

/* Free resources. */
   subkm = astAnnul( subkm );
   coeff_f = astFree( coeff_f );
   if( cof_ptr != cofs ) cof_ptr = astFree( cof_ptr );

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadPolynomial( AstYamlChan *this, AstKeyMap *km,
                                   int *status ){
/*
*  Name:
*     ReadPolynomial

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF polynomial transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadPolynomial( AstYamlChan *this, AstKeyMap *km,
*                                 int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF polynomial.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF polynomial. */
   if( !IsA( km, "polynomial", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF polynomial but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {
      result = ReadPoly( this, km, 0, status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'polynomial' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadRemapAxes( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadRemapAxes

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF remap_axes transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadRemapAxes( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF remap_axes.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   int iin;
   int inperm[ MXDIM ];
   int iout;
   int mapping[ MXDIM ];
   int maxin;
   int nin;
   int nout;
   int ok;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF remap_axes. */
   if( !IsA( km, "remap_axes", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF remap_axes but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the maximum number of inputs, if specified. */
      nin = Get0I( km, "n_inputs", 1, 0, status );

/* Get a list of input axis indices, one for each output axis. */
      Get1I( km, "mapping", 0, MXDIM, mapping, &nout, status );

/* See if "mapping" represents a simple axis permutution with no duplicates
   or missing axes. First initialise things. */
      ok = 1;
      maxin = 0;
      for( iin = 0; iin < MXDIM; iin++ ) inperm[ iin ] = -1;

/* For each output axis, get the correspoinding input axis (zero-based). */
      for( iout = 0; iout < nout; iout++ ) {
         iin = mapping[ iout ];

/* Record the largest used input axis index. */
         if( iin > maxin ) maxin = iin;

/* If this is the first output to be fed this input, associate the output
   with the input. Otherwise, indicate that this is not a simple axis
   permutation. */
         if( inperm[ iin ] == -1 ) {
            inperm[ iin ] = iout;
         } else {
            ok = 0;
         }
      }

/* If the number of inputs was not specified via "nin" use the maximum
   value found in "mapping" (plus one to convert from zero-based axis
   index to the number of axes). If nin was specified, but is not equal
   to the largest value in the "mapping" array, then this is not a simple
   axis permutation. */
      if( nin == 0 ) {
         nin = maxin + 1;
      } else if( nin != maxin + 1 ) {
         ok = 0;
      }

/* If no inputs were duplicated, and nin is (maxin + 1), see if there are
   any unused inputs. */
      if( ok ) {
         for( iin = 0; iin < nin; iin++ ) {
            if( inperm[ iin ] == -1 ) {
               ok = 0;
               break;
            }
         }
      }

/* Create a corresponding permmap. Unlike the public interface, the protected
   interface for astPermMap uses zero-based axis indices. */
      if( ok ) {
         result = (AstMapping *) astPermMap( nin, inperm, nout, mapping,
                                             NULL, " ", status );
      } else {
         result = (AstMapping *) astPermMap( nin, NULL, nout, mapping,
                                             NULL, " ", status );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'remap_axes' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadRotate2d( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadRotate2d

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF rotate2d transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadRotate2d( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF rotate2d.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double angle;
   double cosang;
   double m[4];
   double sinang;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF rotate2d. */
   if( !IsA( km, "rotate2d", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF rotate2d but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the angle (degs) and its sin and cos. */
      angle = Get0D( km, "angle", 0, AST__BAD, status );

/* Convert to rads and get its sin and cos. */
      angle *= AST__DD2R;
      cosang = cos( angle );
      sinang = sin( angle );

/* Calculate the corresponding matrix. */
      m[ 0 ] = cosang;
      m[ 1 ] = -sinang;
      m[ 2 ] = sinang;
      m[ 3 ] = cosang;

/* Create the matrixmap. */
      result = (AstMapping *) astMatrixMap( 2, 2, 0, m, " ", status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'rotate2d' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadRotate3d( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadRotate3d

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF rotate3d transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadRotate3d( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF rotate3d.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstCmpMap *cm2;
   AstCmpMap *cm;
   AstFitsChan *fc;
   AstFrameSet *fs;
   AstMapping *totmap;
   AstMapping **maplist;
   AstMapping *result;
   AstMapping *mm;
   AstSphMap *sm;
   AstZoomMap *zm;
   const char *dir;
   double matrix[ 9 ];
   double phi;
   double psi;
   double theta;
   int *invertlist;
   int i;
   int nmap;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF rotate3d. */
   if( !IsA( km, "rotate3d", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF rotate3d but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the three angles (in degrees). */
      phi = Get0D( km, "phi", 0, AST__BAD, status );
      theta = Get0D( km, "theta", 0, AST__BAD, status );
      psi = Get0D( km, "psi", 0, AST__BAD, status );

/* "direction" is a string that indicates the order of the rotations. */
      dir = Get0C( km, "direction", 1, "native2celestial", status );
      if( dir ) {

/* For rotations specified using FITS notation, create an equivalent set
   of FITS headers and use FitsChan to create the Mapping. */
         if( !strcmp( dir, "native2celestial" ) ||
             !strcmp( dir, "celestial2native" ) ){

/* Create the empty FitsChan. */
            fc = astFitsChan( NULL, NULL, " ", status );

/* Put the required headers into it. The pixel to IWC keywords produce a
   unit mapping. An arbitrary projection (TAN) is used. The required
   angles are used as CRVAL1, CRVAL2 and LONPOLE. */
            astSetFitsF( fc, "CRPIX1", 0.0, NULL, 0 );
            astSetFitsF( fc, "CRPIX2", 0.0, NULL, 0 );
            astSetFitsF( fc, "CDELT1", 1.0, NULL, 0 );
            astSetFitsF( fc, "CDELT2", 1.0, NULL, 0 );
            astSetFitsS( fc, "CTYPE1", "RA---TAN", NULL, 0 );
            astSetFitsS( fc, "CTYPE2", "DEC--TAN", NULL, 0 );
            astSetFitsF( fc, "CRVAL1", phi, NULL, 0 );
            astSetFitsF( fc, "CRVAL2", theta, NULL, 0 );
            astSetFitsF( fc, "LONPOLE", psi, NULL, 0 );

/* Read a FrameSet from the FitsChan. */
            astClearCard( fc );
            fs = astRead( fc );

/* Get the pixel->sky Mapping and split it up into a list of component
   Mappings applied in series. */
            totmap = astGetMapping( fs, AST__BASE, AST__CURRENT );
            maplist = NULL;
            invertlist = NULL;
            nmap = 0;
            astMapList( totmap, 1, astGetInvert( totmap ), &nmap,
                        &maplist, &invertlist );
            if( astOK ) {

/* The last three mappings should be (SphMap,MatrixMap,SphMap). The
   MatrixMap is the one we want. The one exception is that the last
   Mapping may be the WcsMap, in which case the required MatrixMap is
   effectively a UnitMap. */
               if( nmap > 0 && astIsAWcsMap( maplist[ nmap - 1 ] ) ){
                  mm = (AstMapping *) astUnitMap( 2, " ", status );

               } else if( nmap > 2 && astIsASphMap( maplist[ nmap - 1 ] ) &&
                          astIsAMatrixMap( maplist[ nmap - 2 ] ) &&
                          astIsASphMap( maplist[ nmap - 3 ] ) ){
                  mm = (AstMapping *) astClone( maplist[ nmap - 2 ] );

/* The Mapping obtained above goes from native to celestial. Invert the
   Mapping if required. */
                  if( !strcmp( dir, "celestial2native" ) ) astInvert( mm );

               } else {
                  astError( AST__INTER, "astRead(YamlChan): unexpected "
                            "rotate3d mapping sequence (internal AST "
                            "programming error).", status );
               }

/* Free resources. */
               for( i = 0; i < nmap; i++ ) {
                  maplist[ i ] = astAnnul( maplist[ i ] );
               }
               maplist = astFree( maplist );
               invertlist = astFree( invertlist );
            }

            totmap = astAnnul( totmap );
            fs = astAnnul( fs );
            fc = astAnnul( fc );

/* All other cases should be in the form required by palDeuler. */
         } else {
            palDeuler ( dir, AST__DD2R*phi, AST__DD2R*theta, AST__DD2R*psi,
                        (double (*)[3]) matrix );

/* Create the equivalent MatrixMap. */
            mm = (AstMapping *) astMatrixMap( 3, 3, 0, matrix, " ", status );
         }

/* Now construct a compound Mapping that precedes the above MatrixMap
   with an inverted SphMap that converts spherical (lon,lat) to cartesian
   (x,y,z), and follows the MatrixMap with a SphMap that converts back
   from cartesian (x,y,z) to spherical (lon,lat). We also need to use a
   ZoomMap at beginning and end to convert from degrees (used by ASDF) to
   radians (used by AST). These ZoomMaps are flagged using
   astSetAllowSimplify so that they can be merged into their neighbours by a
   subsequent restricted simplification. */
         zm = astZoomMap( 2, AST__DD2R, " ", status );
         astSetAllowSimplify( zm );
         sm = astSphMap( "Invert=1", status );
         cm = astCmpMap(  zm, sm, 1, " ", status );

         cm2 = astCmpMap(  cm, mm, 1, " ", status );

         astInvert( cm );

         result = (AstMapping *) astCmpMap(  cm2, cm, 1, " ", status );

         zm = astAnnul( zm );
         sm = astAnnul( sm );
         cm = astAnnul( cm );
         cm2 = astAnnul( cm2 );
         mm = astAnnul( mm );
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'rotate3d' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadRotateSequence3d( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadRotateSequence3d

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF rotate_sequence_3d transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadRotateSequence3d( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF rotate_sequence_3d.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

#define MXANG 100

/* Local Variables: */
   AstCmpMap *cm;
   AstCmpMap *cm2;
   AstMapping *result;
   AstMatrixMap *mm;
   AstSphMap *sm;
   AstZoomMap *zm;
   const char *axes_order;
   double angles[ MXANG ];
   double matrix[ 9 ];
   int nang;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF rotate_sequence_3d. */
   if( !IsA( km, "rotate_sequence_3d", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF rotate_sequence_3d but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the list of angles. */
      Get1D( km, "angles", 0, MXANG, angles, &nang, status );

/* Get the axes about which to rotate. */
      axes_order = Get0C( km, "axes_order", 0, NULL, status );
      if( axes_order && strlen( axes_order) != nang && astOK ){
         astError( AST__BYAML, "astRead(YamlChan): Expected %d characters "
                   "in axes_order ('%s') but got %d.", status, nang,
                   axes_order, (int) strlen( axes_order) );
      }

/* Generate the matrix. */
      Deuler( axes_order, angles, (double (*)[3]) matrix, status );

/* Create the equivalent MatrixMap. */
      mm = astMatrixMap( 3, 3, 0, matrix, " ", status );

/* If this is a Cartesian rotation, just return the MatrixMap. */
      if( GetChoice( km, "rotation_type", "cartesian spherical",
                     1, 0, status ) == 1 ) {
         result = (AstMapping *) astClone( mm );

/* If this is a SphericalCartesian rotation, use a SphMap to convert from
   spherical to Cartesian, then use the MatrixMap, then used the inverted
   SphMap to convert back to spherical. Also need a ZoomMap at each end
   to convert between rads and degs (flag these using astSetAllowSimplify
   so that they can be merged into their neighbours by a subsequent
   restricted simplification). */
      } else {
         zm = astZoomMap( 2, AST__DD2R, " ", status );
         astSetAllowSimplify( zm );
         sm = astSphMap( "Invert=1", status );
         cm = astCmpMap(  zm, sm, 1, " ", status );

         cm2 = astCmpMap(  cm, mm, 1, " ", status );

         astInvert( cm );

         result = (AstMapping *) astCmpMap(  cm2, cm, 1, " ", status );

         sm = astAnnul( sm );
         zm = astAnnul( zm );
         cm = astAnnul( cm );
         cm2 = astAnnul( cm2 );
         mm = astAnnul( mm );
      }
      mm = astAnnul( mm );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'rotate_sequence3d' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;

#undef MXANG
}

static AstMapping *ReadScale( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadScale

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF scale transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadScale( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF scale.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double factor;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF scale. */
   if( !IsA( km, "scale", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF scale but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the scale factor. */
      factor = Get0D( km, "factor", 0, AST__BAD, status );

/* Create a 1-D ZoomMap. */
      result = (AstMapping *) astZoomMap( 1, factor, " ", status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'scale' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static double *ReadSequence( AstYamlChan *this, AstKeyMap *km, const char *name,
                             int mxdim, int *ndim, int *dims, int *status ){
/*
*  Name:
*     ReadSequence

*  Purpose:
*     Read an array of values from a KeyMap holding a numerical YAML sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     double *ReadSequence( AstYamlChan *this, AstKeyMap *km, const char *name,
*                           int mxdim, int *ndim, int *dims, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions gets a vector of values from a supplied KeyMap. The
*     KeyMap must hold an array of numerical values read from a YAML
*     sequence as created by function ReadYAMLSequence.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap.
*     name
*        A string holding the basename of the array. This defines the
*        names used to store the rows of the array within the supplied
*        KeyMap.
*     mxdim
*        The maximum allowed number of dimensions within the returned
*        vectorised values array. A value of zero may be supplied if the
*        array must be a scalar.
*     ndim
*        Pointer to an int in which to return the actual number of dimensions
*        within the returned vectorised values array. A value of zero is
*        returned if the array is a scalar.
*     dims
*        An array with "mxdim" elements in which are returned the dimensions
*        of the returned vectorised values array. Ignored if "mxdim" is
*        zero.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a newly allocated array holding the vectorised values
*     array read from the sequence, or NULL if an error occurs. The array
*     should be freed using astFree when it is no longer needed.

*/

/* Local Variables: */
   const char *class;
   const char *key;
   const char *pkey;
   double *result;
   int dim;
   int idim;
   int ikey;
   int nc;
   int nkey;
   int nused;
   int odims[ MXDIM ];
   size_t nel;
   size_t nel_exp;

/* Initialise. */
   result = NULL;
   *ndim = 0;

/* Check inherited status */
   if( !astOK ) return result;

/* Verify args. */
   if( mxdim > MXDIM ){
      astError( AST__INTER, "astRead(YamlChan): mxdim value (%d) passed "
                "to ReadSequence is too large - (internal AST programming "
                "error).", status, mxdim );
   }

/* Check the KeyMap entry holds a sequence. */
   class = Get0C( km, "ASDFclass", 0, NULL, status );
   if( class && strcmp( class, SEQ_TYPE ) && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected type '%s' - "
                "got type '%s'.", status, SEQ_TYPE, class );
   }

/* Ensure the astMapKey function returns keys in alphabetical order. This
   should ensure that the rows are accessed in the right order. */
   astSet( km, "SortBy=KeyUp", status );

/* Get the length of the supplied name. */
   nc = strlen( name );

/* Initialise the largest index found for each axis. */
   for( idim = 0; idim < MXDIM; idim++ ) odims[ idim ] = 0;

/* Initialise the number of elements currently in the result array. */
   nel = 0;

/* Loop round all keys in the sub keymap. */
   nkey = astMapSize( km );
   for( ikey = 0; ikey < nkey; ikey++ ) {
      key = astMapKey( km, ikey );

/* Each row is stored in an entry with a key that starts with the supplied
   name, followed by the index on each axis, except the last axis (each
   index is preceded by an underscore). The length of the last axis is
   implied by the length of the vector entry. */
      if( astOK && !strncmp( key, name, nc ) ) {

/* Get the indices from the current key. Record the largest index on each
   axis in "odims". */
         pkey = key + nc;
         for( idim = 0; idim < MXDIM; idim++ ) {
            if( astSscanf( pkey, "_%d%n", &dim, &nused ) == 1 ) {
               if( dim > odims[ idim ] ) odims[ idim ] = dim;
               pkey += nused;
            } else {
               break;
            }
         }

/* Check the number of axis values in the key leaves room for one more
   (the final axis is implied by the position within the vector entry). */
         if( idim >= MXDIM && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Key '%s' looks "
                      "wrong: too many dimensions.", status, key );
            break;
         }

/* If this is the first suitable key, record the number of axes in the
   array (excluding the final axis that is not specified in the key). */
         if( *ndim == 0 ) {
            *ndim = idim;

/* Also store the length of the final axis (implied by the length of the
   vector entry). */
             odims[ idim ] = astMapLength( km, key );

/* If this is not the first suitable key, check the number of axes in the
   key has not changed. */
         } else if( *ndim != idim && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Key '%s' looks "
                      "wrong: expected %d dimensions but found %d.", status,
                      key, *ndim, idim );
            break;
         }

/* Get the length of the final axis and check it has not changed. */
         dim = astMapLength( km, key );
         if( dim !=  odims[ idim ] && astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): Key '%s' has wrong "
                      "length: expected %d but found %d.", status,
                      key, odims[ idim ], dim );
            break;
         }

/* Grow the results array to make room for the values in the current
   vector entry. */
         result = astGrow( result, nel + dim, sizeof(*result) );
         if( astOK ) {

/* Copy the values in the current vector entry into the results array. */
            astMapGet1D( km, key, dim, &dim, result + nel );

/* Incrmeent the number of values currently in the results array. */
            nel += dim;
         }
      }
   }

/* Change "*ndim" form the index of he highest axis to the number of
   axes. */
   (*ndim)++;

/* Check the number of axes found is OK. */
   if( *ndim > mxdim && astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): The array has %d axes "
                "- no more than %d are allowed.", status, *ndim, mxdim );

/* "odims" currently holds the maximum index on each axis, which is one down
   from the length of the axis (except for the last "odims" value, which
   already holds the length, not the maximum index). Change "odims" so
   all axes hold the length. */
   } else {
      for( idim = 0; idim < *ndim - 1; idim++ ) odims[ idim ]++;

/* Reverse the dimensions to the usual AST convention (first axis changes
   fastest). Also get the expected total number of elements. */
      nel_exp = 1;
      for( idim = 0; idim < *ndim; idim++ ) {
         dims[ idim ] = odims[ *ndim - idim - 1 ];
         nel_exp *= dims[ idim ];
      }

/* Check the number o flements found matches the number expected. */
      if( nel_exp != nel && astOK ) {
         astError( AST__BYAML, "astRead(YamlChan): The number of "
                   "elements in the array should be %zu, but %zu were "
                   "found.", status, nel_exp, nel );
      }
   }

/* Report a context error. */
   if( !astOK ) {
      astError( AST__BYAML, "astRead(YamlChan): Failed to read a "
                "sequence.", status );
   }

/* Return the values array. */
   return result;
}

static AstMapping *ReadShift( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadShift

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF shift transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadShift( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF shift.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstMapping *result;
   double offset;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF shift. */
   if( !IsA( km, "shift", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF shift but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the shift. */
      offset = Get0D( km, "offset", 0, AST__BAD, status );

/* Create a 1-D ShiftMap. */
      result = (AstMapping *) astShiftMap( 1, &offset, " ", status );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'shift' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstMapping *ReadSkyProjection( AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadSkyProjection

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF skyprojection transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadSkyProjection( AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF skyprojection.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstCmpMap *temp;
   AstMapping *result;
   AstZoomMap *zm;
   const char *dir;
   const char *km_class;
   double pv[ 21 ];
   int m;
   int maxm;
   int type;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent an ASDF
   sky projection. */
   if( !IsA( km, "skyprojection", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "an ASDF sky projection but got a %s", status, GetAsdfClass(km,status) );

/* Create the returned Mapping. */
   } else {

/* Get the class of the sky projection. For safety, take a permanent copy. */
      km_class = GetAsdfClass( km, status );
      km_class = astStore( NULL, km_class, strlen( km_class) + 1 );

/* Determine the projection type and parameters. */
      maxm = -1;
      pv[ 0 ] = AST__BAD;
      type = AST__WCSBAD;

      if( strstr( km_class, "/gnomonic-" ) ) {
         type = AST__TAN;

      } else if( strstr( km_class, "/airy-" ) ) {
         type = AST__AIR;
         pv[ 1 ] = Get0D( km, "theta_b", 1, 90.0, status );
         maxm = 1;

      } else if( strstr( km_class, "/slant_orthographic-" ) ) {
         type = AST__SIN;
         pv[ 1 ] = Get0D( km, "xi", 1, 0.0, status );
         pv[ 2 ] = Get0D( km, "eta", 1, 0.0, status );
         maxm = 2;

      } else if( strstr( km_class, "/slant_zenithal_perspective-" ) ) {
         type = AST__SZP;
         pv[ 1 ] = Get0D( km, "mu", 1, 0.0, status );
         pv[ 2 ] = Get0D( km, "phi0", 1, 0.0, status );
         pv[ 3 ] = Get0D( km, "theta0", 1, 90.0, status );
         maxm = 3;

      } else if( strstr( km_class, "/stereographic-" ) ) {
         type = AST__STG;

      } else if( strstr( km_class, "/zenithal_equal_area-" ) ) {
         type = AST__ZEA;

      } else if( strstr( km_class, "/zenithal_equidistant-" ) ) {
         type = AST__ARC;

      } else if( strstr( km_class, "/zenithal_perspective-" ) ) {
         type = AST__SZP;
         pv[ 1 ] = Get0D( km, "mu", 1, 0.0, status );
         pv[ 2 ] = Get0D( km, "gamma", 1, 0.0, status );
         maxm = 2;

      } else if( strstr( km_class, "/healpix-" ) ) {
         type = AST__HPX;
         pv[ 1 ] = Get0D( km, "H", 1, 4.0, status );
         pv[ 2 ] = Get0D( km, "X", 1, 3.0, status );
         maxm = 2;

      } else if( strstr( km_class, "/healpix_polar-" ) ) {
         type = AST__XPH;

      } else if( IsA( km, "conic", status ) ) {
         pv[ 1 ] = Get0D( km, "sigma", 1, 0.0, status ); /* Called theta_A in FITS-WCS paper 2 */
         pv[ 2 ] = Get0D( km, "delta", 1, 0.0, status ); /* Called eta in FITS-WCS paper 2 */
         maxm = 2;

         if( strstr( km_class, "/conic_equal_area-" ) ) {
            type = AST__COE;
         } else if( strstr( km_class, "/conic_equidistant-" ) ) {
            type = AST__COD;
         } else if( strstr( km_class, "/conic_orthomorphic-" ) ) {
            type = AST__COO;
         } else if( strstr( km_class, "/conic_perspective-" ) ) {
            type = AST__COP;
         }

      } else if( strstr( km_class, "/cylindrical_equal_area-" ) ) {
         type = AST__CEA;
         pv[ 1 ] = Get0D( km, "lambda", 1, 0.0, status );
         maxm = 1;

      } else if( strstr( km_class, "/cylindrical_perspective-" ) ) {
         type = AST__CYP;
         pv[ 1 ] = Get0D( km, "mu", 1, 0.0, status );
         pv[ 2 ] = Get0D( km, "lambda", 1, 0.0, status );
         maxm = 2;

      } else if( strstr( km_class, "/mercator-" ) ) {
         type = AST__MER;

      } else if( strstr( km_class, "/plate_carree-" ) ) {
         type = AST__CAR;

      } else if( strstr( km_class, "/bonne_equal_area-" ) ) {
         type = AST__BON;
         pv[ 1 ] = Get0D( km, "theta1", 1, 0.0, status );
         maxm = 1;

      } else if( strstr( km_class, "/polyconic-" ) ) {
         type = AST__PCO;

      } else if( strstr( km_class, "/hammer_aitoff-" ) ) {
         type = AST__AIT;

      } else if( strstr( km_class, "/molleweide-" ) ) {
         type = AST__MOL;

      } else if( strstr( km_class, "/parabolic-" ) ) {
         type = AST__PAR;

      } else if( strstr( km_class, "/sanson_flamsteed-" ) ) {
         type = AST__SFL;

      } else if( strstr( km_class, "/cobe_quad_spherical_cube-" ) ) {
         type = AST__CSC;

      } else if( strstr( km_class, "/quad_spherical_cube-" ) ) {
         type = AST__QSC;

      } else if( strstr( km_class, "/tangential_spherical_cube-" ) ) {
         type = AST__TSC;
      }

/* Report an error if the supplied KeyMap does not represent an ASDF
   skyprojection of any supported class. */
      if( type == AST__WCSBAD ) {
         astError( AST__BYAML, "astRead(YamlChan): Unsupported or illegal ASDF "
                   "skyprojection class: %s", status, GetAsdfClass(km,status) );
      }

/* Create the WcsMap. Note, the WcsMap constructor uses 1-based axis
   indices. */
      result = (AstMapping *) astWcsMap( 2, type, 1, 2, " ", status );

/* Set any required projection parameters (all on the latitude axis).
   Note, the protected astSetPV function uses zero-based axis indices. */
      for( m = 0; m <= maxm; m++ ) {
         if( pv[ m ] != AST__BAD ) astSetPV( result, 1, m, pv[ m ] );
      }

/* See which direction (pix->sky or sky->pix) is defined by the forward
   operation of the supplied ASDF transform. The foward transformation of
   the default WcsMap created above goes from sky to pix, so invert the
   WcsMap if required. */
      dir = Get0C( km, "direction", 1, "pix2sky", status );
      if( astChrMatch( dir, "pix2sky" ) ){
         astInvert( result );
      } else if( !astChrMatch( dir, "sky2pix" ) && astOK ){
         astError( AST__BYAML, "astRead(YamlChan): Found 'direction: %s' in a "
                   "%s. Direction should be 'pix2sky' or 'sky2pix'.", status,
                   dir, km_class );
      }

/* ASDF uses degrees for all inputs and outputs of a sky projection, but
   AST uses radians. Put a ZoomMap at each end of the WcsMap (in series)
   to do the conversions. Flag these using astSetAllowSimplify so that
   they can merge into their neighbours during a subsequent restricted
   simplification. */
      zm = astZoomMap( 2, AST__DD2R, " ", status );
      astSetAllowSimplify( zm );
      temp = astCmpMap( zm, result, 1, " ", status );
      (void) astAnnul( result );
      result = (AstMapping *) temp;

      astInvert( zm );
      temp = astCmpMap( result, zm, 1, " ", status );
      zm = astAnnul( zm );
      (void) astAnnul( result );
      result = (AstMapping *) temp;

/* Free resources. */
      km_class = astFree( (void *) km_class );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'sky_projection' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static void ReadStep( AstYamlChan *this, AstKeyMap *km, int report,
                      AstMapping **pmap, AstFrame **frm, AstMapping **map,
                      int *status ){
/*
*  Name:
*     ReadStep

*  Purpose:
*     Read a Frame and Mapping from a KeyMap holding an ASDF step.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadStep( AstYamlChan *this, AstKeyMap *km, int report,
*                    AstMapping **pmap, AstFrame **frm, AstMapping **map,
*                    int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates a Frame and a Mapping from the YAML stored in
*     the supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF step.
*     report
*        Report an error if no Mapping is found in the step?
*     pmap
*        Address at which to return a pointer to a Mapping that must be
*        applied to generate values in the returned AST Frame (frm). This may
*        be needed if the retuned AST Frame has axis units that differ from
*        those of the ASDF frame (e.g. a celestial_frame in units of degs
*        and an AST SkyFrame in units of radians). It is returned as NULL
*        if "frm" has the same units as the ASDF frame.
*     frm
*        Address at which to return the Frame pointer.
*     map
*        Address at which to return the Mapping pointer.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstMapping *axesmap;
   AstMapping *stepmap;
   int nax;

/* Initialise */
   if( pmap ) *pmap = NULL;
   *frm = NULL;
   *map = NULL;

/* Check the global error status. */
   if ( !astOK ) return;

/* Read an object of a suitable class. */
   if( IsA( km, "step", status ) ) {

/* Get the Mapping from the frame of this step to the frame of the next
   step, reporting an error if not present only if requested. Note the
   number of axes expected for the frame stored in the step. */
      subkm = Get0A( km, "transform", !report, NULL, "transform", status );
      if( subkm ) {
         stepmap = ReadTransform( this, subkm, status );
         subkm = astAnnul( subkm );
         nax = astGetNin( stepmap );
      } else {
         nax = 0;
         stepmap = NULL;
      }

/* Get the frame, reporting an error if not present, together with any
   Mapping needed to convert ASDF axis values into AST axis values (e.g.
   due to different units). */
      subkm = Get0A( km, "frame", 0, NULL, "frame", status );
      *frm = ReadFrame( subkm, nax, &axesmap, status );
      subkm = astAnnul( subkm );

/* Combine the step map with any mapping need to convert ASDF axis values
   into AST axis values. Attempt to merge the axesmap into the first
   component Mapping in the stepmap (the later component mappings are left
   unchanged in order to preserve the structure of the ASDF transform chain). */
      if( axesmap && stepmap ) {
         astInvert( axesmap );
         *map = (AstMapping *) astCmpMap( axesmap, stepmap, 1, " ", status );
         stepmap = astAnnul( stepmap );
         astInvert( axesmap );
      } else {
         *map = stepmap;
      }

/* Return the axes units map if required. Otehrwise annul it. */
      if( pmap ) {
         *pmap = axesmap;
      } else if( axesmap ){
         axesmap = astAnnul( axesmap );
      }

/* Report an error if the ASDF object in the supplied KeyMap is of the
   wrong class. */
   } else if( astOK ){
      astError( AST__INTER, "astRead(StcChan): Expected KeyMap to "
                "hold an ASDF step but got a %s (internal AST programming "
                "error).", status, GetAsdfClass( km, status ) );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'step' "
                "object.", status );
   }

}

static AstMapping *ReadTransform( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadTransform

*  Purpose:
*     Read an AST Mapping from a KeyMap holding an ASDF transform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstMapping *ReadTransform( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST Mapping from the YAML stored in the
*     supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF transform.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Mapping.
*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstMapping *inverse;
   AstMapping *new;
   AstMapping *result;
   const char *class;
   const char *name;
   double *coeffs_f;
   double *coeffs_i;
   double *lbnd_f;
   double *lbnd_i;
   double *ubnd_f;
   double *ubnd_i;
   int *inperm;
   int *outperm;
   int ncoeff_f;
   int ncoeff_i;
   int nel;
   int nin;
   int nout;

/* Initialise */
   result = NULL;

/* Check inherited status */
   if( !astOK ) return result;

/* Report an error if the supplied KeyMap does not represent a transform. */
   if( !IsA( km, "transform", status ) ) {
      astError( AST__BYAML, "astRead(YamlChan): Expected KeyMap to hold "
                "a transform but got a %s", status, GetAsdfClass(km,status) );

/* Create a Mapping of the required class. */
   } else {
      class = GetAsdfClass( km, status );
      if( class ) {
         if( IsASkyProjection( class, status ) ){
            result = ReadSkyProjection( km, status );
         } else if( IsAIdentity( class, status ) ){
            result = ReadIdentity( km, status );
         } else if( IsAScale( class, status ) ){
            result = ReadScale( km, status );
         } else if( IsAMultiplyScale( class, status ) ){
            result = ReadMultiplyScale( km, status );
         } else if( IsARemap_Axes( class, status ) ){
            result = ReadRemapAxes( km, status );
         } else if( IsAShift( class, status ) ){
            result = ReadShift( km, status );
         } else if( IsACompose( class, status ) ){
            result = ReadCompose( this, km, status );
         } else if( IsAConcatenate( class, status ) ){
            result = ReadConcatenate( this, km, status );
         } else if( IsAConstant( class, status ) ){
            result = ReadConstant( km, status );
         } else if( IsAFix_Inputs( class, status ) ){
            result = ReadFixInputs( this, km, status );
         } else if( IsAAffine( class, status ) ){
            result = ReadAffine( this, km, status );
         } else if( IsARotate2d( class, status ) ){
            result = ReadRotate2d( km, status );
         } else if( IsARotate_Sequence_3d( class, status ) ){
            result = ReadRotateSequence3d( km, status );
         } else if( IsARotate3d( class, status ) ){
            result = ReadRotate3d( km, status );
         } else if( IsALinear1d( class, status ) ){
            result = ReadLinear1d( km, status );
         } else if( IsAOrtho_Polynomial( class, status ) ){
            result = ReadOrthoPolynomial( this, km, status );
         } else if( IsAPlanar2d( class, status ) ){
            result = ReadPlanar2d( km, status );
         } else if( IsAPolynomial( class, status ) ){
            result = ReadPolynomial( this, km, status );
         } else if( astOK ) {
            astError( AST__BYAML, "astRead(YamlChan): The '%s' class of "
                      "ASDF transform is not currently supported by AST.",
                      status, class );
         }

/* Set its name. */
         name = Get0C( km, "name", 1, NULL, status );
         if( name ) {
            if( astGetPreserveName( this ) ) {
               astSetIdent( result, name );
            } else {
               astSetID( result, name );
            }
         }

/* If there is an explicit inverse in the Transform, we need to create
   and return a TranMap encapsulating "this" transform and the (inverse
   of) the "inverse" transform. */
         subkm = Get0A( km, "inverse", 1, NULL, "transform", status );
         if( subkm ) {
            inverse = ReadTransform( this, subkm, status );
            subkm = astAnnul( subkm );

/* Check the number of inputs and outputs correspond. Note, the inverse
   operation of the ASDF transform is defined by the *forward* operation
   of the custom inverse transform. This is different to an AST TranMap,
   where the inverse transformation of the TranMap is defined by the
   *inverse* transformation of the second encapsulated Mapping. */
            if( astGetNin( result ) != astGetNout( inverse ) ||
                astGetNout( result ) != astGetNin( inverse ) ) {
               if( astOK ) astError( AST__BYAML, "astRead(YamlChan): The number "
                                     "of inputs (%d) and outputs (%d) for the "
                                     "inverse Mapping (a %s) do not match the "
                                     "numbers required by the parent Mapping "
                                     "(a %s).", status, astGetNin( inverse ),
                                     astGetNout( inverse ), astGetClass( inverse ),
                                     astGetClass( result ) );
            }

/* Invert the inverse Mapping. This means the inverse transformation of
   the returned Mapping is now defined by the inverse transformation of
   "inverse". */
            astInvert( inverse );

/* If both Mappings are PermMaps we can combine them into a single PermMap. */
            new = NULL;
            if( astIsAPermMap( result ) && astIsAPermMap( inverse ) ){

/* The number of outputs and the outperm array are defined by the forward
   transformation of the forward Mapping. */
               nout = astGetNout( result );
               outperm = astGetOutPerm( result );

/* The number of inputs and the inperm array are defined by the inverse
   transformation of the inverse Mapping. */
               nin = astGetNin( inverse );
               inperm = astGetInPerm( inverse );

/* Annul the original PermMaps and construct the returned PermMap. */
               result = astAnnul( result );
               inverse = astAnnul( inverse );
               new  = (AstMapping *) astPermMap( nin, inperm, nout, outperm,
                                                 NULL, " ", status );
/* Free the arrays. */
               outperm = astFree( outperm );
               inperm = astFree( inperm );

/* If both Mappings are PolyMaps we can combine them into a single PolyMap. */
            } else if( astIsAPolyMap( result ) && astIsAPolyMap( inverse ) ){

/* Get the coefficients of the forward transformation of "result". These
   define the forward transformation of the new PolyMap. */
               nin = astGetNin( result );
               astPolyCoeffs( result, 1, 0, NULL, &ncoeff_f );
               nel = ncoeff_f*( nin + 2 );
               coeffs_f = astMalloc( nel*sizeof(*coeffs_f) );
               astPolyCoeffs( result, 1, nel, coeffs_f, &ncoeff_f );

/* Get the coefficients of the inverse transformation of "inverse". These
   define the inverse transformation of the new PolyMap. */
               nout = astGetNout( inverse );
               astPolyCoeffs( inverse, 0, 0, NULL, &ncoeff_i );
               nel = ncoeff_i*( nout + 2 );
               coeffs_i = astMalloc( nel*sizeof(*coeffs_i) );
               astPolyCoeffs( inverse, 0, nel, coeffs_i, &ncoeff_i );

/* If both Mappings are ChebyMaps, create a new ChebyMap that is
   equivalent to the two original ChebyMaps. */
               if( astIsAChebyMap( result ) && astIsAChebyMap( inverse ) ){
                  lbnd_f = astMalloc(nin*sizeof(*lbnd_f) );
                  ubnd_f = astMalloc(nin*sizeof(*ubnd_f) );
                  astChebyDomain( result, 1, lbnd_f, ubnd_f );

                  lbnd_i = astMalloc(nout*sizeof(*lbnd_i) );
                  ubnd_i = astMalloc(nout*sizeof(*ubnd_i) );
                  astChebyDomain( inverse, 0, lbnd_i, ubnd_i );

                  result = astAnnul( result );
                  inverse = astAnnul( inverse );
                  new = (AstMapping *) astChebyMap( nin, nout, ncoeff_f,
                                                   coeffs_f, ncoeff_i, coeffs_i,
                                                   lbnd_f, ubnd_f, lbnd_i,
                                                   ubnd_i, " ", status );
                  lbnd_f = astFree( lbnd_f );
                  ubnd_f = astFree( ubnd_f );
                  lbnd_i = astFree( lbnd_i );
                  ubnd_i = astFree( ubnd_i );

/* If neigher Mapping is a ChebyMap, create a new PolyMap that is
   equivalent to the two original PolyMaps. */
               } else if( !astIsAChebyMap( result ) && !astIsAChebyMap( inverse ) ){
                  result = astAnnul( result );
                  inverse = astAnnul( inverse );
                  new = (AstMapping *) astPolyMap( nin, nout, ncoeff_f,
                                                   coeffs_f, ncoeff_i, coeffs_i,
                                                   " ", status );
               }

/* Free remaining resources. */
               coeffs_f = astFree( coeffs_f );
               coeffs_i = astFree( coeffs_i );

/* If the two Mappings are equal, we just return the forward Mapping. */
            } else if( astEqual( result, inverse ) ){
               inverse = astAnnul( inverse );
               new = result;
            }

/* If none of the above produced a new Mapping, create a TranMap holding
   the two Mappings. */
            if( !new ) {
               new = (AstMapping *) astTranMap( result, inverse, " ", status );
               inverse = astAnnul( inverse );
               result = astAnnul( result );
            }

/* Return the new Mapping. */
            result = new;
         }
      }
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'transform' "
                "object.", status );
   }

/* Return the Mapping. */
   return result;
}

static AstKeyMap *ReadValues( AstYamlChan *this, yaml_parser_t *parser, int *status ) {
/*
*  Name:
*     ReadValues

*  Purpose:
*     Read YAML keyword values from the source and store in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstKeyMap *ReadValues( AstYamlChan *this, yaml_parser_t *parser, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function parses the YAML read from the source function,
*     identifies the keywords and values and stores them in a returned
*     KeyMap. This keymap uses nested keymaps to retain the structure of
*     the YAML document.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     parser
*        Pointer to the libyaml parser.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new KeyMap.
*/

/* Local Variables: */
   AstKeyMap *result;
   yaml_event_t  event;
   int state;

/* Initialise */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Initialise a variable that indicates what we are looking for next in
   the yaml event list. */
   state = 0;

/* Loop round events. Break out when a complete WCS object has been read. */
   while( astOK && !this->gotwcs ) {

/* Get the next yaml event. */
      if( !yaml_parser_parse( parser, &event )) {
         astError( AST__LYAML, "astRead(%s): Error %d occurred calling "
                   "libyaml function '%s':", status, astGetClass( this),
                   parser->error, "yaml_parser_parse" );
         LibYamlParserError( parser, status );

/* State zero: look for the "stream start" event. */
      } else if( state == 0 ) {
         if( event.type != YAML_STREAM_START_EVENT ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text: expected a stream-start event.",
                      status, astGetClass(this) );
         }
         state = 1;

/* State 1: look for the "document start" event. */
      } else if( state == 1 ) {
         if( event.type != YAML_DOCUMENT_START_EVENT ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text: expected a document-start event.",
                      status, astGetClass(this) );
         }
         state = 2;

/* State 2: Look for the event marking the start of the top-level YAML
   Mapping. */
      } else if( state == 2 ) {
         if( event.type != YAML_MAPPING_START_EVENT ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text: expected a mapping-start event.",
                      status, astGetClass(this) );
         }

/* Read the YAML mapping that follows, then move to state 3. */
         result = ReadYAMLMapping( this, parser, status );
         state = 3;

/* State 3: look for the "document end" event */
      } else if( state == 3 ) {
         if( event.type != YAML_DOCUMENT_END_EVENT ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text: expected a document-end event.",
                      status, astGetClass(this) );
         }
         state = 4;

/* State 4: look for the "stream end" event */
      } else if( state == 4 ) {
         if( event.type != YAML_STREAM_END_EVENT ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text: expected a stream-end event.",
                      status, astGetClass(this) );
         }
         state = 5;

/* Once the stream-end has happened, we have nothing more to do so
   delete the event and break out of the loop. */
         yaml_event_delete( &event );
         break;

/* Should never happen. */
      } else {
         astError( AST__INTER, "astRead(%s): Illegal state %d in ReadValues "
                   "(internal AST programming error).", status,
                   astGetClass(this), state );
      }

/* Delete th event before getting the next event. */
      yaml_event_delete( &event );
   }

/* Sanity check. */
   if( astOK && !this->gotwcs && state != 5 ) {
      astError( AST__INTER, "astRead(%s): Illegal final state %d in ReadValues "
                "(internal AST programming error).", status, astGetClass(this),
                state );
   }

/* Return the pointer to the values KeyMap. */
   return result;
}

static AstFrameSet *ReadWcs( AstYamlChan *this, AstKeyMap *km, int *status ){
/*
*  Name:
*     ReadWcs

*  Purpose:
*     Read an AST FrameSet from a KeyMap holding an ASDF WCS.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstFrameSet *ReadWcs( AstYamlChan *this, AstKeyMap *km, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function creates an AST FrameSet from the YAML stored in
*     the supplied KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. Its contents must represent an ASDF wcs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new FrameSet.
*/

/* Local Variables: */
   AstFrame *frame;
   AstFrameSet *result;
   AstMapping *map;
   AstMapping *mapnext;
   AstMapping *pmap;
   AstMapping *totmap;
   AstObject **steps;
   const char *name;
   int istep;
   int nstep;

/* Initialise */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Read an object of a suitable class. */
   if( IsA( km, "wcs", status ) ) {

/* Get the name of the wcs. The buffer use to hold the string may get
   over-written before w've finished with it so take a copy. */
      name = Get0C( km, "name", 0, NULL, status );
      if( name ) name = astStore( NULL, name, strlen(name) + 1 );

/* Get pointers to a set of KeyMaps, each of which holds one step in the
   transformation chain. */
      nstep = astMapLength( km, "steps" );
      if( nstep > 0 ) {
         steps = astCalloc( nstep, sizeof(*steps) );
         astMapGet1A( km, "steps", nstep, &nstep, steps );
         if( astOK ) {

/* Read the first step. Each step has a Frame plus a Mapping from
   that Frame to the Frame in the following step (except for the
   last step, which should have no Mapping). */
            ReadStep( this, (AstKeyMap *) steps[ 0 ], 1, NULL, &frame, &map, status );
            steps[ 0 ] = astAnnul( steps[ 0 ] );

/* Create a FrameSet containing the above Frame, setting its Ident or ID to
   the above name. Then free the Frame pointer that is no longer needed. */
            if( astGetPreserveName( this ) ){
               result = astFrameSet( frame, "Ident=%s", status, name );
            } else {
               result = astFrameSet( frame, "ID=%s", status, name );
            }
            frame = astAnnul( frame );

/* Loop round reading any remaining steps. The last step should give a
   Frame but no Mapping so do not report an error for (istep==nstep-1). */
            for( istep = 1; istep < nstep; istep++ ) {
               ReadStep( this, (AstKeyMap *) steps[ istep ], (istep < nstep - 1),
                         &pmap, &frame, &mapnext, status );
               steps[ istep ] = astAnnul( steps[ istep ] );

/* The "pmap" mapping (possibly) returned by the above call represents a
   Mapping that must be applied to get axis values in the units of the
   AST Frame (e.g. the axes of an AST SkyFrame always represent radians
   but an ASDF celestial_frame may represent degrees). This Mapping must
   be appended to the end of the current mapping chain prior to adding
   the Frame. Attempt to merge "pmap" into the last component Mapping (the
   earlier component mappings are left unchanged in order to preserve the
   structure of the ASDF transform chain). */
               if( pmap ) {
                  totmap = (AstMapping *) astCmpMap( map, pmap, 1, " ", status );
                  map = astAnnul( map );
                  pmap = astAnnul( pmap );
               } else {
                  totmap = map;
               }

/* Perform a restricted simplification on the mapping before including it in
   the FrameSet. This attempts to simplify only those component Mappings
   that have been flagged using astAllowSimplify. The only Mappings so
   flagged should be any extra ZoomMaps that have been introduced in
   order to perform conversions between radians (as used by AST) and
   degrees (as used by ASDF). */
               astSetRestrictedSimplify( totmap );
               map = astSimplify( totmap );
               (void) astAnnul( totmap );
               totmap = map;

/* Add the Frame into the FrameSet, then free the objects that are no
   longer needed. */
               astAddFrame( result, AST__CURRENT, totmap, frame );
               totmap = astAnnul( totmap );
               frame = astAnnul( frame );

/* Use the mapping associated with the current step to generate the Frame
   coordinates associated with the next step (if any). */
               map = mapnext;
            }
         }

/* Report an error if the final step had a mapping. */
         if( map ) {
            map = astAnnul( map );
            if( astOK ) {
               if( name && astChrLen( name ) > 0 ) {
                  astError( AST__BASDF, "astRead(YamlChan): The final step "
                            "in ASDF 'wcs' object named '%s' contained an "
                            "unrequired mapping.", status, name );
               } else {
                  astError( AST__BASDF, "astRead(YamlChan): The final step "
                            "in an ASDF 'wcs' object contained an unrequired "
                            "mapping.", status );
               }
            }
         }

/* Free remaining resourcess. */
         steps = astFree( steps );

/* Report an error if no steps were found in the wcs. */
      } else if( astOK ) {
         if( name && astChrLen( name ) > 0 ) {
            astError( AST__BASDF, "astRead(YamlChan): ASDF 'wcs' object "
                      "named '%s' contains no steps.", status, name );
         } else {
            astError( AST__BASDF, "astRead(YamlChan): ASDF 'wcs' object "
                      "contains no steps.", status );
         }
      }

/* Free resources. */
      name = astFree( (void *) name );

/* Report an error if the ASDF object in the supplied KeyMap is of th
   wrong class. */
   } else if( astOK ){
      astError( AST__INTER, "astRead(StcChan): Expected KeyMap to "
                "hold an ASDF WCS but got a %s (internal AST programming "
                "error).", status, GetAsdfClass( km, status ) );
   }

/* If an error occurred, report the context. */
   if( !astOK ) {
      astError( astStatus, "Error occurred when reading an ASDF 'wcs' "
                "object.", status );
   }

/* Return the AST FrameSet. */
   return result;
}

static void ReadYAMLAlias( AstYamlChan *this, AstKeyMap *km, const char *id,
                           const char *anchor, int *status ){
/*
*  Name:
*     ReadYAMLAlias

*  Purpose:
*     Store an aliased value in the supplied KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadYAMLAlias( AstYamlChan *this, AstKeyMap *km, const char *id,
*                         const char *anchor, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function stores a value in KeyMap "km" using key "id". The
*     value stored is the value currently associated with the supplied
*     anchor, which is read from the "anchors" KeyMap stored in the
*     YamlChan structure.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap in which to store the value.
*     id
*        The key within "km" for the new entry to hold the value.
*     anchor
*        The name of the anchor whose value is to be stored in "km".
*        The anchor must previously have been assigned a value.
*     status
*        Pointer to the inherited status variable.

*/

/* Check inherited status. */
   if( !astOK ) return;

/* Check the anchor has a value in the anchors keymap. */
   if( this->anchors && astMapHasKey( this->anchors, anchor ) ){

/* Copy the entry from the anchors keymap to the supplied keymap. */
      astMapCopyEntry( km, anchor, this->anchors, 0 );

/* Rename it. */
      astMapRename( km, anchor, id );

/* Report an error if no definition was found for the anchor. */
   } else if( astOK ){
      astError( AST__BASDF, "astRead(YamlChan): No definition found "
                "for YAML anchor '%s'.", status, anchor );
   }
}

static void ReadYAMLEvent( AstYamlChan *this, yaml_parser_t *parser,
                           yaml_event_t *event, AstKeyMap *km, const char *id,
                           int *status ){
/*
*  Name:
*     ReadYAMLEvent

*  Purpose:
*     Read data indicated by a YAML event into a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadYAMLEvent( AstYamlChan *this, yaml_parser_t *parser,
*                         yaml_event_t *event, AstKeyMap *km, const char *id,
*                         int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     Invoke this immediately after getting the name of an item. It reads
*     the value and stores it in the supplied KeyMap, using the supplied id
*     as the key. If the KeyMap already contains an entry for the supplied
*     id, the new value is appended to the end of the list of values
*     associated with the id. Otherwise, a new enry is created in the
*     KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     parser
*        Pointer to the libyaml parser.
*     event
*        Pointer to the libyaml event.
*     km
*        Pointer to the KeyMap in which to store the item.
*     id
*        The string to use as the key for the item in the KeyMap.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstKeyMap *kmval;
   char *anchor;
   char *class;
   char *text;
   double dval;
   int ival;
   unsigned char bval;

/* Check the global error status. */
   if ( !astOK ) return;

/* New item is a Mapping... */
   if( event->type == YAML_MAPPING_START_EVENT ) {
      anchor = (char *) event->data.mapping_start.anchor;

/* Get the YAML class of the object stored in the YAML Mapping. */
      class = (char *) event->data.mapping_start.tag;
      if( class ) {
         class = astStore( NULL, class, strlen( class ) + 1 );

/* If this is an ASDF or AST NATIVE class, store a default value for the
   YamlEncoding attribute in the YamlChan structure. */
         if( strstr( class, STARLINK_TAG ) ){
            this->defenc = NATIVE_ENCODING;
         } else if( strstr( class, ASTROPY_TAG ) ){
            this->defenc = ASDF_ENCODING;
         } else if( strstr( class, STSCI_TAG ) ){
            this->defenc = ASDF_ENCODING;
         }
      }

/* Get a KeyMap holding the content of the YAML Mapping. This consumes
   subsequent events up to and including the "Mapping end" event corresponding
   to the "Mapping start" event read above. */
      kmval = ReadYAMLMapping( this, parser, status );

/* Store the YAML class in the sub keymap. If no class is specified a
   fixed string will be used to indicate the object has no type (usuall
   the start of a sequence).  */
      astMapPut0C( kmval, "ASDFclass", class?class:ANON_TYPE, NULL );

/* Store the sub keymap in the supplied keymap. If no previous item has
   been stored with this id, a new 1-element vector entry is created.
   Otherwise, the existing vector entry is extended and the new value is
   stored at the end. */
      PutIntoKeyMap( km, id, AST__OBJECTTYPE, kmval, status );

/* If this mapping holds a wcs object, store a flag in the YamlChan
   structure indicating that a WCS object is now available in the KeyMap
   and there is therefore no need to continue reading more YAML. */
      if( class && !strncmp( GWCS_TAG"wcs-", class, strlen(GWCS_TAG"wcs-") ) ){
         this->gotwcs = 1;
      }

/* Free resources. */
      if( kmval ) kmval = astAnnul( kmval );
      class = astFree( class );

/* New item is a scalar... */
   } else if( event->type == YAML_SCALAR_EVENT ) {
      anchor = (char *) event->data.scalar.anchor;
      text = (char *) event->data.scalar.value;
      dval = astChr2Double( text );
      if( dval != AST__BAD ) {
         if( strstr( text, "." ) ){
            PutIntoKeyMap( km, id, AST__DOUBLETYPE, &dval, status );
         } else {
            ival = (int) dval;
            PutIntoKeyMap( km, id, AST__INTTYPE, &ival, status );
         }

      } else if( astChrMatch( text, AST__BAD_STRING ) ) {
         dval = AST__BAD;
         PutIntoKeyMap( km, id, AST__DOUBLETYPE, &dval, status );

      } else if( astChrMatch( text, "False" ) ){
         bval = 0;
         PutIntoKeyMap( km, id, AST__BYTETYPE, &bval, status );

      } else if( astChrMatch( text, "True" ) ){
         bval = 1;
         PutIntoKeyMap( km, id, AST__BYTETYPE, &bval, status );

      } else {
         PutIntoKeyMap( km, id, AST__STRINGTYPE, text, status );
      }

/* New item is a sequence... */
   } else if( event->type == YAML_SEQUENCE_START_EVENT ) {
      anchor = (char *) event->data.sequence_start.anchor;

/* Read the sequence values into the KeyMap. This consumes subsequent events
   up to and including the "sequence end" event corresponding to the
   "sequence start" event read above. */
      ReadYAMLSequence( this, km, id, parser, status );

/* New item is an alias (i.e. a reference to a previously defined anchor). */
   } else if( event->type == YAML_ALIAS_EVENT ) {
      anchor = NULL;
      ReadYAMLAlias( this, km, id, (char *) event->data.alias.anchor, status );

/* Report an error for any unsupported YAML event types. */
   } else {
      astError( AST__YAML, "astRead(%s): Cannot interpret the "
                "supplied YAML text: Unexpected item of type '%s'.", status,
                astGetClass(this),  YamlEventType( *event )  );
   }

/* If the event had an associated anchor, associate the anchor with the
   entry just added to the supplied KeyMap. */
   StoreAnchor( this, (char *) anchor, km, id, status );
}

static void ReadYAMLItem( AstYamlChan *this, yaml_parser_t *parser,
                          AstKeyMap *km, const char *id, int *status ){
/*
*  Name:
*     ReadYAMLItem

*  Purpose:
*     Read the contents of a YAML item into a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadYAMLItem( AstYamlChan *this, yaml_parser_t *parser,
*                        AstKeyMap *km, const char *id, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     Invoke this immediately after getting the name of an item. It reads
*     the value and creates a new entry in the supplied KeyMap, using the
*     supplied id as the key.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     parser
*        Pointer to the libyaml parser.
*     km
*        Pointer to the KeyMap in which to store the item.
*     id
*        The string to use as the key for the item in the KeyMap.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   yaml_event_t  event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get the next event from the parser. */
   if( !yaml_parser_parse( parser, &event ) ) {
      astError( AST__LYAML, "astRead(%s): Error %d occurred calling "
                "libyaml function '%s':", status, astGetClass( this),
                parser->error, "yaml_parser_parse" );
      LibYamlParserError( parser, status );

/* Read data indicated by the event into the KeyMap. */
   } else {
      ReadYAMLEvent( this, parser, &event, km, id, status );
   }

/* Delete the event. */
   yaml_event_delete( &event );
}

static AstKeyMap *ReadYAMLMapping( AstYamlChan *this, yaml_parser_t *parser, int *status ){
/*
*  Name:
*     ReadYAMLMapping

*  Purpose:
*     Read the contents of a YAML Mapping into a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstKeyMap *ReadYAMLMapping( AstYamlChan *this, yaml_parser_t *parser, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     Invoke this immediately after reading a "Start Mapping" event. It
*     consumes events upto and including the corresponding "End Mapping"
*     event. The value of the Mapping is returned as a new KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     parser
*        Pointer to the libyaml parser.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new KeyMap.
*/

/* Local Variables: */
   AstKeyMap *result;
   char *id;
   yaml_event_t  event;

/* Initialise */
   result = NULL;
   id = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Create the returned KeyMap. */
   result = astKeyMap( "SortBy=KeyAgeDown", status );

/* Loop round reading id:value pairs. Leave the loop if we have read a
   complete WCS object. */
   id = NULL;
   while( astOK && !this->gotwcs ) {

/* Read the next event. */
      if( !yaml_parser_parse( parser, &event ) ) {
         astError( AST__LYAML, "astRead(%s): Error %d occurred calling "
                   "libyaml function '%s':", status, astGetClass( this),
                   parser->error, "yaml_parser_parse" );
         LibYamlParserError( parser, status );

/* Read the id for the next item */
      } else if( event.type == YAML_SCALAR_EVENT ) {
         id = (char *) event.data.scalar.value;
         if( !id ) {
            astError( AST__YAML, "astRead(%s): Cannot interpret the "
                      "supplied YAML text:  blank scalar name encountered.",
                      status, astGetClass(this) );

/* Store the value of the item. */
         } else {
            id = astStore( NULL, id, strlen( id ) + 1 );
            ReadYAMLItem( this, parser, result, id, status );
            id = astFree( id );
         }

/* End the Mapping */
      } else if( event.type == YAML_MAPPING_END_EVENT ) {
         break;

/* Unexpected events. */
      } else {
         astError( AST__YAML, "astRead(%s): Cannot interpret the "
                   "supplied YAML text:  unexpected event encountered.",
                   status, astGetClass(this) );
      }

/* Delete the event before getting the next one from the parser. */
      yaml_event_delete( &event );
   }

/* Remove the entry used to track the previously added key (see
   PutINtoKeyMap). */
   astMapRemove( result, "PREVIOUS_KEY" );

/* Free the final id string. */
   id = astFree( id );

/* Return the KeyMap. */
   return result;
}

static void ReadYAMLSequence( AstYamlChan *this, AstKeyMap *km, const char *id,
                              yaml_parser_t *parser, int *status ) {
/*
*  Name:
*     ReadYAMLSequence

*  Purpose:
*     Read the contents of a YAML Sequence into a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void ReadYAMLSequence( AstYamlChan *this, AstKeyMap *km, const char *id,
*                            yaml_parser_t *parser, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     Invoke this immediately after reading a "Start Sequence" event. It
*     consumes events upto and including the corresponding "End Sequence"
*     event. The values in the Sequence are stored in the supplied
*     KeyMap using the supplied id.
*
*     A 1-d sequence is stored as a single vector valued entry with the
*     supplied id in the supplied keymap. A multi-dimensional sequence is
*     stored as a single KeyMap entry with the supplied id in the supplied
*     keymap. The KeyMap contains a vector valued entry for each "row" of
*     values (where a row corresponds to a contiguous set of values on the
*     fastest moving axis). Each such vector value entry has a key of the
*     form "<id>_<i>_<j>_<k>..." where <id> is the supplied id and <i>,
*     <j>, <k>, etc, are zero-based integer indices, There should be
*     "ndim-1" indices in the key, where ndim is the number of dimensions
*     in the  multi-dimensional sequence. For instance, a KeyMap holding a
*     2D array for id "matrix" will have entries "matrix_0", "matrix_1",
*     etc., each holding the values of one row of the matrix. A KeyMap
*     holding a 3D array for id "cube" will have entries "cube_0_0",
*     "cube_0_1", "cube_1_0", "cube_1_1", etc., each holding the values of
*     one row of the cube.

*     A entry holding a multi-dimensional array will have an "ASDFclass"
*     entry of "<sequence>" (the value of macro SEQ_TYPE).

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap in which to store the sequence.
*     id
*        String to identify the sequence within the KeyMap.
*     parser
*        Pointer to the libyaml parser.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A new KeyMap holding the sequence values.

*/

/* Local Variables: */
   AstKeyMap *newkm;
   AstKeyMap *stage;
   AstKeyMap *subkm;
   char *key;
   const char *cval;
   const char *subclass;
   double dval;
   int allnum;
   int allobj;
   int allseq;
   int alltext;
   int ival;
   int nval;
   int type;
   yaml_event_t  event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Create a KeyMap to act as a staging post for the values in the
   sequence. They are first read into this new KeyMap, and then moved
   to their final resting place. */
   stage = astKeyMap( "SortBy=KeyAgeDown", status );

/* Allocate space to hold the key. */
   key = astMalloc( strlen(id) + 10 );

/* Loop round reading values. Each value is stored as a separate element
   in the staging post, with its own unique key.  */
   alltext = 1;
   allnum = 1;
   allobj = 1;
   allseq = 1;
   nval = 0;
   while( astOK ) {

/* Read the next event. */
      if( !yaml_parser_parse( parser, &event ) ) {
         astError( AST__LYAML, "astRead(%s): Error %d occurred calling "
                   "libyaml function '%s':", status, astGetClass( this),
                   parser->error, "yaml_parser_parse" );
         LibYamlParserError( parser, status );

/* End the Sequence */
      } else if( event.type == YAML_SEQUENCE_END_EVENT ) {
         break;

/* Read the next sequence value and store it in the staging post KeyMap. */
      } else {
         sprintf( key, "%s_%d", id, nval++ );
         ReadYAMLEvent( this, parser, &event, stage, key, status );

/* Set flags indicating if all elements of the sequence are numerical
   scalars or textual scalars or object scalars. */
         if( astMapLength( stage, key ) == 1 ) {
            type = astMapType( stage, key );
            if( type == AST__DOUBLETYPE ||
                type == AST__FLOATTYPE ||
                type == AST__INTTYPE ||
                type == AST__SINTTYPE ||
                type == AST__BYTETYPE ){
               alltext = 0;
               allobj = 0;
               allseq = 0;
            } else if( type == AST__STRINGTYPE ){
               allnum = 0;
               allobj = 0;
               allseq = 0;
            } else if( type == AST__OBJECTTYPE ){
               allnum = 0;
               alltext = 0;

/* Set a flag if all the objects are sequences. */
               astMapGet0A( stage, key, &subkm );
               if( !astMapGet0C( subkm, "ASDFclass", &subclass ) ) {
                  astError( AST__INTER, "astRead(YamlChan): No ASDFclass found "
                            "in KeyMap (internal AST programming error)", status );
               } else if( strcmp( subclass, SEQ_TYPE ) ) {
                  allseq = 0;
               }
               subkm = astAnnul( subkm );

            } else {
               allnum = 0;
               alltext = 0;
               allobj = 0;
               allseq = 0;
            }

         } else {
            allnum = 0;
            alltext = 0;
            allobj = 0;
         }
      }

/* Delete the event before getting the next one from the parser. */
      yaml_event_delete( &event );
   }

/* If an entry with the supplied id already exists in the supplied
   keymap, then the sequence just read must be an element within some
   parent sequence. In which case, the existing entry should hold a
   list of KeyMap pointers holding the previous elements of the parent
   sequence. Check this is so and then append the staging KeyMap to the
   end of the entry. */
   type = astMapType( km, id );
   if( type != AST__BADTYPE ){
      if( type != AST__OBJECTTYPE && astOK ){
         astError( AST__INTER, "astRead(YamlChan): The container for the "
                   "nested YAML sequence named '%s' should be a KeyMap but "
                   "has type %d (internal AST programming error).", status,
                   id, type );
      } else {
         astMapPutElemA( km, id, -1, stage );
      }

/* If an entry with the supplied id does not yet exist in the supplied
   KeyMap, create one now. */
   } else {

/* If all elements of the sequence just read were numerical scalars,
   concatenate them into a numerical vector entry within the supplied
   KeyMap, using the supplied id. */
      if( allnum ) {
         for( ival = 0; ival < nval; ival++ ) {
            sprintf( key, "%s_%d", id, ival );
            astMapGet0D( stage, key, &dval );
            astMapPutElemD( km, id, -1, dval );
         }

/* If all elements of the sequence just read were textual scalars,
   concatenate them into a textual vector entry within the supplied
   KeyMap, using the supplied id. */
      } else if( alltext ) {
         for( ival = 0; ival < nval; ival++ ) {
            sprintf( key, "%s_%d", id, ival );
            astMapGet0C( stage, key, &cval );
            astMapPutElemC( km, id, -1, cval );
         }

/* If all elements of the sequence just read were object scalars,
   concatenate them into an object vector entry within the supplied
   KeyMap, using the supplied id. */
      } else if( allobj ) {

/* If multiple objects have just been read and they all represent a nested
   sequence, concatenate all their entries into a new KeyMap and then
   store the new KeyMap in the supplied KeyMap. */
         if( allseq && nval > 1 ) {
            newkm = astKeyMap( " ", status );
            for( ival = 0; ival < nval; ival++ ) {
               sprintf( key, "%s_%d", id, ival );
               astMapGet0A( stage, key, &subkm );
               astMapCopy( newkm, subkm );
               subkm = astAnnul( subkm );
            }

            astMapPut0A( km, id, newkm, NULL );
            newkm = astAnnul( newkm );

/* Otherwise, concatenate them into an object vector entry within the
   supplied KeyMap, using the supplied id. */
         } else {
            for( ival = 0; ival < nval; ival++ ) {
               sprintf( key, "%s_%d", id, ival );
               astMapGet0A( stage, key, &subkm );
               astMapPutElemA( km, id, -1, subkm );
               subkm = astAnnul( subkm );
            }
         }

/* For any other sort of sequence, store the staging KeyMap directly in
   the supplied KeyMap. */
      } else {
         astMapPut0C( stage, "ASDFclass", SEQ_TYPE, NULL );
         astMapPut0A( km, id, stage, NULL );
      }
   }

/* Free resources. */
   stage = astAnnul( stage );
   key = astFree( key );
}

static void SetNotAsdf( AstCmpMap *map, int *status ){
/*
*  Name:
*     SetNotAsdf

*  Purpose:
*     Set the proxy pointers in a CmpMap to indicate that it has been
*     checked by IsAsdfTransform.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void SetNotAsdf( AstCmpMap *map, int *status )

*  Description:
*     This function sets the proxy pointer in the supplied CmpMap to
*     NOTASDF, indicating that the CmpMap has been checked by IsAsdfTransform
*     and found not to be equivalent to an ASDF atomic transform. If either
*     of the components of the CmpMap are themselves CmpMaps, then they
*     are also flagged in the same way.

*  Parameters:
*     map
*        A pointer to the CmpMap that is to be flagged.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstMapping *map1;
   AstMapping *map2;
   int series;
   int invert1;
   int invert2;

/* Check the global error status. */
   if ( !astOK ) return;

/* Indicate the supplied CmpMap is not equivalent to an atomic ASDF
   transform. */
   astSetProxy( map, NOTASDF );

/* Get the two component Mappings inside the supplied CmpMap. */
   astDecompose( map, &map1, &map2, &series, &invert1, &invert2 );

/* If either component is itself a CmpMap, call this function recursively
   to flag it as not equivalent to an atomic ASDF transform. */
   if( astIsACmpMap( map1 ) ) SetNotAsdf( (AstCmpMap *) map1, status );
   if( astIsACmpMap( map2 ) ) SetNotAsdf( (AstCmpMap *) map2, status );

/* Free resources. */
   map1 = astAnnul( map1 );
   map2 = astAnnul( map2 );
}

static int SimplifyAsdf( AstYamlChan *this, AstKeyMap **km, int *status ){
/*
*  Name:
*     SimplifyAsdf

*  Purpose:
*     Simplify an ASDF transform chain by removing deg:rad conversions.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     int SimplifyAsdf( AstYamlChan *this, AstKeyMap **km, int *status )

*  Description:
*     This function returns a pointer to a new KeyMap holding a copy of
*     the supplied ASDF transform, except that adjacent R2D and D2R
*     conversions are removed (because they cancel out). If possible, any
*     remaining R2D or D2R conersions are removed by absorbed into their
*     neighbouring transforms. The supplied KeyMap pointer is anulled.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Address of a pointer to a KeyMap holding the supplied ASDF
*        transform chain (usually but not necessarily a compose). If any
*        simplification occurs, the supplied KeyMap pointer is annulled
*        on exit and a new KeyMap pointer returned in its place. If no
*        simplification occurs, the supplied KeyMap pointer is returned
*        unchanged.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if any simplification took place. Zero if no
*     simplification took place.
*/

/* Local Variables: */
   AstKeyMap *tr[ 2 ];
   AstKeyMap *new;
   AstKeyMap **km_list;
   AstKeyMap *inv;
   AstKeyMap *tmp;
   AstKeyMap **pkm;
   AstKeyMap **pw;
   const char *tag;
   const char *name;
   int fillgaps;
   int ikm;
   int lr2d;
   int nel;
   int nkm;
   int nr2d_removed;
   int nr2d_found;
   int r2d;
   int ret;
   int simp0;
   int simp1;
   int simp2;

/* Initialise */
   ret = 0;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the YAML tag describing the ASDF object in the supplied KeyMap. */
   if( !astMapGet0C( *km, "YAMLTAG", &tag ) && astOK ) {
      if( astOK ) {
         astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF object has "
                   "no tag in SimplfyAsdf (internal AST programming error).",
                   status );
      }

/* First handle ASDF concatenates. */
   } else if( strstr( tag, "/concatenate" ) ){

/* If the supplied transform has a custom inverse, get a pointer to it
   and then attempt to simplify it using this function. */
      inv = NULL;
      if( astMapGet0A( *km, "inverse", &inv ) ){
         simp0 = SimplifyAsdf( this, &inv, status );
      } else {
         simp0 = 0;
      }

/* Get pointers to the KeyMaps holding the two component transforms
   inside the concatenate. */
      if( !astMapGet1A( *km, "forward", 2, &nel, tr ) ) {
         if( astOK ) {
            astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF concatenate "
                      "has no 'forward' component in SimplfyAsdf (internal AST "
                      "programming error).", status );
         }
      } else if( nel != 2 ) {
         if( astOK ) {
            astError( AST__INTER, "astWrite(YamlChan): Supplied ASDF concatenate "
                      "has unxepcted number (%d) of forward transforms in "
                      "SimplfyAsdf (internal AST programming error).", status, nel );
         }
      }

/* Call this function recursively on each one. */
      simp1 = SimplifyAsdf( this, tr + 0, status );
      simp2 = SimplifyAsdf( this, tr + 1, status );

/* If any simplification took place, create a new concatenate holding the
   simplified transformations, and return it in place of the supplied
   KeyMap. */
      if( simp0 || simp1 || simp2 ) {

/* Get the name from the supplied concatenate. */
         if( !astMapGet0C( *km, "name", &name ) ) name = NULL;

/* Create the new concatenate. */
         new = WriteAsdfConcatenate( this, (AstObject *) tr[ 0 ],
                                     (AstObject *) tr[ 1 ], (AstObject *) inv,
                                     name, status );

/* Return the new KeyMap in place of the supplied KeyMap. */
         (void) astAnnul( *km );
         *km = new;

/* Indicate that some simplification took place. */
         ret = 1;
      }

/* Free resources */
      tr[ 0 ] = astAnnul( tr[ 0 ] );
      tr[ 1 ] = astAnnul( tr[ 1 ] );
      if( inv ) inv = astAnnul( inv );

/* Now handle ASDF composes. */
   } else if( strstr( tag, "/compose" ) ){

/* If the supplied transform has a custom inverse, get a pointer to it
   and then attempt to simplify it using this function. */
      inv = NULL;
      if( astMapGet0A( *km, "inverse", &inv ) ){
         ret = SimplifyAsdf( this, &inv, status );
      }

/* Expand the compose out into a series of transforms to be applied in
   series. */
      km_list = NULL;
      nkm = 0;
      ExpandAsdf( this, *km, 1, &nkm, &km_list, status );


/* Loop round the transforms in the expanded list. In this loop we
   remove any identify transforms. */
      fillgaps = 0;
      pkm = km_list;
      for( ikm = 0; ikm < nkm; ikm++,pkm++ ) {

/* First try to simplify the current transform in isolation from its
   neighbours. For instance, if the current transform is a compose
   with a custom inverse (which ExpandAsdf will have left unexpanded),
   then simplifying it in isolation may simplify the contents of the
   compose. Likewise, if the current transform is a concatenate it may
   be possible to simplify it in isolation from its neighbours. */
         if( SimplifyAsdf( this, pkm, status ) ) ret = 1;

/* If the current transform is an identity, annull it and store a NULL
   pointer in its place. */
         tag = "";
         astMapGet0C( *pkm, "YAMLTAG", &tag );
         if( strstr( tag, "identity" ) ) {
            pkm[ 0 ] = astAnnul( pkm[ 0 ] );
            ret = 1;
            fillgaps = 1;
         }
      }

/* If required, shuffle the non-NULL pointers down to fill gaps
   (i.e. NULLs) left by cancellation above. */
      if( fillgaps ) {
         pw = km_list;
         pkm = km_list;
         for( ikm = 0; ikm < nkm; ikm++,pkm++ ) {
            if( *pkm ) *(pw++) = *pkm;
         }
         nkm = ( pw - km_list );
         while( *pw < *pkm ){
            *(pw++) = NULL;
         }
      }

/* Loop round the transforms in the expanded list. In this loop we
   attempt to cancel neighbouring transforms that convert between radians
   and degrees in opposite directions. */
      nr2d_found = 0;
      nr2d_removed = 0;
      fillgaps = 0;
      lr2d = 0;
      pkm = km_list;
      for( ikm = 0; ikm < nkm; ikm++,pkm++ ) {

/* Note if the current transform is used to convert from radians to
   degrees, degrees to radians, or neither. This is shown by its
   "name" property being "AST__DR2D" or ""AST__DD2R"). */
         r2d = 0;
         name = NULL;
         astMapGet0C( *pkm, "name", &name );
         if( name ) {
            if( !strcmp( name, "AST__DR2D" ) ) {
               r2d = 1;
            } else if( !strcmp( name, "AST__DD2R" ) ) {
               r2d = -1;
            }
            nr2d_found++;
         }

/* If the current transform is used to convert from radians to
   degrees we may be able to remove it. */
         if( r2d == 1 ) {

/* If the preceding transform converted from degrees to radians, it
   can be cancelled with the current transform. Note we do not need
   to check if the current transform can be cancelled with the next
   transform since that will happen on the next pass through the ikm
   loop, when the "next" transform becomes the current transform
   and the "current" transform becomes the preceding transform. */
            if( lr2d == -1 ) {

/*  Annull the cancelled transform pointers and replace them with
    NULL. */
               pkm[ -1 ] = astAnnul( pkm[ -1 ] );
               pkm[ 0 ] = astAnnul( pkm[ 0 ] );

               ret = 1;           /* Some simplification has taken place */
               fillgaps = 1;      /* Shuffle down to fill vacated slots */
               nr2d_removed += 2; /* Increment no. of removed conversions */
            }

/* Likewise, if the current transform is used to convert from degrees
   to radians, and the preceding transform converted from radians to
   degrees, they cancel. */
         } else if( r2d == -1 ){
            if( lr2d == 1 ) {
               pkm[ -1 ] = astAnnul( pkm[ -1 ] );
               pkm[ 0 ] = astAnnul( pkm[ 0 ] );
               ret = 1;
               fillgaps = 1;
               nr2d_removed += 2;
            }
         }

/* Save the r2d flag for use on the next pass round the ikm loop. */
         lr2d = r2d;
      }

/* If required, shuffle the non-NULL pointers down to fill gaps
   (i.e. NULLs) left by cancellation above. */
      if( fillgaps ) {
         pw = km_list;
         pkm = km_list;
         for( ikm = 0; ikm < nkm; ikm++,pkm++ ) {
            if( *pkm ) *(pw++) = *pkm;
         }
         nkm = ( pw - km_list );
         while( *pw < *pkm ){
            *(pw++) = NULL;
         }
      }

/* If there are any rad:deg convertions left in the list, loop round
   the transforms in the expanded list again. This time we attempt to
   merge the remaining rad:deg convertions into the neighbouring
   transforms. */
      fillgaps = 0;
      pkm = km_list;
      for( ikm = 0; ikm < nkm && nr2d_removed < nr2d_found; ikm++,pkm++ ) {

/* Note if the current transform is used to convert from radians to
   degrees, degrees to radians, or neither. This is shown by its
   "name" property being "AST__DR2D" or ""AST__DD2R"). */
         r2d = 0;
         name = NULL;
         astMapGet0C( *pkm, "name", &name );
         if( name ) {
            if( !strcmp( name, "AST__DR2D" ) ) {
               r2d = 1;
            } else if( !strcmp( name, "AST__DD2R" ) ) {
               r2d = -1;
            }
         }

/* If the current transform is a rad:deg conversion we may be able
   to remove it. First try to merge the current transform with the
   preceding transform. */
         if( r2d ) {
            new = NULL;
            if( ikm > 0 ) {
               new = MergeAsdf( this, pkm[ -1 ], r2d, 0, status );

/* If successful, annull the original transforms and store the merged
   transform in place of the preceding transform. */
               if( new ) {
                  pkm[ -1 ] = astAnnul( pkm[ -1 ] );
                  pkm[ 0 ] = astAnnul( pkm[ 0 ] );
                  pkm[ -1 ] = new;
                  ret = 1;
                  fillgaps = 1;
                  nr2d_removed++;
               }
            }

/* Otherwise, try to merge the current transform with the following
   transform. */
            if( !new && ikm < nkm - 1 ) {
               new = MergeAsdf( this, pkm[ 1 ], r2d, 1, status );

/* If successful, annull the original transforms and store the merged
   transform in place of the following transform. */
               if( new ) {
                  pkm[ 0 ] = astAnnul( pkm[ 0 ] );
                  pkm[ 1 ] = astAnnul( pkm[ 1 ] );
                  pkm[ 1 ] = new;
                  ret = 1;
                  fillgaps = 1;
                  nr2d_removed++;
               }
            }
         }
      }

/* If required, shuffle the non-NULL pointers down to fill gaps
   (i.e. NULLs) left by the above process. */
      if( fillgaps ) {
         pw = km_list;
         pkm = km_list;
         for( ikm = 0; ikm < nkm; ikm++,pkm++ ) {
            if( *pkm ) *(pw++) = *pkm;
         }
         nkm = ( pw - km_list );
         while( *pw < *pkm ){
            *(pw++) = NULL;
         }
      }

/* If any simplification took place, create a new compose containing the
   simplified list of transforms. Exclude the final transforn in the list
   for the moment. */
      if( ret ) {
         pkm = km_list;
         new = astClone( *(pkm++) );
         for( ikm = 1; ikm < nkm - 1; ikm++,pkm++ ) {
            tmp = WriteAsdfCompose( this, (AstObject *) new,
                                    (AstObject *) *pkm, NULL,
                                    NULL, status );
            (void) astAnnul( new);
            new = tmp;
         }

/* When creating the final returned transform, include any custom inverse
   and name from the supplied transform. */
         if( nkm > 1 ) {
            if( !astMapGet0C( *km, "name", &name ) ) name = NULL;
            tmp = WriteAsdfCompose( this, (AstObject *) new,
                                    (AstObject *) *pkm, (AstObject *) inv,
                                    name, status );
            (void) astAnnul( new );
            new = tmp;
         }

/* Return the new KeyMap in place of the supplied KeyMap. */
         (void) astAnnul( *km );
         *km = new;
      }

/* Loop to annul all the pointers in the KeyMap list. */
      for( ikm = 0; ikm < nkm; ikm++ ) {
         km_list[ ikm ] = astAnnul( km_list[ ikm ] );
      }

/* Free the dynamic array. */
      km_list = astFree( km_list );

/* Annull the custom inverse (if any). */
      if( inv ) inv = astAnnul( inv );
   }

/* Return the answer. */
   return ret;
}

static AstKeyMap *StartAsdfKeyMap( AstYamlChan *this, int isseq, const char *tag,
                                   int *status ) {
/*
*  Name:
*     StartAsdfKeyMap

*  Purpose:
*     Create a new KeyMap to hold the properties of an ASDF obect.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *StartAsdfKeymap( AstYamlChan *this, int isseq, const char *tag,
*                                 int *status )

*  Description:
*     This function returns a pointer to a new KeyMap that can be used to
*     hold the properties of an ASDF object.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     isseq
*        If non-zero, the values in the keymap will form the entries
*        within a yaml sequence. Otherwise they form the entries in a
*        yaml mapping (see WriteYamlObject).
*     tag
*        The string to use as the YAML tag for the ASDF object. If it is NULL,
*        or if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the new KeyMap, or NULL if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *result;
   const char *fulltag;
   int nc;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Create the KeyMap, ensuring that entries are returned from it in the
   order they are stored. */
   result = astKeyMap( "SortBy=AgeDown", status );

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      if( !strncmp(tag, "astropy", 7 ) ) {
         fulltag = astAppendStringf( NULL, &nc, ASTROPY_TAG"%s", tag );
      } else {
         fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
      }
   } else {
      fulltag = tag;
   }

/* If not NULL, store it in the KeyMap. */
   if( fulltag ) astMapPut0C( result, "YAMLTAG", fulltag, NULL );

/* If the returned KeyMap will be used to hold a yaml sequence, store a
   YAMLSEQ key in the keymap. */
   if( isseq ) astMapPut0I( result, "YAMLSEQ", 1, NULL );

/* Free resources. */
   if( fulltag != tag ) fulltag = astFree( (void *) fulltag );

/* Return the keymap. */
   return result;
}

static AstKeyMap *StartAsdfTransform( AstYamlChan *this, AstObject *mapinv,
                                      const char *name, const char *tag,
                                      int *status ) {
/*
*  Name:
*     StartAsdfTransform

*  Purpose:
*     Create a KeyMap containing the properties of an ASDF transform

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *StartAsdfTransform( AstYamlChan *this, AstObject *mapinv,
*                                    const char *name, const char *tag,
*                                    int *status )

*  Description:
*     This function creates a KeyMap holding the generic properties of an ASDF
*     transform of any class (i.e. the components of the base transform
*     class).

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        A string to use as the "name" property of the transform. May be
*        NULL.
*     tag
*        Pointer to a string holding the yaml tag to store with the
*        transform (e.g. "asdf/transform/shift-1.2.0").
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the new KeyMap.
*/

/* Local Variables: */
   AstKeyMap *km;
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, tag, status );

/* The "name" property. */
   if( name ) Store0C( this, "name", 0, ret, name, NULL, status );

/* The "inverse" property. */
   if( mapinv ) {
      if( astIsAMapping( mapinv ) ) {
         km = WriteMapping( this, (AstMapping *) mapinv, NULL, NULL,
                            status );
      } else {
         km = astClone( mapinv );
      }
      ret = StoreKeyMap( this, "inverse", ret, &km, status );
   }

/* Return the answer. */
   return ret;
}

static void StartYamlDoc( AstYamlChan *this, yaml_emitter_t *emitter,
                          int *status ) {
/*
*  Name:
*     StartYamlDoc

*  Purpose:
*     Initialise a yaml emitter and start a document

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StartYamlDoc( AstYamlChan *this, yaml_emitter_t *emitter,
*                        int *status )

*  Description:
*     This function initialises a supplied libyaml emitter structure,
*     emits a STREAM-START event and a DOCUMENT-START event.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     emitter
*        Pointer to the libyaml emitter to be initialised.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   int enc;
   yaml_event_t event;
   yaml_tag_directive_t tag;
   yaml_version_directive_t yaml_version = { 1, 1 };

/* Check the global error status. */
   if ( !astOK ) return;

/* Initialise the libyaml emitter. */
   if( !yaml_emitter_initialize( emitter ) ){
      astError( AST__LYAML, "astWrite(%s): Failed to initialize libyaml "
                "emitter", status, astGetClass( this ) );
      LibYamlEmitterError( emitter, status );

/* If OK, register the sink function with the emitter, set the indent
   increment and select Unix-style line breaks. */
   } else {
      yaml_emitter_set_output( emitter, LibYamlWriter, this );
      yaml_emitter_set_indent( emitter, astGetIndent( this ) );
      yaml_emitter_set_break( emitter, YAML_LN_BREAK );
   }

/* Create and emit the STREAM-START event. */
   if( astOK ) {
      yaml_stream_start_event_initialize( &event, YAML_UTF8_ENCODING );
      EMIT
   }

/* Write the comment required by ASDF (libyaml cannot emit comments so we
   need to format and write the line directly using our sink function). */
   tag.handle = (yaml_char_t *) "!";
   enc = astGetYamlEncoding( this );
   if( enc == ASDF_ENCODING ) {
      LibYamlWriter( this, (yaml_char_t *) ASDF_HEADER, strlen(ASDF_HEADER) );
      tag.prefix = (yaml_char_t *) ASDF_TAG;

   } else if( enc == NATIVE_ENCODING ) {
      tag.prefix = (yaml_char_t *) AST_TAG;

   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Unsupported encoding (%d) "
                "in StartYamlDoc.", status, enc );
   }

/* Create and emit the DOCUMENT-START event. */
   if( astOK ) {
      yaml_document_start_event_initialize( &event, &yaml_version, &tag,
                                            &tag + 1, 0 );
      EMIT
   }

/* Store the emitter pointer in the YamlChan structure so that the
   astWriteXxx (used by the AST NATIVE encoding) can acccess it). */
   this->emitter = emitter;
}

static void StartYamlMapping( AstYamlChan *this, const char *key, const char *tag,
                              yaml_emitter_t *emitter, int *status ) {
/*
*  Name:
*     StartYamlMapping

*  Purpose:
*     Emit the start of a yaml mapping

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StartYamlMapping( AstYamlChan *this, const char *key, const char *tag,
*                            yaml_emitter_t *emitter, int *status )

*  Description:
*     This function emits yaml events describing a new yaml mapping.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new mapping within the
*        parent node in the yaml tree. May be NULL if the new mapping is
*        an element in a sequence.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:". etc (depending on the
*        encoding).
*     emitter
*        Pointer to a libyaml emitter.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   const char *fulltag;
   int nc;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Emit a scalar string holding the supplied key (if any). */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, (yaml_char_t *) YAML_STR_TAG,
                                    (yaml_char_t *) key, strlen(key), 1, 0,
                                    YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      if( astGetYamlEncoding( this ) == ASDF_ENCODING ){
         if( !strncmp(tag, "astropy", 7 ) ) {
            fulltag = astAppendStringf( NULL, &nc, ASTROPY_TAG"%s", tag );
         } else {
            fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
         }
      } else {
         fulltag = astAppendStringf( NULL, &nc, AST_TAG"%s", tag );
      }
   } else {
      fulltag = tag;
   }

/* Emit the start mapping event. */
   if( astOK ) {
      yaml_mapping_start_event_initialize( &event, NULL, (yaml_char_t *) fulltag,
                                           (tag==NULL), YAML_BLOCK_MAPPING_STYLE );
      EMIT
   }

/* Free resources. */
   if( fulltag != tag ) fulltag = astFree( (void *) fulltag );
}

static void StartYamlSequence( AstYamlChan *this, const char *key, const char *tag,
                               yaml_emitter_t *emitter, int *status ) {
/*
*  Name:
*     StartYamlSequence

*  Purpose:
*     Emit the start of a yaml sequence

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StartYamlSequence( AstYamlChan *this, const char *key, const char *tag,
*                             yaml_emitter_t *emitter, int *status )

*  Description:
*     This function emits yaml events describing a new yaml sequence.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new sequence within the
*        parent node in the yaml tree. May be NULL.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     emitter
*        Pointer to a libyaml emitter.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   const char *fulltag;
   int nc;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Emit a scalar string holding the supplied key. */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, (yaml_char_t *) YAML_STR_TAG,
                                    (yaml_char_t *) key, strlen(key), 1, 0,
                                    YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
   } else {
      fulltag = tag;
   }

/* Emit the start sequence event. */
   if( astOK ) {
      yaml_sequence_start_event_initialize( &event, NULL, (yaml_char_t *) fulltag,
                                            (tag==NULL), YAML_BLOCK_SEQUENCE_STYLE );
      EMIT;
   }

/* Free resources. */
   if( fulltag != tag ) fulltag = astFree( (void *) fulltag );
}

static void Store0C( AstYamlChan *this, const char *key, int quote,
                     AstKeyMap *km, const char *value, const char *tag,
                     int *status ){
/*
*  Name:
*     Store0C

*  Purpose:
*     Store a string as an ASDF property in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store0C( AstYamlChan *this, const char *key, int quote,
*                   AstKeyMap *km, const char *value, const char *tag,
*                   int *status )

*  Description:
*     This function stores a string as a ASDF property in a KeyMap. See
*     function WriteYamlObject for details of how the entries in the
*     KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent KeyMap.
*     quote
*        If non-zero, the string is enclosed in single quotes. otherwise
*        it is unquoted.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     value
*        Pointer to the string to be stored as the scalar value.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char *auxkey;
   const char *fulltag;
   int nc;

/* Check the global error status. Also check a KeyMap was supplied. */
   if ( !astOK || !km ) return;

/* Store the value. */
   astMapPut0C( km, key, value, NULL );

/* If required, store a related entry that indicates that the value
   should be quoted. */
   if( quote ) {
      auxkey = astAppendStringf( NULL, &nc, "%s_QUOTE", key );
      astMapPut0I( km, auxkey, 1, NULL );
      auxkey = astFree( auxkey );
   }

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
   } else {
      fulltag = tag;
   }

/* If required, store a related entry holding the tag. */
   if( fulltag ) {
      auxkey = astAppendStringf( NULL, &nc, "%s_TAG", key );
      astMapPut0C( km, auxkey, fulltag, NULL );
      auxkey = astFree( auxkey );
   }

/* Free resources. */
   if( fulltag != tag ) fulltag = astFree( (void *) fulltag );
}

static void StoreYaml0C( AstYamlChan *this, const char *key, int quote,
                         yaml_emitter_t *emitter, int set,
                         const char *value, const char *tag, int *status ){
/*
*  Name:
*     StoreYaml0C

*  Purpose:
*     Store a string as a yaml scalar.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml0C( AstYamlChan *this, const char *key, int quote,
*                       yaml_emitter_t *emitter, int set, const char *value,
*                       const char *tag, int *status )

*  Description:
*     This function emits yaml events describing a string scalar.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree.
*     quote
*        If non-zero, the string is enclosed in single quotes. otherwise
*        it is unquoted.
*     emitter
*        Pointer to a libyaml emitter.
*     set
*        Zero if the value is a default value and should thus be
*        commented out. Non-zero otherwise. Ignored if "key" is NULL.
*     value
*        Pointer to the string to be stored as the scalar value.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   const char *fulltag;
   int nc;
   yaml_event_t event;
   yaml_scalar_style_t style;

/* Check the global error status. */
   if ( !astOK ) return;

/* Libyaml does not support writing comments, so for the moment all we
   can do is return without action if "set" is zero. */
   if( !set ) return;

/* Choose the style for the scalar values. */
   style = quote ? YAML_SINGLE_QUOTED_SCALAR_STYLE : YAML_PLAIN_SCALAR_STYLE;

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
   } else {
      fulltag = tag;
   }

/* Emit a scalar string holding the supplied key. */
   yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                 strlen(key), 1, 0, YAML_PLAIN_SCALAR_STYLE);
   EMIT

/* Emit a scalar string holding the value. */
   if( astOK ) {
      yaml_scalar_event_initialize( &event, NULL, (yaml_char_t *) fulltag,
                                    (yaml_char_t *) value, strlen(value),
                                    (tag==NULL), (tag==NULL), style );
      EMIT
   }

/* Free resources. */
   if( fulltag != tag ) fulltag = astFree( (void *) fulltag );
}

static void StoreAnchor( AstYamlChan *this, const char *anchor, AstKeyMap *km,
                         const char *id, int *status ){
/*
*  Name:
*     StoreAnchor

*  Purpose:
*     Associate a YAML anchor with a KeyMap entry.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void StoreAnchor( AstYamlChan *this, const char *anchor, AstKeyMap *km,
*                       const char *id, int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions adds an entry to the KeyMap that holds the
*     definitions of any defined YAML anchors. The new entry has a key
*     equal to the anchor name, and a value that is a pointer to a
*     dynamically allocated struct that identifies the value associated
*     with the anchor. This struct has two elements: 1) a pointer to the
*     KeyMap that holds the value and 2) a pointer to a dynamically allocated
*     string holding the key associated with the value.
*
*     If the anchor is already present within the anchor keymap, its
*     previous definition is replaced by the new definition.

*  Parameters:
*     this
*        Pointer to the YamLChan.
*     anchor
*        The name of the anchor. This function returns without action of
*        a NULL pointer is supplied for "anchor".
*     km
*        Pointer to the KeyMap holding the value to which the anchor
*        refers.
*     id
*        The key (within "km") associated with the value to which the anchor
*        refers.
*     status
*        Pointer to the inherited status.
*/


/* Check the global error status. Also return if no anchor was provided. */
   if ( !anchor || !astOK ) return;

/* Copy the named value into the anchors keymap, then rename it to use
   the supplied anchor name as the key. */
   astMapCopyEntry( this->anchors, id, km, 0 );
   astMapRename( this->anchors, id, anchor );
}

static void Store1C( AstYamlChan *this, const char *key, int quote,
                     AstKeyMap *km, int nval, const char *values[],
                     const char *tag, int *status ){
/*
*  Name:
*     Store1C

*  Purpose:
*     Store a vector of strings as an ASDF property in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store1C( AstYamlChan *this, const char *key, int quote,
*                   AstKeyMap *km, int nval, const char *values[],
*                   const char *tag, int *status )

*  Description:
*     This function stores a vector of strings as a ASDF property in a
*     KeyMap. See function WriteYamlObject for details of how the entries
*     in the KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        KeyMap.
*     quote
*        If non-zero, the string is enclosed in single quotes. otherwise
*        it is unquoted.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     nval
*        The length of the "values" array.
*     values
*        Array of pointers to the strings to be stored.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char *auxkey;
   const char *fulltag;
   int nc;

/* Check the global error status. Also check a KeyMap was supplied. */
   if( !astOK || !km ) return;

/* Store the values. */
   astMapPut1C( km, key, nval, values, NULL );

/* If required, store a related entry that indicates that the value
   should be quoted. */
   if( quote ) {
      auxkey = astAppendStringf( NULL, &nc, "%s_QUOTE", key );
      astMapPut0I( km, auxkey, 1, NULL );
      auxkey = astFree( auxkey );
   }

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
   } else {
      fulltag = tag;
   }

/* If required, store a related entry holding the tag. */
   if( fulltag ) {
      auxkey = astAppendStringf( NULL, &nc, "%s_TAG", key );
      astMapPut0C( km, auxkey, fulltag, NULL );
      auxkey = astFree( auxkey );
   }

/* Free the dynamically allocated string holding the full tag. */
   if( tag != fulltag ) fulltag = astFree( (void *) fulltag );
}

static void Store0D( AstYamlChan *this, const char *key,
                     AstKeyMap *km, double value, int *status ){
/*
*  Name:
*     Store0D

*  Purpose:
*     Store a double as an ASDF scalar property in a KeyMap

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store0D( AstYamlChan *this, const char *key,
*                   AstKeyMap *km, double value, int *status )

*  Description:
*     This function stores a double as a ASDF property in a KeyMap. See
*     function WriteYamlObject for details of how the entries in the
*     KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     value
*        The value to store.
*     status
*        Pointer to the inherited status variable.
*/
   if( !km ) return;
   astMapPut0D( km, key, value, NULL );
}

static void Store0I( AstYamlChan *this, const char *key,
                     AstKeyMap *km, int value, int *status ){
/*
*  Name:
*     Store0I

*  Purpose:
*     Store an int as an ASDF scalar property in a KeyMap

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store0I( AstYamlChan *this, const char *key,
*                   AstKeyMap *km, int value, int *status )

*  Description:
*     This function stores an int as a ASDF property in a KeyMap. See
*     function WriteYamlObject for details of how the entries in the
*     KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     value
*        The value to store.
*     status
*        Pointer to the inherited status variable.
*/
   if( !km ) return;
   astMapPut0I( km, key, value, NULL );
}

static void Store1D( AstYamlChan *this, const char *key,
                     AstKeyMap *km, int nval, const double *values,
                     int *status ){
/*
*  Name:
*     Store1D

*  Purpose:
*     Store a vector of doubles as an ASDF property in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store1D( AstYamlChan *this, const char *key,
*                   AstKeyMap *km, int nval, const double *values,
*                   int *status )

*  Description:
*     This function stores a vector of doubles as a ASDF property in a
*     KeyMap. See function WriteYamlObject for details of how the entries
*     in the KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        KeyMap.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     nval
*        The length of the "values" array.
*     values
*        Array of pointers to the doubles to be stored.
*     status
*        Pointer to the inherited status variable.
*/

   if( !km ) return;
   astMapPut1D( km, key, nval, values, NULL );
}

static void Store1I( AstYamlChan *this, const char *key,
                     AstKeyMap *km, int nval, const int *values,
                     int *status ){
/*
*  Name:
*     Store1D

*  Purpose:
*     Store a vector of ints as an ASDF property in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void Store1D( AstYamlChan *this, const char *key,
*                   AstKeyMap *km, int nval, const int *values,
*                   int *status )

*  Description:
*     This function stores a vector of ints as a ASDF property in a
*     KeyMap. See function WriteYamlObject for details of how the entries
*     in the KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        KeyMap.
*     km
*        Pointer to the KeyMap. This function will return immediately if
*        "km" is NULL.
*     nval
*        The length of the "values" array.
*     values
*        Array of pointers to the ints to be stored.
*     status
*        Pointer to the inherited status variable.
*/
   if( !km ) return;
   astMapPut1I( km, key, nval, values, NULL );
}

static void StoreYaml0D( AstYamlChan *this, const char *key,
                         yaml_emitter_t *emitter, int set, double value,
                         int *status ){
/*
*  Name:
*     StoreYaml0D

*  Purpose:
*     Store a double as a yaml scalar.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml0D( AstYamlChan *this, const char *key,
*                       yaml_emitter_t *emitter, int set, double value,
*                       int *status )

*  Description:
*     This function emits yaml events describing a scalar double.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     emitter
*        Pointer to a libyaml emitter.
*     set
*        Zero if the value is a default value and should thus be
*        commented out. Non-zero otherwise. Ignored if "key" is NULL.
*     value
*        The value to store.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char buff[ 100 ];
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Libyaml does not support writing comments, so for the moment all we
   can do is return without action if "set" is zero. */
   if( !set ) return;

/* Emit a scalar string holding the supplied key, if any. */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                    strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Format and store the value as a YAML scalar. */
   if( astOK ) {
      FmtDouble( value, sizeof(buff), buff );
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) buff,
                                    strlen(buff), 1, 1, YAML_PLAIN_SCALAR_STYLE );
      EMIT
   }
}

static void StoreYaml0I( AstYamlChan *this, const char *key,
                         yaml_emitter_t *emitter, int set, int value,
                         int *status ){
/*
*  Name:
*     StoreYaml0I

*  Purpose:
*     Store an int as a yaml scalar.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml0I( AstYamlChan *this, const char *key,
*                       yaml_emitter_t *emitter, int set, int value,
*                       int *status )

*  Description:
*     This function emits yaml events describing a scalar int.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     emitter
*        Pointer to a libyaml emitter.
*     set
*        Zero if the value is a default value and should thus be
*        commented out. Non-zero otherwise. Ignored if "key" is NULL.
*     value
*        The value to store.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char buff[ 100 ];
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Libyaml does not support writing comments, so for the moment all we
   can do is return without action if "set" is zero. */
   if( !set ) return;

/* Emit a scalar string holding the supplied key, if any. */
   if( key ) {

/* If the value is a default, turn the whole line into a comment by
   pre-pending "#" to the key name. */
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                    strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Format and store the value as a YAML scalar. */
   if( astOK ) {
      (void) sprintf( buff, "%d", value );
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) buff,
                                    strlen(buff), 1, 1, YAML_PLAIN_SCALAR_STYLE );
      EMIT
   }
}

static void StoreYaml0K( AstYamlChan *this, const char *key,
                         yaml_emitter_t *emitter, int set, int64_t value,
                         int *status ){
/*
*  Name:
*     StoreYaml0K

*  Purpose:
*     Store a 64 bit int as a yaml scalar.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml0K( AstYamlChan *this, const char *key,
*                       yaml_emitter_t *emitter, int set, int64_t value,
*                       int *status )

*  Description:
*     This function emits yaml events describing a scalar 64 bit int.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     emitter
*        Pointer to a libyaml emitter.
*     set
*        Zero if the value is a default value and should thus be
*        commented out. Non-zero otherwise. Ignored if "key" is NULL.
*     value
*        The value to store.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char buff[ 100 ];
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Libyaml does not support writing comments, so for the moment all we
   can do is return without action if "set" is zero. */
   if( !set ) return;

/* Emit a scalar string holding the supplied key, if any. */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                    strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Format and store the value as a YAML scalar. */
   if( astOK ) {
      (void) sprintf( buff, "%" PRId64, value );
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) buff,
                                    strlen(buff), 1, 1, YAML_PLAIN_SCALAR_STYLE );
      EMIT
   }
}

static void StoreYaml1C( AstYamlChan *this, const char *key, int quote,
                         yaml_emitter_t *emitter, int nval, const char *values[],
                         const char *tag, int *status ){
/*
*  Name:
*     StoreYaml1C

*  Purpose:
*     Store a vector of strings as a yaml sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml1C( AstYamlChan *this, const char *key, int quote,
*                       yaml_emitter_t *emitter, int nval, const char *values[],
*                       const char *tag, int *status )

*  Description:
*     This function emits yaml events describing a vector of strings.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree.
*     quote
*        If non-zero, the string is enclosed in single quotes. otherwise
*        it is unquoted.
*     emitter
*        Pointer to a libyaml emitter.
*     nval
*        The length of the "values" array.
*     values
*        Array of pointers to the strings to be stored.
*     tag
*        The string to use as the tag for the mapping. If it is NULL, or
*        if it starts with "tag:", it will be used without change. Otherwise
*        it will be prefixed by "tag:stsci.edu:".
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   const char *fulltag;
   const char **pv;
   int ival;
   int nc;
   yaml_event_t event;
   yaml_scalar_style_t style;

/* Check the global error status. */
   if ( !astOK ) return;

/* Choose the style for the scalar values. */
   style = quote ? YAML_SINGLE_QUOTED_SCALAR_STYLE : YAML_PLAIN_SCALAR_STYLE;

/* Emit a scalar string holding the supplied key. */
   yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                 strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
   EMIT

/* Start a YAML sequence. */
   if( astOK ) {
      yaml_sequence_start_event_initialize( &event, NULL, NULL, 1,
                                            YAML_FLOW_SEQUENCE_STYLE );
      EMIT
   }

/* Construct the full tag unless a full tag was supplied. */
   if( tag && strncmp( tag, "tag:", 4 ) ) {
      fulltag = astAppendStringf( NULL, &nc, STSCI_TAG"%s", tag );
   } else {
      fulltag = tag;
   }

/* Emit a scalar string holding each value. */
   pv = values;
   for( ival = 0; ival < nval && astOK; ival++,pv++ ) {
      yaml_scalar_event_initialize( &event, NULL, (yaml_char_t *) fulltag,
                                    (yaml_char_t *) *pv, strlen(*pv),
                                    (tag==NULL), (tag==NULL), style );
      EMIT
   }

/* End the YAML sequence. */
   yaml_sequence_end_event_initialize( &event );
   EMIT

/* Free the dynamically allocated string holding the full tag. */
   if( tag != fulltag ) fulltag = astFree( (void *) fulltag );
}

static void StoreYaml1D( AstYamlChan *this, const char *key,
                         yaml_emitter_t *emitter, int nval,
                         const double *values, int *status ){
/*
*  Name:
*     StoreYaml1D

*  Purpose:
*     Store a vector of doubles as a yaml sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml1D( AstYamlChan *this, const char *key,
*                       yaml_emitter_t *emitter, int nval,
*                       const double *values, int *status )

*  Description:
*     This function emits yaml events describing a vector of doubles.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     emitter
*        Pointer to a libyaml emitter.
*     nval
*        The length of the "values" array.
*     values
*        Pointer to array of values.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char buff[ 100 ];
   const double *pv;
   int ival;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Emit a scalar string holding the supplied key, if any. */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                    strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Start a YAML sequence. */
   if( astOK ) {
      yaml_sequence_start_event_initialize( &event, NULL, NULL, 1,
                                            YAML_FLOW_SEQUENCE_STYLE );
      EMIT
   }

/* Emit a scalar string holding each value. */
   pv = values;
   for( ival = 0; ival < nval && astOK; ival++,pv++ ) {
      FmtDouble( *pv, sizeof(buff), buff );
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) buff,
                                    strlen(buff), 1, 1, YAML_PLAIN_SCALAR_STYLE );
      EMIT
   }

/* End the YAML sequence. */
   yaml_sequence_end_event_initialize( &event );
   EMIT
}

static void StoreYaml1I( AstYamlChan *this, const char *key,
                         yaml_emitter_t *emitter, int nval,
                         const int *values, int *status ){
/*
*  Name:
*     StoreYaml1I

*  Purpose:
*     Store a vector of ints as a yaml sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void StoreYaml1I( AstYamlChan *this, const char *key,
*                       yaml_emitter_t *emitter, int nval,
*                       const int *values, int *status )

*  Description:
*     This function emits yaml events describing a vector of ints.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new scalar within the
*        parent node in the yaml tree. May be NULL.
*     emitter
*        Pointer to a libyaml emitter.
*     nval
*        The length of the "values" array.
*     values
*        Pointer to array of values.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   char buff[ 100 ];
   const int *pv;
   int ival;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Emit a scalar string holding the supplied key, if any. */
   if( key ) {
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) key,
                                    strlen(key), 1, 1, YAML_PLAIN_SCALAR_STYLE);
      EMIT
   }

/* Start a YAML sequence. */
   if( astOK ) {
      yaml_sequence_start_event_initialize( &event, NULL, NULL, 1,
                                            YAML_FLOW_SEQUENCE_STYLE );
      EMIT
   }

/* Emit a scalar string holding each value. */
   pv = values;
   for( ival = 0; ival < nval && astOK; ival++,pv++ ) {
      (void) sprintf( buff, "%d", *pv );
      yaml_scalar_event_initialize( &event, NULL, NULL, (yaml_char_t *) buff,
                                    strlen(buff), 1, 1, YAML_PLAIN_SCALAR_STYLE );
      EMIT
   }

/* End the YAML sequence. */
   yaml_sequence_end_event_initialize( &event );
   EMIT
}

static AstKeyMap *StoreKeyMap( AstYamlChan *this, const char *key,
                               AstKeyMap *km, AstKeyMap **value,
                               int *status ){
/*
*  Name:
*     StoreKeyMap

*  Purpose:
*     Store a KeyMap holding ASDF properties in a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *StoreKeyMap( AstYamlChan *this, const char *key,
*                             AstKeyMap *km, AstKeyMap **value,
*                             int *status )

*  Description:
*     This function stores a KeyMap holding ASDF properties within another
*     KeyMap. See function WriteYamlObject for details of how the entries in
*     the KeyMap are used.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The string to use as the key for the new entry within the
*        parent KeyMap.
*     km
*        Pointer to the parent KeyMap. May be NULL.
*     value
*        Address of a pointer to the KeyMap to be stored inside "km". The
*        supplied pointer is annulled on exit. If "value" is NULL, "km" is
*        annulled and a NULL pointer is returned as the function value.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A copy (not a clone) of "km", or NULL if "km is annulled.
*/

/* Check the global error status. */
   if ( !astOK || !km ) return km;

/* If a value keymap was supplied, store it in the parent keymap and
   annul the value. */
   if( *value ) {
      if( km ) astMapPut0A( km, key, *value, NULL );
      *value = astAnnul( *value );

/* If no value keymap was supplied, annull the parent KeyMap. */
   } else if( km ){
      km = astAnnul( km );
   }

/* Return the parent KeyMap pointer. */
   return km;
}

static int Use( AstYamlChan *this, int set, int helpful, int *status ) {
/*
*  Name:
*     Use

*  Purpose:
*     Decide whether to write a value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     int Use( AstYamlChan *this, int set, int helpful, int *status )

*  Class Membership:
*     YamlChan member function.

*  Description:
*     This function decides whether a value supplied by a class "Dump"
*     function, via a call to one of the astWrite... protected
*     methods, should actually be written to the data sink associated
*     with a YamlChan.
*
*     This decision is based on the settings of the "set" and
*     "helpful" flags supplied to the astWrite... method, plus the
*     attribute settings of the YamlChan.

*  Parameters:
*     this
*        A pointer to the YamlChan.
*     set
*        The "set" flag supplied.
*     helpful
*        The "helpful" value supplied.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the value should be written out, otherwise zero.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global error status set or if it should fail for any
*     reason.
*/

/* Local Variables: */
   int full;                     /* Full attribute value */
   int result;                   /* Result value to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* If "set" is non-zero, then so is the result ("set" values must
   always be written out). */
   result = ( set != 0 );

/* Otherwise, obtain the value of the YamlChan's Full attribute. */
   if ( !set ) {
      full = astGetFull( this );

/* If Full is positive, display all values, if zero, display only
   "helpful" values, if negative, display no (un-"set") values. */
      if ( astOK ) result = ( ( helpful && ( full > -1 ) ) || ( full > 0 ) );
   }

/* Return the result. */
   return result;
}

static AstKeyMap *WriteAsdfAffine( AstYamlChan *this, int nin, double *mat,
                                   double *trans, AstObject *mapinv,
                                   const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfAffine

*  Purpose:
*     Write an ASDF affine to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfAffine( AstYamlChan *this, int nin, double *mat,
*                                 double *trans, AstObject *mapinv,
*                                 const char *name, int *status )

*  Description:
*     This function writes an ASDF affine transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     nin
*        The number of inputds and outputs.
*     mat
*        The (nin,nin) matrix.
*     trans
*        The translation vector. May be NULL.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *km;
   AstKeyMap *ret;
   double *trans0;
   int dims[2];

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/affine-1.3.0",
                             status );

/* Write out the matrix as an ND-array. */
   dims[ 0 ] = nin;
   dims[ 1 ] = nin;
   km = WriteAsdfNdArray( this, 2, dims, mat, status );
   ret = StoreKeyMap( this, "matrix", ret, &km, status );

/* Write out the shifts as a 1D vector. The "translation" component must
   exist, so allocate and use a set of zeros if no translation was supplied. */
   if( !trans ) {
      trans0 = astCalloc( nin, sizeof(*trans0) );
      trans = trans0;
   } else {
      trans0 = NULL;
   }

   km = WriteAsdfNdArray( this, 1, dims, trans, status );
   ret = StoreKeyMap( this, "translation", ret, &km, status );

/* Free any translation array allocated above. */
   trans0 = astFree( trans0 );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfBaseFrame( AstYamlChan *this, AstSkyFrame *obj,
                                      int *status ) {
/*
*  Name:
*     WriteAsdfBaseFrame

*  Purpose:
*     Write an ASDF baseframe object to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfBaseFrame( AstYamlChan *this, AstSkyFrame *obj,
*                                    int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF
*     baseframe object.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the SkyFrame defining the baseframe to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstKeyMap *fakm;
   AstKeyMap *elkm;
   AstKeyMap *tkm;
   const char *class;
   double geolat;
   double geolon;
   double h;
   double obsgeo[ 3 ];
   int system;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Determine the required subclass name. */
   system = astGetSystem( obj );
   if( system == AST__ICRS ){
      class = "astropy/coordinates/frames/icrs-1.1.0";
   } else if( system == AST__FK4 ){
      class = "astropy/coordinates/frames/fk4-1.0.0";
   } else if( system == AST__FK4_NO_E ){
      class = "astropy/coordinates/frames/fk4noeterms-1.0.0";
   } else if( system == AST__FK5 ){
      class = "astropy/coordinates/frames/fk5-1.0.0";
   } else if( system == AST__GALACTIC ){
      class = "astropy/coordinates/frames/galactic-1.0.0";
   } else if( system == AST__SUPERGALACTIC ){
      class = "astropy/coordinates/frames/supergalactic-1.0.0";
   } else if( system == AST__ECLIPTIC ){
      class = "astropy/coordinates/frames/barycentricmeanecliptic-1.0.0";
   } else if( system == AST__AZEL ){
      class = "astropy/coordinates/frames/altaz-1.0.0";
   } else {
      class = NULL;
   }

/* Skip to the end if the AST system is not supported by ASDF. */
   if( class ) {

/* Create the returned KeyMap and store the appropriate ASDF tag for the
   class determined above. */
      ret = StartAsdfKeyMap( this, 0, class, status );

/* Create a KeyMap to hold frame attributes. */
      fakm = StartAsdfKeyMap( this, 0, NULL, status );

/* Get the geodetic (lon,lat,alt) from the Frame, if set. */
      if( astTestObsLat( obj ) && astTestObsLon( obj ) ) {
         geolat = astGetObsLat( obj );
         geolon = astGetObsLon( obj );
         h = astGetObsAlt( obj );

/* Convert to geocentric (x,y,z) Cartesian coordinates, in metres. */
         eraGd2gc( 1, geolon, geolat, h, obsgeo );

/* Add a frame attribute describing the observer's position if allowed. */
         if( system == AST__AZEL ){
            elkm = WriteAsdfEarthLocation( this, obsgeo, status );
            fakm = StoreKeyMap( this, "location", fakm, &elkm, status );
         }

      } else {
         obsgeo[ 0 ] = AST__BAD;
         obsgeo[ 1 ] = AST__BAD;
         obsgeo[ 2 ] = AST__BAD;
      }

/* Add a frame atribute describing the epoch of observation if allowed,
   and if set. */
      if( ( system == AST__FK4 || system == AST__FK4_NO_E ||
            system == AST__AZEL ) && astTestEpoch( obj ) ){
         tkm = WriteAsdfTime( this,  astGetEpoch( obj ), obsgeo, status );
         fakm = StoreKeyMap( this, "obstime", fakm, &tkm, status );
      }

/* Add a frame atribute describing the equinox if allowed (accept the
   default). */
      if( system == AST__FK4 || system == AST__FK4_NO_E ||
          system == AST__FK5 || system == AST__ECLIPTIC ){
         tkm = WriteAsdfTime( this,  astGetEquinox( obj ), obsgeo, status );
         fakm = StoreKeyMap( this, "equinox", fakm, &tkm, status );
      }

/* Add the frame attributes KeyMap into the returned KeyMap. */
      ret = StoreKeyMap( this, "frame_attributes", ret, &fakm, status );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfCelestialFrame( AstYamlChan *this, AstSkyFrame *obj,
                                           int *status ) {
/*
*  Name:
*     WriteAsdfCelestialFrame

*  Purpose:
*     Write an ASDF celestial_frame object to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfCelestialFrame( AstYamlChan *this, AstSkyFrame *obj,
*                                         int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF
*     celestial_frame object. Note the ASDF celestial_frame always uses
*     degrees as the axis units. Therefore, the ASDF transforms that connect
*     to the celestial_frame should be modified to use degrees rather than
*     radians (as used by the equivalent AST Mappings).

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the SkyFrame to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *ret;
   AstKeyMap *km;
   char *name;
   const char *values[ 2 ];
   int ilat;
   int ilon;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "gwcs/celestial_frame-1.0.0", status );

/* Store the "name" component of the required asdf structure as a scalar
   using the key "name". The value is the System string form the supplied
   SkyFrame converted to lower case. */
   name = astStringCase( astGetC( obj, "System" ), 0 );
   Store0C( this, "name", 0, ret, name, NULL, status );
   name = astFree( name );

/* Store the "axes_names" component of the required asdf structure as a
   vector using the key "axes_names". The value for each axis is either
   "lon" or "lat". */
   ilon = astGetLonAxis( obj );
   ilat = 1 - ilon;
   values[ ilon ] = "lon";
   values[ ilat ] = "lat";
   Store1C( this, "axes_names", 0, ret, 2, values, NULL, status );

/* Store the "reference_frame" component of the required asdf structure */
   km = WriteAsdfBaseFrame( this, obj, status );
   ret = StoreKeyMap( this, "reference_frame", ret, &km, status );

/* Store the "unit" component of the required asdf structure as a
   vector using the key "unit". The value for each axis is "deg". Each
   element is tagged as an asdf unit. */
   values[ 0 ] = "deg";
   values[ 1 ] = "deg";
   Store1C( this, "unit", 0, ret, 2, values, "asdf/unit/unit-1.0.0",
            status );

/* Store the "axis_physical_types" component of the required asdf structure
   as a vector using the key "axis_physical_types". The value for each axis is
   the appropriate UCD1+ value. */
   GetUCD( astGetSystem( obj ), values + ilon, values + ilat );
   if( values[ 0 ] && values [ 1 ] ) {
      Store1C( this, "axis_physical_types", 1, ret, 2, values, NULL,
                   status );
   } else {
      ret = astAnnul( ret );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfCompose( AstYamlChan *this, AstObject *map1,
                                    AstObject *map2, AstObject *mapinv,
                                    const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfCompose

*  Purpose:
*     Write an ASDF compose to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfCompose( AstYamlChan *this, AstObject *map1,
*                                  AstObject *map2, AstObject *mapinv,
*                                  const char *name, int *status )

*  Description:
*     This function writes the properties of an ASDF compose transform to
*     a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map1
*        The first mapping to applied in parallel. It may be an AST Mapping
*        or a KeyMap holding a description of an ASDF transform.
*     map2
*        The second mapping to applied in parallel. It may be an AST Mapping
*        or a KeyMap holding a description of an ASDF transform.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF object, or NULL (without error) if the
*     conversion was not possible.

*  Notes:
*     - NULL will be returned if this function is invoked with the AST
*     error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstKeyMap *ret;
   AstObject *km[ 2 ];

/* Initilise. */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get a KeyMap holding the ASDF descriptions of the first Mapping. */
   if( astIsAKeyMap( map1 ) ){
      km[ 0 ] = astClone( map1 );
   } else if( astIsAMapping( map1 ) ){
      km[ 0 ] = (AstObject *) WriteMapping( this, (AstMapping *) map1, NULL,
                                            NULL, status );
   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Invalid object class (%s) "
                "supplied to WriteAsdfCompose (internal AST programming "
                "error).", status, astGetClass( map1 ) );
   }

/* Get a KeyMap holding the ASDF descriptions of the first Mapping. */
   if( astIsAKeyMap( map2 ) ){
      km[ 1 ] = astClone( map2 );
   } else if( astIsAMapping( map2 ) ){
      km[ 1 ] = (AstObject *) WriteMapping( this, (AstMapping *) map2, NULL,
                                            NULL, status );
   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Invalid object class (%s) "
                "supplied to WriteAsdfCompose (internal AST programming "
                "error).", status, astGetClass( map1 ) );
   }

/* If they were both converted successfully, create the returned KeyMap
   and store the properties of the base transform class. */
   if( km[ 0 ] && km[ 1 ] ) {
      ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/compose-1.2.0",
                                status );

/* Store the ASDF transform descriptions as a single vector entry in the
   returned KeyMap. */
      if( ret ) astMapPut1A( ret, "forward", 2, km, NULL );
   }

/* Free resources. */
   if( km[ 0 ] ) km[ 0 ] = astAnnul( km[ 0 ] );
   if( km[ 1 ] ) km[ 1 ] = astAnnul( km[ 1 ] );

/* Return the KeyMap. */
   return ret;
}

static AstKeyMap *WriteAsdfConcatenate( AstYamlChan *this, AstObject *map1,
                                        AstObject *map2, AstObject *mapinv,
                                        const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfConcatenate

*  Purpose:
*     Write an ASDF concatenate to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfConcatenate( AstYamlChan *this, AstObject *map1,
*                                      AstObject *map2, AstObject *mapinv,
*                                      const char *name, int *status )

*  Description:
*     This function writes the properties of an ASDF concatenate transform to
*     a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map1
*        The first mapping to applied in parallel. It may be an AST Mapping
*        or a KeyMap holding a description of an ASDF transform.
*     map2
*        The second mapping to applied in parallel. It may be an AST Mapping
*        or a KeyMap holding a description of an ASDF transform.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF object, or NULL (without error) if the
*     conversion was not possible.

*  Notes:
*     - NULL will be returned if this function is invoked with the AST
*     error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstKeyMap *ret;
   AstObject *km[ 2 ];
   const char *cname;

/* Initilise. */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* If the name to be given to the concatenate is "AST__DD2R"" or
   "AST__DR2D", indicating that the purpose of the concatenate is to
   implement a angular conversion needed by the fact that AST uses
   radians for angle whereas ASDF uss degrees, then propagate the name
   to the two components in order to facilite identification of the
   final scale transforms that implement the conversion. This helps
   SimplifyAsdf do its job. */
   if( name && ( !strcmp( name, "AST__DR2D" ) ||
                 !strcmp( name, "AST__DD2R" ) ) ){
      cname = name;
   } else {
      cname = NULL;
   }

/* Get a KeyMap holding the ASDF descriptions of the first Mapping. */
   if( astIsAKeyMap( map1 ) ){
      km[ 0 ] = astClone( map1 );
   } else if( astIsAMapping( map1 ) ){
      km[ 0 ] = (AstObject *) WriteMapping( this, (AstMapping *) map1, NULL,
                                            cname, status );
   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Invalid object class (%s) "
                "supplied to WriteAsdfConcatenate (internal AST programming "
                "error).", status, astGetClass( map1 ) );
   }

/* Get a KeyMap holding the ASDF descriptions of the second Mapping. */
   if( astIsAKeyMap( map2 ) ){
      km[ 1 ] = astClone( map2 );
   } else if( astIsAMapping( map2 ) ){
      km[ 1 ] = (AstObject *) WriteMapping( this, (AstMapping *) map2, NULL,
                                            cname, status );
   } else if( astOK ) {
      astError( AST__INTER, "astWrite(YamlChan): Invalid object class (%s) "
                "supplied to WriteAsdfConcatenate (internal AST programming "
                "error).", status, astGetClass( map1 ) );
   }

/* If they were both converted successfully, create the returned KeyMap
   and store the properties of the base transform class. */
   if( km[ 0 ] && km[ 1 ] ) {
      ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/concatenate-1.2.0",
                                status );

/* Store the ASDF transform descriptions as a single vector entry in the
   returned KeyMap. */
      if( ret ) astMapPut1A( ret, "forward", 2, km, NULL );
   }

/* Free resources. */
   if( km[ 0 ] ) km[ 0 ] = astAnnul( km[ 0 ] );
   if( km[ 1 ] ) km[ 1 ] = astAnnul( km[ 1 ] );

/* Return the KeyMap. */
   return ret;
}

static AstKeyMap *WriteAsdfConstant( AstYamlChan *this, int nin, double con,
                                     AstObject *mapinv, const char *name,
                                     int *status ) {
/*
*  Name:
*     WriteAsdfConstant

*  Purpose:
*     Write an ASDF constant to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfConstant( AstYamlChan *this, int nin, double con,
*                                   AstObject *mapinv, const char *name,
*                                   int *status )

*  Description:
*     This function writes an ASDF constant transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     nin
*        The number of inputs.
*     con
*        The single constant output value.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/constant-1.4.0", status );

/* Store the constant output value */
   Store0D( this, "value", ret, con, status );

/* Store the number of inputs. */
   Store0I( this, "dimensions", ret, nin, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfEarthLocation( AstYamlChan *this, double obsgeo[3],
                                          int *status ) {
/*
*  Name:
*     WriteAsdfEarthLocation

*  Purpose:
*     Write an ASDF earthlocation to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfEarthLocation( AstYamlChan *this, double obsgeo[3],
*                                        int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF
*     earthlocation object.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obsgeo
*        The geocentric (x,y,z) coordinates in "m".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *km;
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "astropy/coordinates/earthlocation-1.0.0",
                          status );

/* Write out the ellipsoid (AST always uses "WGS84"). */
   Store0C( this, "ellipsoid", 0, ret, "WGS84", NULL, status );

/* Write out the geocentric (x,y,z) values as Quantities in metres. */
   km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 0, "m", status );
   ret = StoreKeyMap( this, "x", ret, &km, status );

   km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 1, "m", status );
   ret = StoreKeyMap( this, "y", ret, &km, status );

   km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 2, "m", status );
   ret = StoreKeyMap( this, "z", ret, &km, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfFrame( AstYamlChan *this, AstFrame *obj, int *status ) {
/*
*  Name:
*     WriteAsdfFrame

*  Purpose:
*     Write an ASDF frame or frame2d object to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfFrame( AstYamlChan *this, AstFrame *obj, int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF frame
*     or frame2d object. The choice of asdf class is based on the number of axes
*     in the supplied AST Frame.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the Frame to be written. Currently this must be a
*        SkyFrame or a simple Frame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *ret;
   char *name;
   const char *values[ MXDIM ];
   int iaxis;
   int naxes;
   int set;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the number of axes in the Frame. */
   naxes = astGetNaxes( obj );

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   if( naxes == 2 ) {
      ret = StartAsdfKeyMap( this, 0, "gwcs/frame2d-1.0.0", status );
   } else {
      ret = StartAsdfKeyMap( this, 0, "gwcs/frame-1.0.0", status );
   }

/* Store the "name" component of the required asdf structure as a scalar
   using the key "name". The value is the Domain of the supplied Frame,
   converted to lower case. */
   name = astStringCase( astGetDomain( obj ), 0 );
   Store0C( this, "name", 0, ret, name, NULL, status );
   name = astFree( name );

/* Store the "axes_names" component of the required asdf structure as a
   vector using the key "axes_names". The value for each axis is the Symbol
   attribute for the axis. */
   set = 0;
   for( iaxis = 0; iaxis < naxes; iaxis++ ) {
      if( astTestSymbol( obj, iaxis ) ) set = 1;
      values[ iaxis ] = astGetSymbol( obj, iaxis );
   }
   if( set ) Store1C( this, "axes_names", 0, ret, naxes, values, NULL, status );

/* Store the "unit" component of the required asdf structure as a
   vector using the key "unit". The value for each axis is the Unit
   attribute for the axis. Each element is tagged as an asdf unit. */
   set = 0;
   for( iaxis = 0; iaxis < naxes; iaxis++ ) {
      if( astTestUnit( obj, iaxis ) ) set = 1;
      values[ iaxis ] = astGetUnit( obj, iaxis );
   }
   if( set ) Store1C( this, "unit", 0, ret, naxes, values, "asdf/unit/unit-1.0.0",
                      status );

/* Store the "axis_physical_types" component of the required asdf structure
   as a vector using the key "axis_physical_types". The value for each axis is
   the Label attribute for the axis. */
   set = 0;
   for( iaxis = 0; iaxis < naxes; iaxis++ ) {
      if( astTestLabel( obj, iaxis ) ) set = 1;
      values[ iaxis ] = astGetLabel( obj, iaxis );
   }
   if( set ) Store1C( this, "axis_physical_types", 1, ret, naxes, values, NULL,
                      status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfIdentity( AstYamlChan *this, int ndim, AstObject *mapinv,
                                     const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfIdentity

*  Purpose:
*     Write an ASDF identity to a KeyMap

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfIdentity( AstYamlChan *this, int ndim, AstObject *mapinv,
*                                   const char *name, int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF
*     identity.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     ndim
*        The number of axes.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/identity-1.2.0",
                             status );

/* Store the number of dimensions. */
   Store0I( this, "n_dims", ret, ndim, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfNdArray( AstYamlChan *this, int ndim, const int *dims,
                                    double *vals, int *status ){
/*
*  Name:
*     WriteAsdfNdArray

*  Purpose:
*     Write an ASDF NdArray to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfNdArray( AstYamlChan *this, int ndim, const int *dims,
*                                  double *vals, int *status )

*  Description:
*     This function writes a 1d or 2d array of floating point values as an
*     ASDF ndarray to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     ndim
*        The number of dimensions in the created array: 0, 1 or 2.
*     dims
*        The length of each dimension. Ignored if "ndim" is zero.
*     vals
*        Pointer to the vector of values. These are assumed to be in
*        Fortran order.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   char rowkey[30];
   AstKeyMap *km;
   AstKeyMap *ret;
   double *pv;
   int irow;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap. Indicate the values in it should be used
   to create a yaml mapping and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "asdf/core/ndarray-1.0.0", status );

/* First deal with 2d arrays. */
   if( ndim == 2 ) {

/* Create a KeyMap to hold the "data" component. Indicate its contents
   should be written out as a YAML sequence. */
      km = StartAsdfKeyMap( this, 1, NULL, status );

/* Loop round all the rows. */
      pv = vals;
      for( irow = 0; irow < dims[ 1 ]; irow++ ){

/* Get the key for this row. */
         sprintf( rowkey, "data_%d", irow );

/* Store out the next row of data in the data KeyMap created above. */
         Store1D( this, rowkey, km, dims[ 0 ], pv, status );

/* Move the pointer on to the next row. */
         pv += dims[ 0 ];
      }

/* Store the data keymap in the returned keymap, using the key "data". */
      ret = StoreKeyMap( this, "data", ret, &km, status );

/* For 1D arrays, write out a sequence of scalars. */
   } else if( ndim == 1 ){
      Store1D( this, "data", ret, dims[ 0 ], vals, status );

/* For scalars just right out the one and only value. */
   } else if( ndim == 0 ){
      Store0D( this, "data", ret, *vals, status );

/* Report an error if used inappropriately. */
   } else if( astOK ){
      astError( AST__INTER, "astWrite(YamlChan): Can only write 1 or 2 "
                "dimensional ASDF ndarrays (supplied 'ndim' is %d).",
                status, ndim );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfPolynomial( AstYamlChan *this, int nin,
                                       int nout, int iout, int ncoeff,
                                       double *coeffs, int ischeby,
                                       double *lbnd, double *ubnd,
                                       AstObject *mapinv, const char *name,
                                       int *status ) {
/*
*  Name:
*     WriteAsdfPolynomial

*  Purpose:
*     Write an ASDF polynomial (or supported ortho_polynomial) to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfPolynomial( AstYamlChan *this, int nin,
*                                     int nout, int iout, int ncoeff,
*                                     double *coeffs, int ischeby,
*                                     double *lbnd, double *ubnd,
*                                     AstObject *mapinv, const char *name,
*                                     int *status )

*  Description:
*     This function writes an ASDF polynomial transform to a KeyMap. It
*     can also write ortho_polynomials so long as the polynomial type is
*     Chebyshev.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     nin
*        The number of inputs of the associated PolyMap. This is also the
*        number of inputs for the ASDF polynomial.
*     nout
*        The number of outputs of the associated PolyMap (the ASDF
*        polynomial has only one output - see "iout").
*     iout
*        The zero-based index of the output of the associated PolyMap
*        that is to be described by the one output of the ASDF polynomial.
*     ncoeff
*        The total number of coefficients (for all outputs) used by the
*        associated PolyMap.
*     coeffs
*        Pointer to the array of coefficients for the associated PolyMap,
*        as returned by astPolyCoeff.
*     ischeby
*        Non-zero if a Chebyshev ortho_polynomial should be created.
*        Otherwise, a basic polynomial is created.
*     lbnd
*        Only used if "ischeby" is non-zero. A pointer to an array holding
*        the lower bounds of the input domain over which the Chebyshev
*        polynomial is defined.
*     ubnd
*        Only used if "ischeby" is non-zero. A pointer to an array holding
*        the upper bounds of the input domain over which the Chebyshev
*        polynomial is defined.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *km;
   AstKeyMap *ret;
   double *cofs;
   double *group;
   double *pc;
   double domain[ 4 ];
   int dims[ 2 ];
   int icoeff;
   int mxpow[ 2 ];
   int power;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Initialise the maximum power of each input axis used by the specified
   PolyMap output axis. */
   mxpow[ 0 ] = -1;
   mxpow[ 1 ] = -1;

/* Search for PolyMap coefficients that relate to the specified PolyMap
   output axis. */
   group = coeffs;
   for( icoeff = 0; icoeff < ncoeff; icoeff++) {
      if( (int)( group[ 1 ] + 0.5 ) == iout + 1 ) {

/* Record the highest power of each input axis used by the specified
   PolyMap output axis. */
         power = (int)( group[ 2 ] + 0.5 );
         if( power > mxpow[ 0 ] ) mxpow[ 0 ] = power;

         if( nin > 1 ) {
            power = (int)( group[ 3 ] + 0.5 );
            if( power > mxpow[ 1 ] ) mxpow[ 1 ] = power;
         }
      }
      group += 2 + nin;
   }

/* Allocate space to hold the 2-d array of coefficients for all input powers,
   including any that are zero. Use astCalloc so that they are initialised
   to zero. */
   dims[ 1 ] = mxpow[ 0 ] + 1;
   if( nin > 1 ) {
      dims[ 0 ] =  mxpow[ 1 ] + 1;
   } else {
      dims[ 0 ] = 1;
      mxpow[ 1 ] = 0;
   }
   cofs = astCalloc( dims[ 0 ]*dims[ 1 ], sizeof(*cofs) );
   if( cofs ) {

/* Loop round the supplied coefficients array again in the same way as
   above. This time, copy the coefficients into the array allocated
   above. */
      group = coeffs;
      for( icoeff = 0; icoeff < ncoeff; icoeff++) {
         if( (int)( group[ 1 ] + 0.5 ) == iout + 1 ) {

            power = (int)( group[ 2 ] + 0.5 );
            pc = cofs + power * ( mxpow[ 1 ] + 1 );

            if( nin > 1 ) {
               power = (int)( group[ 3 ] + 0.5 );
               pc += power;
            }

            *pc =  group[ 0 ];

         }
         group += 2 + nin;
      }

/* Create the returned KeyMap and store the properties of the base
   transform class. Note, we do not need to include a window or domain
   with the ortho_polynomial since the defaults (window[-1,1] and
   unlimited domain) are appropriate. */
      if( ischeby ) {
         ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/ortho_polynomial-1.0.0",
                                   status );
         Store0C( this, "polynomial_type", 0, ret, "chebyshev", NULL, status );
      } else {
         ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/polynomial-1.2.0",
                                   status );
      }

/* Create a KeyMap holding an NdArray of coefficient valuess and store
   the KeyMap in the returned KeyMap with key "coefficients". */
      km = WriteAsdfNdArray( this, 2, dims, cofs, status );
      ret = StoreKeyMap( this, "coefficients", ret, &km, status );

/* Free resources */
      cofs = astFree( cofs );

/* If we are writing out a Chebyshev polynomial, store the input domain
   over which it is valid. */
      if( ischeby ) {
         km = astKeyMap( "Sortby=AgeDown", status );
         astMapPut0C( km, "YAMLSEQ", "YES", NULL );

         domain[ 0 ] = lbnd[ 0 ];
         domain[ 1 ] = ubnd[ 0 ];
         astMapPut1D( km, "DOMAIN_1", 2, domain, NULL );

         if( nin > 1 ) {
            domain[ 0 ] = lbnd[ 1 ];
            domain[ 1 ] = ubnd[ 1 ];
            astMapPut1D( km, "DOMAIN_2", 2, domain, NULL );
         }
         ret = StoreKeyMap( this, "domain", ret, &km, status );
      }
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfProjection( AstYamlChan *this, const char *class,
                                       int direction, AstKeyMap *pv,
                                       AstObject *mapinv, const char *name,
                                       int *status ) {
/*
*  Name:
*     WriteAsdfProjection

*  Purpose:
*     Write an ASDF projection to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfProjection( AstYamlChan *this, const char *class,
*                                     int direction, AstKeyMap *pv,
*                                     AstObject *mapinv, const char *name,
*                                     int *status )

*  Description:
*     This function writes an ASDF sky projection transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     class
*        The ASDF class of the projection.
*     direction
*        Non-zero if the forward transformation of the ASDF projection
*        should go from pixel to sky, or zero if it should go from sky to
*        pixel.
*     pv
*        A KeyMap holding the projection parameters. Each key in the
*        KeyMap should the ASDF name for a projection parameter, and the
*        corresponding value should be a scalar double holding the parameter
*        value.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;
   const char *key;
   double dval;
   int ikey;
   int nkey;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, class, status );

/* The forward direction of the projection */
   Store0C( this, "direction", 0, ret, direction?"pix2sky":"sky2pix", NULL,
            status );

/* Store the projection parameters in the KeyMap created above. */
   nkey = pv ? astMapSize( pv ) : 0;
   for( ikey = 0; ikey < nkey; ikey++ ) {
      key = astMapKey( pv, ikey );
      astMapGet0D( pv, key, &dval );
      Store0D( this, key, ret, dval, status );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfQuantity( AstYamlChan *this, int ndim, const int *dims,
                                     double *vals, const char *units, int *status ){
/*
*  Name:
*     WriteAsdfQuantity

*  Purpose:
*     Write an ASDF Quantity to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfQuantity( AstYamlChan *this, int ndim, const int *dims,
*                                   double *vals, const char *units, int *status )

*  Description:
*     This function writes a 1d or 2d array of floating point values as an
*     ASDF quantity to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     ndim
*        The number of dimensions in the created array: 0, 1 or 2.
*     dims
*        The length of each dimension. Ignored if "ndim" is zero.
*     vals
*        Pointer to the vector of values. These are assumed to be in
*        Fortran order.
*     units
*        The units string to be stored in thequantity.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.
*/

/* Local Variables: */
   AstKeyMap *km;
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "asdf/unit/quantity-1.1.0", status );

/* Write out the ND-array. */
   km = WriteAsdfNdArray( this, ndim, dims, vals, status );
   ret = StoreKeyMap( this, "value", ret, &km, status );

/* Write out the units. */
   Store0C( this, "unit", 0, ret, units, NULL, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfRemapAxes( AstYamlChan *this, int nin, int nout,
                                      int *mapping, AstObject *mapinv,
                                      const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfRemapAxes

*  Purpose:
*     Write an ASDF remap_axes to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfRemapAxes( AstYamlChan *this, int nin, int nout,
*                                    int *mapping, AstObject *mapinv,
*                                    const char *name, int *status )

*  Description:
*     This function writes an ASDF remap_axes transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     nin
*        The number of inputs.
*     nout
*        The number of outputs.
*     mapping
*        The axis permutuation array, length "nout". Each value in this
*        array is the zero-based index of the input that feeds the output.
*        All values must be less than "nin".
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/remap_axes-1.3.0",
                             status );

/* Store the number of inputs. */
   Store0I( this, "n_inputs", ret, nin, status );

/* Store the axis permutation array. */
   Store1I( this, "mapping", ret, nout, mapping, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfRotate3d( AstYamlChan *this, double angles[3],
                                     AstObject *mapinv, const char *name,
                                     int *status ) {
/*
*  Name:
*     WriteAsdfRotate3d

*  Purpose:
*     Write an ASDF rotate3d to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfRotate3d( AstYamlChan *this, double angles[3],
*                                   AstObject *mapinv, const char *name,
*                                   int *status )

*  Description:
*     This function writes an ASDF rotate3d transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     angles
*        The three Euler angles, in degrees (see MatrixMap method
*        astMtrEuler).
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/rotate3d-1.2.0",
                             status );

/* Write out the angles. */
   Store0D( this, "phi", ret, angles[0], status );
   Store0D( this, "theta", ret, angles[1], status );
   Store0D( this, "psi", ret, angles[2], status );

/* Write out the axis about which each rotation occurs. */
   Store0C( this, "direction", 0, ret, "xzx", NULL, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfScale( AstYamlChan *this, double factor, AstObject *mapinv,
                                  const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfScale

*  Purpose:
*     Write an ASDF scale to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfScale( AstYamlChan *this, double factor, AstObject *mapinv,
*                                const char *name, int *status )

*  Description:
*     This function writes an ASDF scale transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     factor
*        The scale factor.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/scale-1.2.0",
                             status );

/* Write out the scale factor. */
   Store0D( this, "factor", ret, factor, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfShift( AstYamlChan *this, double offset, AstObject *mapinv,
                                  const char *name, int *status ) {
/*
*  Name:
*     WriteAsdfShift

*  Purpose:
*     Write an ASDF shift to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfShift( AstYamlChan *this, double offset, AstObject *mapinv,
*                                const char *name, int *status )

*  Description:
*     This function writes an ASDF shift transform to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     offset
*        The offset applied by the shift.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        Pointer to an optional string to store as the "name" property of
*        the ASDF transform. May be NULL.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap, or NULL if the object could not be converted.

*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the properties of the base
   transform class. */
   ret = StartAsdfTransform( this, mapinv, name, "asdf/transform/shift-1.2.0", status );

/* Write out the offset. */
   Store0D( this, "offset", ret, offset, status );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfStep( AstYamlChan *this, AstFrame *frame, AstMapping *map,
                                 AstFrame *nextframe, int *status ){
/*
*  Name:
*     WriteAsdfStep

*  Purpose:
*     Write an ASDF step to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfStep( AstYamlChan *this, AstFrame *frame, AstMapping *map,
*                               AstFrame *nextframe, int *status )

*  Description:
*     This function writes an ASDF step to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     frame
*        Pointer to the Frame to be included in the step. It should
*        describe the inputs of "map".
*     map
*        Pointer to the Mapping to be included in the step. It should be
*        NULL for the last step in a chain.
*     nextframe
*        Pointer to the Frame to be included in the following step, or NULL
*        if there are no further steps.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A new KeyMap holding the ASDF object, or NULL if conversion was not
*     possible.

*/

/* Local Variables: */
   AstKeyMap *km_frame;
   AstKeyMap *km_transform;
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create a KeyMap holding an ASDF description of the supplied Frame. */
   km_frame = WriteFrame( this, frame, status );

/* Create a KeyMap holding an ASDF description of the Mapping, if a
   Mapping was supplied. */
   if( map ) {
      km_transform = WriteMapping( this, map, NULL, NULL, status );

/* If the supplied frame is a SkyFrame, the corresponding ASDF frame will
   represent (lon,lat) in degrees. But the supplied AST Mapping will assume
   it is being fed radians. So include a suitable unit-changing mapping
   (a ZoomMap that converts degs to rads) before the supplied mapping. */
      if( frame && astIsASkyFrame( frame ) ) {
         km_transform = AddR2D( this, &km_transform, 0, 1, 2, status );
      }

/* If there is another step following the step being written, and the
   frame in the next step is a SkyFrame, its ASDF equivalent will
   represent (lon,lat) in degrees. But the supplied Mapping will produce
   radians. So include a suitable unit-changing mapping (a ZoomMap that
   converts rads to degs) after the supplied mapping. */
      if( nextframe && astIsASkyFrame( nextframe ) ) {
         km_transform = AddR2D( this, &km_transform, 1, 0, 2, status );
      }

/* Now try to simplify the ASDF transform chain by cancelling out
   adjacent R2D and D2R conversions, or absorbing them into the
   neighbouring transforms. */
      SimplifyAsdf( this, &km_transform, status );

   } else {
      km_transform = NULL;
   }

/* If all is OK, create the returned KeyMap and store the appropriate ASDF tag. */
   if( km_frame && (!map || km_transform)  ){
      ret = StartAsdfKeyMap( this, 0, "gwcs/step-1.0.0", status );

/* Add in the Frame keymap. */
      astMapPut0A( ret, "frame", km_frame, NULL );

/* Add in the Mapping keymap if a Mapping was supplied. */
      if( map ) astMapPut0A( ret, "transform", km_transform, NULL );
   }

/* Free resources. */
   if( km_frame ) km_frame = astAnnul( km_frame );
   if( km_transform ) km_transform = astAnnul( km_transform );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfTime( AstYamlChan *this, double time, double obsgeo[3],
                                 int *status ) {
/*
*  Name:
*     WriteAsdfTime

*  Purpose:
*     Write an ASDF time to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteAsdfTime( AstYamlChan *this, double time, double obsgeo[3],
*                               int *status )

*  Description:
*     This function returns a KeyMap containing the properties of an ASDF
*     time object.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     time
*        The time value. An MJD in the TDB time scale.
*     obsgeo
*        The geocentric (x,y,z) coordinates of the observer's position, in
*        "m". Setting these to AST__BAD causes them to be ignored.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the ASDF
*     object cannot be created from the supplied values. NULL will also
*     be returned if an error occurs.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstKeyMap *km;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "asdf/time/time-1.1.0", status );

/* Write out the supplied MJD value. */
   Store0D( this, "value", ret, time, status );

/* Write out the format (MJD). */
   Store0C( this, "format", 0, ret, "mjd", NULL, status );

/* Write out the time-scale (TDB). */
   Store0C( this, "scale", 0, ret, "tdb", NULL, status );

/* Write out the observer's location as geocentric (x,y,z), in "m". */
   if( obsgeo[ 0 ] != AST__BAD && obsgeo[ 1 ] != AST__BAD &&
       obsgeo[ 2 ] != AST__BAD ){
      km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 0, "m", status );
      ret = StoreKeyMap( this, "x", ret, &km, status );

      km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 1, "m", status );
      ret = StoreKeyMap( this, "y", ret, &km, status );

      km = WriteAsdfQuantity( this, 0, NULL, obsgeo + 2, "m", status );
      ret = StoreKeyMap( this, "z", ret, &km, status );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteAsdfWcs( AstYamlChan *this, AstFrameSet *fs, int *status ) {
/*
*  Name:
*     WriteAsdfWcs

*  Purpose:
*     Write an ASDF wcs object to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap WriteAsdfWcs( AstYamlChan *this, AstFrameSet *fs, int *status )

*  Description:
*     This function writes the properties of an ASDF wcs object to a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     fs
*        Pointer to the FrameSet to be written. Currently this must be a
*        FrameSet containing a single chain of Frames, with monotonically
*        increasing Frame index from base Frame (the first Frame, index 1)
*        to current Frame (the last Frame, index Nframe).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A new KeyMap holding the properties of equivalent ASDF object, or
*     NULL (without error) if the conversion cannot be done.

*  Notes:
*     - NULL will be returned if this function is invoked with the AST error
*     status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstFrame *frame;
   AstFrame *nextframe;
   AstKeyMap *km;
   AstObject **steps;
   AstKeyMap *ret;
   AstMapping *mapping;
   const char *name;
   int i;
   int ifrm;
   int nfrm;
   int nstep;
   int ok;

/* Initialise. */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Create the returned KeyMap and store the appropriate ASDF tag. */
   ret = StartAsdfKeyMap( this, 0, "gwcs/wcs-1.0.0", status );

/* The name value to store in the wcs structure is taken from the ID or Ident
   attribute of the FrameSet. */
   if( astGetPreserveName( this ) ){
      name = astGetIdent( fs );
   } else {
      name = astGetID( fs );
   }

/* Store the name in the keymap as a scalar using the key "name". */
   astMapPut0C( ret, "name", name, NULL );
   astMapPut0I( ret, "name_QUOTE", 1, NULL );

/* Initialise the array holding pointers to the step KeyMaps converted so far. */
   steps = NULL;
   nstep = 0;

/* Loop round converting ASDF steps. Each step includes an AST Mapping plus
   an AST Frame describing the Mapping inputs. The final step has no Mapping,
   so do that later. Note, Frame indices are one-based. Each step needs
   to know if it should include an extra unit-changing mapping to feed
   the next step, so supply a pointer to the frame in the next step each
   time we write out a step.  */
   ok = 1;
   nfrm = astGetNframe( fs );
   nextframe = astGetFrame( fs, 1 );
   for( ifrm = 1; ifrm < nfrm && ret; ifrm++ ){
      frame = nextframe;
      nextframe = astGetFrame( fs, ifrm + 1 );
      mapping = astGetMapping( fs, ifrm, ifrm + 1 );

      km = WriteAsdfStep( this, frame, mapping, nextframe, status );
      if( km ) {
         steps = astGrow( steps, nstep + 1, sizeof(*steps) );
         if( astOK ) steps[ nstep++ ] = (AstObject *) km;
      } else {
         ok = 0;
      }
      frame = astAnnul( frame );
      mapping = astAnnul( mapping );
   }

/* Write the final step, which has no Mapping. */
   frame = nextframe;
   km = WriteAsdfStep( this, frame, NULL, NULL, status );
   if( km ) {
      steps = astGrow( steps, nstep + 1, sizeof(*steps) );
      if( astOK ) steps[ nstep++ ] = (AstObject *) km;
   } else {
      ok = 0;
   }
   frame = astAnnul( frame );

/* If all is OK, store the array of steps in the returned KeyMap.
   Otherwise annull the returned KeyMap. */
   if( astOK && ok ) {
      astMapPut1A( ret, "steps", nstep, steps, NULL );
   }  else {
      ret = astAnnul( ret );
   }

/* Free resources. */
   for( i = 0; i < nstep; i++ ) steps[ i ] = astAnnul( steps[ i ] );
   steps = astFree( steps );

/* Return the KeyMap. */
   return ret;
}

static AstKeyMap *WriteCmpMap( AstYamlChan *this, AstCmpMap *map,
                               AstObject *mapinv, const char *name,
                               int *status ) {
/*
*  Name:
*     WriteCmpMap

*  Purpose:
*     Write an AST CmpMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteCmpMap( AstYamlChan *this, AstCmpMap *map,
*                             AstObject *mapinv, const char *name,
*                             int *status )

*  Description:
*     This function converts an AST CmpMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the CmpMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstCmpMap *newmap;
   AstKeyMap *ret;
   AstMapping *map2;
   AstMapping *map1;
   int invert1;
   int invert2;
   int old_invert1;
   int old_invert2;
   int series;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Check if the supplied CmpMap contains a sequence of Mappings that is
   equivalent to a single ASDF transform class. For instance, a series
   combination of (SphMap,MatrixMap,Sphmap) may be equivalent to an ASDF
   rotate3d. If so, IsAsdfTransform will return a KeyMap holding the equivalent
   ASDF transform. Otherwise, proceed to write out the two component Mappings
   contained in the CmpMap. */
   ret = IsAsdfTransform( this, map, mapinv, name, &newmap, status );
   if( !ret ){

/* Decompose the CmpMap. into its two component Mappings. */
      astDecompose( newmap, &map1, &map2, &series, &invert1, &invert2 );

/* Temporarily set the Invert flags in the component Mappings to the
   required values, recording the old values first. */
      old_invert1 = astGetInvert( map1 );
      old_invert2 = astGetInvert( map2 );
      astSetInvert( map1, invert1 );
      astSetInvert( map2, invert2 );

/* Write out the appropriate ASDF transform */
      if( series ){
         ret = WriteAsdfCompose( this, (AstObject *) map1, (AstObject *) map2,
                                 (AstObject *) mapinv,
                                 GetName( this, name, (AstMapping *) map,
                                          status ), status );
      } else {
         ret = WriteAsdfConcatenate( this, (AstObject *) map1, (AstObject *) map2,
                                     (AstObject *) mapinv,
                                     GetName( this, name, (AstMapping *) map,
                                              status ), status );
      }

/* Reinstate the original invert flags. */
      astSetInvert( map1, old_invert1 );
      astSetInvert( map2, old_invert2 );

/* Free pointers. */
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );
   }
   newmap = astAnnul( newmap );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteFrame( AstYamlChan *this, AstFrame *obj, int *status ) {
/*
*  Name:
*     WriteFrame

*  Purpose:
*     Return a KeyMap holding a set of ASDF properties equivalent to the
*     supplied Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteFrame( AstYamlChan *this, AstFrame *obj, int *status )

*  Description:
*     This function creates a new KeyMap holding a description of an ASDF
*     object equivalent to the supplied Frame.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the Frame that is to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the suppplied
*     Frame cannot be converted to ASDF. NULL will also be returned if
*     an error occurs.

*/

/* Local Variables: */
   const char *class;
   AstKeyMap *ret;

/* Check the global error status. */
   if( !astOK ) return NULL;

/* First handle SkyFrames (and any subclasses of SkyFrame). */
   if( astIsASkyFrame( obj ) ) {
      ret = WriteAsdfCelestialFrame( this, (AstSkyFrame *) obj, status );

/* Now handle simple Frames (but no subclasses of Frame). */
   } else if( class = astGetClass( obj ), class && !strcmp( class, "Frame" ) ) {
      ret = WriteAsdfFrame( this, obj, status );
   }

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteFrameSet( AstYamlChan *this, AstFrameSet *obj, int *status ) {
/*
*  Name:
*     WriteFrameSet

*  Purpose:
*     Return a KeyMap holding a set of ASDF properties equivalent to the
*     supplied FrameSet.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteFrameSet( AstYamlChan *this, AstFrameSet *obj, int *status )

*  Description:
*     This function creates a new KeyMap holding a description of an ASDF
*     object equivalent to the supplied FrameSet.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     obj
*        Pointer to the FrameSet that is to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the suppplied
*     FrameSet cannot be converted to ASDF. NULL will also be returned if
*     an error occurs.

*/

/* Local Variables: */
   AstFrameSet *chain;
   AstKeyMap *ret;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* For the moment, we just write out the base->current chain. First get a
   new FrameSet containing just the Frames and Mappings along the base ->
   current chain. */
   chain = astFrameChain( obj, 1 );

/* Convert this chain to an ASDF wcs object. */
   ret = WriteAsdfWcs( this, chain, status );

/* Free resources. */
   chain = astAnnul( chain );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteMapping( AstYamlChan *this, AstMapping *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WriteMapping

*  Purpose:
*     Write an AST Mapping to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteMapping( AstYamlChan *this, AstMapping *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST Mapping to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the Mapping that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The new KeyMap. NULL will be returned without error if the suppplied
*     Mapping cannot be converted to ASDF. NULL will also be returned if
*     an error occurs.
*/

/* Local Variables: */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Currently, only the following classes of AST Mapping can be converted to
   ASDF Yaml. */
   if( astIsACmpMap( map ) ) {
      ret = WriteCmpMap( this, (AstCmpMap *) map, mapinv, name, status );

   } else if( astIsATranMap( map ) ) {
      ret = WriteTranMap( this, (AstTranMap *) map, mapinv, name, status );

   } else if( astIsAUnitMap( map ) ) {
      ret = WriteUnitMap( this, (AstUnitMap *) map, mapinv, name, status );

   } else if( astIsAZoomMap( map ) ) {
      ret = WriteZoomMap( this, (AstZoomMap *) map, mapinv, name, status );

   } else if( astIsAShiftMap( map ) ) {
      ret = WriteShiftMap( this, (AstShiftMap *) map, mapinv, name, status );

   } else if( astIsAWinMap( map ) ) {
      ret = WriteWinMap( this, (AstWinMap *) map, mapinv, name, status );

   } else if( astIsAMatrixMap( map ) ) {
      ret = WriteMatrixMap( this, (AstMatrixMap *) map, mapinv, name, status );

   } else if( astIsAPermMap( map ) ) {
      ret = WritePermMap( this, (AstPermMap *) map, mapinv, name, status );

   } else if( astIsAPolyMap( map ) ) {
      ret = WritePolyMap( this, (AstPolyMap *) map, mapinv, name, status );

   } else if( astIsAWcsMap( map ) ) {
      ret = WriteWcsMap( this, (AstWcsMap *) map, mapinv, name, status );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteMatrixMap( AstYamlChan *this, AstMatrixMap *map,
                                  AstObject *mapinv, const char *name, int *status ) {
/*
*  Name:
*     WriteMatrixMap

*  Purpose:
*     Write an AST MatrixMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteMatrixMap( AstYamlChan *this, AstMatrixMap *map,
*                                AstObject *mapinv, const char *name, int *status )

*  Description:
*     This function converts an AST MatrixMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the MatrixMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *ret;
   double *matrix;
   int form;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Check the MatrixMap is square and 2-dimensional. */
   if( astGetNin( map ) == 2 && astGetNout( map ) == 2 ){

/* Get the forward matrix applied by the MatrixMap. */
      matrix = astMtrGet( map, 1, 1, &form );

/* Write it out as an ASF affine transform. */
      ret = WriteAsdfAffine( this, 2, matrix, NULL, mapinv,
                             GetName( this, name, (AstMapping *) map, status ),
                             status );

/* Free resources. */
      matrix = astFree( matrix );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WritePermMap( AstYamlChan *this, AstPermMap *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WritePermMap

*  Purpose:
*     Write an AST PermMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WritePermMap( AstYamlChan *this, AstPermMap *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST PermMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the PermMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform, in which case the
*        inverse transformation of the supplied PermMap is ignored.  It
*        may be an AST Mapping or a KeyMap holding a description of an
*        ASDF transform. If NULL is supplied for "mapinv", the custom
*        inverse stored in the ASDF transform is defined by the inverse
*        transformation of the supplied PermMap.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstMapping *map2;
   AstMapping *map1;
   AstMapping *pmnoncon;
   AstMapping *pmcon;
   AstMapping *tmp;
   AstPermMap *pm;
   double *constants;
   double con;
   int *noncon;
   int *outperm;
   int *total_outperm;
   int annull_mapinv;
   int i;
   int icon;
   int inon;
   int iout_con;
   int iout_noncon;
   int nfixed;
   int nin;
   int nout;
   int nvariable;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* ASDF transforms that correspond to an AST PermMap require a custom
   inverse to define the inverse transformation. If no Mapping was supplied
   to define an ASDF custom inverse, we will use an inverted copy of the
   supplied PermMap. But by itself this would get us into an infinite
   loop because this function would eventually be called to write out the
   custom inverse, resulting in a custom inverse being written out for the
   custom inverse, etc. To avoid this we use a non-NULL value for the Object
   Proxy attribute ("NOINV") to indicate that the supplied PermMap is being
   written out as the custom inverse of a higher level ASDF transform and
   should therefore have no custom inverse itself. If this is the case, we
   do not write out a custom inverse here. */
   if( !mapinv && !astGetProxy( map ) ) {
      mapinv = astCopy( map );
      astInvert( mapinv );
      astSetProxy( mapinv, NOINV );
      annull_mapinv = 1;
   } else {
      annull_mapinv = 0;
   }

/* Write out the forward transformation of the supplied PermMap as one or
   more ASDF transforms. First get the properties of the forward
   transformation of the supplied PermMap. */
   outperm = astGetOutPerm( map );
   nin = astGetNin( map );
   nout = astGetNout( map );
   constants = astGetConstants( map );

/* Check if the forward transformation of the supplied PermMap assigns constant
   values to any of its outputs. Record the first used constant value in "con". */
   nfixed = 0;
   if( astOK ) {
      for( i = 0; i < nout; i++ ) {
         if( outperm[ i ] < 0 ) {
            nfixed++;
            con = constants[ -outperm[ i ] - 1 ];
         } else if( outperm[ i ] >= nin ) {
            nfixed++;
            con = AST__BAD;
         }
      }
   }

/* Create an array to hold the indices of the input axes that feed the
   non-constant outputs. */
   nvariable = nout - nfixed;
   noncon = astMalloc( nvariable*sizeof(noncon) );

/* Create an array to hold the indices of the first Mapping outputs feed
   the outputs of the total compose. */
   total_outperm = astMalloc( nout*sizeof(total_outperm) );

/* If there are any fixed outputs, the resulting ASDF transform needs to be
   a combination of ASDF remap_axes and constant transforms. The one
   exception is if the supplied PermMap has a single output, which is
   fixed. In this case we can write it out as an ASDF constant. */
   if( nfixed == 1 && nout== 1 ) {
      ret = WriteAsdfConstant( this, nin, con, mapinv,
                               GetName( this, name, (AstMapping *) map, status ),
                               status );

/* Now handle the more complicated case of a mix of constant and
   non-constant outputs. */
   } else if( nfixed > 0 && astOK ) {

/* The forward transformation of the total PermMap is represented in ASDF
   as a compose containing two Mappings in series: the first is a
   parallel CmpMap containing the AST equivalent of a single remap_axes that
   selects the non-coantsnt inputs, plus a set of constants that each
   create one of the constant output values. The second Mapping in the
   compose is the AST equivalent of a remap_axes transform that reorders
   the outputs from the first Mapping into the required order. Create the
   first Mapping (the parallel CmpMap) first. Loop through all the
   outputs. */
      iout_con = 0;
      iout_noncon = nfixed;
      inon = 0;
      pmcon = NULL;
      for( i = 0; i < nout; i++ ) {

/* If this output is constant, create a PermMap that generates a single
   constant output from the Nin inputs. The inverse transformation is not
   used. Then add the PermMap in parallel with the PermMaps generated for
   previous constants. */
         if( outperm[ i ] < 0 || outperm[ i ] >= nin ) {
            if( outperm[ i ] < 0 ) {
               con = constants[ -outperm[ i ] - 1 ];
            } else if( outperm[ i ] >= nin ) {
               con = AST__BAD;
            }
            icon = -1;
            pm = astPermMap( nin, NULL, 1, &icon, &con, " ", status );

            if( pmcon ) {
               tmp = (AstMapping *) astCmpMap( pmcon, pm, 0, " ", status );
               pm = astAnnul( pm );
               pmcon = astAnnul( pmcon );
               pmcon = tmp;
            } else {
               pmcon = (AstMapping *) pm;
            }

/* Append the index of the current output to the array that is used to
   reorder the outputs of the first Mapping in the compose (the parallel
   CmpMap being created at he moment). */
            total_outperm[ iout_con++ ] = i;

/* If this output is non constant, add it into the outperm array for the
   non-constants PermMap. */
         } else {
            noncon[ inon++ ] = outperm[ i ];

/* Append the index of the current output to the array that is used to
   reorder the outputs of the first Mapping in the compose (the parallel
   CmpMap being created at he moment). */
            total_outperm[ iout_noncon++ ] = i;
         }
      }

/* Create the non-constants PermMap. */
      pmnoncon = (AstMapping *) astPermMap( nin, NULL, nvariable, noncon,
                                            NULL, " ", status );

/* Put it in parallel with the constants PermMaps. */
      map1 = (AstMapping *) astCmpMap( pmcon, pmnoncon, 0, " ", status );
      pmcon = astAnnul( pmcon );
      pmnoncon = astAnnul( pmnoncon );

/* Now we need to create the second Mapping for the compose. This is a
   PermMap that reorders the outputs from the first mapping (the parallel
   CmpMap created above) into the required order. */
      map2 = (AstMapping *) astPermMap( nout, NULL, nout, total_outperm, NULL,
                                        " ", status );

/* Write out the ASDF compose. */
      ret = WriteAsdfCompose( this, (AstObject *) map1, (AstObject *) map2,
                              mapinv, GetName( this, name, (AstMapping *) map,
                                               status ),
                              status );

/* Annul the component Mappings. */
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );

/* If the forward transformation of the supplied PermMap does not assign
   a constant value to any of its outputs, the ASDF can be a single
   remap_axes transform. */
   } else {
      ret = WriteAsdfRemapAxes( this, nin, nout, outperm, mapinv,
                                GetName( this, name, (AstMapping *) map, status ),
                                status );
   }

/* Free resources */
   if( annull_mapinv ) mapinv = astAnnul( mapinv );
   total_outperm = astFree( total_outperm );
   outperm = astFree( outperm );
   constants = astFree( constants );
   noncon = astFree( noncon );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WritePolyMap( AstYamlChan *this, AstPolyMap *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WritePolyMap

*  Purpose:
*     Write an AST PolyMap (or ChebyMap) to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WritePolyMap( AstYamlChan *this, AstPolyMap *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST PolyMap (or ChebyMap, which is a
*     type of PolyMap) to a set of ASDF properties stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the PolyMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if
*     the conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *km_tmp;
   AstKeyMap *km_ra;
   AstKeyMap *km_all;
   AstKeyMap *km_op;
   AstKeyMap *ret;
   double *coeffs;
   double lbnd[ MXDIM ];
   double ubnd[ MXDIM ];
   int *outperm;
   int *po;
   int annull_mapinv;
   int iin;
   int iout;
   int ischeby;
   int ncoeff;
   int nel;
   int nin;
   int nout;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Asdf only supports 2D polynomials. */
   nin = astGetNin( map );
   nout = astGetNout( map );
   if( nin < 3 && nout < 3 ) {

/* Note if the PolyMap is a ChebyMap. If so, get the bounds of the input
   domain over which it is valid. */
      ischeby = astIsAChebyMap( map );
      if( ischeby ) astChebyDomain( (AstChebyMap *)map, 1, lbnd, ubnd );

/* ASDF transforms that correspond to an AST PolyMap require a custom
   inverse to define the inverse transformation. If no Mapping was supplied
   to define an ASDF custom inverse, we will use an inverted copy of the
   supplied PolyMap. But by itself this would get us into an infinite
   loop because this function would eventually be called to write out the
   custom inverse, resulting in a custom inverse being written out for the
   custom inverse, etc. To avoid this we use a non-NULL value for the Object
   Proxy attribute ("NOINV") to indicate that the supplied PolyMap is being
   written out as the custom inverse of a higher level ASDF transform and
   should therefore have no custom inverse itself. If this is the case, we
   do not write out a custom inverse here. Note, check that the inverse
   transformation is defined and is not implemented using an Iterative
   inverse. This ensures that the inverse will be writable as an ASDF
   polynomial. */
      if( !mapinv && !astGetProxy( map ) ) {
         if( astGetTranInverse( map ) && !astGetIterInverse( map ) ) {
            mapinv = astCopy( map );
            astInvert( mapinv );
            astSetProxy( mapinv, NOINV );
            annull_mapinv = 1;
         } else {
            annull_mapinv = 0;
         }
      } else {
         annull_mapinv = 0;
      }

/* Get the number of coefficients of the forward transformation of the
   PolyMap. */
      astPolyCoeffs( map, 1, 0, NULL, &ncoeff );

/* Check that the requested transformation is defined. */
      if( ncoeff ){

/* Allocate room for the coefficient values. */
         nel = ncoeff*( nin + 2 );
         coeffs = astMalloc( nel*sizeof( *coeffs ) );

/* Get the coefficients of the required transformation of the PolyMap. */
         astPolyCoeffs( map, 1, nel, coeffs, &ncoeff );

/* If the PolyMap transformation has only one output, create a KeyMap holding
   a description of it as a single ASDF polynomial. */
         if( nout == 1 ) {
            ret = WriteAsdfPolynomial( this, nin, nout, 0, ncoeff,
                                       coeffs, ischeby, lbnd, ubnd, mapinv,
                                       GetName( this, name, (AstMapping *) map,
                                                status ), status );

/* If the PolyMap forward transformation has more than one output, we need
   to combine multiple polynomials in parallel and use an ASDF remap_axes
   transform to duplicate the inputs for each polynomial. */
         } else {

/* Get a KeyMap containing the properties of the ASDF polynomial that
   generates each PolyMap output. Combine them in parallel into an ASDF
   concatenate. */
            km_all = WriteAsdfPolynomial( this, nin, nout, 0, ncoeff, coeffs,
                                          ischeby, lbnd, ubnd, NULL, NULL, status );
            for( iout = 1; iout < nout; iout++ ) {
               km_op = WriteAsdfPolynomial( this, nin, nout, iout, ncoeff,
                                            coeffs, ischeby, lbnd, ubnd, NULL,
                                            NULL, status );
               km_tmp = WriteAsdfConcatenate( this, (AstObject *) km_all,
                                              (AstObject *) km_op, NULL,
                                              NULL, status );
               km_all = astAnnul( km_all );
               km_op = astAnnul( km_op );
               km_all = km_tmp;
            }

/* Create a KeyMap containing a description of an ASDF remap_axes that
   duplicates the input axes so that its output axes can feed the
   ASDF concatenate created above. First allocate space for the axis
   permutation array. */
            outperm = astMalloc( nin*nout*sizeof(*outperm) );
            if( outperm ){

/* Each PolyMap transformation output requires a complete set of input
   values, so duplicate the input axes for each output axis. */
               po = outperm;
               for( iout = 0; iout < nout; iout++ ) {
                  for( iin = 0; iin < nin; iin++ ) *(po++) = iin;
               }

/* Create the KeyMap holding the remap_axes. */
               km_ra = WriteAsdfRemapAxes( this, nin, nin*nout, outperm, NULL,
                                           NULL, status );

/* Create a KeyMap holding the remap_axes in series with the concatenate
   (which holds the polynomials in parallel). */
               ret = WriteAsdfCompose( this, (AstObject *) km_ra,
                                       (AstObject *) km_all, mapinv,
                                       GetName( this, name, (AstMapping *) map,
                                                status ), status );
               km_ra = astAnnul( km_ra );
               km_all = astAnnul( km_all );
            }

/* Free resources. */
            outperm = astFree( outperm );
         }

/* Free resources */
         coeffs = astFree( coeffs );
      }
      if( annull_mapinv ) mapinv = astAnnul( mapinv );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteProxy( AstYamlChan *this, AstMapping *map, AstObject *mapinv,
                              const char *name, int *status ) {
/*
*  Name:
*     WriteProxy

*  Purpose:
*     Write a proxy for an ASDF transform to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteProxy( AstYamlChan *this, AstMapping *map, AstObject *mapinv,
*                            const char *name, int *status )

*  Description:
*     This function creates and returns a new KeyMap holding the full ASDF
*     description of an ASDF transform that is summarised in a KeyMap stored
*     as the proxy pointer in a supplied Mapping.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to a Mapping that has a proxy KeyMap holding a summary
*        of the ASDF transform to write out. The KeyMap is deleted and
*        the proxy pointer reset by this function.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A new KeyMap containing the full ASDF description of the transform
*     summarised in the proxy KeyMap of the supplied Mapping, or NULL if
*     there is no proxy.

*  Notes:
*     - A NULL pointer will be returned if this function is invoked
*     with the AST error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstKeyMap *km;
   double angles[ 3 ];
   double shift[ 2 ];
   double matrix[ 4 ];
   int nval;
   AstKeyMap *ret;
   void *proxy;

/* Assume failure. */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the proxy KeyMap. */
   proxy = astGetProxy( map );
   if( proxy ) {
      km = (AstKeyMap *) proxy;

/* If the proxy KeyMap contains an entry named "ANGLES", as created by
   function FindRotate3D, create an equivalent ASDF rotate3d transform. */
      if( astMapGet1D( km, "ANGLES", 3, &nval, angles ) ) {
         ret = WriteAsdfRotate3d( this, angles, mapinv,
                                  GetName( this, name, (AstMapping *) map,
                                           status ), status );

/* The ASDF Rotate3D transform expects degrees as inputs. But the AST
   Mappings that adjoin a Rotate3D will use radians. So put a rad->deg
   conversion before the Rotate3D and a deg->rad conversion after it. */
         ret = AddR2D( this, &ret, 1, 1, 2, status );
         ret = AddR2D( this, &ret, 0, 0, 2, status );

/* If the proxy KeyMap contains entries named "AFFINE_SHIFT" and
   "AFFINE_MATRIX", as created by function FindAffine, create an equivalent
   ASDF affine transform. Note, affine transforms are restricted to 2D in
   ASDF. */
      } else if( astMapGet1D( km, "AFFINE_SHIFT", 2, &nval, shift ) &&
                 astMapGet1D( km, "AFFINE_MATRIX", 4, &nval, matrix ) ) {
         ret = WriteAsdfAffine( this, 2, matrix, shift, mapinv,
                                GetName( this, name, (AstMapping *) map,
                                         status ), status );
      }

/* Annull the KeyMap and reset the proxy pointer to NULL. */
      astSetProxy( map, astAnnul( km ) );
   }

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteShiftMap( AstYamlChan *this, AstShiftMap *map,
                                 AstObject *mapinv, const char *name,
                                 int *status ) {
/*
*  Name:
*     WriteShiftMap

*  Purpose:
*     Write an AST ShiftMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteShiftMap( AstYamlChan *this, AstShiftMap *map,
*                               AstObject *mapinv, const char *name,
*                               int *status )

*  Description:
*     This function converts an AST ShiftMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the ShiftMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.
*/

/* Local Variables: */
   AstKeyMap *ret;
   AstMapping *map2;
   AstMapping *map1;
   int nin;
   double *shifts;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the shifts applied by the ShiftMap. */
   shifts = astGetShifts( map );

/* If the ShiftMap is 1-dimensional, write it out as an ASF shift
   transform. */
   nin = astGetNin( map );
   if( nin == 1 ) {
      ret = WriteAsdfShift( this, shifts[0], mapinv,
                            GetName( this, name, (AstMapping *) map, status ),
                            status );

/* If it is more than 1-dimensional, write it out as an ASDF concatenate
   containing an equivalent pair of ShiftMaps. */
   } else {
      map1 = (AstMapping *) astShiftMap( 1, shifts, " ", status );
      map2 = (AstMapping *) astShiftMap( nin - 1, shifts + 1, " ", status );
      ret = WriteAsdfConcatenate( this, (AstObject *) map1, (AstObject *) map2,
                                  mapinv, GetName( this, name,
                                                   (AstMapping *) map, status ),
                                  status );
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );
   }

/* Free resources. */
   shifts = astFree( shifts );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteTranMap( AstYamlChan *this, AstTranMap *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WriteTranMap

*  Purpose:
*     Write an AST TranMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteTranMap( AstYamlChan *this, AstTranMap *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST TranMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the TranMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform, in which case the
*        inverse transformation of the supplied TranMap is ignored. It
*        may be a pointer to an AST Mapping or to a KeyMap containing a
*        description of an ASDF transform. If NULL is supplied for "mapinv",
*        the custom inverse stored in the ASDF transform is defined by the
*        inverse transformation of the supplied TranMap.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.
*/

/* Local Variables: */
   AstKeyMap *ret;
   AstObject *usemap2;
   AstMapping *map1;
   AstMapping *map2;
   int invert1;
   int invert2;
   int old_invert1;
   int old_invert2;
   int series;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Decompose the TranMap into its component Mappings. */
   astDecompose( map, &map1, &map2, &series, &invert1, &invert2 );

/* Temporarily set the Invert flags in the component Mappings to the
   required values, recording the old values first. */
   old_invert1 = astGetInvert( map1 );
   old_invert2 = astGetInvert( map2 );
   astSetInvert( map1, invert1 );
   astSetInvert( map2, invert2 );

/* If a value was supplied for "mapinv", we use it in preference to the
   Mapping (map2) extracted from the supplied TranMap. */
   if( mapinv ) {
      usemap2 = mapinv;
   } else {
      usemap2 = (AstObject *) map2;

/* Invert "map2", since ASDF uses the forward transform of the inverse
   mapping, whereas AST uses the inverse transform of the inverse Mapping. */
      astInvert( map2 );
   }

/* Get a KeyMap holding the ASDF properites of the Mapping describing the
   forward operation, supplying the inverse Mapping as a custom inverse.
   Force, thr "name" property to be derived from the supplied TranMap
   rather than the first mapping. */
   ret = WriteMapping( this, map1, usemap2,
                       GetName( this, name, (AstMapping *) map, status ),
                       status );

/* Reinstate the original invert flags. */
   astSetInvert( map1, old_invert1 );
   astSetInvert( map2, old_invert2 );

/* Free pointers. */
   map1 = astAnnul( map1 );
   map2 = astAnnul( map2 );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteUnitMap( AstYamlChan *this, AstUnitMap *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WriteUnitMap

*  Purpose:
*     Write an AST UnitMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteUnitMap( AstYamlChan *this, AstUnitMap *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST UnitMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the UnitMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.
*/

/* Local Varianbles; */
   AstKeyMap *ret;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the number of axes from the UnitMap and write out an ASF identity
   transform. */
   ret = WriteAsdfIdentity( this, astGetNin( map ), mapinv,
                            GetName( this, name, (AstMapping *) map, status ),
                            status );

/* Return the answer. */
   return ret;
}

static void WriteValues( AstYamlChan *this, const char *key, AstKeyMap *obj,
                         int *status ) {
/*
*  Name:
*     WriteValues

*  Purpose:
*     Write an ASDF object stored in a KeyMap out as YAML.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteValues( AstYamlChan *this, const char *key, AstKeyMap *obj,
*                       int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function writes the ASDF object stored in the supplied KeyMap
*     out as YAML through the sink function defined by the supplied YamlChan.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        The key to associate with the ASDF object within the root yaml
*        mapping.
*     obj
*        Pointer to the KeyMap containing an ASDF object.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   yaml_emitter_t emitter_data;
   yaml_emitter_t *emitter = &emitter_data;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Initialize a libyaml emitter. */
   StartYamlDoc( this, emitter, status );

/* Create and emit the start of the root node - a mapping of type
   given by macro ROOT_TAG. */
   if( astOK ) {
      yaml_mapping_start_event_initialize( &event, NULL, (yaml_char_t *) ROOT_TAG,
                                           0, YAML_BLOCK_MAPPING_STYLE );
      EMIT
   }

/* Write out the top-level object stored in the KeyMap. */
   WriteYamlObject( this, key, obj, emitter, status );

/* Create and emit the end of the root node. */
   if( astOK ) {
      yaml_mapping_end_event_initialize( &event );
      EMIT
   }

/* End the document and delete the emitter */
   EndYamlDoc( this, emitter, status );
}

static AstKeyMap *WriteWcsMap( AstYamlChan *this, AstWcsMap *map,
                               AstObject *mapinv, const char *name,
                               int *status ) {
/*
*  Name:
*     WriteWcsMap

*  Purpose:
*     Write an AST WcsMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteWcsMap( AstYamlChan *this, AstWcsMap *map,
*                             AstObject *mapinv, const char *name,
*                             int *status )

*  Description:
*     This function converts an AST WcsMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the WcsMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *km_comp;
   AstKeyMap *km_conc;
   AstKeyMap *km_proj;
   AstKeyMap *km_pv;
   AstKeyMap *ret;
   AstPermMap *pm;
   AstUnitMap *um;
   const char *class;
   int *outperm;
   int iin;
   int ilat;
   int ilon;
   int iout;
   int nax;
   int pix2sky;
   int type;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the number of inputs and outputs (which are equal). */
   nax = astGetNin( map );

/* Get the zero-based index of the longitude and latitude axes. */
   ilon = astGetWcsAxis( map, 0 );
   ilat = astGetWcsAxis( map, 1 );

/* Create a KeyMap to hold the projection parameters, using the ASDF
   parameter name as the key. */
   km_pv = astKeyMap( " ", status );

/* Get the projection type. */
   type = astGetWcsType( map );

/* Get the corresponding ASDF class. */
   if( type == AST__TAN ){
      class = "asdf/transform/gnomonic-1.2.0";

   } else if( type == AST__AIR ){
      class = "asdf/transform/airy-1.2.0";
      astMapPut0D( km_pv, "theta_b", astGetPV( map, ilat, 1 ), NULL );

   } else if( type == AST__SIN ){
      class = "asdf/transform/slant_orthographic-1.2.0";
      astMapPut0D( km_pv, "xi", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "eta", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__SZP ){
      class = "asdf/transform/slant_zenithal_perspective-1.2.0";
      astMapPut0D( km_pv, "mu", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "phi0", astGetPV( map, ilat, 2 ), NULL );
      astMapPut0D( km_pv, "theta0", astGetPV( map, ilat, 3 ), NULL );

   } else if( type == AST__STG ){
      class = "asdf/transform/stereographic-1.2.0";

   } else if( type == AST__ZEA ){
      class = "asdf/transform/zenithal_equal_area-1.2.0";

   } else if( type == AST__ARC ){
      class = "asdf/transform/zenithal_equidistant-1.2.0";

   } else if( type == AST__SZP ){
      class = "asdf/transform/zenithal_perspective-1.3.0";
      astMapPut0D( km_pv, "mu", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "gamma", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__HPX ){
      class = "asdf/transform/healpix-1.2.0";
      astMapPut0D( km_pv, "H", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "X", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__XPH ){
      class = "asdf/transform/healpix_polar-1.2.0";

   } else if( type == AST__COE ){
      class = "asdf/transform/conic_equal_area-1.3.0";
      astMapPut0D( km_pv, "sigma", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "delta", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__COD ){
      class = "asdf/transform/conic_equidistant-1.3.0";
      astMapPut0D( km_pv, "sigma", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "delta", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__COO ){
      class = "asdf/transform/conic_orthomorphic-1.3.0";
      astMapPut0D( km_pv, "sigma", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "delta", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__COP ){
      class = "asdf/transform/conic_perspective-1.3.0";
      astMapPut0D( km_pv, "sigma", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "delta", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__CEA ){
      class = "asdf/transform/cylindrical_equal_area-1.3.0";
      astMapPut0D( km_pv, "lambda", astGetPV( map, ilat, 1 ), NULL );

   } else if( type == AST__CYP ){
      class = "asdf/transform/cylindrical_perspective-1.3.0";
      astMapPut0D( km_pv, "mu", astGetPV( map, ilat, 1 ), NULL );
      astMapPut0D( km_pv, "lambda", astGetPV( map, ilat, 2 ), NULL );

   } else if( type == AST__MER ){
      class = "asdf/transform/mercator-1.2.0";

   } else if( type == AST__CAR ){
      class = "asdf/transform/plate_carree-1.2.0";

   } else if( type == AST__BON ){
      class = "asdf/transform/bonne_equal_area-1.3.0";
      astMapPut0D( km_pv, "theta1", astGetPV( map, ilat, 1 ), NULL );

   } else if( type == AST__PCO ){
      class = "asdf/transform/polyconic-1.2.0";

   } else if( type == AST__AIT ){
      class = "asdf/transform/hammer_aitoff-1.2.0";

   } else if( type == AST__MOL ){
      class = "asdf/transform/molleweide-1.2.0";

   } else if( type == AST__PAR ){
      class = "asdf/transform/parabolic-1.2.0";

   } else if( type == AST__SFL ){
      class = "asdf/transform/sanson_flamsteed-1.2.0";

   } else if( type == AST__CSC ){
      class = "asdf/transform/cobe_quad_spherical_cube-1.2.0";

   } else if( type == AST__QSC ){
      class = "asdf/transform/quad_spherical_cube-1.2.0";

   } else if( type == AST__TSC ){
      class = "asdf/transform/tangential_spherical_cube-1.2.0";

   } else {
      class = NULL;
   }

/* Check the projection class is supported by ASDF. */
   if( class ) {

/* A WcsMap forward transsformation goes from sky to pixel, but an
   inverted WcsMap goes from pixel to sky. Note the forward direction of
   the supplied WcsMap. */
      pix2sky = astGetInvert( map );

/* If there are no extra axes, we can write the WcsMap out as an ASDF
   projection of a suitable class. */
      if( nax == 2 ) {
         ret = WriteAsdfProjection( this, class, pix2sky, km_pv, mapinv,
                                    GetName( this, name, (AstMapping *) map,
                                             status ), status );

/* If there are any extra axes, we must use an ASDF projection in
   parallel with an identity transform, with suitable remap_axes
   transforms before and after, which will reorder the axes to be like
   those of the WcsMap. */
      } else {

/* Create a KeyMap holding the ASDF properties of the projection. */
         km_proj = WriteAsdfProjection( this, class, pix2sky, km_pv, NULL, NULL,
                                        status );

/* Create a suitable UnitMap to place in parallel with the above
   projection. */
         um = astUnitMap( nax - 2, " ", status );

/* Create an ASDF concatenate that puts the Unitmap and projection in
   parallel. */
         km_conc = WriteAsdfConcatenate( this, (AstObject *) km_proj,
                                         (AstObject *) um, NULL, NULL,
                                         status );

/* Create a PermMap that reorders the inputs to those expected by the
   above concatenate. */
         outperm = astMalloc( nax*sizeof(*outperm ) );
         if( outperm ) {

/* Create an array holding the zero-based index of the input that feeds
   each output. Output zero is fed by the longitude input, output 1 is
   fed by the latitude input, and any remaining outputs are fed from the
   next available input. */
            iout = 2;
            for( iin = 0; iin < nax; iin++ ) {
               if( iin == ilon ) {
                  outperm[ 0 ] = iin;
               } else if( iin == ilat ) {
                  outperm[ 1 ] = iin;
               } else {
                  outperm[ iout++ ] = iin;
               }
            }

/* Create the PermMap. Only the forward transformation is used. */
            pm = astPermMap( nax, NULL, nax, outperm, NULL, " ", status );

/* Create an ASDF compose that puts the PermMap and the ASDF concatenate
   in series. */
            km_comp = WriteAsdfCompose( this, (AstObject *) pm,
                                        (AstObject *) km_conc, NULL, NULL,
                                        status );

/* Invert the PermMap so that its forward transformation reorders the
   concatenate outputs back into their original order. */
            astInvert( pm );

/* Create an ASDF compose that puts the above ASDF compose and the inverted
   PermMap in series. This is the final transform. */
            ret = WriteAsdfCompose( this, (AstObject *) km_comp,
                                    (AstObject *) pm, mapinv,
                                    GetName( this, name, (AstMapping *) map,
                                             status ), status );
/* Free resources. */
            pm = astAnnul( pm );
            outperm = astFree( outperm );
            km_comp = astAnnul( km_comp );
         }

         um = astAnnul( um );
         km_proj = astAnnul( km_proj );
         km_conc = astAnnul( km_conc );
      }

/* The ASDF transform uses degrees as inputs and outputs, but the WcsMap
   uses radians. So we need to include ASDF scale transforms to do the
   conversion. These will hopefully be removed when the final ASDF
   transform (usually a compose or concatenate) is simplified before
   writing it out as yaml. */
      if( ret ) {

/* Precede the projection with a rad->deg conversion. */
         ret = AddR2D( this, &ret, 1, 1, nax, status );

/* Follow the projection with a deg->rad conversion. */
         ret = AddR2D( this, &ret, 0, 0, nax, status );
      }
   }

/* Free resources. */
   km_pv = astAnnul( km_pv );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static AstKeyMap *WriteWinMap( AstYamlChan *this, AstWinMap *map, AstObject *mapinv,
                               const char *name, int *status ) {
/*
*  Name:
*     WriteWinMap

*  Purpose:
*     Write an AST WinMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteWinMap( AstYamlChan *this, AstWinMap *map, AstObject *mapinv,
*                             const char *name, int *status )

*  Description:
*     This function converts an AST WinMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the WinMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstShiftMap *shift;
   AstWinMap *map1;
   AstWinMap *map2;
   AstZoomMap *zoom;
   double *scales;
   double *shifts;
   double mtr[ 4 ] = {0.0, 0.0, 0.0, 0.0 };
   int i;
   int nin;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the WinMap scales and offsets, plus the number of inputs. */
   nin = astWinTerms( map, 0, &shifts, &scales );

/* The ASDF affine transform is limited to exactly two inputs and
   outputs. If the winmap has only one input and output, write it out as
   a compose holding a scale and shift. */
   if( nin == 1 ) {
      zoom = astZoomMap( 1, scales[ 0 ], " ", status );
      shift = astShiftMap( 1, shifts, " ", status );
      ret = WriteAsdfCompose( this, (AstObject *) zoom, (AstObject *) shift,
                              mapinv, GetName( this, name, (AstMapping *) map,
                                               status ), status );
      zoom = astAnnul( zoom );
      shift = astAnnul( shift );

/* If the winmap has two inputs and outputs, write it out as an affine. */
   } else if( nin == 2 ) {
      mtr[ 0 ] = scales[ 0 ];
      mtr[ 3 ] = scales[ 1 ];
      ret = WriteAsdfAffine( this, 2, mtr, shifts, mapinv,
                             GetName( this, name, (AstMapping *) map, status ),
                             status );

/* If the winmap has more than two inputs and outputs, write it out as a
   concatenate that combines an equivalent pair of WinMaps in parallel. */
   } else {
      map1 = astWinMap( 2, NULL, NULL, NULL, NULL, " ", status );
      map2 = astWinMap( nin - 2, NULL, NULL, NULL, NULL, " ", status );

      if( astOK ) {
         for( i = 0; i < 2; i++ ) {
            map1->a[ i ] = shifts[ i ];
            map1->b[ i ] = scales[ i ];
         }

         for( i = 0; i < nin - 2; i++ ) {
            map2->a[ i ] = shifts[ 2 + i ];
            map2->b[ i ] = scales[ 2 + i ];
         }
      }

      ret = WriteAsdfConcatenate( this, (AstObject *) map1, (AstObject *) map2,
                                  mapinv, GetName( this, name, (AstMapping *) map,
                                                   status ), status );
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );
   }

/* Free resources. */
   scales = astFree( scales );
   shifts = astFree( shifts );

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static void WriteYamlObject( AstYamlChan *this, const char *key, AstKeyMap *obj,
                             yaml_emitter_t *emitter, int *status ) {
/*
*  Name:
*     WriteYamlObject

*  Purpose:
*     Write an ASDF object stored in a KeyMap out as YAML.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteYamlObject( AstYamlChan *this, const char *key, AstKeyMap *obj,
*                           yaml_emitter_t *emitter,  int *status )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This function writes a single ASDF object stored in the supplied
*     KeyMap out through the sink function defined by the supplied YamlChan.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     key
*        If a non-NULL pointer is supplied for "key", then the contents
*        of the KeyMap are written as the value in a "key: value" pair
*        within a parent yaml mapping. If a NULL pointer is supplied for
*        "key", then the contents of the KeyMap are written as the value in
*        a "- value" element in a parent yaml sequence. Note, it is the job
*        of the caller to emit the yaml events that start and end the yaml
*        mapping or sequence. The nature of "value" - whether it is a
*        yaml mapping or a yaml sequence - is determined by the YAMLSEQ
*        entry in the KeyMap (see below).
*     obj
*        Pointer to the KeyMap containing an ASDF object to be written out.
*        The use made of each entry within this KeyMap depends on the entry
*        key as follows:
*
*        - "YAMLTAG":  If this KeyMap contains an entry with key "YAMLTAG",
*        then a yaml tag is associated with the yaml mapping entry or
*        sequence element.
*
*        - "YAMLSEQ":  If this KeyMap contains an entry with key "YAMLSEQ",
*        then the values stored in the KeyMap are written out as a yaml
*        sequence (the keys in the KeyMap are ignored). Otherwise, they
*        are written out as a yaml mapping. Unlike a mapping, the order
*        of elements within a sequence is significant. Therefore care
*        should be taken to set an appropriate value for the "SortBy"
*        attribute when creating the KeyMap supplied to this function.
*        For instance, if SortBy is set to "AgeDown", the entries in the
*        KeyMap will be written out as elements in the sequence in the
*        same order that they were added into the KeyMap.
*
*        - "<BASENAME>_QUOTE":  If the KeyMap entry with key <BASENAME>
*        hold string values, then the "<BASENAME>_QUOTE" entry is an
*        integer flag that indicates if the yaml strings should be quoted.
*        If missing, <BASENAME> values are not quoted.
*
*        - "<BASENAME>_TAG":  If the KeyMap entry with key <BASENAME>
*        hold string values, then the "<BASENAME>_TAG" entry give the tag
*        to associate with the yaml strings. If missing, <BASENAME> values
*        have no tag.
*
*        - Anything else: Entries with keys that do not match any of the
*        previous cases are written out as yaml "key: value" mapping
*        entries, where the vector length of the KeyMap value determines
*        if a yaml scalar or sequence is written out. Nested KeyMaps are
*        written out by calling this function recursively.
*
*     emitter
*        Pointer to a libyaml emitter.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   const char *tag;
   int ientry;
   int isseq;
   int nentry;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get any tag from the KeyMap. */
   if( !astMapGet0C( obj, "YAMLTAG", &tag ) ) tag = NULL;

/* See if a yaml sequence is to be used to hold the contents of the
   KeyMap. Otherwise, a yaml mapping will be used. */
   isseq = astMapHasKey( obj, "YAMLSEQ" );

/* Start the yaml mapping or sequence that will hold the contents of
   the supplied KeyMap. If "key" is non-NULL, the new yaml object
   (mapping or sequence) will be used as the value in a "key: value"
   entry in the parent yaml mapping. If "key" is NULL, the new yaml
   object will be used as the next element in the parent yaml sequence. */
   if( isseq ) {
      StartYamlSequence( this, key, tag, emitter, status );
   } else {
      StartYamlMapping( this, key, tag, emitter, status );
   }

/* Loop round all the entries in the KeyMap. */
   nentry = astMapSize( obj );
   for( ientry = 0; ientry < nentry; ientry++ ) {

/* Get the key for the current KeyMap entry */
      key = astMapKey( obj, ientry );

/* Write out the KeyMap entry as yaml, ignoring it if it gives metadata
   describing how other values should be written out. */
      if( strcmp( key, "YAMLSEQ" ) && strcmp( key, "YAMLTAG" ) &&
          !strstr( key, "_QUOTE" ) && !strstr( key, "_TAG" ) ) {
         WriteYamlEntry( this, obj, key, key, isseq?NULL:key, emitter, status );
      }
   }

/* Create and emit the end of the yaml sequence or mapping. */
   if( astOK ) {
      if( isseq ){
         yaml_sequence_end_event_initialize( &event );
      } else {
         yaml_mapping_end_event_initialize( &event );
      }
      EMIT
   }
}

static void WriteYamlEntry( AstYamlChan *this, AstKeyMap *km, const char *kmkey,
                            const char *base, const char *yamlkey,
                            yaml_emitter_t *emitter, int *status ){
/*
*  Name:
*     WriteYamlEntry

*  Purpose:
*     Write an element of a KeyMap out as an element within a yaml mapping or
*     sequence.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     void WriteYamlEntry( AstYamlChan *this, AstKeyMap *km, const char *kmkey,
*                          const char *base, const char *yamlkey,
*                          yaml_emitter_t *emitter, int *status )

*  Description:
*     This function writes out a single entry in a KeyMap, using the
*     value of the KeyMap entry to create a new entry in a yaml mapping
*     or sequence (which must already have been started).

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap.
*     kmkey
*        The key used to access the value within the KeyMap.
*     base
*        If "kmkey" is of the form "<base>_<n>", then "base" should be
*        the base part of kmkey. Otherwise, it should be equal to kmkey.
*     yamlkey
*        The key to associate with the value if it is being used as an
*        element within a yaml mapping. NULL should be supplied if the
*        value is being used as a value within a yaml sequence.
*     emitter
*        Pointer to a libyaml emitter.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstObject **ovals;
   AstObject *oval;
   const char **cvals;
   char *cbuff;
   const char *cval;
   const char *tag;
   double dval;
   double *dvals;
   int *ivals;
   int i;
   int ival;
   int nc;
   int nel;
   int quote;
   int type;
   size_t clen;
   yaml_event_t event;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get the length and type of the KeyMap entry value. */
   nel = astMapLength( km, kmkey );
   type = astMapType( km, kmkey );

/* If the type is string, see if the yaml strings should be quoted and
   get any tag to associate with them. */
   if( type == AST__STRINGTYPE ){
      cval = astAppendStringf( NULL, &nc, "%s_QUOTE", base );
      if( !astMapGet0I( km, cval, &quote ) ) quote = 0;
      cval = astFree( (void *) cval );

      cval = astAppendStringf( NULL, &nc, "%s_TAG", base );
      if( !astMapGet0C( km, cval, &tag ) ) tag = NULL;
      cval = astFree( (void *) cval );
   }

/* Write out scalars. */
   if( nel == 1 ) {
      if( type == AST__DOUBLETYPE ){
         astMapGet0D( km, kmkey, &dval );
         StoreYaml0D( this, yamlkey, emitter, 1, dval, status );

      } else if( type == AST__INTTYPE ){
         astMapGet0I( km, kmkey, &ival );
         StoreYaml0I( this, yamlkey, emitter, 1, ival, status );

      } else if( type == AST__STRINGTYPE ){
         astMapGet0C( km, kmkey, &cval );
         StoreYaml0C( this, yamlkey, quote, emitter, 1, cval, tag, status );

      } else if( type == AST__OBJECTTYPE ){
         astMapGet0A( km, kmkey, &oval );
         WriteYamlObject( this, yamlkey, (AstKeyMap *) oval, emitter, status );
         oval = astAnnul( oval );

      } else if( astOK ) {
         astError( AST__INTER, "astWrite(YamlChan): Unexpected keymap data "
                   "type (internal AST programming error).", status );
      }

/* Write out vectors. */
   } else {

      if( type == AST__DOUBLETYPE ){
         dvals = astMalloc( nel*sizeof(*dvals) );
         astMapGet1D( km, kmkey, nel, &nel, dvals );
         StoreYaml1D( this, yamlkey, emitter, nel, dvals, status );
         dvals = astFree( dvals );

      } else if( type == AST__INTTYPE ){
         ivals = astMalloc( nel*sizeof(*ivals) );
         astMapGet1I( km, kmkey, nel, &nel, ivals );
         StoreYaml1I( this, yamlkey, emitter, nel, ivals, status );
         ivals = astFree( ivals );

      } else if( type == AST__STRINGTYPE ){
         clen = astMapLenC( km, kmkey ) + 1;
         cbuff = astCalloc( clen*nel, sizeof(*cbuff) );
         if( astMapGet1C( km, kmkey, clen, nel, &nel, cbuff ) ){
            cvals = astMalloc( nel*sizeof(*cvals) );
            for( i = 0; i < nel; i++ ) cvals[ i ] = cbuff + i*clen;

            StoreYaml1C( this, yamlkey, quote, emitter, nel, cvals, tag, status );
            cvals = astFree( cvals );
         }
         cbuff = astFree( cbuff );

      } else if( type == AST__OBJECTTYPE ){

/* Start a yaml sequence in which each element is one of the objects in
   the array of objects. */
         StartYamlSequence( this, yamlkey, NULL, emitter, status );

/* Write out each object. */
         ovals = astMalloc( nel*sizeof(*ovals) );
         astMapGet1A( km, kmkey, nel, &nel, ovals );
         for( i = 0; i < nel; i++ ) {
            WriteYamlObject( this, NULL, (AstKeyMap *) ovals[ i ], emitter,
                             status );
            ovals[ i ] = astAnnul( ovals[ i ] );
         }
         ovals = astFree( ovals );

/* Create and emit the end of the yaml sequence. */
         if( astOK ) {
            yaml_sequence_end_event_initialize( &event );
            EMIT
         }

      } else if( astOK ) {
         astError( AST__INTER, "astWrite(YamlChan): Unexpected keymap data "
                   "type (internal AST programming error).", status );
      }
   }
}

static void WriteBegin( AstChannel *this_channel, const char *class,
                        const char *comment, int *status ) {
/*
*  Name:
*     WriteBegin

*  Purpose:
*     Write a "Begin" data item to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteBegin( AstChannel *this_channel, const char *class,
*                      const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteBegin method inherited from the Channel class).

*  Description:
*     This function writes a "Begin" data item to the data sink
*     associated with a Channel, so as to begin the output of a new
*     Object definition.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     class
*        Pointer to a constant null-terminated string containing the
*        name of the class to which the Object belongs.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the "Begin"
*        item. Normally, this will describe the purpose of the Object.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - The comment supplied may not actually be used, depending on
*     the nature of the Channel supplied.
*/

/* Local Variables: */
   AstYamlChan *this;
   const char *name;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* Initialise a flag to indicate that the next "IsA" item should not be
   written. This flag will be changed if and when an item is added which
   related to the class described by the "IsA" item. Save the old value
   first. */
   this->write_isa = 0;

/* If this is a top level object (i.e. if there is no object name stored
   in the YamlChan structure), use the class name as the object name and
   set the "objectset" flag to indicate that the object is not a default
   value. */
   name = this->objectname;
   if( !name ) {
      name = class;
      this->objectset = 1;
   }

/* Start a YAML Mapping to hold the object */
   StartYamlMapping( this, name, class, this->emitter, status );
}

static void WriteDouble( AstChannel *this_channel, const char *name,
                         int set, int helpful,
                         double value, const char *comment, int *status ) {
/*
*  Name:
*     WriteDouble

*  Purpose:
*     Write a double value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteDouble( AstChannel *this, const char *name,
*                       int set, int helpful,
*                       double value, const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteDouble method inherited from the Channel class).

*  Description:
*     This function writes a named double value, representing the
*     value of a class instance variable, to the data sink associated
*     with a Channel. It is intended for use by class "Dump" functions
*     when writing out class information which will subsequently be
*     re-read.

*  Parameters:
*     this
*        Pointer to the Channel.
*     name
*        Pointer to a constant null-terminated string containing the
*        name to be used to identify the value in the external
*        representation. This will form the key for identifying it
*        again when it is re-read. The name supplied should be unique
*        within its class.
*
*        Mixed case may be used and will be preserved in the external
*        representation (where possible) for cosmetic effect. However,
*        case is not significant when re-reading values.
*
*        It is recommended that a maximum of 6 alphanumeric characters
*        (starting with an alphabetic character) be used. This permits
*        maximum flexibility in adapting to standard external data
*        representations (e.g. FITS).
*     set
*        If this is zero, it indicates that the value being written is
*        a default value (or can be re-generated from other values) so
*        need not necessarily be written out. Such values will
*        typically be included in the external representation with
*        (e.g.) a comment character so that they are available to
*        human readers but will be ignored when re-read. They may also
*        be completely omitted in some circumstances.
*
*        If "set" is non-zero, the value will always be explicitly
*        included in the external representation so that it can be
*        re-read.
*     helpful
*        This flag provides a hint about whether a value whose "set"
*        flag is zero (above) should actually appear at all in the
*        external representaton.
*
*        If the external representation allows values to be "commented
*        out" then, by default, values will be included in this form
*        only if their "helpful" flag is non-zero. Otherwise, they
*        will be omitted entirely. When possible, omitting the more
*        obscure values associated with a class is recommended in
*        order to improve readability.
*
*        This default behaviour may be further modified if the
*        Channel's Full attribute is set - either to permit all values
*        to be shown, or to suppress non-essential information
*        entirely.
*     value
*        The value to be written.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the value.
*
*        Note that this comment may not actually be used, depending on
*        the nature of the Channel supplied and the setting of its
*        Comment attribute.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;            /* A pointer to the YamlChan structure. */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out this item. */
   if( this->objectset ) {

/* Use the "set" and "helpful" flags, along with the Channel's]
   attributes to decide whether this value should actually be
   written. */
      if( Use( this, set, helpful, status ) ) {

/* Write out the YAML */
         StoreYaml0D( this, name, this->emitter, set, value, status );

/* Initialise a flag to indicate that the next "IsA" item should be
   written. */
         this->write_isa = 1;
      }
   }
}

static void WriteEnd( AstChannel *this_channel, const char *class, int *status ) {
/*
*  Name:
*     WriteEnd

*  Purpose:
*     Write an "End" data item to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteEnd( AstChannel *this, const char *class, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteEnd method inherited from the Channel class).

*  Description:
*     This function writes an "End" data item to the data sink
*     associated with a Channel. This item delimits the end of an
*     Object definition.

*  Parameters:
*     this
*        Pointer to the Channel.
*     class
*        Pointer to a constant null-terminated string containing the
*        class name of the Object whose definition is being terminated
*        by the "End" item.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;
   yaml_event_t event;
   yaml_emitter_t *emitter;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get a pointer to the emitter from the YamlChan structure, as required
   by the EMIT macro. */
   this = (AstYamlChan*) this_channel;
   emitter = this->emitter;

/* Create and emit the end of the yaml mapping. */
   yaml_mapping_end_event_initialize( &event );
   EMIT
}

static void WriteInt( AstChannel *this_channel, const char *name, int set, int helpful,
                      int value, const char *comment, int *status ) {
/*
*  Name:
*     WriteInt

*  Purpose:
*     Write an integer value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteInt( AstChannel *this, const char *name, int set, int helpful,
*                    int value, const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteInt method inherited from the Channel class).

*  Description:
*     This function writes a named integer value, representing the
*     value of a class instance variable, to the data sink associated
*     with a Channel. It is intended for use by class "Dump" functions
*     when writing out class information which will subsequently be
*     re-read.

*  Parameters:
*     this
*        Pointer to the Channel.
*     name
*        Pointer to a constant null-terminated string containing the
*        name to be used to identify the value in the external
*        representation. This will form the key for identifying it
*        again when it is re-read. The name supplied should be unique
*        within its class.
*
*        Mixed case may be used and will be preserved in the external
*        representation (where possible) for cosmetic effect. However,
*        case is not significant when re-reading values.
*
*        It is recommended that a maximum of 6 alphanumeric characters
*        (starting with an alphabetic character) be used. This permits
*        maximum flexibility in adapting to standard external data
*        representations (e.g. FITS).
*     set
*        If this is zero, it indicates that the value being written is
*        a default value (or can be re-generated from other values) so
*        need not necessarily be written out. Such values will
*        typically be included in the external representation with
*        (e.g.) a comment character so that they are available to
*        human readers but will be ignored when re-read. They may also
*        be completely omitted in some circumstances.
*
*        If "set" is non-zero, the value will always be explicitly
*        included in the external representation so that it can be
*        re-read.
*     helpful
*        This flag provides a hint about whether a value whose "set"
*        flag is zero (above) should actually appear at all in the
*        external representaton.
*
*        If the external representation allows values to be "commented
*        out" then, by default, values will be included in this form
*        only if their "helpful" flag is non-zero. Otherwise, they
*        will be omitted entirely. When possible, omitting the more
*        obscure values associated with a class is recommended in
*        order to improve readability.
*
*        This default behaviour may be further modified if the
*        Channel's Full attribute is set - either to permit all values
*        to be shown, or to suppress non-essential information
*        entirely.
*     value
*        The value to be written.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the value.
*
*        Note that this comment may not actually be used, depending on
*        the nature of the Channel supplied and the setting of its
*        Comment attribute.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;             /* A pointer to the YamlChan structure. */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out this item. */
   if( this->objectset ) {

/* Use the "set" and "helpful" flags, along with the Channel's
   attributes to decide whether this value should actually be
   written. */
      if( Use( this, set, helpful, status ) ) {

/* Write out the YAML */
         StoreYaml0I( this, name, this->emitter, set, value, status );

/* Initialise a flag to indicate that the next "IsA" item should be
   written. */
         this->write_isa = 1;
      }
   }
}

static void WriteInt64( AstChannel *this_channel, const char *name, int set, int helpful,
                        int64_t value, const char *comment, int *status ) {
/*
*  Name:
*     WriteInt64

*  Purpose:
*     Write a 64 bit integer value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteInt64( AstChannel *this, const char *name, int set, int helpful,
*                      int64_t value, const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteInt method inherited from the Channel class).

*  Description:
*     This function writes a named 64 bit integer value, representing the
*     value of a class instance variable, to the data sink associated
*     with a Channel. It is intended for use by class "Dump" functions
*     when writing out class information which will subsequently be
*     re-read.

*  Parameters:
*     this
*        Pointer to the Channel.
*     name
*        Pointer to a constant null-terminated string containing the
*        name to be used to identify the value in the external
*        representation. This will form the key for identifying it
*        again when it is re-read. The name supplied should be unique
*        within its class.
*
*        Mixed case may be used and will be preserved in the external
*        representation (where possible) for cosmetic effect. However,
*        case is not significant when re-reading values.
*
*        It is recommended that a maximum of 6 alphanumeric characters
*        (starting with an alphabetic character) be used. This permits
*        maximum flexibility in adapting to standard external data
*        representations (e.g. FITS).
*     set
*        If this is zero, it indicates that the value being written is
*        a default value (or can be re-generated from other values) so
*        need not necessarily be written out. Such values will
*        typically be included in the external representation with
*        (e.g.) a comment character so that they are available to
*        human readers but will be ignored when re-read. They may also
*        be completely omitted in some circumstances.
*
*        If "set" is non-zero, the value will always be explicitly
*        included in the external representation so that it can be
*        re-read.
*     helpful
*        This flag provides a hint about whether a value whose "set"
*        flag is zero (above) should actually appear at all in the
*        external representaton.
*
*        If the external representation allows values to be "commented
*        out" then, by default, values will be included in this form
*        only if their "helpful" flag is non-zero. Otherwise, they
*        will be omitted entirely. When possible, omitting the more
*        obscure values associated with a class is recommended in
*        order to improve readability.
*
*        This default behaviour may be further modified if the
*        Channel's Full attribute is set - either to permit all values
*        to be shown, or to suppress non-essential information
*        entirely.
*     value
*        The value to be written.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the value.
*
*        Note that this comment may not actually be used, depending on
*        the nature of the Channel supplied and the setting of its
*        Comment attribute.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;             /* A pointer to the YamlChan structure. */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out this item. */
   if( this->objectset ) {

/* Use the "set" and "helpful" flags, along with the Channel's
   attributes to decide whether this value should actually be
   written. */
      if( Use( this, set, helpful, status ) ) {

/* Write out the YAML */
         StoreYaml0K( this, name, this->emitter, set, value, status );

/* Initialise a flag to indicate that the next "IsA" item should be
   written. */
         this->write_isa = 1;
      }
   }
}

static void WriteIsA( AstChannel *this_channel, const char *class,
                      const char *comment, int *status ) {
/*
*  Name:
*     WriteIsA

*  Purpose:
*     Write an "IsA" data item to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteIsA( AstChannel *this, const char *class,
*                    const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteIsA method inherited from the Channel class).

*  Description:
*     This function writes an "IsA" data item to the data sink
*     associated with a Channel. This item delimits the end of the
*     data associated with the instance variables of a class, as part
*     of an overall Object definition.

*  Parameters:
*     this
*        Pointer to the Channel.
*     class
*        Pointer to a constant null-terminated string containing the
*        name of the class whose data are terminated by the "IsA"
*        item.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the "IsA"
*        item. Normally, this will describe the purpose of the class
*        whose data are being terminated.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - The comment supplied may not actually be used, depending on
*     the nature of the Channel supplied.
*/

/* Local Variables: */
   AstYamlChan *this;             /* A pointer to the YamlChan structure. */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out this item. */
   if( this->objectset ) {

/* Output an "IsA" item only if there has been at least one item
   written since the last "Begin" or "IsA" item, or if the Full
   attribute for the Channel is greater than zero (requesting maximum
   information). */
      if ( this->write_isa || astGetFull( this ) > 0 ) {

/* Write out the IsA element. */
         StoreYaml0C( this, "IsA", 0, this->emitter, 1, class,
                      NULL, status );
      }
   }

/* Initialise a flag to indicate that the next "IsA" item should not be
   written. This flag will be changed if and when an item is added which
   related to the class described by the "IsA" item. */
   this->write_isa = 0;
}

static void WriteObject( AstChannel *this_channel, const char *name,
                         int set, int helpful,
                         AstObject *value, const char *comment, int *status ) {
/*
*  Name:
*     WriteObject

*  Purpose:
*     Write an Object as a value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteObject( AstChannel *this_channel, const char *name,
*                       int set, int helpful,
*                       AstObject *value, const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteObject method inherited from the Channel class).

*  Description:
*     This function writes an Object as a named value, representing
*     the value of a class instance variable, to the data sink
*     associated with an YamlChan. It is intended for use by class
*     "Dump" functions when writing out class information which will
*     subsequently be re-read.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     name
*        Pointer to a constant null-terminated string containing the
*        name to be used to identify the value in the external
*        representation. This will form the key for identifying it
*        again when it is re-read. The name supplied should be unique
*        within its class.
*
*        Mixed case may be used and will be preserved in the external
*        representation (where possible) for cosmetic effect. However,
*        case is not significant when re-reading values.
*
*        It is recommended that a maximum of 6 alphanumeric characters
*        (starting with an alphabetic character) be used. This permits
*        maximum flexibility in adapting to standard external data
*        representations.
*     set
*        If this is zero, it indicates that the value being written is
*        a default value (or can be re-generated from other values) so
*        need not necessarily be written out. Such values will
*        typically be included in the external representation with
*        (e.g.) a comment character so that they are available to
*        human readers but will be ignored when re-read. They may also
*        be completely omitted in some circumstances.
*
*        If "set" is non-zero, the value will always be explicitly
*        included in the external representation so that it can be
*        re-read.
*     helpful
*        This flag provides a hint about whether a value whose "set"
*        flag is zero (above) should actually appear at all in the
*        external representaton.
*
*        If the external representation allows values to be "commented
*        out" then, by default, values will be included in this form
*        only if their "helpful" flag is non-zero. Otherwise, they
*        will be omitted entirely. When possible, omitting the more
*        obscure values associated with a class is recommended in
*        order to improve readability.
*
*        This default behaviour may be further modified if the
*        Channel's Full attribute is set - either to permit all values
*        to be shown, or to suppress non-essential information
*        entirely.
*     value
*        A Pointer to the Object to be written.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the value.
*
*        Note that this comment may not actually be used, depending on
*        the nature of the Channel supplied and the setting of its
*        Comment attribute.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;
   const char *oldname;
   int oldset;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out the object. */
   if( this->objectset ) {

/* Use the "set" and "helpful" flags, along with the Channel's
   attributes to decide whether this value should actually be
   written. */
      if ( Use( this, set, helpful, status ) ) {

/* Save information about the parent object. */
         oldname = this->objectname;
         oldset = this->objectset;

/* Store information describing the object to be written. The class item is
   filled in when astWriteBegin is called. */
         this->objectname = ( name && strlen( name ) ) ? name : NULL;
         this->objectset = set;
         this->write_isa = 0;

/* Write the object to the YamlChan. */
         (void) astDump( value, this );

/* Re-instate the information about the parent object. */
         this->objectname = oldname;
         this->objectset = oldset;

/* Since we have now written some output text describing the object
   class, we need to write out the netx "IsA" item to mark the end of the
   information about the current class. */
         this->write_isa = 1;
      }
   }
}

static void WriteString( AstChannel *this_channel, const char *name, int set,
                         int helpful, const char *value, const char *comment, int *status ){
/*
*  Name:
*     WriteString

*  Purpose:
*     Write a string value to a data sink.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     void WriteString( AstChannel *this, const char *name, int set, int helpful,
*                       const char *value, const char *comment, int *status )

*  Class Membership:
*     YamlChan member function (over-rides the protected
*     astWriteString method inherited from the Channel class).

*  Description:
*     This function writes a named string value, representing the
*     value of a class instance variable, to the data sink associated
*     with a Channel. It is intended for use by class "Dump" functions
*     when writing out class information which will subsequently be
*     re-read.

*  Parameters:
*     this
*        Pointer to the Channel.
*     name
*        Pointer to a constant null-terminated string containing the
*        name to be used to identify the value in the external
*        representation. This will form the key for identifying it
*        again when it is re-read. The name supplied should be unique
*        within its class.
*
*        Mixed case may be used and will be preserved in the external
*        representation (where possible) for cosmetic effect. However,
*        case is not significant when re-reading values.
*
*        It is recommended that a maximum of 6 alphanumeric characters
*        (starting with an alphabetic character) be used. This permits
*        maximum flexibility in adapting to standard external data
*        representations (e.g. FITS).
*     set
*        If this is zero, it indicates that the value being written is
*        a default value (or can be re-generated from other values) so
*        need not necessarily be written out. Such values will
*        typically be included in the external representation with
*        (e.g.) a comment character so that they are available to
*        human readers but will be ignored when re-read. They may also
*        be completely omitted in some circumstances.
*
*        If "set" is non-zero, the value will always be explicitly
*        included in the external representation so that it can be
*        re-read.
*     helpful
*        This flag provides a hint about whether a value whose "set"
*        flag is zero (above) should actually appear at all in the
*        external representaton.
*
*        If the external representation allows values to be "commented
*        out" then, by default, values will be included in this form
*        only if their "helpful" flag is non-zero. Otherwise, they
*        will be omitted entirely. When possible, omitting the more
*        obscure values associated with a class is recommended in
*        order to improve readability.
*
*        This default behaviour may be further modified if the
*        Channel's Full attribute is set - either to permit all values
*        to be shown, or to suppress non-essential information
*        entirely.
*     value
*        Pointer to a constant null-terminated string containing the
*        value to be written.
*     comment
*        Pointer to a constant null-terminated string containing a
*        textual comment to be associated with the value.
*
*        Note that this comment may not actually be used, depending on
*        the nature of the Channel supplied and the setting of its
*        Comment attribute.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;             /* A pointer to the YamlChan structure. */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_channel;

/* If the object to be written is a component of a default AST object (i.e.
   an object which is "not set"), then we do not write out this item. */
   if( this->objectset ) {

/* Use the "set" and "helpful" flags, along with the Channel's
   attributes to decide whether this value should actually be
   written. */
      if( Use( this, set, helpful, status ) ) {

/* Write out the YAML */
         StoreYaml0C( this, name, 1, this->emitter, set, value, NULL, status );

/* Initialise a flag to indicate that the next "IsA" item should be
   written. */
         this->write_isa = 1;
      }
   }
}

static AstKeyMap *WriteZoomMap( AstYamlChan *this, AstZoomMap *map,
                                AstObject *mapinv, const char *name,
                                int *status ) {
/*
*  Name:
*     WriteZoomMap

*  Purpose:
*     Write an AST ZoomMap to a KeyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "Yamlchan.h"
*     AstKeyMap *WriteZoomMap( AstYamlChan *this, AstZoomMap *map,
*                              AstObject *mapinv, const char *name,
*                              int *status )

*  Description:
*     This function converts an AST ZoomMap to a set of ASDF properties
*     stored in a KeyMap.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     map
*        Pointer to the ZoomMap that is to be written.
*     mapinv
*        Pointer to an optional custom inverse mapping. The forward
*        transformation of the supplied mapping (if any) is used to define
*        the inverse operation of the ASDF transform.  It may be an AST
*        Mapping or a KeyMap holding a description of an ASDF transform.
*     name
*        The string to use as the "name" property of the resultiung ASDF
*        transform. If NULL, the value is derived from the attributes of
*        "map".
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The KeyMap holding the ASDF properties, or NULL (without error) if the
*     conversion was not possible.

*/

/* Local Variables: */
   AstKeyMap *ret;
   AstMapping *map1;
   AstMapping *map2;
   double factor;
   int nin;

/* Initialise */
   ret = NULL;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* Get the ZoomMap scale factor. */
   factor = astGetZoom( map );

/* If the ZoomMap looks like a angle conversion, set its name to indicate
   this. */
   if( !name ) {
      if( fabs( factor - AST__DD2R ) < 1.0E-12 ) {
         name = astGetInvert( map ) ? "AST__DR2D" : "AST__DD2R";
      } else if( fabs( factor - AST__DR2D ) < 1.0E-8 ) {
         name = astGetInvert( map ) ? "AST__DD2R" : "AST__DR2D";
      }
   }

/* If the ZoomMap is 1-dimensional, write it out as an ASF scale
   transform. */
   nin = astGetNin( map );
   if( nin == 1 ) {
      ret = WriteAsdfScale( this, factor, mapinv,
                            GetName( this, name, (AstMapping *) map, status ),
                            status );

/* If it is more than 1-dimensional, write it out as an ASDF concatenate
   containing a pair of zoommaps. */
   } else {
      map1 = (AstMapping *) astZoomMap( 1, factor, " ", status );
      map2 = (AstMapping *) astZoomMap( nin - 1, factor, " ", status );
      ret = WriteAsdfConcatenate( this, (AstObject *) map1, (AstObject *) map2,
                                  mapinv, GetName( this, name,
                                                   (AstMapping *) map, status ),
                                  status );
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );
   }

/* Annul the returned object if an error occurred. */
   if( !astOK ) ret = astAnnul( ret );

/* Return the answer. */
   return ret;
}

static const char *YamlEventType( yaml_event_t e ){
/*
*  Name:
*     YamlEventType

*  Purpose:
*     Return a string descripion of a YAML event type.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     const char *YamlEventType( yaml_event_t e )

*  Class Membership:
*     YamlChan member function

*  Description:
*     This functions returns a pointer to a static const string holding a
*     text description of the type of the supplied yaml event.

*  Parameters:
*     e
*        The yaml event
*/

/* Local Variables: */
   static const char *result = NULL;

/* Compare the integer event type against each known value. */
   if( e.type == YAML_NO_EVENT ){
      result = "YAML_NO_EVENT";

   } else if( e.type == YAML_STREAM_START_EVENT ){
      result = "YAML_STREAM_START_EVENT";

   } else if( e.type == YAML_STREAM_END_EVENT ){
      result = "YAML_STREAM_END_EVENT";

   } else if( e.type == YAML_DOCUMENT_START_EVENT ){
      result = "YAML_DOCUMENT_START_EVENT";

   } else if( e.type == YAML_DOCUMENT_END_EVENT ){
      result = "YAML_DOCUMENT_END_EVENT";

   } else if( e.type == YAML_ALIAS_EVENT ){
      result = "YAML_ALIAS_EVENT";

   } else if( e.type == YAML_SCALAR_EVENT ){
      result = "YAML_SCALAR_EVENT";

   } else if( e.type == YAML_SEQUENCE_START_EVENT ){
      result = "YAML_SEQUENCE_START_EVENT";

   } else if( e.type == YAML_SEQUENCE_END_EVENT ){
      result = "YAML_SEQUENCE_END_EVENT";

   } else if( e.type == YAML_MAPPING_START_EVENT ){
      result = "YAML_MAPPING_START_EVENT";

   } else if( e.type == YAML_MAPPING_END_EVENT ){
      result = "YAML_MAPPING_END_EVENT";

   } else {
      result = "<unknown YAML event>";
   }

   return result;
}

static AstObject *YamlToAst( AstYamlChan *this, AstKeyMap *km,
                             int *status ) {
/*
*  Name:
*     YamlToAst

*  Purpose:
*     Create an AST Object from a KeyMap holding a parsed YAML document

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstObject *YamlToAst( AstYamlChan *this, AstKeyMap *km, int *status )

*  Description:
*     This function creates an AST object from the contents of the
*     supplied KeyMap, which should represent the values read from a YAML
*     document.

*  Parameters:
*     this
*        Pointer to the YamlChan.
*     km
*        Pointer to the KeyMap. YAML scalar values should be stored as
*        scalar entries, YAML vector values should be stored as
*        vector entries and YAML Mappings should be stored as nested
*        KeyMaps in this KeyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the created AST Object.

*  Notes:
*     - A NULL pointer will be returned if this function is invoked
*     with the AST error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstKeyMap *subkm;
   AstObject *result;
   AstObject *obj;
   const char *key;
   int enc;
   int iel;
   int ikey;
   int nel;
   int nkey;

/* Initialise result */
   result = NULL;

/* Check inherited status */
   if( *status != 0 ) return result;

/* If no value has been set for thr YamlEncoding attribute, set the
   default value determined whilst the YAML was being parsed. */
   if( !astTestYamlEncoding( this ) ){
      enc = this->defenc;
      astSetYamlEncoding( this, enc );

/* If a value has been set for YamlEncoding, get it. If it is UNKNOWN,
   then use the default (but do not set it). */
   } else {
      enc = astGetYamlEncoding( this );
      if( enc == UNKNOWN_ENCODING ) enc = this->defenc;
   }

/* We need to find the first WCS in the supplied KeyMap, so loop
   round the entries in the KeyMap. */
   nkey = astMapSize( km );
   for( ikey = 0; ikey < nkey && !result && astOK; ikey++ ) {
      key = astMapKey( km, ikey );

/* The required entry must hold a KeyMap so will have a type of
   AST__OBJECTTYPE. */
      if( astMapType( km, key ) == AST__OBJECTTYPE ){

/* The current entry may hold a vector of KeyMaps. Search through them
   all. */
         nel = astMapLength( km, key );
         for( iel = 0; iel < nel && !result && astOK; iel++ ) {
            astMapGetElemA( km, key, iel, &obj );
            subkm = (AstKeyMap *) obj;

/* If we are looking for ASDF objects, and the KeyMap represents a WCS, read
   an AST FrameSet from it. */
            if( enc == ASDF_ENCODING ) {
               if( IsA( subkm, "wcs", status ) ) {
                  result = (AstObject *) ReadWcs( this, subkm, status );
               }

/* If we are looking for NATIVE objects, attempt to read an AST Object
   from it. */
            } else if( enc == NATIVE_ENCODING ) {
               result = (AstObject *) ReadNative( this, subkm, status );
            }

/* Free the KeyMap pointer read from the current element of the vector. */
            obj = astAnnul( obj );
         }
      }
   }

/* Report an error if no WCS entry was found. */
   if( !result && astOK ) {
      astError( AST__NOTMP, "astRead(YamlChan): No suitable object was found "
                "in the supplied YAML text", status );

/* Delete any returned FrameSet pointer if an error occurred. */
   } else if( result && !astOK ) {
      result = astAnnul( result );
   }

/* Return a ponter to the AST object. */
   return result;
}
#endif






/* Functions which access class attributes. */
/* ---------------------------------------- */
/* Implement member functions to access the attributes associated with
   this class using the macros defined for this purpose in the
   "object.h" file. For a description of each attribute, see the class
   interface (in the associated .h file). */

/*
*att++
*  Name:
*     VerboseRead

*  Purpose:
*     Echo YAML text to standard output as it is read?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This is a boolean attribute which indicates whether YAML text should
*     be displayed on standard output as it is read. Doing so can help to
*     locate YAML syntax errors reported by libyaml. The default is zero
*     (i.e. the text is not echoed by default).

*  Applicability:
*     All yamlchans have this attribute.
*att--
*/

/* This ia a boolean value (0 or 1) with a value of -INT_MAX when
   undefined but yielding a default of zero. */
astMAKE_CLEAR(YamlChan,VerboseRead,verboseread,-INT_MAX)
astMAKE_GET(YamlChan,VerboseRead,int,0,( this->verboseread != -INT_MAX ? this->verboseread : 0 ))
astMAKE_SET(YamlChan,VerboseRead,int,verboseread,( value != 0 ))
astMAKE_TEST(YamlChan,VerboseRead,( this->verboseread != -INT_MAX ))

/*
*att++
*  Name:
*     PreserveName

*  Purpose:
*     Save the ASDF name attributes as AST Ident values?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This is a boolean attribute that controls how astRead behaves. If
*     PreserveName is non-zero, the value of the "name" property of each
*     ASDF transform is stored as the value for the Ident attribute of the
*     corresponding AST Mapping. If PreserveName is zero, the "name" property
*     is stored as the value for the ID attribute of the corresponding AST
*     Mapping. The main difference between the Ident and ID attributes is
*     that the value of ID is not transferred to the new Object when an
*     Object is copied, whereas the Ident value is transferred. However,
*     a secondary difference is that a Mapping cannot be simplified (using
c     astSimplify)
f     AST_SIMPLIFY)
*     if its Ident value is set (this is because the Ident value could be
*     lost in the process). For this reason, the default for PreserveName
*     is zero.

*  Applicability:
*     All yamlchans have this attribute.
*att--
*/

/* This ia a boolean value (0 or 1) with a value of -INT_MAX when
   undefined but yielding a default of zero. */
astMAKE_CLEAR(YamlChan,PreserveName,preservename,-INT_MAX)
astMAKE_GET(YamlChan,PreserveName,int,0,( this->preservename != -INT_MAX ? this->preservename : 0 ))
astMAKE_SET(YamlChan,PreserveName,int,preservename,( value != 0 ))
astMAKE_TEST(YamlChan,PreserveName,( this->preservename != -INT_MAX ))

/*
*att++
*  Name:
*     YamlEncoding

*  Purpose:
*     System for formatting Objects as YAML.

*  Type:
*     Public attribute.

*  Synopsis:
*     String.

*  Description:
*     This attribute specifies the formatting system to use when AST
*     Objects are written out as YAML through a YamlChan. It
c     affects the behaviour of the astWrite function when
f     affects the behaviour of the AST_WRITE routine  when
*     they are used to transfer any AST Object to or from an external
*     XML representation.

*  Formats Available:
*     The YamlEncoding attribute can take any of the following (case
*     insensitive) string values to select the corresponding formatting
*     system:
*
*     - "ASDF": Currently, this is the only schema supported by the
*     YamlChan class. It is defined by the Space Telescope Science Institute.
*     (see http://asdf-standard.readthedocs.io). See below for details of
*     the support this class provides for reading and writing ASDF objects.
*     In future, the YamlChan class may allow AST objects to be represented
*     in other ways (e.g. AST Native format).

*  Notes on Reading ASDF WCS Information:
*     This class does not currently support the complete ASDF WCS
*     schema. When reading an AST Object from an ASDF YAML file, the
*     following restrictions on the ASDF file apply:
*
*     - The ASDF spectral_frame, temporal_frame and composite_frame
*     classes are not supported.
*     - Only the following celestial coordinate frames are supported:
*     icrs, fk4, fk4noeterms, fk5, galactic, supergalactic, altaz,
*     barycentricmeanecliptic.
*     - Earth locations must be specified using the WGS84 ellipsoid.
*     - Times must be specified in one of the following formats: iso,
*     byear, jyear, jd, mjd.
*     - Only the following transform classes are supported:
*     identity, scale, multiplyscale, remap_axes, shift, compose,
*     concatenate, constant, fix_inputs, affine, rotate2d,
*     rotate_sequence_3d, rotate3d, linear1d, ortho_polynomial
*     (chebyshev only), planar2d, polynomial. In addition, all sky
*     projections are supported.

*  Notes on Writing ASDF WCS Information:
*     This class does not currently support the complete ASDF WCS
*     schema. When writing an AST Object to an ASDF YAML file, the
*     following restrictions on the AST object apply:
*
*     - Only Frames, Mappings and FrameSets can be written.
*     - Frames must be basic Frames or SkyFrames.
*     - The following SkyFrame systems are not supported: GAPPT,
*     HELIOECLIPTIC, J2000, UNKNOWN.
*     - Only the following Mapping classes are supported: CmpMap, TranMap,
*     UnitMap, ZoomMap, ShiftMap, WinMap, MatrixMap, PermMap, WcsMap,
*     PolyMap, ChebyMap.

*  Applicability:
*     YamlChan
*        All YamlChans have this attribute.
*att--
*/
astMAKE_CLEAR(YamlChan,YamlEncoding,yamlencoding,UNKNOWN_ENCODING)
astMAKE_SET(YamlChan,YamlEncoding,int,yamlencoding,(
   ( value == ASDF_ENCODING ||
     value == NATIVE_ENCODING ) ? value :
   (astError( AST__BADAT, "astSetYamlEncoding: Unknown YAML formatting system %d "
              "supplied.", status, value ), UNKNOWN_ENCODING )))
astMAKE_TEST(YamlChan,YamlEncoding,( this->yamlencoding != UNKNOWN_ENCODING ))
astMAKE_GET(YamlChan,YamlEncoding,int,0,(this->yamlencoding == UNKNOWN_ENCODING ?
                                ASDF_ENCODING : this->yamlencoding))


/* Copy constructor. */
/* ----------------- */

/* Destructor. */
/* ----------- */

/* Dump function. */
/* -------------- */

static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for YamlChan objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the YamlChan class to an output Channel.

*  Parameters:
*     this
*        Pointer to the Object (a YamlChan) whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstYamlChan *this;            /* Pointer to the YamlChan structure */
   int ival;                     /* Integer value */
   int set;                      /* Attribute value set? */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the YamlChan structure. */
   this = (AstYamlChan *) this_object;

/* Write out values representing the instance variables for the
   YamlChan class.  Accompany these with appropriate comment strings,
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

   set = TestVerboseRead( this, status );
   ival = set ? GetVerboseRead( this, status ) : astGetVerboseRead( this );
   astWriteInt( channel, "VerboseRead", set, 0, ival,
                ival ? "Echo YAML as it is read" :
                       "Do not echo YAML as it is read" );

   set = TestPreserveName( this, status );
   ival = set ? GetPreserveName( this, status ) : astGetPreserveName( this );
   astWriteInt( channel, "PreserveName", set, 0, ival,
                ival ? "Store ASDF 'name' as AST 'Ident'" :
                       "Store ASDF 'name' as AST 'Id'" );

   set = TestYamlEncoding( this, status );
   ival = set ? GetYamlEncoding( this, status ) : astGetYamlEncoding( this );
   if( ival > UNKNOWN_ENCODING && ival <= MAX_ENCODING ) {
      astWriteString( channel, "YamlEnc", set, 1, xencod[ival], "Encoding system" );
   } else {
      astWriteString( channel, "YamlEnc", set, 1, UNKNOWN_STRING, "Encoding system" );
   }

}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAYamlChan and astCheckYamlChan functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(YamlChan,Channel)
astMAKE_CHECK(YamlChan)

AstYamlChan *astYamlChan_( const char *(* source)( void ),
                           void (* sink)( const char * ),
                           const char *options, int *status, ...) {
/*
*++
*  Name:
c     astYamlChan
f     AST_YAMLCHAN

*  Purpose:
*     Create a YamlChan.

*  Type:
*     Public function.

*  Synopsis:
c     #include "yamlchan.h"
c     AstYamlChan *astYamlChan( const char *(* source)( void ),
c                               void (* sink)( const char * ),
c                               const char *options, ... )
f     RESULT = AST_YAMLCHAN( SOURCE, SINK, OPTIONS, STATUS )

*  Class Membership:
*     YamlChan constructor.

*  Description:
*     This function creates a new YamlChan and optionally initialises
*     its attributes.
*
*     A YamlChan is a specialised form of Channel which supports YAML
*     I/O operations. Writing an Object to a YamlChan (using
c     astWrite) will, if the Object is suitable, generate an
f     AST_WRITE) will, if the Object is suitable, generate an
*     YAML description of that Object, and reading from a YamlChan will
*     create a new Object from its YAML description.
*
*     Normally, when you use a YamlChan, you should provide "source"
c     and "sink" functions which connect it to an external data store
c     by reading and writing the resulting text. These functions
f     and "sink" routines which connect it to an external data store
f     by reading and writing the resulting text. These routines
*     should perform any conversions needed between external character
c     encodings and the internal ASCII encoding. If no such functions
f     encodings and the internal ASCII encoding. If no such routines
*     are supplied, a Channel will read from standard input and write
*     to standard output.
*
*     Alternatively, a YamlChan can be told to read or write from
*     specific text files using the SinkFile and SourceFile attributes,
*     in which case no sink or source function need be supplied.

*  Parameters:
c     source
f     SOURCE = SUBROUTINE (Given)
c        Pointer to a source function that takes no arguments and
c        returns a pointer to a null-terminated string.  If no value
c        has been set for the SourceFile attribute, this function
c        will be used by the YamlChan to obtain lines of input text. On
c        each invocation, it should return a pointer to the next input
c        line read from some external data store, and a NULL pointer
c        when there are no more lines to read.
c
c        If "source" is NULL and no value has been set for the SourceFile
c        attribute, the YamlChan will read from standard input instead.
f        A source routine, which is a subroutine which takes a single
f        integer error status argument.   If no value has been set
f        for the SourceFile attribute, this routine will be used by
f        the YamlChan to obtain lines of input text. On each
f        invocation, it should read the next input line from some
f        external data store, and then return the resulting text to
f        the AST library by calling AST_PUTLINE. It should supply a
f        negative line length when there are no more lines to read.
f        If an error occurs, it should set its own error status
f        argument to an error value before returning.
f
f        If the null routine AST_NULL is suppied as the SOURCE value,
f        and no value has been set for the SourceFile attribute,
f        the YamlChan will read from standard input instead.
c     sink
f     SINK = SUBROUTINE (Given)
c        Pointer to a sink function that takes a pointer to a
c        null-terminated string as an argument and returns void.
c        If no value has been set for the SinkFile attribute, this
c        function will be used by the YamlChan to deliver lines of
c        output text. On each invocation, it should deliver the
c        contents of the string supplied to some external data store.
c
c        If "sink" is NULL, and no value has been set for the SinkFile
c        attribute, the YamlChan will write to standard output instead.
f        A sink routine, which is a subroutine which takes a single
f        integer error status argument.  If no value has been set
f        for the SinkFile attribute, this routine will be used by
f        the YamlChan to deliver lines of output text. On each
f        invocation, it should obtain the next output line from the
f        AST library by calling AST_GETLINE, and then deliver the
f        resulting text to some external data store.  If an error
f        occurs, it should set its own error status argument to an
f        error value before returning.
f
f        If the null routine AST_NULL is suppied as the SINK value,
f        and no value has been set for the SinkFile attribute,
f        the YamlChan will write to standard output instead.
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new YamlChan. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new YamlChan. The syntax used is identical to that for the
f        AST_SET routine.
c     ...
c        If the "options" string contains "%" format specifiers, then
c        an optional list of additional arguments may follow it in
c        order to supply values to be substituted for these
c        specifiers. The rules for supplying these are identical to
c        those for the astSet function (and for the C "printf"
c        function).
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Returned Value:
c     astYamlChan()
f     AST_YAMLCHAN = INTEGER
*        A pointer to the new YamlChan.

*  Notes:
f     - The names of the routines supplied for the SOURCE and SINK
f     arguments should appear in EXTERNAL statements in the Fortran
f     routine which invokes AST_YAMLCHAN. However, this is not generally
f     necessary for the null routine AST_NULL (so long as the AST_PAR
f     include file has been used).
*     - If the external data source or sink uses a character encoding
*     other than ASCII, the supplied source and sink functions should
*     translate between the external character encoding and the internal
*     ASCII encoding used by AST.
*     - A null Object pointer (AST__NULL) will be returned if this
*     function is invoked with the AST error status set, or if it
*     should fail for any reason.
f     - Note that the null routine AST_NULL (one underscore) is
f     different to AST__NULL (two underscores), which is the null Object
f     pointer.
*--
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstYamlChan *new;             /* Pointer to new YamlChan */
   va_list args;                 /* Variable argument list */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the YamlChan, allocating memory and initialising the
   virtual function table as well if necessary. This interface is for
   use by other C functions within AST, and uses the standard "wrapper"
   functions included in this class. */
   new = astInitYamlChan( NULL, sizeof( AstYamlChan ), !class_init,
                          &class_vtab, "YamlChan", source, SourceWrap,
                          sink, SinkWrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   YamlChan's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new YamlChan. */
   return new;
}

AstYamlChan *astYamlChanId_( const char *(* source)( void ),
                             void (* sink)( const char * ),
                             const char *options, ... ) {
/*
*  Name:
*     astYamlChanId_

*  Purpose:
*     Create a YamlChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstYamlChan *astYamlChanId_( const char *(* source)( void ),
*                                  void (* sink)( const char * ),
*                                  const char *options, ... )

*  Class Membership:
*     YamlChan constructor.

*  Description:
*     This function implements the external (public) C interface to the
*     astYamlChan constructor function. Another function (astYamlChanForId)
*     should be called to create a YamlChan for use within other languages.
*     Both functions return an ID value (instead of a true C pointer) to
*     external users, and must be provided because astYamlChan_ has a variable
*     argument list which cannot be encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable argument list also prevents this function from
*     invoking astYamlChan_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astYamlChan_.

*  Returned Value:
*     The ID value associated with the new YamlChan.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstYamlChan *new;             /* Pointer to new YamlChan */
   va_list args;                 /* Variable argument list */

   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the YamlChan, allocating memory and initialising the
   virtual function table as well if necessary. This interface is for
   use by external C functions and uses the standard "wrapper"
   functions included in this class. */
   new = astInitYamlChan( NULL, sizeof( AstYamlChan ), !class_init,
                          &class_vtab, "YamlChan", source, SourceWrap,
                          sink, SinkWrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   YamlChan's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new YamlChan. */
   return astMakeId( new );
}

AstYamlChan *astYamlChanForId_( const char *(* source)( void ),
                                char *(* source_wrap)( const char *(*)( void ), int * ),
                                void (* sink)( const char * ),
                                void (* sink_wrap)( void (*)( const char * ),
                                                    const char *, int * ),
                                const char *options, ... ) {
/*
*+
*  Name:
*     astYamlChanFor

*  Purpose:
*     Initialise a YamlChan from a foreign language interface.

*  Type:
*     Public function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstYamlChan *astYamlChanFor( const char *(* source)( void ),
*                                  char *(* source_wrap)( const char *(*)
*                                                         ( void ), int * ),
*                                  void (* sink)( const char * ),
*                                  void (* sink_wrap)( void (*)( const char * ),
*                                                      const char *, int * ),
*                                  const char *options, ... )

*  Class Membership:
*     YamlChan constructor.

*  Description:
*     This function creates a new YamlChan from a foreign language
*     interface and optionally initialises its attributes.
*
*     A YamlChan is a specialised form of Channel which supports YAML
*     I/O operations. Writing an Object to a YamlChan (using
c     astWrite) will, if the Object is suitable, generate an
f     AST_WRITE) will, if the Object is suitable, generate an
*     YAML description of that Object, and reading from a YamlChan will
*     create a new Object from its YAML description.
*
*     Normally, when you use a YamlChan, you should provide "source"
c     and "sink" functions which connect it to an external data store
c     by reading and writing the resulting text. These functions
f     and "sink" routines which connect it to an external data store
f     by reading and writing the resulting text. These routines
*     should perform any conversions needed between external character
c     encodings and the internal ASCII encoding. If no such functions
f     encodings and the internal ASCII encoding. If no such routines
*     are supplied, a Channel will read from standard input and write
*     to standard output.

*  Parameters:
*     source
*        Pointer to a "source" function which will be used to obtain
*        lines of input text. Generally, this will be obtained by
*        casting a pointer to a source function which is compatible
*        with the "source_wrap" wrapper function (below). The pointer
*        should later be cast back to its original type by the
*        "source_wrap" function before the function is invoked.
*
*        If "source" is NULL, the YamlChan will read from standard
*        input instead.
*     source_wrap
*        Pointer to a function which can be used to invoke the
*        "source" function supplied (above). This wrapper function is
*        necessary in order to hide variations in the nature of the
*        source function, such as may arise when it is supplied by a
*        foreign (non-C) language interface.
*
*        The single parameter of the "source_wrap" function is a
*        pointer to the "source" function, and it should cast this
*        function pointer (as necessary) and invoke the function with
*        appropriate arguments to obtain the next line of input
*        text. The "source_wrap" function should then return a pointer
*        to a dynamically allocated, null terminated string containing
*        the text that was read. The string will be freed (using
*        astFree) when no longer required and the "source_wrap"
*        function need not concern itself with this. A NULL pointer
*        should be returned if there is no more input to read.
*
*        If "source_wrap" is NULL, the YamlChan will read from standard
*        input instead.
*     sink
*        Pointer to a "sink" function which will be used to deliver
*        lines of output text. Generally, this will be obtained by
*        casting a pointer to a sink function which is compatible with
*        the "sink_wrap" wrapper function (below). The pointer should
*        later be cast back to its original type by the "sink_wrap"
*        function before the function is invoked.
*
*        If "sink" is NULL, the YamlChan will write to standard output
*        instead.
*     sink_wrap
*        Pointer to a function which can be used to invoke the "sink"
*        function supplied (above). This wrapper function is necessary
*        in order to hide variations in the nature of the sink
*        function, such as may arise when it is supplied by a foreign
*        (non-C) language interface.
*
*        The first parameter of the "sink_wrap" function is a pointer
*        to the "sink" function, and the second parameter is a pointer
*        to a const, null-terminated character string containing the
*        text to be written.  The "sink_wrap" function should cast the
*        "sink" function pointer (as necessary) and invoke the
*        function with appropriate arguments to deliver the line of
*        output text. The "sink_wrap" function then returns void.
*
*        If "sink_wrap" is NULL, the Channel will write to standard
*        output instead.
*     options
*        Pointer to a null-terminated string containing an optional
*        comma-separated list of attribute assignments to be used for
*        initialising the new YamlChan. The syntax used is identical to
*        that for the astSet function and may include "printf" format
*        specifiers identified by "%" symbols in the normal way.
*     ...
*        If the "options" string contains "%" format specifiers, then
*        an optional list of additional arguments may follow it in
*        order to supply values to be substituted for these
*        specifiers. The rules for supplying these are identical to
*        those for the astSet function (and for the C "printf"
*        function).

*  Returned Value:
*     astYamlChanFor()
*        A pointer to the new YamlChan.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
*     function is invoked with the global error status set, or if it
*     should fail for any reason.
*     - This function is only available through the public interface
*     to the YamlChan class (not the protected interface) and is
*     intended solely for use in implementing foreign language
*     interfaces to this class.
*-

*  Implememtation Notes:
*     - This function behaves exactly like astYamlChanId_, in that it
*     returns ID values and not true C pointers, but it has two
*     additional arguments. These are pointers to the "wrapper
*     functions" which are needed to accommodate foreign language
*     interfaces.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstYamlChan *new;             /* Pointer to new YamlChan */
   va_list args;                 /* Variable argument list */
   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialise the YamlChan, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitYamlChan( NULL, sizeof( AstYamlChan ), !class_init,
                          &class_vtab, "YamlChan", source, source_wrap,
                          sink, sink_wrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   YamlChan's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new YamlChan. */
   return astMakeId( new );
}

AstYamlChan *astInitYamlChan_( void *mem, size_t size, int init,
                               AstYamlChanVtab *vtab, const char *name,
                               const char *(* source)( void ),
                               char *(* source_wrap)( const char *(*)( void ), int * ),
                               void (* sink)( const char * ),
                               void (* sink_wrap)( void (*)( const char * ),
                                                   const char *, int * ), int *status ) {
/*
*+
*  Name:
*     astInitYamlChan

*  Purpose:
*     Initialise a YamlChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstYamlChan *astInitYamlChan( void *mem, size_t size, int init,
*                                   AstYamlChanVtab *vtab, const char *name,
*                                   const char *(* source)( void ),
*                                   char *(* source_wrap)( const char *(*)( void ), int * ),
*                                   void (* sink)( const char * ),
*                                   void (* sink_wrap)( void (*)( const char * ),
*                                                     const char *, int * ) )

*  Class Membership:
*     YamlChan initialiser.

*  Description:
*     This function is provided for use by class implementations to
*     initialise a new YamlChan object. It allocates memory (if
*     necessary) to accommodate the YamlChan plus any additional data
*     associated with the derived class.  It then initialises a
*     YamlChan structure at the start of this memory. If the "init"
*     flag is set, it also initialises the contents of a virtual
*     function table for a YamlChan at the start of the memory passed
*     via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the YamlChan is to be
*        initialised.  This must be of sufficient size to accommodate
*        the YamlChan data (sizeof(YamlChan)) plus any data used by the
*        derived class. If a value of NULL is given, this function
*        will allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the YamlChan (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the YamlChan structure, so a valid value must be
*        supplied even if not required for allocating memory.
*     init
*        A boolean flag indicating if the YamlChan's virtual function
*        table is to be initialised. If this value is non-zero, the
*        virtual function table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new YamlChan.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*     source
*        Pointer to a "source" function which will be used to obtain
*        lines of text. Generally, this will be obtained by
*        casting a pointer to a source function which is compatible
*        with the "source_wrap" wrapper function (below). The pointer
*        should later be cast back to its original type by the
*        "source_wrap" function before the function is invoked.
*
*        If "source" is NULL, the Channel will read from standard
*        input instead.
*     source_wrap
*        Pointer to a function which can be used to invoke the
*        "source" function supplied (above). This wrapper function is
*        necessary in order to hide variations in the nature of the
*        source function, such as may arise when it is supplied by a
*        foreign (non-C) language interface.
*
*        The single parameter of the "source_wrap" function is a
*        pointer to the "source" function, and it should cast this
*        function pointer (as necessary) and invoke the function with
*        appropriate arguments to obtain the next line of input
*        text. The "source_wrap" function should then return a pointer
*        to a dynamically allocated, null terminated string containing
*        the text that was read. The string will be freed (using
*        astFree) when no longer required and the "source_wrap"
*        function need not concern itself with this. A NULL pointer
*        should be returned if there is no more input to read.
*
*        If "source_wrap" is NULL, the Channel will read from standard
*        input instead.
*     sink
*        Pointer to a "sink" function which will be used to deliver
*        lines of text. Generally, this will be obtained by
*        casting a pointer to a sink function which is compatible with
*        the "sink_wrap" wrapper function (below). The pointer should
*        later be cast back to its original type by the "sink_wrap"
*        function before the function is invoked.
*
*        If "sink" is NULL, the contents of the YamlChan will not be
*        written out before being deleted.
*     sink_wrap
*        Pointer to a function which can be used to invoke the "sink"
*        function supplied (above). This wrapper function is necessary
*        in order to hide variations in the nature of the sink
*        function, such as may arise when it is supplied by a foreign
*        (non-C) language interface.
*
*        The first parameter of the "sink_wrap" function is a pointer
*        to the "sink" function, and the second parameter is a pointer
*        to a const, null-terminated character string containing the
*        text to be written.  The "sink_wrap" function should cast the
*        "sink" function pointer (as necessary) and invoke the
*        function with appropriate arguments to deliver the line of
*        output text. The "sink_wrap" function then returns void.
*
*        If "sink_wrap" is NULL, the Channel will write to standard
*        output instead.

*  Returned Value:
*     A pointer to the new YamlChan.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstYamlChan *new;              /* Pointer to new YamlChan */

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitYamlChanVtab( vtab, name );

/* Initialise a Channel structure (the parent class) as the first
   component within the YamlChan structure, allocating memory if
   necessary. */
   new = (AstYamlChan *) astInitChannel( mem, size, 0,
                                         (AstChannelVtab *) vtab, name,
                                         source, source_wrap, sink,
                                         sink_wrap );

   if ( astOK ) {

/* Initialise the YamlChan data. */
/* ---------------------------- */
      new->verboseread = -INT_MAX;
      new->preservename = -INT_MAX;
      new->yamlencoding = UNKNOWN_ENCODING;
      new->anchors = NULL;
      new->gotwcs = 0;
      new->defenc = UNKNOWN_ENCODING;
      new->obj = NULL;

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new object. */
   return new;
}

AstYamlChan *astLoadYamlChan_( void *mem, size_t size,
                               AstYamlChanVtab *vtab, const char *name,
                               AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadYamlChan

*  Purpose:
*     Load a YamlChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "yamlchan.h"
*     AstYamlChan *astLoadYamlChan( void *mem, size_t size,
*                                   AstYamlChanVtab *vtab, const char *name,
*                                   AstChannel *channel )

*  Class Membership:
*     YamlChan loader.

*  Description:
*     This function is provided to load a new YamlChan using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     YamlChan structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a YamlChan at the start of the memory
*     passed via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory into which the YamlChan is to be
*        loaded.  This must be of sufficient size to accommodate the
*        YamlChan data (sizeof(YamlChan)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the YamlChan (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the YamlChan structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstYamlChan) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new YamlChan. If this is NULL, a pointer
*        to the (static) virtual function table for the YamlChan class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "YamlChan" is used instead.

*  Returned Value:
*     A pointer to the new YamlChan.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS
   AstYamlChan *new;
   char *text;

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if( !astOK ) return new;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this YamlChan. In this case the
   YamlChan belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstYamlChan );
      vtab = &class_vtab;
      name = "YamlChan";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitYamlChanVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built YamlChan. */
   new = astLoadChannel( mem, size, (AstChannelVtab *) vtab, name,
                         channel );

   if ( astOK ) {

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "YamlChan" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */

/* In the case of attributes, we first read the "raw" input value,
   supplying the "unset" value as the default. If a "set" value is
   obtained, we then use the appropriate (private) Set... member
   function to validate and set the value properly. */

      new->verboseread = astReadInt( channel, "verboseread", -INT_MAX );
      if ( TestVerboseRead( new, status ) ) SetVerboseRead( new, new->verboseread, status );

      new->preservename = astReadInt( channel, "preservename", -INT_MAX );
      if ( TestPreserveName( new, status ) ) SetPreserveName( new, new->preservename, status );

      text = astReadString( channel, "yamlenc", UNKNOWN_STRING );
      if( strcmp( text, UNKNOWN_STRING ) ) {
         new->yamlencoding = FindString( MAX_ENCODING + 1, xencod, text,
                                         "the YamlChan component 'YamlEnc'",
                                         "astRead", astGetClass( channel ),
                                         status );
      } else {
         new->yamlencoding = UNKNOWN_ENCODING;
      }
      if ( TestYamlEncoding( new, status ) ) SetYamlEncoding( new,
                                                    new->yamlencoding, status );
      text = astFree( text );

/* Initialise transient values that are not stored in the external
   representation of the YamlChan. */
      new->anchors = NULL;
      new->gotwcs = 0;
      new->defenc = UNKNOWN_ENCODING;
      new->obj = NULL;
   }

/* If an error occurred, clean up by deleting the new YamlChan. */
   if ( !astOK ) new = astDelete( new );

/* Return the new YamlChan pointer. */
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







