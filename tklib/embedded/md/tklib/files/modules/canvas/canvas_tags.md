
[//000000001]: # (canvas::tag \- Variations on a canvas)
[//000000002]: # (Generated from file 'canvas\_tags\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (canvas::tag\(n\) 0\.1 tklib "Variations on a canvas")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

canvas::tag \- Easier management of the tags on canvas items or item groups

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require canvas::tag ?0\.1?  

[__::canvas::tag__ __append__ *canvas* *tagOrId* *tag*\.\.\.](#1)  
[__::canvas::tag__ __prepend__ *canvas* *tagOrId* *tag*\.\.\.](#2)  
[__::canvas::tag__ __append__ *canvas* *tagOrId* *index* *tag*\.\.\.](#3)  
[__::canvas::tag__ __remove__ *canvas* *tagOrId* *tag*\.\.\.](#4)  
[__::canvas::tag__ __match__ *canvas* *tagOrId* *pattern*](#5)  

# <a name='description'></a>DESCRIPTION

This package provides utility commands for easier management of the tag lists
associated with canvas items or item groups\.

The problem with the existing canvas API is that a tag list can only be set as a
whole, making adding and removing of tags from such lists relatively complex
operations reading the current tag list, modifying it, and then writing the
changed list back\.

The commands provided by this package hide all this complexity from the user\.

# <a name='section2'></a>API

  - <a name='1'></a>__::canvas::tag__ __append__ *canvas* *tagOrId* *tag*\.\.\.

    This command adds the tags *tag*\.\.\. to the tag list for the items
    identified by the *tagOrId* in the *canvas* widget\. The new tags are
    added at the end of the list\.

    The result of the command is the empty string\.

  - <a name='2'></a>__::canvas::tag__ __prepend__ *canvas* *tagOrId* *tag*\.\.\.

    This command adds the tags *tag*\.\.\. to the tag list for the items
    identified by the *tagOrId* in the *canvas* widget\. The new tags are
    added at the beginning of the list\.

    The result of the command is the empty string\.

  - <a name='3'></a>__::canvas::tag__ __append__ *canvas* *tagOrId* *index* *tag*\.\.\.

    This command adds the tags *tag*\.\.\. to the tag list for the items
    identified by the *tagOrId* in the *canvas* widget\. The new tags are
    inserted before the element at *index*\.

    *index* __0__ refers to the beginning of the list\.

    *index* __end__ refers to after the end of the list\.

    The result of the command is the empty string\.

  - <a name='4'></a>__::canvas::tag__ __remove__ *canvas* *tagOrId* *tag*\.\.\.

    This command removes the named tags *tag*\.\.\. from the tag list for the
    items identified by the *tagOrId* in the *canvas* widget\.

    The result of the command is the empty string\.

  - <a name='5'></a>__::canvas::tag__ __match__ *canvas* *tagOrId* *pattern*

    This command finds all tags for the items identified by the *tagOrId* in
    the *canvas* widget which match the glob *pattern*\.

    The result of the command is a list of the matching tags\. Which may be
    empty\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *canvas* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[append tag](\.\./\.\./\.\./\.\./index\.md\#append\_tag),
[canvas](\.\./\.\./\.\./\.\./index\.md\#canvas), [insert
tag](\.\./\.\./\.\./\.\./index\.md\#insert\_tag), [remove
tag](\.\./\.\./\.\./\.\./index\.md\#remove\_tag), [tags](\.\./\.\./\.\./\.\./index\.md\#tags)
