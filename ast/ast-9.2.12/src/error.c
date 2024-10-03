/*
*  Name:
*     error.c

*  Purpose:
*     Implement error handling functions.

*  Description:
*     This file implements the Error module which provides functions
*     for handling error conditions in the AST library.  Internally, AST
*     indicates an error has occurred by calling function astError. This
*     in turn delivers an apprioriate error message to the user by
*     calling a function, astPutErr. The default version of astPutErr
*     that comes with AST simply writes the message to standard output,
*     but astPutErr can be re-implemented if required to deliver the
*     message to some external underlying error system. The
*     re-implemented function can either be linked into your application
*     in place of the default version at build-time (see the options in
*     the ast_link script), or registered at run-time using function
*     astSetPutErr (defined within this module). See the file err_null.c
*     included in the AST source distribution for details of how to
*     re-implement astPutErr.
*
*     Since its initial release, AST has used a global status variable
*     rather than adding an explicit status parameter to the argument
*     list of each AST function. This caused problems for the thread-safe
*     version of AST since each thread needs its own status value. Whilst
*     it would have been possible for each function to access a global
*     status value via the pthreads "thread speific data key" mechanism,
*     the huge number of status checks performed within AST caused this
*     option to be slow. Instead AST has been modified so that every
*     function has an explicit status pointer parameter. This though
*     causes problems in that we cannot change the public interface to
*     AST because doing so would break large amounts of external software.
*     To get round this, the macros that define the public interface to
*     AST have been modified so that they provide a status pointer
*     automatically to the function that is being invoked. This is how
*     the system works...
*
*     All AST functions have an integer inherited status pointer parameter
*     called "status". This parameter is "hidden" in AST functions that
*     are invoked via macros (typically public and protected functions).
*     This means that whilst "int *status" appears explicitly at the end
*     of the function argument list (in both prototype and definition), it
*     is not included in the prologue documentation, and is not included
*     explicitly in the argument list when invoking the function. Instead,
*     the macro that is used to invoke the function adds in the required
*     status parameter to the function invocation.
*
*     Macros which are invoked within AST (the protected interface) expand
*     to include ", status" at the end of the function parameter list. For
*     backward compatability with previous versions of AST, macros which
*     are invoked from outside AST (the public interface) expand to include
*     ", astGetStatusPtr" at the end of the function parameter list. The
*     astGetStatusPtr function returns a pointer to the interbal AST
*     status variable or to the external variable specified via astWatch.
*
*     Parameter lists for functions that have variable argument lists
*     (such as astError) cannot be handled in this way, since macros cannot
*     have variable numbers of arguments. Instead, separate public and
*     protected implementations of such functions are provided within AST.
*     Protected implementations include an explicit, documented status
*     pointer parameter that must be given explicitly when invoking the
*     function. Public implementations do not have a status pointer
*     parameter. Instead they obtain the status pointer internally using
*     astGetStatusPtr.
*
*     Private functions are called directly rather than via macros, and so
*     they have a documented status pointer parameter that should be
*     included explicitly in the parameter list when invoking the
*     function.

*  Copyright:
*     Copyright (C) 2017 East Asian Observatory.
*     Copyright (C) 1997-2006 Council for the Central Laboratory of the
*     Research Councils
*     Copyright (C) 2008-2009 Science & Technology Facilities Council.
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
*     RFWS: R.F. Warren-Smith (Starlink)
*     DSB: David S. Berry (Starlink)

*  History:
*     2-JAN-1996 (RFWS):
*        Original version.
*     8-JAN-1996 (RFWS):
*        Tidied up.
*     26-JAN-1996 (RFWS):
*        Incorporated changes to prologue style.
*     14-JUN-1996 (RFWS):
*        Added astAt.
*     20-JUN-1996 (RFWS):
*        Added astSetStatus.
*     15-JUL-1996 (RFWS):
*        Sorted out the public interface.
*     16-JUL-1996 (RFWS):
*        Added astWatch.
*     18-MAR-1998 (RFWS):
*        Added notes about functions being available for writing
*        foreign language and graphics interfaces, etc.
*     27-NOV-2002 (DSB):
*        Added suppression of error reporting using astReporting.
*     11-MAR-2004 (DSB):
*        Add facility to astAt to allow astAt to be called from public
*        interface without private interface settings over-riding the
*        public interface settings.
*     30-MAR-2005 (DSB):
*        Added facility to report deferred messages when reporting is
*        switched back on.
*     16-FEB-2006 (DSB):
*        Improve efficiency by replacing the astOK_ function with a macro
*        which tests the value of status variable. The pointer which points
*        to the AST status variable are now global rather than static.
*     19-SEP-2008 (DSB):
*        Big changes for the thread-safe version of AST.
*     3-FEB-2009 (DSB):
*        Added astBacktrace.
*     28-FEB-2017 (DSB):
*        Added facility for specifying the error handling function,
*        astPutErr, at run-time via new function astSetPutErr, rather
*        than at link-time.
*     17-OCT-2017 (DSB):
*        Added astGetAt.
*/

