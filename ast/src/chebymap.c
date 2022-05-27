/* To do:

   - what to do about input positions that fall outside the bounding box.
   Have an attribute that can be used to select "set bad" or "extrapolate"?

   - what about overriding astRate ?

   - Providing an iterative inverse requires the Jacobian to be defined.

     for a PolyMap:   if y = C.x^n     then y' = n.C.x^n-1
     for a ChebyMap:  if y = C.Tn(x)   then y' = n.C.Un-1(x)

     where Un-1(x) is the Chebyshev polynomial of the second kind, degree
     (n-1), evaluated at x. Since PolyMap.GetJacobian function uses PolyMaps
     to express the Jacobian of a PolyMap, it would need to use ChebyMaps
     to express the Jacobian of a ChebyMap. But this would mean that
     ChebyMap needs to be able to represent Chebyshev polynomials of the
     second type. In fact the set of powers associated with each coefficient
     would need to indicate somehow whether to use type 1 or type 2 for
     each power. Could use negative powers to indicate type 2, but PolyMap.StoreArrays
     objects to negative powers. StoreArrays could just store them
     without checking, and then call a virtual function to verify the powers
     are OK.

     Simpler for the moment just to disable iterative inverses in
     ChebyMap.

*/


/*
*class++
*  Name:
*     ChebyMap

*  Purpose:
*     Map coordinates using Chebyshev polynomial functions.

*  Constructor Function:
c     astChebyMap
f     AST_CHEBYMAP

*  Description:
*     A ChebyMap is a form of Mapping which performs a Chebyshev polynomial
*     transformation.  Each output coordinate is a linear combination of
*     Chebyshev polynomials of the first kind, of order zero up to a
*     specified maximum order, evaluated at the input coordinates. The
*     coefficients to be used in the linear combination are specified
*     separately for each output coordinate.
*
*     For a 1-dimensional ChebyMap, the forward transformation is defined
*     as follows:
*
*        f(x) = c0.T0(x') + c1.T1(x') + c2.T2(x') + ...
*
*     where:
*        - Tn(x') is the nth Chebyshev polynomial of the first kind:
*             - T0(x') = 1
*             - T1(x') = x'
*             - Tn+1(x') = 2.x'.Tn(x') + Tn-1(x')
*        - x' is the inpux axis value, x, offset and scaled to the range
*          [-1, 1] as x ranges over a specified bounding box, given when the
*          ChebyMap is created. The input positions, x,  supplied to the
*          forward transformation must fall within the bounding box - bad
*          axis values (AST__BAD) are generated for points outside the
*          bounding box.
*
*     For an N-dimensional ChebyMap, the forward transformation is a
*     generalisation of the above form. Each output axis value is the sum
c     of "ncoeff"
f     of NCOEFF
*     terms, where each term is the product of a single coefficient
*     value and N factors of the form Tn(x'_i), where "x'_i" is the
*     normalised value of the i'th input axis value.
*
*     The forward and inverse transformations are defined independantly
*     by separate sets of coefficients, supplied when the ChebyMap is
*     created. If no coefficients are supplied to define the inverse
*     transformation, the
c     astPolyTran
f     AST_POLYTRAN
*     method of the parent PolyMap class can instead be used to create an
*     inverse transformation. The inverse transformation so generated
*     will be a Chebyshev polynomial with coefficients chosen to minimise
*     the residuals left by a round trip (forward transformation followed
*     by inverse transformation).

*  Inheritance:
*     The ChebyMap class inherits from the PolyMap class.

*  Attributes:
*     The ChebyMap class does not define any new attributes beyond those
*     which are applicable to all PolyMaps.

*  Functions:
c     In addition to those functions applicable to all PolyMap, the
c     following functions may also be applied to all ChebyMaps:
f     In addition to those routines applicable to all PolyMap, the
f     following routines may also be applied to all ChebyMaps:
*
c     - astChebyDomain: Get the bounds of the domain of the ChebyMap
f     - AST_CHEBYDOMAIN: Get the bounds of the domain of the ChebyMap

*  Copyright:
*     Copyright (C) 2017 East Asian Observatory.
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
*     1-MAR-2017 (DSB):
*        Original version.
*     30-MAR-2017 (DSB):
*        Over-ride the astFitPoly1DInit and astFitPoly2DInit virtual
*        functions inherited form the PolyMap class.
*     5-MAY-2018 (DSB):
*        Correct usage of "forward" argument in astFitPoly1DInit and
*        astFitPoly2DInit.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS ChebyMap

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory allocation facilities */
#include "object.h"              /* Base Object class */
#include "pointset.h"            /* Sets of points/coordinates */
#include "polymap.h"             /* Polynomial mappings (parent class) */
#include "cmpmap.h"              /* Compound mappings */
#include "chebymap.h"            /* Interface definition for this class */
#include "unitmap.h"             /* Unit mappings */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>

/* Module Variables. */
/* ================= */

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are extended by this class. */
static size_t (* parent_getobjsize)( AstObject *, int * );
static int (* parent_equal)( AstObject *, AstObject *, int * );
static void (* parent_polypowers)( AstPolyMap *, double **, int, const int *, double **, int, int, int * );
static AstPolyMap *(*parent_polytran)( AstPolyMap *, int, double, double, int, const double *, const double *, int * );


#ifdef THREAD_SAFE
/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Class_Init = 0; \

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(ChebyMap)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(ChebyMap,Class_Init)
#define class_vtab astGLOBAL(ChebyMap,Class_Vtab)

#include <pthread.h>


#else

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstChebyMapVtab class_vtab;   /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

#endif


/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstChebyMap *astChebyMapId_( int, int, int, const double[], int, const double[],
                             const double[], const double[], const double[],
                             const double[], const char *, ... );


