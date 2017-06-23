%{
%}

%token 2MASS_
%token 3D_
%token ABOUT_
%token ALIGN_
%token ANALYSIS_
%token ARRAY_
%token ASINH_
%token CLOSE_
%token COORD_
%token FALSE_
%token FRAME_
%token NAME_
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

yesno : YES_ {set _ 1}
 | TRUE_ {set _ 1}
 | ON_ {set _ 1}
 | NO_ {set _ 0}
 | FALSE_ {set _ 0}
 | OFF_ {set _ 0}
 ;

2mass : OPEN_
 | CLOSE_ {ARDestroy dtwomass}
 | SAVE_ yesno {global dtwomass; set dtwomass(save) $2}
 | FRAME_
 | SURVEY_
 | SIZE_
 | PIXELS_
 | UPDATE_
 | COORD_
 | NAME_
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

