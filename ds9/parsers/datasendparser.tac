%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include yesno.tin
#include numeric.tin
#include sexstr.tin

%start datasend

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include yesno.trl
#include numeric.trl

datasend : coordsys numeric numeric INT_ INT_ yesno
   {DataSendCmd $1 fk5 $2 $3 $4 $5 $6}
 | wcssys numeric numeric numeric numeric yesno
   {DataSendCmd $1 fk5 $2 $3 $4 $5 $6}
 | skyframe numeric numeric numeric numeric yesno
   {DataSendCmd wcs $1 $2 $3 $4 $5 $6}
 | wcssys skyframe numeric numeric numeric numeric yesno
   {DataSendCmd $1 $2 $3 $4 $5 $6 $7}

 | wcssys SEXSTR_ SEXSTR_ numeric numeric yesno
   {DataSendCmd $1 fk5 $2 $3 $4 $5 $6}
 | skyframe SEXSTR_ SEXSTR_ numeric numeric yesno
   {DataSendCmd wcs $1 $2 $3 $4 $5 $6}
 | wcssys skyframe SEXSTR_ SEXSTR_ numeric numeric yesno
   {DataSendCmd $1 $2 $3 $4 $5 $6 $7}
 ;

%%

proc datasend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
