/*
*  Name:
*     grf_plplot.c

*  Purpose:
*     Implement the grf module using the PLPlot graphics system.

*  Description:
*     This file implements the low level graphics functions required
*     by the rest of AST, by calling suitable PLPlot functions.

*  History:
*     8-APR-2026 (TIMJ):
*        Original version.
*     8-AUG-2026 (TIMJ):
*        Use round() rather than (int)(x+0.5) for rounding, so that the
*        library uses a single rounding idiom that is correct for
*        negative values. Also drop the now-redundant negative-value
*        compensation at the Style and Font sites, which double-corrected
*        once round() was doing the work.

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

/* Macros */
/* ====== */
#define MXSTRLEN 80              /* String length at which truncation starts */

/* Header files. */
/* ============= */
#include "pointset.h"            /* Defines AST__BAD */
#include "memory.h"              /* Memory allocation facilities */
#include "error.h"               /* Error reporting facilities */
#include "grf.h"                 /* Interface to this module */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <float.h>
#include <math.h>
#include <string.h>
#include <plplot.h>              /* PLPlot native C API */
#ifdef HAVE_PLSTRL
#include <plplotP.h>             /* Private API for plstrl */
#endif

/* Constants. */
/* ========== */
#define R2D 57.29578             /* Radians to degrees factor */

/* Globals */
/* ======= */
static PLINT current_color = 1;

/* Helper function to replace ASCII hyphen with Unicode minus sign for better typography */
static char *format_text(const char *in_text) {
    if (!in_text) return NULL;
    int hyphen_count = 0;
    const char *p = in_text;
    while (*p) {
        if (*p == '-') hyphen_count++;
        p++;
    }
    if (hyphen_count == 0) {
        char *out = astMalloc(strlen(in_text) + 1);
        if (out) strcpy(out, in_text);
        return out;
    }

    /* Each '-' (1 byte) becomes '\xE2\x88\x92' (3 bytes), so we need 2 extra bytes per hyphen */
    char *out = astMalloc(strlen(in_text) + hyphen_count * 2 + 1);
    if (!out) return NULL;

    char *q = out;
    p = in_text;
    while (*p) {
        if (*p == '-') {
            *q++ = '\xE2';
            *q++ = '\x88';
            *q++ = '\x92';
        } else {
            *q++ = *p;
        }
        p++;
    }
    *q = '\0';
    return out;
}

/* Externally visible functions. */
/* ============================= */

int astGBBuf( void ){
   /* PLplot has no explicit begin-buffer function; it manages its own updates. */
   return 1;
}

int astGEBuf( void ){
   /* PLplot has no explicit end-buffer function. */
   return 1;
}

int astGFlush( void ){
   c_plflush();
   return 1;
}

int astGCap( int cap, int value ){
   int result = 0;
   if( cap == GRF__SCALES ) result = 1;
   return result;
}

int astGLine( int n, const float *x, const float *y ){
   int i;
   PLFLT *px, *py;

   if( n > 1 && x && y ){
      px = (PLFLT *) astMalloc( sizeof( PLFLT ) * (size_t) n );
      py = (PLFLT *) astMalloc( sizeof( PLFLT ) * (size_t) n );
      if( astOK ){
         for( i = 0; i < n; i++ ){
            px[ i ] = (PLFLT) x[ i ];
            py[ i ] = (PLFLT) y[ i ];
         }
         c_plline( n, px, py );
         px = (PLFLT *) astFree( (void *) px );
         py = (PLFLT *) astFree( (void *) py );
      }
   }
   return 1;
}

int astGMark( int n, const float *x, const float *y, int type ){
   int i;
   PLFLT *px, *py;

   if( n > 0 && x && y ){
      px = (PLFLT *) astMalloc( sizeof( PLFLT ) * (size_t) n );
      py = (PLFLT *) astMalloc( sizeof( PLFLT ) * (size_t) n );
      if( astOK ){
         for( i = 0; i < n; i++ ){
            px[ i ] = (PLFLT) x[ i ];
            py[ i ] = (PLFLT) y[ i ];
         }
         c_plpoin( n, px, py, type );
         px = (PLFLT *) astFree( (void *) px );
         py = (PLFLT *) astFree( (void *) py );
      }
   }
   return 1;
}

