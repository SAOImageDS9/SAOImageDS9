#include "ast.h"
#include "mers.h"
#include "sae_par.h"
#include <math.h>
#include <stdlib.h>
#include <string.h>


/* Return the directory holding the read-only test fixture files.

   The fixture data file lives in the source directory, which the test
   harness points at via the 'srcdir' environment variable (falling back to
   the current directory for a plain in-source run). */
static const char *fixture_dir( void ){
   const char *dir = getenv( "srcdir" );
   return ( dir && *dir ) ? dir : ".";
}

static void stopit( int i, int *status );
static void check_imaging_wcs( AstObject *obj, const char *text, int *status );
static void check_tansip_wcs( AstObject *obj, const char *text, int *status );
static void check_equal_transforms( AstObject *obj, AstObject *obj2, const char *text, int *status );
static void check_sphmap_mappings( AstMapping *map, AstMapping *map2, const char *text, int *status );
static void check_divide_outputs( AstMapping *map, AstMapping *map2, const char *text, int *status );

static void test_yamlencoding_attribute( int *status );
static void test_imaging_wcs_roundtrip( int *status );
static void test_tansip_wcs_roundtrip( int *status );
static void test_lsst_wcs_roundtrip( int *status );
static void test_native_encoding_roundtrip( int *status );
static void test_sphmap_roundtrip( int *status );
static void test_divide_roundtrip( int *status );
static void test_rotate_sequence_3d_roundtrip( int *status );

static int chrMatch( const char *a, const char *b ){
   int result = 0;
   if( a && b ) result = !strcmp( a, b );
   return result;
}

int main(){

   int status_value;
   int *status = &status_value;

   status_value = SAI__OK;

   astBegin;

   test_yamlencoding_attribute( status );
   test_imaging_wcs_roundtrip( status );
   test_tansip_wcs_roundtrip( status );
   test_lsst_wcs_roundtrip( status );
   test_native_encoding_roundtrip( status );
   test_sphmap_roundtrip( status );
   test_divide_roundtrip( status );
   test_rotate_sequence_3d_roundtrip( status );

   astEnd;

   if( *status == SAI__OK ) {
      printf( " All YamlChan tests passed\n" );
   } else {
      printf( "YamlChan tests failed\n" );
   }
   return *status == SAI__OK ? 0 : 1;

   return status_value;
}



void stopit( int i, int *status ){
   if( *status == SAI__OK ) {
      printf("Error %d\n", i );
      *status = SAI__ERROR;
   }
}



/* Test getting, setting, and clearing the YamlEncoding attribute. */
void test_yamlencoding_attribute( int *status ){
   AstYamlChan *ch;

   if( *status != SAI__OK ) return;

   ch = astYamlChan( NULL, NULL, " " );

   if( !chrMatch( astGetC( ch, "YAMLENCODING" ), "ASDF" ) ) stopit( -1, status );

   if( astTest( ch, "YAMLENCODING" ) ) stopit( -2, status );

   astSetC( ch, "YamlEncoding", "ASDF" );

   if( !astTest( ch, "YAMLENCODING" ) ) stopit( -3, status );

   if( !chrMatch( astGetC( ch, "YAMLENCODING" ), "ASDF" ) ) stopit( -4, status );

   astClear( ch, "YamlEncoding" );

   if( astTest( ch, "YAMLENCODING" ) ) stopit( -5, status );

   if( !chrMatch(astGetC( ch, "YAMLENCODING" ),"ASDF") ) stopit( -6, status );

   astAnnul( ch );
}



/* Test round-trip of imaging_wcs.asdf: write to yamltest.asdf, read back,
   verify numerical transform results are unchanged. */
