%{
%}

#include yesno.tin
#include font.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include rformat.tin
#include numeric.tin
#include sexstr.tin
#include string.tin

%start command

%token 1AND2_
%token 1NOT2_
%token 1ONLY_
%token 2NOT1_
%token 2ONLY_
%token ADD_
%token ALLCOLS_
%token ALLROWS_
%token ANGLE_
%token ARROW_
%token BOX_
%token BOXCIRCLE_
%token BROADCAST_
%token CANCEL_
%token CDS_
%token CIRCLE_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token CONDITION_
%token COORDINATE_
%token CROSS_
%token CROSSHAIR_
%token CSV_
%token DEC_
%token DECR_
%token DIAMOND_
%token EDIT_
%token ELLIPSE_
%token EXPORT_
%token ERROR_
%token FILE_
%token FILTER_
%token FUNCTION_
%token HEADER_
%token HIDE_
%token IMPORT_
%token INCR_
%token LOAD_
%token LOCATION_
%token MATCH_
%token MAXROWS_
%token NAME_
%token NEW_
%token PANTO_
%token PLOT_
%token POINT_
%token PRINT_
%token PSKY_
%token PSYSTEM_
%token RA_
%token REGIONS_
%token REMOVE_
%token RETRIEVE_
%token RETURN_
%token SAMP_
%token SAVE_
%token SB_
%token SEND_
%token SERVER_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SIZE2_
%token SKY_
%token SKYFORMAT_
%token SORT_
%token STARBASE_
%token SYMBOL_
%token SYSTEM_ 
%token TEXT_
%token TSV_
%token UNIQUE_
%token UNITS_
%token UPDATE_
%token VOT_
%token XML_

%token CDS_
%token ADAC_
%token CADC_
%token CAMBRIDGE_
%token SAO_
%token UKIRT_
%token IUCAA_
%token BEJING_
%token SAAO_

%%

#include yesno.trl
#include font.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl
#include rformat.trl
#include numeric.trl

command : catalog
 | catalog {yyclearin; YYACCEPT} STRING_
 ;

catalog : NEW_ {CATTool}
# backward compatibility
 | {CATTool}
 | FILE_ STRING_ {CatalogCmdLoad $2 VOTRead}
 | LOAD_ STRING_ {CatalogCmdLoad $2 VOTRead}
 | IMPORT_ reader STRING_ {CatalogCmdLoad $3 $2}

 | {if {![CatalogCmdCheck]} {cat::YYABORT}} catCmd
 | STRING_ {CatalogCmdRef $1}
 | STRING_ {CatalogCmdRef $1} catCmd
# special case
# backward compatibility
 | SAO_ {CatalogCmdRef sao}
 | SAO_ {CatalogCmdRef sao} catCmd
# backward compatibility
 | CDS_ STRING_ {CatalogCmdRef $2}
# backward compatibility
 | CDS_ STRING_ {CatalogCmdRef $2} catCmd
 ;

catCmd : coordinate
 | ALLCOLS_ yesno {ProcessCmdCVAR allcols $2}
 | ALLROWS_ yesno {ProcessCmdCVAR allrows $2}
 | CANCEL_ {global cvarname; ARCancel $cvarname}
 | CLEAR_ {global cvarname; CATOff $cvarname}
 | CLOSE_ {global cvarname; CATDestroy $cvarname}
# backward compatibilty
 | COORDINATE_ coordinate
 | CROSSHAIR_ {global cvarname; CATCrosshair $cvarname}
 | EDIT_ yesno {ProcessCmdCVAR edit $2 CATEdit}
 | EXPORT_ writer STRING_ {CatalogCmdSave $3 $2}
 | FILTER_ filter
 | HEADER_ {global cvarname; CATHeader $cvarname}
# backward compatibilty
 | HIDE_ {ProcessCmdCVAR show 0 CATGenerate}
 | LOCATION_ INT_ {ProcessCmdCVAR loc $2 CATGenerate}
 | MATCH_ match
 | MAXROWS_ INT_ {ProcessCmdCVAR max $2}
 | NAME_ STRING_ {ProcessCmdCVAR name $2}
 | PANTO_ yesno {ProcessCmdCVAR panto $2}
 | PLOT_ STRING_ STRING_ STRING_ STRING_ {ProcessCmdCVAR4 plot,x $2 plot,y $3 plot,xerr $4 plot,yerr $5 CATPlotGenerate}
 | PRINT_ {global cvarname; CATPrint $cvarname}
 | PSKY_ skyframe {ProcessCmdCVAR psky $2 CATGenerate}
 | PSYSTEM_ wcssys {ProcessCmdCVAR psystem $2 CATGenerate}
 | REGIONS_ {global cvarname; CATGenerateRegions $cvarname}
 | RETRIEVE_ {global cvarname; CATApply $cvarname 1}
 | SAMP_ samp
 | SAVE_ STRING_ {CatalogCmdSave $2 VOTWrite}
 | SERVER_ server {ProcessCmdCVAR server $2}
 | SHOW_ yesno {ProcessCmdCVAR show $2 CATGenerate}
 | SIZE_ numeric numeric rformat {ProcessCmdCVAR4 width $2 height $3 rformat $4 rformat,msg $4}
