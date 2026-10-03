/*
 *  Test the XmlChan class.
 *  Converted from the Fortran test testxmlchan.f.
 *
 *  The Fortran version used COMMON-block source/sink callbacks with a
 *  3-file in-memory array. This C version uses static arrays with C-style
 *  callbacks. The test writes an object via Channel, then via XmlChan
 *  (native and quoted formats), reads back from XmlChan, writes via
 *  Channel again, and compares the two Channel outputs line-by-line.
 */
#include "ast.h"
#include <stdio.h>
#include <string.h>

#define MXLINE 500
#define LINELEN 500
#define NFILES 3

static char files[NFILES][MXLINE][LINELEN];
static int file_len[NFILES];
static int cur_file;
static int cur_line;

static const char *source( void ) {
   if( cur_line < file_len[cur_file] ) {
      return files[cur_file][cur_line++];
   }
   return NULL;
}

static void sink( const char *line ) {
   if( line && line[0] && file_len[cur_file] < MXLINE ) {
      strncpy( files[cur_file][file_len[cur_file]], line, LINELEN - 1 );
      files[cur_file][file_len[cur_file]][LINELEN - 1] = '\0';
      file_len[cur_file]++;
   }
}

/* Write object to file ifil using a basic Channel */
static void chanwrite( AstObject *obj, int ifil, int *status ) {
   AstChannel *ch;
   if( *status != 0 ) return;
   cur_file = ifil;
   file_len[ifil] = 0;
   ch = astChannel( NULL, sink, " " );
   if( astWrite( ch, obj ) != 1 ) {
      printf( "Failed to write object to Channel\n" );
      *status = 1;
   }
   astAnnul( ch );
}

/* Write object to file ifil using an XmlChan with given format */
static void xmlwrite( AstObject *obj, int ifil, const char *fmt, int *status ) {
   AstXmlChan *ch;
   if( *status != 0 ) return;
   cur_file = ifil;
   file_len[ifil] = 0;
   ch = astXmlChan( NULL, sink, "indent=1,comment=1" );
   astSetI( ch, "XmlLength", LINELEN );
   astSetC( ch, "XmlFormat", fmt );
   if( astWrite( ch, obj ) != 1 ) {
      printf( "Failed to write object to XmlChan\n" );
      *status = 1;
   }
   astAnnul( ch );
}

/* Read object from file ifil using an XmlChan */
static AstObject *xmlread( int ifil, int *status ) {
   AstXmlChan *ch;
   AstObject *obj;
   if( *status != 0 ) return NULL;
   cur_file = ifil;
   cur_line = 0;
   ch = astXmlChan( source, NULL, " " );
   obj = astRead( ch );
   if( !obj ) {
      printf( "Failed to read object from XmlChan\n" );
      *status = 1;
   }
   astAnnul( ch );
   return obj;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int ifmt, i, ok;
   const char *fmts[2] = { "native", "quoted" };
   AstSkyFrame *sf;
   AstFrame *f;
   AstMapping *m;
   AstFrameSet *fs;
   AstObject *obj, *obj2;

   astWatch( status );
   astBegin;

   /* Create the test object: a FrameSet with a SkyFrame */
   sf = astSkyFrame( " " );
   f = astFrame( 2, " " );
   astSetC( f, "Title", "A new title" );
   m = (AstMapping *)astUnitMap( 2, " " );
   fs = astFrameSet( f, " " );
   astAddFrame( fs, 1, m, sf );
   obj = (AstObject *)fs;

   /* Write object to file 0 via Channel */
   chanwrite( obj, 0, status );

   /* Test each XML format */
   ok = 1;
   for( ifmt = 0; ifmt < 2 && ok; ifmt++ ) {

      /* Write to file 1 via XmlChan */
      xmlwrite( obj, 1, fmts[ifmt], status );

      /* Read back from file 1 */
      obj2 = xmlread( 1, status );

      /* Write to file 2 via Channel */
      if( obj2 ) chanwrite( obj2, 2, status );

      /* Compare files 0 and 2 */
      if( file_len[0] != file_len[2] ) {
         printf( "Files 0 and 2 have different lengths (%d, %d)\n",
                 file_len[0], file_len[2] );
         ok = 0;
      } else {
         for( i = 0; i < file_len[0]; i++ ) {
            if( strcmp( files[0][i], files[2][i] ) != 0 ) {
               printf( "Line %d differs:\n  '%s'\n  '%s'\n",
                       i + 1, files[0][i], files[2][i] );
               ok = 0;
               break;
            }
         }
      }

      if( !ok ) {
         printf( "Test failed on XmlFormat '%s'\n", fmts[ifmt] );
      }
   }

   astEnd;

   if( ok && *status == 0 ) {
      printf( " All XmlChan tests passed\n" );
   } else {
      printf( "XmlChan tests failed\n" );
   }
   return ok ? *status : 1;
}
