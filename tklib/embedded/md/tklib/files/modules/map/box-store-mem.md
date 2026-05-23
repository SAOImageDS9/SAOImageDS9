
[//000000001]: # (map::box::store::memory \- Map display support)
[//000000002]: # (Generated from file 'box\-store\-mem\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::box::store::memory\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::box::store::memory \- In\-memory store for geo/box definitions

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
package require map::box::store::memory ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides an in\-memory store for *geo/box* definitions, with
memoized calculation of extended attributes\.

The base data is pulled from a backing store\. A
__[map::box::store::fs](box\-store\-fs\.md)__ or anything API\-compatible to
it\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[center, geo/box](\.\./\.\./\.\./\.\./index\.md\#center\_geo\_box), [diameter,
geo/box](\.\./\.\./\.\./\.\./index\.md\#diameter\_geo\_box), [geo/box pixels,
zoom](\.\./\.\./\.\./\.\./index\.md\#geo\_box\_pixels\_zoom), [geo/box,
center](\.\./\.\./\.\./\.\./index\.md\#geo\_box\_center), [geo/box,
diameter](\.\./\.\./\.\./\.\./index\.md\#geo\_box\_diameter), [geo/box, memory
store](\.\./\.\./\.\./\.\./index\.md\#geo\_box\_memory\_store), [geo/box, perimeter
length](\.\./\.\./\.\./\.\./index\.md\#geo\_box\_perimeter\_length), [length, geo/box,
perimeter](\.\./\.\./\.\./\.\./index\.md\#length\_geo\_box\_perimeter),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [memory store,
geo/box](\.\./\.\./\.\./\.\./index\.md\#memory\_store\_geo\_box), [perimeter length,
geo/box](\.\./\.\./\.\./\.\./index\.md\#perimeter\_length\_geo\_box), [pixels, zoom,
geo/box](\.\./\.\./\.\./\.\./index\.md\#pixels\_zoom\_geo\_box), [store, geo/box,
memory](\.\./\.\./\.\./\.\./index\.md\#store\_geo\_box\_memory), [zoom, geo/box
pixels](\.\./\.\./\.\./\.\./index\.md\#zoom\_geo\_box\_pixels)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
