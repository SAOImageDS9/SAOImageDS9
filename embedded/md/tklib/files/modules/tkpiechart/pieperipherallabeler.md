
[//000000001]: # (piePeripheralLabeler \- piePeripheralLabeler class)
[//000000002]: # (Generated from file 'pieperipherallabeler\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>)
[//000000004]: # (piePeripheralLabeler\(n\) 6\.6 tklib "piePeripheralLabeler class")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

piePeripheralLabeler \- tkpiechart pie peripheral style labeler class

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

[__stooop::new__ __piePeripheralLabeler__ *canvas* ?options?](#1)  
[__switched::configure__ *piePeripheralLabelerObject* ?options?](#2)  
[__switched::cget__ *piePeripheralLabelerObject* *option*](#3)  

# <a name='description'></a>DESCRIPTION

The pie peripheral style labeler object is used as a slice label placer for a
__pie__ object and is passed to the pie constructor via its __\-labeler__
option \(see the __pie__ class manual\)\.

The slice description text labels are arranged in 2 columns below the pie
graphics, whereas the slice values are placed next to the slice and actually
follow the slice as the pie is updated\. Each description label text is placed to
the right of a rectangle, the background color of which matches its
corresponding slice\. Each description label is actually a canvasLabel object\.

There is no need to delete a __piePeripheralLabeler__ object as it is
automatically handled by the pie class\.

  - <a name='1'></a>__stooop::new__ __piePeripheralLabeler__ *canvas* ?options?

    Creates a piePeripheralLabeler object in the specified Tk canvas\. The
    piePeripheralLabeler object identifier is returned \(refered to as
    *piePeripheralLabelerObject* in this document\)\.

  - <a name='2'></a>__switched::configure__ *piePeripheralLabelerObject* ?options?

    Configures a piePeripheralLabeler object or returns all the options with
    their current values if no options are passed as parameters\.

  - <a name='3'></a>__switched::cget__ *piePeripheralLabelerObject* *option*

    Returns an option value for the specified piePeripheralLabeler object\.

# <a name='section2'></a>OPTIONS

  - __\-font__ value

    Specifies a font for the slice labels\. If not specified, the default font is
    system dependent\.

  - __\-justify__ value

    Specifies how to justify labels within their own column\. Must be one of
    *left*, *center* or *right*\. Defaults to *left*\. For example, if
    justification is *right*, all column labels right edges are aligned\.

  - __\-offset__ value

    Specifies the distance between the pie graphics and the closest slice label\.
    This value may be specified in any of the forms described in the
    __[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ *COORDINATES* manual
    section\.

  - __\-smallfont__

    Specifies a font for the slice values\. It is usually a small font in order
    to avoid values overlapping when 2 slices are very close to each other\. If
    not specified, the description label font \(__\-font__ option\) is used\.

  - __\-widestvaluetext__

    Specifies a string of maximum width for slice values \(placed around the pie
    next to the slices\), so that enough room is allocated for these value labels
    when the pie width and height are set\. It defaults to 00\.0\. For example, it
    could be set to "00\.00 %"\.

# <a name='section3'></a>TAGS

The labeler has the following specific tag \(see the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ manual page *ITEM IDS AND
TAGS* section for more information\):

  - piePeripheralLabeler\(piePeripheralLabelerObject\)

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tkpiechart* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

[canvasLabel](canvaslabel\.md), [pie](pie\.md),
[pieBoxLabeler](pieboxlabeler\.md)

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[labeler](\.\./\.\./\.\./\.\./index\.md\#labeler),
[pie](\.\./\.\./\.\./\.\./index\.md\#pie), [slice](\.\./\.\./\.\./\.\./index\.md\#slice)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>
