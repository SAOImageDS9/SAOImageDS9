
[//000000001]: # (canvas::track::lines \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_trlines\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::track::lines\(n\) 0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::track::lines \- Manage a group of rubber band lines

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Class API](#section2)

  - [Instance API](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::tag ?0\.1?  

[__::canvas::track__ __lines__ *objectName* *canvas*](#1)  
[__objectName__ __destroy__](#2)  
[__objectName__ __start__ *current* *p*\.\.\.](#3)  
[__objectName__ __move__ *current*](#4)  
[__objectName__ __done__](#5)  

# <a name='description'></a>DESCRIPTION

This package provides a utility class managing the drawing of set of
semi\-crosshair \(rubberband\) lines\.

# <a name='section2'></a>Class API

  - <a name='1'></a>__::canvas::track__ __lines__ *objectName* *canvas*

    This, the class command, creates and configures a new instance of the
    tracker, named *objectName*\. The instance will be connected to the
    specified *canvas* widget\.

    The result of the command is the fully qualified name of the instance
    command\.

# <a name='section3'></a>Instance API

Instances of this class provide the following API:

  - <a name='2'></a>__objectName__ __destroy__

    This method destroys the instance and releases all its internal resources\.

    This operation does destroy the items representing the tracked lines\. It
    does not destroy the attached canvas\.

    The result of the method is an empty string\.

  - <a name='3'></a>__objectName__ __start__ *current* *p*\.\.\.

    This method starts the tracking of a set of lines, one line per point *p*,
    which specifies the destination end\-point of each line\. All lines will have
    *current* as a common end\-point\.

    Note that a previously tracked set of lines is removed\.

    The result of the method is an empty string\.

    Each point is specified through a 2\-element list containing its x\- and
    y\-coordinates, in this order\.

  - <a name='4'></a>__objectName__ __move__ *current*

    This method updates the shared end\-point of all rubberbands and redraws
    them\.

    The result of the method is an empty string\.

    The point is specified through a 2\-element list containing its x\- and
    y\-coordinates, in this order\.

  - <a name='5'></a>__objectName__ __done__

    This method ends the tracking of the current set of lines and removes them
    from the canvas\.

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[crosshair](\.\./\.\./\.\./\.\./index\.md\#crosshair),
[rubberband](\.\./\.\./\.\./\.\./index\.md\#rubberband),
[tracking](\.\./\.\./\.\./\.\./index\.md\#tracking)
