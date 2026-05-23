
[//000000001]: # (notifywindow \- notifywindow)
[//000000002]: # (Generated from file 'notifywindow\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2015 Kevin Walzer/WordTech Communications LLC <kw@codebykevin\.com>)
[//000000004]: # (notifywindow\(n\) 1\.0\.1 tklib "notifywindow")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

notifywindow \- Provides unobtrusive window for alerts/notifications from Tk
applications

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [ACKNOWLEDGMENTS](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

package require tk  
package require notifywindow ?1\.0\.1?  

[__::notifywindow::notifywindow__ *msg* *img*](#1)  
[__::notifywindow::demo__](#2)  

# <a name='description'></a>DESCRIPTION

This package provides a low\-key, unobtrusive window for alerts and notifications
from Tk applications that briefly appears in the upper\-right hand corner of the
screen\. Modeled after the "Growl" framework on Mac OS X, the window fades in and
out on platforms that support such effects, and appears and disappears on other
platforms\.

  - <a name='1'></a>__::notifywindow::notifywindow__ *msg* *img*

    Posts the toplevel notification window with the *msg* string, which should
    not exceed 40 characters, and an optional image, which should be 16x16
    pixels\.

  - <a name='2'></a>__::notifywindow::demo__

    Simple demo that illustrates how the package works\.

# <a name='section2'></a>ACKNOWLEDGMENTS

While __notifywindow__ was inspired by the Growl notification package for
Mac OS X, it shares no code with that project whatsoever\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *notifywindow* of the
[Tklib Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report
any ideas for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[alert](\.\./\.\./\.\./\.\./index\.md\#alert),
[notification](\.\./\.\./\.\./\.\./index\.md\#notification),
[tk](\.\./\.\./\.\./\.\./index\.md\#tk)

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2015 Kevin Walzer/WordTech Communications LLC <kw@codebykevin\.com>
