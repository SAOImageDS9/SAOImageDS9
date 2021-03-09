// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Base* fr}
%lex-param {frFlexLexer* ll}
%parse-param {frFlexLexer* ll}

%{
#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::FK5;

static unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
		Marker::EDIT | Marker::MOVE | Marker::ROTATE | 
		Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
static unsigned short currentProps;
static char currentColor[16];
static int currentWidth;
static int currentDash[2];
static char currentFont[32];
static char currentText[80];

static List<Tag> taglist;
static List<CallBack> cblist;

static unsigned short propQMask;
static unsigned short propQValue;

static void setProps(unsigned short* props, unsigned short prop, int value);
%}

%union {
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  void* ptr;
  int integer;
  double real;
  double vector[3];
  int dash[2];
}

%type <real> numeric
%type <integer> yesno

%type <real> angle
%type <real> optangle
%type <real> sexagesimal
%type <real> hms
%type <real> dms
%type <vector> coord
%type <integer> coordSystem
%type <integer> wcsSystem
%type <integer> internalSystem
%type <integer> skyFrame
%type <integer> skyFormat
%type <integer> skyDist

%type <integer> markerProperty
%type <integer> markerCallBack
%type <integer> markerFormat
%type <integer> markerLayer
%type <integer> maskType
%type <integer> maskBlend
%type <integer> pscolorspace
%type <integer> scaleType
%type <integer> minmaxMode
%type <integer> contourClipMode
%type <integer> contourClipScope
%type <integer> shmType
%type <integer> contourMethod
%type <integer> layerType
%type <integer> gridType
%type <integer> fileNameType
%type <integer> smoothFunction
%type <integer> pointShape
%type <integer> pointSize
%type <integer> endian
%type <integer> renderMethod
%type <integer> renderBackground
%type <integer> analysisMethod
%type <integer> analysisParam
%type <integer> cutMethod

%token <real> REAL
%token <integer> INT
%token <str> STRING
%token <ptr> POINTER

%token <real> ANGDEGREE
%token <real> ANGRADIAN

%token <str> SEXSTR
%token <str> HMSSTR
%token <str> DMSSTR

%token ABOUT_
%token AIP_
%token ALLOC_
%token ALLOCGZ_
%token ALIGN_
%token ALL_
%token ALT_
%token AMPLIFIER_
%token ANALYSIS_
%token ANGLE_
%token ANNULUS_
%token APPEND_
%token ARCMIN_
%token ARCSEC_
%token ARRAY_
%token ARROW_
%token ASINH_
%token AST_
%token AUTO_
%token AUX_
%token AVERAGE_
%token AXES_
%token AZIMUTH_
%token B1950_
%token BACK_
%token BACKGROUND_
%token BASE_
%token BBOX_
%token BEGIN_
%token BG_
%token BIG_
%token BIGENDIAN_
%token BIN_
%token BITPIX_
%token BLEND_
%token BLOCK_
%token BORDER_
%token BOX_
%token BOXANNULUS_
%token BOXCAR_
%token BOXCIRCLE_
%token BPANDA_
%token BUFFER_
%token BW_
%token CALLBACK_
%token CANVAS_
%token CATALOG_
%token CELESTIAL_
%token CENTER_
%token CENTROID_
%token CHANNEL_
%token CIRCLE_
%token CIAO_
%token CLEAR_
%token CLIP_
%token COLOR_
%token COLORBAR_
%token COLORMAP_
%token COLORSCALE_
%token COLORSPACE_
%token COLS_
%token COLUMN_
%token COMMAND_
%token COMPASS_
%token COMPOSITE_
%token COMPRESS_
%token CONTOUR_
%token CONTRAST_
%token COORDINATES_
%token COPY_
%token COUNT_
%token CPANDA_
%token CREATE_
%token CROP_
%token CROSS_
%token CROSSHAIR_
%token CUBE_
%token CURSOR_
%token CUT_
%token CMYK_
%token DARKEN_
%token DASH_
%token DASHLIST_
%token DATA_
%token DATAMIN_
%token DATASEC_
%token DEBUG_
%token DEGREES_
%token DEFAULT_
%token DELETE_
%token DEPTH_
%token DETECTOR_
%token DIAMOND_
%token DIM_
%token DS9_
%token EDIT_
%token ECLIPTIC_
%token ELEVATION_
%token ELLIPTIC_
%token ELLIPSE_
%token ELLIPSEANNULUS_
%token END_
%token ENVI_
%token EPANDA_
%token EPSILON_
%token EQUATORIAL_
%token ERASE_
%token EXT_
%token FACTOR_
%token FALSE_
%token FILE_
%token FILL_
%token FILTER_
%token FIT_
%token FITS_
%token FITSY_
%token FIXED_
%token FK4_
%token FK5_
%token FONT_
%token FORMAT_
%token FOOTPRINT_
%token FROM_
%token FRONT_
%token FULL_
%token FUNCTION_
%token GALACTIC_
%token GAUSSIAN_
%token GET_
%token GLOBAL_
%token GRAPHICS_
%token GRAY_
%token GRID_
%token GZ_
%token HANDLE_
%token HAS_
%token HEAD_
%token HEADER_
%token HEIGHT_
%token HIDE_
%token HIGHLITE_
%token HISTEQU_
%token HISTOGRAM_
%token HORIZONTAL_
%token ICRS_
%token ID_
%token IIS_
%token IMAGE_
%token INCLUDE_
%token INCR_
%token INFO_
%token ITERATION_
%token IRAF_
%token IRAFMIN_
%token J2000_
%token KEY_
%token KEYWORD_
%token LABEL_
%token LENGTH_
%token LEVEL_
%token LIGHTEN_
%token LITTLE_
%token LITTLEENDIAN_
%token LINE_
%token LINEAR_
%token LIST_
%token LOAD_
%token LOCAL_
%token LOG_
%token MACOSX_
%token MAGNIFIER_
%token MATCH_
%token MAP_
%token MARK_
%token MARKER_
%token MASK_
%token MESSAGE_
%token METHOD_
%token MINMAX_
%token MINOR_
%token MIP_
%token MMAP_
%token MMAPINCR_
%token MOSAIC_
%token MODE_
%token MOTION_
%token MOVE_
%token NAME_
%token NAN_
%token NATIVE_
%token NAXES_
%token NEW_
%token NEXT_
%token NO_
%token NONE_
%token NONNAN_
%token NONZERO_
%token NOW_
%token NRRD_
%token NUMBER_
%token OBJECT_
%token OFF_
%token ON_
%token ONLY_
%token OPTION_
%token ORIENT_
%token PAN_
%token PANNER_
%token PARSER_
%token PASTE_
%token PERF_
%token PHOTO_
%token PHYSICAL_
%token PIXEL_
%token PLOT2D_
%token PLOT3D_
%token POINT_
%token POINTER_
%token POLYGON_
%token POSTSCRIPT_
%token POW_
%token PRECISION_
%token PRINT_
%token PRESERVE_
%token PROJECTION_
%token PROPERTY_
%token PUBLICATION_
%token PROS_
%token QUERY_
%token RADIAL_
%token RADIUS_
%token RANGE_
%token REGION_
%token REPLACE_
%token RESAMPLE_
%token RESCAN_
%token RESET_
%token RESOLUTION_
%token RGB_
%token ROOT_
%token ROTATE_
%token RULER_
%token SAMPLE_
%token SAOIMAGE_
%token SAOTNG_
%token SAVE_
%token SCALE_
%token SCAN_
%token SCIENTIFIC_
%token SCOPE_
%token SCREEN_
%token SEGMENT_
%token SELECT_
%token SET_
%token SEXAGESIMAL_
%token SHAPE_
%token SHARED_
%token SHIFT_
%token SHMID_
%token SHOW_
%token SIGMA_
%token SINH_
%token SIZE_
%token SLICE_
%token SMMAP_
%token SMOOTH_
%token SOCKET_
%token SOCKETGZ_
%token SOURCE_
%token SQRT_
%token SQUARED_
%token SSHARED_
%token STATS_
%token STATUS_
%token SUM_
%token SYSTEM_
%token TABLE_
%token TAG_
%token TEMPLATE_
%token TEXT_
%token THREADS_
%token THREED_
%token THRESHOLD_
%token THICK_
%token TRANSPARENCY_
%token TO_
%token TOGGLE_
%token TOPHAT_
%token TRUE_
%token TYPE_
%token UNDO_
%token UNHIGHLITE_
%token UNLOAD_
%token UNSELECT_
%token UPDATE_
%token USER_
%token VALUE_
%token VAR_
%token VIEW_
%token VECTOR_
%token VERSION_
%token VERTEX_
%token VERTICAL_
%token WARP_
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
%token WCS0_
%token WFPC2_
%token WIDTH_
%token WIN32_
%token XML_
%token XY_
%token YES_
%token ZERO_
%token ZMAX_
%token ZSCALE_
%token ZOOM_

%%

command : DEBUG_ debug
	| BIN_ bin
	| BG_ COLOR_ STRING {fr->bgColorCmd($3);}
	| BG_ COLOR_ GRAY_ {fr->bgColorCmd("gray");}
        | BG_ COLOR_ yesno {fr->useBgColorCmd($3);}
        | BLOCK_ block
	| CENTER_ {fr->centerCmd();}
	| CLEAR_ {fr->clearCmd();}
	| CLIP_ clip
	| COLORBAR_ TAG_ STRING {fr->colorbarTagCmd($3);}
	| COLORMAP_ colormap
	| COLORSCALE_ colorscale
	| CONTOUR_ contour
	| CROP_ crop
	| CROSSHAIR_ crosshair
        | CUBE_ cube
	| DATASEC_ yesno {fr->DATASECCmd($2);}
	| FITSY_ fitsy
	| GET_ get
	| GRID_ grid
	| HAS_ has
	| HIDE_ {fr->hideCmd();}
	| HIGHLITE_ yesno {fr->highliteCmd($2);}
	| HIGHLITE_ COLOR_ STRING {fr->highliteColorCmd($3);}
	| IIS_ iis
	| IRAF_ ALIGN_ INT {fr->irafAlignCmd($3);}
	| LOAD_ load
	| MACOSX_ macosx
	| MAGNIFIER_ magnifier
	| MATCH_ match
	| MARKER_ markerLayer marker
	| MASK_ mask
	| NAN_ COLOR_ STRING {fr->nanColorCmd($3);}
	| ORIENT_ orient
	| PAN_ pan
	| PANNER_ panner
	| QUERY_ CURSOR_ {fr->queryCursorCmd();}
        | PRECISION_ precision
	| POSTSCRIPT_ postscript
	| RESET_ {fr->resetCmd();}
	| REGION_ markerLayer region
	| RGB_ rgb
	| ROTATE_ rotate
	| SAVE_ save
	| SHOW_ {fr->showCmd();}
	| SMOOTH_ smooth
	| THREADS_ INT {fr->threadsCmd($2);}
	| THREED_ threed
	| UNLOAD_ {fr->unloadFitsCmd();}
	| UPDATE_ update
	| VERSION_ {fr->msg("Frame 1.0");}
	| WARP_ warp
	| WCS_ wcs
	| WIN32_ win32
	| ZOOM_ zoom
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
        | OFF_ {yydebug=0;}
	| MOSAIC_ yesno {DebugMosaic=$2;}
	| PARSER_ yesno {yydebug=$2;}
	| PERF_ yesno {DebugPerf=$2;}
	| WCS_ yesno {DebugWCS=$2;}
	| BIN_ yesno {DebugBin=$2;}
        | BLOCK_ yesno {DebugBlock=$2;}
        | COMPRESS_ yesno {DebugCompress=$2;}
        | CROP_ yesno {DebugCrop=$2;}
	| GZ_ yesno {DebugGZ=$2;}
	| RGB_ yesno {DebugRGB=$2;}
	;

yesno	: INT {$$=($1 ? 1 : 0);}

	| YES_ {$$=1;}
	| 'Y' {$$=1;}
	| ON_ {$$=1;}
	| TRUE_ {$$=1;}

	| NO_ {$$=0;}
	| 'N' {$$=0;}
	| OFF_ {$$=0;}
	| FALSE_ {$$=0;}
	;

fileNameType : /* empty */ {$$ = Base::ROOTBASE;}
	| ROOT_ BASE_ {$$ = Base::ROOTBASE;}
	| FULL_ BASE_ {$$ = Base::FULLBASE;}
	| ROOT_ {$$ = Base::ROOT;}
	| FULL_ {$$ = Base::FULL;}
	;

optangle : /* empty */ {$$ = 0;}
	| angle {$$ = $1;}
	;

angle	: numeric {$$ = zeroTWOPI(degToRad($1));} /* assume degree */
        | ANGDEGREE {$$ = zeroTWOPI(degToRad($1));}
	| ANGRADIAN {$$=$1;}
	;

sexagesimal: SEXSTR {$$ = parseSEXStr($1);}
	;

hms	: HMSSTR {$$ = parseHMSStr($1);}
	;

dms	: DMSSTR {$$ = parseDMSStr($1);}
	;

