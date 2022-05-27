/*
*+
*  Name:
*     fmoc.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST Moc class.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the Moc class.

*  Routines Defined:
*     AST_ISAMOC
*     AST_MOC

*  Copyright:
*     Copyright (C) 2018 East Asian Observatory

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
*     12-OCT-2018 (DSB):
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
#include "moc.h"                 /* C interface to the Moc class */


F77_SUBROUTINE(ast_addregion)( INTEGER(THIS),
                               INTEGER(CMODE),
                               INTEGER(REGION),
                               INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(CMODE)
   GENPTR_INTEGER(REGION)

   astAt( "AST_ADDREGION", NULL, 0 );
   astWatchSTATUS(
      astAddRegion( astI2P( *THIS ), *CMODE, astI2P( *REGION ) );
   )
}

F77_SUBROUTINE(ast_addmocdata)( INTEGER(THIS),
                                INTEGER(CMODE),
                                LOGICAL(NEGATE),
                                INTEGER(MAXORDER),
                                INTEGER(LEN),
                                INTEGER(NBYTE),
                                BYTE_ARRAY(DATA),
                                INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(CMODE)
   GENPTR_LOGICAL(NEGATE)
   GENPTR_INTEGER(MAXORDER)
   GENPTR_INTEGER(LEN)
   GENPTR_INTEGER(NBYTE)
   GENPTR_BYTE_ARRAY(DATA)

   astAt( "AST_ADDMOCDATA", NULL, 0 );
   astWatchSTATUS(
      astAddMocData( astI2P( *THIS ), *CMODE, F77_ISTRUE( *NEGATE ),
                     *MAXORDER, *LEN, *NBYTE, (void *) DATA );
   )
}

F77_SUBROUTINE(ast_addmocstring)( INTEGER(THIS),
                                  INTEGER(CMODE),
                                  LOGICAL(NEGATE),
                                  INTEGER(MAXORDER),
                                  INTEGER8(LEN),
                                  CHARACTER(STRING),
                                  LOGICAL(JSON),
                                  INTEGER(STATUS)
                                  TRAIL(STRING) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(CMODE)
   GENPTR_LOGICAL(NEGATE)
   GENPTR_INTEGER(MAXORDER)
   GENPTR_INTEGER8(LEN)
   GENPTR_CHARACTER(STRING)
   GENPTR_LOGICAL(JSON)
   size_t len;
   int json;

   if( *LEN > STRING_length ) {
      len = STRING_length;
   } else {
      len = *LEN;
   }

   astAt( "AST_ADDMOCSTRING", NULL, 0 );
   astWatchSTATUS(
      astAddMocString( astI2P( *THIS ), *CMODE, F77_ISTRUE( *NEGATE ),
                     *MAXORDER, len, (const char *) STRING, &json );
      *JSON = json ? F77_TRUE : F77_FALSE;
   )
}

F77_SUBROUTINE(ast_addcell)( INTEGER(THIS),
                             INTEGER(CMODE),
                             INTEGER(ORDER),
                             INTEGER8(NPIX),
                             INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(CMODE)
   GENPTR_INTEGER(ORDER)
   GENPTR_INTEGER8(NPIX)

   astAt( "AST_ADDCELL", NULL, 0 );
   astWatchSTATUS(
      astAddCell( astI2P( *THIS ), *CMODE, *ORDER, *NPIX );
   )
}

F77_SUBROUTINE(ast_getcell)( INTEGER(THIS),
                             INTEGER(ICELL),
                             INTEGER(ORDER),
                             INTEGER8(NPIX),
                             INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(ICELL)
   GENPTR_INTEGER(ORDER)
   GENPTR_INTEGER8(NPIX)

   astAt( "AST_GETCELL", NULL, 0 );
   astWatchSTATUS(
      astGetCell( astI2P( *THIS ), *ICELL - 1, ORDER, NPIX );
   )
}

