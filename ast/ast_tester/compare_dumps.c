/*
 * compare_dumps.c
 *
 * Compare two AST dumps, tolerating the last-bit variation that libm and
 * compiler differences produce across platforms.
 *
 * A byte-equal line passes.  Otherwise the two lines are split on whitespace and
 * compared token by token, and two tokens match when they are byte-equal or both
 * parse as a double within MAX_ULPS.
 *
 * This is what lets a dump comparison stay a real gate on a platform whose last
 * bits differ, rather than being opted out of altogether.  A byte comparison
 * leaves no middle ground: a fixture whose trig values differ in the 17th digit
 * has to be excluded from string comparison entirely, and then nothing checks
 * the other several hundred lines of its dump either.
 *
 * Usage:
 *   compare_dumps [--astequal] <reference> <output>
 *
 * --astequal widens the tolerance to AST's own astEQUAL, which is the right
 * licence for a value amplified by cancellation -- OBSALT recovered from
 * OBSGEO-X/Y/Z is the case that motivates it -- and the wrong licence for
 * anything else.
 *
 * Exit status:
 *   0  equal within tolerance
 *   1  differ; the first differing line is reported on stderr
 *   2  usage or I/O error
 */

#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Four ULP absorbs cross-platform libm variation without absorbing a real
   algorithmic change, which shows up orders of magnitude larger. */
#define MAX_ULPS 4

/* AST's own value comparison, from src/object.h.in:
      astEQUALS(a,b,tol)  |a-b| <= max( tol*(|a|+|b|)*DBL_EPSILON, 1.0E-12 )
      astEQUAL(a,b)       astEQUALS(a,b,1.0E5)
   Reproduced rather than approximated: a tolerance invented here would be a
   different tolerance from the library's, and this comparator exists to say
   whether the library agrees with itself across platforms.

   The absolute term is the part that matters most, and the part a relative
   tolerance cannot supply.  A value that cancels to exactly zero on one build
   and to -1e-16 on another differs by every relative measure -- the sign
   changes -- while differing by nothing that means anything.  Every EQUAL macro
   in this library carries such a term for that reason. */
#define ASTEQUAL_TOL 1.0E5
#define ASTEQUAL_FLOOR 1.0E-12

static int use_astequal = 0;

/* Number of representable doubles between a and b.  Values of opposite sign
   never match unless both are zero, so that a sign flip is always a difference
   however small the magnitudes. */
static int within_ulps( double a, double b ) {
   long long diff;
   long long ia;
   long long ib;

   if( a == b ) return 1;
   if( isnan( a ) || isnan( b ) ) return 0;

   if( use_astequal ) {
      double rel = ASTEQUAL_TOL * ( fabs( a ) + fabs( b ) ) * DBL_EPSILON;
      return fabs( a - b ) <= ( rel > ASTEQUAL_FLOOR ? rel : ASTEQUAL_FLOOR );
   }


   memcpy( &ia, &a, sizeof ia );
   memcpy( &ib, &b, sizeof ib );
   if( ( ia < 0 ) != ( ib < 0 ) ) return 0;
   diff = ia > ib ? ia - ib : ib - ia;
   return diff <= MAX_ULPS;
}

/* Do two whitespace-delimited tokens match?  Byte equality first, so a token
   that is not a number at all is compared exactly. */
static int tokens_match( const char *a, const char *b ) {
   char *ea;
   char *eb;
   double va;
   double vb;

   if( !strcmp( a, b ) ) return 1;

   va = strtod( a, &ea );
   vb = strtod( b, &eb );
   if( ea == a || eb == b || *ea || *eb ) return 0;

   return within_ulps( va, vb );
}

/* Split both lines on whitespace and compare token by token.  A differing token
   count is a difference, so a dropped or added value cannot pass. */
static int lines_match( const char *a, const char *b ) {
   char abuf[ 4096 ];
   char bbuf[ 4096 ];
   char *asave = NULL;
   char *bsave = NULL;
   char *at;
   char *bt;

   if( !strcmp( a, b ) ) return 1;
   if( strlen( a ) >= sizeof abuf || strlen( b ) >= sizeof bbuf ) return 0;
   strcpy( abuf, a );
   strcpy( bbuf, b );

   at = strtok_r( abuf, " \t", &asave );
   bt = strtok_r( bbuf, " \t", &bsave );
   while( at && bt ) {
      if( !tokens_match( at, bt ) ) return 0;
      at = strtok_r( NULL, " \t", &asave );
      bt = strtok_r( NULL, " \t", &bsave );
   }
   return at == NULL && bt == NULL;
}

