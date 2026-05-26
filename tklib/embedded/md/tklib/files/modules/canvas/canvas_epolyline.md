
[//000000001]: # (canvas::edit::polyline \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_epolyline\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::edit::polyline\(n\) 0\.2 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::edit::polyline \- Editing a polyline on a canvas

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
package require canvas::edit::polyline ?0\.2?  

[__::canvas::edit__ __polyline__ *objectName* *canvas* *options*\.\.\.](#1)  
[__objectName__ __destroy__](#2)  
[__objectName__ __enable__](#3)  
[__objectName__ __disable__](#4)  
[__objectName__ __active__](#5)  
[__objectName__ __add__ *x* *y*](#6)  
[__objectName__ __clear__](#7)  
[__activeCmd__ *editorObj* *id*](#8)  
[__createCmd__ *canvas* *x* *y*](#9)  
[__dataCmd__ *editorObj* *coordinates*](#10)  

# <a name='description'></a>DESCRIPTION

This package provides a class whose instances handle editing a single poly\-line
\(or \-gon\) on a canvas\. Instances can be configured with regard to the visual
appearance of the markers denoting the line's vertices, as well as if the line
is to be closed or not, and further if a closed line has to be convex or not\.
Note that instances do not store the edited polyline themselves, but delegate
this to a configurable object\.

# <a name='section2'></a>Interaction

The polyline editor internally uses an instance of package
__[canvas::edit::points](canvas\_epoints\.md)__, and inherits all the
options and behaviours for it\. The color options are additionally applied to the
line element of this editor

Beyond that it provides 2 options to configure the editing mode, and one option
to customize the line/polygon item used to render the line through the points\.

The main editing mode is controlled by option __\-closed__ for
*[line](\.\./\.\./\.\./\.\./index\.md\#line)* \(i\.e\. open\) versus *polygon* \(i\.e\.
closed\)\. The default is line/open mode\.

In polygon/closed mode the option __\-convex__ controls if the editor
enforces convexity of the polygon, or not\. The default is no enforcement of
convexity\.

The option __\-line\-config__ enables basic customization of the line/polygon
item\. Note that it cannot overide the inherited color options\.

# <a name='section3'></a>Class API

  - <a name='1'></a>__::canvas::edit__ __polyline__ *objectName* *canvas* *options*\.\.\.

    This, the class command, creates and configures a new instance of a polyline
    editor, named *objectName*\. The instance will be connected to the
    specified *canvas* widget\.

    The result of the command is the fully qualified name of the instance
    command\.

    The options accepted here, and their values, are explained in the section
    [Options](#section5)\.

# <a name='section4'></a>Instance API

Instances of the polyline editors provide the following API:

  - <a name='2'></a>__objectName__ __destroy__

    This method destroys the polyline editor and releases all its internal
    resources\.

    Note that this operation does not destroy the items the editor managed on
    the attached canvas, nor the canvas itself\.

    The result of the method is an empty string\.

  - <a name='3'></a>__objectName__ __enable__

    This method activates editing of the polyline on the canvas\. This is the
    default after instance creation\. A call is ignored if the editor is already
    active\.

    The result of the method is an empty string\.

    The complementary method is __disable__\. The interogatory method for the
    current state is __active__\.

  - <a name='4'></a>__objectName__ __disable__

    This method disables editing of the polyline on the canvas\. A call is
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

    This method programmatically adds a vertex at the specified location to the
    line\.

    The result of the method is an empty string\.

    Note that this method goes through the whole set of callbacks invoked when
    the user interactively creates a vertex, i\.e\. __\-create\-cmd__, and, more
    importantly, __\-data\-cmd__\.

    One important difference however\. The new vertex is always added at the end
    of the line, whereas interactive creation uses heuristics to splice it into
    the line at a suitable location\.

    This is the method through which to load the vertices of a pre\-existing line
    into an editor instance\.

  - <a name='7'></a>__objectName__ __clear__

    This method programmatically removes all vertices from the editor,
    essentially removing the whole line\.

    The result of the method is an empty string\.

    Note that this method goes through the same callbacks invoked when the user
    interactively removes a vertex, i\.e\. __\-data\-cmd__\.

# <a name='section5'></a>Options

The class command accepts the following options

  - __\-active\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    mouse enters or leaves the line or a point managed by the instance\.

    If not specified it defaults to an empty command which does nothing\.

    The signature of this command prefix is

      * <a name='8'></a>__activeCmd__ *editorObj* *id*

        The *id* identifies the entered object\.

        An empty *id* indicates that the last entered object was left\.

        The value __line__ indicates that the line was entered\.

        A numeric value __N__ indicates that the __N__'th vertex of the
        line was entered, counting from __0__\.

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

  - __\-closed__ *boolean*

    The value of this option is a boolean flag indicating if the edited polyline
    is closed, i\.e\. a loop, or not\. *NOTE* that a proper loop requires at
    least 3 points\. For less than that an open line is shown, or even just a
    point\.

    This option can only be set at construction time\.

    If not specified it defaults to __false__

  - __\-color__ *colorspec*

    The value of this option is the fill color for the default item created when
    adding a point, and no __\-create\-cmd__ is specified\.

    The default value is __SkyBlue2__\.

  - __\-convex__ *boolean*

    The value of this option is a boolean flag indicating if the edited polyline
    is strictly convex, or not\. This option has meaning if and only if option
    __\-closed__ is configured to be __true__\.

    This option can only be set at construction time\.

    If not specified it defaults to __false__

  - __\-create\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when it
    has to create a new vertex\.

    While this option can be set after construction, it is recommended to use
    this feature only as a means of inserting custom processing to be done at
    creation time which remembers and calls the previous value of the option\.

    If not specified it defaults to a command which will create a black\-bordered
    blue circle of radius 3 centered on the location of the new point\.

    The signature of this command prefix is

      * <a name='9'></a>__createCmd__ *canvas* *x* *y*

        The result of the command prefix *must* be a list of the canvas items
        it created to represent the marker\. Note here that the visual
        representation of a "vertex" may consist of multiple canvas items in an
        arbitrary shape\.

        The returned list of items is allowed to be empty, and such is taken as
        signal that the callback vetoed the creation of the vertex\.

  - __\-data\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    line was edited in some way \(vertex added, removed, moved\)\. This is how the
    editor delegates the actual storage of the line information to an outside
    object\.

    This option can only be set at construction time\.

    If not specified it defaults to an empty string and is ignored by the
    editor, i\.e\. not invoked\.

    The signature of this command prefix is

      * <a name='10'></a>__dataCmd__ *editorObj* *coordinates*

        This callback is invoked when the line was changed either interactively,
        or programmatically\. See instance method __add__ for the latter\.

        The *editorObj* identifies the instance invoking the callback, whereas
        *coordinates* is a list of vertex locations, with each location a pair
        of x\- and y\-coordinates\.

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

  - __\-line\-config__ *list*

    The value of this option is a list of options and their values to be applied
    to the internal line/polygon item whenever it is regenerated after changes\.
    Note that these options *cannot* override the principal coloring of the
    line/polygon as applied by the main options __\-color__ and
    __\-hilit\-color__\.

    If not specified it defaults to the empty list\.

  - __\-radius__ *int*

    The value of this option is the radius for the default item created when
    adding a point, and no __\-create\-cmd__ is specified\.

    The default value is __3__\.

  - __\-tag__ *string*

    The value of this option is the name of the canvas tag with which to
    identify all items of all vertices managed by the editor\.

    This option can only be set at construction time\.

    If not specified it defaults to __POLYLINE__

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[editing](\.\./\.\./\.\./\.\./index\.md\#editing),
[polyline](\.\./\.\./\.\./\.\./index\.md\#polyline)
