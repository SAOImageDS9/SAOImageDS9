/*
*class++
*  Name:
*     SplineMap

*  Purpose:
*     Map coordinates using spline functions.

*  Constructor Function:
c     astSplineMap
f     AST_SPLINEMAP

*  Description:
*     A SplineMap is a class of Mapping that has two input axes and two output
*     axes and contains a pair of two-dimensional splines (stored in B-spline
*     form). Each output coordinate of a SplineMap is the value of one of these
*     two-dimensional splines defined over the two input coordinates. The two
*     splines (one generating the first output coordinate and the other
*     generating the second output coordinate) share the same order and the
*     same knot positions, but have coefficients that are specified separately.
*     No extrapolation is performed - input positions that are outside the
*     area covered by the supplied knots cannot be transformed (but see
*     attribute OutUnit).
*
*     An iterative method is used to evaluate the inverse transformation based
*     on the forward transformation (see attributes InvTol and InvNiter). This
*     puts some restrictions on how the SplineMap class is used. Specifically,
*     the output axis values must represent perturbed input axis values, rather
*     than representing the perturbations themselves. It also requires that the
*     perturbations be small. In other words, if the input axis values are
*     (x,y), the output axis values are (u,v) and the perturbations in u and v
*     are Pu(x,y) and Pv(x,y), then:
*
*     -  u = x + Pu(x,y)
*     -  v = y + Pv(x,y)
*
*     The perturbations should be sufficiently small to ensure that u
*     always increases with x and that v always increases with y. The
*     knots and coefficients of the B-splines supplied when the SplineMap
*     is constructed should ensure that each B-spline value represents the
*     sum of the input axis value and the perturbation. For instance, the
*     first supplied B-spline should have value x + Pu(x,y) and not just
*     Pu(x,y).

*  Inheritance:
*     The SplineMap class inherits from the Mapping class.

*  Attributes:
*     In addition to those attributes common to all Mappings, every
*     SplineMap also has the following attributes:
*
*     - InvNiter: Maximum number of iterations for iterative inverse
*     - InvTol: Target relative error for iterative inverse
*     - OutUnit: Determines how out-of-bounds input positions are handled.
*     - SplineKx: The order of the splines along the input X axis.
*     - SplineKy: The order of the splines along the input Y axis.
*     - SplineNx: The number of spline coefficients along the input X axis.
*     - SplineNy: The number of spline coefficients along the input Y axis.

*  Functions:
c     In addition to those functions applicable to all Mappings, the
c     following functions may also be applied to all SplineMaps:
f     In addition to those routines applicable to all Mappings, the
f     following routines may also be applied to all SplineMaps:
*
c     - astSplineKnots: Retrieve the knots of a SplineMap
c     - astSplineCoeffs: Retrieve the coefficients of a SplineMap
f     - AST_SPLINEKNOTS: Retrieve the knots of a SplineMap
f     - AST_SPLINECOEFFS: Retrieve the coefficients of a SplineMap

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
*     DSB: David S. Berry

*  History:
*     13-OCT-2025 (DSB):
*        Original version.
*     5-NOV-2025 (DSB):
*        - Change CMLIB code to avoid bad values being returned for input
*        positions that are on the top edge of the knot bounding box.
*        - Added attribute OutUnit.
*     2-JUL-2026 (TIMJ):
*        - Dbvalu returns zero, rather than reporting an error, when the
*        requested derivative order is not less than the spline order:
*        such a derivative is mathematically zero, and the condition
*        arises from valid data (the iterative inverse of an order-1
*        spline), so the inverse now yields AST__BAD outputs instead of
*        raising an error.
*     17-AUG-2026 (TIMJ):
*        Report an error if InvNiter, InvTol or OutUnit is set or cleared once
*        the SplineMap has been cloned, as SUN/210 says AST does for the
*        attributes of any Mapping. Use the guarded astMAKE_SET1 and
*        astMAKE_CLEAR1 macros.
*     17-AUG-2026 (TIMJ):
*        Discard the record that the SplineMap has been simplified when
*        InvNiter, InvTol or OutUnit is set or cleared, since all three
*        change what the SplineMap does.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS SplineMap

/* Max order for piecewise polynomial (order 4 is a cubic). */
#define MAX_K 6

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory management facilities */
#include "object.h"              /* Base Object class */
#include "pointset.h"            /* Sets of points/coordinates */
#include "unitmap.h"             /* Unit mappings */
#include "mapping.h"             /* Coordinate mappings (parent class) */
#include "channel.h"             /* I/O channels */
#include "splinemap.h"           /* Interface definition for this class */
#include "pal.h"                 /* SLALIB function definitions */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <float.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* Module Variables. */
/* ================= */

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are extended by this class. */
static size_t (* parent_getobjsize)( AstObject *, int * );
static AstPointSet *(* parent_transform)( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static const char *(* parent_getattrib)( AstObject *, const char *, int * );
static int (* parent_testattrib)( AstObject *, const char *, int * );
static void (* parent_clearattrib)( AstObject *, const char *, int * );
static void (* parent_setattrib)( AstObject *, const char *, int * );
static size_t (* parent_getobjsize)( AstObject *, int * );


#ifdef THREAD_SAFE
/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Class_Init = 0; \
   globals->GetAttrib_Buff[ 0 ] = 0;

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(SplineMap)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(SplineMap,Class_Init)
#define class_vtab astGLOBAL(SplineMap,Class_Vtab)
#define getattrib_buff astGLOBAL(SplineMap,GetAttrib_Buff)


#include <pthread.h>


#else

static char getattrib_buff[ 101 ];

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstSplineMapVtab class_vtab;   /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

#endif

/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstSplineMap *astSplineMapId_( int, int, int, int, const double[],
                               const double[], const double[],
                               const double[], const char *, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstPointSet *Transform( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static double Db2val( double, double, double, int, int, const double *, const double *, int, int, int, int, const double *, double *, int * );
static double Dbvalu( const double *, const double *, int, int, int, double, int, double *, int * );
static double Rate( AstMapping *, double *, int, int, int * );
static int Equal( AstObject *, AstObject *, int * );
static int GetIsLinear( AstMapping *, int * );
static int GetSplineKx( AstSplineMap *, int * );
static int GetSplineKy( AstSplineMap *, int * );
static int GetSplineNx( AstSplineMap *, int * );
static int GetSplineNy( AstSplineMap *, int * );
static int MapMerge( AstMapping *, int, int, int *, AstMapping ***, int **, int * );
static size_t GetObjSize( AstObject *, int * );
static void Copy( const AstObject *, AstObject *, int * );
static void Delete( AstObject *, int * );
static void Dintrv( const double *, int, double, int *, int *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void IterInverse( AstSplineMap *, AstPointSet *, AstPointSet *, int * );
static void SplineCoeffs( AstSplineMap *, int, int, int, double *, int * );
static void SplineKnots( AstSplineMap *, int, int, double *, int * );

static const char *GetAttrib( AstObject *, const char *, int * );
static int TestAttrib( AstObject *, const char *, int * );
static void ClearAttrib( AstObject *, const char *, int * );
static void SetAttrib( AstObject *, const char *, int * );

static int GetInvNiter( AstSplineMap *, int * );
static int TestInvNiter( AstSplineMap *, int * );
static void ClearInvNiter( AstSplineMap *, int * );
static void SetInvNiter( AstSplineMap *, int, int * );

static double GetInvTol( AstSplineMap *, int * );
static int TestInvTol( AstSplineMap *, int * );
static void ClearInvTol( AstSplineMap *, int * );
static void SetInvTol( AstSplineMap *, double, int * );

static int GetOutUnit( AstSplineMap *, int * );
static int TestOutUnit( AstSplineMap *, int * );
static void ClearOutUnit( AstSplineMap *, int * );
static void SetOutUnit( AstSplineMap *, int, int * );



/* Member functions. */
/* ================= */

static void ClearAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     ClearAttrib

*  Purpose:
*     Clear an attribute value for a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     void ClearAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the astClearAttrib protected
*     method inherited from the Mapping class).

*  Description:
*     This function clears the value of a specified attribute for a
*     SplineMap, so that the default value will subsequently be used.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     attrib
*        Pointer to a null-terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstSplineMap *this;             /* Pointer to the SplineMap structure */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Check the attribute name and clear the appropriate attribute. */

/* InvNiter. */
/* --------- */
   if ( !strcmp( attrib, "invniter" ) ) {
      astClearInvNiter( this );

/* InvTol. */
/* ------- */
   } else if ( !strcmp( attrib, "invtol" ) ) {
      astClearInvTol( this );

/* OutUnit. */
/* ------------ */
   } else if ( !strcmp( attrib, "outunit" ) ) {
      astClearOutUnit( this );

/* If the name was not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then report an
   error. */
   } else if ( !strcmp( attrib, "splinekx" ) ||
               !strcmp( attrib, "splineky" ) ||
               !strcmp( attrib, "splinenx" ) ||
               !strcmp( attrib, "splineny" ) ){
      astError( AST__NOWRT, "astClear: Invalid attempt to clear the \"%s\" "
                "value for a %s.", status, attrib, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_clearattrib)( this_object, attrib, status );
   }
}

static double Db2val( double def, double xval, double yval, int idx, int idy,
                      const double *tx, const double *ty, int nx, int ny,
                      int kx, int ky, const double *bcoef, double *work,
                      int *status ) {
/*
*  Name:
*     Db2val

*  Purpose:
*     Evaluate a 2-dimensional B-spline value or derivative at a given position

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     double Db2val( double def, double xval, double yval, int idx, int idy,
*                    const double *tx, const double *ty, int nx, int ny,
*                    int kx, int ky, const double *bcoef, double *work,
*                    int *status )

*  Class Membership:
*     SplineMap member function

*  Description:
*     This function evaluates the B-representation (T,A,N,K) of a 2-dimensional
*     B-spline at (xval,yval). To evaluate  the  interpolant itself, set idx=idy=0,
*     to evaluate the first partial  with  respect to x, set idx=1,idy=0, and so on.

*  Parameters:
*     def
*        The value to return if the supplied (xval,yval) position is outside
*        the bounding box of the supplied knots.
*     xval
*        X coordinate of evaluation point.
*     yval
*        Y coordinate of evaluation point.
*     idx
*        X derivative of piecewise polynomial to evaluate. Zero for the
*        function value itself.
*     idy
*        Y derivative of piecewise polynomial to evaluate. Zero for the
*        function value itself.
*     tx
*        Pointer to a sequence of knots defining the piecewise polynomial in
*        the x direction (length (nx+kx)).
*     ty
*        Pointer to a sequence of knots defining the piecewise polynomial in
*        the y direction (length (ny+ky)).
*     nx
*        The number of interpolation points in x. That is, the number of B-spline
*        coefficients in x (nx = sum of knot multiplicities - kx).
*     ny
*        The number of interpolation points in y. That is, the number of B-spline
*        coefficients in y (ny = sum of knot multiplicities - ky).
*     kx
*        Order of polynomial pieces in x.
*     ky
*        Order of polynomial pieces in y.
*     bcoef
*        Pointer to array (size nx*ny) holding the B-spline coefficients.
*     work
*        Work array (size 3*max(kx,ky) + ky)
*     status
*        Pointer to global error status.

*  Notes:
*     This code is based on the Fortran routine db2val, part of the public
*     domain CMLIB package. Array indices have been changed from one-based
*     to zero-based.

*/

/* Local Variables. */
   double result;
   int iloy;
   int inbv;
   int inbvx;
   int iw;
   int k;
   int kcol;
   int lefty;
   int mflag;

/* Check inherited status */
   if( !astOK ) return AST__BAD;

   if( xval < tx[0] || xval > tx[nx + kx - 1] ||
       yval < ty[0] || yval > ty[ny + ky - 1] ) return def;

   iloy = 0;
   inbvx = 0;

   Dintrv( ty, ny + ky, yval, &iloy, &lefty, &mflag );

/* Following code commented out by DSB in order to ensure good
   output values for input positions on the upper Y limit
   if( mflag != 0 ) return AST__BAD; */



/* ------------------------------------------------------------
   Following code added by DSB to ensure good output values for
   input positions on the upper Y limit. */
   if( mflag != 0 ) {
      if( yval > ty[ lefty ] ) return AST__BAD;

      while( lefty != ky - 1 ) {
         lefty--;
         if( yval != ty[ lefty ] ) break;
      }

      if( lefty == ky - 1 ) return AST__BAD;
   }
/* ------------------------------------------------------------*/



   iw = ky;
   kcol = lefty - ky;
   for (k = 0; k < ky; k++) {
      kcol++;
      work[ k ] = Dbvalu( tx, bcoef + nx*kcol, nx, kx, idx, xval,
                          inbvx, work + iw, status );
   }

   inbv = 0;
   kcol = lefty - ky + 1;
   result = Dbvalu( ty + kcol, work, ky, ky, idy, yval, inbv,
                    work + iw, status );

   return result;
}

static double Dbvalu( const double *t, const double *a, int n, int k, int ideriv,
                      double x, int inbv, double *work, int *status ) {
/*
*  Name:
*     Dbvalu

*  Purpose:
*     Evaluate a B-spline value or derivative at a given position

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     double Dbvalu( const double *t, const double *a, int n, int k, int ideriv,
*                    double x, int inbv, double *work, int *status )

*  Class Membership:
*     SplineMap member function

*  Description:
*     This function  evaluates the B-representation (T,A,N,k) of a B-spline
*     at X for the function value on IDERIV=0 or any of its derivatives on
*     IDERIV=1,2,...,k-1.  Right limiting values (right derivatives) are returned
*     except at the right end point x=t[n] where left limiting values are computed.
*     The spline is defined on t[k-1] <= x <= t[n].  A value of AST__BAD is returned
*     when x is outside this interval.
*
*     To compute left derivatives or left limiting values at a knot t[i], replace n
*     by i and set x=t[i], i=k,n.

*  Parameters:
*     t
*        knot vector of length n + k.
*     a
*        B-spline coefficient vector of length n.
*     n
*        Number of B-spline coefficients (n = sum of knot multiplicities - k).
*     k
*        Order of the B-spline, k >= 1.
*     ideriv
*        Order of the derivative, 0 <= ideriv <= k-1. Zero returns the B-spline value
*        itself.
*     x
*        Argument, t[k-1] <= x <= t[n]
*     inbv
*        An initialization parameter which must be set to 0 the first time Dbvalu is
*        called.
*     work
*        Work vector of length 3*k.
*     status
*        Pointer to global error status.

*  Notes:
*     This code is based on the Fortran routine Dbvalu, part of the public
*     domain CMLIB package. Array indices have been changed from one-based
*     to zero-based.

*/

/* Local Variables: */
   double fkmj;
   double result;
   int i;
   int iderp1;
   int ilo;
   int ihi;
   int ihmkmj;
   int imk;
   int imkpj;
   int ip1;
   int ip1mj;
   int ipj;
   int j1;
   int j2;
   int j;
   int jj;
   int km1;
   int kmider;
   int kmj;
   int kpk;
   int mflag;

/* Check inherited status */
   if( !astOK ) return AST__BAD;

   if( k < 1 || n < k || ideriv < 0 ) {
      astError( AST__INTER, "SplineMap: Dbvalu called with inappropriate "
                "arguments (internal AST programming error).", status );
      return AST__BAD;
   }

/* A spline of order k is a piecewise polynomial of degree k-1, so any
   derivative of order k or higher is identically zero within each piece.
   This arises from valid data - e.g. the iterative inverse requesting the
   Jacobian of an order-1 spline - so return the mathematical value rather
   than reporting an error.  A zero Jacobian makes the inverse iteration
   flag its points as singular, yielding AST__BAD outputs. */
   if( ideriv >= k ) return 0.0;

   if( x < t[ k - 1 ] ) return AST__BAD;
   kmider = k - ideriv;

/* Find i in (k-1,n-1) such that
   t[i] <= x < t[i+1] (or <= t[i+1] if t[i] < t[i+1] = t[n]) */
   km1 = k - 1;
   Dintrv( t, n + 1, x, &inbv, &i, &mflag );

   if( mflag != 0 ) {
      if( x > t[ i ] ) return AST__BAD;

      while( i != k - 1 ) {
         i--;
         if( x != t[ i ] ) break;
      }

/* Following line commented out by DSB in order to generate good output values
   for input positions on the upper Y limit.
      if( i == k - 1 ) return AST__BAD; */
   }

/* Difference the coefficients ideriv times.
   work[i] = aj[i], work[k+i] = dp[i], work[k+k+i] = dm[i], i=0,k-1 */

   imk = i - k + 1;
   for( j = 0; j < k; j++ ) {
      imkpj = imk + j;
      work[ j ] = a[ imkpj ];
   }

   if( ideriv != 0 ) {
      for( j = 1; j <= ideriv; j++ ) {
         kmj = k - j;
         fkmj = (double)kmj;
         for( jj = 0; jj < kmj; jj++ ) {
            ihi = i + jj + 1;
            ihmkmj = ihi - kmj;
            work[ jj ] = (work[ jj + 1 ] - work[ jj ]) / (t[ ihi ] - t[ ihmkmj ]) * fkmj;
         }
      }
   }

/* Compute value at x in (t(i), t(i+1)) of ideriv-th derivative given its
   relevevant B-spline coeff. in a[0],...,a[k-ideriv-1]. */
   if( ideriv != km1 ) {

      ip1 = i + 1;
      kpk = k + k;
      j1 = k;
      j2 = kpk;

      for( j = 1; j <= kmider; j++ ) {
         ipj = i + j;
         work[ j1 ] = t[ ipj ] - x;
         ip1mj = ip1 - j;
         work[ j2 ] = x - t[ ip1mj ];
         j1++;
         j2++;
      }

      iderp1 = ideriv + 1;
      for( j = iderp1; j <= km1; j++ ) {
         kmj = k - j;
         ilo = kmj - 1;
         for( jj = 0; jj < kmj; jj++ ) {
            work[ jj ] = (work[ jj + 1 ] * work[ kpk + ilo ] + work[ jj ] * work[ k + jj ]) / (work[ kpk + ilo ] + work[ k + jj ]);
            ilo--;
         }
      }
   }

   result = work[ 0 ];
   return result;

}

static void Dintrv( const double *xt, int lxt, double x, int *ilo, int *ileft,
                    int *mflag ) {
/*
*  Name:
*     Dintrv

*  Purpose:
*     Find the knot containing a given x value.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     void Dintrv( const double *xt, int lxt, double x, int *ilo, int *ileft,
*                  int *mflag )

*  Class Membership:
*     SplineMap member function

*  Description:
*     This function  computes the largest integer 'ileft' in [0,lxt-1] such
*     that xt[ileft] <= x. Precisely,
*
*      if( x < xt[ 0 ] )                 then ileft=1 and mflag=-1
*      if( xt[ i ] <= x < xt[ i + 1 ] ) then ileft=i and mflag=0
*      if( xt[ lxt - 1 ] <= x )          then ileft=lxt-1 and mflag=1
*
*     That is, when multiplicities are present in the break point to the
*     left of x, the largest index is taken for 'ileft'.

*  Parameters:
*     xt
*        Array containing the position of the knots in the x-direction,
*        in non-decreasing order.
*     lxt
*        The total number of knots in the x-direction (i.e. the length of "tx").
*     x
*        The x co-ordinate of the point to be transformed.
*     ilo
*        An initialization parameter which must be set to 0 before the first
*        time the spline array 'xt' is processed by this function. On
*        exit, 'ilo' contains information for efficient processing after the
*        initial call and 'ilo' must not be changed by the caller.  Distinct
*        splines require distinct 'ilo' parameters.
*     ileft
*        Returned holding the largest integer satisfying 'xt[ileft] <= x'
*        (zero-based).
*     mflag
*        Returned holding a flag that indicates when X is out of bpunds.

*  Notes:
*     This code is a transliteration of the Fortran routine Dintrv, part of the public
*     domain CMLIB package. Array indices have been changed from one-based to
*     zero-based. All the use of goto remains as replaing it with better structuring
*     would be very prone to error...

*/

/* Local Variables: */
   int ihi;
   int istep;
   int middle;

   ihi = *ilo + 1;
   if( ihi < lxt - 1 ) goto label10;
   if( x >= xt[ lxt - 1 ] ) goto label110;
   if( lxt <= 1 ) goto label90;
   *ilo = lxt - 2;
   ihi = lxt - 1;

label10:
    if( x >= xt[ ihi ] ) goto label40;
    if( x >= xt[ *ilo ] ) goto label100;

/* Now x < xt[ ihi ]. Find lower bound */
    istep = 1;
label20:
    ihi = *ilo;
    *ilo = ihi - istep;
    if( *ilo <= 0 ) goto label30;
    if( x >= xt[ *ilo ] ) goto label70;
    istep = istep * 2;
    goto label20;

label30:
    *ilo = 0;
    if( x < xt[ 0 ] ) goto label90;
    goto label70;

/* Now x >= xt[ ilo ]. Find upper bound */
label40:
    istep = 1;
label50:
    *ilo = ihi;
    ihi = *ilo + istep;
    if( ihi >= lxt - 1 ) goto label60;
    if( x < xt[ ihi ] ) goto label70;
    istep = istep * 2;
    goto label50;

label60:
    if( x >= xt[ lxt - 1 ] ) goto label110;
    ihi = lxt - 1;

/* Now xt[ ilo ] <= x < xt[ ihi ]. Narrow the interval */
label70:
    middle = (*ilo + ihi) / 2;
    if( middle == *ilo ) goto label100;

/* Note: it is assumed that middle = ilo in case ihi = ilo+1 */
    if( x < xt[ middle ]) {
        ihi = middle;
        goto label70;
    } else {
        *ilo = middle;
        goto label70;
    }

label90:
    *mflag = -1;
    *ileft = 0;
    return;

label100:
    *mflag = 0;
    *ileft = *ilo;
    return;

label110:
    *mflag = 1;
    *ileft = lxt - 1;
    return;
}


static int Equal( AstObject *this_object, AstObject *that_object, int *status ) {
/*
*  Name:
*     Equal

*  Purpose:
*     Test if two SplineMaps are equivalent.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     int Equal( AstObject *this, AstObject *that, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the astEqual protected
*     method inherited from the astMapping class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     two SplineMaps are equivalent.

*  Parameters:
*     this
*        Pointer to the first Object (a SplineMap).
*     that
*        Pointer to the second Object.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the SplineMaps are equivalent, zero otherwise.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSplineMap *that;
   AstSplineMap *this;
   int i;
   int nc;
   int result;

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain pointers to the two SplineMap structures. */
   this = (AstSplineMap *) this_object;
   that = (AstSplineMap *) that_object;

/* Check the second object is a SplineMap. We know the first is a
   SplineMap since we have arrived at this implementation of the virtual
   function. */
   if( astIsASplineMap( that ) ) {

/* An inverted SplineMap has no Forward transformation. So the Invert
   flags must be equal for the two SplineMaps to be equal. */
      if( astGetInvert( this ) == astGetInvert( that ) ) {

/* Check the SplineMap properties match */
         if( this->kx == that->kx && this->ky == that->ky &&
             this->nx == that->nx && this->ny == that->ny ){

            result = 1;
            for( i = 0; i < this->nx+this->kx && result; i++ ) {
               if( !astEQUAL( this->tx[ i ], that->tx[ i ] ) ) {
                  result = 0;
               }
            }
            for( i = 0; i < this->ny+this->ky && result; i++ ) {
               if( !astEQUAL( this->ty[ i ], that->ty[ i ] ) ) {
                  result = 0;
               }
            }

            nc = this->nx*this->ny;
            for( i = 0; i < nc && result; i++ ) {
               if( !astEQUAL( this->cu[ i ], that->cu[ i ] ) ) {
                  result = 0;
               }
               if( !astEQUAL( this->cv[ i ], that->cv[ i ] ) ) {
                  result = 0;
               }
            }
         }
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

static const char *GetAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     GetAttrib

*  Purpose:
*     Get the value of a specified attribute for a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     const char *GetAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the protected astGetAttrib
*     method inherited from the Mapping class).

*  Description:
*     This function returns a pointer to the value of a specified
*     attribute for a SplineMap, formatted as a character string.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     attrib
*        Pointer to a null-terminated string containing the name of
*        the attribute whose value is required. This name should be in
*        lower case, with all white space removed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     - Pointer to a null-terminated string containing the attribute
*     value.

*  Notes:
*     - The returned string pointer may point at memory allocated
*     within the SplineMap, or at static memory. The contents of the
*     string may be over-written or the pointer may become invalid
*     following a further invocation of the same function or any
*     modification of the SplineMap. A copy of the string should
*     therefore be made if necessary.
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS           /* Pointer to thread-specific global data */
   AstSplineMap *this;            /* Pointer to the SplineMap structure */
   const char *result;          /* Pointer value to return */
   double dval;                 /* Floating point attribute value */
   int ival;                    /* Integer attribute value */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(this_object);

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Compare "attrib" with each recognised attribute name in turn,
   obtaining the value of the required attribute. If necessary, write
   the value into "getattrib_buff" as a null-terminated string in an appropriate
   format.  Set "result" to point at the result string. */

/* InvNiter. */
/* --------- */
   if ( !strcmp( attrib, "invniter" ) ) {
      ival = astGetInvNiter( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* InvTol. */
/* ------- */
   } else if ( !strcmp( attrib, "invtol" ) ) {
      dval = astGetInvTol( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* OutUnit. */
/* ------------ */
   } else if ( !strcmp( attrib, "outunit" ) ) {
      ival = astGetOutUnit( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* SplineKx */
/* -------- */
   } else if ( !strcmp( attrib, "splinekx" ) ) {
      ival = astGetSplineKx( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* SplineKy */
/* -------- */
   } else if ( !strcmp( attrib, "splineky" ) ) {
      ival = astGetSplineKy( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* SplineNx */
/* -------- */
   } else if ( !strcmp( attrib, "splinenx" ) ) {
      ival = astGetSplineNx( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* SplineNy */
/* -------- */
   } else if ( !strcmp( attrib, "splineny" ) ) {
      ival = astGetSplineNy( this );
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

static int GetIsLinear( AstMapping *this_mapping, int *status ){
/*
*  Name:
*     GetIsLinear

*  Purpose:
*     Return the value of the IsLinear attribute for a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     void GetIsLinear( AstMapping *this, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the protected astGetIsLinear
*     method inherited from the Mapping class).

*  Description:
*     This function returns the value of the IsLinear attribute for a
*     SplineMap, which is always zero.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     status
*        Pointer to the inherited status variable.
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
*     #include "splinemap.h"
*     size_t GetObjSize( AstObject *this, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the astGetObjSize protected
*     method inherited from the parent class).

*  Description:
*     This function returns the in-memory size of the supplied SplineMap,
*     in bytes.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Object size, in bytes.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSplineMap *this;         /* Pointer to SplineMap structure */
   size_t result;             /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointers to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Invoke the GetObjSize method inherited from the parent class, and then
   add on any components of the class structure defined by thsi class
   which are stored in dynamically allocated memory. */
   result = (*parent_getobjsize)( this_object, status );
   result += astTSizeOf( this->tx );
   result += astTSizeOf( this->ty );
   result += astTSizeOf( this->cu );
   result += astTSizeOf( this->cv );

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

void astInitSplineMapVtab_(  AstSplineMapVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitSplineMapVtab

*  Purpose:
*     Initialise a virtual function table for a SplineMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "splinemap.h"
*     void astInitSplineMapVtab( AstSplineMapVtab *vtab, const char *name )

*  Class Membership:
*     SplineMap vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the SplineMap class.

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
   AstMappingVtab *mapping;      /* Pointer to Mapping component of Vtab */

/* Check the local error status. */
   if ( !astOK ) return;


/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitMappingVtab( (AstMappingVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsASplineMap) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstMappingVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */
/* Store pointers to the member functions (implemented here) that provide
   virtual methods for this class. */

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   mapping = (AstMappingVtab *) vtab;
   parent_getobjsize = object->GetObjSize;
   object->GetObjSize = GetObjSize;

   parent_transform = mapping->Transform;
   mapping->Transform = Transform;

/* Store replacement pointers for methods which will be over-ridden by
   new member functions implemented here. */
   object->Equal = Equal;
   mapping->MapMerge = MapMerge;
   mapping->Rate = Rate;
   mapping->GetIsLinear = GetIsLinear;

   vtab->GetSplineKx = GetSplineKx;
   vtab->GetSplineKy = GetSplineKy;
   vtab->GetSplineNx = GetSplineNx;
   vtab->GetSplineNy = GetSplineNy;

   vtab->ClearInvNiter = ClearInvNiter;
   vtab->GetInvNiter = GetInvNiter;
   vtab->SetInvNiter = SetInvNiter;
   vtab->TestInvNiter = TestInvNiter;

   vtab->ClearInvTol = ClearInvTol;
   vtab->GetInvTol = GetInvTol;
   vtab->SetInvTol = SetInvTol;
   vtab->TestInvTol = TestInvTol;

   vtab->ClearOutUnit = ClearOutUnit;
   vtab->GetOutUnit = GetOutUnit;
   vtab->SetOutUnit = SetOutUnit;
   vtab->TestOutUnit = TestOutUnit;

   vtab->SplineCoeffs = SplineCoeffs;
   vtab->SplineKnots = SplineKnots;

   parent_clearattrib = object->ClearAttrib;
   object->ClearAttrib = ClearAttrib;
   parent_getattrib = object->GetAttrib;
   object->GetAttrib = GetAttrib;
   parent_setattrib = object->SetAttrib;
   object->SetAttrib = SetAttrib;
   parent_testattrib = object->TestAttrib;
   object->TestAttrib = TestAttrib;

/* Declare the class dump, copy and delete functions.*/
   astSetDump( vtab, Dump, "SplineMap", "Map using a bi-cubic spline" );
   astSetCopy( (AstObjectVtab *) vtab, Copy );
   astSetDelete( (AstObjectVtab *) vtab, Delete );

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static void IterInverse( AstSplineMap *this, AstPointSet *out,
                         AstPointSet *result, int *status ){
/*
*  Name:
*     IterInverse

*  Purpose:
*     Use an iterative method to evaluate the original inverse transformation
*     of a SplineMap at a set of (original) output positions.

*  Type:
*     Private function.

*  Synopsis:
*     void IterInverse( AstSplineMap *this, AstPointSet *out,
*                       AstPointSet *result, int *status )

*  Description:
*     This function transforms a set of positions using the original
*     inverse transformation of the SplineMap (i.e. the Negated attribute
*     is assumed to be zero). An iterative Newton-Raphson method is used,
*     which only requires the original forward transformation of the SplineMap
*     to be defined.

*  Parameters:
*     this
*        The SplineMap.
*     out
*        A PointSet holding the positions that are to be transformed using
*        the original inverse transformation. These correspond to outputs
*        of the original (i.e. uninverted) SplineMap
*     result
*        A PointSet into which the transformed positions are to be stored.
*        These correspond to inputs of the original (i.e. uninverted) SplineMap
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstPointSet *work;
   double **ptr_in;
   double **ptr_out;
   double **ptr_work;
   double *mat;
   double *pu;
   double *pv;
   double *px;
   double *py;
   double *pa;
   double *pb;
   double *vec;
   double a;
   double det;
   double dwork[ 4*MAX_K ];
   double maxerr;
   double vlensq;
   double xlensq;
   double xlo;
   double xhi;
   double ylo;
   double yhi;
   int *flags;
   int fwd;
   int icoord;
   int ipoint;
   int iter;
   int iw[ 2 ];
   int maxiter;
   int nconv;
   int npoint;
   int outunit;
   int sing;

/* Check inherited status */
   if( !astOK ) return;

/* See if we should use the forward or inverse transformation of the
   SplineMap. This depends on whether the SplineMap has been inverted.
   We want to use the original forward transformation (i.e. the
   transformation defined by the B-splines). */
   fwd = !astGetInvert( this );

/* See how to handle positions that fall outside the bounding box of the
   knots. */
   outunit = astGetOutUnit( this );

/* Get the number of points to be transformed. */
   npoint = astGetNpoint( out );

/* Get another PointSet to hold intermediate results. */
   work = astPointSet( npoint, 2, " ", status );

/* Get pointers to the data arrays for all PointSets. Note, here "in" and
   "out" refer to inputs and outputs of the forward transformation of the
   original uninverted SplineMap. That is, the original forward transformation
   transforms "inputs" into "outputs" and the original inverse
   transformation transforms "outputs" into "inputs". */
   ptr_in = astGetPoints( result );  /* Returned input positions */
   ptr_out = astGetPoints( out );    /* Supplied output positions */
   ptr_work = astGetPoints( work );  /* Work space */

/* Allocate an array to hold flags indicating if each position has
   converged. astCalloc will initialise it to hold zero at every element. */
   flags = astCalloc( npoint, sizeof( int ) );

/* Allocate memory to hold the Jacobian matrix at a single point. */
   mat = astMalloc( sizeof( double )*2*2 );

/* Allocate memory to hold the offset vector. */
   vec = astMalloc( sizeof( double )*2 );

/* Initialise the number of positions which have reached the required
   accuracy. */
   nconv = 0;

/* Check pointers can be used safely. */
   if( astOK ) {

/* Store the initial guess at the required input positions. It is assumed
   that the the B-splines transform (x,y) into (u,v) as follows:

      u = x + Pu(x,y)
      v = y + Pv(x,y)

   where (Pu,Pv) are small perturbations. Inverting the above gives:

      x = u - Pu(x,y)
      y = v - Pv(x,y)

   Since the perturbations are assumed to be small we can approximate
   Pu(x,y) by Pu(u,v) and Pv(x,y) by Pv(u,v):

      x = u - Pu(u,v)
      y = v - Pv(u,v)

   If we apply the B-splines directly to the supplied (u,v) values,
   the spline outputs (u',v') will be:

      u' = u + Pu(u,v)
      v' = v + Pv(u,v)

   Eliminating Pu and Pv from the above two sets of equations gives:

      x = 2.u - u'
      y = 2.v - v'

   which provide an initial approximation to the required input (x,y)
   values. First get pointers to the first element of the required arrays. */
      pu = ptr_out[ 0 ];
      pv = ptr_out[ 1 ];
      px = ptr_in[ 0 ];
      py = ptr_in[ 1 ];

/* Loop over all points. If the (u,v) values are good apply the above
   expressions to get the approximations to (x,y). */
      for( ipoint = 0; ipoint< npoint; ipoint++,pu++,pv++,px++,py++ ) {

         if( *pu != AST__BAD && *pv != AST__BAD ){

            a = Db2val( outunit?*pu:AST__BAD, *pu, *pv, 0, 0, this->tx, this->ty,
                        this->nx, this->ny, this->kx, this->ky, this->cu, dwork,
                        status );
            if( *pu != AST__BAD && a != AST__BAD ){
               *px = 2*(*pu) - a;
            } else {
               *px = *pu;
            }

            a = Db2val( outunit?*pv:AST__BAD, *pu, *pv, 0, 0, this->tx, this->ty,
                        this->nx, this->ny, this->kx, this->ky, this->cv, dwork,
                        status );
            if( *pv != AST__BAD && a != AST__BAD ){
               *py = 2*(*pv) - a;
            } else {
               *py = *pv;
            }

/* Indicate that points with bad input axis values are effectively converged. */
            if( *px == AST__BAD || *py == AST__BAD ){
               *px = AST__BAD;
               *py = AST__BAD;
               flags[ ipoint ] = 1;
               nconv++;
            }

/* Indicate that points with bad output axis values are effectively converged. */
         } else {
            *px = AST__BAD;
            *py = AST__BAD;
            flags[ ipoint ] = 1;
            nconv++;
         }
      }

/* Get the maximum number of iterations to perform. */
      maxiter = astGetInvNiter( this );

/* Get the target relative error for the returned input axis values, and
   square it. */
      maxerr = astGetInvTol( this );
      maxerr *= maxerr;

/* Save the bounds of the region covered by the knots. Reduce it by a
   tiny amount to avoid edge cases. */
      xlo = this->tx[ 0 ];
      xhi = this->tx[ this->nx + this->kx - 1 ];
      a = 1.0E-16*(xhi - xlo);
      xlo += a;
      xhi -= a;

      ylo = this->ty[ 0 ];
      yhi = this->ty[ this->ny + this->ky - 1 ];
      a = 1.0E-16*(yhi - ylo);
      ylo += a;
      yhi -= a;

/* Loop round doing iterations of a Newton-Raphson algorithm, until
   all points have achieved the required relative error, or the
   maximum number of iterations have been performed. */
      for( iter = 0; iter < maxiter && nconv < npoint && astOK; iter++ ) {

/* Restrict the input position guesses to the region covered by the
   knots. */
         px = ptr_in[ 0 ];
         py = ptr_in[ 1 ];
         for( ipoint = 0; ipoint< npoint; ipoint++,px++,py++ ) {
            if( *px != AST__BAD ) {
               if( *px < xlo ) {
                  *px = xlo;
               } else if( *px > xhi ) {
                  *px = xhi;
               }
            }
            if( *py != AST__BAD ) {
               if( *py < ylo ) {
                  *py = ylo;
               } else if( *py > yhi ) {
                  *py = yhi;
               }
            }
         }

/* Use the original forward transformation of the supplied SplineMap to
   transform the current guesses at the required input positions into
   the corresponding output positions. Store the results in the "work"
   PointSet. */
         (void) astTransform( this, result, fwd, work );

/* Modify the work PointSet so that it holds "D_out" - the offsets from the
   output positions produced by the current input position guesses, and the
   required output positions. */
         for( icoord = 0; icoord < 2; icoord++ ) {
            pa = ptr_out[ icoord ];
            pb = ptr_work[ icoord ];
            for( ipoint = 0; ipoint< npoint; ipoint++,pa++,pb++ ) {
               if( *pa != AST__BAD && *pb != AST__BAD ){
                  *pb = *pa - *pb;
               } else {
                  *pb = AST__BAD;
               }
            }
         }

/* Loop over all points. */
         px = ptr_in[ 0 ];
         py = ptr_in[ 1 ];
         for( ipoint = 0; ipoint < npoint; ipoint++,pu++,pv++,px++,py++ ) {

/* Do not change positions that have already converged. */
            if( !flags[ ipoint ] ) {

/* For each position, we now invert the matrix equation

   D_out = Jacobian.D_in

   to find a guess at the vector (D_in) holding the offsets from the
   current input positions guesses to their required values.

   Get the numerical values for the elements of the Jacobian matrix at
   the current input point guess. */
               mat[ 0 ] = Db2val( outunit?1.0:AST__BAD, *px, *py, 1, 0, this->tx,
                                  this->ty, this->nx, this->ny, this->kx, this->ky, this->cu,
                                  dwork, status );
               mat[ 1 ] = Db2val( outunit?0.0:AST__BAD, *px, *py, 0, 1, this->tx,
                                  this->ty, this->nx,this->ny, this->kx, this->ky, this->cu,
                                  dwork, status );
               mat[ 2 ] = Db2val( outunit?0.0:AST__BAD, *px, *py, 1, 0, this->tx,
                                  this->ty, this->nx,this->ny, this->kx, this->ky, this->cv,
                                  dwork, status );
               mat[ 3 ] = Db2val( outunit?1.0:AST__BAD, *px, *py, 0, 1, this->tx,
                                  this->ty, this->nx,this->ny, this->kx, this->ky, this->cv,
                                  dwork, status );

/* Store the offset from the current output position to the required
   output position. */
               vec[ 0 ] = ptr_work[ 0 ][ ipoint ];
               vec[ 1 ] = ptr_work[ 1 ][ ipoint ];

/* Find the corresponding offset from the current input position to the
   required input position. */
               if( vec[ 0 ] != AST__BAD && vec[ 1 ] != AST__BAD &&
                   mat[ 0 ] != AST__BAD && mat[ 1 ] != AST__BAD &&
                   mat[ 2 ] != AST__BAD && mat[ 3 ] != AST__BAD ){
                  palDmat( 2, mat, vec, &det, &sing, iw );
               } else {
                  sing = 1;
               }

/* If the matrix was singular, the input position cannot be evaluated so
   store a bad value for it and indicate it has converged. */
               if( sing ) {
                  *px = AST__BAD;
                  *py = AST__BAD;
                  flags[ ipoint ] = 1;
                  nconv++;

/* Otherwise, update the input position guess. */
               } else {
                  *px += vec[ 0 ];
                  *py += vec[ 1 ];
                  xlensq = (*px)*(*px) + (*py)*(*py);
                  vlensq = vec[ 0 ]*vec[ 0 ] +  vec[ 1 ]*vec[ 1 ];

/* Check for convergence. */
                  if( vlensq <= maxerr*xlensq ) {
                     flags[ ipoint ] = 1;
                     nconv++;
                  }
               }
            }
         }
      }

/* If any points failed to converge, set the corresponding output values
   to AST__BAD. */
      if( nconv < npoint ){
         px = ptr_in[ 0 ];
         py = ptr_in[ 1 ];
         for( ipoint = 0; ipoint < npoint; ipoint++,px++,py++ ) {
            if( !flags[ ipoint ] ) {
               *px = AST__BAD;
               *py = AST__BAD;
            }
         }
      }
   }

/* Free resources. */
   vec = astFree( vec );
   mat = astFree( mat );
   flags = astFree( flags );
   work = astAnnul( work );
}

static int MapMerge( AstMapping *this, int where, int series, int *nmap,
                     AstMapping ***map_list, int **invert_list, int *status ) {
/*
*  Name:
*     MapMerge

*  Purpose:
*     Simplify a sequence of Mappings containing a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     int MapMerge( AstMapping *this, int where, int series, int *nmap,
*                   AstMapping ***map_list, int **invert_list, int *status )

*  Class Membership:
*     SplineMap method (over-rides the protected astMapMerge method
*     inherited from the Mapping class).

*  Description:
*     This function attempts to simplify a sequence of Mappings by
*     merging a nominated SplineMap in the sequence with its neighbours,
*     so as to shorten the sequence if possible.
*
*     In many cases, simplification will not be possible and the
*     function will return -1 to indicate this, without further
*     action.
*
*     In most cases of interest, however, this function will either
*     attempt to replace the nominated SplineMap with a Mapping which it
*     considers simpler, or to merge it with the Mappings which
*     immediately precede it or follow it in the sequence (both will
*     normally be considered). This is sufficient to ensure the
*     eventual simplification of most Mapping sequences by repeated
*     application of this function.
*
*     In some cases, the function may attempt more elaborate
*     simplification, involving any number of other Mappings in the
*     sequence. It is not restricted in the type or scope of
*     simplification it may perform, but will normally only attempt
*     elaborate simplification in cases where a more straightforward
*     approach is not adequate.

*  Parameters:
*     this
*        Pointer to the nominated SplineMap which is to be merged with
*        its neighbours. This should be a cloned copy of the SplineMap
*        pointer contained in the array element "(*map_list)[where]"
*        (see below). This pointer will not be annulled, and the
*        SplineMap it identifies will not be modified by this function.
*     where
*        Index in the "*map_list" array (below) at which the pointer
*        to the nominated SplineMap resides.
*     series
*        A non-zero value indicates that the sequence of Mappings to
*        be simplified will be applied in series (i.e. one after the
*        other), whereas a zero value indicates that they will be
*        applied in parallel (i.e. on successive sub-sets of the
*        input/output coordinates).
*     nmap
*        Address of an int which counts the number of Mappings in the
*        sequence. On entry this should be set to the initial number
*        of Mappings. On exit it will be updated to record the number
*        of Mappings remaining after simplification.
*     map_list
*        Address of a pointer to a dynamically allocated array of
*        Mapping pointers (produced, for example, by the astMapList
*        method) which identifies the sequence of Mappings. On entry,
*        the initial sequence of Mappings to be simplified should be
*        supplied.
*
*        On exit, the contents of this array will be modified to
*        reflect any simplification carried out. Any form of
*        simplification may be performed. This may involve any of: (a)
*        removing Mappings by annulling any of the pointers supplied,
*        (b) replacing them with pointers to new Mappings, (c)
*        inserting additional Mappings and (d) changing their order.
*
*        The intention is to reduce the number of Mappings in the
*        sequence, if possible, and any reduction will be reflected in
*        the value of "*nmap" returned. However, simplifications which
*        do not reduce the length of the sequence (but improve its
*        execution time, for example) may also be performed, and the
*        sequence might conceivably increase in length (but normally
*        only in order to split up a Mapping into pieces that can be
*        more easily merged with their neighbours on subsequent
*        invocations of this function).
*
*        If Mappings are removed from the sequence, any gaps that
*        remain will be closed up, by moving subsequent Mapping
*        pointers along in the array, so that vacated elements occur
*        at the end. If the sequence increases in length, the array
*        will be extended (and its pointer updated) if necessary to
*        accommodate any new elements.
*
*        Note that any (or all) of the Mapping pointers supplied in
*        this array may be annulled by this function, but the Mappings
*        to which they refer are not modified in any way (although
*        they may, of course, be deleted if the annulled pointer is
*        the final one).
*     invert_list
*        Address of a pointer to a dynamically allocated array which,
*        on entry, should contain values to be assigned to the Invert
*        attributes of the Mappings identified in the "*map_list"
*        array before they are applied (this array might have been
*        produced, for example, by the astMapList method). These
*        values will be used by this function instead of the actual
*        Invert attributes of the Mappings supplied, which are
*        ignored.
*
*        On exit, the contents of this array will be updated to
*        correspond with the possibly modified contents of the
*        "*map_list" array.  If the Mapping sequence increases in
*        length, the "*invert_list" array will be extended (and its
*        pointer updated) if necessary to accommodate any new
*        elements.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     If simplification was possible, the function returns the index
*     in the "map_list" array of the first element which was
*     modified. Otherwise, it returns -1 (and makes no changes to the
*     arrays supplied).

*  Notes:
*     - A value of -1 will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstSplineMap *pmap0;  /* Pointer to this SplineMap */
   AstSplineMap *pmap1;  /* Pointer to neighbouring SplineMap */
   int i;                /* Index of neighbour */
   int nin;              /* Number of input coordinates for nominated SplineMap */
   int nout;             /* Number of output coordinates for nominated SplineMap */
   int ok;               /* Are SplineMaps equivalent? */
   int oldinv0;          /* Original Invert value in pmap0 */
   int oldinv1;          /* Original Invert value in pmap1 */
   int result;           /* Result value to return */

/* Initialise. */
   result = -1;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Save a pointer to the nominated SplineMap. */
   pmap0 = (AstSplineMap *) ( *map_list )[ where ];

/* The only simplification which can currently be performed is to merge a
   SplineMap with its own inverse. This can only be done in series. Obviously,
   there are potentially other simplications which could be performed, but
   time does not currently allow these to be coded. */
   if( series ) {

/* Temporarily set the Invert flag of the nominated SplineMap to the
   required value, first saving the original value so that it can be
   re-instated later. */
      oldinv0 = astGetInvert( pmap0 );
      astSetInvert( pmap0, ( *invert_list )[ where ] );

/* Get the number of inputs and outputs used by the nominated SplineMap
   now that it's Invert attribute has been set appropriately. */
      nin = astGetNin( pmap0 );
      nout = astGetNout( pmap0 );

/* Check each neighbour. */
      for( i = where - 1; i <= where + 1; i += 2 ) {

/* Continue with the next pass if the neighbour does not exist. */
         if( i < 0 || i >= *nmap ) continue;

/* Continue with the next pass if this neighbour is not a SplineMap. */
         if( ! astIsASplineMap( ( *map_list )[ i ] ) ) continue;

/* Get a pointer to it. */
         pmap1 = (AstSplineMap *) ( *map_list )[ i ];

/* The two SplineMaps can merge only if they are used in opposite
   directions. So continue if they are used in the same direction. */
         if( ( *invert_list )[ i ] == ( *invert_list )[ where ] ) continue;

/* We use the astEqual method to check that the two SplineMaps are equal.
   But at the moment they may not be equal because they may have
   different Invert flags. Therefore, temporarily set the invert flag
   of the neighbour so that it is the same as the nominated SplineMap,
   first saving the original value so that it can be re-instated later.
   Note, we have already checked that the two SplineMaps are used in opposite
   directions within the CmpMap. */
         oldinv1 = astGetInvert( pmap1 );
         astSetInvert( pmap1, ( *invert_list )[ where ] );

/* Use astEqual to check that the coefficients etc are equal in the two
   SplineMaps. */
         ok = astEqual( pmap0, pmap1 );

/* Re-instate the original value of the Invert flag in the neighbour. */
         astSetInvert( pmap1, oldinv1 );

/* Pass on to the next neighbour if the current neighbour differs from
   the nominated SplineMap. */
         if( !ok ) continue;

/* If we get this far, then the nominated SplineMap and the current
   neighbour cancel each other out, so replace each by a UnitMap. */
         pmap0 = astAnnul( pmap0 );
         pmap1 = astAnnul( pmap1 );
         if( i < where ) {
            ( *map_list )[ where ] = (AstMapping *) astUnitMap( nout, "", status );
            ( *map_list )[ i ] = (AstMapping *) astUnitMap( nout, "", status );
            ( *invert_list )[ where ] = 0;
            ( *invert_list )[ i ] = 0;
            result = i;
         } else {
            ( *map_list )[ where ] = (AstMapping *) astUnitMap( nin, "", status );
            ( *map_list )[ i ] = (AstMapping *) astUnitMap( nin, "", status );
            ( *invert_list )[ where ] = 0;
            ( *invert_list )[ i ] = 0;
            result = where;
         }

/* Leave the loop. */
         break;
      }

/* If the nominated SplineMap was not replaced by a UnitMap, then
   re-instate its original value for the Invert flag. */
      if( pmap0 ) astSetInvert( pmap0, oldinv0 );
   }

/* Return the result. */
   return result;
}

static double Rate( AstMapping *this_mapping, double *at, int ax1, int ax2, int *status ){
/*
*  Name:
*     Rate

*  Purpose:
*     Calculate the rate of change of a Mapping output.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     result = Rate( AstMapping *this, double *at, int ax1, int ax2, int *status )

*  Class Membership:
*     SplineMap member function (overrides the astRate method inherited
*     from the Mapping class ).

*  Description:
*     This function returns the rate of change of a specified output of
*     the supplied Mapping with respect to a specified input, at a
*     specified input position.

*  Parameters:
*     this
*        Pointer to the Mapping to be applied.
*     at
*        The address of an array holding the axis values at the position
*        at which the rate of change is to be evaluated. The number of
*        elements in this array should equal the number of inputs to the
*        Mapping.
*     ax1
*        The index of the Mapping output for which the rate of change is to
*        be found (output numbering starts at 0 for the first output).
*     ax2
*        The index of the Mapping input which is to be varied in order to
*        find the rate of change (input numbering starts at 0 for the first
*        input).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The rate of change of Mapping output "ax1" with respect to input
*     "ax2", evaluated at "at", or AST__BAD if the value cannot be
*     calculated.

*/

/* Local Variables: */
   AstSplineMap *this;
   const double *coef;
   double def;
   double result;
   double work[ 4*MAX_K ];
   int xder;
   int yder;

/* Initialise */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_mapping;

/* Validate the output index. */
   if ( astOK && ( ax1 < 0 || ax1 >= 2 ) ) {
      astError( AST__AXIIN, "astRate(%s): The supplied SplineMap output "
                "index (%d) is invalid; it should be in the range 1 to 2.",
                status, astGetClass( this ), ax1 + 1 );
   }

/* Validate the input index. */
   if ( astOK && ( ax2 < 0 || ax2 >= 2 ) ) {
      astError( AST__AXIIN, "astRate(%s): The supplied SplineMap input "
                "index (%d) is invalid; it should be in the range 1 to 2.",
                status, astGetClass( this ), ax2 + 1 );
   }

/* Check inputs are good */
   if( at[ 0 ] != AST__BAD && at[ 1 ] != AST__BAD ) {

/* Choose the B-spline coefficients to use, based on whether we are
   finding the rate of change of output u or output v. */
      if( ax1 == 0 ){
         coef = this->cu;
      } else {
         coef = this->cv;
      }

/* Set flags indicating which input axis is to be changed in order to
   cause a change in the selected output. */
      if( ax2 == 0 ){
         xder = 1;
         yder = 0;
      } else {
         xder = 0;
         yder = 1;
      }

      if( astGetOutUnit(this ) ){
         def = ( ax1 == ax2 ) ? 1.0 : 0.0;
      } else {
         def = AST__BAD;
      }

/* Calculate the rate of change. */
      result = Db2val( def, at[ 0 ], at[ 1 ], xder, yder, this->tx, this->ty,
                       this->nx, this->ny, this->kx, this->ky, coef, work,
                       status );
   }

   return result;
}

static void SetAttrib( AstObject *this_object, const char *setting, int *status ) {
/*
*  Name:
*     SetAttrib

*  Purpose:
*     Set an attribute value for a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     void SetAttrib( AstObject *this, const char *setting )

*  Class Membership:
*     SplineMap member function (over-rides the astSetAttrib protected
*     method inherited from the Mapping class).

*  Description:
*     This function assigns an attribute value for a SplineMap, the
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
*        Pointer to the SplineMap.
*     setting
*        Pointer to a null-terminated string specifying the new attribute
*        value.
*/

/* Local Variables: */
   AstSplineMap *this;             /* Pointer to the SplineMap structure */
   double dval;                  /* Floating point attribute value */
   int ival;                     /* Integer attribute value */
   int len;                      /* Length of setting string */
   int nc;                       /* Number of characters read by astSscanf */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Obtain the length of the setting string. */
   len = (int) strlen( setting );

/* Test for each recognised attribute in turn, using "astSscanf" to parse
   the setting string and extract the attribute value (or an offset to
   it in the case of string values). In each case, use the value set
   in "nc" to check that the entire string was matched. Once a value
   has been obtained, use the appropriate method to set it. */

/* InvNiter. */
/* --------- */
   if ( nc = 0,
        ( 1 == astSscanf( setting, "invniter= %d %n", &ival, &nc ) )
        && ( nc >= len ) ) {
      astSetInvNiter( this, ival );

/* InvTol. */
/* ------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( setting, "invtol= %lg %n", &dval, &nc ) )
        && ( nc >= len ) ) {
      astSetInvTol( this, dval );

/* OutUnit. */
/* -------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( setting, "outunit= %d %n", &ival, &nc ) )
        && ( nc >= len ) ) {
      astSetOutUnit( this, ival );

/* Define a macro to see if the setting string matches any of the
   read-only attributes of this class. */
#define MATCH(attrib) \
        ( nc = 0, ( 0 == astSscanf( setting, attrib "=%*[^\n]%n", &nc ) ) && \
                  ( nc >= len ) )

/* If the attribute was not recognised, use this macro to report an error
   if a read-only attribute has been specified. */
   } else if ( MATCH( "splinekx" ) ||
               MATCH( "splineky" ) ||
               MATCH( "splinenx" ) ||
               MATCH( "splineny" ) ){
      astError( AST__NOWRT, "astSet: The setting \"%s\" is invalid for a %s.", status,
                setting, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      (*parent_setattrib)( this_object, setting, status );
   }
}

static void SplineCoeffs( AstSplineMap *this, int f77, int axis, int nel,
                          double *coeffs, int *status ){
/*
*++
*  Name:
c     astSplineCoeffs
f     AST_SPLINECOEFFS

*  Purpose:
*     Retrieve the coefficient values used by a SplineMap.

*  Type:
*     Public function.

*  Synopsis:
c     #include "splinemap.h"
c     void astSplineCoeffs( AstSplineMap *this, int axis, int nel,
c                           double *coeffs )
f     CALL AST_SPLINECOEFFS( THIS, AXIS, NEL, COEFFS, STATUS )

*  Class Membership:
*     SplineMap method.

*  Description:
*     This function returns the coefficient values used by the spline
*     that generates the values of either the first ("u") or second "(v)"
*     output axis of the SplineMap, in the same form that they are supplied
*     to the SplineMap constructor.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the SplineMap.
c     axis
f     AXIS = INTEGER (Given)
*        The index of the output axis for which the coefficients are
*        required (1 for the "u" axis and 2 for the "v" axis).
c     nel
f     NEL = INTEGER (Given)
*        The length of the supplied
c        "coeffs"
f        COEFFS
*        array. It should be at least "Nx*Ny", where Nx and Ny are the
*        values of the SplineMap's SplineNx and SplineNy attributes.
c     coeffs
f     COEFFS( NEL ) = DOUBLE PRECISION (Returned)
*        An array in which to return the coefficients used by the
*        requested output of the SplineMap. The coefficient data is
*        returned in the form in which it is supplied to the SplineMap
*        constructor.
*
*        If the supplied array is too short to hold all the coefficients,
*        trailing coefficients are excluded. If the supplied array is
*        longer than needed to hold all the coefficients, trailing
*        elements are filled with zeros.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*     - The Invert attribute of the SplineMap is ignored. The returned
*     values always refer to the forward transformation of the SplineMap
*     as it was originally constructed.

*--
*/

/* Local Variables: */
   double *pout;
   double *pin;
   int i;
   int j;
   int nc;
   int nx;
   int ny;

/* Check the inherited status. */
   if ( !astOK ) return;

/* Fill the supplied array with zeros. */
   memset( coeffs, 0, nel*sizeof( *coeffs ) );

/* Get the number of coefficients to return. */
   nx = this->nx;
   ny = this->ny;
   nc = nx*ny;
   if( nc > nel ) nc = nel;

/* Initialise pointers to the next input and output elements to be used. */
   pin = ( axis == 1 ) ? this->cu : this->cv;
   pout = coeffs;

/* Unless this function is being called from Fortran, we need to
   transpose the array of coefficients in order to undo the transposition
   that was performed by the SplineMap constructor. The Fortran and C
   APIs use different ordering for the coefficient arrays to be consistent
   with CMLIB in Fortran and SciPy in C. Note, the "f77" argument is not
   part of the public or protected API and is not documented. It is set
   to an appropriate value by the macro that invokes this function. */
   if( !f77 ) {
      for( j = 0; j < ny; j++ ){
         for( i = 0; i < nx; i++ ){
            if( j + i*ny < nc ){
               pout[ j + i*ny ] = pin[ i + j*nx ];
            }
         }
      }

/* In Fortran just copy the coefficients into the supplied array. */
   } else {
      for( i = 0; i < nc; i++ )*(pout++) = *(pin++);
   }
}

static void SplineKnots( AstSplineMap *this, int axis, int nel,
                         double *knots, int *status ){
/*
*++
*  Name:
c     astSplineKnots
f     AST_SPLINEKNOTS

*  Purpose:
*     Retrieve the knots used by a SplineMap.

*  Type:
*     Public function.

*  Synopsis:
c     #include "splinemap.h"
c     void astSplineKnots( AstSplineMap *this, int axis, int nel,
c                          double *knots )
f     CALL AST_SPLINEKNOTS( THIS, AXIS, NEL, KNOTS, STATUS )

*  Class Membership:
*     SplineMap method.

*  Description:
*     This function returns the knot positions used by the SplineMap
*     along either the "x" (first) or "y" (second) input axis.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the SplineMap.
c     axis
f     AXIS = INTEGER (Given)
*        The index of the input axis for which the knots are
*        required (1 for the "x" axis and 2 for the "y" axis).
c     nel
f     NEL = INTEGER (Given)
*        The length of the supplied
c        "knots"
f        KNOTS
*        array. It should be at least "Nx+Kx" for the "x" axis knots
*        or "Ny+Ky" for the "y" axis knots, where Nx, Ny, Kx and Ky are the
*        values of the SplineMap's SplineNx, SplineNy, SplineKx and
*        SplineKy attributes.
c     knots
f     KNOTS( NEL ) = DOUBLE PRECISION (Returned)
*        An array in which to return the knot positions used by the
*        requested input of the SplineMap.
*
*        If the supplied array is too short to hold all the knots,
*        trailing knots are excluded. If the supplied array is
*        longer than needed to hold all the knots, trailing
*        elements are filled with zeros.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Notes:
*     - The Invert attribute of the SplineMap is ignored. The returned
*     values always refer to the forward transformation of the SplineMap
*     as it was originally constructed.

*--
*/

/* Local Variables: */
   double *pin;
   int i;
   int nk;

/* Check the inherited status. */
   if ( !astOK ) return;

/* Fill the supplied array with zeros. */
   memset( knots, 0, nel*sizeof( *knots ) );

/* Get the number of values to return, and initialise a pointer to the
   next input element to be used. */
   if( axis == 1 ) {
      nk = this->nx + this->kx;
      pin = this->tx;
   } else {
      nk = this->ny + this->ky;
      pin = this->ty;
   }
   if( nk > nel ) nk = nel;

/* Copy the knot positions into the supplied array. */
   for( i = 0; i < nk; i++ ) knots[ i ] = *(pin++);
}

static int TestAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     TestAttrib

*  Purpose:
*     Test if a specified attribute value is set for a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     int TestAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the astTestAttrib protected
*     method inherited from the Mapping class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     a value has been set for one of a SplineMap's attributes.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     attrib
*        Pointer to a null-terminated string specifying the attribute
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
   AstSplineMap *this;             /* Pointer to the SplineMap structure */
   int result;                   /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Check the attribute name and test the appropriate attribute. */

/* InvNiter. */
/* --------- */
   if ( !strcmp( attrib, "invniter" ) ) {
      result = astTestInvNiter( this );

/* InvTol. */
/* ------- */
   } else if ( !strcmp( attrib, "invtol" ) ) {
      result = astTestInvTol( this );

/* OutUnit. */
/* -------- */
   } else if ( !strcmp( attrib, "outunit" ) ) {
      result = astTestOutUnit( this );

/* If the name is not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then return
   zero. */
   } else if ( !strcmp( attrib, "splinekx" ) ||
               !strcmp( attrib, "splineky" ) ||
               !strcmp( attrib, "splinenx" ) ||
               !strcmp( attrib, "splineny" ) ){
      result = 0;

/* If the attribute is still not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_testattrib)( this_object, attrib, status );
   }

/* Return the result, */
   return result;
}

static AstPointSet *Transform( AstMapping *this, AstPointSet *in,
                               int forward, AstPointSet *out, int *status ) {
/*
*  Name:
*     Transform

*  Purpose:
*     Apply a SplineMap to transform a set of points.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     AstPointSet *Transform( AstMapping *this, AstPointSet *in,
*                             int forward, AstPointSet *out, int *status )

*  Class Membership:
*     SplineMap member function (over-rides the astTransform protected
*     method inherited from the Mapping class).

*  Description:
*     This function takes a SplineMap and a set of points encapsulated in a
*     PointSet and transforms them using the spline.

*  Parameters:
*     this
*        Pointer to the SplineMap.
*     in
*        Pointer to the PointSet holding the input coordinate data.
*     forward
*        A non-zero value indicates that the forward coordinate transformation
*        should be applied, while a zero value requests the inverse
*        transformation.
*     out
*        Pointer to a PointSet which will hold the transformed (output)
*        coordinate values. A NULL value may also be given, in which case a
*        new PointSet will be created by this function.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the output (possibly new) PointSet.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*     -  The number of coordinate values per point in the input PointSet must
*     match the number of coordinates for the SplineMap being applied.
*     -  If an output PointSet is supplied, it must have space for sufficient
*     number of points and coordinate values per point to accommodate the
*     result. Any excess space will be ignored.
*/

/* Local Variables: */
   AstPointSet *result;          /* Pointer to output PointSet */
   AstSplineMap *map;            /* Pointer to SplineMap to be applied */
   double **ptr_in;              /* Pointer to input coordinate data */
   double **ptr_out;             /* Pointer to output coordinate data */
   double *xin;                  /* Pointer to next X input axis value */
   double *yin;                  /* Pointer to next Y input axis value */
   double *xout;                 /* Pointer to next X output axis value */
   double *yout;                 /* Pointer to next Y output axis value */
   double work[ 4*MAX_K ];       /* Work array */
   int npoint;                   /* Number of points */
   int outunit;                  /* Value of OutUnit attribute */
   int point;                    /* Loop counter for points */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the SplineMap. */
   map = (AstSplineMap *) this;

/* Apply the parent mapping using the stored pointer to the Transform member
   function inherited from the parent Mapping class. This function validates
   all arguments and generates an output PointSet if necessary, but does not
   actually transform any coordinate values. */
   result = (*parent_transform)( this, in, forward, out, status );

/* We will now extend the parent astTransform method by performing the
   calculations needed to generate the output coordinate values. */

/* See how to handle positions that fall outside the bounding box of the
   knots. */
   outunit = astGetOutUnit( this );

/* Determine the numbers of points from the input PointSet and obtain pointers
   for accessing the input and output coordinate values. */
   npoint = astGetNpoint( in );
   ptr_in = astGetPoints( in );
   ptr_out = astGetPoints( result );

/* Determine whether to apply the forward or inverse mapping, according to the
   direction specified and whether the mapping has been inverted. */
   if ( astGetInvert( map ) ) forward = !forward;

/* Perform coordinate arithmetic. */
/* ------------------------------ */
   if( astOK ){

/* First do the forward transformation. */
      if( forward ){

/* Loop to apply the polynomial to each point in turn.*/
         xin = ptr_in[ 0 ];
         yin = ptr_in[ 1 ];
         xout = ptr_out[ 0 ];
         yout = ptr_out[ 1 ];
         for ( point = 0; point < npoint; point++,xin++,yin++,xout++,yout++ ) {

/* If the input position is good calculate the output X and Y axis
   values. */
            if( *xin != AST__BAD && *yin != AST__BAD ){
               *xout =  Db2val( outunit?*xin:AST__BAD, *xin, *yin, 0, 0, map->tx, map->ty,
                                map->nx, map->ny, map->kx, map->ky, map->cu, work, status );
               *yout =  Db2val( outunit?*yin:AST__BAD, *xin, *yin, 0, 0, map->tx, map->ty,
                                map->nx, map->ny, map->kx, map->ky, map->cv, work, status );

/* If the input position is bad store bad output values. */
            } else {
               *xout =  AST__BAD;
               *yout =  AST__BAD;
            }
         }

/* If using the inverse transformation, use an iterative metrhod. */
      } else {
         IterInverse( map, in, result, status );
      }
   }

/* Return a pointer to the output PointSet. */
   return result;
}

/* Functions which access class attributes. */
/* ---------------------------------------- */
/* Implement member functions to access the attributes associated with
   this class using the macros defined for this purpose in the
   "object.h" file. For a description of each attribute, see the class
   interface (in the associated .h file). */


/* InvNiter. */
/* --------- */
/*
*att++
*  Name:
*     InvNiter

*  Purpose:
*     Maximum number of iterations for the iterative inverse transformation.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This attribute controls the iterative inverse transformation.
*
*     Its value gives the maximum number of iterations of the
*     Newton-Raphson algorithm to be used for each transformed position.
*     If the iterative inverse fails to converge to the target relative
*     error specified by attribute InvTol within the number of iterations
*     specified by InvNiter, then the value AST__BAD is returned for both
*     output axis values (the value returned can be changed by setting
*     the OutUnit attribute).
*
*     The default value for InvNiter is 6. See also attribute InvTol.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*att--
*/
astMAKE_CLEAR1(SplineMap,InvNiter,invniter,(astClearIsSimple(this),-INT_MAX))
astMAKE_GET(SplineMap,InvNiter,int,0,( this->invniter == -INT_MAX ? 6 : this->invniter))
astMAKE_SET1(SplineMap,InvNiter,int,invniter,(
            ( value != this->invniter ) ? astClearIsSimple(this) : (void)0,
            value))
astMAKE_TEST(SplineMap,InvNiter,( this->invniter != -INT_MAX ))

/* InvTol. */
/* ------- */
/*
*att++
*  Name:
*     InvTol

*  Purpose:
*     Target relative error for the iterative inverse transformation.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute controls the iterative inverse transformation.
*
*     Its value gives the target relative error in the axis values of
*     each transformed position (the change in axis value divided by
*     the absolute axis value). Further iterations will be performed
*     until the target relative error is reached, or the maximum number
*     of iterations given by attribute InvNiter is reached. If the target
*     relative error is not reached within the maximum number of iterations
*     the value AST__BAD is returned for both output axis values.

*     The default value for InvTol is 1.0E-6.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.
*att--
*/
astMAKE_CLEAR1(SplineMap,InvTol,invtol,(astClearIsSimple(this),AST__BAD))
astMAKE_GET(SplineMap,InvTol,double,0.0,( this->invtol == AST__BAD ? 1.0E-6 : this->invtol))
astMAKE_SET1(SplineMap,InvTol,double,invtol,(
            ( value != this->invtol ) ? astClearIsSimple(this) : (void)0,
            value))
astMAKE_TEST(SplineMap,InvTol,( this->invtol != AST__BAD ))

/* OutUnit. */
/* -------- */
/*
*att++
*  Name:
*     OutUnit

*  Purpose:
*     Determines how out-of-bounds input positions are handled.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This attribute controls the output values returned by the original
*     forward transformation (i.e. assuming the SplineMap has not been
*     inverted) when transforming input positions that fall outside the
*     bounds of the knot positions stored within the SplineMap.
*
*     If the OutUnit value is zero (the default), AST__BAD is returned
*     for both output axes at such points.
*
*     If the OutUnit value is non-zero, the forward transformation
*     behaves like a unit mapping at such points (i.e. the input axis
*     values are copied to the output axis values).

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*  Notes:
*     - The setting of this attribute also affects the value returned by
*     the astRate method.

*att--
*/
astMAKE_CLEAR1(SplineMap,OutUnit,outunit,(astClearIsSimple(this),-INT_MAX))
astMAKE_GET(SplineMap,OutUnit,int,0,(this->outunit==-INT_MAX?0:this->outunit))
astMAKE_SET1(SplineMap,OutUnit,int,outunit,(
            ( (value?1:0) != this->outunit ) ? astClearIsSimple(this) : (void)0,
            (value?1:0)))
astMAKE_TEST(SplineMap,OutUnit,(this->outunit!=-INT_MAX))

/* SplineKx. */
/* --------- */
/*
*att++
*  Name:
*     SplineKx

*  Purpose:
*     The order of the splines along the input X axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This attribute specifies the order of the splines along the first
*     input axis ("X"). It is one more than the degree of the piecewise
*     polynomial used by the spline (e.g. SplineKx is 4 for a cubic
*     spline in the X direction). The value is specified when a SplineMap
*     is first created and cannot subsequently be changed.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*att--
*/
astMAKE_GET(SplineMap,SplineKx,int,0,this->kx)


/* SplineKy. */
/* --------- */
/*
*att++
*  Name:
*     SplineKy

*  Purpose:
*     The order of the splines along the input Y axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This attribute specifies the order of the splines along the second
*     input axis ("Y"). It is one more than the degree of the piecewise
*     polynomial used by the spline (e.g. SplineKy is 4 for a cubic
*     spline in the Y direction). The value is specified when a SplineMap
*     is first created and cannot subsequently be changed.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*att--
*/
astMAKE_GET(SplineMap,SplineKy,int,0,this->ky)


/* SplineNx. */
/* --------- */
/*
*att++
*  Name:
*     SplineNx

*  Purpose:
*     The number of spline coefficients along the input X axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This attribute specifies the number of spline coefficients along the
*     first input axis ("X"). The value is specified when a SplineMap
*     is first created and cannot subsequently be changed.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*att--
*/
astMAKE_GET(SplineMap,SplineNx,int,0,this->nx)

/* SplineNy. */
/* --------- */
/*
*att++
*  Name:
*     SplineNy

*  Purpose:
*     The number of spline coefficients along the input Y axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer, read-only.

*  Description:
*     This attribute specifies the number of spline coefficients along the
*     second input axis ("Y"). The value is specified when a SplineMap
*     is first created and cannot subsequently be changed.

*  Applicability:
*     SplineMap
*        All SplineMaps have this attribute.

*att--
*/
astMAKE_GET(SplineMap,SplineNy,int,0,this->ny)



/* Copy constructor. */
/* ----------------- */
static void Copy( const AstObject *objin, AstObject *objout, int *status ) {
/*
*  Name:
*     Copy

*  Purpose:
*     Copy constructor for SplineMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Copy( const AstObject *objin, AstObject *objout, int *status )

*  Description:
*     This function implements the copy constructor for SplineMap objects.

*  Parameters:
*     objin
*        Pointer to the SplineMap to be copied.
*     objout
*        Pointer to the SplineMap being constructed.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstSplineMap *out;              /* Pointer to output SplineMap */
   AstSplineMap *in;               /* Pointer to input SplineMap */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the input and output SplineMaps. */
   in= (AstSplineMap *) objin;
   out = (AstSplineMap *) objout;

/* Nullify the pointers stored in the output object since these will
   currently be pointing at the input data (since the output is a simple
   byte-for-byte copy of the input). Otherwise, the input data could be
   freed by accident if the output object is deleted due to an error
   occuring in this function. */
   out->tx = NULL;
   out->ty = NULL;
   out->cu = NULL;
   out->cv = NULL;

/* Allocate memory holding copies of the arrays in the SplineMap
   structure. */
   out->tx = (double *) astStore( NULL, (void *) in->tx,
                                  sizeof(double)*(size_t)(in->nx+in->kx) );
   out->ty = (double *) astStore( NULL, (void *) in->ty,
                                  sizeof(double)*(size_t)(in->ny+in->ky) );
   out->cu = (double *) astStore( NULL, (void *) in->cu, sizeof(double)*
                                  (size_t)(in->nx*in->ny) );
   out->cv = (double *) astStore( NULL, (void *) in->cv, sizeof(double)*
                                  (size_t)(in->nx*in->ny) );

/* If an error occurred, free any allocated memory. */
   if ( !astOK ) {
      out->tx = astFree( out->tx );
      out->ty = astFree( out->ty );
      out->cu = astFree( out->cu );
      out->cv = astFree( out->cv );
   }

}

/* Destructor. */
/* ----------- */
static void Delete( AstObject *obj, int *status ) {
/*
*  Name:
*     Delete

*  Purpose:
*     Destructor for SplineMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Delete( AstObject *obj, int *status )

*  Description:
*     This function implements the destructor for SplineMap objects.

*  Parameters:
*     obj
*        Pointer to the SplineMap to be deleted.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - This destructor does nothing and exists only to maintain a
*     one-to-one correspondence between destructors and copy
*     constructors.
*/

/* Local Variables: */
   AstSplineMap *this;              /* Pointer to SplineMap */

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) obj;

/* Free the arrays stored in the SplineMap structure. */
   this->tx = astFree( this->tx );
   this->ty = astFree( this->ty );
   this->cu = astFree( this->cu );
   this->cv = astFree( this->cv );
}

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for SplineMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the SplineMap class to an output Channel.

*  Parameters:
*     this
*        Pointer to the SplineMap whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Constants: */
#define COMMENT_LEN 50           /* Maximum length of a comment string */
#define KEY_LEN 50               /* Maximum length of a keyword */

/* Local Variables: */
   AstSplineMap *this;           /* Pointer to the SplineMap structure */
   char buff[ KEY_LEN + 1 ];     /* Buffer for keyword string */
   char comm[ 100 ];             /* Buffer for comment string */
   double dval;                  /* Floating point attribute value */
   int i;
   int ival;                     /* Integer value */
   int nc;
   int set;                      /* Attribute value set? */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SplineMap structure. */
   this = (AstSplineMap *) this_object;

/* Write out values representing the instance variables for the
   SplineMap class.  Accompany these with appropriate comment strings,
   possibly depending on the values being written.*/
   astWriteInt( channel, "KX", 1, 1, this->kx, "Polynomial order in X direction" );
   astWriteInt( channel, "KY", 1, 1, this->ky, "Polynomial order in Y direction" );
   astWriteInt( channel, "NX", 1, 1, this->nx, "No. of coeffs in X direction" );
   astWriteInt( channel, "NY", 1, 1, this->ny, "No. of coeffs in Y direction" );

   for( i = 0; i < this->nx + this->kx; i++ ){
      (void) sprintf( buff, "TX%d", i + 1 );
      (void) sprintf( comm, "Knot %d x position", i + 1 );
       astWriteDouble( channel, buff, 1, 1, (this->tx)[ i ], comm );
   }

   for( i = 0; i < this->ny + this->ky; i++ ){
      (void) sprintf( buff, "TY%d", i + 1 );
      (void) sprintf( comm, "Knot %d y position", i + 1 );
       astWriteDouble( channel, buff, 1, 1, (this->ty)[ i ], comm );
   }

   nc = this->nx*this->ny;
   for( i = 0; i < nc; i++ ){
      (void) sprintf( buff, "CU%d", i + 1 );
      (void) sprintf( comm, "X coeff %d", i + 1 );
       astWriteDouble( channel, buff, 1, 1, (this->cu)[ i ], comm );
   }
   for( i = 0; i < nc; i++ ){
      (void) sprintf( buff, "CV%d", i + 1 );
      (void) sprintf( comm, "Y coeff %d", i + 1 );
       astWriteDouble( channel, buff, 1, 1, (this->cv)[ i ], comm );
   }

/* Max number of iterations for iterative inverse. */
   set = TestInvNiter( this, status );
   ival = set ? GetInvNiter( this, status ) : astGetInvNiter( this );
   astWriteInt( channel, "NiterInv", set, 0, ival, "Max number of iterations for iterative inverse" );

/* How to transform out-of-bounds inputs. */
   set = TestOutUnit( this, status );
   ival = set ? GetOutUnit( this, status ) : astGetOutUnit( this );
   astWriteInt( channel, "OutUnit", set, 0, ival, "How to handle out-of-bounds points" );

/* Target relative error for iterative inverse. */
   set = TestInvTol( this, status );
   dval = set ? GetInvTol( this, status ) : astGetInvTol( this );
   astWriteDouble( channel, "TolInv", set, 0, dval, "Target relative error for iterative inverse" );

/* Undefine macros local to this function. */
#undef COMMENT_LEN
#undef KEY_LEN
}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsASplineMap and astCheckSplineMap functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(SplineMap,Mapping)
astMAKE_CHECK(SplineMap)

AstSplineMap *astSplineMap_( int kx, int ky, int nx, int ny, const double tx[],
                             const double ty[], const double cu[],
                             const double cv[], const char *options, int *status, ...) {
/*
*++
*  Name:
c     astSplineMap
f     AST_SPLINEMAP

*  Purpose:
*     Create a SplineMap.

*  Type:
*     Public function.

*  Synopsis:
c     #include "splinemap.h"
c     AstSplineMap *astSplineMap( int kx, int ky, int nx, int ny,
c                                 const double tx[], const double ty[],
c                                 const double cu[], const double cv[],
c                                 const char *options, ... )
f     RESULT = AST_SPLINEMAP( KX, KY, NX, NY, TX, TY, CU, CV, OPTIONS, STATUS )

*  Class Membership:
*     SplineMap constructor.

*  Description:
*     This function creates a new SplineMap and optionally initialises its
*     attributes.
*
*     A SplineMap is a class of Mapping that has two input axes and two output
*     axes and contains a pair of two-dimensional splines (stored in B-spline
*     form). Each output coordinate of a SplineMap is the value of one of these
*     two-dimensional splines defined over the two input coordinates. The two
*     splines (one generating the first output coordinate and the other
*     generating the second output coordinate) share the same order and the
*     same knot positions, but have coefficients that are specified separately.
*
*     An iterative method is used to evaluate the inverse transformation based
*     on the forward transformation (see attributes InvTol and InvNiter). This
*     puts some restrictions on how the SplineMap class is used. Specifically,
*     the output axis values must represent perturbed input axis values, rather
*     than representing the perturbations themselves. It also requires that the
*     perturbations be small. In other words, if the input axis values are
*     (x,y), the output axis values are (u,v) and the perturbations in u and v
*     are Pu(x,y) and Pv(x,y), then:
*
*     - u = x + Pu(x,y)
*     - v = y + Pv(x,y)
*
*     The perturbations should be sufficiently small to ensure that u
*     always increases with x and that v always increases with y. The
*     knots and coefficients of the B-splines supplied when the SplineMap
*     is constructed should ensure that each B-spline value represents the
*     sum of the input axis value and the perturbation. For instance, the
*     first supplied B-spline should have value x + Pu(x,y) and not just
*     Pu(x,y).

*  Parameters:
c     kx
f     KX = INTEGER (Given)
*        The order of the spline along the first ("x") input axis (e.g. 4
*        for a bi-cubic spline). This must be in the range [1,6].
c     ky
f     KY = INTEGER (Given)
*        The order of the spline along the second ("y") input axis (e.g. 4
*        for a bi-cubic spline). This must be in the range [1,6].
c     nx
f     NX = INTEGER (Given)
*        The number of B-spline coefficients along the first input axis
*        ("x"). Must be larger than or equal to
c        kx.
f        KX.
c     ny
f     NY = INTEGER (Given)
*        The number of B-spline coefficients along the second input axis
*        ("y"). Must be larger than or equal to
c        ky.
f        KY.
c     tx
f     TX( NX+KX ) = DOUBLE PRECISION (Given)
c        An array of length "nx+kx"
f        An array
*        holding the knots along the first input axis ("x"). These must be
*        supplied in non-decreasing order.
c     ty
f     TY( NY+KY ) = DOUBLE PRECISION (Given)
c        An array of length "ny+ky"
f        An array
*        holding the knots along the second input axis ("y"). These must be
*        supplied in non-decreasing order.
c     cu
f     CU( NX, NY ) = DOUBLE PRECISION (Given)
c        An array of length "nx*ny"
f        An array
*        holding the coefficients of the spline that generates the first
*        (u) output coordinate value.
c        The first "ny" elements in the array should hold the coefficients
c        for the first column, the second group of "ny" elements should hold
c        the coefficients for the second column, etc. This is the order
c        of the array returned by the BivariateSpline.get_coeffs() method
c        in the Python SciPy package.
f        This is the same format as the array of coefficients returned by the
f        DB2INK routine in the Fortran CMLIB library
f        (https://gams.nist.gov/cgi-bin/serve.cgi/Package/CMLIB).
c     cv
f     CV( NX, NY ) = DOUBLE PRECISION (Given)
c        An array of length "nx*ny"
f        An array
*        holding the coefficients of the spline that generates the second
*        (v) output coordinate value.
c        Supplied in the same order as "cu".
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new SplineMap. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new SplineMap. The syntax used is identical to that for the
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
c     astSplineMap()
f     AST_SPLINEMAP = INTEGER
*        A pointer to the new SplineMap.

*  Notes:
*     - No extrapolation is performed - input positions that are outside the
*     area covered by the supplied knots will generate AST__BAD output values.
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.

*  Status Handling:
*     The protected interface to this function includes an extra
*     parameter at the end of the parameter list descirbed above. This
*     parameter is a pointer to the integer inherited status
*     variable: "int *status".

*--
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstSplineMap *new;            /* Pointer to new SplineMap */
   va_list args;                 /* Variable argument list */
   double *newcu;                /* Cu array to use */
   double *newcv;                /* Cv array to use */
   int i,j;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* The protected interface to the SplineMap constructor will always be
   called from C (i.e. from within AST) and so the coefficient arrays
   need to be transposed to get them in the order expected by the CMLIB
   functions that do the actual transformations. */
   newcu = astMalloc( nx*ny*sizeof(*newcu) );
   newcv = astMalloc( nx*ny*sizeof(*newcv) );
   if( astOK ) {
      for( j = 0; j < ny; j++ ){
         for( i = 0; i < nx; i++ ){
            newcu[ i + j*nx ] = cu[ j + i*ny ];
            newcv[ i + j*nx ] = cv[ j + i*ny ];
         }
      }
   }

/* Initialise the SplineMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitSplineMap( NULL, sizeof( AstSplineMap ), !class_init, &class_vtab,
                          "SplineMap", kx, ky, nx, ny, tx, ty, newcu, newcv );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new SplineMap's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Free resources allocated in this function. */
   newcu = astFree( newcu );
   newcv = astFree( newcv );

/* Return a pointer to the new SplineMap. */
   return new;
}

AstSplineMap *astSplineMapId_( int kx, int ky, int nx, int ny,
                               const double tx[], const double ty[],
                               const double cu[], const double cv[], const char *options, ... ) {
/*
*  Name:
*     astSplineMapId_

*  Purpose:
*     Create a SplineMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "splinemap.h"
*     AstSplineMap *astSplineMapId( int kx, int ky, int nx, int ny,
*                                   const double tx[], const double ty[],
*                                   const double cu[], const double cv[],
*                                   const char *options, ... )

*  Class Membership:
*     SplineMap constructor.

*  Description:
*     This function implements the external (public) interface to the
*     astSplineMap constructor function. It returns an ID value (instead
*     of a true C pointer) to external users, and must be provided
*     because astSplineMap_ has a variable argument list which cannot be
*     encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable argument list also prevents this function from
*     invoking astSplineMap_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astSplineMap_.

*  Returned Value:
*     The ID value associated with the new SplineMap.
*/

/* Local Variables: */
   AstSplineMap *new;            /* Pointer to new SplineMap */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   const char *f77api;           /* Called from the F77 API? */
   double *newcu;                /* Cu array to use */
   double *newcv;                /* Cv array to use */
   int *status;                  /* Pointer to inherited status value */
   va_list args;                 /* Variable argument list */
   int i,j;

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* See if the options string ends with the special string used to indicate
   a call from the F77 API. If found, create a new copy of the options
   string that excludes the special string. */
   f77api = strstr( options, AST__F77API );
   if( f77api ){
      options = astString( options, f77api - options );

/* If not called from F77, the "cu" and "cv" arrays need to be transposed
   from the order used by SciPy to the order expected by the CMLIB functions
   that do the actual transformations. */
   } else {
      newcu = astMalloc( nx*ny*sizeof(*newcu) );
      newcv = astMalloc( nx*ny*sizeof(*newcv) );
      if( astOK ) {
         for( j = 0; j < ny; j++ ){
            for( i = 0; i < nx; i++ ){
               newcu[ i + j*nx ] = cu[ j + i*ny ];
               newcv[ i + j*nx ] = cv[ j + i*ny ];
            }
         }
      }
      cu = newcu;
      cv = newcv;
   }

/* Initialise the SplineMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitSplineMap( NULL, sizeof( AstSplineMap ), !class_init, &class_vtab,
                          "SplineMap", kx, ky, nx, ny, tx, ty, cu, cv );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new SplineMap's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Free resources allocated in this function. */
   if( !f77api ){
      newcu = astFree( newcu );
      newcv = astFree( newcv );
   } else {
      options = astFree( (void *) options );
   }

/* Return an ID value for the new SplineMap. */
   return astMakeId( new );
}

AstSplineMap *astInitSplineMap_( void *mem, size_t size, int init,
                                 AstSplineMapVtab *vtab, const char *name,
                                 int kx, int ky, int nx, int ny,
                                 const double tx[], const double ty[],
                                 const double cu[], const double cv[],
                                 int *status ) {
/*
*+
*  Name:
*     astInitSplineMap

*  Purpose:
*     Initialise a SplineMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "splinemap.h"
*     AstSplineMap *astInitSplineMap_( void *mem, size_t size, int init,
*                                      AstSplineMapVtab *vtab, const char *name,
*                                      int kx, int ky, int nx, int ny,
*                                      const double tx[], const double ty[],
*                                      const double cu[], const double cv[] )

*  Class Membership:
*     SplineMap initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new SplineMap object. It allocates memory (if necessary) to accommodate
*     the SplineMap plus any additional data associated with the derived class.
*     It then initialises a SplineMap structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a SplineMap at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the SplineMap is to be initialised.
*        This must be of sufficient size to accommodate the SplineMap data
*        (sizeof(SplineMap)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the SplineMap (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the SplineMap
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the SplineMap's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new SplineMap.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).
*     kx
*        The order of the spline in the x direction (e.g. 4 for a bi-cubic
*        spline). This must be in the range [1,6].
*     ky
*        The order of the spline in the y direction (e.g. 4 for a bi-cubic
*        spline). This must be in the range [1,6].
*     nx
*        The number of B-spline coefficients along the first input axis
*        ("x"). Must be larger than or equal to kx.
*     ny
*        The number of B-spline coefficients along the second input axis
*        ("y"). Must be larger than or equal to ky.
*     tx
*        An array of length "nx+kx" holding the knots in the x direction.
*        These should be supplied in monotonic increasing order.
*     ty
*        An array of length "ny+ky" holding the knots in the y direction.
*        These should be supplied in monotonic increasing order.
*     cu
*        An array of length "nx*ny" holding the coefficients of the spline
*        that generates the output u value.
*     cv
*        An array of length "nx*ny" holding the coefficients of the spline
*        that generates the output v value.

*  Returned Value:
*     A pointer to the new SplineMap.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstSplineMap *new;
   int i;

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Validate the supplied values. */
   if( kx < 1 || kx > MAX_K ){
      astError( AST__ATTIN, "astSplineMap: The supplied spline order in "
                "the X direction (%d) is invalid - it must be in the range [1,%d].",
                status, kx, MAX_K );
   } else if( ky < 1 || ky > MAX_K ){
      astError( AST__ATTIN, "astSplineMap: The supplied spline order in "
                "the Y direction (%d) is invalid - it must be in the range [1,%d].",
                status, ky, MAX_K );
   } else if( nx < kx ){
      astError( AST__ATTIN, "astSplineMap: The supplied number of coefficients "
                "in the X direction (%d) is too small - it must be larger "
                "than or equal to %d.", status, nx, kx );
   } else if( ny < ky ){
      astError( AST__ATTIN, "astSplineMap: The supplied number of coefficients "
                "in the Y direction (%d) is too small - it must be larger "
                "than or equal to %d.", status, ny, ky );
   } else {
      for( i = 1; i < nx+kx; i++ ){
         if( tx[ i-1 ] > tx[ i ] ){
            astError( AST__ATTIN, "astSplineMap: The supplied knots in the X "
                      "direction are not monotonic increasing.", status );
            break;
         }
      }
      if( astOK ) {
         for( i = 1; i < ny+ky; i++ ){
            if( ty[ i-1 ] > ty[ i ] ){
               astError( AST__ATTIN, "astSplineMap: The supplied knots in the Y "
                         "direction are not monotonic increasing.", status );
               break;
            }
         }
      }
   }

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitSplineMapVtab( vtab, name );

/* Initialise. */
   new = NULL;

/* Initialise a Mapping structure (the parent class) as the first component
   within the SplineMap structure, allocating memory if necessary. Specify that
   the Mapping should be defined in both directions. */
   new = (AstSplineMap *) astInitMapping( mem, size, 0,
                                         (AstMappingVtab *) vtab, name,
                                         2, 2, 1, 1 );

   if ( astOK ) {

/* Initialise the SplineMap data. */
/* ---------------------------- */
      new->nx = nx;
      new->ny = ny;
      new->kx = kx;
      new->ky = ky;
      new->tx = astStore( NULL, tx, (nx+kx)*sizeof(*tx) );
      new->ty = astStore( NULL, ty, (ny+ky)*sizeof(*ty) );
      new->cu = astStore( NULL, cu, nx*ny*sizeof(*cu) );
      new->cv = astStore( NULL, cv, nx*ny*sizeof(*cv) );
      new->invniter = -INT_MAX;
      new->outunit = -INT_MAX;
      new->invtol = AST__BAD;

/* If an error occurred, clean up by deleting the new SplineMap. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new SplineMap. */
   return new;
}

AstSplineMap *astLoadSplineMap_( void *mem, size_t size,
                                 AstSplineMapVtab *vtab, const char *name,
                                 AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadSplineMap

*  Purpose:
*     Load a SplineMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "splinemap.h"
*     AstSplineMap *astLoadSplineMap( void *mem, size_t size,
*                                     AstSplineMapVtab *vtab, const char *name,
*                                     AstChannel *channel )

*  Class Membership:
*     SplineMap loader.

*  Description:
*     This function is provided to load a new SplineMap using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     SplineMap structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a SplineMap at the start of the memory
*     passed via the "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory into which the SplineMap is to be
*        loaded.  This must be of sufficient size to accommodate the
*        SplineMap data (sizeof(SplineMap)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the SplineMap (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the SplineMap structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstSplineMap) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new SplineMap. If this is NULL, a pointer
*        to the (static) virtual function table for the SplineMap class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "SplineMap" is used instead.

*  Returned Value:
*     A pointer to the new SplineMap.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Constants. */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
#define KEY_LEN 50               /* Maximum length of a keyword */

/* Local Variables: */
   AstSplineMap *new;            /* Pointer to the new SplineMap */
   char buff[ KEY_LEN + 1 ];     /* Buffer for keyword string */
   int i;
   int nc;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if ( !astOK ) return new;

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this SplineMap. In this case the
   SplineMap belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstSplineMap );
      vtab = &class_vtab;
      name = "SplineMap";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitSplineMapVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built SplineMap. */
   new = astLoadMapping( mem, size, (AstMappingVtab *) vtab, name,
                         channel );

   if ( astOK ) {

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "SplineMap" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */
      new->kx = astReadInt( channel, "kx", 0 );
      new->ky = astReadInt( channel, "ky", 0 );
      new->nx = astReadInt( channel, "nx", 0 );
      new->ny = astReadInt( channel, "ny", 0 );
      new->tx = astMalloc( (new->nx+new->kx)*sizeof(double) );
      new->ty = astMalloc( (new->ny+new->ky)*sizeof(double) );
      nc = new->nx*new->ny;
      new->cu = astMalloc( nc*sizeof(double) );
      new->cv = astMalloc( nc*sizeof(double) );
      if( astOK ) {
         for( i = 0; i < new->nx+new->kx; i++ ){
            (void) sprintf( buff, "tx%d", i + 1 );
            (new->tx)[ i ] = astReadDouble( channel, buff, AST__BAD );
         }
         for( i = 0; i < new->ny+new->ky; i++ ){
            (void) sprintf( buff, "ty%d", i + 1 );
            (new->ty)[ i ] = astReadDouble( channel, buff, AST__BAD );
         }
         for( i = 0; i < nc; i++ ){
            (void) sprintf( buff, "cu%d", i + 1 );
            (new->cu)[ i ] = astReadDouble( channel, buff, AST__BAD );
         }
         for( i = 0; i < nc; i++ ){
            (void) sprintf( buff, "cv%d", i + 1 );
            (new->cv)[ i ] = astReadDouble( channel, buff, AST__BAD );
         }

/* Max number of iterations for iterative inverse transformation. */
         new->invniter = astReadInt( channel, "niterinv", -INT_MAX );
         if ( TestInvNiter( new, status ) ) SetInvNiter( new, new->invniter, status );

/* How to handle out-of-bounds positions. */
         new->outunit = astReadInt( channel, "outunit", -INT_MAX );
         if( TestOutUnit( new, status ) ) SetOutUnit( new, new->outunit, status );

/* Target relative error for iterative inverse transformation. */
         new->invtol = astReadDouble( channel, "tolinv", AST__BAD );
         if ( TestInvTol( new, status ) ) SetInvTol( new, new->invtol, status );
      }
   }

/* If an error occurred, clean up by deleting the new SplineMap. */
   if ( !astOK ) new = astDelete( new );

/* Return the new SplineMap pointer. */
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


void astSplineCoeffs_( AstSplineMap *this, int f77, int axis, int nel,
                       double *array, int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,SplineMap,SplineCoeffs))( this, f77, axis, nel,
                                               array, status );
}

void astSplineKnots_( AstSplineMap *this, int axis, int nel, double *array,
                      int *status ){
   if ( !astOK ) return;
   (**astMEMBER(this,SplineMap,SplineKnots))( this, axis, nel,
                                              array, status );
}

