/*
 *  Test the SwitchMap class.
 *  Converted from the Fortran test testswitchmap.f.
 *
 *  The Fortran checkdump and compare subroutines used COMMON-block channel
 *  source/sink callbacks and CHR_FANDL for string trimming. This C version
 *  uses astToString/astFromString for round-trip testing, and compares
 *  objects by serializing both with astToString and using strcmp.
 *
 *  Array layout: astTranN in C uses [ncoord][indim] layout, which matches
 *  Fortran column-major [indim, ncoord] naturally.
 */
#include "ast.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

static void stopit( int i, double r, int *status ) {
   if( *status != 0 ) return;
   printf( "Error %d: %g\n", i, r );
   *status = 1;
}

static void compare( AstObject *obj1, AstObject *obj2, const char *text,
                     int *status ) {
   char *s1, *s2;
   if( *status != 0 ) return;
   s1 = astToString( obj1 );
   s2 = astToString( obj2 );
   if( !s1 || !s2 ) {
      printf( "%s: cannot serialize objects for comparison\n", text );
      *status = 1;
   } else if( strcmp( s1, s2 ) != 0 ) {
      printf( "%s: objects differ\n", text );
      *status = 1;
   }
   if( s1 ) s1 = astFree( s1 );
   if( s2 ) s2 = astFree( s2 );
}

