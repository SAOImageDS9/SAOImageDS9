/* Copyright (C) 1999-2018
 * Smithsonian Astrophysical Observatory, Cambridge, MA, USA
 * For conditions of distribution and use, see copyright notice in "copyright"
 */

%option noyywrap
%option caseless
%option never-interactive
%option c++

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>

  #include "util.h"
  #include "parser.H"

  extern YYSTYPE* frlval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

about		{return ABOUT_;}
aip		{return AIP_;}
alloc		{return ALLOC_;}
allocgz		{return ALLOCGZ_;}
align		{return ALIGN_;}
all		{return ALL_;}
alt		{return ALT_;}
amplifier	{return AMPLIFIER_;}
analysis	{return ANALYSIS_;}
angle		{return ANGLE_;}
annulus		{return ANNULUS_;}
append		{return APPEND_;}
arcmin		{return ARCMIN_;}
arcsec		{return ARCSEC_;}
array		{return ARRAY_;}
arrow		{return ARROW_;}
asinh		{return ASINH_;}
ast		{return AST_;}
auto		{return AUTO_;}
aux		{return AUX_;}
average		{return AVERAGE_;}
axes            {return AXES_;}
azimuth         {return AZIMUTH_;}
b1950		{return B1950_;}
back		{return BACK_;}
background	{return BACKGROUND_;}
base		{return BASE_;}
bbox		{return BBOX_;}
begin		{return BEGIN_;}
bg		{return BG_;}
big	        {return BIGENDIAN_;}
bigendian	{return BIGENDIAN_;}
bin		{return BIN_;}
bitpix		{return BITPIX_;}
blend           {return BLEND_;}
block		{return BLOCK_;}
border		{return BORDER_;}
box		{return BOX_;}
boxannulus	{return BOXANNULUS_;}
boxcar		{return BOXCAR_;}
boxcircle	{return BOXCIRCLE_;}
bpanda		{return BPANDA_;}
buffer		{return BUFFER_;}
bw		{return BW_;}
callback	{return CALLBACK_;}
canvas		{return CANVAS_;}
catalog		{return CATALOG_;}
celestial	{return CELESTIAL_;}
center		{return CENTER_;}
centroid	{return CENTROID_;}
channel		{return CHANNEL_;}
ciao		{return CIAO_;}
circle		{return CIRCLE_;}
clear		{return CLEAR_;}
clip		{return CLIP_;}
color		{return COLOR_;}
colour		{return COLOR_;}
colorbar	{return COLORBAR_;}
colourbar	{return COLORBAR_;}
colormap	{return COLORMAP_;}
colourmap	{return COLORMAP_;}
colorscale	{return COLORSCALE_;}
colourscale	{return COLORSCALE_;}
colorspace	{return COLORSPACE_;}
colourspace	{return COLORSPACE_;}
cols		{return COLS_;}
column		{return COLUMN_;}
command		{return COMMAND_;}
compass		{return COMPASS_;}
composite	{return COMPOSITE_;}
compress	{return COMPRESS_;}
contour		{return CONTOUR_;}
contrast	{return CONTRAST_;}
coordinates	{return COORDINATES_;}
copy            {return COPY_;}
count		{return COUNT_;}
crop		{return CROP_;}
cross		{return CROSS_;}
cpanda		{return CPANDA_;}
create		{return CREATE_;}
crosshair	{return CROSSHAIR_;}
cube		{return CUBE_;}
cursor		{return CURSOR_;}
cut		{return CUT_;}
cmyk		{return CMYK_;}
darken          {return DARKEN_;}
dash		{return DASH_;}
dashlist	{return DASHLIST_;}
data		{return DATA_;}
datamin		{return DATAMIN_;}
datasec		{return DATASEC_;}
debug		{return DEBUG_;}
degrees		{return DEGREES_;}
default		{return DEFAULT_;}
delete		{return DELETE_;}
depth		{return DEPTH_;}
detector	{return DETECTOR_;}
diamond		{return DIAMOND_;}
dim		{return DIM_;}
ds9		{return DS9_;}
ecliptic	{return ECLIPTIC_;}
elevation       {return ELEVATION_;}
elliptic	{return ELLIPTIC_;}
ellipse		{return ELLIPSE_;}
ellipseannulus	{return ELLIPSEANNULUS_;}
edit		{return EDIT_;}
end		{return END_;}
envi		{return ENVI_;}
epanda		{return EPANDA_;}
epsilon         {return EPSILON_;}
equatorial      {return EQUATORIAL_;}
erase		{return ERASE_;}
ext		{return EXT_;}
factor		{return FACTOR_;}
false		{return FALSE_;}
file		{return FILE_;}
fill            {return FILL_;}
filter		{return FILTER_;}
fit		{return FIT_;}
fits		{return FITS_;}
fitsy		{return FITSY_;}
fixed		{return FIXED_;}
fk4		{return FK4_;}
fk5		{return FK5_;}
font		{return FONT_;}
format          {return FORMAT_;}
footprint       {return FOOTPRINT_;}
from		{return FROM_;}
front		{return FRONT_;}
full		{return FULL_;}
function	{return FUNCTION_;}
galactic	{return GALACTIC_;}
gaussian	{return GAUSSIAN_;}
get		{return GET_;}
global		{return GLOBAL_;}
graphics	{return GRAPHICS_;}
gray		{return GRAY_;}
grid		{return GRID_;}
gz		{return GZ_;}
handle		{return HANDLE_;}
has		{return HAS_;}
head		{return HEAD_;}
header		{return HEADER_;}
height		{return HEIGHT_;}
hide		{return HIDE_;}
highlite	{return HIGHLITE_;}
histequ		{return HISTEQU_;}
histogram	{return HISTOGRAM_;}
horizontal	{return HORIZONTAL_;}
icrs		{return ICRS_;}
id		{return ID_;}
iis		{return IIS_;}
image		{return IMAGE_;}
include		{return INCLUDE_;}
incr		{return INCR_;}
info		{return INFO_;}
iteration	{return ITERATION_;}
iraf		{return IRAF_;}
irafmin		{return IRAFMIN_;}
j2000		{return J2000_;}
key		{return KEY_;}
keyword		{return KEYWORD_;}
label		{return LABEL_;}
length		{return LENGTH_;}
level		{return LEVEL_;}
lighten         {return LIGHTEN_;}
little	        {return LITTLEENDIAN_;}
littleendian	{return LITTLEENDIAN_;}
line		{return LINE_;}
linear		{return LINEAR_;}
list		{return LIST_;}
load		{return LOAD_;}
local		{return LOCAL_;}
log		{return LOG_;}
macosx		{return MACOSX_;}
magnifier	{return MAGNIFIER_;}
match           {return MATCH_;}
map		{return MAP_;}
mark		{return MARK_;}
marker		{return MARKER_;}
mask		{return MASK_;}
message		{return MESSAGE_;}
method		{return METHOD_;}
minmax		{return MINMAX_;}
minor		{return MINOR_;}
mip		{return MIP_;}
mmap		{return MMAP_;}
mmapincr	{return MMAPINCR_;}
mode		{return MODE_;}
mosaic		{return MOSAIC_;}
motion		{return MOTION_;}
move		{return MOVE_;}
name		{return NAME_;}
nan		{return NAN_;}
native          {return NATIVE_;}
naxes		{return NAXES_;}
new		{return NEW_;}
next		{return NEXT_;}
no		{return NO_;}
none		{return NONE_;}
nonnan		{return NONNAN_;}
nonzero		{return NONZERO_;}
now		{return NOW_;}
nrrd            {return NRRD_;}
number		{return NUMBER_;}
object		{return OBJECT_;}
off		{return OFF_;}
on		{return ON_;}
only		{return ONLY_;}
option		{return OPTION_;}
orient		{return ORIENT_;}
pan		{return PAN_;}
panda		{return CPANDA_;}
panner		{return PANNER_;}
parser		{return PARSER_;}
paste		{return PASTE_;}
perf		{return PERF_;}
photo		{return PHOTO_;}
physical	{return PHYSICAL_;}
pixel		{return PIXEL_;}
plot2d		{return PLOT2D_;}
plot3d		{return PLOT3D_;}
point		{return POINT_;}
pointer		{return POINTER_;}
polygon		{return POLYGON_;}
postscript	{return POSTSCRIPT_;}
pow		{return POW_;}
precision       {return PRECISION_;}
print		{return PRINT_;}
preserve	{return PRESERVE_;}
projection	{return PROJECTION_;}
property	{return PROPERTY_;}
pros		{return PROS_;}
publication	{return PUBLICATION_;}
query           {return QUERY_;}
radial		{return RADIAL_;}
radius		{return RADIUS_;}
range           {return RANGE_;}
region		{return REGION_;}
replace		{return REPLACE_;}
resample	{return RESAMPLE_;}
rescan		{return RESCAN_;}
reset		{return RESET_;}
resolution	{return RESOLUTION_;}
rgb		{return RGB_;}
root		{return ROOT_;}
rotate		{return ROTATE_;}
ruler		{return RULER_;}
sample		{return SAMPLE_;}
saoimage	{return SAOIMAGE_;}
saotng		{return SAOTNG_;}
save		{return SAVE_;}
scale		{return SCALE_;}
scan		{return SCAN_;}
scientific	{return SCIENTIFIC_;}
scope		{return SCOPE_;}
screen          {return SCREEN_;}
segment		{return SEGMENT_;}
select		{return SELECT_;}
set		{return SET_;}
sexagesimal	{return SEXAGESIMAL_;}
shape		{return SHAPE_;}
shared		{return SHARED_;}
shift		{return SHIFT_;}
shmid		{return SHMID_;}
show		{return SHOW_;}
sigma           {return SIGMA_;}
sinh		{return SINH_;}
size		{return SIZE_;}
slice		{return SLICE_;}
smmap		{return SMMAP_;}
smooth		{return SMOOTH_;}
socket		{return SOCKET_;}
socketgz	{return SOCKETGZ_;}
source		{return SOURCE_;}
sqrt		{return SQRT_;}
squared		{return SQUARED_;}
sshared		{return SSHARED_;}
stats		{return STATS_;}
status		{return STATUS_;}
sum		{return SUM_;}
system		{return SYSTEM_;}
table		{return TABLE_;}
tag		{return TAG_;}
template	{return TEMPLATE_;}
text		{return TEXT_;}
threads		{return THREADS_;}
3d		{return THREED_;}
threshold	{return THRESHOLD_;}
thick		{return THICK_;}
transparency	{return TRANSPARENCY_;}
to		{return TO_;}
toggle		{return TOGGLE_;}
tophat		{return TOPHAT_;}
true		{return TRUE_;}
type		{return TYPE_;}
undo		{return UNDO_;}
unload		{return UNLOAD_;}
unhighlite 	{return UNHIGHLITE_;}
unselect 	{return UNSELECT_;}
update		{return UPDATE_;}
user		{return USER_;}
value		{return VALUE_;}
var		{return VAR_;}
view		{return VIEW_;}
vector		{return VECTOR_;}
version		{return VERSION_;}
vertex		{return VERTEX_;}
vertical	{return VERTICAL_;}
warp		{return WARP_;}
wcs		{return WCS_;}
wcsa		{return WCSA_;}
wcsb		{return WCSB_;}
wcsc		{return WCSC_;}
wcsd		{return WCSD_;}
wcse		{return WCSE_;}
wcsf		{return WCSF_;}
wcsg		{return WCSG_;}
wcsh		{return WCSH_;}
wcsi		{return WCSI_;}
wcsj		{return WCSJ_;}
wcsk		{return WCSK_;}
wcsl		{return WCSL_;}
wcsm		{return WCSM_;}
wcsn		{return WCSN_;}
wcso		{return WCSO_;}
wcsp		{return WCSP_;}
wcsq		{return WCSQ_;}
wcsr		{return WCSR_;}
wcss		{return WCSS_;}
wcst		{return WCST_;}
wcsu		{return WCSU_;}
wcsv		{return WCSV_;}
wcsw		{return WCSW_;}
wcsx		{return WCSX_;}
wcsy		{return WCSY_;}
wcsz		{return WCSZ_;}
wcs0		{return WCS0_;}
wfpc2		{return WFPC2_;}
width		{return WIDTH_;}
win32		{return WIN32_;}
xml		{return XML_;}
xy		{return XY_;}
yes		{return YES_;}
zero		{return ZERO_;}
zmax		{return ZMAX_;}
zscale		{return ZSCALE_;}
zoom		{return ZOOM_;}

