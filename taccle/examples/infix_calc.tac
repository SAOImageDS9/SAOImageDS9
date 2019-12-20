# $Id: infix_calc.tac,v 1.1 2004/09/29 16:23:28 tang Exp $

# This example demonstrates how taccle handles operator precedence.
# The code is shamelessly borrowed from the GNU Bison info manual.

# taccle Declarations
%token ID NEWLINE
%left '-' '+'
%left '*' '/'
%left NEG       # negation--unary minus
%right '^'      # exponentiation

# Grammar follows
%%
input:    # empty string
        | input line
;

line:     NEWLINE
        | exp NEWLINE        { puts [format "\t%.10g" $1] }
;

exp:      ID                 { set _ $1                   }
        | exp '+' exp        { set _ [expr {$1 + $3}]     }
        | exp '-' exp        { set _ [expr {$1 - $3}]     }
        | exp '*' exp        { set _ [expr {$1 * $3}]     }
        | exp '/' exp        { set _ [expr {$1 / $3}]     }
        | '-' exp  %prec NEG { set _ [expr {-1.0 * $2}]   }
        | exp '^' exp        { set _ [expr {pow($1, $3)}] }
        | '(' exp ')'        { set _ $2                   }
;
%%

source simple_scanner.tcl
yyparse
