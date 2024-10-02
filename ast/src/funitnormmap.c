/*
*+
*  Name:
*     fshiftmap.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST UnitNormMap class.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the UnitNormMap class.

*  Routines Defined:
*     AST_ISAUNITNORMMAP
*     AST_UNITNORMMAP

*  Copyright:
*     Copyright (C) 2016 AURA/LSST
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
*     DSB: D.S. Berry (Starlink)
*     TIMJ: Tim Jenness (LSST)

*  History:
*     18-AUG-2003 (DSB):
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
#include "unitnormmap.h"         /* C interface to the UnitNormMap class */

F77_LOGICAL_FUNCTION(ast_isaunitnormmap)( INTEGER(THIS),
                                          INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_ISAUNITNORMMAP", NULL, 0 );
   astWatchSTATUS(
      RESULT = astIsAUnitNormMap( astI2P( *THIS ) ) ? F77_TRUE : F77_FALSE;
   )
   return RESULT;
}

F77_INTEGER_FUNCTION(ast_unitnormmap)( INTEGER(NCOORDS),
                                       DOUBLE(CENTRE),
                                       CHARACTER(OPTIONS),
                                       INTEGER(STATUS)
                                       TRAIL(OPTIONS) ) {
   GENPTR_INTEGER(NCOORDS)
   GENPTR_DOUBLE(CENTRE)
   GENPTR_CHARACTER(OPTIONS)
   F77_INTEGER_TYPE(RESULT);
   char *options;
   int i;

   astAt( "AST_UNITNORMMAP", NULL, 0 );
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
      RESULT = astP2I( astUnitNormMap( *NCOORDS, CENTRE, "%s", options ) );
      astFree( options );
   )
   return RESULT;
}