void test_imaging_wcs_roundtrip( int *status ){
   AstYamlChan *ch;
   AstObject *obj;
   AstObject *obj2;

   if( *status != SAI__OK ) return;

   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SourceFile=%s/fixtures/programs/testyamlchan/imaging_wcs.asdf,SinkFile=yamltest.asdf",
           fixture_dir() );

   obj = astRead( ch );
   check_imaging_wcs( obj, "Read tests failed for fixtures/programs/testyamlchan/imaging_wcs.asdf", status );

   if( astWrite( ch, obj ) != 1 ) stopit( 13, status );

   astClear( ch, "SourceFile,SinkFile" );
   astSet( ch, "SourceFile=yamltest.asdf" );
   astClear( ch, "YamlEncoding" );

   obj2 = astRead( ch );
   if( !chrMatch( astGetC( ch, "YAMLENCODING" ), "ASDF" ) ) stopit( 131, status );
   check_imaging_wcs( obj2, "Read tests failed for yamltest.asdf", status );

   astAnnul( obj );
   astAnnul( obj2 );
   astAnnul( ch );
}



/* Test round-trip of tanSipWcs: read from tanSipWcs.txt (native AST channel),
   write to tanSipWcs.asdf, read back from ASDF, verify transform values. */
void test_tansip_wcs_roundtrip( int *status ){
   AstYamlChan *ch;
   AstChannel *ch2;
   AstObject *obj;
   AstObject *obj2;

   if( *status != SAI__OK ) return;

   ch  = astYamlChan( NULL, NULL, " " );
   ch2 = astChannel( NULL, NULL, " " );

   astSet( ch2, "SourceFile=%s/fixtures/programs/testyamlchan/tanSipWcs.txt", fixture_dir() );
   obj = astRead( ch2 );
   check_tansip_wcs( obj, "Read tests failed for fixtures/programs/testyamlchan/tanSipWcs.txt", status );

   astSet( ch, "SinkFile=tanSipWcs.asdf" );
   if( astWrite( ch, obj ) != 1 ) stopit( 14, status );

   astClear( ch, "SourceFile,SinkFile" );
   astSet( ch, "SourceFile=tanSipWcs.asdf" );
   obj2 = astRead( ch );
   check_tansip_wcs( obj2, "Read tests failed for tanSipWcs.asdf", status );

   astAnnul( obj );
   astAnnul( obj2 );
   astAnnul( ch );
   astAnnul( ch2 );
}



/* Test round-trip of lsst_wcs: read from lsst_wcs.txt, write to
   lsst_wcs.asdf, read back, verify transforms agree numerically. */
void test_lsst_wcs_roundtrip( int *status ){
   AstYamlChan *ch;
   AstChannel *ch2;
   AstObject *obj;
   AstObject *obj2;

   if( *status != SAI__OK ) return;

   ch  = astYamlChan( NULL, NULL, " " );
   ch2 = astChannel( NULL, NULL, " " );

   astSet( ch2, "SourceFile=%s/fixtures/programs/testyamlchan/lsst_wcs.txt", fixture_dir() );
   obj = astRead( ch2 );

   astSet( ch, "SinkFile=lsst_wcs.asdf" );
   if( astWrite( ch, obj ) != 1 ) stopit( 15, status );

   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=lsst_wcs.asdf" );
   obj2 = astRead( ch );
   if( !obj2 ) stopit( 16, status );

   check_equal_transforms( obj, obj2, "Tests failed for fixtures/programs/testyamlchan/lsst_wcs.txt", status );

   astAnnul( obj );
   astAnnul( obj2 );
   astAnnul( ch );
   astAnnul( ch2 );
}



/* Test NATIVE encoding round-trip: write and read back using YamlEncoding=NATIVE,
   verify the recovered object is equal to the original. */
void test_native_encoding_roundtrip( int *status ){
   AstYamlChan *ch;
   AstChannel *ch2;
   AstObject *obj;
   AstObject *obj2;

   if( *status != SAI__OK ) return;

   ch2 = astChannel( NULL, NULL, " " );
   astSet( ch2, "SourceFile=%s/fixtures/programs/testyamlchan/lsst_wcs.txt", fixture_dir() );
   obj = astRead( ch2 );
   astAnnul( ch2 );

   ch = astYamlChan( NULL, NULL, "YamlEncoding=NATIVE " );

   if( !chrMatch( astGetC( ch, "YAMLENCODING" ), "NATIVE" ) ) stopit( 17, status );

   if( !astTest( ch, "YAMLENCODING" ) ) stopit( 18, status );

   astSet( ch, "SinkFile=nativetest.yaml" );
   if( astWrite( ch, obj ) != 1 ) stopit( 19, status );

   astClear( ch, "YamlEncoding" );
   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=nativetest.yaml" );
   obj2 = astRead( ch );
   if( !obj2 ) stopit( 20, status );

   if( !astEqual( obj2, obj ) ) stopit( 21, status );

   if( !chrMatch( astGetC( ch, "YAMLENCODING" ), "NATIVE") ) stopit( 22, status );

   astAnnul( obj );
   astAnnul( obj2 );
   astAnnul( ch );
}



