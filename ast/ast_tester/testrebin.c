/*
 * Test the Rebin functions (astRebinD, astRebinF, astRebinI).
 * Converted from the Fortran test testrebin.f.
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
 * - Fortran NUM_RTOD(VAL__MAXR) -> (double)FLT_MAX,
 *   NUM_ITOD(VAL__MAXI) -> (double)INT_MAX,
 *   NUM_DTOD(VAL__MAXD) -> (double)DBL_MAX.
 *
 * - The three Fortran type variants (TEST*D, TEST*I, TEST*R) are collapsed
 *   into a single parameterized C function per test group, using a DataType
 *   enum and void pointers. The TESTER framework handles type dispatching.
 *
 * - Fortran 1-based array indexing is converted to 0-based C indexing.
 *
 * - PSX_CALLOC/PSX_FREE -> astCalloc/astFree.
 *
 * - ast_flushmemory(1) is omitted.
 */

#include "ast.h"
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Data type enum. */
typedef enum {
   TYPE_DOUBLE = 0,
   TYPE_FLOAT  = 1,
   TYPE_INT    = 2
} DataType;

/* Test function signature for the 3-phase callback.
 *
 * phase 0: set up bounds, mapping, params, tol (may depend on spread)
 * phase 1: fill input data and variance arrays
 * phase 2: validate output data and variance arrays
 *
 * The void* arrays point to data of the appropriate type.
 */
typedef void (*TestFunc)( int phase, DataType dtype,
                          int *lbnd_in, int *ubnd_in,
                          void *in, void *in_var,
                          int *lbnd_out, int *ubnd_out,
                          void *out, void *out_var,
                          int *lbnd, int *ubnd,
                          AstMapping **m, double *params,
                          double *tol, int spread,
                          int *status );

