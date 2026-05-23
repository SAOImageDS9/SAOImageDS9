
[//000000001]: # (chatwidget \- Composite widget for chat applications)
[//000000002]: # (Generated from file 'chatwidget\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (chatwidget\(n\) 1\.1\.4 tklib "Composite widget for chat applications")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

chatwidget \- Provides a multi\-paned view suitable for display of chat room or
irc channel information

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [WIDGET COMMANDS](#section3)

  - [EXAMPLE](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [See Also](#seealso)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tk 8\.5  
package require chatwidget ?1\.1\.4?  

[__::chatwidget::chatwidget__ *path* ?*options*?](#1)  
[__$widget__ topic *command* *args*](#2)  
[__$widget__ name *nick* *args*](#3)  
[__$widget__ message *text* *args*](#4)  
[__$widget__ hook *command* *args*](#5)  
[__$widget__ names *args*](#6)  
[__$widget__ entry *args*](#7)  
[__$widget__ chat *args*](#8)  

# <a name='description'></a>DESCRIPTION

This is a composite widget designed to simplify the construction of chat
applications\. The widget contains display areas for chat messages, user names
and topic and an entry area\. It automatically handles colourization of messages
per nick and manages nick completion\. A system of hooks permit the application
author to adjust display features\. The main chat display area may be split for
use displaying history or for searching\.

The widget is made up of a number of text widget and panedwindow widgets so that
the size of each part of the display may be adjusted by the user\. All the text
widgets may be accessed via widget passthrough commands if fine adjustment is
required\. The topic and names sections can also be hidden if desired\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::chatwidget::chatwidget__ *path* ?*options*?

    Create a new chatwidget using the Tk window id *path*\. Any options
    provided are currently passed directly to the main chat text widget\.

# <a name='section3'></a>WIDGET COMMANDS

  - <a name='2'></a>__$widget__ topic *command* *args*

    The chat widget can display a topic string, for instance the topic or name
    given to a multi\-user chatroom or irc channel\.

      * __show__

        Enable display of the topic\.

      * __hide__

        Disable display of the topic

      * __set *topic*__

        Set the topic text to *topic*\.

  - <a name='3'></a>__$widget__ name *nick* *args*

    Control the names and tags associated with names\.

      * __list ?*\-full*?__

        Returns a list of all the user names from the names view\. If ?\-full? is
        given then the list returned is a list of lists where each sublist is
        made up of the nick followed by any options that have been set on this
        nick entry\. This may be used to examine any application specific options
        that may be applied to a nick when using the __add__ command\.

      * __add *nick* ?*options*?__

      * __delete *nick*__

  - <a name='4'></a>__$widget__ message *text* *args*

    Add messages to the display\. options are \-nick, \-time, \-type, \-mark \-tags

  - <a name='5'></a>__$widget__ hook *command* *args*

    Manage hooks\. add \(message, post names\_group, names\_nick, chatstate\),
    remove, run

  - <a name='6'></a>__$widget__ names *args*

    Passthrough to the name display text widget\. See the
    __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ widget manual for all
    available commands\. The chatwidget provides two additional commands
    __show__ and __hide__ which are used to control the display of this
    element in the widget\.

  - <a name='7'></a>__$widget__ entry *args*

    Passthrough to the entry text widget\. See the
    __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ widget manual for all
    available commands\.

  - <a name='8'></a>__$widget__ chat *args*

    Passthrough to the chat text widget\. See the
    __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ widget manual for all
    available commands\.

# <a name='section4'></a>EXAMPLE

    chatwidget::chatwidget .chat
    proc speak {w msg} {$w message $msg -nick user}
    .chat hook add post [list speak .chat]
    pack .chat -side top -fill both -expand 1
    .chat topic show
    .chat topic set "Chat widget demo"
    .chat name add "admin" -group admin
    .chat name add "user" -group users -color tomato
    .chat message "Chatwidget ready" -type system
    .chat message "Hello, user" -nick admin
    .chat message "Hello, admin" -nick user

A more extensive example is available by examining the code for the picoirc
program in the tclapps repository which ties the tcllib __picoirc__ package
to this __chatwidget__ package to create a simple irc client\.

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *chatwidget* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

text\(n\)

# <a name='keywords'></a>KEYWORDS

[chat](\.\./\.\./\.\./\.\./index\.md\#chat),
[chatwidget](\.\./\.\./\.\./\.\./index\.md\#chatwidget), [composite
widget](\.\./\.\./\.\./\.\./index\.md\#composite\_widget),
[irc](\.\./\.\./\.\./\.\./index\.md\#irc),
[mega\-widget](\.\./\.\./\.\./\.\./index\.md\#mega\_widget),
[widget](\.\./\.\./\.\./\.\./index\.md\#widget)