/* Test SphMap round-trip: write a FrameSet containing an AST SphMap to
   ASDF, read it back, and verify the recovered mapping gives the same
   numerical results as the original (i.e. keeps the correct units in
   radians). */
void test_sphmap_roundtrip( int *status ){
   AstYamlChan *ch;
   AstFrame *frm3d;
   AstFrame *frm2d;
   AstFrameSet *sphfs;
   AstObject *sphfs2;
   AstMapping *sphmap;
   AstMapping *sphmap2;

   if( *status != SAI__OK ) return;

   frm3d = astFrame( 3, "Domain=CART3D" );
   frm2d = astFrame( 2, "Domain=SPH" );
   sphmap = (AstMapping *) astSphMap( " " );
   sphfs = astFrameSet( frm3d, " " );
   astAddFrame( sphfs, AST__BASE, sphmap, frm2d );
   astAnnul( sphmap );
   astAnnul( frm3d );
   astAnnul( frm2d );

   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SinkFile=sphmap_roundtrip.asdf" );
   if( astWrite( ch, sphfs ) != 1 ) stopit( 30, status );

   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=sphmap_roundtrip.asdf" );
   sphfs2 = astRead( ch );
   if( !sphfs2 ) stopit( 31, status );

   sphmap  = astGetMapping( sphfs,  AST__BASE, AST__CURRENT );
   sphmap2 = astGetMapping( (AstFrameSet *) sphfs2, AST__BASE, AST__CURRENT );

   check_sphmap_mappings( sphmap, sphmap2, "SphMap round-trip test failed", status );

   astAnnul( sphmap );
   astAnnul( sphmap2 );
   astAnnul( sphfs );
   astAnnul( sphfs2 );
   astAnnul( ch );
}



void check_imaging_wcs( AstObject *obj, const char *text, int *status ){
   double xout[ 6 ];
   double yout[ 6 ];
   double xin[ 6 ] = {-0.25, -2.0, -1.0,  0.1, 1.5, 1.0 };
   double yin[ 6 ] = { 0.0, 0.0, -2.5, -0.2, 2.5, 2.5};

   if( *status != SAI__OK ) return;

   astTran2( obj, 6, xin, yin, 1, xout, yout );

   if( fabs( xout[ 0 ] - 0.0964300052 ) > 1.0E-10 ) {
      stopit( 1, status );
   } else if( fabs( xout[ 1 ] - 0.0964301088 ) > 1.0E-10 ) {
      stopit( 2, status );
   } else if( fabs( xout[ 2 ] - 0.0964301532 ) > 1.0E-10 ) {
      stopit( 3, status );
   } else if( fabs( xout[ 3 ] - 0.0964299927 ) > 1.0E-10 ) {
      stopit( 4, status );
   } else if( fabs( xout[ 4 ] - 0.0964297983 ) > 1.0E-10 ) {
      stopit( 5, status );
   } else if( fabs( xout[ 5 ] - 0.0964298276 ) > 1.0E-10 ) {
      stopit( 6, status );
   } else if( fabs( yout[ 0 ] + 1.2575438634 ) > 1.0E-10 ) {
      stopit( 7, status );
   } else if( fabs( yout[ 1 ] + 1.25754399404 ) > 1.0E-10 ) {
      stopit( 8, status );
   } else if( fabs( yout[ 2 ] + 1.25754387354 ) > 1.0E-10 ) {
      stopit( 9, status );
   } else if( fabs( yout[ 3 ] + 1.25754383357 ) > 1.0E-10 ) {
      stopit( 10, status );
   } else if( fabs( yout[ 4 ] + 1.25754377796 ) > 1.0E-10 ) {
      stopit( 11, status );
   } else if( fabs( yout[ 5 ] + 1.25754381562 ) > 1.0E-10 ) {
      stopit( 12, status );
   }

   if( *status != SAI__OK ) printf( "%s\n", text );

}



