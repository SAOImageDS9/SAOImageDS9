// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {ColorbarBase* cb}
%lex-param {cbFlexLexer* ll}
%parse-param {cbFlexLexer* ll}

%{
#define YYDEBUG 1

#include <stdlib.h>

#include "colorbarbase.h"

#undef yyFlexLexer
#define yyFlexLexer cbFlexLexer
#include <FlexLexer.h>

extern int cblex(void*, cbFlexLexer*);
extern void cberror(ColorbarBase*, cbFlexLexer*, const char*);
%}

%union {
#define CBBUFSIZE 1024
  float real;
  int integer;
  char str[CBBUFSIZE];
  void* ptr;
}

%type <real> numeric
%type <integer> yesno
%type <integer> pscolorspace

%token <integer> INT
%token <real> REAL
%token <str> STRING
%token <ptr> POINTER

%token ADJUST_
%token BEGIN_
%token BIAS_
%token BW_
%token CHANNEL_
%token CMYK_
%token COLORMAP_
%token COLORBAR_
%token COLORSPACE_
%token CONTRAST_
%token CURSOR_
%token DEBUG_
%token DELETE_
%token EDIT_
%token END_
%token GET_
%token GRAY_
%token FALSE_
%token FILE_
%token HEIGHT_
%token HIDE_
%token ID_
%token INVERT_
%token ITT_
%token LEVEL_
%token LIST_
%token LOAD_
%token MACOSX_
%token MAP_
%token MOTION_
%token N_
%token NAME_
%token NO_
%token OFF_
%token ON_
%token POSTSCRIPT_
%token PRINT_
%token QUERY_
%token RESET_
%token RESOLUTION_
%token RGB_
%token SAVE_
%token SHOW_
%token TAG_
%token TRUE_
%token TYPE_
%token VALUE_
%token VAR_
%token VERSION_
%token WIDTH_
%token WIN32_
%token WINDOW_
%token Y_
%token YES_

%%

command : DEBUG_ debug
	| ADJUST_ numeric numeric {cb->adjustCmd($2,$3);}
	| COLORBAR_ colorbar
	| COLORMAP_ colormap
	| GET_ get
	| HIDE_ {cb->hideCmd();}
	| INVERT_ yesno {cb->invertCmd($2 );}
	| ITT_ itt
	| LIST_ list
	| LOAD_ load
	| MACOSX_ macosx
	| MAP_ map
	| POSTSCRIPT_ postscript
	| QUERY_ CURSOR_ {cb->queryCursorCmd();}
	| RESET_ {cb->resetCmd();}
	| RGB_ CHANNEL_ STRING {cb->setRGBChannelCmd($3);}
	| TAG_ tag
	| SAVE_ save
	| SHOW_ {cb->showCmd();}
	| VERSION_ {cb->msg("Colorbar 1.0");}
	| WIN32_ win32
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

yesno	: INT {$$=($1 ? 1 : 0);}

	| YES_ {$$=1;}
	| Y_ {$$=1;}
	| ON_ {$$=1;}
	| TRUE_ {$$=1;}

	| NO_ {$$=0;}
	| N_ {$$=0;}
	| OFF_ {$$=0;}
	| FALSE_ {$$=0;}
	;

colorbar: INT numeric numeric INT {cb->setColorbarCmd($1, $2, $3, $4);}
	| RGB_ numeric numeric numeric numeric numeric numeric INT
	  {cb->setColorbarCmd($2, $3, $4, $5, $6, $7, $8);}
	;

colormap: LEVEL_ colormaplevel
	| WINDOW_ STRING {cb->setColormapWindowCmd($2);}
	;

colormaplevel : /* empty */ {cb->setColormapLevelCmd();}
	| INT POINTER {cb->setColormapLevelCmd($1, (double*)$2);}
	;

