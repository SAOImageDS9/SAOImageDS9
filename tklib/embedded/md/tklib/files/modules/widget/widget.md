
[//000000001]: # (widget \- Various megawidgets)
[//000000002]: # (Generated from file 'widget\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\(n\) 3\.2 tklib "Various megawidgets")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget \- Megawidget bundle

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [WIDGETS](#section2)

  - [EXAMPLE](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require widget ?3\.2?  
package require snit  

[__widget::validate__ *as* ?options?](#1)  
[__widget::calendar__ *pathname* ?options?](#2)  
[__widget::dateentry__ *pathname* ?options?](#3)  
[__widget::dialog__ *pathname* ?options?](#4)  
[__widget::menuentry__ *pathname* ?options?](#5)  
[__widget::panelframe__ *pathname* ?options?](#6)  
[__widget::ruler__ *pathname* ?options?](#7)  
[__widget::screenruler__ *pathname* ?options?](#8)  
[__widget::scrolledwindow__ *pathname* ?options?](#9)  
[__widget::statusbar__ *pathname* ?options?](#10)  
[__widget::superframe__ *pathname* ?options?](#11)  
[__widget::toolbar__ *pathname* ?options?](#12)  

# <a name='description'></a>DESCRIPTION

This package provides megawidgets based on the snit oo system \(snidgets\)\. It
makes use of the Tile/Ttk themed widget set\.

  - <a name='1'></a>__widget::validate__ *as* ?options?

    commands:

# <a name='section2'></a>WIDGETS

  - <a name='2'></a>__widget::calendar__ *pathname* ?options?

    options:

  - <a name='3'></a>__widget::dateentry__ *pathname* ?options?

    options:

  - <a name='4'></a>__widget::dialog__ *pathname* ?options?

    options:

  - <a name='5'></a>__widget::menuentry__ *pathname* ?options?

    options:

  - <a name='6'></a>__widget::panelframe__ *pathname* ?options?

    options:

  - <a name='7'></a>__widget::ruler__ *pathname* ?options?

    options:

  - <a name='8'></a>__widget::screenruler__ *pathname* ?options?

    options:

  - <a name='9'></a>__widget::scrolledwindow__ *pathname* ?options?

    options:

  - <a name='10'></a>__widget::statusbar__ *pathname* ?options?

    options:

  - <a name='11'></a>__widget::superframe__ *pathname* ?options?

    options:

  - <a name='12'></a>__widget::toolbar__ *pathname* ?options?

    options:

# <a name='section3'></a>EXAMPLE

    package require widget::superframe ; # or widget::all
    pack [widget::superframe .f -type separator -text "SuperFrame:"]

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[bundle](\.\./\.\./\.\./\.\./index\.md\#bundle),
[calendar](\.\./\.\./\.\./\.\./index\.md\#calendar),
[dateentry](\.\./\.\./\.\./\.\./index\.md\#dateentry),
[dialog](\.\./\.\./\.\./\.\./index\.md\#dialog),
[megawidget](\.\./\.\./\.\./\.\./index\.md\#megawidget),
[menu](\.\./\.\./\.\./\.\./index\.md\#menu),
[panelframe](\.\./\.\./\.\./\.\./index\.md\#panelframe),
[ruler](\.\./\.\./\.\./\.\./index\.md\#ruler),
[screenruler](\.\./\.\./\.\./\.\./index\.md\#screenruler),
[scrolledwindow](\.\./\.\./\.\./\.\./index\.md\#scrolledwindow),
[snit](\.\./\.\./\.\./\.\./index\.md\#snit),
[statusbar](\.\./\.\./\.\./\.\./index\.md\#statusbar),
[superframe](\.\./\.\./\.\./\.\./index\.md\#superframe),
[toolbar](\.\./\.\./\.\./\.\./index\.md\#toolbar),
[widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='category'></a>CATEGORY

Widget
