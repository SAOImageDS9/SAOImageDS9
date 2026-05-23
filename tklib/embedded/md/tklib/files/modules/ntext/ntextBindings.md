
[//000000001]: # (ntextBindings \- Alternative Bindings for the Text Widget)
[//000000002]: # (Generated from file 'ntextBindings\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ntextBindings\(n\) 1\.0 tklib "Alternative Bindings for the Text Widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ntextBindings \- Alternative Bindings for the Text Widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [CONFIGURATION OPTIONS](#section2)

  - [INTERNALS](#section3)

  - [BUGS](#section4)

  - [EXAMPLE](#section5)

  - [See Also](#seealso)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5\-  
package require Tk 8\.5\-  
package require ntext ?1\.0?  

# <a name='description'></a>DESCRIPTION

The __[ntext](ntext\.md)__ package provides a binding tag named *Ntext*
for use by text widgets in place of the default *Text* binding tag\.

The *Text* binding tag provides around one hundred bindings to the text widget
\(the exact number is platform\-dependent\)\. A few of these behave in a way that is
different from most contemporary text\-editing applications\. *Ntext* aims to
provide more familiar behaviour\.

Features of the *Ntext* bindings that differ from the default *Text*
bindings:

  - Clicking near the end of a \(logical\) line moves the cursor to the end of
    that line *\(not the start of the next line\)*\. If the widget is in
    *\-wrap* *word* mode, the same rule applies to display lines\.

  - Double\-clicking or dragging near the end of a \(logical\) line will
    highlight/select characters from the end of that line *\(not the next line,
    or the region at the end of the line where there are no characters\)*\. If
    the widget is in *\-wrap* *word* mode, the same rule applies to display
    lines\.

  - On windowing systems other than macOS Aqua, the *Home* key implements
    "Smart Home" \(successive keypresses move the cursor to the start of the
    display line, then to the first non\-whitespace character at the start of the
    logical line, then toggles between the beginning and end of leading
    whitespace\); the *End* key implements "Smart End" \(which is similar to
    "Smart Home"\)\. On macOS Aqua, this functionality is provided by the
    operations <Command\-Left> and <Command\-Right>\.

  - When a selection exists, a "Paste" operation \(e\.g\. <Control\-v>\) overwrites
    the selection \(as most editors do\), and does so on all platforms\.

  - On windowing systems other than macOS Aqua, the *Insert* key toggles
    between "Insert" and "Overwrite" modes for keyboard input\. *\(In contrast,
    the Text binding tag uses* Insert *as a method to paste the "primary
    selection", a task that can be accomplished instead by mouse
    middle\-click\.\)*

  - The *Escape* key clears the selection\.

  - On the macOS Aqua windowing system, *Ntext* follows Aqua conventions for
    keyboard navigation\. Certain bindings related to vertical scrolling can be
    forced to behave in the same way as for the Windows and X11 windowing
    systems, by setting __::ntext::classicParagraphs__ to __1__ \(see
    Section [CONFIGURATION OPTIONS](#section2)\)\.

  - On the macOS Aqua windowing system, *Ntext* follows Aqua conventions for
    placement of the insert mark when keyboard navigation cancels a selection\.
    This behavior can be switched off by setting
    __::ntext::classicSelection__ to __1__ \(see Section [CONFIGURATION
    OPTIONS](#section2)\)\.

  - Selecting with <Shift\-Button1> selects from the previous position of the
    insertion cursor\. *\(In the Text binding tag, the selection anchor may be
    the position of the previous mouse click\.\)*

  - <Shift\-Button1> operations do not alter the selection anchor\. *\(In the Text
    binding tag, they do\.\)*

  - By default, the *Ntext* binding tag does not provide several of the
    Control\-key bindings supplied by the *Text* binding tag\. Modern keyboards
    offer alternatives, such as cursor keys for navigation; modern applications
    often use the Control\-key bindings for other purposes \(e\.g\. <Control\-p> for
    "print"\)\.

In the last three cases, the behavior of *Text* is often useful, so *Ntext*
gives you the option of retaining it, by setting variables defined in the
::ntext namespace to 1 \(instead of their default 0\)\. Explaining these features
in more detail:

  - If the mouse is clicked at position A, then the keyboard is used to move the
    cursor to B, then shift is held down, and the mouse is clicked at C: the
    *Text* binding tag gives a selection from A to C; the *Ntext* gives a
    selection from B to C\. If you want *Ntext* to behave like *Text* in this
    respect, set __::ntext::classicMouseSelect__ to 1\.

  - The *Text* binding tag allows successive <Shift\-Button\-1> events to change
    both ends of the selection, by moving the selection anchor to the end of the
    selection furthest from the mouse click\. Instead, the *Ntext* binding tag
    fixes the anchor, and multiple Shift\-Button\-1 events can only move the
    non\-anchored end of the selection\. If you want *Ntext* to behave like
    *Text* in this respect, set __::ntext::classicAnchor__ to 1\. In both
    *Text* and *Ntext*, keyboard navigation with the Shift key held down
    alters the selection and keeps the selection anchor fixed\.

  - The following "extra" *Text* bindings are switched off by default, but can
    be activated in *Ntext* by setting __::ntext::classicExtras__ to 1:
    <Control\-a>, <Control\-b>, <Control\-d>, <Control\-e>, <Control\-f>,
    <Control\-h>, <Control\-i>, <Control\-k>, <Control\-n>, <Control\-o>,
    <Control\-p>, <Control\-t>, <Control\-space>, <Control\-Shift\-space>\.

# <a name='section2'></a>CONFIGURATION OPTIONS

*Ntext* provides alternatives to a number of behaviours of the classic
*Text* binding tag\. Where there is an option, the *Ntext* behaviour is
switched on by default, except for display\-line indentation which is discussed
on a separate page at *[ntextIndent](ntextIndent\.md)*\.

The behaviour of *Ntext* may be configured application\-wide by setting the
values of a number of namespace variables:

__::ntext::classicAnchor__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. the anchor
    point is fixed

  - __1__ \- selects classic *Text* behaviour, i\.e\. the anchor point is
    variable

__::ntext::classicExtras__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. several
    "extra" *Text* bindings are de\-activated

  - __1__ \- selects classic *Text* behaviour, i\.e\. the "extra" *Text*
    bindings are activated

__::ntext::classicMouseSelect__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. the anchor
    point for mouse selection operations is moved by keyboard navigation

  - __1__ \- selects classic *Text* behaviour

__::ntext::classicParagraphs__

  - __0__ \- \(default value\) on macOS Aqua, certain keyboard bindings are
    made to behave in the same way as the Mac application TextEdit\. The bindings
    involve vertical scrolling of the screen and are <?Shift\-?Option\-\(Up&#124;Down\)>\.

  - __1__ \- on macOS Aqua, certain keyboard bindings are made to behave in
    the same way as for the Windows and X11 windowing systems and the classic
    *Text*, ignoring the conventions of Aqua\. The bindings involve vertical
    scrolling of the screen and are <?Shift\-?Option\-\(Up&#124;Down\)>\.

__::ntext::classicSelection__

  - __0__ \- \(default value on macOS Aqua\) selects Mac\-like behaviour, i\.e\.
    when a navigation keystroke cancels a selection, the insert mark first moves
    to the end of the selection determined by the navigation direction of the
    keystroke, and then the keystroke is applied\.

  - __1__ \- \(default value except on macOS Aqua\) selects PC\-like behaviour
    \(the same as classic *Text*\), i\.e\. when a navigation keystroke cancels a
    selection, the insert mark is not moved before the keystroke is applied\.

__::ntext::overwrite__

  - __0__ \- \(initial value\) text typed at the keyboard is inserted into the
    widget

  - __1__ \- text typed at the keyboard overwrites text already in the widget

  - The value is toggled by the *Insert* key\.

__::ntext::useBlockCursor__

  - __0__ \- the block cursor will not be used\. When the widget is in
    *overwrite* mode \(see __::ntext::overwrite__\), the ordinary cursor
    will change color instead\.

  - __1__ \- the block cursor will be used when the widget is in
    *overwrite* mode \(see __::ntext::overwrite__\)\.

  - The default value depends on the version of __Tk__\. In versions of
    __Tk__ earlier than __8\.5\.12__, the sizing of the block cursor had a
    bug, and __::ntext::useBlockCursor__ defaults to __0__\. From
    __8\.5\.12__ onwards the bug is fixed, and __::ntext::useBlockCursor__
    defaults to __1__\.

# <a name='section3'></a>INTERNALS

In order to remain independent of the version of
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ \(8\.5 or 8\.6\),
__[ntext](ntext\.md)__ defines its own virtual events\. These new virtual
events are used only in the *Ntext* binding tag, and therefore do not
interfere with the real or virtual events used in other code\.

These events include <<NtextCut>>, <<NtextCopy>>, <<NtextPaste>> which are used
in place of <<Cut>>, <<Copy>>, <<Paste>> respectively\.

The definition of the virtual event <<NtextCut>> \(etc\) is similar to that of
<<Cut>> \(etc\) in __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.6\.

# <a name='section4'></a>BUGS

This version of __[ntext](ntext\.md)__ is intended to be compatible with
all releases of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5, 8\.6, and 8\.7, and
with the branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, and *trunk* in the
source code repository for __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any
incompatibility with any of these versions, for any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system, should be reported
as a bug\. Please report such in the category *ntext* of the [Tklib
Trackers](https://core\.tcl\-lang\.org/tklib/reportlist)\.

# <a name='section5'></a>EXAMPLE

To use *Ntext* but keep classic *Text* 's variable\-anchor feature:

    package require ntext
    text .t
    set ::ntext::classicAnchor 1
    bindtags .t {.t Ntext . all}

# <a name='seealso'></a>SEE ALSO

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags), [ntext](ntext\.md),
[ntextIndent](ntextIndent\.md), [text](\.\./\.\./\.\./\.\./index\.md\#text)

# <a name='keywords'></a>KEYWORDS

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags),
[text](\.\./\.\./\.\./\.\./index\.md\#text)
