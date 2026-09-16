/*
 *  Test the astResample functions and astQuadApprox.
 *
 *  These functions had zero test coverage. The tests exercise
 *  astResampleD, astResampleF, astResampleI across multiple
 *  interpolation schemes (NEAREST, LINEAR, SINC, SINCSINC, SINCCOS,
 *  SINCGAUSS, GAUSS, SOMB, SOMBCOS, BLOCKAVE), plus bad-pixel
 *  handling, variance propagation, the AST__NOBAD flag, and
 *  astQuadApprox.
 *
 *  Validation strategy:
 *  - Identity mapping (UnitMap): output == input for all schemes.
 *  - Integer shift + NEAREST: exact shifted copy.
 *  - Half-pixel shift + LINEAR on linear data: exact (bilinear interp
 *    reproduces linear functions exactly).
 *  - Constant input + any kernel: weighted average of constant == constant.
 *  - QuadApprox: recover known polynomial coefficients.
 *
 *  Inspired by testhuge.c (which tests astResample8F on huge arrays);
 *  this uses the same ShiftMap / linear-gradient approach at small scale.
 */
#include "ast.h"
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

static int nfail = 0;

static void fail( const char *msg ) {
   nfail++;
   printf( "FAIL: %s\n", msg );
}

static const char *interp_name( int interp ) {
   switch( interp ) {
      case AST__NEAREST:  return "NEAREST";
      case AST__LINEAR:   return "LINEAR";
      case AST__SINC:     return "SINC";
      case AST__SINCSINC: return "SINCSINC";
      case AST__SINCCOS:  return "SINCCOS";
      case AST__SINCGAUSS:return "SINCGAUSS";
      case AST__GAUSS:    return "GAUSS";
      case AST__SOMB:     return "SOMB";
      case AST__SOMBCOS:  return "SOMBCOS";
      case AST__BLOCKAVE: return "BLOCKAVE";
      default:            return "UNKNOWN";
   }
}

/* ------------------------------------------------------------------ */
/* Test 1: UnitMap identity, interpolation schemes, double            */
/*         Only interpolatory kernels give exact results for          */
/*         non-constant data; GAUSS/SOMB/BLOCKAVE smooth.             */
/* ------------------------------------------------------------------ */
static void test1( int *status ) {
   int interps[] = { AST__NEAREST, AST__LINEAR, AST__SINC, AST__SINCSINC,
                     AST__SINCCOS, AST__SINCGAUSS, AST__SOMBCOS };
   int ninterps = (int)( sizeof(interps) / sizeof(interps[0]) );
   double in[30], out[30];
   double params[2];
   int lbnd_in[1] = {1}, ubnd_in[1] = {30};
   int lbnd_out[1] = {1}, ubnd_out[1] = {30};
   int lbnd[1] = {1}, ubnd[1] = {30};
   AstMapping *map;
   int i, j;
   int margin = 3;

   if( *status != 0 ) return;

   for( i = 0; i < 30; i++ ) in[i] = (double)( i + 1 );

   map = (AstMapping *) astUnitMap( 1, " " );

   for( j = 0; j < ninterps; j++ ) {
      memset( out, 0, sizeof(out) );
      params[0] = 2.0;
      params[1] = 2.0;

      (void) astResampleD( map, 1, lbnd_in, ubnd_in, in, NULL,
                           interps[j], NULL, params, 0, 0.0, 100,
                           AST__BAD, 1, lbnd_out, ubnd_out,
                           lbnd, ubnd, out, NULL );
      if( !astOK ) {
         char buf[128];
         snprintf( buf, sizeof(buf),
                   "Test 1: AST error with %s",
                   interp_name( interps[j] ) );
         fail( buf );
         astClearStatus;
         continue;
      }
      for( i = margin; i < 30 - margin; i++ ) {
         double diff = fabs( out[i] - in[i] );
         if( diff > 1.0e-10 ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 1: UnitMap mismatch at pixel %d with %s: "
                      "got %g, expected %g",
                      i, interp_name( interps[j] ), out[i], in[i] );
            fail( buf );
            break;
         }
      }
   }

   /* GAUSS, SOMB, and BLOCKAVE smooth, so test them with constant data */
   {
      int smooth_interps[] = { AST__GAUSS, AST__SOMB, AST__BLOCKAVE };
      int nsmooth = 3;
      for( j = 0; j < nsmooth; j++ ) {
         for( i = 0; i < 30; i++ ) in[i] = 42.0;
         memset( out, 0, sizeof(out) );
         params[0] = 2.0;
         params[1] = 2.0;

         (void) astResampleD( map, 1, lbnd_in, ubnd_in, in, NULL,
                              smooth_interps[j], NULL, params, 0,
                              0.0, 100, AST__BAD, 1, lbnd_out,
                              ubnd_out, lbnd, ubnd, out, NULL );
         if( !astOK ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 1s: AST error with %s",
                      interp_name( smooth_interps[j] ) );
            fail( buf );
            astClearStatus;
            continue;
         }
         for( i = margin; i < 30 - margin; i++ ) {
            if( fabs( out[i] - 42.0 ) > 1.0e-10 ) {
               char buf[128];
               snprintf( buf, sizeof(buf),
                         "Test 1s: constant mismatch at pixel %d with %s: "
                         "got %g", i,
                         interp_name( smooth_interps[j] ), out[i] );
               fail( buf );
               break;
            }
         }
      }
   }

   if( !astOK ) { astClearStatus; *status = 1; }
}

