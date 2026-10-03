/*
 * Test the RebinSeq functions.
 * Converted from the Fortran test testrebinseq.f.
 *
 * Differences from the Fortran original:
 *
 * - err_mark/err_rlse are omitted. The C version uses astWatch(&status)
 *   and plain printf()-based failure reporting.
 *
 * - msg_set* and err_rep are replaced by direct printf() diagnostics.
 *
 * - Fortran VAL__BAD[R|D|I] constants are represented using AST__BAD for
 *   floating-point values and INT_MIN for integers.
 *
 * - The Fortran main program calls TEST12 twice and never calls TEST13.
 *   That behaviour is preserved here for fidelity.
 *
 * - ast_flushmemory(1) is omitted.
 */

#include "ast.h"
#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define NX 100
#define NY 200
#define NX_IN 100
#define NY_IN 200
#define BORDER_OUT 10
#define NX_OUT ( NX_IN + 2*BORDER_OUT )
#define NY_OUT ( NY_IN + 2*BORDER_OUT )
#define SIZE 20000
#define BUFSIZE 100

static void tests( int ndim, int spread, const double *params, int *status );
static void test1( int ndim, int spread, const double *params, int *status );
static void test2( int ndim, int spread, const double *params, int *status );
static void test3( int ndim, int spread, const double *params, int *status );
static void test4( int ndim, int spread, const double *params, int *status );
static void test5( int ndim, int spread, const double *params, int *status );
static void test6( int ndim, int spread, const double *params, int *status );
static void test7( int ndim, int spread, const double *params, int *status );
static void test8( int ndim, int spread, const double *params, int *status );
static void test9( int ndim, int spread, const double *params, int *status );
static void test10( int ndim, int spread, const double *params, int *status );
static void test11( int ndim, int spread, const double *params, int *status );
static void test12( int ndim, int spread, const double *params, int *status );
static void addnoise( int n, double *array, double sigma, int *status );

static int idx2( int nx, int i, int j ) {
   return ( j - 1 )*nx + ( i - 1 );
}

static void fail_msg( int *status, const char *msg ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", msg );
}

static void fail_test( int *status, const char *name ) {
   char msg[128];
   snprintf( msg, sizeof( msg ), "%s failed", name );
   fail_msg( status, msg );
}

static void set_bounds( int lbnd_in[ 3 ], int ubnd_in[ 3 ],
                        int lbnd_out[ 3 ], int ubnd_out[ 3 ],
                        int nx_in, int ny_in, int nx_out, int ny_out ) {
   lbnd_in[ 0 ] = 0;
   lbnd_in[ 1 ] = 1;
   lbnd_in[ 2 ] = 1;
   ubnd_in[ 0 ] = nx_in - 1;
   ubnd_in[ 1 ] = ny_in;
   ubnd_in[ 2 ] = 1;

   lbnd_out[ 0 ] = 0;
   lbnd_out[ 1 ] = 1;
   lbnd_out[ 2 ] = 1;
   ubnd_out[ 0 ] = nx_out - 1;
   ubnd_out[ 1 ] = ny_out;
   ubnd_out[ 2 ] = 1;
}

int main( void ) {
   int status = 0;
   double params[ 2 ];

   astWatch( &status );
   astBegin;

   params[ 0 ] = 1.5;
   params[ 1 ] = 1.0;

   tests( 1, AST__GAUSS, params, &status );
   tests( 2, AST__GAUSS, params, &status );
   tests( 3, AST__GAUSS, params, &status );
   tests( 1, AST__NEAREST, params, &status );
   tests( 2, AST__NEAREST, params, &status );
   tests( 3, AST__NEAREST, params, &status );
   tests( 1, AST__LINEAR, params, &status );
   tests( 2, AST__LINEAR, params, &status );
   tests( 3, AST__LINEAR, params, &status );

   astEnd;

   if( status == 0 ) {
      printf( "All AST_REBINSEQ tests passed\n" );
   } else {
      printf( "AST_REBINSEQ tests failed\n" );
   }

   return status ? 1 : 0;
}

