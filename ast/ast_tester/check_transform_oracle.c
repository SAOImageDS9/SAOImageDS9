/*
 * check_transform_oracle: read a transform oracle file (written by
 * gen_transform_oracle), reload each named fixture, re-transform the
 * recorded inputs, and compare outputs within tolerance.  The oracle
 * file is the sole manifest; this program does no corpus scanning.
 *
 * Usage:
 *   check_transform_oracle <root> <oracle_file> [<overrides>]
 *   check_transform_oracle --selftest
 */
#include "ast.h"
#include "transform_oracle.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    char relpath[1024];
    int nin, nout, forward;
    int npoint;
    double **in;
    double **out;
} Section;

static double **alloc_cols( int ncol, int nrow ) {
    double **c = malloc( sizeof(double *) * (size_t) ncol );
    for ( int a = 0; a < ncol; a++ ) c[a] = malloc( sizeof(double) * (size_t) nrow );
    return c;
}

static void free_sections( Section *secs, int nsec );

static int oracle_read_file( const char *path, Section **out_secs, int *out_n ) {
    FILE *fp = fopen( path, "r" );
    if ( !fp ) { fprintf( stderr, "cannot open oracle %s\n", path ); return 1; }

    size_t cap = 64, n = 0;
    Section *secs = malloc( sizeof(Section) * cap );
    char line[8192];
    Section *cur = NULL;
    int row = 0, rowcap = 0;

    while ( fgets( line, (int) sizeof line, fp ) ) {
        if ( line[0] == '#' || line[0] == '\n' ) continue;
        if ( line[0] == '[' ) {
            if ( n == cap ) { cap *= 2; secs = realloc( secs, sizeof(Section)*cap ); }
            cur = &secs[n++];
            char dir[16] = "forward";
            /* header: [<relpath>  nin=N nout=M dir=word] */
            if ( sscanf( line, "[%1023s nin=%d nout=%d dir=%15[^]]",
                         cur->relpath, &cur->nin, &cur->nout, dir ) < 3 ) {
                fprintf( stderr, "bad section header: %s", line );
                fclose( fp ); return 1;
            }
            cur->forward = ( strncmp( dir, "inverse", 7 ) != 0 );
            cur->npoint = 0;
            rowcap = oracle_sample_axis_count() + 8;
            cur->in  = alloc_cols( cur->nin,  rowcap );
            cur->out = alloc_cols( cur->nout, rowcap );
            row = 0;
            continue;
        }
        if ( !cur ) continue;
        /* a data row: nin inputs then nout outputs */
        char *p = line, *tok;
        int col = 0, ok = 1;
        if ( row >= rowcap ) {
            rowcap *= 2;
            for ( int a = 0; a < cur->nin;  a++ )
                cur->in[a]  = realloc( cur->in[a],  sizeof(double)*(size_t)rowcap );
            for ( int a = 0; a < cur->nout; a++ )
                cur->out[a] = realloc( cur->out[a], sizeof(double)*(size_t)rowcap );
        }
        while ( ( tok = strtok( p, " \t\r\n" ) ) ) {
            p = NULL;
            int good = 0;
            double v = oracle_parse_double( tok, &good );
            if ( !good ) { ok = 0; break; }
            if ( col < cur->nin ) cur->in[col][row] = v;
            else if ( col < cur->nin + cur->nout ) cur->out[col - cur->nin][row] = v;
            col++;
        }
        /* A malformed data row (unparseable token or wrong column count) is a
           corrupt/truncated oracle, not something to skip silently: fail so
           the gate cannot pass on reduced coverage. */
        if ( !ok || col != cur->nin + cur->nout ) {
            fprintf( stderr,
                "%s: malformed data row in section [%s] (row %d: got %d of "
                "%d columns)\n", path, cur->relpath, row, col,
                cur->nin + cur->nout );
            fclose( fp );
            free_sections( secs, (int) n );
            return 1;
        }
        row++; cur->npoint = row;
    }
    fclose( fp );
    *out_secs = secs; *out_n = (int) n;
    return 0;
}

