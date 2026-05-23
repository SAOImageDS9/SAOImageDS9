
[//000000001]: # (menubar \- Create and manipulate menubars)
[//000000002]: # (Generated from file 'menubar\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2009 Tom Krehbiel <krehbiel\.tom@gmail\.com> All rights reserved\.)
[//000000004]: # (menubar\(n\) 0\.5\.1 tklib "Create and manipulate menubars")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

menubar \- Creates an instance of the *menubar* Class\.

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Options](#section2)

  - [Introduction](#section3)

  - [Terminology](#section4)

  - [Methods](#section5)

  - [Methods \- menu\.xxx](#section6)

  - [Methods \- tag\.xxx](#section7)

  - [Methods \- group\.xxx](#section8)

  - [Methods \- notebook\.xxx](#section9)

  - [Scope Control](#section10)

  - [Example](#section11)

  - [Caveats](#section12)

  - [References](#section13)

  - [Bugs, Ideas, Feedback](#section14)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.6  
package require Tk 8\.6  
package require menubar ?0\.5\.1?  

[__menubar new__ ?options?](#1)  
[*mBarInst* __define__ *body*](#2)  
[*mBarInst* __install__ *pathName body*](#3)  
[*mBarInst* __menu\.configure__ *option tag\-settings ?option tag\-settings \.\.\.?*](#4)  
[*mBarInst* __menu\.namespace__ *tag namespace*](#5)  
[*mBarInst* __menu\.hide__ *tag*](#6)  
[*mBarInst* __menu\.show__ *tag*](#7)  
[*mBarInst* __tag\.add__ *tag value*](#8)  
[*mBarInst* __tag\.configure__ *pathName tag ?option value \.\.\.option value?*](#9)  
[*mBarInst* __tag\.cget__ *pathName tag ?option?*](#10)  
[*mBarInst* __group\.add__ *tag label ?cmd? ?accel? ?sequence? ?state?*](#11)  
[*mBarInst* __group\.delete__ *tag label*](#12)  
[*mBarInst* __group\.move__ *direction tag label*](#13)  
[*mBarInst* __group\.configure__ *tag label ?option value \.\.\.option value?*](#14)  
[*mBarInst* __group\.serialize__ *tag*](#15)  
[*mBarInst* __group\.deserialize__ *tag stream*](#16)  
[*mBarInst* __notebook\.addTabStore__ *pathname*](#17)  
[*mBarInst* __notebook\.deleteTabStore__ *pathname*](#18)  
[*mBarInst* __notebook\.setTabValue__ *pathname tag*](#19)  
[*mBarInst* __notebook\.restoreTabValues__ *pathname*](#20)  

# <a name='description'></a>DESCRIPTION

  - <a name='1'></a>__menubar new__ ?options?

Create and return a new instance of the menubar class\. The menubar class
encapsulates the definition, installation and dynamic behavior of a menubar\. The
class doesn't depend on a widget framework and therefore can be used with or
without a framework \(e\.g\. Bwidget, IWidget, Snit, etc\.\)\. Unlike other Tk widget
commands, the menubar command doesn't have a *pathName* argument because
menubars are handled by the window manager \(i\.e\. wm\) and not the application\.

# <a name='section2'></a>Options

The following options can be passed to the *menubar new* command\.

These options are inherited from the Tk menu command, their effect is platform
specific\.

  - __[\-activebackground](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-activebackground)__

  - __[\-activeborderwidth](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-activeborderwidth)__

  - __[\-activeforeground](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-activeforeground)__

  - __[\-background](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-background)__

  - __[\-borderwidth](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-borderwidth)__

  - __[\-cursor](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-cursor)__

  - __[\-disabledforeground](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-disabledforeground)__

  - __[\-font](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-font)__

  - __[\-foreground](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-foreground)__

  - __[\-relief](http://docs\.activestate\.com/activetcl/8\.5/tcl/TkCmd/options\.htm\#M\-relief)__

# <a name='section3'></a>Introduction

An instance of the menubar class provides methods for compiling a description of
the menubar, configuring menu items and installing the menubar in toplevel
windows\.

A menubar can be thought of as a tree of cascading menus\. Users define a menubar
using a language that results in a human readable description of a menubar\. The
description of the menubar is then compiled by an instance of the menubar class
after which it can be installed in one or more toplevel windows\.

The menubar class provides many unique capabilities that are not found in other
tcl/tk menubar implementation\. Some of these are:

  - A tagging system that simplifies access to menu entries in the menu tree\.

  - Support for user defined tags that depend on the toplevel window context\.

  - A simplified and uniform interface for all callback commands\.

  - Namespace support for all callback commands so callback commands can be
    easily grouped into namespaces\.

  - Support for hiding and exposing menus on the menubar\.

  - A simplified method for creating radiobutton groups\.

  - Automatic management of state variables for checkbuttons and radiobuttons\.

  - Scope control for the state variables of checkbuttons and radiobuttons\.

  - Tear\-off menu management that ensures only one tearoff menu is created\.

  - Support for dynamic menu extension to simplify the creation of recent
    document menus\.

  - Support for saving and restoring dynamic menu extensions\.

# <a name='section4'></a>Terminology

  - MENUBAR

    The visible rendering of a menubar in a toplevel window is a horizontally
    group of cascading Tk menus\.

  - MENU

    A menu is an ordered list of items that is rendered vertically\. Menus are
    not visible until a user preforms some action \(normally a <ButtonPress\-1>
    event\)\. A menu may contain any number of child menus that are rendered as
    cascading menus\. Cascading menus are rendered next to the parent menu when
    they are activated\.

  - MENU ENTRY

    A menu contains an ordered list of items called entries\. Menu entries have a
    type and the menubar class supports the following 6 entry types:
    *Command*, *Checkbutton*, *Radiobutton*, *Separator*, *Group* and
    *Menu*\.

  - ENTRY LABEL

    Each menu entry has a visible string that is called the entry label\.

  - TAG

    A tag is name that is normally used to referr to an item in a menu tree\. A
    tag name is an alphanumeric character string that may include the underscore
    character\. Menu tree tags are defined for all nodes and leafs in a menu
    tree\. This provides a flat abstraction of the tree and simplifies item
    referencing in menubar methods\. Without this abstraction it would be
    necessary to reference menu elements using a tree path which could change at
    run\-time\. The menubar class also has a method that can create a user defined
    tag\. User defined tags store values that change based on the currently
    active toplevel window\. User defined tags can be used to store widget
    pathnames use by callback code so that output can be routed to the
    appropriate toplevel window\.

# <a name='section5'></a>Methods

  - <a name='2'></a>*mBarInst* __define__ *body*

    Compiles *body* into a tree of menu entries which define the visual layout
    of the menubar\. The *body* argument describes the layout using the
    following syntax, where the elements of the syntax are described below\.

    *body == definitions*

        definitions    ::= { <ignore> | <definition> | <definition> <definitions> }
        ignore         ::= { <nl> | <white-space> <nl> | # <comment> <nl> }
        definition     ::= { <command> | <checkbutton> | <radiobutton> | <separator> | <group> | <menu> }
        command        ::= <label> C <tag> <nl>
        checkbutton    ::= <label> X<scope> { <tag> | <tag>+ } <nl>
        radiobutton    ::= <label> R<scope> { <tag> | <tag>+ } <nl>
        separator      ::= <stext> S <tag> <nl>
        group          ::= <dummy> G <tag> <nl>
        menu           ::= <label> { M:<tag> | M:<tag>+ } <nl> <definitions>
        stext          ::= '--' | <label>
        scope          ::= '' | '@' | '='

    **

      * C \- Command

        The C type entry is the most common type of entry\. This entry executes a
        command when it is invoked\.

      * X \- Checkbutton

        A X type entry behaves much like a Tk checkbutton widget\. When it is
        invoked it toggles back and forth between a selected and deselected
        states\. The value of a checkbutton is a boolean \(i\.e\. 1 or 0\)\. By
        default all checkbuttons are deselected\. If you want the checkbutton to
        be initially selected then include a trailing plus \(\+\) with the tag
        name\. See SCOPE CONTROL below for a description of the scope indicator\.

      * R \- Radiobutton

        A R type menu entry behaves much like a Tk radiobutton widget\. Each
        radiobutton entry is a member of a radiobutton group that controls the
        behavior of the radiobuttons in the group\. All radiobuttons in a group
        are given the same tag name\. In the example below Red, Green and Blue
        all have the same tag and are therefore all in the same radiobutton
        group\. A trailing plus \(\+\) on the tag name of a radiobutton entry will
        cause the entry to be the initially selected entry\. See SCOPE CONTROL
        below for a description of the scope indicator\.

      * S \- Separator

        A S type menu entry is an entry that is displayed either as a horizontal
        dividing line or a label\. Separators are not active elements of a menu
        and have no associated behavior if they are invoked\. If <stext> is two
        dashes \(i\.e\. '\-\-'\) then the separator will be displayed as a horizontal
        line otherwise <stext> will be displayed as a bold label surrounded by
        double dashes \(e\.g\. "\-\- <stext> \-\-"\) with a lightgray background\.

      * G \- Command Group

        The G type menu entry marks a location in the menu tree where entries
        can be dynamically added and removed\. Menu extension can only occur at
        the end of a menu so G type entries must be the last item on a menu\. A G
        type entry is rendered as a separator line\. The *group\.<xxx>*
        sub\-commands are used to manipulate command group entries\.

      * M \- Menu

        An M type entry is used to define both menubar menus and cascading
        menus\. Menu entries are the most complicated of the 6 menu types\. A menu
        entry is composed of three list elements\. The first element of the list
        is its label\. The second element of the list is a composite string
        consisting of a type identifier \(M\) followed by an optional tag
        \(beginning with a ':' separator\) and finally an optional plus \(\+\) which
        indicates that the menu is a tear\-off menu\. The final element of the
        list is a LIST VALUE\.

  - <a name='3'></a>*mBarInst* __install__ *pathName body*

    The *install* method installs the menubar created with the *define*
    method into toplevel window *pathName*\. The *body* argument of the
    command contains a tcl script which is used to initialize the installed
    menubar\. Normally the tcl script will contain calls to various menubar
    methods to perform the initialization\. The initialization code is only run
    once when the menubar is installed\. The namespace in which the *install*
    method is executed becomes the default namespace for callback commands \(see
    *menu\.namespace* below for more details\)\.

# <a name='section6'></a>Methods \- menu\.xxx

  - <a name='4'></a>*mBarInst* __menu\.configure__ *option tag\-settings ?option tag\-settings \.\.\.?*

    Configures the tags of a menubar and returns an empty string\. This method
    provides a convenient way to configure a larger number of tags without the
    verbosity of using the *tag\.configure* method\.

      * *option*

        *Option* may have any of the values accepted by the *tag\.configure*
        method\.

      * *tag\-settings*

        The *tag\-settings* argument is a string that is converted to a list of
        tag\-value pairs using the following syntax\.

        Syntax for *tag\-settings*\.

            tag-settings ::= { <ignore> | <value> | <value> <tag-settings> }
            ignore       ::= { <nl> | <white-space> <nl> | # <comment> <nl> }
            value        ::= <tag> <option-value> <nl>

  - <a name='5'></a>*mBarInst* __menu\.namespace__ *tag namespace*

    Change the namespace for a sub\-tree of the menubar starting at entry
    *tag*\. The new value will be *namespace*\. Each entry in the menubar tree
    has an associated namespace which will be used for its callback procedure\.
    The default namespace is the namespace where the *install* method was
    executed\. The *namespace* method can be used to change the namespace that
    will be used for callbacks in a sub\-tree of the menubar\. This method can
    only be used in the context of an *install* script\.

  - <a name='6'></a>*mBarInst* __menu\.hide__ *tag*

    Remove \(hide\) a menubar entry\. When a menubar tree is defined all entries
    are visible by default\. This method can be used to hide a menubar entry\. The
    *hide* methods can be used in the context of an *install* script so that
    a menu will be initially hidden at application start up\. The *tag*
    argument is the tag name of the menu to be hidden\.

  - <a name='7'></a>*mBarInst* __menu\.show__ *tag*

    Exposes \(shows\) a hidden menubar entry\. When a menubar tree is defined all
    entries are visible by default\. If a entry is hidden from the user \(using
    the menu\.hide method\) then it can be exposed again using the show method\.
    The *tag* argument is the tag name of the menu to be shown\.

# <a name='section7'></a>Methods \- tag\.xxx

  - <a name='8'></a>*mBarInst* __tag\.add__ *tag value*

    Add a user defined *tag* value\. The *tag\.add* method adds a new
    tag\-value pair to the the tags defined for a menubar\. User defined tags are
    different from the tags created by the *define* method\. The *tag\.add*
    method can only be used in an *install* script and its value is associated
    with the toplevel where the menubar is installed\. This makes the tag context
    sensitive so callback code that queries the tag value will receive a value
    that is associated with the window that performed the callback\.

  - <a name='9'></a>*mBarInst* __tag\.configure__ *pathName tag ?option value \.\.\.option value?*

    Given the *pathName* of a toplevel window and a *tag* this method
    configures the menu entry associated with the tag and return an empty
    string\.

      * *Standard Options*

        These option are the same as those described for menu entries in the Tk
        *menu* documentation\.

          + __\-activebackground__

          + __\-activeforeground__

          + __\-background__

          + __\-bitmap__

          + __\-columnbreak__

          + __\-compound__

          + __\-font__

          + __\-foreground__

          + __\-hidemargin__

          + __\-image__

          + __\-indicatoron__

          + __\-label__

          + __\-selectcolor__

          + __\-selectimage__

          + __\-state__

        **

      * Class Specific Options

          + __\-bind__ \{uline accel sequence\}

            The value of the *\-bind* option is three element list where the
            values are as follows\.

              - uline

                An integer index of a character to underline in the entry\. This
                value performs the same function as the Tk *menu* \-underline
                option\. If this value is an empty string then no underlining is
                performed\.

              - accel

                A string to display at the right side of the menu entry\. The
                string normally describes an accelerator keystroke sequence that
                may be typed to invoke the same function as the menu entry\. This
                value performs the same function as the Tk *menu* \-accelerator
                option\. If this value is an empty string then no accelerator is
                displayed\.

              - sequence

                A bind sequence that will cause the entries associated command
                to fire\.

          + __\-command__ cmdprefix

            The value of the *\-command* option a command prefix that is
            evaluated when the menu entry is invoked\. By default the callback is
            evaluate in the namespace where the *install* method was executed\.
            Additional values are appended to the *cmdprefix* and are thus
            passed to the callback command as argument\. These additional
            arguments are described in the list below\.

              - command entry

                1\) The pathname of the toplevel window that invoked the
                callback\.

              - checkbutton entry

                1\) The pathname of the toplevel window that invoked the
                callback\.

                2\) The checkbutton's tag name

                3\) The new value for the checkbutton

              - radiobutton entry

                1\) The pathname of the toplevel window that invoked the
                callback\.

                2\) The radiobutton's tag name

                3\) The label of the button that was selected

              - group entry

                1\) The pathname of the toplevel window that invoked the
                callback\.

  - <a name='10'></a>*mBarInst* __tag\.cget__ *pathName tag ?option?*

    Returns the value of the configuration option given by *option* or the
    value of a user defined tag\. The option argument may be any of the options
    accepted by the *tag\.configure* method for the *tag* type\. User defined
    tags are queried without an *option* value\.

# <a name='section8'></a>Methods \- group\.xxx

  - <a name='11'></a>*mBarInst* __group\.add__ *tag label ?cmd? ?accel? ?sequence? ?state?*

    Add a command to the group with tag name *tag*\. This method appends a new
    command entry to the end of a command group\. The order of the arguments is
    fixed but arguments to the right can be ignored\. Arguments to this method
    have the following meaning\.

      * tag *\(string\)*

        The tag name of the command group\.

      * label *\(string\)*

        The displayed label for the menu entry\.

      * cmd *\(string\)*

        A command prefix that will be used for callback command\.

      * accel *\(string\)*

        An accelerator string that will be displayed next to the entry label\.

      * sequence *\(string\)*

        A bind sequence that will be bound to the callback command\.

      * state *\(enum\)*

        Sets the active state of the command\. One of: normal, disabled, active

  - <a name='12'></a>*mBarInst* __group\.delete__ *tag label*

    Delete a command from a group with tag name *tag*\. This method deletes
    command *label* from a command group\.

  - <a name='13'></a>*mBarInst* __group\.move__ *direction tag label*

    Change the position of an entry in a group with tag name *tag*\. The
    *direction* argument is the direction \('up' or 'down'\) the entry will be
    moved\. The entry that is moved has the name *label*\.

  - <a name='14'></a>*mBarInst* __group\.configure__ *tag label ?option value \.\.\.option value?*

    Configure the options of an entry in the command group with tag name
    *tag*\. This method is similar to the *tag\.configure* method except that
    it works on entries in a command group\. Set documentation for the
    *tag\.configure* method \(above\) for more details on command entry options\.

  - <a name='15'></a>*mBarInst* __group\.serialize__ *tag*

    Return a string serialization of the entries in a command group\. The
    argument *tag* is the tag name for the group that is to be serialized\. The
    resulting serialization is a list containing three element \(1\) the tag name
    of the group \(2\) a dictionary containing group level options \(3\) a list of
    zero or more similar three element lists that describe the entries in the
    group\.

  - <a name='16'></a>*mBarInst* __group\.deserialize__ *tag stream*

    Replace the contents of group tag *tag* with the commands defined in the
    serialization *stream*\. The original contents of the group are lost\.

# <a name='section9'></a>Methods \- notebook\.xxx

  - <a name='17'></a>*mBarInst* __notebook\.addTabStore__ *pathname*

    This method should be used in code that creates a new notebook tab\.
    Execution of this method will cause state storage to be allocated for the
    new notebook tab\. The pathname for the notebook tab is passed as an argument
    to the method\.

  - <a name='18'></a>*mBarInst* __notebook\.deleteTabStore__ *pathname*

    This command deallocates the state store for a notebook tab\. The pathname
    for the notebook tab is passed as an argument to the method\.

  - <a name='19'></a>*mBarInst* __notebook\.setTabValue__ *pathname tag*

    This method should be used in the callback for menubar checkbuttons or
    radiobuttons that have notebook tab scope control\. When this method is
    executed it will move the value associated with tag into the tab store for
    the tab identified by pathname\.

  - <a name='20'></a>*mBarInst* __notebook\.restoreTabValues__ *pathname*

    This method should be place in a bind script that is triggered by a
    notebooks <<NotebookTabChanged>> event\.

# <a name='section10'></a>Scope Control

By default a menubar instance looks the same in all installed toplevel windows\.
As changes are made to one instance of a menubar all the other instances are
immediately updated\. This means the internal state of all the menu entries for
the instances are synchronized\. This behavior is called global scope control of
the menubar state\.

The menubar class allows finer scope control on check and radio buttons\. The
scope of these entry types can be modified by adding a modifier character to
their type character\. Two modifier characters are supported as show in the table
below\.

    ''  ::= global scope (no character)
    '@' ::= local scope modifier
    '=' ::= notebook tab scope modifier

When the local scope character \(@\) is added to the definition of a button, the
button is given a new variable for each installed toplevel window\. This has the
effect of making the button's state local to the window \(i\.e\. local scope\)\. An
example use case for this behavior might be a status bar that can be toggled on
an off by a checkbutton\. The developer may want to allow the user to control the
visibility of the status bar on a per window basis\. In this case a local
modifier would be added to the status bar selector so the callback code would
receive an appropriate value based on the current toplevel window\.

The notebook tab scope character \(=\) is similar in effect to the local scope
character but it allows a notebook tab selection to also manage the state of of
a button\. Adding the notebook tab scope modifier enables notebook tab scope
control but the developer must then make use of the notebook\.xxxx sub\-commands
to actively manage state values as tabs are added, deleted and selected\.

# <a name='section11'></a>Example

    package require Tcl
    package require Tk
    package require menubar

    set tout [text .t -width 25 -height 12]
    pack ${tout} -expand 1 -fill both
    set mbar [menubar new \
        -borderwidth 4 \
        -relief groove  \
        -foreground black \
        -background tan \
        ]
    ${mbar} define {
        File M:file {
            Exit                 C      exit
        }
        Edit M:items+ {
        #   Label               Type    Tag Name(s)
        #   -----------------   ----    ---------
            "Cut"               C       cut
            "Copy"              C       copy
            "Paste"             C       paste
            --                  S       s2
            "Options" M:opts {
                "CheckList" M:chx+ {
                    Coffee      X       coffee+
                    Donut       X       donut
                    Eggs        X       eggs
                    }
                "RadioButtons" M:btn+ {
                    "Red"       R       color
                    "Green"     R       color+
                    "Blue"      R       color
                    }
            }
        }
        Help M:help {
            About               C       about
        }
    }
    ${mbar} install . {
        ${mbar} tag.add tout ${tout}
        ${mbar} menu.configure -command {
            # file menu
            exit            {Exit}
            # Item menu
            cut             {CB Edit cut}
            copy            {CB Edit copy}
            paste           {CB Edit paste}
            # boolean menu
            coffee          {CB CheckButton}
            donut           {CB CheckButton}
            eggs            {CB CheckButton}
            # radio menu
            color           {CB RadioButton}
            # Help menu
            about           {CB About}
        } -bind {
            exit        {1 Cntl+Q  Control-Key-q}
            cut         {2 Cntl+X  Control-Key-x}
            copy        {0 Cntl+C  Control-Key-c}
            paste       {0 Cntl+V  Control-Key-v}
            coffee      {0 Cntl+A  Control-Key-a}
            donut       {0 Cntl+B  Control-Key-b}
            eggs        {0 Cntl+C  Control-Key-c}
            about       0
        } -background {
            exit red
        } -foreground {
            exit white
        }
    }
    proc pout { txt } {
        global mbar
        set tout [${mbar} tag.cget . tout]
        ${tout} insert end "${txt}\n"
    }
    proc Exit { args } {
        puts "Goodbye"
        exit
    }
    proc CB { args } {
        set alist [lassign ${args} cmd]
        pout "${cmd}: [join ${alist} {, }]"
    }
    wm minsize . 300 300
    wm geometry . +4+4
    wm protocol . WM_DELETE_WINDOW exit
    wm title . "Example"
    wm focusmodel . active
    pout "Example started ..."

# <a name='section12'></a>Caveats

This implementation uses TclOO so it requires 8\.6\. The code has been tested on
Windows \(Vista\), Linux and OSX \(10\.4\)\.

# <a name='section13'></a>References

See also

  1. [menu](http://www\.tcl\.tk/man/tcl8\.6/TkCmd/menu\.htm)

  1. [A command that creates menubar objects](http://wiki\.tcl\.tk/25231)

# <a name='section14'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *menubar* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2009 Tom Krehbiel <krehbiel\.tom@gmail\.com> All rights reserved\.
