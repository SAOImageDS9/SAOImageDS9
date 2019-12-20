# $Id: lalr_reduce_reduce.tac,v 1.1 2004/08/18 23:53:42 tang Exp $

# Below illustrates a grammar that is ambiguous by an LALR(1) parser
# but not an LR(1).  There is a reduce/reduce conflict given a viable
# prefix ac.  taccle resolves this by giving precedence to the first
# listed rule (A -> c).
#
# Reference:
#   Dragon book, page 238

%token a b c d e

%%

S: a A d | b B d | a B e | b A e ;

A: c ;
B: c ;
