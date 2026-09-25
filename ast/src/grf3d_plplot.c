/*
*  Name:
*     grf3d_plplot.c

*  Purpose:
*     Implement the grf3d interface using the PLplot graphics system.

*  Description:
*     This file implements the low level 3D graphics functions required
*     by the rest of AST, by calling suitable PLplot functions (the
*     C PLplot interface is used).
*
*     This file can be used as a template for the development of
*     similar implementations based on other graphics systems.
*
*     Unlike world coordinates used by the 2D grf interface, the 3D world
*     coordinates used by the grf3D interface are assume to be equally scaled
*     (that is, they are assumed to have the same units). Therefore this
*     module has no equivalent to the astGScales function defined by the
*     2D grf interface.

*  Copyright:
*     Copyright (C) 2007 Science & Technology Facilities Council.
*     Copyright (C) 2026 Tim Jenness.
*     All Rights Reserved.

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

*  Authors:
*     DSB: David S. Berry (Starlink)
*     TIMJ: Tim Jenness (tjenness@lsst.org)

*  History:
*     20-JUN-2007 (DSB):
*        Original PGPLOT version (grf3d_pgplot.c).
*     15-APR-2026 (TIMJ):
*        PLplot port. Replaced PGPLOT Fortran wrappers with direct PLplot
*        C API calls. Text rendering uses c_plptex instead of PGPLOT Hershey
*        glyph stroking. Attribute state tracked in module-level variables
*        since PLplot lacks query functions for some attributes. Removed
*        Fortran wrapper functions.
*     8-AUG-2026 (TIMJ):
*        Use round() rather than (int)(x+0.5) for rounding, so that the
*        library uses a single rounding idiom that is correct for
*        negative values. Also drop the now-redundant negative-value
*        compensation at the Style and Font sites, which double-corrected
*        once round() was doing the work.
*/


/* Macros */
/* ====== */
#define MXDEV 16                 /* Max no of concurrent PLplot streams */
#define CAMERA_OK 123456789      /* Flags that a Camera has been initialised */
#define TWOPI 6.28318530718      /* 2*PI */
#define MXSIDE 32                /* Max no of sides in a marker polygon */


/* Header files. */
/* ============= */
/* AST header files */
#include "grf3d.h"               /* The grf3D interface definition */
#include "pl3d.h"                /* Other public functions in this module */
#include "memory.h"              /* Memory allocation facilities */
#include "error.h"               /* Error reporting facilities */
#include "pointset.h"            /* Defines AST__BAD */
#include "ast_err.h"             /* AST error codes */

/* System header files */
#include <string.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include <stdio.h>

/* PLplot header files */
#include <plplot.h>              /* PLplot native C API */
#ifdef HAVE_PLSTRL
#include <plplotP.h>             /* Private API for plstrl */
#endif


/* Type definitions. */
/* ================= */
/* Structure defining the position and orientation of the camera in 3D
   world coords. This is specific to the PLplot implementation. Other
   implementations need not include any equivalent to this structure. */
typedef struct camera {
   float eye_vector[3];
   float target_vector[3];
   float up_vector[3];
   float w2c_matrix[9];
   float screen_distance;
   int ok_flag;
} Camera;


/* Module variables. */
/* ================= */
/* One camera structure for each PLplot stream identifier. PLplot uses
   stream IDs starting at 0. We support up to MXDEV concurrent streams. */
static Camera cameras[ MXDEV ];

/* Tracked attribute state. PLplot lacks query functions for some
   attributes, so we track the current values ourselves. */
static int current_style = 1;
static int current_font = 1;
static PLINT current_color = 1;
static int current_width = 1;
static float current_char_scale = 1.0;

/* Window bounds set by PL3DAutoCamera, used by getCharHeight(). */
static float win_x1 = 0.0;
static float win_x2 = 1.0;
static float win_y1 = 0.0;
static float win_y2 = 1.0;


/* Function templates. */
/* =================== */
/* Templates for functions that are private to this module. */
static Camera *getCamera( int );
static float getCharHeight( void );
static int Polygon( int, float *, float *, float *, float[3], float[3], float[3], float[3] );
static int TextCam( Camera *, float[3], float[3], float[3], float[3] );
static int TxExt3D( const char *, float[3], const char *, float[3], float[3], float[3], float *, float *, float *, float[3] );
static int getTextAxes( float[3], float[3], float[3], const char *, float[3], float[3], float[3], char[3] );
static int transform( Camera *, int, float *, float *, float *, float *, float * );
static int vectorNorm( float * );
static float vectorModulus( float * );
static void vectorProduct( float *, float *, float * );
static float dotProduct( float *, float * );
static void vectorSub( float *, float *, float * );


/* Public functions defined by the grf3D interface. */
/* ================================================ */
/* All implementations of the grf3d interface must provide implementations
   of all the functions in this block. The corresponding templates are in
   grf3d.h */


int astG3DAttr( int attr, double value, double *old_value, int prim ){
/*
*+
*  Name:
*     astG3DAttr

*  Purpose:
*     Enquire or set a 3D graphics attribute value.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DAttr( int attr, double value, double *old_value, int prim )

*  Description:
*     This function returns the current value of a specified 3D graphics
*     attribute, and optionally establishes a new value. The supplied
*     value is converted to an integer value if necessary before use.

*  Parameters:
*     attr
*        An integer value identifying the required attribute. The
*        following symbolic values are defined in grf3d.h:
*
*           GRF__STYLE  - Line style.
*           GRF__WIDTH  - Line width.
*           GRF__SIZE   - Character and marker size scale factor.
*           GRF__FONT   - Character font.
*           GRF__COLOUR - Colour index.
*     value
*        A new value to store for the attribute. If this is AST__BAD
*        no value is stored.
*     old_value
*        A pointer to a double in which to return the attribute value.
*        If this is NULL, no value is returned.
*     prim
*        The sort of graphics primitive to be drawn with the new attribute.
*        Identified by the following values defined in grf.h:
*           GRF__LINE
*           GRF__MARK
*           GRF__TEXT

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:

*-
*/

   int ival;

/* If required retrieve the current line style, and set a new line style. */
   if( attr == GRF__STYLE ){
      if( old_value ) *old_value = (double) current_style;

      if( value != AST__BAD ){
         ival = (int) round( value );

         ival = ( ival - 1 ) % 5;
         ival += ( ival < 0 ) ? 6 : 1;

         c_pllsty( ival );
         current_style = ival;
      }

/* If required retrieve the current line width, and set a new line width. */
   } else if( attr == GRF__WIDTH ){
      if( old_value ) *old_value = (double) current_width;

      if( value != AST__BAD ){
         ival = (int) ( value );
         if( ival < 1 ) ival = 1;
         c_plwidth( ival );
         current_width = ival;
      }

/* If required retrieve the current character size, and set a new size.
   The attribute value should be a factor by which to multiply the
   default character size. */
   } else if( attr == GRF__SIZE ){
      if( old_value ) *old_value = (double) current_char_scale;

      if( value != AST__BAD ){
         c_plschr( 0.0, (PLFLT) value );
         current_char_scale = (float) value;
      }

/* If required retrieve the current character font, and set a new font. */
   } else if( attr == GRF__FONT ){
      if( old_value ) *old_value = (double) current_font;

      if( value != AST__BAD ){
         ival = (int) round( value );

         ival = ( ival - 1 ) % 4;
         ival += ( ival < 0 ) ? 5 : 1;

         c_plfont( ival );
         current_font = ival;
      }

/* If required retrieve the current colour index, and set a new colour
   index. */
   } else if( attr == GRF__COLOUR ){
      if( old_value ) *old_value = (double) current_color;

      if( value != AST__BAD ){
         ival = (int) round( value );
         if( ival < 0 ) ival = 1;
         c_plcol0( ival );
         current_color = ival;
      }

/* Give an error message for any other attribute value. */
   } else {
      astError( AST__GRFER, "astG3DAttr: Unknown graphics attribute '%d' "
                "requested.", attr );
      return 0;
   }

/* Suppress unused parameter warning */
   (void) prim;

/* Return. */
   return 1;
}

int astG3DCap( int cap, int value ){
/*
*+
*  Name:
*     astG3DCap

*  Purpose:
*     Indicate if this grf3d module has a given capability.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DCap( int cap, int value )

*  Description:
*     This function is called by the AST Plot class to determine if the
*     grf3d module has a given capability, as indicated by the "cap"
*     argument.

*  Parameters:
*     cap
*        The capability being inquired about.
*     value
*        The use of this parameter depends on the value of "cap".

*  Returned Value:
*     The return value, as described above. Zero should be returned if
*     the supplied capability is not recognised.

*-
*/

/* Suppress unused parameter warnings */
   (void) cap;
   (void) value;

   return 0;
}

int astG3DFlush( void ){
/*
*+
*  Name:
*     astG3DFlush

*  Purpose:
*     Flush all pending graphics to the output device.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DFlush( void )

*  Description:
*     This function ensures that the display device is up-to-date,
*     by flushing any pending graphics to the output device.

*  Parameters:
*     None.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*-
*/

   c_plflush();
   return 1;
}

