
[//000000001]: # (swaplist \- A dialog which allows a user to move options between two lists)
[//000000002]: # (Generated from file 'swaplist\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (swaplist\(n\) 0\.1 tklib "A dialog which allows a user to move options between two lists")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

swaplist \- A dialog which allows a user to move options between two lists

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [EXAMPLE](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require swaplist ?0\.1?  

[__::swaplist::swaplist__ *pathName* *variable* *completeList* *selectedList* ?options?](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a dialog which consists of 2 listboxes, along with buttons
to move items between them and reorder the right list\.

  - <a name='1'></a>__::swaplist::swaplist__ *pathName* *variable* *completeList* *selectedList* ?options?

    Creates a dialog which presents the user with a pair of listboxes\. Items are
    selected by using the buttons to move them to the right list\. The contents
    of the right list are put in the *variable* upon closure of the dialog\.
    The command returns a boolean indicating if the user pressed OK or not\. If
    \-geometry is not specified, the dialog is centered in its parent toplevel
    unless its parent is \. in which case the dialog is centered in the screen\.

    Options:

      * __\-embed__

        if this flag is supplied, the procedure will create a swaplist widget
        named *pathName*, with the *variable* set as the listvariable for
        the right side listbox\. This flag will also cause the \-title and
        \-geometry flags to be ignored\.

      * __\-reorder__

        boolean specifying if buttons allowing the user to change the order of
        the right listbox should appear or not\. defaults to true

      * __\-title__

        sets the title of the dialog window\. defaults to "Configuration"

      * __\-llabel__

        sets the heading above the left list\. defaults to "Available:"

      * __\-rlabel__

        sets the heading above the right list\. defaults to "Selected:"

      * __\-lbuttontext__

        sets the text on the "move left" button\. defaults to "<<"

      * __\-rbuttontext__

        sets the text on the "move right" button\. defaults to ">>"

      * __\-ubuttontext__

        sets the text on the "move up" button\. defaults to "Move Up"

      * __\-dbuttontext__

        sets the text on the "move down" button\. defaults to "Move Down"

      * __\-geometry__

        sets the geometry of the dialog window\.

# <a name='section2'></a>EXAMPLE

    package require swaplist
    namespace import swaplist::*

    if {[swaplist .slist opts "1 2 3 4 5 6 7 8 9" "1 3 5"]} {
        puts "user chose numbers: $opts"
    }

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *swaplist* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[dialog](\.\./\.\./\.\./\.\./index\.md\#dialog),
[disjointlistbox](\.\./\.\./\.\./\.\./index\.md\#disjointlistbox),
[listbox](\.\./\.\./\.\./\.\./index\.md\#listbox)

# <a name='category'></a>CATEGORY

Widget
