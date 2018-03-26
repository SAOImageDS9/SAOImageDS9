%{
	global icat
	set ref [lindex $icat(cats) end]
	global cvarname
	set cvarname $ref
%}

#include yesno.tin
#include skyformat.tin
#include skyframe.tin
#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token 1AND2_
%token 1NOT2_
%token 1ONLY_
%token 2NOT1_
%token 2ONLY_
%token ALLCOLS_
%token ALLROWS_
%token BROADCAST_
%token CANCEL_
%token CDS_
%token CLEAR_
%token CLOSE_
%token COORDINATE_
%token CROSSHAIR_
%token CSV_
%token DEC_
%token EDIT_
%token EXPORT_
%token ERROR_
%token FILE_
%token FILTER_
%token FUNCTION_
%token HEADER_
%token HIDE_
%token IMPORT_
%token LOAD_
%token LOCATION_
%token MATCH_
%token MAXROWS_
%token NAME_
%token PANTO_
%token PLOT_
%token PRINT_
%token PSKY_
%token PSYSTEM_
%token RA_
%token REGIONS_
%token RETRIEVE_
%token RETURN_
%token SAMP_
%token SAVE_
%token SB_
%token SEND_
%token SERVER_
%token SHOW_
%token SIZE_
%token SKY_
%token SKYFORMAT_
%token SORT_
%token STARBASE_
%token SYMBOL_
%token SYSTEM_ 
%token TSV_
%token UNIQUE_
%token UPDATE_
%token VOT_
%token XML_

%%

#include yesno.trl
#include skyformat.trl
#include skyframe.trl
#include coords.trl
#include numeric.trl

command : catalog
 | catalog {yyclearin; YYACCEPT} STRING_
 ;

catalog : {CATTool}
 | FILE_ STRING_ {CatalogCmdLoad $2 VOTRead}
 | LOAD_ STRING_ {CatalogCmdLoad $2 VOTRead}
 | IMPORT_ reader STRING_ {CatalogCmdLoad $3 $2}
 | STRING_ {CatalogCmdRef $1} cat
 # backward compatibility
 | CDS_ STRING_ {CatalogCmdRef $2} cat
 ;

cat :
 | coordinate
 | ALLCOLS_ {global cvarname; global $cvarname; set ${cvarname}(allcols) 1}
 | ALLROWS_ {global cvarname; global $cvarname; set ${cvarname}(allrows) 1}
 | CANCEL_ {global cvarname; ARCancel $cvarname}
 | CLEAR_ {global cvarname; CATOff $cvarname}
 | CLOSE_ {global cvarname; CATDestroy $cvarname}
 | COORDINATE_ coordinate
 | CROSSHAIR_ {global cvarname; CATCrosshair $cvarname}
 | EDIT_ yesno {global cvarname; global $cvarname; set ${cvarname}(edit) $2; CATEdit $cvarname}
 | EXPORT_ writer STRING_ {global cvarname; CatalogCmdSave $cvarname $3 $2}
 | FILTER_ filter
 | HEADER_ {global cvarname; CATHeader $cvarname}
 | HIDE_ {global cvarname; global $cvarname; set ${cvarname}(show) 0; CATGenerate $cvarname}
 | LOCATION_ INT_ {global cvarname; global $cvarname; set ${cvarname}(loc) $2; CATGenerate $cvarname}
 | MATCH_ match
 | MAXROWS_ INT_ {global cvarname; global $cvarname; set ${cvarname}(max) $2}
 | NAME_ STRING_ {global cvarname; global $cvarname; set ${cvarname}(name) $2}
 | PANTO_ yesno {global cvarname; global $cvarname; set ${cvarname}(panto) $2}
 | PLOT_ STRING_ STRING_ STRING_ STRING_ {global cvarname; global $cvarname; set ${cvarname}(plot,x) $2; set ${cvarname}(plot,y) $3; set ${cvarname}(plot,xerr) $4; set ${cvarname}(plot,yerr) $5; CATPlotGenerate $cvarname}
 | PRINT_ {global cvarname; CATPrint $cvarname}
 | PSKY_ skyframe {global cvarname; global $cvarname; set ${cvarname}(psky) $2; CATGenerate $cvarname}
 | PSYSTEM_ wcssys {global cvarname; global $cvarname; set ${cvarname}(psystem) $2; CATGenerate $cvarname}
 | REGIONS_ {global cvarname; CATGenerateRegions $cvarname}
 | RETRIEVE_ {global cvarname; CATApply $cvarname 1}
 | SAMP_ samp
 | SAVE_ STRING_ {global cvarname; CatalogCmdSave $cvarname $2 VOTWrite}
 | SERVER_ STRING_ {global cvarname; global $cvarname; set ${cvarname}(server) $2}
 | SHOW_ {global cvarname; global $cvarname; set ${cvarname}(show) 1; CATGenerate $cvarname}
 | SIZE_ numeric numeric skyformat {global cvarname; global $cvarname; set ${cvarname}(width) $1; set ${cvarname}(height) $2; set ${cvarname}(rformat) $3; set ${cvarname}(rformat,msg) $3}
 | SKY_ skyframe {global cvarname; global $cvarname; set ${cvarname}(sky) $1; CoordMenuButtonCmd $cvarname system sky [list CATWCSMenuUpdate $cvarname]}
 | SKYFORMAT_ skyformat {global cvarname; global $cvarname; set ${cvarname}(skyformat) $2}
 | SORT_ 
 | SYMBOL_ 
 | SYMBOL_ INT_ 
 | SYSTEM_ 
 | UPDATE_ {global cvarname; CATUpdate $cvarname}
 | 'x' STRING_ {global cvarname; global $cvarname; set ${cvarname}(colx) $2; CATGenerate $cvarname}
 | RA_ STRING_ {global cvarname; global $cvarname; set ${cvarname}(colx) $2; CATGenerate $cvarname}
 | 'y' STRING_ {global cvarname; global $cvarname; set ${cvarname}(coly) $2; CATGenerate $cvarname}
 | DEC_ STRING_ {global cvarname; global $cvarname; set ${cvarname}(coly) $2; CATGenerate $cvarname}
 ;

