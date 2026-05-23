
[//000000001]: # (map::area::store::memory \- Map display support)
[//000000002]: # (Generated from file 'area\-store\-mem\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::area::store::memory\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::area::store::memory \- In\-memory store for geo/area definitions

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
package require map::area::store::memory ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides an in\-memory store for *geo/area* definitions, with
memoized calculation of extended attributes\.

The base data is pulled from a backing store\. A
__[map::area::store::fs](area\-store\-fs\.md)__ or anything API\-compatible
to it\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[center, geo/area](\.\./\.\./\.\./\.\./index\.md\#center\_geo\_area), [diameter,
geo/area](\.\./\.\./\.\./\.\./index\.md\#diameter\_geo\_area), [geo/area pixels,
zoom](\.\./\.\./\.\./\.\./index\.md\#geo\_area\_pixels\_zoom), [geo/area,
center](\.\./\.\./\.\./\.\./index\.md\#geo\_area\_center), [geo/area,
diameter](\.\./\.\./\.\./\.\./index\.md\#geo\_area\_diameter), [geo/area, memory
store](\.\./\.\./\.\./\.\./index\.md\#geo\_area\_memory\_store), [geo/area, perimeter
length](\.\./\.\./\.\./\.\./index\.md\#geo\_area\_perimeter\_length), [length, geo/area,
perimeter](\.\./\.\./\.\./\.\./index\.md\#length\_geo\_area\_perimeter),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [memory store,
geo/area](\.\./\.\./\.\./\.\./index\.md\#memory\_store\_geo\_area), [perimeter length,
geo/area](\.\./\.\./\.\./\.\./index\.md\#perimeter\_length\_geo\_area), [pixels, zoom,
geo/area](\.\./\.\./\.\./\.\./index\.md\#pixels\_zoom\_geo\_area), [store, geo/area,
memory](\.\./\.\./\.\./\.\./index\.md\#store\_geo\_area\_memory), [zoom, geo/area
pixels](\.\./\.\./\.\./\.\./index\.md\#zoom\_geo\_area\_pixels)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