# | SIZE_ numeric numeric rformat {CatalogCmdSize $2 $3 $4}
 | SKY_ skyframe {CatalogCmdSkyframe $2}
 | SKYFORMAT_ skyformat {ProcessCmdCVAR skyformat $2}
 | SORT_ sort
 | SYMBOL_ {ProcessCmdCVAR row 1} symbol
 | SYMBOL_ INT_ {CagtalogCmdCat row $2} symbol
 | SYSTEM_ wcssys {CatalogCmdSystem $2}
 | UPDATE_ {global cvarname; CATUpdate $cvarname}
 | 'x' STRING_ {ProcessCmdCVAR colx $2 CATGenerate}
 | RA_ STRING_ {ProcessCmdCVAR colx $2 CATGenerate}
 | 'y' STRING_ {ProcessCmdCVAR coly $2 CATGenerate}
 | DEC_ STRING_ {ProcessCmdCVAR coly $2 CATGenerate}
 ;

coordinate : numeric numeric {ProcessCmdCVAR3 x $1 y $2 sky fk5}
 | numeric numeric skyframe {ProcessCmdCVAR3 x $1 y $2 sky $3}
 | SEXSTR_ SEXSTR_ {ProcessCmdCVAR3 x $1 y $2 sky fk5}
 | SEXSTR_ SEXSTR_ skyframe {ProcessCmdCVAR3 x $1 y $2 sky $3}
 ;

filter : LOAD_ STRING_ {CatalogCmdFilterLoad $2}
 | STRING_ {ProcessCmdCVAR filter $1 CATTable}
 ;

match : {CatalogCmdMatch}
 | ERROR_ numeric rformat {ProcessCmdSet2 icat error $2 eformat $3}
 | FUNCTION_ matchFunction {ProcessCmdSet icat function $2}
 | UNIQUE_ yesno {ProcessCmdSet icat unique $2}
 | RETURN_ matchReturn {ProcessCmdSet icat return $2}
 | STRING_ STRING_ {CatalogCmdMatchParams "cat$1" "cat$2"}
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

samp : {CatalogCmdSAMP}
 | BROADCAST_ {CatalogCmdSAMP}
 | SEND_ STRING_ {CatalogCmdSAMPSend $2}
 ;

server : CDS_ {set _ cds}
 | ADAC_ {set _ adac}
 | CADC_ {set _ cadc}
 | CAMBRIDGE_ {set _ cambridge}
 | SAO_ {set _ sao}
 | UKIRT_ {set _ ukirt}
 | IUCAA_ {set _ iucaa}
 | BEJING_ {set _ bejing}
 | SAAO_ {set _ saao}
 ;

sort : STRING_ {ProcessCmdCVAR sort $1; ProcessCmdCVAR sort,dir "-increasing" CATTable}
 | STRING_ sortDir {ProcessCmdCVAR sort $1; ProcessCmdCVAR sort,dir $2 CATTable}
 ;

sortDir : INCR_ {set _ "-increasing"}
 | DECR_ {set _ "-decreasing"}
 ;

symbol : ADD_ {CatalogCmdSymbolAdd}
 | REMOVE_ {CatalogCmdSymbolRemove}
 | LOAD_ STRING_ {CatalogCmdSymbolLoad $2}
 | SAVE_ STRING_ {CatalogCmdSymbolSave $2}

 | ANGLE_ numeric {CatalogCmdSymbol angle $2}
 | COLOR_ STRING_ {CatalogCmdSymbol color $2}
 | CONDITION_ STRING_ {CatalogCmdSymbol condition $2}
 | FONT_ font {CatalogCmdSymbol font $2}
 | FONTSIZE_ INT_ {CatalogCmdSymbol fontsize $2}
 | FONTWEIGHT_ fontWeight {CatalogCmdSymbol fontweight $2}
 | FONTSLANT_ fontSlant {CatalogCmdSymbol fontslant $2}
# backward compatibility
 | FONTSTYLE_ fontStyle {CatalogCmdSymbolFontStyle $2}
 | SIZE_ numeric {CatalogCmdSymbol size $2}
 | SIZE2_ numeric {CatalogCmdSymbol size2 $2}
 | SHAPE_ symbolShape {CatalogCmdSymbol shape $2}
 | TEXT_ STRING_ {CatalogCmdSymbol text $2}
 | UNITS_ STRING_ {CatalogCmdSymbol units $2}
 ;

symbolShape : CIRCLE_ {set _ circle}
 | ELLIPSE_ {set _ ellipse}
 | BOX_ {set _ box}
 | TEXT_ {set _ text}

 | POINT_ {set _ "circle point"}
 | CIRCLE_ POINT_ {set _ "circle point"}
 | BOX_ POINT_ {set _ "box point"}
 | DIAMOND_ {set _ "diamond point"}
 | DIAMOND_ POINT_ {set _ "diamond point"}
 | CROSS_ {set _ "cross point"}
 | CROSS_ POINT_ {set _ "cross point"}
 | 'x' {set _ "x point"}
 | 'x' POINT_ {set _ "x point"}
 | ARROW_ {set _ "arrow point"}
 | ARROW_ POINT_ {set _ "arrow point"}
 | BOXCIRCLE_ {set _ "boxcircle point"}
 | BOXCIRCLE_ POINT_ {set _ "boxcircle point"}

# backward compatibility
 | STRING_ {set _ $1}
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