/* Re-transform a section's recorded inputs with the live mapping into
   freshly allocated columns the caller frees.  Returns NULL on arity
   mismatch (a structural change to the fixture). */
static double **transform_section( AstMapping *map, const Section *s ) {
    if ( astGetI( map, "Nin" ) != ( s->forward ? s->nin : s->nout ) ) return NULL;
    if ( astGetI( map, "Nout" ) != ( s->forward ? s->nout : s->nin ) ) return NULL;
    double **live = alloc_cols( s->nout, s->npoint );
    astTranP( map, s->npoint, s->nin, (const double **) s->in,
              s->forward, s->nout, live );
    return live;
}

static void free_cols( double **c, int ncol ) {
    if ( !c ) return;
    for ( int a = 0; a < ncol; a++ ) free( c[a] );
    free( c );
}

static void free_sections( Section *secs, int nsec ) {
    if ( !secs ) return;
    for ( int i = 0; i < nsec; i++ ) {
        free_cols( secs[i].in,  secs[i].nin );
        free_cols( secs[i].out, secs[i].nout );
    }
    free( secs );
}

/* Is output axis `axis` of `frame` cyclic with period 2*pi?  Tested
   generically via astNorm: a point and the same point shifted by 2*pi on
   that axis normalize to the same value iff the axis wraps (e.g. a SkyFrame
   longitude).  Latitude reflects rather than wraps, and basic frames
   (GRID pixels, SpecFrame) are not cyclic, so their pixel/linear axes are
   compared without wrap -- which is what catches a genuine 2*pi drift in a
   non-angular output. */
static int axis_is_cyclic( AstFrame *frame, int axis ) {
    if ( !frame ) return 0;
    int naxes = astGetI( frame, "Naxes" );
    if ( !astOK || axis >= naxes ) { astClearStatus; return 0; }
    double twopi = 2.0 * acos( -1.0 );
    double *p = malloc( sizeof(double) * (size_t) naxes );
    double *q = malloc( sizeof(double) * (size_t) naxes );
    for ( int i = 0; i < naxes; i++ ) { p[i] = 0.1; q[i] = 0.1; }
    q[axis] += twopi;
    astNorm( frame, p );
    astNorm( frame, q );
    int cyclic = astOK && fabs( p[axis] - q[axis] ) < 1e-6;
    if ( !astOK ) astClearStatus;
    free( p ); free( q );
    return cyclic;
}

/* Match one output value: wrap-aware (2*pi periodic) only on axes flagged
   angular, plain otherwise. */
static int axis_match( double got, double ref, double rtol, double atol,
                       int angular ) {
    return angular ? oracle_within_tol_wrap( got, ref, rtol, atol )
                   : oracle_within_tol( got, ref, rtol, atol );
}

/* Compare two equal-shape output sets; report and count mismatches.
   is_ang[a] != 0 marks output axis a as angular (wrap-aware comparison). */
static int compare_outputs( const char *label, const char *relpath,
                            double **got, double **ref, int ncol, int npoint,
                            double rtol, double atol, const int *is_ang ) {
    int fails = 0;
    for ( int p = 0; p < npoint; p++ ) {
        for ( int a = 0; a < ncol; a++ ) {
            if ( !axis_match( got[a][p], ref[a][p], rtol, atol, is_ang[a] ) ) {
                double d = fabs( got[a][p] - ref[a][p] );
                double rel = ref[a][p] != 0.0 ? d / fabs( ref[a][p] ) : d;
                fprintf( stderr,
                    "MISMATCH [%s] %s row=%d axis=%d ref=%.17g got=%.17g rel=%.3g\n",
                    label, relpath, p, a, ref[a][p], got[a][p], rel );
                fails++;
            }
        }
    }
    return fails;
}

/* Equivalence check C, gated on stored agreement.  Compares the live .map
   and .simp forward outputs, but only at points where the *recorded* .map
   and .simp golden values already agree (within the equivalence tolerance).
   Generation-time agreement marks the shared valid domain; points where the
   two forms legitimately diverge (out-of-domain inputs) are excluded, while
   a future simplification regression at a previously-agreeing point is still
   caught. */
