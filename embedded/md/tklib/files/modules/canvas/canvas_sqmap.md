
[//000000001]: # (canvas::sqmap \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_sqmap\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::sqmap\(n\) 0\.3\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::sqmap \- Canvas with map background based on square tiles

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Options](#subsection1)

      - [Methods](#subsection2)

  - [Image ownership](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require snit  
package require uevent::onidle  
package require cache::async  
package require canvas::sqmap ?0\.3\.1?  

[__::canvas::sqmap__ *pathName* ?options?](#1)  
[*canvasName* __image set__ *cell* *image*](#2)  
[*canvasName* __image unset__ *cell*](#3)  
[*canvasName* __flush__](#4)  

# <a name='description'></a>DESCRIPTION

This package provides an extended canvas widget for the display of maps based on
a set of square image tiles\. The tiles are the background of the canvas, with
all other canvas items added always shown in front of them\. The number of tiles
shown, tile size, and where to get the images to show are all configurable\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::sqmap__ *pathName* ?options?

    Creates the canvas *pathName* and configures it\. The new widget supports
    all of the options and methods of a regular canvas, plus the options and
    methods described below\.

    The result of the command is *pathName*\.

## <a name='subsection1'></a>Options

  - __\-grid\-cell\-width__

    The value for this option is a non\-negative integer\. It specifies the width
    of the cells the background is made up of\.

  - __\-grid\-cell\-height__

    The value for this option is a non\-negative integer\. It specifies the height
    of the cells the background is made up of\.

  - __\-grid\-cell\-command__

    The value for this option is a command prefix\. It is invoked whenever the
    canvas needs the image for a specific cell of the background, with two
    additional arguments, the id of the cell, and a command prefix to invoke
    when the image is ready, or known to not exist\.

    The id of the cell is a 2\-element list containing the row and column number
    of the cell, in this order\. The result command prefix \(named "$result" in
    the example below\) has to be invoked with either two or three arguments,
    i\.e\.

        $result set   $cellid $image ; # image is known and ready
        $result unset $cellid        ; # image does not exist

    This option may be left undefined, i\.e\. the canvas can operate without it\.
    In that case the only images shown in grid cells are those explicitly set
    with the method __image set__, see the next section\. All other grid
    cells will simply be empty\.

  - __\-viewport\-command__

    This option specifies a command prefix to invoke when the viewport of the
    canvas is changed, to allow users keep track of where in the scroll\-region
    we are at all times\. This can be used, for example, to drive derivate
    displays, or to keep items in view by moving them as the viewport moves\.

  - __\-image\-on\-load__

    The value for this option is an image\. If specified the image is shown in a
    cell while the actual image for that cell is getting loaded through the
    callback specified by the __\-grid\-cell\-command__\.

  - __\-image\-on\-unset__

    The value for this option is an image\. If specified the image is shown in a
    cell for which the callback specified by the __\-grid\-cell\-command__
    reported that there is no actual image to be shown\.

## <a name='subsection2'></a>Methods

  - <a name='2'></a>*canvasName* __image set__ *cell* *image*

    Invoking this method places the *image* into the specified *cell* of the
    background\. The cell is given as a 2\-element list containing row and column
    number, in this order\.

    Note that an image is allowed to be associated with and displayed in
    multiple cells of the canvas\.

  - <a name='3'></a>*canvasName* __image unset__ *cell*

    Invoking this method declares the specified *cell* of the background as
    empty, an existing image shown by this cell will be forgotten\. The cell is
    given as a 2\-element list containing row and column number, in this order\.

  - <a name='4'></a>*canvasName* __flush__

    Invoking this method forces the canvas to completely reload the images for
    all cells\. Do not use this method if the canvas is operated without a
    __\-grid\-cell\-command__, as in that case the canvas will simply forget
    all images without being able to reload them\.

# <a name='section3'></a>Image ownership

Note that the canvas *does not* take ownership of the images it shows in the
background\. In other words, when we say that the canvas forgets an image this
means only that the association between a grid cell and shown image is broken\.
The image is *not* deleted\. Managing the lifecycle of the images shown by the
canvas is responsibility of the user of the canvas\.

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[cell](\.\./\.\./\.\./\.\./index\.md\#cell), [grid](\.\./\.\./\.\./\.\./index\.md\#grid),
[image](\.\./\.\./\.\./\.\./index\.md\#image), [map](\.\./\.\./\.\./\.\./index\.md\#map),
[square map](\.\./\.\./\.\./\.\./index\.md\#square\_map),
[tile](\.\./\.\./\.\./\.\./index\.md\#tile)
