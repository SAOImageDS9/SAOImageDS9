$Id: README,v 1.3 2004/11/14 02:36:28 tang Exp $

fickle 2.04 by Jason Tang (tang@jtang.org)

This is a scanner generator program much like flex(1) is to C.  If you
have no desire to author Tcl programs, particularly those that
manipulate text, fickle is not for you.  A passing knowledge of flex
or some other lex-like program would be useful as that fickle uses
nearly identical syntax and commands as flex.  Two good references are
the flex(1) man page and the O'Reilly book 'lex & yacc' by Levine,
Mason, and Brown.

Examples of working fickle code may be found in the 'examples'
directory.  See the examples' README for further details.

fickle is protected by the GNU general public license.  See the file
COPYING for details.


USAGE
-----
fickle is to be used as a command-line utility that translates 'fickle
specification files' into valid Tcl code.  Invoke fickle like so:

$ tclsh fickle.tcl some_spec_file.f

and it will generate a file 'some_spec_file.tcl' containing the
resultant scanner.  fickle supports the more popular of flex's
options:

    Usage: fickle [options] [FILE]
      FILE     a fickle specification file

    Options:
      -h          print this help message and quit
      -v          be verbose while generating scanner
      -o FILE     specify name to write scanner
      -d          enable debug mode while running scanner
      -i          generate a case-insensitive scanner
      -l          keep track of line numbers in global variable yylineno
      -s          suppress default rule; unmatched input aborts with errors
      -t          write scanner to standard output
      -I          read input interactively
      -P PREFIX   change default yy prefix to PREFIX
      --version   print fickle version and quit

If no input files are given fickle reads from standard input.  Also
like flex fickle supports the following '%option' directives (and
their "no" counterparts):

  caseful or case-sensitive       opposite of -i option (default)
  caseless or case-insensitive    -i option
  debug                           -d option
  default                         opposite of -s option
  interactive                     -I option
  verbose                         -v option
  stack                           enables start states
  yylineno                        enables tracking of line numbers
  yywrap                          call [yywrap] upon end-of-file

In addition fickle has two additional directives:

  %buffersize NUM     set size of internal input buffer (default 1024)
  %option noheaders   strips fickle-generated comments from output file


CAPABILITIES
------------
fickle is capable of most of flex's functionality.  In addition to the
options listed above the following functions work how one would expect
within a Tcl environment:

  input, unput, yy_scan_string, yyless, yylex, yyrestart, yywrap,
  ECHO, YY_FLUSH_BUFFER, and YY_INPUT

as well as these global variables:

  ::yytext, ::yyleng, ::yyin, and ::yyout

With debug mode enabled (either -d flag or %option debug) fickle
adds a global variable ::yy_flex_debug.  Set this to non-zero to
display to standard error every time the scanner matches a pattern as
well as when it reaches the end of a file.

With start states enabled (%option stack) one now can call the
functions yy_push_state, yy_pop_state, yy_top_state, and BEGIN.  Like
flex fickle allows for both inclusionary (%s directive) and
exclusionary (%x) states.

With line numbers enabled (%option yylineno) fickle will keep track of
newlines within the input file.  The line number may be accessed
through the global variable ::yylineno.

See a generated file for full documentation of these fickle-supplied
functions, assuming that one did not call '%option noheaders'.


DIFFERENCES
-----------
fickle does its best to emulate flex but there are some important
differences to note.  The following functions/macros are not supported
by fickle:

 output, yymore, yy_*_buffer, REJECT, YY_CURRENT_BUFFER, or YY_DECL

nor does it support the declarations %T, %unused, or %used.  Unlike
flex, unput() is a procedure that takes accepts any string not just a
character at a time.

Textual substitutions of definitions is kind of blind, and will ignore
backslashes preceding opening braces.  For example, if there exists a
definition 'foo' then it would be substituted into the patterns
"{foo}" as well as "\{foo}".  Substitutions are performed by order of
appearance.  Thus if the result of one substitution creates a pattern
that looks like a second definition then a second substitution occurs.
To prevent this behavior place definitions that might result in
creating a valid name higher up in the file.  Furthermore fickle will
not issue any warnings whenever a pattern has an undefined name.

Interactive mode differs somewhat from flex.  fickle reads from
$::yyin a block of bytes at a time; by default this block is 1024
bytes though it may be changed with %buffersize.  This is akin to
flex's batch processing mode.  However this behavior is very
undesirable for interactive programs; fickle would block until a user
types in 1024 characters.  Instead when in interactive mode, set by
either the -I command line option or %interactive directive, fickle
reads a line at a time from $::yyin through the [gets] procedure.
Unlike flex, fickle defaults to batch mode and not interactive mode.
   
The start state INITIAL is exactly that -- the literal "INITIAL" and
not the value zero.  In addition fickle does not support start
condition scopes.

fickle calls Tcl's [regexp] to handle pattern matching, so any valid
Tcl regexp is valid under fickle.  This does lead to some
incompatiblities with flex-style regexps.  <<EOF>> is unsupported.
Circumflexes (^) may behave oddly; fickle tries to handle ^ sanely by
modifying its internal buffer whenever it matches newlines.  Finally,
Tcl regexps do not treat double quotation marks as metacharacters.
For example, given the regular expression "/*" the call:

  regexp -- {"/*"} $string

attempts to match any number of forward slashes rather than a C-style
comment token.  fickle rewrites patterns containing double quotes to
explicitly escape metacharacters within.  Therefore fickle instead
interprets the above pattern as:

  regexp -- {\/\*} $string


MISCELLANY
----------
fickle, like flex, allows the user to change all 'yy' prefaces through
the -P flag.  The argument to -P will automagically be downcased.
However, the pre-defined macro 'BEGIN' does not have a prefix.  To get
around this limitation it takes an optional second parameter which
will direct it to the correct parameter.  For example suppose one
invokes fickle with '-P zz'.  All internal calls to 'BEGIN' will set
"zz" as the second parameter.  Any of your code which calls 'BEGIN'
will need to pass "zz" as well, otherwise 'BEGIN' will default to
using the "yy" internally.

Finally, fickle will exhaust its internal buffer prior to calling
yywrap.  That means regular expressions cannot match across file
boundaries.
