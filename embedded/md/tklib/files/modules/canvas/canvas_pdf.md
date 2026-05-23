
[//000000001]: # (canvas::pdf \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_pdf\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2014 Andreas Kupries, Arjen Markus)
[//000000004]: # (Copyright &copy; 2014 Documentation, Andreas Kupries)
[//000000005]: # (canvas::pdf\(n\) 1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::pdf \- Canvas to PDF

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
package require canvas::pdf ?1?  
package require pdf4tcl  

[__::canvas::pdf__ *pathName*](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a command to convert a canvas' contents to Adobe's PDF
vector format\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::pdf__ *pathName*

    Dump the contents of the canvas *pathName*\. The result is a string in
    Adobe's PDF\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[graphics](\.\./\.\./\.\./\.\./index\.md\#graphics),
[imagemagick](\.\./\.\./\.\./\.\./index\.md\#imagemagick),
[pdf](\.\./\.\./\.\./\.\./index\.md\#pdf), [portable document
format](\.\./\.\./\.\./\.\./index\.md\#portable\_document\_format), [print
screen](\.\./\.\./\.\./\.\./index\.md\#print\_screen),
[serialization](\.\./\.\./\.\./\.\./index\.md\#serialization), [vector
graphics](\.\./\.\./\.\./\.\./index\.md\#vector\_graphics)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2014 Andreas Kupries, Arjen Markus  
Copyright &copy; 2014 Documentation, Andreas Kupries
