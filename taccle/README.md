Copyright
---------
taccle itself is protected by the GNU General Public License.  See the
file COPYING for details.  Of course, any code you generate using
taccle is subject to whatever restrictions you place on it.


Availability
------------
A wiki page for taccle may be found at http://mini.net/tcl/taccle.
An archive of taccle files are available at http://tcl.jtang.org/taccle.


taccle README
-------------
taccle is another compiler compiler for the Tcl language.  It takes as
input a "taccle specification file"; from this taccle generates a Tcl
file that implements an LALR(1) parser.  The program brings to the Tcl
language what yacc and bison do for C and C++.

This release of taccle implements nearly all features of yacc:
 - #include filename
 - %define parse.error verbose declaration
 - %token and %start declarations
 - epsilon transitions (i.e., "empty" rules)
 - embedded (mid-rule) actions
 - literal tokens
 - symbol values and synthesized attributes
 - the error token and error recovery
 - shift/reduce and reduce/reduce conflict notification
 - operator precedence with %left, %right, %nonassoc, and %prec
 - functions yyerror, YYABORT, YYACCEPT, and yyclearin
 - infinite recursion detection

Features currently missing in taccle are:
 - inherited attributes
 
Because taccle uses the lset command it requires Tcl 8.4 or greater.

Be aware of the following differences between taccle and yacc:

1. taccle (and Tcl) has no concept of variable types.  Thus %union and
   %type declarations are no longer needed.

2. yacc uses variables $1, $2, etc for symbol values; it uses $$ for
   the synthesized attribute.  Although both $1 and $$ are legal
   variable references in Tcl the latter is more awkward; the
   expression `set $ foo' is not legal.  Instead of $$ use the name
   '_', as in `set _ foo'.  These variables' scopes are valid only
   within the context of an action.  See
   examples/simple_calculator.tac for an example.

   (The astute observer notes that using $_ for synthesized values is
   similar to Perl's use of the auto-variable $_.)

3. taccle has error handling just like bison.  It always declares the
   terminal `error' that is pushed onto the stack whenever it detects
   a syntax error.  Although yyclearin is implemented neither
   YYRECOVERING nor yyerrok are.  The example
   interactive_calculator.tac implements error handling.

4. Like yacc, taccle requires a token generator.  The examples use
   fickle (http://mini.net/tcl/fickle), though others are welcome.

5. taccle calls a global function yylex to fetch the next token.  This
   yylex function is expected to return the next token in the input
   stream, either a string or a number.  Normally this poses no
   problem except for the case of a literal zero.  Tcl makes no
   distinction between the integer zero and the string zero.  Because
   zero is reserved for the end of input marker, taccle will refuse
   grammars that employ literal zeros.  You can get around this by
   declaring `%token ZERO' and using that instead.

6. Another literal that causes all sorts of problems is the open brace
   '{'.  Because most things are represented internally as lists the
   presence of the brace breaks everything.  Thus taccle will refuse
   to parse grammars with this literal; you'll have to use a %token
   instead.

   
Using the Examples
------------------
Execute taccle as if it were yacc:

  $ tclsh ./taccle.tcl -d some_spec_file.tac

This will generate two files, some_spec_file.tcl and
some_spec_file.tab.tcl.  The first contains the actual parser code;
execute it by calling yyparse.  The latter file is file to be sourced
by the lexer, much akin to yacc's y.tab.h file.

The Makefile in the examples subdirectory will generate two simple
calculator programs.  You will need a copy of fickle (available at
http://mini.net/tcl/fickle) and may need to modify its location on
line 4 of the Makefile.  After filtering simple_calculator through
ficcle and taccle execute it like so:

  $ echo "6*9" | tclsh simple_calculator.tcl

If all goes well the program displays:

  Result is 54

A more interesting example is interactive_calculator.tcl.  This one is
designed to handle any arbitrary number of commands.  Upon errornous
equations it recovers by discarding the rest of the buffer.  Here is
an example session of it:

  $ tclsh interactive_calculator.tcl
  6*9
   = 54
  1++2++3
   = error
  1 + 2 + 3
   = 6

The final example, infix_calc.tcl, shows how to use operator
precedence to resolve shift/reduce conflicts.  It understands both
left associative operators (addition et al) as well as right
associative (exponentation).  Here is an example use:

  $ echo "2^2^2 - 10 * 2 + 6 / 3" | tclsh infix_calc.tcl
          -2