int astG3DLine( int n, float *x, float *y, float *z ){
/*
*+
*  Name:
*     astG3DLine

*  Purpose:
*     Draw a polyline (i.e. a set of connected lines).

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DLine( int n, float *x, float *y, float *z )

*  Description:
*     This function displays lines joining the given positions.

*  Parameters:
*     n
*        The number of positions to be joined together.
*     x
*        A pointer to an array holding the "n" x values.
*     y
*        A pointer to an array holding the "n" y values.
*     z
*        A pointer to an array holding the "n" z values.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - A camera must have been established prior to calling this
*     function using either PL3DSetCamera or PL3DAutoCamera.
*     -  Nothing is done if "n" is less than 2, or if a NULL pointer is
*     given for either "x", "y" or "z".

*-
*/

/* Local Variables: */
   int result = 0;
   int i;
   float *h, *r;
   PLFLT *ph, *pr;

/* Do nothing if we have less than 2 points, but do not indicate an error. */
   if( n < 2 ){
      result = 1;

/* Check the pointers. */
   } else if( x && y && z ) {

/* Allocate work space for the 2D world coordinate positions. */
      h = astMalloc( sizeof( float )*(size_t) n );
      r = astMalloc( sizeof( float )*(size_t) n );
      ph = (PLFLT *) astMalloc( sizeof( PLFLT )*(size_t) n );
      pr = (PLFLT *) astMalloc( sizeof( PLFLT )*(size_t) n );
      if( astOK ) {

/* Convert the supplied points from 3D world coordinates to 2D world
   (i.e. screen) coordinates. If successful, plot the lines. */
         if( transform( NULL, n, x, y, z, h, r ) ) {
            for( i = 0; i < n; i++ ){
               ph[ i ] = (PLFLT) h[ i ];
               pr[ i ] = (PLFLT) r[ i ];
            }
            c_plline( n, ph, pr );
            result = 1;
         }
      }

/* Free work space. */
      h = astFree( h );
      r = astFree( r );
      ph = (PLFLT *) astFree( (void *) ph );
      pr = (PLFLT *) astFree( (void *) pr );
   }
   return result;
}

int astG3DMark( int n, float *x, float *y, float *z, int type,
                float norm[3] ){
/*
*+
*  Name:
*     astG3DMark

*  Purpose:
*     Draw a set of markers.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DMark( int n, float *x, float *y, float *z, int type,
*                     float norm[3] )

*  Description:
*     This function draws markers centred at the given positions, on a
*     plane with a specified normal vector.

*  Parameters:
*     n
*        The number of markers to draw.
*     x
*        A pointer to an array holding the "n" x values.
*     y
*        A pointer to an array holding the "n" y values.
*     z
*        A pointer to an array holding the "n" z values.
*     type
*        An integer which can be used to indicate the type of marker symbol
*        required.
*     norm
*        The (x,y,z) components of a vector that is normal to the plane
*        containing the marker. The given vector passes through the marker
*        from the back to the front. If all components of this vector are
*        zero, then a normal vector pointing from the position of the
*        first marker towards the camera eye is used.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     -  Nothing is done if "n" is less than 1, or if a NULL pointer is
*     given for "x", "y" or "z".

*-
*/

/* Local Variables: */
   char just[3];
   float ref[3];
   float up[3];
   float tx[3], ty[3], tz[3];
   float vx[ MXSIDE ], vy[ MXSIDE ], vz[ MXSIDE ];
   float ch, ang, dang;
   float hpt, rpt;
   int i;
   int ns;
   PLFLT ph, pr;

/* Return if any of the coordinate pointers is NULL. */
   if( !x || !y || !z ) return 1;

/* Initialise */
   ns = 0;

/* Unless the "norm" vector is parallel to the z axis, we use an up vector
   that is parallel to the z axis. Otherwise we use an up vector parallel
   to the x axis. */
   if( norm[ 0 ] != 0.0 || norm[ 1 ] != 0.0 ) {
      up[ 0 ] = 0.0;
      up[ 1 ] = 0.0;
      up[ 2 ] = 1.0;
   } else {
      up[ 0 ] = 1.0;
      up[ 1 ] = 0.0;
      up[ 2 ] = 0.0;
   }

/* Create unit vectors along the three axes of the text plane
   coordinate system. */
   ref[ 0 ] = x[ 0 ];
   ref[ 1 ] = y[ 0 ];
   ref[ 2 ] = z[ 0 ];
   if( !getTextAxes( ref, up, norm, "CC", tx, ty, tz, just ) ) return 0;

/* For type > 0 or type >= -2 (simple markers), we project the center to
   2D and use c_plpoin. For type < -2, we draw regular polygons. */
   if( type > -3 ) {

/* Draw each marker by projecting its center to 2D. */
      for( i = 0; i < n; i++ ) {
         ref[ 0 ] = x[ i ];
         ref[ 1 ] = y[ i ];
         ref[ 2 ] = z[ i ];

/* Project the marker center to 2D screen coordinates. */
         if( !transform( NULL, 1, &ref[0], &ref[1], &ref[2], &hpt, &rpt ) ) return 0;

         ph = (PLFLT) hpt;
         pr = (PLFLT) rpt;

/* Use PLplot marker code. Map type to a PLplot symbol code.
   type > 0: use directly as Hershey code for c_plpoin.
   type == 0 or type == -1 or type == -2: use dot (code 1). */
         if( type > 0 ) {
            c_plpoin( 1, &ph, &pr, type );
         } else {
            c_plpoin( 1, &ph, &pr, 1 );
         }
      }

/* Regular polygons - create an array of text plane coordinates for the
   vertices of the polygon. */
   } else {

/* Get the character height in world coordinate units. */
      ch = getCharHeight();

/* Limit the number of sides that can be produced. */
      ns = -type;
      if( ns > MXSIDE ) ns = MXSIDE;

/* Calculate the angle subtended by each edge of the polygon. */
      dang = TWOPI/ns;
      ang = 0.0;

/* Loop round each vertex. */
      for( i = 0; i < ns; i++ ) {
         vx[ i ] = ch*sinf( ang );
         vy[ i ] = ch*cosf( ang );
         vz[ i ] = 0.0;
         ang += dang;
      }

/* Draw each marker in turn. */
      for( i = 0; i < n; i++ ) {

/* Store the centre world coords */
         ref[ 0 ] = x[ i ];
         ref[ 1 ] = y[ i ];
         ref[ 2 ] = z[ i ];

/* Draw the polygon, and return if anything goes wrong. */
         if( !Polygon( ns, vx, vy, vz, ref, tx, ty, tz ) ) return 0;
      }
   }

/* If we arrive here we have been successful, so return a non-zero value. */
   return 1;
}

int astG3DQch( float *ch ){
/*
*+
*  Name:
*     astG3DQch

*  Purpose:
*     Return the character height in world coordinates.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DQch( float *ch )

*  Description:
*     This function returns the height of characters drawn using astG3DText.

*  Parameters:
*     ch
*        A pointer to the float which is to receive the height of
*        characters drawn with astG3DText.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Since the 3D world coordinate axes are assumed to be equally
*     scaled, the height of text in world coordinate units is independent
*     of the orientation of the text. Therefore, this function returns
*     only one height value, unlike the equivalent 2D astGQch function
*     that returns two heights.
*-
*/
   *ch = getCharHeight();
   return 1;
}