F77_LOGICAL_FUNCTION(ast_isamoc)( INTEGER(THIS),
                                  INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_ISAMOC", NULL, 0 );
   astWatchSTATUS(
      RESULT = astIsAMoc( astI2P( *THIS ) ) ? F77_TRUE : F77_FALSE;
   )
   return RESULT;
}

F77_INTEGER_FUNCTION(ast_moc)( CHARACTER(OPTIONS),
                               INTEGER(STATUS)
                               TRAIL(OPTIONS) ) {
   GENPTR_CHARACTER(OPTIONS)
   F77_INTEGER_TYPE(RESULT);
   int i;
   char *options;

   astAt( "AST_MOC", NULL, 0 );
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
      RESULT = astP2I( astMoc( "%s", options ) );
      astFree( options );
   )
   return RESULT;
}

F77_SUBROUTINE(ast_getmocdata)( INTEGER(THIS),
                                INTEGER(MXSIZE),
                                BYTE_ARRAY(DATA),
                                INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(MXSIZE)
   GENPTR_BYTE_ARRAY(DATA)

   astAt( "AST_GETMOCDATA", NULL, 0 );
   astWatchSTATUS(
      astGetMocData( astI2P( *THIS ), *MXSIZE, (void *) DATA );
   )
}

F77_INTEGER_FUNCTION(ast_getmocheader)( INTEGER(THIS),
                                        INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_INTEGER_TYPE(RESULT);

   astAt( "AST_GETMOCHEADER", NULL, 0 );
   astWatchSTATUS(
      RESULT = astP2I( astGetMocHeader( astI2P( *THIS ) ) );
   )
   return RESULT;
}

/* AST_ADDPIXELMASK<X> requires a function for each possible data type, so
   define it via a macro. */