static int compare_equiv( const char *relpath,
                          double **map_live, double **simp_live,
                          double **map_ref,  double **simp_ref,
                          int ncol, int npoint, double rtol, double atol,
                          const int *is_ang ) {
    int fails = 0;
    for ( int p = 0; p < npoint; p++ ) {
        for ( int a = 0; a < ncol; a++ ) {
            if ( !axis_match( map_ref[a][p], simp_ref[a][p], rtol, atol, is_ang[a] ) )
                continue;   /* out of shared domain at generation time */
            if ( !axis_match( map_live[a][p], simp_live[a][p], rtol, atol, is_ang[a] ) ) {
                double d = fabs( map_live[a][p] - simp_live[a][p] );
                double rel = simp_live[a][p] != 0.0 ? d / fabs( simp_live[a][p] ) : d;
                fprintf( stderr,
                    "MISMATCH [equiv] %s row=%d axis=%d map=%.17g simp=%.17g rel=%.3g\n",
                    relpath, p, a, map_live[a][p], simp_live[a][p], rel );
                fails++;
            }
        }
    }
    return fails;
}

/* Per-fixture check overrides, keyed by relpath.  Round-trip lines:
   "relpath off" disables round-trip, "relpath <rtol> <atol>" loosens it.
   Golden lines: "relpath golden off" / "relpath golden-fwd off" /
   "relpath golden-inv off" skip the golden comparison for the named
   direction(s).  A fixture may have both a round-trip and a golden line;
   the two kinds are looked up independently. */
typedef struct {
    char relpath[1024];
    int rtrip;                  /* round-trip entry?  else golden entry */
    double rtol, atol;          /* round-trip: loosened tolerances */
    int off;                    /* round-trip: check disabled */
    int golden_fwd_off;         /* golden: skip forward sections */
    int golden_inv_off;         /* golden: skip inverse sections */
} Override;
static Override *g_over = NULL;
static int g_nover = 0;

static void load_overrides( const char *path ) {
    if ( !path ) return;
    FILE *fp = fopen( path, "r" );
    if ( !fp ) return;
    size_t cap = 16; g_over = malloc( sizeof(Override) * cap );
    char line[1024];
    while ( fgets( line, (int) sizeof line, fp ) ) {
        if ( line[0] == '#' || line[0] == '\n' ) continue;
        char rel[1024], what[64];
        if ( sscanf( line, "%1023s %63s", rel, what ) < 2 ) continue;
        if ( g_nover == (int) cap ) { cap *= 2; g_over = realloc( g_over, sizeof(Override)*cap ); }
        Override *o = &g_over[g_nover++];
        memset( o, 0, sizeof *o );
        snprintf( o->relpath, sizeof o->relpath, "%s", rel );
        if ( strncmp( what, "golden", 6 ) == 0 ) {
            o->golden_fwd_off = ( strcmp( what, "golden" ) == 0 ||
                                  strcmp( what, "golden-fwd" ) == 0 );
            o->golden_inv_off = ( strcmp( what, "golden" ) == 0 ||
                                  strcmp( what, "golden-inv" ) == 0 );
        } else {
            o->rtrip = 1;
            if ( strcmp( what, "off" ) == 0 ) { o->off = 1; }
            else { o->rtol = ORACLE_DEF_RTRIP_RTOL; o->atol = ORACLE_DEF_RTRIP_ATOL;
                   sscanf( line, "%*s %lf %lf", &o->rtol, &o->atol ); }
        }
    }
    fclose( fp );
}

/* Fill rtol/atol for a fixture's round-trip; return 0 if it is disabled. */
static int rtrip_tol( const char *relpath, double *rtol, double *atol ) {
    *rtol = ORACLE_DEF_RTRIP_RTOL; *atol = ORACLE_DEF_RTRIP_ATOL;
    for ( int i = 0; i < g_nover; i++ ) {
        if ( g_over[i].rtrip && strcmp( g_over[i].relpath, relpath ) == 0 ) {
            if ( g_over[i].off ) return 0;
            *rtol = g_over[i].rtol; *atol = g_over[i].atol; return 1;
        }
    }
    return 1;
}

