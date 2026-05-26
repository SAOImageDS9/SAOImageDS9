
[//000000001]: # (widget\_toolbar \- Various megawidgets)
[//000000002]: # (Generated from file 'widget\_toolbar\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\_toolbar\(n\) 3\.0 tklib "Various megawidgets")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget\_toolbar \- Toolbar Megawidget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [WIDGET OPTIONS](#section2)

  - [ITEM OPTIONS](#section3)

  - [EXAMPLE](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require widget ?3\.0?  
package require widget::toolbar ?1\.0?  

[__widget::toolbar__ *pathname* ?options?](#1)  
[getframe](#2)  
[add ?item? ?args?](#3)  
[delete item1 ?item2? ?\.\.\.?](#4)  
[itemcget symbol option](#5)  
[itemconfigure symbol ?args?](#6)  
[items ?pattern?](#7)  
[remove ?\-destroy? item1 ?item2? ?\.\.\.?](#8)  

# <a name='description'></a>DESCRIPTION

This package provides a toolbar megawidget \(snidget\)\. It makes use of the
Tile/Ttk themed widget set\.

  - <a name='1'></a>__widget::toolbar__ *pathname* ?options?

  - <a name='2'></a>getframe

  - <a name='3'></a>add ?item? ?args?

  - <a name='4'></a>delete item1 ?item2? ?\.\.\.?

  - <a name='5'></a>itemcget symbol option

  - <a name='6'></a>itemconfigure symbol ?args?

  - <a name='7'></a>items ?pattern?

  - <a name='8'></a>remove ?\-destroy? item1 ?item2? ?\.\.\.?

# <a name='section2'></a>WIDGET OPTIONS

  - __\-ipad__

  - __\-pad__

  - __\-separator__

# <a name='section3'></a>ITEM OPTIONS

  - __\-pad__

  - __\-separator__

  - __\-sticky__

  - __\-weight__

# <a name='section4'></a>EXAMPLE

    package require widget::toolbar ; # or widget::all
    set t [widget::toolbar .t]
    pack $t -fill x -expand 1
    $t add button [button .b -text foo]
    $t add separator -pad {2 4}
    $t add button [button .c -text bar]

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget::toolbar* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[megawidget](\.\./\.\./\.\./\.\./index\.md\#megawidget),
[snit](\.\./\.\./\.\./\.\./index\.md\#snit),
[toolbar](\.\./\.\./\.\./\.\./index\.md\#toolbar),
[widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='category'></a>CATEGORY

Widget
