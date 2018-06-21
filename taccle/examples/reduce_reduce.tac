# $Id: reduce_reduce.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# This is an example of where a lookahead of just one symbol is
# insufficient.  taccle finds a reduce/reduce conflict and resolves it
# by giving precedence to the first rule (cart_animal -> horse).
#
# Reference:
#   lex & yacc, page 55

%token and cart plow horse goat ox

%%

phrase: cart_animal and cart
 | work_animal and plow
 ;

cart_animal: horse | goat ;

work_animal: horse | ox ;