int astGScales( float *alpha, float *beta ){
   PLFLT wx1, wx2, wy1, wy2;
   PLFLT dx1, dx2, dy1, dy2;
   PLFLT sx1, sx2, sy1, sy2;
   PLFLT vx1, vx2, vy1, vy2;

   /* Get viewport in world coordinates */
   c_plgvpw( &wx1, &wx2, &wy1, &wy2 );
   /* Get subpage bounds in physical coordinates (mm) */
   c_plgspa( &sx1, &sx2, &sy1, &sy2 );
   /* Get viewport bounds in normalized device coordinates (0 to 1 across subpage) */
   c_plgvpd( &dx1, &dx2, &dy1, &dy2 );

   /* Calculate viewport bounds in mm */
   vx1 = sx1 + dx1 * (sx2 - sx1);
   vx2 = sx1 + dx2 * (sx2 - sx1);
   vy1 = sy1 + dy1 * (sy2 - sy1);
   vy2 = sy1 + dy2 * (sy2 - sy1);

   if( wx2 != wx1 && wy2 != wy1 &&
       vx2 != vx1 && vy2 != vy1 ) {
      *alpha = (float) ((vx2 - vx1) / (wx2 - wx1));
      *beta  = (float) ((vy2 - vy1) / (wy2 - wy1));
      return 1;
   } else {
      astError( AST__GRFER, "astGScales: The graphics window or viewport has zero size." );
      return 0;
   }
}

