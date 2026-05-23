
[//000000001]: # (ico \- Windows ICO handling)
[//000000002]: # (Generated from file 'ico\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ico\(n\) 1\.1\.3 tklib "Windows ICO handling")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ico \- Reading and writing windows icons

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

  - [EXAMPLE](#section3)

  - [LIMITATIONS](#section4)

  - [Bugs, Ideas, Feedback](#section5)

  - [Keywords](#keywords)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require ico ?1\.1\.3?  

[__::ico::icons__ *file* ?*option* *value*\.\.\.?](#1)  
[__::ico::iconMembers__ *file* *name* ?*option* *value*\.\.\.?](#2)  
[__::ico::getIcon__ *file* *name* ?*option* *value*\.\.\.?](#3)  
[__::ico::getIconByName__ *file* *name* ?*option* *value*\.\.\.?](#4)  
[__::ico::getFileIcon__ *file* ?*option* *value*\.\.\.?](#5)  
[__::ico::writeIcon__ *file* *name* *depth* *data* ?*option* *value*\.\.\.?](#6)  
[__::ico::copyIcon__ *file* *index* *file2* *index2* ?*option* *value*\.\.\.?](#7)  
[__::ico::EXEtoICO__ *file* ?dir?](#8)  
[__::ico::clearCache__ ?file?](#9)  
[__::ico::transparentColor__ *image* *color*](#10)  
[__::ico::Show__ *file* ?*option* *value*\.\.\.?](#11)  

# <a name='description'></a>DESCRIPTION

This package provides functions for reading and writing Windows icons from ICO,
EXE, DLL, ICL, and BMP files\. As used in this module an icon is a visual
representation of an object\. An icon consists of one or more images usually with
varying resolution and color depth\. Each icon and image has a resource
identifier which may be a text string or a positive integer value\. Most commands
use this identifier to specify which icon or image to operate on\.

# <a name='section2'></a>API

  - <a name='1'></a>__::ico::icons__ *file* ?*option* *value*\.\.\.?

    Returns a list of icons found in *file* where each element is the name or
    numeric ID\. Recognizes the following options:

      * __\-type__ fileFormat

  - <a name='2'></a>__::ico::iconMembers__ *file* *name* ?*option* *value*\.\.\.?

    Returns a list of images that make up the icon with ID *name*\. Each
    element is itself a sublist in the format \{name width height bpp\}\.
    Recognizes the following options:

      * __\-type__ fileFormat

  - <a name='3'></a>__::ico::getIcon__ *file* *name* ?*option* *value*\.\.\.?

    Extracts the icon with ID *name* from *file*\. The default
    __\-format__ is __image__ which will return the name of a Tk image
    containing the icon\. The resolution and color depth are selected with the
    ?\-res?, ?\-bpp?, and ?\-exact? options\. If \-exact is specified and there is no
    exact match, an error is thrown\. Optionally __\-image__ may be used to
    specify the name of the Tk image that is created\. If __\-format__ is
    __colors__ then a list of color names in the \#RRGGBB format is returned\.
    Each list element is a horizontal row\. Each horizontal row contains a list
    of colors for all the pixels in that row from left to right\. If
    __\-format__ is __name__ then the resource name of the image chosen
    is returned\. This is useful for calling writeIcon or getIconByName\.
    Recognizes the following *option*s\.

      * __\-type__ fileFormat

      * __\-format__ value

      * __\-image__ value

      * __\-res__ value

      * __\-bpp__ value

      * __\-exact__ value

  - <a name='4'></a>__::ico::getIconByName__ *file* *name* ?*option* *value*\.\.\.?

    Extracts the image with ID *name* from *file*\. This name should be the
    name of a specific image as returned by __::ico::iconMembers__, not an
    icon name returned from __::ico::icons__\. If there is no matching
    resource ID in *file* an error is thrown\. Recognizes the following
    options:

      * __\-type__ fileFormat

      * __\-format__ value

  - <a name='5'></a>__::ico::getFileIcon__ *file* ?*option* *value*\.\.\.?

    This command is only functional when running under Windows\. It reads the
    Windows registry to determine the display icon for *file* as it would
    appear in Explorer or similar\. *file* does not need to exist and may also
    be specified as a file extension with a leading dot\. If *file* is a
    directory or you specify the special name __Folder__ then the icon
    representing a folder is returned\. This command takes the same arguments and
    usage as __getIcon__:

      * __\-format__ value

      * __\-image__ value

      * __\-res__ value

      * __\-bpp__ value

      * __\-exact__ value

  - <a name='6'></a>__::ico::writeIcon__ *file* *name* *depth* *data* ?*option* *value*\.\.\.?

    Writes an image to *file*\. *name* is the resource identifier of the
    image in *file* to write\. When writing to an EXE, DLL, or ICL file you may
    only overwrite existing icons with an icon of the same dimensions and color
    depth\. No icons may be added to these file types\.

    When writing to BMP the name is ignored as this type can contain only one
    image\. This means if the file already existed it is completely overwritten\.

    When writing to an ICO or ICODATA file if the name specified does not exist
    then an image is appended and will be named the next in sequence \(the
    specified name is ignored\)\. Images in ICO and ICODATA files may be
    overwritten with differing dimensions or color depths\. Note that you will
    get strange results when displaying icons if you fail to change every image
    which makes up a given icon\.

      * integer *depth* \(in\)

        This argument must have a value of __1__, __4__, __8__,
        __24__, or __32__\. If *data* has more colors than the color
        depth allows an error will be generated\.

      * options *data* \(in\)

        This argument is either a list of colors in the format returned by
        __::ico::getIcon \-format colors__ or the name of a Tk image\.

    Recognizes the following *option*s\.

      * __\-type__ fileFormat

  - <a name='7'></a>__::ico::copyIcon__ *file* *index* *file2* *index2* ?*option* *value*\.\.\.?

    Copies the icon at *index* in *file* to *index2* in *file2*\.

      * __\-fromtype__ fileFormat

      * __\-totype__ fileFormat

  - <a name='8'></a>__::ico::EXEtoICO__ *file* ?dir?

    Extracts all icons from the executable *file* to ICO files placed in
    *dir*\. ?dir? defaults to the directory *file* is located in\. Icon files
    will be named in the form *file*\-ID\.ico where ID is the icon resource
    identifier\.

      * __\-type__ fileFormat

  - <a name='9'></a>__::ico::clearCache__ ?file?

    The __::ico::getIconList__ command caches icon offsets inside EXE, DLL,
    ICL, and ICO files in order to speed up extraction\. This command clears that
    cache for the specific ?file? or all files\.

  - <a name='10'></a>__::ico::transparentColor__ *image* *color*

    If *image* is a single word it is assumed to be the name of a Tk image\.
    All pixels matching *color* in the *image* will be set transparent\.
    Alternatively, *image* may be a color list in which case a modified list
    is returned\.

  - <a name='11'></a>__::ico::Show__ *file* ?*option* *value*\.\.\.?

    Application level command which displays a window showing all the icons in
    *file* and their name\.

      * __\-type__ fileFormat

      * __\-parent__ pathName

# <a name='section3'></a>EXAMPLE

    button .explore -image [::ico::getIcon explorer.exe 0 -name explore -res 16 -bpp 8]

    set i [lsearch -inline [::ico::iconMembers tclkit.exe 0] {* 32 32 8}]
    set colorlist [::ico::getIconByName tclkit.exe [lindex $i 0] -format colors]

# <a name='section4'></a>LIMITATIONS

Icons may not be added or removed from file types other than ICO\. Icons in these
files may only be replaced with icons of the same dimensions and color depth\.

Icons of 8bpp or lower must include black in the pallete, this means if your
icon does not have black in it, you will need to leave a color free so that it
may be included by writeIcon\.

There is currently no way to read alpha channel information from 32bpp icons\.

Tk images do not have an alpha channel so the only way to write a true 32bpp
icon is from a color list\. writing a 32bpp icon from a Tkimage is identical to
writing a 24bpp icon\.

# <a name='section5'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *ico* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[dll](\.\./\.\./\.\./\.\./index\.md\#dll), [entry](\.\./\.\./\.\./\.\./index\.md\#entry),
[exe](\.\./\.\./\.\./\.\./index\.md\#exe), [ico](\.\./\.\./\.\./\.\./index\.md\#ico),
[icon](\.\./\.\./\.\./\.\./index\.md\#icon)
