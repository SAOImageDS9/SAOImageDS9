# $Id: shift_reduce2.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# Here is one final shift/reduce conflict.  taccles resolves the
# problem by giving precedence to a shift.
#
# Reference:
#   lex & yacc, pages 226-227

%token A R

%%

start: x1
  |    x2
  |    y R;

x1: A R;
x2: A z;
y:  A;
z:  R;
