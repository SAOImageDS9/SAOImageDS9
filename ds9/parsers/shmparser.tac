%{
%}
#include def.tin

#include wcssys.tin
#include int.tin
#include string.tin

%start command

%token KEY_
%token SHMID_

%token ARRAY_
%token FITS_
%token SFITS_
%token MOSAIC_
%token MOSAICWCS_
%token MOSAICIRAF_
%token SMOSAIC_
%token MOSAICIMAGE_
%token MOSAICIMAGEWCS_
%token MOSAICIMAGEIRAF_
%token MOSAICIMAGEWFPC2_
%token RGBARRAY_
%token RGBCUBE_
%token SRGBCUBE_
%token RGBIMAGE_
%token WFPC2_
%token IRAF_

%token SHM_
%token SHMCMD_

%%

#include wcssys.trl

# only called by xpa/samp
command : shms
 ;

shms : shms shmm
 | shmm
 ;

shmm : shm
 | SHMCMD_ shm
 | SHM_ shm
 ;

shm : key INT_ {MultiLoad; ShmCmdSet shared fits {} $1 $2 {}}
 | FITS_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {} $2 $3 $4}
 | MOSAICIMAGE_ wcssys key INT_ filename {MultiLoad; ShmCmdSet shared fits "mosaic image $2" $3 $4 $5}
 | MOSAICIMAGE_ IRAF_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {mosaic image iraf} $3 $4 $5}
 | MOSAICIMAGE_ WFPC2_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {mosaic image wfpc2} $3 $4 $5}
 | MOSAIC_ wcssys key INT_ filename {ShmCmdSet shared fits "mosaic $2" $3 $4 $5}
 | MOSAIC_ IRAF_ key INT_ filename {ShmCmdSet shared fits {mosaic iraf} $3 $4 $5}
 | RGBCUBE_ key INT_ filename {MultiLoadRGB; ShmCmdSet shared fits {rgb cube} $2 $3 $4}
 | RGBIMAGE_ key INT_ filename {MultiLoadRGB; ShmCmdSet shared fits {rgb image} $2 $3 $4}
 | ARRAY_ key INT_ STRING_ {MultiLoad; ShmCmdSet shared array {} $2 $3 $4}
 | RGBARRAY_ key INT_ STRING_ {MultiLoadRGB; ShmCmdSet shared array {rgb cube} $2 $3 $4}

# backward compatibility
 | MOSAICIMAGEWCS_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {mosaic image wcs} $2 $3 $4}
 | MOSAICIMAGEIRAF_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {mosaic image iraf} $2 $3 $4}
 | MOSAICIMAGEWFPC2_ key INT_ filename {MultiLoad; ShmCmdSet shared fits {mosaic image wfpc2} $2 $3 $4}
 | MOSAICWCS_ key INT_ filename {ShmCmdSet shared fits {mosaic wcs} $2 $3 $4}
 | MOSAICIRAF_ key INT_ filename {ShmCmdSet shared fits {mosaic iraf} $2 $3 $4}

# backward compatibility
 | SFITS_ key STRING_ INT_ filename {MultiLoad; ShmCmdSet sshared fits {} $2 $4 $5 $3}
 | SMOSAIC_ wcssys key STRING_ INT_ filename {ShmCmdSet sshared fits "mosaic $2" $3 $5 $6 $4}
 | SRGBCUBE_ key STRING_ INT_ filename {MultiLoadRGB; ShmCmdSet sshared fits {rgb cube} $2 $4 $5 $3}
 ;

key : KEY_ {set _ key}
 | SHMID_ {set _ shmid}
 ;

filename : {set _ {}}
 | STRING_ {set _ $1}
 ;

%%

proc shm::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
