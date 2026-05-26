
[//000000001]: # (cursor \- Tk cursor routines)
[//000000002]: # (Generated from file 'cursor\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; Jeffrey Hobbs <jeff@hobbs\.org>)
[//000000004]: # (cursor\(n\) 0\.3\.1 tklib "Tk cursor routines")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

cursor \- Procedures to handle CURSOR data

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tk  
package require cursor ?0\.3\.1?  

[__::cursor::propagate__ *widget* *cursor*](#1)  
[__::cursor::restore__ *widget* ?*cursor*?](#2)  
[__::cursor::display__ ?*parent*?](#3)  

# <a name='description'></a>DESCRIPTION

The __cursor__ package provides commands to handle Tk cursors\.

# <a name='section2'></a>COMMANDS

The following commands are available:

  - <a name='1'></a>__::cursor::propagate__ *widget* *cursor*

    Sets the cursor for the specified *widget* and all its descendants to
    *cursor*\.

  - <a name='2'></a>__::cursor::restore__ *widget* ?*cursor*?

    Restore the original or previously set cursor for the specified *widget*
    and all its descendants\. If *cursor* is specified, that will be used if on
    any widget that did not have a preset cursor \(set by a previous call to
    __::cursor::propagate__\)\.

  - <a name='3'></a>__::cursor::display__ ?*parent*?

    Pops up a dialog with a listbox containing all the cursor names\. Selecting a
    cursor name will display it in that dialog\. This is simply for viewing any
    available cursors on the platform\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *cursor* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='seealso'></a>SEE ALSO

Tk\_GetCursor\(3\), cursors\(n\), options\(n\)

# <a name='keywords'></a>KEYWORDS

[cursor](\.\./\.\./\.\./\.\./index\.md\#cursor)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; Jeffrey Hobbs <jeff@hobbs\.org>
