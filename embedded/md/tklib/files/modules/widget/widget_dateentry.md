
[//000000001]: # (widget\_dateentry \- Various megawidgets)
[//000000002]: # (Generated from file 'widget\_dateentry\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\_dateentry\(n\) 0\.98 tklib "Various megawidgets")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget\_dateentry \- Date Entry Megawidget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [WIDGET OPTIONS](#section2)

  - [WIDGET COMMAND](#section3)

  - [DEFAULT BINDINGS](#section4)

  - [EXAMPLE](#section5)

  - [Bugs, Ideas, Feedback](#section6)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require widget ?3\.0?  
package require widget::dateentry ?0\.98?  

[__widget::dateentry__ *pathname* ?options?](#1)  
[*pathname* __get__](#2)  
[*pathname* __set__ *date*](#3)  

# <a name='description'></a>DESCRIPTION

This package provides a dateentry megawidget \(snidget\)\. It is based on an
ttk::entry\. All widget commands of the ttk::entry are available for the
dateentry\.

  - <a name='1'></a>__widget::dateentry__ *pathname* ?options?

# <a name='section2'></a>WIDGET OPTIONS

  - __\-command__

    A command prefix to evaluate when a date was selected\. The command prefix is
    executed in the global namespace and given two arguments, the raw date in
    seconds, and the formatted date, as per option __\-dateformat__\.

  - __\-dateformat__

    The format of the date that is entered or returned\. Default: %m/%d/%Y\.

  - __\-firstday__

    See the __widget::calendar__ man page\.

  - __\-font__

    Select the font used in the widget\. It defaults to Helvetica 9\.

  - __\-highlightcolor__

    See the __widget::calendar__ man page\. See the calendar man page\.

  - __\-language__

    See the __widget::calendar__ man page\.

  - __\-shadecolor__

    See the __widget::calendar__ man page\.

  - __\-showpast__

    See the __widget::calendar__ man page\.

  - __\-textvariable__

    Specifies the name of a variable whose value is linked to the entry widget's
    contents\. Whenever the variable changes value, the widget's contents are
    updated, and vice versa\.

# <a name='section3'></a>WIDGET COMMAND

  - <a name='2'></a>*pathname* __get__

    Returns the selected date\.

  - <a name='3'></a>*pathname* __set__ *date*

    Programmatically sets a new date\. Expects that the date is in the same
    format as configured by option __\-dateformat__\.

    The same effect can also be achieved by setting a linked
    __\-textvariable__\.

# <a name='section4'></a>DEFAULT BINDINGS

On creation of the dateentry widget the following bindings are installed\. For
navigation within the calendar, see its manpage\.

  - Button\-1 \- Accept and select the date and close the calendar window\.

  - Return, space \- Accept the selected date and close the calendar window

  - Escape \- Close calendar window

  - Control\-space \- Show calendar window

# <a name='section5'></a>EXAMPLE

    package require widget::dateentry; # or widget::all
    set t [widget::dateentry .de]
    pack $t -fill x -expand 1

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget::dateentry* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[date](\.\./\.\./\.\./\.\./index\.md\#date),
[dateentry](\.\./\.\./\.\./\.\./index\.md\#dateentry),
[megawidget](\.\./\.\./\.\./\.\./index\.md\#megawidget),
[snit](\.\./\.\./\.\./\.\./index\.md\#snit), [widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='category'></a>CATEGORY

Widget
