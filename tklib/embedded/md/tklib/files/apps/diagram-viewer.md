
[//000000001]: # (diagram\-viewer \- Documentation toolbox)
[//000000002]: # (Generated from file 'diagram\-viewer\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (Copyright &copy; 2010 Andreas Kupries <andreas\_kupries@users\.sourceforge\.net>)
[//000000004]: # (diagram\-viewer\(n\) 1\.0 tklib "Documentation toolbox")

<hr> [ <a href="../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../toc.md">Table Of Contents</a> &#124; <a
href="../../../index.md">Keyword Index</a> &#124; <a
href="../../../toc0.md">Categories</a> &#124; <a
href="../../../toc1.md">Modules</a> &#124; <a
href="../../../toc2.md">Applications</a> ] <hr>

# NAME

diagram\-viewer \- Lightweight Diagram Processor

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

      - [USE CASES](#subsection1)

      - [COMMAND LINE](#subsection2)

  - [BUGS, IDEAS, FEEDBACK](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Category](#category)

  - [Copyright](#copyright)

# <a name='synopsis'></a>SYNOPSIS

[__diagram\-viewer__ __show__ *inputfile*\.\.\.](#1)  
[__diagram\-viewer__ __convert__ __\-o__ *output* *format* *inputfile*\.\.\.](#2)  

# <a name='description'></a>DESCRIPTION

The application described by this document, __diagram\-viewer__, is a
lightweight processor for tklib diagram files

__diagram\-viewer__ is based upon the package
__[diagram](\.\./modules/diagrams/diagram\.md)__\. See it for examples and
language reference\.

## <a name='subsection1'></a>USE CASES

__diagram\-viewer__ was written with the following two use cases in mind\.

  1. Processing and display of one or more diagram files\.

  1. Batch conversion of one or more diagram files into raster image files\.

## <a name='subsection2'></a>COMMAND LINE

  - <a name='1'></a>__diagram\-viewer__ __show__ *inputfile*\.\.\.

    This is the form for use case \[1\]\. The application opens a gui showing the
    list of input files to the left, allowing the user to choose which of them
    to render to the canvas on the right\.

  - <a name='2'></a>__diagram\-viewer__ __convert__ __\-o__ *output* *format* *inputfile*\.\.\.

    This is the form for use case \[2\]\. The application converts the input files
    into raster image of the specified *format*\.

      * path *output* \(in\)

        This argument specifies where to write the generated image\. It can be
        the path to a file or directory\.

        If the *output* does not exist then \[file dirname $output\] has to
        exist and must be a writable directory\.

        In case of multiple input files the generated image will be written to a
        file in the directory, and the name of that file will be derived from
        the *inputfile*, and *format*\.

        In case of a single input file the generated image will be written to
        the file\.

      * \(handle\) *format* \(in\)

        This argument specifies the image format to convert the diagrams into
        when processing the input\. The application recognizes all formats
        supported by the __Img__ package, i\.e\. for which it can load a
        package __img::__format____ \(together with
        __[canvas::snap](\.\./modules/canvas/canvas\_snap\.md)__\), and all
        formats for which it can load a package __canvas::__format____\.
        These are \(currently\) __mvg__, and __pdf__\.

      * path *inputfile* \(in\)

        This argument specifies the path to the diagram file to process\. It has
        to exist, must be readable, and written in
        *[diagram](\.\./\.\./\.\./index\.md\#diagram)* format\.

# <a name='section2'></a>BUGS, IDEAS, FEEDBACK

This document, and the application it describes, will undoubtedly contain bugs
and other problems\. Please report such in the category *diagram* of the
[Tcllib SF Trackers](http://sourceforge\.net/tracker/?group\_id=12883)\. Please
also report any ideas for enhancements you may have for either application
and/or documentation\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *diagram* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./index\.md\#canvas),
[conversion](\.\./\.\./\.\./index\.md\#conversion),
[diagram](\.\./\.\./\.\./index\.md\#diagram), [vector](\.\./\.\./\.\./index\.md\#vector)

# <a name='category'></a>CATEGORY

Documentation tools

# <a name='copyright'></a>COPYRIGHT

Copyright &copy; 2010 Andreas Kupries <andreas\_kupries@users\.sourceforge\.net>