int astG3DText( const char *text, float ref[3], const char *just, float up[3],
                float norm[3]  ){
/*
*+
*  Name:
*     astG3DText

*  Purpose:
*     Draw a character string.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DText( const char *text, float ref[3], const char *just,
*                     float up[3], float norm[3] )

*  Description:
*     This function displays a character string at a given position
*     on a given plane in 3D world coords, using a specified
*     justification and up-vector.

*  Parameters:
*     text
*        Pointer to a null-terminated character string to be displayed.
*     ref
*        The reference (x,y,z) coordinates.
*     just
*        A character string which specifies the location within the
*        text string which is to be placed at the reference position
*        given by x and y. The first character may be 'T' for "top",
*        'C' for "centre", or 'B' for "bottom", and specifies the
*        vertical location of the reference position. Note, "bottom"
*        corresponds to the base-line of normal text. Some characters
*        (eg "y", "g", "p", etc) descend below the base-line. The second
*        character may be 'L' for "left", 'C' for "centre", or 'R'
*        for "right", and specifies the horizontal location of the
*        reference position. If the string has less than 2 characters
*        then 'C' is used for the missing characters.
*     up
*        The (x,y,z) up-vector for the text. The actual up vector used is
*        the projection of the supplied vector onto the plane specified by
*        "norm".
*     norm
*        The (x,y,z) components of a vector that is normal to the plane
*        containing the text. The given vector passes through the text
*        from the back to the front. If all components of this vector are
*        zero, then a normal vector pointing towards the camera eye is used.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     -  A NULL value for "just" causes a value of "CC" to be used.
*-
*/

/* Local Variables: */
   char newjust[3];
   float tx[3], ty[3], tz[3];
   float h_ref, r_ref;
   float h_right, r_right;
   float h_up, r_up;
   float right2[3], up2[3];
   PLFLT fjust, dx, dy;

/* If the text has no printable characters, return without error. */
   if( !text || astChrLen( text ) == 0 ) return 1;

/* Create unit vectors along the three axes of the text plane
   coordinate system. */
   if( !getTextAxes( ref, up, norm, just, tx, ty, tz, newjust ) ) return 0;

/* Project the reference point to 2D screen coordinates. */
   if( !transform( NULL, 1, &ref[0], &ref[1], &ref[2], &h_ref, &r_ref ) ) return 0;

/* Project a point offset along the text baseline (tx) to determine the
   2D baseline direction. */
   right2[ 0 ] = ref[ 0 ] + tx[ 0 ];
   right2[ 1 ] = ref[ 1 ] + tx[ 1 ];
   right2[ 2 ] = ref[ 2 ] + tx[ 2 ];
   if( !transform( NULL, 1, &right2[0], &right2[1], &right2[2], &h_right, &r_right ) ) return 0;

/* The baseline direction vector in 2D screen coordinates. */
   dx = h_right - h_ref;
   dy = r_right - r_ref;

/* Determine horizontal justification for c_plptex. */
   if( newjust[ 1 ] == 'L' ) {
      fjust = 0.0;
   } else if( newjust[ 1 ] == 'R' ) {
      fjust = 1.0;
   } else {
      fjust = 0.5;
   }

/* Adjust the reference point vertically if needed. PLplot's c_plptex
   positions text at the half-height of the character cell. We need to
   shift the reference point along the projected up direction to match
   the requested vertical justification. */

/* Project a point offset along the up vector (ty) to determine the
   2D up direction. */
   up2[ 0 ] = ref[ 0 ] + ty[ 0 ];
   up2[ 1 ] = ref[ 1 ] + ty[ 1 ];
   up2[ 2 ] = ref[ 2 ] + ty[ 2 ];
   if( !transform( NULL, 1, &up2[0], &up2[1], &up2[2], &h_up, &r_up ) ) return 0;

/* The up direction in 2D screen coordinates. */
   {
      float ux2d = h_up - h_ref;
      float uy2d = r_up - r_ref;
      float ch = getCharHeight();
      float shift;

/* PLplot c_plptex positions at half-height. For 'B' (baseline), we need
   to shift up by 0.5 * char_height. For 'T' (top), shift down by 0.5.
   For 'C' (center), no shift needed. For 'M' (bottom), shift up by
   slightly more than baseline. */
      if( newjust[ 0 ] == 'B' || newjust[ 0 ] == 'M' ) {
         shift = 0.5;
      } else if( newjust[ 0 ] == 'T' ) {
         shift = -0.5;
      } else {
         shift = 0.0;
      }

/* Apply the vertical shift to the reference position in 2D coords. We
   scale the shift by the projected char height. To get the projected
   char height, find the 2D length of a character height along ty. */
      {
         float ref_up[3], h_ref_up, r_ref_up;
         float proj_ch;

         ref_up[ 0 ] = ref[ 0 ] + ty[ 0 ] * ch;
         ref_up[ 1 ] = ref[ 1 ] + ty[ 1 ] * ch;
         ref_up[ 2 ] = ref[ 2 ] + ty[ 2 ] * ch;
         if( !transform( NULL, 1, &ref_up[0], &ref_up[1], &ref_up[2],
                         &h_ref_up, &r_ref_up ) ) return 0;

         proj_ch = sqrtf( (h_ref_up - h_ref)*(h_ref_up - h_ref) +
                          (r_ref_up - r_ref)*(r_ref_up - r_ref) );

         if( proj_ch > 0.0 && shift != 0.0 ) {
            float uplen2d = sqrtf( ux2d*ux2d + uy2d*uy2d );
            if( uplen2d > 0.0 ) {
               h_ref += shift * proj_ch * ( ux2d / uplen2d );
               r_ref += shift * proj_ch * ( uy2d / uplen2d );
            }
         }
      }
   }

/* Draw the text using PLplot. */
   c_plptex( (PLFLT) h_ref, (PLFLT) r_ref, (PLFLT) dx, (PLFLT) dy,
             fjust, text );

   return 1;
}

int astG3DTxExt( const char *text, float ref[3], const char *just,
                 float up[3], float norm[3], float *xb, float *yb,
                 float *zb, float bl[3] ){
/*
*+
*  Name:
*     astG3DTxExt

*  Purpose:
*     Get the extent of a character string.

*  Synopsis:
*     #include "grf3d.h"
*     int astG3DTxExt( const char *text, float ref[3], const char *just,
*                      float up[3], float norm[3], float *xb, float *yb,
*                      float *zb, float bl[3] )

*  Description:
*     This function returns the corners of a box which would enclose the
*     supplied character string if it were displayed using astG3DText.
*
*     The returned box INCLUDES any leading or trailing spaces.

*  Parameters:
*     text
*        Pointer to a null-terminated character string to be displayed.
*     ref
*        The reference (x,y,z) coordinates.
*     just
*        A character string which specifies the location within the
*        text string which is to be placed at the reference position
*        given by x and y. The first character may be 'T' for "top",
*        'C' for "centre", 'B' for "baseline", or "M" for "bottom", and
*        specifies the vertical location of the reference position. Note,
*        "baseline" corresponds to the base-line of normal text. Some
*        characters (eg "y", "g", "p", etc) descend below the base-line,
*        and so "M" and "B" will produce different effects for such
*        characters. The second character may be 'L' for "left", 'C' for
*        "centre", or 'R' for "right", and specifies the horizontal
*        location of the reference position. If the string has less than
*        2 characters then 'C' is used for the missing characters.
*     up
*        The (x,y,z) up-vector for the text. The actual up vector used is
*        the projection of the supplied vector onto the plane specified by
*        "norm".
*     norm
*        The (x,y,z) components of a vector that is normal to the plane
*        containing the text. The given vector passes through the text
*        from the back to the front. If all components of this vector are
*        zero, then a normal vector pointing towards the camera eye is used.
*     xb
*        An array of 4 elements in which to return the x coordinate of
*        each corner of the bounding box.
*     yb
*        An array of 4 elements in which to return the y coordinate of
*        each corner of the bounding box.
*     zb
*        An array of 4 elements in which to return the z coordinate of
*        each corner of the bounding box.
*     bl
*        The 3D world coordinates at the left hand end of the text
*        baseline.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     -  The order of the corners is anti-clockwise starting at the
*        bottom left when viewing the text normally (i.e. face on).
*     -  A NULL value for "just" causes a value of "CC" to be used.
*-
*/

/* Local Variables: */
   char newjust[3];
   int i;
   float tx[3], ty[3], tz[3];

/* Initialise the returned values to indicate no box available. */
   for( i = 0; i < 4; i++ ){
      xb[ i ] = 0.0;
      yb[ i ] = 0.0;
      zb[ i ] = 0.0;
   }

/* If there is nothing to plot return without error. */
   if( !text || astChrLen( text ) == 0 ) return 1;

/* Create unit vectors along the three axes of the text plane
   coordinate system. */
   if( !getTextAxes( ref, up, norm, just, tx, ty, tz, newjust ) ) return 0;

/* Find the bounding box. */
   return TxExt3D( text, ref, newjust, tx, ty, tz, xb, yb, zb, bl );
}


/* Public functions specific to this PLplot implementation. */
/* ======================================================== */
/* Other implementations of the grf3d interface can ignore the following
   functions. They provide control of the 3D view. */

