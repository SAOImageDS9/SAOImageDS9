extern "C" {
#include "grf.h"
}

#include "grid2dbase.h"
#include "grid25dbase.h"

extern Grid2dBase* astGrid2dPtr;
extern Grid25dBase* astGrid25dPtr;

/*
 *  Name:
 *     astGFlush
 *
 *  Purpose:
 *     Flush all pending graphics to the output device
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int astGFlush( void )
 *
 *  Description:
 *     This function ensures that the display device is up-to-date,
 *     by flushing any pending graphics to the output device.
 *
 *  Parameters:
 *     None
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 */

int astGFlush(void)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gFlush();
  else if (astGrid25dPtr)
    return astGrid25dPtr->gFlush();
  return 0;
}

/*
 *  Name:
 *     astGLine
 *
 *  Purpose:
 *     Draw a polyline (i.e. a set of connected lines)
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int astGLine( int n, const float *x, const float *y )
 *
 *  Description:
 *     This function displays lines joining the given positions
 *
 *  Parameters:
 *     n
 *        The number of positions to be joined together
 *     x 
 *        A pointer to an array holding the "n" x values
 *     y 
 *        A pointer to an array holding the "n" y values
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 *
 *  Notes:
 *     -  Nothing is done if "n" is less than 2, or if a NULL pointer is
 *     given for either "x" or "y"
 */

int astGLine(int n, const float *x, const float *y)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gLine(n, (float*)x, (float*)y);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gLine(n, (float*)x, (float*)y);
  return 0;
}

/*
 *  Name:
 *     astGQch
 *
 *  Purpose:
 *     Return the character height in world cooridnates
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int astGQch( float *chv, float *chh )
 *
 *  Description:
 *     This function returns the heights of characters drawn vertically and
 *     horizontally in world coordinates
 *
 *  Parameters:
 *     chv
 *        A pointer to the double which is to receive the height of
 *        characters drawn vertically. This will be an increment in the X
 *        axis
 *     chh
 *        A pointer to the double which is to receive the height of
 *        characters drawn vertically. This will be an increment in the Y
 *        axis
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 */

int astGQch(float *chv, float *chh)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gQch(chv, chh);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gQch(chv, chh);
  return 0;
}

/*
 *  Name:
 *     astGMark
 *
 *  Purpose:
 *     Draw a set of markers
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int astGMark( int n, const float *x, const float *y, int type )
 *
 *  Description:
 *     This function displays markers at the given positions
 *
 *  Parameters:
 *     n
 *        The number of markers to draw
 *     x 
 *        A pointer to an array holding the "n" x values
 *     y 
 *        A pointer to an array holding the "n" y values
 *     type
 *        An integer which can be used to indicate the type of marker symbol
 *        required
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 *
 *  Notes:
 *     -  Nothing is done if "n" is less than 1, or if a NULL pointer is
 *     given for either "x" or "y"
 *
 */

int astGMark(int n, const float *x, const float *y, int type)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gMark(n, x, y, type);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gMark(n, x, y, type);
  return 0;
}

/*
 *  Name:
 *     astGText
 *
 *  Purpose:
 *     Draw a character string
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int astGText( const char *text, float x, float y, const char *just,
 *                   float upx, float upy )
 *
 *  Description:
 *     This function displays a character string at a given position
 *     using a specified justification and up-vector
 *
 *  Parameters:
 *     text 
 *        Pointer to a null-terminated character string to be displayed
 *     x 
 *        The reference x coordinate
 *     y 
 *        The reference y coordinate
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
 *        then 'C' is used for the missing characters
 *     upx
 *        The x component of the up-vector for the text, in graphics world
 *        coordinates. If necessary the supplied value should be negated
 *        to ensure that positive values always refer to displacements from 
 *        left to right on the screen
 *     upy
 *        The y component of the up-vector for the text, in graphics world
 *        coordinates. If necessary the supplied value should be negated
 *        to ensure that positive values always refer to displacements from 
 *        bottom to top on the screen
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 *
 *  Notes:
 *     -  Any graphics within the rotated box enclosing the text are erased
 *     -  A NULL value for "just" causes a value of "CC" to be used
 *     -  Both "upx" and "upy" being zero causes an error
 *     -  Any unrecognised character in "just" causes an error
 */

