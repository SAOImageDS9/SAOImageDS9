#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadSMosaicIRAFFile {hdr fn layer} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) {mosaic iraf}
    set loadParam(load,type) smmap
    set loadParam(file,name) $fn
    set loadParam(file,header) $hdr
    set loadParam(load,layer) $layer

    ProcessLoad
}

proc ProcessSMosaicIRAFCmd {varname iname sock fn layer} {
    upvar $varname var
    upvar $iname i

    smosaiciraf::YY_FLUSH_BUFFER
    smosaiciraf::yy_scan_string [lrange $var $i end]
    smosaiciraf::yyparse
    incr i [expr $smosaiciraf::yycnt-1]
}
