
[//000000001]: # (history \- Provides a history for Entry widgets)
[//000000002]: # (Generated from file 'tklib\_history\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (history\(n\) 0\.3 tklib "Provides a history for Entry widgets")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

history \- Provides a history for Entry widgets

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Bugs, Ideas, Feedback](#section2)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require history ?0\.3?  

[__::history::init__ *pathName* ?length?](#1)  
[__::history::remove__ *pathName*](#2)  
[__::history::add__ *pathName* *text*](#3)  
[__::history::get__ *pathName*](#4)  
[__::history::clear__ *pathName*](#5)  
[__::history::configure__ *pathName* *option* ?value?](#6)  
[bell](#7)  

# <a name='description'></a>DESCRIPTION

This package provides a convenient history mechanism for Entry widgets\. The
history may be accessed with the up and down arrow keys\.

  - <a name='1'></a>__::history::init__ *pathName* ?length?

    Arranges to remember the history of the named Entry widget\. An optional
    length determines the number of history entries to keep\. This may be changed
    later with __::history::configure__\. History entries must be added with
    the __::history::add__ command before they can be seen\.

  - <a name='2'></a>__::history::remove__ *pathName*

    Forgets all history entries for the Entry *pathName* and removes the
    history bindings\.

  - <a name='3'></a>__::history::add__ *pathName* *text*

    This command is used to add history entries to an Entry that has previously
    had __::history::init__ called on it\. This command should be called from
    your Entry handler with the contents of the entry \(or whatever you wish to
    add to the history\)\.

  - <a name='4'></a>__::history::get__ *pathName*

    This command returns a list containing the history entries for the Entry
    *pathName*

  - <a name='5'></a>__::history::clear__ *pathName*

    This command clears the history list for the named Entry\.

  - <a name='6'></a>__::history::configure__ *pathName* *option* ?value?

    This command queries or sets configuration options\. Currently the options
    recognized are *length* and *alert*\. Setting the length determines the
    number of history entries to keep for the named Entry\. Alert specifies the
    command to run when the user reaches the end of the history, it defaults to

  - <a name='7'></a>bell

    \. Although configure requires a *pathName* argument, the setting for alert
    is global and the path is ignored\.

    entry .e
    bind .e <Return> [list ProcessEntry %W]
    ::history::init .e
    pack .e

    proc ProcessEntry {w} {
        set text [$w get]
        if {$text == ""} { return }
        ::history::add $w $text
        puts $text
        $w delete 0 end
    }

# <a name='section2'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *entry::history* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[history](\.\./\.\./\.\./\.\./index\.md\#history)