#ifndef SELFTEST
int main( int argc, char *argv[] ) {
   FILE *fa;
   FILE *fb;
   char la[ 4096 ];
   char lb[ 4096 ];
   int argi = 1;
   int line = 0;

   if( argc > 1 && !strcmp( argv[ 1 ], "--astequal" ) ) {
      use_astequal = 1;
      argi = 2;
   }
   if( argc - argi != 2 ) {
      fprintf( stderr, "usage: compare_dumps [--astequal] <reference> <output>\n" );
      return 2;
   }

   fa = fopen( argv[ argi ], "r" );
   if( !fa ) { fprintf( stderr, "cannot open %s\n", argv[ argi ] ); return 2; }
   fb = fopen( argv[ argi + 1 ], "r" );
   if( !fb ) { fprintf( stderr, "cannot open %s\n", argv[ argi + 1 ] ); return 2; }

   for( ;; ) {
      char *ra = fgets( la, sizeof la, fa );
      char *rb = fgets( lb, sizeof lb, fb );
      size_t n;

      line++;
      if( !ra && !rb ) break;
      if( !ra || !rb ) {
         fprintf( stderr, "compare_dumps: %s is longer\n",
                  ra ? argv[ argi ] : argv[ argi + 1 ] );
         fclose( fa );
         fclose( fb );
         return 1;
      }

      n = strlen( la );
      while( n && ( la[ n - 1 ] == '\n' || la[ n - 1 ] == '\r' ) ) la[ --n ] = 0;
      n = strlen( lb );
      while( n && ( lb[ n - 1 ] == '\n' || lb[ n - 1 ] == '\r' ) ) lb[ --n ] = 0;

      if( !lines_match( la, lb ) ) {
         fprintf( stderr, "compare_dumps: line %d differs\n", line );
         fprintf( stderr, "  --- %s\n  %s\n", argv[ argi ], la );
         fprintf( stderr, "  +++ %s\n  %s\n", argv[ argi + 1 ], lb );
         fclose( fa );
         fclose( fb );
         return 1;
      }
   }

   fclose( fa );
   fclose( fb );
   return 0;
}
#else
/* Built as compare_dumps_selftest with -DSELFTEST, so the tolerance itself is
   tested rather than assumed.  A comparator nobody checks is how a gate quietly
   stops being one. */
static int check( int expect, int got, const char *what ) {
   if( expect != got ) {
      printf( "compare_dumps selftest: %s -- expected %d, got %d\n",
              what, expect, got );
      return 1;
   }
   return 0;
}

int main( void ) {
   double up = 1.0;
   int fails = 0;
   int i;

   fails += check( 1, within_ulps( 1.0, 1.0 ), "exact equality matches" );
   fails += check( 1, within_ulps( 1.0, nextafter( 1.0, 2.0 ) ),
                   "one ULP matches" );

   for( i = 0; i < 5; i++ ) up = nextafter( up, 2.0 );
   fails += check( 0, within_ulps( 1.0, up ), "five ULP does not match" );

   fails += check( 0, within_ulps( nextafter( 0.0, 1.0 ), nextafter( 0.0, -1.0 ) ),
                   "opposite signs never match" );
   fails += check( 0, within_ulps( 1.0, 1.0000001 ),
                   "a real change does not match" );

   /* Token comparison: a non-numeric token is compared exactly, and a differing
      token count is a difference. */
   fails += check( 1, tokens_match( "\"FK5\"", "\"FK5\"" ), "string token matches" );
   fails += check( 0, tokens_match( "\"FK5\"", "\"ICRS\"" ),
                   "differing string tokens do not match" );
   fails += check( 0, tokens_match( "1.0x", "1.0" ),
                   "a partly numeric token is not a number" );
   fails += check( 0, lines_match( "Zoom = 2", "Zoom = 2 2" ),
                   "a dropped value is a difference" );
   fails += check( 1, lines_match( "   Zoom = 1", "   Zoom = 1" ),
                   "identical lines match" );

   /* astequal widens the tolerance, but only when asked. */
   use_astequal = 1;
   /* astEQUAL is |a-b| <= max( 1e5*(|a|+|b|)*DBL_EPSILON, 1e-12 ), so at 1e6
      it reaches about 4.4e-5 and at 1.0 about 4.4e-11. */
   fails += check( 1, within_ulps( 1.0e6, 1.0e6 + 1.0e-5 ),
                   "astequal absorbs a cancellation-scale difference" );
   fails += check( 0, within_ulps( 1.0e6, 1.0e6 + 1.0 ),
                   "astequal still rejects a real change" );
   fails += check( 1, within_ulps( 1.0, 1.0 + 1.0e-11 ),
                   "astequal reaches 1e-11 at unit magnitude" );
   fails += check( 0, within_ulps( 1.0, 1.0 + 1.0e-6 ),
                   "astequal stops well below 1e-6" );
   use_astequal = 0;
   fails += check( 0, within_ulps( 1.0e6, 1.0e6 + 1.0e-5 ),
                   "without astequal that difference is rejected" );

   if( fails ) {
      printf( "compare_dumps selftest: %d failures\n", fails );
      return 1;
   }
   printf( "compare_dumps selftest: all checks passed\n" );
   return 0;
}
#endif
