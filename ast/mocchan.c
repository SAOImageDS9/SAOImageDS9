/*
*class++
*  Name:
*     MocChan

*  Purpose:
*     I/O Channel for textual representations of Mocs.

*  Constructor Function:
c     astMocChan
f     AST_MOCCHAN

*  Description:
*     A MocChan is a specialised form of Channel which supports the
*     reading and writing of AST Moc objects as text, using the
*     conventions of the JSON and string encodings described in
*     the IVOA's MOC recommendation, version 1.1. Writing a Moc
*     to a MocChan (using
c     astWrite) will, if the Moc is suitable, generate a
f     AST_WRITE) will, if the Moc is suitable, generate a
*     textual description of that Moc, and reading from a MocChan will
*     create a new Moc from its textual description. See the Moc class
*     for further information.
*
*     Normally, when you use a MocChan, you should provide "source"
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
*     Alternatively, a MocChan can be told to read or write from
*     specific text files using the SinkFile and SourceFile attributes,
*     in which case no sink or source function need be supplied.

*  Inheritance:
*     The MocChan class inherits from the Channel class.

*  Attributes:
*     In addition to those attributes common to all Channels, every
*     MocChan also has the following attributes:
*
*     - MocFormat: Whether to use JSON or string format
*     - MocLineLen: Controls output buffer length

*  Functions:
c     The MocChan class does not define any new functions beyond those
f     The MocChan class does not define any new routines beyond those
*     which are applicable to all Channels.

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
*     DSB: David Berry (EAO)

*  History:
*     7-MAY-2019 (DSB):
*        Original version.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS MocChan

#define UNKNOWN_FORMAT  -1
#define STRING_FORMAT    0
#define JSON_FORMAT      1
#define MAX_FORMAT       1
#define UNKNOWN_STRING   "UNKNOWN"
#define STRING_STRING    "STRING"
#define JSON_STRING      "JSON"

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory allocation facilities */
#include "object.h"              /* Base Object class */
#include "channel.h"             /* Interface for parent class */
#include "mocchan.h"             /* Interface definition for this class */
#include "loader.h"              /* Interface to the global loader */
#include "moc.h"                 /* Moc interface */
#include "cmpregion.h"           /* For AST__OR constant */


/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <string.h>
#include <limits.h>

/* Module Types. */
/* ============= */

/* Module Variables. */
/* ================= */
/* Text values used to represent MocFormat values externally. */
static const char *xencod[8] = { JSON_STRING, STRING_STRING };

/* Pointers to parent class methods which are extended by this class. */
static const char *(* parent_getattrib)( AstObject *, const char *, int * );
static int (* parent_testattrib)( AstObject *, const char *, int * );
static void (* parent_clearattrib)( AstObject *, const char *, int * );
static void (* parent_setattrib)( AstObject *, const char *, int * );

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Define macros for accessing each item of thread specific global data. */
#ifdef THREAD_SAFE

/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->GetAttrib_Buff[ 0 ] = 0; \
   globals->Class_Init = 0;

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(MocChan)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(MocChan,Class_Init)
#define class_vtab astGLOBAL(MocChan,Class_Vtab)
#define getattrib_buff astGLOBAL(XmlChan,GetAttrib_Buff)


/* If thread safety is not needed, declare and initialise globals at static
   variables. */
#else

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstMocChanVtab class_vtab;   /* Virtual function table */
static int class_init = 0;          /* Virtual function table initialised? */

/* Buffer returned by GetAttrib. */
static char getattrib_buff[ 51 ];

#endif


/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstMocChan *astMocChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ), const char *, int * ),
                              const char *, ... );
