extern "C" {
#include "grf3d.h"
}

#include "grid3dbase.h"

extern Grid3dBase* astGrid3dPtr;

/*
*  Name:
*     astG3DCap
*
*  Purpose:
*     Indicate if this grf3d module has a given capability.
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DCap( int cap, int value )
*
*  Description:
*     This function is called by the AST Plot class to determine if the
*     grf3d module has a given capability, as indicated by the "cap"
*     argument.
*
*  Parameters:
*     cap
*        The capability being inquired about. This will be one of the
*        following constants defined in grf3d.h:
*
*        GRF3D__ESC: This function should return a non-zero value if the
*        astG3DText and astG3DTxExt functions can recognise and interpret
*        graphics escape sequences within the supplied string. These
*        escape sequences are described below. Zero should be returned
*        if escape sequences cannot be interpreted (in which case the
*        Plot class will interpret them itself if needed). The supplied
*        "value" argument should be ignored only if escape sequences cannot
*        be interpreted by astG3DText and astG3DTxExt. Otherwise, "value"
*        indicates whether astG3DText and astG3DTxExt should interpret escape
*        sequences in subsequent calls. If "value" is non-zero then
*        escape sequences should be interpreted by astG3DText and
*        astG3DTxExt. Otherwise, they should be drawn as literal text.
*
*  Returned Value:
*     The return value, as described above. Zero should be returned if
*     the supplied capability is not recognised.
*
*  Escape Sequences:
*     Escape sequences are introduced into the text string by a percent
*     "%" character. The following escape sequences are currently recognised
*     ("..." represents a string of one or more decimal digits):
*
*       %%      - Print a literal "%" character (type GRF__ESPER ).
*
*       %^...+  - Draw subsequent characters as super-scripts. The digits
*                 "..." give the distance from the base-line of "normal"
*                 text to the base-line of the super-script text, scaled
*                 so that a value of "100" corresponds to the height of
*                 "normal" text (type GRF__ESSUP ).
*       %^+     - Draw subsequent characters with the normal base-line.
*
*       %v...+  - Draw subsequent characters as sub-scripts. The digits
*                 "..." give the distance from the base-line of "normal"
*                 text to the base-line of the sub-script text, scaled
*                 so that a value of "100" corresponds to the height of
*                 "normal" text (type GRF__ESSUB ).
*
*       %v+     - Draw subsequent characters with the normal base-line
*                 (equivalent to %^+).
*
*       %>...+  - Leave a gap before drawing subsequent characters.
*                 The digits "..." give the size of the gap, scaled
*                 so that a value of "100" corresponds to the height of
*                 "normal" text (type GRF__ESGAP ).
*
*       %<...+  - Move backwards before drawing subsequent characters.
*                 The digits "..." give the size of the movement, scaled
*                 so that a value of "100" corresponds to the height of
*                 "normal" text (type GRF_ESBAC).
*
*       %s...+  - Change the Size attribute for subsequent characters. The
*                 digits "..." give the new Size as a fraction of the
*                 "normal" Size, scaled so that a value of "100" corresponds
*                 to 1.0  (type GRF__ESSIZ ).
*
*       %s+     - Reset the Size attribute to its "normal" value.
*
*       %w...+  - Change the Width attribute for subsequent characters. The
*                 digits "..." give the new width as a fraction of the
*                 "normal" Width, scaled so that a value of "100" corresponds
*                 to 1.0  (type GRF__ESWID ).
*
*       %w+     - Reset the Size attribute to its "normal" value.
*
*       %f...+  - Change the Font attribute for subsequent characters. The
*                 digits "..." give the new Font value  (type GRF__ESFON ).
*
*       %f+     - Reset the Font attribute to its "normal" value.
*
*       %c...+  - Change the Colour attribute for subsequent characters. The
*                 digits "..." give the new Colour value  (type GRF__ESCOL ).
*
*       %c+     - Reset the Colour attribute to its "normal" value.
*
*       %t...+  - Change the Style attribute for subsequent characters. The
*                 digits "..." give the new Style value  (type GRF__ESSTY ).
*
*       %t+     - Reset the Style attribute to its "normal" value.
*
*       %-      - Push the current graphics attribute values onto the top of
*                 the stack - see "%+" (type GRF__ESPSH).
*
*       %+      - Pop attributes values of the top the stack - see "%-". If
*                 the stack is empty, "normal" attribute values are restored
*                 (type GRF__ESPOP).
*
*     The astFindEscape function (in libast.a) can be used to locate escape
*     sequences within a text string. It has the following signature:
*
*     #include "plot.h"
*     int astFindEscape( const char *text, int *type, int *value, int *nc )
*
*     Parameters:
*        text
*           Pointer to the string to be checked.
*        type
*           Pointer to a location at which to return the type of escape
*           sequence. Each type is identified by a symbolic constant defined
*           in grf.h and is indicated in the above section. The returned value
*           is undefined if the supplied text does not begin with an escape
*           sequence.
*        value
*           Pointer to a lcation at which to return the integer value
*           associated with the escape sequence. All usable values will be
*           positive. Zero is returned if the escape sequence has no associated
*           integer. A value of -1 indicates that the attribute identified by
*           "type" should be reset to its "normal" value (as established using
*           the astG3DAttr function, etc). The returned value is undefined if
*           the supplied text does not begin with an escape sequence.
*        nc
*           Pointer to a location at which to return the number of
*           characters read by this call. If the text starts with an escape
*           sequence, the returned value will be the number of characters in
*           the escape sequence. Otherwise, the returned value will be the
*           number of characters prior to the first escape sequence, or the
*           length of the supplied text if no escape sequence is found.
*
*     Returned Value:
*        A non-zero value is returned if the supplied text starts with a
*        graphics escape sequence, and zero is returned otherwise.
*
*/

