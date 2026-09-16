/*
*  Name:
*     testregionmasking

*  Purpose:
*     Verify that astMask accounts for sky curvature along Polygon edges.

*  Description:
*     A Polygon defined in a SkyFrame joins its vertices with geodesics
*     (great circles).  When such a Polygon is used to mask a pixel grid
*     with astMask, the question is whether the curved edges are honoured
*     or whether they are replaced by straight lines in the pixel grid.
*
*     This test establishes a projection-independent ground truth by
*     classifying every pixel CENTRE directly: the pixel is mapped to the
*     sky and the Polygon is asked (via astTran2) whether that sky position
*     lies inside.  This uses great-circle membership and depends on no
*     mask/simplify machinery.  The mask produced by astMask is then
*     compared against this ground truth.
*
*     Findings encoded as assertions below:
*       - astMask delegates to astResample, which calls astSimplify on the
*         Region when the grid is larger than 1024 pixels.  With the default
*         Polygon attribute SimpVertices=1, Simplify rebuilds the Polygon
*         from its vertices transformed into the GRID Frame, replacing the
*         great-circle edges with straight pixel-space lines.  For a CAR
*         projection this disagrees with the true curved boundary.
*       - Setting SimpVertices=0 makes Simplify verify that the linearised
*         edges still follow the original boundary (to within the Region
*         uncertainty); for CAR this check fails, the curved Polygon is
*         retained, and the mask matches the ground truth exactly.
*       - For a TAN (gnomonic) projection great circles map to straight
*         lines, so the linearisation is exact and the default mask already
*         matches the ground truth.  This is why the effect is invisible for
*         TAN but significant for CAR.
*
*     Differences from a FitsChan-based formulation:
*       - The CAR and TAN GRID<->SKY FrameSets were produced once from FITS
*         headers (CRVAL=180,60; CRPIX=350,250; CDELT=-0.1,0.1 deg) and are
*         embedded here in native serialised form, so this test does not
*         depend on the FitsChan class.  The serialised FrameSets are read
*         back with astFromString.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ast.h"

#define D2R ( M_PI / 180.0 )

static void stopit( int *status, const char *text );
static void checkCurvature( const char *proj, const char *wcs, int *status );

static const char *CAR_WCS =
   " Begin FrameSet\n"
   " Nframe = 2\n"
   " Base = 1\n"
   " Currnt = 2\n"
   " Lnk2 = 1\n"
   " Frm1 =\n"
   " Begin Frame\n"
   " Title = \"Pixel Coordinates\"\n"
   " Naxes = 2\n"
   " Domain = \"GRID\"\n"
   " Ax1 =\n"
   " Begin Axis\n"
   " Label = \"Pixel axis 1\"\n"
   " End Axis\n"
   " Ax2 =\n"
   " Begin Axis\n"
   " Label = \"Pixel axis 2\"\n"
   " End Axis\n"
   " End Frame\n"
   " Frm2 =\n"
   " Begin SkyFrame\n"
   " Ident = \" \"\n"
   " IsA Object\n"
   " Naxes = 2\n"
   " System = \"ICRS\"\n"
   " Ax1 =\n"
   " Begin SkyAxis\n"
   " End SkyAxis\n"
   " Ax2 =\n"
   " Begin SkyAxis\n"
   " End SkyAxis\n"
   " IsA Frame\n"
   " Proj = \"Cartesian\"\n"
   " SRefIs = \"Ignored\"\n"
   " SRef1 = 3.1415926535897931\n"
   " SRef2 = 1.0471975511965976\n"
   " End SkyFrame\n"
   " Map2 =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsSimp = 1\n"
   " IsA Mapping\n"
   " MapA =\n"
   " Begin WinMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " Sft1 = 0.6108652381980153\n"
   " Scl1 = -0.0017453292519943296\n"
   " Sft2 = -0.43633231299858238\n"
   " Scl2 = 0.0017453292519943296\n"
   " End WinMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " InvA = 1\n"
   " MapA =\n"
   " Begin WcsMap\n"
   " Nin = 2\n"
   " Invert = 1\n"
   " IsA Mapping\n"
   " Type = \"CAR\"\n"
   " End WcsMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " InvA = 1\n"
   " MapA =\n"
   " Begin SphMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " Invert = 1\n"
   " IsA Mapping\n"
   " UntRd = 1\n"
   " PlrLg = 0\n"
   " End SphMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " IsA Mapping\n"
   " MapA =\n"
   " Begin MatrixMap\n"
   " Nin = 3\n"
   " IsA Mapping\n"
   " M0 = -0.50000000000000011\n"
   " M1 = 0\n"
   " M2 = 0.8660254037844386\n"
   " M3 = 0\n"
   " M4 = -1\n"
   " M5 = 0\n"
   " M6 = 0.8660254037844386\n"
   " M7 = 0\n"
   " M8 = 0.50000000000000011\n"
   " IM0 = -0.50000000000000011\n"
   " IM1 = 0\n"
   " IM2 = 0.8660254037844386\n"
   " IM3 = 0\n"
   " IM4 = -1\n"
   " IM5 = 0\n"
   " IM6 = 0.86602540378443849\n"
   " IM7 = 0\n"
   " IM8 = 0.50000000000000011\n"
   " Form = \"Full\"\n"
   " End MatrixMap\n"
   " MapB =\n"
   " Begin SphMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " IsA Mapping\n"
   " UntRd = 1\n"
   " PlrLg = 3.1415926535897931\n"
   " End SphMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End FrameSet\n";

static const char *TAN_WCS =
   " Begin FrameSet\n"
   " Nframe = 2\n"
   " Base = 1\n"
   " Currnt = 2\n"
   " Lnk2 = 1\n"
   " Frm1 =\n"
   " Begin Frame\n"
   " Title = \"Pixel Coordinates\"\n"
   " Naxes = 2\n"
   " Domain = \"GRID\"\n"
   " Ax1 =\n"
   " Begin Axis\n"
   " Label = \"Pixel axis 1\"\n"
   " End Axis\n"
   " Ax2 =\n"
   " Begin Axis\n"
   " Label = \"Pixel axis 2\"\n"
   " End Axis\n"
   " End Frame\n"
   " Frm2 =\n"
   " Begin SkyFrame\n"
   " Ident = \" \"\n"
   " IsA Object\n"
   " Naxes = 2\n"
   " System = \"ICRS\"\n"
   " Ax1 =\n"
   " Begin SkyAxis\n"
   " End SkyAxis\n"
   " Ax2 =\n"
   " Begin SkyAxis\n"
   " End SkyAxis\n"
   " IsA Frame\n"
   " Proj = \"gnomonic\"\n"
   " SRefIs = \"Ignored\"\n"
   " SRef1 = 3.1415926535897931\n"
   " SRef2 = 1.0471975511965976\n"
   " End SkyFrame\n"
   " Map2 =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsSimp = 1\n"
   " IsA Mapping\n"
   " MapA =\n"
   " Begin WinMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " Sft1 = 0.6108652381980153\n"
   " Scl1 = -0.0017453292519943296\n"
   " Sft2 = -0.43633231299858238\n"
   " Scl2 = 0.0017453292519943296\n"
   " End WinMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " InvA = 1\n"
   " MapA =\n"
   " Begin WcsMap\n"
   " Nin = 2\n"
   " Invert = 1\n"
   " IsA Mapping\n"
   " Type = \"TAN\"\n"
   " End WcsMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 2\n"
   " IsA Mapping\n"
   " InvA = 1\n"
   " MapA =\n"
   " Begin SphMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " Invert = 1\n"
   " IsA Mapping\n"
   " UntRd = 1\n"
   " PlrLg = 0\n"
   " End SphMap\n"
   " MapB =\n"
   " Begin CmpMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " IsA Mapping\n"
   " MapA =\n"
   " Begin MatrixMap\n"
   " Nin = 3\n"
   " IsA Mapping\n"
   " M0 = -0.8660254037844386\n"
   " M1 = 0\n"
   " M2 = -0.5\n"
   " M3 = 0\n"
   " M4 = -1\n"
   " M5 = 0\n"
   " M6 = -0.5\n"
   " M7 = 0\n"
   " M8 = 0.8660254037844386\n"
   " IM0 = -0.8660254037844386\n"
   " IM1 = 0\n"
   " IM2 = -0.5\n"
   " IM3 = 0\n"
   " IM4 = -1\n"
   " IM5 = 0\n"
   " IM6 = -0.5\n"
   " IM7 = 0\n"
   " IM8 = 0.8660254037844386\n"
   " Form = \"Full\"\n"
   " End MatrixMap\n"
   " MapB =\n"
   " Begin SphMap\n"
   " Nin = 3\n"
   " Nout = 2\n"
   " IsA Mapping\n"
   " UntRd = 1\n"
   " PlrLg = 3.1415926535897931\n"
   " End SphMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End CmpMap\n"
   " End FrameSet\n";

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   astWatch( status );
   astBegin;
   *status = 0;

   checkCurvature( "CAR", CAR_WCS, status );
   checkCurvature( "TAN", TAN_WCS, status );

   astEnd;
   if( *status == 0 ) {
      printf( "All Region masking tests passed\n" );
   } else {
      printf( "Region masking tests failed\n" );
   }
   return *status ? 1 : 0;
}

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static void checkCurvature( const char *proj, const char *wcs, int *status ) {

/* A band on the sky at high declination, where the great circle joining two
   vertices at equal declination bows noticeably away from the parallel.  The
   vertices are given in (longitude,latitude) radians. */
   const double v[2][4] = {
      { 160.0*D2R, 200.0*D2R, 200.0*D2R, 160.0*D2R },
      {  50.0*D2R,  50.0*D2R,  70.0*D2R,  70.0*D2R }
   };
   const double cen[2] = { 180.0*D2R, 60.0*D2R };  /* a point inside the band */

   AstFrameSet *fs;
   AstFrame *sky;
   AstFrame *grid;
   AstMapping *sky2grid;
   AstMapping *grid2sky;
   AstPolygon *poly;
   AstPolygon *polc;
   AstRegion *rmap;
   double pin[2], pout[2];
   double lo[2], hi[2];
   double *gx, *gy, *sx, *sy, *tx, *ty;
   int *bf, *mdef, *msv0;
   int lbnd[2], ubnd[2];
   int nx, ny, npix, i, k, ix, iy;
   int err_def, err_sv0, nbf;

   if( *status != 0 ) return;
   astBegin;

