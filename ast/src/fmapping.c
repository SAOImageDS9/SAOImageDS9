/*
*+
*  Name:
*     fmapping.c

*  Purpose:
*     Define a FORTRAN 77 interface to the AST Mapping class.

*  Type of Module:
*     C source file.

*  Description:
*     This file defines FORTRAN 77-callable C functions which provide
*     a public FORTRAN 77 interface to the Mapping class.

*  Routines Defined:
*     AST_DECOMPOSE
*     AST_INVERT
*     AST_ISAMAPPING
*     AST_LINEARMAPPING
*     AST_REBIN<X>
*     AST_REBINSEQ<X>
*     AST_MAPBOX
*     AST_MAPSPLIT
*     AST_RATE
*     AST_REMOVEREGIONS
*     AST_RESAMPLE<X>
*     AST_SIMPLIFY
*     AST_TRAN1
*     AST_TRAN2
*     AST_TRANGRID
*     AST_TRANN
*     AST_RATE

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
*     DSB: David S. Berry (Starlink)

*  History:
*     11-JUL-1996 (RFWS):
*        Original version.
*     13-DEC-1996 (RFWS)
*        Added AST_SIMPLIFY.
*     28-MAY-1998 (RFWS):
*        Added AST_MAPBOX.
*     12-NOV-1998 (RFWS):
*        Added AST_RESAMPLE<X>.
*     22-NOV-2000 (DSB):
*        Pass the "flags" argument by reference instead of by value in the
*        MAKE_AST_RESAMPLE_UINTERP macro.
*     9-JAN-2001 (DSB):
*        Changed in and out arguments for TranN from type "double (*)[]"
*        to "double *".
*     26-SEP-2001 (DSB):
*        Added AST_DECOMPOSE.
*     16-JUL-2003 (DSB):
*        Added AST_RATE.
*     30-JUN-2005 (DSB):
*        Added AST_REBIN<X>.
*     1-SEP-2005 (DSB):
*        Added AST_REBINSEQ<X>.
*     8-MAR-2006 (DSB):
*        Added AST_TRANGRID.
*     5-MAY-2009 (DSB):
*        Added AST_REMOVEREGIONS.
*     4-MAY-2010 (DSB):
*        Add support for AST__VARWGT flag to AST_REBINSEQ<X>.
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
#include "memory.h"              /* Memory management facilities */
#include "error.h"               /* Error reporting facilities */
#include "mapping.h"             /* C interface to the Mapping class */
#include "ast_err.h"             /* AST error codes */

#include <stdint.h>

/* Module Variables. */
/* ================= */
/* Pointer to user-supplied (FORTRAN 77) interpolation function for
   use by AST_RESAMPLE<X> and AST_RESAMPLE8<X>. */
static void (* ast_resample_FINTERP)();




/* ----------   Interface for 32 bit integer dimensions -------------- */

/* Interpolation function interface. */
/* ================================= */
/* These functions are associated with allowing FORTRAN 77
   implementations of interpolation functions to be passed to
   AST_RESAMPLE<X> via the FORTRAN 77 interface and then to be invoked
   when necessary by the C code in the main implementation of
   astResample<X>. */

/* Define a macro which defines an interface function called
   ast_resample_uinterp<X> for a specific data type.

   The resulting function has a suitable interface to allow it to be
   passed as an interpolation function to the C interface of
   astResample<X> in the case where the "interp" parameter is set to
   AST__UINTERP. In turn, it invokes the equivalent user-supplied
   FORTRAN 77 interpolation function, a pointer to which should
   previously have been stored in the static variable
   "ast_resample_FINTERP". */
#define MAKE_AST_RESAMPLE_UINTERP(X,Xtype,Ftype) \
static void ast_resample_uinterp##X( int ndim, \
                                     const AstDim lbnd[], const AstDim ubnd[], \
                                     const Xtype in[], const Xtype in_var[], \
                                     AstDim npoint, const AstDim offset[], \
                                     const double *const coords[], \
                                     const double params[], int flags, \
                                     Xtype badval, \
                                     Xtype *out, Xtype *out_var, \
                                     AstDim *nbad ) { \
   DECLARE_INTEGER(STATUS); \
   int *offset4; \
   int *status; \
   int i; \
   int lbnd4[ AST__MXDIM ]; \
   int nbad4; \
   int npoint4; \
   int ubnd4[ AST__MXDIM ]; \
\
/* Get a pointer to the inherited staus value. */ \
   status = astGetStatusPtr; \
\
/* Convert supplied arrays holding 64 bit pixel counts and indices to 32 \
   bit values that can be passed to the 32 bit Fortran routine. */ \
   if( ndim <= AST__MXDIM ) { \
      for( i = 0; i < ndim; i++ ) { \
         lbnd4[ i ] = (int) lbnd[ i ]; \
         ubnd4[ i ] = (int) ubnd[ i ]; \
         if( (AstDim) lbnd4[ i ] != lbnd[ i ] || \
             (AstDim) ubnd4[ i ] != ubnd[ i ] ) { \
            astError( AST__TOOBG, "ast_resample_uinterp(Mapping): Axis %d " \
                     "is too long to use with the 4-byte Fortran interface. " \
                     "Use the 8 byte Fortran interface instead (programming " \
                     "error).",  status, i + 1); \
            break; \
         } \
      }          \
\
/* Report an error if the array has too many axes. */ \
   } else if( astOK ) { \
      astError( AST__NAXIN, "ast_resample_uinterp(Mapping): Too many " \
               "array dimensions (%d). Must be no more than %d.", status, \
               ndim, AST__MXDIM ); \
      return; \
   } \
\
/* Report an error if the number of points to be resampled overflows a \
   4-byte integer. */ \
   npoint4 = (int) npoint; \
   if( (AstDim) npoint4 != npoint && astOK ) { \
      astError( AST__TOOBG, "ast_resample_uinterp(Mapping): Too many " \
               "resampling points for the 4-byte Fortran interface. " \
               "Use the 8 byte Fortran interface instead (programming " \
               "error).",  status ); \
   } \
\
/* Allocate an array of int values and copy the offsets into it, checking for  \
   overflow. */ \
   offset4 = astMalloc( npoint4*sizeof(int) ); \
   if( astOK ) { \
      for( i = 0; i < npoint4; i++ ) { \
         offset4[ i ] = (int) offset[ i ]; \
         if( (AstDim) offset4[ i ] != offset[ i ] ) { \
            astError( AST__TOOBG, "ast_resample_uinterp(Mapping): The " \
                     "array has too many pixels to use with the 4-byte " \
                     "Fortran interface. Use the 8 byte Fortran interface " \
                     "instead (programming error).",  status ); \
            break; \
         } \
      } \
   }   \
\
/* Obtain the C status and then invoke the FORTRAN 77 interpolation \
   function via the stored pointer. Note that the "coords" array we \
   pass to FORTRAN has to be a contiguous 2-d array, so we must \
   de-reference one level of pointer compared to the C case. */ \
   STATUS = astStatus; \
   nbad4 = 0; \
   ( *ast_resample_FINTERP )( INTEGER_ARG(&ndim), \
                              INTEGER_ARRAY_ARG(lbnd4), \
                              INTEGER_ARRAY_ARG(ubnd4), \
                              Ftype##_ARRAY_ARG(in), \
                              Ftype##_ARRAY_ARG(in_var), \
                              INTEGER_ARG(&npoint4), \
                              INTEGER_ARRAY_ARG(offset4), \
                              DOUBLE_ARRAY_ARG(coords[ 0 ]), \
                              DOUBLE_ARRAY_ARG(params), \
                              INTEGER_ARG(&flags), \
                              Ftype##_ARG(&badval), \
                              Ftype##_ARRAY_ARG(out), \
                              Ftype##_ARRAY_ARG(out_var), \
                              INTEGER_ARG(&nbad4), \
                              INTEGER_ARG(&STATUS) ); \
\
/* Convert the 4-byte bad pixel count to 8-byte. */ \
   *nbad = (AstDim) nbad4; \
\
/* Free the array of 4-byte offsets. */ \
   offset4 = astFree( offset4 ); \
\
/* Set the C status to the returned FORTRAN 77 status. */ \
   astSetStatus( STATUS ); \
}

