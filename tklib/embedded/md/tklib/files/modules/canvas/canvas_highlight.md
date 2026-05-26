
[//000000001]: # (canvas::highlight \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_highlight\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::highlight\(n\) 0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::highlight \- Manage the highlighting of canvas items or item groups

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Highlight callback](#subsection1)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::highlight ?0\.1?  

[__::canvas::highlight__ __on__ *canvas* *tagOrId* *cmd*](#1)  
[__::canvas::highlight__ __off__ *canvas* *tagOrId*](#2)  
[__\{\*\}cmd__ __on__ *canvas* *item*](#3)  
[__\{\*\}cmd__ __off__ *canvas* *clientdata*](#4)  

# <a name='description'></a>DESCRIPTION

This package provides utility commands for setting up and tearing down of
highlights for canvas items or item groups, the latter identified by a tag\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::highlight__ __on__ *canvas* *tagOrId* *cmd*

    This command sets up a general highlight, with the items of canvas
    *canvas* to highlight in this manner identified by *tagOrId* and the
    *cmd* prefix providing the implementation, i\.e\. the how to perform the
    highlight\.

    The signature of the command prefix is described later, in section
    [Highlight callback](#subsection1)\.

    The result of the command is the empty string\.

    Limitations:

      1. When a highlight is active no other highlight can be activated\. This
         means that nested highlights are not possible\.

      1. The system may break if a highlight is removed from within its
         highlight callback\.

  - <a name='2'></a>__::canvas::highlight__ __off__ *canvas* *tagOrId*

    This command removes any highlight set on the items of canvas *canvas*
    identified by *tagOrId*\.

    The result of the command is the empty string\.

## <a name='subsection1'></a>Highlight callback

The highlight callback is a command prefix invoked in the following two ways:

  - <a name='3'></a>__\{\*\}cmd__ __on__ *canvas* *item*

    This form is invoked when the mouse has entered \(one of\) the item\(s\) the
    highlight was set up for\. The callback now has to perform any
    reconfiguration necessary to highlight the item \(group\)\.

    The result of the command can be anything\. It is stored by the system as
    client information and passed unchanged to the un\-highlight callback for its
    use\. In this manner the highlight callback is able to maintain custom state
    from highlighting to un\-highlighting\.

    Note that the callback does not have to maintain state, nor does it have to
    actually reconfigure the item \(group\)\. In the latter case the callback
    simply serves as easy enter/leave notification\.

  - <a name='4'></a>__\{\*\}cmd__ __off__ *canvas* *clientdata*

    This form is invoked when the mouse has left \(one of\) the item\(s\) of the
    currently active the highlight\. The callback now has to perform any
    reconfiguration necessary to un\-highlight the item \(group\)\.

    The result of the command must be a boolean value with the usual value to be
    __true__\. By returning __false__ instead the callback can veto the
    removal of the highlight\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas), [enter
callback](\.\./\.\./\.\./\.\./index\.md\#enter\_callback),
[highlighting](\.\./\.\./\.\./\.\./index\.md\#highlighting), [leave
callback](\.\./\.\./\.\./\.\./index\.md\#leave\_callback)
