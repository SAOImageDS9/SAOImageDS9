
[//000000001]: # (map::box::map\-display \- Map display support)
[//000000002]: # (Generated from file 'box\-map\-display\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map::box::map\-display\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map::box::map\-display \- Map Action Engine \- Layer to display box definitions

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
package require canvas::edit::rectangle  
package require debug  
package require debug::caller  
package require map::slippy 0\.8  
package require snit  
package require map::box::map\-display ?0\.1?  

# <a name='description'></a>DESCRIPTION

This package provides a __[map::display](display\.md)__ attachment
extending the map's behaviour\. This attachment shows a set of *geo/box*
definitions\. It ensures that only the visible boxes use canvas resources
\(items\)\.

# <a name='section2'></a>API

# <a name='section3'></a>EXAMPLE

# <a name='section4'></a>Bugs, Ideas, Feedback

# <a name='keywords'></a>KEYWORDS

[addon, box display, map
display](\.\./\.\./\.\./\.\./index\.md\#addon\_box\_display\_map\_display), [box display,
map display, addon](\.\./\.\./\.\./\.\./index\.md\#box\_display\_map\_display\_addon),
[map](\.\./\.\./\.\./\.\./index\.md\#map), [map display, addon, box
display](\.\./\.\./\.\./\.\./index\.md\#map\_display\_addon\_box\_display)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
