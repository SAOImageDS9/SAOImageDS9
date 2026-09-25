/*
*  Name:
*     grf_log.c

*  Purpose:
*     Implement the GRF module using a virtual viewport with optional
*     call logging.

*  Description:
*     This file implements the low-level graphics functions required by
*     the rest of AST against a virtual viewport that needs no external
*     graphics library.  Every call can optionally be logged to a FILE
*     for analysis or regression testing.
*
*     The virtual viewport models a 200 mm square page with world
*     coordinates running from 0 to 1 on each axis, matching the setup
*     that testplotter.c creates via PLplot's c_plenv(0,1,0,1,...).

*  History:
*     17-APR-2026 (TIMJ):
*        Original version.
*     8-AUG-2026 (TIMJ):
*        Use round() rather than (int)(x+0.5) for rounding, so that the
*        library uses a single rounding idiom that is correct for
*        negative values.

*  Licence:
*     This program is free software: you can redistribute it and/or
*     modify it under the terms of the GNU Lesser General Public
*     License as published by the Free Software Foundation, either
*     version 3 of the License, or (at your option) any later
*     version.
*
*     This program is distributed in the hope that it will be useful,
*     but WITHOUT ANY WARRANTY; without even the implied warranty of
*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*     GNU Lesser General Public License for more details.
*
*     You should have received a copy of the GNU Lesser General
*     License along with this program.  If not, see
*     <http://www.gnu.org/licenses/>.
*/

/* Header files. */
/* ============= */
#include "grf.h"
#include "grf_log.h"
#include "error.h"
#include "ast_err.h"
#include "pointset.h"

#include <math.h>
#include <string.h>
#include <stdio.h>

/* Constants. */
/* ========== */
#define PAGE_WIDTH_MM   200.0
#define PAGE_HEIGHT_MM  200.0
#define WORLD_X_MIN     0.0
#define WORLD_X_MAX     1.0
#define WORLD_Y_MIN     0.0
#define WORLD_Y_MAX     1.0
#define DEFAULT_CHR_HT  4.0      /* mm, matches PLplot default */

#define R2D 57.29577951308232    /* radians to degrees */

/* PLplot-compatible colour map 0 (indices 0–15). */
static const char *cmap0[] = {
   "#000000", "#ff0000", "#ffff00", "#00ff00",
   "#7fffd4", "#ffc0cb", "#f5deb3", "#808080",
   "#a52a2a", "#0000ff", "#8a2be2", "#00ffff",
   "#f0e68c", "#fa8072", "#c0c0c0", "#ffffff"
};
#define NCMAP0 16

/* Static state. */
/* ============= */
static FILE *log_fp = NULL;
static FILE *svg_fp = NULL;
static int svg_w = 720;
static int svg_h = 540;

/* Attribute state: [GRF__TEXT=0, GRF__LINE=1, GRF__MARK=2] */
static double attr_style[3]  = { 1.0, 1.0, 1.0 };
static double attr_width[3]  = { 1.0, 1.0, 1.0 };
static double attr_size[3]   = { 1.0, 1.0, 1.0 };
static double attr_font[3]   = { 1.0, 1.0, 1.0 };
static double attr_colour[3] = { 1.0, 1.0, 1.0 };

/* Initialisation / shutdown. */
/* ========================== */
void astGrfLogInit( FILE *logfile ) {
   int i;
   log_fp = logfile;
   for( i = 0; i < 3; i++ ) {
      attr_style[i]  = 1.0;
      attr_width[i]  = 1.0;
      attr_size[i]   = 1.0;
      attr_font[i]   = 1.0;
      attr_colour[i] = 1.0;
   }
}

void astGrfLogSetSvg( FILE *svgfile, int width, int height ) {
   svg_fp = svgfile;
   svg_w = width;
   svg_h = height;
   if( svg_fp ) {
      fprintf( svg_fp,
         "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
         "<svg xmlns=\"http://www.w3.org/2000/svg\" "
         "width=\"%d\" height=\"%d\" "
         "viewBox=\"0 0 %d %d\">\n"
         "<rect width=\"100%%\" height=\"100%%\" fill=\"black\"/>\n",
         svg_w, svg_h, svg_w, svg_h );
   }
}

void astGrfLogClose( void ) {
   if( log_fp ) fflush( log_fp );
   log_fp = NULL;
   if( svg_fp ) {
      fprintf( svg_fp, "</svg>\n" );
      fflush( svg_fp );
   }
   svg_fp = NULL;
}

/* SVG helpers. */
static int SvgX( float wx ) {
   return (int) round( wx * (float)svg_w );
}

static int SvgY( float wy ) {
   return (int) round( (float)svg_h - wy * (float)svg_h );
}

static const char *SvgColour( int prim ) {
   int idx = (int)round( attr_colour[prim] );
   if( idx < 0 || idx >= NCMAP0 ) idx = 1;
   return cmap0[idx];
}

static int SvgFontSize( void ) {
   double scale = attr_size[GRF__TEXT];
   if( scale <= 0.0 ) scale = 1.0;
   return (int)round( 14.0 * scale );
}