/* Define the astCLASS macro (even although this is not a class
   implementation) to obtain access to protected interfaces. */
#define astCLASS

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "err.h"                 /* Interface to the err module */
#include "error.h"               /* Interface to this module */
#include "globals.h"             /* Thread-safe global data access */

/* C header files. */
/* --------------- */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Configuration results. */
/* ---------------------- */
#if HAVE_CONFIG_H
#include <config.h>
#endif

/* Select the appropriate memory management functions. These will be the
   system's malloc, free and realloc unless AST was configured with the
   "--with-starmem" option, in which case they will be the starmem
   malloc, free and realloc. */
#ifdef HAVE_STAR_MEM_H
#  include <star/mem.h>
#  define MALLOC starMalloc
#  define FREE starFree
#  define REALLOC starRealloc
#else
#  define MALLOC malloc
#  define FREE free
#  define REALLOC realloc
#endif

/* Include execinfo.h if the backtrace function is available */
#if HAVE_EXECINFO_H
#include <execinfo.h>
#endif



/* Module Variables. */
/* ================= */

/* Define macros for accessing all items of thread-safe global data
   used by this module. */
#ifdef THREAD_SAFE

#define reporting astGLOBAL(Error,Reporting)
#define current_file astGLOBAL(Error,Current_File)
#define puterr astGLOBAL(Error,PutErr)
#define puterr_wrapper astGLOBAL(Error,PutErr_Wrapper)
#define current_routine astGLOBAL(Error,Current_Routine)
#define current_line astGLOBAL(Error,Current_Line)
#define foreign_set astGLOBAL(Error,Foreign_Set)
#define message_stack astGLOBAL(Error,Message_Stack)
#define mstack_size astGLOBAL(Error,Mstack_Size)

/* Since the external astPutErr function may not be thread safe, we need
   to ensure that it cannot be invoked simultaneously from two different
   threads. So we lock a mutex before each call to astPutErr. */
static pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
#define LOCK_MUTEX1 pthread_mutex_lock( &mutex1 )
#define UNLOCK_MUTEX1 pthread_mutex_unlock( &mutex1 )

/* Define the initial values for the global data for this module. */
#define GLOBAL_inits \
   globals->Reporting = 1; \
   globals->PutErr = NULL;  \
   globals->PutErr_Wrapper = NULL;  \
   globals->Current_File = NULL;  \
   globals->Current_Routine = NULL;  \
   globals->Current_Line = 0; \
   globals->Foreign_Set = 0; \
   globals->Mstack_Size = 0; \

/* Create the global initialisation function. */
astMAKE_INITGLOBALS(Error)


/* If thread safety is not needed, declare globals at static variables. */
/* -------------------------------------------------------------------- */
#else

/* Status variable. */
static int internal_status = 0;  /* Internal error status */
int *starlink_ast_status_ptr = &internal_status; /* Pointer to status variable */

/* Reporting flag: delivery of message is supressed if zero. */
static int reporting = 1;

/* Error context. */
static const char *current_file = NULL; /* Current file name pointer */
static const char *current_routine = NULL; /* Current routine name pointer */
static int current_line = 0;     /* Current line number */
static int foreign_set = 0;      /* Have foreign values been set? */

/* Function pointers */
static AstPutErrFun puterr = NULL;      /* Pointer to registered error handler */
static AstPutErrFunWrapper puterr_wrapper = NULL;  /* Pointer to
                                                      PutError wrapper */

/* Un-reported message stack */
static char *message_stack[ AST__ERROR_MSTACK_SIZE ];
static int mstack_size = 0;

#define LOCK_MUTEX1
#define UNLOCK_MUTEX1

#endif


/* Function prototypes. */
/* ==================== */
static void PutErr( int, const char * );
static void CPutErrWrapper( AstPutErrFun, int, const char * );
static void EmptyStack( int, int * );