/* Invoke the above macro to define an interface function for each
   required data type. */
MAKE_AST_RESAMPLE_UINTERP(D,double,DOUBLE)
MAKE_AST_RESAMPLE_UINTERP(F,float,REAL)
MAKE_AST_RESAMPLE_UINTERP(I,int,INTEGER)
MAKE_AST_RESAMPLE_UINTERP(UI,unsigned int,INTEGER)
MAKE_AST_RESAMPLE_UINTERP(K,INT_BIG,INTEGER8)
MAKE_AST_RESAMPLE_UINTERP(UK,UINT_BIG,INTEGER8)
MAKE_AST_RESAMPLE_UINTERP(S,short int,WORD)
MAKE_AST_RESAMPLE_UINTERP(US,unsigned short int,UWORD)
MAKE_AST_RESAMPLE_UINTERP(B,signed char,BYTE)
MAKE_AST_RESAMPLE_UINTERP(UB,unsigned char,UBYTE)

/* Undefine the macro. */
#undef MAKE_AST_RESAMPLE_UINTERP

/* Define a function called ast_resample_ukern1 which has a suitable
   interface to allow it to be passed as an interpolation function to
   the C interface of astResample<X> in the case where the "interp"
   parameter is set to AST__UKERN1. In turn, it invokes the equivalent
   user-supplied FORTRAN 77 interpolation function, a pointer to which
   should previously have been stored in the static variable
   "ast_resample_FINTERP". */
static void ast_resample_ukern1( double offset, const double params[],
                                 int flags, double *value ) {
   DECLARE_INTEGER(STATUS);
   int *status;

/* Obtain the C status and then invoke the FORTRAN 77 interpolation
   function via the stored pointer. */
   status = astGetStatusPtr;
   STATUS = astStatus;
   ( *ast_resample_FINTERP )( DOUBLE_ARG(&offset),
                              DOUBLE_ARRAY_ARG(params),
                              INTEGER_ARG(&flags),
                              DOUBLE_ARG(value),
                              INTEGER_ARG(&STATUS) );

/* Set the C status to the returned FORTRAN 77 status. */
   astSetStatus( STATUS );
}

/* FORTRAN interface functions. */
/* ============================ */
/* These functions implement the remainder of the FORTRAN interface. */

F77_SUBROUTINE(ast_decompose)( INTEGER(THIS),
                               INTEGER(MAP1),
                               INTEGER(MAP2),
                               LOGICAL(SERIES),
                               INTEGER(INVERT1),
                               INTEGER(INVERT2),
                               INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(MAP1)
   GENPTR_INTEGER(MAP2)
   GENPTR_LOGICAL(SERIES)
   GENPTR_INTEGER(INVERT1)
   GENPTR_INTEGER(INVERT2)
   AstMapping *map1;
   AstMapping *map2;
   int series;

   astAt( "AST_DECOMPOSE", NULL, 0 );
   astWatchSTATUS(
      astDecompose( astI2P( *THIS ), &map1, &map2, &series, INVERT1, INVERT2 );
      *MAP1 = astP2I( map1 );
      *MAP2 = astP2I( map2 );
      *SERIES = ( series )?F77_TRUE:F77_FALSE;
   )
}

F77_SUBROUTINE(ast_invert)( INTEGER(THIS),
                            INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)

   astAt( "AST_INVERT", NULL, 0 );
   astWatchSTATUS(
      astInvert( astI2P( *THIS ) );
   )
}

F77_LOGICAL_FUNCTION(ast_isamapping)( INTEGER(THIS),
                                      INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_ISAMAPPING", NULL, 0 );
   astWatchSTATUS(
      RESULT = astIsAMapping( astI2P( *THIS ) ) ? F77_TRUE : F77_FALSE;
   )
   return RESULT;
}

F77_LOGICAL_FUNCTION(ast_linearapprox)( INTEGER(THIS),
                                        DOUBLE_ARRAY(LBND),
                                        DOUBLE_ARRAY(UBND),
                                        DOUBLE(TOL),
                                        DOUBLE_ARRAY(FIT),
                                        INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_DOUBLE_ARRAY(LBND)
   GENPTR_DOUBLE_ARRAY(UBND)
   GENPTR_DOUBLE(TOL)
   GENPTR_DOUBLE_ARRAY(FIT)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_LINEARAPPROX", NULL, 0 );
   astWatchSTATUS(
      RESULT = astLinearApprox( astI2P( *THIS ), LBND, UBND, *TOL, FIT );
   )
   return RESULT;
}

