# $Id: reduce_reduce2.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# Here is another reduce/reduce conflict.
#
# Reference:
#   lex & yacc, page 225

%token A B C Z

%%

start: A B x Z  | y Z;

x: C;
y: A B C;