/* Reconstruct the embedded GRID<->SKY FrameSet and pull out the Frames and
   Mappings we need. */
   fs = (AstFrameSet *) astFromString( wcs );
   if( !astIsAFrameSet( fs ) ) {
      stopit( status, "embedded WCS did not read back as a FrameSet" );
      astEnd;
      return;
   }
   sky = astGetFrame( fs, AST__CURRENT );
   grid = astGetFrame( fs, AST__BASE );
   sky2grid = astGetMapping( fs, AST__CURRENT, AST__BASE );
   grid2sky = astGetMapping( fs, AST__BASE, AST__CURRENT );

/* Build the Polygon in the SkyFrame.  Its edges are great circles. */
   poly = astPolygon( sky, 4, 4, (const double *) v, AST__NULL, " " );

/* Make sure the interior is the band (not its complement).  If the chosen
   vertex order selected the complement, negate so "inside" is the band. */
   pin[0] = cen[0];  pin[1] = cen[1];
   astTranN( poly, 1, 2, 1, (const double *) pin, 1, 2, 1, pout );
   if( pout[0] == AST__BAD ) astNegate( poly );

/* Determine a pixel bounding box that comfortably contains the true (curved)
   region.  Use a SimpVertices=0 copy mapped into the GRID Frame so the bounds
   follow the great-circle edges, then pad by a few pixels. */
   polc = astCopy( poly );
   astSet( polc, "SimpVertices=0" );
   rmap = astMapRegion( (AstRegion *) polc, sky2grid, grid );
   astGetRegionBounds( rmap, lo, hi );
   lbnd[0] = (int) floor( lo[0] ) - 3;
   lbnd[1] = (int) floor( lo[1] ) - 3;
   ubnd[0] = (int) ceil(  hi[0] ) + 3;
   ubnd[1] = (int) ceil(  hi[1] ) + 3;
   nx = ubnd[0] - lbnd[0] + 1;
   ny = ubnd[1] - lbnd[1] + 1;
   npix = nx*ny;

