/*
 * gen_frameset_fixtures.c
 *
 * Writes fixtures/wcsconv/framesets/, one native dump per distinct input named
 * by fixtures/wcsconv/cases.txt: the object that reading that input yields.
 *
 * This is the corpus that pins Native serialisation of FITS-derived FrameSets.
 * The simplify fixtures cannot cover it -- they hold only objects that came out
 * of astSimplify -- and serialisation/ cannot, because it holds objects built
 * through the public API rather than parsed from a header.  A regression in how
 * a SkyFrame or SpecFrame recovered from a FITS header is written out would show
 * up in neither.
 *
 * One fixture per *input*, not per case: several cases read the same input and
 * differ only in the encoding they write, and the parsed object does not depend
 * on that.  The first row naming an input supplies the attributes used to read
 * it, because those do affect the parse -- SipReplace and CDMatrix among them.
 *
 * The output name is the input's filename with each "." replaced by "-", plus
 * ".ast", so wcsconv/inputs/sip.head becomes framesets/sip-head.ast.  That keeps
 * inputs that differ only in extension apart.
 *
 * Build:
 *   cmake --build build --target gen_frameset_fixtures
 * Run (from the repository root):
 *   ./build/ast_tester/gen_frameset_fixtures ast_tester/fixtures
 */

#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Strip leading and trailing blanks in place, returning the start. */
static char *trim( char *s ) {
    char *end;
    while( *s == ' ' || *s == '\t' ) s++;
    end = s + strlen( s );
    while( end > s && ( end[ -1 ] == ' ' || end[ -1 ] == '\t' ||
                        end[ -1 ] == '\n' || end[ -1 ] == '\r' ) ) {
        *(--end) = 0;
    }
    return s;
}

/* Read a FITS header into a FitsChan and return the object it yields.  The
   attribute string is applied before the read, exactly as wcsconverter.c's AST
   branch does, so a read-affecting attribute has the same effect here. */
static AstObject *read_header( const char *path, const char *attrs ) {
    AstFitsChan *fc;
    AstObject *obj;
    char card[ 81 ];
    char line[ 300 ];
    FILE *fp;

    fp = fopen( path, "r" );
    if( !fp ) {
        fprintf( stderr, "gen_frameset_fixtures: cannot open %s\n", path );
        return NULL;
    }

    fc = astFitsChan( NULL, NULL, "%s", attrs );
    while( fgets( line, sizeof line, fp ) ) {
        size_t n = strlen( line );
        while( n > 0 && ( line[ n - 1 ] == '\n' || line[ n - 1 ] == '\r' ) ) {
            line[ --n ] = 0;
        }
        memset( card, ' ', 80 );
        card[ 80 ] = 0;
        memcpy( card, line, n < 80 ? n : 80 );
        astPutFits( fc, card, 0 );
    }
    fclose( fp );

    astClear( fc, "Card" );
    obj = astRead( fc );
    fc = astAnnul( fc );
    return obj;
}

/* Read a native dump through a Channel. */
static AstObject *read_native( const char *path ) {
    AstChannel *ch = astChannel( NULL, NULL, "SourceFile=%s", path );
    AstObject *obj = astRead( ch );
    ch = astAnnul( ch );
    return obj;
}

int main( int argc, char *argv[] ) {
    char *seen[ 4096 ];
    char manifest_path[ 1024 ];
    char line[ 2048 ];
    const char *root;
    FILE *manifest;
    int nseen = 0;
    int nwritten = 0;
    int status = 0;

    if( argc != 2 ) {
        fprintf( stderr, "usage: gen_frameset_fixtures <fixture root>\n" );
        return 2;
    }
    root = argv[ 1 ];

    astWatch( &status );
    astBegin;

    snprintf( manifest_path, sizeof manifest_path, "%s/wcsconv/cases.txt",
              root );
    manifest = fopen( manifest_path, "r" );
    if( !manifest ) {
        fprintf( stderr, "gen_frameset_fixtures: cannot open %s\n",
                 manifest_path );
        return 1;
    }

    while( fgets( line, sizeof line, manifest ) ) {
        char *attrs;
        char *fields[ 6 ];
        char *input;
        char *p;
        char in_path[ 1024 ];
        char out_path[ 1024 ];
        char out_name[ 512 ];
        AstChannel *out;
        AstObject *obj;
        int i;
        int nfield = 0;

        p = trim( line );
        if( *p == '#' || *p == 0 ) continue;

        /* Split on "|" into at most six fields. */
        fields[ nfield++ ] = p;
        while( nfield < 6 && ( p = strchr( p, '|' ) ) ) {
            *p++ = 0;
            fields[ nfield++ ] = p;
        }
        if( nfield < 2 ) continue;

        input = trim( fields[ 1 ] );
        attrs = ( nfield >= 5 ) ? trim( fields[ 4 ] ) : (char *) "";
        if( !*input ) continue;

        /* One fixture per input; the first row naming it wins. */
        for( i = 0; i < nseen; i++ ) {
            if( !strcmp( seen[ i ], input ) ) break;
        }
        if( i < nseen ) continue;
        if( nseen == (int) ( sizeof seen / sizeof *seen ) ) {
            fprintf( stderr, "gen_frameset_fixtures: too many inputs\n" );
            return 1;
        }
        seen[ nseen++ ] = strdup( input );

        snprintf( in_path, sizeof in_path, "%s/%s", root, input );

        /* Fixture name: the input's filename with "." replaced by "-". */
        p = strrchr( input, '/' );
        snprintf( out_name, sizeof out_name, "%s", p ? p + 1 : input );
        for( p = out_name; *p; p++ ) {
            if( *p == '.' ) *p = '-';
        }

        if( strlen( input ) > 4 &&
            !strcmp( input + strlen( input ) - 4, ".ast" ) ) {
            obj = read_native( in_path );
        } else {
            obj = read_header( in_path, *attrs ? attrs : " " );
        }
        if( !obj ) {
            fprintf( stderr, "gen_frameset_fixtures: nothing read from %s\n",
                     input );
            continue;
        }

        snprintf( out_path, sizeof out_path, "%s/wcsconv/framesets/%s.ast",
                  root, out_name );
        out = astChannel( NULL, NULL, "SinkFile=%s,Comment=1", out_path );
        if( astWrite( out, obj ) != 1 ) {
            fprintf( stderr, "gen_frameset_fixtures: astWrite failed for %s\n",
                     out_name );
        } else {
            nwritten++;
        }
        out = astAnnul( out );
        obj = astAnnul( obj );
    }
    fclose( manifest );

    for( int i = 0; i < nseen; i++ ) free( seen[ i ] );

    astEnd;
    printf( "Wrote %d FrameSet fixtures.\n", nwritten );
    return status != 0;
}
