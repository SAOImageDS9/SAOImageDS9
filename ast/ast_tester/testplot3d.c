/*
*  Name:
*     testplot3d.c
*
*  Purpose:
*     Test the Plot3D class and the grf3d PLplot implementation.
*
*  Description:
*     C port of testplot3d.f. The original Fortran test used PGPLOT
*     via grf3d_pgplot.c. This version uses PLplot via grf3d_plplot.c.
*
*     The test creates a Plot3D and performs a checkdump round-trip
*     serialization test, then loads a FrameSet from plot3d-test1.ast
*     and draws a 3D coordinate grid to the specified output file
*     (or interactive device).
*
*     Unlike the original Fortran version, this does not include the
*     interactive explore() routine. Instead it produces a static
*     rendering for visual verification.
*
*  Usage:
*     testplot3d [output]
*
*     output is optional. It can be:
*     - A file ending in ".pdf": generates a PDF file (pdfcairo).
*     - A file ending in ".png": generates a PNG file (pngcairo).
*     - A file ending in ".svg": generates an SVG file (svgcairo).
*     - "aqt", "xwin", "xcairo", "qtwidget": interactive window.
*     - Any other name: PostScript (psc device).
*     - Omitted: defaults to "testplot3d.pdf".
*
*  Differences from Fortran original:
*     - Uses public C API (ast.h) only.
*     - Uses astWatch(&status) + astOK for error checking.
*     - Uses astToString/astFromString for checkdump round-trips.
*     - PLplot replaces PGPLOT. PL3D* replaces PG3D*.
*     - No interactive explore() subroutine.
*     - File-based channel replaces Fortran OPEN/READ.
*/

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <plplot.h>
#include "ast.h"
#include "ast_err.h"
#include "pl3d.h"
#include "plplotutil.h"

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/* checkdump: serialization round-trip test using astToString/astFromString */
static AstObject *checkDump( AstObject *obj, const char *text, int *status ) {
   char *pickle;
   char *pickle2;
   AstObject *result;

   if( *status != 0 ) return NULL;

   pickle = astToString( obj );
   if( !pickle ) {
      printf( "%s\n", text );
      stopit( status, "checkDump: cannot write object" );
      return NULL;
   }

   result = astFromString( pickle );
   if( !result ) {
      pickle = astFree( pickle );
      printf( "%s\n", text );
      stopit( status, "checkDump: cannot read object" );
      return NULL;
   }

   /* Re-serialize the round-tripped object and compare */
   pickle2 = astToString( result );
   if( !pickle2 ) {
      pickle = astFree( pickle );
      printf( "%s\n", text );
      stopit( status, "checkDump: cannot re-write object" );
      astAnnul( result );
      return NULL;
   }

   if( strcmp( pickle, pickle2 ) != 0 ) {
      printf( "%s\n", text );
      stopit( status, "checkDump: object has changed after round-trip" );
      astAnnul( result );
      result = NULL;
   }

   pickle = astFree( pickle );
   pickle2 = astFree( pickle2 );

   return result;
}

/* Read an AST object from a text file by reading the whole file into
   a string and passing it to astFromString. */
static AstObject *readTest( const char *name, int *status ) {
   AstObject *result = NULL;
   FILE *fp;
   char buffer[201];
   char *bigbuf = NULL;
   size_t total = 0;
   size_t cap = 0;

   if( *status != 0 ) return NULL;

   fp = fopen( name, "r" );
   if( !fp ) {
      printf( "Cannot open file: %s\n", name );
      stopit( status, "readTest: file open failed" );
      return NULL;
   }

   while( fgets( buffer, sizeof(buffer), fp ) != NULL ) {
      size_t len = strlen( buffer );
      if( total + len + 1 > cap ) {
         cap = (total + len + 1) * 2;
         bigbuf = realloc( bigbuf, cap );
      }
      memcpy( bigbuf + total, buffer, len );
      total += len;
   }
   fclose( fp );

   if( bigbuf ) {
      bigbuf[total] = '\0';
      result = astFromString( bigbuf );
      free( bigbuf );
   }

   if( !result ) {
      printf( "Cannot read AST object from file: %s\n", name );
      stopit( status, "readTest: ast read failed" );
   }

   return result;
}


