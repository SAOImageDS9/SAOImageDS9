
[//000000001]: # (map::display \- Map display support)
[//000000002]: # (Generated from file 'display\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::display\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::display \- Map Display Widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

  - [EXAMPLE](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.6\-  
package require Tk 8\.6\-  
package require canvas::sqmap  
package require canvas::zoom  
package require crosshair  
package require debug  
package require debug::caller  
package require snit  
package require widget::scrolledwindow  
package require map::display ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides a map display widget with basic behaviour \(Drag, Center,
Zoom \+/\-\)\. The map tiles are fetched from a configurable provider like
__[map::provider::osm](provider\-osm\.md)__ or anything API compatible\.
The widget is extensible with attachable engines providing additional
behaviours, like the display of geo/\* resources, and/or editing of geo/\*
resources\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[display, map](\.\./\.\./\.\./\.\./index\.md\#display\_map),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [map
display](\.\./\.\./\.\./\.\./index\.md\#map\_display)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
