/* Minimal AST YamlChan test harness.
 *
 * Reads a "wcs:" key from the given .asdf file (a resolved-inline document,
 * e.g. as produced by extract_subtree.py) via astYamlChan()'s SourceFile=
 * attribute, mirroring the pattern in ast/ast_tester/testyamlchan.c, and
 * reports whether astRead() returns a usable AstFrameSet - printing the
 * result of transforming one test point through it.
 *
 * Build (from the top-level tree, after building ast/libyaml):
 *   gcc -I include -o yamlchan_probe yamlchan_probe.c \
 *       lib/libast.a lib/libast_pal.a lib/libast_cminpack.a lib/libast_err.a \
 *       lib/libyaml.a -lm
 *
 * Usage:
 *   ./yamlchan_probe path/to/document.asdf
 */
#include "ast.h"
#include <stdio.h>

int main( int argc, char *argv[] ){
   int status_value = 0;
   int *status = &status_value;
   AstYamlChan *ch;
   AstObject *obj;
   AstFrameSet *fs;
   double xin[1], yin[1], xout[1], yout[1];

   if( argc != 2 ){
      fprintf( stderr, "usage: %s <file.asdf>\n", argv[0] );
      return 2;
   }

   astBegin;

   ch = astYamlChan( NULL, NULL, " " );
   astSet( ch, "SourceFile=%s", argv[1] );

   obj = astRead( ch );

   if( !astOK || !obj ) {
      printf( "FAIL: astRead failed (status=%d)\n", astStatus );
      astEnd;
      return 1;
   }

   fs = (AstFrameSet *) obj;
   printf( "PASS: astRead succeeded, class = %s, nframe = %d\n",
           astGetC( obj, "Class" ), astGetI( fs, "Nframe" ) );

   xin[0] = 0.3; yin[0] = -0.2;
   astTran2( fs, 1, xin, yin, 1, xout, yout );
   if( !astOK ) {
      printf( "FAIL: astTran2 reported an error (status=%d)\n", astStatus );
      astEnd;
      return 1;
   }
   printf( "PASS: astTran2(0.3,-0.2) -> (%g, %g)\n", xout[0], yout[0] );

   astEnd;
   return 0;
}

/* Unused Plot/Plot3D graphics callback stubs, needed only to satisfy the
   static linker - this probe never calls anything that invokes them. */
int astGMark( int n, const float *x, const float *y, int type ){ return 0; }
int astGCap( int cap, int value ){ return 0; }
int astG3DAttr( int a, double b, double *c, int d ){ return 0; }
int astG3DCap( int cap, int value ){ return 0; }
int astG3DFlush( void ){ return 0; }
int astG3DLine( int n, float *x, float *y, float *z ){ return 0; }
int astG3DMark( int n, float *x, float *y, float *z, int type, float sz[3] ){ return 0; }
int astG3DQch( float *c ){ return 0; }
int astG3DText( const char *t, float p[3], const char *j, float u[3], float v[3] ){ return 0; }
int astG3DTxExt( const char *t, float p[3], const char *j, float u[3], float v[3], float *a, float *b, float *c, float d[3] ){ return 0; }
int astGAttr( int a, double b, double *c, int d ){ return 0; }
int astGScales( float *a, float *b ){ return 0; }
int astGBBuf( void ){ return 0; }
int astGEBuf( void ){ return 0; }
int astGFlush( void ){ return 0; }
int astGLine( int n, const float *x, const float *y ){ return 0; }
int astGQch( float *a, float *b ){ return 0; }
int astGText( const char *t, float x, float y, const char *j, float u, float v ){ return 0; }
int astGTxExt( const char *t, float x, float y, const char *j, float u, float v, float *a, float *b ){ return 0; }
