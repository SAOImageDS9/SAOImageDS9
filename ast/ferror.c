/*
*+
*  Name:
*     ferror.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST Error module.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the Error module.

*  Routines Defined:
*     None.

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
*     RFWS: R.F. Warren-Smith (Starlink)

*  History:
*     15-JUL-1996 (RFWS):
*        Original version.
*/

/* Define the astFORTRAN77 macro which prevents error messages from
   AST C functions from reporting the file and line number where the
   error occurred (since these would refer to this file, they would
   not be useful). */
#define astFORTRAN77

#define MXSTRLEN 80              /* String length at which truncation starts
                                    within astPutErr */
/* Header files. */
/* ============= */
#include "f77.h"                 /* FORTRAN <-> C interface macros (SUN/209) */
#include "error.h"               /* C interface to the Error module */
#include "c2f77.h"               /* F77 <-> C support functions/macros */


/* Prototypes for external functions. */
/* ================================== */
/* This is the null function defined by the FORTRAN interface in
fobject.c. */
F77_SUBROUTINE(ast_null)( void );

static void FPutErrWrapper( AstPutErrFun, int, const char * );


/* Wrapper functions */
/* ================= */
F77_SUBROUTINE(ast_setputerr)( AstPutErrFun FUN, INTEGER(STATUS) ) {
   AstPutErrFun fun;
   const char *class;      /* Object class */
   const char *method;     /* Current method */

   method = "AST_GRFSET";
   class = "Plot";

   astAt( method, NULL, 0 );
   astWatchSTATUS(

/* Set the function pointer to NULL if a pointer to
   the null routine AST_NULL has been supplied. */
      fun = FUN;
      if ( fun == (AstPutErrFun) F77_EXTERNAL_NAME(ast_null) ) {
         fun = NULL;
      }

/* Store the function pointer in the error module. */
      astSetPutErr( fun );

/* The above call assumes that "fun" uses C calling conventions. Since in
   fact "fun" uses Fortran calling conventions, we need to tell the error
   module to call "fun" via a wrapper that converts strings etc from C to
   Fortran. */
      astSetPutErrWrapper( FPutErrWrapper );
   )
}


static void FPutErrWrapper( AstPutErrFun fun, int status_value, const char *message ){

   DECLARE_CHARACTER(LMESSAGE,MXSTRLEN);
   int fmessage_length;

   fmessage_length = strlen( message );
   if( fmessage_length > LMESSAGE_length ) fmessage_length = LMESSAGE_length;
   astStringExport( message, LMESSAGE, fmessage_length );

   ( *(void (*)( INTEGER(status_value), CHARACTER(LMESSAGE)
                TRAIL(fmessage) ) ) fun)(INTEGER_ARG(&status_value),
                                         CHARACTER_ARG(LMESSAGE)
                                         TRAIL_ARG(fmessage));


}


