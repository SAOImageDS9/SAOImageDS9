
[//000000001]: # (map::mark \- Map display support)
[//000000002]: # (Generated from file 'mark\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::mark\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::mark \- Map Action Engine \- Mark A Point

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
package require snit  
package require map::mark ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides a __[map::display](display\.md)__ attachment
extending the map's behaviour\. This attachment enables the user to mark
locations, i\.e\. *geo/point*s\. The marked locations are reported via a
callback\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[location marking](\.\./\.\./\.\./\.\./index\.md\#location\_marking),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [mark
location](\.\./\.\./\.\./\.\./index\.md\#mark\_location)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
