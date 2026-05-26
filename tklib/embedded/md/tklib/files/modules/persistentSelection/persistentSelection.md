
[//000000001]: # (persistentSelection \- Enhanced PRIMARY selection)
[//000000002]: # (Generated from file 'persistentSelection\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (persistentSelection\(n\) 1\.0 tklib "Enhanced PRIMARY selection")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

persistentSelection \- Enhanced PRIMARY selection

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [USAGE](#section3)

      - [Script requirements](#subsection1)

      - [Widget requirements](#subsection2)

      - [Text widgets](#subsection3)

      - [Entry, spinbox, ttk::entry, ttk::spinbox, and ttk::combobox
        widgets](#subsection4)

      - [Listbox widgets](#subsection5)

  - [TO DO](#section4)

  - [BUGS](#section5)

  - [EXAMPLES](#section6)

  - [See Also](#seealso)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require persistentSelection ?1\.0?  

[__persistentSelection::fixText__](#1)  
[__persistentSelection::getClassicPrimarySel__ ?*displayOf*? ?*withOthers*?](#2)  
[__persistentSelection::getPrimarySel__ ?*displayOf*?](#3)  
[__persistentSelection::report__ *type* *pathName*](#4)  

# <a name='description'></a>DESCRIPTION

Consider a __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ widget that sets its
__\-exportselection__ option to boolean __true__, thereby exporting its
selection\. When the selection in the widget is canceled, by default
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ also cancels the __PRIMARY__
selection\. In this situation, an attempt to read the __PRIMARY__ selection,
e\.g\. by a __<<PasteSelection>>__ event, will fail\.

The __persistentSelection__ package offers more convenient behavior\. It will
sustain as the __PRIMARY__ selection the last non\-empty value set by any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ widget that it monitors, as long as
the __PRIMARY__ selection is not claimed by another process, or by a widget
that it does not monitor\.

The __persistentSelection__ package works by binding to the
__<<Selection>>__ event on the widgets of interest, and using this binding
to monitor any change of the selection in the widget\. Its commands are confined
to the namespace __::persistentSelection__\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__persistentSelection::fixText__

    Call this command once to resolve problems with ____text____ widgets
    that use the default __Text__ bindtag \(rather than __Ntext__\)\. See
    [Text widgets](#subsection3) for an explanation\.

    The command adjusts some __Text__ bindings to generate
    __<<Selection>>__ events; and it re\-orders calls to the
    ____text____ widget __tag__ command in the private command
    __::tk::TextSelectTo__, so that this command cooperates better with
    __persistentSelection__\.

    These adjustments are needed only to older versions of
    __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. The command
    __persistentSelection::fixText__ has no effect on sufficiently recent
    releases\. It can safely be called for any version of
    __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\.

  - <a name='2'></a>__persistentSelection::getClassicPrimarySel__ ?*displayOf*? ?*withOthers*?

      * *displayOf* \- a __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ window path
        on the display to be interrogated \(optional, default \{__\.__\}\)

      * *withOthers* \- whether to return the __PRIMARY__ selection if it
        is owned by another process or interpreter \(optional, boolean, default
        __false__\)

    A command to return the classic \(non\-persistent\) form of the __PRIMARY__
    selection\. If the selection does not exist, or is sustained only by
    __persistentSelection__, the command returns the empty string\.

  - <a name='3'></a>__persistentSelection::getPrimarySel__ ?*displayOf*?

      * *displayOf* \- a __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ window on
        the display to be interrogated \(optional, default \{__\.__\}\)

    A command to return the value of the __PRIMARY__ selection\. If the
    selection does not exist, the command returns the empty string\. The usual
    __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ commands are perfectly valid, but
    they raise an error if the selection does not exist\.

  - <a name='4'></a>__persistentSelection::report__ *type* *pathName*

      * *type* \- \(value __text__ or __entry__\) classification of the
        widget whose selection has changed

      * *pathName* \- the __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ window path
        of the widget whose selection has changed

    To make package __persistentSelection__ monitor a widget, this command
    must be bound to the __<<Selection>>__ event on that widget\. The command
    records changes in the widget's selection, and uses the information to
    sustain a non\-empty __PRIMARY__ selection on each display\.

# <a name='section3'></a>USAGE

## <a name='subsection1'></a>Script requirements

For each widget that will be monitored by __persistentSelection__, the
command __persistentSelection::report__ must be bound to event
__<<Selection>>__ in one of the widget's binding tags\.

For example, the developer may wish to use __persistentSelection__ with
every ____text____ and ____entryPlus____ widget in an
application: this can be achieved by adding the __<<Selection>>__ binding to
the __Text__ and __EntryPlus__ bindtags\. See [EXAMPLES](#section6)\.

If __persistentSelection__ is not required for all widgets of a particular
class, the binding can be added to per\-widget bindtags\. See
[EXAMPLES](#section6)\.

## <a name='subsection2'></a>Widget requirements

To be capable of being monitored by __persistentSelection__, a widget must
satisfy three conditions:

  - It must have an __\-exportselection__ option that allows it to export its
    selection to the __PRIMARY__ selection\.

  - It must generate a __<<Selection>>__ event whenever its selection
    changes\.

  - its bindings to other events should be suitable \- specifically, in versions
    of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ older than __8\.6\.6__, a GUI
    event that extends or reduces the selection from one non\-empty value to
    another should not use an intermediate state that has an empty selection,
    because this confuses __persistentStore__\.

The __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ and __Ttk__ widgets that can
export their selection are ____text____, ____entry____,
____listbox____, ____spinbox____, ____ttk::entry____,
____ttk::spinbox____, and ____ttk::combobox____\.

## <a name='subsection3'></a>Text widgets

In versions of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ older than
__8\.6\.9__, the ____text____ widget does not generate
__<<Selection>>__ events in a few "corner cases" in which its selection
changes\. These omissions can be corrected by changes to the __Text__
bindings, in order to satisfy the second condition of [Widget
requirements](#subsection2)\.

In addition, versions of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ older than
__8\.6\.6__ process selection events slightly differently from newer versions,
and in combination with the __Text__ bindings this confuses
__persistentStore__\. If an upgrade to the current version of __Tcl/Tk__
is not feasible, this problem can be resolved by making a slight modification to
the widget bindings, in order to satisfy the third condition of [Widget
requirements](#subsection2)\.

Either the script should call the command __persistentSelection::fixText__
to adjust the __Text__ bindings and the commands that they call; or the
widget can use the __Ntext__ binding tag \(for
__[ntext](\.\./ntext/ntext\.md)__ version 1\.0 or above\) instead of the
default __Text__ bindtag\.

In either case, the argument *type* supplied to command
__persistentSelection::report__ should have the value __text__\.

## <a name='subsection4'></a>Entry, spinbox, ttk::entry, ttk::spinbox, and ttk::combobox widgets

The ____entry____, ____spinbox____, ____ttk::entry____,
____ttk::spinbox____, and ____ttk::combobox____ widgets do not
generate a __<<Selection>>__ event when their selection changes, and
therefore require modification\.

The package __[widgetPlus](\.\./widgetPlus/widgetPlus\.md)__ provides
__[snit](\.\./\.\./\.\./\.\./index\.md\#snit)__ wrappers
____widgetPlus::entryPlus____, ____widgetPlus::spinboxPlus____,
____widgetPlus::ttkEntryPlus____,
____widgetPlus::ttkSpinboxPlus____, and
____widgetPlus::ttkComboboxPlus____ respectively\. Each
__[widgetPlus](\.\./widgetPlus/widgetPlus\.md)__ widget generates the
required __<<Selection>>__ events\.

In all these cases, the argument *type* supplied to command
__persistentSelection::report__ should have the value __entry__\. This
argument determines how __persistentSelection__ will inspect the widget's
selection, and the commands that do so are the same for all these widgets\.

## <a name='subsection5'></a>Listbox widgets

A similar wrapper has not been created for the ____listbox____ widget,
which has the complication of permitting multiple selections\.

# <a name='section4'></a>TO DO

  - Test on a system with multiple displays\.

# <a name='section5'></a>BUGS

This version of __persistentSelection__ is intended to be compatible with
all releases of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5\- and 8\.6, and with
the branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, *revised\_text*, and
*trunk* in the source code repository for
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any incompatibility with any of these
versions, for any __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system,
should be reported as a bug\. Please report such in the category
*persistentSelection* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\.

# <a name='section6'></a>EXAMPLES

Each example uses __persistentSelection__ to retain the last non\-empty value
of the selection in certain widgets\. Each example also includes the creation of
sample widgets\.

Monitor all ____entryPlus____ widgets\.

    package require widgetPlus
    widgetPlus::entryPlus .ep
    pack .ep

    package require persistentSelection
    bind EntryPlus <<Selection>> {::persistentSelection::report entry %W}

Monitor all ____text____ widgets that use the default __Text__
bindings\.

    text .t
    pack .t

    package require persistentSelection
    ::persistentSelection::fixText
    bind Text <<Selection>> {::persistentSelection::report text %W}

Monitor all ____text____ widgets that use the default __Text__
bindings, and all ____entryPlus____ widgets\.

    text .t
    pack .t

    package require widgetPlus
    widgetPlus::entryPlus .ep
    pack .ep

    package require persistentSelection
    ::persistentSelection::fixText
    bind Text <<Selection>> {::persistentSelection::report text %W}
    bind EntryPlus <<Selection>> {::persistentSelection::report entry %W}

Monitor all ____text____ widgets that use __Ntext__ bindings\.

    text .t
    pack .t

    package require ntext
    bindtags .t {.t Ntext . all}

    package require persistentSelection
    bind Ntext <<Selection>> {::persistentSelection::report text %W}

Monitor a single ____entryPlus____ widget __\.ep__

    package require widgetPlus
    widgetPlus::entryPlus .ep
    pack .ep

    package require persistentSelection
    bind .ep <<Selection>> {::persistentSelection::report entry %W}

Monitor a single ____text____ widget __\.t__

    text .t
    pack .t

    package require persistentSelection
    bind .t <<Selection>> {::persistentSelection::report text %W}

# <a name='seealso'></a>SEE ALSO

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags), [ntext](\.\./ntext/ntext\.md),
[text](\.\./\.\./\.\./\.\./index\.md\#text),
[widgetPlus](\.\./widgetPlus/widgetPlus\.md)
