%{
%}

%token INT_
%token REAL_
%token STRING_

%token 2MASS_
%token 3D_
%token ABOUT_
%token ALIGN_
%token ANALYSIS_
%token ARCMIN_
%token ARCSEC_
%token ARRAY_
%token ASINH_
%token CLOSE_
%token COORD_
%token CROSSHAIR_
%token CURRENT_
%token DEGREES_
%token FALSE_
%token FRAME_
%token NAME_
%token NEW_
%token NO_
%token OFF_
%token ON_
%token OPEN_
%token PIXELS_
%token SAVE_
%token SIZE_
%token SURVEY_
%token TRUE_
%token UPDATE_
%token YES_

%%

commands : commands command
 | command
 ;

command : 2MASS_ 2mass
 | 3D_ 3d
 | ABOUT_ about
 | ALIGN_ align
 | ANALYSIS_ analysis
 | ARRAY_ array
 | ASINH_ asinh
 ;

numeric	: REAL_ {set _ $1}
 | INT_ {set _ $1}
 ;

yesno : YES_ {set _ 1}
 | TRUE_ {set _ 1}
 | ON_ {set _ 1}
 | NO_ {set _ 0}
 | FALSE_ {set _ 0}
 | OFF_ {set _ 0}
 | '1' {set _ 1}
# | '0' {set _ 0}
 ;

newCurrent : NEW_ {set _ new}
 | CURRENT_ {set _ current}
 ;

degArcminArcsec : DEGREES_ {set _ degrees}
 | ARCMIN_ {set _ arcmin}
 | ARCSEC_ {set _ arcsec}
 ;

2mass : OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | SAVE_ yesno {global dtwomass; set dtwomass(save) $2}
 | FRAME_ newCurrent {global dtwomass; set dtwomass(mode) $2}
 | SURVEY_ STRING_ {global dtwomass; set dtwomass(survey) $2}
 | SIZE_ numeric numeric {
   global dtwomass
   set dtwomass(width) $2
   set dtwomass(height) $3
 }
 | SIZE_ numeric numeric degArcminArcsec {
   global dtwomass
   set dtwomass(width) $2
   set dtwomass(height) $3
   set dtwomass(rformat) $4
   set dtwomass(rformat,msg) $4
 }
 | UPDATE_ FRAME_ {IMGSVRUpdate dtwomass; IMGSVRApply dtwomass 1}
 | UPDATE_ CROSSHAIR_ {IMGSVRCrosshair dtwomass; IMGSVRApply dtwomass 1}
 | COORD_
 | NAME_ STRING_
 ;
# {}
# default

3d :  {puts "*** 2MASS ***"}
 ;

about : {puts "*** ABOUT ***"}
 ;

align : {puts "*** ALIGN ***"}
 ;

analysis : {puts "*** ANALYSIS ***"}
 ;

array : {puts "*** ARRAY ***"}
 ;

asinh : {puts "*** ASINH ***"}
 ;

%%

