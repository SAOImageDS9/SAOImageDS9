
[//000000001]: # (crosshair \- Crosshairs)
[//000000002]: # (Generated from file 'crosshair\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2003 Kevin Kenny)
[//000000004]: # (Copyright &copy; 2008 \(docs\) Andreas Kupries <andreas\_kupries@users\.sourceforge\.net>)
[//000000005]: # (Copyright &copy; 2013 Frank Gover, Andreas Kupries)
[//000000006]: # (crosshair\(n\) 1\.2\.1 tklib "Crosshairs")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

crosshair \- Crosshairs for Tk canvas

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

  - [BUGS, IDEAS, FEEDBACK](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl ?8\.4?  
package require Tk ?8\.4?  
package require crosshair ?1\.2\.1?  

[__crosshair::crosshair__ *w* ?*arg*\.\.\.?](#1)  
[__crosshair::off__ *w*](#2)  
[__crosshair::configure__ *w* ?*arg*\.\.\.?](#3)  
[__crosshair::track__ __on__ *w* *cmdprefix*](#4)  
[__crosshair::track__ __off__ *w*](#5)  
[__crosshair::bbox\_add__ *w* *bbox*](#6)  
[__crosshair::bbox\_remove__ *token*](#7)  

# <a name='description'></a>DESCRIPTION

The __crosshair__ package provides commands to \(de\)activate and track
crosshairs on canvas widgets\.

# <a name='section2'></a>API

The following commands are exported to the public:

  - <a name='1'></a>__crosshair::crosshair__ *w* ?*arg*\.\.\.?

    This command activates the display of a pair of cross\-hairs for the canvas
    widget *w*\. The cross\-hairs track the pointing device\. The result of the
    command is the empty string\.

    All arguments after the widget *w* are treated as options as for a canvas
    line item in *w*\. Of particular interest are __\-fill__ and
    __\-dash__\.

  - <a name='2'></a>__crosshair::off__ *w*

    This command removes the cross\-hairs from the canvas widget *w*\. Nothing
    is done if the widget had no cross\-hairs\. The result of the command is the
    empty string\.

  - <a name='3'></a>__crosshair::configure__ *w* ?*arg*\.\.\.?

    This command changes the appearance of the cross\-hairs in the canvas widget
    *w*\. It is an error to call it for a canvas which has no cross\-hairs\.

    All arguments after the widget *w* are treated as options as for a canvas
    line item in *w*\. Of particular interest are __\-fill__ and
    __\-dash__\.

    The result of the command are the current configuration settings\.

  - <a name='4'></a>__crosshair::track__ __on__ *w* *cmdprefix*

    This command activates reporting of the location of the cross\-hairs in the
    canvas widget *w*\. It is an error to use this command for a canvas which
    has no cross\-hairs\. The result of the command is the empty string\.

    After the invokation of this command the specified command prefix
    *cmdprefix* will be called whenever the mouse moves within the canvas,
    with 7 arguments\. These are, in order:

      1. The widget *w*

      1. The x\-location of the cross\-hairs, in pixels\.

      1. The y\-location of the cross\-hairs, in pixels\.

      1. The x\-location of the top\-left corner of the viewport, in pixels\.

      1. The y\-location of the top\-left corner of the viewport, in pixels\.

      1. The x\-location of the bottom\-right corner of the viewport, in pixels\.

      1. The y\-location of the bottom\-right corner of the viewport, in pixels\.

    A previously existing callback for *w* will be disabled\. I\.e\. per canvas
    widget with cross\-hairs only one callback reporting their location is
    possible\.

  - <a name='5'></a>__crosshair::track__ __off__ *w*

    This command disables the reporting of the location of the cross\-hairs in
    the canvas widget *w*\. It is an error to use this command for a canvas
    which has no cross\-hairs\. The result of the command is the empty string\.

  - <a name='6'></a>__crosshair::bbox\_add__ *w* *bbox*

    This command adds a bounding box to the crosshairs for canvas *w*\. The
    crosshairs will only be active within that area\.

    The result of the command is a token with which the bounding box can be
    removed again, see __crosshair::bbox\_remove__ below\.

    The bounding box *bbox* is specified thorugh a list of 4 values, the lower
    left and upper right corners of the box\. The order of values in the list is:

        llx lly urx ury

    Note that this command can be used multiple times, each call adding one more
    bounding box\. In such a case the visible area is the *union* of all the
    specified bounding boxes\.

  - <a name='7'></a>__crosshair::bbox\_remove__ *token*

    This command removes the bounding box specified by the *token* \(a result
    of __crosshair::bbox\_add__\) from the crosshairs for its canvas widget\.

# <a name='section3'></a>BUGS, IDEAS, FEEDBACK

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tklib :: crosshair* of the
[Tcllib SF Trackers](http://sourceforge\.net/tracker/?group\_id=12883)\. Please
also report any ideas for enhancements you may have for either package and/or
documentation\.

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *crosshair* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[cross\-hairs](\.\./\.\./\.\./\.\./index\.md\#cross\_hairs),
[location](\.\./\.\./\.\./\.\./index\.md\#location),
[tracking](\.\./\.\./\.\./\.\./index\.md\#tracking),
[viewport](\.\./\.\./\.\./\.\./index\.md\#viewport)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2003 Kevin Kenny  
Copyright &copy; 2008 \(docs\) Andreas Kupries <andreas\_kupries@users\.sourceforge\.net>  
Copyright &copy; 2013 Frank Gover, Andreas Kupries