#define MAKE_AST_ADDPIXELMASK(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_addpixelmask##f)( INTEGER(THIS), \
                                     INTEGER(CMODE), \
                                     INTEGER(WCS), \
                                     Ftype(VALUE), \
                                     INTEGER(OPER), \
                                     INTEGER(FLAGS), \
                                     Ftype(BADVAL), \
                                     Ftype##_ARRAY(ARRAY), \
                                     INTEGER_ARRAY(DIMS), \
                                     INTEGER(STATUS) ) { \
\
   GENPTR_INTEGER(THIS) \
   GENPTR_INTEGER(CMODE) \
   GENPTR_INTEGER(WCS) \
   GENPTR_##Ftype(VALUE) \
   GENPTR_INTEGER(OPER) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_##Ftype##_ARRAY(ARRAY) \
   GENPTR_INTEGER_ARRAY(DIMS) \
   GENPTR_INTEGER(STATUS) \
\
   astAt( "AST_ADDPIXELMASK"#F, NULL, 0 ); \
   astWatchSTATUS( \
      astAddPixelMask##X( astI2P( *THIS ), *CMODE, astI2P( *WCS ), \
                          *VALUE, *OPER, *FLAGS, *BADVAL, (Xtype *) ARRAY, \
                          DIMS ); \
   ) \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_ADDPIXELMASK(d,D,DOUBLE,D,double)
MAKE_AST_ADDPIXELMASK(r,R,REAL,F,float)
MAKE_AST_ADDPIXELMASK(i,I,INTEGER,I,int)
MAKE_AST_ADDPIXELMASK(ui,UI,INTEGER,UI,unsigned int)
MAKE_AST_ADDPIXELMASK(s,S,WORD,S,short int)
MAKE_AST_ADDPIXELMASK(us,US,UWORD,US,unsigned short int)
MAKE_AST_ADDPIXELMASK(w,W,WORD,S,short int)
MAKE_AST_ADDPIXELMASK(uw,UW,UWORD,US,unsigned short int)
MAKE_AST_ADDPIXELMASK(b,B,BYTE,B,signed char)
MAKE_AST_ADDPIXELMASK(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_ADDPIXELMASK

/* 8-byte API for AST__ADDPIXELMASK<X> */
#define MAKE_AST_ADDPIXELMASK(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_addpixelmask8##f)( INTEGER(THIS), \
                                     INTEGER(CMODE), \
                                     INTEGER(WCS), \
                                     Ftype(VALUE), \
                                     INTEGER(OPER), \
                                     INTEGER(FLAGS), \
                                     Ftype(BADVAL), \
                                     Ftype##_ARRAY(ARRAY), \
                                     INTEGER8_ARRAY(DIMS), \
                                     INTEGER(STATUS) ) { \
\
   GENPTR_INTEGER(THIS) \
   GENPTR_INTEGER(CMODE) \
   GENPTR_INTEGER(WCS) \
   GENPTR_##Ftype(VALUE) \
   GENPTR_INTEGER(OPER) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_##Ftype##_ARRAY(ARRAY) \
   GENPTR_INTEGER8_ARRAY(DIMS) \
   GENPTR_INTEGER(STATUS) \
\
   astAt( "AST_ADDPIXELMASK"#F, NULL, 0 ); \
   astWatchSTATUS( \
      astAddPixelMask8##X( astI2P( *THIS ), *CMODE, astI2P( *WCS ), \
                           *VALUE, *OPER, *FLAGS, *BADVAL, (Xtype *) ARRAY, \
                           DIMS ); \
   ) \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_ADDPIXELMASK(d,D,DOUBLE,D,double)
MAKE_AST_ADDPIXELMASK(r,R,REAL,F,float)
MAKE_AST_ADDPIXELMASK(i,I,INTEGER,I,int)
MAKE_AST_ADDPIXELMASK(ui,UI,INTEGER,UI,unsigned int)
MAKE_AST_ADDPIXELMASK(s,S,WORD,S,short int)
MAKE_AST_ADDPIXELMASK(us,US,UWORD,US,unsigned short int)
MAKE_AST_ADDPIXELMASK(w,W,WORD,S,short int)
MAKE_AST_ADDPIXELMASK(uw,UW,UWORD,US,unsigned short int)
MAKE_AST_ADDPIXELMASK(b,B,BYTE,B,signed char)
MAKE_AST_ADDPIXELMASK(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_ADDPIXELMASK

F77_LOGICAL_FUNCTION(ast_testcell)( INTEGER(THIS),
                                    INTEGER(ORDER),
                                    INTEGER8(NPIX),
                                    LOGICAL(PARENT),
                                    INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(ORDER)
   GENPTR_INTEGER8(NPIX)
   GENPTR_LOGICAL(PARENT)
   GENPTR_INTEGER(STATUS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_TESTCELL", NULL, 0 );
   astWatchSTATUS(
      RESULT = astTestCell( astI2P( *THIS ), *ORDER, *NPIX,
                            F77_ISTRUE( *PARENT ) ? 1 : 0 );
   )
   return RESULT;
}

F77_SUBROUTINE(ast_getmocstring)( INTEGER(THIS),
                                  LOGICAL(JSON),
                                  INTEGER(MXSIZE),
                                  CHARACTER(STRING),
                                  INTEGER8(SIZE),
                                  INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_LOGICAL(JSON)
   GENPTR_INTEGER(MXSIZE)
   GENPTR_CHARACTER(STRING)
   GENPTR_INTEGER8(SIZE)
   GENPTR_INTEGER(MXSIZE)
   GENPTR_INTEGER(STATUS)

   size_t size;
   size_t mxsize = *MXSIZE;

   astAt( "AST_GETMOCSTRING", NULL, 0 );
   astWatchSTATUS(
      astGetMocString( astI2P( *THIS ), F77_ISTRUE( *JSON ) ? 1 : 0,
                       mxsize, (char *) STRING, &size );
      *SIZE = size;
   )
}