/* Function implementations. */
/* ========================= */
void astAt_( const char *routine, const char *file, int line, int forn,
             int *status) {
/*
*+
*  Name:
*     astAt

*  Purpose:
*     Store a routine, file and line number context in case of error.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     void astAt( const char *routine, const char *file, int line, int forn)

*  Description:
*     This function stores a pointer to two strings containing the
*     names of a routine and a file, together with an integer line
*     number. These values are retained for subsequent use in
*     reporting the context of any error that may arise.

*  Parameters:
*     routine
*        Pointer to a null terminated C string containing a routine
*        name (which should reside in static memory).
*     file
*        Pointer to a null terminated C string containing a file name
*        (which should reside in static memory).
*     line
*        The line number in the file.
*     for
*        Is this call being made from a foreign language interface?
*        If so any values supplied will take precedence of the values
*        set by the C interface.

*  Notes:
*     - This function returns without action (i.e. without changing
*     the stored values) if the global error status is set. It
*     performs no other error checking.
*     - Any (or all) of the arguments may be omitted by supplying a
*     NULL or zero value (as appropriate) and will then not be included
*     in any error report.
*     - This function is documented as protected because it should not
*     be invoked by external code. However, it is available via the
*     external C interface so that it may be used when writing (e.g.)
*     foreign language or graphics interfaces.
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS             /* Pointer to thread-specific global data */

/* Check the global error status. */
   if ( !astOK ) return;

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* If the values refer to a foreign interface, or if no foreign values
   have yet been set, store the supplied values. */
   if( forn|| !foreign_set ) {
      current_routine = routine;
      current_file = file;
      current_line = line;
   }

/* If the values relate to a foreign interface, set a flag which prevents
   local values set later replacing them. */
   foreign_set = forn;
}

void astBacktrace_( int *status ) {
/*
c+
*  Name:
*     astBacktrace

*  Purpose:
*     Display a backtrace on standard output.

*  Type:
*     Protected macro.

*  Synopsis:
*     #include "error.h"
*     astBacktrace;

*  Description:
*     This macro displays a set of messages on standard output that
*     give a backtrace of the caller. It can be useful for debugging AST
*     code in situations when it is not easy or possible to use a
*     debugger (for instance, when debugging JNIAST).

*  Notes:
*     - Only non-static function names are included in the backtrace.
*     - This function requires the GNU C library. When called, it will
*     just issue a warning if the GNU 'backtrace' function was not
*     available when AST was configured.
c-
*/
#if HAVE_BACKTRACE

#define MAX_ADDR 100

/* Local Variables: */
   char **strings;           /* Pointer to array of formated strings */
   char buf[ 120 ];          /* Output line buffer */
   int j;                    /* String index */
   int np;                   /* Number of used return addresses */
   void *buffer[ MAX_ADDR ]; /* Array of return addresses */

/* Get the array of return addresses. */
   np = backtrace( buffer, MAX_ADDR );

/* Convert them into strings. */
   strings = backtrace_symbols( buffer, np );

/* If succesful, display them and then free the array. Note we skip the
   first one since that will refer to this function. */
   if( strings ) {
      PutErr( astStatus, " " );
      for( j = 1; j < np; j++ ) {
         sprintf( buf, "%d: %s", j, strings[j] );
         PutErr( astStatus, buf );
      }
      free( strings );
      PutErr( astStatus, " " );

/* If not succesful, issue a warning. */
   } else {
      PutErr( astStatus, "Cannot convert backtrace addresses into formatted strings" );
   }

#else
   PutErr( astStatus, "Backtrace functionality is not available "
                     "on the current operating system." );
#endif
}

void astClearStatus_( int *status ) {
/*
c++
*  Name:
*     astClearStatus

*  Purpose:
*     Clear the AST error status.

*  Type:
*     Public macro.

*  Synopsis:
*     #include "error.h"
*     void astClearStatus

*  Description:
*     This macro resets the AST error status to an OK value,
*     indicating that an error condition (if any) has been cleared.

*  Notes:
*     - If the AST error status is set to an error value (after an
*     error), most AST functions will not execute and will simply
*     return without action. Using astClearStatus will restore normal
*     behaviour.
c--
*/

/* Empty the deferred error stack without displaying the messages on the
   stack. */
   EmptyStack( 0, status );

/* Reset the error status value. */
   *status = 0;
}

static void EmptyStack( int display, int *status ) {
/*
*  Name:
*     EmptyStack

*  Purpose:
*     Empty the stack of deferred error messages, optionally displaying
*     them.

*  Type:
*     Private function.

*  Synopsis:
*     #include "error.h"
*     void EmptyStack( int display, int *status )

*  Description:
*     This function removes all messages from the stack of deferred error
*     messages. If "display" is non-zero it reports them using astPutErr
*     before deleting them.

*  Parameters:
*     display
*        Report messages before deleting them?
*     status
*        Pointer to the integer holding the inherited status value.

*/

/* Local variables; */
   astDECLARE_GLOBALS         /* Pointer to thread-specific global data */
   int i;

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Loop round all messages on the stack. */
   for( i = 0; i < mstack_size; i++ ) {

/* Display the message if required. */
      if( display ) PutErr( astStatus, message_stack[ i ] );

/* Free the memory used to hold the message. */
      FREE( message_stack[ i ] );
      message_stack[ i ] = NULL;
   }

/* Reset the stack size to zero. */
   mstack_size = 0;

}