int astGText( const char *text, float x, float y, const char *just,
              float upx, float upy ){
   char lj[ 2 ];
   float alpha, beta;
   PLFLT fjust, dx, dy, dx_mm, dy_mm;

   if( text && text[ 0 ] != 0 ){
      if( just ){
         lj[ 0 ] = (just[ 0 ] == 'T' || just[ 0 ] == 'C' || just[ 0 ] == 'B') ? just[ 0 ] : 'C';
         lj[ 1 ] = (just[ 1 ] == 'L' || just[ 1 ] == 'C' || just[ 1 ] == 'R') ? just[ 1 ] : 'C';
      } else {
         lj[ 0 ] = 'C';
         lj[ 1 ] = 'C';
      }

      if( !astGScales( &alpha, &beta ) ) return 0;

      if( alpha < 0.0 ) upx = -upx;
      if( beta < 0.0 ) upy = -upy;

      if( lj[ 1 ] == 'L' ) {
         fjust = 0.0;
      } else if( lj[ 1 ] == 'R' ) {
         fjust = 1.0;
      } else {
         fjust = 0.5;
      }

      /* Let's define the baseline vector dx, dy. The up vector is upx, upy.
         Baseline vector is perpendicular to the up vector.
         If up vector in mm is (upx*alpha, upy*beta), then baseline vector in mm is
         (upy*beta, -upx*alpha). So in world coordinates: (upy*beta/alpha, -upx). */
      dx_mm = upy * beta;
      dy_mm = -upx * alpha;

      /* In world coords */
      dx = dx_mm / alpha;
      dy = dy_mm / beta;

      /* Draw opaque background box to erase underlying lines */
      float xb[4], yb[4];
      if (astGTxExt(text, x, y, just, upx, upy, xb, yb)) {
         PLFLT px[4], py[4];
         int k;
         for(k=0; k<4; k++) {
            px[k] = (PLFLT) xb[k];
            py[k] = (PLFLT) yb[k];
         }
         c_plcol0(0); /* Background color */
         c_plfill(4, px, py);
         c_plcol0(current_color); /* Restore foreground color */
      }

      /* Adjust vertical reference point - PLplot natively uses center vertical justification (half capital height) */
      if( lj[0] != 'C' ){
         PLFLT def_chr, chr_ht;
         c_plgchr( &def_chr, &chr_ht ); /* chr_ht is in mm */

         /* UP vector in mm system */
         float ux = alpha * upx;
         float uy = beta * upy;
         float uplen = sqrt(ux*ux + uy*uy);
         if( uplen > 0.0 ){
            ux /= uplen;
            uy /= uplen;
         } else {
            astError( AST__GRFER, "astGText: Zero length up-vector supplied.");
            return 0;
         }

         float shift_mm = 0.0f;
         if( lj[ 0 ] == 'T' ){
            /* Shift down by 0.5 * chr_ht */
            shift_mm = -0.5f * chr_ht;
         } else if( lj[ 0 ] == 'B' ){
            /* Shift up by 0.5 * chr_ht */
            shift_mm = 0.5f * chr_ht;
         }

         /* Apply shift in world coords */
         x += (shift_mm * ux) / alpha;
         y += (shift_mm * uy) / beta;
      }
      char *fmt_text = format_text(text);
      if (fmt_text) {
         c_plptex( (PLFLT) x, (PLFLT) y, dx, dy, fjust, fmt_text );
         astFree(fmt_text);
      }
   }
   return 1;
}
int astGTxExt( const char *text, float x, float y, const char *just,
               float upx, float upy, float *xb, float *yb ){
   char lj[ 2 ];
   int i;
   float alpha, beta;
   float ux, uy, vx, vy, uplen;
   PLFLT def_chr, chr_ht;

   for( i = 0; i < 4; i++ ){
      xb[ i ] = 0.0;
      yb[ i ] = 0.0;
   }

   if( text && text[ 0 ] != 0 ){
      if( just ){
         lj[ 0 ] = (just[ 0 ] == 'T' || just[ 0 ] == 'C' || just[ 0 ] == 'B') ? just[ 0 ] : 'C';
         lj[ 1 ] = (just[ 1 ] == 'L' || just[ 1 ] == 'C' || just[ 1 ] == 'R') ? just[ 1 ] : 'C';
      } else {
         lj[ 0 ] = 'C';
         lj[ 1 ] = 'C';
      }

      if( !astGScales( &alpha, &beta ) ) return 0;

      if( alpha < 0.0 ) upx = -upx;
      if( beta < 0.0 ) upy = -upy;

      ux = alpha * upx;
      uy = beta * upy;

      uplen = sqrt( ux*ux + uy*uy );
      if( uplen > 0.0 ){
         ux /= uplen;
         uy /= uplen;
      } else {
         astError( AST__GRFER, "astGTxExt: Zero length up-vector supplied.");
         return 0;
      }

      /* Baseline unit vector in mm system */
      vx = uy;
      vy = -ux;

      c_plgchr( &def_chr, &chr_ht );

      /* Physical dimensions in mm.
         PLplot's chr_ht is a reference height. We define the top at 1.0*ht
         and descent at -0.2*ht to match PGPLOT standard conventions. */
      float phys_hu = 1.0f * chr_ht;
      float phys_hd = -0.2f * chr_ht;

      /* Compute string width in mm. Use PLplot's plstrl() if the
         private header is available, otherwise estimate from character
         count (Hershey font width is roughly 0.6 * height). */
      char *fmt_text = format_text(text);
      float phys_w = 0.0f;
      if (fmt_text) {
#ifdef HAVE_PLSTRL
         phys_w = (float)plstrl(fmt_text);
#else
         phys_w = (float)(strlen(fmt_text) * chr_ht * 0.6);
#endif
         astFree(fmt_text);
      }

      /* PGPLOT adds 0.2 * hu to the width, and the padding is fully asymmetric
         (e.g. for Left justified, the box starts exactly at x and extends right). */
      float padded_w = phys_w + 0.2f * phys_hu;

      /* Physical center offset in mm system from reference point */
      float cx_mm = 0.0f;
      float cy_mm = 0.0f;

      if( lj[0] == 'B' ) {
         cy_mm = 0.5f * (phys_hu + phys_hd);
      } else if( lj[0] == 'T' ) {
         cy_mm = -0.5f * (phys_hu - phys_hd);
      } else if( lj[0] == 'C' ) {
         cy_mm = 0.5f * phys_hd;
      }

      if( lj[1] == 'L' ) {
         cx_mm = 0.5f * padded_w;
      } else if( lj[1] == 'R' ) {
         cx_mm = -0.5f * padded_w;
      }

      /* Convert center offset to world coordinates and apply to reference point */
      float xc = x + (cx_mm * vx + cy_mm * ux) / alpha;
      float yc = y + (cx_mm * vy + cy_mm * uy) / beta;

      /* Bounding box half-dimensions in mm */
      float half_w_mm = 0.5f * padded_w;
      float half_h_mm = 0.5f * (phys_hu - phys_hd);

      /* Half-width and half-height vectors in world coordinates */
      float vdx = (half_w_mm * vx) / alpha;
      float vdy = (half_w_mm * vy) / beta;

      float udx = (half_h_mm * ux) / alpha;
      float udy = (half_h_mm * uy) / beta;

      xb[ 0 ] = xc - vdx - udx;
      yb[ 0 ] = yc - vdy - udy;

      xb[ 1 ] = xc + vdx - udx;
      yb[ 1 ] = yc + vdy - udy;

      xb[ 2 ] = xc + vdx + udx;
      yb[ 2 ] = yc + vdy + udy;

      xb[ 3 ] = xc - vdx + udx;
      yb[ 3 ] = yc - vdy + udy;
   }
   return 1;
}
int astGQch( float *chv, float *chh ){
   PLFLT def_chr, chr_ht;
   float alpha, beta;

   /* Get character height in mm */
   c_plgchr( &def_chr, &chr_ht );

   /* Use the scales to convert from mm to world coordinates */
   if( astGScales( &alpha, &beta ) ) {
      /* Scales are (mm per world unit) -> world unit = mm / scale */
      /* Prevent division by zero mathematically, astGScales already checks this but safety first */
      *chv = (alpha != 0.0f) ? (float)(chr_ht / fabs((double)alpha)) : 0.0f;
      *chh = (beta != 0.0f) ? (float)(chr_ht / fabs((double)beta)) : 0.0f;
      return 1;
   } else {
      astError( AST__GRFER, "astGQch: Failed to get graphics scales.");
      return 0;
   }
}

