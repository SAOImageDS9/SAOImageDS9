%{
%}

%start command

%token INT_
%token REAL_
%token STRING_
%token SEXSTR_

%token CLOSE_
%token OPEN_
%token TO_

%token IMAGE_
%token PHYSICAL_
%token AMPLIFIER_
%token DETECTOR_

%token WCS_
%token WCSA_
%token WCSB_
%token WCSC_
%token WCSD_
%token WCSE_
%token WCSF_
%token WCSG_
%token WCSH_
%token WCSI_
%token WCSJ_
%token WCSK_
%token WCSL_
%token WCSM_
%token WCSN_
%token WCSO_
%token WCSP_
%token WCSQ_
%token WCSR_
%token WCSS_
%token WCST_
%token WCSU_
%token WCSV_
%token WCSW_
%token WCSX_
%token WCSY_
%token WCSZ_

%token FK4_
%token FK5_
%token ICRS_
%token GALACTIC_
%token ECLIPTIC_
%token J2000_
%token B1950_

%%

command : pan
| pan {yyclearin; YYACCEPT} STRING_
;

numeric	: INT_ {set _ $1}
 | REAL_ {set _ $1}
 ;

coordsys : IMAGE_ {set _ image}
 | PHYSICAL_ {set _ physical}
 | AMPLIFIER_ {set _ amplifier}
 | DETECTOR_ {set _ detector}
 ;

#| error {
#   yyerror "must be: image|physical|amplifier|detector"
#   YYABORT
# }

wcssys : WCS_ {set _ wcs}
 | WCSA_ {set _ wcsa}
 | WCSB_ {set _ wcsb}
 | WCSC_ {set _ wcsc}
 | WCSD_ {set _ wcsd}
 | WCSE_ {set _ wcse}
 | WCSF_ {set _ wcsf}
 | WCSG_ {set _ wcsg}
 | WCSH_ {set _ wcsh}
 | WCSI_ {set _ wcsi}
 | WCSJ_ {set _ wcsj}
 | WCSK_ {set _ wcsk}
 | WCSL_ {set _ wcsl}
 | WCSM_ {set _ wcsm}
 | WCSN_ {set _ wcsn}
 | WCSO_ {set _ wcso}
 | WCSP_ {set _ wcsp}
 | WCSQ_ {set _ wcsq}
 | WCSR_ {set _ wcsr}
 | WCSS_ {set _ wcss}
 | WCST_ {set _ wcst}
 | WCSU_ {set _ wcsu}
 | WCSV_ {set _ wcsv}
 | WCSW_ {set _ wcsw}
 | WCSX_ {set _ wcsx}
 | WCSY_ {set _ wcsy}
 | WCSZ_ {set _ wcsz}
 ;

# | error {
#   yyerror "must be: wcs|wcsa...wcsz"
#   YYABORT
# }

skyframe : FK4_ {set _ fk4}
 | B1950_ {set _ fk4}
 | FK5_ {set _ fk5}
 | J2000_ {set _ fk5}
 | ICRS_ {set _ icrs}
 | GALACTIC_ {set _ galactic}
 | ECLIPTIC_ {set _ ecliptic}
 ;

# | error {
#   yyerror "must be: fk4|fk5|icrs|galactic|ecliptic"
#   YYABORT
# }

pan : OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 | TO_ panto
 | numeric numeric {Pan $1 $2 physical fk5}
 | numeric numeric coordsys {Pan $1 $2 $3 fk5}
 | numeric numeric wcssys {Pan $1 $2 $3 fk5}
 | numeric numeric skyframe {Pan $1 $2 wcs $3}
 | numeric numeric wcssys skyframe {Pan $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ {Pan $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys {Pan $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe {Pan $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe {Pan $1 $2 $3 $4}
 ;

panto : numeric numeric {PanTo $1 $2 physical fk5}
 | numeric numeric coordsys {PanTo $1 $2 $3 fk5}
 | numeric numeric wcssys {PanTo $1 $2 $3 fk5}
 | numeric numeric skyframe {PanTo $1 $2 wcs $3}
 | numeric numeric wcssys skyframe {PanTo $1 $2 $3 $4}
 | SEXSTR_ SEXSTR_ {PanTo $1 $2 wcs fk5}
 | SEXSTR_ SEXSTR_ wcssys {PanTo $1 $2 $3 fk5}
 | SEXSTR_ SEXSTR_ skyframe {PanTo $1 $2 wcs $3}
 | SEXSTR_ SEXSTR_ wcssys skyframe {PanTo $1 $2 $3 $4}
 ;

%%

proc pan::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     
     Error "$msg: [lindex $yy_current_buffer [expr $yycnt-1]]"
}
