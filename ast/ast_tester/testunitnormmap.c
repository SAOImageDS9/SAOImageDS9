/*
 *  Test the UnitNormMap class.
 *  Converted from the Fortran test testunitnormmap.f.
 *
 *  The checkdump round-trip uses Channel SinkFile/SourceFile instead of
 *  Fortran channel source/sink callbacks.
 *
 *  The differ() function includes an absolute tolerance floor of 1e-14,
 *  not present in the Fortran version, because near-zero values can
 *  differ slightly between unsimplified and simplified Mappings due to
 *  floating-point rounding in different code paths. The Fortran version
 *  uses a purely relative tolerance which happens to pass because the
 *  Fortran wrapper's argument marshalling produces a different rounding
 *  pattern.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static int differ( double aa, double bb ) {
   double diff = fabs( aa - bb );
   double tol = fabs( 0.5*( aa + bb ) ) * 1.0e-14;
   if( tol < 1.0e-14 ) tol = 1.0e-14;
   return diff > tol;
}

static void checkdump( AstObject *obj, int *status ) {
   AstChannel *ch;
   AstObject *result;
   int nin, nout, i;
   double in[] = { 10.0, 5.0, -12.0, 6.0 };
   double out1[4], out2[4];
   if( *status != 0 ) return;

   ch = astChannel( NULL, NULL, "SinkFile=testdmp" );
   if( astWrite( ch, obj ) != 1 ) { stopit( status, "Cannot write object" ); return; }
   astClear( ch, "SinkFile" );
   astSetC( ch, "SourceFile", "testdmp" );
   result = astRead( ch );
   if( !result ) { stopit( status, "Cannot read object" ); return; }

   if( !astIsAUnitNormMap( result ) ) {
      stopit( status, "Object read is not a UnitNormMap" );
   } else if( astGetI( result, "Nin" ) != astGetI( obj, "Nin" ) ) {
      stopit( status, "UnitNormMaps have different Nin" );
   } else {
      nin = astGetI( result, "Nin" );
      nout = astGetI( result, "Nout" );
      astTranN( result, 1, nin, 1, in, 1, nout, 1, out1 );
      astTranN( (AstMapping *)obj, 1, nin, 1, in, 1, nout, 1, out2 );
      for( i = 0; i < nout; i++ )
         if( differ( out2[i], out1[i] ) )
            stopit( status, "Recovered UnitNormMap differs" );
   }
   astAnnul( result );
   remove( "testdmp" );
}

static void checkroundtrip( AstMapping *map, const double *pos, int *good, int *status ) {
   int nin, nout, i;
   double out[7], in[7];
   AstMapping *mapinv, *cmp;

   *good = 1;
   if( *status != 0 ) return;

   nin = astGetI( map, "Nin" );
   nout = astGetI( map, "Nout" );
   astTranN( map, 1, nin, 1, pos, 1, nout, 1, out );
   astTranN( map, 1, nout, 1, out, 0, nin, 1, in );
   for( i = 0; i < nin; i++ )
      if( differ( in[i], pos[i] ) ) *good = 0;

   mapinv = astCopy( map );
   astInvert( mapinv );
   cmp = (AstMapping *)astCmpMap( map, mapinv, 1, " " );
   astTranN( cmp, 1, nin, 1, pos, 1, nin, 1, in );
   for( i = 0; i < nin; i++ )
      if( differ( in[i], pos[i] ) ) *good = 0;
}

static void testsimplify( int *status ) {
   int i, j, k, nin, nout;
   double centre1[] = { 2.0, -1.0, 0.0 };
   double centre2[] = { -1.0, 6.0, 4.0 };
   double shift[] = { 3.0, 7.0, -9.0 };
   double zeros[] = { 0.0, 0.0, 0.0 };
   double ones[] = { 1.0, 1.0, 1.0 };
   double a[3];
   double testpoints[] = { 1.0, 3.0, -5.0, 2.0, 3.0, 99.0,
                          -6.0, -5.0, -7.0, 30.0, 21.0, 37.0 };
   double outpoints[12], outpoints_simp[12];
   AstMapping *map1[7], *map2[7], *cmpmap, *cmpmap_simp;
   const char *cls[7];
   AstMapping *unm1, *unm1inv, *unm2, *unm2inv, *shiftmap, *winmap1, *winmap2;

   if( *status != 0 ) return;

   unm1 = (AstMapping *)astUnitNormMap( 3, centre1, " " );
   unm1inv = astCopy( unm1 );
   astSetL( unm1inv, "Invert", 1 );

   unm2 = (AstMapping *)astUnitNormMap( 3, centre2, " " );
   unm2inv = astCopy( unm2 );
   astSetL( unm2inv, "Invert", 1 );

   shiftmap = (AstMapping *)astShiftMap( 3, shift, " " );

   for( i = 0; i < 3; i++ ) a[i] = ones[i] + shift[i];
   winmap1 = (AstMapping *)astWinMap( 3, zeros, shift, ones, a, " " );

   for( i = 0; i < 3; i++ ) a[i] = 2*ones[i] + shift[i];
   winmap2 = (AstMapping *)astWinMap( 3, zeros, shift, ones, a, " " );

   map1[0] = unm1;      map2[0] = unm2inv;    cls[0] = "ShiftMap";
   map1[1] = shiftmap;   map2[1] = unm2;       cls[1] = "UnitNormMap";
   map1[2] = winmap1;    map2[2] = unm1;       cls[2] = "UnitNormMap";
   map1[3] = winmap2;    map2[3] = unm1;       cls[3] = "CmpMap";
   map1[4] = unm1inv;    map2[4] = shiftmap;   cls[4] = "UnitNormMap";
   map1[5] = unm1inv;    map2[5] = winmap1;    cls[5] = "UnitNormMap";
   map1[6] = unm1inv;    map2[6] = winmap2;    cls[6] = "CmpMap";

   for( i = 0; i < 7; i++ ) {
      const char *got;
      cmpmap = (AstMapping *)astCmpMap( map1[i], map2[i], 1, " " );
      cmpmap_simp = astSimplify( cmpmap );
      got = astOK ? astGetC( cmpmap_simp, "Class" ) : NULL;

      if( !got || strcmp( got, cls[i] ) )
         stopit( status, "Simplify error 1" );

      nin = astGetI( cmpmap, "Nin" );
      if( nin != astGetI( cmpmap_simp, "Nin" ) )
         stopit( status, "Simplify error 2" );

      nout = astGetI( cmpmap, "Nout" );
      if( nout != astGetI( cmpmap_simp, "Nout" ) )
         stopit( status, "Simplify error 3" );

      astTranN( cmpmap, 3, nin, 3, testpoints, 1, nout, 3, outpoints );
      astTranN( cmpmap_simp, 3, nin, 3, testpoints, 1, nout, 3, outpoints_simp );

      for( j = 0; j < nout; j++ )
         for( k = 0; k < 3; k++ )
            if( differ( outpoints[k + 3*j], outpoints_simp[k + 3*j] ) )
               stopit( status, "Simplify error 4" );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int nin, i, good;
   double norm, centre[] = { -1.0, 1.0, 2.0 };
   double frompos[] = { -22.0, 3.0, 0.5 };
   double topos[4];
   AstMapping *map;

   astWatch( status );
   astBegin;

   for( nin = 1; nin <= 3; nin++ ) {
      map = (AstMapping *)astUnitNormMap( nin, centre, " " );

      if( !astIsAUnitNormMap( map ) ) stopit( status, "Error 1" );
      if( !astIsAMapping( map ) ) stopit( status, "Error 2" );
      if( astGetI( map, "Nin" ) != nin ) stopit( status, "Error 3" );
      if( astGetI( map, "Nout" ) != nin + 1 ) stopit( status, "Error 4" );
      if( astGetL( map, "IsLinear" ) ) stopit( status, "Error 5" );

      checkdump( (AstObject *)map, status );
      astInvert( map );
      checkdump( (AstObject *)map, status );
      astInvert( map );

      checkroundtrip( map, frompos, &good, status );
      if( !good ) stopit( status, "Error 6" );

      checkroundtrip( map, centre, &good, status );
      if( !good ) stopit( status, "Error 6b" );

      {
         AstMapping *invmap = astCopy( map );
         AstMapping *smap;
         astInvert( invmap );
         smap = astSimplify( astCmpMap( map, invmap, 1, " " ) );
         if( !astIsAUnitMap( smap ) ) stopit( status, "Error 7" );
         if( astGetI( smap, "Nin" ) != nin ) stopit( status, "Error 8" );

         smap = astSimplify( astCmpMap( invmap, map, 1, " " ) );
         if( !astIsAUnitMap( smap ) ) stopit( status, "Error 9" );
         if( astGetI( smap, "Nin" ) != nin + 1 ) stopit( status, "Error 10" );
      }

      astTranN( map, 1, nin, 1, frompos, 1, nin + 1, 1, topos );
      norm = 0.0;
      for( i = 0; i < nin; i++ )
         norm += ( frompos[i] - centre[i] ) * ( frompos[i] - centre[i] );
      norm = sqrt( norm );

      if( differ( norm, topos[nin] ) ) stopit( status, "Error 11" );
      for( i = 0; i < nin; i++ )
         if( differ( norm * topos[i], frompos[i] - centre[i] ) )
            stopit( status, "Error 12" );
   }

   if( *status == 0 ) testsimplify( status );

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All UnitNormMap tests passed\n" );
   } else {
      printf( "UnitNormMap tests failed\n" );
   }
   return *status;
}