int astGAttr( int attr, double value, double *old_value, int prim ){
   PLINT ival;

   if( attr == GRF__STYLE ){
      if( value != AST__BAD ){
         ival = (PLINT) round( value );
         ival = ( ival - 1 ) % 5;
         ival += ( ival < 0 ) ? 6 : 1;
         c_pllsty( ival );
      }

   } else if( attr == GRF__WIDTH ){
      if( value != AST__BAD ){
         ival = (PLINT) ( value );
         if (ival < 1) ival = 1;
         c_plwidth( ival );
      }

   } else if( attr == GRF__SIZE ){
      if( value != AST__BAD ){
         c_plschr( 0.0, (PLFLT) value );
      }

   } else if( attr == GRF__FONT ){
      if( value != AST__BAD ){
         ival = (PLINT) round( value );
         ival = ( ival - 1 ) % 4;
         ival += ( ival < 0 ) ? 5 : 1;
         c_plfont( ival );
      }

   } else if( attr == GRF__COLOUR ){
      if( value != AST__BAD ){
         ival = (PLINT) round( value );
         if( ival < 0 ) ival = 1;
         c_plcol0( ival );
         current_color = ival;
      }

   } else {
      astError( AST__GRFER, "astGAttr: Unknown graphics attribute '%d' requested.", attr );
      return 0;
   }

   /* Suppress unused parameter warnings */
   (void)old_value;
   (void)prim;

   return 1;
}
