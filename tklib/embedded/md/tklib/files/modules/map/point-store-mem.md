
[//000000001]: # (map::point::store::memory \- Map display support)
[//000000002]: # (Generated from file 'point\-store\-mem\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::point::store::memory\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::point::store::memory \- In\-memory store for geo/point definitions

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
package require debug  
package require debug::caller  
package require map::slippy 0\.8  
package require snit  
package require map::point::store::memory ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides an in\-memory store for *geo/point* definitions, with
memoized calculation of extended attributes\.

The base data is pulled from a backing store\. A
__[map::point::store::fs](point\-store\-fs\.md)__ or anything
API\-compatible to it\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[center, geo/point](\.\./\.\./\.\./\.\./index\.md\#center\_geo\_point), [diameter,
geo/point](\.\./\.\./\.\./\.\./index\.md\#diameter\_geo\_point), [geo/point pixels,
zoom](\.\./\.\./\.\./\.\./index\.md\#geo\_point\_pixels\_zoom), [geo/point,
center](\.\./\.\./\.\./\.\./index\.md\#geo\_point\_center), [geo/point,
diameter](\.\./\.\./\.\./\.\./index\.md\#geo\_point\_diameter), [geo/point, memory
store](\.\./\.\./\.\./\.\./index\.md\#geo\_point\_memory\_store), [geo/point, perimeter
length](\.\./\.\./\.\./\.\./index\.md\#geo\_point\_perimeter\_length), [length,
geo/point, perimeter](\.\./\.\./\.\./\.\./index\.md\#length\_geo\_point\_perimeter),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [memory store,
geo/point](\.\./\.\./\.\./\.\./index\.md\#memory\_store\_geo\_point), [perimeter length,
geo/point](\.\./\.\./\.\./\.\./index\.md\#perimeter\_length\_geo\_point), [pixels, zoom,
geo/point](\.\./\.\./\.\./\.\./index\.md\#pixels\_zoom\_geo\_point), [store, geo/point,
memory](\.\./\.\./\.\./\.\./index\.md\#store\_geo\_point\_memory), [zoom, geo/point
pixels](\.\./\.\./\.\./\.\./index\.md\#zoom\_geo\_point\_pixels)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