F77_LOGICAL_FUNCTION(ast_quadapprox)( INTEGER(THIS),
                                      DOUBLE_ARRAY(LBND),
                                      DOUBLE_ARRAY(UBND),
                                      INTEGER(NX),
                                      INTEGER(NY),
                                      DOUBLE_ARRAY(FIT),
                                      DOUBLE(RMS),
                                      INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_DOUBLE_ARRAY(LBND)
   GENPTR_DOUBLE_ARRAY(UBND)
   GENPTR_INTEGER(NX)
   GENPTR_INTEGER(NY)
   GENPTR_DOUBLE_ARRAY(FIT)
   GENPTR_DOUBLE(RMS)
   F77_LOGICAL_TYPE(RESULT);

   astAt( "AST_QUADAPPROX", NULL, 0 );
   astWatchSTATUS(
      RESULT = astQuadApprox( astI2P( *THIS ), LBND, UBND, *NX, *NY, FIT, RMS );
   )
   return RESULT;
}

F77_SUBROUTINE(ast_mapbox)( INTEGER(THIS),
                            DOUBLE_ARRAY(LBND_IN),
                            DOUBLE_ARRAY(UBND_IN),
                            LOGICAL(FORWARD),
                            INTEGER(COORD_OUT),
                            DOUBLE(LBND_OUT),
                            DOUBLE(UBND_OUT),
                            DOUBLE_ARRAY(XL),
                            DOUBLE_ARRAY(XU),
                            INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_DOUBLE_ARRAY(LBND_IN)
   GENPTR_DOUBLE_ARRAY(UBND_IN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_INTEGER(COORD_OUT)
   GENPTR_DOUBLE(LBND_OUT)
   GENPTR_DOUBLE(UBND_OUT)
   GENPTR_DOUBLE_ARRAY(XL)
   GENPTR_DOUBLE_ARRAY(XU)
   double lbnd_out;
   double ubnd_out;

   astAt( "AST_MAPBOX", NULL, 0 );
   astWatchSTATUS(
      astMapBox( astI2P( *THIS ), LBND_IN, UBND_IN, F77_ISTRUE( *FORWARD ),
                 *COORD_OUT, &lbnd_out, &ubnd_out, XL, XU );
      *LBND_OUT = lbnd_out;
      *UBND_OUT = ubnd_out;
   )
}

/* AST_RESAMPLE<X> requires a function for each possible data type, so
   define it via a macro. */
#define MAKE_AST_RESAMPLE(f,F,Ftype,X,Xtype) \
F77_INTEGER_FUNCTION(ast_resample##f)( INTEGER(THIS), \
                                       INTEGER(NDIM_IN), \
                                       INTEGER_ARRAY(LBND_IN), \
                                       INTEGER_ARRAY(UBND_IN), \
                                       Ftype##_ARRAY(IN), \
                                       Ftype##_ARRAY(IN_VAR), \
                                       INTEGER(INTERP), \
                                       void (* FINTERP)(), \
                                       DOUBLE_ARRAY(PARAMS), \
                                       INTEGER(FLAGS), \
                                       DOUBLE(TOL), \
                                       INTEGER(MAXPIX), \
                                       Ftype(BADVAL), \
                                       INTEGER(NDIM_OUT), \
                                       INTEGER_ARRAY(LBND_OUT), \
                                       INTEGER_ARRAY(UBND_OUT), \
                                       INTEGER_ARRAY(LBND), \
                                       INTEGER_ARRAY(UBND), \
                                       Ftype##_ARRAY(OUT), \
                                       Ftype##_ARRAY(OUT_VAR), \
                                       INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER_ARRAY(LBND_IN) \
   GENPTR_INTEGER_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER_ARRAY(LBND_OUT) \
   GENPTR_INTEGER_ARRAY(UBND_OUT) \
   GENPTR_INTEGER_ARRAY(LBND) \
   GENPTR_INTEGER_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_INTEGER(STATUS) \
\
   F77_INTEGER_TYPE RESULT; \
   Xtype *out_var; \
   const Xtype *in_var; \
   void (* finterp)(); \
\
   astAt( "AST_RESAMPLE"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* If *INTERP is set to a value that requires a user-supplied \
   interpolation function, then store a pointer to the supplied \
   FORTRAN 77 version of this function and use the appropriate C \
   wrapper function (defined above) to invoke it. */ \
      if ( *INTERP == AST__UINTERP ) { \
         ast_resample_FINTERP = FINTERP; \
         finterp = (void (*)()) ast_resample_uinterp##X; \
      } else if ( *INTERP == AST__UKERN1 ) { \
         ast_resample_FINTERP = FINTERP; \
         finterp = (void (*)()) ast_resample_ukern1; \
      } else { \
         ast_resample_FINTERP = NULL; \
         finterp = NULL; \
      } \
\
/* If the AST__USEVAR flag is set, use the input and output variance \
   arrays, otherwise pass NULL pointers. */ \
      in_var = out_var = NULL; \
      if ( AST__USEVAR & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
         out_var = (Xtype *) OUT_VAR; \
      } \
      RESULT = astResample##X( astI2P( *THIS ), *NDIM_IN, \
                               LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                               *INTERP, finterp, PARAMS, *FLAGS, \
                               *TOL, *MAXPIX, *BADVAL, \
                               *NDIM_OUT, LBND_OUT, UBND_OUT, \
                               LBND, UBND, (Xtype *) OUT, out_var ); \
   ) \
   return RESULT; \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_RESAMPLE(d,D,DOUBLE,D,double)
MAKE_AST_RESAMPLE(r,R,REAL,F,float)
MAKE_AST_RESAMPLE(i,I,INTEGER,I,int)
MAKE_AST_RESAMPLE(ui,UI,INTEGER,UI,unsigned int)
MAKE_AST_RESAMPLE(k,K,INTEGER8,K,INT_BIG)
MAKE_AST_RESAMPLE(uk,UK,INTEGER8,UK,UINT_BIG)
MAKE_AST_RESAMPLE(s,S,WORD,S,short int)
MAKE_AST_RESAMPLE(us,US,UWORD,US,unsigned short int)
MAKE_AST_RESAMPLE(w,W,WORD,S,short int)
MAKE_AST_RESAMPLE(uw,UW,UWORD,US,unsigned short int)
MAKE_AST_RESAMPLE(b,B,BYTE,B,signed char)
MAKE_AST_RESAMPLE(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_RESAMPLE

/* AST_REBIN<X> requires a function for each possible data type, so
   define it via a macro. */
#define MAKE_AST_REBIN(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_rebin##f)( INTEGER(THIS), \
                              DOUBLE(WLIM), \
                              INTEGER(NDIM_IN), \
                              INTEGER_ARRAY(LBND_IN), \
                              INTEGER_ARRAY(UBND_IN), \
                              Ftype##_ARRAY(IN), \
                              Ftype##_ARRAY(IN_VAR), \
                              INTEGER(INTERP), \
                              DOUBLE_ARRAY(PARAMS), \
                              INTEGER(FLAGS), \
                              DOUBLE(TOL), \
                              INTEGER(MAXPIX), \
                              Ftype(BADVAL), \
                              INTEGER(NDIM_OUT), \
                              INTEGER_ARRAY(LBND_OUT), \
                              INTEGER_ARRAY(UBND_OUT), \
                              INTEGER_ARRAY(LBND), \
                              INTEGER_ARRAY(UBND), \
                              Ftype##_ARRAY(OUT), \
                              Ftype##_ARRAY(OUT_VAR), \
                              INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_DOUBLE(WLIM) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER_ARRAY(LBND_IN) \
   GENPTR_INTEGER_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER_ARRAY(LBND_OUT) \
   GENPTR_INTEGER_ARRAY(UBND_OUT) \
   GENPTR_INTEGER_ARRAY(LBND) \
   GENPTR_INTEGER_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_INTEGER(STATUS) \
\
   Xtype *out_var; \
   const Xtype *in_var; \
\
   astAt( "AST_REBIN"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* If the AST__USEVAR flag is set, use the input and output variance \
   arrays, otherwise pass NULL pointers. */ \
      in_var = out_var = NULL; \
      if ( AST__USEVAR & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
         out_var = (Xtype *) OUT_VAR; \
      } \
      astRebin##X( astI2P( *THIS ), *WLIM, *NDIM_IN, \
                   LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                   *INTERP, PARAMS, *FLAGS, \
                   *TOL, *MAXPIX, *BADVAL, \
                   *NDIM_OUT, LBND_OUT, UBND_OUT, \
                   LBND, UBND, (Xtype *) OUT, out_var ); \
   ) \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_REBIN(d,D,DOUBLE,D,double)
MAKE_AST_REBIN(r,R,REAL,F,float)
MAKE_AST_REBIN(i,I,INTEGER,I,int)
MAKE_AST_REBIN(b,B,BYTE,B,signed char)
MAKE_AST_REBIN(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_REBIN

#define MAKE_AST_REBIN(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_rebin8##f)( INTEGER(THIS), \
                              DOUBLE(WLIM), \
                              INTEGER(NDIM_IN), \
                              INTEGER8_ARRAY(LBND_IN), \
                              INTEGER8_ARRAY(UBND_IN), \
                              Ftype##_ARRAY(IN), \
                              Ftype##_ARRAY(IN_VAR), \
                              INTEGER(INTERP), \
                              DOUBLE_ARRAY(PARAMS), \
                              INTEGER(FLAGS), \
                              DOUBLE(TOL), \
                              INTEGER(MAXPIX), \
                              Ftype(BADVAL), \
                              INTEGER(NDIM_OUT), \
                              INTEGER8_ARRAY(LBND_OUT), \
                              INTEGER8_ARRAY(UBND_OUT), \
                              INTEGER8_ARRAY(LBND), \
                              INTEGER8_ARRAY(UBND), \
                              Ftype##_ARRAY(OUT), \
                              Ftype##_ARRAY(OUT_VAR), \
                              INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_DOUBLE(WLIM) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER8_ARRAY(LBND_IN) \
   GENPTR_INTEGER8_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND_OUT) \
   GENPTR_INTEGER8_ARRAY(UBND_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND) \
   GENPTR_INTEGER8_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_INTEGER(STATUS) \
\
   Xtype *out_var; \
   const Xtype *in_var; \
\
   astAt( "AST_REBIN"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* If the AST__USEVAR flag is set, use the input and output variance \
   arrays, otherwise pass NULL pointers. */ \
      in_var = out_var = NULL; \
      if ( AST__USEVAR & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
         out_var = (Xtype *) OUT_VAR; \
      } \
      astRebin8##X( astI2P( *THIS ), *WLIM, *NDIM_IN, \
                   LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                   *INTERP, PARAMS, *FLAGS, \
                   *TOL, *MAXPIX, *BADVAL, \
                   *NDIM_OUT, LBND_OUT, UBND_OUT, \
                   LBND, UBND, (Xtype *) OUT, out_var ); \
   ) \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_REBIN(d,D,DOUBLE,D,double)
