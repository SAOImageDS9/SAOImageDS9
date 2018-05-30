#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadSFitsFile {hdr fn layer mode} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) smmap
    set loadParam(file,name) $fn
    set loadParam(file,header) $hdr
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc ProcessSFitsCmd {varname iname sock fn} {
    upvar $varname var
    upvar $iname i

    sfits::YY_FLUSH_BUFFER
    sfits::yy_scan_string [lrange $var $i end]
    sfits::yyparse
    incr i [expr $sfits::yycnt-1]
}
