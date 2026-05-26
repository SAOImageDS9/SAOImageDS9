
[//000000001]: # (canvas::zoom \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_zoom\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::zoom\(n\) 0\.2\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::zoom \- Zoom control for canvas::sqmap

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Options](#subsection1)

      - [Methods](#subsection2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require snit  
package require uevent::onidle  
package require canvas::zoom ?0\.2\.1?  

[__::canvas::zoom__ *pathName* ?options?](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a widget to enable the user of a map display to control
the zoom level\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::zoom__ *pathName* ?options?

    Creates the zoom control widget *pathName* and configures it\. The methods
    and options supported by the new widget are described in the following
    sections\.

    The result of the command is *pathName*\.

## <a name='subsection1'></a>Options

  - __\-orient__

    The value for this option is either __vertical__, or __horizontal__,
    specifying the orientation of the major axis of the widget\. The default is
    __vertical__\.

  - __\-levels__

    The value for this option is a non\-negative integer\. It specifies the number
    of zoom levels to support\.

  - __\-variable__

    The value for this option is the name of a global or namespaced variable
    which is connected with the widget\. changes to the zoom level made the
    widget are propagated to this variable, and in turn changes to the variable
    are imported into the widget\.

  - __\-command__

    This option specifies a command prefix\. This callback will be invoked
    whenever the zoom level is changed\. It is called with two additional
    arguments, the zoom control widget, and the new zoom level, in this order\.

## <a name='subsection2'></a>Methods

The widget supports no methods beyond the standard \(__configure__,
__cget__, etc\.\)\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[zoom](\.\./\.\./\.\./\.\./index\.md\#zoom)
