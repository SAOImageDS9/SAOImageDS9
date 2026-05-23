
[//000000001]: # (widget\_calendar \- Various megawidgets)
[//000000002]: # (Generated from file 'widget\_calendar\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\_calendar\(n\) 1\.0\.2 tklib "Various megawidgets")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget\_calendar \- Calendar Megawidget

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
package require widget::calendar ?1\.0\.2?  

[__widget::calendar__ *pathname* ?options?](#1)  

# <a name='description'></a>DESCRIPTION

This package provides a calendar megawidget \(snidget\)\.

  - <a name='1'></a>__widget::calendar__ *pathname* ?options?

# <a name='section2'></a>WIDGET OPTIONS

  - __\-command__

    A script to evaluate when a date was selected\.

  - __\-dateformat__

    The format of the date that is returned\. Default: %m/%d/%Y\.

  - __\-firstday__

    Set first day the week, Either sunday or monday\. It defaults to monday\.

  - __\-font__

    Select the font used in the widget\. It defaults to Helvetica 9\.

  - __\-highlightcolor__

    Selects the background color for the day that has been selected\. Default:
    \#FFCC00

  - __\-language__

    Specify language of the calendar contents\. The language is specified by
    abbreviations of the languge, for example: en \- english, de \- german \.\.\. It
    defaults to en\.

    Supported languages: de en es fr gr he it ja sv pl pt zh fi tr nl ru crk
    crx\-nak crx\-lhe

  - __\-shadecolor__

    Selects the color of the parts that have a shaded background\. Default:
    \#888888

  - __\-showpast__

    Specify if the past shall be shown\. It is a boolean value and defaults to 1\.

  - __\-textvariable__

    Specifies the name of a variable whose value is linked to the entry widget's
    contents\. Whenever the variable changes value, the widget's contents are
    updated, and vice versa\.

# <a name='section3'></a>WIDGET COMMAND

*pathname* __get__ ?*what*?

Returns a part of the selected date or 'all'\. The argument *what* selects the
part\. Valid values for *what* are: day, month, year and all\. 'all' is the
default and returns the complete date in the format given with \-dateformat\.

# <a name='section4'></a>DEFAULT BINDINGS

On creation of the calendar widget the following bindings are installed\. When
pressing a key the command is invoked and the textvariable is updated\. updated\.

  - Home \- Move to the current date

  - Up \- Move to week before current date

  - Down \- Move to week after current date

  - Left \- Move to day before current date

  - Right \- Move to day after current date

  - Control\-Left \- Move to month before current date

  - Control\-Right \- Move to month after current date

  - Control\-Up \- Move to year before current date

  - Control\-Down \- Move to year after current date

# <a name='section5'></a>EXAMPLE

    package require widget::calendar ; # or widget::all
    set t [widget::calendar .t]
    pack $t -fill x -expand 1

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget::calendar* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[calendar](\.\./\.\./\.\./\.\./index\.md\#calendar),
[date](\.\./\.\./\.\./\.\./index\.md\#date),
[megawidget](\.\./\.\./\.\./\.\./index\.md\#megawidget),
[snit](\.\./\.\./\.\./\.\./index\.md\#snit), [widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='category'></a>CATEGORY

Widget