/* Helper: current character height in mm, accounting for size scaling. */
static double ChrHtMM( void ) {
   double scale = attr_size[GRF__TEXT];
   if( scale <= 0.0 ) scale = 1.0;
   return DEFAULT_CHR_HT * scale;
}

/* GRF functions. */
/* ============== */

int astGScales( float *alpha, float *beta ) {
   *alpha = (float)( PAGE_WIDTH_MM  / ( WORLD_X_MAX - WORLD_X_MIN ) );
   *beta  = (float)( PAGE_HEIGHT_MM / ( WORLD_Y_MAX - WORLD_Y_MIN ) );
   if( log_fp ) fprintf( log_fp, "GScales alpha=%.3f beta=%.3f\n",
                          *alpha, *beta );
   return 1;
}

int astGQch( float *chv, float *chh ) {
   float alpha, beta;
   double ht;

   if( !astGScales( &alpha, &beta ) ) return 0;

   ht = ChrHtMM();
   *chv = ( alpha != 0.0f ) ? (float)( ht / fabs( (double)alpha ) ) : 0.0f;
   *chh = ( beta  != 0.0f ) ? (float)( ht / fabs( (double)beta  ) ) : 0.0f;

   if( log_fp ) fprintf( log_fp, "GQch chv=%.6f chh=%.6f\n", *chv, *chh );
   return 1;
}

int astGTxExt( const char *text, float x, float y, const char *just,
               float upx, float upy, float *xb, float *yb ) {
   char lj[2];
   int i;
   float alpha, beta;
   float ux, uy, vx, vy, uplen;
   double chr_ht;

   for( i = 0; i < 4; i++ ) {
      xb[i] = 0.0f;
      yb[i] = 0.0f;
   }

   if( text && text[0] != '\0' ) {
      if( just ) {
         lj[0] = ( just[0] == 'T' || just[0] == 'C' || just[0] == 'B' )
                 ? just[0] : 'C';
         lj[1] = ( just[1] == 'L' || just[1] == 'C' || just[1] == 'R' )
                 ? just[1] : 'C';
      } else {
         lj[0] = 'C';
         lj[1] = 'C';
      }

      if( !astGScales( &alpha, &beta ) ) return 0;
      if( alpha < 0.0f ) upx = -upx;
      if( beta  < 0.0f ) upy = -upy;

      ux = alpha * upx;
      uy = beta  * upy;

      uplen = (float)sqrt( (double)( ux*ux + uy*uy ) );
      if( uplen > 0.0f ) {
         ux /= uplen;
         uy /= uplen;
      } else {
         astError( AST__GRFER,
                   "astGTxExt: Zero length up-vector supplied." );
         return 0;
      }

      vx =  uy;
      vy = -ux;

      chr_ht = ChrHtMM();

      float phys_hu = (float)( 1.0 * chr_ht );
      float phys_hd = (float)( -0.2 * chr_ht );
      float phys_w  = (float)( strlen( text ) * chr_ht * 0.6 );
      float padded_w = phys_w + 0.2f * phys_hu;

      float cx_mm = 0.0f, cy_mm = 0.0f;

      if( lj[0] == 'B' ) {
         cy_mm = 0.5f * ( phys_hu + phys_hd );
      } else if( lj[0] == 'T' ) {
         cy_mm = -0.5f * ( phys_hu - phys_hd );
      } else if( lj[0] == 'C' ) {
         cy_mm = 0.5f * phys_hd;
      }

      if( lj[1] == 'L' ) {
         cx_mm = 0.5f * padded_w;
      } else if( lj[1] == 'R' ) {
         cx_mm = -0.5f * padded_w;
      }

      float xc = x + ( cx_mm * vx + cy_mm * ux ) / alpha;
      float yc = y + ( cx_mm * vy + cy_mm * uy ) / beta;

      float half_w_mm = 0.5f * padded_w;
      float half_h_mm = 0.5f * ( phys_hu - phys_hd );

      float vdx = ( half_w_mm * vx ) / alpha;
      float vdy = ( half_w_mm * vy ) / beta;
      float udx = ( half_h_mm * ux ) / alpha;
      float udy = ( half_h_mm * uy ) / beta;

      xb[0] = xc - vdx - udx;
      yb[0] = yc - vdy - udy;
      xb[1] = xc + vdx - udx;
      yb[1] = yc + vdy - udy;
      xb[2] = xc + vdx + udx;
      yb[2] = yc + vdy + udy;
      xb[3] = xc - vdx + udx;
      yb[3] = yc - vdy + udy;
   }

   if( log_fp ) {
      fprintf( log_fp, "GTxExt \"%s\" x=%.3f y=%.3f just=%c%c "
               "box=(%.3f,%.3f)-(%.3f,%.3f)-(%.3f,%.3f)-(%.3f,%.3f)\n",
               text ? text : "", x, y,
               just ? just[0] : '?', just ? just[1] : '?',
               xb[0], yb[0], xb[1], yb[1],
               xb[2], yb[2], xb[3], yb[3] );
   }
   return 1;
}