void check_tansip_wcs( AstObject *obj, const char *text, int *status ){
   int i;
   double xout[ 6 ];
   double xin[ 6 ] = {-25.0, -200.0, -100.0,  10.0, 150.0, 100.0 };
   double xrec[ 6 ];
   double xoutT[ 6 ] = { 0.7408749950008373, 0.7397105172925298, 0.7404083214098485, 0.7411104249728614, 0.7420090246546116, 0.741675898352057 };
   double yout[ 6 ];
   double yin[ 6 ] = {0.0,  0.0, -250.0, -20.0, 250.0, 250.0 };
   double yrec[ 6 ];
   double youtT[ 6 ] = { 0.7658201704375505, 0.7658040776691578, 0.7646142651379874, 0.7657273765608887, 0.7670347808637439, 0.7670304352978341 };

   if( *status != SAI__OK ) return;

   astTran2( obj, 6, xin, yin, 1, xout, yout );
   for( i = 0; i < 6; i++ ){
      if( fabs( xout[ i ] - xoutT[ i ] ) > 1.0E-12 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", xout[ i ], xoutT[ i ], fabs( xout[ i ] - xoutT[ i ] ));
         stopit( i, status );
      } else if( fabs( yout[ i ] - youtT[ i ] ) > 1.0E-12 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", yout[ i ], youtT[ i ], fabs( yout[ i ] - youtT[ i ] ));
         stopit( i + 6, status );
      }
   }

   astTran2( obj, 6, xout, yout, 0, xrec, yrec );
   for( i = 0; i < 6; i++ ){
      if( fabs( xin[ i ] - xrec[ i ] ) > 1.0E-8 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", xin[ i ], xrec[ i ], fabs( xin[ i ] - xrec[ i ] ));
         stopit( i + 12, status );
      } else if( fabs( yin[ i ] - yrec[ i ] ) > 1.0E-8 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", yin[ i ], yrec[ i ], fabs( yin[ i ] - yrec[ i ] ));
         stopit( i + 18, status );
      }
   }

   if( *status != SAI__OK ) printf( "%s\n", text );

}



void check_equal_transforms( AstObject *obj, AstObject *obj2, const char *text, int *status ){

   int i;
   double xout[ 6 ];
   double xout2[ 6 ];
   double xin[ 6 ] = {-25.0, -200.0, -100.0,  10.0, 150.0, 100.0};
   double xrec[ 6 ];
   double xrec2[ 6 ];
   double yout[ 6 ];
   double yout2[ 6 ];
   double yin[ 6 ] = {0.0,  0.0, -250.0, -20.0, 250.0, 250.0};
   double yrec[ 6 ];
   double yrec2[ 6 ];

   if( *status != SAI__OK ) return;

   astTran2( obj, 6, xin, yin, 1, xout, yout );
   astTran2( obj2, 6, xin, yin, 1, xout2, yout2 );

   for( i = 0; i < 6; i++ ){
      if( fabs( xout[ i ] - xout2[ i ] ) > 1.0E-12 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", xout[ i ], xout2[ i ], fabs( xout[ i ] - xout2[ i ] ));
         stopit( i, status );
      } else if( fabs( yout[ i ] - yout2[ i ] ) > 1.0E-12 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", yout[ i ], yout2[ i ], fabs( yout[ i ] - yout2[ i ] ));
         stopit( i + 6, status );
      }
   }

   astTran2( obj, 6, xout, yout, 0, xrec, yrec );
   astTran2( obj, 6, xout2, yout2, 0, xrec2, yrec2 );

   for( i = 0; i < 6; i++ ){
      if( fabs( xrec[ i ] - xrec2[ i ] ) > 1.0E-8 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", xrec[ i ], xrec2[ i ], fabs( xrec[ i ] - xrec2[ i ] ) );
         stopit( i + 12, status );
      } else if( fabs( yrec[ i ] - yrec2[ i ] ) > 1.0E-8 ) {
         if( *status == SAI__OK ) printf("%g %g %g\n", yrec[ i ], yrec2[ i ], fabs( yrec[ i ] - yrec2[ i ] ) );
         stopit( i + 18, status );
      }
   }

   if( *status != SAI__OK ) printf( "%s\n", text );

}