MAKE_AST_REBIN(r,R,REAL,F,float)
MAKE_AST_REBIN(i,I,INTEGER,I,int)
MAKE_AST_REBIN(b,B,BYTE,B,signed char)
MAKE_AST_REBIN(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_REBIN

/* AST_REBINSEQ<X> requires a function for each possible data type, so
   define it via a macro. */
#define MAKE_AST_REBINSEQ(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_rebinseq##f)( INTEGER(THIS), \
                              DOUBLE(WLIM), \
                              INTEGER(NDIM_IN), \
                              INTEGER_ARRAY(LBND_IN), \
                              INTEGER_ARRAY(UBND_IN), \
                              Ftype##_ARRAY(IN), \
                              Ftype##_ARRAY(IN_VAR), \
                              INTEGER(INTERP), \
                              DOUBLE_ARRAY(PARAMS), \
                              INTEGER(FLAGS), \
                              DOUBLE(TOL), \
                              INTEGER(MAXPIX), \
                              Ftype(BADVAL), \
                              INTEGER(NDIM_OUT), \
                              INTEGER_ARRAY(LBND_OUT), \
                              INTEGER_ARRAY(UBND_OUT), \
                              INTEGER_ARRAY(LBND), \
                              INTEGER_ARRAY(UBND), \
                              Ftype##_ARRAY(OUT), \
                              Ftype##_ARRAY(OUT_VAR), \
                              DOUBLE_ARRAY(WEIGHTS), \
                              INTEGER8(NUSED), \
                              INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_DOUBLE(WLIM) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER_ARRAY(LBND_IN) \
   GENPTR_INTEGER_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER_ARRAY(LBND_OUT) \
   GENPTR_INTEGER_ARRAY(UBND_OUT) \
   GENPTR_INTEGER_ARRAY(LBND) \
   GENPTR_INTEGER_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_DOUBLE_ARRAY(WEIGHTS) \
   GENPTR_INTEGER8(NUSED) \
   GENPTR_INTEGER(STATUS) \
\
   Xtype *out_var; \
   const Xtype *in_var; \
   int64_t nused; \
\
   astAt( "AST_REBINSEQ"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* We need the input variances if the AST__USEVAR or AST__VARWGT flag is \
   set. Otherwise use a NULL pointer for the input variances. */ \
      if ( AST__USEVAR & *FLAGS || AST__VARWGT & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
      } else { \
         in_var = NULL; \
      } \
\
/* We need the output variances if the AST__USEVAR or AST__GENVAR flag is \
   set. Otherwise use a NULL pointer for the output variances. */ \
      if ( AST__USEVAR & *FLAGS || AST__GENVAR & *FLAGS ) { \
         out_var = (Xtype *) OUT_VAR; \
      } else { \
         out_var = NULL; \
      } \
\
      nused = *NUSED; \
      astRebinSeq##X( astI2P( *THIS ), *WLIM, *NDIM_IN, \
                   LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                   *INTERP, PARAMS, *FLAGS, \
                   *TOL, *MAXPIX, *BADVAL, \
                   *NDIM_OUT, LBND_OUT, UBND_OUT, \
                   LBND, UBND, (Xtype *) OUT, out_var, WEIGHTS, \
                   &nused ); \
      *NUSED = nused; \
   ) \
} \

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_REBINSEQ(d,D,DOUBLE,D,double)
MAKE_AST_REBINSEQ(r,R,REAL,F,float)
MAKE_AST_REBINSEQ(i,I,INTEGER,I,int)
MAKE_AST_REBINSEQ(b,B,BYTE,B,signed char)
MAKE_AST_REBINSEQ(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_REBINSEQ

#define MAKE_AST_REBINSEQ(f,F,Ftype,X,Xtype) \
F77_SUBROUTINE(ast_rebinseq8##f)( INTEGER(THIS), \
                              DOUBLE(WLIM), \
                              INTEGER(NDIM_IN), \
                              INTEGER8_ARRAY(LBND_IN), \
                              INTEGER8_ARRAY(UBND_IN), \
                              Ftype##_ARRAY(IN), \
                              Ftype##_ARRAY(IN_VAR), \
                              INTEGER(INTERP), \
                              DOUBLE_ARRAY(PARAMS), \
                              INTEGER(FLAGS), \
                              DOUBLE(TOL), \
                              INTEGER(MAXPIX), \
                              Ftype(BADVAL), \
                              INTEGER(NDIM_OUT), \
                              INTEGER8_ARRAY(LBND_OUT), \
                              INTEGER8_ARRAY(UBND_OUT), \
                              INTEGER8_ARRAY(LBND), \
                              INTEGER8_ARRAY(UBND), \
                              Ftype##_ARRAY(OUT), \
                              Ftype##_ARRAY(OUT_VAR), \
                              DOUBLE_ARRAY(WEIGHTS), \
                              INTEGER8(NUSED), \
                              INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_DOUBLE(WLIM) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER8_ARRAY(LBND_IN) \
   GENPTR_INTEGER8_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND_OUT) \
   GENPTR_INTEGER8_ARRAY(UBND_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND) \
   GENPTR_INTEGER8_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_DOUBLE_ARRAY(WEIGHTS) \
   GENPTR_INTEGER8(NUSED) \
   GENPTR_INTEGER(STATUS) \
\
   Xtype *out_var; \
   const Xtype *in_var; \
   int64_t nused; \
\
   astAt( "AST_REBINSEQ"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* We need the input variances if the AST__USEVAR or AST__VARWGT flag is \
   set. Otherwise use a NULL pointer for the input variances. */ \
      if ( AST__USEVAR & *FLAGS || AST__VARWGT & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
      } else { \
         in_var = NULL; \
      } \
\
/* We need the output variances if the AST__USEVAR or AST__GENVAR flag is \
   set. Otherwise use a NULL pointer for the output variances. */ \
      if ( AST__USEVAR & *FLAGS || AST__GENVAR & *FLAGS ) { \
         out_var = (Xtype *) OUT_VAR; \
      } else { \
         out_var = NULL; \
      } \
\
      nused = *NUSED; \
      astRebinSeq8##X( astI2P( *THIS ), *WLIM, *NDIM_IN, \
                   LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                   *INTERP, PARAMS, *FLAGS, \
                   *TOL, *MAXPIX, *BADVAL, \
                   *NDIM_OUT, LBND_OUT, UBND_OUT, \
                   LBND, UBND, (Xtype *) OUT, out_var, WEIGHTS, \
                   &nused ); \
      *NUSED = nused; \
   ) \
} \

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_REBINSEQ(d,D,DOUBLE,D,double)
MAKE_AST_REBINSEQ(r,R,REAL,F,float)
MAKE_AST_REBINSEQ(i,I,INTEGER,I,int)
MAKE_AST_REBINSEQ(b,B,BYTE,B,signed char)
MAKE_AST_REBINSEQ(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_REBINSEQ

F77_INTEGER_FUNCTION(ast_removeregions)( INTEGER(THIS),
                                         INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_INTEGER_TYPE(RESULT);

   astAt( "AST_REMOVEREGIONS", NULL, 0 );
   astWatchSTATUS(
      RESULT = astP2I( astRemoveRegions( astI2P( *THIS ) ) );
   )
   return RESULT;
}

F77_INTEGER_FUNCTION(ast_simplify)( INTEGER(THIS),
                                    INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   F77_INTEGER_TYPE(RESULT);

   astAt( "AST_SIMPLIFY", NULL, 0 );
   astWatchSTATUS(
      RESULT = astP2I( astSimplify( astI2P( *THIS ) ) );
   )
   return RESULT;
}

F77_SUBROUTINE(ast_tran1)( INTEGER(THIS),
                           INTEGER(NPOINT),
                           DOUBLE(XIN),
                           LOGICAL(FORWARD),
                           DOUBLE(XOUT),
                           INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NPOINT)
   GENPTR_DOUBLE(XIN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_DOUBLE(XOUT)

   astAt( "AST_TRAN1", NULL, 0 );
   astWatchSTATUS(
      astTran1( astI2P( *THIS ), *NPOINT, XIN, F77_ISTRUE( *FORWARD ), XOUT );
   )
}

F77_SUBROUTINE(ast_tran18)( INTEGER(THIS),
                            INTEGER8(NPOINT),
                            DOUBLE(XIN),
                            LOGICAL(FORWARD),
                            DOUBLE(XOUT),
                            INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER8(NPOINT)
   GENPTR_DOUBLE(XIN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_DOUBLE(XOUT)

   astAt( "AST_TRAN18", NULL, 0 );
   astWatchSTATUS(
      astTran18( astI2P( *THIS ), *NPOINT, XIN, F77_ISTRUE( *FORWARD ), XOUT );
   )
}

F77_SUBROUTINE(ast_tran2)( INTEGER(THIS),
                           INTEGER(NPOINT),
                           DOUBLE(XIN),
                           DOUBLE(YIN),
                           LOGICAL(FORWARD),
                           DOUBLE(XOUT),
                           DOUBLE(YOUT),
                           INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NPOINT)
   GENPTR_DOUBLE(XIN)
   GENPTR_DOUBLE(YIN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_DOUBLE(XOUT)
   GENPTR_DOUBLE(YOUT)

   astAt( "AST_TRAN2", NULL, 0 );
   astWatchSTATUS(
      astTran2( astI2P( *THIS ), *NPOINT, XIN, YIN,
                F77_ISTRUE( *FORWARD ), XOUT, YOUT );
   )
}

F77_SUBROUTINE(ast_tran28)( INTEGER(THIS),
                            INTEGER8(NPOINT),
                            DOUBLE(XIN),
                            DOUBLE(YIN),
                            LOGICAL(FORWARD),
                            DOUBLE(XOUT),
                            DOUBLE(YOUT),
                            INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER8(NPOINT)
   GENPTR_DOUBLE(XIN)
   GENPTR_DOUBLE(YIN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_DOUBLE(XOUT)
   GENPTR_DOUBLE(YOUT)

   astAt( "AST_TRAN28", NULL, 0 );
   astWatchSTATUS(
      astTran28( astI2P( *THIS ), *NPOINT, XIN, YIN,
                 F77_ISTRUE( *FORWARD ), XOUT, YOUT );
   )
}

F77_SUBROUTINE(ast_trangrid)( INTEGER(THIS),
                              INTEGER(NCOORD_IN),
                              INTEGER_ARRAY(LBND),
                              INTEGER_ARRAY(UBND),
                              DOUBLE(TOL),
                              INTEGER(MAXPIX),
                              LOGICAL(FORWARD),
                              INTEGER(NCOORD_OUT),
                              INTEGER(OUTDIM),
                              DOUBLE_ARRAY(OUT),
                              INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NCOORD_IN)
   GENPTR_INTEGER_ARRAY(LBND)
   GENPTR_INTEGER_ARRAY(UBND)
   GENPTR_DOUBLE(TOL)
   GENPTR_INTEGER(MAXPIX)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_INTEGER(NCOORD_OUT)
   GENPTR_INTEGER(OUTDIM)
   GENPTR_DOUBLE_ARRAY(OUT)

   astAt( "AST_TRANGRID", NULL, 0 );
   astWatchSTATUS(
      astTranGrid( astI2P( *THIS ), *NCOORD_IN, LBND, UBND, *TOL, *MAXPIX,
                   F77_ISTRUE( *FORWARD ), *NCOORD_OUT, *OUTDIM, OUT );
   )
}

F77_SUBROUTINE(ast_trangrid8)( INTEGER(THIS),
                               INTEGER(NCOORD_IN),
                               INTEGER8_ARRAY(LBND),
                               INTEGER8_ARRAY(UBND),
                               DOUBLE(TOL),
                               INTEGER(MAXPIX),
                               LOGICAL(FORWARD),
                               INTEGER(NCOORD_OUT),
                               INTEGER8(OUTDIM),
                               DOUBLE_ARRAY(OUT),
                               INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NCOORD_IN)
   GENPTR_INTEGER8_ARRAY(LBND)
   GENPTR_INTEGER8_ARRAY(UBND)
   GENPTR_DOUBLE(TOL)
   GENPTR_INTEGER(MAXPIX)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_INTEGER(NCOORD_OUT)
   GENPTR_INTEGER8(OUTDIM)
   GENPTR_DOUBLE_ARRAY(OUT)

   astAt( "AST_TRANGRID8", NULL, 0 );
   astWatchSTATUS(
      astTranGrid8( astI2P( *THIS ), *NCOORD_IN, LBND, UBND, *TOL, *MAXPIX,
                    F77_ISTRUE( *FORWARD ), *NCOORD_OUT, *OUTDIM, OUT );
   )
}

F77_SUBROUTINE(ast_trann)( INTEGER(THIS),
                           INTEGER(NPOINT),
                           INTEGER(NCOORD_IN),
                           INTEGER(INDIM),
                           DOUBLE_ARRAY(IN),
                           LOGICAL(FORWARD),
                           INTEGER(NCOORD_OUT),
                           INTEGER(OUTDIM),
                           DOUBLE_ARRAY(OUT),
                           INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NPOINT)
   GENPTR_INTEGER(NCOORD_IN)
   GENPTR_INTEGER(INDIM)
   GENPTR_DOUBLE_ARRAY(IN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_INTEGER(NCOORD_OUT)
   GENPTR_INTEGER(OUTDIM)
   GENPTR_DOUBLE_ARRAY(OUT)

   astAt( "AST_TRANN", NULL, 0 );
   astWatchSTATUS(
      astTranN( astI2P( *THIS ), *NPOINT, *NCOORD_IN, *INDIM,
                (const double *)IN, F77_ISTRUE( *FORWARD ),
                *NCOORD_OUT, *OUTDIM, OUT );
   )
}

F77_SUBROUTINE(ast_trann8)( INTEGER(THIS),
                            INTEGER8(NPOINT),
                            INTEGER(NCOORD_IN),
                            INTEGER8(INDIM),
                            DOUBLE_ARRAY(IN),
                            LOGICAL(FORWARD),
                            INTEGER(NCOORD_OUT),
                            INTEGER8(OUTDIM),
                            DOUBLE_ARRAY(OUT),
                            INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER8(NPOINT)
   GENPTR_INTEGER(NCOORD_IN)
   GENPTR_INTEGER8(INDIM)
   GENPTR_DOUBLE_ARRAY(IN)
   GENPTR_LOGICAL(FORWARD)
   GENPTR_INTEGER(NCOORD_OUT)
   GENPTR_INTEGER8(OUTDIM)
   GENPTR_DOUBLE_ARRAY(OUT)

   astAt( "AST_TRANN8", NULL, 0 );
   astWatchSTATUS(
      astTranN8( astI2P( *THIS ), *NPOINT, *NCOORD_IN, *INDIM,
                 (const double *)IN, F77_ISTRUE( *FORWARD ),
                 *NCOORD_OUT, *OUTDIM, OUT );
   )
}

F77_DOUBLE_FUNCTION(ast_rate)( INTEGER(THIS),
                               DOUBLE_ARRAY(AT),
                               INTEGER(AX1),
                               INTEGER(AX2),
                               INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(AX1)
   GENPTR_INTEGER(AX2)
   GENPTR_DOUBLE_ARRAY(AT)
   F77_DOUBLE_TYPE(RESULT);

   astAt( "AST_RATE", NULL, 0 );
   astWatchSTATUS(
      RESULT = astRate( astI2P( *THIS ), AT, *AX1, *AX2 );
   )
   return RESULT;
}


F77_SUBROUTINE(ast_mapsplit)( INTEGER(THIS),
                              INTEGER(NIN),
                              INTEGER_ARRAY(IN),
                              INTEGER_ARRAY(OUT),
                              INTEGER(MAP),
                              INTEGER(STATUS) ) {
   GENPTR_INTEGER(THIS)
   GENPTR_INTEGER(NIN)
   GENPTR_INTEGER_ARRAY(IN)
   GENPTR_INTEGER_ARRAY(OUT)
   GENPTR_INTEGER(MAP)
   AstMapping *map;

   astAt( "AST_MAPSPLIT", NULL, 0 );
   astWatchSTATUS(
      astMapSplit( astI2P( *THIS ), *NIN, IN, OUT, &map );
      *MAP = astP2I( map );
   )
}









/* ----------   Interface for 64 bit integer dimensions -------------- */
/* This section repeats sections above that involve 32 bit integer
   dimensions in order to cater for 64 bit integers. Interfaces that do
   not include dimension values are not repeated. */


/* Interpolation function interface. */
/* ================================= */
/* These functions are associated with allowing FORTRAN 77
   implementations of interpolation functions to be passed to
   AST_RESAMPLE8<X> via the FORTRAN 77 interface and then to be invoked
   when necessary by the C code in the main implementation of
   astResample<X>. */

/* Define a macro which defines an interface function called
   ast_resample_uinterp8<X> for a specific data type.

   The resulting function has a suitable interface to allow it to be
   passed as an interpolation function to the C interface of
   astResample<X> in the case where the "interp" parameter is set to
   AST__UINTERP. In turn, it invokes the equivalent user-supplied
   FORTRAN 77 interpolation function, a pointer to which should
   previously have been stored in the static variable
   "ast_resample_FINTERP". */
#define MAKE_AST_RESAMPLE_UINTERP8(X,Xtype,Ftype) \
static void ast_resample_uinterp8##X( int ndim, \
                                      const AstDim lbnd[], const AstDim ubnd[], \
                                      const Xtype in[], const Xtype in_var[], \
                                      AstDim npoint, const AstDim offset[], \
                                      const double *const coords[], \
                                      const double params[], int flags, \
                                      Xtype badval, \
                                      Xtype *out, Xtype *out_var, \
                                      AstDim *nbad ) { \
   DECLARE_INTEGER(STATUS); \
   int *status; \
\
/* Get a pointer to the inherited staus value. */ \
   status = astGetStatusPtr; \
\
/* Obtain the C status and then invoke the FORTRAN 77 interpolation \
   function via the stored pointer. Note that the "coords" array we \
   pass to FORTRAN has to be a contiguous 2-d array, so we must \
   de-reference one level of pointer compared to the C case. */ \
   STATUS = astStatus; \
   ( *ast_resample_FINTERP )( INTEGER_ARG(&ndim), \
                              INTEGER8_ARRAY_ARG(lbnd), \
                              INTEGER8_ARRAY_ARG(ubnd), \
                              Ftype##_ARRAY_ARG(in), \
                              Ftype##_ARRAY_ARG(in_var), \
                              INTEGER8_ARG(&npoint), \
                              INTEGER8_ARRAY_ARG(offset), \
                              DOUBLE_ARRAY_ARG(coords[ 0 ]), \
                              DOUBLE_ARRAY_ARG(params), \
                              INTEGER_ARG(&flags), \
                              Ftype##_ARG(&badval), \
                              Ftype##_ARRAY_ARG(out), \
                              Ftype##_ARRAY_ARG(out_var), \
                              INTEGER8_ARG(nbad), \
                              INTEGER_ARG(&STATUS) ); \
\
/* Set the C status to the returned FORTRAN 77 status. */ \
   astSetStatus( STATUS ); \
}

