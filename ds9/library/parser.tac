%{
%}

%token 2MASS_
%token 3D_
%token ABOUT_
%token ALIGN_
%token ANALYSIS_
%token ARRAY_
%token ASINH_

%token NO_

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

2mass : {puts "*** 3D ***"}
 ;

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

