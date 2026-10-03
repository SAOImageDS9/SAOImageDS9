/*
 * gen_native_fixtures.c
 *
 * Writes one minimal native dump per Mapping / Frame / FrameSet class into
 * fixtures/serialisation/, so the serialiser is pinned for a *bare* object of
 * each class: its attribute set, its defaults, its comment text and its IsA
 * boundaries.  Neither of the other corpora can cover that.  The simplify
 * fixtures hold only objects that came out of astSimplify, and
 * wcsconv/framesets/ holds only FrameSets read from FITS headers, so a class
 * whose plain dump regresses would show up in neither.
 *
 * This program writes 19 of the files in fixtures/serialisation/.  The rest of
 * that directory is committed data captured elsewhere: degen1.ast, lsst.ast and
 * timj.ast are the round-tripped forms of the same-named wcsconv inputs (which
 * carry hand-written headers and predate several dump changes, so they are not
 * fixed points themselves); c_dssmap.ast and c_variants.ast come from the Rust
 * port's DssMap and FrameSet-variant probes; jan-dsb.ast is a DSBSpecFrame
 * capture; and frame_in_map_slot.ast and region_in_cmpframe.ast are the two
 * probes for the Frame-in-a-Mapping-slot question, the first of which this
 * library reads and the Rust port deliberately refuses.
 *
 * Build:
 *   cmake --build build --target gen_native_fixtures
 * Run (from the repository root):
 *   ./build/ast_tester/gen_native_fixtures
 */

#include "ast.h"

#include <stdio.h>

static void write_object( const char *dir, const char *name, AstObject *obj ) {
    char path[ 512 ];
    AstChannel *chan;

    snprintf( path, sizeof path, "%s/%s.ast", dir, name );
    chan = astChannel( NULL, NULL, "SinkFile=%s", path );
    if( astWrite( chan, obj ) != 1 ) {
        fprintf( stderr, "ERROR: astWrite failed for %s.ast\n", name );
    }
    chan = astAnnul( chan );
    printf( "  %s\n", name );
}

