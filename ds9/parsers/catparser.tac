%{
%}
#include def.tin

#include reader.tin
#include yesno.tin
#include fonts.tin
#include wcssys.tin
#include skyframe.tin
#include wcsformat.tin
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
%token CURRENT_
%token DEC_
%token DECR_
%token DIAMOND_
%token EDIT_
%token ELLIPSE_
%token EXPORT_
%token ERROR_
%token FILE_
%token FILTER_
%token FITS_
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
%token RADIUS_
%token REGIONS_
%token REMOVE_
%token RETRIEVE_
%token RETURN_
%token SAMP_
%token SAVE_
%token SEND_
%token SERVER_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SIZE2_
%token SKY_
%token SKYFORMAT_
%token SORT_
%token SYMBOL_
%token SYSTEM_ 
%token TEXT_
%token UNIQUE_
%token UNITS_
%token UPDATE_

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

#include reader.trl
#include writer.trl
#include yesno.trl
#include fonts.trl
#include wcssys.trl
#include skyframe.trl
#include wcsformat.trl
#include numeric.trl

command : catalog
 | catalog {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

catalog : NEW_ {CATTool}
# backward compatibility
 | {CATTool}

 | STRING_ {CatalogCmdRetrieve $1}
# backward compatibility
 | SAO_ {CatalogCmdRetrieve sao}
# backward compatibility
 | CDS_ STRING_ {CatalogCmdRetrieve $2}

 | LOAD_ STRING_ {CatalogCmdLoad $2 VOTRead}
# backward compatibility
 | FILE_ STRING_ {CatalogCmdLoad $2 VOTRead}

 | IMPORT_ reader STRING_ {CatalogCmdLoad $3 $2}
 | IMPORT_ FITS_ STRING_ {CatalogCmdLoad $3 FITSRead}
 | EXPORT_ writer STRING_ {TBLCmdSave $3 $2}

 | ALLCOLS_ yesno {ProcessCmdCVAR allcols $2}
 | ALLROWS_ yesno {ProcessCmdCVAR allrows $2}
 | CANCEL_ {ProcessCmdCVAR0 ARCancel}
 | CLEAR_ {ProcessCmdCVAR0 CATOff}
 | CLOSE_ {ProcessCmdCVAR0 CATDestroy}
 | COORDINATE_ coordinate
# backward compatibilty
 | coordinate
 | CROSSHAIR_ {ProcessCmdCVAR0 TBLCrosshair}
 | CURRENT_ STRING_ {CatalogCmdRef $2}
# backward compatibility
 | CURRENT_ SAO_ {CatalogCmdRef sao}
 | EDIT_ yesno {ProcessCmdCVAR edit $2 CATEdit}
 | FILTER_ filter
 | HEADER_ {ProcessCmdCVAR0 CATHeader}
# backward compatibilty
 | HIDE_ {ProcessCmdCVAR show 0 CATGenerate}
 | LOCATION_ INT_ {ProcessCmdCVAR loc $2 CATGenerate}
 | MATCH_ match
 | MAXROWS_ INT_ {ProcessCmdCVAR max $2}
 | NAME_ STRING_ {ProcessCmdCVAR name $2}
 | PANTO_ yesno {ProcessCmdCVAR panto $2}
 | PLOT_ STRING_ STRING_ STRING_ STRING_ {ProcessCmdCVAR4 plot,x $2 plot,y $3 plot,xerr $4 plot,yerr $5 CATPlotGenerate}
 | PRINT_ {ProcessCmdCVAR0 TBLCmdPrint}
 | PSKY_ skyframe {ProcessCmdCVAR psky $2 CATGenerate}
 | PSYSTEM_ wcssys {ProcessCmdCVAR psystem $2 CATGenerate}
 | RADIUS_ numeric rformat {TBLCmdSize $2 $3}
 | REGIONS_ {ProcessCmdCVAR0 CATGenerateRegions}
 | RETRIEVE_ {global cvarname; CATApply $cvarname 1}
 | SAMP_ samp
 | SAVE_ STRING_ {TBLCmdSave $2 VOTWrite}
 | SERVER_ server {ProcessCmdCVAR server $2}
 | SHOW_ yesno {ProcessCmdCVAR show $2 CATGenerate}
# backward compatibility
 | SIZE_ numeric numeric rformat {TBLCmdSize [expr ($2+$3)/2.] $4}
 | SKY_ skyframe {CatalogCmdSkyframe $2}
 | SKYFORMAT_ skyformat {ProcessCmdCVAR skyformat $2}
 | SORT_ sort
 | SYMBOL_ {ProcessCmdCVAR row 1} symbol
 | SYMBOL_ INT_ {CatalogCmdCat row $2} symbol
 | SYSTEM_ wcssys {CatalogCmdSystem $2}
 | UPDATE_ {ProcessCmdCVAR0 TBLUpdate}
 | 'x' STRING_ {ProcessCmdCVAR colx $2 CATGenerate}
 | RA_ STRING_ {ProcessCmdCVAR colx $2 CATGenerate}
 | 'y' STRING_ {ProcessCmdCVAR coly $2 CATGenerate}
 | DEC_ STRING_ {ProcessCmdCVAR coly $2 CATGenerate}
 ;

coordinate : numeric numeric {TBLCmdCoord $1 $2 fk5}
 | numeric numeric skyframe {TBLCmdCoord $1 $2 $3}
 | SEXSTR_ SEXSTR_ {TBLCmdCoord $1 $2 fk5}
 | SEXSTR_ SEXSTR_ skyframe {TBLCmdCoord $1 $2 $3}
 ;

filter : LOAD_ STRING_ {TBLCmdFilterLoad $2}
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

 | ANGLE_ symbolCol {CatalogCmdSymbol angle $2}
 | COLOR_ STRING_ {CatalogCmdSymbol color $2}
 | CONDITION_ STRING_ {CatalogCmdSymbol condition $2}
 | FONT_ font {CatalogCmdSymbol font $2}
 | FONTSIZE_ INT_ {CatalogCmdSymbol fontsize $2}
 | FONTWEIGHT_ fontWeight {CatalogCmdSymbol fontweight $2}
 | FONTSLANT_ fontSlant {CatalogCmdSymbol fontslant $2}
# backward compatibility
 | FONTSTYLE_ fontStyle {CatalogCmdSymbolFontStyle $2}
 | SIZE_ symbolCol {CatalogCmdSymbol size $2}
 | SIZE2_ symbolCol {CatalogCmdSymbol size2 $2}
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
 
symbolCol : numeric {set _ $1}
 | STRING_ {set _ $1}
 ;

%%

proc cat::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
