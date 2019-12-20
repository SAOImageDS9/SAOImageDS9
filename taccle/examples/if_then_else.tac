# $Id: if_then_else.tac,v 1.1 2004/08/18 23:53:42 tang Exp $

# The classical if/then/else ambiguity.  taccle resolves this by
# giving higher precedence to shifting else.
#
# References:
#   Dragon book, page 250
#   lex & yacc, pages 233-235

%token IF ELSE TERMINAL

%%

stmt: IF '(' cond ')' stmt
 | IF '(' cond ')' stmt ELSE stmt
 | TERMINAL;

cond: TERMINAL;