/* Is the golden comparison disabled for this fixture and direction? */
static int golden_off( const char *relpath, int forward ) {
    for ( int i = 0; i < g_nover; i++ ) {
        if ( !g_over[i].rtrip && strcmp( g_over[i].relpath, relpath ) == 0 ) {
            return forward ? g_over[i].golden_fwd_off
                           : g_over[i].golden_inv_off;
        }
    }
    return 0;
}

/* Round-trip accuracy check (GRID-domain corpora only).  fwd is a fixture's
   forward section; inv_live are the live outputs of its inverse section
   (i.e. inverse(forward(P))).  Assert those recover the forward inputs P,
   skipping points where the forward output was BAD (e.g. projection corners
   that have no inverse).

   Alias-aware: a recovered pixel that differs from P is still accepted if it
   forward-maps to the same sky as P.  This happens when an image is wider
   than the projection period (e.g. a quad-cube image spanning >360 deg),
   where the inverse legitimately returns a different but equivalent
   preimage.  Only a recovered pixel that maps to a *different* sky is a real
   inverse failure. */
static int compare_rtrip( AstMapping *map, const Section *fwd,
                          double **inv_live, double rtol, double atol ) {
    int fails = 0;

    /* Forward-transform the recovered pixels so aliased preimages can be
       detected by comparing their sky against the original forward output. */
    double **sky2 = alloc_cols( fwd->nout, fwd->npoint );
    astTranP( map, fwd->npoint, fwd->nin, (const double **) inv_live,
              1, fwd->nout, sky2 );
    int have_sky2 = astOK;
    if ( !astOK ) astClearStatus;

    for ( int p = 0; p < fwd->npoint; p++ ) {
        int fbad = 0;
        for ( int b = 0; b < fwd->nout; b++ )
            if ( fwd->out[b][p] == AST__BAD ) { fbad = 1; break; }
        if ( fbad ) continue;                 /* nothing to invert */

        int pixel_ok = 1;
        for ( int a = 0; a < fwd->nin; a++ )
            if ( !oracle_within_tol( inv_live[a][p], fwd->in[a][p], rtol, atol ) )
                { pixel_ok = 0; break; }
        if ( pixel_ok ) continue;

        /* Different pixel: accept if it forward-maps to the same sky. */
        if ( have_sky2 ) {
            int alias = 1;
            for ( int b = 0; b < fwd->nout; b++ )
                if ( !oracle_within_tol_wrap( sky2[b][p], fwd->out[b][p],
                                              ORACLE_DEF_RTOL, ORACLE_DEF_ATOL ) )
                    { alias = 0; break; }
            if ( alias ) continue;
        }

        /* Genuine round-trip failure: report the offending axes. */
        for ( int a = 0; a < fwd->nin; a++ ) {
            if ( !oracle_within_tol( inv_live[a][p], fwd->in[a][p], rtol, atol ) ) {
                double d = fabs( inv_live[a][p] - fwd->in[a][p] );
                double rel = fwd->in[a][p] != 0.0 ? d / fabs( fwd->in[a][p] ) : d;
                fprintf( stderr,
                    "MISMATCH [round-trip] %s row=%d axis=%d pixel=%.17g "
                    "recovered=%.17g rel=%.3g\n",
                    fwd->relpath, p, a, fwd->in[a][p], inv_live[a][p], rel );
                fails++;
            }
        }
    }
    free_cols( sky2, fwd->nout );
    return fails;
}

