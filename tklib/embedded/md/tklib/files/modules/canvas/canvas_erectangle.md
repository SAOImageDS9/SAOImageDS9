
[//000000001]: # (canvas::edit::rectangle \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_erectangle\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::edit::rectangle\(n\) 0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::edit::rectangle \- Editing a rectangle on a canvas

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
package require canvas::edit::points ?0\.1?  
package require canvas::edit::rectangle ?0\.1?  

[__::canvas::edit__ __rectangle__ *objectName* *canvas* *options*\.\.\.](#1)  
[__objectName__ __destroy__](#2)  
[__objectName__ __enable__](#3)  
[__objectName__ __disable__](#4)  
[__objectName__ __active__](#5)  
[__objectName__ __set__ *minx* *miny* *maxx* *maxy*](#6)  
[__objectName__ __clear__](#7)  
[__activeCmd__ *editorObj* *id*](#8)  
[__createCmd__ *canvas* *x* *y*](#9)  
[__dataCmd__ *editorObj* *coordinates*](#10)  

# <a name='description'></a>DESCRIPTION

This package provides a class whose instances handle editing a rectangle on a
canvas\. Instances can be configured with regard to the visual appearance of the
markers denoting the rectangle's corners\. Note that instances do not store the
edited rectangle themselves, but delegate this to a configurable object\.

# <a name='section2'></a>Interaction

The rectangle editor internally uses an instance of package
__[canvas::edit::points](canvas\_epoints\.md)__, and inherits all the
options and behaviours for it\. The color options are additionally applied to the
rectangle element of this editor

Beyond that it provides an option, __\-rect\-config__, to customize the
rectangle item used to render the rectangle through its corners\. Note that it
cannot overide the inherited color options\.

During interaction instances execute a state machine where the user creates two
points, at which point the system completes the rectangle with the missing
corners and reports it\. At that point the system prevents adding more points\.
Dragging the points is still possible, enabling resizing and moving the
rectangle\. Deleting any corner deletes the entire rectangle, at which point the
system is again ready for the creation of a new rectangle from two points\.

# <a name='section3'></a>Class API

  - <a name='1'></a>__::canvas::edit__ __rectangle__ *objectName* *canvas* *options*\.\.\.

    This, the class command, creates and configures a new instance of a
    rectangle editor, named *objectName*\. The instance will be connected to
    the specified *canvas* widget\.

    The result of the command is the fully qualified name of the instance
    command\.

    The options accepted here, and their values, are explained in the section
    [Options](#section5)\.

# <a name='section4'></a>Instance API

Instances of the rectangle editors provide the following API:

  - <a name='2'></a>__objectName__ __destroy__

    This method destroys the rectangle editor and releases all its internal
    resources\.

    Note that this operation does not destroy the items the editor managed on
    the attached canvas, nor the canvas itself\.

    The result of the method is an empty string\.

  - <a name='3'></a>__objectName__ __enable__

    This method activates editing of the rectangle on the canvas\. This is the
    default after instance creation\. A call is ignored if the editor is already
    active\.

    The result of the method is an empty string\.

    The complementary method is __disable__\. The interogatory method for the
    current state is __active__\.

  - <a name='4'></a>__objectName__ __disable__

    This method disables editing of the rectangle on the canvas\. A call is
    ignored if the editor is already disabled\.

    The result of the method is an empty string\.

    The complementary method is __enable__\. The interogatory method for the
    current state is __active__\.

  - <a name='5'></a>__objectName__ __active__

    This method queries the editor state\.

    The result of the method is a boolean value, __true__ if the editor is
    active, and __false__ otherwise, i\.e\. disabled\.

    The methods to change the state are __enable__ and __disable__\.

  - <a name='6'></a>__objectName__ __set__ *minx* *miny* *maxx* *maxy*

    This method programmatically set the rectangle from the border coordinates\.
    This writes over a previous \(possibly partial\) rectangle\.

    The result of the method is an empty string\.

    Note that this method goes through the whole set of callbacks invoked when
    corners are created, i\.e\. __\-create\-cmd__, and, more importantly,
    __\-data\-cmd__\.

    This is the method through which to load a pre\-existing rectangle into an
    editor instance\.

  - <a name='7'></a>__objectName__ __clear__

    This method programmatically removes the rectangle from the editor, making
    the way free for creating a new one\.

    The result of the method is an empty string\.

    Note that this method goes through the same callbacks invoked when the user
    interactively removes a corner, i\.e\. __\-data\-cmd__\.

# <a name='section5'></a>Options

The class command accepts the following options

  - __\-active\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    mouse enters or leaves the rectangle or a corner managed by the instance\.

    If not specified it defaults to an empty command which does nothing\.

    The signature of this command prefix is

      * <a name='8'></a>__activeCmd__ *editorObj* *id*

        The *id* identifies the entered object\.

        An empty *id* indicates that the last entered object was left\.

        The value __rect__ indicates that the rectangle's outline was
        entered\.

        Any other value is a code for one of the rectangle's corner, i\.e\.
        __tl__, __tr__, __bl__, and __br__\.

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
    has to create a new corner\.

    While this option can be set after construction, it is recommended to use
    this feature only as a means of inserting custom processing to be done at
    creation time which remembers and calls the previous value of the option\.

    If not specified it defaults to a command which will create a black\-bordered
    blue circle of radius 3 centered on the location of the new point\.

    The signature of this command prefix is

      * <a name='9'></a>__createCmd__ *canvas* *x* *y*

        The result of the command prefix *must* be a list of the canvas items
        it created to represent the marker\. Note here that the visual
        representation of a "corner" may consist of multiple canvas items in an
        arbitrary shape\.

        The returned list of items is allowed to be empty, and such is taken as
        signal that the callback vetoed the creation of the corner\.

  - __\-data\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    rectangle was edited in some way \(created, modified, deleted\)\. This is how
    the editor delegates the actual storage of the rectangle information to an
    outside object\.

    This option can only be set at construction time\.

    If not specified it defaults to an empty string and is ignored by the
    editor, i\.e\. not invoked\.

    The signature of this command prefix is

      * <a name='10'></a>__dataCmd__ *editorObj* *coordinates*

        This callback is invoked when the rectangle was changed either
        interactively, or programmatically\. See instance method __set__ for
        the latter\.

        The *editorObj* identifies the instance invoking the callback, whereas
        *coordinates* is a list of 4 elements, containing the min x, and y,
        and the max x and y coordinates of the rectangle, in this order\.

        The result of this method is ignored\.

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

  - __\-rect\-config__ *list*

    The value of this option is a list of options and their values to be applied
    to the internal rectangle item whenever it is regenerated after changes\.
    Note that these options *cannot* override the principal coloring of the
    rectangle as applied by the main options __\-color__ and
    __\-hilit\-color__\.

    If not specified it defaults to the empty list\.

  - __\-tag__ *string*

    The value of this option is the name of the canvas tag with which to
    identify all items of all vertices managed by the editor\.

    This option can only be set at construction time\.

    If not specified it defaults to __RECTANGLE__

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[editing](\.\./\.\./\.\./\.\./index\.md\#editing),
[rectangle](\.\./\.\./\.\./\.\./index\.md\#rectangle)
