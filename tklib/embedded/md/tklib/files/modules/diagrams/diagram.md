
[//000000001]: # (diagram \- Documentation toolbox)
[//000000002]: # (Generated from file 'diagram\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (diagram\(n\) 0\.3 tklib "Documentation toolbox")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

diagram \- Diagram drawing

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [API](#section2)

      - [Class API](#subsection1)

      - [Object API](#subsection2)

  - [Language Reference](#section3)

      - [Elements](#subsection3)

      - [Attributes](#subsection4)

      - [Corners](#subsection5)

      - [Named directions](#subsection6)

      - [Miscellaneous Commands](#subsection7)

      - [Variables](#subsection8)

  - [Diagram Classes](#section4)

  - [References](#section5)

  - [Bugs, Ideas, Feedback](#section6)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.5  
package require Tk 8\.5  
package require diagram 1  

[__::diagram__ *objectName* *canvas* ?*script*?](#1)  
[*diagramObject* __new direction__ *name* ?*key* *value*\.\.\.?](#2)  
[*diagramObject* __new element__ *name* *attributes* *cmdprefix*](#3)  
[*diagramObject* __new alias__ *name* *cmdprefix*](#4)  
[*diagramObject* __new command__ *name* *arguments* *body*](#5)  
[*diagramObject* __new attribute__ *name* ?*key* *value*\.\.\.?](#6)  
[*diagramObject* __unknown attribute__ *cmdprefix*](#7)  
[*diagramObject* __draw__ *script*](#8)  
[__[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ *attr*\.\.\.](#9)  
[__[arrow](\.\./\.\./\.\./\.\./index\.md\#arrow)__ *attr*\.\.\.](#10)  
[__\-\->__ *attr*\.\.\.](#11)  
[__<\-\->__ *attr*\.\.\.](#12)  
[__<\-\->__ *attr*\.\.\.](#13)  
[__block__ *script* *attr*\.\.\.](#14)  
[__[box](\.\./\.\./\.\./\.\./index\.md\#box)__ *attr*\.\.\.](#15)  
[__[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ *attr*\.\.\.](#16)  
[__O__ *attr*\.\.\.](#17)  
[__[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ *attr*\.\.\.](#18)  
[__<>__ *attr*\.\.\.](#19)  
[__[drum](\.\./\.\./\.\./\.\./index\.md\#drum)__ *attr*\.\.\.](#20)  
[__[ellipse](\.\./\.\./\.\./\.\./index\.md\#ellipse)__ *attr*\.\.\.](#21)  
[__[line](\.\./\.\./\.\./\.\./index\.md\#line)__ *attr*\.\.\.](#22)  
[__\-\-__ *attr*\.\.\.](#23)  
[__[move](\.\./\.\./\.\./\.\./index\.md\#move)__ *attr*](#24)  
[__[spline](\.\./\.\./\.\./\.\./index\.md\#spline)__ *attr*\.\.\.](#25)  
[__[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *attr*\.\.\.](#26)  
[__west__](#27)  
[__w__](#28)  
[__left__](#29)  
[__l__](#30)  
[__south__](#31)  
[__s__](#32)  
[__down__](#33)  
[__bottom__](#34)  
[__bot__](#35)  
[__b__](#36)  
[__east__](#37)  
[__e__](#38)  
[__right__](#39)  
[__r__](#40)  
[__north__](#41)  
[__n__](#42)  
[__up__](#43)  
[__top__](#44)  
[__t__](#45)  
[__northwest__](#46)  
[__nw__](#47)  
[__up\-left__](#48)  
[__upleft__](#49)  
[__leftup__](#50)  
[__northeast__](#51)  
[__ne__](#52)  
[__up\-right__](#53)  
[__upright__](#54)  
[__rightup__](#55)  
[__southwest__](#56)  
[__sw__](#57)  
[__down\-left__](#58)  
[__downleft__](#59)  
[__leftdown__](#60)  
[__southeast__](#61)  
[__se__](#62)  
[__down\-right__](#63)  
[__downright__](#64)  
[__rightdown__](#65)  
[*number* __cm__](#66)  
[*number* __mm__](#67)  
[*number* __inch__](#68)  
[*number* __pt__](#69)  
[*number* *number*](#70)  
[__by__ *distance* *direction*](#71)  
[*point1* __\+__ *point2*](#72)  
[*point1* __\-__ *point2*](#73)  
[*point* __by__ *distance* *direction*](#74)  
[*point1* __&#124;__ *point2*](#75)  
[*n* __between__ *poin1* *point2*](#76)  
[__intersect__ *elem1* *elem2*](#77)  
[*element* __names__ ?*pattern*?](#78)  
[*element* *corner*](#79)  
[*element* *corner1* *corner2*\.\.\.](#80)  
[*element* ?*corner1*\.\.\. ?__names__ ?*pattern*??\]?](#81)  
[____n__th__ ?*corner*?](#82)  
[____n__th__ __last__ ?*corner*?](#83)  
[____n__th__ *shape* ?*corner*?](#84)  
[____n__th__ __last__ *shape* ?*corner*?](#85)  
[__last__ ?*corner*?](#86)  
[__last__ *shape* ?*corner*?](#87)  
[__1st__](#88)  
[__2nd__](#89)  
[__3rd__](#90)  

# <a name='description'></a>DESCRIPTION

Welcome to __diagram__, a package for the easy construction of diagrams
\(sic\), i\.e\. 2D vector graphics, sometimes also called *pictures*\. Note that
this package is not a replacement for
__[Tk](\.\./\.\./\.\./\.\./index\.md\#tk)__'s canvas, but rather a layer sitting
on top of it, to make it easier to use\. In other words, using the canvas as the
core graphics engine __diagram__ abstracts away from the minutiae of
handling coordinates to position and size the drawn elements, allowing the user
to concentrate on the content of the diagram instead\.

This is similar to Brian Kernighan's PIC language for troff, which is the
spiritual ancestor of this package\.

This document contains the reference to the API and drawing \(language\) commands\.
Its intended audience are users of the package wishing to refresh their memory\.
Newcomers should read the *Diagram Language Tutorial* first\. Developers
wishing to work on the internals of the package and its supporting packages
should look at section [Diagram Classes](#section4) first, and then the
comments in the sources of the packages itself\.

In the remainder of the document we first describe the APIs of the diagram class
and its instances, followed by the language reference for the drawing language
itself\.

# <a name='section2'></a>API

## <a name='subsection1'></a>Class API

The package exports the API described here\.

  - <a name='1'></a>__::diagram__ *objectName* *canvas* ?*script*?

    The command creates a new instance of a diagram controller and returns the
    fully qualified name of the object command as its result\. The new instance
    is connected to the specified *canvas* object, which is used as the
    diagrams graphics engine\. This is usually an instance of Tk's canvas,
    however any object which is API compatible to Tk's canvas can be used here\.

    The API of this object command is described in the following section,
    [Object API](#subsection2)\. It may be used to invoke various operations
    on the object\.

    If the *script* argument is specified then method __draw__ will be
    invoked on it\.

## <a name='subsection2'></a>Object API

Instances of the diagram class support the following methods:

  - <a name='2'></a>*diagramObject* __new direction__ *name* ?*key* *value*\.\.\.?

    This method defines a new named direction and its attributes\. The latter is
    given through the *key*/*value* pairs coming after the *name*\.

    Users are mostly free to specify arbitrary attributes with whatever meaning
    they desire\. The exception are the names *angle* and *opposite*\. They
    are special to the diagram package and have a fixed meaning\.

      * angle

        This attribute specifies the angle of the direction in degrees, where 0
        points east \(to the right\) and 90 points north \(up\)\.

      * opposite

        This attribute specifies the name of the direction which should be
        considered as complementary to the named one\.

  - <a name='3'></a>*diagramObject* __new element__ *name* *attributes* *cmdprefix*

    This method defines a new graphics element for the drawing language\. I\.e\.
    *name* will become a new command in the language, and the specified
    command prefix \(*cmdprefix*\) will be called to perform the actual drawing\.

    *attributes* specifies the set of attributes for which data has to be
    available\. I\.e\. the system will run the \.\.\.\-callbacks for these attributes\.
    See the method __new attribute__ for more information on attribute
    definitions\.

    The command prefix is expected to conform to the following signature:

      * __cmdprefix__ *canvas* *attributes*

        Where *canvas* is the handle of the canvas widget to draw to, and
        *attributes* is a dictionary holding the attributes for the element,
        be they user\-specified, or defaults\.

        The results of the command has to be a list containing at least two and
        at most four items\. These are, in order:

          1. The list of canvas items the drawn element consists of\.

          1. The dictionary of named locations in the element, its *corners*\.

          1. An optional mode, either "relative" or "absolute"\. When not
             returned "relative" is assumed\. In the case of a relative element
             position the attributes "with" and "at" are used to determine the
             final position of the new element\.

          1. An optional name of a direction\. If not the empty string this is
             handed to the automatic layouter as the new direction to follow\.

  - <a name='4'></a>*diagramObject* __new alias__ *name* *cmdprefix*

    This method defines a new command for the drawing language\. I\.e\. *name*
    will become a new command in the language, and the specified command prefix
    \(*cmdprefix*\) will be called on use of this new command\. Any arguments
    given to the command are simply passed to the prefix\. There is no fixed
    siganture\.

    Note that the prefix is run in the context of the drawing language, allowing
    the direct use of any existing commands\.

  - <a name='5'></a>*diagramObject* __new command__ *name* *arguments* *body*

    This is like __new alias__ except that the new command is defined as a
    procedure in the language's context, with regular argument list and body\.

  - <a name='6'></a>*diagramObject* __new attribute__ *name* ?*key* *value*\.\.\.?

    This method defines a new named attribute which can be used by graphical
    elements\. The handling of the attribute by the processor is declared through
    the *key*/*value* pairs coming after the *name*\.

    The accepted keys and their meanings are:

      * __key__

        The value of this key is the name of the key under which the attribute's
        value shall be stored in the attribute dictionary given to the drawing
        command after attribute processing is complete\.

        This key is optional\. If it is not specified it defaults to the name of
        the attribute\.

      * __get__

        The value of this key is a command prefix which will be invoked to
        retrieve the attribute's argument\(s\) from the command line\.

        This key is optional\. If it is not specified a default is used which
        takes the single word after the attribute name as the attribute's value\.

        The signature of the command prefix is

          + __cmdprefix__ *wordqueue*

            Where *wordqueue* is the handle of a queue object conforming to
            the API of the queues provided by package __struct::queue__\.
            This queue contains the not\-yet\-processed part of the attribute
            definitions, with one entry per word, with the first entry the word
            *after* name of the attribute\. In other words, the attribute's
            name has already been removed from the queue\.

            The result of the command is the value of the attribute, which may
            have been taken from the queue, or not\.

      * __transform__

        The value of this key is a command prefix which will be invoked to
        transform the retrieved value \(See __get__\) into their final form\.

        This key is optional\. If it is not specified no transformation is done\.
        The signature of the command prefix is

          + __cmdprefix__ *value*

            Where *value* is the value to transform\.

            The result of the command is the final value of the attribute\.

      * __type__

        The value of this key is a command prefix which will be invoked to
        validate the attribute's argument\(s\)\.

        This key is optional\. If it is not specified no validation is done\.

        The signature of the command prefix is that of snit validation types\.
        See the documentation of the
        __[snit](\.\./\.\./\.\./\.\./index\.md\#snit)__ package\.

      * __merge__

        The value of this key is a command prefix which will be invoked to
        insert the transformed and validated attribute value into the dictionary
        of collected attributes\.

        This key is optional\. If it is not specified a default merge is chosen,
        based on the data for key __aggregate__, see below\. The signature of
        the command prefix is

          + __cmdprefix__ *value* *dict*

            Where *value* is the value to insert, and *dict* the dictionary
            of attributes and values collected so far\.

            The result of the command is the new dictionary of attributes\.

      * __aggregate__

        The value of this key is a boolean flag\. It has an effect if and only if
        the key __merge__ was not specified\. This key is optional\. If it is
        not specified it defaults to __False__\.

        If the key is effective, the value of __False__ means that the
        attribute's value is *set* into the dictionary using the value of key
        *key* \(see above\) as index, *overwriting* any previously specified
        value\.

        If the key is effective, the value of __True__ means that the
        attribute's value is *added* to the dictionary using the value of key
        *key* \(see above\) as index, *extending* any previously specified
        value\. This means that the final value of the attribute as seen after
        processing will be a list of the collected values\.

      * __default__

        The value of this key is a command prefix which will be invoked after
        collection of attributes has been completed and this attribute is in the
        list of required attributes for the drawing element \(See argument
        *attributes* of method __new element__\)\.

        Note that the connection is made through the value of key *key*, not
        through the attribute name per se\.

        Further note that this command prefix is invoked even if a user
        specified attribute value is present\. This allows the command to go
        beyond simply setting defaults, it can calculate and store derived
        values as well\.

        This key is optional\. If an element requires this attribute, but
        *default* is not specified then nothing will be done\.

        The signature of the command prefix is

          + __cmdprefix__ __init__

            This method is run when the attribute is defined, its responsibility
            is to initialize anything in the language namespace for the
            attribute and default processing\.

            The result of this method is ignored\.

          + __cmdprefix__ __fill__ *varname*

            This method is run to put defaults, or derived values into the
            attribute dictionary named by *varname*\. This variable will be
            found in the calling context\.

            The result of this method is ignored\.

          + __cmdprefix__ __set__ *name* *value*

            This method is run to push current a attribute value into the
            language namespace, to make it the new default\.

            The result of this method is ignored\.

      * __linked__

        This key is effective if and only if key __default__ is not
        specified\. In that case is supplies a default handling for
        __default__, linking the attribute to a variable in the language
        context\.

        The value for this key is a 2\-element list containing the name of the
        variable to link to, and its initial value, in this order\.

  - <a name='7'></a>*diagramObject* __unknown attribute__ *cmdprefix*

    This method registers the command prefix with the subsystem processing the
    attributes for element commands, telling it to call it when it encounters an
    attribute it is unable to handle on its on\.

    It is allowed to register more than callback, these will be called in order
    of registration \(i\.e\. first to last\), until one of the callbacks accepts the
    current input\. The command prefix is expected to conform to the following
    signature:

      * __cmdprefix__ *wordqueue*

        Where *wordqueue* is the handle of a queue object conforming to the
        API of the queues provided by package __struct::queue__\. This queue
        contains the not\-yet\-processed part of the attribute definitions, with
        one entry per word, with the first entry the name of the attribute which
        could not be processed\.

        The results of the command has to be a boolean value where __True__
        signals that this callback has accepted the attribute, processed it, and
        the new state of the *wordqueue* is where the general processing shall
        continue\.

        Given the signature the command has basically two ways of handling
        \(rewriting\) the attributes it recognizes:

          1. Replace the attribute \(and arguments\) with a different attribute
             and arguments\.

          1. Push additional words in front to get the general processing
             unstuck\.

  - <a name='8'></a>*diagramObject* __draw__ *script*

    This method runs the given *script* in the context of the drawing language
    definitions\. See section [Language Reference](#section3) for details on
    the available commands\.

    *Note* that *script* is *trusted*\. It is executed in the current
    interpreter with access to its full abilities\. For the execution of
    untrusted diagram scripts this interpreter should be a safe one\.

# <a name='section3'></a>Language Reference

## <a name='subsection3'></a>Elements

This section lists the commands for the predefined drawing elements, aka shapes\.
These commands are all defined in the language's context\. All commands of this
section return the handle of the newly created element as their result\. This
handle also exists as a command which can be used to query the element for its
corners \(names, values\)\. See section [Miscellaneous
Commands](#subsection7)\.
![](\.\./\.\./\.\./\.\./image/figure\-02\-basic\-shapes\.png)

  - <a name='9'></a>__[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-arc\.png) An open element with the
    corresponding corners, i\.e\. "start", "end", and "center"\. Note however that
    it also has the compass rose of closed elements as its corners, with the
    center of the arc's circle as the center of the compass and the other points
    on the circle the arc is part of\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __clockwise__

      * __cw__

        Specifies the direction of the
        __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ element, here going
        clockwise\. The complementary attribute is __counterclockwise__\. If
        not specified the system falls back to the value taken from the language
        variable __clockwise__, which itself defaults to __false__, for
        counter\-clockwise direction\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __counterclockwise__

      * __ccw__

        Specifies the direction of the
        __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ element, here
        counter\-clockwise\. The complementary attribute is __clockwise__\. If
        not specified the system falls back to the value taken from the language
        variable __clockwise__, which itself defaults to __false__, for
        counter\-clockwise direction\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __from__ *location*

        Specifies the location where the
        __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ element begins\. Defaults to
        the current location as maintained by the layouting system\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __radius__ *length*

        Specifies the radius of the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
        element, or rather, the radius of the circle the shown arc is a part of\.
        If not specified the system falls back to the value taken from the
        language variable __arcradius__, which itself defaults to the pixel
        equivalent of __1 cm__\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __to__ *location*

        Specifies the location where the
        __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ element ends\. Defaults to a
        location such that a 90\-degree arc is drawn in the chosen direction,
        starting at __from__\.

  - <a name='10'></a>__[arrow](\.\./\.\./\.\./\.\./index\.md\#arrow)__ *attr*\.\.\.

  - <a name='11'></a>__\-\->__ *attr*\.\.\.

  - <a name='12'></a>__<\-\->__ *attr*\.\.\.

  - <a name='13'></a>__<\-\->__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-arrow\.png) An alias for the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element \(see below\), with the
    attribute __arrowhead__ preset to __\->__, __<\->__, or
    __<\-__\. The __[arrow](\.\./\.\./\.\./\.\./index\.md\#arrow)__ is
    equivalent to __\-\->__\.

  - <a name='14'></a>__block__ *script* *attr*\.\.\.

    A closed element with the corresponding corners, i\.e\. the eight directions
    of the compass rose, and "center"\. The main effect is the aggregration of
    all elements created by the *script* into one element\. This also means
    that while the elements created by the script are visible in the element
    history while the script is executing, afterward the history contains only
    the block itself, and not the elements it is composed of\.

    The script has access to the current state of all variables in the language
    context\. Any changes to the variables will be reverted after execution of
    the block\. However, also, any variables set in the script will be exported
    as corners of the element, allowing users to define their own named
    locations in the block\.

    Regarding the layout mechanism any changes made by the script are reverted
    after the element is done\. In other words, a block is an implicit
    __group__\.

    Blocks handle all attributes, propgating their settings into the script as
    the default values active during script execution\.

  - <a name='15'></a>__[box](\.\./\.\./\.\./\.\./index\.md\#box)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-box\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __height__ *length*

      * __ht__ *length*

        Specifies the height of the element\. If not specified the system falls
        back to the value taken from the language variable __boxheight__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __slant__ *angle*

        Specifies the angle by which the
        __[box](\.\./\.\./\.\./\.\./index\.md\#box)__ element is slanted, in
        degrees\. If not specified the system falls back to the value taken from
        the language variable __slant__, which itself defaults to
        __90__, i\.e\. vertical, no slant\. 0 degrees is slanting straight
        east, pointing to the right\. 90 degrees is slanting to the north,
        pointing straight up\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __width__ *length*

      * __wid__ *length*

        Specifies the width of the element\. If not specified the system falls
        back to the value taken from the language variable __boxwidth__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

  - <a name='16'></a>__[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ *attr*\.\.\.

  - <a name='17'></a>__O__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-circle\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __diameter__ *length*

      * __diam__ *length*

        Specifies the diameter of the
        __[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ element, as an
        alternative way to specify its __radius__\. Effective if and only if
        the radius was not specified\. I\.e\. if both diameter and radius are
        specified then the radius infomration has precendence\. This attribute
        has no default, because the defaults are taken from the radius\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __radius__ *length*

      * __rad__ *length*

        Specifies the radius of the
        __[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ element\. If not
        specified the system falls back to the value taken from the language
        variable __circleradius__, which itself defaults to the pixel
        equivalent of __1 cm__\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

  - <a name='18'></a>__[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ *attr*\.\.\.

  - <a name='19'></a>__<>__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-diamond\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __aspect__ *number*

        Specifies the aspect ratio, i\.e ratio of width to height, of the
        __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner
        in which a default is calculated when not specified also depends on the
        specifications of the attributes __width__ and __height__, if
        any\.

        If both __width__, and __height__ are specified then any
        specification of __aspect__ is ignored, as it is implicitly defined
        in the width and height as well, and this takes precedence\. A missing
        specification is ignored in that case well, i\.e\. no defaults are
        required\.

        If the __aspect__ is specified, and one of the attributes
        __width__ or __height__, then the missing attribute is
        calculated from the two which are specified\. No defaults are required
        for these cases either\.

        If only one of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __aspect__, the
        value taken from the language variable __diamondaspect__, which
        itselfs defaults to __2__\.

        If none of of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __width__, the
        value taken from the language variable __boxwidth__, which itselfs
        defaults to the pixel equivalent of __2 cm__\. For the aspect it uses
        either the user\-specified value or the default taken as described in the
        previous paragraph\.

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __height__ *length*

        Specifies the height of the
        __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner
        in which a default is calculated when not specified also depends on the
        specifications of the attributes __aspect__ and __width__, if
        any\.

        If both __width__, and __height__ are specified then any
        specification of __aspect__ is ignored, as it is implicitly defined
        in the width and height as well, and this takes precedence\. A missing
        specification is ignored in that case well, i\.e\. no defaults are
        required\.

        If the __aspect__ is specified, and one of the attributes
        __width__ or __height__, then the missing attribute is
        calculated from the two which are specified\. No defaults are required
        for these cases either\.

        If only one of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __aspect__, the
        value taken from the language variable __diamondaspect__, which
        itselfs defaults to __2__\.

        If none of of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __width__, the
        value taken from the language variable __boxwidth__, which itselfs
        defaults to the pixel equivalent of __2 cm__\. For the aspect it uses
        either the user\-specified value or the default taken as described in the
        previous paragraph\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __width__ *length*

        Specifies the width of the
        __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner
        in which a default is calculated when not specified also depends on the
        specifications of the attributes __aspect__ and __height__, if
        any\.

        If both __width__, and __height__ are specified then any
        specification of __aspect__ is ignored, as it is implicitly defined
        in the width and height as well, and this takes precedence\. A missing
        specification is ignored in that case well, i\.e\. no defaults are
        required\.

        If the __aspect__ is specified, and one of the attributes
        __width__ or __height__, then the missing attribute is
        calculated from the two which are specified\. No defaults are required
        for these cases either\.

        If only one of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __aspect__, the
        value taken from the language variable __diamondaspect__, which
        itselfs defaults to __2__\.

        If none of of the attributes __width__ or __height__ is
        specified then the system uses a fallback for the __width__, the
        value taken from the language variable __boxwidth__, which itselfs
        defaults to the pixel equivalent of __2 cm__\. For the aspect it uses
        either the user\-specified value or the default taken as described in the
        previous paragraph\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

  - <a name='20'></a>__[drum](\.\./\.\./\.\./\.\./index\.md\#drum)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-drum\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __aspect__ *number*

        Specifies the aspect ratio, i\.e ratio of width to height, of the
        ellipses which are used to draw the top and bottom of the
        __[drum](\.\./\.\./\.\./\.\./index\.md\#drum)__ element\. If not specified
        the system falls back to the value taken from the language variable
        __drumaspect__, which itself defaults to __0\.35__\.

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __height__ *length*

      * __ht__ *length*

        Specifies the height of the element\. If not specified the system falls
        back to the value taken from the language variable __boxheight__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __width__ *length*

      * __wid__ *length*

        Specifies the width of the element\. If not specified the system falls
        back to the value taken from the language variable __boxwidth__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

  - <a name='21'></a>__[ellipse](\.\./\.\./\.\./\.\./index\.md\#ellipse)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-ellipse\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __height__ *length*

      * __ht__ *length*

        Specifies the height of the element\. If not specified the system falls
        back to the value taken from the language variable __boxheight__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __width__ *length*

      * __wid__ *length*

        Specifies the width of the element\. If not specified the system falls
        back to the value taken from the language variable __boxwidth__,
        which itself defaults to the pixel equivalent of __2 cm__\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

  - <a name='22'></a>__[line](\.\./\.\./\.\./\.\./index\.md\#line)__ *attr*\.\.\.

  - <a name='23'></a>__\-\-__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-line\.png) An open element with the
    corresponding corners, i\.e\. "start", "end", and "center"\. It handles the
    attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __arrowhead__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-19\-style\-arrowheads\.png) Specifies
        where to draw arrowheads on the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element, at the beginning
        or end, at both ends, or none\. If not specified the system falls back to
        the value taken from the language variable __arrowhead__, which
        itself defaults to __none__\. The legal values are

          + __none__, __\-__

            Draw no arrowheads, at neither end of the line\.

          + __start__, __first__, __<\-__

            Draw an arrowhead at the beginning of the line, but not at its end\.

          + __end__, __last__, __\->__

            Draw an arrowhead at the end of the line, but not at its beginning\.

          + __both__, __<\->__

            Draw arrowheads at both ends of the line\.

        Note that the values "start", "end", "\-", "\->", "<\-", and "<\->" are all
        accepted as shorthands for the __arrowhead__ command using them as
        argument\.

      * __at__ *location*

        __[Line](\.\./\.\./\.\./\.\./index\.md\#line)__ elements are normally
        positioned absolutely, using the locations specified through the
        attributes __from__, __then__, and __to__\. If __at__ is
        specified however then these positions are translated a last time,
        moving the line's corner named by the attribute __with__ to the
        location given by this attribute\.

      * __chop__ ?*length*?

        Specifies the length of the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element to remove from the
        beginning and/or end\. Defaults to nothing\. If specified once the
        chopping applies to both beginning and end of the line\. If specified
        twice or more the last two specifications are used, and applied to
        beginning and end of the line, in this order\. Whenever the attribute is
        specified without an explicit length, the system falls back to the value
        taken from the language variable __circleradius__, which itself
        defaults to the pixel equivalent of __1 cm__

      * __color__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the lines of the element\. If not specified the system
        falls back to the value taken from the language variable
        __linecolor__, which itself defaults to __black__\.

      * __fillcolor__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the
        color used to draw the inside of the element\. If not specified the
        system falls back to the value taken from the language variable
        __fillcolor__, which itself defaults to the empty string, signaling
        "no filling"\.

      * __from__ *location*

        Specifies the location where the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element begins\. Defaults
        to the current location as maintained by the layouting system\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __noturn__

        Specifies that the direction of
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element at its end is not
        propagated to the layout management\. If not specified the direction of
        the line becomes the new direction the layout\.

      * __smooth__

        Specifies the use of bezier splines for the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element\. If not specified
        lines are drawn exactly through the specified waypoints, without any
        smooth curves\.

      * __stroke__ *width*

        ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the
        width of the lines drawn for the the element, in pixels\. If not
        specified the system falls back to the value taken from the language
        variable __linewidth__, which itself defaults to __1__\.

      * __style__ *spec*

        ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
        used to draw the lines of the element\. If not specified the system falls
        back to the value taken from the language variable __linestyle__,
        which itself defaults to __solid__ lines\. The legal values are all
        those accepted by
        [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
        additionally all which are listed below:

          + __solid__, empty string

            Draw solid line\.

          + __dash__, __dashed__, __\-__

            Draw a dashed line\.

          + __dot__, __dotted__, __\.__

            Draw a dotted line\.

          + __dash\-dot__, __\-\.__

            Draw a dash\-dotted line

          + __dash\-dot\-dot__, __\-\.\.__

            Draw a dash\-dot\-dotted line\.

        Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
        "dash\-dot\-dot" are all accepted as shorthands for the __style__
        command using them as argument\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __then__ *location*

      * __then__ \(<direction> ?*length*?\)\.\.\.

      * \(<direction> ?*length*?\)\.\.\.

        This attribute specifies an intermediate location the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element has to go through\.
        It can be specified multiple times, with each use adding one additional
        location to the series which the line will go through\. These location
        will be traversed in the order they were specified\.

        The location can be given explicitly, or as a series of directions with
        distances\. In the latter case the names of all known directions are
        accepted for the direction part\. If no distance is specified for a
        direction the system falls back to the value taken from the language
        variable __movelength__, which itself defaults to the pixel
        equivalent of __2 cm__\. The whole set of direction,distance pairs is
        treated as a series of translations which are added up to provide the
        final translation specifying the intermediate point \(relative to the
        preceding point\)\.

        The last named direction is propagated to the layout system as the
        direction to follow\. The use of __noturn__ is not able to overide
        this behaviour\.

        At last, the names of the registered directions also serve as attribute
        commands, with an implicit attribute __then__ in front of them\.

        If no intermediate or last location is specified for the line the system
        falls back to a point __movelength__ pixels away from the starting
        location, in the current direction as maintained by the layouting system

      * __to__ *location*

        Specifies the location where the
        __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element ends\. This
        attribute has no default\. The default is handled by the attribute
        __then__, which makes it appear as if __to__ has a default when
        not specified\.

      * __with__ *corner*

        __[Line](\.\./\.\./\.\./\.\./index\.md\#line)__ elements are normally
        positioned absolutely, using the locations specified through the
        attributes __from__, __then__, and __to__\. If __at__ is
        specified however then these positions are translated a last time,
        moving the line's corner named by the attribute __with__ to the
        location given by this attribute\. This means that *with* is effective
        if and only if the attribute __at__ was specified as well for the
        line\.

  - <a name='24'></a>__[move](\.\./\.\./\.\./\.\./index\.md\#move)__ *attr*

    An open element with the corresponding corners, i\.e\. "start", "end", and
    "center"\. A __[move](\.\./\.\./\.\./\.\./index\.md\#move)__ element is in
    essence an invisible __[line](\.\./\.\./\.\./\.\./index\.md\#line)__\. While
    the main effect we are interested in is the change it makes to the layout
    system, it is an actual element, i\.e\. it has the same corners as an ordinary
    line, and shows up in the history as well, allowing future references to all
    the places it touched\. It handles the same attibutes as
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ elements\.

  - <a name='25'></a>__[spline](\.\./\.\./\.\./\.\./index\.md\#spline)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-spline\.png) An alias for the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element \(see above\), with the
    attribute __smooth__ preset\.

  - <a name='26'></a>__[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *attr*\.\.\.

    ![](\.\./\.\./\.\./\.\./image/figure\-02\-text\.png) A closed element with the
    corresponding corners, i\.e\. the eight directions of the compass rose, and
    "center"\. It handles the attributes

      * __anchor__ *name*

      * __ljust__

      * __rjust__

      * __above__

      * __below__

        ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
        anchor of the text which is to be placed at the element's center, by
        name\. I\.e\. this attribute defines the text's position relative to the
        element's center\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __anchor__, which itself defaults to
        __center__\. The legal values are all those accepted by
        [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.
        The commands without arguments are all shorthands with the anchor
        implied\. Note that they do not combine, only the last is used\. For
        comined directions the main attribute command, __anchor__ has to be
        used\.

          + __ljust__

            "anchor west"

          + __rjust__

            "anchor east"

          + __above__

            "anchor south"

          + __below__

            "anchor north"

      * __at__ *location*

        Specifies the location of the element's corner named by the attribute
        __with__\. Defaults to the current location as maintained by the
        layouting system\.

      * __height__ *length*

        Specifies the height of the
        __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ element\. Defaults to the
        natural height of its text\.

      * __justify__ __left__&#124;__center__&#124;__right__

        Specifies how multi\-line text associated with the element is positioned
        within its box\. The value is ignored if no text was specified for the
        element\. If not specified the system falls back to the value taken from
        the language variable __justify__, which itself defaults to
        __left__\. The legal values are __left__, __right__, and
        __center__\.

      * __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

        Specifies the text to associate with the element\. Defaults to nothing\.
        When specified multiple times the actually shown text is the
        concatenation of the individual strings, vertically stacked, with the
        first string specified being the topmost element\.

      * __textcolor__ *spec*

        Specifies the color used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textcolor__, which itself
        defaults to __black__\.

      * __textfont__ *spec*

        Specifies the font used to draw the text of an element with\. Ignored if
        there is no text\. If not specified the system falls back to the value
        taken from the language variable __textfont__, which itself defaults
        to __Helvetica 12pt__\.

      * __width__ *length*

        Specifies the width of the __[text](\.\./\.\./\.\./\.\./index\.md\#text)__
        element\. Defaults to the natural width of its text\.

      * __with__ *corner*

        Specifies the corner of the element to place at the location given by
        the attribute __at__\. Defaults to the current corner as maintained
        by the layouting system, except if the value for __at__ was
        specified by the user\. In that case it defaults to __center__\.

## <a name='subsection4'></a>Attributes

The set of all attributes supported by all the element commands is shown below\.
While we speak of them as commands, and provide a syntax, they are not truly
available as actual commands, but only as part of the arguments for an element
command\.

Note that some of the attribute names are overloaded, i\.e\. have multiple,
different, definitions\. During processing of attributes for an element the
actual definition used is chosen based on the type of the element the processing
is for\.

Further, as a catch\-all clause, any attribute which could not be processed
according to the definitions below will be treated as the argument of an
implicit __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ attribute\.

  - __anchor__ *name*

  - __ljust__

  - __rjust__

  - __above__

  - __below__

    ![](\.\./\.\./\.\./\.\./image/figure\-22\-text\-anchoring\-3\.png) Specifies the
    anchor of the text which is to be placed at the element's center, by name\.
    I\.e\. this attribute defines the text's position relative to the element's
    center\. The value is ignored if no text was specified for the element\. If
    not specified the system falls back to the value taken from the language
    variable __anchor__, which itself defaults to __center__\. The legal
    values are all those accepted by
    [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\. The
    commands without arguments are all shorthands with the anchor implied\. Note
    that they do not combine, only the last is used\. For comined directions the
    main attribute command, __anchor__ has to be used\.

      * __ljust__

        "anchor west"

      * __rjust__

        "anchor east"

      * __above__

        "anchor south"

      * __below__

        "anchor north"

  - __arrowhead__ *spec*

    ![](\.\./\.\./\.\./\.\./image/figure\-19\-style\-arrowheads\.png) Specifies where
    to draw arrowheads on the __[line](\.\./\.\./\.\./\.\./index\.md\#line)__
    element, at the beginning or end, at both ends, or none\. If not specified
    the system falls back to the value taken from the language variable
    __arrowhead__, which itself defaults to __none__\. The legal values
    are

      * __none__, __\-__

        Draw no arrowheads, at neither end of the line\.

      * __start__, __first__, __<\-__

        Draw an arrowhead at the beginning of the line, but not at its end\.

      * __end__, __last__, __\->__

        Draw an arrowhead at the end of the line, but not at its beginning\.

      * __both__, __<\->__

        Draw arrowheads at both ends of the line\.

    Note that the values "start", "end", "\-", "\->", "<\-", and "<\->" are all
    accepted as shorthands for the __arrowhead__ command using them as
    argument\.

  - __aspect__ *number*

    Specifies the aspect ratio, i\.e ratio of width to height, of the
    __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner in
    which a default is calculated when not specified also depends on the
    specifications of the attributes __width__ and __height__, if any\.

    If both __width__, and __height__ are specified then any
    specification of __aspect__ is ignored, as it is implicitly defined in
    the width and height as well, and this takes precedence\. A missing
    specification is ignored in that case well, i\.e\. no defaults are required\.

    If the __aspect__ is specified, and one of the attributes __width__
    or __height__, then the missing attribute is calculated from the two
    which are specified\. No defaults are required for these cases either\.

    If only one of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __aspect__, the value taken from
    the language variable __diamondaspect__, which itselfs defaults to
    __2__\.

    If none of of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __width__, the value taken from
    the language variable __boxwidth__, which itselfs defaults to the pixel
    equivalent of __2 cm__\. For the aspect it uses either the user\-specified
    value or the default taken as described in the previous paragraph\.

  - __aspect__ *number*

    Specifies the aspect ratio, i\.e ratio of width to height, of the ellipses
    which are used to draw the top and bottom of the
    __[drum](\.\./\.\./\.\./\.\./index\.md\#drum)__ element\. If not specified the
    system falls back to the value taken from the language variable
    __drumaspect__, which itself defaults to __0\.35__\.

  - __at__ *location*

    Specifies the location of the element's corner named by the attribute
    __with__\. Defaults to the current location as maintained by the
    layouting system\.

  - __at__ *location*

    __[Line](\.\./\.\./\.\./\.\./index\.md\#line)__ elements are normally
    positioned absolutely, using the locations specified through the attributes
    __from__, __then__, and __to__\. If __at__ is specified
    however then these positions are translated a last time, moving the line's
    corner named by the attribute __with__ to the location given by this
    attribute\.

  - __chop__ ?*length*?

    Specifies the length of the __[line](\.\./\.\./\.\./\.\./index\.md\#line)__
    element to remove from the beginning and/or end\. Defaults to nothing\. If
    specified once the chopping applies to both beginning and end of the line\.
    If specified twice or more the last two specifications are used, and applied
    to beginning and end of the line, in this order\. Whenever the attribute is
    specified without an explicit length, the system falls back to the value
    taken from the language variable __circleradius__, which itself defaults
    to the pixel equivalent of __1 cm__

  - __clockwise__

  - __cw__

    Specifies the direction of the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    element, here going clockwise\. The complementary attribute is
    __counterclockwise__\. If not specified the system falls back to the
    value taken from the language variable __clockwise__, which itself
    defaults to __false__, for counter\-clockwise direction\.

  - __color__ *spec*

    ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the color
    used to draw the lines of the element\. If not specified the system falls
    back to the value taken from the language variable __linecolor__, which
    itself defaults to __black__\.

  - __counterclockwise__

  - __ccw__

    Specifies the direction of the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    element, here counter\-clockwise\. The complementary attribute is
    __clockwise__\. If not specified the system falls back to the value taken
    from the language variable __clockwise__, which itself defaults to
    __false__, for counter\-clockwise direction\.

  - __diameter__ *length*

  - __diam__ *length*

    Specifies the diameter of the
    __[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ element, as an alternative
    way to specify its __radius__\. Effective if and only if the radius was
    not specified\. I\.e\. if both diameter and radius are specified then the
    radius infomration has precendence\. This attribute has no default, because
    the defaults are taken from the radius\.

  - __fillcolor__ *spec*

    ![](\.\./\.\./\.\./\.\./image/figure\-21\-style\-colors\.png) Specifies the color
    used to draw the inside of the element\. If not specified the system falls
    back to the value taken from the language variable __fillcolor__, which
    itself defaults to the empty string, signaling "no filling"\.

  - __from__ *location*

    Specifies the location where the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element begins\. Defaults to
    the current location as maintained by the layouting system\.

  - __from__ *location*

    Specifies the location where the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    element begins\. Defaults to the current location as maintained by the
    layouting system\.

  - __height__ *length*

  - __ht__ *length*

    Specifies the height of the element\. If not specified the system falls back
    to the value taken from the language variable __boxheight__, which
    itself defaults to the pixel equivalent of __2 cm__\.

  - __height__ *length*

    Specifies the height of the
    __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner in
    which a default is calculated when not specified also depends on the
    specifications of the attributes __aspect__ and __width__, if any\.

    If both __width__, and __height__ are specified then any
    specification of __aspect__ is ignored, as it is implicitly defined in
    the width and height as well, and this takes precedence\. A missing
    specification is ignored in that case well, i\.e\. no defaults are required\.

    If the __aspect__ is specified, and one of the attributes __width__
    or __height__, then the missing attribute is calculated from the two
    which are specified\. No defaults are required for these cases either\.

    If only one of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __aspect__, the value taken from
    the language variable __diamondaspect__, which itselfs defaults to
    __2__\.

    If none of of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __width__, the value taken from
    the language variable __boxwidth__, which itselfs defaults to the pixel
    equivalent of __2 cm__\. For the aspect it uses either the user\-specified
    value or the default taken as described in the previous paragraph\.

  - __height__ *length*

    Specifies the height of the __[text](\.\./\.\./\.\./\.\./index\.md\#text)__
    element\. Defaults to the natural height of its text\.

  - __justify__ __left__&#124;__center__&#124;__right__

    Specifies how multi\-line text associated with the element is positioned
    within its box\. The value is ignored if no text was specified for the
    element\. If not specified the system falls back to the value taken from the
    language variable __justify__, which itself defaults to __left__\.
    The legal values are __left__, __right__, and __center__\.

  - __noturn__

    Specifies that the direction of
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element at its end is not
    propagated to the layout management\. If not specified the direction of the
    line becomes the new direction the layout\.

  - __radius__ *length*

  - __rad__ *length*

    Specifies the radius of the
    __[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ element\. If not specified
    the system falls back to the value taken from the language variable
    __circleradius__, which itself defaults to the pixel equivalent of __1
    cm__\.

  - __radius__ *length*

    Specifies the radius of the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    element, or rather, the radius of the circle the shown arc is a part of\. If
    not specified the system falls back to the value taken from the language
    variable __arcradius__, which itself defaults to the pixel equivalent of
    __1 cm__\.

  - __slant__ *angle*

    Specifies the angle by which the __[box](\.\./\.\./\.\./\.\./index\.md\#box)__
    element is slanted, in degrees\. If not specified the system falls back to
    the value taken from the language variable __slant__, which itself
    defaults to __90__, i\.e\. vertical, no slant\. 0 degrees is slanting
    straight east, pointing to the right\. 90 degrees is slanting to the north,
    pointing straight up\.

  - __smooth__

    Specifies the use of bezier splines for the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element\. If not specified
    lines are drawn exactly through the specified waypoints, without any smooth
    curves\.

  - __stroke__ *width*

    ![](\.\./\.\./\.\./\.\./image/figure\-20\-style\-stroke\.png) Specifies the width
    of the lines drawn for the the element, in pixels\. If not specified the
    system falls back to the value taken from the language variable
    __linewidth__, which itself defaults to __1__\.

  - __style__ *spec*

    ![](\.\./\.\./\.\./\.\./image/figure\-18\-style\-dash\.png) Specifies the style
    used to draw the lines of the element\. If not specified the system falls
    back to the value taken from the language variable __linestyle__, which
    itself defaults to __solid__ lines\. The legal values are all those
    accepted by
    [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
    additionally all which are listed below:

      * __solid__, empty string

        Draw solid line\.

      * __dash__, __dashed__, __\-__

        Draw a dashed line\.

      * __dot__, __dotted__, __\.__

        Draw a dotted line\.

      * __dash\-dot__, __\-\.__

        Draw a dash\-dotted line

      * __dash\-dot\-dot__, __\-\.\.__

        Draw a dash\-dot\-dotted line\.

    Note that the values "solid", "dot\(ted\)", "dash\(ed\)", "dash\-dot", and
    "dash\-dot\-dot" are all accepted as shorthands for the __style__ command
    using them as argument\.

  - __[text](\.\./\.\./\.\./\.\./index\.md\#text)__ *string*

    Specifies the text to associate with the element\. Defaults to nothing\. When
    specified multiple times the actually shown text is the concatenation of the
    individual strings, vertically stacked, with the first string specified
    being the topmost element\.

  - __textcolor__ *spec*

    Specifies the color used to draw the text of an element with\. Ignored if
    there is no text\. If not specified the system falls back to the value taken
    from the language variable __textcolor__, which itself defaults to
    __black__\.

  - __textfont__ *spec*

    Specifies the font used to draw the text of an element with\. Ignored if
    there is no text\. If not specified the system falls back to the value taken
    from the language variable __textfont__, which itself defaults to
    __Helvetica 12pt__\.

  - __then__ *location*

  - __then__ \(<direction> ?*length*?\)\.\.\.

  - \(<direction> ?*length*?\)\.\.\.

    This attribute specifies an intermediate location the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element has to go through\. It
    can be specified multiple times, with each use adding one additional
    location to the series which the line will go through\. These location will
    be traversed in the order they were specified\.

    The location can be given explicitly, or as a series of directions with
    distances\. In the latter case the names of all known directions are accepted
    for the direction part\. If no distance is specified for a direction the
    system falls back to the value taken from the language variable
    __movelength__, which itself defaults to the pixel equivalent of __2
    cm__\. The whole set of direction,distance pairs is treated as a series of
    translations which are added up to provide the final translation specifying
    the intermediate point \(relative to the preceding point\)\.

    The last named direction is propagated to the layout system as the direction
    to follow\. The use of __noturn__ is not able to overide this behaviour\.

    At last, the names of the registered directions also serve as attribute
    commands, with an implicit attribute __then__ in front of them\.

    If no intermediate or last location is specified for the line the system
    falls back to a point __movelength__ pixels away from the starting
    location, in the current direction as maintained by the layouting system

  - __to__ *location*

    Specifies the location where the
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ element ends\. This attribute
    has no default\. The default is handled by the attribute __then__, which
    makes it appear as if __to__ has a default when not specified\.

  - __to__ *location*

    Specifies the location where the __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    element ends\. Defaults to a location such that a 90\-degree arc is drawn in
    the chosen direction, starting at __from__\.

  - __width__ *length*

  - __wid__ *length*

    Specifies the width of the element\. If not specified the system falls back
    to the value taken from the language variable __boxwidth__, which itself
    defaults to the pixel equivalent of __2 cm__\.

  - __width__ *length*

    Specifies the width of the
    __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ element\. The manner in
    which a default is calculated when not specified also depends on the
    specifications of the attributes __aspect__ and __height__, if any\.

    If both __width__, and __height__ are specified then any
    specification of __aspect__ is ignored, as it is implicitly defined in
    the width and height as well, and this takes precedence\. A missing
    specification is ignored in that case well, i\.e\. no defaults are required\.

    If the __aspect__ is specified, and one of the attributes __width__
    or __height__, then the missing attribute is calculated from the two
    which are specified\. No defaults are required for these cases either\.

    If only one of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __aspect__, the value taken from
    the language variable __diamondaspect__, which itselfs defaults to
    __2__\.

    If none of of the attributes __width__ or __height__ is specified
    then the system uses a fallback for the __width__, the value taken from
    the language variable __boxwidth__, which itselfs defaults to the pixel
    equivalent of __2 cm__\. For the aspect it uses either the user\-specified
    value or the default taken as described in the previous paragraph\.

  - __width__ *length*

    Specifies the width of the __[text](\.\./\.\./\.\./\.\./index\.md\#text)__
    element\. Defaults to the natural width of its text\.

  - __with__ *corner*

    Specifies the corner of the element to place at the location given by the
    attribute __at__\. Defaults to the current corner as maintained by the
    layouting system, except if the value for __at__ was specified by the
    user\. In that case it defaults to __center__\.

  - __with__ *corner*

    __[Line](\.\./\.\./\.\./\.\./index\.md\#line)__ elements are normally
    positioned absolutely, using the locations specified through the attributes
    __from__, __then__, and __to__\. If __at__ is specified
    however then these positions are translated a last time, moving the line's
    corner named by the attribute __with__ to the location given by this
    attribute\. This means that *with* is effective if and only if the
    attribute __at__ was specified as well for the line\.

## <a name='subsection5'></a>Corners

Corners are named values for in elements, usually locations\.

  - The *closed* elements define corners for the compass rose, including the
    "center", and their "width" and "height"\.

    ![](\.\./\.\./\.\./\.\./image/figure\-27\-corners\-closed\.png)

  - __block__ elements additionally export all variables which were set
    during their definition as corners\.

  - The *open* elements on the other hand define "start", "end", and "center"\.
    The first two map to the locations originally provided through the
    attributes __from__ and __to__ of the element\.

    ![](\.\./\.\./\.\./\.\./image/figure\-28\-corners\-open\.png)

  - The center of __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ and
    __[move](\.\./\.\./\.\./\.\./index\.md\#move)__ elements is the location
    halfway between "start" and "end" corners, this is regardless of any
    intermediate locations the element may have\.

  - The __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ and
    __[move](\.\./\.\./\.\./\.\./index\.md\#move)__ elements additionally name all
    their locations as corners using numbers as names, starting from __1__
    \(equivalent to "start"\), in order of traversal\.

    ![](\.\./\.\./\.\./\.\./image/figure\-15\-spline\-1\.png)

  - The center of __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ elements is the
    center of the circle the arc is part off\.

  - The __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ elements additionally define
    the compass rose of closed elements as well\.

## <a name='subsection6'></a>Named directions

The named directions are commands which tell the layout system in which
direction to go when placing the next element without an explicit position
specification\. They can also be used as arguments to the attribute __then__,
and the command __by__ for relative points, see there for the relevant
syntax\.

The diagram core defines the directions of the compass rose, plus a number of
aliases\. See below for the full list\.

![](\.\./\.\./\.\./\.\./image/figure\-27\-corners\-closed\.png) This overlaps with the
pre\-defined corners for closed elements\. This is used by the layout system, when
are going in direction X the name of the opposite direction is the name of the
corner at which the new element will be attached to the current position, and if
this corner does not exist the nearest actual corner by angle is used\.

  - <a name='27'></a>__west__

  - <a name='28'></a>__w__

  - <a name='29'></a>__left__

  - <a name='30'></a>__l__

  - <a name='31'></a>__south__

  - <a name='32'></a>__s__

  - <a name='33'></a>__down__

  - <a name='34'></a>__bottom__

  - <a name='35'></a>__bot__

  - <a name='36'></a>__b__

  - <a name='37'></a>__east__

  - <a name='38'></a>__e__

  - <a name='39'></a>__right__

  - <a name='40'></a>__r__

  - <a name='41'></a>__north__

  - <a name='42'></a>__n__

  - <a name='43'></a>__up__

  - <a name='44'></a>__top__

  - <a name='45'></a>__t__

  - <a name='46'></a>__northwest__

  - <a name='47'></a>__nw__

  - <a name='48'></a>__up\-left__

  - <a name='49'></a>__upleft__

  - <a name='50'></a>__leftup__

  - <a name='51'></a>__northeast__

  - <a name='52'></a>__ne__

  - <a name='53'></a>__up\-right__

  - <a name='54'></a>__upright__

  - <a name='55'></a>__rightup__

  - <a name='56'></a>__southwest__

  - <a name='57'></a>__sw__

  - <a name='58'></a>__down\-left__

  - <a name='59'></a>__downleft__

  - <a name='60'></a>__leftdown__

  - <a name='61'></a>__southeast__

  - <a name='62'></a>__se__

  - <a name='63'></a>__down\-right__

  - <a name='64'></a>__downright__

  - <a name='65'></a>__rightdown__

## <a name='subsection7'></a>Miscellaneous Commands

  - <a name='66'></a>*number* __cm__

  - <a name='67'></a>*number* __mm__

  - <a name='68'></a>*number* __inch__

  - <a name='69'></a>*number* __pt__

    These commands allow the specification of distances and coordinates in
    metric and imperial units, returning the equivalent distance or coordinate
    in pixels, which is the unit used internally for all calculations\.

    The conversion factors are based on the result of __tk scaling__ and are
    computed once, at the time the package is sourced, future changes of the
    __tk scaling__ factor have no effect\.

  - <a name='70'></a>*number* *number*

    ![](\.\./\.\./\.\./\.\./image/figure\-50\-point\-cons\-absolute\.png) This command
    takes the x and y coordinates of a location and returns the *absolute*
    point for it\.

  - <a name='71'></a>__by__ *distance* *direction*

    ![](\.\./\.\./\.\./\.\./image/figure\-51\-point\-cons\-relative\.png) This command
    takes a *distance* and *direction* \(angle in degress, or registered
    direction name\) and returns the *relative* point for it, i\.e\. the
    *delta* or *translation* it represents\.

    Note also the \(dis\)similarities to the directional specifications for the
    attribute __then__ of __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ and
    __[move](\.\./\.\./\.\./\.\./index\.md\#move)__ elements\. Where we say here

        by 50 east

    for the attribute we say

        ... then east 50 ...

    or just

        ... then east ...

  - <a name='72'></a>*point1* __\+__ *point2*

    ![](\.\./\.\./\.\./\.\./image/figure\-48\-point\-vectoradd\.png) This command
    interprets two points as vectors and adds them together\. If at least one of
    the points is *absolute* the result is absolute as well\. The result is a
    *relative* point if and only if both points are *relative*\.

  - <a name='73'></a>*point1* __\-__ *point2*

    ![](\.\./\.\./\.\./\.\./image/figure\-49\-point\-vectorsub\.png) This command
    interprets two points as vectors and subtracts the second from the first\. If
    at least one of the points is *absolute* the result is absolute as well\.
    The result is a *relative* point if and only if both points are
    *relative*\.

  - <a name='74'></a>*point* __by__ *distance* *direction*

    This command is a more convenient, or at least shorter, form of

        [$point + [by $distance $direction]]

  - <a name='75'></a>*point1* __&#124;__ *point2*

    ![](\.\./\.\./\.\./\.\./image/figure\-31\-point\-projection\.png) This command
    calculates the *projection* of two points, i\.e\. the result is the point
    having the x\-coordinate of *point1* and the y\-coordinate of *point2*\.

  - <a name='76'></a>*n* __between__ *poin1* *point2*

    ![](\.\./\.\./\.\./\.\./image/figure\-29\-point\-interpolation\-1\.png) This command
    computes the point which is *n*\*100 percent of the way between *point1*
    and *point2*, and returns it as its result\. This means that for

      * *n* == 0

        The result is *point1*\.

      * *n* == 1

        The result is *point2*\.

      * *n* == 0\.5

        The result is half way between the two points\.

    etc\. *Note* that it is allowed to use values < 0 and > 1 for *n*

  - <a name='77'></a>__intersect__ *elem1* *elem2*

    ![](\.\./\.\./\.\./\.\./image/figure\-32\-point\-intersection\.png) This command
    takes two *open* elements, computes the lines going through their "start"\-
    and "end"\-corners, and returns the point where these two lines intersect\.
    The command throws an error if the lines do not intersect, or are
    coincident\.

  - <a name='78'></a>*element* __names__ ?*pattern*?

    This command returns a list containing the names of all corners for the
    *element*\. If a pattern is specified then only the names matching it \(via
    __string match__ are returned\. Otherwise all names are returned
    \(equivalent to a default pattern of __\*__\)\.

  - <a name='79'></a>*element* *corner*

    This command returns the value for the *corner* of the *element*\. This
    can be anything, including points and elements\.

  - <a name='80'></a>*element* *corner1* *corner2*\.\.\.

    This is a convenience shorthand for

        [[[$elem $corner1] $corner2] ...]

    assuming that the value for

        [$elem $corner1]

    , etc\. is again an element\.

  - <a name='81'></a>*element* ?*corner1*\.\.\. ?__names__ ?*pattern*??\]?

    This is a convenience shorthand for

        [[[$elem $corner1] ...] names ?pattern?]

    assuming that the value for

        [$elem $corner1]

    , etc\. is again an element\.

  - <a name='82'></a>____n__th__ ?*corner*?

    This command asks the diagram history for the __n__th element created,
    searching from the beginning of the history \(counting from 1\) and returns it
    as its result\. If the *corner* is specified then the value for this corner
    is returned instead\.

  - <a name='83'></a>____n__th__ __last__ ?*corner*?

    This command asks the diagram history for the __n__th element created,
    searching from the end of the history and returns it as its result\. If the
    *corner* is specified then the value for this corner is returned instead\.

  - <a name='84'></a>____n__th__ *shape* ?*corner*?

    This command asks the diagram history for the __n__th element created,
    of the given *shape*, searching from the beginning of the history
    \(counting from 1\) and returns it as its result\. If the *corner* is
    specified then the value for this corner is returned instead\.

  - <a name='85'></a>____n__th__ __last__ *shape* ?*corner*?

    This command asks the diagram history for the __n__th element created,
    of the given *shape*, searching from the end of the history and returns it
    as its result\. If the *corner* is specified then the value for this corner
    is returned instead\.

  - <a name='86'></a>__last__ ?*corner*?

  - <a name='87'></a>__last__ *shape* ?*corner*?

    Convenience commands mapping to "__1st last__" and "__1st last__
    *shape*"\.

  - <a name='88'></a>__1st__

  - <a name='89'></a>__2nd__

  - <a name='90'></a>__3rd__

    Aliases for __1th__, __2th__, and __3th__, for readability,
    usable whereever ____n__th__ can ocur\.

## <a name='subsection8'></a>Variables

The language context contains a number of predefined variables which hold the
default values for various attributes\. These variables, their uses, and values
are:

  - __anchor__

    The default value for the attribute __anchor__\. Initialized to
    __center__\. The legal values are all those accepted by
    [Tk\_GetAnchor](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetAnchor\.htm)\.

  - __arcradius__

    The default value for the attribute __radius__ of
    __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__ elements\. Initialized to the
    pixel equivalent of __1 cm__\.

  - __arrowhead__

    The default value for the attribute __arrowhead__\. Initialized to
    __none__\. The legal values are

      * __none__, __\-__

        Draw no arrowheads, at neither end of the line\.

      * __start__, __first__, __<\-__

        Draw an arrowhead at the beginning of the line, but not at its end\.

      * __end__, __last__, __\->__

        Draw an arrowhead at the end of the line, but not at its beginning\.

      * __both__, __<\->__

        Draw arrowheads at both ends of the line\.

  - __boxheight__

    The default value for the attribute __height__ of
    __[box](\.\./\.\./\.\./\.\./index\.md\#box)__,
    __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ and
    __[ellipse](\.\./\.\./\.\./\.\./index\.md\#ellipse)__ elements\. Initialized to
    the pixel equivalent of __2 cm__\.

  - __boxwidth__

    The default value for the attribute __width__ of
    __[box](\.\./\.\./\.\./\.\./index\.md\#box)__,
    __[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond)__ and
    __[ellipse](\.\./\.\./\.\./\.\./index\.md\#ellipse)__ elements\. Initialized to
    the pixel equivalent of __2 cm__\.

  - __clockwise__

    The default value for the attributes __clockwise__ and
    __counterclockwise__ of __[arc](\.\./\.\./\.\./\.\./index\.md\#arc)__
    elements\. Initialized to __False__, for counter\-clockwise direction\.

  - __circleradius__

    The default value for the attribute __radius__ of
    __[circle](\.\./\.\./\.\./\.\./index\.md\#circle)__ elements, and also the
    default for the attribute __chop__, when specified without an explicit
    length\. Initialized to the pixel equivalent of __1 cm__\.

  - __drumaspect__

    The default value for the attribute __aspect__ of
    __[drum](\.\./\.\./\.\./\.\./index\.md\#drum)__ elements\. Initialized to
    __0\.35__\.

  - __fillcolor__

    The default value for the attribute __fillcolor__ of all elements which
    can be filled\. Initialized to the empty string, signaling that the element
    is not filled\.

  - __justify__

    The default value for the attribute __justify__\. Initialized to
    __left__\. The legal values are __left__, __right__, and
    __center__\.

  - __linecolor__

    The default value for the attribute __color__ of all elements having to
    draw lines \(all but __[text](\.\./\.\./\.\./\.\./index\.md\#text)__\)\.
    Initialized to __black__\.

  - __linestyle__

    The default value for the attribute __style__ of all elements having to
    draw some line\. Initialized to __solid__\. The legal values are all those
    accepted by
    [Tk\_GetDash](http://www\.tcl\.tk/man/tcl8\.5/TkLib/GetDash\.htm), and
    additionally all which are listed below:

      * __solid__, empty string

        Draw solid line\.

      * __dash__, __dashed__, __\-__

        Draw a dashed line\.

      * __dot__, __dotted__, __\.__

        Draw a dotted line\.

      * __dash\-dot__, __\-\.__

        Draw a dash\-dotted line

      * __dash\-dot\-dot__, __\-\.\.__

        Draw a dash\-dot\-dotted line\.

  - __linewidth__

    The default value for the attribute __stroke__ of all elements having to
    draw some line\. Initialized to __1__ \(pixels\)\.

  - __movelength__

    The default value for the directional specification of intermediate
    locations by the attribute __then__ of
    __[line](\.\./\.\./\.\./\.\./index\.md\#line)__ and
    __[move](\.\./\.\./\.\./\.\./index\.md\#move)__ elements\. Initialized to the
    pixel equivalent of __2 cm__\.

  - __slant__

    The default value for the attribute __slant__ of
    __[box](\.\./\.\./\.\./\.\./index\.md\#box)__ elements\. Initialized to 90
    degrees, i\.e\. slant straight up\.

  - __textcolor__

    The default value for the attribute __textcolor__ of all elements having
    to draw some text\. Initialized to __black__\.

  - __textfont__

    The default value for the attribute __textfont__ of all elements having
    to draw some text\. Initialized to __Helvetica 12pt__\.

# <a name='section4'></a>Diagram Classes

The intended audience of this section are developers wishing to work on the
internals of the diagram package\. Regular users of __diagram__ can skip this
section without missing anything\.

The main information seen here is the figure below, showing the hierarchy of the
classes implementing diagram\.

![](\.\./\.\./\.\./\.\./image/figure\-00\-dependencies\.png) At the bottom, all at the
same level are the supporting packages like
__[snit](\.\./\.\./\.\./\.\./index\.md\#snit)__, etc\. These can all be found in
Tcllib\.

Above them is the set of diagram classes implementing the various aspects of the
system, i\.e\.:

  - __diagram__

    The main class, that which is seen by the user\.

  - __diagram::core__

    The core engine, itself distributed over four helper classes\.

  - __diagram::basic__

    The implementation of the standard shapes, like box, circle, etc\., based on
    the extension features of the core\.

  - __diagram::element__

    Core support class, the database of created elements\. It also keeps the
    history, i\.e\. the order in which elements were created\.

  - __diagram::attribute__

    Core support class, the generic handling of definition and processing of
    attributes\.

  - __diagram::direction__

    Core support class, the database of named directions\.

  - __diagram::navigation__

    Core support class, the state of layout engine, i\.e\. current position and
    directin, and operations on it\.

  - __diagram::point__

    General support class handling various vector operations\.

# <a name='section5'></a>References

# <a name='section6'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *diagram* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[2D geometry](\.\./\.\./\.\./\.\./index\.md\#2d\_geometry),
[arc](\.\./\.\./\.\./\.\./index\.md\#arc), [arrow](\.\./\.\./\.\./\.\./index\.md\#arrow),
[box](\.\./\.\./\.\./\.\./index\.md\#box), [canvas](\.\./\.\./\.\./\.\./index\.md\#canvas),
[circle](\.\./\.\./\.\./\.\./index\.md\#circle),
[diagram](\.\./\.\./\.\./\.\./index\.md\#diagram),
[diamond](\.\./\.\./\.\./\.\./index\.md\#diamond),
[drawing](\.\./\.\./\.\./\.\./index\.md\#drawing),
[drum](\.\./\.\./\.\./\.\./index\.md\#drum),
[ellipse](\.\./\.\./\.\./\.\./index\.md\#ellipse),
[image](\.\./\.\./\.\./\.\./index\.md\#image),
[interpolation](\.\./\.\./\.\./\.\./index\.md\#interpolation),
[intersection](\.\./\.\./\.\./\.\./index\.md\#intersection),
[line](\.\./\.\./\.\./\.\./index\.md\#line), [move](\.\./\.\./\.\./\.\./index\.md\#move),
[picture](\.\./\.\./\.\./\.\./index\.md\#picture), [plane
geometry](\.\./\.\./\.\./\.\./index\.md\#plane\_geometry),
[plotting](\.\./\.\./\.\./\.\./index\.md\#plotting),
[point](\.\./\.\./\.\./\.\./index\.md\#point), [raster
image](\.\./\.\./\.\./\.\./index\.md\#raster\_image),
[spline](\.\./\.\./\.\./\.\./index\.md\#spline),
[text](\.\./\.\./\.\./\.\./index\.md\#text), [vector](\.\./\.\./\.\./\.\./index\.md\#vector)

# <a name='category'></a>CATEGORY

Documentation tools
