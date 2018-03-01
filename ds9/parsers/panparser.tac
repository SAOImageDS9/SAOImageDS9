%{
namespace eval pan {
  variable xx {}
  variable yy {}
}
%}

%start command

%token CMD_

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
| pan CMD_ {pan::yyclearin}
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

coord : numeric numeric {set pan::xx $1; set pan::yy $2}
 ;

skycoord : SEXSTR_ SEXSTR_ {set pan::xx $1; set pan::yy $2}
 ;

pan : OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 | TO_ panto
 | coord {Pan $pan::xx $pan::yy physical}
 | coord coordsys {Pan $pan::xx $pan::yy $2}
 | coord wcssys {Pan $pan::xx $pan::yy $2 fk5}
 | coord wcssys skyframe {Pan $pan::xx $pan::yy $2 $3}
 | coord skyframe {Pan $pan::xx $pan::yy wcs $3}
 | skycoord {Pan $pan::xx $pan::yy wcs fk5}
 | skycoord wcssys {Pan $pan::xx $pan::yy $2 fk5}
 | skycoord wcssys skyframe {Pan $pan::xx $pan::yy $2 $3}
 | skycoord skyframe {Pan $pan::xx $pan::yy wcs $2}
 ;

panto : coord {PanTo $pan::xx $pan::yy physical}
 | coord coordsys {PanTo $pan::xx $pan::yy $2}
 | coord wcssys {PanTo $pan::xx $pan::yy $2 fk5}
 | coord wcssys skyframe {PanTo $pan::xx $pan::yy $2 $3}
 | coord skyframe {PanTo $pan::xx $pan::yy wcs $3}
 | skycoord {PanTo $pan::xx $pan::yy wcs fk5}
 | skycoord wcssys {PanTo $pan::xx $pan::yy $2 fk5}
 | skycoord wcssys skyframe {PanTo $pan::xx $pan::yy $2 $3}
 | skycoord skyframe {PanTo $pan::xx $pan::yy wcs $2}
 ;

%%

proc pan::yyerror {msg} {
     puts stderr "$pan::yy_current_buffer"
     puts stderr [format "%*s" $pan::index_ ^]
     puts stderr "$msg"
}
