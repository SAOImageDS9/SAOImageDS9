%{
%}

#include yesno.tin
#include base.tin

%start command

%token CLOSE_
%token DELETE_
%token FILE_
%token INVERT_
%token LOAD_
%token LOCK_
%token MATCH_
%token OPEN_
%token SAVE_
%token TAG_
%token VALUE_

%%

#include yesno.trl
#include base.trl

command : cmap
 | cmap {yyclearin; YYACCEPT} CMD_
 ;

cmap : STRING_ {CmapCmd $1}
 | CLOSE_ {ColormapDestroyDialog}
 | OPEN_ {ColormapDialog}
# backward compatibility
 | MATCH_ {MatchColorCurrent}
# backward compatibility
 | LOCK_ yesno {global colorbar; set colorbar(lock) $2; LockColorCurrent}
 | LOAD_ cmapLoad
 | FILE_ cmapLoad
 | SAVE_ STRING_ {SaveColormapFile $2; FileLast colormapfbox $2}
 | INVERT_ yesno {global colorbar; set colorbar(invert) $2; InvertColorbar}
 | TAG_ cmapTag
 | VALUE_ numeric numeric {CmapValueCmd $2 $3}
 ;

cmapLoad : STRING_ {LoadColormapFile $1; FileLast colormapfbox $1}
 ;

cmapTag : LOAD_ STRING_ {LoadColorTag $2}
 | SAVE_ STRING_ {global current; $current(colorbar) tag save $2}
 | DELETE_ {DeleteColorTag}
 ;

%%

proc cmap::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
