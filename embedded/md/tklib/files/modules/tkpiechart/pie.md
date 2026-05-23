
[//000000001]: # (pie \- tkpiechart pie class)
[//000000002]: # (Generated from file 'pie\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>)
[//000000004]: # (pie\(n\) 6\.6 tklib "tkpiechart pie class")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

pie \- 2D or 3D pie chart object in a canvas

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [OVERVIEW](#section2)

  - [OPTIONS](#section3)

  - [MEMBER PROCEDURES](#section4)

  - [TAGS](#section5)

  - [SIZES](#section6)

  - [LIMITATIONS](#section7)

  - [Bugs, Ideas, Feedback](#section8)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require stooop 4\.1  
package require switched 2\.2  
package require tkpiechart 6\.6  

[__stooop::new__ __pie__ *canvas* *x* *y* ?options?](#1)  
[__switched::configure__ *pieObject* ?options?](#2)  
[__switched::cget__ *pieObject* *option*](#3)  
[__stooop::delete__ *pieObject*](#4)  
[pie::newSlice *pieObject* ?labelText?](#5)  
[pie::deleteSlice *pieObject* *sliceObject*](#6)  
[pie::sizeSlice *pieObject* *sliceObject* *unitShare* ?displayedValue?](#7)  
[pie::labelSlice *pieObject* *sliceObject* *string*](#8)  
[pie::selectedSlices *pieObject*](#9)  

# <a name='description'></a>DESCRIPTION

A pie object is used to visualize a set of values, usually as shares of a total\.
Each value is represented by a colored slice, which may have a 2 dimensional or
3 dimensional look\. Each slice is associated with a label displaying the data
name, and a numerical field showing the percentage taken by the slice\. The
labels are placed by the chosen labeler object \(__\-labeler__ option\)\. Each
label color matches its related slice\.

A pie chart is made of Tk canvas items, found in __pieBoxLabeler__,
__piePeripheralLabeler__ and __canvasLabel__ objects, that compose the
pie object\. The pie constructor creates the pie itself and its background slice
within the parent canvas\. Once the pie object exists, slices can be created and
resized\. At the time the pie is created, the parent Tk
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ widget must exist\.

Slice colors are automatically generated, using a default color list for all
pies, unless another list is used \(using the __\-colors__ option\)\. When a 3D
look is used, the slice edge is darker than its top while using the same color
tone\.

  - <a name='1'></a>__stooop::new__ __pie__ *canvas* *x* *y* ?options?

    Creates a pie object in the specified Tk canvas\. The upper left corner of
    the pie is placed at the specified coordinates in the canvas\. The pie object
    identifier is returned \(referred to as *pieObject* in this document\)\.

  - <a name='2'></a>__switched::configure__ *pieObject* ?options?

    Configures a pie object or returns all the options with their current values
    if no options are passed as parameters\.

  - <a name='3'></a>__switched::cget__ *pieObject* *option*

    Returns an option value for the specified pie object\.

  - <a name='4'></a>__stooop::delete__ *pieObject*

    Deletes the specified pie object\.

# <a name='section2'></a>OVERVIEW

The pie class is part of the tkpiechart extension that allows the programmer to
create and dynamically update 2D or 3D pie charts in a Tcl/Tk application\. The
tkpiechart package is written in Tcl only, using object oriented techniques
thanks to the stooop package, included in tcllib\.

# <a name='section3'></a>OPTIONS

  - __\-autoupdate__ boolean

    Boolean value specifying whether all the slices and their labels are redrawn
    when a slice size is changed\. On by default\. Turn it off and invoke
    __pie::update__ if you change many slices at once and want to improve
    performance\.

  - __\-background__ color

    Slices may or may not fill up the 100% of the pie\. The unoccupied part of
    the pie is a slice that takes 100% of the pie\. It is by default transparent
    with a black border\. The color of this background slice may be set by the
    user using color names as in the __\-background__ standard option \(see
    the Tk __options__ manual page for more details\)\. When the pie has a 3D
    look, the background of a slice edge is darker than the top and uses the
    same color tone\.

  - __\-colors__ list

    Specifies a list of colors for slices\. In this case, the slice colors will
    successively be drawn from the list in the list order, cycling through if
    there are more slices than colors in the list\. Colors are specified in the
    same format as the __\-background__ option\.

  - __\-height__ value

    Specifies the total height for the pie, including the room taken by the
    labeler labels\. The pie slices are resized when labels are added or deleted
    \(when adding or deleting slices\) so that the total height remains constant\.
    This value may be specified in any of the forms described in the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *COORDINATES* manual
    section\.

  - __\-labeler__ object

    Specifies a placer object for the slice labels, so that, for example, slice
    values may be placed next to them\. If not specified, the *pieBoxLabeler*
    \(see corresponding manual\) is used, the other option being the
    *piePeripheralLabeler* class\. Each labeler has a specific behavior which
    may be set via its options\. The labeler object is automatically deleted when
    the pie object is itself deleted\. The labeler cannot be changed once the pie
    is created\.

  - __\-selectable__ boolean

    Boolean value specifying whether slices are selectable or not\. Acceptable
    values are those defined by the Tcl language itself for boolean values\. If
    selectable, slices can be selected with the first mouse button, by clicking
    on either the slice or its label\. Selection can be extended by using the
    classical *control* or *shift* clicks\. The list of currently selected
    slices can be retrieved at any time using the __selectedSlices__ pie
    class member procedure\.

  - __\-title__ text

    Title text to be placed above the pie\.

  - __\-titlefont__ value

    Font for the title text\.

  - __\-titleoffset__ value

    Distance between the bottom of the title text and the top of the pie slices\.
    This value may be specified in any of the forms described in the sizes
    section below\.

  - __\-thickness__ value

    The thickness is set to 0 by default, giving the pie a simple 2D shape, much
    faster to display\. A positive thickness value will give the pie a 3D look
    with matched darker colors for the slices edges\. These values may be
    specified in any of the forms described in the *SIZES* section below\.

  - __\-width__ value

    Specifies the total width for the pie, including the room taken by the
    labeler labels\. The pie slices are resized when labels are added or deleted
    \(when adding or deleting slices\) so that the total width remains constant\.
    This value may be specified in any of the forms described in the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *COORDINATES* manual
    section\.

# <a name='section4'></a>MEMBER PROCEDURES

  - <a name='5'></a>pie::newSlice *pieObject* ?labelText?

    Creates a slice\. A unique object identifier is returned \(referred to as
    *sliceObject* in this document\)\. The slice color is automatically
    allocated and the slice label placed using the specified labeler \(using the
    __\-labeler__ option\)\. The slice itself is placed after \(clockwise\) the
    existing slices\. The slice object identifier will be used for sizing and
    resizing the slice\.

    If the label text is not specified, it will be set to *"slice n"*, *n*
    being the number of the slice in the order of creation \(first slice is
    number 1\)\.

  - <a name='6'></a>pie::deleteSlice *pieObject* *sliceObject*

    Deletes a slice\. The following slices \(clockwise\) if any are then moved to
    compensate for the empty space left by the deleted slice\.

  - <a name='7'></a>pie::sizeSlice *pieObject* *sliceObject* *unitShare* ?displayedValue?

    Sizes or resizes a slice\. The slice is then automatically recalculated so it
    occupies the proper share of the whole pie\. The *unitShare* parameter is a
    floating point number expressed in share \(between 0 and 1\) of the whole pie\.
    The following slices \(clockwise\) are moved to accommodate the new slice
    size\. The slice size value next to the slice label is also updated with the
    new share value or *displayedValue* if specified\.

  - <a name='8'></a>pie::labelSlice *pieObject* *sliceObject* *string*

    Updates a slice label\. Can be invoked at any time\.

  - <a name='9'></a>pie::selectedSlices *pieObject*

    Returns a list of currently selected slice objects\.

# <a name='section5'></a>TAGS

The whole pie, the pie graphics \(all slices\), and each slice have the following
specific tags:

  - __pie\(pieObject\)__

  - __pieSlices\(pieObject\)__

  - __slice\(sliceObject\)__

For example, the whole pie can be moved using the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__
__[move](\.\./\.\./\.\./\.\./index\.md\#move)__ command on the pie tag, or
bindings on slices can be set using the slice tags \(see the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ manual page *ITEM IDS AND
TAGS* section for more information\)\.

# <a name='section6'></a>SIZES

All sizes related to pies are stored as floating point numbers\. The coordinates
and sizes are specified in screen units, which are floating point numbers
optionally followed by one of several letters as specified in the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *COORDINATES* manual
section\.

# <a name='section7'></a>LIMITATIONS

If the number of slices is too big, identical colors will be used for some of
the slices\. You may set your own colors in this case\.

# <a name='section8'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tkpiechart* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

[canvasLabel](canvaslabel\.md), [pieBoxLabeler](pieboxlabeler\.md),
[piePeripheralLabeler](pieperipherallabeler\.md)

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[labeler](\.\./\.\./\.\./\.\./index\.md\#labeler),
[pie](\.\./\.\./\.\./\.\./index\.md\#pie), [slice](\.\./\.\./\.\./\.\./index\.md\#slice)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>