void astErrorPublic_( int status_value, const char *fmt, ... ) {
/*
*+
*  Name:
*     astError

*  Purpose:
*     Set the AST error status and report an error message.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     void astError( int status_value, const char *fmt, ... )

*  Description:
*     This function sets the AST error status to a specified value and
*     reports an associated error message.

*  Parameters:
*     status_value
*        The new error status value to be set.
*     fmt
*        Pointer to a null-terminated character string containing the
*        format specification for the error message, in the same way
*        as for a call to the C "printf" family of functions.
*     ...
*        Additional optional arguments (as used by e.g. "printf")
*        which specify values which are to appear in the error
*        message.

*  Notes:
*     This function operates just like "printf", except that:
*     - The first argument is an error status.
*     - The return value is void.
*     - A newline is automatically appended to the error message
*     (there is no need to add one).
*     - This function is documented as protected because it should not
*     be invoked by external code. However, it is available via the
*     external C interface so that it may be used when writing (e.g.)
*     foreign language or graphics interfaces.
*-

*  This is the public implementation of astError. It does not have an
   status pointer parameter, but instead obtains the status pointer
   explicitly using the astGetStatusPtr function.  This is different to
   other public functions, which typically have a status pointer parameter
   that is supplied via a call to astGetStatusPtr within the associated
   interface macro. The benefit of doing it the usual way is that the
   public and protected implementations are the same, with the
   differences between public and protecte dinterfaces wrapped up in the
   associated interface macro. We cannot do this with this function
   because of the variale argument list. The prologue for the astError_
   function defines the interface for use internally within AST.

*/

/* Local Constants: */
#define BUFF_LEN 1023            /* Max. length of an error message */

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   char buff[ BUFF_LEN + 1 ];    /* Message buffer */
   int *status;                  /* Pointer to inherited status value */
   int imess;                    /* Index into deferred message stack */
   int nc;                       /* Number of characters written */
   va_list args;                 /* Variable argument list pointer */

/* Initialise the variable argument list pointer. */
   va_start( args, fmt );

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Get a pointer to the integer holding the inherited status value. */
   status = astGetStatusPtr;

/* If this is the first report of an error (the global status has not
   previously been set) and error context information is available,
   then construct an error context message. */
   if ( astOK &&
        ( current_routine || current_file || current_line ) ) {
      nc = sprintf( buff, "AST: Error" );
      if ( current_routine ) {
         nc += sprintf( buff + nc, " in routine %s", current_routine );
      }
      if ( current_line ) {
         nc += sprintf( buff + nc, " at line %d", current_line );
      }
      if ( current_file ) {
         nc += sprintf( buff + nc, " in file %s", current_file );
      }
      nc += sprintf( buff + nc, "." );

/* Deliver the error message unless reporting has been switched off using
   astReporting. In which case store them in a static array. */
      if( reporting ) {
         PutErr( status_value, buff );
      } else if( mstack_size < AST__ERROR_MSTACK_SIZE ){
         imess = mstack_size++;
         message_stack[ imess ] = MALLOC( strlen( buff ) + 1 );
         if( message_stack[ imess ] ) {
            strcpy( message_stack[ imess ], buff );
         }
      }

/* Set the global status. */
      astSetStatus( status_value );
   }

/* Write the error message supplied to the formatting buffer. */
   nc = vsprintf( buff, fmt, args );

/* Tidy up the argument pointer. */
   va_end( args );

/* Deliver the error message unless reporting has been switched off using
   astReporting. */
   if( reporting ) {
      PutErr( status_value, buff );
   } else if( mstack_size < AST__ERROR_MSTACK_SIZE ){
      imess = mstack_size++;
      message_stack[ imess ] = MALLOC( strlen( buff ) + 1 );
      if( message_stack[ imess ] ) {
         strcpy( message_stack[ imess ], buff );
      }
   }

/* Set the error status value. */
   astSetStatus( status_value );

/* Undefine macros local to this function. */
#undef BUFF_LEN
}

