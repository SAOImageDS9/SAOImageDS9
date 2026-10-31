%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token ADD_
%token CLEAR_
%token CLOSE_
%token DELETE_
%token FAVORITE_
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
#include numeric.trl

command : cmap
 | cmap {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

cmap : cmapSelect
 | OPEN_ {ColormapDialog}
 | CLOSE_ {ColormapDestroyDialog}

# backward compatibility
 | MATCH_ {MatchColorCurrent}
# backward compatibility
 | LOCK_ yesno {ProcessCmdSet colorbar lock $2 LockColorCurrent}

 | LOAD_ cmapLoad
# backward compatibility
 | FILE_ cmapLoad

 | SAVE_ STRING_ {SaveColormapFile $2; FileLast colormapfbox $2}
 | INVERT_ yesno {ProcessCmdSet colorbar invert $2 InvertColorbar}
 | TAG_ cmapTag
 | FAVORITE_ cmapFavorite

 | numeric numeric {CmapValueCmd $1 $2}
# backward compatibility
 | VALUE_ numeric numeric {CmapValueCmd $2 $3}
 ;

cmapSelect : STRING_ {CmapCmd $1}
 | 'a' {CmapCmd a}
 | 'b' {CmapCmd b}
 ;

cmapLoad : STRING_ {LoadColormapFile $1; FileLast colormapfbox $1}
 ;

# colormap name is required, an optional one would swallow the next
# command line option
cmapFavorite : ADD_ STRING_ {FavoritesAddCmd $2}
 | DELETE_ STRING_ {FavoritesRemove $2}
 | CLEAR_ {FavoritesClear 0}
 ;

cmapTag : LOAD_ STRING_ {LoadColorTag $2}
 | SAVE_ STRING_ {ProcessCmdCurrent colorbar "tag save $2"}
 | DELETE_ {DeleteColorTag}
 ;

%%

proc cmap::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