coord	: sexagesimal sexagesimal
	{
	  Vector r;
	  if (currentSky == Coord::GALACTIC || currentSky == Coord::ECLIPTIC) 
	    r = Vector($1,$2);
	  else
	    r = Vector($1*360./24.,$2);

	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| hms dms
        {
	  Vector r = Vector($1,$2);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| dms dms
        {
	  Vector r = Vector($1,$2);
	  $$[0] = r[0];
	  $$[1] = r[1];
	  $$[2] = r[2];
	}
	| numeric numeric 
	{
	  $$[0] = $1;
	  $$[1] = $2;
	  $$[2] = 1;
	}
	;

coordSystem :IMAGE_ {$$ = currentCoord = Coord::IMAGE;}
	| PHYSICAL_ {$$ = currentCoord = Coord::PHYSICAL;}
	| DETECTOR_ {$$ = currentCoord = Coord::DETECTOR;}
	| AMPLIFIER_ {$$ = currentCoord = Coord::AMPLIFIER;}
	| wcsSystem {$$ = (Coord::CoordSystem)$1;}
	;

wcsSystem : WCS_ {$$ = currentCoord = Coord::WCS;}
	| WCSA_ {$$ = currentCoord = Coord::WCSA;}
	| WCSB_ {$$ = currentCoord = Coord::WCSB;}
	| WCSC_ {$$ = currentCoord = Coord::WCSC;}
	| WCSD_ {$$ = currentCoord = Coord::WCSD;}
	| WCSE_ {$$ = currentCoord = Coord::WCSE;}
	| WCSF_ {$$ = currentCoord = Coord::WCSF;}
	| WCSG_ {$$ = currentCoord = Coord::WCSG;}
	| WCSH_ {$$ = currentCoord = Coord::WCSH;}
	| WCSI_ {$$ = currentCoord = Coord::WCSI;}
	| WCSJ_ {$$ = currentCoord = Coord::WCSJ;}
	| WCSK_ {$$ = currentCoord = Coord::WCSK;}
	| WCSL_ {$$ = currentCoord = Coord::WCSL;}
	| WCSM_ {$$ = currentCoord = Coord::WCSM;}
	| WCSN_ {$$ = currentCoord = Coord::WCSN;}
	| WCSO_ {$$ = currentCoord = Coord::WCSO;}
	| WCSP_ {$$ = currentCoord = Coord::WCSP;}
	| WCSQ_ {$$ = currentCoord = Coord::WCSQ;}
	| WCSR_ {$$ = currentCoord = Coord::WCSR;}
	| WCSS_ {$$ = currentCoord = Coord::WCSS;}
	| WCST_ {$$ = currentCoord = Coord::WCST;}
	| WCSU_ {$$ = currentCoord = Coord::WCSU;}
	| WCSV_ {$$ = currentCoord = Coord::WCSV;}
	| WCSW_ {$$ = currentCoord = Coord::WCSW;}
	| WCSX_ {$$ = currentCoord = Coord::WCSX;}
	| WCSY_ {$$ = currentCoord = Coord::WCSY;}
	| WCSZ_ {$$ = currentCoord = Coord::WCSZ;}
	| WCS0_ {$$ = currentCoord = Coord::WCS0;}
	;

internalSystem : CANVAS_ {$$ = Coord::CANVAS;}
	| PANNER_ {$$ = Coord::PANNER;}
	;

maskType : /* empty */ {$$ = FitsMask::NONZERO;}
	| ZERO_ {$$ = FitsMask::ZERO;}
	| NONZERO_ {$$ = FitsMask::NONZERO;}
	| NAN_ {$$ = FitsMask::NaN;}
	| NONNAN_ {$$ = FitsMask::NONNaN;}
	| RANGE_ {$$ = FitsMask::RANGE;}
	;

maskBlend : /* empty */ {$$ = FitsMask::SOURCE;}
        | SOURCE_ {$$ = FitsMask::SOURCE;}
        | SCREEN_ {$$ = FitsMask::SCREEN;}
        | DARKEN_ {$$ = FitsMask::DARKEN;}
        | LIGHTEN_ {$$ = FitsMask::LIGHTEN;}
        ;

scaleType: LINEAR_ {$$ = FrScale::LINEARSCALE;}
	| LOG_ {$$ = FrScale::LOGSCALE;}
	| POW_ {$$ = FrScale::POWSCALE;}
	| SQRT_ {$$ = FrScale::SQRTSCALE;}
	| SQUARED_ {$$ = FrScale::SQUAREDSCALE;}
	| ASINH_ {$$ = FrScale::ASINHSCALE;}
	| SINH_ {$$ = FrScale::SINHSCALE;}
	| HISTEQU_ {$$ = FrScale::HISTEQUSCALE;}
	;	

minmaxMode : AUTO_ {$$=FrScale::SCAN;}
	| SCAN_ {$$=FrScale::SCAN;}
	| SAMPLE_ {$$=FrScale::SAMPLE;}
	| DATAMIN_ {$$=FrScale::DATAMIN;}
	| IRAFMIN_ {$$=FrScale::IRAFMIN;}
        ;

skyFrame : /* empty */ {$$ = currentSky = Coord::FK5;}
	| FK4_ {$$ = currentSky = Coord::FK4;}
	| B1950_ {$$ = currentSky = Coord::FK4;}
	| FK5_ {$$ = currentSky = Coord::FK5;}
	| J2000_ {$$ = currentSky = Coord::FK5;}
	| ICRS_ {$$ = currentSky = Coord::ICRS;}
	| GALACTIC_ {$$ = currentSky = Coord::GALACTIC;}
	| ECLIPTIC_ {$$ = currentSky = Coord::ECLIPTIC;}
	;

skyFormat : /* empty */ {$$=Coord::DEGREES;}
	| DEGREES_ {$$=Coord::DEGREES;}
	| SEXAGESIMAL_ {$$=Coord::SEXAGESIMAL;}
	;

skyDist : /* empty */ {$$=Coord::DEGREE;}
	| DEGREES_ {$$=Coord::DEGREE;}
	| ARCMIN_ {$$=Coord::ARCMIN;}
	| ARCSEC_ {$$=Coord::ARCSEC;}
	;

shmType	: /* empty */ {$$ = Base::SHMID;}
	| SHMID_ {$$ = Base::SHMID;}
	| KEY_ {$$ = Base::KEY;}
	;

incrLoad: /*backward compatibility*/ {}
        | ALL_ {}
        | INCR_ {}
	;

layerType : /* empty */ {$$ = Base::IMG;}
	| IMAGE_ {$$ = Base::IMG;}
	| MASK_ {$$ = Base::MASK;}
	;

pointShape: /* empty */ {$$ = Point::CIRCLE;}
	| CIRCLE_  {$$ = Point::CIRCLE;}
	| BOX_ {$$ = Point::BOX;}
	| DIAMOND_ {$$ = Point::DIAMOND;}
	| CROSS_ {$$ = Point::CROSS;}
	| 'X' {$$ = Point::EX;}
	| ARROW_ {$$ = Point::ARROW;}
	| BOXCIRCLE_ {$$ = Point::BOXCIRCLE;}
	;

pointSize: /* empty */ {$$ = POINTSIZE;}
	| INT {$$ = $1;}
	;

analysisMethod: CPANDA_ {$$ = Marker::PANDA;}
        | HISTOGRAM_ {$$ = Marker::HISTOGRAM;}
	| PLOT2D_ {$$ = Marker::PLOT2D;}
	| PLOT3D_ {$$ = Marker::PLOT3D;}
	| RADIAL_ {$$ = Marker::RADIAL;}
	| STATS_ {$$ = Marker::STATS;}
	;

analysisParam : /* emtpy */ {$$ = Marker::AVERAGE;}
	| AVERAGE_  {$$ = Marker::AVERAGE;}
	| SUM_  {$$ = Marker::SUM;}
	;

endian	: /* empty */ {$$ = FitsFile::NATIVE;}
	| NATIVE_ {$$ = FitsFile::NATIVE;}
	| BIG_ {$$ = FitsFile::BIG;}
	| BIGENDIAN_ {$$ = FitsFile::BIG;}
	| LITTLE_ {$$ = FitsFile::LITTLE;}
	| LITTLEENDIAN_ {$$ = FitsFile::LITTLE;}
	;

threed	: VIEW_ threedView
	| BORDER_ threedBorder
	| COMPASS_ threedCompass
	| HIGHLITE_ threedHighlite
	| METHOD_ renderMethod {fr->set3dRenderMethodCmd($2);}
	| BACKGROUND_ renderBackground {fr->set3dRenderBackgroundCmd($2);}
	| SCALE_ numeric {fr->set3dScaleCmd($2);}
	| THRESHOLD_ numeric 
	  {/* needed for compatibility with old version of backup */}
	;

threedBorder : yesno {fr->set3dBorderCmd($1);}
	| COLOR_ STRING {fr->set3dBorderColorCmd($2);}
	;

threedCompass : yesno {fr->set3dCompassCmd($1);}
	| COLOR_ STRING {fr->set3dCompassColorCmd($2);}
	;

threedHighlite : yesno {fr->set3dHighliteCmd($1);}
	| COLOR_ STRING {fr->set3dHighliteColorCmd($2);}
	;

threedView : numeric numeric {fr->set3dViewCmd($1,$2);}
	| POINT_ numeric numeric numeric numeric numeric
	  {fr->set3dViewPointCmd(Vector3d($2,$3,$4),Vector($5,$6));}
	;

bin	: ABOUT_ binAbout
	| COLS_ STRING STRING STRING {fr->binColsCmd($2,$3,$4);}
	| DEPTH_ INT {fr->binDepthCmd($2);}
	| FACTOR_ binFactor
	| FUNCTION_ binFunction
	| BUFFER_ SIZE_ INT {fr->binBufferSizeCmd($3);}
	| TO_ binTo
	| FILTER_ STRING {fr->binFilterCmd($2);}
	;

binAbout : CENTER_ {fr->binAboutCmd();}
	| numeric numeric {fr->binAboutCmd(Vector($1,$2));}
	;

binFactor : numeric {fr->binFactorCmd(Vector($1,$1));}
	| numeric numeric {fr->binFactorCmd(Vector($1,$2));}
	| numeric ABOUT_ numeric numeric
	{fr->binFactorAboutCmd(Vector($1,$1), Vector($3,$4));}
	| numeric numeric ABOUT_ numeric numeric
	{fr->binFactorAboutCmd(Vector($1,$2), Vector($4,$5));}
	| TO_ numeric {fr->binFactorToCmd(Vector($2,$2));}
	| TO_ numeric numeric {fr->binFactorToCmd(Vector($2,$3));}
	| TO_ numeric ABOUT_ numeric numeric
	{fr->binFactorToAboutCmd(Vector($2,$2), Vector($4,$5));}
	| TO_ numeric numeric ABOUT_ numeric numeric
	{fr->binFactorToAboutCmd(Vector($2,$3), Vector($5,$6));}
	;

binFunction : AVERAGE_ {fr->binFunctionCmd(FitsHist::AVERAGE);}
	| SUM_ {fr->binFunctionCmd(FitsHist::SUM);}
	;

binTo	: FIT_ {fr->binToFitCmd();}
	| numeric numeric ABOUT_ CENTER_ STRING STRING STRING 
	{fr->binCmd(Vector($1,$2), $5, $6, $7);}
	| numeric numeric INT numeric numeric ABOUT_ CENTER_ 
	    STRING STRING STRING STRING
	{fr->binCmd(Vector($1,$2), $3, Vector($4,$5), $8, $9, $10, $11);}
	| numeric numeric ABOUT_ numeric numeric STRING STRING STRING 
	{fr->binCmd(Vector($1,$2), Vector($4,$5), $6, $7, $8);}
	| numeric numeric INT numeric numeric ABOUT_ numeric numeric 
	    STRING STRING STRING STRING
	{fr->binCmd(Vector($1,$2), $3, Vector($4,$5), Vector($7,$8), 
	    $9, $10, $11, $12);}
	;

block	: numeric {fr->blockCmd(Vector($1,$1));}
        | numeric numeric {fr->blockCmd(Vector($1,$2));}
        | TO_ blockTo
	;

blockTo : FIT_ {fr->blockToFitCmd();}
        | numeric {fr->blockToCmd(Vector($1,$1));}
        | numeric numeric {fr->blockToCmd(Vector($1,$2));}
        ;

clip	: SCOPE_ clipScope
	| MODE_ clipMode
	| MINMAX_ clipMinMax
	| USER_ numeric numeric {fr->clipUserCmd($2,$3);}
	| USER_ NAN_ NAN_ {fr->clipUserCmd(NAN,NAN);}
        | ZSCALE_ clipZScale
 	| PRESERVE_ yesno
        {
	  // backward compatibility with backup
	}
	;

clipScope: GLOBAL_ {fr->clipScopeCmd(FrScale::GLOBAL);}
	| LOCAL_ {fr->clipScopeCmd(FrScale::LOCAL);}
	;

clipMode: numeric {fr->clipModeCmd($1);}
	| MINMAX_ {fr->clipModeCmd(FrScale::MINMAX);}
	| ZSCALE_ {fr->clipModeCmd(FrScale::ZSCALE);}
	| ZMAX_ {fr->clipModeCmd(FrScale::ZMAX);}
	| USER_ {fr->clipModeCmd(FrScale::USERCLIP);}
	;

clipMinMax : INT minmaxMode {fr->clipMinMaxCmd((FrScale::MinMaxMode)$2,$1);}
        | MODE_ minmaxMode {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)$2);}
	| SAMPLE_ INT {fr->clipMinMaxSampleCmd($2);}
        | RESCAN_ {fr->clipMinMaxRescanCmd();}
	;

clipZScale: numeric INT INT {fr->clipZScaleCmd($1,$2,$3);}
        | CONTRAST_ numeric
	{
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd($2);
        }
        | SAMPLE_ INT
	{
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd($2);
        }
        | LINE_ INT
	{
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd($2);
        }
	;

colormap : INT numeric numeric INT POINTER INT 
        {fr->colormapCmd($1, $2, $3, $4, (unsigned char*)$5, $6);}
	| RGB_ numeric numeric numeric numeric numeric numeric INT POINTER INT
	{fr->colormapCmd($2,$3,$4,$5,$6,$7,$8,(unsigned char*)$9,$10);}
	| BEGIN_ {fr->colormapBeginCmd();}
	| MOTION_ colormapMotion
	| END_ {fr->colormapEndCmd();}
	;

colormapMotion: INT numeric numeric INT POINTER INT
	{fr->colormapMotionCmd($1, $2, $3, $4, (unsigned char*)$5, $6);}
	| RGB_ numeric numeric numeric numeric numeric numeric INT POINTER INT
	{fr->colormapMotionCmd($2,$3,$4,$5,$6,$7,$8,(unsigned char*)$9,$10);}

colorscale : scaleType {fr->colorScaleCmd((FrScale::ColorScaleType)$1);}
	| LOG_ numeric {fr->colorScaleLogCmd($2);}
	;

contour	: CREATE_ contourCreate
	| DELETE_ contourDelete
        | LOAD_ contourLoad
        | PASTE_ contourPaste
	| SAVE_ contourSave
	;

contourCreate : STRING INT INT contourMethod INT INT scaleType numeric contourClipMode contourClipScope numeric numeric STRING
{fr->contourCreateCmd($1,$2,$3,(FVContour::Method)$4,$5,$6,(FrScale::ColorScaleType)$7,$8,(FrScale::ClipMode)$9,100,(FrScale::ClipScope)$10,$11,$12,$13);}
        | STRING INT INT contourMethod INT INT scaleType numeric numeric contourClipScope numeric numeric STRING
	{fr->contourCreateCmd($1,$2,$3,(FVContour::Method)$4,$5,$6,(FrScale::ColorScaleType)$7,$8,FrScale::AUTOCUT,$9,(FrScale::ClipScope)$10,$11,$12,$13);}
        | STRING INT INT contourMethod INT INT scaleType numeric contourClipMode numeric numeric STRING
        {
	  // backward compatibility with backup
	  fr->contourCreateCmd($1,$2,$3,(FVContour::Method)$4,$5,$6,(FrScale::ColorScaleType)$7,$8,(FrScale::ClipMode)$9,100,FrScale::LOCAL,$10,$11,$12);
	}
        | STRING INT INT contourMethod INT INT scaleType numeric numeric numeric numeric STRING
	{
	  // backward compatibility with backup
	  fr->contourCreateCmd($1,$2,$3,(FVContour::Method)$4,$5,$6,(FrScale::ColorScaleType)$7,$8,FrScale::AUTOCUT,$9,FrScale::LOCAL,$10,$11,$12);
	}
	| POLYGON_ {fr->contourCreatePolygonCmd();}
	;

contourDelete : /*empty */ {fr->contourDeleteCmd();}
        | AUX_ {fr->contourDeleteAuxCmd();}
        ;

contourLoad : STRING {fr->contourLoadCmd($1);}
        | STRING STRING INT yesno {fr->contourLoadCmd($1,$2,$3,$4);}
        | STRING INT yesno STRING coordSystem skyFrame 
	{
	  // backward compatibility with backup
	  fr->contourLoadCmd($4,(Coord::CoordSystem)$5,(Coord::SkyFrame)$6,$1,$2,$3);
	}
        ;

contourClipMode: MINMAX_ {$$ = FrScale::MINMAX;}
	| ZSCALE_ {$$ = FrScale::ZSCALE;}
	| ZMAX_ {$$ = FrScale::ZMAX;}
	| USER_ {$$ = FrScale::USERCLIP;}
	;

contourClipScope: GLOBAL_ {$$ = FrScale::GLOBAL;}
	| LOCAL_ {$$ = FrScale::LOCAL;}
	;

contourMethod : SMOOTH_ {$$ = FVContour::SMOOTH;}
	| BLOCK_ {$$ = FVContour::BLOCK;}
	;

contourPaste : STRING {fr->contourPasteCmd($1);}
        | STRING STRING INT yesno {fr->contourPasteCmd($1,$2,$3,$4);}
        ;

contourSave : STRING coordSystem skyFrame
	{fr->contourSaveCmd($1, (Coord::CoordSystem)$2, (Coord::SkyFrame)$3);}
        | AUX_ STRING coordSystem skyFrame
	{fr->contourSaveAuxCmd($2,(Coord::CoordSystem)$3,(Coord::SkyFrame)$4);}
        ;