void astError_( int status_value, const char *fmt, int *status, ... ) {
/*
*+
*  Name:
*     astError

*  Purpose:
*     Set the AST error status and report an error message.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     void astError( int status_value, const char *fmt, int *status, ... )

*  Description:
*     This function sets the AST error status to a specified value and
*     reports an associated error message.

*  Parameters:
*     status_value
*        The error status value to be set.
*     fmt
*        Pointer to a null-terminated character string containing the
*        format specification for the error message, in the same way
*        as for a call to the C "printf" family of functions.
*     status
*        Pointer to the integer holding the inherited status value.
*     ...
*        Additional optional arguments (as used by e.g. "printf")
*        which specify values which are to appear in the error
*        message.

*  Notes:
*     This function operates just like "printf", except that:
*     - The first argument is an error status.
*     - The return value is void.
*     - A newline is automatically appended to the error message
*     (there is no need to add one).
*     - This function is documented as protected because it should not
*     be invoked by external code. However, it is available via the
*     external C interface so that it may be used when writing (e.g.)
*     foreign language or graphics interfaces.
*-

*  This is the protected implementation of astError. It has a status
   pointer parameter that is not present in the public form. Different
   implementations for protected and public interfaces are required
   because of the variable argument list.

*/

/* Local Constants: */
#define BUFF_LEN 1023            /* Max. length of an error message */

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   char buff[ BUFF_LEN + 1 ];    /* Message buffer */
   int imess;                    /* Index into deferred message stack */
   int nc;                       /* Number of characters written */
   va_list args;                 /* Variable argument list pointer */

/* Initialise the variable argument list pointer. */
   va_start( args, status );

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* If this is the first report of an error (the global status has not
   previously been set) and error context information is available,
   then construct an error context message. */
   if ( astOK &&
        ( current_routine || current_file || current_line ) ) {
      nc = sprintf( buff, "AST: Error" );
      if ( current_routine ) {
         nc += sprintf( buff + nc, " in routine %s", current_routine );
      }
      if ( current_line ) {
         nc += sprintf( buff + nc, " at line %d", current_line );
      }
      if ( current_file ) {
         nc += sprintf( buff + nc, " in file %s", current_file );
      }
      nc += sprintf( buff + nc, "." );

/* Deliver the error message unless reporting has been switched off using
   astReporting. In which case store them in a static array. */
      if( reporting ) {
         PutErr( status_value, buff );
      } else if( mstack_size < AST__ERROR_MSTACK_SIZE ){
         imess = mstack_size++;
         message_stack[ imess ] = MALLOC( strlen( buff ) + 1 );
         if( message_stack[ imess ] ) {
            strcpy( message_stack[ imess ], buff );
         }
      }

/* Set the global status. */
      astSetStatus( status_value );
   }

/* Write the error message supplied to the formatting buffer. */
   nc = vsprintf( buff, fmt, args );

/* Tidy up the argument pointer. */
   va_end( args );

/* Deliver the error message unless reporting has been switched off using
   astReporting. */
   if( reporting ) {
      PutErr( status_value, buff );
   } else if( mstack_size < AST__ERROR_MSTACK_SIZE ){
      imess = mstack_size++;
      message_stack[ imess ] = MALLOC( strlen( buff ) + 1 );
      if( message_stack[ imess ] ) {
         strcpy( message_stack[ imess ], buff );
      }
   }

/* Set the error status value. */
   astSetStatus( status_value );

/* Undefine macros local to this function. */
#undef BUFF_LEN
}

void astGetAt_( const char **routine, const char **file, int *line ){
/*
*+
*  Name:
*     astGetAt

*  Purpose:
*     Return the current routine, file and line number context.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     void astGetAt( const char **routine, const char **file, int *line )

*  Description:
*     This function returns pointers to two strings containing the
*     names of a routine and a file, together with an integer line
*     number. These values will have been stored previously by calling
*     function astAt. Null values are returned if astAt has not been
*     called.

*  Parameters:
*     routine
*        Address of a pointer to a null terminated C string containing
*        a routine name (the string will reside in static memory). The
*        pointer will be set to NULL on exit if no routine name has been
*        specified usiung astAt.
*     file
*        Address of a pointer to a null terminated C string containing
*        a file name (the string will reside in static memory). The
*        pointer will be set to NULL on exit if no file name has been
*        specified usiung astAt.
*     line
*        Address of an int in which to stopre the line number in the file.
*        A line number of zero is returned if no line number has been
*        stored using astAt.

*  Notes:
*     - This function attempts to execute even if the global error status
*     is set.
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS             /* Pointer to thread-specific global data */

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Return the stored values */
   *routine = current_routine;
   *file = current_file;
   *line = current_line;
}