int astGText(const char *text, float x, float y, const char *just,
	     float upx, float upy)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gText(text, x ,y, just, upx, upy);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gText(text, x ,y, just, upx, upy);
  return 0;
}               

/*
*  Name:
*     astGTxExt
*
*  Purpose:
*     Get the extent of a character string
*
*  Synopsis:
*     #include "grf.h"
*     int astGTxExt( const char *text, float x, float y, const char *just,
*                   float upx, float upy, float *xb, float *yb )
*
*  Description:
*     This function returns the corners of a box which would enclose the 
*     supplied character string if it were displayed using astGText
*
*     The returned box INCLUDES any leading or trailing spaces
*
*  Parameters:
*     text 
*        Pointer to a null-terminated character string to be displayed
*     x 
*        The reference x coordinate
*     y 
*        The reference y coordinate
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
*        then 'C' is used for the missing characters 
*     upx
*        The x component of the up-vector for the text, in graphics world
*        coordinates. If necessary the supplied value should be negated
*        to ensure that positive values always refer to displacements from 
*        left to right on the screen
*     upy
*        The y component of the up-vector for the text, in graphics world
*        coordinates. If necessary the supplied value should be negated
*        to ensure that positive values always refer to displacements from 
*        bottom to top on the screen
*     xb
*        An array of 4 elements in which to return the x coordinate of
*        each corner of the bounding box
*     yb
*        An array of 4 elements in which to return the y coordinate of
*        each corner of the bounding box
*
*  Returned Value:
*     A value of 0 is returned if an error occurrs, and 1 is returned
*     otherwise
*
*  Notes:
*     -  The order of the corners is anti-clockwise (in world coordinates)
*        starting at the bottom left
*     -  A NULL value for "just" causes a value of "CC" to be used
*     -  Both "upx" and "upy" being zero causes an error
*     -  Any unrecognised character in "just" causes an error
*     -  Zero is returned for all bounds of the box if an error occurs
*/

int astGTxExt(const char *text, float x, float y, const char *just,
	      float upx, float upy, float *xb, float *yb)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gTxExt(text, x, y, just, upx, upy, xb, yb);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gTxExt(text, x, y, just, upx, upy, xb, yb);
  return 0;
}               

/*
 *  Name:
 *     astGAttr
 *
 *  Purpose:
 *     Enquire or set a graphics attribute value
 *
 *  Synopsis:
 *     #include "grf.h"
 *     int int astGAttr( int attr, double value, double *old_value, int prim )
 *
 *  Description:
 *     This function returns the current value of a specified graphics
 *     attribute, and optionally establishes a new value. The supplied
 *     value is converted to an integer value if necessary before use
 *
 *  Parameters:
 *     attr
 *        An integer value identifying the required attribute. The
 *        following symbolic values are defined in grf.h: 
 *
 *           GRF__STYLE  - Line style
 *           GRF__WIDTH  - Line width
 *           GRF__SIZE   - Character and marker size scale factor
 *           GRF__FONT   - Character font
 *           GRF__COLOUR - Colour index
 *     value 
 *        A new value to store for the attribute. If this is AST__BAD
 *        no value is stored
 *     old_value 
 *        A pointer to a double in which to return the attribute value
 *        If this is NULL, no value is returned
 *     prim
 *        The sort of graphics primative to be drawn with the new attribute
 *        Identified by the following values defined in grf.h:
 *           GRF__LINE
 *           GRF__MARK
 *           GRF__TEXT
 *
 *  Returned Value:
 *     A value of 0 is returned if an error occurrs, and 1 is returned
 *     otherwise
 *
 *  Notes:
 */

int astGAttr(int attr, double value, double *old, int prim)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gAttr(attr, value, old, prim);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gAttr(attr, value, old, prim);
  return 0;
}

/*
*  Name:
*     astGScales
*
*  Purpose:
*     Get the axis scales.
*
*  Synopsis:
*     #include "grf.h"
*     int astGScales( float *alpha, float *beta )
*
*  Description:
*     This function returns two values (one for each axis) which scale
*     increments on the corresponding axis into a "normal" coordinate
*     system in which:
*        1 - The axes have equal scale in terms of (for instance)
*            millimetres per unit distance.
*        2 - X values increase from left to right.
*        3 - Y values increase from bottom to top.
*
*  Parameters:
*     alpha
*        A pointer to the location at which to return the scale for the
*        X axis (i.e. Xnorm = alpha*Xworld).
*     beta
*        A pointer to the location at which to return the scale for the
*        Y axis (i.e. Ynorm = beta*Yworld).
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*/