static void tests( int ndim, int spread, const double *params, int *status ) {
   if( *status != 0 ) return;

   test1( ndim, spread, params, status );
   test2( ndim, spread, params, status );
   test3( ndim, spread, params, status );
   test4( ndim, spread, params, status );
   test5( ndim, spread, params, status );
   test6( ndim, spread, params, status );
   test7( ndim, spread, params, status );
   test8( ndim, spread, params, status );
   test9( ndim, spread, params, status );
   test10( ndim, spread, params, status );
   test11( ndim, spread, params, status );
   test12( ndim, spread, params, status );
   test12( ndim, spread, params, status );

   if( *status != 0 ) {
      const char *sname = "UNKNOWN";
      if( spread == AST__GAUSS ) {
         sname = "AST__GAUSS";
      } else if( spread == AST__NEAREST ) {
         sname = "AST__NEAREST";
      } else if( spread == AST__LINEAR ) {
         sname = "AST__LINEAR";
      }
      printf( "Spread=%s (%d-dimensional)\n", sname, ndim );
   }
}

static void addnoise( int n, double *array, double sigma, int *status ) {
   int i;
   int nused;
   double noise[ BUFSIZE ];
   double junk[ BUFSIZE ];
   char fwd[ 80 ];
   const char *fwd_ptr[ 1 ];
   const char *inv_ptr[ 1 ] = { "X" };
   AstMapping *mm;

   if( *status != 0 ) return;

   memset( junk, 0, sizeof( junk ) );
   snprintf( fwd, sizeof( fwd ), "Y=Gauss(0.0,%.17g)", sigma );
   fwd_ptr[ 0 ] = fwd;

   mm = (AstMapping *) astMathMap( 1, 1, 1, fwd_ptr, 1, inv_ptr, " " );
   if( !astOK || !mm ) return;

   astSet( mm, "Seed=1" );

   nused = BUFSIZE;
   for( i = 0; i < n; i++ ) {
      if( nused == BUFSIZE ) {
         astTran1( mm, BUFSIZE, junk, 1, noise );
         if( !astOK ) break;
         nused = 0;
      }
      array[ i ] += noise[ nused++ ];
   }

   astAnnul( mm );
}

