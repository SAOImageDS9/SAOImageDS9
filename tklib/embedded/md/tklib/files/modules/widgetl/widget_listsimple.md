
[//000000001]: # (widget\_listsimple \- widget::listsimple widget)
[//000000002]: # (Generated from file 'widget\_listsimple\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widget\_listsimple\(n\) 0\.1\.2 tklib "widget::listsimple widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widget\_listsimple \- widget::listsimple widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Class API](#section2)

  - [Instance API](#section3)

  - [Widget Options](#section4)

      - [Widget Construction\-Time Only Options](#subsection1)

      - [Widget General Options](#subsection2)

  - [Example](#section5)

  - [Bugs, Ideas, Feedback](#section6)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require widget::listsimple ?0\.1\.2?  
package require widget::validator ?0\.1?  
package require widget::scrolledwindow  
package require snit  
package require tooltip  
package require img::png  
package require msgcat  

[__widget::listsimple__ *pathname* ?options?](#1)  
[__widgetCmd__ __destroy__](#2)  
[__widgetCmd__ __configure__](#3)  
[__widgetCmd__ __configure__ *option* *value* \.\.\.](#4)  
[__widgetCmd__ __configure__ *option*](#5)  
[__widgetCmd__ __cget__ *option*](#6)  
[*\{\*\}cmdprefix* __get__](#7)  
[*\{\*\}cmdprefix* __set__ *values*](#8)  
[*\{\*\}cmdprefix* *text* *errvar*](#9)  

# <a name='description'></a>DESCRIPTION

This package provides a megawidget for the interactive entry of unordered lists\.
For a megawidget allowing the entry of ordered lists, and more, please see the
package __widget::listentry__\.

# <a name='section2'></a>Class API

The widget class supports a single command, for the creation of widgets\.

  - <a name='1'></a>__widget::listsimple__ *pathname* ?options?

    This command creates and configures new instances of the widget\.

    For details on the available options please see section [Widget
    Options](#section4)\.

    The result of the command is the pathname of the new widget\.

# <a name='section3'></a>Instance API

All widget instances supported the following methods\.

  - <a name='2'></a>__widgetCmd__ __destroy__

    This method destroys the widget\. Any further access to the widget will
    generate errors\.

    The result of the command is the empty string\.

  - <a name='3'></a>__widgetCmd__ __configure__

    This method comes in three variants\. This variant here returns a list
    containing the current configuration of the widget, i\.e\. the values for all
    options\.

    For details on the available options please see section [Widget
    Options](#section4)\.

  - <a name='4'></a>__widgetCmd__ __configure__ *option* *value* \.\.\.

    This method comes in three variants\. This variant here reconfigures the
    widget, setting the specified options to the given values\.

    *Note* that it is not possible to change the construction\-time only
    options\.

    For details on the available options please see section [Widget General
    Options](#subsection2)\.

    The result of the command is the empty string\.

  - <a name='5'></a>__widgetCmd__ __configure__ *option*

    This method comes in three variants\. This variant here is an alias for the
    method __cget__ below and identical to it\.

  - <a name='6'></a>__widgetCmd__ __cget__ *option*

    This method returns the current value of the specified *option*\.

    For details on the available options please see section [Widget
    Options](#section4)\.

# <a name='section4'></a>Widget Options

This section explains all the options available to instances of
__widget::listsimple__\. Please note that a few of the options can be set
only at instance construction time\. The majority of the options can however be
set both during construction\- and runtime\.

## <a name='subsection1'></a>Widget Construction\-Time Only Options

  - __\-values__ cmdprefix

    This option specifies a callback for the management of a predefined list of
    strings a user may enter\.

    If specified the widget will use a combobox instead of a plain entry field
    and fill its list during widget construction using the data delivered by
    this callback\. The callback will be further invoked whenever a new value is
    entered into the main list, to save the extended list of predefined values\.

    The signature of this callback is

      * <a name='7'></a>*\{\*\}cmdprefix* __get__

        In this form the callback is expected to return a list of strings\. The
        strings are loaded into the list of the internal combobox for quick
        access by the user\.

        It will be invoked once, during widget construction, to load the list of
        predefined strings a user may enter\.

      * <a name='8'></a>*\{\*\}cmdprefix* __set__ *values*

        In this form the callback is given a list of new strings and expected to
        save them somewhere for future use\.

        The return value of the callback is ignored\.

        This form is invoked whenever the user entered a new string into the
        main list\. The order of strings in *values* represents the order used
        to show them in the combobox's list\.

  - __\-validate__ cmdprefix

    This option specifies a callback which is invoked after every change of the
    contents of the internal entry field\. The signature of this callback is

      * <a name='9'></a>*\{\*\}cmdprefix* *text* *errvar*

        where *text* is the string to validate, and *errvar* the name of a
        variable the callback can store an error message into when it detects
        invalid data\.

        The system expects that the callback returns a boolean value, where
        __true__ indicates that *text* is valid\.

    The default validation, when no callback was specified, will treat the empty
    string as invalid, and everything else as valid\.

    *Please note* that the widget will prevent the entry of duplicate values
    into the main list, regardless of the validity of the input otherwise\. This
    is in keeping with that this widget is meant for the entry of unordered
    lists, essentially a set of strings\.

## <a name='subsection2'></a>Widget General Options

  - __\-listvariable__ varname

    This option specifies the variable holding the list to be manipulated by the
    widget\. Any changes to the list outside of the widget are automatically
    imported into the widget\. Similarly, all changes made to the list by the
    widget are automatically exported to this variable\.

  - __\-skin\-add__ string

  - __\-skin\-remove__ string

  - __\-skin\-tip\-add__ string

  - __\-skin\-tip\-remove__ string

  - __\-skin\-tip\-main__ string

  - __\-skin\-tip\-entry__ string

  - __\-skin\-tip\-list__ string

  - __\-skin\-tip\-empty__ string

  - __\-skin\-tip\-duplicate__ string

  - __\-skin\-tip\-add\-none__ string

  - __\-skin\-tip\-remove\-none__ string

  - __\-skin\-img\-add__ image

  - __\-skin\-img\-remove__ image

  - __\-skin\-invalid\-color__ color

    These options all modify the appearance of the widget, i\.e\. its skin\.

    All options taking a string argument influence the various labels shown,
    with the __\-skin\-tip\-\*__ options influencing the tooltips shown on
    hovering the over various parts in particular\.

    All the strings are run through __msgcat__ first, enabling text
    localization through message catalogs\. The default values are keys into the
    message catalogs which are part of the package itself\.

    The options taking images modify the images shown on the buttons for adding
    and removing elements of the list\. They default to the PNG images
    distributed with the package itself\.

    The single option taking a color value modifies the color used to highlight
    invalid data entered into the internal entry field of the widget\. This
    option defaults to __yellow__\.

# <a name='section5'></a>Example



# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widget::listsimple* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[data entry lists](\.\./\.\./\.\./\.\./index\.md\#data\_entry\_lists), [data entry set
of strings](\.\./\.\./\.\./\.\./index\.md\#data\_entry\_set\_of\_strings), [data entry
unordered list](\.\./\.\./\.\./\.\./index\.md\#data\_entry\_unordered\_list), [list entry
panel](\.\./\.\./\.\./\.\./index\.md\#list\_entry\_panel), [set entry
panel](\.\./\.\./\.\./\.\./index\.md\#set\_entry\_panel),
[widget](\.\./\.\./\.\./\.\./index\.md\#widget)