crop	: /* empty */ {fr->cropCmd();}
	| numeric numeric numeric numeric coordSystem skyFrame
	{fr->cropCmd(Vector($1,$2), Vector($3,$4),
	    (Coord::CoordSystem)$5, (Coord::SkyFrame)$6);}
	| CENTER_ coord coordSystem skyFrame numeric numeric coordSystem skyDist
	{fr->cropCenterCmd(Vector($2), (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, Vector($5,$6), (Coord::CoordSystem)$7, (Coord::DistFormat)$8);}
	| THREED_ crop3d
	| BEGIN_ numeric numeric {fr->cropBeginCmd(Vector($2,$3));}
	| MOTION_ numeric numeric {fr->cropMotionCmd(Vector($2,$3));}
	| END_ numeric numeric {fr->cropEndCmd(Vector($2,$3));}
	;

crop3d	: /* empty */ {fr->crop3dCmd();}
	| numeric numeric coordSystem skyFrame
	{fr->crop3dCmd($1, $2, (Coord::CoordSystem)$3, (Coord::SkyFrame)$4);}
	| BEGIN_ numeric numeric INT {fr->crop3dBeginCmd(Vector($2,$3),$4);}
	| MOTION_ numeric numeric INT {fr->crop3dMotionCmd(Vector($2,$3),$4);}
	| END_ numeric numeric INT {fr->crop3dEndCmd(Vector($2,$3),$4);}
	;

crosshair: internalSystem numeric numeric
	{fr->crosshairCmd(Vector($2,$3), (Coord::InternalSystem)$1);}
	| coordSystem skyFrame coord
	{fr->crosshairCmd(Vector($3), (Coord::CoordSystem)$1, (Coord::SkyFrame)$2);}
	| yesno {fr->crosshairCmd($1);}
	| WARP_ numeric numeric {fr->crosshairWarpCmd(Vector($2,$3));}

	| BEGIN_ MOTION_ internalSystem numeric numeric
	{fr->crosshairCmd(Vector($4,$5), (Coord::InternalSystem)$3);}
	| MOTION_ internalSystem numeric numeric
	{fr->crosshairCmd(Vector($3,$4), (Coord::InternalSystem)$2);}
	| BEGIN_ MOTION_ coordSystem coord
	{fr->crosshairCmd(Vector($4), (Coord::CoordSystem)$3);}
	| MOTION_ coordSystem coord
	{fr->crosshairCmd(Vector($3), (Coord::CoordSystem)$2);}
	;

cube    : AXES_ INT {fr->axesOrderCmd($2);}
        ;

cutMethod : /* emtpy */ {$$ = Base::AVERAGE;}
	| AVERAGE_  {$$ = Base::AVERAGE;}
	| SUM_  {$$ = Base::SUM;}
	;

fitsy	: HAS_ EXT_ STRING {fr->fitsyHasExtCmd($3);}
	;

get	: BG_ COLOR_ {fr->getBgColorCmd();}
	| BIN_ getBin
        | BLOCK_ getBlock
	| CLIP_ getClip
	| COLORMAP_ getColorMap
	| COLORBAR_ getColorbar
	| COLORSCALE_ getColorScale
	| CONTOUR_ getContour
	| COORDINATES_ getCoord
	| CROP_ getCrop
	| CROSSHAIR_ getCrosshair
	| CURSOR_ getCursor
	| CUBE_ getCube
	| DATA_ getData
	| DATASEC_ {fr->getDATASECCmd();}
	| FITS_ getFits
	| GRID_ getGrid
	| HIGHLITE_ COLOR_ {fr->getHighliteColorCmd();}
	| HISTOGRAM_ STRING STRING INT {fr->getHistogramCmd($2,$3,$4);}
	| HORIZONTAL_ CUT_ STRING STRING numeric numeric internalSystem INT cutMethod
	{fr->getHorzCutCmd($3,$4,Vector($5,$6),(Coord::InternalSystem)$7,$8,(Base::CutMethod)$9);}
	| IIS_ getiis
	| INFO_ getInfo
	| IRAF_ ALIGN_ {fr->getIRAFAlignCmd();}
	| MINMAX_ {fr->getMinMaxCmd();}
	| MARKER_ markerLayer markerGet
	| MASK_ getMask
	| NAN_ COLOR_ {fr->getNANColorCmd();}
	| ORIENT_ {fr->getOrientCmd();}
	| PAN_ getPan
	| PIXEL_ TABLE_ internalSystem numeric numeric INT INT STRING
	{fr->getPixelTableCmd(Vector($4,$5), (Coord::InternalSystem)$3, $6, $7, $8);}
	| RGB_ getRGB
	| ROTATE_ {fr->getRotateCmd();}
	| SMOOTH_ getSmooth
	| THREADS_ {fr->getThreadsCmd();}
	| THREED_ getThreed
	| TYPE_ {fr->getTypeCmd();}
	| VALUE_ internalSystem numeric numeric
	{fr->getValueCmd(Vector($3,$4),(Coord::InternalSystem)$2);}
	| VERTICAL_ CUT_ STRING STRING numeric numeric internalSystem INT cutMethod
	{fr->getVertCutCmd($3,$4,Vector($5,$6),(Coord::InternalSystem)$7,$8,(Base::CutMethod)$9);}
	| WCS_ getWCS
	| ZOOM_ {fr->getZoomCmd();}
	;

getBin	: DEPTH_ {fr->getBinDepthCmd();}
	| FACTOR_ {fr->getBinFactorCmd();}
	| FUNCTION_ {fr->getBinFunctionCmd();}
	| BUFFER_ SIZE_ {fr->getBinBufferSizeCmd();}
	| CURSOR_ {fr->getBinCursorCmd();}
	| FILTER_ {fr->getBinFilterCmd();}
	| COLS_ getBinCols
	| LIST_ {fr->getBinListCmd();}
	;

getBinCols : /* empty */ {fr->getBinColsCmd();}
	| MINMAX_ STRING {fr->getBinColsMinMaxCmd($2);}
	| DIM_ STRING {fr->getBinColsDimCmd($2);}
	;

getBlock : FACTOR_  {fr->getBlockCmd();}
	;

getClip	: {fr->getClipCmd();}
        | contourClipMode contourClipScope 
	{fr->getClipCmd((FrScale::ClipMode)$1, (FrScale::ClipScope)$2);}
        | numeric contourClipScope 
	{fr->getClipCmd($1, (FrScale::ClipScope)$2);}
	| SCOPE_ {fr->getClipScopeCmd();}
	| MODE_ {fr->getClipModeCmd();}
	| MINMAX_ getClipMinMax
	| USER_ LEVEL_ {fr->getClipUserCmd();}
	| ZSCALE_ getClipZScale
 	| PRESERVE_ 
	{
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	}
	;

getClipMinMax : MODE_ {fr->getClipMinMaxModeCmd();}
	| SAMPLE_ {fr->getClipMinMaxSampleCmd();}
	;

getClipZScale: CONTRAST_ {fr->getClipZScaleContrastCmd();}
	| SAMPLE_ {fr->getClipZScaleSampleCmd();}
	| LINE_ {fr->getClipZScaleLineCmd();}
	;

getColorbar: /* empty */ {fr->getColorbarCmd();}
	| TAG_ {fr->getColorbarTagCmd();}
	;

getColorMap : LEVEL_ getColorMapLevel
	;

getColorMapLevel: INT {fr->getColorMapLevelCmd($1);}
	| INT internalSystem numeric numeric
	{fr->getColorMapLevelCmd($1,Vector($3,$4),(Coord::InternalSystem)$2);}
	| INT numeric numeric scaleType numeric
	{fr->getColorMapLevelCmd($1,$2,$3,(FrScale::ColorScaleType)$4,$5);}
	;

getColorScale : /* empty */ {fr->getColorScaleCmd();}
	| LEVEL_ getColorScaleLevel
	| LOG_ {fr->getColorScaleLogCmd();}
	;

getColorScaleLevel: INT numeric numeric scaleType numeric
        {fr->getColorScaleLevelCmd($1,$2,$3,(FrScale::ColorScaleType)$4,$5);}
	;

getContour: coordSystem skyFrame 
	{fr->getContourCmd((Coord::CoordSystem)$1,(Coord::SkyFrame)$2);}
	| CLIP_ getContourClip
	| COLOR_ {fr->getContourColorNameCmd();}
	| DASH_ {fr->getContourDashCmd();}
	| LEVEL_ {fr->getContourLevelCmd();}
	| NUMBER_ LEVEL_ {fr->getContourNumLevelCmd();}
	| METHOD_ {fr->getContourMethodCmd();}
	| COLORSCALE_ getContourColorScale
	| SMOOTH_ {fr->getContourSmoothCmd();}
	| WIDTH_ {fr->getContourLineWidthCmd();}
	;

getContourClip : /* empty */ {fr->getContourClipCmd();}
	| MODE_ {fr->getContourClipModeCmd();}
	| SCOPE_ {fr->getContourClipScopeCmd();}
	;

getContourColorScale : /* empty */ {fr->getContourScaleCmd();}
	| LOG_ {fr->getContourScaleLogCmd();}
	;

getCoord : numeric numeric coordSystem skyFrame skyFormat
	{fr->getCoordCmd(Vector($1,$2), (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, (Coord::SkyFormat)$5);}
	| internalSystem numeric numeric coordSystem skyFrame skyFormat
	{
	  // backward compatibility
	  fr->getCoordCmd(Vector($2,$3), (Coord::CoordSystem)$4, (Coord::SkyFrame)$5,
	    (Coord::SkyFormat)$6);
	}
	;

getCrop	: coordSystem skyFrame skyFormat
        {fr->getCropCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, (Coord::SkyFormat)$3);}
	| CENTER_ coordSystem skyFrame skyFormat coordSystem skyDist
	{fr->getCropCenterCmd((Coord::CoordSystem)$2, (Coord::SkyFrame)$3, (Coord::SkyFormat)$4, (Coord::CoordSystem)$5, (Coord::DistFormat)$6);}
	| THREED_ coordSystem skyFrame
	{fr->getCrop3dCmd((Coord::CoordSystem)$2, (Coord::SkyFrame)$3);}
	;

getCrosshair: internalSystem {fr->getCrosshairCmd((Coord::InternalSystem)$1);}
	| coordSystem skyFrame skyFormat
	{fr->getCrosshairCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, (Coord::SkyFormat)$3);}
	| STATUS_ {fr->getCrosshairStatusCmd();}
	;

getCube : AXES_ {fr->getAxesOrderCmd();}
        ;

getCursor : internalSystem {fr->getCursorCmd((Coord::InternalSystem)$1);}
	| coordSystem skyFrame skyFormat
	{fr->getCursorCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, (Coord::SkyFormat)$3);}
	;

getData	: coordSystem skyFrame coord numeric numeric STRING
	{fr->getDataValuesCmd(1, Vector($3), (Coord::CoordSystem)$1, (Coord::SkyFrame)$2, Vector($4,$5), $6);}
	| INT coordSystem skyFrame coord numeric numeric STRING
	{fr->getDataValuesCmd($1, Vector($4), 
	    (Coord::CoordSystem)$2, (Coord::SkyFrame)$3, Vector($5,$6), $7);}
	| internalSystem numeric numeric INT INT
	{fr->getDataValuesCmd(Vector($2,$3),(Coord::InternalSystem)$1,
	    Vector($4,$5));}
	;

getInfo	: STRING {fr->getInfoCmd($1);}
	| CLIP_ {fr->getInfoClipCmd();}
 	| internalSystem numeric numeric STRING
	{fr->getInfoCmd(Vector($2,$3), (Coord::InternalSystem)$1, $4);}
	;

getiis	: POINTER INT INT INT INT {fr->iisGetCmd((char*)$1,$2,$3,$4,$5);}
	| CURSOR_ {fr->iisGetCursorCmd();}
	| FILE_ NAME_ getIISFileName
	;

getIISFileName : /* empty */ {fr->iisGetFileNameCmd();}
	| INT {fr->iisGetFileNameCmd($1);}
	| numeric numeric {fr->iisGetFileNameCmd(Vector($1,$2));}
	;

getFits	: NAXES_ /* empty */ {fr->getFitsNAxesCmd();}
	| CENTER_ coordSystem skyFrame skyFormat
	{fr->getFitsCenterCmd((Coord::CoordSystem)$2,(Coord::SkyFrame)$3,(Coord::SkyFormat)$4);}
	| COUNT_ {fr->getFitsCountCmd();}
	| DEPTH_ getFitsDepth
	| BITPIX_ {fr->getBitpixCmd();}
	| EXT_ getFitsExt
	| FILE_ NAME_ getFitsFileName
	| HEADER_ getFitsHeader
	| HEIGHT_ {fr->getFitsHeightCmd();}
	| OBJECT_ NAME_ {fr->getFitsObjectNameCmd();}
	| SIZE_ {fr->getFitsSizeCmd();}
	| SIZE_ coordSystem skyFrame skyDist
	{fr->getFitsSizeCmd((Coord::CoordSystem)$2,(Coord::SkyFrame)$3,(Coord::DistFormat)$4);}
	| SLICE_ getFitsSlice
	| WIDTH_ {fr->getFitsWidthCmd();}
	;

getFitsExt : INT {fr->getFitsExtCmd($1);}
	| internalSystem numeric numeric
	{fr->getFitsExtCmd(Vector($2,$3),(Coord::InternalSystem)$1);}

getFitsHeader : INT {fr->getFitsHeaderCmd($1);}
	| KEYWORD_ STRING {fr->getFitsHeaderKeywordCmd(1,$2);}
	| INT KEYWORD_ STRING {fr->getFitsHeaderKeywordCmd($1,$3);}
	| WCS_ INT {fr->getFitsHeaderWCSCmd($2);}
	;

getFitsDepth : /* empty */ {fr->getFitsDepthCmd(2);}
        | INT {fr->getFitsDepthCmd($1);}
	;

getFitsFileName: fileNameType 
	{fr->getFitsFileNameCmd((Base::FileNameType)$1);}
	| fileNameType internalSystem numeric numeric
	{fr->getFitsFileNameCmd(Vector($3,$4), (Coord::InternalSystem)$2,
	    (Base::FileNameType)$1);}
	| fileNameType INT 
	{fr->getFitsFileNameCmd($2, (Base::FileNameType)$1);}
	;

getFitsSlice : /* empty */ {fr->getFitsSliceCmd(2);}
        | INT {fr->getFitsSliceCmd($1);}
        | FROM_ IMAGE_ coordSystem
	{fr->getFitsSliceFromImageCmd((Coord::CoordSystem)$3);}
        | FROM_ IMAGE_ INT coordSystem
	{fr->getFitsSliceFromImageCmd($3, (Coord::CoordSystem)$4);}
        | TO_ IMAGE_ numeric coordSystem
	{fr->getFitsSliceToImageCmd($3, (Coord::CoordSystem)$4);}
	;

getGrid : /* empty */ {fr->getGridCmd();}
	| OPTION_ {fr->getGridOptionCmd();}
	| VAR_ {fr->getGridVarsCmd();}
	;

getMask	: COLOR_ {fr->getMaskColorCmd();}
	| MARK_ {fr->getMaskMarkCmd();}
	| RANGE_ {fr->getMaskRangeCmd();}
        | SYSTEM_ {fr->getMaskSystemCmd();}
	| TRANSPARENCY_ {fr->getMaskTransparencyCmd();}
	| COUNT_ {fr->getMaskCountCmd();}
        | BLEND_ {fr->getMaskBlendCmd();}
	;

getPan : PRESERVE_ {fr->getPanPreserveCmd();}
	;

getRGB	: CHANNEL_ {fr->getRGBChannelCmd();}
	| SYSTEM_ {fr->getRGBSystemCmd();}
	| VIEW_ {fr->getRGBViewCmd();}
	;

