
[//000000001]: # (canvas::gradient \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_gradient\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2013 Jarek Lewandowski, MaxJarek)
[//000000004]: # (Copyright &copy; Origin http://wiki\.tcl\.tk/6100)
[//000000005]: # (Copyright &copy; Origin http://wiki\.tcl\.tk/37242)
[//000000006]: # (Copyright &copy; Origin http://wiki\.tcl\.tk/9079)
[//000000007]: # (canvas::gradient\(n\) 0\.2 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::gradient \- Canvas with a gradient background

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Options](#subsection1)

  - [Example](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::gradient ?0\.2?  

[__::canvas::gradient__ *pathName* ?options?\.\.\.](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a command to set background gradients on canvases\.

*NOTE\!* This package reserves the canvas tag __canvas::gradient__ for its
use\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::gradient__ *pathName* ?options?\.\.\.

    Creates a background gradient on the canvas *pathName*\. An existing
    gradient is replaced by the new definition\.

    The set of available options is decribed below, in section
    [Options](#subsection1)\.

## <a name='subsection1'></a>Options

  - __\-direction__ *direction*

    The value for this option specifies the *direction* of the gradient\. If
    not specified the system defaults to __x__, a horizontal gradient\. The
    package supports five directions:

      * __x__

        for a horizontal gradient \(default\)\. Color changes along the x\-axis,
        with the start color at the left\.

      * __y__

        for a vertical gradient\. Color changes along the y\-axis, with the start
        color at the top\.

      * __d1__

        for a diagonal gradient from left\+top to bottom\+right\. Color changes
        along the diagonal\. with the start color at left\+top\.

      * __d2__

        for a diagonal gradient from left\+bottom to top\+right\. Color changes
        along the diagonal\. with the start color at left\+bottom\.

      * __r__

        for a radial gradient around the center of the viewport Color changes
        from the center outward, with the start color at the center\.

  - __\-color1__ *color*

    The value for this option specifies the starting color of the gradient\. If
    not specified it defaults to __red__\.

  - __\-color2__ *color*

    The value for this option specifies the ending color of the gradient\. If not
    specified it defaults to __green__\.

  - __\-type__ *type*

    The value for this option specifies how the gradient is calculated\. The
    package currently supports on ly one method, which is the default,
    naturally:

      * __linear__

        for linear interpolation between the start and end colors \(default\)\.

# <a name='section3'></a>Example

    package require canvas::gradient
    canvas .c
    canvas::gradient .c -direction x -color1 yellow -color2 blue
    pack .c -fill both -expand 1

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[background](\.\./\.\./\.\./\.\./index\.md\#background),
[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas), [color
gradient](\.\./\.\./\.\./\.\./index\.md\#color\_gradient),
[gradients](\.\./\.\./\.\./\.\./index\.md\#gradients),
[image](\.\./\.\./\.\./\.\./index\.md\#image), [widget
background](\.\./\.\./\.\./\.\./index\.md\#widget\_background)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2013 Jarek Lewandowski, MaxJarek  
Copyright &copy; Origin http://wiki\.tcl\.tk/6100  
Copyright &copy; Origin http://wiki\.tcl\.tk/37242  
Copyright &copy; Origin http://wiki\.tcl\.tk/9079
