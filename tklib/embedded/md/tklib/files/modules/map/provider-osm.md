
[//000000001]: # (map::provider::osm \- Map display support)
[//000000002]: # (Generated from file 'provider\-osm\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::provider::osm\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::provider::osm \- Tile provider using OpenStreetMap Mapnik as origin

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
package require map::slippy::cache  
package require map::slippy::fetcher  
package require snit  
package require map::provider::osm ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides a tile provider suitable for use with
__[map::display](display\.md)__\. It uses OpenStreetMap Mapnik as origin
and caches fetched tiles in the local filesystem\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[map](\.\./\.\./\.\./\.\./index\.md\#map), [mapnik](\.\./\.\./\.\./\.\./index\.md\#mapnik),
[openstreetmap](\.\./\.\./\.\./\.\./index\.md\#openstreetmap), [provider,
tiles](\.\./\.\./\.\./\.\./index\.md\#provider\_tiles), [tile
provider](\.\./\.\./\.\./\.\./index\.md\#tile\_provider)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