AstMocChan *astMocChanId_( const char *(* source)( void ),
                           void (* sink)( const char * ),
                           const char *options, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstObject *Read( AstChannel *, int * );
static char *SourceWrap( const char *(*)( void ), int * );
static int FindString( int, const char *[], const char *, const char *, const char *, const char *, int * );
static int Write( AstChannel *, AstObject *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void SinkWrap( void (*)( const char * ), const char *, int * );
static const char *Source1( void *, size_t *, int * );
static void Sink1( void *, size_t, const char *, int * );

static void ClearAttrib( AstObject *, const char *, int * );
static const char *GetAttrib( AstObject *, const char *, int * );
static void SetAttrib( AstObject *, const char *, int * );
static int TestAttrib( AstObject *, const char *, int * );

static int TestMocLineLen( AstMocChan *, int * );
static void ClearMocLineLen( AstMocChan *, int * );
static void SetMocLineLen( AstMocChan *, int, int * );
static int GetMocLineLen( AstMocChan *, int * );

static void ClearMocFormat( AstMocChan *, int * );
static int GetMocFormat( AstMocChan *, int * );
static int TestMocFormat( AstMocChan *, int * );
static void SetMocFormat( AstMocChan *, int, int * );

/* Member functions. */
/* ================= */

static void ClearAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     ClearAttrib

*  Purpose:
*     Clear an attribute value for a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     void ClearAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     MocChan member function (over-rides the astClearAttrib protected
*     method inherited from the Channel class).

*  Description:
*     This function clears the value of a specified attribute for a
*     MocChan, so that the default value will subsequently be used.

*  Parameters:
*     this
*        Pointer to the MocChan.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstMocChan *this;              /* Pointer to the MocChan structure */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_object;

/* Check the attribute name and clear the appropriate attribute. */

/* MocFormat. */
/* --------- */
   if ( !strcmp( attrib, "mocformat" ) ) {
      astClearMocFormat( this );

/* MocLineLen */
/* --------- */
   } else if ( !strcmp( attrib, "moclinelen" ) ) {
      astClearMocLineLen( this );

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
*     #include "mocchan.h"
*     int FindString( int n, const char *list[], const char *test,
*                     const char *text, const char *method, const char *class, int *status )

*  Class Membership:
*     MocChan method.

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
      if( astChrMatch( test, list[ ret ] ) ) break;
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
*     Get the value of a specified attribute for a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     const char *GetAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     MocChan member function (over-rides the protected astGetAttrib
*     method inherited from the Channel class).

*  Description:
*     This function returns a pointer to the value of a specified
*     attribute for a MocChan, formatted as a character string.

*  Parameters:
*     this
*        Pointer to the MocChan.
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
*     within the MocChan, or at static memory. The contents of the
*     string may be over-written or the pointer may become invalid
*     following a further invocation of the same function or any
*     modification of the MocChan. A copy of the string should
*     therefore be made if necessary.
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstMocChan *this;            /* Pointer to the MocChan structure */
   const char *result;           /* Pointer value to return */
   int ival;                     /* Integer attribute value */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this_object);

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_object;

/* Compare "attrib" with each recognised attribute name in turn,
   obtaining the value of the required attribute. */

/* MocFormat. */
/* ------------ */
   if ( !strcmp( attrib, "mocformat" ) ) {
      ival = astGetMocFormat( this );
      if ( astOK ) {
         if( ival == JSON_FORMAT ){
            result = JSON_STRING;
         } else if( ival == STRING_FORMAT ){
            result = STRING_STRING;
         } else {
            result = UNKNOWN_STRING;
         }
      }

/* MocLineLen */
/* --------- */
   } else if ( !strcmp( attrib, "moclinelen" ) ) {
      ival = astGetMocLineLen( this );
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

void astInitMocChanVtab_(  AstMocChanVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitMocChanVtab

*  Purpose:
*     Initialise a virtual function table for a MocChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "mocchan.h"
*     void astInitMocChanVtab( AstMocChanVtab *vtab, const char *name )

*  Class Membership:
*     MocChan vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the MocChan class.

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
   will be used (by astIsAMocChan) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstChannelVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */

   vtab->SetMocLineLen = SetMocLineLen;
   vtab->ClearMocLineLen = ClearMocLineLen;
   vtab->TestMocLineLen = TestMocLineLen;
   vtab->GetMocLineLen = GetMocLineLen;

   vtab->ClearMocFormat = ClearMocFormat;
   vtab->TestMocFormat = TestMocFormat;
   vtab->SetMocFormat = SetMocFormat;
   vtab->GetMocFormat = GetMocFormat;

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
   channel->Read = Read;

/* Declare the Dump function for this class. There is no destructor or
   copy constructor. */
   astSetDump( vtab, Dump, "MocChan", "STC-S I/O Channel" );

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
*     #include "mocchan.h"
*     AstObject *Read( AstChannel *this_channel, int *status )

*  Class Membership:
*     MocChan member function (over-rides the astRead method
*     inherited from the Channel class).

*  Description:
*     This function reads an Object from a MocChan.

*  Parameters:
*     this
*        Pointer to the MocChan.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the new Object.
*/

/* Local Variables: */
   AstMocChan *this;
   AstMoc *moc;
   int json;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_channel;

/* Create an empty moc with unspecified MaxOrder. */
   moc = astMoc( " " , status );

/* Read the MOC from the external source and store it in the new Moc
   created above. */
   astAddMocText( moc, -1, Source1, this, "astRead", &json );

/* Normalise the Moc. */
   astMocNorm( moc, 0, AST__OR, 0, astGetMaxOrder( moc ), "astRead" );

/* Set the MocFormat value to indicate the format of the external MOC
   description. */
   astSetMocFormat( this, json ? JSON_FORMAT : STRING_FORMAT );

/* If an error occurred, clean up by deleting the new Object and
   return a NULL pointer. */
   if ( !astOK ) moc = astDelete( moc );

/* Return the pointer to the new Object. */
   return (AstObject *) moc;
}

static void SetAttrib( AstObject *this_object, const char *setting, int *status ) {
/*
*  Name:
*     SetAttrib

*  Purpose:
*     Set an attribute value for a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     void SetAttrib( AstObject *this, const char *setting )

*  Class Membership:
*     MocChan member function (over-rides the astSetAttrib protected
*     method inherited from the Channel class).

*  Description:
*     This function assigns an attribute value for a MocChan, the
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
*        Pointer to the MocChan.
*     setting
*        Pointer to a null terminated string specifying the new attribute
*        value.
*/

/* Local Variables: */
   AstMocChan *this;          /* Pointer to the MocChan structure */
   int ival;                   /* Integer attribute value */
   int len;                    /* Length of setting string */
   int nc;                     /* Number of characters read by "astSscanf" */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_object;

/* Obtain the length of the setting string. */
   len = (int) strlen( setting );

/* Test for each recognised attribute in turn, using "astSscanf" to parse
   the setting string and extract the attribute value (or an offset to
   it in the case of string values). In each case, use the value set
   in "nc" to check that the entire string was matched. Once a value
   has been obtained, use the appropriate method to set it. */

/* MocFormat. */
/* ------------ */
   if( nc = 0,
       ( 0 == astSscanf( setting, "mocformat=%n%*[^\n]%n", &ival, &nc ) )
        && ( nc >= len ) ) {
      nc = astChrLen( setting + ival );
      if( astChrMatchN( setting + ival, STRING_STRING, nc ) ){
         astSetMocFormat( this, STRING_FORMAT );
      } else if( astChrMatchN( setting + ival, JSON_STRING, nc ) ){
         astSetMocFormat( this, JSON_FORMAT );
      } else if( astChrMatchN( setting + ival, UNKNOWN_STRING, nc ) ){
         astSetMocFormat( this, UNKNOWN_FORMAT );
      } else {
         astError( AST__BADAT, "astSet(%s): Unknown MOC form '%s' "
                   "requested.", status, astGetClass( this ), setting + ival );
      }

/* MocLineLen */
/* ----------*/
   } else if ( nc = 0,
        ( 1 == astSscanf( setting, "moclinelen= %d %n", &ival, &nc ) )
        && ( nc >= len ) ) {
      astSetMocLineLen( this, ival );

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_setattrib)( this_object, setting, status );
   }
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
*     #include "mocchan.h"
*     void Sink1( void *data, size_t nc, const char *buf, int *status )

*  Class Membership:
*     Moc member function

*  Description:
*     This function writes out the supplied buffer through the external
*     sink function.

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

/* Local Variables: */
   AstMocChan *this;
   char *line;

/* Check inherited status */
   if( !astOK ) return;

/* Get a pointer to the MocChan. */
   this = (AstMocChan *) data;

/* "buf" is not null terminated, so we need to create a null terminated
   copy. */
   line = astStore( NULL, buf, nc + 1 );
   line[ nc ] = 0;

/* Write this null-terminated line ut through the sink function. */
   astPutNextText( this, line );

/* Free the memory. */
   line = astFree( line );
}

static void SinkWrap( void (* sink)( const char * ), const char *line, int *status ) {
/*
*  Name:
*     SinkWrap

*  Purpose:
*     Wrapper function to invoke a C MocChan sink function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     void SinkWrap( void (* sink)( const char * ), const char *line, int *status )

*  Class Membership:
*     MocChan member function.

*  Description:
*     This function invokes the sink function whose pointer is
*     supplied in order to write an output line to an external data
*     store.

*  Parameters:
*     sink
*        Pointer to a sink function, whose single parameter is a
*        pointer to a const, null-terminated string containing the
*        text to be written, and which returns void. This is the form
*        of MocChan sink function employed by the C language interface
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
*     Wrapper function to invoke a C MocChan source function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     char *SourceWrap( const char *(* source)( void ), int *status )

*  Class Membership:
*     MocChan member function.

*  Description:
*     This function invokes the source function whose pointer is
*     supplied in order to read the next input line from an external
*     data store. It then returns a pointer to a dynamic string
*     containing a copy of the text that was read.

*  Parameters:
*     source
*        Pointer to a source function, with no parameters, that
*        returns a pointer to a const, null-terminated string
*        containing the text that it read. This is the form of MocChan
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

static const char *Source1( void *data, size_t *nc, int *status ){
/*
*  Name:
*     Source1

*  Purpose:
*     A source function for use with astAddMocText

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
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

/* Get a pointer to the MocChan. */
   AstMocChan *this = (AstMocChan *) data;

/* Get the next line of text from the source function. */
   const char *result = astGetNextText( this );

/* Get its length (not including the terminating null). */
   if( result ) *nc = strlen( result ) ;

/* Return the resulting pointer. */
   return result;
}

static int TestAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     TestAttrib

*  Purpose:
*     Test if a specified attribute value is set for a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     int TestAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     MocChan member function (over-rides the astTestAttrib protected
*     method inherited from the Object class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     a value has been set for one of a MocChan's attributes.

*  Parameters:
*     this
*        Pointer to the MocChan.
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
   AstMocChan *this;            /* Pointer to the MocChan structure */
   int result;                   /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_object;

/* Check the attribute name and test the appropriate attribute. */

/* MocFormat. */
/* ------------ */
   if ( !strcmp( attrib, "mocformat" ) ) {
      result = astTestMocFormat( this );

/* MocLineLen */
/* --------- */
   } else if ( !strcmp( attrib, "moclinelen" ) ) {
      result = astTestMocLineLen( this );

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_testattrib)( this_object, attrib, status );
   }

/* Return the result, */
   return result;
}

static int Write( AstChannel *this_channel, AstObject *object, int *status ) {
/*
*  Name:
*     Write

*  Purpose:
*     Write an Object to a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     int Write( AstChannel *this, AstObject *object, int *status )

*  Class Membership:
*     MocChan member function (over-rides the astWrite method
*     inherited from the Channel class).

*  Description:
*     This function writes an Object to a MocChan.

*  Parameters:
*     this
*        Pointer to the MocChan.
*     object
*        Pointer to the Object which is to be written.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The number of Objects written to the MocChan by this invocation of
*     astWrite.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the AST error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstMoc *moc;
   AstMocChan *this;
   int json;
   int ret;

/* Initialise. */
   ret = 0;

/* Check the global error status. */
   if ( !astOK ) return ret;

/* This class can only write out Mocs */
   if( astIsAMoc( object ) ) {
      moc = (AstMoc *) object;

/* Obtain a pointer to the MocChan structure. */
      this = (AstMocChan *) this_channel;

/* See if we should use JSON encoding. If not, we use string encoding. */
      if( astGetMocFormat( this ) == JSON_FORMAT ) {
         json = 1;
      } else {
         json = 0;
      }

/* Get the text form of the Moc and write it out through the sink
   function. */
      astGetMocText( moc, json, astGetMocLineLen( this ), Sink1,
                     this, "astWrite" );

/* Indicate we have written the Object out successfully. */
      if( astOK ) ret = 1;
   }

/* Return the answer. */
   return ret;
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
*     MocFormat

*  Purpose:
*     Format for encoding Mocs as text.

*  Type:
*     Public attribute.

*  Synopsis:
*     String.

*  Description:
*     This attribute specifies the format to use when AST Moc
*     Objects are converted to text by a MocChan. There are currently two
*     ways (conventions) by which MOCs may be represented in the form of
*     text and the MocFormat attribute is used to specify which of these
*     should be used:
*
*     - "JSON": Encodes a Moc Object as a JSON string using the JSON
*     serialisation described in the MOC recommendation (version 1.1).

*     - "STRING": Encodes a Moc Object as using the string serialisation
*     described in the MOC recommendation (version 1.1).
*
*     The value assigned to the MocFormat does not affect the behaviour
*     of the
c     astRead
f     AST_READ
*     method, which automatically identifies the format used by the
*     external text and sets the MocFormat attribute to the
*     corresponding value.
*
c     The astWrite
f     The AST_WRITE
*     method will create the external text using the format
*     specified by the current value of the MocFormat attribute.
*
*     The initial default value of the attribute is "UNKNOWN".

*  Applicability:
*     MocChan
*        All MocChans have this attribute.
*att--
*/
astMAKE_CLEAR(MocChan,MocFormat,mocformat,UNKNOWN_FORMAT)
astMAKE_SET(MocChan,MocFormat,int,mocformat,(
   value == STRING_FORMAT ||
   value == JSON_FORMAT ||
   value == UNKNOWN_FORMAT ? value :
   (astError( AST__BADAT, "astSetMocFormat: Unknown Moc format %d "
              "supplied.", status, value ), UNKNOWN_FORMAT )))
astMAKE_TEST(MocChan,MocFormat,( this->mocformat != UNKNOWN_FORMAT ))
astMAKE_GET(MocChan,MocFormat,int,UNKNOWN_FORMAT,this->mocformat )

/*
*att++
*  Name:
*     MocLineLen

*  Purpose:
*     Controls output buffer length.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This attribute specifies the maximum length to use when writing out
*     text through the sink function supplied when the MocChan was created.
*
*     The number of characters in each string written out through the sink
*     function will not be greater than the value of this attribute (but
*     may be less). The default value is 80.
*
f     Note, the default value of 80 may not be appropriate when a MocChan
f     is used within Fortran code. In this case, MocLineLen should usually
f     be set to the size of the CHARACTER variable used to receive the
f     text returned by AST_GETLINE within the sink function. This avoids
f     the possibility of long lines being truncated invisibly within
f     AST_GETLINE.

*  Applicability:
*     MocChan
*        All MocChans have this attribute.
*att--
*/
astMAKE_CLEAR(MocChan,MocLineLen,moclinelen,-INT_MAX)
astMAKE_GET(MocChan,MocLineLen,int,80,( ( this->moclinelen != -INT_MAX )?this->moclinelen : 80 ))
astMAKE_SET(MocChan,MocLineLen,int,moclinelen,(value<0?0:value))
astMAKE_TEST(MocChan,MocLineLen,( this->moclinelen != -INT_MAX ))


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
*     Dump function for MocChan objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the MocChan class to an output Channel.

*  Parameters:
*     this
*        Pointer to the Object (a MocChan) whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstMocChan *this;            /* Pointer to the MocChan structure */
   int ival;                     /* Integer value */
   int set;                      /* Attribute value set? */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the MocChan structure. */
   this = (AstMocChan *) this_object;

/* Write out values representing the instance variables for the
   MocChan class.  Accompany these with appropriate comment strings,
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

/* MocFormat. */
/* ------------ */
   set = TestMocFormat( this, status );
   ival = set ? GetMocFormat( this, status ) : astGetMocFormat( this );
   if( ival > UNKNOWN_FORMAT && ival <= MAX_FORMAT ) {
      astWriteString( channel, "MocEnc", set, 1, xencod[ival], "Format" );
   } else {
      astWriteString( channel, "MocEnc", set, 1, UNKNOWN_STRING, "Format" );
   }

/* MocLineLen */
/* --------- */
   set = TestMocLineLen( this, status );
   ival = set ? GetMocLineLen( this, status ) : astGetMocLineLen( this );
   astWriteInt( channel, "MocLLn", set, 0, ival, "Moc line length" );

}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAMocChan and astCheckMocChan functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(MocChan,Channel)
astMAKE_CHECK(MocChan)

AstMocChan *astMocChan_( const char *(* source)( void ),
                         void (* sink)( const char * ),
                         const char *options, int *status, ...) {
/*
*++
*  Name:
c     astMocChan
f     AST_MOCCHAN

*  Purpose:
*     Create a MocChan.

*  Type:
*     Public function.

*  Synopsis:
c     #include "mocchan.h"
c     AstMocChan *astMocChan( const char *(* source)( void ),
c                             void (* sink)( const char * ),
c                             const char *options, ... )
f     RESULT = AST_MOCCHAN( SOURCE, SINK, OPTIONS, STATUS )

*  Class Membership:
*     MocChan constructor.

*  Description:
*     This function creates a new MocChan and optionally initialises
*     its attributes.
*
*     A MocChan is a specialised form of Channel which supports the
*     reading and writing of AST Moc objects as text, using the
*     conventions of the JSON and string encodings described in
*     the IVOA's MOC recommendation, version 1.1. Writing a Moc
*     to a MocChan (using
c     astWrite) will, if the Moc is suitable, generate a
f     AST_WRITE) will, if the Moc is suitable, generate a
*     textual description of that Moc, and reading from a MocChan will
*     create a new Moc from its textual description. See the Moc class
*     for further information.
*
*     Normally, when you use a MocChan, you should provide "source"
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
*     Alternatively, a MocChan can be told to read or write from
*     specific text files using the SinkFile and SourceFile attributes,
*     in which case no sink or source function need be supplied.

*  Parameters:
c     source
f     SOURCE = SUBROUTINE (Given)
c        Pointer to a source function that takes no arguments and
c        returns a pointer to a null-terminated string.  If no value
c        has been set for the SourceFile attribute, this function
c        will be used by the MocChan to obtain lines of input text. On
c        each invocation, it should return a pointer to the next input
c        line read from some external data store, and a NULL pointer
c        when there are no more lines to read.
c
c        If "source" is NULL and no value has been set for the SourceFile
c        attribute, the MocChan will read from standard input instead.
f        A source routine, which is a subroutine which takes a single
f        integer error status argument.   If no value has been set
f        for the SourceFile attribute, this routine will be used by
f        the MocChan to obtain lines of input text. On each
f        invocation, it should read the next input line from some
f        external data store, and then return the resulting text to
f        the AST library by calling AST_PUTLINE. It should supply a
f        negative line length when there are no more lines to read.
f        If an error occurs, it should set its own error status
f        argument to an error value before returning.
f
f        If the null routine AST_NULL is suppied as the SOURCE value,
f        and no value has been set for the SourceFile attribute,
f        the MocChan will read from standard input instead.
c     sink
f     SINK = SUBROUTINE (Given)
c        Pointer to a sink function that takes a pointer to a
c        null-terminated string as an argument and returns void.
c        If no value has been set for the SinkFile attribute, this
c        function will be used by the MocChan to deliver lines of
c        output text. On each invocation, it should deliver the
c        contents of the string supplied to some external data store.
c
c        If "sink" is NULL, and no value has been set for the SinkFile
c        attribute, the MocChan will write to standard output instead.
f        A sink routine, which is a subroutine which takes a single
f        integer error status argument.  If no value has been set
f        for the SinkFile attribute, this routine will be used by
f        the MocChan to deliver lines of output text. On each
f        invocation, it should obtain the next output line from the
f        AST library by calling AST_GETLINE, and then deliver the
f        resulting text to some external data store.  If an error
f        occurs, it should set its own error status argument to an
f        error value before returning.
f
f        If the null routine AST_NULL is suppied as the SINK value,
f        and no value has been set for the SinkFile attribute,
f        the MocChan will write to standard output instead.
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new MocChan. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new MocChan. The syntax used is identical to that for the
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
c     astMocChan()
f     AST_MOCCHAN = INTEGER
*        A pointer to the new MocChan.

*  Notes:
f     - The names of the routines supplied for the SOURCE and SINK
f     arguments should appear in EXTERNAL statements in the Fortran
f     routine which invokes AST_MOCCHAN. However, this is not generally
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
   AstMocChan *new;             /* Pointer to new MocChan */
   va_list args;                 /* Variable argument list */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the MocChan, allocating memory and initialising the
   virtual function table as well if necessary. This interface is for
   use by other C functions within AST, and uses the standard "wrapper"
   functions included in this class. */
   new = astInitMocChan( NULL, sizeof( AstMocChan ), !class_init,
                         &class_vtab, "MocChan", source, SourceWrap,
                         sink, SinkWrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   MocChan's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new MocChan. */
   return new;
}

AstMocChan *astMocChanId_( const char *(* source)( void ),
                           void (* sink)( const char * ),
                           const char *options, ... ) {
/*
*  Name:
*     astMocChanId_

*  Purpose:
*     Create a MocChan.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mocchan.h"
*     AstMocChan *astMocChanId_( const char *(* source)( void ),
*                                void (* sink)( const char * ),
*                                const char *options, ... )

*  Class Membership:
*     MocChan constructor.

*  Description:
*     This function implements the external (public) C interface to the
*     astMocChan constructor function. Another function (astMocChanForId)
*     should be called to create a MocChan for use within other languages.
*     Both functions return an ID value (instead of a true C pointer) to
*     external users, and must be provided because astMocChan_ has a variable
*     argument list which cannot be encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable argument list also prevents this function from
*     invoking astMocChan_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astMocChan_.

*  Returned Value:
*     The ID value associated with the new MocChan.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstMocChan *new;              /* Pointer to new MocChan */
   va_list args;                 /* Variable argument list */

   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the MocChan, allocating memory and initialising the
   virtual function table as well if necessary. This interface is for
   use by external C functions and uses the standard "wrapper"
   functions included in this class. */
   new = astInitMocChan( NULL, sizeof( AstMocChan ), !class_init,
                         &class_vtab, "MocChan", source, SourceWrap,
                         sink, SinkWrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   MocChan's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new MocChan. */
   return astMakeId( new );
}

AstMocChan *astMocChanForId_( const char *(* source)( void ),
                              char *(* source_wrap)( const char *(*)( void ), int * ),
                              void (* sink)( const char * ),
                              void (* sink_wrap)( void (*)( const char * ),
                                                  const char *, int * ),
                              const char *options, ... ) {
/*
*+
*  Name:
*     astMocChanFor

*  Purpose:
*     Initialise a MocChan from a foreign language interface.

*  Type:
*     Public function.

*  Synopsis:
*     #include "mocchan.h"
*     AstMocChan *astMocChanFor( const char *(* source)( void ),
*                                char *(* source_wrap)( const char *(*)
*                                                       ( void ), int * ),
*                                void (* sink)( const char * ),
*                                void (* sink_wrap)( void (*)( const char * ),
*                                                    const char *, int * ),
*                                const char *options, ... )

*  Class Membership:
*     MocChan constructor.

*  Description:
*     This function creates a new MocChan from a foreign language
*     interface and optionally initialises its attributes.

*  Parameters:
*     source
*        Pointer to a "source" function which will be used to obtain
*        lines of input text. Generally, this will be obtained by
*        casting a pointer to a source function which is compatible
*        with the "source_wrap" wrapper function (below). The pointer
*        should later be cast back to its original type by the
*        "source_wrap" function before the function is invoked.
*
*        If "source" is NULL, the MocChan will read from standard
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
*        If "source_wrap" is NULL, the MocChan will read from standard
*        input instead.
*     sink
*        Pointer to a "sink" function which will be used to deliver
*        lines of output text. Generally, this will be obtained by
*        casting a pointer to a sink function which is compatible with
*        the "sink_wrap" wrapper function (below). The pointer should
*        later be cast back to its original type by the "sink_wrap"
*        function before the function is invoked.
*
*        If "sink" is NULL, the MocChan will write to standard output
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
*        initialising the new MocChan. The syntax used is identical to
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
*     astMocChanFor()
*        A pointer to the new MocChan.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
*     function is invoked with the global error status set, or if it
*     should fail for any reason.
*     - This function is only available through the public interface
*     to the MocChan class (not the protected interface) and is
*     intended solely for use in implementing foreign language
*     interfaces to this class.
*-

*  Implememtation Notes:
*     - This function behaves exactly like astMocChanId_, in that it
*     returns ID values and not true C pointers, but it has two
*     additional arguments. These are pointers to the "wrapper
*     functions" which are needed to accommodate foreign language
*     interfaces.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstMocChan *new;              /* Pointer to new MocChan */
   va_list args;                 /* Variable argument list */
   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialise the MocChan, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitMocChan( NULL, sizeof( AstMocChan ), !class_init,
                         &class_vtab, "MocChan", source, source_wrap,
                         sink, sink_wrap );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the
   options string to the astVSet method to initialise the new
   MocChan's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new MocChan. */
   return astMakeId( new );
}

AstMocChan *astInitMocChan_( void *mem, size_t size, int init,
                             AstMocChanVtab *vtab, const char *name,
                             const char *(* source)( void ),
                             char *(* source_wrap)( const char *(*)( void ), int * ),
                             void (* sink)( const char * ),
                             void (* sink_wrap)( void (*)( const char * ),
                                                 const char *, int * ), int *status ) {
/*
*+
*  Name:
*     astInitMocChan

*  Purpose:
*     Initialise a MocChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "mocchan.h"
*     AstMocChan *astInitMocChan( void *mem, size_t size, int init,
*                                 AstMocChanVtab *vtab, const char *name,
*                                 const char *(* source)( void ),
*                                 char *(* source_wrap)( const char *(*)( void ), int * ),
*                                 void (* sink)( const char * ),
*                                 void (* sink_wrap)( void (*)( const char * ),
*                                                   const char *, int * ) )

*  Class Membership:
*     MocChan initialiser.

*  Description:
*     This function is provided for use by class implementations to
*     initialise a new MocChan object. It allocates memory (if
*     necessary) to accommodate the MocChan plus any additional data
*     associated with the derived class.  It then initialises a
*     MocChan structure at the start of this memory. If the "init"
*     flag is set, it also initialises the contents of a virtual
*     function table for a MocChan at the start of the memory passed
*     via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the MocChan is to be
*        initialised.  This must be of sufficient size to accommodate
*        the MocChan data (sizeof(MocChan)) plus any data used by the
*        derived class. If a value of NULL is given, this function
*        will allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the MocChan (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the MocChan structure, so a valid value must be
*        supplied even if not required for allocating memory.
*     init
*        A boolean flag indicating if the MocChan's virtual function
*        table is to be initialised. If this value is non-zero, the
*        virtual function table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new MocChan.
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
*        If "sink" is NULL, the contents of the MocChan will not be
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
*     A pointer to the new MocChan.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstMocChan *new;              /* Pointer to new MocChan */

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitMocChanVtab( vtab, name );

/* Initialise a Channel structure (the parent class) as the first
   component within the MocChan structure, allocating memory if
   necessary. */
   new = (AstMocChan *) astInitChannel( mem, size, 0,
                                         (AstChannelVtab *) vtab, name,
                                         source, source_wrap, sink,
                                         sink_wrap );

   if ( astOK ) {

/* Initialise the MocChan data. */
/* ---------------------------- */
      new->mocformat = UNKNOWN_FORMAT;
      new->moclinelen = -INT_MAX;

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new object. */
   return new;
}

AstMocChan *astLoadMocChan_( void *mem, size_t size,
                             AstMocChanVtab *vtab, const char *name,
                             AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadMocChan

*  Purpose:
*     Load a MocChan.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "mocchan.h"
*     AstMocChan *astLoadMocChan( void *mem, size_t size,
*                                 AstMocChanVtab *vtab, const char *name,
*                                 AstChannel *channel )

*  Class Membership:
*     MocChan loader.

*  Description:
*     This function is provided to load a new MocChan using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     MocChan structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a MocChan at the start of the memory
*     passed via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory into which the MocChan is to be
*        loaded.  This must be of sufficient size to accommodate the
*        MocChan data (sizeof(MocChan)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the MocChan (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the MocChan structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstMocChan) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new MocChan. If this is NULL, a pointer
*        to the (static) virtual function table for the MocChan class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "MocChan" is used instead.

*  Returned Value:
*     A pointer to the new MocChan.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS           /* Pointer to thread-specific global data */
   AstMocChan *new;             /* Pointer to the new MocChan */
   char *text;                  /* Textual version of integer value */

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if( !astOK ) return new;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this MocChan. In this case the
   MocChan belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstMocChan );
      vtab = &class_vtab;
      name = "MocChan";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitMocChanVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built MocChan. */
   new = astLoadChannel( mem, size, (AstChannelVtab *) vtab, name,
                         channel );

   if ( astOK ) {

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "MocChan" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */

/* In the case of attributes, we first read the "raw" input value,
   supplying the "unset" value as the default. If a "set" value is
   obtained, we then use the appropriate (private) Set... member
   function to validate and set the value properly. */

/* MocFormat. */
/* ------------ */
      text = astReadString( channel, "mocenc", UNKNOWN_STRING );
      if( text && strcmp( text, UNKNOWN_STRING ) ) {
         new->mocformat = FindString( MAX_FORMAT + 1, xencod, text,
                                        "the MocChan component 'MocEnc'",
                                        "astRead", astGetClass( channel ),
                                        status );
      } else {
         new->mocformat = UNKNOWN_FORMAT;
      }
      if ( TestMocFormat( new, status ) ) SetMocFormat( new,
                                                    new->mocformat, status );
      text = astFree( text );

/* MocLineLen */
/* --------- */
      new->moclinelen = astReadInt( channel, "moclln", -INT_MAX );
   }

/* If an error occurred, clean up by deleting the new MocChan. */
   if ( !astOK ) new = astDelete( new );

/* Return the new MocChan pointer. */
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








