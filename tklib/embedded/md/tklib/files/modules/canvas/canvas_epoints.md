
[//000000001]: # (canvas::edit::points \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_epoints\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::edit::points\(n\) 0\.3 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::edit::points \- Editing a cloud of points on a canvas

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Interaction](#section2)

  - [Class API](#section3)

  - [Instance API](#section4)

  - [Options](#section5)

  - [Bugs, Ideas, Feedback](#section6)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::edit::points ?0\.3?  

[__::canvas::edit__ __points__ *objectName* *canvas* *options*\.\.\.](#1)  
[__objectName__ __destroy__](#2)  
[__objectName__ __enable__](#3)  
[__objectName__ __disable__](#4)  
[__objectName__ __active__](#5)  
[__objectName__ __add__ *x* *y*](#6)  
[__objectName__ __clear__](#7)  
[__activeCmd__ *editorObj* *id*](#8)  
[__createCmd__ *canvas* *x* *y*](#9)  
[__dataCmd__ __add__ *editorObj* *id* *x* *y*](#10)  
[__dataCmd__ __remove__ *editorObj* *id*](#11)  
[__dataCmd__ __move start__ *editorObj* *id*](#12)  
[__dataCmd__ __move delta__ *editorObj* *id* *x* *y* *dx* *dy*](#13)  
[__dataCmd__ __move done__ *editorObj* *id*](#14)  

# <a name='description'></a>DESCRIPTION

This package provides a class whose instances handle editing a cloud of point
markers on a canvas\. Instances can be configured with regard to the visual
appearance of markers\. Note that instances do not store the edited points
themselves, but delegate this to a configurable object\.

# <a name='section2'></a>Interaction

The default bindings enable the creation, removal and dragging of point
\(markers\) using the mouse buttons 1, 2, and 3\. Specifically:

  1. Clicking anywhere with button 1 adds a new point\.

  1. Clicking on a point with button 2 removes that point\.

  1. Clicking on a point with button 3 starts a drag operation ending with the
     release of the button\.

The option __\-drag\-point__ can be used to change the button used to initiate
drag operations\. Note that the option value may not only contain the button
number, but also modifier prefix separated from the button by a dash
"__\-__"\. The recognized modifiers are __Control__, __Shift__, and
__Alt__\.

The option __\-add\-remove\-point__ can be used to change the button used to
add/remove points\. This works because removal is an item binding, while adding
is canvas global\. The option recognizes the same syntax for button as
__\-drag\-point__\.

In the standard configuration the canvas item representing a point is a circle
configured using the appearance options __\-color__, __\-hilit\-color__,
and __\-radius__\. Their defaults are __Skyblue2__, __red__, and
__3__, repsectively\.

The option __\-kind__ can be used to slightly customize the canvas item to
any kind accepting the item options __\-width__, __\-outline__,
__\-fill__, and __\-activefill__\.

For more extensive customization its is necessary to configure a creation
callback using option __\-create\-cmd__\. The callback takes the canvas and x\.
y coordinates as arguments, in this order, and is expected to return a list of
the canvas items representing the point\.

Note the plural\. With the callback it is possible to visualize a point using a
group of items\.

Further note that when the callback return an empty list no point is created\. In
other words, the callback can also be used to perform checks if a point at the
given location is desirable, or not\. This can be combined with the default
creation behaviour as the option can be queried, and its default value is the
callback for the default behaviour\.

Keeping with the callback for a bit, the option __\-active\-cmd__ sets a
callback invoked whenever the mouse is over one of the created points, i\.e\.
active\. This can be used to drive derived displays\. For example highlighting the
point's entry in a table or other widget\.

The last option of importance is __\-tag__\. Its value is the name of the
canvas tag used to mark all the items owned, i\.e\. created and managed by an\. The
default is __POINT__\.

When attaching multiple instances of this behaviour to the same canvas each
instance has to be configured with a unique tag, to prevent them from
interfering with each other\.

# <a name='section3'></a>Class API

  - <a name='1'></a>__::canvas::edit__ __points__ *objectName* *canvas* *options*\.\.\.

    This, the class command, creates and configures a new instance of a point
    cloud editor, named *objectName*\. The instance will be connected to the
    specified *canvas* widget\.

    The result of the command is the fully qualified name of the instance
    command\.

    The options accepted here, and their values, are explained in the section
    [Options](#section5)\.

# <a name='section4'></a>Instance API

Instances of the point cloud editors provide the following API:

  - <a name='2'></a>__objectName__ __destroy__

    This method destroys the point cloud editor and releases all its internal
    resources\.

    Note that this operation does not destroy the items of the point markers the
    editor managed on the attached canvas, nor the canvas itself\.

    The result of the method is an empty string\.

  - <a name='3'></a>__objectName__ __enable__

    This method activates editing of the point cloud on the canvas\. This is the
    default after instance creation\. A call is ignored if the editor is already
    active\.

    The result of the method is an empty string\.

    The complementary method is __disable__\. The interogatory method for the
    current state is __active__\.

  - <a name='4'></a>__objectName__ __disable__

    This method disables editing of the point cloud on the canvas\. A call is
    ignored if the editor is already disabled\.

    The result of the method is an empty string\.

    The complementary method is __enable__\. The interogatory method for the
    current state is __active__\.

  - <a name='5'></a>__objectName__ __active__

    This method queries the editor state\.

    The result of the method is a boolean value, __true__ if the editor is
    active, and __false__ otherwise, i\.e\. disabled\.

    The methods to change the state are __enable__ and __disable__\.

  - <a name='6'></a>__objectName__ __add__ *x* *y*

    This method programmatically creates a point at the specified location\.

    The result of the method is an empty string\.

    Note that this method goes through the whole set of callbacks invoked when
    the user interactively creates a point, i\.e\. __\-create\-cmd__, and, more
    importantly, __\-data\-cmd__\.

    This is the method through which to load pre\-existing points into an editor
    instance\.

  - <a name='7'></a>__objectName__ __clear__

    This method programmatically removes all points from the editor\.

    The result of the method is an empty string\.

    Note that this method goes through the same callback invoked when the user
    interactively removes a point, i\.e\. __\-data\-cmd__\.

# <a name='section5'></a>Options

The class command accepts the following options

  - __\-active\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    mouse enters or leaves a point managed by the instance\.

    If not specified it defaults to an empty command which does nothing\.

    The signature of this command prefix is

      * <a name='8'></a>__activeCmd__ *editorObj* *id*

        The *id* identifies the point within the editor\.

        An empty *id* indicates that the last entered point was left\.

        The result of this method is ignored\.

  - __\-add\-remove\-point__ *eventspec*

    The value of this option is an event specification \(without bracketing
    angles\) declaring which event will trigger adding and removing a point\.

    This option can only be set at construction time\.

    The default setup uses different events for adding and removing points,
    __ButtonPress\-1__ and __ButtonPress\-2__ respectively\.

    When using this option the same event is used for both operations\. This is
    no problem because adding is bound as canvas\-global event while removal is
    bound to the relevant canvas items\.

  - __\-color__ *colorspec*

    The value of this option is the fill color for the default item created when
    adding a point, and no __\-create\-cmd__ is specified\.

    The default value is __SkyBlue2__\.

  - __\-create\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when it
    has to create a new point\.

    While this option can be set after construction, it is recommended to use
    this feature only as a means of inserting custom processing to be done at
    creation time which remembers and calls the previous value of the option\.

    If not specified it defaults to a command which will create a black\-bordered
    blue circle of radius 3 centered on the location of the new point\.

    The signature of this command prefix is

      * <a name='9'></a>__createCmd__ *canvas* *x* *y*

        The result of the command prefix *must* be a list of the canvas items
        it created to represent the marker\. Note here that the visual
        representation of a "point" may consist of multiple canvas items in an
        arbitrary shape\.

        The returned list of items is allowed to be empty, and such is taken as
        signal that the callback vetoed the creation of the point\.

  - __\-data\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when a
    point was edited in some way\. This is how the editor delegates the actual
    storage of point information to an outside object\.

    This option can only be set at construction time\.

    If not specified it defaults to an empty string and is ignored by the
    editor, i\.e\. not invoked\.

    The signatures of this command prefix are

      * <a name='10'></a>__dataCmd__ __add__ *editorObj* *id* *x* *y*

        This callback is invoked when a new point was added to the instance,
        either interactively, or programmatically\. See instance method
        __add__ for the latter\.

        The *id* identifies the point within the editor and will be used by
        the two other callbacks to specify which point to modify\.

        The last two arguments *x* and *y* specify the location of the new
        point in canvas coordinates\.

        The result of this method is ignored\.

      * <a name='11'></a>__dataCmd__ __remove__ *editorObj* *id*

        This callback is invoked when a point removed from the editor instance\.

        The *id* identifies the removed point within the editor\.

        The result of this method is ignored\.

      * <a name='12'></a>__dataCmd__ __move start__ *editorObj* *id*

        This callback is invoked when the movement of a point in the editor
        instance has started\.

        The *id* identifies the point within the editor about to be moved\.

        The result of this method is ignored\.

      * <a name='13'></a>__dataCmd__ __move delta__ *editorObj* *id* *x* *y* *dx* *dy*

        This callback is invoked when the point moved in the editor instance\.

        The *id* identifies the moved point within the editor, and the
        remaining arguments *x*, *y*, *dx*, and *dy* provide the new
        absolute location of the point, and full delta to the original location\.

        At the time of the calls the system is *not* committed to the move
        yet\. Only after method __move done__ was invoked and has accepted or
        rejected the last position will the editor update its internal data
        structures, either committing to the new location, or rolling the move
        back to the original one\.

        Given this the location data provided here should be saved only in
        temporary storage until then\.

        The result of this method is ignored\.

      * <a name='14'></a>__dataCmd__ __move done__ *editorObj* *id*

        This callback is invoked when the movement of a point in the editor
        instance is complete\.

        The *id* identifies the moved point within the editor\.

        The result of this method must be a boolean value\. If the method returns
        __false__ the move is vetoed and rollbed back\.

  - __\-drag\-point__ *eventspec*

    The value of this option is an event specification \(without bracketing
    angles\) declaring which event will trigger a drag action on points\.

    This option can only be set at construction time\.

    The default specification is __ButtonPress\-3__\.

  - __\-hilit\-color__ *colorspec*

    The value of this option is the highlight color for the default item created
    when adding a point, and no __\-highlight\-cmd__ is specified\.

    The default value is __red__\.

  - __\-kind__ *name*

    The value of this option is the canvas item type for the default item
    created when adding a point, and no __\-create\-cmd__ is specified\. Only
    item types specified through a bounding box are suitable\.

    The default value is __oval__\.

  - __\-radius__ *int*

    The value of this option is the radius for the default item created when
    adding a point, and no __\-create\-cmd__ is specified\.

    The default value is __3__\.

  - __\-tag__ *string*

    The value of this option is the name of the canvas tag with which to
    identify all items of all points managed by the editor\.

    This option can only be set at construction time\.

    If not specified it defaults to __POINT__

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[editing](\.\./\.\./\.\./\.\./index\.md\#editing), [point
cloud](\.\./\.\./\.\./\.\./index\.md\#point\_cloud),
[points](\.\./\.\./\.\./\.\./index\.md\#points)
