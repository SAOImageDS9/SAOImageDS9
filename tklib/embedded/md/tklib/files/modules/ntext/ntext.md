
[//000000001]: # (ntext \- Alternative Bindings for the Text Widget)
[//000000002]: # (Generated from file 'ntext\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ntext\(n\) 1\.0 tklib "Alternative Bindings for the Text Widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ntext \- Alternative Bindings for the Text Widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [CONFIGURATION OPTIONS](#section3)

  - [BUGS](#section4)

  - [EXAMPLE](#section5)

  - [See Also](#seealso)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5\-  
package require Tk 8\.5\-  
package require ntext ?1\.0?  

[__::ntext::new\_textCopy__ *pathName*](#1)  
[__::ntext::new\_textCut__ *pathName*](#2)  
[__::ntext::new\_textPaste__ *pathName*](#3)  
[__::ntext::syncIndentColor__ *pathName*](#4)  
[__::ntext::syncTabColor__ *pathName*](#5)  

# <a name='description'></a>DESCRIPTION

The purpose of the __ntext__ package is to make the text widget behave more
like other text\-editing applications\. It makes the text widget more useful for
implementing a text editor, and makes it behave in a way that will be more
familiar to most users\.

The package provides a binding tag named *Ntext* for use by text widgets in
place of the default *Text* binding tag\.

Package __ntext__ 's functions and variables are contained entirely in the
__::ntext__ namespace; its other code is contained in the binding tag
*Ntext*\. __ntext__ has no exports to the global or other namespaces, and
no new widget commands\. It uses modified copies of the
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ code, leaving the original code, and
the *Text* binding tag, unchanged\.

The differences between the *Ntext* binding tag and the default *Text*
binding tag are in three categories:

  - Some *Text* bindings behave differently from most text\-editing
    applications\. *Ntext* gives these bindings more familiar behaviour\. For
    details see *[ntextBindings](ntextBindings\.md)*\.

  - When a logical line with leading whitespace is word\-wrapped onto more than
    one display line, the wrapped display lines begin further to the left than
    the first display line, which can make the text layout untidy and difficult
    to read\. *Ntext* can indent the wrapped lines to match the leading
    whitespace of the first display line \(this facility is switched off by
    default\)\. For details see *[ntextIndent](ntextIndent\.md)*\.

  - When the user navigates or selects text, __Tcl/Tk__ sometimes needs to
    detect word boundaries\. *Ntext* provides improved rules for word boundary
    detection\. For details see *[ntextWordBreak](ntextWordBreak\.md)*\.

The remainder of this page describes the basic use and configuration of all
three aspects of *Ntext*\. For more detailed information on the different
facilities of *Ntext*, see the pages
*[ntextBindings](ntextBindings\.md)*,
*[ntextIndent](ntextIndent\.md)*, and
*[ntextWordBreak](ntextWordBreak\.md)*\.

See Section [EXAMPLE](#section5) for how to apply the *Ntext* binding tag
in place of the *Text* binding tag\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::ntext::new\_textCopy__ *pathName*

    Replacement for ::tk\_textCopy\.

  - <a name='2'></a>__::ntext::new\_textCut__ *pathName*

    Replacement for ::tk\_textCut that also maintains *Ntext* indentation \(see
    *[ntextIndent](ntextIndent\.md)*\)\.

  - <a name='3'></a>__::ntext::new\_textPaste__ *pathName*

    Replacement for ::tk\_textPaste that also maintains *Ntext* indentation
    \(see *[ntextIndent](ntextIndent\.md)*\)\.

  - <a name='4'></a>__::ntext::syncIndentColor__ *pathName*

    Command to apply the current value of the variable
    __::ntext::indentColor__ to existing lines in a text widget\. This
    command is useful if a text widget has been created, text has been inserted
    in the widget, *and then* the value of __::ntext::indentColor__ is
    changed \(see *[ntextIndent](ntextIndent\.md)*\)\.

  - <a name='5'></a>__::ntext::syncTabColor__ *pathName*

    Command to apply the current values of the variables
    __::ntext::tabColor__ and __::ntext::tabSelColor__ to tab spaces in
    a text widget\. This command is useful if a text widget has been created,
    text has been inserted in the widget, *and then* the value of
    __::ntext::tabColor__ or __::ntext::tabSelColor__ is changed\.

# <a name='section3'></a>CONFIGURATION OPTIONS

*Ntext* provides alternatives to a number of behaviours of the classic
*Text* binding tag\. Where there is an option, the *Ntext* behaviour \(except
for display\-line indentation\) is switched on by default\.

The behaviour of *Ntext* may be configured application\-wide by setting the
values of a number of namespace variables:

__::ntext::classicAnchor__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. the anchor
    point is fixed

  - __1__ \- selects classic *Text* behaviour, i\.e\. the anchor point is
    variable

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::classicExtras__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. several
    traditional *Text* bindings are de\-activated

  - __1__ \- selects classic *Text* behaviour, i\.e\. all *Text* bindings
    are activated

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::classicMouseSelect__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\. the anchor
    point for mouse selection operations is moved by keyboard navigation

  - __1__ \- selects classic *Text* behaviour

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::classicParagraphs__

  - __0__ \- \(default value\) on macOS Aqua, certain keyboard bindings are
    made to behave in the same way as the Mac application TextEdit\. The bindings
    involve vertical scrolling of the screen and are <?Shift\-?Option\-\(Up&#124;Down\)>\.

  - __1__ \- on macOS Aqua, certain keyboard bindings are made to behave in
    the same way as classic *Text*, ignoring the conventions of Aqua\. The
    bindings involve vertical scrolling of the screen and are
    <?Shift\-?Option\-\(Up&#124;Down\)>\.

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::classicSelection__

  - __0__ \- \(default value on macOS Aqua\) selects Mac\-like behaviour, i\.e\.
    when a navigation keystroke cancels a selection, the insert mark first moves
    to the end of the selection determined by the navigation direction of the
    keystroke, and then the keystroke is applied\.

  - __1__ \- \(default value except on macOS Aqua\) selects PC\-like behaviour
    \(the same as classic *Text*\), i\.e\. when a navigation keystroke cancels a
    selection, the insert mark is not moved before the keystroke is applied\.

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::classicWordBreak__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\.
    platform\-independent, two classes of word characters and one class of
    non\-word characters\.

  - __1__ \- selects classic *Text* behaviour, i\.e\. platform\-dependent, one
    class of word characters and one class of non\-word characters

  - After changing this value, the matching patterns should be recalculated\. See
    *[ntextWordBreak](ntextWordBreak\.md)* for details and advanced
    configuration options\.

__::ntext::classicWrap__

  - __0__ \- selects *Ntext* behaviour, i\.e\. display lines of text widgets
    in *\-wrap* *word* mode are indented to match the initial whitespace of
    the first display line of a logical line\. If the widget already holds text
    when this value is set, a function call may be necessary\. See
    *[ntextIndent](ntextIndent\.md)* for detailed instructions on the use
    of *Ntext* 's indentation\.

  - __1__ \- \(default value\) selects classic *Text* behaviour, i\.e\. no
    indentation

  - For more information see *[ntextIndent](ntextIndent\.md)*

__::ntext::indentColor__

  - __\{\}__ \- if the value is the empty string, then the indent of wrapped
    display lines has the same color as the widget background\.

  - *color* \- a valid __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ color to use
    for the indent of wrapped display lines \(default value *\#d9d9d9*\)\.

    Coloring is implemented with the text widget tag option *\-lmargincolor*,
    which is available from __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.6\.6
    onwards\. *Ntext* indent coloring has no effect in earlier versions of
    __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\.

    The value of __::ntext::indentColor__ will often be set at startup\. If
    the value is changed when text widgets already exist and contain text, those
    widgets can be updated by calling command __::ntext::syncIndentColor__\.

  - For more information see *[ntextIndent](ntextIndent\.md)*

__::ntext::overwrite__

  - __0__ \- \(initial value\) text typed at the keyboard is inserted into the
    widget

  - __1__ \- text typed at the keyboard overwrites text already in the widget

  - The value is toggled by the *Insert* key \(except on macOS Aqua where there
    is no such key\)\.

  - For more information see *[ntextBindings](ntextBindings\.md)*

__::ntext::tabColor__

  - __\{\}__ \- if the value is the empty string, then the tab spaces have the
    same color as the widget background\.

  - *color* \- a valid __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ color to use
    for tab spaces \(default value *\#ffffaa*\)\.

    The value of __::ntext::tabColor__ will often be set at startup\. If the
    value is changed when text widgets already exist and contain text, those
    widgets can be updated by calling command __::ntext::syncTabColor__\.

__::ntext::tabSelColor__

  - __\{\}__ \- if the value is the empty string, then the color of tab spaces
    in the selection defaults to the same color as unselected tabs \(see
    __::ntext::tabColor__\), and *not* to the widget *\-selectbackground*
    color\.

  - *color* \- a valid __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ color to use
    for tab spaces in the selection \(default value *\#418bd4*\)\.

    The value of __::ntext::tabSelColor__ will often be set at startup\. If
    the value is changed when text widgets already exist and contain text, those
    widgets can be updated by calling command __::ntext::syncTabColor__\.

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

  - For more information see *[ntextBindings](ntextBindings\.md)*

# <a name='section4'></a>BUGS

This version of __ntext__ is intended to be compatible with all releases of
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5, 8\.6, and 8\.7, and with the
branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, and *trunk* in the source
code repository for __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any
incompatibility with any of these versions, for any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system, should be reported
as a bug\. Please report such in the category *ntext* of the [Tklib
Trackers](https://core\.tcl\-lang\.org/tklib/reportlist)\.

# <a name='section5'></a>EXAMPLE

To create a text widget \.t and use the *Ntext* bindings:

    package require ntext
    text .t
    bindtags .t {.t Ntext . all}

See __[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags)__ for more information\.

# <a name='seealso'></a>SEE ALSO

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags),
[ntextBindings](ntextBindings\.md), [ntextIndent](ntextIndent\.md),
[ntextWordBreak](ntextWordBreak\.md),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)

# <a name='keywords'></a>KEYWORDS

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)
