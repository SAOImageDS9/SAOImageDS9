#  Copyright (C) 1999-2026
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

# Favorite Colormaps
# Shown in the Advanced view icon bar colormap menu and in Color > Favorites.
# Remembered in $prefs(dir)/favorites.txt, in the order they were added.
# Each line is a tcl list: name ?key value ...?
#   keys: file (user loaded colormap, reloaded at startup)
# No file means the default list; an empty file means no favorites.

proc FavoritesDef {} {
    global ifavorites

    set ifavorites(default) [list a aips0 b bb blue color cool green grey \
				 he heat hsv i8 rainbow red sls staircase \
				 standard]
    set ifavorites(list) $ifavorites(default)
    set ifavorites(max) 32

    # icon bar swatches
    set ifavorites(swatch,width) 200
    set ifavorites(swatch,height) 16
}

proc FavoritesFileName {} {
    global prefs

    return [file join $prefs(dir) favorites.txt]
}

proc FavoritesRead {} {
    global ds9
    global ifavorites

    if {!$ds9(prefs)} {
	return
    }

    set fn [FavoritesFileName]
    if {![file exists $fn]} {
	set ifavorites(list) $ifavorites(default)
	return
    }
    if {[catch {set ch [open $fn r]}]} {
	return
    }

    set ifavorites(list) {}
    while {[gets $ch line] >= 0} {
	set line [string trim $line]
	if {$line == {} || [string index $line 0] == "#"} {
	    continue
	}
	# skip anything that is not a well formed entry
	if {[catch {llength $line} nn]} {
	    continue
	}
	if {$nn < 1 || [expr $nn%2] != 1} {
	    continue
	}
	if {[FavoritesFind [lindex $line 0]] != -1} {
	    continue
	}
	lappend ifavorites(list) $line
	if {[llength $ifavorites(list)] >= $ifavorites(max)} {
	    break
	}
    }
    close $ch
}

proc FavoritesWrite {} {
    global ds9
    global ifavorites
    global prefs

    if {!$ds9(prefs)} {
	return
    }

    catch {file mkdir $prefs(dir)}
    if {![file isdirectory $prefs(dir)]} {
	return
    }

    # write to a temp file and rename, so a crash leaves the old list intact
    set fn [FavoritesFileName]
    set tmp "$fn.[pid]"
    if {[catch {set ch [open $tmp w]}]} {
	return
    }
    puts $ch "\# $ds9(app) favorite colormaps"
    puts $ch "\# name ?file filename?"
    foreach ff $ifavorites(list) {
	puts $ch $ff
    }
    close $ch

    if {[catch {file rename -force $tmp $fn}]} {
	catch {file delete -force $tmp}
    }
}

# index of cmap in the favorites list, or -1
# colormap names are case insensitive, as in 'colorbar map'
proc FavoritesFind {cmap} {
    global ifavorites

    set ii 0
    foreach ff $ifavorites(list) {
	if {[string equal -nocase [lindex $ff 0] $cmap]} {
	    return $ii
	}
	incr ii
    }
    return -1
}

proc FavoritesIsFavorite {cmap} {
    return [expr {[FavoritesFind $cmap] != -1}]
}

proc FavoritesAdd {cmap} {
    global ifavorites
    global icolorbar

    if {$cmap == {}} {
	return
    }

    # pick up changes from any other ds9
    FavoritesRead

    if {[FavoritesIsFavorite $cmap]} {
	UpdateFavoritesMenu
	return
    }
    if {[llength $ifavorites(list)] >= $ifavorites(max)} {
	Error "[msgcat::mc {Unable to add to favorites, the list is full}]: $ifavorites(max)"
	return
    }

    set entry [list $cmap]
    if {[info exists icolorbar(user,file,$cmap)]} {
	lappend entry file $icolorbar(user,file,$cmap)
    }
    lappend ifavorites(list) $entry

    FavoritesWrite
    UpdateFavoritesMenu
}

proc FavoritesRemove {cmap} {
    global ifavorites

    FavoritesRead

    set id [FavoritesFind $cmap]
    if {$id != -1} {
	set ifavorites(list) [lreplace $ifavorites(list) $id $id]
	FavoritesWrite
    }
    UpdateFavoritesMenu
}