/* Invoke the above macro to define an interface function for each
   required data type. */
MAKE_AST_RESAMPLE_UINTERP8(D,double,DOUBLE)
MAKE_AST_RESAMPLE_UINTERP8(F,float,REAL)
MAKE_AST_RESAMPLE_UINTERP8(I,int,INTEGER)
MAKE_AST_RESAMPLE_UINTERP8(UI,unsigned int,INTEGER)
MAKE_AST_RESAMPLE_UINTERP8(K,INT_BIG,INTEGER8)
MAKE_AST_RESAMPLE_UINTERP8(UK,UINT_BIG,INTEGER8)
MAKE_AST_RESAMPLE_UINTERP8(S,short int,WORD)
MAKE_AST_RESAMPLE_UINTERP8(US,unsigned short int,UWORD)
MAKE_AST_RESAMPLE_UINTERP8(B,signed char,BYTE)
MAKE_AST_RESAMPLE_UINTERP8(UB,unsigned char,UBYTE)

/* Undefine the macro. */
#undef MAKE_AST_RESAMPLE_UINTERP8


/* 8-byte FORTRAN interface functions. */
/* =================================== */
/* These functions implement the remainder of the 8-byte FORTRAN interface. */

/* AST_RESAMPLE8<X> requires a function for each possible data type, so
   define it via a macro. */
