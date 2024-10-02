/*
*+
*  Name:
*     fchebymap.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST ChebyMap class.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the ChebyMap class.

*  Routines Defined:
*     AST_ISACHEBYMAP
*     AST_CHEBYMAP

*  Copyright:
*     Copyright (C) 201y East Asian Observatory.

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
*/

/* Define the astFORTRAN77 macro which prevents error messages from
   AST C functions from reporting the file and line number where the
   error occurred (since these would refer to this file, they would
   not be useful). */
#define astFORTRAN77

/* Header files. */
/* ============= */
#include "f77.h"                 /* FORTRAN <-> C interface macros (SUN/209) */
#include "c2f77.h"               /* F77 <-> C support functions/macros */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory handling facilities */
#include "chebymap.h"             /* C interface to the ChebyMap class */

F77_LOGICAL_FUNCTION(ast_isachebymap)( INTEGER(THIS),
                                      INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_ISACHEBYMAP", NULL, 0 );
   astWatchSTATUS(
      RESULT = astIsAChebyMap( astI2P( *THIS ) ) ? F77_TRUE : F77_FALSE;
   )
   return RESULT;
}

F77_INTEGER_FUNCTION(ast_chebymap)( INTEGER(NIN),
                                   INTEGER(NOUT),
                                   INTEGER(NCOEFF_F),
                                   DOUBLE_ARRAY(COEFF_F),
                                   INTEGER(NCOEFF_I),
                                   DOUBLE_ARRAY(COEFF_I),
                                   DOUBLE_ARRAY(LBND_F),
                                   DOUBLE_ARRAY(UBND_F),
                                   DOUBLE_ARRAY(LBND_I),
                                   DOUBLE_ARRAY(UBND_I),
                                   CHARACTER(OPTIONS),
                                   INTEGER(STATUS)
                                   TRAIL(OPTIONS) ) {
   GENPTR_INTEGER(NIN)
   GENPTR_INTEGER(NOUT)
   GENPTR_INTEGER(NCOEFF_F)
   GENPTR_DOUBLE_ARRAY(COEFF_F)
   GENPTR_INTEGER(NCOEFF_I)
   GENPTR_DOUBLE_ARRAY(COEFF_I)
   GENPTR_DOUBLE_ARRAY(LBND_F)
   GENPTR_DOUBLE_ARRAY(UBND_F)
   GENPTR_DOUBLE_ARRAY(LBND_I)
   GENPTR_DOUBLE_ARRAY(UBND_I)
   GENPTR_CHARACTER(OPTIONS)
   F77_INTEGER_TYPE(RESULT);
   char *options;
   int i;

   astAt( "AST_CHEBYMAP", NULL, 0 );
   astWatchSTATUS(
      options = astString( OPTIONS, OPTIONS_length );

/* Truncate the options string to exlucde any trailing spaces. */
      astChrTrunc( options );

/* Change ',' to '\n' (see AST_SET in fobject.c for why). */
      if ( astOK ) {
         for ( i = 0; options[ i ]; i++ ) {
            if ( options[ i ] == ',' ) options[ i ] = '\n';
         }
      }
      RESULT = astP2I( astChebyMap( *NIN, *NOUT, *NCOEFF_F, COEFF_F, *NCOEFF_I,
                                    COEFF_I, LBND_F, UBND_F, LBND_I, UBND_I, "%s", options ) );
      astFree( options );
   )
   return RESULT;
}


F77_SUBROUTINE(ast_chebydomain)( INTEGER(THIS),
                                 INTEGER(FWD),
                                 DOUBLE(LBND),
                                 DOUBLE(UBND),
                                 INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(FWD)
   GENPTR_DOUBLE(XOUT)
   GENPTR_DOUBLE(YOUT)

   astAt( "AST_CHEBYDOMAIN", NULL, 0 );
   astWatchSTATUS(
      astChebyDomain( astI2P( *THIS ), *FWD, LBND, UBND );
   )
}