static int selftest( void ) {
    const char *tmp = "/tmp/oracle_selftest.txt";
    FILE *fp = fopen( tmp, "w" );
    fputs( "# header\n\n"
           "[foo.map  nin=2 nout=1 dir=forward]\n"
           "  1 2  3\n"
           "  4 5  BAD\n\n", fp );
    fclose( fp );
    Section *s = NULL; int n = 0;
    if ( oracle_read_file( tmp, &s, &n ) || n != 1 ) {
        fprintf( stderr, "selftest: parse failed\n" ); return 1;
    }
    int ok = ( strcmp( s[0].relpath, "foo.map" ) == 0 && s[0].nin == 2 &&
               s[0].nout == 1 && s[0].forward == 1 && s[0].npoint == 2 &&
               s[0].in[0][0] == 1 && s[0].in[1][1] == 5 &&
               s[0].out[0][0] == 3 && s[0].out[0][1] == AST__BAD );
    free_sections( s, n );

    /* Overrides parsing and lookup: round-trip lines and golden lines are
       independent even for the same fixture. */
    const char *tmpov = "/tmp/oracle_selftest_overrides.txt";
    fp = fopen( tmpov, "w" );
    fputs( "# comment\n"
           "rtoff.head off\n"
           "loose.head 2e-3 4e-2\n"
           "noisy.map golden-inv off\n"
           "both.map golden off\n"
           "fwdonly.map golden-fwd off\n", fp );
    fclose( fp );
    load_overrides( tmpov );
    double rtol, atol;
    ok = ok && !rtrip_tol( "rtoff.head", &rtol, &atol );
    ok = ok && rtrip_tol( "loose.head", &rtol, &atol ) &&
         rtol == 2e-3 && atol == 4e-2;
    ok = ok && rtrip_tol( "noisy.map", &rtol, &atol );   /* golden line only */
    ok = ok && !golden_off( "rtoff.head", 1 ) && !golden_off( "rtoff.head", 0 );
    ok = ok && !golden_off( "noisy.map", 1 ) && golden_off( "noisy.map", 0 );
    ok = ok && golden_off( "both.map", 1 ) && golden_off( "both.map", 0 );
    ok = ok && golden_off( "fwdonly.map", 1 ) && !golden_off( "fwdonly.map", 0 );

    printf( "selftest: %s\n", ok ? "ok" : "FAIL" );
    return ok ? 0 : 1;
}

/* Stem of a relpath (path minus final extension). */
static void path_stem( const char *relpath, char *stem, size_t n ) {
    const char *ext = strrchr( relpath, '.' );
    size_t len = ext ? (size_t)( ext - relpath ) : strlen( relpath );
    snprintf( stem, n, "%.*s", (int) len, relpath );
}

static int has_ext( const char *relpath, const char *ext ) {
    const char *dot = strrchr( relpath, '.' );
    return dot && strcmp( dot, ext ) == 0;
}

