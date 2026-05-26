
[//000000001]: # (canvasLabel \- canvasLabel class)
[//000000002]: # (Generated from file 'canvaslabel\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>)
[//000000004]: # (canvasLabel\(n\) 6\.6 tklib "canvasLabel class")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvasLabel \- tkpiechart canvas label class

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [OPTIONS](#section2)

  - [TAGS](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require stooop 4\.1  
package require switched 2\.2  
package require tkpiechart 6\.6  

[__stooop::new__ __canvasLabel__ *canvas* ?options?](#1)  
[__switched::configure__ *canvasLabelObject* ?options?](#2)  
[__switched::cget__ *canvasLabelObject* *option*](#3)  
[__stooop::delete__ *canvasLabelObject*](#4)  

# <a name='description'></a>DESCRIPTION

The canvasLabel class brings some Tk label widget functionality to the canvas
text item, such as a background and a border\.

The canvasLabel is built with a bullet rectangle on the left side of the text\.
The relief changes according to the select state, with a traditionally sunken
relief when selected\.

The label has a specific tag, which can be used to retrieve the coordinates of
the object or move it, thanks to the canvas facilities\.

  - <a name='1'></a>__stooop::new__ __canvasLabel__ *canvas* ?options?

    Creates a canvasLabel object in the specified Tk canvas\. The canvasLabel
    object identifier is returned \(referred to as *canvasLabelObject* in this
    document\)\.

  - <a name='2'></a>__switched::configure__ *canvasLabelObject* ?options?

    Configures a canvasLabel object or returns all the options with their
    current values if no options are passed as parameters\.

  - <a name='3'></a>__switched::cget__ *canvasLabelObject* *option*

    Returns an option value for the specified canvasLabel object\.

  - <a name='4'></a>__stooop::delete__ *canvasLabelObject*

    Deletes the specified canvasLabel object\.

# <a name='section2'></a>OPTIONS

  - __\-anchor__ value

    Specifies the anchor position of the rectangle and the text, relative to the
    positioning point\. The behavior is similar to the __\-anchor__ option of
    the __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text* item, except
    that the rectangle is taken into account\. The default is *center*\.

  - __\-background__ color

    Specifies the background color of the bullet rectangle, as in the
    __\-fill__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *rectangle* item\. The
    default is transparent \(empty string\)\.

  - __\-bordercolor__ color

    Specifies the border color of the rectangle, as in the __\-outline__
    option of the __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__
    *rectangle* item\. The default is black\.

  - __\-borderwidth__ value

    Specifies the border width of the rectangle, as in the __\-width__ option
    of the __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *rectangle* item\.
    By default, the width is 1 pixel, which is the minimum width\.

  - __\-bulletwidth__ value

    Specifies the width of the rectangle placed to the left of the text\.
    Defaults to *10*\.

  - __\-font__ value

    Specifies the font of the text, as in the __\-font__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text* item\. The default
    is system dependent\.

  - __\-foreground__ color

    Specifies the color of the text, as in the __\-fill__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text* item\. The default
    is black\.

  - __\-justify__ value

    Specifies how to justify the text, as in the __\-justify__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text* item\. The default
    is *left*\.

  - __\-minimumwidth__ value

    The total label width will not go below the specified value, but may be
    larger if the label text requires it\.

  - __\-padding__ value

    Specifies how much space to leave between the text and the closest rectangle
    edge\. Units are identical to those specified in the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *COORDINATES* manual
    section\.

  - __\-scale__ list

    List of 2 floating point numbers used to set the scaling factor in the x and
    y axis\. Scaling is applied immediately and defaults to 1\.

  - __\-select__ boolean

    Sets the label state\.

  - __\-selectrelief__ value

    Either *flat*, *raised* or *sunken*\. Specifies the 3D effect desired
    for the text area when the label is selected\.

  - __\-stipple__ bitmap

    Specifies the stipple pattern filling the rectangle, as in the
    __\-stipple__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *rectangle* item\. There
    is no bitmap by default\.

  - __\-text__ text

    Specifies the string to be displayed in the text area, as in the
    __\-text__ option of the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text* item\. The default
    is an empty string\.

  - __\-textbackground__ color

    Specifies the color of the text area background\.

  - __\-width__ value

    Specifies a maximum line length for the text, as in the __\-width__
    option of the __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *text*
    item\. The default is *0*\.

# <a name='section3'></a>TAGS

The labeler has the following specific tag \(see the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ manual page *ITEM IDS AND
TAGS* section for more information\):

  - canvasLabel\(canvasLabelObject\)

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tkpiechart* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

[pie](pie\.md), [pieBoxLabeler](pieboxlabeler\.md),
[piePeripheralLabeler](pieperipherallabeler\.md)

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[labeler](\.\./\.\./\.\./\.\./index\.md\#labeler),
[pie](\.\./\.\./\.\./\.\./index\.md\#pie), [slice](\.\./\.\./\.\./\.\./index\.md\#slice)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>
