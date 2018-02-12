#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc LoadVar {varname fn layer mode} {
    global loadParam

    set loadParam(file,type) fits
    set loadParam(file,mode) $mode
    set loadParam(load,type) var
    set loadParam(var,name) $varname
    set loadParam(file,name) "$fn"

    # mask not supported
    set loadParam(load,layer) {}

    ProcessLoad
}

