/*
 * transform_oracle_util.c
 *
 * Shared helpers for gen_transform_oracle and check_transform_oracle:
 * tolerance comparison, low-discrepancy sampling, fixture loading, and
 * full-precision double formatting/parsing.  Public AST API only.
 */
#include "transform_oracle.h"
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int oracle_within_tol( double got, double ref, double rtol, double atol ) {
    int got_bad = ( got == AST__BAD );
    int ref_bad = ( ref == AST__BAD );
    if ( got_bad || ref_bad ) return ( got_bad && ref_bad );
    if ( isnan( got ) || isnan( ref ) ) return 0;
    /* An overflow (e.g. a MathMap exp) yields an infinity, and no tolerance
       expression can compare one: got - ref is NaN for two infinities.  Two
       infinities of the same sign are an exact match; anything else is not. */
    if ( isinf( got ) || isinf( ref ) ) return ( got == ref );
    return fabs( got - ref ) <= atol + rtol * fabs( ref );
}

int oracle_within_tol_wrap( double got, double ref, double rtol, double atol ) {
    if ( oracle_within_tol( got, ref, rtol, atol ) ) return 1;
    if ( got == AST__BAD || ref == AST__BAD ) return 0;
    if ( isnan( got ) || isnan( ref ) ) return 0;
    /* Angles in radians are periodic: a longitude can emerge as 0 vs 2*pi
       or +pi vs -pi across architectures.  Accept a difference of one full
       turn. */
    double twopi = 2.0 * acos( -1.0 );
    return fabs( fabs( got - ref ) - twopi ) <= atol + rtol * fabs( ref );
}

/* Number of sampled points per fixture (tunable). */
#define ORACLE_NPOINT 24

/* Distinct prime bases per axis; extended cyclically beyond the table. */
static const unsigned oracle_primes[] = {
    2u, 3u, 5u, 7u, 11u, 13u, 17u, 19u, 23u, 29u, 31u, 37u
};

double oracle_halton( unsigned index, unsigned base ) {
    double f = 1.0, r = 0.0;
    while ( index > 0u ) {
        f /= (double) base;
        r += f * (double) ( index % base );
        index /= base;
    }
    return r;
}

int oracle_sample_axis_count( void ) { return ORACLE_NPOINT; }

void oracle_sample_points( int naxis, const double *lo, const double *hi,
                           int npoint, double **out ) {
    /* First four rows are deterministic edge/structure points. */
    for ( int a = 0; a < naxis; a++ ) {
        double zero = 0.0 < lo[a] ? lo[a] : ( 0.0 > hi[a] ? hi[a] : 0.0 );
        if ( npoint > 0 ) out[a][0] = lo[a];                 /* all-lo  */
        if ( npoint > 1 ) out[a][1] = hi[a];                 /* all-hi  */
        if ( npoint > 2 ) out[a][2] = zero;                  /* zero    */
        if ( npoint > 3 ) out[a][3] = 0.5 * ( lo[a] + hi[a] ); /* mid   */
    }
    /* Remaining rows: Halton spread, distinct prime base per axis. */
    int nedge = npoint < 4 ? npoint : 4;
    for ( int a = 0; a < naxis; a++ ) {
        unsigned base = oracle_primes[ (size_t) a % ( sizeof(oracle_primes)
                                       / sizeof(oracle_primes[0]) ) ];
        for ( int i = nedge; i < npoint; i++ ) {
            double u = oracle_halton( (unsigned)( i - nedge + 1 ), base );
            out[a][i] = lo[a] + u * ( hi[a] - lo[a] );
        }
    }
}

void oracle_format_double( char *buf, size_t buflen, double v ) {
    if ( v == AST__BAD ) { snprintf( buf, buflen, "%s", ORACLE_BAD_TOKEN ); }
    else                 { snprintf( buf, buflen, "%.17g", v ); }
}

double oracle_parse_double( const char *tok, int *ok ) {
    if ( strcmp( tok, ORACLE_BAD_TOKEN ) == 0 ) { *ok = 1; return AST__BAD; }
    char *end = NULL;
    double v = strtod( tok, &end );
    *ok = ( end != tok && *end == '\0' );
    return v;
}