/* Test divide transform round-trip: build the compound mapping that
   ReadDivide produces ((x,y,z) -> (x/x, y/x, z/x)) as a FrameSet,
   write it to ASDF, read it back, and verify the numerical outputs
   are unchanged. */
void test_divide_roundtrip( int *status ){
   AstCmpMap *abmap;
   AstCmpMap *divmap;
   AstCmpMap *t1;
   AstCmpMap *t2;
   AstFrame *frm_in;
   AstFrame *frm_out;
   AstFrameSet *divfs;
   AstMathMap *mm1d;
   AstMapping *divide_mapping;
   AstMapping *divmap1;
   AstMapping *divmap2;
   AstObject *divfs2;
   AstPermMap *forkmap;
   AstPermMap *intrlvmap;
   AstPermMap *mapa;
   AstPermMap *mapb;
   AstYamlChan *ch;

/* One-dimensional division MathMap (same expressions as ReadDivide uses). */
   static const char *fwd1d[] = { "q=p/r" };
   static const char *inv1d[] = { "p", "r" };

/* Fork permutation: 3 inputs -> 6 outputs [x,y,z,x,y,z].
   Note: the public astPermMap interface uses 1-based coordinate indices.
   A value of 0 means AST__BAD. */
   int fork_perm[6] = { 1, 2, 3, 1, 2, 3 };

/* Identity permutation for A: (x,y,z) -> (x,y,z) */
   int a_outperm[3] = { 1, 2, 3 };
   int a_inperm[3]  = { 1, 2, 3 };

/* Projection permutation for B: (x,y,z) -> (x,x,x) */
   int b_outperm[3] = { 1, 1, 1 };
   int b_inperm[3]  = { 1, 1, 1 };

/* Interleave permutation: [a0,a1,a2,b0,b1,b2] -> [a0,b0,a1,b1,a2,b2]
   Inverse (inperm): [a0,b0,a1,b1,a2,b2] -> [a0,a1,a2,b0,b1,b2] */
   int intrlv_outperm[6] = { 1, 4, 2, 5, 3, 6 };
   int intrlv_inperm[6]  = { 1, 3, 5, 2, 4, 6 };

   int i;

   if( *status != SAI__OK ) return;

/* Build ForkMap: 3 inputs -> 6 outputs. */
   forkmap = astPermMap( 3, NULL, 6, fork_perm, NULL, " " );

/* Build sub-transform A (identity: x,y,z -> x,y,z) and
   B (x,y,z -> x,x,x).  The divide mapping computes (x/x, y/x, z/x).
   Both PermMaps are given an explicit inperm (inverse permutation) so that
   WritePermMap can serialise their custom inverses without producing AST__BAD
   constant values. */
   mapa = astPermMap( 3, a_inperm, 3, a_outperm, NULL, " " );
   mapb = astPermMap( 3, b_inperm, 3, b_outperm, NULL, " " );

/* ABMap: A and B in parallel, 6 inputs -> 6 outputs. */
   abmap = astCmpMap( (AstMapping *) mapa, (AstMapping *) mapb, 0, " " );
   mapa = astAnnul( mapa );
   mapb = astAnnul( mapb );

/* IntrlvMap: reorder to interleaved pairs. */
   intrlvmap = astPermMap( 6, intrlv_inperm, 6, intrlv_outperm, NULL, " " );

/* DivMap: 3 parallel 1-D MathMaps, each computing q=p/r. */
   divmap = NULL;
   for( i = 0; i < 3 && astOK; i++ ) {
      mm1d = astMathMap( 2, 1, 1, fwd1d, 2, inv1d, "simpfi=0,simpif=0" );
      if( divmap == NULL ) {
         divmap = (AstCmpMap *) mm1d;
      } else {
         AstCmpMap *tmp = astCmpMap( (AstMapping *) divmap, (AstMapping *) mm1d, 0, " " );
         divmap = astAnnul( divmap );
         mm1d = astAnnul( mm1d );
         divmap = tmp;
      }
   }

/* Chain: forkmap -> abmap -> intrlvmap -> divmap. */
   t1 = astCmpMap( (AstMapping *) forkmap, (AstMapping *) abmap, 1, " " );
   t2 = astCmpMap( (AstMapping *) t1, (AstMapping *) intrlvmap, 1, " " );
   divide_mapping = (AstMapping *) astCmpMap( (AstMapping *) t2, (AstMapping *) divmap, 1, " " );

   astAnnul( forkmap );
   astAnnul( abmap );
   astAnnul( intrlvmap );
   astAnnul( divmap );
   astAnnul( t1 );
   astAnnul( t2 );

/* Wrap the mapping in a FrameSet. */
   frm_in = astFrame( 3, "Domain=PIXEL" );
   frm_out = astFrame( 3, "Domain=PROJ" );
   divfs = astFrameSet( frm_in, " " );
   astAddFrame( divfs, AST__BASE, divide_mapping, frm_out );
   frm_in = astAnnul( frm_in );
   frm_out = astAnnul( frm_out );
   divide_mapping = astAnnul( divide_mapping );

/* Write to ASDF. */
   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SinkFile=divide_roundtrip.asdf" );
   if( astWrite( ch, (AstObject *) divfs ) != 1 ) stopit( 40, status );

/* Read back. */
   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=divide_roundtrip.asdf" );
   divfs2 = astRead( ch );
   if( !divfs2 ) stopit( 41, status );

/* Compare the mappings numerically. */
   divmap1 = astGetMapping( divfs, AST__BASE, AST__CURRENT );
   divmap2 = astGetMapping( (AstFrameSet *) divfs2, AST__BASE, AST__CURRENT );

   check_divide_outputs( divmap1, divmap2,
                         "Divide round-trip test failed", status );

   astAnnul( divmap1 );
   astAnnul( divmap2 );
   astAnnul( divfs );
   astAnnul( divfs2 );
   astAnnul( ch );
}