int PL3DSetCamera( float eye[3], float target[3], float up[3], float screen ){
/*
*+
*  Name:
*     PL3DSetCamera

*  Purpose:
*     Store new camera settings for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DSetCamera( float eye[3], float target[3], float up[3],
*                        float screen )

*  Description:
*     This function stores new camera settings for the current PLplot
*     stream.
*
*     A "camera" describes the projection of the 3D world coordinate
*     space onto a 2D "screen". This screen corresponds to the 2D viewing
*     surface used by PLplot. The 2D window used by PLplot (as set by
*     c_plwind, etc) defines the bounds of the screen area that is visible
*     in the PLplot viewport.
*
*     The 3D world coordinate axes (x,y,z) are such that if "z" is
*     vertically upwards and "x" points to the right, then "y" goes
*     out of the paper away from you. All 3 axes are assumed to have equal
*     scale.
*
*     A camera defines a second set of 3D axes (called "(u,v,w)") with
*     origin at the 3D world coordinates given by "eye":
*
*     -  the "w" axis points towards the position given by "target"
*     -  the "v" axis is perpendicular to the "w" axis and is in the plane
*        spanned by the "w" axis and the supplied "up" vector
*     -  the "u" axis is perpendicular to both "w" and "v" and points to
*        the left when looking from the eye along the w axis with the v
*        axis upwards
*
*     Thus the "v" axis is parallel to "vertically up" on the 2D screen,
*     "u" is parallel to "horizontally to the left", and "w" is
*     perpendicular to the screen, pointing towards the target.
*
*     The screen is a plane perpendicular to the "w" axis, at the "w" axis
*     value given by "screen". A 2D cartesian coordinate system (h,r) is
*     defined on the screen, with origin at the point where the "w" axis
*     intersects the screen. The "h" (horizontal) axis is parallel to the
*     "u" axis but points in the opposite direction (to the left), and the
*     "r" (vertical) axis is parallel to the "v" axis. The (h,r) system is
*     taken to be the same as the PLplot 2D world coordinate system, and
*     c_plwind can therefore be used to specify the rectangular area on the
*     screen that is mapped onto the PLplot viewport.
*
*     It is assumed that all axes (x,y,z), (u,v,w) and (h,r) are measured
*     in the same units.

*  Parameters:
*     eye
*        The position vector of the camera's "eye", in 3D world coordinates.
*     target
*        The position vector of a point in 3D world coordinates that is
*        at the centre of the camera's view. In other words, the camera is
*        looking towards this point. Zero will be returned if the target
*        is the same position as the eye.
*     up
*        A vector in 3D world coordinates that will appear vertically
*        upwards when projected onto the screen. Zero will be returned if
*        the up vector has zero length or is parallel to the line joining
*        the eye and the target.
*     screen
*        The distance from the camera's eye to the projection screen. If
*        this is zero, then an orthographic projection is used.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*-
*/

/* Local Variables: */
   Camera *cam;
   float *u, *v, *w;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 0 );
   if( cam ) {
      result = 1;

/* Store the supplied values in the camera. */
      memcpy( cam->target_vector, target, 3*sizeof( float ) );
      memcpy( cam->eye_vector, eye, 3*sizeof( float ) );
      cam->screen_distance = screen;

/* Get pointers to the three rows of the w2c_matrix. This is a 3x3 matrix that
   rotates vectors in the (x,y,z) system into vectors in the (u,v,w)
   system. Each row in the matrix is a unit vector along the u, v or w
   axes. */
      u = cam->w2c_matrix;
      v = u + 3;
      w = v + 3;

/* The "w" axis points from the eye to the target, so get the vector from
   the eye to the target and normalise it. */
      vectorSub( target, eye, w );
      if( ! vectorNorm( w ) ) result = 0;

/* The "v" vector is in the plane spanned by the "w" axis and the "up"
   vector. Get the normal to this plane, storing the result temporarily
   in the "u" vector. */
      vectorProduct( w, up, u );

/* The "v" vector is normal to the vector found above and is also normal
   to the "w" axis. Get this vector and normalise it. */
      vectorProduct( u, w, v );
      if( ! vectorNorm( v ) ) result = 0;

/* The "u" vector is perpendicular to both the "w" and "v" vectors. */
      vectorProduct( v, w, u );
      if( ! vectorNorm( u ) ) result = 0;

/* Use "v" as the stored up vector (the supplied "up" vector is not
   necessarily the same as "v"). */
      memcpy( cam->up_vector, v, 3*sizeof( float ) );

/* Set a flag that indicates that the Camera is usable. */
      cam->ok_flag = result ? CAMERA_OK : CAMERA_OK/2;
   }

   return result;
}

int PL3DGetCamera( float eye[3], float target[3], float up[3], float *screen ){
/*
*+
*  Name:
*     PL3DGetCamera

*  Purpose:
*     Get the current camera settings for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DGetCamera( float eye[3], float target[3], float up[3],
*                        float *screen )

*  Description:
*     This function retrieves the current camera settings for the current
*     PLplot stream. See PL3DSetCamera for more info. Any of the supplied
*     parameters can be set to NULL if the information is not needed.

*  Parameters:
*     eye
*        The position vector of the camera's "eye", in 3D world coordinates.
*     target
*        The position vector of a point in 3D world coordinates that is
*        at the centre of the camera's view.
*     up
*        A vector in 3D world coordinates that will appear vertically
*        upwards when projected onto the screen.
*     screen
*        The distance from the camera's eye to the projection screen.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 0 );
   if( cam ) {
      result = 1;

/* Copy the current values into the supplied arrays. */
      if( target ) memcpy( target, cam->target_vector, 3*sizeof( float ) );
      if( eye ) memcpy( eye, cam->eye_vector, 3*sizeof( float ) );
      if( up ) memcpy( up, cam->up_vector, 3*sizeof( float ) );
      if( screen ) *screen = cam->screen_distance;
      result = ( cam->ok_flag == CAMERA_OK );
   }

   return result;
}

int PL3DSetEye( float eye[3] ){
/*
*+
*  Name:
*     PL3DSetEye

*  Purpose:
*     Store a new camera eye position for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DSetEye( float eye[3] )

*  Description:
*     This function modifies the camera eye position for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.

*  Parameters:
*     eye
*        The position vector of the camera's "eye", in 3D world coordinates.
*        Zero is returned if the new eye position is the same as the
*        existing camera target position.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* If so, modify the camera values, using the supplied eye position but
   retaining the other camera settings. */
      result = PL3DSetCamera( eye, cam->target_vector, cam->up_vector,
                              cam->screen_distance );
   }

   return result;
}

int PL3DRotateEye( int dir, float angle ){
/*
*+
*  Name:
*     PL3DRotateEye

*  Purpose:
*     Move the eye on a great circle around the current target position.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DRotateEye( int dir, float angle )

*  Description:
*     This function modifies the camera eye position for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.
*
*     The eye is moved by a given distance along an arc of a great circle
*     centred on the current target position. The target position itself
*     is left unchanged.

*  Parameters:
*     dir
*        The direction in which to move the eye position:
*        1 - Move eye upwards
*        2 - Move eye downwards
*        3 - Move eye left
*        4 - Move eye right
*     angle
*        The arc-distance, in degrees, by which to move the eye.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;
   int i;
   float e[3], f[3], emod, neweye[3], sina, cosa;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* Get the cos and sine of the supplied angle. */
      cosa = cosf( angle*TWOPI/360 );
      sina = sinf( angle*TWOPI/360 );

/* Get the vector from the target to the eye, get its modulus. */
      vectorSub( cam->eye_vector, cam->target_vector, e );
      emod = vectorModulus( e );

/* If we are moving the eye upwards, find the new eye position. */
      if( dir == 1 ) {
         for( i = 0; i < 3; i++ ) {
            neweye[ i ] = e[ i ]*cosa + emod*cam->up_vector[ i ]*sina +
                          cam->target_vector[ i ];
         }

/* If we are moving the eye downwards, find the new eye position. */
      } else if( dir == 2 ) {
         for( i = 0; i < 3; i++ ) {
            neweye[ i ] = e[ i ]*cosa - emod*cam->up_vector[ i ]*sina +
                          cam->target_vector[ i ];
         }

/* If we are moving the eye left or right we need a vector in the plane
   of rotation that is at right angles to "e", and points to the right
   of the eye. */
      } else {
         vectorProduct( cam->up_vector, e, f );
         vectorNorm( f );

/* Get the new eye position. */
         if( dir == 3 ) {
            for( i = 0; i < 3; i++ ) {
               neweye[ i ] = e[ i ]*cosa - emod*f[ i ]*sina + cam->target_vector[ i ];
            }

         } else {
            for( i = 0; i < 3; i++ ) {
               neweye[ i ] = e[ i ]*cosa + emod*f[ i ]*sina + cam->target_vector[ i ];
            }
         }
      }

/* Modify the camera eye vector, retaining the other camera settings. */
      result = PL3DSetCamera( neweye, cam->target_vector, cam->up_vector,
                              cam->screen_distance );
   }

   return result;
}

int PL3DRotateTarget( int axis, float angle ){
/*
*+
*  Name:
*     PL3DRotateTarget

*  Purpose:
*     Move the target by rotating the (u,v,w) coordinate system.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DRotateTarget( int axis, float angle )

*  Description:
*     This function modifies the camera target position for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.
*
*     The (u,v,w) coordinate system that defines the position of the
*     target relative to the eye is rotated, and the target is placed at
*     the end of the "w" axis. The eye position is left unchanged. This
*     is equivalent to a roll, pitch or yaw of the camera.

*  Parameters:
*     axis
*        The axis around which to rotate:
*        1 - the U axis (pitch)
*        2 - the V axis (yaw)
*        3 - the W axis (roll)
*     angle
*        The angle, in degrees, by which to rotate around the specified
*        axis.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   float m[ 9 ], newmat[ 9 ];
   Camera *cam;
   int result = 0;
   int i, j, k;
   float sina, cosa, *p, *p1, *p2;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {
      result = 1;

/* Get the cos and sine of the supplied angle. */
      cosa = cosf( angle*TWOPI/360 );
      sina = sinf( angle*TWOPI/360 );

/* Get the 3x3 rotation matrix. */
      if( axis == 1 ) {
         m[ 0 ] = 1.0;
         m[ 1 ] = 0.0;
         m[ 2 ] = 0.0;
         m[ 3 ] = 0.0;
         m[ 4 ] = cosa;
         m[ 5 ] = -sina;
         m[ 6 ] = 0.0;
         m[ 7 ] = sina;
         m[ 8 ] = cosa;

      } else if( axis == 2 ) {
         m[ 0 ] = cosa;
         m[ 1 ] = 0.0;
         m[ 2 ] = -sina;
         m[ 3 ] = 0.0;
         m[ 4 ] = 1.0;
         m[ 5 ] = 0.0;
         m[ 6 ] = sina;
         m[ 7 ] = 0.0;
         m[ 8 ] = cosa;

      } else if( axis == 3 ) {
         m[ 0 ] = cosa;
         m[ 1 ] = -sina;
         m[ 2 ] = 0.0;
         m[ 3 ] = sina;
         m[ 4 ] = cosa;
         m[ 5 ] = 0.0;
         m[ 6 ] = 0.0;
         m[ 7 ] = 0.0;
         m[ 8 ] = 1.0;

      } else {
         result = 0;
      }

/* If the axis value is OK, multiply the existing w2c_matrix by the
   rotation matrix to get the new camera matrix. The w2c_matrix is a
   3x3 matrix that rotates vectors in the (x,y,z) system into vectors
   in the (u,v,w) system. Each row in the matrix is a unit vector
   along the u, v or w axes. */
      if( result ) {
         p = newmat;
         for( i = 0; i < 3; i++ ) {
            for( j = 0; j < 3; j++, p++ ) {
               p1 = m + i*3;
               p2 = cam->w2c_matrix + j;
               *p = 0.0;
               for( k = 0; k < 3; k++ ) {
                  *p += (*p1) * (*p2);
                  p1++;
                  p2 += 3;
               }
            }
         }

/* Store the new camera matrix. */
         memcpy( cam->w2c_matrix, newmat, sizeof(float)*9 );

/* Store corresponding new values for the target and up vectors. */
         for( k = 0; k < 3; k++ ) {
            cam->target_vector[ k ] = cam->eye_vector[ k ] +
                                      newmat[ 6 + k ]*cam->screen_distance;
         }
         memcpy( cam->up_vector, newmat + 3, 3*sizeof( float ) );
      }
   }

   return result;
}

