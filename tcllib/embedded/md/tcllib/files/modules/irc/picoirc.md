
[//000000001]: # (picoirc \- Simple embeddable IRC interface)
[//000000002]: # (Generated from file 'picoirc\.man' by tcllib/doctools with format 'markdown')
[//000000003]: # (picoirc\(n\) 0\.5\.2 tcllib "Simple embeddable IRC interface")

<hr> [ <a href="../../../../toc.md">Main Table Of Contents</a> &#124; <a
href="../../../toc.md">Table Of Contents</a> &#124; <a
href="../../../../index.md">Keyword Index</a> &#124; <a
href="../../../../toc0.md">Categories</a> &#124; <a
href="../../../../toc1.md">Modules</a> &#124; <a
href="../../../../toc2.md">Applications</a> ] <hr>

# NAME

picoirc \- Small and simple embeddable IRC client\.

# <a name='toc'></a>Table Of Contents

  - [Table Of Contents](#toc)

  - [Synopsis](#synopsis)

  - [Description](#section1)

  - [COMMANDS](#section2)

  - [CALLBACK](#section3)

  - [See Also](#seealso)

  - [Keywords](#keywords)

  - [Category](#category)

# <a name='synopsis'></a>SYNOPSIS

package require Tcl  
package require picoirc ?0\.5\.2?  

[__::picoirc::connect__ *callback* *nick* *url*](#1)  
[__::picoirc::post__ *context* *channel* *message*](#2)  
[__::picoirc::splituri__ *uri*](#3)  
[__::picoirc::send__ *context* *line*](#4)  

# <a name='description'></a>DESCRIPTION

This package provides a general purpose minimal IRC client suitable for
embedding in other applications\. All communication with the parent application
is done via an application provided callback procedure\. Each connection has its
own state so you can hook up multiple servers in a single application instance\.

To initiate an IRC connection you must call __picoirc::connect__ with a
callback procedure, a nick\-name to use on IRC and the IRC URL that describes the
connection\. This will return a variable name that is the irc connection context\.
See [CALLBACK](#section3) for details\.

This package is a fairly simple IRC client\. If you need something with more
capability investigate the __[irc](irc\.md)__ package\.

# <a name='section2'></a>COMMANDS

  - <a name='1'></a>__::picoirc::connect__ *callback* *nick* *url*

    Create a new irc connection to the server specified by *url* and login
    using the *nick* as the username\. The *callback* must be as specified in
    [CALLBACK](#section3)\. Returns a package\-specific variable that is used
    when calling other commands in this package\.

  - <a name='2'></a>__::picoirc::post__ *context* *channel* *message*

    This should be called to process user input and send it to the server\. A
    number of commands are recognised when prefixed with a forward\-slash \(/\)\.
    Such commands are converted to IRC command sequences and then sent\.

  - <a name='3'></a>__::picoirc::splituri__ *uri*

    Splits an IRC scheme uniform resource indicator into its component parts\.
    Returns a list of server, port and channel\. The default port is 6667 and
    there is no default channel\.

  - <a name='4'></a>__::picoirc::send__ *context* *line*

    This command is where all raw output to the server is handled\. The default
    action is to write the *line* to the irc socket\. However, before this
    happens the callback is called with "debug write"\. This permits the
    application author to inspect the raw IRC data and if desired to return a
    break error code to halt further processing\. In this way the application can
    override the default send via the callback procedure\.

# <a name='section3'></a>CALLBACK

The callback must look like:

    proc Callback {context state args} {
    }

where context is the irc context variable name \(in case you need to pass it back
to a picoirc procedure\)\. state is one of a number of states as described below\.

  - __init__

    called just before the socket is created

  - __connect__

    called once we have connected, before we join any channels

  - __close__

    called when the socket gets closed, before the context is deleted\. If an
    error occurs before we get connected the only argument will be the socket
    error message\.

  - __userlist__ *channel* *nicklist*

    called to notify the application of an updated userlist\. This is generated
    when the output of the NAMES irc command is seen\. The package collects the
    entire output which can span a number of output lines from the server and
    calls this callback when they have all been received\.

  - __chat__ *target* *nick* *message* *type*

    called when a message arrives\. *target* is the identity that the message
    was targetted for\. This can be the logged in nick or a channel name\.
    *nick* is the name of the sender of the message\. *message* is the
    message text\. *type* is set to "ACTION" if the message was sent as a CTCP
    ACTION

  - __system__ *channel* *message*

    called when a system message is received

  - __topic__ *channel* *topic*

    called when the channel topic string is seen\. *topic* is the text of the
    channel topic\.

  - __traffic__ *action* *channel* *nick* ?*newnick*?

    called when users join, leave or change names\. *action* is either entered,
    left or nickchange and *nick* is the user doing the action\. *newnick* is
    the new name if *action* is nickchange\.

    *NOTE*: *channel* is often empty for these messages as nick activities
    are global for the irc server\. You will have to manage the nick for all
    connected channels yourself\.

  - __version__

    This is called to request a version string to use to override the internal
    version\. If implemented, you should return as colon delimited string as

    Appname:Appversion:LibraryVersion

    For example, the default is

    PicoIRC:\[package provide picoirc\]:Tcl \[info patchlevel\]

  - __debug__ *type* *raw*

    called when data is either being read or written to the network socket\.
    *type* is set to __read__ when reading data and __write__ if the
    data is to be written\. *raw* is the unprocessed IRC protocol data\.

    In both cases the application can return a break error code to interrupt
    further processing of the raw data\. If this is a __read__ operation then
    the package will not handle this line\. If the operation is __write__
    then the package will not send the data\. This callback is intended for
    debugging protocol issues but could be used to redirect all input and output
    if desired\.

# <a name='seealso'></a>SEE ALSO

rfc 1459

# <a name='keywords'></a>KEYWORDS

[chat](\.\./\.\./\.\./\.\./index\.md\#chat), [irc](\.\./\.\./\.\./\.\./index\.md\#irc)

# <a name='category'></a>CATEGORY

Networking
