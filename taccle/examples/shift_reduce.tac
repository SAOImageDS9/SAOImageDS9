# $Id: shift_reduce.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# This is an example of a shift/reduce conflict.  Eventually I will
# add operator precedence and associativity, but for now taccle simply
# gives higher precedence to shifts.
#
# Reference:
#   lex & yacc, pages 229-230 and 236

%token TERMINAL

%%

expr: TERMINAL
    | expr '+' expr
    | expr '-' expr
    | expr '*' expr ;
