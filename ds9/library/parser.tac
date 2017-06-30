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
%token AIP_
%token ALIGN_
%token ANALYSIS_
%token ARCMIN_
%token ARCSEC_
%token ARRAY_
%token ASINH_
%token AZIMUTH_
%token BACKGROUND_
%token BORDER_
%token CLOSE_
%token COLOR_
%token COMPASS_
%token COORD_
%token CROSSHAIR_
%token CURRENT_
%token DEGREES_
%token ELEVATION_
%token FALSE_
%token FRAME_
%token HIGHLITE_
%token METHOD_
%token MIP_
%token NAME_
%token NEW_
%token NO_
%token NONE_
%token OFF_
%token ON_
%token OPEN_
%token SAVE_
%token SCALE_
%token SEXAGESIMAL_
%token SIZE_
%token SURVEY_
%token TRUE_
%token UPDATE_
%token VIEW_
%token YES_

%%

commands : commands command
 | command
 ;

command : 2MASS_ {2MASSDialog} 2mass
 | 3D_ {3DDialog} 3d
 | ABOUT_ about
 | ALIGN_ align
 | ANALYSIS_ analysis
 | ARRAY_ array
 | ASINH_ asinh
 | numeric {puts "numeric: $1"}
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
 | NAME_ STRING_ {global dtwomass; set dtwomass(name) $2; IMGSVRApply dtwomass 1}
 | STRING_ {global dtwomass; set dtwomass(name) $1; IMGSVRApply dtwomass 1}
 ;

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

3d : {Create3DFrame}
 | OPEN_ {}
 | CLOSE_ {3DDestroyDialog}
 | AZIMUTH_ numeric {global threed; set threed(az) $2; 3DViewPoint}
 | ELEVATION_ numeric {global threed; set threed(el) $2; 3DViewPoint}
 | VIEW_ numeric numeric {global threed; set threed(az) $2; set threed(el) $3; 3DViewPoint}
 | SCALE_ numeric {global threed; set threed(scale) $2; 3DScale}
 | METHOD_ 3dMethod {global threed; set threed(method) $2; 3DRenderMethod}
 | BACKGROUND_ 3dBackground {global threed; set threed(background) $2; 3DBackground}
 | HIGHLITE_ 3dHighlite
 | BORDER_ 3dBorder
 | COMPASS_ 3dCompass
 ;

3dMethod : MIP_ {set _ mip}
 | AIP_ {set _ aip}
 ;

3dBackground : NONE_ {set _ none}
 | AZIMUTH_ {set _ azimuth}
 | ELEVATION_ {set _ elevation}
 ;

3dHighlite : yesno {global threed; set threed(highlite) $1; 3DHighlite}
 | COLOR_ STRING_ {global threed; set threed(highlite,color) $2; 3DHighliteColor}
 ;

3dBorder : yesno {global threed; set threed(border) $1; 3DBorder}
 | COLOR_ STRING_ {global threed; set threed(border,color) $2; 3DBorderColor}
 ;

3dCompass : yesno {global threed; set threed(compass) $1; 3DCompass}
 | COLOR_ STRING_ {global threed; set threed(compass,color) $2; 3DCompassColor}
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