int *astGetStatusPtr_(){
/*
*+
*  Name:
*     astGetStatusPtr

*  Purpose:
*     Return a pointer to the integer holding the inherited status value.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     int *astGetStatusPtr;

*  Description:
*     This macro returns a pointer to the integer holding the inherited
*     status pointer. This will either be an internal global integer
*     (possibly stored as thread specific data), or an ineger specified
*     via the astWatch function.

*  Returned Value:
*      A pointer to the integer holding the inherited status value.

*-
*/

/* The thread-safe version of AST stores the status pointer in thread
   specific data, using the key stored in the global variable
   "starlink_ast_status_key". */
#if defined(THREAD_SAFE)
   astDECLARE_GLOBALS
   AstStatusBlock *sb;

   astGET_GLOBALS(NULL);
   sb = (AstStatusBlock *) pthread_getspecific(starlink_ast_status_key);
   return sb->status_ptr;

/* The non thread-safe version of AST stores the status pointer in the
   global variable "starlink_ast_status_ptr". */
#else
   return starlink_ast_status_ptr;
#endif
}

static void CPutErrWrapper( AstPutErrFun fun, int status_value,
                            const char *message ) {
/*
*
*  Name:
*     CPutErrWrapper

*  Purpose:
*     A wrapper to call a astPutErr error handling function written in C.

*  Type:
*     Private function.

*  Synopsis:
*     #include "error.h"
*     void CPutErrWrapper( AstPutErrFun fun, int status_value,
*                          const char *message )

*  Description:
*     This function calls the supplied astPutErr function to deliver
*     an error message, assuming the supplied function is written in C.

*  Parameters:
*     fun
*        Pointer to the user-supplied astPutErr function. It is called
*        using C calling conventions
*     status_value
*        The error status value.
*     message
*        A pointer to a null-terminated character string containing
*        the error message to be delivered. This should not contain
*        newline characters.

*/

/* Local Variables: */
   astDECLARE_GLOBALS   /* Pointer to thread-specific global data */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Since we are about to call an external function which may not be
   thread safe, prevent any other thread from executing the following code
   until the current thread has finished executing it. */
   LOCK_MUTEX1;

/* Invoke the astPutErr function registered using astSetPutErr. */
   if( fun ) ( *fun )( status_value, message );

/* Allow the next thread to proceed. */
   UNLOCK_MUTEX1;
}

static void PutErr( int status_value, const char *message ) {
/*
*
*  Name:
*     PutErr

*  Purpose:
*     Call the astPutErr error handling function.

*  Type:
*     Private function.

*  Synopsis:
*     #include "error.h"
*     void PutErr( int status_value, const char *message )

*  Description:
*     This function calls the astPutErr function to deliver an error
*     message, either calling the version registered using astSetPutErr,
*     or the version in the linked error module. The linked version
*     is used if no function has been registered for PutErr using
*     astSetPutErr.

*  Parameters:
*     status_value
*        The error status value.
*     message
*        A pointer to a null-terminated character string containing
*        the error message to be delivered. This should not contain
*        newline characters.

*/

/* Local Variables: */
   astDECLARE_GLOBALS   /* Pointer to thread-specific global data */
   int old_status;      /* Old status value */
   int *status;         /* Pointer to status value */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Use the astPutErr function registered using astSetPutErr (so long as a
   function has been supplied). This is called via a wrapper which adapts
   the interface to suit the language in which the function is written. */
   if( puterr && puterr_wrapper ) {

/* We need to ensure the AST status is cleared before invoking the
   external error handler, as it may use AST memory management functions,
   will return without action if the AST status is non-zero. Remember the
   current status value so that it can be re-instated afterwards. */
      status = astGetStatusPtr;
      old_status = *status;
      *status = 0;

      ( *puterr_wrapper )( puterr, status_value, message );

      *status = old_status;

/* Otherwise, use the function in the external error module, selected at
   link-time using ast_link options.*/
   } else {
      astPutErr(  status_value, message );
   }
}


/*
c++
*  Name:
*     astOK

*  Purpose:
*     Test whether AST functions have been successful.

*  Type:
*     Public macro.

*  Synopsis:
*     #include "error.h"
*     int astOK

*  Description:
*     This macro returns a boolean value (0 or 1) to indicate if
*     preceding AST functions have completed successfully
*     (i.e. without setting the AST error status). If the error status
*     is set to an error value, a value of zero is returned, otherwise
*     the result is one.

*  Returned Value:
*     astOK
*        One if the AST error status is OK, otherwise zero.

*  Notes:
*     - If the AST error status is set to an error value (after an
*     error), most AST functions will not execute and will simply
*     return without action. To clear the error status and restore
*     normal behaviour, use astClearStatus.
c--
*/


