/*
*  Name:
*     plplotutil.c
*
*  Purpose:
*     Common utilities for configuring tests that use PLplot.
*
*  Description:
*     The main interface exported by this module is astPlDeviceSetup( output ).
*     This encapuslates the logic for selecting the best availble PLplot
*     output device either for interactive plotting or for a given filename
*     extension.
*
*  Usage:
*     Call astPlDeviceSetup( output ) before calling c_plinit()
*
*     Output is optional. It can be:
*     - A file ending in ".pdf": generates a PDF file (pdfcairo with fallback
*       to the generic pdf device, or psc).
*     - A file ending in ".png": generates a PNG file (pngcairo with fallback
*       to the generic png device).
*     - A file ending in ".svg": generates an SVG file (svgcairo with fallback
*       to the generic svg device).
*     - "aqt", "xwin", "xcairo", "qtwidget": interactive window.
*     - Any other name: PostScript (psc device).
*     - If all else fails outputs to the "null" device.
*     - Omitted: defaults to "testplot3d.pdf".
*/


#include <stdio.h>
#include <string.h>
#include <plplot.h>

#include "ast.h"


/* Maximum number of PLplot devices to support; 64 is more than enough */
#define AST_PLPLOT_MAX_DEV 64


/* Globals for selecting the best plplot device based on availability */
static const char *pl_devnames[AST_PLPLOT_MAX_DEV] = {0};

/* Number of available plplot devices
 *
 * Defaults to 64 which sets the max allowed to probe with plgDevs();
 * this in turn sets the actual number of devices found */
static int pl_ndev = AST_PLPLOT_MAX_DEV;


/* Initialize global array of available plplot devices */
static void astPlInitDeviceList( void ) {
   const char **menustr;
   const char **devnames = pl_devnames;

   if (devnames[0]) /* Should have at least one entry */
      return;

   menustr = astMalloc( pl_ndev * sizeof(*menustr) );

   if ( !menustr )
      return;

   /* Not-well advertised but available API for probing supported devices */
   plgDevs( &menustr, &devnames, &pl_ndev );
   astFree( menustr );
}


/* Probe available device list for support */
static int astPlDeviceAvailable( const char *dev ) {
   int idx;

   astPlInitDeviceList();

   for (idx = 0; idx < pl_ndev; idx++) {
      if ( strcmp( pl_devnames[idx], dev ) == 0 )
         return 1;
   }

   return 0;
}


/* Depending on the output filename choose the best available plplot device */
static const char *astPlChooseDeviceForExtension( const char *ext ) {
   int idx;

   if ( !ext )
      return "psc";

   if ( strcmp( ext, ".pdf" ) == 0 ) {
      const char *candidates[] = {
         "pdfcairo", // best
         "pdf",      // generic but widely supported
         "psc",      // last resort
         NULL
      };

      for ( idx = 0; candidates[idx]; idx++ ) {
         if ( astPlDeviceAvailable( candidates[ idx ] ) )
            return candidates[ idx ];
      }
   }

   if ( strcmp( ext, ".png" ) == 0 ) {
      const char *candidates[] = {
         "pngcairo",
         "png",
         NULL
      };

      for ( idx = 0; candidates[idx]; idx++ ) {
         if ( astPlDeviceAvailable( candidates[ idx ] ) )
            return candidates[ idx ];
      }
   }

   if ( strcmp( ext, ".svg" ) == 0 ) {
      const char *candidates[] = {
         "svgcairo",
         "svg",
         NULL
      };

      for ( idx = 0; candidates[idx]; idx++ ) {
         if ( astPlDeviceAvailable( candidates[ idx ] ) )
            return candidates[ idx ];
      }
   }

   return "psc";
}


/* Setup PLplot output device based on filename or device name */
void astPlSetupDevice( const char *output ) {
   const char *ext;
   const char *dev;

   /* Fallback in case output is null: render to null device (always
    * available) */
   if ( !output ) {
      c_plsdev( "null" );
      return;
   }

   /* Check for possible interactive outputs (useful for manual testing) */
   if( strcmp( output, "aqt" ) == 0 || strcmp( output, "xwin" ) == 0 ||
       strcmp( output, "xcairo" ) == 0 || strcmp( output, "qtwidget" ) == 0 ) {

      if ( astPlDeviceAvailable( output ) ) {
         c_plsdev( output );
         return;
      } else {
         fprintf( stderr, "Selected plplot output device %s not available; "
                  "falling back on null device\n", output );
         c_plsdev( "null" );
         return;
      }
   }

   /* Choose best output device from filename extension */
   ext = strrchr( output, '.' );
   dev = astPlChooseDeviceForExtension( ext );

   if ( !astPlDeviceAvailable( dev ) ) {
      fprintf( stderr, "plplot output device %s for %s files not "
               "available; falling back on null device\n", dev, ext );
      dev = "null";
   }

   c_plsdev( dev );
   c_plsfnam( output );
}
