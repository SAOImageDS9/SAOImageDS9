#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc HTTPDef {} {
    global ihttp
    global phttp

    # 1 minute
    set ihttp(timeout) 60000

    # prefs only
    set phttp(proxy) 0
    set phttp(proxy,host) {}
    set phttp(proxy,port) {}
    set phttp(auth) 0
    set phttp(auth,user) {}
    set phttp(auth,passwd) {}
}

proc PrefsDialogHTTP {} {
    global dprefs

    set w $dprefs(tab)

    $dprefs(listbox) insert {} end -id [ttk::frame $w.http] \
	-text [msgcat::mc {HTTP}]

    set f [ttk::labelframe $w.http.params -text [msgcat::mc {HTTP}]]

    ttk::label $f.tproxy -text [msgcat::mc {Use Proxy}]
    ttk::checkbutton $f.proxy -variable phttp(proxy)
    ttk::label $f.thost -text [msgcat::mc {Proxy Host}]
    ttk::entry $f.host -textvariable phttp(proxy,host) -width 50
    ttk::label $f.tport -text [msgcat::mc {Proxy Port}]
    ttk::entry $f.port -textvariable phttp(proxy,port) -width 10
    ttk::label $f.tauth -text [msgcat::mc {Use Authentication}]
    ttk::checkbutton $f.auth -variable phttp(auth)
    ttk::label $f.tuser -text [msgcat::mc {Username}]
    ttk::entry $f.user -textvariable phttp(auth,user) -width 30
    ttk::label $f.tpasswd -text [msgcat::mc {Password}]
    ttk::entry $f.passwd -textvariable phttp(auth,passwd) -show "*" -width 10

    grid $f.tproxy  $f.proxy -padx 2 -pady 2 -sticky w
    grid $f.thost $f.host -padx 2 -pady 2 -sticky w
    grid $f.tport $f.port -padx 2 -pady 2 -sticky w
    grid $f.tauth  $f.auth -padx 2 -pady 2 -sticky w
    grid $f.tuser $f.user -padx 2 -pady 2 -sticky w
    grid $f.tpasswd $f.passwd -padx 2 -pady 2 -sticky w

    pack $f -side top -fill both -expand true
}