int astReporting_( int report, int *status ) {
/*
c+
*  Name:
*     astReporting

*  Purpose:
*     Controls the reporting of error messages.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "error.h"
*     int astReporting( int report )

*  Description:
*     Error messages supplied to astError will only be delivered to the
*     underlying error system if the "Reporting" flag is set to a
*     non-zero value. Setting this flag to zero suppresses the reporting
*     of error messages (the value of the AST error status however is
*     unaffected). Instead, the reports are saved in an internal message
*     stack. When reporting is switched back on again, any messages on this
*     stack of deferred messages will be reported (and the stack emptied)
*     if the AST error status is not astOK. Also the stack is emptied each
*     time astClearStatus is called (the stacked messages are not displayed
*     in this case).

*  Parameters:
*     report
*        The new value for the Reporting flag.

*  Returned Value:
*     The original value of the Reporting flag.

*  Notes:
*     - The Reporting flag is initially set to 1.
c-
*/

/* Local Variables: */
   astDECLARE_GLOBALS         /* Pointer to thread-specific global data */
   int oldval;                /* Original "reporting" value */

/* If needed, get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Save the original reporting value, and then store the new value. */
   oldval = reporting;
   reporting = report;

/* If we are now reporting errors, flush any messages on the error stack.
   This causes the messages to be displayed and the stack emptied. */
   if( reporting ) EmptyStack( 1, status );

/* Return the original reporting value. */
   return oldval;
}

void astSetPutErr_( AstPutErrFun fun, int *status ){
/*
*++
*  Name:
c     astSetPutErr
f     AST_SETPUTERR

*  Purpose:
c     Register an error handling function for use by the AST error model
f     Register an error handling routine for use by the AST error model

*  Type:
*     Public function.

*  Synopsis:
c     #include "error.h"
c     void astSetPutErr( void (*fun)(int,const char*) )
f     CALL AST_GRFSET( FUN, STATUS )

*  Description:
*     This function can be used to register an external function to be
*     used to deliver an error message and (optionally) an accompanying
*     status value to the user.
*
*     If this function is not called prior to the first error occuring
*     within AST, then the external error handling function selected at
*     link-time (using the ast_link command) will be used. To use an
*     alternative error handler, call this function before using any other
*     AST functions, specifying the external error handling function to be
*     used. This will register the function for future use.

*  Parameters:
c     fun
f     FUN = INTEGER FUNCTION (Given)
c        A Pointer to the function to be used to handle errors. The interface
c        for this function is described below.
f        The name of the routine to be used to handle errors (the name
f        should also appear in a Fortran EXTERNAL statement in the
f        routine which invokes AST_SETPUTERR).
c        Once a function has been provided, a NULL pointer can be supplied
c        in a subsequent call to astSetPutErr to reset the function to the
c        corresponding function selected at link-time.
f        Once a routine has been provided, the "null" routine AST_NULL can
f        be supplied in a subsequent call to astSetPutErr to reset the routine
f        to the corresponding routine selected at link-time. AST_NULL is
f        defined in the AST_PAR include file.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Function Interface:
*     The supplied external function should deliver the supplied error message
*     and (optionally) the supplied status value to the user or to some
*     underlying error system. It requires the following interface:
*
c     void PutErr( int status_value, const char *message )
f     SUBROUTINE PUTERR( STATUS_VALUE, MESSAGE )
*
c     - status_value -
f     - STATUS_VALUE = INTEGER (Given) -
*       The error status value.
c     - message - Pointer to a null-terminated character string  containing
c       the error message to be delivered.
f     - MESSAGE = CHARACTER * ( * ) (Given) - The error message to be delivered.

*--
*/

/* Local Variables: */
   astDECLARE_GLOBALS         /* Pointer to thread-specific global data */

/* Ensure that the thread-specific status block has been created and
   initialised. */
   astGET_GLOBALS(NULL);

/* Check the global error status. */
   if ( !astOK ) return;

/* Store the pointer. */
   puterr = fun;

/* In general, the interface to the PutErr function will differ for
   different languages. So we need a wrapper function with a known fixed
   interface which can be used to invoke the actual function with
   an interface suited to the language in use. Call astPutErrWrapper to
   store a wrapper to a suitable function which can invoke the supplied
   function. Here, we assume that the supplied function has a C interface,
   so we set up a C wrapper. If this function is being called from another
   language, then the interface for this function within that language
   should set up an appropriate wrapper after calling this function, thus
   over-riding the C wrapper set up here. */
   astSetPutErrWrapper( CPutErrWrapper );
}

