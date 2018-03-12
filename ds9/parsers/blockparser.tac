%{
%}

#include yesno.tin
#include base.tin

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
#include base.trl

command : block
 | block {yyclearin; YYACCEPT} CMD_
 ;

block : OPEN_ {BlockDialog}
 | CLOSE_ {BlockDestroyDialog}
 | MATCH_ {MatchBlockCurrent}
 | LOCK_ yesno {global block; set block(lock) $2; LockBlockCurrent}
 | IN_ {Block .5 .5}
 | OUT_ {Block 2 2}
 | TO_ blockTo
 | numeric {Block $1 $1}
 | numeric numeric {Block $1 $2}
 ;

blockTo : numeric {global block; set block(factor) "$1 $1"; ChangeBlock}
 | numeric numeric {global block; set block(factor) "$1 $2"; ChangeBlock}
 | FIT_ {BlockToFit}
 ; 

%%

proc block::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