getSmooth : FUNCTION_  {fr->getSmoothFunctionCmd();}
	| RADIUS_ {fr->getSmoothRadiusCmd();}
	| RADIUS_ MINOR_ {fr->getSmoothRadiusMinorCmd();}
	| SIGMA_ {fr->getSmoothSigmaCmd();}
	| SIGMA_ MINOR_ {fr->getSmoothSigmaMinorCmd();}
	| ANGLE_ {fr->getSmoothAngleCmd();}
	;

getThreed : VIEW_ getThreedView
	| BORDER_ getThreedBorder
	| COMPASS_ getThreedCompass
	| HIGHLITE_ getThreedHighlite
	| METHOD_ {fr->get3dRenderMethodCmd();}
        | BACKGROUND_ {fr->get3dRenderBackgroundCmd();}
	| SCALE_ {fr->get3dScaleCmd();}
	;

getThreedBorder : {fr->get3dBorderCmd();}
	| COLOR_ {fr->get3dBorderColorCmd();}
	;

getThreedCompass : {fr->get3dCompassCmd();}
	| COLOR_ {fr->get3dCompassColorCmd();}
	;

getThreedHighlite : {fr->get3dHighliteCmd();}
	| COLOR_ {fr->get3dHighliteColorCmd();}
	;

getThreedView : {fr->get3dViewCmd();}
	| POINT_ {fr->get3dViewPointCmd();}
	;

getWCS	: /* empty */ {fr->getWCSCmd();}
	| ALIGN_ getWCSAlign
	| NAME_ wcsSystem {fr->getWCSNameCmd((Coord::CoordSystem)$2);}
	;

getWCSAlign : /* empty */ {fr->getWCSAlignCmd();}
	| POINTER_ {fr->getWCSAlignPointerCmd();}
	;

grid	: CREATE_ gridCreate
	| DELETE_ {fr->gridDeleteCmd();}
	;

gridCreate: coordSystem skyFrame skyFormat gridType STRING STRING
        {fr->gridCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, 
	    (Coord::SkyFormat)$3, (Grid2d::GridType)$4, $5, $6);}
        | coordSystem skyFrame skyFormat gridType STRING
	{
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, 
		      (Coord::SkyFormat)$3, (Grid2d::GridType)$4, $5, "");
	}
        ;

gridType : ANALYSIS_ {$$=Grid2d::ANALYSIS;}
	| PUBLICATION_ {$$=Grid2d::PUBLICATION;}
	;

has	: AMPLIFIER_ {fr->hasAmplifierCmd();}
        | BG_ COLOR_ {fr->hasBgColorCmd();}
	| BIN_ hasBin
	| CONTOUR_ hasContour
	| CROP_ {fr->hasCropCmd();}
	| DATAMIN_ {fr->hasDATAMINCmd();}
	| DATASEC_ {fr->hasDATASECCmd();}
	| DETECTOR_ {fr->hasDetectorCmd();}
	| FITS_ hasFits
	| GRID_ {fr->hasGridCmd();}
	| IIS_ {fr->hasIISCmd();}
	| IRAFMIN_ {fr->hasIRAFMINCmd();}
	| MARKER_ hasMarker
	| PHYSICAL_ {fr->hasPhysicalCmd();}
	| IMAGE_ {fr->hasImageCmd();}
	| SMOOTH_ {fr->hasSmoothCmd();}
	| SYSTEM_ coordSystem {fr->hasSystemCmd((Coord::CoordSystem)$2);}
	| WCS_ hasWCS
	;

hasBin	: COLUMN_ STRING {fr->hasBinColCmd($2);}
	;

hasContour : /* empty */ {fr->hasContourCmd();}
	| AUX_ {fr->hasContourAuxCmd();}
	;

hasFits	: /* empty */ {fr->hasFitsCmd();}
	| BIN_ {fr->hasFitsBinCmd();}
	| CUBE_ {fr->hasFitsCubeCmd();}
	| MOSAIC_ {fr->hasFitsMosaicCmd();}
	;

hasMarker : HIGHLITE_ {fr->hasMarkerHighlitedCmd();}
	| SELECT_ {fr->hasMarkerSelectedCmd();}
	| PASTE_ {fr->hasMarkerPasteCmd();}
	| UNDO_ {fr->hasMarkerUndoCmd();}
	;

hasWCS	: coordSystem {fr->hasWCSCmd((Coord::CoordSystem)$1);}
	| CELESTIAL_ coordSystem {fr->hasWCSCelCmd((Coord::CoordSystem)$2);}
	| EQUATORIAL_ coordSystem {fr->hasWCSEquCmd((Coord::CoordSystem)$2);}
        | LINEAR_ coordSystem {fr->hasWCSLinearCmd((Coord::CoordSystem)$2);}
	| ALT_ {fr->hasWCSAltCmd();}
	| THREED_ coordSystem {fr->hasWCS3DCmd((Coord::CoordSystem)$2);}
	;

iis	: NEW_ INT INT {fr->iisCmd($2,$3);}
	| ERASE_ {fr->iisEraseCmd();}
	| MESSAGE_ STRING {fr->iisMessageCmd($2);}
	| CURSOR_ iiscursor
	| SET_ FILE_ NAME_ iisSetFileName
	| SET_ POINTER INT INT INT INT
	{fr->iisSetCmd((const char*)$2,$3,$4,$5,$6);}
	| UPDATE_ {fr->iisUpdateCmd();}
	| WCS_ numeric numeric numeric numeric 
	  numeric numeric numeric numeric INT
	{fr->iisWCSCmd(Matrix($2,$3,$4,$5,$6,$7),Vector($8,$9),$10);}
	;

iisSetFileName : STRING {fr->iisSetFileNameCmd($1);}
	| STRING INT {fr->iisSetFileNameCmd($1,$2);}
	;

iiscursor: INT INT CANVAS_
	{fr->iisSetCursorCmd(Vector($1,$2),Coord::CANVAS);}
	| INT INT coordSystem
	{fr->iisSetCursorCmd(Vector($1,$2),(Coord::CoordSystem)$3);}
	| MODE_ yesno {fr->iisCursorModeCmd($2);}
	;

load	: ARRAY_ loadArr
        | ENVI_ loadENVI
	| FITS_ loadFits
	| INCR_ loadIncr
        | NRRD_ loadNRRD
	| PHOTO_ loadPhoto
	;

loadArr : STRING ALLOC_ STRING layerType 
	{fr->loadArrAllocCmd($3, $1, (Base::LayerType)$4);}
	| STRING ALLOCGZ_ STRING layerType 
	{fr->loadArrAllocGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType 
	{fr->loadArrChannelCmd($3, $1, (Base::LayerType)$4);}
	| STRING MMAP_ layerType {fr->loadArrMMapCmd($1, (Base::LayerType)$3);}
	| STRING MMAPINCR_ layerType 
	{fr->loadArrMMapIncrCmd($1, (Base::LayerType)$3);}
	| STRING SHARED_ shmType INT layerType
	{fr->loadArrShareCmd((Base::ShmType)$3, $4, $1, (Base::LayerType)$5);}
	| STRING SOCKET_ INT layerType 
	{fr->loadArrSocketCmd($3, $1, (Base::LayerType)$4);}
	| STRING SOCKETGZ_ INT layerType 
	{fr->loadArrSocketGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING layerType 
	{fr->loadArrVarCmd($3, $1, (Base::LayerType)$4);}
	| RGB_ CUBE_ loadArrayRGBCube
	;

loadArrayRGBCube : STRING ALLOC_ STRING {fr->loadArrayRGBCubeAllocCmd($3, $1);}
	| STRING ALLOCGZ_ STRING {fr->loadArrayRGBCubeAllocGZCmd($3, $1);}
	| STRING CHANNEL_ STRING {fr->loadArrayRGBCubeChannelCmd($3, $1);}
	| STRING MMAP_ {fr->loadArrayRGBCubeMMapCmd($1);}
	| STRING MMAPINCR_  {fr->loadArrayRGBCubeMMapIncrCmd($1);}
	| STRING SHARED_ shmType INT
	{fr->loadArrayRGBCubeShareCmd((Base::ShmType)$3, $4, $1);}
	| STRING SOCKET_ INT {fr->loadArrayRGBCubeSocketCmd($3, $1);}
	| STRING SOCKETGZ_ INT {fr->loadArrayRGBCubeSocketGZCmd($3, $1);}
	| STRING VAR_ STRING {fr->loadArrayRGBCubeVarCmd($3, $1);}
	;

loadENVI : STRING STRING SMMAP_ {fr->loadENVISMMapCmd($1,$2);}
	;

loadFits: STRING ALLOC_ STRING layerType 
	{fr->loadFitsAllocCmd($3, $1, (Base::LayerType)$4);}
	| STRING ALLOCGZ_ STRING layerType 
	{fr->loadFitsAllocGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType 
	{fr->loadFitsChannelCmd($3, $1, (Base::LayerType)$4);}
	| STRING MMAP_ incrLoad layerType
	{fr->loadFitsMMapCmd($1, (Base::LayerType)$4);}
	| STRING STRING SMMAP_ incrLoad layerType
	{fr->loadFitsSMMapCmd($1, $2, (Base::LayerType)$5);}
	| STRING MMAPINCR_ incrLoad layerType
	{fr->loadFitsMMapIncrCmd($1, (Base::LayerType)$4);}
	| STRING SHARED_ shmType INT incrLoad layerType
	{fr->loadFitsShareCmd((Base::ShmType)$3, $4, $1, (Base::LayerType)$6);}
	| STRING SSHARED_ shmType INT INT incrLoad layerType
	{fr->loadFitsSShareCmd((Base::ShmType)$3, $4, $5, $1, 
	  (Base::LayerType)$7);}
	| STRING SOCKET_ INT  layerType
	{fr->loadFitsSocketCmd($3, $1, (Base::LayerType)$4);}
	| STRING SOCKETGZ_ INT  layerType
	{fr->loadFitsSocketGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING incrLoad layerType
	{fr->loadFitsVarCmd($3, $1, (Base::LayerType)$5);}
	| SLICE_ loadFitsSlice
	| EXT_ CUBE_ loadFitsExtCube
	| RGB_ IMAGE_ loadFitsRGBImage
	| RGB_ CUBE_ loadFitsRGBCube
	| MOSAIC_ loadFitsMosaic
	;

loadFitsSlice:STRING ALLOC_ STRING {fr->loadSliceAllocCmd($3, $1);}
	| STRING ALLOCGZ_ STRING {fr->loadSliceAllocGZCmd($3, $1);}
	| STRING CHANNEL_ STRING {fr->loadSliceChannelCmd($3, $1);}
	| STRING MMAP_ incrLoad {fr->loadSliceMMapCmd($1);}
	| STRING STRING SMMAP_ incrLoad {fr->loadSliceSMMapCmd($1, $2);}
	| STRING MMAPINCR_ incrLoad {fr->loadSliceMMapIncrCmd($1);}
	| STRING SHARED_ shmType INT incrLoad
	{fr->loadSliceShareCmd((Base::ShmType)$3, $4, $1);}
	| STRING SSHARED_ shmType INT INT incrLoad
	{fr->loadSliceSShareCmd((Base::ShmType)$3, $4, $5, $1);}
	| STRING SOCKET_ INT {fr->loadSliceSocketCmd($3, $1);}
	| STRING SOCKETGZ_ INT {fr->loadSliceSocketGZCmd($3, $1);}
	| STRING VAR_ STRING incrLoad {fr->loadSliceVarCmd($3, $1);}
	;

loadFitsExtCube: STRING ALLOC_ STRING {fr->loadExtCubeAllocCmd($3, $1);}
	| STRING ALLOCGZ_ STRING {fr->loadExtCubeAllocGZCmd($3, $1);}
	| STRING CHANNEL_ STRING {fr->loadExtCubeChannelCmd($3, $1);}
	| STRING MMAP_ incrLoad {fr->loadExtCubeMMapCmd($1);}
	| STRING MMAPINCR_ incrLoad {fr->loadExtCubeMMapIncrCmd($1);}
	| STRING SHARED_ shmType INT incrLoad
	{fr->loadExtCubeShareCmd((Base::ShmType)$3, $4, $1);}
	| STRING SOCKET_ INT {fr->loadExtCubeSocketCmd($3, $1);}
	| STRING SOCKETGZ_ INT {fr->loadExtCubeSocketGZCmd($3, $1);}
	| STRING VAR_ STRING incrLoad {fr->loadExtCubeVarCmd($3, $1);}
	;

loadFitsMosaic : IMAGE_ IRAF_ loadFitsMosaicImageIRAF
	| IRAF_ loadFitsMosaicIRAF
	| IMAGE_ loadFitsMosaicImageWCS
	| loadFitsMosaicWCS
	| IMAGE_ WFPC2_ loadFitsMosaicImageWFPC2
	;

loadFitsMosaicImageIRAF : STRING ALLOC_ STRING layerType
	{fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    $3, $1, (Base::LayerType)$4);}
	| STRING ALLOCGZ_ STRING layerType
	{fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    $3, $1,(Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType
	{fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    $3, $1,(Base::LayerType)$4);}
	| STRING MMAP_ incrLoad layerType
	{fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    $1, (Base::LayerType)$4);}
	| STRING MMAPINCR_ incrLoad layerType
	{fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    $1, (Base::LayerType)$4);}
	| STRING SHARED_ shmType INT incrLoad layerType
	{fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)$3, $4, $1, (Base::LayerType)$6);}
	| STRING SOCKET_ INT layerType
	{fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING SOCKETGZ_ INT layerType
	{fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING incrLoad layerType
	{fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$5);}
	;

loadFitsMosaicIRAF : STRING ALLOC_ STRING layerType
        {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING ALLOCGZ_ STRING layerType
	{fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType
	{fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING MMAP_ incrLoad layerType
	{fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    $1, (Base::LayerType)$4);}
	| STRING STRING SMMAP_ incrLoad layerType
	{fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    $1, $2, (Base::LayerType)$5);}
	| STRING MMAPINCR_ incrLoad layerType
	{fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    $1, (Base::LayerType)$4);}
	| STRING SHARED_ shmType INT incrLoad layerType
	{fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)$3, $4, $1, (Base::LayerType)$6);}
	| STRING SSHARED_ shmType INT INT incrLoad layerType
	{fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)$3, $4, $5, $1, (Base::LayerType)$7);}
	| STRING SOCKET_ INT layerType
	{fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING SOCKETGZ_ INT layerType
	{fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING incrLoad layerType
	{fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    $3, $1, (Base::LayerType)$5);}
	;

loadFitsMosaicImageWCS : wcsSystem STRING ALLOC_ STRING layerType
	{fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING ALLOCGZ_ STRING layerType
	{fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)$1, $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING CHANNEL_ STRING layerType
	{fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)$1, $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING MMAP_ incrLoad layerType
	{fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)$1,
	    $2, (Base::LayerType)$5);}
	| wcsSystem STRING MMAPINCR_ incrLoad layerType
	{fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)$1, $2, (Base::LayerType)$5);}
	| wcsSystem STRING SHARED_ shmType INT incrLoad layerType
	{fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)$1, 
	    (Base::ShmType)$4, $5, $2, (Base::LayerType)$7);}
	| wcsSystem STRING SOCKET_ INT layerType
	{fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING SOCKETGZ_ INT layerType
	{fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)$1, $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING VAR_ STRING incrLoad layerType
	{fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$6);}
	;

