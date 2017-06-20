%{
source $ds9(root)/library/lex.tcl
%}

%token ABOUT_

%%

command : ABOUT_
	;

%%

#yyparse
