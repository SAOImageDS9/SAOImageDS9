
[//000000001]: # (ipentry \- An IP address entry widget)
[//000000002]: # (Generated from file 'ipentry\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (ipentry\(n\) 0\.3\.2 tklib "An IP address entry widget")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

ipentry \- An IP address entry widget

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [Widget options](#section2)

  - [Bugs, Ideas, Feedback](#section3)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl 8\.4  
package require Tk 8\.4  
package require ipentry ?0\.3\.2?  

[__::ipentry::ipentry__ *pathName* ?*option* *value*\.\.\.?](#1)  
[__::ipentry::ipentry6__ *pathName* ?*option* *value*\.\.\.?](#2)  
[*pathName* __complete__](#3)  
[*pathName* __get__](#4)  
[*pathName* __insert__ *iplist*](#5)  
[*pathName* __icursor__ *index*](#6)  
[*pathName* __configure__ *option* *value*\.\.\.](#7)  
[*pathName* __cget__ *option*](#8)  

# <a name='description'></a>DESCRIPTION

This package provides a widget for the entering of a IP address\.

  - <a name='1'></a>__::ipentry::ipentry__ *pathName* ?*option* *value*\.\.\.?

    Creates a new IPv4 ipentry widget and configures it with the given options
    and their values\.

  - <a name='2'></a>__::ipentry::ipentry6__ *pathName* ?*option* *value*\.\.\.?

    Creates a new ipentry widget for the entry of an IPv6 address\. All options
    are the same as the IPv4 widget\.

Each widget created with the command above supports the following methods:

  - <a name='3'></a>*pathName* __complete__

    Returns a boolean value\. True indicates that the entry contains a complete
    IP address, meaning all fields have a value\. In some cases IPv6 address are
    valid when fields are missing\. You will need to do your own validation to
    detect this\.

  - <a name='4'></a>*pathName* __get__

    Returns the contents of the entry as a list consisting of 4 or 8 elements\.

  - <a name='5'></a>*pathName* __insert__ *iplist*

    IPv4 Takes a list of 4 elements and inserts one into each quad of the entry,
    in order\. All values in the list must be empty or integers\. Values outside
    the range 0 to 255 are modified to be within the range\. IPv6 Takes a list of
    8 elements and inserts one into each quad of the entry, in order\. All values
    in the list must be empty or 1 to 4 hex digits\.

  - <a name='6'></a>*pathName* __icursor__ *index*

    Sets the position of the widgets insertion cursor\. Only integer values
    between 0 and 15 are valid for ipentry and 0 to 31 for ipentry6\. Setting the
    icursor will only have an effect if the widget already has the input focus\.

  - <a name='7'></a>*pathName* __configure__ *option* *value*\.\.\.

    Modifies the configuration of the widget\. For options and their meaning see
    the widget options section\.

  - <a name='8'></a>*pathName* __cget__ *option*

    Returns information about the current configuration of the widget, for the
    specified option\. For options and their meaning see the widget options
    section\.

# <a name='section2'></a>Widget options

  - Command\-Line Switch:	__\-textvariable__  
    Database Name:	__textvariable__  
    Database Class:	__Variable__

    The name of a variable which holds the value of the IP address\. The value
    must be a string of the form NNN\.NNN\.NNN\.NNN for IPv4 or
    HHHH:HHHH:HHHH:HHHH:HHHH:HHHH:HHHH:HHHH for IPv6 where H is a hex digit\. The
    variable will be modified to represent a valid IP address if it is not
    already\.

  - Command\-Line Switch:	__\-state__  
    Database Name:	__state__  
    Database Class:	__State__

    Specifies one of three states for the entry: __normal__,
    __disabled__, or __readonly__\.

  - Command\-Line Switch:	__\-font__  
    Database Name:	__font__  
    Database Class:	__Font__

  - Command\-Line Switch:	__\-bd__  
    Database Name:	__borderWidth__  
    Database Class:	__BorderWidth__

  - Command\-Line Switch:	__\-fg__  
    Database Name:	__foreground__  
    Database Class:	__Foreground__

  - Command\-Line Switch:	__\-bg__  
    Database Name:	__background__  
    Database Class:	__Background__

  - Command\-Line Switch:	__\-relief__  
    Database Name:	__relief__  
    Database Class:	__Relief__

  - Command\-Line Switch:	__\-highlightthickness__  
    Database Name:	__highlightThickness__  
    Database Class:	__HighlightThickness__

  - Command\-Line Switch:	__\-highlightcolor__  
    Database Name:	__highlightColor__  
    Database Class:	__HighlightColor__

  - Command\-Line Switch:	__\-highlightbackground__  
    Database Name:	__highlightBackground__  
    Database Class:	__HighlightBackground__

  - Command\-Line Switch:	__\-selectbackground__  
    Database Name:	__selectBackground__  
    Database Class:	__Background__

  - Command\-Line Switch:	__\-selectforeground__  
    Database Name:	__selectForeground__  
    Database Class:	__Foreground__

  - Command\-Line Switch:	__\-selectborderwidth__  
    Database Name:	__selectBorderWidth__  
    Database Class:	__BorderWidth__

  - Command\-Line Switch:	__\-disabledbackground__  
    Database Name:	__disabledBackground__  
    Database Class:	__DisabledBackground__

  - Command\-Line Switch:	__\-disabledforeground__  
    Database Name:	__disabledForeground__  
    Database Class:	__DisabledForeground__

  - Command\-Line Switch:	__\-readonlybackground__  
    Database Name:	__readonlyBackground__  
    Database Class:	__ReadonlyBackground__

  - Command\-Line Switch:	__\-insertbackground__  
    Database Name:	__insertBackground__  
    Database Class:	__Background__

    Standard widget options\. See __options__ for a description of their
    meanings and values\.

# <a name='section3'></a>Bugs, Ideas, Feedback

This document, and the package it describes, will undoubtedly contain bugs and
other problems\. Please report such in the category *ipentry* of the [Tklib
Trackers](http://core\.tcl\.tk/tklib/reportlist)\. Please also report any ideas
for enhancements you may have for either package and/or documentation\.

# <a name='keywords'></a>KEYWORDS

[entry](\.\./\.\./\.\./\.\./index\.md\#entry), [ip
address](\.\./\.\./\.\./\.\./index\.md\#ip\_address),
[network](\.\./\.\./\.\./\.\./index\.md\#network)

# <a name='category'></a>CATEGORY

Widget
