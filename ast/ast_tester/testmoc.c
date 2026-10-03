/*
 *  Test the Moc class.
 *  Converted from the Fortran test testmoc.f.
 *
 *  The Fortran version uses psx_calloc/psx_free and %val(cnf_pval()) for
 *  dynamic memory; this C version uses astMalloc/astFree directly.
 *
 *  The Fortran astGetCell uses 1-based cell indices; the C API uses
 *  0-based indices.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

static void stopit( const char *text, int *status ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/* Convert MOC to binary data and back, check equality. */
static void datacheck( AstMoc *moc, const char *text, int *status ) {
   int nb, ln;
   void *data;
   AstMoc *moc2;

   if( *status != 0 ) return;

   nb = astGetI( moc, "MocType" );
   ln = astGetI( moc, "MocLength" );
   data = astMalloc( (size_t)nb * ln );
   astGetMocData( moc, nb * ln, data );
   moc2 = astMoc( " " );
   astAddMocData( moc2, AST__OR, 0, -1, ln, nb, data );
   data = astFree( data );

   if( astOverlap( moc, moc2 ) != 5 ) {
      char msg[200];
      snprintf( msg, sizeof(msg), "%s 1", text );
      stopit( msg, status );
   }
   if( !astEqual( moc, moc2 ) && *status == 0 ) {
      char msg[200];
      snprintf( msg, sizeof(msg), "%s 2", text );
      stopit( msg, status );
   }
   astAnnul( moc2 );
}

