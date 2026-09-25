/*
*+
*  Name:
*     fsplinemap.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST SplineMap class.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the SplineMap class.

*  Routines Defined:
*     AST_ISASPLINEMAP
*     AST_SPLINEMAP

*  Copyright:
*     Copyright (C) 2025 David Stuart Berry

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
*     DSB: D.S. Berry

*  History:
*     8-SEP-2025 (DSB):
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
#include "splinemap.h"           /* C interface to the SplineMap class */

F77_LOGICAL_FUNCTION(ast_isasplinemap)( INTEGER(THIS),
                                        INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_ISASPLINEMAP", NULL, 0 );
   astWatchSTATUS(
      RESULT = astIsASplineMap( astI2P( *THIS ) ) ? F77_TRUE : F77_FALSE;
   )
   return RESULT;
}

F77_INTEGER_FUNCTION(ast_splinemap)( INTEGER(KX),
                                     INTEGER(KY),
                                     INTEGER(NX),
                                     INTEGER(NY),
                                     DOUBLE_ARRAY(TX),
                                     DOUBLE_ARRAY(TY),
                                     DOUBLE_ARRAY(CU),
                                     DOUBLE_ARRAY(CV),
                                     CHARACTER(OPTIONS),
                                     INTEGER(STATUS)
                                     TRAIL(OPTIONS) ) {
   GENPTR_INTEGER(KX)
   GENPTR_INTEGER(KY)
   GENPTR_INTEGER(NX)
   GENPTR_INTEGER(NY)
   GENPTR_DOUBLE_ARRAY(TX)
   GENPTR_DOUBLE_ARRAY(TY)
   GENPTR_DOUBLE_ARRAY(CU)
   GENPTR_DOUBLE_ARRAY(CV)
   GENPTR_CHARACTER(OPTIONS)
   F77_INTEGER_TYPE(RESULT);
   char *options;
   int i;

   astAt( "AST_SPLINEMAP", NULL, 0 );
   astWatchSTATUS(
      options = astString( OPTIONS, OPTIONS_length );

/* Truncate the options string to exclude any trailing spaces. */
      astChrTrunc( options );

/* Change ',' to '\n' (see AST_SET in fobject.c for why). */
      if ( astOK ) {
         for ( i = 0; options[ i ]; i++ ) {
            if ( options[ i ] == ',' ) options[ i ] = '\n';
         }
      }
      RESULT = astP2I( astSplineMap( *KX, *KY, *NX, *NY, TX, TY, CU, CV,
                                     "%s" AST__F77API, options ) );
      astFree( options );
   )
   return RESULT;
}

F77_SUBROUTINE(ast_splinecoeffs)( INTEGER(THIS),
                                  INTEGER(AXIS),
                                  INTEGER(NEL),
                                  DOUBLE_ARRAY(COEFFS),
                                  INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(AXIS)
   GENPTR_INTEGER(NEL)
   GENPTR_DOUBLE_ARRAY(COEFFS)

   astAt( "AST_SPLINECOEFFS", NULL, 0 );
   astWatchSTATUS(
      astSplineCoeffs_F77( astI2P( *THIS ), *AXIS, *NEL, COEFFS );
   )
}


F77_SUBROUTINE(ast_splineknots)( INTEGER(THIS),
                                 INTEGER(AXIS),
                                 INTEGER(NEL),
                                 DOUBLE_ARRAY(KNOTS),
                                 INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(AXIS)
   GENPTR_INTEGER(NEL)
   GENPTR_DOUBLE_ARRAY(KNOTS)

   astAt( "AST_SPLINEKNOTS", NULL, 0 );
   astWatchSTATUS(
      astSplineKnots( astI2P( *THIS ), *AXIS, *NEL, KNOTS );
   )
}







