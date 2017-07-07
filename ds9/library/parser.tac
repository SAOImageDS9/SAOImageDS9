%{
%}

%token INT_
%token REAL_
%token STRING_
%token SEXSTR_
%token HMSSTR_
%token DMSSTR_

%token 2MASSCMD_
%token 3DCMD_
%token AIP_
%token ALIGNCMD_
%token ARCMIN_
%token ARCSEC_
%token ASINH_
%token ASINHCMD_
%token AZIMUTH_
%token BACKGROUND_
%token BORDER_
%token CLOSE_
%token COLOR_
%token COMPASS_
%token COORD_
%token CROSSHAIR_
%token CURRENT_
%token DATASEC_
%token DEGREES_
%token ELEVATION_
%token EXP_
%token FALSE_
%token FRAME_
%token GLOBAL_
%token HIGHLITE_
%token HISTEQU_
%token HISTEQUCMD_
%token LIMITS_
%token LINEAR_
%token LINEARCMD_
%token LOCAL_
%token LOCK_
%token LOG_
%token LOGCMD_
%token MATCH_
%token METHOD_
%token MINMAX_
%token MIP_
%token MODE_
%token NAME_
%token NEW_
%token NO_
%token NONE_
%token OFF_
%token ON_
%token OPEN_
%token POW_
%token POWCMD_
%token SAVE_
%token SCALE_
%token SCALECMD_
%token SCALELIMITS_
%token SCOPE_
%token SEXAGESIMAL_
%token SINH_
%token SINHCMD_
%token SIZE_
%token SQUARED_
%token SQUAREDCMD_
%token SQRT_
%token SQRTCMD_
%token SURVEY_
%token TRUE_
%token UPDATE_
%token USER_
%token VIEW_
%token YES_
%token ZSCALE_
%token ZMAX_

%%

commands : commands command
 | command
 ;

command : 2MASSCMD_ {2MASSDialog} 2mass
 | 3DCMD_ {3DDialog} 3d
 | ALIGNCMD_ align
 | ASINHCMD_ {global scale; set scale(type) asinh; ChangeScale}
 | HISTEQUCMD_ {global scale; set scale(type) histequ; ChangeScale}
 | LINEARCMD_ {global scale; set scale(type) linear; ChangeScale}
 | LOGCMD_ {global scale; set scale(type) log; ChangeScale}
 | POWCMD_ {global scale; set scale(type) pow; ChangeScale}
 | SINHCMD_ {global scale; set scale(type) sinh; ChangeScale}
 | SQUAREDCMD_ {global scale; set scale(type) squared; ChangeScale}
 | SQRTCMD_ {global scale; set scale(type) sqrt; ChangeScale}
 | SCALECMD_ scale
 | STRING_ {puts "STRING: $::yylval"}
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
 | STRING_ {global dtwomass; set dtwomass(name) $1; IMGSVRApply dtwomass 1}
 | NAME_ STRING_ {global dtwomass; set dtwomass(name) $2; IMGSVRApply dtwomass 1}
 | COORD_ 2massCoord {IMGSVRApply dtwomass 1}
 | SIZE_ 2massSize
 | SAVE_ yesno {global dtwomass; set dtwomass(save) $2}
 | FRAME_ 2massFrame {global dtwomass; set dtwomass(mode) $2}
 | UPDATE_ FRAME_ {IMGSVRUpdate dtwomass; IMGSVRApply dtwomass 1}
 | UPDATE_ CROSSHAIR_ {IMGSVRCrosshair dtwomass; IMGSVRApply dtwomass 1}
 | SURVEY_ 2massSurvey {global dtwomass; set dtwomass(survey) $2}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
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

2massFrame : NEW_ {set _ new}
 | CURRENT_ {set _ current}
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
 | VIEW_ numeric numeric {global threed; set threed(az) $2; set threed(el) $3; 3DViewPoint}
 | AZIMUTH_ numeric {global threed; set threed(az) $2; 3DViewPoint}
 | ELEVATION_ numeric {global threed; set threed(el) $2; 3DViewPoint}
 | SCALE_ numeric {global threed; set threed(scale) $2; 3DScale}
 | METHOD_ 3dMethod {global threed; set threed(method) $2; 3DRenderMethod}
 | BACKGROUND_ 3dBackground {global threed; set threed(background) $2; 3DBackground}
 | BORDER_ 3dBorder
 | HIGHLITE_ 3dHighlite
 | COMPASS_ 3dCompass
 | OPEN_ {}
 | CLOSE_ {3DDestroyDialog}
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

align : {global current; set current(align) 1; AlignWCSFrame}
 | yesno {global current; set current(align) $1; AlignWCSFrame}
 ;

scale : scaleScales {global scale; set scale(type) $1; ChangeScale}
 | LOG_ scaleLog
 | DATASEC_ yesno
 | LIMITS_ scaleLimits
 | SCALELIMITS_ scaleLimits
 | MINMAX_ {global scale; set scale(mode) minmax; ChangeScaleMode}
 | ZSCALE_ {global scale; set scale(mode) zscale; ChangeScaleMode}
 | ZMAX_ {global scale; set scale(mode) zmax; ChangeScaleMode}
 | USER_ {global scale; set scale(mode) user; ChangeScaleMode}
 | MODE_ scaleMode {global scale; set scale(mode) $2; ChangeScaleMode}
 | MODE_ numeric {global scale; set scale(mode) $2; ChangeScaleMode}
 | LOCAL_ {global scale; set scale(scope) local; ChangeScaleScope}
 | GLOBAL_ {global scale; set scale(scope) global; ChangeScaleScope}
 | SCOPE_ scaleScope {global scale; set scale(scope) $2; ChangeScaleScope}
 | MATCH_ {MatchScaleCurrent} 
 | MATCH_ LIMITS_ {MatchScaleLimitsCurrent}
 | MATCH_ SCALELIMITS_ {MatchScaleLimitsCurrent}
 | LOCK_ {global scale; set scale(lock) 1; LockScaleCurrent} 
 | LOCK_ yesno {global scale; set scale(lock) $2; LockScaleCurrent}
 | LOCK_ LIMITS_ {global scale; set scale(lock,limits) 1; LockScaleLimitsCurrent} 
 | LOCK_ LIMITS_ scaleLockLimits
 | LOCK_ SCALELIMITS_ {global scale; set scale(lock,limits) 1; LockScaleLimitsCurrent} 
 | LOCK_ SCALELIMITS_ scaleLockLimits
 | OPEN_ {ScaleDialog}
 | CLOSE_ {ScaleDestroyDialog}
 ;

scaleScales : LINEAR_ {set _ linear}
 | POW_ {set _ pow}
 | SQRT_ {set _ sqrt}
 | SQUARED_ {set _ squared}
 | ASINH_ {set _ asinh}
 | SINH_ {set _ sinh}
 | HISTEQU_ {set _ histequ}
 ;

scaleLog : {global scale; set scale(type) log; ChangeScale}
 | EXP_ numeric {global scale; set scale(log) $2; ChangeScale}
 ;

scaleLimits: numeric numeric {global scale; set scale(min) $1; set scale(max) $2; ChangeScaleLimit}
 ;
	     
scaleLockLimits : yesno {global scale; set scale(lock,limits) $1; LockScaleLimitsCurrent}
 ;

scaleMode : MINMAX_ {set _ minmax}
 | ZSCALE_ {set _ zscale}
 | ZMAX_ {set _ zmax}
 ;

scaleScope : LOCAL_ {set _ local}
 | GLOBAL_ {set _ global}
 ;

%%

