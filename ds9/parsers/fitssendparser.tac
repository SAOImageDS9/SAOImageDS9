%{
%}
#include def.tin

#include wcssys.tin
#include skyframe.tin
#include rformat.tin
#include int.tin
#include string.tin

%start fitssend

%token BITPIX_
%token DEPTH_
%token GZ_
%token HEADER_
%token HEIGHT_
%token IMAGE_
%token KEYWORD_
%token RESAMPLE_
%token SIZE_
%token SLICE_
%token TABLE_
%token TYPE_
%token WIDTH_

%%

#include wcssys.trl
#include skyframe.trl
#include rformat.trl

fitssend: WIDTH_ {ProcessSendCmdCurrent "get fits width"}
 | HEIGHT_ {ProcessSendCmdCurrent "get fits height"}
 | DEPTH_ {ProcessSendCmdCurrent "get fits depth"}
 | BITPIX_ {ProcessSendCmdCurrent "get fits bitpix"}
# backward compatibility
 | TYPE_ {FitsSendCmdType}
 | SIZE_ size
 | HEADER_ header
 | opt gz {FitsSendCmd $1}
;

size : {ProcessSendCmdCurrent "get fits size"}
 | wcssys {ProcessSendCmdCurrent "get fits size $1 fk5 degrees"}
 | skyframe {ProcessSendCmdCurrent "get fits size wcs $1 degrees"}
 | rformat {ProcessSendCmdCurrent "get fits size wcs fk5 $1"}
 | wcssys skyframe {ProcessSendCmdCurrent "get fits size $1 $2 degrees"}
 | wcssys rformat {ProcessSendCmdCurrent "get fits size $1 fk5 $2"}
 | skyframe rformat {ProcessSendCmdCurrent "get fits size wcs $1 $2"}
 | wcssys skyframe rformat {ProcessSendCmdCurrent "get fits size $1 $2 $3"}
 ;

header : {ProcessSendCmdSend {.txt} "get fits header 1"}
 | INT_ {ProcessSendCmdSend {.txt} "get fits header $1"}
 | KEYWORD_ STRING_ {ProcessSendCmdCurrent "get fits header keyword \{$2\}"}

# has to be quoted because of common tokens
 | INT_ KEYWORD_ STRING_ {ProcessSendCmdCurrent "get fits header $1 keyword \{$3\}"}
 | KEYWORD_ BITPIX_ {ProcessSendCmdCurrent "get fits header keyword \{BITPIX\}"}
 | INT_ KEYWORD_ BITPIX_ {ProcessSendCmdCurrent "get fits header $1 keyword \{BITPIX\}"}
 ;

opt : {set _ image}
 | TABLE_ {set _ table}
 | IMAGE_ {set _ image}
 | SLICE_ {set _ slice}
# backward compatibility
 | RESAMPLE_ {set _ resample}
 ;

gz :
 | GZ_
 ;

%%

proc fitssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
