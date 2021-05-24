# tclsignal
TCL Signal Ext. Tcl 8.5/8.6 TEA compatible. Based on signal_ext version 1.4.0.1 by Michael Schwartz.

Usage
-----

~~~tcl
signal add signo proc ?-async?
~~~
Adds a signal handler for signal signo through proc proc.

Signals can be provided by number, or the most common ones are provided by
name (e.g., SIGHUP).

The proc is any Tcl procedure, and it is evaluated when the signal comes in.
It will be provided no arguments.

Signal handlers have Posix semantics--they persist until reset.

If -async is used, the signal handler is created using Tcl_AsyncCreate(). 
Checks for the signal are very frequent (each evaluation) using this
technique, but one doesn't know quite where evaluation is or how to handle
errors in this situation. The code will evaluate the provided procedure in 
the current interpreter if available, and in the interpreter which added the
signal handler otherwise. At least until a better scheme is suggested.

The -async is especially useful to interrupt "runaway" procs, or to cause a
quick exit; the default mechanism simply waits for another MainLoop cycle.

~~~tcl
signal delete signo
~~~
Restores handling of signal signo to the default (SIG_DFL).

~~~tcl
signal print 
~~~
Prints the handling of all signals with handlers.

    Formatted as  signal ----> procedure 
    or as         signal !---> procedure 
    if the signal is handled asynchronously

~~~tcl
signal print signo
~~~
Prints the procedure for handling signal signo.

Prints the word UNHANDLED if no signal handler is active for that signal.

~~~tcl
signal version
~~~
Returns the string representing the current version of the package

License
-------

Smithsonian Astrophysical Observatory, Cambridge, MA, USA
This code has been modified under the terms listed below and is made
available under the same terms.

Copyright (C) 1996 Schwartz Computer Consulting Services

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation, and that the name of SCCS not be used in advertising or
publicity pertaining to distribution of the software without specific,
written prior permission.  SCCS makes no representations about the
suitability of this software for any purpose.  It is provided "as is"
without express or implied warranty.