int PL3DForward( float distance ){
/*
*+
*  Name:
*     PL3DForward

*  Purpose:
*     Move the eye forward towards the target.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DForward( float distance )

*  Description:
*     This function modifies the camera eye position for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.
*
*     The eye is moved forward by a given distance towards the target
*     point, and the target point is also moved forward so that the
*     distance between eye and target remains unchanged.

*  Parameters:
*     distance
*        The distance to move the eye and target, given as a fraction of
*        the distance between the eye and the target.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;
   int i;
   float e[3], newtarg[3], neweye[3];

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* Get the vector from the eye to the target. */
      vectorSub( cam->target_vector, cam->eye_vector, e );

/* Find the new eye and target positions. */
      for( i = 0; i < 3; i++ ){
         neweye[ i ] = cam->eye_vector[ i ] + e[ i ]*distance;
         newtarg[ i ] = cam->target_vector[ i ] + e[ i ]*distance;
      }

/* Modify the camera eye and target vectors, retaining the other camera
   settings. */
      result = PL3DSetCamera( neweye, newtarg, cam->up_vector,
                              cam->screen_distance );
   }

   return result;
}


int PL3DFindNearest( int n, float *x, float *y, float *z, int *iclose ){
/*
*+
*  Name:
*     PL3DFindNearest

*  Purpose:
*     Find the closest point to the eye.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DFindNearest( int n, float *x, float *y, float *z, int *iclose )

*  Description:
*     This function checks every supplied point and returns the index of
*     the point that is closest to the eye.

*  Parameters:
*     n
*        The number of points to check.
*     x
*        Pointer to an array of "n" X values.
*     y
*        Pointer to an array of "n" Y values.
*     z
*        Pointer to an array of "n" Z values.
*     iclose
*        Pointer to an int in which to return the index of the nearest
*        point.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;
   int i;
   float c[3], v[3];
   float d;
   float dmin;

   *iclose = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {
      result = 1;

/*  Loop through all the supplied positions. */
      dmin = FLT_MAX;
      for( i = 0; i < n; i++ ) {

/* Get the required distance. */
         v[ 0 ] = x[ i ];
         v[ 1 ] = y[ i ];
         v[ 2 ] = z[ i ];
         vectorSub( v, cam->eye_vector, c );
         d = vectorModulus( c );

/* If this is the smallest distance so far, remember it. */
         if( d < dmin ) {
            dmin = d;
            *iclose = i;
         }
      }
   }

   return result;
}


int PL3DSetTarget( float target[3] ){
/*
*+
*  Name:
*     PL3DSetTarget

*  Purpose:
*     Store a new camera target position for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DSetTarget( float target[3] )

*  Description:
*     This function modifies the camera target position for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.

*  Parameters:
*     target
*        The position vector of the camera's "target", in 3D world coordinates.
*        Zero is returned if the new target position is the same as the
*        existing camera eye position.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* If so, modify the camera values, using the supplied target position but
   retaining the other camera settings. */
      result = PL3DSetCamera( cam->eye_vector, target, cam->up_vector,
                              cam->screen_distance );
   }

   return result;
}


int PL3DSetUp( float up[3] ){
/*
*+
*  Name:
*     PL3DSetUp

*  Purpose:
*     Store a new camera up vector for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DSetUp( float up[3] )

*  Description:
*     This function modifies the camera up vector for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.

*  Parameters:
*     up
*        The new up vector, in 3D world coordinates. Zero is returned if
*        the new up vector is parallel to the line joining the eye and
*        the target positions.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* If so, modify the camera values, using the supplied up vector but
   retaining the other camera settings. */
      result = PL3DSetCamera( cam->eye_vector, cam->target_vector, up,
                              cam->screen_distance );
   }

   return result;
}


int PL3DSetScreen( float screen ){
/*
*+
*  Name:
*     PL3DSetScreen

*  Purpose:
*     Store a new camera screen distance for the current PLplot stream.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DSetScreen( float screen )

*  Description:
*     This function modifies the camera screen distance for the current
*     PLplot stream. Other camera settings are left unchanged. See
*     PL3DSetCamera for more details.

*  Parameters:
*     screen
*        The distance from the camera's eye to the projection screen in
*        3D world coordinate units. If this is zero, then an orthographic
*        projection is used.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*     - This function can only be called to modify an existing Camera.
*     Consequently it returns zero if a camera has not already been set
*     for the current PLplot stream by calling PL3DSetCamera.
*-
*/

/* Local Variables: */
   Camera *cam;
   int result = 0;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 1 );
   if( cam ) {

/* If so, modify the camera values, using the supplied screen distance but
   retaining the other camera settings. */
      result = PL3DSetCamera( cam->eye_vector, cam->target_vector,
                              cam->up_vector, screen );
   }

   return result;
}

