
[//000000001]: # (canvas::snap \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_snap\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2004 George Petasis \(http://wiki\.tcl\.tk/1404\))
[//000000004]: # (Copyright &copy; 2010 Documentation, Andreas Kupries)
[//000000005]: # (canvas::snap\(n\) 1\.0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::snap \- Canvas snapshot to Tk photo image

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::snap ?1\.0\.1?  
package require img::window  

[__::canvas::snap__ *pathName*](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a command to take snapshots of arbitrary canvases\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::snap__ *pathName*

    Takes a snapshot of the canvas *pathName*\. The result is the name of a new
    Tk photo image containing the snapshot\.

    *Note* that this command has a side\-effect\. To avoid having white
    rectangles where other windows may overlap the canvas this command forces
    the toplevel window the canvas is in to the top of the stacking order\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[image](\.\./\.\./\.\./\.\./index\.md\#image),
[photo](\.\./\.\./\.\./\.\./index\.md\#photo), [print
screen](\.\./\.\./\.\./\.\./index\.md\#print\_screen),
[snapshot](\.\./\.\./\.\./\.\./index\.md\#snapshot)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2004 George Petasis \(http://wiki\.tcl\.tk/1404\)  
Copyright &copy; 2010 Documentation, Andreas Kupries