loadFitsMosaicImageWFPC2 : STRING ALLOC_ STRING layerType
        {fr->loadMosaicImageWFPC2AllocCmd($3, $1, (Base::LayerType)$4);}
        | STRING ALLOCGZ_ STRING layerType
	{fr->loadMosaicImageWFPC2AllocGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType
	{fr->loadMosaicImageWFPC2ChannelCmd($3, $1, (Base::LayerType)$4);}
	| STRING MMAP_ incrLoad layerType
	{fr->loadMosaicImageWFPC2MMapCmd($1, (Base::LayerType)$4);}
	| STRING MMAPINCR_ incrLoad layerType
	{fr->loadMosaicImageWFPC2MMapIncrCmd($1, (Base::LayerType)$4);}
	| STRING SHARED_ shmType INT incrLoad layerType
	{
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)$3, $4, $1,
					   (Base::LayerType)$6);
        }
	| STRING SOCKET_ INT layerType
	{fr->loadMosaicImageWFPC2SocketCmd($3, $1, (Base::LayerType)$4);}
	| STRING SOCKETGZ_ INT layerType
	{fr->loadMosaicImageWFPC2SocketGZCmd($3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING incrLoad layerType
	{fr->loadMosaicImageWFPC2VarCmd($3, $1, (Base::LayerType)$5);}
	;

loadFitsMosaicWCS : wcsSystem STRING ALLOC_ STRING layerType
	{fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING ALLOCGZ_ STRING layerType
	{fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING CHANNEL_ STRING  layerType
	{fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING MMAP_ incrLoad  layerType
	{fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $2, (Base::LayerType)$5);}
	| wcsSystem STRING STRING SMMAP_ incrLoad  layerType
	{fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $2, $3, (Base::LayerType)$6);}
	| wcsSystem STRING MMAPINCR_ incrLoad  layerType
	{fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $2, (Base::LayerType)$5);}
	| wcsSystem STRING SHARED_ shmType INT incrLoad layerType
	{fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1, 
	    (Base::ShmType)$4, $5, $2, (Base::LayerType)$7);}
	| wcsSystem STRING SSHARED_ shmType INT INT incrLoad layerType
	{fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1, 
	    (Base::ShmType)$4, $5, $6, $2, (Base::LayerType)$8);}
	| wcsSystem STRING SOCKET_ INT  layerType
	{fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING SOCKETGZ_ INT  layerType
	{fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$5);}
	| wcsSystem STRING VAR_ STRING incrLoad layerType
	{fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)$1,
	    $4, $2, (Base::LayerType)$6);}
	;

loadFitsRGBCube: STRING ALLOC_ STRING {fr->loadRGBCubeAllocCmd($3, $1);}
	| STRING ALLOCGZ_ STRING {fr->loadRGBCubeAllocGZCmd($3, $1);}
	| STRING CHANNEL_ STRING {fr->loadRGBCubeChannelCmd($3, $1);}
	| STRING MMAP_ incrLoad {fr->loadRGBCubeMMapCmd($1);}
	| STRING STRING SMMAP_ incrLoad {fr->loadRGBCubeSMMapCmd($1, $2);}
	| STRING MMAPINCR_ incrLoad {fr->loadRGBCubeMMapIncrCmd($1);}
	| STRING SHARED_ shmType INT incrLoad
	{fr->loadRGBCubeShareCmd((Base::ShmType)$3, $4, $1);}
	| STRING SSHARED_ shmType INT INT incrLoad
	{fr->loadRGBCubeSShareCmd((Base::ShmType)$3, $4, $5, $1);}
	| STRING SOCKET_ INT {fr->loadRGBCubeSocketCmd($3, $1);}
	| STRING SOCKETGZ_ INT {fr->loadRGBCubeSocketGZCmd($3, $1);}
	| STRING VAR_ STRING incrLoad {fr->loadRGBCubeVarCmd($3, $1);}
	;

loadFitsRGBImage: STRING ALLOC_ STRING {fr->loadRGBImageAllocCmd($3, $1);}
	| STRING ALLOCGZ_ STRING {fr->loadRGBImageAllocGZCmd($3, $1);}
	| STRING CHANNEL_ STRING {fr->loadRGBImageChannelCmd($3, $1);}
	| STRING MMAP_ incrLoad {fr->loadRGBImageMMapCmd($1);}
	| STRING MMAPINCR_ incrLoad {fr->loadRGBImageMMapIncrCmd($1);}
	| STRING SHARED_ shmType INT incrLoad
	{fr->loadRGBImageShareCmd((Base::ShmType)$3, $4, $1);}
	| STRING SOCKET_ INT {fr->loadRGBImageSocketCmd($3, $1);}
	| STRING SOCKETGZ_ INT {fr->loadRGBImageSocketGZCmd($3, $1);}
	| STRING VAR_ STRING incrLoad {fr->loadRGBImageVarCmd($3, $1);}
	;

loadNRRD : STRING ALLOC_ STRING layerType 
	{fr->loadNRRDAllocCmd($3, $1, (Base::LayerType)$4);}
	| STRING CHANNEL_ STRING layerType 
	{fr->loadNRRDChannelCmd($3, $1, (Base::LayerType)$4);}
	| STRING MMAP_ layerType {fr->loadNRRDMMapCmd($1, (Base::LayerType)$3);}
	| STRING SHARED_ shmType INT layerType
	{fr->loadNRRDShareCmd((Base::ShmType)$3, $4, $1, (Base::LayerType)$5);}
	| STRING SOCKET_ INT layerType 
	{fr->loadNRRDSocketCmd($3, $1, (Base::LayerType)$4);}
	| STRING VAR_ STRING layerType 
	{fr->loadNRRDVarCmd($3, $1, (Base::LayerType)$4);}
	;

loadPhoto: /* empty */ STRING STRING {fr->loadPhotoCmd($1,$2);}
	| SLICE_ STRING STRING {fr->loadSlicePhotoCmd($2,$3);}
	;

loadIncr: DATA_ INT INT INT INT INT {fr->loadIncrDataCmd($2,$3,$4,$5,$6);}
	| MINMAX_ INT INT INT INT INT {fr->loadIncrMinMaxCmd($2,$3,$4,$5,$6);}
	| END_ {fr->loadIncrEndCmd();}
	;

macosx	: PRINT_ {}
	;

magnifier: yesno {fr->magnifierCmd($1);}
	| GRAPHICS_ yesno {fr->magnifierGraphicsCmd($2);}
	| CURSOR_ yesno {fr->magnifierCursorCmd($2);}
	| COLOR_ STRING {fr->magnifierColorCmd($2);}
	| STRING INT INT {fr->magnifierCmd($1, $2, $3);}
	| UPDATE_ numeric numeric {fr->updateMagnifierCmd(Vector($2, $3));}
	| ZOOM_ numeric {fr->magnifierZoomCmd($2);}
	;

match	: STRING STRING wcsSystem skyFrame STRING STRING wcsSystem skyFrame numeric wcsSystem skyDist STRING
	{
	  fr->matchCmd($1,$2,(Coord::CoordSystem)$3,(Coord::SkyFrame)$4,
		       $5,$6,(Coord::CoordSystem)$7,(Coord::SkyFrame)$8,
		       $9,(Coord::CoordSystem)$10,(Coord::DistFormat)$11,
		       $12);
	}