int main( int argc, char *argv[] ) {
    int status_value = 0; int *status = &status_value;
    astWatch( status );

    oracle_register_intramaps( status );
    if ( argc == 2 && strcmp( argv[1], "--selftest" ) == 0 ) return selftest();
    if ( argc < 3 ) {
        fprintf( stderr,
            "Usage: check_transform_oracle <root> <oracle_file> [<overrides>]\n" );
        return 2;
    }
    const char *root   = argv[1];
    const char *oracle = argv[2];
    if ( argc >= 4 ) load_overrides( argv[3] );

    Section *secs = NULL; int nsec = 0;
    if ( oracle_read_file( oracle, &secs, &nsec ) ) return 2;

    int total_fail = 0, checked = 0;

    /* One-slot cache of the most recent forward section, used to pair a
       fixture's inverse section (emitted immediately after) for the
       round-trip accuracy check. */
    Section *prev_fwd = NULL;

    /* One-slot cache of the most recent .map forward section and its live
       outputs, so check C can compare the matching .simp forward section
       against it.  The generator emits a stem's .map sections immediately
       before its .simp sections; only .map forward sections update the
       cache and only .simp forward sections consume it, so intervening
       inverse sections do not disturb it. */
    Section *prev_map = NULL;
    double **prev_map_live = NULL;

    for ( int i = 0; i < nsec; i++ ) {
        Section *s = &secs[i];
        astBegin;
        AstFrame *base = NULL, *cur = NULL;
        AstMapping *map = oracle_load_mapping( root, s->relpath, &base, &cur );
        if ( !map ) {
            fprintf( stderr, "LOADFAIL %s (fixture missing or unreadable)\n",
                     s->relpath );
            total_fail++;
            astEnd;
            continue;
        }
        double **live = transform_section( map, s );
        if ( !live ) {
            fprintf( stderr, "ARITY %s dir=%s (Nin/Nout changed)\n",
                     s->relpath, s->forward ? "forward" : "inverse" );
            total_fail++;
            map = astAnnul( map ); astEnd; continue;
        }

        /* Which output axes are angular?  The output frame for this direction
           is the current frame (forward) or base frame (inverse) of a
           FrameSet fixture.  A bare Mapping has no frame, so fall back to
           treating every axis as angular (these are coordinate mappings with
           no pixel axes to protect). */
        AstFrame *outfr = s->forward ? cur : base;
        int *is_ang = malloc( sizeof(int) * (size_t) s->nout );
        for ( int a = 0; a < s->nout; a++ )
            is_ang[a] = outfr ? axis_is_cyclic( outfr, a ) : 1;

        /* Golden check: applies uniformly to forward and inverse sections,
           unless disabled for this fixture/direction by the overrides file
           (used for sections whose recorded values sit on a mathematical
           singularity and are not architecture-stable).  The section's live
           outputs are still computed and still feed the round-trip and
           equivalence checks below. */
        char label[32];
        snprintf( label, sizeof label, "golden-%s",
                  s->forward ? "fwd" : "inv" );
        if ( golden_off( s->relpath, s->forward ) ) {
            fprintf( stderr, "SKIP [%s] %s (overrides file)\n",
                     label, s->relpath );
        } else {
            total_fail += compare_outputs( label, s->relpath, live, s->out,
                                           s->nout, s->npoint,
                                           ORACLE_DEF_RTOL, ORACLE_DEF_ATOL,
                                           is_ang );
            checked++;
        }

        /* Round-trip accuracy (GRID-domain corpora): an inverse section
           paired with the immediately preceding forward section of the same
           fixture verifies inverse(forward(P)) ~= P. */
        int grid_domain = has_ext( s->relpath, ".head" ) ||
                          has_ext( s->relpath, ".ast" );
        if ( !s->forward && grid_domain && prev_fwd &&
             strcmp( prev_fwd->relpath, s->relpath ) == 0 &&
             prev_fwd->nin == s->nout && prev_fwd->npoint == s->npoint ) {
            double rtol, atol;
            if ( rtrip_tol( s->relpath, &rtol, &atol ) )
                total_fail += compare_rtrip( map, prev_fwd, live, rtol, atol );
        }
        if ( s->forward ) prev_fwd = s;

        /* Equivalence check C: this section is a .simp forward whose stem
           matches the cached preceding .map forward. */
        int is_fwd = s->forward;
        if ( is_fwd && has_ext( s->relpath, ".simp" ) && prev_map &&
             prev_map->nout == s->nout && prev_map->npoint == s->npoint ) {
            char stem_s[1024], stem_m[1024];
            path_stem( s->relpath, stem_s, sizeof stem_s );
            path_stem( prev_map->relpath, stem_m, sizeof stem_m );
            if ( strcmp( stem_s, stem_m ) == 0 ) {
                total_fail += compare_equiv( s->relpath, prev_map_live, live,
                                             prev_map->out, s->out,
                                             s->nout, s->npoint,
                                             ORACLE_DEF_EQUIV_RTOL,
                                             ORACLE_DEF_EQUIV_ATOL, is_ang );
            }
        }

        free( is_ang );
        if ( base ) base = astAnnul( base );
        if ( cur )  cur  = astAnnul( cur );

        /* Refresh the cache on a .map forward section; otherwise free live. */
        if ( is_fwd && has_ext( s->relpath, ".map" ) ) {
            free_cols( prev_map_live, prev_map ? prev_map->nout : 0 );
            prev_map = s;
            prev_map_live = live;           /* hand ownership to the cache */
        } else {
            free_cols( live, s->nout );
        }

        map = astAnnul( map );
        astEnd;
    }
    free_cols( prev_map_live, prev_map ? prev_map->nout : 0 );
    free_sections( secs, nsec );

    printf( "check_transform_oracle: %d sections checked, %d mismatch(es)\n",
            checked, total_fail );
    return ( total_fail == 0 && astOK ) ? 0 : 1;
}