proc FavoritesReset {} {
    global ifavorites

    set ifavorites(list) $ifavorites(default)
    FavoritesWrite
    UpdateFavoritesMenu
}

# returns the name of a favorite that can be displayed, or {}
# user colormaps are loaded from file once per session, if needed
proc FavoritesAvailable {entry} {
    global ifavorites

    set cmap [lindex $entry 0]
    if {[ColormapSwatch $cmap] != {}} {
	return $cmap
    }

    array set opts [lrange $entry 1 end]
    if {![info exists opts(file)]} {
	return {}
    }
    set fn $opts(file)
    if {[info exists ifavorites(tried,$fn)]} {
	return {}
    }
    set ifavorites(tried,$fn) 1

    if {![file readable $fn]} {
	return {}
    }
    LoadColormapFileName $fn
    if {[ColormapSwatch $cmap] != {}} {
	return $cmap
    }
    return {}
}

# rebuild the icon bar and Color > Favorites menus
proc UpdateFavoritesMenu {} {
    global ds9
    global ifavorites

    set mms {}
    if {[info exists ds9(icons,top)] \
	    && [winfo exists $ds9(icons,top).colormap.m]} {
	lappend mms $ds9(icons,top).colormap.m
    }
    if {[winfo exists $ds9(mb).color.favorites]} {
	lappend mms $ds9(mb).color.favorites
    }

    set cmaps {}
    foreach ff $ifavorites(list) {
	set cmap [FavoritesAvailable $ff]
	if {$cmap != {}} {
	    lappend cmaps $cmap
	}
    }

    foreach mm $mms {
	$mm delete 0 end
	foreach cmap $cmaps {
	    $mm add radiobutton \
		-label [msgcat::mc $cmap] \
		-variable colorbar(map) -value $cmap \
		-command [list ChangeColormapName $cmap]
	}
	if {$cmaps != {}} {
	    $mm add separator
	}
	$mm add command -label [msgcat::mc {Add to Favorites}] \
	    -command {FavoritesAdd $colorbar(map)}
	$mm add command -label [msgcat::mc {Remove from Favorites}] \
	    -command {FavoritesRemove $colorbar(map)}
    }

    # icon bar always shows swatches, the Color menu follows view(icons)
    if {[info exists ds9(icons,top)] \
	    && [winfo exists $ds9(icons,top).colormap.m]} {
	set mm $ds9(icons,top).colormap.m
	set ww $ifavorites(swatch,width)
	set hh $ifavorites(swatch,height)
	set ii 0
	foreach cmap $cmaps {
	    $mm entryconfigure $ii -compound left \
		-image [ColormapSwatch $cmap $ww $hh]
	    incr ii
	}
    }
    if {[winfo exists $ds9(mb).color.favorites]} {
	ColormapMenuSwatches $ds9(mb).color.favorites
    }

    FavoritesMapCB
}

# keep the icon bar face and the add/remove entries in sync with colorbar(map)
proc FavoritesMapCB {args} {
    global ds9
    global colorbar
    global ifavorites

    set fav [FavoritesIsFavorite $colorbar(map)]
    set add [expr {$fav ? {disabled} : {normal}}]
    set rm [expr {$fav ? {normal} : {disabled}}]

    set mms {}
    if {[info exists ds9(icons,top)] \
	    && [winfo exists $ds9(icons,top).colormap]} {
	set mb $ds9(icons,top).colormap
	set img [ColormapSwatch $colorbar(map) \
		     $ifavorites(swatch,width) $ifavorites(swatch,height)]
	if {$img != {}} {
	    $mb configure -image $img -text {}
	} else {
	    $mb configure -image {} -text $colorbar(map)
	}
	lappend mms $mb.m
    }
    if {[winfo exists $ds9(mb).color.favorites]} {
	lappend mms $ds9(mb).color.favorites
    }

    # add/remove are always the last two entries
    foreach mm $mms {
	set last [$mm index end]
	if {$last == {} || $last == {none} || $last < 1} {
	    continue
	}
	$mm entryconfigure [expr $last-1] -state $add
	$mm entryconfigure $last -state $rm
    }
}
