
[//000000001]: # (autoscroll \- Automatic mapping of scrollbars)
[//000000002]: # (Generated from file 'autoscroll\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (autoscroll\(n\) 1\.1 tklib "Automatic mapping of scrollbars")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

autoscroll \- Provides for a scrollbar to automatically mapped and unmapped as
needed

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Bugs, Ideas, Feedback](#section2)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl  
package require autoscroll ?1\.1?  

[__::autoscroll::autoscroll__ *scrollbar*](#1)  
[__::autoscroll::unautoscroll__ *scrollbar*](#2)  
[__::autoscroll::wrap__](#3)  
[__::autoscroll::unwrap__](#4)  

# <a name='description'></a>DESCRIPTION

This package allows scrollbars to be mapped and unmapped as needed depending on
the size and content of the scrollbars scrolled widget\. The scrollbar must be
managed by either pack or grid, other geometry managers are not supported\.

When managed by pack, any geometry changes made in the scrollbars parent between
the time a scrollbar is unmapped, and when it is mapped will be lost\. It is an
error to destroy any of the scrollbars siblings while the scrollbar is unmapped\.
When managed by grid, if anything becomes gridded in the same row and column the
scrollbar occupied it will be replaced by the scrollbar when remapped\.

This package may be used on any scrollbar\-like widget as long as it supports the
__set__ subcommand in the same style as scrollbar\. If the __set__
subcommand is not used then this package will have no effect\.

  - <a name='1'></a>__::autoscroll::autoscroll__ *scrollbar*

    Arranges for the already existing scrollbar __scrollbar__ to be mapped
    and unmapped as needed\.

  - <a name='2'></a>__::autoscroll::unautoscroll__ *scrollbar*

    Returns the named scrollbar to its original static state\.

  - <a name='3'></a>__::autoscroll::wrap__

    Arranges for all scrollbars created after this command is run to be
    automatically mapped and unmapped as needed\.

  - <a name='4'></a>__::autoscroll::unwrap__

    Turns off the automatic autoscrolling of all new scrollbars\. Does not effect
    existing scrollbars

    text .t -yscrollcommand ".scrolly set"
    scrollbar .scrolly -orient v -command ".t yview"
    pack .scrolly -side right -fill y
    pack .t -side left -fill both -expand 1
    ::autoscroll::autoscroll .scrolly

# <a name='section2'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *autoscroll* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[scroll](\.\./\.\./\.\./\.\./index\.md\#scroll),
[scrollbar](\.\./\.\./\.\./\.\./index\.md\#scrollbar)