int main( int argc, char **argv ) {
   int status = 0;
   AstPlot3D *plot3d;
   AstObject *obj;
   AstObject *fset;
   float lbnd[3], ubnd[3];
   float gbox[6];
   double bbox[6];
   const char *output;

   astWatch( &status );
   astBegin;

   /* Set the 3D world coordinate bounds */
   lbnd[0] = -1.0;  lbnd[1] = -1.0;  lbnd[2] = -1.0;
   ubnd[0] =  1.0;  ubnd[1] =  1.0;  ubnd[2] =  1.0;

   /* Get output file from arguments, or use default */
   if( argc > 1 ) {
      output = argv[1];
   } else {
      output = "testplot3d.pdf";
   }

   /* Initialize PLplot */
   (void)astPlSetupDevice( output );
   c_plinit();

   /* Set up viewport and window. Use a viewport with small margins to
      leave room for labels that extend beyond the 3D bounding volume.
      c_plenv leaves too-large margins and its viewport clips 3D content;
      a full-page viewport (0,1,0,1) pushes labels off the page edge. */
   c_pladv( 0 );
   c_plvpor( 0.08, 0.92, 0.08, 0.92 );
   c_plwind( 0.0, 1.0, 0.0, 1.0 );

   /* Set up the camera for this 3D bounding box */
   if( !PL3DAutoCamera( lbnd, ubnd ) ) {
      printf( "PL3DAutoCamera failed\n" );
      c_plend();
      return 1;
   }

   gbox[0] = lbnd[0];  gbox[1] = lbnd[1];  gbox[2] = lbnd[2];
   gbox[3] = ubnd[0];  gbox[4] = ubnd[1];  gbox[5] = ubnd[2];

   bbox[0] = -1.0;  bbox[1] = -1.0;  bbox[2] = -1.0;
   bbox[3] =  1.0;  bbox[4] =  1.0;  bbox[5] =  1.0;

   /* === Test 1: CheckDump of a basic Plot3D === */
   plot3d = astPlot3D( AST__NULL, gbox, bbox, "minticklen=0" );
   obj = checkDump( (AstObject *)plot3d, "CheckDump test 1", &status );
   if( obj ) astAnnul( obj );
   astAnnul( plot3d );

   /* === Test 2: Load a FrameSet and draw a 3D grid === */
   const char *srcdir = getenv( "srcdir" );
   char path[PATH_MAX];
   if( !srcdir ) srcdir = ".";
   snprintf( path, sizeof(path),
             "%s/fixtures/programs/testplot3d/plot3d-test1.ast", srcdir );
   fset = readTest( path, &status );

   if( fset && status == 0 ) {
      bbox[0] = 0.5;    bbox[1] = 0.5;    bbox[2] = 0.5;
      bbox[3] = 155.5;  bbox[4] = 107.5;  bbox[5] = 1640.5;

      plot3d = astPlot3D( fset, gbox, bbox, " " );

      /* Adjust camera view for better visualization */
      {
         float eye[3] = { -3.0, 4.0, 3.0 };
         float up[3] = { 0.0, -0.03, 1.0 };
         PL3DSetEye( eye );
         PL3DSetUp( up );
      }

      /* Draw the 3D coordinate grid */
      astGrid( plot3d );

      if( !astOK ) {
         printf( "astGrid reported an error\n" );
      }

      astAnnul( plot3d );
      astAnnul( fset );
   }

   c_plend();
   astEnd;

   astActiveMemory( "testplot3d" );
   astFlushMemory( 1 );

   if( status == 0 ) {
      printf( "All Plot3D tests passed\n" );
   } else {
      printf( "Plot3D tests failed\n" );
   }

   return status;
}
