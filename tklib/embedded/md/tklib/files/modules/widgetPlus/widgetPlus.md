
[//000000001]: # (widgetPlus \- Enhanced Entry, Spinbox, and Combobox Widgets with Undo/Redo and other useful features)
[//000000002]: # (Generated from file 'widgetPlus\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (widgetPlus\(n\) 1\.0 tklib "Enhanced Entry, Spinbox, and Combobox Widgets with Undo/Redo and other useful features")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

widgetPlus \- Enhanced Entry, Spinbox, and Combobox Widgets with Undo/Redo and
other useful features

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [WIDGET OPTIONS](#section2)

  - [COMMANDS](#section3)

  - [WIDGET COMMANDS](#section4)

  - [BINDINGS](#section5)

      - [Class Bindings](#subsection1)

      - [Undo and Redo](#subsection2)

      - [EntryPlus](#subsection3)

      - [SpinboxPlus](#subsection4)

      - [TEntryPlus](#subsection5)

      - [TSpinboxPlus](#subsection6)

      - [TComboboxPlus](#subsection7)

  - [VIRTUAL EVENT <<Selection>>](#section6)

  - [USE WITH MEGAWIDGETS](#section7)

      - [combobox \(by Bryan Oakley\)](#subsection8)

      - [ComboBox \(BWidget\)](#subsection9)

  - [TO DO](#section8)

  - [BUGS](#section9)

  - [EXAMPLES](#section10)

  - [Bugs, Ideas, Feedback](#section11)

  - [See Also](#seealso)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require snit  
package require widgetPlus ?1\.0?  

[__widgetPlus::entryPlus__ ?*create*? *pathName*](#1)  
[__widgetPlus::spinboxPlus__ ?*create*? *pathName*](#2)  
[__widgetPlus::ttkEntryPlus__ ?*create*? *pathName*](#3)  
[__widgetPlus::ttkSpinboxPlus__ ?*create*? *pathName*](#4)  
[__widgetPlus::ttkComboboxPlus__ ?*create*? *pathName*](#5)  
[__widgetPlus::EnableBWidget__](#6)  
[*pathName* __edit__ ?*arg arg \.\.\.*?](#7)  
[*pathName* __edit canredo__](#8)  
[*pathName* __edit canundo__](#9)  
[*pathName* __edit modified__ ?*boolean*?](#10)  
[*pathName* __edit redo__](#11)  
[*pathName* __edit reset__](#12)  
[*pathName* __edit separator__](#13)  
[*pathName* __edit undo__](#14)  

# <a name='description'></a>DESCRIPTION

The __widgetPlus__ package adds new features to the widgets
____entry____, ____spinbox____, ____ttk::entry____,
____ttk::spinbox____, and ____ttk::combobox____\.

The new features are Undo and Redo operations, a __<<Selection>>__ event,
and for the __Tk__ \(unthemed\) widgets an __\-inactiveselectbackground__
option, and some minor fixes to bindings\. The new facilities closely follow
those of the ____text____ widget\.

The revised ____entry____, ____spinbox____,
____ttk::entry____, ____ttk::spinbox____, and
____ttk::combobox____ widgets are created by the commands
__widgetPlus::entryPlus__, __widgetPlus::spinboxPlus__,
__widgetPlus::ttkEntryPlus__, __widgetPlus::ttkSpinboxPlus__, and
__widgetPlus::ttkComboboxPlus__ respectively\.

For example, the __widgetPlus::entryPlus__ widget is implemented as a
*[Snit](\.\./\.\./\.\./\.\./index\.md\#snit)* __snit::widgetadaptor__ that wraps
a __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ ____entry____ widget\. Its
__winfo class__ is __Entry__, and it uses a binding tag
__EntryPlus__ that replaces the __Entry__ binding tag\. The other widgets
are implemented in a similar way\.

The package uses the namespace __::widgetPlus__, which exports \(only\) the
five commands defined below that begin with a lower\-case letter
\(__EnableBWidget__ is not exported\)\. These commands can be imported into the
global namespace, and for simplicity, descriptive text in this manual will
henceforth omit the namespace qualifier\.

    namespace import ::widgetPlus::*

# <a name='section2'></a>WIDGET OPTIONS

In addition to the usual options of the ____entry____,
____spinbox____, ____ttk::entry____,
____ttk::spinbox____, and ____ttk::combobox____ widgets, the
wrappers ____entryPlus____, ____spinboxPlus____,
____ttkEntryPlus____, ____ttkSpinboxPlus____, and
____ttkComboboxPlus____ provide the options below\.

  - Command\-Line Switch:	____\-inactiveselectbackground____  
    Database Name:	__inactiveSelectBackground__  
    Database Class:	__Foreground__

    Specifies the color to use for the selection when the window does not have
    the input __focus__\. If empty, __\{\}__, then no selection is shown
    when the window does not have the __focus__\. The
    __\-inactiveselectbackground__ option has no effect on the __Ttk__
    \(themed\) widgets ____ttkEntryPlus____,
    ____ttkSpinboxPlus____, and ____ttkComboboxPlus____\.

  - Command\-Line Switch:	____\-maxundo____  
    Database Name:	__maxUndo__  
    Database Class:	__MaxUndo__

    Specifies the maximum number of compound undo actions on the *undo stack*\.
    A zero or a negative value imply an unlimited *undo stack*\.

  - Command\-Line Switch:	____\-undo____  
    Database Name:	__undo__  
    Database Class:	__Undo__

    Specifies a *boolean* that says whether the undo mechanism is active or
    not\.

# <a name='section3'></a>COMMANDS

  - <a name='1'></a>__widgetPlus::entryPlus__ ?*create*? *pathName*

    Create an ____entryPlus____ widget; or convert an existing
    __entry__ widget into an ____entryPlus____\.

  - <a name='2'></a>__widgetPlus::spinboxPlus__ ?*create*? *pathName*

    Create a ____spinboxPlus____ widget; or convert an existing
    __spinbox__ widget into a ____spinboxPlus____\.

  - <a name='3'></a>__widgetPlus::ttkEntryPlus__ ?*create*? *pathName*

    Create a ____ttkEntryPlus____ widget; or convert an existing
    __ttk::entry__ widget into a ____ttkEntryPlus____\.

  - <a name='4'></a>__widgetPlus::ttkSpinboxPlus__ ?*create*? *pathName*

    Create a ____ttkSpinboxPlus____ widget; or convert an existing
    __ttk::spinbox__ widget into a ____ttkSpinboxPlus____\.

  - <a name='5'></a>__widgetPlus::ttkComboboxPlus__ ?*create*? *pathName*

    Create a ____ttkComboboxPlus____ widget; or convert an existing
    __ttk::combobox__ widget into a ____ttkComboboxPlus____\.

  - <a name='6'></a>__widgetPlus::EnableBWidget__

    Enable __widgetPlus__ to modify __BWidget__ ____Entry____
    widgets and their compounds \(such as the __BWidget__
    ____ComboBox____\)\. The command creates a bindtag __BwEntryPlus__
    to replace the default bindtag __BwEntry__\. This operation is not
    performed when the package is loaded because it requires __BWidget__ to
    be loaded first\. This command is not exported from namespace
    __::widgetPlus__\.

# <a name='section4'></a>WIDGET COMMANDS

In addition to the usual commands of the ____entry____,
____spinbox____, ____ttk::entry____,
____ttk::spinbox____, and ____ttk::combobox____ widgets, the
wrappers ____entryPlus____, ____ttkEntryPlus____,
____spinboxPlus____, ____ttkSpinboxPlus____, and
____ttkComboboxPlus____ provide:

  - <a name='7'></a>*pathName* __edit__ ?*arg arg \.\.\.*?

    This command controls the undo mechanism and the *modified flag*\. The
    exact behavior of the command depends on the option argument that follows
    the edit argument\. The following forms of the command are currently
    supported:

  - <a name='8'></a>*pathName* __edit canredo__

    Returns a *boolean* __true__ if redo is possible, i\.e\. when the *redo
    stack* is not empty\. Otherwise returns __false__\.

  - <a name='9'></a>*pathName* __edit canundo__

    Returns a *boolean* __true__ if undo is possible, i\.e\. when the *undo
    stack* is not empty\. Otherwise returns __false__\.

  - <a name='10'></a>*pathName* __edit modified__ ?*boolean*?

    If *boolean* is not specified, returns the *modified flag* of the
    widget\. The __insert__, __delete__, __edit undo__ and __edit
    redo__ commands, or \(by using this command\) the user, can set or clear the
    *modified flag*\. If *boolean* is specified, sets the *modified flag*
    of the widget to *boolean*\.

  - <a name='11'></a>*pathName* __edit redo__

    When the __\-undo__ option is __true__, reapplies the last undone
    edits provided no other edits were done since then\. Generates an error when
    the *redo stack* is empty\. Does nothing when the __\-undo__ option is
    __false__\.

  - <a name='12'></a>*pathName* __edit reset__

    Clears the *undo stack* and *redo stack*\.

  - <a name='13'></a>*pathName* __edit separator__

    Included for completeness, but has no effect\.

    \(N\.B\. An implicit separator is added to the *undo stack* for each call to
    a widget command \(e\.g\. __insert__ or __delete__\) that changes the
    widget contents\. These therefore separate the addition or removal of
    individual characters by typing, except that *cut* or *paste* operations
    are discrete\.\)

  - <a name='14'></a>*pathName* __edit undo__

    Undoes the last edit action when the __\-undo__ option is __true__\.
    An edit action is defined as a single __insert__ or __delete__
    command that is recorded on the *undo stack*\. Generates an error when the
    *undo stack* is empty\. Does nothing when the __\-undo__ option is
    __false__\.

# <a name='section5'></a>BINDINGS

## <a name='subsection1'></a>Class Bindings

The class binding tag for different widgets has these default values:

  - ____entry____ uses __Entry__

  - ____spinbox____ uses __Spinbox__

  - ____ttk::entry____ uses __TEntry__

  - ____ttk::spinbox____ uses __TSpinbox__

  - ____ttk::combobox____ uses __TCombobox__

  - ____entryPlus____ uses __EntryPlus__

  - ____spinboxPlus____ uses __SpinboxPlus__

  - ____ttkEntryPlus____ uses __TEntryPlus__

  - ____ttkSpinboxPlus____ uses __TSpinboxPlus__

  - ____ttkComboboxPlus____ uses __TComboboxPlus__

## <a name='subsection2'></a>Undo and Redo

The __<<Undo>>__ and __<<Redo>>__ virtual events are mapped to these
keyboard events:

  - On X11 systems \(Linux®, BSD®, Solaris®, etc\):

      * __<<Undo>>__ is mapped to

    __<Control\-z>__

      * __<<Redo>>__ is mapped to

    __<Control\-Shift\-z>__

  - On Windows® systems:

      * __<<Undo>>__ is mapped to

    __<Control\-z>__

      * __<<Redo>>__ is mapped to

    __<Control\-y>__

  - On Aqua® systems \(i\.e\. Apple® macOS® or OS X®\):

      * __<<Undo>>__ is mapped to

    __<Command\-z>__

      * __<<Redo>>__ is mapped to

    __<Command\-Shift\-z>__

## <a name='subsection3'></a>EntryPlus

The __EntryPlus__ bindings are based on those of the __Entry__ bindtag,
with these changes:

  - New bindings to __<<Undo>>__ and __<<Redo>>__\.

  - An adjustment to the __<<Paste>>__ binding, so that it behaves the same
    way on X11 as on other windowing systems \(i\.e\. it deletes the existing
    selection, if any exists\)\.

  - The removal of the antiquated __<Insert>__ binding\.

  - New bindings to __<FocusIn>__ and __<FocusOut>__, to facilitate the
    implementation of the __\-inactiveselectbackground__ option\.

## <a name='subsection4'></a>SpinboxPlus

The __SpinboxPlus__ bindings are based on those of the __Spinbox__
bindtag, with the same changes as are made when converting __Entry__ to
__EntryPlus__\.

## <a name='subsection5'></a>TEntryPlus

The __TEntryPlus__ bindings are based on those of the __TEntry__
bindtag, with these changes:

  - New bindings to __<<Undo>>__ and __<<Redo>>__\.

## <a name='subsection6'></a>TSpinboxPlus

The __TSpinboxPlus__ bindings are based on those of the __TSpinbox__
bindtag, with these changes:

  - New bindings to __<<Undo>>__ and __<<Redo>>__\.

## <a name='subsection7'></a>TComboboxPlus

The __TComboboxPlus__ bindings are based on those of the __TCombobox__
bindtag, with these changes:

  - New bindings to __<<Undo>>__ and __<<Redo>>__\.

# <a name='section6'></a>VIRTUAL EVENT <<Selection>>

Each __widgetPlus__ widget generates a virtual event __<<Selection>>__
whenever the value of its selection changes\. This allows other __Tcl__ code,
for example the package
__[persistentSelection](\.\./persistentSelection/persistentSelection\.md)__,
to monitor the selection in these widgets\.

# <a name='section7'></a>USE WITH MEGAWIDGETS

When an ____entry____, ____spinbox____,
____ttk::entry____, ____ttk::spinbox____, or
____ttk::combobox____ is a component of a megawidget, it is often
possible to apply __widgetPlus__ to that component without modifying the
megawidget code\.

## <a name='subsection8'></a>combobox \(by Bryan Oakley\)

A ____combobox____ with path __$w__ includes an
____entry____ widget __$w\.entry__, which uses the __Entry__
binding tag\. Thus __widgetPlus__ can be applied to the
____combobox____ after creation, using the command \(see
[EXAMPLES](#section10)\)

    entryPlus $w.entry -undo 1 -maxundo 0

## <a name='subsection9'></a>ComboBox \(BWidget\)

A __BWidget__ __ComboBox__ with path __$w__ includes an
____entry____ widget __$w\.e__, which uses the __BwEntry__
binding tag in place of the default tag __Entry__\.

Package __widgetPlus__ provides a replacement bindtag __BwEntryPlus__,
but this is not computed when the package is loaded because it requires
__BWidget__ to be loaded first\. The command
__::widgetPlus::EnableBWidget__ must be called to provide
__BwEntryPlus__, and then the __BWidget__ __ComboBox__ can be
modified \(see [EXAMPLES](#section10)\)

    ::widgetPlus::EnableBWidget
    entryPlus $w.e -undo 1 -maxundo 0

# <a name='section8'></a>TO DO

  - Undo and Redo do not sync the value of the *modified flag* \- they always
    set the value to *boolean* __true__\.

  - Undo and Redo do not sync the position of the insertion cursor\.

  - The __<<Modified>>__ event is not generated\.

  - Undo/Redo separators, and the __\-autoseparators__ option, as found in
    the ____text____ widget, are not implemented\. An implicit separator
    is added for each call to a widget command \(e\.g\. __insert__ or
    __delete__\) that changes the widget contents\. The __edit separator__
    command has no effect\. Separator functionality would be less useful for
    widgets such as ____entryPlus____ than it is for a
    ____text____ widget\.

  - Add an *overwrite* mode, toggled by __<Insert>__ on non\-macOS®
    systems\.

# <a name='section9'></a>BUGS

This version of __widgetPlus__ is intended to be compatible with all
releases of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5 and 8\.6, and with the
branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, and *trunk* in the source
code repository for __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any
incompatibility with any of these versions, for any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system, should be reported
as a bug\. Please report such in the category *widgetPlus* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\.

# <a name='section10'></a>EXAMPLES

To create and map an ____entryPlus____ widget \.ep with an unlimited
Undo/Redo stack:

    package require widgetPlus
    widgetPlus::entryPlus .ep -undo 1 -maxundo 0
    pack .ep

The same but using __namespace import__:

    package require widgetPlus
    namespace import widgetPlus::*
    entryPlus .ep -undo 1 -maxundo 0
    pack .ep

To convert an existing ____entry____ widget \.ee into an
____entryPlus____ with an unlimited Undo/Redo stack:

    entry .ee

        .
        .
        .

    package require widgetPlus
    widgetPlus::entryPlus .ee -undo 1 -maxundo 0

The same but using __namespace import__:

    entry .ee

        .
        .
        .

    package require widgetPlus
    namespace import widgetPlus::*
    entryPlus .ee -undo 1 -maxundo 0

Apply __widgetPlus__ to a Bryan Oakley ____combobox____:

    package require combobox
    combobox::combobox .cb

        .
        .
        .

    package require widgetPlus
    namespace import widgetPlus::*
    entryPlus .cb.entry -undo 1 -maxundo 0

Apply __widgetPlus__ to a __BWidget__ ____ComboBox____\. The
command __::widgetPlus::EnableBWidget__ must be called first\.

    package require BWidget
    ComboBox .cb

        .
        .
        .

    package require widgetPlus
    ::widgetPlus::EnableBWidget
    namespace import widgetPlus::*

    entryPlus .cb.e -undo 1 -maxundo 0

# <a name='section11'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *widgetPlus* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

BWidget, ComboBox, [Entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[persistentSelection](\.\./persistentSelection/persistentSelection\.md),
spinbox, [text](\.\./\.\./\.\./\.\./index\.md\#text),
[ttk::combobox](\.\./\.\./\.\./\.\./index\.md\#ttk\_combobox),
[ttk::entry](\.\./\.\./\.\./\.\./index\.md\#ttk\_entry), ttk::spinbox