int astG3DCap(int cap, int value) 
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gCap(cap, value);
  return 0;
}

/*
*  Name:
*     astG3DFlush
*
*  Purpose:
*     Flush all pending graphics to the output device.
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DFlush( void )
*
*  Description:
*     This function ensures that the display device is up-to-date,
*     by flushing any pending graphics to the output device.
*
*  Parameters:
*     None.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*/

int astG3DFlush(void) 
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gFlush();
  return 0;
}

/*
*  Name:
*     astG3DLine
*
*  Purpose:
*     Draw a polyline (i.e. a set of connected lines).
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DLine( int n, float *x, float *y, float *z )
*
*  Description:
*     This function displays lines joining the given positions.
*
*  Parameters:
*     n
*        The number of positions to be joined together.
*     x
*        A pointer to an array holding the "n" x values.
*     y
*        A pointer to an array holding the "n" y values.
*     z
*        A pointer to an array holding the "n" z values.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*     - A camera must have been established prior to calling this
*     function using either astG3DSetCamera or astG3DAutoCamera.
*     -  Nothing is done if "n" is less than 2, or if a NULL pointer is
*     given for either "x", "y" or "z".
*
*/

int astG3DLine(int n, float *x, float *y, float *z) 
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gLine(n, x, y, z);
  return 0;
}

/*
*  Name:
*     astG3DQch
*
*  Purpose:
*     Return the character height in world coordinates.
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DQch( float *ch )
*
*  Description:
*     This function returns the height of characters drawn using astG3DText.
*
*  Parameters:
*     ch
*        A pointer to the double which is to receive the height of
*        characters drawn with astG3DText.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*     - Since the 3D world coordinate axes are assumed to be equally
*     scaled, the height of text in world coordinate units is independent
*     of the orientation of the text. Therefore, this function returns
*     only one height value, unlike the equivalent 2D astGQch function
*     that returns two heights.
*/

int astG3DQch(float *ch) 
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gQch(ch);
  return 0;
}

/*
*  Name:
*     astG3DMark
*
*  Purpose:
*     Draw a set of markers.
*
*  Synopsis:
*     #include "grf.h"
*     int astG3DMark( int n, float *x, float *y, float *z, int type,
*                     float norm[3] )
*
*  Description:
*     This function draws markers centred at the given positions, on a
*     plane with a specified normal vector.
*
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
*        required. See the description of routine PGPT in the PGPLOT manual.
*     norm
*        The (x,y,z) components of a vector that is normal to the plane
*        containing the marker. The given vector passes through the marker
*        from the back to the front. If all components of this vector are
*        zero, then a normal vector pointing from the position of the
*        first marker towards the camera eye is used.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*     -  Nothing is done if "n" is less than 1, or if a NULL pointer is
*     given for "x", "y" or "z".
*
*/

int astG3DMark(int n, float *x, float *y, float *z, int type, float norm[3])
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gMark(n, x, y, z, type, norm);
  return 0;
}

/*
*  Name:
*     astG3DText
*
*  Purpose:
*     Draw a character string.
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DText( const char *text, float ref[3], const char *just,
*                     float up[3], float norm[3] )
*
*  Description:
*     This function displays a character string at a given position
*     on a given plane in 3D world coords, using a specified
*     justification and up-vector.
*
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
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*     -  This routine does not recognise PGPLOT escape sequences.
*     -  A NULL value for "just" causes a value of "CC" to be used.
*/

int astG3DText(const char *text, float ref[3], const char *just,
	       float up[3], float norm[3] )
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gText(text, ref, just, up, norm);
  return 0;
}

/*
*  Name:
*     astG3DTxExt
*
*  Purpose:
*     Get the extent of a character string.
*
*  Synopsis:
*     #include "grf3d.h"
*     int astG3DTxExt( const char *text, float ref[3], const char *just,
*                      float up[3], float norm[3], float *xb, float *yb,
*                      float *zb, float bl[3] )
*
*  Description:
*     This function returns the corners of a box which would enclose the
*     supplied character string if it were displayed using astG3DText.
*
*     The returned box INCLUDES any leading or trailing spaces.
*
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
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*     -  The order of the corners is anti-clockwise starting at the
*        bottom left when viewing the text normally (i.e. face on).
*     -  This routine does not recognise PGPLOT escape sequences.
*     -  A NULL value for "just" causes a value of "CC" to be used.
*/

int astG3DTxExt(const char *text, float ref[3], const char *just,
		float up[3], float norm[3], float *xb, float *yb,
		float *zb, float bl[3])
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gTxExt(text, ref, just, up, norm, xb, yb, zb, bl);
  return 0;
}

/*
*  Name:
*     astG3DAttr
*
*  Purpose:
*     Enquire or set a 3D graphics attribute value.
*
*  Synopsis:
*     #include "grf3d.h"
*     int int astG3DAttr( int attr, double value, double *old_value, int prim )
*
*  Description:
*     This function returns the current value of a specified 3D graphics
*     attribute, and optionally establishes a new value. The supplied
*     value is converted to an integer value if necessary before use.
*
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
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*  Notes:
*
*/

int astG3DAttr(int attr, double value, double *old_value, int prim)
{
  if (astGrid3dPtr)
    return astGrid3dPtr->gAttr(attr, value, old_value, prim);
  return 0;
}