int astGText( const char *text, float x, float y, const char *just,
              float upx, float upy ) {
   if( log_fp ) {
      fprintf( log_fp, "GText \"%s\" x=%.3f y=%.3f just=%c%c "
               "up=(%.3f,%.3f)\n",
               text ? text : "", x, y,
               just ? just[0] : '?', just ? just[1] : '?',
               upx, upy );
   }
   if( svg_fp && text && text[0] != '\0' ) {
      int sx = SvgX( x );
      int sy = SvgY( y );
      int fs = SvgFontSize();
      double angle = -atan2( (double)upx, (double)upy ) * R2D;

      const char *anchor = "middle";
      const char *baseline = "central";
      if( just ) {
         switch( just[1] ) {
            case 'L': anchor = "start";  break;
            case 'R': anchor = "end";    break;
            default:  anchor = "middle"; break;
         }
         switch( just[0] ) {
            case 'T': baseline = "hanging";    break;
            case 'B': baseline = "alphabetic"; break;
            default:  baseline = "central";    break;
         }
      }

      fprintf( svg_fp, "<text x=\"%d\" y=\"%d\" "
               "font-family=\"sans-serif\" font-size=\"%d\" "
               "fill=\"%s\" text-anchor=\"%s\" dominant-baseline=\"%s\"",
               sx, sy, fs, SvgColour(GRF__TEXT), anchor, baseline );
      if( fabs(angle) > 0.01 ) {
         int iangle = (int)( angle / 5.0 ) * 5;
         if( angle < 0 && iangle != (int)angle ) iangle -= 5;
         fprintf( svg_fp, " transform=\"rotate(%d,%d,%d)\"",
                  iangle, sx, sy );
      }
      fprintf( svg_fp, ">%s</text>\n", text );
   }
   return 1;
}

int astGLine( int n, const float *x, const float *y ) {
   if( log_fp && n > 1 && x && y ) {
      if( x[0] != x[n-1] || y[0] != y[n-1] ) {
         fprintf( log_fp, "GLine from=(%.3f,%.3f) to=(%.3f,%.3f)\n",
                  x[0], y[0], x[n-1], y[n-1] );
      }
   }
   if( svg_fp && n > 1 && x && y ) {
      int i;
      double w = attr_width[GRF__LINE];
      if( w < 1.0 ) w = 1.0;
      fprintf( svg_fp, "<polyline fill=\"none\" stroke=\"%s\" "
               "stroke-width=\"%d\" points=\"", SvgColour(GRF__LINE),
               (int)round( w ) );
      for( i = 0; i < n; i++ ) {
         fprintf( svg_fp, "%d,%d ", SvgX(x[i]), SvgY(y[i]) );
      }
      fprintf( svg_fp, "\"/>\n" );
   }
   return 1;
}

int astGMark( int n, const float *x, const float *y, int type ) {
   if( log_fp && n > 0 && x && y ) {
      fprintf( log_fp, "GMark type=%d at=(%.3f,%.3f)\n", type, x[0], y[0] );
   }
   if( svg_fp && n > 0 && x && y ) {
      int i;
      for( i = 0; i < n; i++ ) {
         fprintf( svg_fp, "<circle cx=\"%d\" cy=\"%d\" r=\"2\" "
                  "fill=\"%s\"/>\n", SvgX(x[i]), SvgY(y[i]),
                  SvgColour(GRF__MARK) );
      }
   }
   return 1;
}

int astGAttr( int attr, double value, double *old_value, int prim ) {
   double *arr;
   int p;

   p = prim;
   if( p < 0 || p > 2 ) p = 0;

   if( attr == GRF__STYLE ) {
      arr = attr_style;
   } else if( attr == GRF__WIDTH ) {
      arr = attr_width;
   } else if( attr == GRF__SIZE ) {
      arr = attr_size;
   } else if( attr == GRF__FONT ) {
      arr = attr_font;
   } else if( attr == GRF__COLOUR ) {
      arr = attr_colour;
   } else {
      astError( AST__GRFER,
                "astGAttr: Unknown graphics attribute '%d' requested.",
                attr );
      return 0;
   }

   if( old_value ) *old_value = arr[p];

   if( value != AST__BAD ) {
      arr[p] = value;
      if( log_fp ) {
         static const char *aname[] = {
            "STYLE", "WIDTH", "SIZE", "FONT", "COLOUR" };
         static const char *pname[] = { "TEXT", "LINE", "MARK" };
         fprintf( log_fp, "GAttr %s=%.4f prim=%s\n",
                  aname[attr], value, pname[p] );
      }
   }

   return 1;
}

int astGCap( int cap, int value ) {
   (void)value;
   if( cap == GRF__SCALES ) return 1;
   return 0;
}

int astGFlush( void ) {
   if( log_fp ) {
      fprintf( log_fp, "GFlush\n" );
      fflush( log_fp );
   }
   return 1;
}

int astGBBuf( void ) {
   return 1;
}

int astGEBuf( void ) {
   return 1;
}
