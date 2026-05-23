
[//000000001]: # (shtmlview \- Basic HTML and Markdown viewer)
[//000000002]: # (Generated from file 'shtmlview\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy;)
[//000000004]: # (shtmlview\(n\) 1\.1\.0 tklib "Basic HTML and Markdown viewer")

<hr> [ <a href="../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../toc.md">Table Of Contents</a> &#124; <a
href="../../../index.md">Keyword Index</a> &#124; <a
href="../../../toc0.md">Categories</a> &#124; <a
href="../../../toc1.md">Modules</a> &#124; <a
href="../../../toc2.md">Applications</a> ] <hr>

# NAME

shtmlview \- Basic HTML and Markdown viewer application

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

      - [COMMAND LINE](#subsection1)

  - [Beyond HTML](#section2)

  - [BUGS, IDEAS, FEEDBACK](#section3)

  - [Bugs, Ideas, Feedback](#section4)

  - [Keywords](#keywords)

  - [Category](#category)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__](#1)  
[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-help__](#2)  
[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-version__](#3)  
[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-render__ *text*](#4)  
[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-render__ __\-__](#5)  
[__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ *filename*](#6)  

# <a name='description'></a>DESCRIPTION

The application described by this document,
__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__, is a simple viewer
for HTML files\. Further supported are documents written in
*[Markdown](\.\./\.\./\.\./index\.md\#markdown)*,
*[doctools](\.\./\.\./\.\./index\.md\#doctools)*, or
*[mkdoc](\.\./\.\./\.\./index\.md\#mkdoc)* format, if various supporting packages
are available\. See section [Beyond HTML](#section2)\.

## <a name='subsection1'></a>COMMAND LINE

  - <a name='1'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__

  - <a name='2'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-help__

    Prints usage information to standard error\.

  - <a name='3'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-version__

    Prints the application version to standard output\.

  - <a name='4'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-render__ *text*

    Displays the provided text in a viewer window\. Treats the text as Markdown
    except if it starts with a recognized HTML tag\. In that case it assumes and
    renders as HTML\.

  - <a name='5'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ __\-\-render__ __\-__

    As before, except it reads the text to render from standard input\.

  - <a name='6'></a>__[shtmlview](\.\./modules/shtmlview/shtmlview\.md)__ *filename*

    Reads and renders the named file in a viewer widget\.

# <a name='section2'></a>Beyond HTML

Documents in any other format than HTML require the presence of various
supporting packages to enable the application to display them\.

  - Markdown

      * __[Markdown](\.\./\.\./\.\./index\.md\#markdown)__

  - doctools

      * __shtmlview::doctools__

      * __dtplite__

  - mkdoc

      * __shtmlview::mkdoc__

      * __mkdoc::mkdoc__

# <a name='section3'></a>BUGS, IDEAS, FEEDBACK

This document, and the application it describes, will undoubtedly contain bugs
and other problems\. Please report such in the category *shtmlview* of the
[Tklib Trackers](https://core\.tcl\-lang\.org/tklib/ticket)\. Please also report
any ideas for enhancements you may have for either application and/or
documentation\.

# <a name='section4'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *shtmlview* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[doctools](\.\./\.\./\.\./index\.md\#doctools), [html](\.\./\.\./\.\./index\.md\#html),
[markdown](\.\./\.\./\.\./index\.md\#markdown),
[mkdoc](\.\./\.\./\.\./index\.md\#mkdoc), [viewer](\.\./\.\./\.\./index\.md\#viewer)

# <a name='category'></a>CATEGORY

Document display

# <a name='copyright'></a>COPYRIGHT

Copyright &copy;