int PL3DAutoCamera( float lbnd[3], float ubnd[3] ){
/*
*+
*  Name:
*     PL3DAutoCamera

*  Purpose:
*     Set up a default camera to view a given box of 3D world coords.

*  Synopsis:
*     #include "pl3d.h"
*     int PL3DAutoCamera( float lbnd[3], float ubnd[3] )

*  Description:
*     This function sets up the camera and the 2D PLplot window for the
*     current stream so that it produces a default view of a specified
*     volume of 3D world coordinate space.

*  Parameters:
*     lbnd
*        The lower bounds of the volume of 3D world coordinates that
*        is to be visible using the camera and 2D PLplot window.
*     ubnd
*        The upper bounds of the volume of 3D world coordinates that
*        is to be visible using the camera and 2D PLplot window.

*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.

*  Notes:
*     - Zero is returned if no PLplot stream has been opened prior to
*     calling this function.
*-
*/

/* Local Variables: */
   float target[3], eye[3], up[3], screen, dx, dy, dz, hlo, hhi, rlo, rhi;
   float x[8], y[8], z[8], h[8], r[8];
   Camera *cam;
   int result = 0;
   int i;

/* Get a pointer to the Camera structure for the current PLplot stream.
   Return without action if no PLplot stream is open. */
   cam = getCamera( 0 );
   if( cam ) {

/* The target position (i.e. the position towards which the camera is
   looking) is the middle of the volume. */
      target[ 0 ] = 0.5*( lbnd[ 0 ] + ubnd[ 0 ] );
      target[ 1 ] = 0.5*( lbnd[ 1 ] + ubnd[ 1 ] );
      target[ 2 ] = 0.5*( lbnd[ 2 ] + ubnd[ 2 ] );

/* The eye is slightly offset from a corner view. */
      eye[ 0 ] = 0.85*ubnd[ 0 ] + 0.15*lbnd[ 0 ];
      eye[ 1 ] = 0.75*ubnd[ 1 ] + 0.25*lbnd[ 1 ];
      eye[ 2 ] = 0.75*ubnd[ 2 ] + 0.25*lbnd[ 2 ];

/* The eye is seven times the size of the box away from the box centre. */
      eye[ 0 ] = 7*(eye[ 0 ] - target[ 0 ] ) + target[ 0 ];
      eye[ 1 ] = 7*(eye[ 1 ] - target[ 1 ] ) + target[ 1 ];
      eye[ 2 ] = 7*(eye[ 2 ] - target[ 2 ] ) + target[ 2 ];

/* The up vector is parallel to the Z axis. */
      up[ 0 ] = 0.0;
      up[ 1 ] = 0.0;
      up[ 2 ] = 1.0;

/* The screen is at the centre of the box. */
      dx = eye[ 0 ] - target[ 0 ];
      dy = eye[ 1 ] - target[ 1 ];
      dz = eye[ 2 ] - target[ 2 ];
      screen = sqrtf( dx*dx + dy*dy + dz*dz );

/* Set the camera. */
      if( PL3DSetCamera( eye, target, up, screen ) ) {

/* Get the 3D World coords at the corners of the volume. */
         x[ 0 ] = ubnd[ 0 ];
         x[ 1 ] = ubnd[ 0 ];
         x[ 2 ] = lbnd[ 0 ];
         x[ 3 ] = lbnd[ 0 ];
         x[ 4 ] = ubnd[ 0 ];
         x[ 5 ] = ubnd[ 0 ];
         x[ 6 ] = lbnd[ 0 ];
         x[ 7 ] = lbnd[ 0 ];

         y[ 0 ] = lbnd[ 1 ];
         y[ 1 ] = ubnd[ 1 ];
         y[ 2 ] = ubnd[ 1 ];
         y[ 3 ] = lbnd[ 1 ];
         y[ 4 ] = lbnd[ 1 ];
         y[ 5 ] = ubnd[ 1 ];
         y[ 6 ] = ubnd[ 1 ];
         y[ 7 ] = lbnd[ 1 ];

         z[ 0 ] = lbnd[ 2 ];
         z[ 1 ] = lbnd[ 2 ];
         z[ 2 ] = lbnd[ 2 ];
         z[ 3 ] = lbnd[ 2 ];
         z[ 4 ] = ubnd[ 2 ];
         z[ 5 ] = ubnd[ 2 ];
         z[ 6 ] = ubnd[ 2 ];
         z[ 7 ] = ubnd[ 2 ];

/* Transform these into screen coordinates. */
         if( transform( cam, 8, x, y, z, h, r ) ) {

/* Find the bounds in h and r of the projection of the volume. */
            hlo = FLT_MAX;
            hhi = -FLT_MAX;
            rlo = FLT_MAX;
            rhi = -FLT_MAX;

            for( i = 0; i < 8; i++ ) {
               if( h[ i ] < hlo ) hlo = h[ i ];
               if( h[ i ] > hhi ) hhi = h[ i ];
               if( r[ i ] < rlo ) rlo = r[ i ];
               if( r[ i ] > rhi ) rhi = r[ i ];
            }

/* Extend these bounds by 5% at each end */
            dx = 0.05*( hhi - hlo );
            hhi += dx;
            hlo -= dx;

            dy = 0.05*( rhi - rlo );
            rhi += dy;
            rlo -= dy;

/* If the box has non-zero area, set it as the 2D PLplot window, track
   the bounds, and indicate success. */
            if( rlo < rhi && hlo < hhi ) {
               c_plwind( (PLFLT) hlo, (PLFLT) hhi, (PLFLT) rlo, (PLFLT) rhi );
               win_x1 = hlo;
               win_x2 = hhi;
               win_y1 = rlo;
               win_y2 = rhi;
               result = 1;
            }
         }
      }
   }
   return result;
}


/* Private functions for this module */
/* ================================= */

static int TextCam( Camera *textcam, float ref[3], float tx[3], float ty[3],
                    float tz[3] ){
/*
*  Name:
*     TextCam

*  Purpose:
*     Create a Camera that converts 3D text plane coordinates into 2D world
*     coordinates.

*  Description:
*     This function initialises the contents of a supplied Camera
*     structure so that the Camera describes the transformation from 3D
*     "text plane" coordinates to 2D world coordinates. The text
*     plane coordinate system is defined by three vectors along its x, y
*     and z axes, and an origin position.
*
*     Text plane coordinates describe a plane upon which 2D graphics such
*     as text is drawn. The X axis is parallel to the text base line, the
*     Y axis is the text up vector, and the Z axis is perpendicular to
*     the text, passing from the back of the text to the front of the text.

*  Parameters:
*     textcam
*        The Camera structure which is to be modified.
*     ref
*        The (x,y,z) coordinates at the text plane origin.
*     tx
*        A unit vector (expressed in 3D world coords) along the text plane
*        X axis.
*     ty
*        A unit vector (expressed in 3D world coords) along the text plane
*        Y axis.
*     tz
*        A unit vector (expressed in 3D world coords) along the text plane
*        Z axis.
*/

/* Local Variables: */
   Camera *cam;
   float dx, dy, dz;
   int i;
   float a, b, c;

/* Get the Camera for the current device identifier. Abort if no camera
   is available. This camera describes the transformation from 3D world
   coordinates (x,y,z) to 2D world coordinates (screen coordinates) (h,r). */
   cam = getCamera( 1 );
   if( !cam ) return 0;

/* Create a Camera structure that describes the transformation from
   text plane coordinates to 2D world coords, putting the origin of text
   plane coordinates at the given reference position. */
   dx = cam->eye_vector[ 0 ] - ref[ 0 ];
   dy = cam->eye_vector[ 1 ] - ref[ 1 ];
   dz = cam->eye_vector[ 2 ] - ref[ 2 ];

   textcam->eye_vector[ 0 ] = tx[ 0 ]*dx + tx[ 1 ]*dy + tx[ 2 ]*dz;
   textcam->eye_vector[ 1 ] = ty[ 0 ]*dx + ty[ 1 ]*dy + ty[ 2 ]*dz;
   textcam->eye_vector[ 2 ] = tz[ 0 ]*dx + tz[ 1 ]*dy + tz[ 2 ]*dz;

   for( i = 0; i < 8; i += 3 ) {
      a = cam->w2c_matrix[ i ];
      b = cam->w2c_matrix[ i + 1 ];
      c = cam->w2c_matrix[ i + 2 ];
      textcam->w2c_matrix[ i     ] = a*tx[ 0 ] + b*tx[ 1 ] + c*tx[ 2 ];
      textcam->w2c_matrix[ i + 1 ] = a*ty[ 0 ] + b*ty[ 1 ] + c*ty[ 2 ];
      textcam->w2c_matrix[ i + 2 ] = a*tz[ 0 ] + b*tz[ 1 ] + c*tz[ 2 ];
   }

   textcam->screen_distance = cam->screen_distance;
   textcam->ok_flag = CAMERA_OK;

   return 1;
}

static int Polygon( int nside, float *vx, float *vy, float *vz, float ref[3],
                    float tx[3], float ty[3], float tz[3]  ){
/*
*  Name:
*     Polygon

*  Purpose:
*     Draw a regular polygon.

*  Description:
*     This function draws a polygon centred at a given position on a
*     given plane in 3D world coords. The polygon vertices are specified
*     in text plane coordinates via vx, vy and vz.

*  Parameters:
*     nside
*        Number of sides for the polygon.
*     vx
*        Pointer to an array of "nside" text plane X axis values.
*     vy
*        Pointer to an array of "nside" text plane Y axis values.
*     vz
*        Pointer to an array of "nside" text plane Z axis values.
*     ref
*        The (x,y,z) coordinates at the polygon centre.
*     tx
*        A unit vector along the text plane X axis.
*     ty
*        A unit vector along the text plane Y axis.
*     tz
*        A unit vector along the text plane Z axis.
*/

/* Local Variables: */
   Camera newcam;
   float h[ MXSIDE ], r[ MXSIDE ];
   PLFLT ph[ MXSIDE ], pr[ MXSIDE ];
   int i;

/* Check the number of points. */
   if( nside > MXSIDE) return 0;

/* Create a Camera structure that describes the transformation from
   text plane coordinates to 2D world coords, putting the origin of text
   plane coordinates at the given reference position. */
   if( !TextCam( &newcam, ref, tx, ty, tz ) ) return 0;

/* Transform the given text plane coordinates into 2D world coordinates. */
   if( !transform( &newcam, nside, vx, vy, vz, h, r ) ) return 0;

/* Convert to PLFLT and draw the polygon. */
   for( i = 0; i < nside; i++ ) {
      ph[ i ] = (PLFLT) h[ i ];
      pr[ i ] = (PLFLT) r[ i ];
   }
   c_plfill( nside, ph, pr );

/* If we get here we have succeeded so return a non-zero value. */
   return 1;
}

