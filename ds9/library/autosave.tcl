#  Copyright (C) 1999-2025
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc AutoSaveDef {} {
    global iautosave
    global autosave
    global ds9

    set iautosave(id) {}
    set autosave(fn) [file join [GetEnvHome] "$ds9(app).auto"]
}

proc AutoSave {} {
    global pds9
    global iautosave

    if {$iautosave(id) != {}} {
	catch [after cancel $iautosave(id)]
	set iautosave(id) {}
    }

    AutoSaveDelete

    if {$pds9(autosave)} {
	AutoSaveTimer
    }
}

proc AutoSaveRestore {} {
    global autosave

    set fn $autosave(fn)
    
    if {[file exists $fn] && [file exists ${fn}.dir]} {
	if {[file isdirectory ${fn}.dir]} {
	    set msg [msgcat::mc {Found Auto Backup, restore?}]
	    if {[tk_messageBox -type yesno -icon question -message "$msg"]=={yes}} {
		Restore $fn
	    }
	}
    }

    AutoSaveDelete
}

proc AutoSaveDelete {} {
    global autosave

    catch {file delete -force $autosave(fn)}
    catch {file delete -force "$autosave(fn).dir"}
}

proc AutoSaveTimer {} {
    global pds9
    global iautosave
    global autosave

    AutoSaveDelete
    Backup $autosave(fn)
    
    set tt [expr int($pds9(autosave,interval)*1000*60)]
    set iautosave(id) [after $tt AutoSaveTimer]
}

