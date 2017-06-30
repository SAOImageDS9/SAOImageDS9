%{
%}

%token INT_
%token REAL_
%token STRING_
%token SEXSTR_
%token HMSSTR_
%token DMSSTR_

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
%token SEXAGESIMAL_
%token SIZE_
%token SURVEY_
%token TRUE_
%token UPDATE_
%token YES_

%%

commands : commands command
 | command
 ;

command : 2MASS_ {2MASSDialog} 2mass
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

optSex : {set _ sexagesimal}
 | SEXAGESIMAL_ {set _ sexagesimal}
 ;

optDeg : {set _ degrees}
 | DEGREES_ {set _ degrees}
 ;

2mass : {IMGSVRApply dtwomass 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | SAVE_ yesno {global dtwomass; set dtwomass(save) $2}
 | FRAME_ newCurrent {global dtwomass; set dtwomass(mode) $2}
 | SIZE_ 2massSize
 | SURVEY_ 2massSurvey {global dtwomass; set dtwomass(survey) $2}
 | UPDATE_ FRAME_ {IMGSVRUpdate dtwomass; IMGSVRApply dtwomass 1}
 | UPDATE_ CROSSHAIR_ {IMGSVRCrosshair dtwomass; IMGSVRApply dtwomass 1}
 | COORD_ 2massCoord {IMGSVRApply dtwomass 1}
 | NAME_
 ;
# default

2massCoord : SEXSTR_ SEXSTR_ optSex {
  global dtwomass
  set dtwomass(x) $1
  set dtwomass(y) $2
  set dtwomass(skyformat) $3
  set dtwomass(skyformat,msg) $3
 }
 | numeric numeric optDeg {
  global dtwomass
  set dtwomass(x) $1
  set dtwomass(y) $2
  set dtwomass(skyformat) $3
  set dtwomass(skyformat,msg) $3
 }
 ;

2massSize : numeric numeric {
   global dtwomass
   set dtwomass(width) $1
   set dtwomass(height) $2
 }
 | numeric numeric degArcminArcsec {
   global dtwomass
   set dtwomass(width) $1
   set dtwomass(height) $2
   set dtwomass(rformat) $3
   set dtwomass(rformat,msg) $3
 }
 ;

2massSurvey : 'j' {set _ $1}
 | 'h' {set _ $1}
 | 'k' {set _ $1}
 ;

3d :  {puts "*** 3D ***"}
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