/* A fixture holding an IntraMap names a private transformation function, and its
   dump cannot be read until that function is registered.  Both the generator and
   the checker need the same four registrations simplify.c makes: if only one of
   them had them, the generator would write sections the checker could not load.
   Registering here keeps the two in step by construction. */
static void OracleIntraTran( AstMapping *mapping, int npoint, int ncoord_in,
                             const double *ptr_in[], int forward,
                             int ncoord_out, double *ptr_out[] ) {
    int icoord;
    int ipoint;

    (void) mapping;
    (void) forward;

    for( icoord = 0; icoord < ncoord_out; icoord++ ) {
        for( ipoint = 0; ipoint < npoint; ipoint++ ) {
            ptr_out[ icoord ][ ipoint ] = ( icoord < ncoord_in ) ?
                ptr_in[ icoord ][ ipoint ] : AST__BAD;
        }
    }
}

void oracle_register_intramaps( int *status ) {
    astIntraReg_( "simplifyidentity", 1, 1, OracleIntraTran,
                  AST__SIMPFI | AST__SIMPIF,
                  "Identity IntraMap for simplify fixtures",
                  "AST test suite", "starlink-ast", status );
    astIntraReg_( "simplifyidentity2", 1, 1, OracleIntraTran,
                  AST__SIMPFI | AST__SIMPIF,
                  "Second identity IntraMap for simplify fixtures",
                  "AST test suite", "starlink-ast", status );
    astIntraReg_( "nosimpfi", 1, 1, OracleIntraTran, AST__SIMPIF,
                  "IntraMap without SIMPFI for simplify fixtures",
                  "AST test suite", "starlink-ast", status );
    astIntraReg_( "nosimpif", 1, 1, OracleIntraTran, AST__SIMPFI,
                  "IntraMap without SIMPIF for simplify fixtures",
                  "AST test suite", "starlink-ast", status );
}

AstMapping *oracle_load_mapping( const char *root, const char *relpath,
                                 AstFrame **out_base, AstFrame **out_cur ) {
    char path[1024];
    snprintf( path, sizeof path, "%s/%s", root, relpath );

    const char *dot = strrchr( relpath, '.' );
    int is_head = ( dot && strcmp( dot, ".head" ) == 0 );

    AstMapping *result = NULL;
    if ( out_base ) *out_base = NULL;
    if ( out_cur )  *out_cur  = NULL;

    if ( is_head ) {
        AstFitsChan *fc = astFitsChan( NULL, NULL, " " );
        FILE *fp = fopen( path, "r" );
        if ( fp ) {
            char line[256];
            while ( fgets( line, (int) sizeof line, fp ) ) {
                size_t n = strlen( line );
                while ( n > 0 && ( line[n-1] == '\n' || line[n-1] == '\r' ) )
                    line[--n] = '\0';
                astPutFits( fc, line, 0 );
            }
            fclose( fp );
            astClear( fc, "Card" );
            AstObject *obj = astRead( fc );
            if ( obj ) {
                if ( astIsAFrameSet( obj ) ) {
                    AstFrameSet *fs = (AstFrameSet *) obj;
                    result = astGetMapping( fs, AST__BASE, AST__CURRENT );
                    if ( out_base ) *out_base = astGetFrame( fs, AST__BASE );
                    if ( out_cur )  *out_cur  = astGetFrame( fs, AST__CURRENT );
                }
                obj = astAnnul( obj );
            }
        }
        fc = astAnnul( fc );
    } else {
        AstChannel *chan = astChannel( NULL, NULL, "SourceFile=%s", path );
        AstObject *obj = astRead( chan );
        chan = astAnnul( chan );
        if ( obj ) {
            if ( astIsAFrameSet( obj ) ) {
                AstFrameSet *fs = (AstFrameSet *) obj;
                result = (AstMapping *) obj;
                if ( out_base ) *out_base = astGetFrame( fs, AST__BASE );
                if ( out_cur )  *out_cur  = astGetFrame( fs, AST__CURRENT );
            } else if ( astIsAMapping( obj ) ) {
                result = (AstMapping *) obj;
            } else {
                obj = astAnnul( obj );
            }
        }
    }

    if ( !astOK ) astClearStatus;   /* a bad/unsupported fixture is not fatal */
    return result;
}