int astGScales(float *alpha, float *beta)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gScales(alpha,beta);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gScales(alpha,beta);
  return 0;
}

/*
*  Name:
*     astGCap
*
*  Purpose:
*     Indicate if this grf module has a given capability.
*
*  Synopsis:
*     #include "grf.h"
*     int astGCap( int cap, int value )
*
*  Description:
*     This function is called by the AST Plot class to determine if the
*     grf module has a given capability, as indicated by the "cap"
*     argument.
*
*  Parameters:
*     cap
*        The capability being inquired about. This will be one of the
*        following constants defined in grf.h:
*        
*        GRF__SCALES: This function should return a non-zero value if 
*        it implements the astGScales function, and zero otherwise. The 
*        supplied "value" argument should be ignored.
*
*        GRF__MJUST: This function should return a non-zero value if 
*        the astGText and astGTxExt functions recognise "M" as a 
*        character in the justification string. If the first character of
*        a justification string is "M", then the text should be justified
*        with the given reference point at the bottom of the bounding box. 
*        This is different to "B" justification, which requests that the
*        reference point be put on the baseline of the text, since some 
*        characters hang down below the baseline. If the astGText or
*        astGTxExt function cannot differentiate between "M" and "B",
*        then this function should return zero, in which case "M"
*        justification will never be requested by Plot. The supplied
*        "value" argument should be ignored.
*
*        GRF__ESC: This function should return a non-zero value if the
*        astGText and astGTxExt functions can recognise and interpret
*        graphics escape sequences within the supplied string. These
*        escape sequences are described below. Zero should be returned 
*        if escape sequences cannot be interpreted (in which case the
*        Plot class will interpret them itself if needed). The supplied
*        "value" argument should be ignored only if escape sequences cannot 
*        be interpreted by astGText and astGTxExt. Otherwise, "value"
*        indicates whether astGText and astGTxExt should interpret escape
*        sequences in subsequent calls. If "value" is non-zero then
*        escape sequences should be interpreted by astGText and
*        astGTxExt. Otherwise, they should be drawn as literal text.
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
*           the astGAttr function, etc). The returned value is undefined if 
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
*/

int astGCap(int cap, int value)
{
  if (astGrid2dPtr)
    return astGrid2dPtr->gCap(cap,value);
  else if (astGrid25dPtr)
    return astGrid25dPtr->gCap(cap,value);
  return 0;
}

/*
*  Name:
*     astGBBuf
*
*  Purpose:
*     Start a new graphics buffering context.
*
*  Synopsis:
*     #include "grf.h"
*     int astGBBuf( void )
*
*  Description:
*     This function begins saving graphical output commands in an
*     internal buffer; the commands are held until a matching astGEBuf
*     call (or until the buffer is emptied by astGFlush). This can
*     greatly improve the efficiency of some graphics systems. astGBBuf
*     increments an internal counter, while astGEBuf decrements this
*     counter and flushes the buffer to the output device when the
*     counter drops to zero.  astGBBuf and astGEBuf calls should always
*     be paired.
*
*  Parameters:
*     None.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*/

int astGBBuf(void)
{
   return 1;
}

/*
*  Name:
*     astGEBuf
*
*  Purpose:
*     End a graphics buffering context.
*
*  Synopsis:
*     #include "grf.h"
*     int astGEBuf( void )
*
*  Description:
*     This function marks the end of a batch of graphical output begun
*     with the last call of astGBBuf.  astGBBuf and astGEBUF calls should
*     always be paired. Each call to astGBBuf increments a counter, while
*     each call to astGEBuf decrements the counter. When the counter
*     reaches 0, the batch of output is written on the output device.
*
*  Parameters:
*     None.
*
*  Returned Value:
*     A value of 0 is returned if an error occurs, and 1 is returned
*     otherwise.
*
*/

int astGEBuf(void)
{
   return 1;
}

