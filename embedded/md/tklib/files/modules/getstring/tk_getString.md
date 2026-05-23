
[//000000001]: # (getstring \- A dialog which prompts for a string input)
[//000000002]: # (Generated from file 'tk\_getString\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (getstring\(n\) 0\.1 tklib "A dialog which prompts for a string input")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

getstring \- A string dialog

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [EXAMPLE](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require getstring ?0\.1?  

[__::getstring::tk\_getString__ *pathName* *variable* *text* ?options?](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a dialog which consists of an Entry, OK, and Cancel
buttons\.

  - <a name='1'></a>__::getstring::tk\_getString__ *pathName* *variable* *text* ?options?

    Creates a dialog which prompts the user with *text* to input a text
    string\. The contents of the entry are put in the *variable* upon closure
    of the dialog\. The command returns a boolean indicating if the user pressed
    OK or not\. If \-geometry is not specified, the dialog is centered in its
    parent toplevel unless its parent is \. in which case the dialog is centered
    in the screen\. Options: \-title \-allowempty a boolean argument indicating if
    the dialog should accept an empty entry \-entryoptions simply passes its
    arguments through to the entry widget\. This is valuble for performing extra
    validation using the Entry widget validation hooks\. \-geometry specifies the
    geometry of the window

# <a name='section2'></a>EXAMPLE

    package require getstring
    namespace import getstring::*

    if {[tk_getString .gs text "Feed me a string please:"]} {
        puts "user entered: $text"
    }

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *getstring* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[dialog](\.\./\.\./\.\./\.\./index\.md\#dialog),
[entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[string](\.\./\.\./\.\./\.\./index\.md\#string)