static void gen_mapping_fixtures( const char *dir ) {
    printf( "Mapping fixtures:\n" );

    {
        AstZoomMap *m = astZoomMap( 2, 3.5, " " );
        write_object( dir, "zoommap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        AstUnitMap *m = astUnitMap( 3, " " );
        write_object( dir, "unitmap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        double shift[ 2 ] = { 1.5, -2.7 };
        AstShiftMap *m = astShiftMap( 2, shift, " " );
        write_object( dir, "shiftmap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        /* Scale 20 and shift 10 on axis 1, scale 40 and shift 20 on axis 2. */
        double ina[ 2 ]  = { 0.0, 0.0 };
        double inb[ 2 ]  = { 1.0, 1.0 };
        double outa[ 2 ] = { 10.0, 20.0 };
        double outb[ 2 ] = { 30.0, 60.0 };
        AstWinMap *m = astWinMap( 2, ina, inb, outa, outb, " " );
        write_object( dir, "winmap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        /* A 30-degree rotation, stored in full form. */
        double matrix[ 4 ] = { 0.8660254037844386, -0.5,
                               0.5,                 0.8660254037844386 };
        AstMatrixMap *m = astMatrixMap( 2, 2, 0, matrix, " " );
        write_object( dir, "matrixmap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        double diag[ 2 ] = { 2.0, 3.0 };
        AstMatrixMap *m = astMatrixMap( 2, 2, 1, diag, " " );
        write_object( dir, "matrixmap_diagonal", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        int inperm[ 2 ]  = { 2, 1 };
        int outperm[ 2 ] = { 2, 1 };
        AstPermMap *m = astPermMap( 2, inperm, 2, outperm, NULL, " " );
        write_object( dir, "permmap", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        /* Output 3 takes constant number 1 rather than an input. */
        int inperm[ 2 ]  = { 1, 2 };
        int outperm[ 3 ] = { 1, 2, -1 };
        double constant[ 1 ] = { 99.0 };
        AstPermMap *m = astPermMap( 2, inperm, 3, outperm, constant, " " );
        write_object( dir, "permmap_constant", (AstObject *) m );
        m = astAnnul( m );
    }
    {
        double shift[ 2 ] = { 5.0, -3.0 };
        AstZoomMap *z = astZoomMap( 2, 2.0, " " );
        AstShiftMap *s = astShiftMap( 2, shift, " " );
        AstCmpMap *m = astCmpMap( z, s, 1, " " );
        write_object( dir, "cmpmap_series", (AstObject *) m );
        m = astAnnul( m );
        s = astAnnul( s );
        z = astAnnul( z );
    }
    {
        double shift[ 1 ] = { 5.0 };
        AstZoomMap *z = astZoomMap( 1, 2.0, " " );
        AstShiftMap *s = astShiftMap( 1, shift, " " );
        AstCmpMap *m = astCmpMap( z, s, 0, " " );
        write_object( dir, "cmpmap_parallel", (AstObject *) m );
        m = astAnnul( m );
        s = astAnnul( s );
        z = astAnnul( z );
    }
}

static void gen_frame_fixtures( const char *dir ) {
    printf( "Frame fixtures:\n" );

    {
        AstFrame *f = astFrame( 2, "Title=Pixel Coordinates,Domain=PIXEL,"
                                   "Label(1)=Column,Label(2)=Row,"
                                   "Unit(1)=pixel,Unit(2)=pixel" );
        write_object( dir, "basicframe", (AstObject *) f );
        f = astAnnul( f );
    }
    {
        AstSkyFrame *f = astSkyFrame( "System=FK5,Epoch=2000,Equinox=2000" );
        write_object( dir, "skyframe", (AstObject *) f );
        f = astAnnul( f );
    }
    {
        AstSkyFrame *f = astSkyFrame( "System=GALACTIC" );
        write_object( dir, "skyframe_galactic", (AstObject *) f );
        f = astAnnul( f );
    }
    {
        AstSpecFrame *f = astSpecFrame( "System=FREQ,Unit=GHz,"
                                        "StdOfRest=Heliocentric" );
        write_object( dir, "specframe", (AstObject *) f );
        f = astAnnul( f );
    }
    {
        AstTimeFrame *f = astTimeFrame( "System=MJD,TimeScale=UTC" );
        write_object( dir, "timeframe", (AstObject *) f );
        f = astAnnul( f );
    }
    {
        AstSkyFrame *sky = astSkyFrame( "System=FK5" );
        AstSpecFrame *spec = astSpecFrame( "System=FREQ,Unit=GHz" );
        AstCmpFrame *f = astCmpFrame( sky, spec, " " );
        write_object( dir, "cmpframe", (AstObject *) f );
        f = astAnnul( f );
        spec = astAnnul( spec );
        sky = astAnnul( sky );
    }
}

static void gen_frameset_fixtures( const char *dir ) {
    printf( "FrameSet fixtures:\n" );

    {
        /* GRID pixels to FK5, one degree per 3600 pixels. */
        AstFrame *grid = astFrame( 2, "Title=Pixel,Domain=GRID" );
        AstSkyFrame *sky = astSkyFrame( "System=FK5,Equinox=2000" );
        AstZoomMap *z = astZoomMap( 2, 1.0 / 3600.0, " " );
        AstFrameSet *fs = astFrameSet( grid, " " );
        astAddFrame( fs, AST__BASE, z, sky );
        write_object( dir, "frameset_simple", (AstObject *) fs );
        fs = astAnnul( fs );
        z = astAnnul( z );
        sky = astAnnul( sky );
        grid = astAnnul( grid );
    }
    {
        /* GRID -> PIXEL -> FK5, so the set has an intermediate Frame. */
        double halfpix[ 2 ] = { -0.5, -0.5 };
        AstFrame *grid = astFrame( 2, "Title=Grid,Domain=GRID" );
        AstFrame *pixel = astFrame( 2, "Title=Pixel,Domain=PIXEL" );
        AstSkyFrame *sky = astSkyFrame( "System=FK5,Equinox=2000" );
        AstShiftMap *s = astShiftMap( 2, halfpix, " " );
        AstZoomMap *z = astZoomMap( 2, 1.0 / 3600.0, " " );
        AstFrameSet *fs = astFrameSet( grid, " " );
        astAddFrame( fs, AST__BASE, s, pixel );
        astAddFrame( fs, AST__CURRENT, z, sky );
        write_object( dir, "frameset_3frame", (AstObject *) fs );
        fs = astAnnul( fs );
        z = astAnnul( z );
        s = astAnnul( s );
        sky = astAnnul( sky );
        pixel = astAnnul( pixel );
        grid = astAnnul( grid );
    }
    {
        /* A 3-d GRID Frame to a sky-plus-spectrum CmpFrame. */
        double diag[ 3 ] = { 0.001, 0.001, 1.0e9 };
        AstFrame *grid = astFrame( 3, "Domain=GRID" );
        AstSkyFrame *sky = astSkyFrame( "System=FK5" );
        AstSpecFrame *spec = astSpecFrame( "System=FREQ,Unit=GHz" );
        AstCmpFrame *cmp = astCmpFrame( sky, spec, " " );
        AstMatrixMap *m = astMatrixMap( 3, 3, 1, diag, " " );
        AstFrameSet *fs = astFrameSet( grid, " " );
        astAddFrame( fs, AST__BASE, m, cmp );
        write_object( dir, "frameset_skyspec", (AstObject *) fs );
        fs = astAnnul( fs );
        m = astAnnul( m );
        cmp = astAnnul( cmp );
        spec = astAnnul( spec );
        sky = astAnnul( sky );
        grid = astAnnul( grid );
    }
}

int main( void ) {
    int status = 0;
    const char *dir = "ast_tester/fixtures/serialisation";

    astWatch( &status );
    astBegin;

    gen_mapping_fixtures( dir );
    gen_frame_fixtures( dir );
    gen_frameset_fixtures( dir );

    astEnd;

    if( status != 0 ) {
        fprintf( stderr, "gen_native_fixtures: failed\n" );
        return 1;
    }
    printf( "All fixtures generated successfully.\n" );
    return 0;
}
