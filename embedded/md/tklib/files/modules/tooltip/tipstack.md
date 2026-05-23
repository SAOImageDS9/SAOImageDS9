
[//000000001]: # (tipstack \- Tooltip management)
[//000000002]: # (Generated from file 'tipstack\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2003 ActiveState Corp)
[//000000004]: # (tipstack\(n\) 1\.0\.1 tklib "Tooltip management")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

tipstack \- Stacked tooltips

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require msgcat 1\.3  
package require tooltip ?1\.7?  
package require tipstack ?1\.0\.1?  

[__::tipstack::push__ *widget* ?__\-index__ *index*? *text*](#1)  
[__::tipstack::pop__ *widget* ?__\-index__ *index*?](#2)  
[__::tipstack::clear__ *widget* ?__\-index__ *index*?](#3)  
[__::tipstack::def__ *widget* *text* \.\.\.](#4)  
[__::tipstack::defsub__ *base* *widget* *text* \.\.\.](#5)  
[__::tipstack::clearsub__ *base*](#6)  

# <a name='description'></a>DESCRIPTION

This package extends the functionality of package
__[tooltip](tooltip\.md)__\. It provides a dynamic stack of tip texts per
widget\. This enables dynamic transient changes to the tips, for example to
temporarily replace a standard explanation of a field with an error message\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::tipstack::push__ *widget* ?__\-index__ *index*? *text*

    Push a new *text* to the tooltip for the *widget*\. In case of a list
    widget use

        -index ...

    to address the particular entry to change the tooltip for\.

    The result of the command is the empty string

  - <a name='2'></a>__::tipstack::pop__ *widget* ?__\-index__ *index*?

    Pop the current tooltip for the *widget* from the stack and restore the
    previous text\. This is a no\-operation if this would leave an empty stack
    behind\. In other words, the baseline tooltip text cannot be popped of\. In
    case of a list widget use

        -index ...

    to address the particular entry to change the tooltip for\.

    The result of the command is the empty string

  - <a name='3'></a>__::tipstack::clear__ *widget* ?__\-index__ *index*?

    Clear the stack for the *widget* and restore back to the baseline\. In case
    of a list widget use

        -index ...

    to address the particular entry to change the tooltip for\.

    The result of the command is the empty string

  - <a name='4'></a>__::tipstack::def__ *widget* *text* \.\.\.

    Perform multiple pushes for a number of independent *widget*s in a single
    call\. This command cannot be used for list widgets, as it does not allow the
    passing of the necessary index information\. Use with menus is not possible
    either\.

    The result of the command is the empty string

  - <a name='5'></a>__::tipstack::defsub__ *base* *widget* *text* \.\.\.

    This command is a variant of __::tipstack::def__ where all the widgets
    to push to are subwidgets of the *base*\. This is good for mega\-widgets\.

    Note that either each *widget* has to be specified with a proper leading
    dot \(__\.__\), or the *base* has to be specigfied with a trailing dot\.

    The result of the command is the empty string

  - <a name='6'></a>__::tipstack::clearsub__ *base*

    This command is a variant of __::tipstack::clear__ which clears all
    child widgets of the *base* text was pushed to\. Use with menus is not
    possible\.

    The result of the command is the empty string

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *tooltip* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[balloon](\.\./\.\./\.\./\.\./index\.md\#balloon),
[help](\.\./\.\./\.\./\.\./index\.md\#help), [hover](\.\./\.\./\.\./\.\./index\.md\#hover),
[tipstack](\.\./\.\./\.\./\.\./index\.md\#tipstack)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2003 ActiveState Corp