/* Compare forward-transform outputs from two mappings over 4 test points.
   The transform is A/B where A=identity, B=project, giving (x/x, y/x, z/x).
   Uses astTranN for a 3-input, 3-output mapping.

   Input layout for astTranN: in[coord * npoint + point] with npoint=4,
   indim=3 (coords stored coord-major).
   Output layout: out[coord * npoint + point], outdim=3. */
void check_divide_outputs( AstMapping *map, AstMapping *map2, const char *text, int *status ){

/* Four test points, stored as [x0,x1,x2,x3, y0,y1,y2,y3, z0,z1,z2,z3].
   Values chosen so that all expected outputs are exact binary fractions. */
   double xin[12] = {
      1.0, 2.0, 4.0, 8.0,   /* x coords */
      3.0, 6.0, 5.0, 4.0,   /* y coords */
      2.0, 8.0, 1.0, 4.0    /* z coords */
   };

/* Expected outputs: (x/x, y/x, z/x). */
   double xout_expected[12] = {
      1.0, 1.0, 1.0, 1.0,  /* x/x */
      3.0, 3.0, 1.25, 0.5, /* y/x */
      2.0, 4.0, 0.25, 0.5  /* z/x */
   };

   double xout1[12];
   double xout2[12];
   int i;

   if( *status != SAI__OK ) return;

   astTranN( map,  4, 3, 4, xin, 1, 3, 4, xout1 );
   astTranN( map2, 4, 3, 4, xin, 1, 3, 4, xout2 );

   for( i = 0; i < 12; i++ ) {
      if( fabs( xout1[i] - xout_expected[i] ) > 1.0E-10 ) {
         if( *status == SAI__OK )
            printf( "Divide map output[%d]: got %g expected %g\n",
                    i, xout1[i], xout_expected[i] );
         stopit( 42 + i, status );
         break;
      }
      if( fabs( xout2[i] - xout_expected[i] ) > 1.0E-10 ) {
         if( *status == SAI__OK )
            printf( "Divide roundtrip output[%d]: got %g expected %g\n",
                    i, xout2[i], xout_expected[i] );
         stopit( 54 + i, status );
         break;
      }
   }

   if( *status != SAI__OK ) printf( "%s\n", text );
}