static void test1( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const float badval = (float) AST__BAD;
   float in[ NX*NY ];
   float out[ NX*NY ];
   double weights[ NX*NY ];
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1.0f;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT + AST__REBINEND;

   map = (AstMapping *) astUnitMap( ndim, " " );
   astRebinSeqF( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread, params,
                 flags, 0.01, 50, badval, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, out, weights, &nused );

   jhi = ( ndim == 1 ) ? 1 : NY;
   for( i = 1; i <= NX && *status == 0; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         float v = out[ idx2( NX, i, j ) ];
         if( fabsf( v - 1.0f ) > 1.0e-6f ) {
            char msg[ 128 ];
            snprintf( msg, sizeof( msg ),
                      "Output pixel (%d,%d) should be 1.0 but is %.9g",
                      i, j, (double) v );
            fail_msg( status, msg );
            break;
         }
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test1" );
}

static void test2( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   double in[ NX*NY ];
   double out[ NX*NY ];
   double weights[ NX*NY ];
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1.0;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT;

   map = (AstMapping *) astUnitMap( ndim, " " );
   for( i = 1; i <= 3; i++ ) {
      if( i == 3 ) flags = AST__REBINEND;
      astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread,
                    params, flags, 0.01, 50, AST__BAD, ndim, lbnd_out,
                    ubnd_out, lbnd_in, ubnd_in, out, out, weights, &nused );
   }

   jhi = ( ndim == 1 ) ? 1 : NY;
   for( i = 1; i <= NX && *status == 0; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         double v = out[ idx2( NX, i, j ) ];
         if( fabs( v - 1.0 ) > 1.0e-6 ) {
            char msg[ 128 ];
            snprintf( msg, sizeof( msg ),
                      "Output pixel (%d,%d) should be 1.0 but is %.17g",
                      i, j, v );
            fail_msg( status, msg );
            break;
         }
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test2" );
}

static void test3( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   int in[ NX*NY ];
   int out[ NX*NY ];
   double weights[ NX*NY ];
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT + AST__NONORM;

   map = (AstMapping *) astUnitMap( ndim, " " );
   for( i = 1; i <= 3; i++ ) {
      astRebinSeqI( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread,
                    params, flags, 0.01, 50, INT_MIN, ndim, lbnd_out,
                    ubnd_out, lbnd_in, ubnd_in, out, out, weights, &nused );
      flags = AST__NONORM;
   }

   jhi = ( ndim == 1 ) ? 1 : NY;
   for( i = 1; i <= NX && *status == 0; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         int v = out[ idx2( NX, i, j ) ];
         if( v != 3 ) {
            char msg[ 128 ];
            snprintf( msg, sizeof( msg ),
                      "Output pixel (%d,%d) should be 3 but is %d",
                      i, j, v );
            fail_msg( status, msg );
            break;
         }
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test3" );
}

static void test4( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lboxg[ 3 ];
   int uboxg[ 3 ];
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const float badval = (float) AST__BAD;
   float in[ NX*NY ];
   float out[ NX*NY ];
   double weights[ NX*NY ];
   double ina[ 3 ];
   double inb[ 3 ];
   double outa[ 3 ];
   double outb[ 3 ];
   double sum;
   double answer;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1.0f;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT + AST__REBINEND + AST__CONSERVEFLUX;

   ina[ 0 ] = lbnd_in[ 0 ];
   ina[ 1 ] = lbnd_in[ 1 ];
   ina[ 2 ] = lbnd_in[ 2 ];
   inb[ 0 ] = ubnd_in[ 0 ];
   inb[ 1 ] = ubnd_in[ 1 ];
   inb[ 2 ] = ubnd_in[ 2 ] + 1.0;

   outa[ 0 ] = 0.75*lbnd_out[ 0 ] + 0.25*ubnd_out[ 0 ];
   outa[ 1 ] = 0.75*lbnd_out[ 1 ] + 0.25*ubnd_out[ 1 ];
   outa[ 2 ] = ina[ 2 ];
   outb[ 0 ] = 0.25*lbnd_out[ 0 ] + 0.75*ubnd_out[ 0 ];
   outb[ 1 ] = 0.25*lbnd_out[ 1 ] + 0.75*ubnd_out[ 1 ];
   outb[ 2 ] = inb[ 2 ];

   map = (AstMapping *) astWinMap( ndim, ina, inb, outa, outb, " " );
   astRebinSeqF( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread, params,
                 flags, 0.01, 1000, badval, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, out, weights, &nused );

   lboxg[ 0 ] = INT_MAX;
   lboxg[ 1 ] = INT_MAX;
   uboxg[ 0 ] = INT_MIN;
   uboxg[ 1 ] = INT_MIN;
   sum = 0.0;

   jhi = ( ndim == 1 ) ? 1 : NY;
   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         float v = out[ idx2( NX, i, j ) ];
         if( v != badval ) {
            sum += v;
            if( i < lboxg[ 0 ] ) lboxg[ 0 ] = i;
            else if( i > uboxg[ 0 ] ) uboxg[ 0 ] = i;
            if( j < lboxg[ 1 ] ) lboxg[ 1 ] = j;
            else if( j > uboxg[ 1 ] ) uboxg[ 1 ] = j;
         }
      }
   }

   if( ndim == 1 ) {
      if( ( spread == AST__GAUSS &&
            ( lboxg[ 0 ] != 24 || uboxg[ 0 ] != 77 ) ) ||
          ( spread == AST__NEAREST &&
            ( lboxg[ 0 ] != 26 || uboxg[ 0 ] != 75 ) ) ||
          ( spread == AST__LINEAR &&
            ( lboxg[ 0 ] != 25 || uboxg[ 0 ] != 76 ) ) ) {
         printf( "%d %d\n", lboxg[ 0 ], uboxg[ 0 ] );
         fail_msg( status, "Good pixel bounding box is wrong" );
      }

      if( spread == AST__NEAREST ) answer = 100.0;
      else if( spread == AST__GAUSS ) answer = 108.0;
      else if( spread == AST__LINEAR ) answer = 104.0;
      else answer = -1.0;

   } else {
      if( ( spread == AST__GAUSS &&
            ( lboxg[ 0 ] != 24 || lboxg[ 1 ] != 49 ||
              uboxg[ 0 ] != 77 || uboxg[ 1 ] != 152 ) ) ||
          ( spread == AST__NEAREST &&
            ( lboxg[ 0 ] != 26 || lboxg[ 1 ] != 51 ||
              uboxg[ 0 ] != 75 || uboxg[ 1 ] != 150 ) ) ||
          ( spread == AST__LINEAR &&
            ( lboxg[ 0 ] != 25 || lboxg[ 1 ] != 50 ||
              uboxg[ 0 ] != 76 || uboxg[ 1 ] != 151 ) ) ) {
         printf( "%d %d %d %d\n", lboxg[ 0 ], lboxg[ 1 ],
                 uboxg[ 0 ], uboxg[ 1 ] );
         fail_msg( status, "Good pixel bounding box is wrong" );
      }

      if( spread == AST__NEAREST ) answer = 20000.0;
      else if( spread == AST__GAUSS ) answer = 22464.0;
      else if( spread == AST__LINEAR ) answer = 21216.0;
      else answer = -1.0;
   }

   if( *status == 0 && fabs( sum - answer ) > 0.01 ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Total output data sum is %.17g (should be %.17g).",
                sum, answer );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test4" );
}

