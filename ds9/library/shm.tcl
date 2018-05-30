#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc ProcessShmCmd {varname iname ml} {
    upvar $varname var
    upvar $iname i

    global parse
    set parse(ml) $ml

    shm::YY_FLUSH_BUFFER
    shm::yy_scan_string [lrange $var $i end]
    shm::yyparse
    incr i [expr $shm::yycnt-1]
}

proc ShmCmdSet {loadtype filetype filemode sharedidtype sharedid filename {sharedhdr {}}} {

    global loadparam
    set loadparam(load,type) $loadtype
    set loadparam(file,type) $filetype
    set loadparam(file,mode) $filemode
    set loadparam(shared,idtype) $sharedidtype
    set loadparam(shared,id) $sharedid
    set loadparam(file,name) $filename
    set loadparam(shared,hdr) $sharedhdr
    
    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

proc ProcessSendShmCmd {proc id param} {
    global current

    if {$current(frame) != {}} {
	$proc $id "[$current(frame) get fits file name full]\n"
    }
}