/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstPolyMap *PolyTran( AstPolyMap *, int, double, double, int, const double *, const double *, int * );
static int Equal( AstObject *, AstObject *, int * );
static int GetIterInverse( AstPolyMap *, int * );
static size_t GetObjSize( AstObject *, int * );
static void ChebyDomain( AstChebyMap *, int, double *, double *, int * );
static void Copy( const AstObject *, AstObject *, int * );
static void Delete( AstObject *obj, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void PolyPowers( AstPolyMap *, double **, int, const int *, double **, int, int, int *);
static void FitPoly1DInit( AstPolyMap *, int, double **, AstMinPackData *, double *, int *);
static void FitPoly2DInit( AstPolyMap *, int, double **, AstMinPackData *, double *, int *);

/* Member functions. */
/* ================= */

static void ChebyDomain( AstChebyMap *this, int forward, double *lbnd,
                         double *ubnd, int *status ){
/*
*++
*  Name:
c     astChebyDomain
f     AST_CHEBYDOMAIN

*  Purpose:
*     Returns the bounding box of the domain of a ChebyMap.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "chebymap.h"
c     void astChebyDomain( AstChebyMap *this, int forward, double *lbnd,
c                          double *ubnd )
f     CALL AST_CHEBYDOMAIN( THIS, FORWARD, LBND, UBND, STATUS )

*  Class Membership:
*     ChebyMap method.

*  Description:
c     This function
f     This routine
*     returns the upper and lower limits of the box defining the domain
*     of either the forward or inverse transformation of a ChebyMap. These
*     are the values that were supplied when the ChebyMap was created.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the ChebyMap.
c     forward
f     FORWARD = LOGICAL (Given)
c        A non-zero
f        A .TRUE.
*        value indicates that the domain of the ChebyMap's
*        forward transformation is to be returned, while a zero
*        value indicates that the domain of the inverse transformation
*        should be returned.
c     lbnd
f     LBND() = DOUBLE PRECISION (Returned)
c        Pointer to an
f        An
*        array in which to return the lower axis bounds of the ChebyMap
*        domain. The number of elements should be at least equal to the
*        number of ChebyMap inputs (if
c        "forward" is non-zero), or outputs (if "forward" is zero).
f        FORWARD is .TRUE.), or outputs (if FORWARD is .FALSE.).
c     ubnd
f     UBND() = DOUBLE PRECISION (Returned)
c        Pointer to an
f        An
*        array in which to return the upper axis bounds of the ChebyMap
*        domain. The number of elements should be at least equal to the
*        number of ChebyMap inputs (if
c        "forward" is non-zero), or outputs (if "forward" is zero).
f        FORWARD is .TRUE.), or outputs (if FORWARD is .FALSE.).
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*    - If the requested transformation is undefined (i.e. no
*    transformation coefficients were specified when the ChebyMap was
*    created), this method returns a box determined using the
c    astMapBox
f    AST_MAPBOX
*    method on the opposite transformation, if the opposite
*    transformation is defined.
*    - If the above procedure fails to determine a bounding box, the supplied
*    arrays are filled with AST__BAD values but no error is reported.

*--
*/

/* Local Variables: */
   double *lbnd_o;
   double *offset_o;
   double *offset;
   double *scale_o;
   double *scale;
   double *ubnd_o;
   int fwd_o;
   int iax;
   int nax;
   int nax_o;

/* Check the inherited status. */
   if( !astOK ) return;

/* Get the scales and offsets to use, depending on the value of "forward"
   and whether the ChebyMap has been inverted. */
   if( forward != astGetInvert( this ) ) {
      scale = this->scale_f;
      offset = this->offset_f;
      nax = astGetNin( this );
      scale_o = this->scale_i;
      offset_o = this->offset_i;
      nax_o = astGetNout( this );
      fwd_o = 0;
   } else {
      scale = this->scale_i;
      offset = this->offset_i;
      nax = astGetNout( this );
      scale_o = this->scale_f;
      offset_o = this->offset_f;
      nax_o = astGetNin( this );
      fwd_o = 1;
   }

/* Check the domain is defined. */
   if( scale && offset ) {
      for( iax = 0; iax < nax; iax++ ) {
         if( scale[ iax ] != 0.0 ) {
            lbnd[ iax ] = ( -1.0 - offset[ iax ] ) / scale[ iax ];
            ubnd[ iax ] = ( 1.0 - offset[ iax ] ) / scale[ iax ];
         } else {
            lbnd[ iax ] = AST__BAD;
            ubnd[ iax ] = AST__BAD;
         }
      }

/* If the requested domain is not defined, see if it can be determined
   by transforming the domain of the other transformation into the
   requested input ot putput space. */
   } else if( scale_o && offset_o ){

/* Allocate memory to hold the bounding box in the other space (input or
   output), and then store the bounding box values. */
      lbnd_o = astMalloc( nax_o*sizeof( *lbnd_o ) );
      ubnd_o = astMalloc( nax_o*sizeof( *ubnd_o ) );
      if( astOK ) {
         for( iax = 0; iax < nax_o; iax++ ) {
            if( scale_o[ iax ] != 0.0 ) {
               lbnd_o[ iax ] = ( -1.0 - offset_o[ iax ] ) / scale_o[ iax ];
               ubnd_o[ iax ] = ( 1.0 - offset_o[ iax ] ) / scale_o[ iax ];
            } else {
               lbnd_o[ iax ] = AST__BAD;
               ubnd_o[ iax ] = AST__BAD;
            }
         }

/* Loop round finding the bounds on each input axis of the requested
   transformation. */
         for( iax = 0; iax < nax; iax++ ) {
            astMapBox( this, lbnd_o, ubnd_o, fwd_o, iax, lbnd + iax,
                       ubnd + iax, NULL, NULL );
         }

/* Free resources */
         lbnd_o = astFree( lbnd_o );
         ubnd_o = astFree( ubnd_o );
      }


/* If the domain of the other transformation is not defined, return bad values. */
   } else {
      for( iax = 0; iax < nax; iax++ ) {
         lbnd[ iax ] = AST__BAD;
         ubnd[ iax ] = AST__BAD;
      }
   }
}

static int Equal( AstObject *this_object, AstObject *that_object, int *status ) {
/*
*  Name:
*     Equal

*  Purpose:
*     Test if two ChebyMaps are equivalent.

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     int Equal( AstObject *this, AstObject *that, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astEqual protected
*     method inherited from the astPolyMap class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     two ChebyMaps are equivalent.

*  Parameters:
*     this
*        Pointer to the first Object (a ChebyMap).
*     that
*        Pointer to the second Object.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the ChebyMaps are equivalent, zero otherwise.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstChebyMap *that;
   AstChebyMap *this;
   int i;
   int nin;
   int nout;
   int result;

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Invoke the Equal method inherited from the parent PolyMap class. This
   checks that the PolyMaps are equal. */
   result = (*parent_equal)( this_object, that_object, status );
   if( result ) {

/* Obtain pointers to the two ChebyMap structures. */
      this = (AstChebyMap *) this_object;
      that = (AstChebyMap *) that_object;

/* Check the second object is a ChebyMap. We know the first is a
   ChebyMap since we have arrived at this implementation of the virtual
   function. */
      if( astIsAChebyMap( that ) ) {

/* Get the number of axes in the input bounding box (the original input space). */
         nin = astGetInvert( this ) ? astGetNout( this ) : astGetNin( this );

/* Check the bounding box is the same for both ChebyMaps. */
         if( this->scale_f && that->scale_f &&
             this->offset_f && that->offset_f ) {
            for( i = 0; i < nin && result; i++ ) {
               if( !astEQUAL( this->scale_f[ i ], that->scale_f[ i ] ) ||
                   !astEQUAL( this->offset_f[ i ], that->offset_f[ i ] )){
                  result = 0;
               }
            }
         } else if( this->scale_f || that->scale_f ||
                    this->offset_f || that->offset_f ) {
            result = 0;
         }

/* Get the number of axes in the output bounding box (the original output space). */
         nout = astGetInvert( this ) ? astGetNin( this ) : astGetNout( this );

/* Check the bounding box is the same for both ChebyMaps. */
         if( this->scale_i && that->scale_i &&
             this->offset_i && that->offset_i ) {
            for( i = 0; i < nout && result; i++ ) {
               if( !astEQUAL( this->scale_i[ i ], that->scale_i[ i ] ) ||
                   !astEQUAL( this->offset_i[ i ], that->offset_i[ i ] )){
                  result = 0;
               }
            }
         } else if( this->scale_i || that->scale_i ||
                    this->offset_i || that->offset_i ) {
            result = 0;
         }
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

static void FitPoly1DInit( AstPolyMap *this_polymap, int forward, double **table,
                           AstMinPackData *data, double *scales, int *status ){
/*
*  Name:
*     FitPoly1DInit

*  Purpose:
*     Perform initialisation needed for FitPoly1D

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     void FitPoly1DInit( AstPolyMap *this, int forward, double **table,
*                         AstMinPackData *data, double *scales, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astFitPoly1DInit protected
*     method inherited from the PolyMap class).

*  Description:
*     This function performs initialisation needed for FitPoly1D in the
*     PolyMap class.

*  Parameters:
*     this
*        Pointer to the PolyMap.
*     forward
*        Non-zero if the forward transformation of "this" is being
*        replaced. Zero if the inverse transformation of "this" is being
*        replaced.
*     table
*        Pointer to an array of 2 pointers. Each of these pointers points
*        to an array of "nsamp" doubles, being the scaled and sampled values
*        for x1 and y1 in that order.
*     data
*        Pointer to a structure holding information to pass the the
*        service function invoked by the minimisation function.
*     scales
*        Array holding the scaling factors for the two columns of the table.
*        Multiplying the table values by the scale factor produces PolyMap
*        input or output axis values. The scales are modified on exit to
*        take account of the scaling performed by the ChebyMap Transform
*        method.
*/

/* Local Variables; */
   AstChebyMap *this;
   double *px1;
   double *pxp1;
   double maxx;
   double minx;
   double off;
   double pmax;
   double pmin;
   double scl;
   double x1;
   int k;
   int w1;

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the ChebyMap structure. */
   this = (AstChebyMap *) this_polymap;

/* Find the bounds of the supplied x1 values. */
   px1 = table[ 0 ];
   minx = *px1;
   maxx = *px1;
   px1++;
   for( k = 1; k < data->nsamp; k++,px1++ ) {
      if( *px1 > maxx ) {
         maxx = *px1;
      } else if( *px1 < minx ) {
         minx = *px1;
      }
   }

/* Transform the above limits from table values into PolyMap axis values. */
   pmax = maxx*scales[ 0 ];
   pmin = minx*scales[ 0 ];

/* Calculate the scale and offset that map the above bounds onto the range
   [-1,+1], and store them in the ChebyMap. */
   if( pmax != pmin ) {
      scl = 2.0/( pmax - pmin );
      off = -( pmax + pmin )/( pmax - pmin );
   } else if( astOK ){
      astError( AST__BADBX, "astPolyTran(%s): New bounding box has zero width "
                "on axis 1.", status, astGetClass(this));
   }

   if( forward != astGetInvert( this ) ) {
      this->scale_f = (double *) astFree( this->scale_f );
      this->offset_f = (double *) astFree( this->offset_f );

      this->scale_f = (double *) astMalloc( sizeof( double ) );
      this->offset_f = (double *) astMalloc( sizeof( double ) );
      if( astOK ) {
         this->scale_f[ 0 ] = scl;
         this->offset_f[ 0 ] = off;
      }
   } else {
      this->scale_i = (double *) astFree( this->scale_i );
      this->offset_i = (double *) astFree( this->offset_i );

      this->scale_i = (double *) astMalloc( sizeof( double ) );
      this->offset_i = (double *) astMalloc( sizeof( double ) );
      if( astOK ) {
         this->scale_i[ 0 ] = scl;
         this->offset_i[ 0 ] = off;
      }
   }

/* Get pointers to the supplied x1 values. */
   px1 = table[ 0 ];

/* Get pointers to the location for the next "power" of x1. Here "X to
   the power N" is a metaphor for Tn(x). */
   pxp1 = data->xp1;

/* Loop round all samples. */
   for( k = 0; k < data->nsamp; k++ ) {

/* Get the current x1 value, and scale it into the range [-1,+1]. */
      x1 = *(px1++)*scl*scales[0] + off;

/* Find all the required "powers" of x1 and store them in the "xp1"
   component of the data structure. */
      *(pxp1++) = 1.0;
      *(pxp1++) = x1;
      for( w1 = 2; w1 < data->order; w1++,pxp1++ ) {
         pxp1[ 0 ] = 2.0*x1*pxp1[ -1 ] - pxp1[ -2 ];
      }
   }

/* The scaling representing by the scales[0] value will be performed by
   the astTransform method of the ChebyMap class, so reset teh scales[0]
   value to unity, to avoid the scaling being applied twice. */
   scales[ 0 ] = 1.0;

}

static void FitPoly2DInit( AstPolyMap *this_polymap, int forward, double **table,
                           AstMinPackData *data, double *scales, int *status ){
/*
*  Name:
*     FitPoly2DInit

*  Purpose:
*     Perform initialisation needed for FitPoly2D

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     void FitPoly2DInit( AstPolyMap *this, int forward, double **table,
*                         AstMinPackData *data, double *scales, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astFitPoly2DInit protected
*     method inherited from the PolyMap class).

*  Description:
*     This function performs initialisation needed for FitPoly2D in the
*     PolyMap class..

*  Parameters:
*     this
*        Pointer to the PolyMap.
*     forward
*        Non-zero if the forward transformation of "this" is being
*        replaced. Zero if the inverse transformation of "this" is being
*        replaced.
*     table
*        Pointer to an array of 4 pointers. Each of these pointers points
*        to an array of "nsamp" doubles, being the scaled and sampled values
*        for x1, x2, y1 or y2 in that order.
*     data
*        Pointer to a structure holding information to pass the the
*        service function invoked by the minimisation function.
*     scales
*        Array holding the scaling factors for the four columns of the table.
*        Multiplying the table values by the scale factor produces PolyMap
*        input or output axis values.
*/

/* Local Variables; */
   AstChebyMap *this;
   double *px1;
   double *px2;
   double *pxp1;
   double *pxp2;
   double maxx;
   double maxy;
   double minx;
   double miny;
   double off[ 2 ];
   double pxmax;
   double pxmin;
   double pymax;
   double pymin;
   double scl[ 2 ];
   double x1;
   double x2;
   int k;
   int w1;
   int w2;

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the ChebyMap structure. */
   this = (AstChebyMap *) this_polymap;

/* Find the bounds of the supplied x1 and x2 values. */
   px1 = table[ 0 ];
   px2 = table[ 1 ];
   minx = *px1;
   maxx = *px1;
   miny = *px2;
   maxy = *px2;
   px1++;
   px2++;
   for( k = 1; k < data->nsamp; k++,px1++,px2++ ) {
      if( *px1 > maxx ) {
         maxx = *px1;
      } else if( *px1 < minx ) {
         minx = *px1;
      }
      if( *px2 > maxy ) {
         maxy = *px2;
      } else if( *px2 < miny ) {
         miny = *px2;
      }
   }

/* Transform the above limits from table values into PolyMap axis values. */
   pxmax = maxx*scales[ 0 ];
   pxmin = minx*scales[ 0 ];
   pymax = maxy*scales[ 1 ];
   pymin = miny*scales[ 1 ];

/* Calculate the scale and offset that map the above bounds onto the range
   [-1,+1], and store them in the ChebyMap. */
   if( pxmax != pxmin && pymax != pymin ) {
      scl[ 0 ] = 2.0/( pxmax - pxmin );
      off[ 0 ] = -( pxmax + pxmin )/( pxmax - pxmin );
      scl[ 1 ] = 2.0/( pymax - pymin );
      off[ 1 ] = -( pymax + pymin )/( pymax - pymin );
   } else if( astOK ){
      astError( AST__BADBX, "astPolyTran(%s): New bounding box has zero width "
                "on or both axes.", status, astGetClass(this));
   }

   if( forward != astGetInvert( this ) ) {
      this->scale_f = (double *) astFree( this->scale_f );
      this->offset_f = (double *) astFree( this->offset_f );

      this->scale_f = (double *) astMalloc( 2*sizeof( double ) );
      this->offset_f = (double *) astMalloc( 2*sizeof( double ) );
      if( astOK ) {
         this->scale_f[ 0 ] = scl[ 0 ];
         this->offset_f[ 0 ] = off[ 0 ];
         this->scale_f[ 1 ] = scl[ 1 ];
         this->offset_f[ 1 ] = off[ 1 ];
      }
   } else {
      this->scale_i = (double *) astFree( this->scale_i );
      this->offset_i = (double *) astFree( this->offset_i );

      this->scale_i = (double *) astMalloc( 2*sizeof( double ) );
      this->offset_i = (double *) astMalloc( 2*sizeof( double ) );
      if( astOK ) {
         this->scale_i[ 0 ] = scl[ 0 ];
         this->offset_i[ 0 ] = off[ 0 ];
         this->scale_i[ 1 ] = scl[ 1 ];
         this->offset_i[ 1 ] = off[ 1 ];
      }
   }

/* Get pointers to the supplied x1 and x2 values. */
   px1 = table[ 0 ];
   px2 = table[ 1 ];

/* Get pointers to the location for the next "power" of x1 anmd x2. Here "X to
   the power N" is a metaphor for Tn(x). */
   pxp1 = data->xp1;
   pxp2 = data->xp2;

/* Loop round all samples. */
   for( k = 0; k < data->nsamp; k++ ) {

/* Get the current x1 and x2 values, and scale them into the range [-1,+1]. */
      x1 = *(px1++)*scl[0]*scales[0] + off[0];
      x2 = *(px2++)*scl[1]*scales[1] + off[1];

/* Find all the required "powers" of x1 and store them in the "xp1"
   component of the data structure. */
      *(pxp1++) = 1.0;
      *(pxp1++) = x1;
      for( w1 = 2; w1 < data->order; w1++,pxp1++ ) {
         pxp1[ 0 ] = 2.0*x1*pxp1[ -1 ] - pxp1[ -2 ];
      }

/* Find all the required "powers" of x2 and store them in the "xp2"
   component of the data structure. */
      *(pxp2++) = 1.0;
      *(pxp2++) = x2;
      for( w2 = 2; w2 < data->order; w2++,pxp2++ ) {
         pxp2[ 0 ] = 2.0*x2*pxp2[ -1 ] - pxp2[ -2 ];
      }
   }

/* The scaling representing by the scales[0] and scales[1] values will be
   performed by the astTransform method of the ChebyMap class, so reset the
   scales[0] and scales[1] values to unity, to avoid the scaling being
   applied twice. */
   scales[ 0 ] = 1.0;
   scales[ 1 ] = 1.0;

}

static int GetIterInverse( AstPolyMap *this, int *status ) {
/*
*  Name:
*     GetIterInverse

*  Purpose:
*     Return the value of the IterInverse attribute.

*  Type:
*     Private function.

*  Synopsis:
*     #include "polymap.h"
*     int GetIterInverse( AstObject *this, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astGetIterInverse protected
*     method inherited from the parent PolyMap class).

*  Description:
*     This function returns the value of the IterInverse attribute, which
*     is always zero for a ChebyMap.

*  Parameters:
*     this
*        Pointer to the ChebyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The IterInverse value.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

   return 0;
}

static size_t GetObjSize( AstObject *this_object, int *status ) {
/*
*  Name:
*     GetObjSize

*  Purpose:
*     Return the in-memory size of an Object.

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     size_t GetObjSize( AstObject *this, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astGetObjSize protected
*     method inherited from the parent class).

*  Description:
*     This function returns the in-memory size of the supplied ChebyMap,
*     in bytes.

*  Parameters:
*     this
*        Pointer to the ChebyMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Object size, in bytes.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstChebyMap *this;
   int nin;
   int nout;
   size_t result;

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointers to the ChebyMap structure. */
   this = (AstChebyMap *) this_object;

/* Get the number of input and output axes. */
   nin = astGetInvert( this ) ? astGetNout( this ) : astGetNin( this );
   nout = astGetInvert( this ) ? astGetNin( this ) : astGetNout( this );

/* Invoke the GetObjSize method inherited from the parent class, and then
   add on any components of the class structure defined by this class
   which are stored in dynamically allocated memory. */
   result = (*parent_getobjsize)( this_object, status );

   if( this->scale_f ) result += nin*sizeof( *this->scale_f );
   if( this->offset_f ) result += nin*sizeof( *this->offset_f );
   if( this->scale_i ) result += nout*sizeof( *this->scale_i );
   if( this->offset_i ) result += nout*sizeof( *this->offset_i );

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

void astInitChebyMapVtab_(  AstChebyMapVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitChebyMapVtab

*  Purpose:
*     Initialise a virtual function table for a ChebyMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "chebymap.h"
*     void astInitChebyMapVtab( AstChebyMapVtab *vtab, const char *name )

*  Class Membership:
*     ChebyMap vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the ChebyMap class.

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
   AstPolyMapVtab *polymap;      /* Pointer to PolyMap component of Vtab */

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitPolyMapVtab( (AstPolyMapVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsAChebyMap) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstPolyMapVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */
/* Store pointers to the member functions (implemented here) that provide
   virtual methods for this class. */
/* none */

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   polymap = (AstPolyMapVtab *) vtab;

   polymap->GetIterInverse = GetIterInverse;

   parent_getobjsize = object->GetObjSize;
   object->GetObjSize = GetObjSize;

   parent_polypowers = polymap->PolyPowers;
   polymap->PolyPowers = PolyPowers;

   parent_polytran = polymap->PolyTran;
   polymap->PolyTran = PolyTran;

   parent_equal = object->Equal;
   object->Equal = Equal;

   polymap->FitPoly1DInit = FitPoly1DInit;
   polymap->FitPoly2DInit = FitPoly2DInit;

/* Store pointers to the member functions (implemented here) that
   provide virtual methods for this class. */
   vtab->ChebyDomain = ChebyDomain;

/* Declare the destructor and copy constructor. */
   astSetDelete( (AstObjectVtab *) vtab, Delete );
   astSetCopy( (AstObjectVtab *) vtab, Copy );

/* Declare the class dump function. */
   astSetDump( vtab, Dump, "ChebyMap", "Chebyshev polynomial transformation" );

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static void PolyPowers( AstPolyMap *this_polymap, double **work, int ncoord,
                        const int *mxpow, double **ptr, int point, int fwd,
                        int *status ){
/*
*  Name:
*     PolyPowers

*  Purpose:
*     Find the required powers of the input axis values.

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     void PolyPowers( AstPolyMap *this, double **work, int ncoord,
*                      const int *mxpow, double **ptr, int point,
*                      int fwd, int *status )

*  Class Membership:
*     ChebyMap member function (over-rides the astPolyPowers protected
*     method inherited from the PolyMap class).

*  Description:
*     This function is used by astTransform to calculate the powers of
*     the axis values for a single input position. In the case of
*     sub-classes, the powers may not be simply powers of the supplied
*     axis values but may be more complex quantities such as a Chebyshev
*     polynomial of the required degree evaluated at the input axis values.

*  Parameters:
*     this
*        Pointer to the PolyMap.
*     work
*        An array of "ncoord" pointers, each pointing to an array of
*        length "max(2,mxpow)". The required values are placed in this
*        array on exit.
*     ncoord
*        The number of axes.
*     mxpow
*        Pointer to an array holding the maximum power required of each
*        axis value. Should have "ncoord" elements.
*     ptr
*        An array of "ncoord" pointers, each pointing to an array holding
*        the axis values. Each of these arrays of axis values must have
*        at least "point+1" elements.
*     point
*        The zero based index of the point within "ptr" that holds the
*        axis values to be exponentiated.
*     fwd
*        Do the supplied coefficients define the foward transformation of
*        the PolyMap?
*/

/* Local Variables; */
   AstChebyMap *this;
   double *scales;
   double *offsets;
   double *pwork;
   double *t;
   double x;
   int coord;
   int ip;

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the ChebyMap structure. */
   this = (AstChebyMap *) this_polymap;

/* Either transformation of a ChebyMap (forward or inverse) can be
   defined either as Chebyshev polynomial or as a standard polynomial.
   Chebyshev polynomials always have non-NULL scale array pointers.
   If the scale array pointer is NULL, then the transformation is a
   standard polynomial. If the coefficients relate to a standard
   polynomial, then invoke the astPolyPowers implementation of the parent
   class (PolyMap). */
   if( (fwd && !this->scale_f) || (!fwd && !this->scale_i) ) {
      (*parent_polypowers)( this_polymap, work, ncoord, mxpow, ptr, point,
                            fwd, status );

/* If the coefficients relate to a Chebyshev polynomial... */
   } else {
      scales = fwd ? this->scale_f : this->scale_i;
      offsets = fwd ? this->offset_f : this->offset_i;

/* This method uses a Chebyshev polynomial of the first kind of degree "i"
   evaluated at "x'" instead of "x raised to the power i". Here, "x'" is
   the input axis value scaled and shifted into the range [-1,+1] on each
   axis. Loop over all input axes. */
      for( coord = 0; coord < ncoord; coord++ ) {

/* Get a pointer to the array in which the powers of the current axis
   value are to be returned. */
         pwork = work[ coord ];

/* The Chebyshev function (type 1) of degree zero is always 1.0, regardless
   of the value of x. */
         pwork[ 0 ] = 1.0;

/* Get the input axis value. If it is bad, store bad values for all
   remaining powers. */
         x = ptr[ coord ][ point ];
         if( x == AST__BAD ) {
            for( ip = 1; ip <= mxpow[ coord ]; ip++ ) pwork[ ip ] = AST__BAD;

/* Otherwise, apply the required scaling to the input */
         } else {
            x = x*scales[ coord ] + offsets[ coord ];

/* Return bad values for input positions outside the bounding box
   associated with the transformation. */
            if( fabs( x ) <= 1.0 ) {

/* The Chebyshev function of degree one is equal to x. */
               t = pwork + 1;
               *t = x;

/* Form and store the remaining Chebyshev polynomial values at the input axis value.
   Use the standard recurrence relation: Tn+1(x') = 2.x'.Tn(x') + Tn-1(x'). */
               for( ip = 2; ip <= mxpow[ coord ]; ip++,t++ ) {
                  t[ 1 ] = 2.0*x*t[ 0 ] - t[ -1 ];
               }
            } else {
               for( ip = 1; ip <= mxpow[ coord ]; ip++ ) pwork[ ip ] = AST__BAD;
            }
         }
      }
   }
}

static AstPolyMap *PolyTran( AstPolyMap *this_polymap, int forward, double acc,
                             double maxacc, int maxorder, const double *lbnd,
                             const double *ubnd, int *status ){
/*
*  Name:
*     PolyTran

*  Purpose:
*     Fit a PolyMap inverse or forward transformation.

*  Type:
*     Private function.

*  Synopsis:
*     #include "polymap.h"
*     AstPolyMap *PolyTran( AstPolyMap *this, int forward, double acc,
*                           double maxacc, int maxorder, const double *lbnd,
*                           const double *ubnd )

*  Class Membership:
*     ChebyMap member function (over-rides the astPolyTran method inherited
*     from the PolyMap class).

*  Description:
*     This function creates a new PolyMap which is a copy of the supplied
*     PolyMap, in which a specified transformation (forward or inverse)
*     has been replaced by a new polynomial transformation. The
*     coefficients of the new transformation are estimated by sampling
*     the other transformation and performing a least squares polynomial
*     fit in the opposite direction to the sampled positions and values.
*
*     This method can only be used on (1-input,1-output) or (2-input,2-output)
*     PolyMaps.
*
*     The transformation to create is specified by the "forward" parameter.
*     In what follows "X" refers to the inputs of the PolyMap, and "Y" to
*     the outputs of the PolyMap. The forward transformation transforms
*     input values (X) into output values (Y), and the inverse transformation
*     transforms output values (Y) into input values (X). Within a PolyMap,
*     each transformation is represented by an independent set of
*     polynomials, P_f or P_i: Y=P_f(X) for the forward transformation and
*     X=P_i(Y) for the inverse transformation.
*
*     The "forward" parameter specifies the transformation to be replaced. If
*     it is non-zero, a new forward transformation is created by first finding
*     the input values (X) using the inverse transformation
*     (which must be available) at a regular grid of points (Y) covering a
*     rectangular region of the PolyMap's output space. The coefficients of
*     the required forward polynomial, Y=P_f(X), are chosen in order to
*     minimise the sum of the squared residuals between the sampled values
*     of Y and P_f(X).
*
*     If "forward" is zero (probably the most likely case),
*     a new inverse transformation is created by
*     first finding the output values (Y) using the forward transformation
*     (which must be available) at a regular grid of points (X) covering a
*     rectangular region of the PolyMap's input space. The coefficients of
*     the required inverse polynomial, X=P_i(Y), are chosen in order to
*     minimise the sum of the squared residuals between the sampled values
*     of X and P_i(Y).
*
*     This fitting process is performed repeatedly with increasing
*     polynomial orders (starting with linear) until the target
*     accuracy is achieved, or a specified maximum order is reached. If
*     the target accuracy cannot be achieved even with this maximum-order
*     polynomial, the best fitting maximum-order polynomial is returned so
*     long as its accuracy is better than "maxacc".
*     If it is not, an error is reported.

*  Parameters:
*     this
*        Pointer to the original Mapping.
*     forward
*        If non-zero, the forward PolyMap transformation is replaced.
*        Otherwise the inverse transformation is replaced.
*     acc
*        The target accuracy, expressed as a geodesic distance within
*        the PolyMap's input space (if "forward" is zero)  or output
*        space (if "forward" is non-zero).
*     maxacc
*        The maximum allowed accuracy for an acceptable polynomial,
*        expressed as a geodesic distance within the PolyMap's input
*        space (if "forward" is zero)  or output space (if "forward" is
*        non-zero).
*     maxorder
*        The maximum allowed polynomial order. This is one more than the
*        maximum power of either input axis. So for instance, a value of
*        3 refers to a quadratic polynomial. Note, cross terms with total
*        powers greater than or equal to maxorder are not inlcuded in the
*        fit. So the maximum number of terms in each of the fitted
*        polynomials is maxorder*(maxorder+1)/2.
*     lbnd
*        Pointer to an array holding the lower bounds of a rectangular
*        region within the PolyMap's input space (if "forward" is zero)
*        or output space (if "forward" is non-zero). The new polynomial
*        will be evaluated over this rectangle. The length of this array
*        should equal the value of the PolyMap's Nin or Nout attribute,
*        depending on "forward". If a NULL pointer is supplied, the lower
*        bounds of the box supplied when the ChebyMap was constructed is
*        used.
*     ubnd
*        Pointer to an
*        array holding the upper bounds of a rectangular region within
*        the PolyMap's input space (if "forward" is zero)  or output space
*        (if "forward" is non-zero). The new polynomial will be evaluated
*        over this rectangle.  The length of this array should equal the
*        value of the PolyMap's Nin or Nout attribute, depending on "forward".
*        If a NULL pointer is supplied, the upper bounds of the box supplied
*        when the ChebyMap was constructed is used.

*  Returned Value:
*     astPolyTran()
*        A pointer to the new PolyMap. A NULL pointer will be returned if
*        the fit fails to achieve the accuracy specified by "maxacc", but
*        no error will be reported.

*  Notes:
*     - This function can only be used on 1D or 2D PolyMaps which have
*     the same number of inputs and outputs.
*     - A null Object pointer (AST__NULL) will be returned if this
*     function is invoked with the AST error status set, or if it
*     should fail for any reason.
*/

/* Local Variables: */
   AstChebyMap *this;
   AstPolyMap *result;
   const char *word;
   double *offset;
   double *scale;
   double this_lbnd[ 2 ];
   double this_ubnd[ 2 ];
   int inverted;
   int nax;

/* Initialise. */
   result = NULL;

/* Check the inherited status. */
   if ( !astOK ) return result;

/* Get a pointer to the CHebyMap structure. */
   this = (AstChebyMap *) this_polymap;

/* Select the ChebyMap scales and offsets to be used. */
   inverted = astGetInvert( this );
   if( ( inverted && !forward ) || ( !inverted && forward ) ) {
      word = "inverse";
      scale = this->scale_i;
      offset = this->offset_i;
      nax = ((AstMapping *)this)->nout;
   } else {
      word = "forward";
      scale = this->scale_f;
      offset = this->offset_f;
      nax = ((AstMapping *)this)->nin;
   }

/* The scaled box for a Chebyshev polynomial spans [-1,+1] on each axis.
   Create the corresponding unscaled box. If the user supplies any bounds,
   use them in preference to the bounds in the ChebyMap. */
   if( lbnd ) {
      this_lbnd[ 0 ] = lbnd[ 0 ];
      if( nax > 1 ) this_lbnd[ 1 ] = lbnd[ 1 ];

   } else if( scale && offset ) {
      this_lbnd[ 0 ] = ( -1.0 - offset[ 0 ] )/scale[ 0 ];
      if( nax > 1 ) this_lbnd[ 1 ] = ( -1.0 - offset[ 1 ] )/scale[ 1 ];

   } else if( astOK ) {
      astError( AST__NOBOX, "astPolyTran(%s): The %s transformation is "
                "not a Chebyshev polynomial and therefore requires a "
                "user-supplied bounding box. But no lower bounds were "
                "supplied. ", status, astGetClass( this ), word );
   }


   if( ubnd ) {
      this_ubnd[ 0 ] = ubnd[ 0 ];
      if( nax > 1 ) this_ubnd[ 1 ] = ubnd[ 1 ];
   } else if( scale && offset ) {
      this_ubnd[ 0 ] = ( 1.0 - offset[ 0 ] )/scale[ 0 ];
      if( nax > 1 ) this_ubnd[ 1 ] = ( 1.0 - offset[ 1 ] )/scale[ 1 ];
   } else if( astOK ) {
      astError( AST__NOBOX, "astPolyTran(%s): The %s transformation is "
                "not a Chebyshev polynomial and therefore requires a "
                "user-supplied bounding box. But no upper bounds were "
                "supplied. ", status, astGetClass( this ), word );
   }

/* Invoke the parent astPolyMap method, using the bounding box selected
   above. */
   result = (*parent_polytran)( this_polymap, forward, acc, maxacc, maxorder,
                                this_lbnd, this_ubnd, status );

/* Return the new ChebyMap. */
   return result;
}


/* Functions which access class attributes. */
/* ---------------------------------------- */
/* Implement member functions to access the attributes associated with
   this class using the macros defined for this purpose in the
   "object.h" file. For a description of each attribute, see the class
   interface (in the associated .h file). */

/* Copy constructor. */
/* ----------------- */
static void Copy( const AstObject *objin, AstObject *objout, int *status ) {
/*
*  Name:
*     Copy

*  Purpose:
*     Copy constructor for ChebyMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Copy( const AstObject *objin, AstObject *objout, int *status )

*  Description:
*     This function implements the copy constructor for ChebyMap objects.

*  Parameters:
*     objin
*        Pointer to the object to be copied.
*     objout
*        Pointer to the object being constructed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void

*  Notes:
*     -  This constructor makes a deep copy, including a copy of the
*     coefficients associated with the input ChebyMap.
*/


/* Local Variables: */
   AstChebyMap *in;               /* Pointer to input ChebyMap */
   AstChebyMap *out;              /* Pointer to output ChebyMap */
   int nin;                       /* No. of input coordinates */
   int nout;                      /* No. of output coordinates */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain pointers to the input and output ChebyMaps. */
   in = (AstChebyMap *) objin;
   out = (AstChebyMap *) objout;

/* Nullify the pointers stored in the output object since these will
   currently be pointing at the input data (since the output is a simple
   byte-for-byte copy of the input). Otherwise, the input data could be
   freed by accidient if the output object is deleted due to an error
   occuring in this function. */
   out->scale_f = NULL;
   out->offset_f = NULL;
   out->scale_i = NULL;
   out->offset_i = NULL;

/* Get the number of inputs and outputs of the uninverted Mapping. */
   nin = ( (AstMapping *) in )->nin;
   nout = ( (AstMapping *) in )->nout;

/* Copy the bounding box arrays. */
   if( in->scale_f ) out->scale_f = (double *) astStore( NULL,
                                       (void *) in->scale_f,
                                       sizeof( double )*nin );
   if( in->offset_f ) out->offset_f = (double *) astStore( NULL,
                                       (void *) in->offset_f,
                                       sizeof( double )*nin );
   if( in->scale_i ) out->scale_i = (double *) astStore( NULL,
                                       (void *) in->scale_i,
                                       sizeof( double )*nout );
   if( in->offset_i ) out->offset_i = (double *) astStore( NULL,
                                       (void *) in->offset_i,
                                       sizeof( double )*nout );
}

/* Destructor. */
/* ----------- */
static void Delete( AstObject *obj, int *status ) {
/*
*  Name:
*     Delete

*  Purpose:
*     Destructor for ChebyMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Delete( AstObject *obj, int *status )

*  Description:
*     This function implements the destructor for ChebyMap objects.

*  Parameters:
*     obj
*        Pointer to the object to be deleted.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void

*  Notes:
*     This function attempts to execute even if the global error status is
*     set.
*/

/* Local Variables: */
   AstChebyMap *this;

/* Obtain a pointer to the ChebyMap structure. */
   this = (AstChebyMap *) obj;

/* Free the boundib box arrays. */
   this->scale_f = astFree( this->scale_f );
   this->offset_f = astFree( this->offset_f );
   this->scale_i = astFree( this->scale_i );
   this->offset_i = astFree( this->offset_i );
}

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for ChebyMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the ChebyMap class to an output Channel.

*  Parameters:
*     this
*        Pointer to the ChebyMap whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

#define KEY_LEN 50               /* Maximum length of a keyword */

/* Local Variables: */
   AstChebyMap *this;             /* Pointer to the ChebyMap structure */
   char buff[ KEY_LEN + 1 ];     /* Buffer for keyword string */
   char comm[ 100 ];             /* Buffer for comment string */
   int i;                        /* Loop index */
   int nin;                      /* No. of input coords */
   int nout;                     /* No. of output coords */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the ChebyMap structure. */
   this = (AstChebyMap *) this_object;

/* Find the number of inputs and outputs of the uninverted Mapping. */
   nin = ( (AstMapping *) this )->nin;
   nout = ( (AstMapping *) this )->nout;

/* Write out values representing the instance variables for the
   ChebyMap class.  */

/* The input axis scale factors. */
   if( this->scale_f ){
      for( i = 0; i < nin; i++ ){
         (void) sprintf( buff, "FSCL%d", i + 1 );
         (void) sprintf( comm, "Scale factor on input %d", i + 1 );
         astWriteDouble( channel, buff, 1, 1, (this->scale_f)[ i ], comm );
      }
   }

/* The input axis offsets. */
   if( this->offset_f ){
      for( i = 0; i < nin; i++ ){
         (void) sprintf( buff, "FOFF%d", i + 1 );
         (void) sprintf( comm, "Offset on input %d", i + 1 );
         astWriteDouble( channel, buff, 1, 1, (this->offset_f)[ i ], comm );
      }
   }

/* The output axis scale factors. */
   if( this->scale_i ){
      for( i = 0; i < nout; i++ ){
         (void) sprintf( buff, "ISCL%d", i + 1 );
         (void) sprintf( comm, "Scale factor on output %d", i + 1 );
         astWriteDouble( channel, buff, 1, 1, (this->scale_i)[ i ], comm );
      }
   }

/* The output axis offsets. */
   if( this->offset_i ){
      for( i = 0; i < nout; i++ ){
         (void) sprintf( buff, "IOFF%d", i + 1 );
         (void) sprintf( comm, "Offset on output %d", i + 1 );
         astWriteDouble( channel, buff, 1, 1, (this->offset_i)[ i ], comm );
      }
   }

/* Undefine macros local to this function. */
#undef KEY_LEN
}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAChebyMap and astCheckChebyMap functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(ChebyMap,Mapping)
astMAKE_CHECK(ChebyMap)

AstChebyMap *astChebyMap_( int nin, int nout, int ncoeff_f, const double coeff_f[],
                           int ncoeff_i, const double coeff_i[],
                           const double lbnd_f[], const double ubnd_f[],
                           const double lbnd_i[], const double ubnd_i[],
                           const char *options, int *status, ...){
/*
*++
*  Name:
c     astChebyMap
f     AST_CHEBYMAP

*  Purpose:
*     Create a ChebyMap.

*  Type:
*     Public function.

*  Synopsis:
c     #include "chebymap.h"
c     AstChebyMap *astChebyMap( int nin, int nout, int ncoeff_f, const double coeff_f[],
c                               int ncoeff_i, const double coeff_i[],
c                               const double lbnd_f[], const double ubnd_f[],
c                               const double lbnd_i[], const double ubnd_i[],
c                               const char *options, ... )
f     RESULT = AST_CHEBYMAP( NIN, NOUT, NCOEFF_F, COEFF_F, NCOEFF_I, COEFF_I,
f                            LBND_F, UBND_F, LBND_I, UBND_I, OPTIONS, STATUS )

*  Class Membership:
*     ChebyMap constructor.

*  Description:
*     This function creates a new ChebyMap and optionally initialises
*     its attributes.
*
*     A ChebyMap is a form of Mapping which performs a Chebyshev polynomial
*     transformation.  Each output coordinate is a linear combination of
*     Chebyshev polynomials of the first kind, of order zero up to a
*     specified maximum order, evaluated at the input coordinates. The
*     coefficients to be used in the linear combination are specified
*     separately for each output coordinate.
*
*     For a 1-dimensional ChebyMap, the forward transformation is defined
*     as follows:
*
*        f(x) = c0.T0(x') + c1.T1(x') + c2.T2(x') + ...
*
*     where:
*        - Tn(x') is the nth Chebyshev polynomial of the first kind:
*             - T0(x') = 1
*             - T1(x') = x'
*             - Tn+1(x') = 2.x'.Tn(x') + Tn-1(x')
*        - x' is the inpux axis value, x, offset and scaled to the range
*          [-1, 1] as x ranges over a specified bounding box, given when the
*          ChebyMap is created. The input positions, x,  supplied to the
*          forward transformation must fall within the bounding box - bad
*          axis values (AST__BAD) are generated for points outside the
*          bounding box.
*
*     For an N-dimensional ChebyMap, the forward transformation is a
*     generalisation of the above form. Each output axis value is the sum
c     of "ncoeff"
f     of NCOEFF
*     terms, where each term is the product of a single coefficient
*     value and N factors of the form Tn(x'_i), where "x'_i" is the
*     normalised value of the i'th input axis value.
*
*     The forward and inverse transformations are defined independantly
*     by separate sets of coefficients, supplied when the ChebyMap is
*     created. If no coefficients are supplied to define the inverse
*     transformation, the
c     astPolyTran
f     AST_POLYTRAN
*     method of the parent PolyMap class can instead be used to create an
*     inverse transformation. The inverse transformation so generated
*     will be a Chebyshev polynomial with coefficients chosen to minimise
*     the residuals left by a round trip (forward transformation followed
*     by inverse transformation).

*  Parameters:
c     nin
f     NIN = INTEGER (Given)
*        The number of input coordinates.
c     nout
f     NOUT = INTEGER (Given)
*        The number of output coordinates.
c     ncoeff_f
f     NCOEFF_F = INTEGER (Given)
*        The number of non-zero coefficients necessary to define the
*        forward transformation of the ChebyMap. If zero is supplied, the
*        forward transformation will be undefined.
c     coeff_f
f     COEFF_F( * ) = DOUBLE PRECISION (Given)
*        An array containing
c        "ncoeff_f*( 2 + nin )" elements. Each group of "2 + nin"
f        "NCOEFF_F*( 2 + NIN )" elements. Each group of "2 + NIN"
*        adjacent elements describe a single coefficient of the forward
*        transformation. Within each such group, the first element is the
*        coefficient value; the next element is the integer index of the
*        ChebyMap output which uses the coefficient within its defining
*        expression (the first output has index 1); the remaining elements
*        of the group give the integer powers to use with each input
*        coordinate value (powers must not be negative, and floating
*        point values are rounded to the nearest integer).
c        If "ncoeff_f" is zero, a NULL pointer may be supplied for "coeff_f".
*
*        For instance, if the ChebyMap has 3 inputs and 2 outputs, each group
*        consisting of 5 elements, A groups such as "(1.2, 2.0, 1.0, 3.0, 0.0)"
*        describes a coefficient with value 1.2 which is used within the
*        definition of output 2. The output value is incremented by the
*        product of the coefficient value, the value of the Chebyshev
*        polynomial of power 1 evaluated at input coordinate 1, and the
*        value of the Chebyshev polynomial of power 3 evaluated at input
*        coordinate 2. Input coordinate 3 is not used since its power is
*        specified as zero. As another example, the group "(-1.0, 1.0,
*        0.0, 0.0, 0.0 )" adds a constant value -1.0 onto output 1 (it is
*        a constant value since the power for every input axis is given as
*        zero).
*
c        Each final output coordinate value is the sum of the "ncoeff_f" terms
c        described by the "ncoeff_f" groups within the supplied array.
f        Each final output coordinate value is the sum of the "NCOEFF_F" terms
f        described by the "NCOEFF_F" groups within the supplied array.
c     ncoeff_i
f     NCOEFF_I = INTEGER (Given)
*        The number of non-zero coefficients necessary to define the
*        inverse transformation of the ChebyMap. If zero is supplied, the
*        inverse transformation will be undefined.
c     coeff_i
f     COEFF_I( * ) = DOUBLE PRECISION (Given)
*        An array containing
c        "ncoeff_i*( 2 + nout )" elements. Each group of "2 + nout"
f        "NCOEFF_I*( 2 + NOUT )" elements. Each group of "2 + NOUT"
*        adjacent elements describe a single coefficient of the inverse
c        transformation, using the same schame as "coeff_f",
f        transformation, using the same schame as "COEFF_F",
*        except that "inputs" and "outputs" are transposed.
c        If "ncoeff_i" is zero, a NULL pointer may be supplied for "coeff_i".
c     lbnd_f
f     LBND_F( * ) = DOUBLE PRECISION (Given)
*        An array containing the lower bounds of the input bounding box within
*        which the ChebyMap is defined. This argument is not used or
*        accessed if
c        ncoeff_f is zero, and so a NULL pointer may be supplied.
f        NCOEFF_F is zero.
*        If supplied, the array should contain
c        "nin" elements.
f        "NIN" elements.
c     ubnd_f
f     UBND_F( * ) = DOUBLE PRECISION (Given)
*        An array containing the upper bounds of the input bounding box within
*        which the ChebyMap is defined. This argument is not used or
*        accessed if
c        ncoeff_f is zero, and so a NULL pointer may be supplied.
f        NCOEFF_F is zero.
*        If supplied, the array should contain
c        "nin" elements.
f        "NIN" elements.
c     lbnd_i
f     LBND_I( * ) = DOUBLE PRECISION (Given)
*        An array containing the lower bounds of the output bounding box within
*        which the ChebyMap is defined. This argument is not used or
*        accessed if
c        ncoeff_i is zero, and so a NULL pointer may be supplied.
f        NCOEFF_I is zero.
*        If supplied, the array should contain
c        "nout" elements.
f        "NOUT" elements.
c     ubnd_i
f     UBND_I( * ) = DOUBLE PRECISION (Given)
*        An array containing the upper bounds of the output bounding box within
*        which the ChebyMap is defined. This argument is not used or
*        accessed if
c        ncoeff_i is zero, and so a NULL pointer may be supplied.
f        NCOEFF_I is zero.
*        If supplied, the array should contain
c        "nout" elements.
f        "NOUT" elements.
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new ChebyMap. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new ChebyMap. The syntax used is identical to that for the
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
c     astChebyMap()
f     AST_CHEBYMAP = INTEGER
*        A pointer to the new ChebyMap.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.
*--
*/

/* Local Variables: */
   astDECLARE_GLOBALS          /* Pointer to thread-specific global data */
   AstChebyMap *new;            /* Pointer to new ChebyMap */
   va_list args;               /* Variable argument list */

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialise the ChebyMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitChebyMap( NULL, sizeof( AstChebyMap ), !class_init,
                          &class_vtab, "ChebyMap", nin, nout,
                          ncoeff_f, coeff_f, ncoeff_i, coeff_i,
                          lbnd_f, ubnd_f, lbnd_i, ubnd_i );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new ChebyMap's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new ChebyMap. */
   return new;
}

AstChebyMap *astChebyMapId_( int nin, int nout, int ncoeff_f, const double coeff_f[],
                             int ncoeff_i, const double coeff_i[],
                             const double lbnd_f[], const double ubnd_f[],
                             const double lbnd_i[], const double ubnd_i[],
                             const char *options, ... ){
/*
*  Name:
*     astChebyMapId_

*  Purpose:
*     Create a ChebyMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "chebymap.h"
*     AstChebyMap *astChebyMap( int nin, int nout, int ncoeff_f, const double coeff_f[],
*                             int ncoeff_i, const double coeff_i[], const
*                             double lbnd_f[], const double ubnd_f[],
*                             double lbnd_i[], const double ubnd_i[],
*                             const char *options, ... )

*  Class Membership:
*     ChebyMap constructor.

*  Description:
*     This function implements the external (public) interface to the
*     astChebyMap constructor function. It returns an ID value (instead
*     of a true C pointer) to external users, and must be provided
*     because astChebyMap_ has a variable argument list which cannot be
*     encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable argument list also prevents this function from
*     invoking astChebyMap_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astChebyMap_.

*  Returned Value:
*     The ID value associated with the new ChebyMap.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstChebyMap *new;              /* Pointer to new ChebyMap */
   va_list args;                 /* Variable argument list */
   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the ChebyMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitChebyMap( NULL, sizeof( AstChebyMap ), !class_init,
                         &class_vtab, "ChebyMap", nin, nout,
                         ncoeff_f, coeff_f, ncoeff_i, coeff_i,
                         lbnd_f, ubnd_f, lbnd_i, ubnd_i );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new ChebyMap's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new ChebyMap. */
   return astMakeId( new );
}

AstChebyMap *astInitChebyMap_( void *mem, size_t size, int init,
                             AstChebyMapVtab *vtab, const char *name,
                             int nin, int nout, int ncoeff_f, const double coeff_f[],
                             int ncoeff_i, const double coeff_i[],
                             const double lbnd_f[], const double ubnd_f[],
                             const double lbnd_i[], const double ubnd_i[],
                             int *status ){
/*
*+
*  Name:
*     astInitChebyMap

*  Purpose:
*     Initialise a ChebyMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "chebymap.h"
*     AstChebyMap *astInitChebyMap( void *mem, size_t size, int init,
*                                 AstChebyMapVtab *vtab, const char *name,
*                                 int nin, int nout, int ncoeff_f,
*                                 const double coeff_f[], int ncoeff_i,
*                                 const double coeff_i[]
*                                 const double lbnd_f[], const double ubnd_f[],
*                                 const double lbnd_i[], const double ubnd_i[] )

*  Class Membership:
*     ChebyMap initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new ChebyMap object. It allocates memory (if necessary) to accommodate
*     the ChebyMap plus any additional data associated with the derived class.
*     It then initialises a ChebyMap structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a ChebyMap at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the ChebyMap is to be initialised.
*        This must be of sufficient size to accommodate the ChebyMap data
*        (sizeof(ChebyMap)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the ChebyMap (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the ChebyMap
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the ChebyMap's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new ChebyMap.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).
*     nin
*        The number of input coordinate values per point. This is the
*        same as the number of columns in the matrix.
*     nout
*        The number of output coordinate values per point. This is the
*        same as the number of rows in the matrix.
*     ncoeff_f
*        The number of non-zero coefficients necessary to define the
*        forward transformation of the ChebyMap. If zero is supplied, the
*        forward transformation will be undefined.
*     coeff_f
*        An array containing "ncoeff_f*( 2 + nin )" elements. Each group
*	 of "2 + nin" adjacent elements describe a single coefficient of
*	 the forward transformation. Within each such group, the first
*	 element is the coefficient value; the next element is the
*	 integer index of the ChebyMap output which uses the coefficient
*	 within its defining polynomial (the first output has index 1);
*	 the remaining elements of the group give the integer powers to
*	 use with each input coordinate value (powers must not be
*	 negative)
*
*        For instance, if the ChebyMap has 3 inputs and 2 outputs, each group
*        consisting of 5 elements, A groups such as "(1.2, 2.0, 1.0, 3.0, 0.0)"
*        describes a coefficient with value 1.2 which is used within the
*        definition of output 2. The output value is incremented by the
*        product of the coefficient value, the value of input coordinate
*        1 raised to the power 1, and the value of input coordinate 2 raised
*        to the power 3. Input coordinate 3 is not used since its power is
*        specified as zero. As another example, the group "(-1.0, 1.0,
*        0.0, 0.0, 0.0 )" describes adds a constant value -1.0 onto
*        output 1 (it is a constant value since the power for every input
*        axis is given as zero).
*
*        Each final output coordinate value is the sum of the "ncoeff_f" terms
*        described by the "ncoeff_f" groups within the supplied array.
*     ncoeff_i
*        The number of non-zero coefficients necessary to define the
*        inverse transformation of the ChebyMap. If zero is supplied, the
*        inverse transformation will be undefined.
*     coeff_i
*        An array containing
*        "ncoeff_i*( 2 + nout )" elements. Each group of "2 + nout"
*        adjacent elements describe a single coefficient of the inverse
*        transformation, using the same schame as "coeff_f", except that
*        "inputs" and "outputs" are transposed.
*     lbnd_f
*        An array containing the lower bounds of the input bounding box within
*        which the ChebyMap is defined. The array should contain "nin" elements.
*     ubnd_f
*        An array containing the upper bounds of the input bounding box within
*        which the ChebyMap is defined. The array should contain "nin" elements.
*     lbnd_i
*        An array containing the lower bounds of the output bounding box within
*        which the ChebyMap is defined. The array should contain "nout" elements.
*     ubnd_i
*        An array containing the upper bounds of the output bounding box within
*        which the ChebyMap is defined. The array should contain "nout" elements.

*  Returned Value:
*     A pointer to the new ChebyMap.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstChebyMap *new;
   int i;

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitChebyMapVtab( vtab, name );

/* Initialise a PolyMap structure (the parent class) as the first component
   within the ChebyMap structure, allocating memory if necessary. */
   new = (AstChebyMap *) astInitPolyMap( mem, size, 0,
                                        (AstPolyMapVtab *) vtab, name,
                                        nin, nout, ncoeff_f, coeff_f,
                                        ncoeff_i, coeff_i );
   if ( astOK ) {

/* Initialise the ChebyMap data. */
/* ---------------------------- */

/* First initialise the pointers in case of errors. */
      new->scale_f = NULL;
      new->offset_f = NULL;
      new->scale_i = NULL;
      new->offset_i = NULL;

/* Calculate the scales and offsets that map the supplied input bounding box
   onto the range [-1,+1] on each input axis, and store them. */
      if( ncoeff_f > 0 ) {
         new->scale_f = (double *) astMalloc( sizeof( double )*nin );
         new->offset_f = (double *) astMalloc( sizeof( double )*nin );
         if( astOK ) {
            for( i = 0; i < nin; i++ ) {
               if( ubnd_f[ i ] != lbnd_f[ i ] ) {
                  new->scale_f[ i ] = 2.0/( ubnd_f[ i ] - lbnd_f[ i ] );
                  new->offset_f[ i ] = -( ubnd_f[ i ] + lbnd_f[ i ] )/( ubnd_f[ i ] - lbnd_f[ i ] );
               } else if( astOK ){
                  astError( AST__BADBX, "astInitChebyMap(%s): Input bounding box "
                            "has zero width on input axis %d.", status, name, i + 1 );
                  break;
               }
            }
         }
      }

/* Calculate the scales and offsets that map the supplied output bounding box
   onto the range [-1,+1] on each output axis, and store them. */
      if( ncoeff_i > 0 ) {
         new->scale_i = (double *) astMalloc( sizeof( double )*nout );
         new->offset_i = (double *) astMalloc( sizeof( double )*nout );
         if( astOK ) {
            for( i = 0; i < nout; i++ ) {
               if( ubnd_i[ i ] != lbnd_i[ i ] ) {
                  new->scale_i[ i ] = 2.0/( ubnd_i[ i ] - lbnd_i[ i ] );
                  new->offset_i[ i ] = -( ubnd_i[ i ] + lbnd_i[ i ] )/( ubnd_i[ i ] - lbnd_i[ i ] );
               } else if( astOK ){
                  astError( AST__BADBX, "astInitChebyMap(%s): Output bounding box "
                            "has zero width on output axis %d.", status, name, i + 1 );
                  break;
               }
            }
         }
      }

/* If an error occurred, clean up by deleting the new ChebyMap. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new ChebyMap. */
   return new;
}

AstChebyMap *astLoadChebyMap_( void *mem, size_t size,
                               AstChebyMapVtab *vtab, const char *name,
                               AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadChebyMap

*  Purpose:
*     Load a ChebyMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "chebymap.h"
*     AstChebyMap *astLoadChebyMap( void *mem, size_t size,
*                                   AstChebyMapVtab *vtab, const char *name,
*                                   AstChannel *channel )

*  Class Membership:
*     ChebyMap loader.

*  Description:
*     This function is provided to load a new ChebyMap using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     ChebyMap structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a ChebyMap at the start of the memory
*     passed via the "vtab" parameter.


*  Parameters:
*     mem
*        A pointer to the memory into which the ChebyMap is to be
*        loaded.  This must be of sufficient size to accommodate the
*        ChebyMap data (sizeof(ChebyMap)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the ChebyMap (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the ChebyMap structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstChebyMap) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new ChebyMap. If this is NULL, a pointer
*        to the (static) virtual function table for the ChebyMap class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "ChebyMap" is used instead.

*  Returned Value:
*     A pointer to the new ChebyMap.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

#define KEY_LEN 50               /* Maximum length of a keyword */

   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
/* Local Variables: */
   AstChebyMap *new;              /* Pointer to the new ChebyMap */
   char buff[ KEY_LEN + 1 ];     /* Buffer for keyword string */
   int i;                        /* Loop index */
   int ngood;                    /* No. of non-bad values */
   int nin;                      /* No. of input coords */
   int nout;                     /* No. of output coords */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if ( !astOK ) return new;

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this ChebyMap. In this case the
   ChebyMap belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstChebyMap );
      vtab = &class_vtab;
      name = "ChebyMap";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitChebyMapVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built ChebyMap. */
   new = astLoadPolyMap( mem, size, (AstPolyMapVtab *) vtab, name,
                         channel );

   if ( astOK ) {

/* Get the number of inputs and outputs for the uninverted Mapping. */
   nin = ( (AstMapping *) new )->nin;
   nout = ( (AstMapping *) new )->nout;

/* Initialise values */
   new->scale_f = NULL;
   new->offset_f = NULL;
   new->scale_i = NULL;
   new->offset_i = NULL;

/* Read input data. */
/* ================ */

/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "ChebyMap" );

/* Is the forward transformation defined? */
      if( ((AstPolyMap *) new)->ncoeff_f ) {

/* Allocate memory to hold the scales and offsets for the input axes. */
         new->scale_f = astMalloc( sizeof( double )*(size_t) nin );
         new->offset_f = astMalloc( sizeof( double )*(size_t) nin );
         if( astOK ) {

/* Get the scale factors. */
            ngood = 0;
            for( i = 0; i < nin; i++ ){
               (void) sprintf( buff, "fscl%d", i + 1 );
               (new->scale_f)[ i ] = astReadDouble( channel, buff, AST__BAD );
               if( (new->scale_f)[ i ] != AST__BAD ) ngood++;
            }

/* Get the offsets of the bounding box. */
            for( i = 0; i < nin; i++ ){
               (void) sprintf( buff, "foff%d", i + 1 );
               (new->offset_f)[ i ] = astReadDouble( channel, buff, AST__BAD );
               if( (new->offset_f)[ i ] != AST__BAD ) ngood++;
            }

/* The scale and offset values should all be AST__BAD if the transformation
   is a standard polynomial. Anull the scale and offset arrays to
   indicate this. */
            if( ngood == 0 ) {
               new->scale_f = astFree( new->scale_f );
               new->offset_f = astFree( new->offset_f );

/* Otherwise, there should be no bad values. */
            } else if( ngood != 2*nin && astOK ) {
               astError( AST__OBJIN, "astLoadChebyMap: insufficient scale "
                         "and offset values for the forward transformation "
                         "in loaded ChebyMap.", status );
            }
         }
      }

/* Is the inverse transformation defined? */
      if( ((AstPolyMap *) new)->ncoeff_i ) {

/* Allocate memory to hold the scales and offsets for the output axes. */
         new->scale_i = astMalloc( sizeof( double )*(size_t) nout );
         new->offset_i = astMalloc( sizeof( double )*(size_t) nout );
         if( astOK ) {

/* Get the scale factors. */
            ngood = 0;
            for( i = 0; i < nout; i++ ){
               (void) sprintf( buff, "iscl%d", i + 1 );
               (new->scale_i)[ i ] = astReadDouble( channel, buff, AST__BAD );
               if( (new->scale_i)[ i ] != AST__BAD ) ngood++;
            }

/* Get the offsets of the bounding box. */
            for( i = 0; i < nout; i++ ){
               (void) sprintf( buff, "ioff%d", i + 1 );
               (new->offset_i)[ i ] = astReadDouble( channel, buff, AST__BAD );
               if( (new->offset_i)[ i ] != AST__BAD ) ngood++;
            }

/* The scale and offset values should all be AST__BAD if the transformation
   is a standard polynomial. Anull the scale and offset arrays to
   indicate this. */
            if( ngood == 0 ) {
               new->scale_i = astFree( new->scale_i );
               new->offset_i = astFree( new->offset_i );

/* Otherwise, there should be no bad values. */
            } else if( ngood != 2*nout && astOK ) {
               astError( AST__OBJIN, "astLoadChebyMap: insufficient scale "
                         "and offset values for the inverse transformation "
                         "in loaded ChebyMap.", status );
            }
         }
      }

/* If an error occurred, clean up by deleting the new ChebyMap. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return the new ChebyMap pointer. */
   return new;

/* Undefine macros local to this function. */
#undef KEY_LEN
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


void astChebyDomain_( AstChebyMap *this, int forward, double *lbnd, double *ubnd, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,ChebyMap,ChebyDomain))( this, forward, lbnd, ubnd, status );
}


