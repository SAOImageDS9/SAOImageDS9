/*
 *  Test the MocChan class.
 *  Converted from the Fortran test testmocchan.f.
 *
 *  The Fortran version used COMMON-block source/sink callbacks with an
 *  in-memory file array. This C version uses static arrays with C-style
 *  source (returns const char *) and sink (takes const char *) callbacks.
 */
#include "ast.h"
#include <stdio.h>
#include <string.h>

#define MXLINE 500
#define LINELEN 200

static char files[MXLINE][LINELEN];
static int filelen;
static int iline;

static void stopit( const char *text, int *status ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static const char *source( void ) {
   if( iline < filelen ) {
      return files[iline++];
   }
   return NULL;
}

static void sink( const char *line ) {
   if( filelen < MXLINE && line && line[0] ) {
      strncpy( files[filelen], line, LINELEN - 1 );
      files[filelen][LINELEN - 1] = '\0';
      filelen++;
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstMoc *moc;
   AstSkyFrame *sf;
   AstRegion *reg1;
   AstMocChan *ch;
   AstObject *obj;
   double point[1], centre[2];

   astWatch( status );
   astBegin;

   /* Create a simple MOC */
   moc = astMoc( "maxorder=9" );
   astAddCell( moc, AST__OR, 7, (int64_t)1000 );
   astAddCell( moc, AST__OR, 7, (int64_t)1001 );
   astAddCell( moc, AST__OR, 7, (int64_t)1002 );
   astAddCell( moc, AST__OR, 7, (int64_t)997 );
   astAddCell( moc, AST__OR, 6, (int64_t)500 );

   /* Write MOC to channel (default STRING format) */
   ch = astMocChan( source, sink, " " );
   filelen = 0;
   if( astWrite( ch, moc ) != 1 )
      stopit( "Error 1", status );

   if( strcmp( files[0], "6/500 7/997,1000-1002 9/" ) != 0 )
      stopit( "Error 2", status );

   if( astTest( ch, "MocFormat" ) )
      stopit( "Error 3", status );

   /* Read back */
   iline = 0;
   obj = astRead( ch );
   if( !obj )
      stopit( "Error 4", status );

   if( obj && !astEqual( obj, moc ) )
      stopit( "Error 5", status );

   if( !astTest( ch, "MocFormat" ) )
      stopit( "Error 6", status );

   if( strcmp( astGetC( ch, "MocFormat" ), "STRING" ) != 0 )
      stopit( "Error 7", status );

   /* Write in JSON format */
   astSetC( ch, "MocFormat", "json" );
   filelen = 0;
   if( astWrite( ch, moc ) != 1 )
      stopit( "Error 8", status );

   if( strcmp( files[0],
              "{\"6\":[500],\"7\":[997,1000,1001,1002],\"9\":[]}" ) != 0 )
      stopit( "Error 9", status );

   /* Read back from JSON */
   astClear( ch, "MocFormat" );
   iline = 0;
   obj = astRead( ch );
   if( !obj )
      stopit( "Error 10", status );

   if( obj && !astEqual( obj, moc ) )
      stopit( "Error 11", status );

   if( strcmp( astGetC( ch, "MocFormat" ), "JSON" ) != 0 )
      stopit( "Error 12", status );

   astClear( ch, "MocFormat" );

   /* Create a MOC from a sky region (circle) */
   moc = astMoc( "maxorder=15,minorder=12" );
   sf = astSkyFrame( "system=icrs" );
   centre[0] = 1.0;
   centre[1] = 1.0;
   point[0] = 0.01;
   reg1 = (AstRegion *)astCircle( sf, 1, centre, point, NULL, " " );
   astAddRegion( moc, AST__OR, reg1 );

   /* Write and read back (STRING format) */
   filelen = 0;
   if( astWrite( ch, moc ) != 1 )
      stopit( "Error 13", status );

   iline = 0;
   obj = astRead( ch );
   if( !obj )
      stopit( "Error 14", status );

   if( obj && !astEqual( obj, moc ) )
      stopit( "Error 15", status );

   /* Write and read back (JSON format) */
   astSetC( ch, "MocFormat", "json" );

   filelen = 0;
   if( astWrite( ch, moc ) != 1 )
      stopit( "Error 16", status );

   iline = 0;
   obj = astRead( ch );
   if( !obj )
      stopit( "Error 17", status );

   if( obj && !astEqual( obj, moc ) )
      stopit( "Error 18", status );

   astEnd;

   if( *status == 0 ) {
      printf( " All MocChan tests passed\n" );
   } else {
      printf( "MocChan tests failed\n" );
   }
   return *status;
}
