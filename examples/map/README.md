# Overview Of The Map Demos

The `data/` directory contains the geographic data for the set of areas, boxes,
points, and tracks (paths) to be shown in maps.

The file formats used are described in the comments of the `map::*::file`
packages.  See the `modules/map/*-file.tcl` files.

The `*_entry.tcl` applications demonstrate the data entry behaviours for areas,
boxes, and tracks. All other applications are viewers of some kind.

All application use Button-3 dragging for panning the map, and Shift-Button-3
for instant jumps to the clicked location.

All applications use Button-4 and -5, i.e. the Scroll-Wheel to zoom into and out
of the map.

In the viewing applications entering a feature on the map highlights that
feature in the table (if there is a table). Selecting a feature in the table
focuses the map on that feature, at the highest zoom level where the feature
fills the map as much as possible.

The data entry applications use Button-1 to add and remove the vertices of a
track polyline, area perimeter polygon, or box corners.

  - For tracks clicking on a free area of the map extends the tracks by
    connecting the new vertex to the nearest of the track endpoints.

  - For tracks and areas clicking on a line segment of the track or perimeter
    adds a new vertex at that location, splitting the clicked line segment into
    two segments connected by the new vertex.

  - For boxes creating the second vertex creates the entire box from the primary
    points and then stops accepting more vertices.

  - Clicking on a vertex removes that vertex from the track or perimeter. The
    neighbouring vertices are re-connected through a shorter line-segment, if
    possible.

    Removing any vertex of a box removes the entire box and allows the creation
    of a new box by re-adding two vertices.

The entry applications use Button-2 on vertices to drag vertices. After dragging
concludes the track, perimeter, or box is updated according to the new position
of the changed vertex.