void check_sphmap_mappings( AstMapping *map, AstMapping *map2, const char *text, int *status ){
/* Three test points as unit 3-D Cartesian vectors.
   Layout for astTranN: in[coord * npoint + point], npoint=3, indim=3. */
   double s = 1.0 / sqrt( 3.0 );
   double xin[9] = {
      1.0, 0.0, s,    /* x coords of the 3 points */
      0.0, 1.0, s,    /* y coords */
      0.0, 0.0, s     /* z coords */
   };
   double xout1[6], xout2[6];  /* 2 output coords x 3 points */
   int i;

   if( *status != SAI__OK ) return;

   astTranN( map,  3, 3, 3, xin, 1, 2, 3, xout1 );
   astTranN( map2, 3, 3, 3, xin, 1, 2, 3, xout2 );

   for( i = 0; i < 6; i++ ) {
      if( fabs( xout1[i] - xout2[i] ) > 1.0E-10 ) {
         if( *status == SAI__OK )
            printf( "SphMap round-trip mismatch at output[%d]: %g vs %g\n",
                    i, xout1[i], xout2[i] );
         stopit( 32 + i, status );
         break;
      }
   }

   if( *status != SAI__OK ) printf( "%s\n", text );
}


/* Test rotate_sequence_3d cartesian and null transform: read an ASDF WCS
   containing a rotate_sequence_3d cartesian transform (90deg rotation about
   the x-axis) with an explicit 'transform: null' in the last step, then
   verify the mapping produces the expected numerical output.

   Bugs caught:
   1. ReadRotateSequence3d did not convert angles from degrees to radians
      before calling Deuler, so the rotation matrix was completely wrong.
   2. The GetChoice cartesian/spherical condition was inverted (== 1 instead
      of == 0), making cartesian rotations enter the spherical rotation path.
   3. ReadStep failed with a type-mismatch error when the last WCS step
      carried an explicit 'transform: null' stored as a non-object value. */
void test_rotate_sequence_3d_roundtrip( int *status ){
   AstFrameSet *fs;
   AstMapping *map;
   AstYamlChan *ch;
   int i;

/* Three unit-axis test vectors, coord-major for astTranN (npoint=3, nin=3):
   [x0 x1 x2  y0 y1 y2  z0 z1 z2] */
   double xin[9] = {
      1.0, 0.0, 0.0,
      0.0, 1.0, 0.0,
      0.0, 0.0, 1.0
   };

/* Expected: 90 deg rotation about x */
   double xout_expected[9] = {
      1.0, 0.0, 0.0,
      0.0, 0.0, 1.0,
      0.0, -1.0, 0.0
   };
   double xout[9];

   if( *status != SAI__OK )
      return;

   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SourceFile=%s/fixtures/programs/testyamlchan/rotate_seq3d_cartesian.asdf", fixture_dir() );
   fs = (AstFrameSet *) astRead( ch );
   astAnnul( ch );
   if( !fs ) {
      stopit( 60, status );
      return;
   }

   map = astGetMapping( fs, AST__BASE, AST__CURRENT );
   astAnnul( fs );

   astTranN( map, 3, 3, 3, xin, 1, 3, 3, xout );
   astAnnul( map );

   for( i = 0; i < 9; i++ ){
      if( fabs( xout[i] - xout_expected[i] ) > 1.0E-10 ){
         if( *status == SAI__OK )
            printf( "rotate_sequence_3d output[%d]: got %.15g expected %.15g\n",
                    i, xout[i], xout_expected[i] );
         stopit( 61 + i, status );
         break;
      }
   }

   if( *status != SAI__OK )
      printf( "rotate_sequence_3d and null-transform regression test failed\n" );
}