/* Ground truth: classify each pixel centre by transforming it to the sky and
   asking the Polygon directly.  astTran2 leaves interior points unchanged and
   sets exterior points to AST__BAD. */
   gx = astMalloc( sizeof( double )*(size_t) npix );
   gy = astMalloc( sizeof( double )*(size_t) npix );
   sx = astMalloc( sizeof( double )*(size_t) npix );
   sy = astMalloc( sizeof( double )*(size_t) npix );
   tx = astMalloc( sizeof( double )*(size_t) npix );
   ty = astMalloc( sizeof( double )*(size_t) npix );
   bf = astMalloc( sizeof( int )*(size_t) npix );
   mdef = astMalloc( sizeof( int )*(size_t) npix );
   msv0 = astMalloc( sizeof( int )*(size_t) npix );

   if( astOK ) {
      k = 0;
      for( iy = lbnd[1]; iy <= ubnd[1]; iy++ ) {
         for( ix = lbnd[0]; ix <= ubnd[0]; ix++ ) {
            gx[ k ] = (double) ix;
            gy[ k ] = (double) iy;
            k++;
         }
      }
      astTran2( grid2sky, npix, gx, gy, 1, sx, sy );
      astTran2( poly, npix, sx, sy, 1, tx, ty );
      for( i = 0; i < npix; i++ ) bf[ i ] = ( tx[ i ] != AST__BAD );

/* Mask using the SkyFrame Polygon directly, with the default SimpVertices=1.
   This is the ordinary astMask call a user would make. */
      for( i = 0; i < npix; i++ ) mdef[ i ] = 0;
      (void) astMaskI( poly, sky2grid, 1, 2, lbnd, ubnd, mdef, 1 );

/* Mask again with SimpVertices=0, which prevents the great-circle edges from
   being linearised during the internal simplification. */
      polc = astCopy( poly );
      astSet( polc, "SimpVertices=0" );
      for( i = 0; i < npix; i++ ) msv0[ i ] = 0;
      (void) astMaskI( polc, sky2grid, 1, 2, lbnd, ubnd, msv0, 1 );

/* Compare both masks, and the count of nominally-inside pixels, against the
   ground truth. */
      err_def = err_sv0 = nbf = 0;
      for( i = 0; i < npix; i++ ) {
         if( bf[ i ] ) nbf++;
         if( ( mdef[ i ] != 0 ) != ( bf[ i ] != 0 ) ) err_def++;
         if( ( msv0[ i ] != 0 ) != ( bf[ i ] != 0 ) ) err_sv0++;
      }

      printf( "%s: %d pixels inside (ground truth); "
              "default mask wrong at %d, SimpVertices=0 mask wrong at %d\n",
              proj, nbf, err_def, err_sv0 );

/* SimpVertices=0 must reproduce the curved ground truth exactly, for both
   projections.  This is the recommended way to mask with curved edges. */
      if( err_sv0 != 0 ) {
         char buf[ 200 ];
         sprintf( buf, "%s: SimpVertices=0 mask differs from great-circle "
                       "ground truth at %d pixels", proj, err_sv0 );
         stopit( status, buf );
      }

      if( !strcmp( proj, "TAN" ) ) {

/* Gnomonic maps great circles to straight lines, so linearising the edges is
   exact: the default mask must already match the ground truth. */
         if( err_def != 0 ) {
            char buf[ 200 ];
            sprintf( buf, "TAN: default mask differs from ground truth at %d "
                          "pixels (gnomonic should be exact)", err_def );
            stopit( status, buf );
         }

      } else {

/* For CAR the default (SimpVertices=1) mask linearises the great-circle edges
   and so must disagree with the ground truth.  If this ever becomes zero the
   default masking behaviour has changed (e.g. curvature is now honoured by
   default) and this expectation should be revisited. */
         if( err_def == 0 ) {
            stopit( status, "CAR: default mask unexpectedly matched the "
                            "great-circle ground truth; the curvature "
                            "linearisation behaviour of astMask has changed" );
         }
      }
   }

   gx = astFree( gx );
   gy = astFree( gy );
   sx = astFree( sx );
   sy = astFree( sy );
   tx = astFree( tx );
   ty = astFree( ty );
   bf = astFree( bf );
   mdef = astFree( mdef );
   msv0 = astFree( msv0 );

   astEnd;
}
