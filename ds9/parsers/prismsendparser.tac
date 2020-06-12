%{
%}
#include def.tin

#include string.tin

%start prismsend

%token ABOUT_

%%

prismsend : {ProcessSendCmdGet iprism prisms}
 | {if {![PrismCmdCheck]} {prism::YYABORT}} prismCmd
 | STRING_ {if {![PrismCmdRef $1]} {prism::YYABORT}} prismCmd
 ;

prismCmd : ABOUT_
 ;

%%

proc prismsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