static void checkdump( AstObject *obj, const char *text, int *status ) {
   char *pickle;
   AstObject *result;
   if( *status != 0 ) return;

   pickle = astToString( obj );
   if( !pickle ) {
      printf( "%s: cannot write object\n", text );
      *status = 1;
      return;
   }
   result = astFromString( pickle );
   if( !result ) {
      printf( "%s: cannot read object\n", text );
      pickle = astFree( pickle );
      *status = 1;
      return;
   }
   if( strcmp( astGetC( result, "Class" ), astGetC( obj, "Class" ) ) != 0 ) {
      printf( "%s: class mismatch\n", text );
      pickle = astFree( pickle );
      *status = 1;
      return;
   }
   compare( obj, result, text, status );
   pickle = astFree( pickle );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int outperm[2], inperm[2], i, oc, mc;
   double x1, x2, l1, l2, at[2], r, r1, r2;
   double p1[2], p2[2];
   AstWinMap *wm1, *wm2;
   AstPermMap *pm1, *pm2;
   AstMapping *rm[2];
   AstMapping *fs_map;
   AstMathMap *is_map, *sm;
   AstSwitchMap *swm, *swm2;
   AstCmpMap *cm;
   AstMapping *cm2;
   AstFitsChan *fc;
   AstFrameSet *fs_wcs;
   AstFrame *gridframe;
   AstRegion *box[2];
   AstSelectorMap *selmap;
   AstPermMap *is_perm;
   const char *fwd[1], *inv[1];
   char card[10][81];

   astWatch( status );
   astBegin;

   oc = astTune( "ObjectCaching", 1 );
   mc = astTune( "MemoryCaching", 1 );

   /*
    * Section 1: A 2D input grid has 2 rows and 101 columns. Each row
    * contains a spectrum. The two spectra cover overlapping regions of
    * wavelength. We use a (Nin=2,Nout=1) SwitchMap.
    */

   /* Row 1: wavelength = (gridx - 1)*10 + 1000 */
   x1 = 1.0; x2 = 101.0; l1 = 1000.0; l2 = 2000.0;
   wm1 = astWinMap( 1, &x1, &x2, &l1, &l2, " " );

   /* PermMap: pass input 1 to output, inverse supplies 1.0 for input 2 */
   outperm[0] = 1;
   inperm[0] = 1;
   inperm[1] = -1;
   {
      double con = 1.0;
      pm1 = astPermMap( 2, inperm, 1, outperm, &con, " " );
   }
   rm[0] = (AstMapping *)astCmpMap( pm1, wm1, 1, " " );

   /* Row 2: wavelength = (gridx - 1)*11 + 1600 */
   l1 = 1600.0; l2 = 2700.0;
   wm2 = astWinMap( 1, &x1, &x2, &l1, &l2, " " );
   {
      double con = 2.0;
      pm2 = astPermMap( 2, inperm, 1, outperm, &con, " " );
   }
   rm[1] = (AstMapping *)astCmpMap( pm2, wm2, 1, " " );

   /* Forward selector: use input 2 (grid Y) as selector value */
   outperm[0] = 2;
   inperm[1] = 1;
   inperm[0] = 0;
   {
      double con = 0.0;
      fs_map = (AstMapping *)astPermMap( 2, inperm, 1, outperm, &con, " " );
   }

   /* Inverse selector: wavelength > 1800 -> route 2, else route 1 */
   fwd[0] = "y";
   inv[0] = "x=qif(y>1800,2,1)";
   is_map = astMathMap( 1, 1, 1, fwd, 1, inv, " " );

   /* Create the SwitchMap */
   swm = astSwitchMap( fs_map, (AstMapping *)is_map, 2, (void **)rm, " " );

   /* Test forward transform (invert swm, use inverse direction = cancel) */
   astInvert( swm );

   {
      double in[2][4], out[4];
      in[0][0] = 1.0;   in[1][0] = 1.0;
      in[0][1] = 101.0; in[1][1] = 2.0;
      in[0][2] = 1.0;   in[1][2] = 2.0;
      in[0][3] = 101.0; in[1][3] = 1.0;
      astTranN( swm, 4, 2, 4, (const double *)in, 0, 1, 4, out );

      for( i = 0; i < 4; i++ ) {
         if( out[i] == AST__BAD ) stopit( i + 1, out[i], status );
      }
      if( fabs( out[0] - 1000.0 ) > 1.0e-5 ) stopit( 5, out[0], status );
      else if( fabs( out[1] - 2700.0 ) > 1.0e-5 ) stopit( 6, out[1], status );
      else if( fabs( out[2] - 1600.0 ) > 1.0e-5 ) stopit( 7, out[2], status );
      else if( fabs( out[3] - 2000.0 ) > 1.0e-5 ) stopit( 8, out[3], status );

      /* Test inverse transformation */
      {
         double inv_in[2][4];
         astTranN( swm, 4, 1, 4, out, 1, 2, 4, (double *)inv_in );

         for( i = 0; i < 4; i++ ) {
            if( inv_in[0][i] == AST__BAD ) stopit( 9 + 2*i, inv_in[0][i], status );
            else if( inv_in[1][i] == AST__BAD ) stopit( 10 + 2*i, inv_in[1][i], status );
         }

         if( fabs( inv_in[0][0] - 1.0 ) > 1.0e-5 ) stopit( 17, inv_in[0][0], status );
         else if( fabs( inv_in[1][0] - 1.0 ) > 1.0e-5 ) stopit( 18, inv_in[1][0], status );
         else if( fabs( inv_in[0][1] - 101.0 ) > 1.0e-5 ) stopit( 19, inv_in[0][1], status );
         else if( fabs( inv_in[1][1] - 2.0 ) > 1.0e-5 ) stopit( 20, inv_in[1][1], status );
         else if( fabs( inv_in[0][2] - 61.0 ) > 1.0e-5 ) stopit( 21, inv_in[0][2], status );
         else if( fabs( inv_in[1][2] - 1.0 ) > 1.0e-5 ) stopit( 22, inv_in[1][2], status );
         else if( fabs( inv_in[0][3] - 37.3636364 ) > 1.0e-5 ) stopit( 23, inv_in[0][3], status );
         else if( fabs( inv_in[1][3] - 2.0 ) > 1.0e-5 ) stopit( 24, inv_in[1][3], status );
      }
   }

   /* Check no simplification on a single non-inverted SwitchMap */
   astSetL( swm, "Invert", 0 );
   swm2 = astSimplify( swm );
   compare( (AstObject *)swm, (AstObject *)swm2, "ast_equal 1", status );

   /* Check inverted SwitchMap simplifies to non-inverted */
   astSetL( swm, "Invert", 1 );
   swm2 = astSimplify( swm );
   if( astGetL( swm2, "Invert" ) ) stopit( 25, 1.0, status );

   /* Check two adjacent opposite SwitchMaps cancel */
   swm2 = astCopy( swm );
   astInvert( swm2 );
   cm = astCmpMap( swm, swm2, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 26, 1.0, status );

   cm = astCmpMap( swm2, swm, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 27, 1.0, status );

   /* Checkdump round-trip */
   checkdump( (AstObject *)swm, "Channel test 1", status );

   /* Test ast_rate */
   astSetL( swm, "Invert", 0 );

   at[0] = 20.0; at[1] = 1.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 10.0 ) > 1.0e-6 ) stopit( 28, r, status );

   at[0] = 20.0; at[1] = 2.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 11.0 ) > 1.0e-6 ) stopit( 29, r, status );

   astSetL( swm, "Invert", 1 );

   at[0] = 1700.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 1.0/10.0 ) > 1.0e-6 ) stopit( 30, r, status );

   at[0] = 1900.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 1.0/11.0 ) > 1.0e-6 ) stopit( 31, r, status );

   astSetL( swm, "Invert", 0 );

   /*
    * Section 2: A 1D input grid with 202 columns. Lower half (1:101) and
    * upper half (102:202) each contain a spectrum. We use a (Nin=1,Nout=1)
    * SwitchMap.
    */

   x1 = 1.0; x2 = 101.0; l1 = 1000.0; l2 = 2000.0;
   rm[0] = (AstMapping *)astWinMap( 1, &x1, &x2, &l1, &l2, " " );

   x1 = 102.0; x2 = 202.0; l1 = 1600.0; l2 = 2700.0;
   rm[1] = (AstMapping *)astWinMap( 1, &x1, &x2, &l1, &l2, " " );

   fwd[0] = "y=qif(x>101.5,2,1)";
   inv[0] = "x=qif(y>1800,2,1)";
   sm = astMathMap( 1, 1, 1, fwd, 1, inv, " " );

   swm = astSwitchMap( (AstMapping *)sm, (AstMapping *)sm, 2, (void **)rm, " " );

   /* Test forward (invert + inverse direction = forward) */
   astInvert( swm );
   astInvert( sm );

   {
      double in1d[4], out1d[4];
      in1d[0] = 1.0; in1d[1] = 202.0; in1d[2] = 102.0; in1d[3] = 101.0;
      astTranN( swm, 4, 1, 4, in1d, 0, 1, 4, out1d );

      for( i = 0; i < 4; i++ ) {
         if( out1d[i] == AST__BAD ) stopit( 100 + i + 1, out1d[i], status );
      }
      if( fabs( out1d[0] - 1000.0 ) > 1.0e-5 ) stopit( 105, out1d[0], status );
      else if( fabs( out1d[1] - 2700.0 ) > 1.0e-5 ) stopit( 106, out1d[1], status );
      else if( fabs( out1d[2] - 1600.0 ) > 1.0e-5 ) stopit( 107, out1d[2], status );
      else if( fabs( out1d[3] - 2000.0 ) > 1.0e-5 ) stopit( 108, out1d[3], status );

      /* Test inverse */
      astTranN( swm, 4, 1, 4, out1d, 1, 1, 4, in1d );

      for( i = 0; i < 4; i++ ) {
         if( in1d[i] == AST__BAD ) stopit( 107 + 2*(i+1), in1d[i], status );
      }
      if( fabs( in1d[0] - 1.0 ) > 1.0e-5 ) stopit( 117, in1d[0], status );
      else if( fabs( in1d[1] - 202.0 ) > 1.0e-5 ) stopit( 119, in1d[1], status );
      else if( fabs( in1d[2] - 61.0 ) > 1.0e-5 ) stopit( 121, in1d[2], status );
      else if( fabs( in1d[3] - 138.3636364 ) > 1.0e-5 ) stopit( 123, in1d[3], status );
   }

   /* Simplification checks */
   astSetL( swm, "Invert", 0 );
   swm2 = astSimplify( swm );
   compare( (AstObject *)swm, (AstObject *)swm2, "ast_equal 2", status );

   astSetL( swm, "Invert", 1 );
   swm2 = astSimplify( swm );
   if( astGetL( swm2, "Invert" ) ) stopit( 125, 1.0, status );

   swm2 = astCopy( swm );
   astInvert( swm2 );
   cm = astCmpMap( swm, swm2, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 126, 1.0, status );

   cm = astCmpMap( swm2, swm, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 127, 1.0, status );

   checkdump( (AstObject *)swm, "Channel test 2", status );

   /* Rate checks */
   astSetL( swm, "Invert", 0 );

   at[0] = 20.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 10.0 ) > 1.0e-6 ) stopit( 128, r, status );

   at[0] = 120.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 11.0 ) > 1.0e-6 ) stopit( 129, r, status );

   astSetL( swm, "Invert", 1 );

   at[0] = 1700.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 1.0/10.0 ) > 1.0e-6 ) stopit( 130, r, status );

   at[0] = 1900.0;
   r = astRate( swm, at, 1, 1 );
   if( fabs( r - 1.0/11.0 ) > 1.0e-6 ) stopit( 131, r, status );

   astSetL( swm, "Invert", 0 );

   /*
    * Section 3: A 2D input grid (1:180,1:100). Two sub-regions
    * (10:80,10:80) and (100:170,10:80) each contain images of a fixed
    * part of the sky with different WCS origins. Uses SelectorMap for
    * forward selector.
    */
   strcpy( card[0], "CRPIX1  = 45" );
   strcpy( card[1], "CRPIX2  = 45" );
   strcpy( card[2], "CRVAL1  = 45" );
   strcpy( card[3], "CRVAL2  = 89.9" );
   strcpy( card[4], "CDELT1  = -0.01" );
   strcpy( card[5], "CDELT2  = 0.01" );
   strcpy( card[6], "CTYPE1  = 'RA---TAN'" );
   strcpy( card[7], "CTYPE2  = 'DEC--TAN'" );

   fc = astFitsChan( NULL, NULL, " " );
   for( i = 0; i < 8; i++ ) {
      astPutFits( fc, card[i], 0 );
   }
   astClear( fc, "Card" );
   fs_wcs = astRead( fc );
   rm[0] = astGetMapping( fs_wcs, AST__BASE, AST__CURRENT );

   strcpy( card[0], "CRPIX1  = 135" );
   astClear( fc, "Card" );
   for( i = 0; i < 8; i++ ) {
      astPutFits( fc, card[i], 1 );
   }
   astClear( fc, "Card" );
   fs_wcs = astRead( fc );
   rm[1] = astGetMapping( fs_wcs, AST__BASE, AST__CURRENT );

   /* Forward selector: SelectorMap with two Box regions */
   gridframe = astGetFrame( fs_wcs, AST__BASE );

   p1[0] = 10; p1[1] = 10;
   p2[0] = 80; p2[1] = 80;
   box[0] = (AstRegion *)astBox( gridframe, 1, p1, p2, NULL, " " );

   p1[0] = 100; p1[1] = 10;
   p2[0] = 170; p2[1] = 80;
   box[1] = (AstRegion *)astBox( gridframe, 1, p1, p2, NULL, " " );

   selmap = astSelectorMap( 2, (void **)box, AST__BAD, " " );

   /* Inverse selector: always returns route 1 */
   {
      int is_inperm[1] = { -1 };
      int is_outperm[2] = { 0, 0 };
      double is_con = 1.0;
      is_perm = astPermMap( 1, is_inperm, 2, is_outperm, &is_con, " " );
   }

   /* Create SwitchMap */
   swm = astSwitchMap( (AstMapping *)selmap, (AstMapping *)is_perm, 2,
                       (void **)rm, " " );

   /* Test forward (invert + inverse = forward) */
   astInvert( swm );
   astInvert( selmap );

   {
      double in2d[2][4], out2d[2][4], rmout[2][4];

      in2d[0][0] = 5.0;   in2d[1][0] = 5.0;
      in2d[0][1] = 50.0;  in2d[1][1] = 50.0;
      in2d[0][2] = 90.0;  in2d[1][2] = 50.0;
      in2d[0][3] = 140.0; in2d[1][3] = 50.0;

      astTranN( swm, 4, 2, 4, (const double *)in2d, 0, 2, 4,
                (double *)out2d );

      /* Transform same positions using the left image mapping */
      astTranN( rm[0], 4, 2, 4, (const double *)in2d, 1, 2, 4,
                (double *)rmout );

      /* Points 0 and 2 should be BAD (outside either image).
         Points 1 and 3 should equal the rm[0] transform of point 1. */
      if( out2d[0][0] != AST__BAD ) stopit( 132, out2d[0][0], status );
      else if( out2d[1][0] != AST__BAD ) stopit( 133, out2d[1][0], status );
      else if( out2d[0][1] != rmout[0][1] ) stopit( 134, out2d[0][1], status );
      else if( out2d[1][1] != rmout[1][1] ) stopit( 135, out2d[1][1], status );
      else if( out2d[0][2] != AST__BAD ) stopit( 136, out2d[0][2], status );
      else if( out2d[1][2] != AST__BAD ) stopit( 137, out2d[1][2], status );
      else if( fabs( out2d[0][3] - rmout[0][1] ) > 1.0e-6 * fabs( rmout[0][1] ) )
         stopit( 138, out2d[0][3], status );
      else if( fabs( out2d[1][3] - rmout[1][1] ) > 1.0e-6 * fabs( rmout[1][1] ) )
         stopit( 139, out2d[1][3], status );

      /* Test inverse */
      astTranN( swm, 4, 2, 4, (const double *)out2d, 1, 2, 4,
                (double *)in2d );

      if( in2d[0][0] != AST__BAD ) stopit( 140, in2d[0][0], status );
      else if( in2d[1][0] != AST__BAD ) stopit( 141, in2d[1][0], status );
      else if( fabs( in2d[0][1] - 50.0 ) > 1.0e-6 ) stopit( 142, in2d[0][1], status );
      else if( fabs( in2d[1][1] - 50.0 ) > 1.0e-6 ) stopit( 143, in2d[1][1], status );
      else if( in2d[0][2] != AST__BAD ) stopit( 144, in2d[0][2], status );
      else if( in2d[1][2] != AST__BAD ) stopit( 145, in2d[1][2], status );
      else if( fabs( in2d[0][3] - 50.0 ) > 1.0e-6 ) stopit( 146, in2d[0][3], status );
      else if( fabs( in2d[1][3] - 50.0 ) > 1.0e-6 ) stopit( 147, in2d[1][3], status );
   }

   /* Simplification checks */
   astSetL( swm, "Invert", 0 );
   swm2 = astSimplify( swm );
   compare( (AstObject *)swm, (AstObject *)swm2, "ast_equal 3", status );

   astSetL( swm, "Invert", 1 );
   swm2 = astSimplify( swm );
   if( astGetL( swm2, "Invert" ) ) stopit( 148, 1.0, status );

   swm2 = astCopy( swm );
   astInvert( swm2 );
   cm = astCmpMap( swm, swm2, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 149, 1.0, status );

   cm = astCmpMap( swm2, swm, 1, " " );
   cm2 = astSimplify( cm );
   if( !astIsAUnitMap( cm2 ) ) stopit( 150, 1.0, status );

   checkdump( (AstObject *)swm, "Channel test 3", status );

   /* Rate checks for section 3 */
   astSetL( swm, "Invert", 0 );

   at[0] = 140.0; at[1] = 50.0;
   r1 = astRate( swm, at, 1, 1 );
   at[0] = 50.0; at[1] = 50.0;
   r2 = astRate( rm[0], at, 1, 1 );
   if( fabs( r1 - r2 ) > fabs( 1.0e-6 * r2 ) ) stopit( 151, r1, status );

   at[0] = 140.0; at[1] = 50.0;
   r1 = astRate( swm, at, 2, 2 );
   at[0] = 50.0; at[1] = 50.0;
   r2 = astRate( rm[0], at, 2, 2 );
   if( fabs( r1 - r2 ) > fabs( 1.0e-6 * r2 ) ) stopit( 152, r1, status );

   at[0] = 140.0; at[1] = 50.0;
   r1 = astRate( swm, at, 1, 2 );
   at[0] = 50.0; at[1] = 50.0;
   r2 = astRate( rm[0], at, 1, 2 );
   if( fabs( r1 - r2 ) > fabs( 1.0e-6 * r2 ) ) stopit( 153, r1, status );

   at[0] = 140.0; at[1] = 50.0;
   r1 = astRate( swm, at, 2, 1 );
   at[0] = 50.0; at[1] = 50.0;
   r2 = astRate( rm[0], at, 2, 1 );
   if( fabs( r1 - r2 ) > fabs( 1.0e-6 * r2 ) ) stopit( 154, r1, status );

   /* Restore caching settings */
   astTune( "MemoryCaching", mc );
   astTune( "ObjectCaching", oc );

   astEnd;

   if( *status == 0 ) {
      printf( " All SwitchMap tests passed\n" );
   } else {
      printf( "SwitchMap tests failed\n" );
   }
   return *status;
}
