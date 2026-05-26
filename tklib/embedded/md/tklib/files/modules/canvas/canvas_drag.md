
[//000000001]: # (canvas::drag \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_drag\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::drag\(n\) 0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::drag \- Manage the dragging of canvas items or item groups

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Drag callback](#subsection1)

      - [Options](#subsection2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::drag ?0\.1?  

[__::canvas::drag__ __on__ *canvas* *tagOrId* *cmd* *option*\.\.\.](#1)  
[__::canvas::drag__ __off__ *canvas* *tagOrId*](#2)  
[__::canvas::drag__ __item__ *canvas* *tagOrId* *option*\.\.\.](#3)  
[__::canvas::drag__ __group__ *canvas* *tagOrId* *cmd* *option*\.\.\.](#4)  
[__\{\*\}cmd__ __start__ *canvas* *item*](#5)  
[__\{\*\}cmd__ __move__ *canvas* *clientdata* *dx* *dy*](#6)  
[__\{\*\}cmd__ __done__ *canvas* *clientdata*](#7)  

# <a name='description'></a>DESCRIPTION

This package provides utility commands to setup and rmeove dragging of items or
item groups on a canvas, hiding all complexity regarding bindings from the user\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::drag__ __on__ *canvas* *tagOrId* *cmd* *option*\.\.\.

    This command initializes item dragging on the *canvas* widget, with the
    items used as drag handles identified by *tagOrId*\. The command prefix
    *cmd*, invoked for drag start and movement, is responsible for the
    initialization and actual execution of the drag operation\.

    The signature of the command prefix is described later, in section [Drag
    callback](#subsection1)\.

    Similarly, the accepted options and their values are described in section
    [Options](#subsection2)

    The result of the command is the empty string\.

  - <a name='2'></a>__::canvas::drag__ __off__ *canvas* *tagOrId*

    This command removes any drag operation set on the items of canvas
    *canvas* identified by *tagOrId*\.

    The result of the command is the empty string\.

  - <a name='3'></a>__::canvas::drag__ __item__ *canvas* *tagOrId* *option*\.\.\.

    This is a convenience command wrapped around method __on__ \(see above\)
    to drag single items of the *canvas* widget, identified by *tagOrId*\.

    It uses an internal standard callback for this\.

    The result of the command is the empty string\.

  - <a name='4'></a>__::canvas::drag__ __group__ *canvas* *tagOrId* *cmd* *option*\.\.\.

    This is a convenience command wrapped around method __on__ \(see above\)
    to drag single items of the *canvas* widget, identified by *tagOrId*\.

    It uses an internal standard callback for this\. The callback *cmd*
    specified has the same signature as the [Drag callback](#subsection1),
    except that

      1. The __move__ method is not invoked\.

      1. The result of the __start__ method *has to be* a canvas tag
         refering to the whole group of items to move\. In other words, it must
         convert from drag handle \(item id\) to dragged groupt \(tag\)\.

    The result of the command is the empty string\.

## <a name='subsection1'></a>Drag callback

The drag callback is a command prefix invoked in the following two ways:

  - <a name='5'></a>__\{\*\}cmd__ __start__ *canvas* *item*

    This form is invoked when has initiated dragging using drag handle
    identified by the canvas *item* id\. The callback now has to perform
    anything necessary for its type of drag operation\.

    The result of the command can be anything\. It is stored by the system as
    client information and passed unchanged to the movement callback for its
    use\. In this manner the drag callback is able to maintain custom state from
    start to movement\.

  - <a name='6'></a>__\{\*\}cmd__ __move__ *canvas* *clientdata* *dx* *dy*

    This form is invoked when the mouse moved during a drag operation\. It is
    invoked with the client data from the start callback \(or the previous move
    callback\) and the distances the mouse has traveled in horizontal and
    vertical directions\.

    The result of the command can be anything\. It is stored by the system as
    client information and passed unchanged to the next movement callback for
    its use\. In this manner the drag callback is able to maintain custom state
    from movement to movement\.

  - <a name='7'></a>__\{\*\}cmd__ __done__ *canvas* *clientdata*

    This form is invoked when the drag operation ends\. It is invoked with the
    client data from the last movement callback \(or start callback if there had
    been no motion\)\.

    The result of the command is ignored\.

## <a name='subsection2'></a>Options

The commands to create drag operations \(__on__, __item__, and
__group__\) all accept the following options to configure the new drag\.

  - __\-event__ *spec*

    The value of this option specifies the mouse button used to initiate the
    drag operation, and the keyboard modifier, if any\. Examples of
    specifications:

    To initiate a drag operation by pressing mouse button 3 on a drag handle,
    use:

        -event 3

    This is the default as well, if the option is not specified\.

    To initiate a drag operation by pressing mouse button 2 on a drag handle
    while holding down the Control key, use:

        -event Control-2

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[dragging](\.\./\.\./\.\./\.\./index\.md\#dragging)
