/*
 *  wcsconverter: read a WCS FrameSet from an input file and write it out
 *  in a specified encoding.  Ported from ast_tester/wcsconverter.f.
 *
 *  Usage:
 *     wcsconverter <in file> <encoding> <out file> [<attrs>]
 *
 *  Reads a FrameSet from "in file" (as FITS headers if possible,
 *  otherwise as an AST dump), and writes the FrameSet to "out file"
 *  using the specified encoding.
 *
 *  Parameters:
 *     in file   A text file containing FITS headers or an AST dump of a
 *               FrameSet.
 *     encoding  A FITS encoding name (e.g. "fits-wcs", "native", "dss",
 *               "fits-iraf", "fits-aips", "fits-pc"), or "ast".
 *     out file  The output file.  An AST dump if encoding is "ast",
 *               otherwise a sequence of 80-character FITS cards.
 *     attrs     Optional attribute settings applied to the input FitsChan
 *               before reading the headers (e.g. "cdmatrix=1,FitsDigits=8").
 *
 *  Differences from the Fortran original:
 *
 *  - err_mark / err_rlse / err_annul are omitted; errors are handled
 *    with astWatch(&status) + astOK + astClearStatus.
 *
 *  - The Fortran ObjectCaching diagnostic prints (which only fire when
 *    the default value is unexpected) are dropped.  astTune is still
 *    called silently so memory behaviour matches the Fortran original.
 *
 *  - The SOURCE and SINK Fortran subroutines that shuttled lines through
 *    UNIT=10 are replaced by astChannel's SourceFile / SinkFile
 *    attributes; no callback plumbing is needed.  FITS-card output still
 *    uses fopen/fprintf driven by an astFindFits("%f", ...) loop because
 *    astFindFits is the natural iterator for card-by-card output.
 *
 *  - Fortran DELETEFILE subroutine replaced by unlink(3).
 *
 *  - CHR_LEN is replaced by strlen.
 *
 *  - Exit code is non-zero on usage error (Fortran silently RETURNs) so
 *    ctest can distinguish success from "no args supplied".
 *
 *  - Both "AST" and "ast" encoding strings are accepted, matching the
 *    Fortran behaviour via strcasecmp.
 */

#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

int main( int argc, char *argv[] ) {
   int status_value = 0;
   int *status = &status_value;

   AstFitsChan *fc = NULL;
   AstChannel *chan = NULL;
   AstObject *object = NULL;
   FILE *fp = NULL;
   char line[256];

   if( argc < 4 ) {
      fprintf( stderr,
               "Usage: wcsconverter <in file> <encoding> <out file> "
               "[<attrs>]\n" );
      return 1;
   }

   const char *in_file   = argv[1];
   const char *encoding  = argv[2];
   const char *out_file  = argv[3];
   const char *attrs     = ( argc >= 5 ) ? argv[4] : " ";

   astWatch( status );

   /* Use object caching to minimise allocation of new memory.  We do not
    * echo the previous value (the Fortran only printed it if it was
    * non-default; that would be stdout noise in ctest logs). */
   astTune( "ObjectCaching", 1 );

   /* Create a FitsChan and apply any attribute settings. */
   fc = astFitsChan( NULL, NULL, " " );
   if( argc >= 5 ) astSet( fc, "%s", attrs );

   /* Read each line out of the text file and store it in the FitsChan. */
   fp = fopen( in_file, "r" );
   if( !fp ) {
      fprintf( stderr, "wcsconverter: cannot open input file '%s'\n",
               in_file );
      return 1;
   }
   while( fgets( line, (int) sizeof( line ), fp ) ) {
      size_t n = strlen( line );
      while( n > 0 && ( line[n-1] == '\n' || line[n-1] == '\r' ) ) {
         line[--n] = '\0';
      }
      astPutFits( fc, line, 0 );
   }
   fclose( fp );

   /* Set the value of CDMatrix, unless it has already been set. */
   if( !astTest( fc, "CDMATRIX" ) ) {
      int cdm = astGetI( fc, "CDMATRIX" );
      astSetI( fc, "CDMATRIX", cdm );
   }

   /* Attempt to read an Object from the FitsChan. */
   astClear( fc, "CARD" );
   object = astRead( fc );

   if( !astOK ) astClearStatus;

   /* If no object was read, attempt to read an object from the text file
    * as an AST dump via an astChannel with SourceFile set. */
   if( !object ) {
      astAnnul( fc );
      fc = NULL;
      chan = astChannel( NULL, NULL, "SourceFile=%s", in_file );
      object = astRead( chan );
      astAnnul( chan );
   }

   /* Abort if no object was read. */
   if( !object ) {
      fprintf( stderr, "wcsconverter: no WCS could be read from %s\n",
               in_file );
      return 1;
   }

   /* Delete any pre-existing output file. */
   unlink( out_file );

   /* Otherwise write out the object using the specified encoding. */
   if( strcasecmp( encoding, "AST" ) == 0 ) {

      chan = astChannel( NULL, NULL, "SinkFile=%s", out_file );
      if( astWrite( chan, object ) != 1 ) {
         fprintf( stderr,
                  "wcsconverter: WCS read from %s could not be converted "
                  "to %s format.\n", in_file, encoding );
      }
      astAnnul( chan );

   } else {

      if( !fc ) fc = astFitsChan( NULL, NULL, "%s", attrs );
      astSetC( fc, "ENCODING", encoding );
      astClear( fc, "CARD" );

      if( astWrite( fc, object ) != 1 ) {
         fprintf( stderr,
                  "wcsconverter: WCS read from %s could not be converted "
                  "to %s format.\n", in_file, encoding );
      } else {
         fp = fopen( out_file, "w" );
         if( !fp ) {
            fprintf( stderr,
                     "wcsconverter: cannot open output file '%s'\n",
                     out_file );
            astAnnul( fc );
            astAnnul( object );
            return 1;
         }
         astClear( fc, "CARD" );
         while( astFindFits( fc, "%f", line, 1 ) ) {
            /* astFindFits returns a NUL-terminated 80-character card.
             * Write exactly 80 chars per line to match the Fortran
             * "A80" output. */
            fprintf( fp, "%-80.80s\n", line );
         }
         fclose( fp );
      }

      astAnnul( fc );
   }

   astAnnul( object );

   return astOK ? 0 : 1;
}