coordinate : numeric numeric {global cvarname; global $cvarname; set ${cvarname}(x) $1; set ${cvarname}(y) $2; set ${cvarname}(sky) fk5}
 | numeric numeric skyframe {global cvarname; global $cvarname; set ${cvarname}(x) $1; set ${cvarname}(y) $2; set ${cvarname}(sky) $3}
 | SEXSTR_ SEXSTR_ {global cvarname; global $cvarname; set ${cvarname}(x) $1; set ${cvarname}(y) $2; set ${cvarname}(sky) fk5}
 | SEXSTR_ SEXSTR_ skyframe {global cvarname; global $cvarname; set ${cvarname}(x) $1; set ${cvarname}(y) $2; set ${cvarname}(sky) $3}
 ;

filter : LOAD_ STRING_ {global cvarname; CatalogCmdFilter $cvarname $2}
 | STRING_ {global cvarname; global $cvarname; set ${cvarname}(filter) $1; CATable $cvarname}
 ;

match : {CatalogCmdMatch}
 | ERROR_ numeric skyformat {global icat; set icat(error) $2; set icat(eformat) $3}
 | FUNCTION_ matchFunction {global icat;  set icat(function) $2}
 | UNIQUE_ yesno {global icat; set icat(unique) $2}
 | RETURN_ matchReturn {global icat;  set icat(return) $2}
 | STRING_ STRING_ {CatalogCmdMatchParams $1 $2}
 ;

matchFunction : 1AND2_ {set _ 1and2}
 | 1NOT2_ {set _ 1not2}
 | 2NOT1_ {set _ 2not1}
 ;

matchReturn : 1AND2_ {set _ 1and2}
 | 1ONLY_ {set _ 1only}
 | 2ONLY_ {set _ 2only}
 ;

reader : XML_ {set _ VOTRead}
 | VOT_ {set _ VOTRead}
 | SB_ {set _ starbase_read}
 | STARBASE_ {set _ starbase_read}
 | CSV_ {set _ TSVRead}
 | TSV_ {set _ TSVRead}
 ;

samp : {global cvarname; SAMPSendTableLoadVotable {} $cvarname}
 | BROADCAST_ {global cvarname; SAMPSendTableLoadVotable {} $cvarname}
 | SEND_ STRING_ {CatalogSAMPCmd $2}
 ;

writer : XML_ {set _ VOTWrite}
 | VOT_ {set _ VOTWrite}
 | SB_ {set _ starbase_write}
 | STARBASE_ {set _ starbase_write}
 | CSV_ {set _ TSVWrite}
 | TSV_ {set _ TSVWrite}
 ;

%%

proc cat::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