marker	: CENTROID_ markerCentroid
	| COLOR_ STRING {fr->markerColorCmd($2);}
	| COPY_ {fr->markerCopyCmd();}
	| COMMAND_ markerFormat STRING
	{fr->markerCommandCmd((Base::MarkerFormat)$2,$3);}
	| COMMAND_ markerFormat VAR_ STRING
	{fr->markerCommandVarCmd((Base::MarkerFormat)$2,$4);}
	| COMPOSITE_ DELETE_ {fr->markerCompositeDeleteCmd();}
	| CREATE_ {maperr =0;} markerCreate
	| CUT_ {fr->markerCutCmd();}
        | DELETE_ markerDelete
	| EDIT_ markerEdit
        | EPSILON_ INT {fr->markerEpsilonCmd($2);}
	| FONT_ STRING {fr->markerFontCmd($2);}

	| HIGHLITE_ ALL_ {fr->markerHighliteAllCmd();}
	| HIGHLITE_ ONLY_ numeric numeric 
	{fr->markerHighliteOnlyCmd(Vector($3,$4));}
	| HIGHLITE_ TOGGLE_ numeric numeric
	{fr->markerHighliteToggleCmd(Vector($3,$4));}

	| INT ANALYSIS_ analysisMethod yesno
	{fr->markerAnalysisCmd($1, (Marker::AnalysisTask)$3, $4);}

	| INT ANGLE_ angle {fr->markerAngleCmd($1,$3);}
	| INT ANGLE_ angle internalSystem {fr->markerAngleCmd($1,$3);}
	| INT ANGLE_ angle coordSystem skyFrame
	{fr->markerAngleCmd($1,$3,(Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}

	| INT ANNULUS_ RADIUS_ numeric numeric INT coordSystem skyDist
	{fr->markerAnnulusRadiusCmd($1, $4, $5, $6,
	    (Coord::CoordSystem)$7, (Coord::DistFormat)$8);}
	| INT ANNULUS_ RADIUS_ STRING coordSystem skyDist
	{fr->markerAnnulusRadiusCmd($1, $4,(Coord::CoordSystem)$5,(Coord::DistFormat)$6);}

	| INT BOX_ FILL_ yesno {fr->markerBoxFillCmd($1,$4);}
	| INT BOXANNULUS_ RADIUS_ numeric numeric numeric INT 
	    coordSystem skyDist
	{fr->markerBoxAnnulusRadiusCmd($1, Vector($4, $5), 
	    Vector($6, $6*$5/$4), $7, (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}
	| INT BOXANNULUS_ RADIUS_ STRING coordSystem skyDist
	{fr->markerBoxAnnulusRadiusCmd($1,$4,(Coord::CoordSystem)$5,(Coord::DistFormat)$6);}

	| INT BOX_ RADIUS_ numeric numeric coordSystem skyDist
	{fr->markerBoxRadiusCmd($1, Vector($4,$5), 
	    (Coord::CoordSystem)$6, (Coord::DistFormat)$7);}
	| INT BPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	{fr->markerBpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10);}
	| INT BPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	    internalSystem
	{fr->markerBpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10);}
	| INT BPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	    coordSystem skyFrame
	{fr->markerBpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10,
	    (Coord::CoordSystem)$11, (Coord::SkyFrame)$12);}
	| INT BPANDA_ EDIT_ STRING STRING coordSystem skyFrame 
	    coordSystem skyDist
	{fr->markerBpandaEditCmd($1, $4, $5, 
	    (Coord::CoordSystem)$6, (Coord::SkyFrame)$7, (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}

	| INT CALLBACK_ markerCallBack STRING STRING
	{fr->markerCallBackCmd($1,(CallBack::Type)$3,$4,$5);}
	| INT CIRCLE_ FILL_ yesno {fr->markerCircleFillCmd($1,$4);}
	| INT CIRCLE_ RADIUS_ numeric coordSystem skyDist
	{fr->markerCircleRadiusCmd($1, $4, (Coord::CoordSystem)$5, (Coord::DistFormat)$6);}
	| INT COLOR_ STRING {fr->markerColorCmd($1,$3);}
	| INT COMPASS_ ARROW_ yesno yesno 
	{fr->markerCompassArrowCmd($1,$4,$5);}
	| INT COMPASS_ LABEL_ STRING STRING
	{fr->markerCompassLabelCmd($1,$4,$5);}
	| INT COMPASS_ RADIUS_ numeric coordSystem skyDist
	  {fr->markerCompassRadiusCmd($1,$4,(Coord::CoordSystem)$5,(Coord::DistFormat)$6);}
	| INT COMPASS_ SYSTEM_ coordSystem skyFrame
	{fr->markerCompassSystemCmd($1, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	| INT COMPOSITE_ GLOBAL_ yesno {fr->markerCompositeCmd($1,$4);}
	| INT CPANDA_ EDIT_ angle angle INT numeric numeric INT 
	{fr->markerCpandaEditCmd($1, $4, $5, $6, $7, $8, $9);}
	| INT CPANDA_ EDIT_ angle angle INT numeric numeric INT internalSystem
	{fr->markerCpandaEditCmd($1, $4, $5, $6, $7, $8, $9);}
	| INT CPANDA_ EDIT_ angle angle INT numeric numeric INT 
	    coordSystem skyFrame
	{fr->markerCpandaEditCmd($1, $4, $5, $6, $7, $8, $9,
	    (Coord::CoordSystem)$10, (Coord::SkyFrame)$11);}
	| INT CPANDA_ EDIT_ STRING STRING coordSystem skyFrame 
	    coordSystem skyDist
	{fr->markerCpandaEditCmd($1, $4, $5, (Coord::CoordSystem)$6, (Coord::SkyFrame)$7,
	    (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}

	| INT CREATE_ ANNULUS_ RADIUS_ numeric numeric
	{fr->markerAnnulusCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ BOXANNULUS_ RADIUS_ numeric numeric
	{fr->markerBoxAnnulusCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ BPANDA_ ANGLE_ numeric numeric
	{fr->markerBpandaCreateAnglesCmd($1,Vector($5,$6));}
	| INT CREATE_ BPANDA_ RADIUS_ numeric numeric
	{fr->markerBpandaCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ ELLIPSEANNULUS_ RADIUS_ numeric numeric
	{fr->markerEllipseAnnulusCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ EPANDA_ ANGLE_ numeric numeric
	{fr->markerEpandaCreateAnglesCmd($1,Vector($5,$6));}
	| INT CREATE_ EPANDA_ RADIUS_ numeric numeric
	{fr->markerEpandaCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ CPANDA_ ANGLE_ numeric numeric
	{fr->markerCpandaCreateAnglesCmd($1,Vector($5,$6));}
	| INT CREATE_ CPANDA_ RADIUS_ numeric numeric
	{fr->markerCpandaCreateRadiusCmd($1,Vector($5,$6));}
	| INT CREATE_ POLYGON_ VERTEX_ INT numeric numeric
	{fr->markerPolygonCreateVertexCmd($1,$5,Vector($6,$7));}
	| INT CREATE_ SEGMENT_ VERTEX_ INT numeric numeric
	{fr->markerSegmentCreateVertexCmd($1,$5,Vector($6,$7));}

	| INT DELETE_ {fr->markerDeleteCmd($1);}
	| INT DELETE_ ANNULUS_ INT 
	{fr->markerAnnulusDeleteRadiusCmd($1,$4);}
	| INT DELETE_ BOXANNULUS_ INT 
	{fr->markerBoxAnnulusDeleteRadiusCmd($1,$4);}
	| INT DELETE_ BPANDA_ INT {fr->markerBpandaDeleteCmd($1,$4);}
	| INT DELETE_ ELLIPSEANNULUS_ INT 
	{fr->markerEllipseAnnulusDeleteRadiusCmd($1,$4);}
	| INT DELETE_ CALLBACK_ markerCallBack STRING
	{fr->markerDeleteCallBackCmd($1,(CallBack::Type)$4,$5);}
	| INT DELETE_ EPANDA_ INT {fr->markerEpandaDeleteCmd($1,$4);}
	| INT DELETE_ CPANDA_ INT {fr->markerCpandaDeleteCmd($1,$4);}
	| INT DELETE_ POLYGON_ VERTEX_ INT 
	{fr->markerPolygonDeleteVertexCmd($1,$5);}
	| INT DELETE_ SEGMENT_ VERTEX_ INT 
	{fr->markerSegmentDeleteVertexCmd($1,$5);}
	| INT DELETE_ TAG_ {fr->markerDeleteTagCmd($1);}
	| INT DELETE_ TAG_ STRING {fr->markerDeleteTagCmd($1,$4);}
	| INT DELETE_ TAG_ INT {fr->markerDeleteTagCmd($1,$4);}

	| INT EDIT_ BEGIN_ INT {fr->markerEditBeginCmd($1,$4);}
	| INT ELLIPSE_ FILL_ yesno {fr->markerEllipseFillCmd($1,$4);}
	| INT ELLIPSE_ RADIUS_ numeric numeric coordSystem skyDist
	{fr->markerEllipseRadiusCmd($1, Vector($4, $5),
	    (Coord::CoordSystem)$6, (Coord::DistFormat)$7);}
	| INT ELLIPSEANNULUS_ RADIUS_ numeric numeric numeric INT
	    coordSystem skyDist
	{fr->markerEllipseAnnulusRadiusCmd($1, Vector($4,$5), 
	    Vector($6,$6*$5/$4), $7, (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}
	| INT ELLIPSEANNULUS_ RADIUS_ STRING coordSystem skyDist
	{fr->markerEllipseAnnulusRadiusCmd($1, $4,
	    (Coord::CoordSystem)$5, (Coord::DistFormat)$6);}
	| INT EPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	{fr->markerEpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10);}
	| INT EPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	    internalSystem
	{fr->markerEpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10);}
	| INT EPANDA_ EDIT_ angle angle INT numeric numeric numeric INT 
	    coordSystem skyFrame
	{fr->markerEpandaEditCmd($1, $4, $5, $6,
	    Vector($7,$8), Vector($9,$9*$8/$7), $10,
	    (Coord::CoordSystem)$11, (Coord::SkyFrame)$12);}
	| INT EPANDA_ EDIT_ STRING STRING coordSystem skyFrame 
	    coordSystem skyDist
	{fr->markerEpandaEditCmd($1, $4, $5, 
	    (Coord::CoordSystem)$6, (Coord::SkyFrame)$7,
	    (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}

	| INT FONT_ STRING {fr->markerFontCmd($1,$3);}
	| INT HIGHLITE_ {fr->markerHighliteCmd($1);}
	| INT HIGHLITE_ ONLY_{fr->markerHighliteOnlyCmd($1);}

	| INT LINE_ ARROW_ yesno yesno {fr->markerLineArrowCmd($1,$4,$5);}
	| INT LINE_ POINT_ coordSystem skyFrame coord coord
	{fr->markerLineCmd($1, Vector($6), Vector($7), 
	    (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}

	| INT MOVE_ numeric numeric 
	{fr->markerMoveCmd($1, Vector($3,$4));}
	| INT MOVE_ FRONT_ {fr->markerFrontCmd($1);}
	| INT MOVE_ BACK_ {fr->markerBackCmd($1);}
	| INT MOVE_ TO_ coordSystem skyFrame coord 
	{fr->markerMoveToCmd($1,Vector($6),(Coord::CoordSystem)$4,(Coord::SkyFrame)$5);}

	| INT POLYGON_ RESET_ numeric numeric coordSystem skyDist
	{fr->markerPolygonResetCmd($1, Vector($4,$5),
	    (Coord::CoordSystem)$6, (Coord::DistFormat)$7);}
	| INT SEGMENT_ RESET_ numeric numeric coordSystem skyDist
	{fr->markerSegmentResetCmd($1, Vector($4,$5),
	    (Coord::CoordSystem)$6, (Coord::DistFormat)$7);}
	| INT POINT_ SHAPE_ pointShape 
	{fr->markerPointShapeCmd($1,(Point::PointShape)$4);}
	| INT POINT_ SIZE_ INT {fr->markerPointSizeCmd($1,$4);}

	| INT POLYGON_ FILL_ yesno {fr->markerPolygonFillCmd($1,$4);}
	| INT PROJECTION_ coordSystem skyFrame coord coord numeric
	    coordSystem skyDist
	{fr->markerProjectionCmd($1, Vector($5), Vector($6),
	    (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, $7,
	    (Coord::CoordSystem)$8, (Coord::DistFormat)$9);}
	| INT PROPERTY_ markerProperty yesno 
	{fr->markerPropertyCmd($1,$3,$4);}

	| INT ROTATE_ BEGIN_ {fr->markerRotateBeginCmd($1);}
        | INT RULER_ FORMAT_ STRING {fr->markerRulerDistSpecCmd($1, $4);}
	| INT RULER_ POINT_ coordSystem skyFrame coord coord
	{fr->markerRulerPointCmd($1, Vector($6), Vector($7),
	    (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	| INT RULER_ SYSTEM_ coordSystem skyFrame coordSystem skyDist
	{fr->markerRulerSystemCmd($1, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5,
	    (Coord::CoordSystem)$6, (Coord::DistFormat)$7);}

	| INT SELECT_ {fr->markerSelectCmd($1);}
	| INT SELECT_ ONLY_ {fr->markerSelectOnlyCmd($1);}

	| INT TAG_ STRING {fr->markerTagCmd($1,$3);}
	| INT TEXT_ STRING {fr->markerTextCmd($1,$3);}
	| INT TEXT_ ROTATE_ yesno {fr->markerTextRotateCmd($1,$4);}

	| INT UNHIGHLITE_ {fr->markerUnhighliteCmd($1);}
	| INT UNSELECT_ {fr->markerUnselectCmd($1);}

	| INT VECTOR_ ARROW_ yesno {fr->markerVectorArrowCmd($1,$4);}
	| INT VECTOR_ POINT_ coordSystem skyFrame coord 
	    coordSystem skyDist numeric angle
	{fr->markerVectorCmd($1, Vector($6), (Coord::CoordSystem)$4, (Coord::SkyFrame)$5,
	    $9, (Coord::CoordSystem)$7, (Coord::DistFormat)$8, $10);}

	| INT WIDTH_ INT {fr->markerLineWidthCmd($1,$3);}

	| KEY_ {fr->markerKeyCmd();}
	| KEY_ numeric numeric {fr->markerKeyCmd(Vector($2,$3));}

	| LIST_ markerList
	| LOAD_ markerLoad
	| MOVE_ markerMoveSelected
	| PRESERVE_ yesno {fr->markerPreserveCmd($2);}
	| PROPERTY_ markerProperty yesno {fr->markerPropertyCmd($2,$3);}
	| PROPERTY_ markerProperty yesno numeric numeric
	{fr->markerPropertyCmd($2,$3,Vector($4,$5));}
	| ROTATE_ BEGIN_ numeric numeric 
	{fr->markerRotateBeginCmd(Vector($3,$4));}
	| ROTATE_ MOTION_ numeric numeric INT
	{fr->markerRotateMotionCmd(Vector($3,$4),$5);}
	| ROTATE_ END_ {fr->markerRotateEndCmd();}
        | SAVE_ markerSave
	| SELECT_ markerSelect

	| SHOW_ markerShow

	| STRING COLOR_ STRING {fr->markerColorCmd($1,$3);}
	| STRING COPY_ {fr->markerCopyCmd($1);}
	| STRING DELETE_ {fr->markerDeleteCmd($1);}
	| STRING CUT_ {fr->markerCutCmd($1);}
	| STRING FONT_ STRING {fr->markerFontCmd($1,$3);}
	| STRING HIGHLITE_ {fr->markerHighliteCmd($1);}
	| STRING HIGHLITE_ ONLY_ {fr->markerHighliteOnlyCmd($1);}
	| STRING MOVE_ numeric numeric {fr->markerMoveCmd($1,Vector($3,$4));}
	| STRING MOVE_ FRONT_ {fr->markerFrontCmd($1);}
	| STRING MOVE_ BACK_ {fr->markerBackCmd($1);}
	| STRING MOVE_ TO_ coordSystem skyFrame coord 
	{fr->markerMoveToCmd($1,Vector($6),(Coord::CoordSystem)$4,(Coord::SkyFrame)$5);}
	| STRING PROPERTY_ markerProperty yesno 
	{fr->markerPropertyCmd($1,$3,$4);}
	| STRING SELECT_ {fr->markerSelectCmd($1);}
	| STRING SELECT_ ONLY_ {fr->markerSelectOnlyCmd($1);}
	| STRING UNHIGHLITE_ {fr->markerUnhighliteCmd($1);}
	| STRING UNSELECT_ {fr->markerUnselectCmd($1);}

	| TAG_ EDIT_ STRING STRING {fr->markerTagEditCmd($3,$4);}
	| TAG_ DELETE_ STRING {fr->markerTagDeleteCmd($3);}
	| TAG_ DELETE_ ALL_ {fr->markerTagDeleteAllCmd();}
	| TAG_ STRING {fr->markerTagCmd($2);}
	| TAG_ UPDATE_ STRING {fr->markerTagUpdateCmd($3);}

	| PASTE_ {fr->markerPasteCmd();}
	| PASTE_ coordSystem {fr->markerPasteCmd((Coord::CoordSystem)$2);}
	| UNDO_ {fr->markerUndoCmd();}
	| UNHIGHLITE_ ALL_ {fr->markerUnhighliteAllCmd();}
	| UNSELECT_ ALL_ {fr->markerUnselectAllCmd();}
	| WIDTH_ INT {fr->markerLineWidthCmd($2);}
	;

markerCallBack : SELECT_ {$$ = CallBack::SELECTCB;}
	| UNSELECT_ {$$ = CallBack::UNSELECTCB;}
	| HIGHLITE_ {$$ = CallBack::HIGHLITECB;}
	| UNHIGHLITE_ {$$ = CallBack::UNHIGHLITECB;}
	| BEGIN_ MOVE_  {$$ = CallBack::MOVEBEGINCB;}
	| MOVE_  {$$ = CallBack::MOVECB;}
	| END_ MOVE_  {$$ = CallBack::MOVEENDCB;}
	| BEGIN_ EDIT_ {$$ = CallBack::EDITBEGINCB;}
	| EDIT_ {$$ = CallBack::EDITCB;}
	| END_ EDIT_ {$$ = CallBack::EDITENDCB;}
	| BEGIN_ ROTATE_ {$$ = CallBack::ROTATEBEGINCB;}
	| ROTATE_ {$$ = CallBack::ROTATECB;}
	| END_ ROTATE_ {$$ = CallBack::ROTATEENDCB;}
	| DELETE_ {$$ = CallBack::DELETECB;}
	| TEXT_ {$$ = CallBack::TEXTCB;}
	| COLOR_ {$$ = CallBack::COLORCB;}
	| WIDTH_ {$$ = CallBack::LINEWIDTHCB;}
	| PROPERTY_ {$$ = CallBack::PROPERTYCB;}
	| FONT_ {$$ = CallBack::FONTCB;}
	| KEY_ {$$ = CallBack::KEYCB;}
	| UPDATE_ {$$ = CallBack::UPDATECB;}
	;

markerCentroid : /* empty */ {fr->markerCentroidCmd();}
	| INT {fr->markerCentroidCmd($1);}
	| AUTO_ yesno {fr->markerCentroidAutoCmd($2);}
	| RADIUS_ numeric {fr->markerCentroidRadiusCmd($2);}
	| ITERATION_ INT {fr->markerCentroidIterationCmd($2);}
	| OPTION_ INT numeric
	{
	  fr->markerCentroidIterationCmd($2);
	  fr->markerCentroidRadiusCmd($3);
	}
	;

markerCreate : 
	  CIRCLE_ numeric numeric 
	    numeric 
	    markerProperties
	{fr->createCircleCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| ELLIPSE_ numeric numeric 
	    numeric numeric 
	    optangle
	    markerProperties
	{fr->createEllipseCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    Vector($4,$5),
            $6, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| BOX_ numeric numeric 
	    numeric numeric 
	    optangle 
	    markerProperties
	{fr->createBoxCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    Vector($4,$5),
            $6, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| POLYGON_ numeric numeric 
	    numeric numeric 
	    markerProperties
	{fr->createPolygonCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
            Vector($4,$5), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| SEGMENT_ numeric numeric 
	    numeric numeric 
	    markerProperties
	{fr->createSegmentCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    Vector($4,$5),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| LINE_ numeric numeric 
	    numeric numeric 
	    markerProperties
	{fr->createLineCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    fr->mapToRef(Vector($4,$5),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| VECTOR_ numeric numeric 
	    numeric numeric 
	    markerProperties
	{fr->createVectCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    fr->mapToRef(Vector($4,$5),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| TEXT_ numeric numeric 
	    optangle 
	    markerProperties
	{fr->createTextCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4, 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| CIRCLE_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::CIRCLE, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| BOX_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::BOX, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| DIAMOND_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::DIAMOND, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| CROSS_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::CROSS, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| 'X' POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::EX, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| ARROW_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::ARROW, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| BOXCIRCLE_ POINT_ numeric numeric pointSize markerProperties
	{fr->createPointCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS),
	    Point::BOXCIRCLE, $5,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}

	| RULER_ numeric numeric 
	    numeric numeric 
	    coordSystem skyFrame coordSystem skyDist STRING
	    markerProperties
	{fr->createRulerCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    fr->mapToRef(Vector($4,$5),Coord::CANVAS),
            (Coord::CoordSystem)$6, (Coord::SkyFrame)$7, 
            (Coord::CoordSystem)$8, (Coord::DistFormat)$9, $10,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| COMPASS_ numeric numeric 
	    numeric 
	    coordSystem skyFrame
	    markerProperties
	{fr->createCompassCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS), 
	    $4,
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)$5, (Coord::SkyFrame)$6,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| PROJECTION_ numeric numeric 
	    numeric numeric 
	    numeric 
	    markerProperties
	{fr->createProjectionCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    fr->mapToRef(Vector($4,$5),Coord::CANVAS),
	    $6,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}

	| ANNULUS_ numeric numeric 
	    numeric numeric INT 
	    markerProperties
	{fr->createAnnulusCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4,$5,$6,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| ELLIPSEANNULUS_ numeric numeric 
	    numeric numeric numeric INT 
	    optangle 
	    markerProperties
	{fr->createEllipseAnnulusCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    Vector($4,$5), 
	    Vector($6,$6*$4/$5),$7,
	    $8,
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);}
	| BOXANNULUS_ numeric numeric 
	    numeric numeric numeric INT 
	    optangle 
	    markerProperties
	{fr->createBoxAnnulusCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    Vector($4,$5),Vector($6,$6*$4/$5),$7,
	    $8,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}

	| CPANDA_ numeric numeric 
	    angle angle INT
	    numeric numeric INT 
	    markerProperties
	{fr->createCpandaCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4,$5,$6,
	    $7,$8,$9,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| EPANDA_ numeric numeric 
	    angle angle INT
	    numeric numeric numeric INT 
	    optangle 
	    markerProperties
	{fr->createEpandaCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4,$5,$6,
	    Vector($7,$8),
	    Vector($9,$9*$7/$8),$10,
	    $11,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}
	| BPANDA_ numeric numeric 
	    angle angle INT
	    numeric numeric numeric INT 
	    optangle 
	    markerProperties
	{fr->createBpandaCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS),
	    $4,$5,$6,
	    Vector($7,$8),
	    Vector($9,$9*$7/$8),$10,
	    $11,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}

	| COMPOSITE_ markerProperties
	{fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);}

	| TEMPLATE_ markerCreateTemplate
	;

markerCreateTemplate : STRING numeric numeric
	{fr->createTemplateCmd(fr->mapToRef(Vector($2,$3),Coord::CANVAS), $1);}
	| VAR_ STRING numeric numeric
	{fr->createTemplateVarCmd(fr->mapToRef(Vector($3,$4),Coord::CANVAS), $2);}
	| numeric numeric VAR_ STRING 
	  { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector($1,$2),Coord::CANVAS), $4);
	  }
	| STRING coordSystem skyFrame coord
	{fr->createTemplateCmd(Vector($4),(Coord::CoordSystem)$2,(Coord::SkyFrame)$3, $1);}
	;

markerDelete :	{fr->markerDeleteAllCmd(0);}
        | SELECT_ {fr->markerDeleteAllCmd(1);}
	| ALL_ {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        }
        ;

markerEdit : BEGIN_ numeric numeric INT 
	{fr->markerEditBeginCmd(Vector($2,$3),$4);}
	| MOTION_ numeric numeric INT 
	{fr->markerEditMotionCmd(Vector($2,$3),$4);}
	| END_ {fr->markerEditEndCmd();}
	;

markerFormat : DS9_ {$$ = Base::DS9;}
	| XML_ {$$ = Base::XML;}
	| CIAO_ {$$ = Base::CIAO;}
	| SAOTNG_ {$$ = Base::SAOTNG;}
	| SAOIMAGE_ {$$ = Base::SAOIMAGE;}
	| PROS_ {$$ = Base::PROS;}
	| XY_ {$$ = Base::RAWXY;}
	;

markerGet : CENTROID_ markerGetCentroid
	| COLOR_ {fr->getMarkerColorCmd();}
	| FONT_ {fr->getMarkerFontCmd();}
        | EPSILON_ {fr->getMarkerEpsilonCmd();}
	| HANDLE_ numeric numeric {fr->getMarkerHandleCmd(Vector($2,$3));}
	| ID_ numeric numeric {fr->getMarkerIdCmd(Vector($2,$3));}

	| INT ANALYSIS_ CPANDA_ STRING STRING STRING coordSystem INT
	{fr->getMarkerAnalysisPandaCmd($1,$4,$5,$6,(Coord::CoordSystem)$7,$8);}
        | INT ANALYSIS_ HISTOGRAM_ STRING STRING INT
	{fr->getMarkerAnalysisHistogramCmd($1,$4,$5,$6);}
	| INT ANALYSIS_ PLOT2D_ STRING STRING STRING STRING coordSystem skyFrame analysisParam
	{fr->getMarkerAnalysisPlot2dCmd($1,$4,$5,$6,$7,(Coord::CoordSystem)$8, (Coord::SkyFrame)$9, (Marker::AnalysisMethod)$10);}
	| INT ANALYSIS_ PLOT3D_ STRING STRING coordSystem analysisParam
	{fr->getMarkerAnalysisPlot3dCmd($1,$4,$5,(Coord::CoordSystem)$6, (Marker::AnalysisMethod)$7);}
	| INT ANALYSIS_ RADIAL_ STRING STRING STRING coordSystem
	{fr->getMarkerAnalysisRadialCmd($1,$4,$5,$6,(Coord::CoordSystem)$7);}
	| INT ANALYSIS_ STATS_ coordSystem skyFrame
	{fr->getMarkerAnalysisStatsCmd($1,(Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}

	| ID_ ALL_ {fr->getMarkerIdAllCmd();}
	| INT ANGLE_ {fr->getMarkerAngleCmd($1);}
	| INT ANGLE_ internalSystem  {fr->getMarkerAngleCmd($1);}
	| INT ANGLE_ coordSystem skyFrame
	{fr->getMarkerAngleCmd($1,(Coord::CoordSystem)$3, (Coord::SkyFrame)$4);}
	| INT ANNULUS_ RADIUS_ coordSystem skyDist
	{fr->getMarkerAnnulusRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}

	| INT BOX_ FILL_ {fr->getMarkerBoxFillCmd($1);}
	| INT BOXANNULUS_ RADIUS_ coordSystem skyDist
	{fr->getMarkerBoxAnnulusRadiusCmd($1,(Coord::CoordSystem)$4,(Coord::DistFormat)$5);}
	| INT BOX_ RADIUS_ coordSystem skyDist
	{fr->getMarkerBoxRadiusCmd($1,(Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT BPANDA_ ANGLE_ {fr->getMarkerBpandaAnglesCmd($1);}
	| INT BPANDA_ ANGLE_ internalSystem {fr->getMarkerBpandaAnglesCmd($1);}
	| INT BPANDA_ ANGLE_ coordSystem skyFrame
	{fr->getMarkerBpandaAnglesCmd($1, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	| INT BPANDA_ RADIUS_ coordSystem skyDist
	{fr->getMarkerBpandaRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}

	| INT CENTER_ coordSystem skyFrame skyFormat 
	{fr->getMarkerCenterCmd($1, (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, 
	    (Coord::SkyFormat)$5);}
	| INT CIRCLE_ FILL_ {fr->getMarkerCircleFillCmd($1);}
	| INT CIRCLE_ RADIUS_ coordSystem skyDist
	{fr->getMarkerCircleRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT COLOR_ {fr->getMarkerColorCmd($1);}
	| INT COMPASS_ ARROW_ {fr->getMarkerCompassArrowCmd($1);}
	| INT COMPASS_ LABEL_ {fr->getMarkerCompassLabelCmd($1);}
	| INT COMPASS_ RADIUS_ coordSystem skyDist
	{fr->getMarkerCompassRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT COMPASS_ SYSTEM_ {fr->getMarkerCompassSystemCmd($1);}
	| INT COMPOSITE_ GLOBAL_ {fr->getMarkerCompositeCmd($1);}
	| INT CPANDA_ ANGLE_ {fr->getMarkerCpandaAnglesCmd($1);}
	| INT CPANDA_ ANGLE_ internalSystem {fr->getMarkerCpandaAnglesCmd($1);}
	| INT CPANDA_ ANGLE_ coordSystem skyFrame
	{fr->getMarkerCpandaAnglesCmd($1, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	| INT CPANDA_ RADIUS_ coordSystem skyDist
	{fr->getMarkerCpandaRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT ELLIPSE_ FILL_ {fr->getMarkerEllipseFillCmd($1);}
	| INT ELLIPSE_ RADIUS_ coordSystem skyDist
	{fr->getMarkerEllipseRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT ELLIPSEANNULUS_ RADIUS_ coordSystem skyDist
	{fr->getMarkerEllipseAnnulusRadiusCmd($1, (Coord::CoordSystem)$4, 
	    (Coord::DistFormat)$5);}
	| INT EPANDA_ ANGLE_ {fr->getMarkerEpandaAnglesCmd($1);}
	| INT EPANDA_ ANGLE_ internalSystem {fr->getMarkerEpandaAnglesCmd($1);}
	| INT EPANDA_ ANGLE_ coordSystem skyFrame
	{fr->getMarkerEpandaAnglesCmd($1, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	| INT EPANDA_ RADIUS_ coordSystem skyDist
	{fr->getMarkerEpandaRadiusCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT FONT_ {fr->getMarkerFontCmd($1);}
	| INT HIGHLITE_ {fr->getMarkerHighlitedCmd($1);}
	| INT LINE_ ARROW_ {fr->getMarkerLineArrowCmd($1);}
	| INT LINE_ LENGTH_ coordSystem skyDist
	{fr->getMarkerLineLengthCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT LINE_ POINT_ coordSystem skyFrame skyFormat
	{fr->getMarkerLineCmd($1, (Coord::CoordSystem)$4,
	    (Coord::SkyFrame)$5, (Coord::SkyFormat)$6);}
	| INT MAP_ LENGTH_ numeric coordSystem skyDist
	{fr->getMarkerMapLenFromRefCmd($1, $4,
	    (Coord::CoordSystem)$5,(Coord::DistFormat)$6);}

	| INT POLYGON_ FILL_ {fr->getMarkerPolygonFillCmd($1);}
	| INT POINT_ SHAPE_ {fr->getMarkerPointShapeCmd($1);}
	| INT POINT_ SIZE_ {fr->getMarkerPointSizeCmd($1);}
	| INT PROJECTION_ POINT_ coordSystem skyFrame skyFormat
	{fr->getMarkerProjectionPointsCmd($1, (Coord::CoordSystem)$4,
	    (Coord::SkyFrame)$5, (Coord::SkyFormat)$6);}
	| INT PROJECTION_ LENGTH_ coordSystem skyDist
	{fr->getMarkerProjectionLengthCmd($1, (Coord::CoordSystem)$4, 
	    (Coord::DistFormat)$5);}
	| INT PROJECTION_ THICK_ coordSystem skyDist
	{fr->getMarkerProjectionWidthCmd($1,(Coord::CoordSystem)$4,(Coord::DistFormat)$5);}
	| INT PROPERTY_ {fr->getMarkerPropertyCmd($1);}
	| INT PROPERTY_ markerProperty {fr->getMarkerPropertyCmd($1,$3);}
        | INT RULER_ FORMAT_ {fr->getMarkerRulerDistSpecCmd($1);}
	| INT RULER_ LENGTH_ coordSystem skyDist
	{fr->getMarkerRulerLengthCmd($1,(Coord::CoordSystem)$4,(Coord::DistFormat)$5);}
	| INT RULER_ POINT_ coordSystem skyFrame skyFormat
	{fr->getMarkerRulerPointCmd($1, (Coord::CoordSystem)$4,
	    (Coord::SkyFrame)$5, (Coord::SkyFormat)$6);}
	| INT RULER_ SYSTEM_ {fr->getMarkerRulerSystemCmd($1);}
	| INT SELECT_ {fr->getMarkerSelectedCmd($1);}

	| INT TAG_ {fr->getMarkerTagCmd($1);}
	| INT TAG_ INT {fr->getMarkerTagCmd($1,$3);}
	| INT TEXT_ {fr->getMarkerTextCmd($1);}
	| INT TEXT_ ROTATE_ {fr->getMarkerTextRotateCmd($1);}
	| INT TYPE_ {fr->getMarkerTypeCmd($1);}

	| INT VECTOR_ ARROW_ {fr->getMarkerVectorArrowCmd($1);}
	| INT VECTOR_ LENGTH_ coordSystem skyDist
	{fr->getMarkerVectorLengthCmd($1, (Coord::CoordSystem)$4, (Coord::DistFormat)$5);}
	| INT VECTOR_ POINT_ coordSystem skyFrame skyFormat
	{fr->getMarkerVectorCmd($1, (Coord::CoordSystem)$4,
	    (Coord::SkyFrame)$5, (Coord::SkyFormat)$6);}
	| INT WIDTH_ {fr->getMarkerLineWidthCmd($1);}
	| HIGHLITE_ markerGetHighlite
	| HIGHLITE_ NUMBER_ {fr->getMarkerHighlitedNumberCmd();}
	| NUMBER_ {fr->getMarkerNumberCmd();}
	| POLYGON_ SEGMENT_ numeric numeric
	{fr->getMarkerPolygonSegmentCmd(Vector($3,$4));}
	| SEGMENT_ SEGMENT_ numeric numeric
	{fr->getMarkerSegmentSegmentCmd(Vector($3,$4));}
	| PRESERVE_ {fr->getMarkerPreserveCmd();}
	| PROPERTY_ markerProperty {fr->getMarkerPropertyCmd($2);}
	| SELECT_ markerGetSelect
	| SELECT_ NUMBER_ {fr->getMarkerSelectedNumberCmd();}

	| SHOW_ markerGetShow

	| STRING COLOR_ {fr->getMarkerColorCmd($1);}
	| STRING FONT_ {fr->getMarkerFontCmd($1);}
	| STRING ID_ {fr->getMarkerIdCmd($1);}
	| STRING PROPERTY_ markerProperty {fr->getMarkerPropertyCmd($1,$3);}
	| STRING TAG_ {fr->getMarkerTagCmd($1);}
	| STRING TAG_ NUMBER_ {fr->getMarkerTagNumberCmd($1);}

	| TAG_ ALL_ {fr->getMarkerTagsCmd();}
	| TAG_ DEFAULT_ NAME_ {fr->getMarkerTagDefaultNameCmd();}

	| WIDTH_ {fr->getMarkerLineWidthCmd();}
	;

markerGetCentroid : AUTO_ {fr->getMarkerCentroidAutoCmd();}
        | RADIUS_ {fr->getMarkerCentroidRadiusCmd();}
        | ITERATION_ {fr->getMarkerCentroidIterationCmd();}
	| OPTION_ {fr->getMarkerCentroidOptionCmd();}
	;

markerGetHighlite : /* empty */ {fr->getMarkerHighlitedCmd();}
	| numeric numeric {fr->getMarkerHighlitedCmd(Vector($1,$2));}
	;

markerGetSelect : /* empty */ {fr->getMarkerSelectedCmd();}
	| numeric numeric {fr->getMarkerSelectedCmd(Vector($1,$2));}
	;

markerGetShow : /* empty */ {fr->getMarkerShowCmd();}
	| TEXT_ {fr->getMarkerShowTextCmd();}
	;

markerInitProp : {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	}
	;

markerLayer : /* empty */ {fr->markerLayerCmd(Base::USER);}
	| POINTER_ {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  }
	| REGION_ {fr->markerLayerCmd(Base::USER);}
	| USER_ {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  }
	| CATALOG_  {fr->markerLayerCmd(Base::CATALOG);}
	| FOOTPRINT_  {fr->markerLayerCmd(Base::FOOTPRINT);}
	;

markerList : markerFormat coordSystem skyFrame skyFormat 
	    yesno markerQuery markerTags
	{fr->markerListCmd((Base::MarkerFormat)$1,
	    (Coord::CoordSystem)$2, (Coord::SkyFrame)$3, (Coord::SkyFormat)$4, $5, 0, propQMask, propQValue, taglist);}
	| SELECT_ markerFormat coordSystem skyFrame skyFormat 
	    yesno markerQuery markerTags
	{fr->markerListCmd((Base::MarkerFormat)$2, 
	    (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, (Coord::SkyFormat)$5, $6, 1, propQMask, propQValue, taglist);}
	;

markerLoad : markerFormat STRING
        {fr->markerLoadCmd((Base::MarkerFormat)$1,$2,0,"green",Coord::PHYSICAL,Coord::FK5);}
	| markerFormat STRING INT STRING coordSystem skyFrame
	{fr->markerLoadCmd((Base::MarkerFormat)$1,$2,$3,$4,
	    (Coord::CoordSystem)$5,(Coord::SkyFrame)$6);}
	| markerFormat INT
	{fr->markerLoadCmd((Base::MarkerFormat)$1,$2,0,"green",Coord::PHYSICAL,Coord::FK5);}
	| markerFormat INT INT STRING coordSystem skyFrame
	{fr->markerLoadCmd((Base::MarkerFormat)$1,$2,$3,$4,
	    (Coord::CoordSystem)$5,(Coord::SkyFrame)$6);}
	| FITS_ STRING
	{fr->markerLoadFitsCmd($2, "green");}
	| FITS_ STRING STRING
	{fr->markerLoadFitsCmd($2, $3);}
	;

markerMoveSelected : numeric numeric {fr->markerMoveCmd(Vector($1,$2));}
	| FRONT_ {fr->markerFrontCmd();}
	| BACK_ {fr->markerBackCmd();}
	| BEGIN_ numeric numeric {fr->markerMoveBeginCmd(Vector($2,$3));}
	| MOTION_ numeric numeric {fr->markerMoveMotionCmd(Vector($2,$3));}
	| END_ {fr->markerMoveEndCmd();}
	| TO_ coordSystem skyFrame coord 
	{fr->markerMoveToCmd(Vector($4), (Coord::CoordSystem)$2, (Coord::SkyFrame)$3);}
	;

markerProps : markerProps markerProp
	| markerProp
	;

markerProp : markerProperty '=' yesno {setProps(&currentProps,$1,$3);}
	| COLOR_ '=' STRING {strncpy(currentColor,$3,16);}
	| DASHLIST_ '=' INT INT {currentDash[0]=$3;currentDash[1]=$4;}
	| WIDTH_ '=' INT {currentWidth = $3;}
	| FONT_ '=' STRING {strncpy(currentFont,$3,32);}
	| TEXT_ '=' STRING {strncpy(currentText,$3,80);}
	| tag
	| callback
	;

markerProperty : NONE_ {$$ = Marker::NONE;}
	| SELECT_ {$$ = Marker::SELECT;}
	| HIGHLITE_ {$$ = Marker::HIGHLITE;}
	| DASH_ {$$ = Marker::DASH;}
	| FIXED_ {$$ = Marker::FIXED;}
	| EDIT_ {$$ = Marker::EDIT;}
	| MOVE_  {$$ = Marker::MOVE;}
	| ROTATE_ {$$ = Marker::ROTATE;}
	| DELETE_ {$$ = Marker::DELETE;}
	| INCLUDE_ {$$ = Marker::INCLUDE;}
	| SOURCE_ {$$ = Marker::SOURCE;}
	;

markerProperties : /* empty */ markerInitProp
	| markerInitProp markerProps
	;

markerQuery: /* empty */ {propQMask=0;propQValue=0;}
	| {propQMask=0;propQValue=0;} queries
	;

markerSave : STRING markerFormat coordSystem skyFrame skyFormat yesno
        {fr->markerSaveCmd($1, (Base::MarkerFormat)$2, (Coord::CoordSystem)$3, (Coord::SkyFrame)$4, (Coord::SkyFormat)$5, $6, 0);}
        | SELECT_ STRING markerFormat coordSystem skyFrame skyFormat yesno
	{fr->markerSaveCmd($2, (Base::MarkerFormat)$3, (Coord::CoordSystem)$4, (Coord::SkyFrame)$5, (Coord::SkyFormat)$6, $7, 1);}
	| TEMPLATE_ STRING {fr->markerSaveTemplateCmd($2);}
        ;

markerSelect : ALL_ {fr->markerSelectAllCmd();}
	| ONLY_ numeric numeric {fr->markerSelectOnlyCmd(Vector($2,$3));}
	| TOGGLE_ {fr->markerSelectToggleCmd();}
	| TOGGLE_ numeric numeric {fr->markerSelectToggleCmd(Vector($2,$3));}
	;

markerShow : yesno {fr->markerShowCmd($1);}
	| TEXT_ yesno {fr->markerShowTextCmd($2);}
	;

queries : queries query
	| query
	;

query	: markerProperty '=' yesno 
	  {propQMask |= $1; setProps(&propQValue,$1,$3);}
	;

markerTags: /* empty */ {taglist.deleteAll();}
        | {taglist.deleteAll();} tags
	;

tags	: tags tag
	| tag
	;

tag	: TAG_ '=' STRING {taglist.append(new Tag($3));}
	;

callback : CALLBACK_ '=' markerCallBack STRING STRING {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)$3,$4,$5));}
	;

mask	: CLEAR_ {fr->maskClearCmd();}
	| COLOR_ STRING {fr->maskColorCmd($2);}
        | MARK_ maskType {fr->maskMarkCmd((FitsMask::MaskType)$2);}
	| RANGE_ numeric numeric {fr->maskRangeCmd($2,$3);}
        | SYSTEM_ coordSystem {fr->maskSystemCmd((Coord::CoordSystem)$2);}
	| TRANSPARENCY_ numeric {fr->maskTransparencyCmd($2);}
	| BLEND_ maskBlend {fr->maskBlendCmd((FitsMask::MaskBlend)$2);}
        | MARK_ INT {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)$2);
	}
	;

orient	: 'X' {fr->orientCmd(Coord::XX);}
	| 'Y' {fr->orientCmd(Coord::YY);}
	| XY_ {fr->orientCmd(Coord::XY);}
	| NONE_ {fr->orientCmd(Coord::NORMAL);}
	;

pan	: numeric numeric numeric numeric 
	  {fr->panCmd(Vector($1,$2),Vector($3,$4));}
	| numeric numeric {fr->panCmd(Vector($1,$2));}
	| internalSystem numeric numeric 
	{
	  // backward compatibility
	  fr->panCmd(Vector($2,$3));
	}
	| coordSystem skyFrame coord
	{fr->panCmd(Vector($3), (Coord::CoordSystem)$1, (Coord::SkyFrame)$2);}
	| TO_ panTo
	| BBOX_ numeric numeric {fr->panBBoxCmd(Vector($2,$3));}
	| MOTION_ panMotion
	| PRESERVE_ yesno {fr->panPreserveCmd($2);}
	;

panTo	: numeric numeric {fr->panToCmd(Vector($1,$2));}
	| internalSystem numeric numeric 
	{
	  // backward compatibility
	  fr->panToCmd(Vector($2,$3));
	}
	| coordSystem skyFrame coord
	{fr->panToCmd(Vector($3), (Coord::CoordSystem)$1, (Coord::SkyFrame)$2);}
	;

panMotion : BEGIN_ numeric numeric {fr->panBeginCmd(Vector($2,$3));}
	| numeric numeric {fr->panMotionCmd(Vector($1,$2));}
	| END_ numeric numeric {fr->panEndCmd(Vector($2,$3));}
	;

panner	: yesno {fr->pannerCmd($1);}
	| WCS_ wcsSystem skyFrame 
	{
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)$2,(Coord::SkyFrame)$3);
	}
	| STRING INT INT {fr->pannerCmd($1, $2, $3);}
	| UPDATE_ {fr->updatePannerCmd();}
	;

postscript : COLORSPACE_ pscolorspace 
	{fr->psColorSpaceCmd((PSColorSpace)$2);}
	| LEVEL_ INT {fr->psLevelCmd($2);}
	| RESOLUTION_ INT {fr->psResolutionCmd($2);}
	| SCALE_ numeric {
	  // backward compatibility with backup
	}
	;

precision : INT INT INT INT INT INT INT INT INT
        {fr->precCmd($1,$2,$3,$4,$5,$6,$7,$8,$9);}
        | INT INT INT INT INT INT {
	  // backward compatibility with backup
	  fr->precCmd($1,$2,$3,$4,$5,$6);
	}
        ;

pscolorspace : BW_ {$$ = BW;}
	| GRAY_ {$$ = GRAY;}
	| RGB_ {$$ = RGB;}
	| CMYK_ {$$ = CMYK;}
	;

region	: HIGHLITE_ regionHighlite
	| SELECT_ regionSelect
	;

regionHighlite : BEGIN_ numeric numeric 
	{fr->regionHighliteBeginCmd(Vector($2,$3));}
	| MOTION_ numeric numeric 
	{fr->regionHighliteMotionCmd(Vector($2,$3));}
	| END_ {fr->regionHighliteEndCmd();}
	| SHIFT_ END_ {fr->regionHighliteShiftEndCmd();}
	;

regionSelect : BEGIN_ numeric numeric 
	{fr->regionSelectBeginCmd(Vector($2,$3));}
	| MOTION_ numeric numeric {fr->regionSelectMotionCmd(Vector($2,$3));}
	| END_ {fr->regionSelectEndCmd();}
	| SHIFT_ END_ {fr->regionSelectShiftEndCmd();}
	;

renderMethod: MIP_ {$$ = Frame3dBase::MIP;}
	| AIP_ {$$ = Frame3dBase::AIP;}
	;

renderBackground: NONE_ {$$ = Frame3dBase::NONE;}
	| AZIMUTH_ {$$ = Frame3dBase::AZIMUTH;}
	| ELEVATION_ {$$ = Frame3dBase::ELEVATION;}
	;

rgb	: CHANNEL_ STRING {fr->setRGBChannelCmd($2);}
	| SYSTEM_ coordSystem {fr->setRGBSystemCmd((Coord::CoordSystem)$2);}
	| VIEW_ INT INT INT {fr->setRGBViewCmd($2,$3,$4);}
	;

rotate	: numeric {fr->rotateCmd(zeroTWOPI(degToRad($1)));}
        | numeric DEGREES_ {fr->rotateCmd(zeroTWOPI(degToRad($1)));}
	| MOTION_ rotateMotion
	| TO_ numeric {fr->rotateToCmd(zeroTWOPI(degToRad($2)));}
        | TO_ numeric DEGREES_ {fr->rotateToCmd(zeroTWOPI(degToRad($2)));}
	;

rotateMotion : BEGIN_ {fr->rotateBeginCmd();}
        | numeric {fr->rotateMotionCmd(zeroTWOPI(degToRad($1)));}
	| END_ {fr->rotateEndCmd();}
	;

save	: ARRAY_ saveArray
	| FITS_ saveFits
        | NRRD_ saveNRRD
        | ENVI_ saveENVI
	| PHOTO_ STRING {fr->savePhotoCmd($2);}
	;

saveArray : FILE_ STRING endian 
	{fr->saveArrayFileCmd($2, (FitsFile::ArchType)$3);}
	| CHANNEL_ STRING endian 
	{fr->saveArrayChannelCmd($2, (FitsFile::ArchType)$3);}
	| SOCKET_ INT endian 
	{fr->saveArraySocketCmd($2, (FitsFile::ArchType)$3);}
        | RGB_ CUBE_ saveArrayRGBCube
	;

saveArrayRGBCube : FILE_ STRING endian 
	{fr->saveArrayRGBCubeFileCmd($2, (FitsFile::ArchType)$3);}
	| CHANNEL_ STRING endian 
	{fr->saveArrayRGBCubeChannelCmd($2, (FitsFile::ArchType)$3);}
	| SOCKET_ INT endian 
	{fr->saveArrayRGBCubeSocketCmd($2, (FitsFile::ArchType)$3);}

saveFits: /* empty */ saveFitsImage
        | IMAGE_ saveFitsImage
	| TABLE_ saveFitsTable
        | SLICE_ saveFitsSlice
        | EXT_ CUBE_ saveFitsExtCube
        | MOSAIC_ saveFitsMosaic
        | RGB_ IMAGE_ saveFitsRGBImage
        | RGB_ CUBE_ saveFitsRGBCube
	| RESAMPLE_ saveFitsResample
	;

saveFitsImage : FILE_ STRING {fr->saveFitsFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsSocketCmd($2);}
	;

saveFitsTable : FILE_ STRING {fr->saveFitsTableFileCmd($2);}
        | CHANNEL_ STRING {fr->saveFitsTableChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsTableSocketCmd($2);}
	;

saveFitsSlice : FILE_ STRING {fr->saveFitsSliceFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsSliceChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsSliceSocketCmd($2);}
	;

saveFitsExtCube : FILE_ STRING {fr->saveFitsExtCubeFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsExtCubeChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsExtCubeSocketCmd($2);}
	;

saveFitsMosaic : IMAGE_ saveFitsMosaicImage 
        | FILE_ STRING INT {fr->saveFitsMosaicFileCmd($2,$3);}
        | CHANNEL_ STRING INT {fr->saveFitsMosaicChannelCmd($2,$3);}
        | SOCKET_ INT INT {fr->saveFitsMosaicSocketCmd($2,$3);}
        ;

saveFitsMosaicImage : FILE_ STRING {fr->saveFitsMosaicImageFileCmd($2);}
        | CHANNEL_ STRING {fr->saveFitsMosaicImageChannelCmd($2);}
        | SOCKET_ INT {fr->saveFitsMosaicImageSocketCmd($2);}
        ;

saveFitsRGBImage : FILE_ STRING {fr->saveFitsRGBImageFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsRGBImageChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsRGBImageSocketCmd($2);}
	;

saveFitsRGBCube : FILE_ STRING {fr->saveFitsRGBCubeFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsRGBCubeChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsRGBCubeSocketCmd($2);}
	;

saveFitsResample : FILE_ STRING {fr->saveFitsResampleFileCmd($2);}
	| CHANNEL_ STRING {fr->saveFitsResampleChannelCmd($2);}
	| SOCKET_ INT {fr->saveFitsResampleSocketCmd($2);}
	;

saveNRRD : FILE_ STRING endian 
	  {fr->saveNRRDFileCmd($2, (FitsFile::ArchType)$3);}
	| CHANNEL_ STRING endian 
	  {fr->saveNRRDChannelCmd($2, (FitsFile::ArchType)$3);}
	| SOCKET_ INT endian 
	  {fr->saveNRRDSocketCmd($2, (FitsFile::ArchType)$3);}
	;

saveENVI : FILE_ STRING STRING endian 
        {fr->saveENVIFileCmd($2, $3, (FitsFile::ArchType)$4);}
        ;

smooth	: smoothFunction INT INT numeric numeric angle
        {fr->smoothCmd((Context::SmoothFunction)$1,$2,$3,$4,$5,$6);}
	| smoothFunction INT
        {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)$1,$2);
	}
	| DELETE_ {fr->smoothDeleteCmd();}
	;

smoothFunction : BOXCAR_ {$$ = Context::BOXCAR;}
	| TOPHAT_ {$$ = Context::TOPHAT;}
	| GAUSSIAN_ {$$ = Context::GAUSSIAN;}
	| ELLIPTIC_ {$$ = Context::ELLIPTIC;}
	;

update	: /* empty */ {fr->updateFitsCmd(0);}
	| INT numeric numeric numeric numeric
	{fr->updateFitsCmd($1,BBox($2,$3,$4,$5),0);}
	| NOW_ {fr->updateFitsCmd(1);}
	| NOW_ INT numeric numeric numeric numeric
	{fr->updateFitsCmd($2,BBox($3,$4,$5,$6),1);}
	| FITS_ SLICE_ updateFitsSlice
	;

updateFitsSlice : INT {fr->sliceCmd(2,$1);}
        | INT INT {fr->sliceCmd($1,$2);}
        | numeric coordSystem {fr->sliceCmd($1, (Coord::CoordSystem)$2);}
	;

warp	: numeric numeric {fr->warpCmd(Vector($1,$2));}
	| TO_ numeric numeric {fr->warpToCmd(Vector($2,$3));}
	;

wcs	: wcsSystem skyFrame skyFormat 
	{fr->wcsCmd((Coord::CoordSystem)$1, (Coord::SkyFrame)$2, (Coord::SkyFormat)$3);}
	| ALIGN_ wcsAlign
	| RESET_ INT {fr->wcsResetCmd($2);}
	| REPLACE_ wcsReplace
	| APPEND_ wcsAppend
	;

wcsAppend : INT INT {fr->wcsAppendCmd($1,$2);}
	| INT STRING {fr->wcsAppendCmd($1,$2);}
	| TEXT_ INT STRING {fr->wcsAppendTxtCmd($2,$3);}
	;

wcsReplace : INT INT {fr->wcsReplaceCmd($1,$2);}
	| INT STRING {fr->wcsReplaceCmd($1,$2);}
	| TEXT_ INT STRING {fr->wcsReplaceTxtCmd($2,$3);}
	;

wcsAlign : INT {fr->wcsAlignCmd($1);}
	|  INT wcsSystem skyFrame 
	{
	  // used by backup
	  fr->wcsAlignCmd($1, (Coord::CoordSystem)$2, (Coord::SkyFrame)$3);
	}
	| INT POINTER wcsSystem skyFrame
	{fr->wcsAlignCmd($1, (FitsImage*)$2, (Coord::CoordSystem)$3, (Coord::SkyFrame)$4);}
	;

win32	: PRINT_ {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	}
	;

zoom	: numeric numeric {fr->zoomCmd(Vector($1,$2));}
	| numeric numeric ABOUT_ numeric numeric
	  {fr->zoomAboutCmd(Vector($1,$2),Vector($4,$5));}
	| numeric numeric ABOUT_ internalSystem numeric numeric
	{
	  // backward compatibility
	  fr->zoomAboutCmd(Vector($1,$2),Vector($5,$6));
	}
	| numeric numeric ABOUT_ coordSystem skyFrame coord
	{fr->zoomAboutCmd(Vector($1,$2),Vector($6), (Coord::CoordSystem)$4,(Coord::SkyFrame)$5);}
	| TO_ zoomTo
	;

zoomTo	: FIT_	{fr->zoomToFitCmd(1);}
	| FIT_	numeric {fr->zoomToFitCmd($2);}
	| numeric numeric {fr->zoomToCmd(Vector($1,$2));}
	| numeric numeric ABOUT_ numeric numeric
	{fr->zoomToAboutCmd(Vector($1,$2),Vector($4,$5));}
	| numeric numeric ABOUT_ internalSystem numeric numeric
	{
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector($1,$2),Vector($5,$6));
	}
	| numeric numeric ABOUT_ coordSystem skyFrame coord
	  {fr->zoomToAboutCmd(Vector($1,$2), Vector($6),
	    (Coord::CoordSystem)$4, (Coord::SkyFrame)$5);}
	;

%%

static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}
