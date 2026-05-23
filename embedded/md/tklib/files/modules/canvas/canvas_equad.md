
[//000000001]: # (canvas::edit::quadrilateral \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_equad\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::edit::quadrilateral\(n\) 0\.2 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::edit::quadrilateral \- Editing a quadrilateral on a canvas

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Class API](#section2)

  - [Instance API](#section3)

  - [Options](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::edit::points ?0\.1?  
package require canvas::edit::quadrilateral ?0\.2?  

[__::canvas::edit__ __quadrilateral__ *objectName* *canvas* *options*\.\.\.](#1)  
[__objectName__ __destroy__](#2)  
[__objectName__ __enable__](#3)  
[__objectName__ __disable__](#4)  
[__objectName__ __active__](#5)  
[__objectName__ __add__ *x* *y*](#6)  
[__objectName__ __clear__](#7)  
[__createCmd__ *canvas* *x* *y*](#8)  
[__highlightCmd__ __on__ *canvas* *item*](#9)  
[__highlightCmd__ __off__ *canvas* *state*](#10)  
[__dataCmd__ *editorObj* *coordinates*](#11)  

# <a name='description'></a>DESCRIPTION

This package provides a class whose instances handle the editing of a
quadrilateral on a canvas\. Instances can be configured with regard to the visual
appearance \(regular, and highlighted\) of vertex markers\. Note that instances do
not store the edited quadrilateral themselves, but delegate this to a
configurable object\.

# <a name='section2'></a>Class API

  - <a name='1'></a>__::canvas::edit__ __quadrilateral__ *objectName* *canvas* *options*\.\.\.

    This, the class command, creates and configures a new instance of a
    quadrilateral editor, named *objectName*\. The instance will be connected
    to the specified *canvas* widget\.

    The result of the command is the fully qualified name of the instance
    command\.

    The options accepted here, and their values, are explained in the section
    [Options](#section4)\.

# <a name='section3'></a>Instance API

Instances of the quadrilateral editors provide the following API:

  - <a name='2'></a>__objectName__ __destroy__

    This method destroys the quadrilateral editor and releases all its internal
    resources\.

    Note that this operation does not destroy the items the editor managed on
    the attached canvas, nor the canvas itself\.

    The result of the method is an empty string\.

  - <a name='3'></a>__objectName__ __enable__

    This method activates editing of the quadrilateral on the canvas\. This is
    the default after instance creation\. A call is ignored if the editor is
    already active\.

    The result of the method is an empty string\.

    The complementary method is __disable__\. The interogatory method for the
    current state is __active__\.

  - <a name='4'></a>__objectName__ __disable__

    This method disables editing of the quadrilateral on the canvas\. A call is
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
    quadrilateral\.

    The result of the method is an empty string\.

    Note that this method goes through the whole set of callbacks invoked when
    the user interactively creates a vertex, i\.e\. __\-create\-cmd__, and, more
    importantly, __\-data\-cmd__\.

    This is the method through which to load the vertices of a pre\-existing
    quadrilateral into an editor instance\.

    Note that at most 4 vertices can be specified, and at least 4 must be
    specified for the quadrilateral to be complete\.

  - <a name='7'></a>__objectName__ __clear__

    This method programmatically unset the quadrilateral in the editor\.

    The result of the method is an empty string\.

    Note that this method goes through the same callback invoked when the user
    interactively removes a vertex, i\.e\. __\-data\-cmd__\.

# <a name='section4'></a>Options

The class command accepts the following options

  - __\-convex__ *boolean*

    The value of this option is a boolean flag\. When the flag is set the editor
    will accept only convex quadrilaterals and reject all operations which would
    result in a violation of convexity\.

    This option can only be set at construction time\.

    If not specified it defaults to __false__, i\.e\. acceptance of any
    quadrilateral\.

  - __\-tag__ *string*

    The value of this option is the name of the canvas tag with which to
    identify all items of all quadrilateral managed by the editor\.

    This option can only be set at construction time\.

    If not specified it defaults to __QUADRILATERAL__

  - __\-create\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when it
    has to create a new vertex\.

    This option can only be set at construction time\.

    If not specified it defaults to a command which will create a black\-bordered
    blue circle of radius 3 centered on the location of the new point\.

    The signature of this command prefix is

      * <a name='8'></a>__createCmd__ *canvas* *x* *y*

        The result of the command prefix *must* be a list of the canvas items
        it created to represent the marker\. Note here that the visual
        representation of a "vertex" may consist of multiple canvas items in an
        arbitrary shape\.

  - __\-highlight\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when it
    has to \(un\)highlight a vertex\.

    This option can only be set at construction time\.

    If not specified it defaults to a command which will re\-color the item to
    highlight in red \(and restores the color for unhighlighting\)\.

    The two signatures of this command prefix are

      * <a name='9'></a>__highlightCmd__ __on__ *canvas* *item*

        This method of the command prefix has to perform whatever is needed to
        highlight the vertex the *item* is a part of \(remember the note above
        about quadrilateral allowed to be constructed from multiple canvas
        items\)\.

        The result of the command can be anything and will be passed as is as
        argument *state* to the __off__ method\.

      * <a name='10'></a>__highlightCmd__ __off__ *canvas* *state*

        This method is invoked to unhighlight a vertex described by the
        *state*, which is the unchanged result of the __on__ method of the
        command prefix\. The result of this method is ignored\.

        Note any interaction between dragging and highlighting of quadrilateral
        is handled within the editor, and that the callback bears no
        responsibility for doing such\.

  - __\-data\-cmd__ *command\-prefix*

    The value of this option is a command prefix the editor will invoke when the
    quadrilateral was edited in some way\. This is how the editor delegates the
    actual storage of quadrilateral information to an outside object\.

    This option can only be set at construction time\.

    If not specified it defaults to an empty string and is ignored by the
    editor, i\.e\. not invoked\.

    The signatures of this command prefix are

      * <a name='11'></a>__dataCmd__ *editorObj* *coordinates*

        This callback is invoked when the quarilateral was changed either
        interactively, or programmatically\. See instance method __add__ for
        the latter\.

        The *editorObj* identifies the instance invoking the callback, whereas
        *coordinates* is a list of vertex locations, with each location a pair
        of x\- and y\-coordinates\.

        The result of this method is ignored\.

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[concave](\.\./\.\./\.\./\.\./index\.md\#concave),
[convex](\.\./\.\./\.\./\.\./index\.md\#convex),
[editing](\.\./\.\./\.\./\.\./index\.md\#editing),
[non\-convex](\.\./\.\./\.\./\.\./index\.md\#non\_convex),
[quadrilateral](\.\./\.\./\.\./\.\./index\.md\#quadrilateral)
