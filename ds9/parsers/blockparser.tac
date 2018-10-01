%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token CLOSE_
%token FIT_
%token IN_
%token LOCK_
%token MATCH_
%token OPEN_
%token OUT_
%token TO_

%%

#include yesno.trl
#include numeric.trl

command : block
 | block {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

block : OPEN_ {BlockDialog}
 | CLOSE_ {BlockDestroyDialog}
 | MATCH_ {MatchBlockCurrent}
 | LOCK_ yesno {ProcessCmdSet block lock $2 LockBlockCurrent}
 | IN_ {Block .5 .5}
 | OUT_ {Block 2 2}
 | TO_ blockTo
 | numeric {Block $1 $1}
 | numeric numeric {Block $1 $2}
 ;

blockTo : numeric {ProcessCmdSet block factor "$1 $1" ChangeBlock}
 | numeric numeric {ProcessCmdSet block factor "$1 $2" ChangeBlock}
 | FIT_ {BlockToFit}
 ; 

%%

proc block::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
