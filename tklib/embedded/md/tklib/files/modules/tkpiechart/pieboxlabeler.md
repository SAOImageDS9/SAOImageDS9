
[//000000001]: # (pieBoxLabeler \- pieBoxLabeler class)
[//000000002]: # (Generated from file 'pieboxlabeler\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>)
[//000000004]: # (pieBoxLabeler\(n\) 6\.6 tklib "pieBoxLabeler class")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

pieBoxLabeler \- tkpiechart pie box style labeler class

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

[__stooop::new__ __pieBoxLabeler__ *canvas* ?options?](#1)  
[__switched::configure__ *pieBoxLabelerObject* ?options?](#2)  
[__switched::cget__ *pieBoxLabelerObject* *option*](#3)  

# <a name='description'></a>DESCRIPTION

The pie box style labeler object is used as a slice label placer for a
__pie__ object and is passed to the pie constructor via its __\-labeler__
option \(see the __pie__ class manual\)\.

The labels are arranged in 2 columns below the pie graphics\. Each label text is
placed to the right of a rectangle, the background color of which matches its
corresponding slice\. The slice share value is placed to the right of the label
text, separated by a semicolon\. Each label is actually a canvasLabel object \(see
the __canvasLabel__ class manual for further information\)\.

There is no need to delete a __pieBoxLabeler__ object as it is automatically
handled by the pie class\.

  - <a name='1'></a>__stooop::new__ __pieBoxLabeler__ *canvas* ?options?

    Creates a pieBoxLabeler object in the specified Tk canvas\. The pieBoxLabeler
    object identifier is returned \(referred to as *pieBoxLabelerObject* in
    this document\)\.

  - <a name='2'></a>__switched::configure__ *pieBoxLabelerObject* ?options?

    Configures a pieBoxLabeler object or returns all the options with their
    current values if no options are passed as parameters\.

  - <a name='3'></a>__switched::cget__ *pieBoxLabelerObject* *option*

    Returns an option value for the specified pieBoxLabeler object\.

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

# <a name='section3'></a>TAGS

The labeler has the following specific tag \(see the
__[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas)__ manual page *ITEM IDS AND
TAGS* section for more information\):

  - pieBoxLabeler\(pieBoxLabelerObject\)

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tkpiechart* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

[canvasLabel](canvaslabel\.md), [pie](pie\.md),
[piePeripheralLabeler](pieperipherallabeler\.md)

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[labeler](\.\./\.\./\.\./\.\./index\.md\#labeler),
[pie](\.\./\.\./\.\./\.\./index\.md\#pie), [slice](\.\./\.\./\.\./\.\./index\.md\#slice)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 1995\-2004 Jean\-Luc Fontaine <jfontain@free\.fr>