get	: BIAS_ {cb->getBiasCmd();}
	| COLORBAR_ {cb->getColorbarCmd();}
	| COLORMAP_ {cb->getColormapCmd();}
	| CONTRAST_ {cb->getContrastCmd();}
	| FILE_ NAME_ {cb->getCurrentFileNameCmd();}
	| FILE_ NAME_ INT {cb->getColormapFileNameCmd($3);}
	| FILE_ NAME_ STRING {cb->getColormapFileNameCmd($3);}
	| HEIGHT_ {cb->getHeightCmd();}
	| ID_ {cb->getCurrentIDCmd();}
	| INVERT_ {cb->getInvertCmd();}
	| NAME_ {cb->getCurrentNameCmd();}
	| NAME_ INT {cb->getColormapNameCmd($2);}
	| RGB_ CHANNEL_ {cb->getRGBChannelCmd();}
	| VALUE_ INT INT {cb->getValueCmd($2,$3);}
	| TAG_ getTag
	| TYPE_ {cb->getTypeCmd();}
	| WIDTH_ {cb->getWidthCmd();}
	;

getTag	: /* empty */ {cb->getTagCmd();}
	| INT INT {cb->getTagCmd($1,$2);}
	;

itt	: STRING {}
	| INT {}
	;

list	: /* empty */ {cb->listNameCmd();}
	| ID_ {cb->listIDCmd();}
	| NAME_ {cb->listNameCmd();}
	| ITT_ {}
	| ITT_ ID_ {}
	| ITT_ NAME_ {}
	;

load	: STRING {cb->loadCmd($1,NULL);}
	| STRING STRING {cb->loadCmd($1,$2);}
	| VAR_ loadVar
	| ITT_ STRING {}
	;

loadVar	: STRING STRING {cb->loadCmd($1,NULL,$2);}
	| STRING STRING STRING {cb->loadCmd($1,$2,$3);}
	;

macosx	: PRINT_ {
#ifdef MAC_OSX_TK
	cb->macosxPrintCmd();
#endif
	}
	;

map	: 'a' {cb->mapCmd("a");}
        | 'b' {cb->mapCmd("b");}
        | RGB_ {cb->mapCmd("rgb");}
        | STRING {cb->mapCmd($1);}
	| INT {cb->mapCmd($1);}
	;

postscript : COLORSPACE_ pscolorspace 
        {cb->psColorSpaceCmd((PSColorSpace)$2);}
	| LEVEL_ INT {cb->psLevelCmd($2);}
	| RESOLUTION_ INT {cb->psResolutionCmd($2);}
	;

pscolorspace : BW_ {$$ = BW;}
	| GRAY_ {$$ = GRAY;}
	| RGB_ {$$ = RGB;}
	| CMYK_ {$$ = CMYK;}
	;

tag	: DELETE_ tagdelete
	| EDIT_ tagedit
	| LOAD_ STRING {cb->tagLoadCmd($2);}
	| SAVE_ STRING {cb->tagSaveCmd($2);}
	| INT numeric numeric STRING {cb->tagCmd($1,Vector($2,$3),$4);}
	| STRING {cb->tagCmd($1);}
	;

tagdelete: /* empty */ {cb->tagDeleteCmd();}
	| INT INT {cb->tagDeleteCmd($1,$2);}
	;

tagedit	: BEGIN_ INT INT STRING {cb->tagEditBeginCmd($2,$3,$4);}
	| MOTION_ INT INT {cb->tagEditMotionCmd($2,$3);}
	| END_ INT INT {cb->tagEditEndCmd($2,$3);}
	;

save	: STRING {cb->saveCmd($1);}
	| INT STRING {cb->saveCmd($1,$2);}
	| STRING STRING {cb->saveCmd($1,$2);}
        | VAR_ saveVar
	;

saveVar : STRING STRING {cb->saveVarCmd($1,$2);}
        ;

win32	: PRINT_ {
#ifdef _WIN32
	cb->win32PrintCmd();
#endif
	}
	;

%%
