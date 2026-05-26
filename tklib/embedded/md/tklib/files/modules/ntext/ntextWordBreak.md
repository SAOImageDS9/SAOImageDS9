
[//000000001]: # (ntextWordBreak \- ntext Word Boundary Detection for the Text Widget)
[//000000002]: # (Generated from file 'ntextWordBreak\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ntextWordBreak\(n\) 1\.0 tklib "ntext Word Boundary Detection for the Text Widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ntextWordBreak \- ntext Word Boundary Detection for the Text Widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [CONFIGURATION OPTIONS](#section2)

  - [Advanced Use](#section3)

  - [Variables \(Advanced Use\)](#section4)

  - [Functions \(Advanced Use\)](#section5)

  - [FUNCTIONS](#section6)

  - [WORD BOUNDARY MATCHING](#section7)

  - [BUGS](#section8)

  - [EXAMPLE](#section9)

  - [See Also](#seealso)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5\-  
package require Tk 8\.5\-  
package require ntext ?1\.0?  

# <a name='description'></a>DESCRIPTION

The __[ntext](ntext\.md)__ package provides a binding tag named *Ntext*
for use by text widgets in place of the default *Text* binding tag\.

Navigation and selection in a text widget require the detection of words and
their boundaries\. The word boundary detection facilities provided by Tcl/Tk
through the *Text* binding tag are limited because they define only one class
of "word" characters and one class of "non\-word" characters\. The *Ntext*
binding tag uses more general rules for word boundary detection, that define
*two* classes of "word" characters and one class of "non\-word" characters\.

# <a name='section2'></a>CONFIGURATION OPTIONS

The behaviour of *Ntext* may be configured application\-wide by setting the
values of a number of namespace variables\. One of these is relevant to word
boundary detection:

__::ntext::classicWordBreak__

  - __0__ \- \(default value\) selects *Ntext* behaviour, i\.e\.
    platform\-independent, two classes of word characters and one class of
    non\-word characters\.

  - __1__ \- selects classic *Text* behaviour, i\.e\. platform\-dependent, one
    class of word characters and one class of non\-word characters

  - After changing this value, *Ntext* 's regexp matching patterns should be
    recalculated\. See [FUNCTIONS](#section6) for details and advanced
    configuration options\.

# <a name='section3'></a>Advanced Use

# <a name='section4'></a>Variables \(Advanced Use\)

__::ntext::tcl\_match\_wordBreakAfter__

__::ntext::tcl\_match\_wordBreakBefore__

__::ntext::tcl\_match\_endOfWord__

__::ntext::tcl\_match\_startOfNextWord__

__::ntext::tcl\_match\_startOfPreviousWord__

These variables hold the regexp patterns that are used by *Ntext* to search
for word boundaries\. If they are changed, subsequent searches are immediately
altered\. In many situations, it it unnecessary to alter the values of these
variables directly: instead call one of the functions
__::ntext::initializeMatchPatterns__, __::ntext::createMatchPatterns__\.

In the *Text* binding tag one can change the search rules by changing the
values of the global variables __tcl\_wordchars__ and
__tcl\_nonwordchars__\. The equivalent operation in the *Ntext* binding tag
is to call __::ntext::createMatchPatterns__ with appropriate arguments\.

# <a name='section5'></a>Functions \(Advanced Use\)

If a simple regexp search should prove insufficient, the following functions
\(analogous to the Tcl/Tk core's __tcl\_wordBreakAfter__ etc\) may be replaced
by the developer:

__ntext::new\_wordBreakAfter__

__ntext::new\_wordBreakBefore__

__ntext::new\_endOfWord__

__ntext::new\_startOfNextWord__

__ntext::new\_startOfPreviousWord__

# <a name='section6'></a>FUNCTIONS

Each function calculates the five regexp search patterns that define the word
boundary searches\. These values are stored in the namespace variables listed
above\.

__::ntext::initializeMatchPatterns__

  - This function is called when *Ntext* is first used, and needs to be called
    again only if the script changes the value of either
    __::ntext::classicWordBreak__ or __::tcl\_platform\(platform\)__\. The
    function is called with no arguments\. It is useful when the desired search
    patterns are the default patterns for either the *Ntext* or *Text*
    binding tag, and so are implicitly specified by the values of
    __::ntext::classicWordBreak__ and __::tcl\_platform\(platform\)__
    alone\.

__::ntext::createMatchPatterns__ *new\_nonwordchars* *new\_word1chars*
?new\_word2chars?

  - This function is useful in a wider range of situations than
    __::ntext::initializeMatchPatterns__\. It calculates the regexp search
    patterns for any case with one class of "non\-word" characters and one or two
    classes of "word" characters\.

    Each argument should be a regexp expression defining a class of characters\.
    An argument will usually be a bracket expression, but might alternatively be
    a class\-shorthand escape, or a single character\. The third argument may be
    omitted, or supplied as the empty string, in which case it is unused\.

    The first argument is interpreted as the class of non\-word characters; the
    second argument \(and the third, if present\) are classes of word characters\.
    The classes should include all possible characters and will normally be
    mutually exclusive: it is often convenient to define one class as the
    negation of the other two\.

# <a name='section7'></a>WORD BOUNDARY MATCHING

The problem of word boundary selection is a vexed one, because text is used to
represent a universe of different types of information, and there are no simple
rules that are useful for all data types or for all purposes\.

*Ntext* attempts to improve on the facilities available in classic *Text* by
providing facilities for more complex definitions of words \(with three classes
of characters instead of two\)\.

*What is a word? Why two classes of word?*

When using the modified cursor keys <Control\-Left> and <Control\-Right> to
navigate through a *Ntext* widget, the cursor is placed at the start of a
word\. A word is defined as a sequence of one or more characters from only one of
the two defined "word" classes; it may be preceded by a character from the other
"word" class or from the "non\-word" class\.

The double\-click of mouse button 1 selects a word of text, where in this case a
"word" may be as defined above, or alternatively may be a sequence of one or
more characters from the "non\-word" class of characters\.

Traditionally Tcl has defined only one word class and one non\-word class: on
Windows, the non\-word class is whitespace, and so alphanumerics and punctuation
belong to the same class\. On other platforms, punctuation is bundled with
whitespace as "non\-word" characters\. In either case, the navigation and
selection of text are unnecessarily coarse\-grained, and sometimes give unhelpful
results\.

The use of three classes of characters might make selection too fine\-grained;
but in this case, holding down the *Shift* key and double\-clicking another
word is an excellent way to select a longer range of text \(a useful binding that
Tcl/Tk has long provided but which is missing in other systems\)\.

As well as its defaults, *Ntext* permits the developer to define their own
classes of characters, or to revert to the classic *Text* definitions, or to
specify their own regexp matching patterns\.

# <a name='section8'></a>BUGS

This version of __[ntext](ntext\.md)__ is intended to be compatible with
all releases of __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ 8\.5, 8\.6, and 8\.7, and
with the branches *core\-8\-5\-branch*, *core\-8\-6\-branch*, and *trunk* in the
source code repository for __[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__\. Any
incompatibility with any of these versions, for any
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__ windowing system, should be reported
as a bug\. Please report such in the category *ntext* of the [Tklib
Trackers](https://core\.tcl\-lang\.org/tklib/reportlist)\.

# <a name='section9'></a>EXAMPLE

To use *Ntext* with Tcl/Tk's usual word\-boundary detection rules:

    package require ntext
    text .t
    bindtags .t {.t Ntext . all}
    set ::ntext::classicWordBreak 1
    ::ntext::initializeMatchPatterns

See bindtags for more information\.

To define a different set of word\-boundary detection rules:

    package require ntext
    text .t
    bindtags .t {.t Ntext . all}
    ::ntext::createMatchPatterns  {[[:space:][:cntrl:]]} {[[:punct:]]} {[^[:punct:][:space:][:cntrl:]]}

See regexp, re\_syntax for more information\.

# <a name='seealso'></a>SEE ALSO

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags), [ntext](ntext\.md),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)

# <a name='keywords'></a>KEYWORDS

[bindtags](\.\./\.\./\.\./\.\./index\.md\#bindtags),
[re\_syntax](\.\./\.\./\.\./\.\./index\.md\#re\_syntax),
[regexp](\.\./\.\./\.\./\.\./index\.md\#regexp), [text](\.\./\.\./\.\./\.\./index\.md\#text)