void astSetPutErrWrapper_( AstPutErrFunWrapper wrapper, int *status ){
/*
*+
*  Name:
*     astSetPutErrWrapper

*  Purpose:
*     Register a wrapper for the error handling function.

*  Type:
*     Public function.

*  Synopsis:
*     #include "error.h"
*     void astSetPutErrWrapper( AstPutErrFunWrapper wrapper )

*  Description:
*     This function must be used to register a wrapper for the external
*     function to be used to deliver an error message and (optionally)
*     an accompanying status value to the user.

*  Parameters:
*     wrapper
*        A pointer to the wrapper function to be used to handle errors.

*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS         /* Pointer to thread-specific global data */

/* Ensure that the thread-specific status block has been created and
   initialised. */
   astGET_GLOBALS(NULL);

/* Check the global error status. */
   if ( !astOK ) return;

/* Store the pointer. */
   puterr_wrapper = wrapper;
}

/*
c++
*  Name:
*     astSetStatus

*  Purpose:
*     Set the AST error status to an explicit value.

*  Type:
*     Public function.

*  Synopsis:
*     #include "error.h"
*     void astSetStatus( int status_value )

*  Description:
*     This function sets the AST error status to the value supplied.
*     It does not cause any error message to be produced and should
*     not be used as part of normal error reporting. Its purpose is
*     simply to communicate to AST that an error has occurred in some
*     other item of software.
*
*     For example, a source or sink function supplied as an argument
*     to astChannel or astFitsChan might use this to signal that an
*     input/output error has occurred. AST could then respond by
*     terminating the current read or write operation.

*  Parameters:
*     status_value
*        The new error status value to be set.

*  Notes:
*     - If the AST error status is set to an error value, most AST
*     functions will not execute and will simply return without
*     action. To clear the error status and restore normal behaviour,
*     use astClearStatus.
c--
*/

/*
c++
*  Name:
*     astStatus

*  Purpose:
*     Obtain the current AST error status value.

*  Type:
*     Public function.

*  Synopsis:
*     #include "error.h"
*     int astStatus

*  Description:
*     This function returns the current value of the AST error status.

*  Returned Value:
*     astStatus
*        The AST error status value.

*  Notes:
*     - If the AST error status is set to an error value (after an
*     error), most AST functions will not execute and will simply
*     return without action. To clear the error status and restore
*     normal behaviour, use astClearStatus.
c--
*/

int *astWatch_( int *status_ptr ) {
/*
c++
*  Name:
*     astWatch

*  Purpose:
*     Identify a new error status variable for the AST library.

*  Type:
*     Public function.

*  Synopsis:
*     #include "error.h"
*     int *astWatch( int *status_ptr )

*  Description:
*     This function allows a new error status variable to be accessed
*     by the AST library when checking for and reporting error
*     conditions.
*
*     By default, the library uses an internal integer error status
*     which is set to an error value if an error occurs. Use of
*     astWatch allows the internal error status to be replaced by an
*     integer variable of your choosing, so that the AST library can
*     share its error status directly with other code which uses the
*     same error detection convention.
*
*     If an alternative error status variable is supplied, it is used
*     by all related AST functions and macros (e.g. astOK, astStatus
*     and astClearStatus).

*  Parameters:
*     status_ptr
*        Pointer to an int whose value is to be used subsequently as
*        the AST inherited status value. If a NULL pointer is supplied,
*        the AST library will revert to using its own internal error status.

*  Returned Value:
*     astWatch()
*        Address of the previous error status variable. This may later
*        be passed back to astWatch to restore the previous behaviour
*        of the library. (Note that on the first invocation of
*        astWatch the returned value will be the address of the
*        internal error status variable.)

*  Notes:
*     - This function is not available in the FORTRAN 77 interface to
*     the AST library.
c--
*/

/* Local Variables: */
   int *result;               /* Value to be returned */
   astDECLARE_GLOBALS         /* Pointer to thread-specific global data */

#if defined(THREAD_SAFE)
       AstStatusBlock *sb = NULL;
#endif

/* Ensure that the thread-specific status block has been created and
   ininitialised. */
   astGET_GLOBALS(NULL);

#if defined(THREAD_SAFE)
   sb = (AstStatusBlock *) pthread_getspecific( starlink_ast_status_key );
   result = sb->status_ptr;
   sb->status_ptr = status_ptr ? status_ptr : &(sb->internal_status);
#else
   result = starlink_ast_status_ptr;
   starlink_ast_status_ptr = status_ptr ? status_ptr : &internal_status;
#endif

/* Return the old address. */
   return result;
}