/* Forward declarations for test functions. */
static void test1( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test2( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test3( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test4( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test5( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test6( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test7( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test8( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );
static void test9( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status );

/* ---------------------------------------------------------------
 * Equality helpers
 * --------------------------------------------------------------- */

/* Double equality: relative tolerance ~1e-9 */
static int equald( double a, double b ) {
   if( a != 0.0 && b != 0.0 ) {
      return fabs( a - b ) <= 1.0e9 * fabs( a + b ) * DBL_EPSILON;
   } else {
      return fabs( a + b ) <= 1.0e-11;
   }
}

/* Float equality: relative tolerance ~50*FLT_EPSILON */
static int equalf( float a, float b ) {
   if( a != 0.0f && b != 0.0f ) {
      return fabsf( a - b ) <= 50.0f * fabsf( a + b ) * FLT_EPSILON;
   } else {
      return fabsf( a + b ) <= 1.0e-11f;
   }
}

/* Get the "kfac" scaling factor appropriate for the data type. */
static double get_kfac( DataType dtype, double limit ) {
   double maxval;
   if( dtype == TYPE_DOUBLE ) {
      maxval = (double)DBL_MAX;
   } else if( dtype == TYPE_FLOAT ) {
      maxval = (double)FLT_MAX;
   } else {
      maxval = (double)INT_MAX;
   }
   double v = maxval / 20.0;
   return ( v < limit ) ? v : limit;
}

/* Generic equality check for output values. For double/float uses
 * approximate equality; for int uses exact. */
static int equal_gen( DataType dtype, const void *pa, const void *pb ) {
   if( dtype == TYPE_DOUBLE ) {
      return equald( *(const double *)pa, *(const double *)pb );
   } else if( dtype == TYPE_FLOAT ) {
      return equalf( *(const float *)pa, *(const float *)pb );
   } else {
      return *(const int *)pa == *(const int *)pb;
   }
}

/* Check if a value is BAD for the given type. */
static int is_bad( DataType dtype, const void *pv ) {
   if( dtype == TYPE_DOUBLE ) {
      return *(const double *)pv == AST__BAD;
   } else if( dtype == TYPE_FLOAT ) {
      return *(const float *)pv == (float)AST__BAD;
   } else {
      return *(const int *)pv == INT_MIN;
   }
}

/* Get a double value from a typed array element. */
static double to_double( DataType dtype, const void *arr, int idx ) {
   if( dtype == TYPE_DOUBLE ) {
      return ((const double *)arr)[idx];
   } else if( dtype == TYPE_FLOAT ) {
      return (double)((const float *)arr)[idx];
   } else {
      return (double)((const int *)arr)[idx];
   }
}

/* Set a typed array element from a double value. */
static void set_val( DataType dtype, void *arr, int idx, double val ) {
   if( dtype == TYPE_DOUBLE ) {
      ((double *)arr)[idx] = val;
   } else if( dtype == TYPE_FLOAT ) {
      ((float *)arr)[idx] = (float)val;
   } else {
      ((int *)arr)[idx] = (int)val;
   }
}

/* Element size for a given data type. */
static size_t type_size( DataType dtype ) {
   if( dtype == TYPE_DOUBLE ) return sizeof(double);
   if( dtype == TYPE_FLOAT ) return sizeof(float);
   return sizeof(int);
}

/* Name strings for data types. */
static const char *type_name( DataType dtype ) {
   if( dtype == TYPE_DOUBLE ) return "DOUBLE";
   if( dtype == TYPE_FLOAT ) return "FLOAT";
   return "INT";
}

/* Name string for a spread function. */
static const char *spread_name( int spread ) {
   if( spread == AST__SINC ) return "SINC";
   if( spread == AST__NEAREST ) return "NEAREST";
   if( spread == AST__LINEAR ) return "LINEAR";
   if( spread == AST__SINCSINC ) return "SINCSINC";
   if( spread == AST__SINCCOS ) return "SINCCOS";
   if( spread == AST__SINCGAUSS ) return "SINCGAUSS";
   return "UNKNOWN";
}

/* ---------------------------------------------------------------
 * The TESTER framework
 *
 * For each test function, loop over 3 data types x 6 spread functions.
 * For each combination:
 *   phase 0 - get bounds, mapping, params, tol
 *   allocate arrays
 *   phase 1 - fill input arrays
 *   call astRebin[D/F/I]
 *   phase 2 - validate output arrays
 * --------------------------------------------------------------- */

static void tester( TestFunc testfun, int *status ) {
   static const int spreads[6] = {
      AST__SINC, AST__NEAREST, AST__LINEAR,
      AST__SINCSINC, AST__SINCCOS, AST__SINCGAUSS
   };
   static const DataType types[3] = { TYPE_DOUBLE, TYPE_FLOAT, TYPE_INT };

   int lbnd_in[10], ubnd_in[10], lbnd_out[10], ubnd_out[10];
   int lbnd[10], ubnd[10];
   AstMapping *m = NULL;
   double params[20];
   double tol;
   int nin, nout, nel_in, nel_out;
   int i, j, d;

   if( *status != 0 ) return;

   /* Phase 0 with dummy type/spread to get bounds and mapping. */
   testfun( 0, TYPE_DOUBLE, lbnd_in, ubnd_in, NULL, NULL,
            lbnd_out, ubnd_out, NULL, NULL, lbnd, ubnd,
            &m, params, &tol, spreads[0], status );
   if( *status != 0 ) return;

   nin = astGetI( m, "Nin" );
   nout = astGetI( m, "Nout" );

   nel_in = 1;
   for( d = 0; d < nin; d++ ) {
      nel_in *= ( ubnd_in[d] - lbnd_in[d] + 1 );
   }
   nel_out = 1;
   for( d = 0; d < nout; d++ ) {
      nel_out *= ( ubnd_out[d] - lbnd_out[d] + 1 );
   }

   /* Loop over data types. */
   for( i = 0; i < 3; i++ ) {
      DataType dtype = types[i];
      size_t sz = type_size( dtype );

      void *pin      = astCalloc( nel_in, sz );
      void *pin_var  = astCalloc( nel_in, sz );
      void *pout     = astCalloc( nel_out, sz );
      void *pout_var = astCalloc( nel_out, sz );

      if( !astOK ) { *status = 1; goto done; }

      /* Loop over spread functions. */
      for( j = 0; j < 6; j++ ) {
         int spread = spreads[j];

         /* Phase 0: setup (may change mapping depending on spread). */
         testfun( 0, dtype, lbnd_in, ubnd_in, pin, pin_var,
                  lbnd_out, ubnd_out, pout, pout_var,
                  lbnd, ubnd, &m, params, &tol, spread, status );
         if( *status != 0 ) goto done;

         /* Phase 1: fill input arrays. */
         testfun( 1, dtype, lbnd_in, ubnd_in, pin, pin_var,
                  lbnd_out, ubnd_out, pout, pout_var,
                  lbnd, ubnd, &m, params, &tol, spread, status );
         if( *status != 0 ) goto done;

         /* Zero the output arrays before rebin. */
         memset( pout, 0, (size_t)nel_out * sz );
         memset( pout_var, 0, (size_t)nel_out * sz );

         /* Call the appropriate astRebin variant. */
         if( dtype == TYPE_DOUBLE ) {
            astRebinD( m, 0.0, nin, lbnd_in, ubnd_in,
                       (const double *)pin, (const double *)pin_var,
                       spread, params,
                       AST__USEBAD + AST__USEVAR, tol, 100, AST__BAD,
                       nout, lbnd_out, ubnd_out, lbnd, ubnd,
                       (double *)pout, (double *)pout_var );
         } else if( dtype == TYPE_FLOAT ) {
            astRebinF( m, 0.0, nin, lbnd_in, ubnd_in,
                       (const float *)pin, (const float *)pin_var,
                       spread, params,
                       AST__USEBAD + AST__USEVAR, tol, 100,
                       (float)AST__BAD,
                       nout, lbnd_out, ubnd_out, lbnd, ubnd,
                       (float *)pout, (float *)pout_var );
         } else {
            astRebinI( m, 0.0, nin, lbnd_in, ubnd_in,
                       (const int *)pin, (const int *)pin_var,
                       spread, params,
                       AST__USEBAD + AST__USEVAR, tol, 100, INT_MIN,
                       nout, lbnd_out, ubnd_out, lbnd, ubnd,
                       (int *)pout, (int *)pout_var );
         }

         if( !astOK ) {
            *status = 1;
            printf( "astRebin failed for spread %s, type %s\n",
                    spread_name( spread ), type_name( dtype ) );
            goto done;
         }

         /* Phase 2: validate results. */
         testfun( 2, dtype, lbnd_in, ubnd_in, pin, pin_var,
                  lbnd_out, ubnd_out, pout, pout_var,
                  lbnd, ubnd, &m, params, &tol, spread, status );

         if( *status != 0 ) {
            printf( "Failed: spread %s, type %s\n",
                    spread_name( spread ), type_name( dtype ) );
            goto done;
         }
      }

      astFree( pin );
      astFree( pin_var );
      astFree( pout );
      astFree( pout_var );
      pin = pin_var = pout = pout_var = NULL;
   }

done:
   return;
}

/* ---------------------------------------------------------------
 * TEST 7: 1D ShiftMap, single value
 * --------------------------------------------------------------- */
static void test7( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac, sum, kt;
   int good, nz;

   (void)out_var;  /* variance output not checked in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      double shift = 1.5;
      lbnd_in[0] = 10;  ubnd_in[0] = 19;
      lbnd_out[0] = 12; ubnd_out[0] = 20;
      lbnd[0] = 11;     ubnd[0] = 17;
      *m = (AstMapping *)astShiftMap( 1, &shift, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.1;

   } else if( phase == 1 ) {
      int i;
      for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
         set_val( dtype, in, i - lbnd_in[0], 0.0 );
         set_val( dtype, in_var, i - lbnd_in[0], kfac );
      }
      set_val( dtype, in, 14 - lbnd_in[0], kfac );

   } else {
      /* Validate: sum of non-bad output should equal kfac. */
      int i;
      sum = 0.0;
      for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
         int idx = i - lbnd_out[0];
         if( !is_bad( dtype, (const char *)out + idx * type_size(dtype) ) ) {
            sum += to_double( dtype, out, idx );
         }
      }

      kt = kfac;

      if( dtype == TYPE_DOUBLE || dtype == TYPE_FLOAT ) {
         good = equald( sum, kt );
      } else {
         good = ( fabs( sum - kt ) < 3.0 );
      }

      if( !good ) {
         *status = 1;
         printf( "TEST7 Data sum is %g should be %g (type %s)\n",
                 sum, kt, type_name( dtype ) );
         return;
      }

      if( spread == AST__NEAREST ) {
         nz = 0;
         for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
            int idx = i - lbnd_out[0];
            double v = to_double( dtype, out, idx );
            if( v != 0.0 && !is_bad( dtype, (const char *)out + idx * type_size(dtype) ) ) {
               if( nz == 0 ) {
                  nz++;
                  if( v != kt ) {
                     *status = 1;
                     printf( "TEST7 %d: %g %g (type %s)\n",
                             i, v, kt, type_name( dtype ) );
                     return;
                  }
               } else {
                  *status = 1;
                  printf( "TEST7 %d: %g (type %s)\n",
                          i, v, type_name( dtype ) );
                  return;
               }
            }
         }
      } else {
         /* Check symmetry around the shifted peak position. */
         for( i = 0; i <= 3; i++ ) {
            int idx1 = 15 - i - lbnd_out[0];
            int idx2 = 16 + i - lbnd_out[0];
            double v1 = to_double( dtype, out, idx1 );
            double v2 = to_double( dtype, out, idx2 );
            int eq;
            if( dtype == TYPE_DOUBLE ) {
               eq = equald( v1, v2 );
            } else if( dtype == TYPE_FLOAT ) {
               eq = equalf( (float)v1, (float)v2 );
            } else {
               eq = ( (int)v1 == (int)v2 );
            }
            if( !eq ) {
               *status = 1;
               printf( "TEST7 %d (%g) != %d (%g) (type %s)\n",
                       15 - i, v1, 16 + i, v2, type_name( dtype ) );
               return;
            }
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 8: 2D ShiftMap, array
 * --------------------------------------------------------------- */
static void test8( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac, sum, kt;
   int good;

   (void)out_var;  /* variance output not checked in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 10000.0 );

   if( phase == 0 ) {
      double shifts[2] = { 0.5, -0.5 };
      lbnd_in[0] = -2;  ubnd_in[0] = 3;
      lbnd_out[0] = -2; ubnd_out[0] = 3;
      lbnd[0] = -2;     ubnd[0] = 3;
      lbnd_in[1] = 0;   ubnd_in[1] = 5;
      lbnd_out[1] = 0;  ubnd_out[1] = 5;
      lbnd[1] = 0;      ubnd[1] = 5;
      *m = (AstMapping *)astShiftMap( 2, shifts, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, k = 0;
      for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
         for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
            set_val( dtype, in, k, 0.0 );
            set_val( dtype, in_var, k, kfac );
            k++;
         }
      }
      /* Fortran IN(21) -> C index 20. */
      set_val( dtype, in, 20, kfac );

   } else {
      int i, j, k = 0;
      sum = 0.0;
      for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
         for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
            if( !is_bad( dtype, (const char *)out + k * type_size(dtype) ) ) {
               sum += to_double( dtype, out, k );
            }
            k++;
         }
      }

      kt = kfac;

      if( dtype == TYPE_DOUBLE || dtype == TYPE_FLOAT ) {
         good = equald( sum, kt );
      } else {
         good = ( fabs( sum - kt ) < 5.0 );
      }

      if( !good ) {
         *status = 1;
         printf( "TEST8 Data sum is %g should be %g (type %s)\n",
                 sum, kt, type_name( dtype ) );
         return;
      }

      if( spread == AST__NEAREST ) {
         int nz = 0;
         k = 0;
         for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
            for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
               double v = to_double( dtype, out, k );
               if( v != 0.0 && !is_bad( dtype, (const char *)out + k * type_size(dtype) ) ) {
                  if( nz == 0 ) {
                     nz++;
                     if( v != kt ) {
                        *status = 1;
                        printf( "TEST8 %d: %g %g (type %s)\n",
                                k + 1, v, kt, type_name( dtype ) );
                        return;
                     }
                  } else {
                     *status = 1;
                     printf( "TEST8 %d: %g (type %s)\n",
                             k + 1, v, type_name( dtype ) );
                     return;
                  }
               }
               k++;
            }
         }
      } else {
         /* Check point symmetry around center. The Fortran uses:
          *   II = 1 - I, JJ = 5 - J
          *   KK = 6*JJ + (II + 3)   (1-based)
          * In C (0-based): kk = 6*jj + (ii - lbnd_out[0])
          * where ii = 1 - i, jj = 5 - j. */
         k = 0;
         for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
            for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
               int ii = 1 - i;
               int jj = 5 - j;
               if( ii >= lbnd_out[0] && ii <= ubnd_out[0] &&
                   jj >= lbnd_out[1] && jj <= ubnd_out[1] ) {
                  /* Fortran: KK = 6*JJ + (II+3) is 1-based.
                   * C 0-based: kk = (jj - lbnd_out[1]) * 6 + (ii - lbnd_out[0]) */
                  int kk = (jj - lbnd_out[1]) * 6 + (ii - lbnd_out[0]);
                  double v1 = to_double( dtype, out, kk );
                  double v2 = to_double( dtype, out, k );
                  if( !equal_gen( dtype, (const char *)out + kk * type_size(dtype),
                                  (const char *)out + k * type_size(dtype) ) ) {
                     *status = 1;
                     printf( "TEST8 %d (%g) != %d (%g) (type %s)\n",
                             kk + 1, v1, k + 1, v2, type_name( dtype ) );
                     return;
                  }
               }
               k++;
            }
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 9: 3D ShiftMap
 * --------------------------------------------------------------- */
static void test9( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac, sum, kt;
   int good;

   (void)out_var;  /* variance output not checked in this test */
   (void)in_var;   /* variance input not checked in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 10000.0 );

   if( phase == 0 ) {
      double shifts[3];
      int d;
      for( d = 0; d < 3; d++ ) {
         lbnd_in[d] = 0;  ubnd_in[d] = 6;
         lbnd_out[d] = 0; ubnd_out[d] = 6;
         lbnd[d] = 0;     ubnd[d] = 6;
      }
      if( spread == AST__NEAREST ) {
         shifts[0] = 1.7;  shifts[1] = 2.1;  shifts[2] = -1.2;
      } else {
         shifts[0] = 0.5;  shifts[1] = 0.0;  shifts[2] = -0.5;
      }
      *m = (AstMapping *)astShiftMap( 3, shifts, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, l, k = 0;
      for( l = lbnd_in[2]; l <= ubnd_in[2]; l++ ) {
         for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
            for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
               set_val( dtype, in, k, 0.0 );
               set_val( dtype, in_var, k, (double)(k + 1) );
               k++;
            }
         }
      }
      /* Fortran IN(172) -> C index 171. */
      set_val( dtype, in, 171, kfac );

   } else {
      int i, j, l, k = 0;
      sum = 0.0;
      for( l = lbnd_out[2]; l <= ubnd_out[2]; l++ ) {
         for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
            for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
               if( !is_bad( dtype, (const char *)out + k * type_size(dtype) ) ) {
                  sum += to_double( dtype, out, k );
               }
               k++;
            }
         }
      }

      kt = kfac;

      if( dtype == TYPE_DOUBLE || dtype == TYPE_FLOAT ) {
         good = equald( sum, kt );
      } else {
         good = ( fabs( sum - kt ) < 5.0 );
      }

      if( !good ) {
         *status = 1;
         printf( "TEST9 Data sum is %g should be %g (type %s)\n",
                 sum, kt, type_name( dtype ) );
         return;
      }

      if( spread == AST__NEAREST ) {
         /* Fortran checks element 139 (1-based) -> C index 138. */
         k = 0;
         for( l = lbnd_out[2]; l <= ubnd_out[2]; l++ ) {
            for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
               for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
                  double v = to_double( dtype, out, k );
                  if( k == 138 ) {
                     /* Element 139 (1-based) should equal kt. */
                     if( !equald( v, kt ) ) {
                        *status = 1;
                        printf( "TEST9 El. 139 is %g should be %g (type %s)\n",
                                v, kt, type_name( dtype ) );
                        return;
                     }
                  } else {
                     if( !equald( v, 0.0 ) ) {
                        *status = 1;
                        printf( "TEST9 El. %d is %g should be zero (type %s)\n",
                                k + 1, v, type_name( dtype ) );
                        return;
                     }
                  }
                  k++;
               }
            }
         }
      } else {
         /* Compute centroid and check it matches expected values. */
         double g[3] = { 0.0, 0.0, 0.0 };
         double w = 0.0;
         k = 0;
         for( l = lbnd_out[2]; l <= ubnd_out[2]; l++ ) {
            for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
               for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
                  double v = to_double( dtype, out, k );
                  g[0] += (double)i * v;
                  g[1] += (double)j * v;
                  g[2] += (double)l * v;
                  w += v;
                  k++;
               }
            }
         }

         if( !equald( g[0]/w, 3.5 ) ) {
            *status = 1;
            printf( "TEST9 Mean X is %g should be 3.5 (type %s)\n",
                    g[0]/w, type_name( dtype ) );
            return;
         }
         if( !equald( g[1]/w, 3.0 ) ) {
            *status = 1;
            printf( "TEST9 Mean Y is %g should be 3.0 (type %s)\n",
                    g[1]/w, type_name( dtype ) );
            return;
         }
         if( !equald( g[2]/w, 2.5 ) ) {
            *status = 1;
            printf( "TEST9 Mean Z is %g should be 2.5 (type %s)\n",
                    g[2]/w, type_name( dtype ) );
            return;
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 1: 1D UnitMap
 * --------------------------------------------------------------- */
static void test1( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      lbnd_in[0] = 10;  ubnd_in[0] = 19;
      lbnd_out[0] = 12; ubnd_out[0] = 20;
      lbnd[0] = 11;     ubnd[0] = 17;
      *m = (AstMapping *)astUnitMap( 1, " " );
      /* Note: Fortran checks for AST__GAUSS which is never in the
       * spreads array used by TESTER, so this branch is never taken.
       * We preserve it anyway for fidelity. */
      if( spread == AST__GAUSS ) {
         params[0] = 2.0;  params[1] = 2.0;
      } else {
         params[0] = 2.0;  params[1] = 0.5;
      }
      *tol = 0.1;

   } else if( phase == 1 ) {
      int i;
      for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
         set_val( dtype, in, i - lbnd_in[0], (double)i * kfac );
         set_val( dtype, in_var, i - lbnd_in[0], (double)i );
      }

   } else {
      int i;
      /* Check matching output == input in the overlap region. */
      for( i = lbnd_out[0]; i <= ubnd[0]; i++ ) {
         int ignore = ( spread == AST__GAUSS &&
                        ( i <= lbnd_out[0] + 1 || i >= ubnd[0] - 1 ) );
         int oidx = i - lbnd_out[0];
         int iidx = i - lbnd_in[0];

         if( ignore ) {
            /* skip edge pixels for gauss */
         } else if( !equal_gen( dtype, (const char *)out + oidx * type_size(dtype),
                                (const char *)in + iidx * type_size(dtype) ) ) {
            *status = 1;
            printf( "TEST1 %d: data %g != %g (type %s)\n",
                    i, to_double( dtype, out, oidx ),
                    to_double( dtype, in, iidx ), type_name( dtype ) );
            return;
         } else if( !equal_gen( dtype, (const char *)out_var + oidx * type_size(dtype),
                                (const char *)in_var + iidx * type_size(dtype) ) ) {
            *status = 1;
            printf( "TEST1 %d: variance %g != %g (type %s)\n",
                    i, to_double( dtype, out_var, oidx ),
                    to_double( dtype, in_var, iidx ), type_name( dtype ) );
            return;
         }
      }
      /* Check beyond ubnd should be zero. */
      for( i = ubnd[0] + 1; i <= ubnd_out[0]; i++ ) {
         int oidx = i - lbnd_out[0];
         double v = to_double( dtype, out, oidx );
         double vv = to_double( dtype, out_var, oidx );
         if( !equald( v, 0.0 ) ) {
            *status = 1;
            printf( "TEST1 %d: %g != 0.0 (type %s)\n",
                    i, v, type_name( dtype ) );
            return;
         }
         if( !equald( vv, 0.0 ) ) {
            *status = 1;
            printf( "TEST1 %d: variance %g != 0.0 (type %s)\n",
                    i, vv, type_name( dtype ) );
            return;
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 2: 2D UnitMap
 * --------------------------------------------------------------- */
static void test2( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   (void)spread;  /* not used in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      lbnd_in[0] = -1;  ubnd_in[0] = 2;
      lbnd_out[0] = 0;  ubnd_out[0] = 3;
      lbnd[0] = -1;     ubnd[0] = 1;
      lbnd_in[1] = 3;   ubnd_in[1] = 6;
      lbnd_out[1] = 2;  ubnd_out[1] = 5;
      lbnd[1] = 3;      ubnd[1] = 6;
      *m = (AstMapping *)astUnitMap( 2, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, k = 0;
      for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
         for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
            set_val( dtype, in, k, (double)(k + 1) * kfac );
            set_val( dtype, in_var, k, (double)(k + 1) );
            k++;
         }
      }

   } else {
      /* Fortran uses 1-based k. We use 0-based. The checks use
       * the pattern: k<=4 or k%4==0 or k%4==3 (1-based) ->
       * C: k<4 or (k+1)%4==0 or (k+1)%4==3 */
      int i, j, k = 0;
      for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
         for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
            int k1 = k + 1;  /* 1-based for matching Fortran logic */
            if( k1 <= 4 || k1 % 4 == 0 || k1 % 4 == 3 ) {
               /* Should be zero. */
               double v = to_double( dtype, out, k );
               if( !equald( v, 0.0 ) ) {
                  *status = 1;
                  printf( "TEST2 %d: %g != 0 (type %s)\n",
                          k1, v, type_name( dtype ) );
                  return;
               }
               double vv = to_double( dtype, out_var, k );
               if( !equald( vv, 0.0 ) ) {
                  *status = 1;
                  printf( "TEST2 %d: variance %g != 0 (type %s)\n",
                          k1, vv, type_name( dtype ) );
                  return;
               }
            } else {
               /* Should match input shifted by 3. Fortran: OUT(K) == IN(K-3)
                * (1-based). C: out[k] == in[k-3] (0-based, k-3 since
                * Fortran K-3 with 1-based -> C k+1-3-1 = k-3). */
               int in_idx = k - 3;
               if( !equal_gen( dtype, (const char *)out + k * type_size(dtype),
                               (const char *)in + in_idx * type_size(dtype) ) ) {
                  *status = 1;
                  printf( "TEST2 %d: data %g != %g (type %s)\n",
                          k1, to_double( dtype, out, k ),
                          to_double( dtype, in, in_idx ), type_name( dtype ) );
                  return;
               }
               if( !equal_gen( dtype, (const char *)out_var + k * type_size(dtype),
                               (const char *)in_var + in_idx * type_size(dtype) ) ) {
                  *status = 1;
                  printf( "TEST2 %d: variance %g != %g (type %s)\n",
                          k1, to_double( dtype, out_var, k ),
                          to_double( dtype, in_var, in_idx ), type_name( dtype ) );
                  return;
               }
            }
            k++;
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 3: 3D UnitMap
 * --------------------------------------------------------------- */
static void test3( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   (void)spread;  /* not used in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      lbnd_in[0] = -1;  ubnd_in[0] = 2;
      lbnd_out[0] = 0;  ubnd_out[0] = 3;
      lbnd[0] = -1;     ubnd[0] = 1;
      lbnd_in[1] = 3;   ubnd_in[1] = 6;
      lbnd_out[1] = 2;  ubnd_out[1] = 5;
      lbnd[1] = 3;      ubnd[1] = 6;
      lbnd_in[2] = -1;  ubnd_in[2] = 1;
      lbnd_out[2] = 0;  ubnd_out[2] = 2;
      lbnd[2] = -1;     ubnd[2] = 1;
      *m = (AstMapping *)astUnitMap( 3, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, l, k = 0;
      for( l = lbnd_in[2]; l <= ubnd_in[2]; l++ ) {
         for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
            for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
               set_val( dtype, in, k, (double)(k + 1) * kfac );
               set_val( dtype, in_var, k, (double)(k + 1) );
               k++;
            }
         }
      }

   } else {
      /* Fortran: k2 = mod(k-1,16)+1  (1-based k)
       * Check: k2<=4 or k2%4==0 or k2%4==3 or l==2 -> zero
       * else OUT(K) == IN(K+13) (1-based) -> C: out[k] == in[k+13] */
      int i, j, l, k = 0;
      for( l = lbnd_out[2]; l <= ubnd_out[2]; l++ ) {
         for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
            for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
               int k1 = k + 1;   /* 1-based */
               int k2 = ((k1 - 1) % 16) + 1;
               if( k2 <= 4 || k2 % 4 == 0 || k2 % 4 == 3 || l == 2 ) {
                  double v = to_double( dtype, out, k );
                  if( !equald( v, 0.0 ) ) {
                     *status = 1;
                     printf( "TEST3 %d: %g != 0 (type %s)\n",
                             k1, v, type_name( dtype ) );
                     return;
                  }
                  double vv = to_double( dtype, out_var, k );
                  if( !equald( vv, 0.0 ) ) {
                     *status = 1;
                     printf( "TEST3 %d: variance %g != 0 (type %s)\n",
                             k1, vv, type_name( dtype ) );
                     return;
                  }
               } else {
                  /* Fortran: OUT(K) == IN(K+13) (1-based).
                   * C 0-based: out[k] == in[(k+1)+13-1] = in[k+13] */
                  int in_idx = k + 13;
                  if( !equal_gen( dtype, (const char *)out + k * type_size(dtype),
                                  (const char *)in + in_idx * type_size(dtype) ) ) {
                     *status = 1;
                     printf( "TEST3 %d: data %g != %g (type %s)\n",
                             k1, to_double( dtype, out, k ),
                             to_double( dtype, in, in_idx ), type_name( dtype ) );
                     return;
                  }
                  if( !equal_gen( dtype, (const char *)out_var + k * type_size(dtype),
                                  (const char *)in_var + in_idx * type_size(dtype) ) ) {
                     *status = 1;
                     printf( "TEST3 %d: variance %g != %g (type %s)\n",
                             k1, to_double( dtype, out_var, k ),
                             to_double( dtype, in_var, in_idx ), type_name( dtype ) );
                     return;
                  }
               }
               k++;
            }
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 4: 1D ShiftMap variant (shift=3)
 * --------------------------------------------------------------- */
static void test4( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   (void)spread;  /* not used in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      double shift = 3.0;
      lbnd_in[0] = 10;  ubnd_in[0] = 19;
      lbnd_out[0] = 12; ubnd_out[0] = 20;
      lbnd[0] = 11;     ubnd[0] = 17;
      *m = (AstMapping *)astShiftMap( 1, &shift, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.1;

   } else if( phase == 1 ) {
      int i;
      for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
         set_val( dtype, in, i - lbnd_in[0], (double)i * kfac );
         set_val( dtype, in_var, i - lbnd_in[0], (double)i );
      }

   } else {
      int i;
      /* First region: lbnd_out to lbnd+2 should be zero. */
      for( i = lbnd_out[0]; i <= lbnd[0] + 2; i++ ) {
         int oidx = i - lbnd_out[0];
         double v = to_double( dtype, out, oidx );
         if( !equald( v, 0.0 ) ) {
            *status = 1;
            printf( "TEST4 %d: %g != 0 (type %s)\n",
                    i, v, type_name( dtype ) );
            return;
         }
         double vv = to_double( dtype, out_var, oidx );
         if( !equald( vv, 0.0 ) ) {
            *status = 1;
            printf( "TEST4 %d: variance %g != 0 (type %s)\n",
                    i, vv, type_name( dtype ) );
            return;
         }
      }

      /* Second region: lbnd+3 to ubnd_out should match shifted input. */
      for( i = lbnd[0] + 3; i <= ubnd_out[0]; i++ ) {
         int oidx = i - lbnd_out[0];
         int iidx = i - 3 - lbnd_in[0];
         if( !equal_gen( dtype, (const char *)out + oidx * type_size(dtype),
                         (const char *)in + iidx * type_size(dtype) ) ) {
            *status = 1;
            printf( "TEST4 %d: data %g != %g (type %s)\n",
                    i, to_double( dtype, out, oidx ),
                    to_double( dtype, in, iidx ), type_name( dtype ) );
            return;
         }
         if( !equal_gen( dtype, (const char *)out_var + oidx * type_size(dtype),
                         (const char *)in_var + iidx * type_size(dtype) ) ) {
            *status = 1;
            printf( "TEST4 %d: variance %g != %g (type %s)\n",
                    i, to_double( dtype, out_var, oidx ),
                    to_double( dtype, in_var, iidx ), type_name( dtype ) );
            return;
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 5: 2D ShiftMap with variance (shift=[3,-1])
 * --------------------------------------------------------------- */
static void test5( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   (void)spread;  /* not used in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      double shifts[2] = { 3.0, -1.0 };
      lbnd_in[0] = -1;  ubnd_in[0] = 2;
      lbnd_out[0] = 0;  ubnd_out[0] = 3;
      lbnd[0] = -1;     ubnd[0] = 1;
      lbnd_in[1] = 3;   ubnd_in[1] = 6;
      lbnd_out[1] = 2;  ubnd_out[1] = 5;
      lbnd[1] = 3;      ubnd[1] = 6;
      *m = (AstMapping *)astShiftMap( 2, shifts, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, k = 0;
      for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
         for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
            set_val( dtype, in, k, (double)(k + 1) * kfac );
            set_val( dtype, in_var, k, (double)(k + 1) );
            k++;
         }
      }

   } else {
      /* Fortran: mod(K-1,4) < 2 -> zero, else OUT(K)==IN(K-2) (1-based).
       * C 0-based: mod(k,4) < 2 -> zero, else out[k]==in[k-2]. */
      int i, j, k = 0;
      for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
         for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
            int k1 = k + 1;  /* 1-based */
            if( (k1 - 1) % 4 < 2 ) {
               double v = to_double( dtype, out, k );
               if( !equald( v, 0.0 ) ) {
                  *status = 1;
                  printf( "TEST5 %d: %g != 0 (type %s)\n",
                          k1, v, type_name( dtype ) );
                  return;
               }
               double vv = to_double( dtype, out_var, k );
               if( !equald( vv, 0.0 ) ) {
                  *status = 1;
                  printf( "TEST5 %d: variance %g != 0 (type %s)\n",
                          k1, vv, type_name( dtype ) );
                  return;
               }
            } else {
               /* Fortran: OUT(K) == IN(K-2) (1-based) -> C: out[k] == in[k-2] */
               int in_idx = k - 2;
               if( !equal_gen( dtype, (const char *)out + k * type_size(dtype),
                               (const char *)in + in_idx * type_size(dtype) ) ) {
                  *status = 1;
                  printf( "TEST5 %d: data %g != %g (type %s)\n",
                          k1, to_double( dtype, out, k ),
                          to_double( dtype, in, in_idx ), type_name( dtype ) );
                  return;
               }
               if( !equal_gen( dtype, (const char *)out_var + k * type_size(dtype),
                               (const char *)in_var + in_idx * type_size(dtype) ) ) {
                  *status = 1;
                  printf( "TEST5 %d: variance %g != %g (type %s)\n",
                          k1, to_double( dtype, out_var, k ),
                          to_double( dtype, in_var, in_idx ), type_name( dtype ) );
                  return;
               }
            }
            k++;
         }
      }
   }
}

/* ---------------------------------------------------------------
 * TEST 6: 3D ShiftMap with filtering (shift=[3,-1,1])
 * --------------------------------------------------------------- */
static void test6( int phase, DataType dtype,
                   int *lbnd_in, int *ubnd_in, void *in, void *in_var,
                   int *lbnd_out, int *ubnd_out, void *out, void *out_var,
                   int *lbnd, int *ubnd, AstMapping **m, double *params,
                   double *tol, int spread, int *status ) {
   double kfac;

   (void)spread;  /* not used in this test */

   if( *status != 0 ) return;

   kfac = get_kfac( dtype, 1000.0 );

   if( phase == 0 ) {
      double shifts[3] = { 3.0, -1.0, 1.0 };
      lbnd_in[0] = -1;  ubnd_in[0] = 2;
      lbnd_out[0] = 0;  ubnd_out[0] = 3;
      lbnd[0] = -1;     ubnd[0] = 1;
      lbnd_in[1] = 3;   ubnd_in[1] = 6;
      lbnd_out[1] = 2;  ubnd_out[1] = 5;
      lbnd[1] = 3;      ubnd[1] = 6;
      lbnd_in[2] = -1;  ubnd_in[2] = 1;
      lbnd_out[2] = 0;  ubnd_out[2] = 2;
      lbnd[2] = -1;     ubnd[2] = 1;
      *m = (AstMapping *)astShiftMap( 3, shifts, " " );
      params[0] = 2.0;  params[1] = 2.0;
      *tol = 0.0;

   } else if( phase == 1 ) {
      int i, j, l, k = 0;
      for( l = lbnd_in[2]; l <= ubnd_in[2]; l++ ) {
         for( j = lbnd_in[1]; j <= ubnd_in[1]; j++ ) {
            for( i = lbnd_in[0]; i <= ubnd_in[0]; i++ ) {
               set_val( dtype, in, k, (double)(k + 1) * kfac );
               set_val( dtype, in_var, k, (double)(k + 1) );
               k++;
            }
         }
      }

   } else {
      /* Fortran: k2 = mod(k-1,16)+1; mod(k2-1,4) < 2 -> zero
       * else OUT(K)==IN(K-2) (1-based). */
      int i, j, l, k = 0;
      for( l = lbnd_out[2]; l <= ubnd_out[2]; l++ ) {
         for( j = lbnd_out[1]; j <= ubnd_out[1]; j++ ) {
            for( i = lbnd_out[0]; i <= ubnd_out[0]; i++ ) {
               int k1 = k + 1;  /* 1-based */
               int k2 = ((k1 - 1) % 16) + 1;
               if( (k2 - 1) % 4 < 2 ) {
                  double v = to_double( dtype, out, k );
                  if( !equald( v, 0.0 ) ) {
                     *status = 1;
                     printf( "TEST6 %d: %g != 0 (type %s)\n",
                             k1, v, type_name( dtype ) );
                     return;
                  }
                  double vv = to_double( dtype, out_var, k );
                  if( !equald( vv, 0.0 ) ) {
                     *status = 1;
                     printf( "TEST6 %d: variance %g != 0 (type %s)\n",
                             k1, vv, type_name( dtype ) );
                     return;
                  }
               } else {
                  /* Fortran: OUT(K)==IN(K-2) (1-based) -> C: out[k]==in[k-2] */
                  int in_idx = k - 2;
                  if( !equal_gen( dtype, (const char *)out + k * type_size(dtype),
                                  (const char *)in + in_idx * type_size(dtype) ) ) {
                     *status = 1;
                     printf( "TEST6 %d: data %g != %g (type %s)\n",
                             k1, to_double( dtype, out, k ),
                             to_double( dtype, in, in_idx ), type_name( dtype ) );
                     return;
                  }
                  if( !equal_gen( dtype, (const char *)out_var + k * type_size(dtype),
                                  (const char *)in_var + in_idx * type_size(dtype) ) ) {
                     *status = 1;
                     printf( "TEST6 %d: variance %g != %g (type %s)\n",
                             k1, to_double( dtype, out_var, k ),
                             to_double( dtype, in_var, in_idx ), type_name( dtype ) );
                     return;
                  }
               }
               k++;
            }
         }
      }
   }
}

/* ---------------------------------------------------------------
 * Main
 * --------------------------------------------------------------- */
int main( void ) {
   int status = 0;

   astWatch( &status );
   astBegin;

   tester( test7, &status );
   tester( test8, &status );
   tester( test9, &status );
   tester( test1, &status );
   tester( test2, &status );
   tester( test3, &status );
   tester( test4, &status );
   tester( test5, &status );
   tester( test6, &status );

   astEnd;

   if( status == 0 ) {
      printf( "All AST_REBIN tests passed\n" );
   } else {
      printf( "AST_REBIN tests failed\n" );
   }

   return status ? 1 : 0;
}
