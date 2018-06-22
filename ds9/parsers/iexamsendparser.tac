%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include string.tin
#include int.tin

%start iexamsend

%token ANY_
%token BUTTON_
%token COORDINATE_
%token DATA_
%token KEY_
%token VALUE_

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl

iexamsend : dest cmd
 | cmd
 ;

cmd : COORDINATE_ coordinate
 | DATA_ data
# backward compatibility
 | VALUE_ data
 | STRING_ {IExamSendCmdMacro $1}
 ;

dest : BUTTON_ {IExamSendCmdDest button}
 | KEY_ {IExamSendCmdDest key}
 | ANY_ {IExamSendCmdDest any}
 ;

coordinate : {IExamSendCmdCoord image fk5 degrees}
 | coordsys {IExamSendCmdCoord $1 fk5 degrees}
 | wcssys {IExamSendCmdCoord $1 fk5 degrees}
 | skyframe {IExamSendCmdCoord wcs $1 degrees}
 | wcssys skyframe {IExamSendCmdCoord $1 $2 degrees}
 | wcssys skyformat {IExamSendCmdCoord $1 fk5 $2}
 | skyframe skyformat {IExamSendCmdCoord wcs $1 $2}
 | wcssys skyframe skyformat {IExamSendCmdCoord $1 $2 $3}
 ;
 
data : {IExamSendCmdData 1 1}
 | INT_ INT_ {IExamSendCmdData $1 $2}
 ;

%%

proc iexamsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
