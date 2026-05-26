
[//000000001]: # (widget\_validator \- widget::validator behaviour)
[//000000002]: # (Generated from file 'widget\_validator\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\_validator\(n\) 0\.1 tklib "widget::validator behaviour")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget\_validator \- widget::validator behaviour

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Validation](#section2)

  - [Example](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require widget::validator ?0\.1?  

[__widget::validator__ __attach__ *w* *color* *cmdprefix*](#1)  
[__widget::validator__ __detach__ *w*](#2)  
[__widget::validator__ __validate__ *w*](#3)  

# <a name='description'></a>DESCRIPTION

This package provides a unified validation API for __ttk__'s entry and
combobox widgets\.

Please note that the validation behaviour defined in this package will not
reject invalid edits\. It will only highlight the entry containing invalid data
and set the proper state flag\.

It is the responsibility of the using package or application to decide how and
when to actually reject such invalid content\.

  - <a name='1'></a>__widget::validator__ __attach__ *w* *color* *cmdprefix*

    This method adds a validating behaviour to the widget *w*\.

    Whenever the content of the widget's entry field changes the specified
    *cmdprefix* is invoked and has to return a boolean value, where
    __true__ means that content is ok, and __false__ that the content is
    invalid\. For more information on the command prefix see section
    [Validation](#section2)\. In case of the latter the background color of
    the entry field is changed to *color* to indicate the invalidity\.

    The system does not support nesting of validators on a widget, nor the
    attachment of multiple validators\. To change validating conditions
    __detach__ the current validator first before attaching the new\.

    An error is thrown if the widget has already validating behaviour attached
    to it\.

    The result of the method is the empty string\.

    To achieve its aims the package overrides various configuration options of
    the widget the behaviour is attached to\. These options are restored to their
    previous values on __detach__\.

    If other behaviours are attached the validator may be rendered temporarily
    \(partially\) non\-functional\. Similarly, if the validator is detached while a
    different behaviour is also attached its restoration of configuration
    settings may render the other non\-functional

  - <a name='2'></a>__widget::validator__ __detach__ *w*

    This method removes the validating behaviour from the widget *w* and
    restores it to its original state\.

    An error is thrown if the widget has no validating behaviour attached to it\.

    The result of the method is the empty string\.

  - <a name='3'></a>__widget::validator__ __validate__ *w*

    Invoking this method forces a validation of the widget *w*, assuming that
    it has a validator behaviour attached to it\.

    The result of the method is the empty string\.

# <a name='section2'></a>Validation

The command prefix for used for validation has to have the following signature:

  - \{\*\}*cmdprefix* *text*

    The argument is the text to validate\.

    The result of the callback has to be a boolean value where __true__
    means that *text* is ok, and __false__ that *text* is invalid\.

# <a name='section3'></a>Example

    package require Tk 8.5
    package require widget::validator

    set TE {}
    set TC {}

    ttk::entry    .e -textvariable TE
    ttk::combobox .c -textvariable TC -values {fruit vegetable corn}
    ttk::combobox .n -values {fruit vegetable corn}
    ttk::button   .x -command ::exit -text Exit

    pack .e -expand 1 -fill both -side top
    pack .c -expand 1 -fill both -side top
    pack .n -expand 1 -fill both -side top
    pack .x -expand 1 -fill both -side top

    widget::validator attach .e lightblue {apply {text {
        expr {$text ne {}}
    }}}

    widget::validator attach .c yellow {apply {text {
        expr {$text ni {{} hello world}}
    }}}

    widget::validator attach .n pink {apply {text {
        expr {$text ni {{} blub}}
    }}}

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget::validator* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[invalid](\.\./\.\./\.\./\.\./index\.md\#invalid), [state
management](\.\./\.\./\.\./\.\./index\.md\#state\_management),
[ttk::combobox](\.\./\.\./\.\./\.\./index\.md\#ttk\_combobox),
[ttk::entry](\.\./\.\./\.\./\.\./index\.md\#ttk\_entry),
[validation](\.\./\.\./\.\./\.\./index\.md\#validation), [widget
validation](\.\./\.\./\.\./\.\./index\.md\#widget\_validation)