/* Create a 100x100 test image with circular cone. */
static void makeimage( int dims[2], float **pdata, AstFrameSet **iwcs,
                       int *status ) {
   int i, j, nx = 100, ny = 100;
   float *data;
   double xc, yc;
   AstFitsChan *fc;

   if( *status != 0 ) return;

   dims[0] = nx;
   dims[1] = ny;
   data = astMalloc( (size_t)nx * ny * sizeof(float) );
   *pdata = data;

   xc = ( 1.0 + nx ) / 2.0;
   yc = ( 1.0 + ny ) / 2.0;
   for( j = 0; j < ny; j++ )
      for( i = 0; i < nx; i++ )
         data[i + nx*j] = (float)sqrt( (i+1-xc)*(i+1-xc) + (j+1-yc)*(j+1-yc) );

   fc = astFitsChan( NULL, NULL, " " );
   astSetFitsF( fc, "CRVAL1", 35.0, " ", 1 );
   astSetFitsF( fc, "CRVAL2", 55.0, " ", 1 );
   astSetFitsF( fc, "CRPIX1", 50.5, " ", 1 );
   astSetFitsF( fc, "CRPIX2", 50.5, " ", 1 );
   astSetFitsF( fc, "CDELT1", -0.01, " ", 1 );
   astSetFitsF( fc, "CDELT2", 0.01, " ", 1 );
   astSetFitsS( fc, "CTYPE1", "RA---TAN", " ", 1 );
   astSetFitsS( fc, "CTYPE2", "DEC--TAN", " ", 1 );
   astSetFitsF( fc, "CRVAL3", -22.9, " ", 1 );
   astSetFitsF( fc, "CRPIX3", 1.0, " ", 1 );
   astSetFitsF( fc, "CDELT3", 1.27, " ", 1 );
   astSetFitsS( fc, "CTYPE3", "VRAD    ", " ", 1 );
   astSetFitsS( fc, "CUNIT3", "km/s    ", " ", 1 );
   astClear( fc, "Card" );
   *iwcs = (AstFrameSet *)astRead( fc );
   astAnnul( fc );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstMoc *moc, *moc2, *moc3;
   AstFitsChan *fc;
   AstSkyFrame *sf;
   AstRegion *reg1, *reg2;
   double centre[2], point[2], lbnd[2], ubnd[2], d;
   int ival, npoint, i, nb, ln, order;
   int64_t npix;
   size_t size;
   char *cval, buf[100];
   int json;
   int dims[2];
   float *ipdata;
   AstFrameSet *iwcs;
   void *mocdata;

   /* Expected mesh sizes and resolutions. */
   const int szmesh1 = 868, szmesh2 = 294;
   const double mxres1 = 824.5167, mxres2 = 12.883;
   double mesh1[868 * 2], mesh2[294 * 2];

   astWatch( status );
   astBegin;

   moc = astMoc( "maxorder=18,minorder=11" );
   if( !astIsAMoc( moc ) ) stopit( "Error 1", status );
   if( !astIsARegion( moc ) ) stopit( "Error 2", status );
   if( strcmp( astGetC( moc, "System" ), "ICRS" ) )
      stopit( "Error 3", status );

   sf = astSkyFrame( "system=icrs" );

   centre[0] = 1.0; centre[1] = 1.0;
   point[0] = 0.0002;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astAddRegion( moc, AST__OR, reg1 );

   if( fabs( astGetD( moc, "MocArea" ) - 1.485 ) > 1.0e-3 )
      stopit( "Error 3b", status );

   datacheck( moc, "Error 3A", status );

   /* Larger circle */
   moc = astMoc( "maxorder=8,minorder=4" );
   centre[0] = 3.1415927; centre[1] = 0.75;
   point[0] = 0.5;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astAddRegion( moc, AST__OR, reg1 );

   if( fabs( astGetD( moc, "MaxRes" ) - mxres1 ) > 1.0e-4 )
      stopit( "Error 4", status );

   astGetRegionBounds( moc, lbnd, ubnd );
   if( fabs( lbnd[0] - 2.4235144 ) > 1.0e-6 ||
       fabs( ubnd[0] - 3.8596708 ) > 1.0e-6 ||
       fabs( lbnd[1] - 0.2499916 ) > 1.0e-6 ||
       fabs( ubnd[1] - 1.2504847 ) > 1.0e-6 )
      stopit( "Error 5", status );

   astGetRegionMesh( moc, 1, 0, 2, &npoint, NULL );
   if( npoint != szmesh1 ) stopit( "Error 6", status );

   astGetRegionMesh( moc, 1, szmesh1, 2, &npoint, mesh1 );
   for( i = 0; i < szmesh1 && *status == 0; i++ ) {
      point[0] = mesh1[i];
      point[1] = mesh1[i + szmesh1];
      d = astDistance( sf, centre, point );
      if( fabs( d - 0.5 ) > 0.7 * AST__DD2R * mxres1 / 3600.0 )
         stopit( "Error 7", status );
   }

   nb = astGetI( moc, "MocType" );
   if( nb != 4 ) stopit( "Error 8", status );

   ln = astGetI( moc, "MocLength" );
   if( ln != 832 ) stopit( "Error 9", status );

   fc = astGetMocHeader( moc );
   astGetFitsI( fc, "NAXIS1", &ival );
   if( ival != 4 ) stopit( "Error 10", status );
   astGetFitsI( fc, "NAXIS2", &ival );
   if( ival != ln ) stopit( "Error 11", status );
   astGetFitsS( fc, "TFORM1", &cval );
   if( strcmp( cval, "1J" ) ) stopit( "Error 12", status );
   astGetFitsI( fc, "MOCORDER", &ival );
   if( ival != 8 ) stopit( "Error 13", status );

   datacheck( moc, "Error 13A", status );

   moc2 = astCopy( moc );
   if( !astEqual( moc, moc2 ) ) stopit( "Error 14", status );

   if( astOverlap( moc, reg1 ) != 5 ) stopit( "Error 15", status );

   centre[0] = 3.1415927; centre[1] = 0.5;
   point[0] = 0.5;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   if( astOverlap( moc, reg1 ) != 4 ) stopit( "Error 16", status );

   centre[0] = 3.1415927; centre[1] = -0.5;
   point[0] = 0.5;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   if( astOverlap( moc, reg1 ) != 1 ) stopit( "Error 17", status );

   centre[0] = 3.1415927; centre[1] = 0.75;
   point[0] = 0.3;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   if( astOverlap( moc, reg1 ) != 3 ) stopit( "Error 18", status );
   if( astOverlap( reg1, moc ) != 2 ) stopit( "Error 19", status );

   /* Annular region via AND with negated circle. */
   moc = astMoc( "maxorder=8,minorder=4" );
   centre[0] = 0.0; centre[1] = 1.57;
   point[0] = 0.3;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astAddRegion( moc, AST__OR, reg1 );

   centre[0] = 0.0; centre[1] = 1.57;
   point[0] = 0.2;
   reg2 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astNegate( reg2 );
   astAddRegion( moc, AST__AND, reg2 );

   if( fabs( astGetD( moc, "MocArea" ) - 1.826e6 ) > 0.001e6 )
      stopit( "Error 20", status );

   /* AddMocData: equivalent to AND with negated region. */
   moc2 = astMoc( "maxorder=8,minorder=4" );
   astAddRegion( moc2, AST__OR, reg1 );

   moc3 = astMoc( "maxorder=8,minorder=4" );
   astAddRegion( moc3, AST__OR, reg2 );

   nb = astGetI( moc3, "MocType" );
   ln = astGetI( moc3, "MocLength" );
   mocdata = astMalloc( (size_t)nb * ln );
   astGetMocData( moc3, nb * ln, mocdata );
   astAddMocData( moc2, AST__AND, 0, -1, ln, nb, mocdata );
   mocdata = astFree( mocdata );

   if( astOverlap( moc, moc2 ) != 5 ) stopit( "Error 21", status );
   if( !astEqual( moc, moc2 ) ) stopit( "Error 22", status );

   /* Image pixel mask test. */
   makeimage( dims, &ipdata, &iwcs, status );
   moc = astMoc( " " );
   astAddPixelMaskF( moc, AST__OR, iwcs, 10.0f, AST__LT, 0, 0.0f,
                     ipdata, dims );
   ipdata = astFree( ipdata );

   if( strcmp( astGetC( moc, "System" ), "ICRS" ) )
      stopit( "Error 23A", status );

   if( fabs( astGetD( moc, "MaxRes" ) - mxres2 ) > 1.0e-3 )
      stopit( "Error 23", status );

   astGetRegionMesh( moc, 1, 0, 2, &npoint, NULL );
   if( npoint != szmesh2 ) stopit( "Error 24", status );

   astGetRegionMesh( moc, 1, szmesh2, 2, &npoint, mesh2 );
   centre[0] = 35.0 * AST__DD2R;
   centre[1] = 55.0 * AST__DD2R;
   for( i = 0; i < szmesh2 && *status == 0; i++ ) {
      point[0] = mesh2[i];
      point[1] = mesh2[i + szmesh2];
      d = astDistance( sf, centre, point );
      if( fabs( d - 1.745e-3 ) > AST__DD2R * 0.01 )
         stopit( "Error 25", status );
   }

   /* MOC from region, copy, compare. */
   centre[0] = 0.0; centre[1] = 1.57;
   point[0] = 0.3;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   moc = astMoc( "maxorder=8,minorder=4" );
   astAddRegion( moc, AST__OR, reg1 );

   moc2 = astMoc( " " );
   astAddRegion( moc2, AST__OR, moc );
   if( !astEqual( moc, moc2 ) ) stopit( "Error 26", status );
   if( astOverlap( moc, moc2 ) != 5 ) stopit( "Error 27", status );

   /* AND with different orders. */
   centre[0] = 0.0; centre[1] = 1.57;
   point[0] = 0.2;
   reg2 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astNegate( reg2 );
   moc2 = astMoc( "maxorder=9,minorder=4" );
   astAddRegion( moc2, AST__OR, reg2 );
   astAddRegion( moc, AST__AND, moc2 );
   if( fabs( astGetD( moc, "MocArea" ) - 1.843466e6 ) > 1.0 )
      stopit( "Error 28", status );

   moc2 = astMoc( "maxorder=7,minorder=4" );
   astAddRegion( moc2, AST__OR, reg2 );
   astAddRegion( moc, AST__AND, moc2 );
   if( fabs( astGetD( moc, "MocArea" ) - 1.803054e6 ) > 1.0 )
      stopit( "Error 29", status );

   /* GetCell / TestCell / AddCell round-trip. */
   moc3 = astMoc( " " );
   astSetI( moc3, "MaxOrder", astGetI( moc, "MaxOrder" ) );
   for( i = 0; i < astGetI( moc, "MocLength" ); i++ ) {
      astGetCell( moc, i, &order, &npix );
      if( !astTestCell( moc, order, npix, 0 ) && *status == 0 )
         stopit( "Error 29B", status );
      astAddCell( moc3, AST__OR, order, npix );
   }
   if( !astEqual( moc, moc3 ) ) stopit( "Error 30", status );
   if( astOverlap( moc, moc3 ) != 5 ) stopit( "Error 31", status );

   if( astTestCell( moc, 8, (int64_t)123456, 0 ) )
      stopit( "Error 32", status );

   /* String MOC round-trip. */
   {  const char *mocstr1 = "1/1-2,4 2/12-14,21,23,25 8/";
      const char *mocstr2 = " 1/1,2,4   2/12-14, 21,23,25 8/ ";
      moc = astMoc( " " );
      astAddMocString( moc, AST__OR, 0, -1, strlen(mocstr1), mocstr1, &json );
      astGetMocString( moc, 0, 0, NULL, &size );
      if( size != 27 ) stopit( "Error 33", status );
      astGetMocString( moc, 0, sizeof(buf), buf, &size );
      if( size != 27 ) stopit( "Error 34", status );
      if( strncmp( buf, mocstr1, size ) ) stopit( "Error 35", status );

      moc2 = astMoc( " " );
      astAddMocString( moc2, AST__OR, 0, -1, strlen(mocstr2), mocstr2, &json );
      if( !astEqual( moc, moc2 ) ) stopit( "Error 36", status );
      if( astGetI( moc, "MaxOrder" ) != 8 ) stopit( "Error 37", status );
   }

   /* JSON MOC round-trip. */
   {  const char *mocjson1 = "{\"1\":[1,2,4], \"2\":[12,13,14,21,23,25],\"8\":[]}";
      const char *mocjson2 = "{\"1\":[1,2,4],\"2\":[12,13,14,21,23,25],\"8\":[]}";
      moc = astMoc( " " );
      astAddMocString( moc, AST__OR, 0, -1, strlen(mocjson1), mocjson1, &json );
      if( !json ) stopit( "Error 38", status );
      astGetMocString( moc, 1, 0, NULL, &size );
      if( size != 44 ) stopit( "Error 39", status );
      astGetMocString( moc, 1, sizeof(buf), buf, &size );
      if( size != 44 ) stopit( "Error 40", status );
      if( strncmp( buf, mocjson2, size ) ) stopit( "Error 41", status );
   }

   /* Normalisation at various maxorder values. */
   {  const char *expected[] = {
         "0/", "1/", "2/", "3/", "4/1", "4/1 5/1-2",
         "4/1 5/1-2 6/", "4/1 5/1-2 7/", "4/1 5/1-2 8/",
         "4/1 5/1-2 9/", "4/1 5/1-2 10/", NULL };
      for( i = 0; i <= 10; i++ ) {
         moc = astMoc( " " );
         astAddMocString( moc, AST__OR, 0, i, 100, "4/0-1", &json );
         astAddMocString( moc, AST__AND, 1, -1, 100, "5/0,3", &json );
         astGetMocString( moc, 0, sizeof(buf), buf, &size );
         buf[size] = '\0';
         if( expected[i] && strcmp( buf, expected[i] ) )
            stopit( "Error 42", status );
         astAnnul( moc );
      }
   }

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All Moc tests passed\n" );
   } else {
      printf( "Moc tests failed\n" );
   }
   return *status;
}
