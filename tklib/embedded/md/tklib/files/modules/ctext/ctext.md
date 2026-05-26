
[//000000001]: # (ctext \- Ctext a text widget with highlighting support)
[//000000002]: # (Generated from file 'ctext\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; George Peter Staplin <GeorgePS@XMission\.com>)
[//000000004]: # (ctext\(n\) 3\.3 tklib "Ctext a text widget with highlighting support")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ctext \- Ctext a text widget with highlighting support

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [HIGHLIGHTING](#section3)

  - [WIDGET COMMANDS](#section4)

  - [WIDGET OPTIONS](#section5)

  - [EXAMPLE](#section6)

  - [THANKS](#section7)

  - [Bugs, Ideas, Feedback](#section8)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tk  
package require ctext ?3\.3?  

[__ctext__ *pathName* ?*options*?](#1)  
[__::ctext::addHighlightClass__ *pathName* *class* *color* *keywordlist*](#2)  
[__::ctext::addHighlightClassWithOnlyCharStart__ *pathName* *class* *color* *char*](#3)  
[__::ctext::addHighlightClassForSpecialChars__ *pathName* *class* *color* *charstring*](#4)  
[__::ctext::addHighlightClassForRegexp__ *pathName* *class* *color* *pattern*](#5)  
[__::ctext::clearHighlightClasses__ *pathName*](#6)  
[__::ctext::getHighlightClasses__ *pathName*](#7)  
[__::ctext::deleteHighlightClass__ *pathName* *class*](#8)  
[__::ctext::enableComments__ *enable*](#9)  
[__::ctext::disableComments__ *enable*](#10)  
[*pathName* __highlight__ *startIndex* *endIndex*](#11)  
[*pathName* __fastdelete__ *index1* ?*index2*?](#12)  
[*pathName* __fastinsert__](#13)  
[*pathName* __copy__](#14)  
[*pathName* __cut__](#15)  
[*pathName* __paste__](#16)  
[*pathName* __append__](#17)  
[*pathName* __configure__ *option* *value* ?\.\.\.?](#18)  

# <a name='description'></a>DESCRIPTION

The __ctext__ package provides the ctext widget which is an enhanced text
widget with support for configurable syntax highlighting and some extra
commands\.

Ctext overloads the text widget and provides new commands, named
__highlight__, __copy__, __paste__,__cut__, __append__, and
__edit__\. It also provides several commands that allow you to define
classes\. Each class corresponds to a tag in the widget\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__ctext__ *pathName* ?*options*?

    Creates and configures a ctext widget\.

# <a name='section3'></a>HIGHLIGHTING

Highlighting is controlled with text widget tags, that are called highlight
classes\. The *class* is a tag name and can be configured like any text widget
tag\. Four types of highlight classes are supported\. All highlight classes are
automatically used by the __highlight__ method of the widget\.

  - <a name='2'></a>__::ctext::addHighlightClass__ *pathName* *class* *color* *keywordlist*

    Add a highlighting class *class* to the ctext widget *pathName*\. The
    highlighting will be done with the color *color*\. All words in the
    *keywordlist* will be highlighted\.

        # highlight some tcl keywords
        ::ctext::addHighlightClass .t tclkeywords red [list set info interp uplevel upvar]

  - <a name='3'></a>__::ctext::addHighlightClassWithOnlyCharStart__ *pathName* *class* *color* *char*

    Add a highlighting class *class* to the ctext widget *pathName*\. The
    highlighting will be done with the color *color*\. All words starting with
    *char* will be highlighted\.

        ::ctext::addHighlightClassWithOnlyCharStart .t vars blue \$

  - <a name='4'></a>__::ctext::addHighlightClassForSpecialChars__ *pathName* *class* *color* *charstring*

    Add a highlighting class *class* to the ctext widget *pathName*\. The
    highlighting will be done with the color *color*\. All chars in
    *charstring* will be highlighted\.

  - <a name='5'></a>__::ctext::addHighlightClassForRegexp__ *pathName* *class* *color* *pattern*

    Add a highlighting class *class* to the ctext widget *pathName*\. The
    highlighting will be done with the color *color*\. All text parts matching
    the regexp *pattern* will be highlighted\.

  - <a name='6'></a>__::ctext::clearHighlightClasses__ *pathName*

    Remove all highlight classes from the widget *pathName*\.

  - <a name='7'></a>__::ctext::getHighlightClasses__ *pathName*

    List all highlight classes for the widget *pathName*\.

  - <a name='8'></a>__::ctext::deleteHighlightClass__ *pathName* *class*

    Delete the highlight class *class* from the widget *pathName*

  - <a name='9'></a>__::ctext::enableComments__ *enable*

    Enable C comment highlighting\. The *class* for c\-style comments is
    __\_cComment__\. The C comment highlighting is disabled by default\.

  - <a name='10'></a>__::ctext::disableComments__ *enable*

    Disable C comment highlighting\.

# <a name='section4'></a>WIDGET COMMANDS

Each ctext widget created with the above command supports the following commands
and options in addition to the standard text widget commands and options\.

  - <a name='11'></a>*pathName* __highlight__ *startIndex* *endIndex*

    Highlight the text between *startIndex* and *endIndex*\.

  - <a name='12'></a>*pathName* __fastdelete__ *index1* ?*index2*?

    Delete text range without updating the highlighting\. Arguments are identical
    to the *pathName* __delete__ command inherited from the standard text
    widget\.

  - <a name='13'></a>*pathName* __fastinsert__

    Insert text without updating the highlighting\. Arguments are identical to
    the *pathName* __insert__ command inherited from the standard text
    widget\.

  - <a name='14'></a>*pathName* __copy__

    Call __tk\_textCopy__ for the ctext instance\.

  - <a name='15'></a>*pathName* __cut__

    Call __tk\_textCut__ for the ctext instance\.

  - <a name='16'></a>*pathName* __paste__

    Call __tk\_textPaste__ for the ctext instance\.

  - <a name='17'></a>*pathName* __append__

    Append the current selection to the clipboard\.

  - <a name='18'></a>*pathName* __configure__ *option* *value* ?\.\.\.?

    Set the options for the ctext widget\. Each option name must be followed the
    new value\.

# <a name='section5'></a>WIDGET OPTIONS

  - Command\-Line Switch:	__\-linemap__  
    Database Name:	____  
    Database Class:	____

    Creates \(\-linemap 1\) or deletes \(\-linemap 0\) a line number list on the left
    of the widget\. The default is to have a linemap displayed\.

  - Command\-Line Switch:	__\-linemapfg__  
    Database Name:	____  
    Database Class:	____

    Changes the foreground of the linemap\. The default is the same color as the
    main text widget\.

  - Command\-Line Switch:	__\-linemapbg__  
    Database Name:	____  
    Database Class:	____

    Changes the background of the linemap\. The default is the same color as the
    main text widget\.

  - Command\-Line Switch:	__\-linemap\_select\_fg__  
    Database Name:	____  
    Database Class:	____

    Changes the selected line foreground\. The default is black\.

  - Command\-Line Switch:	__\-linemap\_select\_bg__  
    Database Name:	____  
    Database Class:	____

    Changes the selected line background\. The default is yellow\.

  - Command\-Line Switch:	__\-linemap\_mark\_command__  
    Database Name:	____  
    Database Class:	____

    Calls a procedure or command with the *pathName* of the ctext window, the
    *type* which is either __marked__ or __unmarked__, and finally the
    line number selected\. The proc prototype is:

        proc linemark_cmd {win type line}.

    See also ctext\_test\_interactive\.tcl

  - Command\-Line Switch:	__\-highlight__  
    Database Name:	____  
    Database Class:	____

    Takes a boolean value which defines whether or not to highlight text which
    is inserted or deleted\. The default is 1\.

  - Command\-Line Switch:	__\-linemap\_markable__  
    Database Name:	____  
    Database Class:	____

    Takes a boolean value which specifies whether or not lines in the linemap
    are markable with the mouse\. The default is 1\.

# <a name='section6'></a>EXAMPLE

    package require Tk
    package require ctext

    proc main {} {
    pack [frame .f] -fill both -expand 1
    pack [scrollbar .f.s -command {.f.t yview}] -side right -fill y

    pack [ctext .f.t -bg black -fg white -insertbackground yellow  -yscrollcommand {.f.s set}] -fill both -expand 1

    ctext::addHighlightClass .f.t widgets purple  [list ctext button label text frame toplevel  scrollbar checkbutton canvas listbox menu menubar menubutton  radiobutton scale entry message tk_chooseDir tk_getSaveFile  tk_getOpenFile tk_chooseColor tk_optionMenu]

    ctext::addHighlightClass .f.t flags orange  [list -text -command -yscrollcommand  -xscrollcommand -background -foreground -fg -bg  -highlightbackground -y -x -highlightcolor -relief -width  -height -wrap -font -fill -side -outline -style -insertwidth  -textvariable -activebackground -activeforeground -insertbackground  -anchor -orient -troughcolor -nonewline -expand -type -message  -title -offset -in -after -yscroll -xscroll -forward -regexp -count  -exact -padx -ipadx -filetypes -all -from -to -label -value -variable  -regexp -backwards -forwards -bd -pady -ipady -state -row -column  -cursor -highlightcolors -linemap -menu -tearoff -displayof -cursor  -underline -tags -tag]

    ctext::addHighlightClass .f.t stackControl red  {proc uplevel namespace while for foreach if else}
    ctext::addHighlightClassWithOnlyCharStart .f.t vars mediumspringgreen "\$"
    ctext::addHighlightClass .f.t variable_funcs gold {set global variable unset}
    ctext::addHighlightClassForSpecialChars .f.t brackets green {[]{}}
    ctext::addHighlightClassForRegexp .f.t paths lightblue {\.[a-zA-Z0-9\_\-]+}
    ctext::addHighlightClassForRegexp .f.t comments khaki {#[^\n\r]*}
    .f.t fastinsert end [info body main]

    pack [frame .f1] -fill x

    .f.t highlight 1.0 end

    pack [button .f1.exit -text Exit -command exit] -side left

    pack [entry .e] -side bottom -fill x
    .e insert end "ctext::deleteHighlightClass .f.t "
    bind .e <Return> {eval [.e get]}
    }
    main

Further examples are in the source package for ctext\.

# <a name='section7'></a>THANKS

Kevin Kenny, Neil Madden, Jeffrey Hobbs, Richard Suchenwirth, Johan Bengtsson,
Mac Cody, Günther, Andreas Sievers, and Michael Schlenker\.

# <a name='section8'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *ctext* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[text](\.\./\.\./\.\./\.\./index\.md\#text)

# <a name='keywords'></a>KEYWORDS

[syntax highlighting](\.\./\.\./\.\./\.\./index\.md\#syntax\_highlighting),
[text](\.\./\.\./\.\./\.\./index\.md\#text), [widget](\.\./\.\./\.\./\.\./index\.md\#widget)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; George Peter Staplin <GeorgePS@XMission\.com>