/* ------------------------------------------------------------------ */
/* Test 2: ShiftMap(1,1) integer shift, NEAREST, 2D double            */
/*         The inverse transformation maps output(x,y)->input(x-1,y-1)*/
/* ------------------------------------------------------------------ */
static void test2( int *status ) {
   int nx = 20, ny = 20;
   double in[20*20], out[19*19];
   double shifts[2] = { 1.0, 1.0 };
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[2] = {1, 1}, ubnd_in[2] = {20, 20};
   int lbnd_out[2] = {2, 2}, ubnd_out[2] = {20, 20};
   int lbnd[2] = {2, 2}, ubnd[2] = {20, 20};
   AstMapping *map;
   int ix, iy;
   int out_nx = 19;

   if( *status != 0 ) return;

   for( iy = 0; iy < ny; iy++ ) {
      for( ix = 0; ix < nx; ix++ ) {
         in[iy * nx + ix] = (double)( (ix + 1) + (iy + 1) );
      }
   }

   memset( out, 0, sizeof(out) );

   /* astResample uses the inverse of the mapping to go from output to
      input coords. ShiftMap(1,1) forward: x'=x+1, inverse: x'=x-1.
      So output pixel (ox,oy) samples input at (ox-1, oy-1). */
   map = (AstMapping *) astShiftMap( 2, shifts, " " );

   (void) astResampleD( map, 2, lbnd_in, ubnd_in, in, NULL,
                        AST__NEAREST, NULL, params, 0, 0.0, 100,
                        AST__BAD, 2, lbnd_out, ubnd_out,
                        lbnd, ubnd, out, NULL );
   if( !astOK ) {
      fail( "Test 2: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }

   for( iy = 0; iy < out_nx; iy++ ) {
      for( ix = 0; ix < out_nx; ix++ ) {
         /* Output pixel at grid (ix+2, iy+2) samples input at
            (ix+1, iy+1). in(x,y) = x + y, so expected = (ix+1)+(iy+1). */
         double expected = (double)( (ix + 1) + (iy + 1) );
         if( out[iy * out_nx + ix] != expected ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 2: ShiftMap NEAREST mismatch at (%d,%d): "
                      "got %g, expected %g", ix + 2, iy + 2,
                      out[iy * out_nx + ix], expected );
            fail( buf );
            return;
         }
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 3: ShiftMap(0.5,0.5) half-pixel, LINEAR, 2D double            */
/*         Linear data => bilinear interp is exact.                    */
/*         Inverse maps output(x,y)->input(x-0.5, y-0.5).            */
/* ------------------------------------------------------------------ */
static void test3( int *status ) {
   int nx = 20, ny = 20;
   double in[20*20], out[18*18];
   double shifts[2] = { 0.5, 0.5 };
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[2] = {1, 1}, ubnd_in[2] = {20, 20};
   int lbnd_out[2] = {2, 2}, ubnd_out[2] = {19, 19};
   int lbnd[2] = {2, 2}, ubnd[2] = {19, 19};
   AstMapping *map;
   int ix, iy;
   int out_nx = 18;

   if( *status != 0 ) return;

   for( iy = 0; iy < ny; iy++ ) {
      for( ix = 0; ix < nx; ix++ ) {
         in[iy * nx + ix] = (double)( (ix + 1) + (iy + 1) );
      }
   }

   memset( out, 0, sizeof(out) );
   map = (AstMapping *) astShiftMap( 2, shifts, " " );

   (void) astResampleD( map, 2, lbnd_in, ubnd_in, in, NULL,
                        AST__LINEAR, NULL, params, 0, 0.0, 100,
                        AST__BAD, 2, lbnd_out, ubnd_out,
                        lbnd, ubnd, out, NULL );
   if( !astOK ) {
      fail( "Test 3: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }

   /* Inverse of ShiftMap(0.5,0.5) subtracts 0.5 from each coord.
      Output pixel at grid (ox,oy) samples input at (ox-0.5, oy-0.5).
      For linear data in(x,y) = x + y, bilinear interpolation at
      (ox-0.5, oy-0.5) = (ox-0.5) + (oy-0.5) = ox + oy - 1. */
   for( iy = 0; iy < out_nx; iy++ ) {
      for( ix = 0; ix < out_nx; ix++ ) {
         int ox = ix + 2;
         int oy = iy + 2;
         double expected = (double)( ox + oy - 1 );
         double got = out[iy * out_nx + ix];
         if( fabs( got - expected ) > 1.0e-10 ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 3: LINEAR mismatch at (%d,%d): "
                      "got %g, expected %g", ox, oy, got, expected );
            fail( buf );
            return;
         }
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 4: Constant input + kernel methods, 2D double                  */
/*         Weighted average of constant == constant.                   */
/* ------------------------------------------------------------------ */
static void test4( int *status ) {
   int interps[] = { AST__SINC, AST__SINCSINC, AST__SINCCOS,
                     AST__SINCGAUSS, AST__GAUSS, AST__SOMB,
                     AST__SOMBCOS, AST__BLOCKAVE };
   int ninterps = (int)( sizeof(interps) / sizeof(interps[0]) );
   int nx = 20, ny = 20;
   double in[20*20], out[16*16];
   double shifts[2] = { 0.5, 0.5 };
   double params[2];
   int lbnd_in[2] = {1, 1}, ubnd_in[2] = {20, 20};
   int lbnd_out[2] = {3, 3}, ubnd_out[2] = {18, 18};
   int lbnd[2] = {3, 3}, ubnd[2] = {18, 18};
   AstMapping *map;
   int ix, iy, j;
   int out_nx = 16;
   double tol = 1.0e-8;

   if( *status != 0 ) return;

   for( iy = 0; iy < ny; iy++ ) {
      for( ix = 0; ix < nx; ix++ ) {
         in[iy * nx + ix] = 42.0;
      }
   }

   map = (AstMapping *) astShiftMap( 2, shifts, " " );

   for( j = 0; j < ninterps; j++ ) {
      memset( out, 0, sizeof(out) );
      params[0] = 2.0;
      params[1] = 2.0;

      (void) astResampleD( map, 2, lbnd_in, ubnd_in, in, NULL,
                           interps[j], NULL, params, 0, 0.0, 100,
                           AST__BAD, 2, lbnd_out, ubnd_out,
                           lbnd, ubnd, out, NULL );
      if( !astOK ) {
         char buf[128];
         snprintf( buf, sizeof(buf),
                   "Test 4: AST error with %s",
                   interp_name( interps[j] ) );
         fail( buf );
         astClearStatus;
         continue;
      }
      for( iy = 0; iy < out_nx; iy++ ) {
         for( ix = 0; ix < out_nx; ix++ ) {
            if( fabs( out[iy * out_nx + ix] - 42.0 ) > tol ) {
               char buf[128];
               snprintf( buf, sizeof(buf),
                         "Test 4: constant mismatch with %s at pixel %d",
                         interp_name( interps[j] ),
                         iy * out_nx + ix );
               fail( buf );
               goto next4;
            }
         }
      }
      next4: ;
   }
   if( !astOK ) { astClearStatus; *status = 1; }
}

/* ------------------------------------------------------------------ */
/* Test 5: Integer type (astResampleI), UnitMap + NEAREST shift        */
/* ------------------------------------------------------------------ */
static void test5( int *status ) {
   int in_data[20], out_data[20];
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[1] = {1}, ubnd_in[1] = {20};
   int lbnd_out[1] = {1}, ubnd_out[1] = {20};
   int lbnd[1] = {1}, ubnd[1] = {20};
   AstMapping *map;
   int i;

   if( *status != 0 ) return;

   for( i = 0; i < 20; i++ ) in_data[i] = (i + 1) * 100;

   /* UnitMap identity */
   map = (AstMapping *) astUnitMap( 1, " " );
   memset( out_data, 0, sizeof(out_data) );

   (void) astResampleI( map, 1, lbnd_in, ubnd_in, in_data, NULL,
                        AST__NEAREST, NULL, params, 0, 0.0, 100,
                        INT_MIN, 1, lbnd_out, ubnd_out,
                        lbnd, ubnd, out_data, NULL );
   if( !astOK ) {
      fail( "Test 5a: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }
   for( i = 0; i < 20; i++ ) {
      if( out_data[i] != in_data[i] ) {
         fail( "Test 5a: UnitMap int NEAREST mismatch" );
         break;
      }
   }

   /* Also test LINEAR with UnitMap on ints */
   memset( out_data, 0, sizeof(out_data) );
   (void) astResampleI( map, 1, lbnd_in, ubnd_in, in_data, NULL,
                        AST__LINEAR, NULL, params, 0, 0.0, 100,
                        INT_MIN, 1, lbnd_out, ubnd_out,
                        lbnd, ubnd, out_data, NULL );
   if( !astOK ) {
      fail( "Test 5b: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }
   for( i = 0; i < 20; i++ ) {
      if( out_data[i] != in_data[i] ) {
         fail( "Test 5b: UnitMap int LINEAR mismatch" );
         break;
      }
   }

   /* NEAREST with integer shift: inverse subtracts 1, so output
      pixel p samples input at p-1. Start output at grid 2. */
   {
      double shift1[1] = { 1.0 };
      int out2[19];
      int lb2[1] = {2}, ub2[1] = {20};
      AstMapping *smap = (AstMapping *) astShiftMap( 1, shift1, " " );
      memset( out2, 0, sizeof(out2) );

      (void) astResampleI( smap, 1, lbnd_in, ubnd_in, in_data, NULL,
                           AST__NEAREST, NULL, params, 0, 0.0, 100,
                           INT_MIN, 1, lb2, ub2,
                           lb2, ub2, out2, NULL );
      if( !astOK ) {
         fail( "Test 5c: AST error" );
         astClearStatus;
         *status = 1;
         return;
      }
      for( i = 0; i < 19; i++ ) {
         /* Output pixel at grid i+2 samples input at i+1 (1-based).
            in_data[i+1-1] = in_data[i] = (i+1)*100. */
         int expected = (i + 1) * 100;
         if( out2[i] != expected ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 5c: int shift mismatch at %d: got %d, "
                      "expected %d", i, out2[i], expected );
            fail( buf );
            break;
         }
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 6: Float type (astResampleF), UnitMap identity                  */
/* ------------------------------------------------------------------ */
static void test6( int *status ) {
   float in_data[20], out_data[20];
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[1] = {1}, ubnd_in[1] = {20};
   int lbnd_out[1] = {1}, ubnd_out[1] = {20};
   int lbnd[1] = {1}, ubnd[1] = {20};
   AstMapping *map;
   int interps[] = { AST__NEAREST, AST__LINEAR };
   int ninterps = 2;
   int i, j;

   if( *status != 0 ) return;

   for( i = 0; i < 20; i++ ) in_data[i] = (float)( i + 1 );

   map = (AstMapping *) astUnitMap( 1, " " );

   for( j = 0; j < ninterps; j++ ) {
      memset( out_data, 0, sizeof(out_data) );

      (void) astResampleF( map, 1, lbnd_in, ubnd_in, in_data, NULL,
                           interps[j], NULL, params, 0, 0.0, 100,
                           -FLT_MAX, 1, lbnd_out, ubnd_out,
                           lbnd, ubnd, out_data, NULL );
      if( !astOK ) {
         char buf[128];
         snprintf( buf, sizeof(buf),
                   "Test 6: AST error with %s",
                   interp_name( interps[j] ) );
         fail( buf );
         astClearStatus;
         continue;
      }
      for( i = 0; i < 20; i++ ) {
         if( out_data[i] != in_data[i] ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 6: float UnitMap mismatch with %s at pixel %d",
                      interp_name( interps[j] ), i );
            fail( buf );
            break;
         }
      }
   }
   if( !astOK ) { astClearStatus; *status = 1; }
}

/* ------------------------------------------------------------------ */
/* Test 7: Bad pixel handling                                          */
/* ------------------------------------------------------------------ */
static void test7( int *status ) {
   double in[20], out[20];
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[1] = {1}, ubnd_in[1] = {20};
   int lbnd_out[1] = {1}, ubnd_out[1] = {20};
   int lbnd[1] = {1}, ubnd[1] = {20};
   AstMapping *map;
   int i, nbad;

   if( *status != 0 ) return;

   for( i = 0; i < 20; i++ ) in[i] = (double)( i + 1 );
   in[9] = AST__BAD;

   map = (AstMapping *) astUnitMap( 1, " " );

   /* NEAREST with USEBAD: bad pixel should propagate exactly */
   memset( out, 0, sizeof(out) );
   nbad = astResampleD( map, 1, lbnd_in, ubnd_in, in, NULL,
                        AST__NEAREST, NULL, params, AST__USEBAD,
                        0.0, 100, AST__BAD, 1, lbnd_out, ubnd_out,
                        lbnd, ubnd, out, NULL );
   if( !astOK ) {
      fail( "Test 7a: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }
   if( nbad != 1 ) {
      char buf[64];
      snprintf( buf, sizeof(buf), "Test 7a: expected nbad=1, got %d", nbad );
      fail( buf );
   }
   if( out[9] != AST__BAD ) {
      fail( "Test 7a: bad pixel not propagated" );
   }
   for( i = 0; i < 20; i++ ) {
      if( i == 9 ) continue;
      if( out[i] != in[i] ) {
         fail( "Test 7a: good pixel corrupted" );
         break;
      }
   }

   /* LINEAR with USEBAD: bad pixel at index 9 (grid position 10)
      affects interpolation at its own position. */
   {
      double shifts1[1] = { 0.5 };
      int lb2[1] = {2}, ub2[1] = {19};
      double out2[18];
      AstMapping *smap = (AstMapping *) astShiftMap( 1, shifts1, " " );

      for( i = 0; i < 20; i++ ) in[i] = (double)( i + 1 );
      in[9] = AST__BAD;

      memset( out2, 0, sizeof(out2) );
      nbad = astResampleD( smap, 1, lbnd_in, ubnd_in, in, NULL,
                           AST__LINEAR, NULL, params, AST__USEBAD,
                           0.0, 100, AST__BAD, 1, lb2, ub2,
                           lb2, ub2, out2, NULL );
      if( !astOK ) {
         fail( "Test 7b: AST error" );
         astClearStatus;
         *status = 1;
         return;
      }
      if( nbad < 1 ) {
         fail( "Test 7b: expected nbad >= 1" );
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 8: Variance propagation                                        */
/* ------------------------------------------------------------------ */
static void test8( int *status ) {
   double in[20], in_var[20], out[20], out_var[20];
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[1] = {1}, ubnd_in[1] = {20};
   int lbnd_out[1] = {1}, ubnd_out[1] = {20};
   int lbnd[1] = {1}, ubnd[1] = {20};
   AstMapping *map;
   int i;

   if( *status != 0 ) return;

   for( i = 0; i < 20; i++ ) {
      in[i] = (double)( i + 1 );
      in_var[i] = (double)( i + 1 ) * 0.1;
   }

   map = (AstMapping *) astUnitMap( 1, " " );
   memset( out, 0, sizeof(out) );
   memset( out_var, 0, sizeof(out_var) );

   (void) astResampleD( map, 1, lbnd_in, ubnd_in, in, in_var,
                        AST__NEAREST, NULL, params,
                        AST__USEVAR, 0.0, 100,
                        AST__BAD, 1, lbnd_out, ubnd_out,
                        lbnd, ubnd, out, out_var );
   if( !astOK ) {
      fail( "Test 8: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }

   for( i = 0; i < 20; i++ ) {
      if( out[i] != in[i] ) {
         fail( "Test 8: data mismatch" );
         break;
      }
      if( out_var[i] != in_var[i] ) {
         char buf[128];
         snprintf( buf, sizeof(buf),
                   "Test 8: variance mismatch at %d: got %g, expected %g",
                   i, out_var[i], in_var[i] );
         fail( buf );
         break;
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 9: AST__NOBAD flag                                             */
/* ------------------------------------------------------------------ */
static void test9( int *status ) {
   double in[20], out[20];
   double params[2] = { 0.0, 0.0 };
   int lbnd_in[1] = {1}, ubnd_in[1] = {20};
   int lbnd_out[1] = {1}, ubnd_out[1] = {20};
   int lbnd[1] = {1}, ubnd[1] = {20};
   AstMapping *map;
   int i, nbad;
   double sentinel = -999.0;

   if( *status != 0 ) return;

   for( i = 0; i < 20; i++ ) in[i] = (double)( i + 1 );
   in[9] = AST__BAD;

   for( i = 0; i < 20; i++ ) out[i] = sentinel;

   map = (AstMapping *) astUnitMap( 1, " " );

   nbad = astResampleD( map, 1, lbnd_in, ubnd_in, in, NULL,
                        AST__NEAREST, NULL, params,
                        AST__USEBAD | AST__NOBAD,
                        0.0, 100, AST__BAD, 1, lbnd_out, ubnd_out,
                        lbnd, ubnd, out, NULL );
   if( !astOK ) {
      fail( "Test 9: AST error" );
      astClearStatus;
      *status = 1;
      return;
   }

   if( nbad != 1 ) {
      char buf[64];
      snprintf( buf, sizeof(buf), "Test 9: expected nbad=1, got %d", nbad );
      fail( buf );
   }

   if( out[9] != sentinel ) {
      char buf[128];
      snprintf( buf, sizeof(buf),
                "Test 9: bad pixel not preserved: got %g, expected %g",
                out[9], sentinel );
      fail( buf );
   }

   for( i = 0; i < 20; i++ ) {
      if( i == 9 ) continue;
      if( out[i] != in[i] ) {
         fail( "Test 9: good pixel corrupted" );
         break;
      }
   }
}

/* ------------------------------------------------------------------ */
/* Test 10: astQuadApprox                                              */
/* ------------------------------------------------------------------ */
static void test10( int *status ) {
   /* out = 2 + 3*x + 4*y + 5*x*y + 6*x*x + 7*y*y
      PolyMap coefficients: ncoeff_f=6 for 2-in, 1-out.
      Each row: coeff, out_index, power_x, power_y */
   double coeffs[] = {
      2.0, 1, 0, 0,
      3.0, 1, 1, 0,
      4.0, 1, 0, 1,
      5.0, 1, 1, 1,
      6.0, 1, 2, 0,
      7.0, 1, 0, 2
   };
   AstPolyMap *pm;
   double lbnd[2] = { -1.0, -1.0 };
   double ubnd[2] = {  1.0,  1.0 };
   double fit[6], rms;
   int ok;

   if( *status != 0 ) return;

   pm = astPolyMap( 2, 1, 6, coeffs, 0, NULL, " " );
   if( !astOK ) {
      fail( "Test 10: failed to create PolyMap" );
      astClearStatus;
      *status = 1;
      return;
   }

   ok = astQuadApprox( (AstMapping *)pm, lbnd, ubnd, 50, 50, fit, &rms );
   if( !astOK ) {
      fail( "Test 10: AST error from astQuadApprox" );
      astClearStatus;
      *status = 1;
      return;
   }

   if( !ok ) {
      fail( "Test 10: astQuadApprox returned 0 (failed)" );
      return;
   }

   /* fit should contain: a0, a1*x, a2*y, a3*x*y, a4*x*x, a5*y*y
      = 2, 3, 4, 5, 6, 7 */
   {
      double expected[] = { 2.0, 3.0, 4.0, 5.0, 6.0, 7.0 };
      double tol = 1.0e-6;
      int i;
      for( i = 0; i < 6; i++ ) {
         if( fabs( fit[i] - expected[i] ) > tol ) {
            char buf[128];
            snprintf( buf, sizeof(buf),
                      "Test 10: coeff[%d] = %g, expected %g",
                      i, fit[i], expected[i] );
            fail( buf );
         }
      }
   }

   if( rms > 1.0e-6 ) {
      char buf[128];
      snprintf( buf, sizeof(buf),
                "Test 10: rms = %g, expected near zero", rms );
      fail( buf );
   }
}

/* ------------------------------------------------------------------ */
/* Main                                                                */
/* ------------------------------------------------------------------ */
int main( void ) {
   int status_value = 0;
   int *status = &status_value;

   astWatch( status );
   astBegin;

   test1( status );
   test2( status );
   test3( status );
   test4( status );
   test5( status );
   test6( status );
   test7( status );
   test8( status );
   test9( status );
   test10( status );

   astEnd;

   if( nfail > 0 ) {
      printf( "testresample: %d failure(s)\n", nfail );
      return 1;
   }
   if( *status != 0 ) {
      printf( "testresample: error status %d\n", *status );
      return 1;
   }
   return 0;
}