static int TxExt3D( const char *text, float ref[3], const char *just,
                    float tx[3], float ty[3], float tz[3], float *xb,
                    float *yb, float *zb, float bl[3] ){
/*
*  Name:
*     TxExt3D

*  Purpose:
*     Get the extent of a character string.

*  Description:
*     This function returns the corners of a box which would enclose the
*     supplied character string if it were displayed using astG3DText.
*     The returned box includes any leading or trailing spaces.
*
*     Unlike the PGPLOT version (TxExt), this function estimates the text
*     metrics from the PLplot character height and string width rather than
*     querying individual Hershey glyph grid data.

*  Parameters:
*     text
*        Pointer to a null-terminated character string.
*     ref
*        The reference (x,y,z) coordinates.
*     just
*        Text justification string.
*     tx
*        A unit vector along the text plane X axis.
*     ty
*        A unit vector along the text plane Y axis.
*     tz
*        A unit vector along the text plane Z axis.
*     xb
*        An array of 4 elements for the x coordinates of the bounding box.
*     yb
*        An array of 4 elements for the y coordinates of the bounding box.
*     zb
*        An array of 4 elements for the z coordinates of the bounding box.
*     bl
*        The 3D world coordinates at the left hand end of the text baseline.
*/

/* Local Variables: */
   float ch;
   float txlo, txhi, tylo, tyhi, tyzero;
   float w;
   float phys_w;
   PLFLT def_chr, chr_ht;
   int i;

/* Initialise the returned values to indicate no box available. */
   for( i = 0; i < 4; i++ ){
      xb[ i ] = 0.0;
      yb[ i ] = 0.0;
      zb[ i ] = 0.0;
   }

/* If the text is empty, return without error. */
   if( !text || strlen( text ) == 0 ) return 1;

/* Get the character height in world coordinate units. */
   ch = getCharHeight();

/* We estimate the bounding box in text plane coordinates. The text plane
   is defined with origin at the reference position, X increasing along
   the baseline, and Y increasing along the up vector.

   First, estimate the string width in world coordinate units.
   Get the PLplot character height in mm. */
   c_plgchr( &def_chr, &chr_ht );

/* Compute string width in mm using plstrl if available, otherwise
   estimate from character count. */
#ifdef HAVE_PLSTRL
   phys_w = (float)plstrl( text );
#else
   phys_w = (float)(strlen( text ) * chr_ht * 0.6);
#endif

/* Convert the width from mm to world coordinate units. We compute the
   ratio of mm to world units using the character height:
   chr_ht (mm) corresponds to ch (world units). */
   if( chr_ht > 0.0 ) {
      txhi = phys_w * ( ch / chr_ht );
   } else {
      txhi = ch * strlen( text ) * 0.6;
   }
   txlo = 0.0;

/* For the vertical extent, use the same conventions as PGPLOT:
   top = ch (one character height above baseline),
   bottom = -0.2*ch (descender depth below baseline). */
   tyhi = ch;
   tylo = -0.2 * ch;
   tyzero = 0.0;

/* Adjust the text plane bounding box to take account of the specified
   text justification. The above process implicitly assumed a
   justification of "BL". */
   if( !just || just[ 0 ] == 'C' || just[ 0 ] == 0 ){
      w = 0.5*( tyhi + tylo );
      tylo -= w;
      tyhi -= w;
      tyzero -= w;

   } else if( just[ 0 ] == 'T' ){
      w = tyhi;
      tylo -= w;
      tyhi -= w;
      tyzero -= w;

   } else if( just[ 0 ] == 'M' ){
      w = -tylo;
      tylo += w;
      tyhi += w;
      tyzero += w;

   } else if( just[ 0 ] != 'B' ) {
      astError( AST__GRFER, "astG3DTxExt: Justification string '%s' "
                "is invalid.", just );
      return 0;
   }

   if( !just || just[ 1 ] == 'C' || just[ 1 ] == 0 ){
      w = 0.5*( txhi + txlo );
      txlo -= w;
      txhi -= w;

   } else if( just[ 1 ] == 'R' ){
      w = txhi;
      txlo -= w;
      txhi -= w;

   } else if( just[ 1 ] == 'L' ){
      w = txlo;
      txlo -= w;
      txhi -= w;

   } else {
      astError( AST__GRFER, "astG3DTxExt: Justification string '%s' "
                "is invalid.", just );
      return 0;
   }

/* Use the supplied text plane axis vectors to transform the corners of
   the text plane bounding box into 3D world coordinates. */
   xb[ 0 ] = tx[ 0 ]*txlo + ty[ 0 ]*tylo + ref[ 0 ];
   yb[ 0 ] = tx[ 1 ]*txlo + ty[ 1 ]*tylo + ref[ 1 ];
   zb[ 0 ] = tx[ 2 ]*txlo + ty[ 2 ]*tylo + ref[ 2 ];

   xb[ 1 ] = tx[ 0 ]*txhi + ty[ 0 ]*tylo + ref[ 0 ];
   yb[ 1 ] = tx[ 1 ]*txhi + ty[ 1 ]*tylo + ref[ 1 ];
   zb[ 1 ] = tx[ 2 ]*txhi + ty[ 2 ]*tylo + ref[ 2 ];

   xb[ 2 ] = tx[ 0 ]*txhi + ty[ 0 ]*tyhi + ref[ 0 ];
   yb[ 2 ] = tx[ 1 ]*txhi + ty[ 1 ]*tyhi + ref[ 1 ];
   zb[ 2 ] = tx[ 2 ]*txhi + ty[ 2 ]*tyhi + ref[ 2 ];

   xb[ 3 ] = tx[ 0 ]*txlo + ty[ 0 ]*tyhi + ref[ 0 ];
   yb[ 3 ] = tx[ 1 ]*txlo + ty[ 1 ]*tyhi + ref[ 1 ];
   zb[ 3 ] = tx[ 2 ]*txlo + ty[ 2 ]*tyhi + ref[ 2 ];

/* Also transform the text plane coordinates at the bottom left of the
   text baseline into 3D world coordinates. */
   bl[ 0 ] = tx[ 0 ]*txlo + ty[ 0 ]*tyzero + ref[ 0 ];
   bl[ 1 ] = tx[ 1 ]*txlo + ty[ 1 ]*tyzero + ref[ 1 ];
   bl[ 2 ] = tx[ 2 ]*txlo + ty[ 2 ]*tyzero + ref[ 2 ];

/* If we get here, we have been successful, so return a non-zero value. */
   return 1;
}

static float getCharHeight( void ){
/*
*  Name:
*     getCharHeight

*  Purpose:
*     Get the current text height setting.

*  Description:
*     This function returns the PLplot character height, scaled into
*     world coordinate units.
*
*     It computes the character height by converting from mm (PLplot's
*     native unit) to 2D world coordinates using viewport geometry. If
*     the viewport geometry gives degenerate results, it falls back to
*     using the tracked character scale and window bounds.

*  Returned Value:
*    The character height, in world coordinate units.
*/

/* Local Variables: */
   PLFLT def_chr, chr_ht;
   PLFLT dx1, dx2, dy1, dy2;
   PLFLT sx1, sx2, sy1, sy2;
   PLFLT vx1, vx2, vy1, vy2;
   PLFLT wy1, wy2;
   float mm_per_world;

/* Get the PLplot character height in mm. */
   c_plgchr( &def_chr, &chr_ht );

/* Get viewport in world coordinates (vertical extent only needed). */
   c_plgvpw( &vx1, &vx2, &wy1, &wy2 );

/* Get subpage bounds in physical coordinates (mm). */
   c_plgspa( &sx1, &sx2, &sy1, &sy2 );

/* Get viewport bounds in normalized device coordinates (0 to 1 across subpage). */
   c_plgvpd( &dx1, &dx2, &dy1, &dy2 );

/* Calculate viewport bounds in mm. */
   vy1 = sy1 + dy1 * (sy2 - sy1);
   vy2 = sy1 + dy2 * (sy2 - sy1);

/* Compute mm per world unit in the vertical direction. */
   if( wy2 != wy1 && vy2 != vy1 ) {
      mm_per_world = (float) fabs( (vy2 - vy1) / (wy2 - wy1) );
      if( mm_per_world > 0.0 ) {
         return (float)( chr_ht / mm_per_world );
      }
   }

/* Fallback: use tracked char scale and window bounds (like PGPLOT approach). */
   return current_char_scale * fabsf( win_y2 - win_y1 ) / 40.0f;
}

