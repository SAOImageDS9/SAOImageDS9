
[//000000001]: # (datefield \- Tk datefield widget)
[//000000002]: # (Generated from file 'datefield\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; Keith Vetter <keith@ebook\.gemstar\.com>)
[//000000004]: # (Copyright &copy; Thomas Wunderlich <tcl\.tk@blindenfreizeiten\.de>)
[//000000005]: # (datefield\(n\) 0\.3 tklib "Tk datefield widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

datefield \- Tk datefield widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [OPTIONS](#section3)

  - [EXAMPLE](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Category](#category)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tk  
package require datefield ?0\.3?  

[__::datefield::datefield__ *widgetpath* ?*options*?](#1)  
[*\-format*](#2)  

# <a name='description'></a>DESCRIPTION

The __datefield__ package provides the datefield widget which is an enhanced
text entry widget for the purpose of date entry\. There are three valid formats
for the dates which can be entered:

  1. English form MM/DD/YYYY using *\-format "%m/%d/%Y"* \(default\)

  1. German form DD\.MM\.YYYY using *\-format "%d\.%m\.%Y"*

  1. ISO form YYYY\-MM\-DD using *\-format "%Y\-%m\-%d"*

The datefield widget is, in fact, just an entry widget with specialized
bindings\. This means all the command and options for an entry widget apply
equally here\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::datefield::datefield__ *widgetpath* ?*options*?

    Creates and configures a date field widget\.

# <a name='section3'></a>OPTIONS

  - <a name='2'></a>*\-format*

    One of "%m/%d/%Y" \(English, default if option left\), "%d\.%m\.%Y" \(German\), or
    "%Y\-%m\-%d" \(ISO\)\.

See the __[entry](\.\./\.\./\.\./\.\./index\.md\#entry)__ manual entry for details
on all remaining/available options\.

# <a name='section4'></a>EXAMPLE

    package require datefield

    wm title . "Datefield example"
    proc DayOfWeek {args} {
        set now [clock scan $::myDate]
        set ::myDate2 [clock format $now -format %A]
    }
    trace variable myDate w DayOfWeek

    ::datefield::datefield .df -textvariable myDate -format "%m/%d/%Y"
    label .l1 -text "Enter a date:"   -anchor e
    label .l2 -text "That date is a:" -anchor e
    label .l3 -textvariable myDate2 -relief sunken -width 12

    grid .l1 .df -sticky ew
    grid .l2 .l3 -sticky ew
    focus .df

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *datefield* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

clock\(n\), entry\(n\)

# <a name='keywords'></a>KEYWORDS

[clock](\.\./\.\./\.\./\.\./index\.md\#clock), [date](\.\./\.\./\.\./\.\./index\.md\#date),
[dateentry](\.\./\.\./\.\./\.\./index\.md\#dateentry),
[entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='category'></a>CATEGORY

Widget

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; Keith Vetter <keith@ebook\.gemstar\.com>  
Copyright &copy; Thomas Wunderlich <tcl\.tk@blindenfreizeiten\.de>
