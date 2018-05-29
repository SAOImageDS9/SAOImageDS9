#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadSMosaicWCSFitsFile {hdr fn layer sys} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) [list mosaic $sys]
    set loadParam(load,type) smmap
    set loadParam(file,name) $fn
    set loadParam(file,header) $hdr
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc ProcessSMosaicWCSCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    smosaicwcs::YY_FLUSH_BUFFER
    smosaicwcs::yy_scan_string [lrange $var $i end]
    smosaicwcs::yyparse
    incr i [expr $smosaicwcs::yycnt-1]
}