static int getTextAxes( float ref[3], float up[3], float norm[3],
                        const char *just, float tx[3], float ty[3],
                        float tz[3], char newjust[3] ){
/*
*  Name:
*     getTextAxes

*  Purpose:
*     Get unit vectors along the text plane coordinate axes.

*  Description:
*     This function returns three unit vectors that define the axes of a
*     3D Cartesian coordinate system known as "text plane coordinates".
*     These axes span the plane upon which text (or other graphics) is to
*     be written. The origin is at the supplied 3D reference position, the
*     X axis increases along the text baseline, and Y axis increases along
*     the text up vector, and Z increases from the back of the text to the
*     front of the text (all are measured in 3D world coord units).
*
*     The returned vectors are reversed if this will result in text
*     appearing more "normal" (i.e. viewed from the front rather than
*     the back, and viewed upright rather than upside down). If the
*     vectors are reversed, the justification string is also changed so
*     that the text occupies the requested area on the screen.

*  Parameters:
*     ref
*        The reference (x,y,z) coordinates.
*     up
*        The (x,y,z) up-vector for the text.
*     norm
*        The (x,y,z) components of a vector normal to the text plane.
*     just
*        The requested text justification.
*     tx
*        A unit vector along the text plane X axis.
*     ty
*        A unit vector along the text plane Y axis.
*     tz
*        A unit vector along the text plane Z axis.
*     newjust
*        The text justification to use.
*/

/* Local Variables: */
   Camera *cam;
   float eye[3];

/* Initialise the returned justification to equal the supplied
   justification, supplying defaults if required. */
   if( just ) {
      strncpy( newjust, just, 2 );
      if( !newjust[ 0 ] ) newjust[ 0 ] = 'C';
      if( !newjust[ 1 ] ) newjust[ 1 ] = 'C';
      newjust[ 2 ] = 0;
   } else {
      strcpy( newjust, "CC" );
   }

/* Get the Camera for the current device identifier. Abort if no camera
   is available. */
   if( !( cam = getCamera( 1 ) ) ) return 0;

/* Calculate the vector from the reference position to the eye, and store
   it in "eye". */
   vectorSub( cam->eye_vector, ref, eye );

/* Create unit vectors along the three axes of the text plane coordinate
   system. These unit vectors are represented in terms of the 3D world
   coordinate axes. The text Z axis is parallel to the supplied "norm"
   vector. */
   tz[ 0 ] = norm[ 0 ];
   tz[ 1 ] = norm[ 1 ];
   tz[ 2 ] = norm[ 2 ];

/* Attempt to normalise the "tz" vector. If it has zero length, use the
   offset from the reference point to the eye. */
   if( ! vectorNorm( tz ) ){

/* Use the "eye" vector calculated above as the text plane Z axis. */
      tz[ 0 ] = eye[ 0 ];
      tz[ 1 ] = eye[ 1 ];
      tz[ 2 ] = eye[ 2 ];
   }

/* Find vectors along the text plane x and y axes. */
   vectorProduct( up, tz, tx );
   vectorProduct( tz, tx, ty );

/* Normalise the three text plane axis vectors. If any vector has zero
   length, abort. */
   if( !vectorNorm( tx ) || !vectorNorm( ty ) || !vectorNorm( tz ) ) return 0;

/* We now reverse text plane vectors if this will help the text to be
   viewed "normally" on the screen. If the existing vectors cause the
   text to be viewed from the back rather than the front, reverse the tx
   and tz vectors so that the text is viewed from the front. */
   if( dotProduct( tz, eye ) < 0.0 ) {
      tz[ 0 ] = -tz[ 0 ];
      tz[ 1 ] = -tz[ 1 ];
      tz[ 2 ] = -tz[ 2 ];
      tx[ 0 ] = -tx[ 0 ];
      tx[ 1 ] = -tx[ 1 ];
      tx[ 2 ] = -tx[ 2 ];

/* The text will have spun around the up vector (i.e. the ty axis), so
   modify the horizontal justification so that the text occupies the same
   area on the screen. */
      if( newjust[ 1 ] == 'L' ) {
         newjust[ 1 ] = 'R';
      } else if( newjust[ 1 ] == 'R' ) {
         newjust[ 1 ] = 'L';
      }
   }

/* If the existing vectors cause the text to be viewed upside down, reverse
   the tx and ty vectors so that the text is viewed right way up. */
   if( dotProduct( ty, cam->up_vector ) < 0.0 ) {
      ty[ 0 ] = -ty[ 0 ];
      ty[ 1 ] = -ty[ 1 ];
      ty[ 2 ] = -ty[ 2 ];
      tx[ 0 ] = -tx[ 0 ];
      tx[ 1 ] = -tx[ 1 ];
      tx[ 2 ] = -tx[ 2 ];

/* The text will have spun around the tz vector (i.e. the viewing vector),
   so modify both vertical and horizontal justification so that the text
   occupies the same area on the screen. */
      if( newjust[ 0 ] == 'B' || newjust[ 0 ] == 'M' ) {
         newjust[ 0 ] = 'T';
      } else if( newjust[ 0 ] == 'T' ) {
         newjust[ 0 ] = 'M';
      }

      if( newjust[ 1 ] == 'L' ) {
         newjust[ 1 ] = 'R';
      } else if( newjust[ 1 ] == 'R' ) {
         newjust[ 1 ] = 'L';
      }
   }

/* If we arrive here we have been successful, so return a non-zero value. */
   return 1;
}

static Camera *getCamera( int check ){
/*
*  Name:
*     getCamera

*  Purpose:
*     Return a pointer to the Camera structure for the current PLplot
*     stream.

*  Description:
*     This function returns a pointer to a static structure that defines the
*     position and orientation of the camera in 3D world coords. It can
*     be used to transform positions from 3D world coordinates (x,y,z) to
*     2D screen coordinates (h,r).

*  Parameters:
*     check
*        If non-zero, a check will be made that the Camera has been
*        initialised, and NULL will be returned if the Camera has not
*        been initialised. If "check" is zero, a pointer to the Camera
*        is returned even if it has not been initialised.
*/

/* Local Variables: */
   PLINT strm;
   Camera *cam = NULL;

/* Get the PLplot current stream number. PLplot stream IDs start at 0. */
   c_plgstrm( &strm );
   if( strm >= 0 && strm < MXDEV ) {

/* Get a pointer to the required Camera structure. */
      cam = cameras + strm;

/* If required, check that the structure has been initialised. */
      if( check && cam->ok_flag != CAMERA_OK ) cam = NULL;
   }

   return cam;
}

static int transform( Camera *cam, int n, float *x, float *y, float *z,
                      float *h, float *r ){
/*
*  Name:
*     transform

*  Purpose:
*     Transform positions from 3D world coords to 2D screen coords.

*  Description:
*     This function transforms a set of positions from 3D world
*     coordinates (x,y,z) to 2D screen coordinates (h,r), using the
*     supplied camera.

*  Parameters:
*     cam
*        Pointer to a structure describing the projection from 3D world
*        coords to 2D screen coords. If NULL, the camera for the current
*        PLplot stream is used.
*     n
*        The number of positions to transform.
*     x
*        An array of "n" values for the "x" axis.
*     y
*        An array of "n" values for the "y" axis.
*     z
*        An array of "n" values for the "z" axis.
*     h
*        An array to receive the "n" horizontal screen coordinate values.
*     r
*        An array to receive the "n" vertical screen coordinate values.
*/

/* Local Variables: */
   float dx, dy, dz, u, v, w, f;
   int i;
   int result = 0;

/* If no camera was supplied use the camera for the current PLplot
   stream. */
   if( ! cam ) cam = getCamera( 0 );

/* Check we now have a usable camera */
   if( cam && cam->ok_flag == CAMERA_OK ) {
      result = 1;

/* Loop round each position. */
      for( i = 0; i < n; i++ ) {

/* Offset from supplied position to the camera eye. */
         dx = x[ i ] - (cam->eye_vector)[ 0 ];
         dy = y[ i ] - (cam->eye_vector)[ 1 ];
         dz = z[ i ] - (cam->eye_vector)[ 2 ];

/* Get the representation of this vector in the (u,v,w) system. */
         u = (cam->w2c_matrix)[ 0 ]*dx +
             (cam->w2c_matrix)[ 1 ]*dy +
             (cam->w2c_matrix)[ 2 ]*dz;

         v = (cam->w2c_matrix)[ 3 ]*dx +
             (cam->w2c_matrix)[ 4 ]*dy +
             (cam->w2c_matrix)[ 5 ]*dz;

         w = (cam->w2c_matrix)[ 6 ]*dx +
             (cam->w2c_matrix)[ 7 ]*dy +
             (cam->w2c_matrix)[ 8 ]*dz;

/* Find the screen coords, using either a tangent plane or an
   orthographic projection. */
         if( cam->screen_distance != 0.0 ) {
            if( w != 0.0 ) {
               f = cam->screen_distance/w;
               h[ i ] = -f*u;
               r[ i ] = f*v;
            } else {
               h[ i ] = FLT_MAX;
               r[ i ] = FLT_MAX;
            }
         } else {
            h[ i ] = -u;
            r[ i ] = v;
         }

      }
   }
   return result;
}


/* Vector utility functions */
/* ======================== */

/* Dot product of a pair of 3-vectors "a" and "b". */
static float dotProduct( float *a, float *b ){
   return a[ 0 ]*b[ 0 ] + a[ 1 ]*b[ 1 ] + a[ 2 ]*b[ 2 ];
}

/* Vector product of a pair of 3-vectors "a" and "b". */
static void vectorProduct( float *a, float *b, float *c ){
   c[ 0 ] = a[ 1 ]*b[ 2 ] - a[ 2 ]*b[ 1 ];
   c[ 1 ] = a[ 2 ]*b[ 0 ] - a[ 0 ]*b[ 2 ];
   c[ 2 ] = a[ 0 ]*b[ 1 ] - a[ 1 ]*b[ 0 ];
}

/* Vector from "b" to "a" (i.e. a minus b). */
static void vectorSub( float *a, float *b, float *c ){
   c[ 0 ] = a[ 0 ] - b[ 0 ];
   c[ 1 ] = a[ 1 ] - b[ 1 ];
   c[ 2 ] = a[ 2 ] - b[ 2 ];
}

/* Normalises a vector to a unit length. Returns zero if the vector has
   zero length, and 1 otherwise. */
static int vectorNorm( float *a ){
   float d;
   d = vectorModulus( a );
   if( d > 0.0 ) {
      a[ 0 ] /= d;
      a[ 1 ] /= d;
      a[ 2 ] /= d;
      return 1;
   } else {
      return 0;
   }
}

/* Return the length of a vector. */
static float vectorModulus( float *a ){
   return sqrtf( a[ 0 ]*a[ 0 ] + a[ 1 ]*a[ 1 ] + a[ 2 ]*a[ 2 ] );
}