static void test5( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int k;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   double in[ NX_IN*NY_IN ];
   double out[ NX_OUT*NY_OUT ];
   double weights[ NX_OUT*NY_OUT ];
   double ina[ 3 ];
   double inb[ 3 ];
   double outa[ 3 ];
   double outb[ 3 ];
   double sum;
   double va;
   double vb;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   lbnd_in[ 0 ] = 0;
   lbnd_in[ 1 ] = 1;
   lbnd_in[ 2 ] = 1;
   ubnd_in[ 0 ] = NX_IN - 1;
   ubnd_in[ 1 ] = NY_IN;
   ubnd_in[ 2 ] = 1;

   lbnd_out[ 0 ] = lbnd_in[ 0 ] - BORDER_OUT;
   lbnd_out[ 1 ] = lbnd_in[ 1 ] - BORDER_OUT;
   lbnd_out[ 2 ] = 1;
   ubnd_out[ 0 ] = ubnd_in[ 0 ] + BORDER_OUT;
   ubnd_out[ 1 ] = ubnd_in[ 1 ] + BORDER_OUT;
   ubnd_out[ 2 ] = 1;

   flags = AST__REBININIT + AST__NONORM;

   ina[ 0 ] = lbnd_in[ 0 ];
   ina[ 1 ] = lbnd_in[ 1 ];
   ina[ 2 ] = lbnd_in[ 2 ];
   inb[ 0 ] = ubnd_in[ 0 ];
   inb[ 1 ] = ubnd_in[ 1 ];
   inb[ 2 ] = ubnd_in[ 2 ] + 1.0;

   memset( out, 0, sizeof( out ) );
   memset( weights, 0, sizeof( weights ) );

   for( k = 1; k <= 3; k++ ) {
      for( i = 1; i <= NX_IN; i++ ) {
         for( j = 1; j <= NY_IN; j++ ) {
            in[ idx2( NX_IN, i, j ) ] = (double) k;
         }
      }

      va = ( k - 1 )*0.25;
      vb = va + 0.5;

      outa[ 0 ] = vb*lbnd_in[ 0 ] + va*ubnd_in[ 0 ];
      outa[ 1 ] = vb*lbnd_in[ 1 ] + va*ubnd_in[ 1 ];
      outa[ 2 ] = ina[ 2 ];
      outb[ 0 ] = va*lbnd_in[ 0 ] + vb*ubnd_in[ 0 ];
      outb[ 1 ] = va*lbnd_in[ 1 ] + vb*ubnd_in[ 1 ];
      outb[ 2 ] = inb[ 2 ];

      map = (AstMapping *) astWinMap( ndim, ina, inb, outa, outb, " " );
      astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread,
                    params, flags, 0.01, 50, AST__BAD, ndim, lbnd_out,
                    ubnd_out, lbnd_in, ubnd_in, out, out, weights, &nused );

      flags = AST__NONORM;
   }

   jhi = ( ndim == 1 ) ? 1 : NY_OUT;
   sum = 0.0;

   for( i = 1; i <= NX_OUT; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         double v = out[ idx2( NX_OUT, i, j ) ];
         if( v != AST__BAD ) sum += v;
      }
   }

   if( ndim == 1 ) {
      if( fabs( sum - 600.0 ) > 1.0e-3 ) {
         char msg[ 160 ];
         snprintf( msg, sizeof( msg ),
                   "Total output data sum is %.17g (should be 600).", sum );
         fail_msg( status, msg );
      } else if( fabs( out[ idx2( NX_OUT, 20, 1 ) ] - 2.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (20) should be 2." );
      } else if( fabs( out[ idx2( NX_OUT, 50, 1 ) ] - 6.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (50) should be 6." );
      } else if( fabs( out[ idx2( NX_OUT, 70, 1 ) ] - 10.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (70) should be 10." );
      } else if( fabs( out[ idx2( NX_OUT, 100, 1 ) ] - 6.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (100) should be 6." );
      }

   } else if( ndim == 2 ) {
      if( fabs( sum - 120000.0 ) > 1.0e-3 ) {
         char msg[ 160 ];
         snprintf( msg, sizeof( msg ),
                   "Total output data sum is %.17g (should be 120000).", sum );
         fail_msg( status, msg );
      } else if( fabs( out[ idx2( NX_OUT, 40, 40 ) ] - 4.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (40,40) should be 4." );
      } else if( fabs( out[ idx2( NX_OUT, 50, 90 ) ] - 12.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (50,90) should be 12." );
      } else if( fabs( out[ idx2( NX_OUT, 70, 80 ) ] - 8.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (70,80) should be 8." );
      } else if( fabs( out[ idx2( NX_OUT, 70, 130 ) ] - 20.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (70,130) should be 20." );
      } else if( fabs( out[ idx2( NX_OUT, 20, 130 ) ] - 0.0 ) > 1.0e-6 ) {
         fail_msg( status, "Output pixel (20,130) should be 0." );
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test5" );
}

static void test6( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int k;
   int flags;
   const int nk = 3;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   double in[ NX_IN*NY_IN ];
   double out[ NX_OUT*NY_OUT ];
   double weights[ NX_OUT*NY_OUT ];
   double ina[ 3 ];
   double inb[ 3 ];
   double outa[ 3 ];
   double outb[ 3 ];
   double sum;
   double answer;
   double va;
   double vb;
   double mxval;
   double mnval;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   lbnd_in[ 0 ] = 0;
   lbnd_in[ 1 ] = 1;
   lbnd_in[ 2 ] = 1;
   ubnd_in[ 0 ] = NX_IN - 1;
   ubnd_in[ 1 ] = NY_IN;
   ubnd_in[ 2 ] = 1;

   lbnd_out[ 0 ] = lbnd_in[ 0 ] - BORDER_OUT;
   lbnd_out[ 1 ] = lbnd_in[ 1 ] - BORDER_OUT;
   lbnd_out[ 2 ] = 1;
   ubnd_out[ 0 ] = ubnd_in[ 0 ] + BORDER_OUT;
   ubnd_out[ 1 ] = ubnd_in[ 1 ] + BORDER_OUT;
   ubnd_out[ 2 ] = 1;

   ina[ 0 ] = lbnd_in[ 0 ];
   ina[ 1 ] = lbnd_in[ 1 ];
   ina[ 2 ] = lbnd_in[ 2 ];
   inb[ 0 ] = ubnd_in[ 0 ];
   inb[ 1 ] = ubnd_in[ 1 ];
   inb[ 2 ] = ubnd_in[ 2 ] + 1.0;

   memset( out, 0, sizeof( out ) );
   memset( weights, 0, sizeof( weights ) );

   for( k = 1; k <= nk; k++ ) {
      flags = AST__CONSERVEFLUX;
      if( k == 1 ) flags += AST__REBININIT;
      if( k == nk ) flags += AST__REBINEND;

      for( i = 1; i <= NX_IN; i++ ) {
         for( j = 1; j <= NY_IN; j++ ) {
            in[ idx2( NX_IN, i, j ) ] = (double) k;
         }
      }

      va = ( k - 1 )*0.25;
      vb = va + 0.5;

      outa[ 0 ] = vb*lbnd_in[ 0 ] + va*ubnd_in[ 0 ];
      outa[ 1 ] = vb*lbnd_in[ 1 ] + va*ubnd_in[ 1 ];
      outa[ 2 ] = ina[ 2 ];
      outb[ 0 ] = va*lbnd_in[ 0 ] + vb*ubnd_in[ 0 ];
      outb[ 1 ] = va*lbnd_in[ 1 ] + vb*ubnd_in[ 1 ];
      outb[ 2 ] = inb[ 2 ];

      map = (AstMapping *) astWinMap( ndim, ina, inb, outa, outb, " " );
      astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread,
                    params, flags, 0.01, 50, AST__BAD, ndim, lbnd_out,
                    ubnd_out, lbnd_in, ubnd_in, out, out, weights, &nused );
   }

   jhi = ( ndim == 1 ) ? 1 : NY_OUT;
   sum = 0.0;
   mxval = -1.0e300;
   mnval = 1.0e300;

   for( i = 1; i <= NX_OUT; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         double v = out[ idx2( NX_OUT, i, j ) ];
         if( v != AST__BAD ) {
            sum += v;
            if( v > mxval ) mxval = v;
            if( v < mnval ) mnval = v;
         }
      }
   }

   if( ndim == 1 ) {
      if( spread == AST__GAUSS ) answer = 414.0;
      else if( spread == AST__NEAREST ) answer = 399.4;
      else if( spread == AST__LINEAR ) answer = 400.0;
      else answer = -1.0;

      if( fabs( sum - answer ) > 1.0e-3 ) {
         char msg[ 160 ];
         snprintf( msg, sizeof( msg ),
                   "Total output data sum is %.17g (should be %.17g).",
                   sum, answer );
         fail_msg( status, msg );
      } else if( fabs( mxval - 6.0 ) > 1.0e-6 ) {
         fail_msg( status, "Max value should be 6." );
      } else if( fabs( mnval - 2.0 ) > 1.0e-6 ) {
         fail_msg( status, "Min value should be 2." );
      }

   } else if( ndim == 2 ) {
      if( spread == AST__GAUSS ) answer = 109011.729592723;
      else if( spread == AST__NEAREST ) answer = 100716.666666667;
      else if( spread == AST__LINEAR ) answer = 102816.0;
      else answer = -1.0;

      if( fabs( sum - answer ) > 1.0e-3 ) {
         char msg[ 160 ];
         snprintf( msg, sizeof( msg ),
                   "Total output data sum is %.17g (should be %.17g).",
                   sum, answer );
         fail_msg( status, msg );
      } else if( fabs( mxval - 12.0 ) > 1.0e-6 ) {
         fail_msg( status, "Max value should be 12." );
      } else if( fabs( mnval - 4.0 ) > 1.0e-6 ) {
         fail_msg( status, "Min value should be 4." );
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test6" );
}

static void test7( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const float badval = (float) AST__BAD;
   float in[ NX*NY ];
   float out[ NX*NY ];
   double weights[ NX*NY ];
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1.0f;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT + AST__REBINEND;

   map = (AstMapping *) astZoomMap( ndim, 0.5, " " );
   astRebinSeqF( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread, params,
                 flags, 0.01, 50, badval, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, out, weights, &nused );

   jhi = ( ndim == 1 ) ? 1 : NY;
   for( i = 1; i <= NX && *status == 0; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         float v = out[ idx2( NX, i, j ) ];
         if( v != badval && fabsf( v - 1.0f ) > 1.0e-6f ) {
            char msg[ 128 ];
            snprintf( msg, sizeof( msg ),
                      "Output pixel (%d,%d) should be 1.0 but is %.9g",
                      i, j, (double) v );
            fail_msg( status, msg );
            break;
         }
      }
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test7" );
}

static void test8( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int jhi;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const float badval = (float) AST__BAD;
   float in[ NX*NY ];
   float out[ NX*NY ];
   double weights[ NX*NY ];
   double shifts[ 3 ] = { 5.0, 5.0, 0.0 };
   double sum;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= NY; j++ ) {
         in[ idx2( NX, i, j ) ] = 1.0f;
      }
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, NX, NY, NX, NY );
   flags = AST__REBININIT + AST__REBINEND + AST__NONORM;

   if( ndim < 3 ) {
      map = (AstMapping *) astCmpMap(
         (AstMapping *) astZoomMap( ndim, 0.5, " " ),
         (AstMapping *) astShiftMap( ndim, shifts, " " ), 1, " " );
   } else {
      map = (AstMapping *) astCmpMap(
         (AstMapping *) astCmpMap(
            (AstMapping *) astZoomMap( 2, 0.5, " " ),
            (AstMapping *) astShiftMap( 2, shifts, " " ), 1, " " ),
         (AstMapping *) astUnitMap( 1, " " ), 0, " " );
   }

   astRebinSeqF( map, 0.0, ndim, lbnd_in, ubnd_in, in, in, spread, params,
                 flags, 0.01, 50, badval, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, out, weights, &nused );

   jhi = ( ndim == 1 ) ? 1 : NY;
   sum = 0.0;
   for( i = 1; i <= NX; i++ ) {
      for( j = 1; j <= jhi; j++ ) {
         float v = out[ idx2( NX, i, j ) ];
         if( v != badval ) sum += v;
      }
   }

   if( sum != sum ) {
      fail_msg( status, "Total output data sum is NaN" );
   } else if( fabs( sum - (double) ( NX*jhi ) ) > sum*1.0e-7 ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Total output data sum is %.17g (should be %.17g).",
                sum, (double) ( NX*jhi ) );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test8" );
}

static void test9( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int nx;
   int ny;
   int ilo;
   int ihi;
   int jlo;
   int jhi;
   int k;
   int nval;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const double sigma = 0.1;
   double in[ SIZE ];
   double vin[ SIZE ];
   double out[ SIZE ];
   double vout[ SIZE ];
   double weights[ SIZE ];
   double sum;
   double sum2;
   double sum3;
   double realvar;
   double meanvar;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 0; i < SIZE; i++ ) {
      in[ i ] = 1.0;
      vin[ i ] = sigma*sigma;
   }

   addnoise( SIZE, in, sigma, status );

   if( ndim == 1 ) {
      nx = SIZE;
      ny = 1;
   } else {
      nx = SIZE/200;
      ny = 200;
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, nx, ny, nx, ny );
   flags = AST__REBININIT + AST__REBINEND + AST__NONORM + AST__USEVAR;

   map = (AstMapping *) astZoomMap( ndim, 0.5, " " );
   astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, vin, spread, params,
                 flags, 0.01, 50, AST__BAD, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, vout, weights, &nused );

   if( ndim == 1 ) {
      ilo = 6;
      ihi = (int) lround( 0.45*SIZE );
      jlo = 1;
      jhi = 1;
   } else {
      ilo = 6;
      ihi = 41;
      jlo = 8;
      jhi = 91;
   }

   sum = 0.0;
   sum2 = 0.0;
   sum3 = 0.0;
   nval = 0;

   for( i = ilo; i <= ihi; i++ ) {
      for( j = jlo; j <= jhi; j++ ) {
         k = idx2( nx, i, j );
         if( out[ k ] != AST__BAD ) {
            sum += out[ k ];
            sum2 += out[ k ]*out[ k ];
            sum3 += vout[ k ];
            nval++;
         }
      }
   }

   sum /= nval;
   realvar = sum2/nval - sum*sum;
   meanvar = sum3/nval;
   if( fabs( realvar - meanvar ) > 0.05*( realvar + meanvar ) ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Real variance is %.17g - estimate is %.17g.",
                realvar, meanvar );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test9" );
}

static void test10( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int nx;
   int ny;
   int ilo;
   int ihi;
   int jlo;
   int jhi;
   int k;
   int nval;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const double sigma = 0.1;
   double in[ SIZE ];
   double vin[ SIZE ];
   double out[ SIZE ];
   double vout[ SIZE ];
   double weights[ SIZE ];
   double sum;
   double sum2;
   double sum3;
   double realvar;
   double meanvar;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 0; i < SIZE; i++ ) {
      in[ i ] = 1.0;
      vin[ i ] = sigma*sigma;
   }

   addnoise( SIZE, in, sigma, status );

   if( ndim == 1 ) {
      nx = SIZE;
      ny = 1;
   } else {
      nx = SIZE/200;
      ny = 200;
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, nx, ny, nx, ny );
   flags = AST__REBININIT + AST__REBINEND + AST__CONSERVEFLUX + AST__USEVAR;

   map = (AstMapping *) astZoomMap( ndim, 0.5, " " );
   astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, vin, spread, params,
                 flags, 0.01, 50, AST__BAD, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, vout, weights, &nused );

   if( ndim == 1 ) {
      ilo = 6;
      ihi = (int) lround( 0.45*SIZE );
      jlo = 1;
      jhi = 1;
   } else {
      ilo = 6;
      ihi = 41;
      jlo = 8;
      jhi = 91;
   }

   sum = 0.0;
   sum2 = 0.0;
   sum3 = 0.0;
   nval = 0;

   for( i = ilo; i <= ihi; i++ ) {
      for( j = jlo; j <= jhi; j++ ) {
         k = idx2( nx, i, j );
         if( out[ k ] != AST__BAD ) {
            sum += out[ k ];
            sum2 += out[ k ]*out[ k ];
            sum3 += vout[ k ];
            nval++;
         }
      }
   }

   sum /= nval;
   realvar = sum2/nval - sum*sum;
   meanvar = sum3/nval;
   if( fabs( realvar - meanvar ) > 0.05*( realvar + meanvar ) ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Real variance is %.17g - estimate is %.17g.",
                realvar, meanvar );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test10" );
}

static void test11( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int nx;
   int ny;
   int ilo;
   int ihi;
   int jlo;
   int jhi;
   int k;
   int nval;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const double sigma = 0.1;
   double in[ SIZE ];
   double vin[ SIZE ];
   double out[ SIZE ];
   double vout[ SIZE ];
   double weights[ SIZE*2 ];
   double sum;
   double sum2;
   double sum3;
   double realvar;
   double meanvar;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 0; i < SIZE; i++ ) {
      in[ i ] = 1.0;
      vin[ i ] = sigma*sigma;
   }

   addnoise( SIZE, in, sigma, status );

   if( ndim == 1 ) {
      nx = SIZE;
      ny = 1;
   } else {
      nx = SIZE/200;
      ny = 200;
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, nx, ny, nx, ny );
   flags = AST__REBININIT + AST__REBINEND + AST__GENVAR;

   map = (AstMapping *) astZoomMap( ndim, 0.5, " " );
   astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, vin, spread, params,
                 flags, 0.01, 50, AST__BAD, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, vout, weights, &nused );

   if( ndim == 1 ) {
      ilo = 6;
      ihi = (int) lround( 0.45*SIZE );
      jlo = 1;
      jhi = 1;
   } else {
      ilo = 6;
      ihi = 41;
      jlo = 8;
      jhi = 91;
   }

   sum = 0.0;
   sum2 = 0.0;
   sum3 = 0.0;
   nval = 0;

   for( i = ilo; i <= ihi; i++ ) {
      for( j = jlo; j <= jhi; j++ ) {
         k = idx2( nx, i, j );
         if( out[ k ] != AST__BAD ) {
            sum += out[ k ];
            sum2 += out[ k ]*out[ k ];
            sum3 += vout[ k ];
            nval++;
         }
      }
   }

   sum /= nval;
   realvar = sum2/nval - sum*sum;
   meanvar = sum3/nval;
   if( fabs( realvar - meanvar ) > 0.05*( realvar + meanvar ) ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Real variance is %.17g - estimate is %.17g.",
                realvar, meanvar );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test11" );
}

static void test12( int ndim, int spread, const double *params, int *status ) {
   int i;
   int j;
   int nx;
   int ny;
   int ilo;
   int ihi;
   int jlo;
   int jhi;
   int k;
   int nval;
   int flags;
   int lbnd_in[ 3 ];
   int ubnd_in[ 3 ];
   int lbnd_out[ 3 ];
   int ubnd_out[ 3 ];
   int64_t nused = 0;
   const double sigma = 0.1;
   double in[ SIZE ];
   double vin[ SIZE ];
   double out[ SIZE ];
   double vout[ SIZE ];
   double weights[ SIZE*2 ];
   double sum;
   double sum2;
   double sum3;
   double realvar;
   double meanvar;
   AstMapping *map;

   if( *status != 0 ) return;
   astBegin;

   for( i = 0; i < SIZE; i++ ) {
      in[ i ] = 1.0;
      vin[ i ] = sigma*sigma;
   }

   addnoise( SIZE, in, sigma, status );

   if( ndim == 1 ) {
      nx = SIZE;
      ny = 1;
   } else {
      nx = SIZE/200;
      ny = 200;
   }

   set_bounds( lbnd_in, ubnd_in, lbnd_out, ubnd_out, nx, ny, nx, ny );
   flags = AST__REBININIT + AST__REBINEND + AST__GENVAR +
           AST__CONSERVEFLUX + AST__VARWGT;

   map = (AstMapping *) astZoomMap( ndim, 0.5, " " );
   astRebinSeqD( map, 0.0, ndim, lbnd_in, ubnd_in, in, vin, spread, params,
                 flags, 0.01, 50, AST__BAD, ndim, lbnd_out, ubnd_out,
                 lbnd_in, ubnd_in, out, vout, weights, &nused );

   if( ndim == 1 ) {
      ilo = 6;
      ihi = (int) lround( 0.45*SIZE );
      jlo = 1;
      jhi = 1;
   } else {
      ilo = 6;
      ihi = 41;
      jlo = 8;
      jhi = 91;
   }

   sum = 0.0;
   sum2 = 0.0;
   sum3 = 0.0;
   nval = 0;

   for( i = ilo; i <= ihi; i++ ) {
      for( j = jlo; j <= jhi; j++ ) {
         k = idx2( nx, i, j );
         if( out[ k ] != AST__BAD ) {
            sum += out[ k ];
            sum2 += out[ k ]*out[ k ];
            sum3 += vout[ k ];
            nval++;
         }
      }
   }

   sum /= nval;
   realvar = sum2/nval - sum*sum;
   meanvar = sum3/nval;
   if( fabs( realvar - meanvar ) > 0.05*( realvar + meanvar ) ) {
      char msg[ 160 ];
      snprintf( msg, sizeof( msg ),
                "Real variance is %.17g - estimate is %.17g.",
                realvar, meanvar );
      fail_msg( status, msg );
   }

   astEnd;
   if( *status != 0 ) fail_test( status, "test12" );
}