[+-]?{D}+	{ // Integer
		  frlval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  frlval->real = atof(yytext);
		  return REAL;
		}

0[xX][0-9a-fA-F]+ { // Pointer
		  frlval->ptr = (void*)strtoul(yytext,NULL,16);
		  return POINTER;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  frlval->real = atof(yytext);
		  return ANGDEGREE;
		}	

[+-]{D}+"."?r |
[+-]{D}*"."{D}+r { // radians
		  yytext[yyleng-1] = '\0';
		  frlval->real = atof(yytext);
		  return ANGRADIAN;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // sexagesimal
		  int ll = yyleng <(FRBUFSIZE-1) ? yyleng:(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext,ll);
	          frlval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(FRBUFSIZE-1) ? yyleng:(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext,ll);
	          frlval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(FRBUFSIZE-1) ? yyleng:(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext,ll);
	          frlval->str[ll] = '\0';
		  return DMSSTR;
		}	

\"[^\"]*\" | 
\'[^\']*\'	{ // Quoted String
		  int ll = (yyleng-2)<(FRBUFSIZE-1) ? (yyleng-2):(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext+1,ll); // skip the " " 
	          frlval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(FRBUFSIZE-1) ? (yyleng-2):(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext+1,ll); // skip the '{'
	          frlval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[!-~][!-~]+	{ // General String-- at least 2 printable chars
		  int ll = yyleng <(FRBUFSIZE-1) ? yyleng:(FRBUFSIZE-1);
		  strncpy(frlval->str,yytext,ll);
	          frlval->str[ll] = '\0';
		  return STRING;
		}

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return toupper(yytext[0]);
		}

%%
