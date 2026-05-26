
[//000000001]: # (ntextIndent \- ntext Indentation for the Text Widget)
[//000000002]: # (Generated from file 'ntextIndent\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ntextIndent\(n\) 1\.0 tklib "ntext Indentation for the Text Widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ntextIndent \- ntext Indentation for the Text Widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [CONFIGURATION OPTIONS](#section3)

  - [INDENTING DISPLAY LINES](#section4)

  - [FUNCTIONS](#section5)

  - [BUGS](#section6)

  - [EXAMPLES](#section7)

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

# <a name='description'></a>DESCRIPTION

The __[ntext](ntext\.md)__ package provides a binding tag named *Ntext*
for use by text widgets in place of the default *Text* binding tag\.

Tk's text widget may be configured to wrap lines of text that are longer than
the width of the text area, a feature that is familiar from text editors and
word processors\. A complete line of text \(delimited by newlines, or by the
beginning or end of the document\) is called a "logical line"\. When a logical
line is wrapped onto more than one line of the display area, these fragments of
the logical line are called "display lines"\.

If a logical line begins with whitespace, then wrapped display lines begin
further to the left than the first display line, which can make the text layout
untidy and difficult to read\. The *Ntext* binding tag provides facilities so
that a text widget in *\-wrap* *word* mode will automatically indent display
lines \(other than the first\) to match the initial whitespace of the first
display line\.

This indentation is available to text widgets only in *\-wrap* *word* mode\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::ntext::new\_textCopy__ *pathName*

    Replacement for ::tk\_textCopy\.

  - <a name='2'></a>__::ntext::new\_textCut__ *pathName*

    Replacement for ::tk\_textCut that also maintains *Ntext* indentation\.

  - <a name='3'></a>__::ntext::new\_textPaste__ *pathName*

    Replacement for ::tk\_textPaste that also maintains *Ntext* indentation\.

  - <a name='4'></a>__::ntext::syncIndentColor__ *pathName*

    Command to apply the current value of the variable
    __::ntext::indentColor__ to existing lines in a text widget\. This
    command is useful if a text widget has been created, text has been inserted
    in the widget, *and then* the value of __::ntext::indentColor__ is
    changed\.

# <a name='section3'></a>CONFIGURATION OPTIONS

The behavior of *Ntext* may be configured application\-wide by setting the
values of a number of namespace variables:

__::ntext::classicWrap__

  - __0__ \- selects *Ntext* behaviour, i\.e\. display lines are indented to
    match the initial whitespace of the first display line of a logical line\.

    No other action is required if this option, and the text widget's *\-wrap*
    option, are set before any text is entered in the widget, and if text is
    entered and edited only by the mouse and keyboard\. If, instead, text is
    manipulated by the script, or if the text widget's *\-wrap* option or the
    value of __::ntext::classicWrap__ are changed while the widget holds
    text, then calls to *ntext* functions are needed to alter the indentation\.
    See the section [INDENTING DISPLAY LINES](#section4) for detailed
    instructions\.

  - __1__ \- \(default value\) selects classic *Text* behaviour, i\.e\. no
    indentation\.

__::ntext::indentColor__

  - __\{\}__ \- if the value is the empty string, then the indent of wrapped
    display lines has the same color as the widget background\.

  - *color* \- a valid Tk color to use for the indent of wrapped display lines
    \(default value *\#d9d9d9*\)\.

    Coloring is implemented with the text widget tag option *\-lmargincolor*,
    which is available from __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.6\.6
    onwards\. *Ntext* indent coloring has no effect in earlier versions of
    __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\.

    The value of __::ntext::indentColor__ will often be set at startup\. If
    the value is changed when text widgets already exist and contain text, those
    widgets can be updated by calling command __::ntext::syncIndentColor__\.

*Advanced Use*

__::ntext::newWrapRegexp__

  - the value is a regexp pattern that determines the character of a logical
    line to which display lines other than the first will be aligned\. The
    default value, __\[^\[:space:\]\]__, ensures alignment with the first
    non\-whitespace character\.

# <a name='section4'></a>INDENTING DISPLAY LINES

To use *Ntext* 's display line indentation:

  1. Set the variable __::ntext::classicWrap__ to __0__ \(default value
     is __1__\)\. This enables bindings that will preserve indentation
     whenever the user modifies the widget contents using the keyboard and
     mouse\. If the widget already holds text, call __::ntext::wrapIndent__
     to initialise indentation\.

     Further instructions apply if the program changes the widget's contents,
     wrap configuration, or indent configuration\.

  1. The program can change the text contents, e\.g\. by the \.text insert command\.
     Such a change does not trigger a window binding, so the program should
     explicitly call function __::ntext::wrapIndent__ after inserting text\.

  1. Auto\-indentation occurs only if the widget is in *\-wrap* *word* mode\.
     If the program changes to or from *\-wrap* *word* when the widget is not
     empty, it should call __::ntext::wrapIndent__ to format the widget's
     text\.

  1. If indentation is used, and then switched off by setting
     __::ntext::classicWrap__ to __1__, call __::ntext::wrapIndent__
     to remove indentation\.

# <a name='section5'></a>FUNCTIONS

__::ntext::wrapIndent__ *textWidget* ?index1? ?index2?

  - Adjust the indentation of a text widget\. Different cases are discussed
    below\.

__::ntext::wrapIndent__ *textWidget*

  - Adjust the indentation of all the text in text widget *textWidget*\.

__::ntext::wrapIndent__ *textWidget* *index1*

  - Adjust the indentation of a single logical line of a text widget \- the line
    of *textWidget* that contains the index *index1*\.

__::ntext::wrapIndent__ *textWidget* *index1* *index2*

  - Adjust the indentation of a range of logical lines of a text widget \- the
    lines of *textWidget* that contain indices *index1* to *index2*\.

*Usage*

  - __::ntext::wrapIndent__ should be called only if the script changes the
    widget's contents or display properties\. If the contents of the widget have
    been modified by the keyboard or mouse, it is not necessary for the script
    to call __::ntext::wrapIndent__ because the appropriate calls are made
    automatically by the *Ntext* bindings\.

  - The script should normally call __::ntext::wrapIndent__ if, for example,
    the script changes one of the following when the widget is not empty: the
    value of __::ntext::classicWrap__, or the widget's *\-wrap* status, or
    the widget's tab spacing, or the font size, or the widget's contents\.

  - A call of the form __::ntext::wrapIndent__ *textWidget* will always
    suffice, but if changes are needed only to certain lines, it is more
    efficient to specify those lines with the optional arguments ?index1?,
    ?index2?\.

  - If the widget is in *\-word* *wrap* mode, and if
    __::ntext::classicWrap__ is set to __0__,
    __::ntext::wrapIndent__ will apply indentation to the logical lines
    within the range specified by the function's arguments\.

  - In other cases, i\.e\. if the widget is in *\-word* *char* or *\-word*
    *none* mode, or if __::ntext::classicWrap__ is set to __1__,
    __::ntext::wrapIndent__ will remove the indentation of the logical lines
    within the range specified by the function's arguments\.

# <a name='section6'></a>BUGS

This version of __[ntext](ntext\.md)__ is intended to be compatible with
all releases of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5, 8\.6, and 8\.7, and
with the branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, and *trunk* in the
source code repository for __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any
incompatibility with any of these versions, for any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system, should be reported
as a bug\. Please report such in the category *ntext* of the [Tklib
Trackers](https://core\.tcl\-lang\.org/tklib/reportlist)\.

# <a name='section7'></a>EXAMPLES

To switch on *Ntext* 's indentation and use it in widget \.t, using the default
indent color *\#d9d9d9*:

    package require ntext
    set ::ntext::classicWrap 0
    text .t -wrap word
    bindtags .t {.t Ntext . all}

To switch on *Ntext* 's indentation and use it in widget \.t, without colored
indents:

    package require ntext
    set ::ntext::classicWrap 0
    set ::ntext::indentColor {}
    text .t -wrap word
    bindtags .t {.t Ntext . all}

To switch on *Ntext* 's indentation and use it in widget \.t, coloring the
indents black:

    package require ntext
    set ::ntext::classicWrap 0
    set ::ntext::indentColor black
    text .t -wrap word
    bindtags .t {.t Ntext . all}

To decide later to switch off *Ntext* 's indentation:

    set ::ntext::classicWrap 1
    ::ntext::wrapIndent .t

To decide later to switch *Ntext* 's indentation back on:

    set ::ntext::classicWrap 0
    ::ntext::wrapIndent .t 1.0 end

To inject some text into the widget:

    set foo [.t index end]
    .t insert end {This line was added by the script, not the keyboard!}
    ::ntext::wrapIndent .t $foo end

To change the indentation color when a widget \.t already holds text:

    set ::ntext::indentColor black
    ::ntext::syncIndentColor .t

To switch to *\-wrap* *char* mode:

    .t configure -wrap char
    ::ntext::wrapIndent .t

# <a name='seealso'></a>SEE ALSO

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags), [ntext](ntext\.md),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)

# <a name='keywords'></a>KEYWORDS

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)
