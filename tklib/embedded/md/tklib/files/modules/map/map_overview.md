
[//000000001]: # (map\_overview \- Map display support)
[//000000002]: # (Generated from file 'map\_overview\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (map\_overview\(n\) 0\.1 tklib "Map display support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

map\_overview \- Overview of the packages in the Map module

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Description](#section1)

  - [Bugs, Ideas, Feedback](#section2)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='description'></a>DESCRIPTION

  - Storage

      * File

        Definitions of simple file formats to hold various geo/\* resources, and
        the ability to read/write these files\.

          + __[map::area::file](area\-file\.md)__

          + __[map::box::file](box\-file\.md)__

          + __[map::point::file](point\-file\.md)__

          + __[map::track::file](track\-file\.md)__

      * Disk

        On\-disk stores for various geo/\* resources\. Exist as basic examples to
        start with, and as API demonstrators\. In the original project these
        packages were factored out of __sqlite__ was used as a store\. This
        store is however entwined too much with that project to be factored\.

          + __[map::area::store::fs](area\-store\-fs\.md)__

          + __[map::box::store::fs](box\-store\-fs\.md)__

          + __[map::point::store::fs](point\-store\-fs\.md)__

          + __[map::track::store::fs](track\-store\-fs\.md)__

      * Memory

        In\-memory stores caching geo/\* data and adding derived attributes\. The
        bridge between the actual on\-disk stores and the various widgets and
        behaviours\.

          + __[map::area::store::memory](area\-store\-mem\.md)__

          + __[map::box::store::memory](box\-store\-mem\.md)__

          + __[map::point::store::memory](point\-store\-mem\.md)__

          + __[map::track::store::memory](track\-store\-mem\.md)__

  - Widgets

    To show maps, singular geo resources, and tables of many geo resources of
    the same kind\.

      * Map

        __[map::display](display\.md)__

      * Geo Resource Tables

          + __[map::area::table\-display](area\-table\-display\.md)__

          + __[map::box::table\-display](box\-table\-display\.md)__

          + __[map::point::table\-display](point\-table\-display\.md)__

          + __[map::track::table\-display](track\-table\-display\.md)__

      * Geo Resource Display

          + __[map::area::display](area\-display\.md)__

          + __[map::box::display](box\-display\.md)__

          + __[map::track::display](track\-display\.md)__

  - Behaviours

    Engines attachable to __[map::display](display\.md)__ to add custom
    behaviours to the shown map\. The two classes of engines are for displaying
    overlays for specific geo resources, and the editing/entry of specific
    single geo resources\.

      * Display

          + __[map::area::map\-display](area\-map\-display\.md)__

          + __[map::box::map\-display](box\-map\-display\.md)__

          + __[map::point::map\-display](point\-map\-display\.md)__

          + __[map::track::map\-display](track\-map\-display\.md)__

      * Editing

          + __[map::box::entry](box\-entry\.md)__

          + __[map::mark](mark\.md)__

          + __[map::track::entry](track\-entry\.md)__

  - Support

    __[map::provider::osm](provider\-osm\.md)__

# <a name='section2'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *map* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[map](\.\./\.\./\.\./\.\./index\.md\#map)

# <a name='category'></a>CATEGORY

Map Display and Supporting Utilities