#define MAKE_AST_RESAMPLE8(f,F,Ftype,X,Xtype) \
F77_INTEGER8_FUNCTION(ast_resample8##f)( INTEGER(THIS), \
                                        INTEGER(NDIM_IN), \
                                        INTEGER8_ARRAY(LBND_IN), \
                                        INTEGER8_ARRAY(UBND_IN), \
                                        Ftype##_ARRAY(IN), \
                                        Ftype##_ARRAY(IN_VAR), \
                                        INTEGER(INTERP), \
                                        void (* FINTERP)(), \
                                        DOUBLE_ARRAY(PARAMS), \
                                        INTEGER(FLAGS), \
                                        DOUBLE(TOL), \
                                        INTEGER(MAXPIX), \
                                        Ftype(BADVAL), \
                                        INTEGER(NDIM_OUT), \
                                        INTEGER8_ARRAY(LBND_OUT), \
                                        INTEGER8_ARRAY(UBND_OUT), \
                                        INTEGER8_ARRAY(LBND), \
                                        INTEGER8_ARRAY(UBND), \
                                        Ftype##_ARRAY(OUT), \
                                        Ftype##_ARRAY(OUT_VAR), \
                                        INTEGER(STATUS) ) { \
   GENPTR_INTEGER(THIS) \
   GENPTR_INTEGER(NDIM_IN) \
   GENPTR_INTEGER8_ARRAY(LBND_IN) \
   GENPTR_INTEGER8_ARRAY(UBND_IN) \
   GENPTR_##Ftype##_ARRAY(IN) \
   GENPTR_##Ftype##_ARRAY(IN_VAR) \
   GENPTR_INTEGER(INTERP) \
   GENPTR_DOUBLE_ARRAY(PARAMS) \
   GENPTR_INTEGER(FLAGS) \
   GENPTR_DOUBLE(TOL) \
   GENPTR_INTEGER(MAXPIX) \
   GENPTR_##Ftype(BADVAL) \
   GENPTR_INTEGER(NDIM_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND_OUT) \
   GENPTR_INTEGER8_ARRAY(UBND_OUT) \
   GENPTR_INTEGER8_ARRAY(LBND) \
   GENPTR_INTEGER8_ARRAY(UBND) \
   GENPTR_##Ftype##_ARRAY(OUT) \
   GENPTR_##Ftype##_ARRAY(OUT_VAR) \
   GENPTR_INTEGER(STATUS) \
\
   void (* finterp)(); \
   Xtype *out_var; \
   const Xtype *in_var; \
   F77_INTEGER8_TYPE RESULT; \
\
   astAt( "AST_RESAMPLE8"#F, NULL, 0 ); \
   astWatchSTATUS( \
\
/* If *INTERP is set to a value that requires a user-supplied \
   interpolation function, then store a pointer to the supplied \
   FORTRAN 77 version of this function and use the appropriate C \
   wrapper function (defined above) to invoke it. */ \
      if ( *INTERP == AST__UINTERP ) { \
         ast_resample_FINTERP = FINTERP; \
         finterp = (void (*)()) ast_resample_uinterp8##X; \
      } else if ( *INTERP == AST__UKERN1 ) { \
         ast_resample_FINTERP = FINTERP; \
         finterp = (void (*)()) ast_resample_ukern1; \
      } else { \
         ast_resample_FINTERP = NULL; \
         finterp = NULL; \
      } \
\
/* If the AST__USEVAR flag is set, use the input and output variance \
   arrays, otherwise pass NULL pointers. */ \
      in_var = out_var = NULL; \
      if ( AST__USEVAR & *FLAGS ) { \
         in_var = (const Xtype *) IN_VAR; \
         out_var = (Xtype *) OUT_VAR; \
      } \
      RESULT = astResample8##X( astI2P( *THIS ), *NDIM_IN, \
                                LBND_IN, UBND_IN, (const Xtype *) IN, in_var, \
                                *INTERP, finterp, PARAMS, *FLAGS, \
                                *TOL, *MAXPIX, *BADVAL, \
                                *NDIM_OUT, LBND_OUT, UBND_OUT, \
                                LBND, UBND, (Xtype *) OUT, out_var ); \
   ) \
   return RESULT; \
}

/* Invoke the above macro to define a function for each data
   type. Include synonyms for some functions. */
MAKE_AST_RESAMPLE8(d,D,DOUBLE,D,double)
MAKE_AST_RESAMPLE8(r,R,REAL,F,float)
MAKE_AST_RESAMPLE8(i,I,INTEGER,I,int)
MAKE_AST_RESAMPLE8(ui,UI,INTEGER,UI,unsigned int)
MAKE_AST_RESAMPLE8(k,K,INTEGER8,K,INT_BIG)
MAKE_AST_RESAMPLE8(uk,UK,INTEGER8,UK,UINT_BIG)
MAKE_AST_RESAMPLE8(s,S,WORD,S,short int)
MAKE_AST_RESAMPLE8(us,US,UWORD,US,unsigned short int)
MAKE_AST_RESAMPLE8(w,W,WORD,S,short int)
MAKE_AST_RESAMPLE8(uw,UW,UWORD,US,unsigned short int)
MAKE_AST_RESAMPLE8(b,B,BYTE,B,signed char)
MAKE_AST_RESAMPLE8(ub,UB,UBYTE,UB,unsigned char)
#undef MAKE_AST_RESAMPLE8

