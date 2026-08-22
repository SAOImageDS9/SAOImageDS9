#  Copyright (C) 1999-2021
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SIADef {} {
    global sia
    global isia
    global psia
    global wcs

    set isia(sias) {}

    set isia(rformat) arcmin
    set isia(radius) 15

    set isia(minrows) 20
    set isia(mincols) 10

    set isia(mode) new
    set isia(save) 0
    set psia(registry) {https://dc.g-vo.org/__system__/tap/run/sync}
    set isia(adql) {SELECT DISTINCT
  r.ivoid, r.short_name, r.res_title, r.res_description,
  r.waveband, c.standard_id, i.access_url
FROM rr.resource AS r
JOIN rr.capability AS c ON r.ivoid = c.ivoid
JOIN rr.interface AS i
  ON c.ivoid = i.ivoid AND c.cap_index = i.cap_index
WHERE c.standard_id ILIKE 'ivo://ivoa.net/std/sia%'
  AND i.intf_type = 'vs:paramhttp'
ORDER BY r.res_title
}

    set isia(def) { \
			{{AKARI (ISAS/JAXA)} \
			     siaakari \
			     {https://jvo.nao.ac.jp/skynode/do/siap/akari/fis_image_v1/1.0} \
			     {} \
			} \
			{{Chandra (NASA/CXC)} \
			     siacxc \
			     {https://cda.harvard.edu/cxcsiap/queryImages} \
			     {} \
			} \
			{{Hubble Legacy Archive (STSCI)} \
			     siahla \
			     {https://hla.stsci.edu/cgi-bin/hlaSIAP.cgi} \
			     {} \
			} \
			{{MAST (STSCI)} \
			     siamast \
			     {https://archive.stsci.edu/siap/search.php} \
			     {} \
			} \
			{{SkyView (NASA/HEASARC)} \
			     siaskyview \
			     {https://skyview.gsfc.nasa.gov/current/cgi/vo/sia.pl} \
			     {} \
			} \
			{{TGSSADR (GMRT)} \
			     siatgssadr \
			     {https://vo.astron.nl/tgssadr/q_fits/imgs/siap.xml} \
			     {} \
			 } \
		    }

    #{{2MASS (NASA/IPAC)} sia2mass {https://irsa.ipac.caltech.edu/cgi-bin/2MASS/IM/nph-im_sia} {}}
    #{{Astro-Wise} siaastrowise {https://vo.astro-wise.org/SIAP} {VERB=2&FORM=VOTable&PROJECT=ALL&INSTRUMENT=ALL&}}
    #{{CADC} siacadc {https://www.cadc-ccda.hia-iha.nrc-cnrc.gc.ca/sia/query} {}}
    #{{SDSS DR12} siasdss {https://skyserver.sdss.org/SkyserverWS/dr12/SIAP/getSIAP} {} }

}

proc SIAAnalysisMenu {mb} {
    global isia
    global ds9

    $mb add command -label [msgcat::mc {Search SIA Registry}] \
	-command [list SIARegistryDialog siaregistry1]
    $mb add separator

    foreach ff $isia(def) {
	set title [lindex $ff 0]
	set vars [lindex $ff 1]
	set url [lindex $ff 2]
	set opts [lindex $ff 3]

	$mb add command -label $title \
	    -command [list SIADialog $vars $title $url $opts apply]
    }
}

proc SIARegistryDialog {varname} {
    upvar #0 $varname var
    global $varname
    global ds9
    global isia

    set var(top) ".${varname}"
    set var(mb) ".${varname}mb"
    if {[winfo exists $var(top)]} {
	raise $var(top)
	return
    }

    ARInit $varname {}
    set var(proc,exec) SIARegistryExec
    set var(proc,load) SIARegistryLoad
    set var(proc,error) SIARegistryError
    set var(db) ${varname}db
    set var(alldb) ${varname}alldb
    set var(textdb) ${varname}textdb
    set var(filterdb) ${varname}filterdb
    set var(matchdb) ${varname}matchdb
    set var(filter) {}
    set var(filter,ivoid) {}
    set var(filter,ivoid,list) {}
    set var(description,row) 0
    set var(load,pending) 0
    set var(adql) $isia(adql)

    set w $var(top)
    set mb $var(mb)
    Toplevel $w $mb 7 [msgcat::mc {Search SIA Registry}] \
	[list SIARegistryDestroy $varname]

    $mb add cascade -label [msgcat::mc {File}] -menu $mb.file
    ThemeMenu $mb.file
    $mb.file add command -label [msgcat::mc {Retrieve}] \
	-command [list SIARegistryApply $varname]
    $mb.file add command -label [msgcat::mc {Cancel}] \
	-command [list ARCancel $varname]
    $mb.file add separator
    $mb.file add command -label [msgcat::mc {Load}] \
	-command [list SIARegistryOpen $varname]
    $mb.file add command -label [msgcat::mc {Close}] \
	-command [list SIARegistryDestroy $varname] \
	-accelerator "${ds9(ctrl)}W"

    set f [ttk::labelframe $w.search -text [msgcat::mc {Search}] -padding 2]
    ttk::label $f.title -text [msgcat::mc {Matching text}]
    ttk::entry $f.text -textvariable ${varname}(filter) -width 60
    ttk::button $f.apply -text [msgcat::mc {Apply}] \
	-command [list SIARegistryFilter $varname]
    ttk::button $f.clear -text [msgcat::mc {Clear}] \
	-command [list SIARegistryFilterClear $varname]
    grid $f.title $f.text $f.apply $f.clear -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 1 -weight 1
    bind $f.text <Return> [list SIARegistryFilter $varname]

    set f [ttk::labelframe $w.adql -text [msgcat::mc {ADQL Query}] -padding 2]
    set var(adql,text) [text $f.text -height 9 -width 70 -wrap none \
			    -font [font actual TkFixedFont] \
			    -xscrollcommand [list $f.xscroll set] \
			    -yscrollcommand [list $f.yscroll set]]
    ttk::scrollbar $f.yscroll -command [list $var(adql,text) yview] \
	-orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(adql,text) xview] \
	-orient horizontal
    $var(adql,text) insert 1.0 $var(adql)
    grid $var(adql,text) $f.yscroll -sticky news
    grid $f.xscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set f [ttk::frame $w.tbl]
    set var(tbl) [table $f.t \
		      -state disabled -usecommand 0 -variable $var(db) \
		      -colorigin 1 -roworigin 0 -cols 6 -rows 20 \
		      -width -1 -height -1 -maxwidth 500 -maxheight 260 \
		      -titlerows 1 -resizeborders col \
		      -xscrollcommand [list $f.xscroll set] \
		      -yscrollcommand [list $f.yscroll set] \
		      -selecttype row -selectmode single -anchor w \
		      -browsecommand [list SIARegistrySelectCmd $varname %s %S] \
		      -font [font actual TkDefaultFont] \
		      -fg [ThemeTreeForeground] -bg [ThemeTreeBackground]]
    $var(tbl) tag configure sel \
	-fg [ThemeSelectedForeground] -bg [ThemeSelectedBackground]
    $var(tbl) tag configure title \
	-fg [ThemeForeground] -bg [ThemeBackground]
    ttk::scrollbar $f.yscroll -command [list $var(tbl) yview] -orient vertical
    ttk::scrollbar $f.xscroll -command [list $var(tbl) xview] -orient horizontal
    grid $var(tbl) $f.yscroll -sticky news
    grid $f.xscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set f [ttk::labelframe $w.description \
	       -text [msgcat::mc {Description}] -padding 2]
    set var(description) [text $f.text -height 5 -wrap word \
			      -state disabled -relief flat \
			      -font [font actual TkDefaultFont] \
			      -foreground [ThemeTreeForeground] \
			      -background [ThemeTreeBackground] \
			      -yscrollcommand [list $f.yscroll set]]
    ttk::scrollbar $f.yscroll -command [list $var(description) yview] \
	-orient vertical
    grid $var(description) $f.yscroll -sticky news
    grid rowconfigure $f 0 -weight 1
    grid columnconfigure $f 0 -weight 1

    set f [ttk::frame $w.status]
    ttk::label $f.title -text [msgcat::mc {Status}]
    ttk::label $f.item -textvariable ${varname}(status)
    pack $f.title $f.item -side left -padx 2 -pady 2

    set f [ttk::frame $w.buttons]
    set var(apply) [ttk::button $f.retrieve -text [msgcat::mc {Retrieve}] \
			-command [list SIARegistryApply $varname]]
    set var(cancel) [ttk::button $f.cancel -text [msgcat::mc {Cancel}] \
			 -command [list ARCancel $varname] -state disabled]
    ttk::button $f.load -text [msgcat::mc {Load}] \
	-command [list SIARegistryOpen $varname]
    ttk::button $f.close -text [msgcat::mc {Close}] \
	-command [list SIARegistryDestroy $varname]
    pack $f.retrieve $f.cancel $f.load $f.close \
	-side left -expand true -padx 2 -pady 4

    ttk::separator $w.sstatus -orient horizontal
    pack $w.buttons $w.sstatus $w.status -side bottom -fill x
    pack $w.search -side top -fill x
    pack $w.adql -side top -fill x
    pack $w.description -side bottom -fill x
    pack $w.tbl -side top -fill both -expand true
    bind $w <<Close>> [list SIARegistryDestroy $varname]

    SIARegistryApply $varname
}

proc SIARegistryApply {varname} {
    upvar #0 $varname var

    set var(adql) [$var(adql,text) get 1.0 end-1c]
    ARApply $varname
    ARStatus $varname [msgcat::mc {Contacting Server}]
    SIARegistryLoad $varname
}

proc SIARegistryLoad {varname {url {}} {query {}}} {
    upvar #0 $varname var
    global psia

    if {$url == {}} {
	set url $psia(registry)
	set query [http::formatQuery REQUEST doQuery LANG ADQL \
		       FORMAT votable/td QUERY $var(adql)]
    }
    upvar #0 $var(alldb) A
    catch {array unset A}
    TBLGetURL $varname $url $query POST
}

proc SIARegistryExec {varname} {
    upvar #0 $varname var
    set response [http::data $var(token)]
    set message [SIARegistryResponseError $var(token)]
    if {$message != {}} {
	SIARegistryError $varname $message
	return
    }
    VOTParse $var(alldb) $var(token)
    if {![TBLValidDB $var(alldb)]} {
	set message [SIARegistryResponseText $response]
	if {$message == {}} {
	    set message [msgcat::mc {Unable to parse response from SIA registry}]
	}
	SIARegistryError $varname $message
	return
    }
    ARDone $varname
    SIARegistryFilter $varname
    if {$var(load,pending)} {
	set var(load,pending) 0
	SIARegistryOpen $varname 1
    }
}

proc SIARegistryResponseError {token} {
    set response [http::data $token]

    # TAP services report ADQL errors in a VOTable INFO element, often with
    # HTTP status 200.  Do not mistake that response for an empty result table.
    set offset 0
    while {[regexp -nocase -indices -start $offset {<INFO[^>]*>} \
		$response indices]} {
	set first [lindex $indices 0]
	set last [lindex $indices 1]
	set tag [string range $response $first $last]
	if {[regexp -nocase \
		 {name[[:space:]]*=[[:space:]]*["']QUERY_STATUS["']} $tag] &&
	    [regexp -nocase \
		 {value[[:space:]]*=[[:space:]]*["']ERROR["']} $tag]} {
	    if {[regexp -nocase -indices -start [expr {$last + 1}] \
		    {</INFO[[:space:]]*>} $response endIndices]} {
		set message [string range $response [expr {$last + 1}] \
			 [expr {[lindex $endIndices 0] - 1}]]
		return [SIARegistryResponseText $message]
	    }
	    return [msgcat::mc {The SIA registry reported an ADQL error}]
	}
	set offset [expr {$last + 1}]
    }

    set code [http::ncode $token]
    if {![string is integer -strict $code] || $code < 200 || $code >= 300} {
	return [SIARegistryResponseText $response]
    }
    return {}
}

proc SIARegistryResponseText {response} {
    set response [regsub -all -nocase {<script[^>]*>.*</script>} $response { }]
    set response [regsub -all -nocase {<style[^>]*>.*</style>} $response { }]
    set response [regsub -all {<[^>]*>} $response { }]
    set response [XMLUnQuote $response]
    return [string trim [regsub -all {[[:space:]]+} $response { }]]
}

proc SIARegistryError {varname message} {
    upvar #0 $varname var

    if {[info exists var(token)]} {
	set serverMessage [SIARegistryResponseError $var(token)]
	if {$serverMessage != {}} {
	    set message $serverMessage
	}
    }
    SIARegistryDescription $varname $message
    ARError $varname $message
    Error $message
}

proc SIARegistryFilter {varname} {
    upvar #0 $varname var
    global $varname
    global $var(db)

    SIACopyFilteredTable $var(alldb) $var(textdb) $var(filter)
    SIACopyFilteredTable $var(textdb) $var(filterdb) \
	$var(filter,ivoid) ivoid
    if {$var(filter,ivoid,list) != {}} {
	SIACopyFilteredTable $var(filterdb) $var(matchdb) \
	    $var(filter,ivoid,list) ivoid anyexact
	set var(projectdb) $var(matchdb)
    } else {
	set var(projectdb) $var(filterdb)
    }
    SIARegistryProjectTable $varname
    if {![TBLValidDB $var(db)]} {
	return
    }
    set nc [starbase_ncols $var(db)]
    set nr [expr [starbase_nrows $var(db)] + 1]
    $var(tbl) configure -cols [expr {$nc > 6 ? $nc : 6}]
    $var(tbl) configure -rows [expr {$nr > 20 ? $nr : 20}]
    SIARegistryColumnWidths $varname
    $var(tbl) selection clear all
    set var(description,row) 0
    SIARegistryDescription $varname {}
    ARStatus $varname "[starbase_nrows $var(db)] [msgcat::mc {Items Found}]"
}

proc SIARegistryColumnWidths {varname} {
    upvar #0 $varname var
    upvar #0 $var(db) D

    if {![TBLValidDB $var(db)]} {
	return
    }
    set tableFont [$var(tbl) cget -font]
    for {set cc 1} {$cc <= $D(Ncols)} {incr cc} {
	set pixels 0
	for {set rr 0} {$rr <= $D(Nrows)} {incr rr} {
	    foreach line [split $D($rr,$cc) \n] {
		set measured [font measure $tableFont $line]
		if {$measured > $pixels} {
		    set pixels $measured
		}
	    }
	}
	# Negative table widths are pixels.  Leave room for cell padding.
	$var(tbl) width $cc [expr {-($pixels + 16)}]
    }
}

proc SIARegistryProjectTable {varname} {
    upvar #0 $varname var
    upvar #0 $var(projectdb) S
    upvar #0 $var(db) D

    catch {array unset D}
    foreach key [array names var "description,*"] {
	unset var($key)
    }
    if {![TBLValidDB $var(projectdb)]} {
	return
    }

    set descriptionColumn \
	[expr {[lsearch -exact $S(Header) res_description] + 1}]
    set columns {}
    set header {}
    for {set cc 1} {$cc <= $S(Ncols)} {incr cc} {
	if {$cc != $descriptionColumn} {
	    lappend columns $cc
	    lappend header [lindex $S(Header) [expr {$cc-1}]]
	}
    }
    set D(Header) $header
    starbase_colmap D
    set D(Nrows) $S(Nrows)
    set D(HLines) $S(HLines)

    foreach key {DataType Id ArraySize Width Precision Unit Ref Ucd Description} {
	if {[info exists S($key)]} {
	    set values {}
	    foreach cc $columns {
		lappend values [lindex $S($key) [expr {$cc-1}]]
	    }
	    set D($key) $values
	}
    }
    for {set hh 1} {$hh <= $S(HLines)} {incr hh} {
	if {[info exists S(H_$hh)]} {
	    set D(H_$hh) $S(H_$hh)
	}
    }
    for {set rr 1} {$rr <= $S(Nrows)} {incr rr} {
	if {$descriptionColumn > 0} {
	    set var(description,$rr) $S($rr,$descriptionColumn)
	} else {
	    set var(description,$rr) {}
	}
	set out 0
	foreach cc $columns {
	    incr out
	    set D($rr,$out) $S($rr,$cc)
	}
    }
}

proc SIARegistryDescription {varname text} {
    upvar #0 $varname var

    if {![winfo exists $var(description)]} {
	return
    }
    set text [string trim $text]
    $var(description) configure -state normal
    $var(description) delete 1.0 end
    $var(description) insert end $text
    $var(description) configure -state disabled
}

proc SIARegistryShowDescription {varname row} {
    upvar #0 $varname var

    if {$row > 0 && [info exists var(description,$row)]} {
	SIARegistryDescription $varname $var(description,$row)
    } else {
	SIARegistryDescription $varname {}
    }
}

proc SIARegistrySelectCmd {varname old new} {
    upvar #0 $varname var

    set row [lindex [split $new ,] 0]
    if {![string is integer -strict $row] || $row < 1} {
	set row 0
    }
    set var(description,row) $row
    SIARegistryShowDescription $varname $row
}

proc SIARegistryFilterClear {varname} {
    upvar #0 $varname var
    set var(filter) {}
    set var(filter,ivoid) {}
    set var(filter,ivoid,list) {}
    SIARegistryFilter $varname
}

proc SIARegistryOpen {varname {first 0}} {
    upvar #0 $varname var
    global $var(db)

    if {![TBLValidDB $var(db)]} {
	return
    }
    if {$first} {
	if {[starbase_nrows $var(db)] < 1} {
	    ARError $varname [msgcat::mc {No Items Found}]
	    return
	}
	set row 1
    } else {
	set selected [$var(tbl) curselection]
	if {$selected == {}} {
	    ARError $varname [msgcat::mc {Please select a service}]
	    return
	}
	set row [lindex [split [lindex $selected 0] ,] 0]
    }
    set urlcol [starbase_colnum $var(db) access_url]
    set titlecol [starbase_colnum $var(db) res_title]
    set stdcol [starbase_colnum $var(db) standard_id]
    if {$urlcol == 0} {
	ARError $varname [msgcat::mc {Unable to find URL column}]
	return
    }
    set url [starbase_get $var(db) $row $urlcol]
    set title [starbase_get $var(db) $row $titlecol]
    set standard [starbase_get $var(db) $row $stdcol]
    set id [string map {:// _ / _ . _ - _ # _ ? _ & _ = _} $url]
    set id [string range $id 0 48]
    SIADialog "siaregistry_${id}" $title $url {} apply $standard
}

proc SIARegistryDestroy {varname} {
    upvar #0 $varname var
    foreach dbkey {db alldb textdb filterdb matchdb} {
	if {[info exists var($dbkey)]} {
	    upvar #0 $var($dbkey) D
	    catch {array unset D}
	}
    }
    ARDestroy $varname
}

proc SIARegistryCmdDialog {} {
    set varname siaregistry1
    SIARegistryDialog $varname
    return $varname
}

proc SIARegistryCmdFilter {text} {
    set varname [SIARegistryCmdDialog]
    upvar #0 $varname var

    if {$var(filter) == {}} {
	set var(filter) $text
    } else {
	append var(filter) " " $text
    }
    SIARegistryFilter $varname
}

proc SIARegistryCmdIvoid {text} {
    set varname [SIARegistryCmdDialog]
    upvar #0 $varname var

    if {$var(filter,ivoid) == {}} {
	set var(filter,ivoid) $text
    } else {
	append var(filter,ivoid) " " $text
    }
    SIARegistryFilter $varname
}

proc SIARegistryCmdLoad {} {
    set varname [SIARegistryCmdDialog]
    upvar #0 $varname var

    if {([info exists var(active)] && $var(active)) ||
	![TBLValidDB $var(db)]} {
	set var(load,pending) 1
	return
    }
    SIARegistryOpen $varname 1
}

proc SIARegistryCmdClear {} {
    set varname [SIARegistryCmdDialog]
    upvar #0 $varname var

    ARCancel $varname
    set var(filter) {}
    set var(filter,ivoid) {}
    set var(filter,ivoid,list) {}
    set var(load,pending) 0
    foreach dbkey {db alldb textdb filterdb matchdb} {
	upvar #0 $var($dbkey) D
	catch {array unset D}
    }
    set var(description,row) 0
    SIARegistryDescription $varname {}
    $var(tbl) selection clear all
    $var(tbl) configure -cols 6 -rows 20
    ARStatus $varname {}
}

proc SIARegistrySAMPResources {name ids} {
    set varname [SIARegistryCmdDialog]
    upvar #0 $varname var

    set var(filter) {}
    set var(filter,ivoid) {}
    set var(filter,ivoid,list) $ids
    set var(samp,name) $name
    SIARegistryFilter $varname
}

proc SIARegistryCmdRetrieve {} {
    set varname siaregistry1
    if {![winfo exists ".${varname}"]} {
	SIARegistryDialog $varname
	return
    }
    upvar #0 $varname var

    set var(filter) {}
    set var(filter,ivoid) {}
    set var(filter,ivoid,list) {}
    set var(load,pending) 0
    if {[info exists var(active)] && $var(active)} {
	return
    }
    SIARegistryApply $varname
}

proc PrefsDialogSIA {} {
    global dprefs

    set w $dprefs(tab)
    $dprefs(listbox) insert {} end -id [ttk::frame $w.sia] \
	-text [msgcat::mc {Simple Image Access}]

    set f [ttk::labelframe $w.sia.registry \
	       -text [msgcat::mc {SIA Registry}]]
    ttk::label $f.title -text [msgcat::mc {Registry TAP URL}]
    ttk::entry $f.url -textvariable psia(registry) -width 70
    grid $f.title -padx 2 -pady 2 -sticky w
    grid $f.url -padx 2 -pady 2 -sticky ew
    grid columnconfigure $f 0 -weight 1
    pack $f -side top -fill x -expand true
}

proc SIALoad {varname url query} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIALoad $varname $url?$query"
    }

    # clear previous db
    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    global $var(alltbldb)
    if {[info exists $var(alltbldb)]} {
	unset $var(alltbldb)
    }

    TBLGetURL $varname $url $query POST
    return
}

proc SIAExec {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAExec $varname"
    }

    VOTParse $var(alltbldb) $var(token)
    SIADone $varname

    SIAFilter $varname
    SIADialogUpdate $varname
}

proc SIACopyFilteredTable {src dest text {column {}} {match all}} {
    upvar #0 $src S
    upvar #0 $dest D

    catch {array unset D}
    if {![TBLValidDB $src]} {
	return
    }

    foreach key {Header Ncols HLines DataType Id ArraySize Width Precision Unit Ref Ucd Description} {
	if {[info exists S($key)]} {
	    set D($key) $S($key)
	}
    }
    starbase_colmap D
    for {set cc 1} {$cc <= $S(Ncols)} {incr cc} {
	if {[info exists S(0,$cc)]} {
	    set D(0,$cc) $S(0,$cc)
	}
    }
    for {set hh 1} {$hh <= $S(HLines)} {incr hh} {
	if {[info exists S(H_$hh)]} {
	    set D(H_$hh) $S(H_$hh)
	}
    }

    if {$match == {anyexact}} {
	set words $text
    } else {
	set words \
	    [regexp -all -inline {\S+} [string tolower [string trim $text]]]
    }
    set filterColumn 0
    if {$column != {}} {
	set filterColumn [expr {[lsearch -exact $S(Header) $column] + 1}]
	if {$filterColumn == 0} {
	    set D(Nrows) 0
	    return
	}
    }
    set out 0
    for {set rr 1} {$rr <= $S(Nrows)} {incr rr} {
	set haystack {}
	if {$filterColumn > 0} {
	    set haystack [string tolower $S($rr,$filterColumn)]
	} else {
	    for {set cc 1} {$cc <= $S(Ncols)} {incr cc} {
		append haystack " " [string tolower $S($rr,$cc)]
	    }
	}
	set pass 1
	if {$match == {anyexact}} {
	    set pass 0
	    foreach word $words {
		if {[string equal -nocase $word $haystack]} {
		    set pass 1
		    break
		}
	    }
	} else {
	    foreach word $words {
		if {[string first $word $haystack] < 0} {
		    set pass 0
		    break
		}
	    }
	}
	if {$pass} {
	    incr out
	    for {set cc 1} {$cc <= $S(Ncols)} {incr cc} {
		set D($out,$cc) $S($rr,$cc)
	    }
	}
    }
    set D(Nrows) $out
}

proc SIAFilter {varname} {
    upvar #0 $varname var
    global $varname

    SIACopyFilteredTable $var(alltbldb) $var(tbldb) $var(filter)
    SIATable $varname
}

proc SIATable {varname} {
    upvar #0 $varname var
    global $varname
    global $var(tbldb)
    global isia

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIATable $varname"
    }

    if {![TBLValidDB $var(tbldb)]} {
	return
    }

    # clear the selection
    $var(tbl) selection clear all

    global $var(tbldb)
    $var(found) configure -textvariable ${var(tbldb)}(Nrows)

    #    starbase_writefp $var(tbldb) stdout

    if {[starbase_nrows $var(tbldb)] == 0} {
	ARStatus $varname [msgcat::mc {No Items Found}]
	return
    }

    set nc [starbase_ncols $var(tbldb)]
    if { $nc > $isia(mincols)} {
	$var(tbl) configure -cols $nc
    } else {
	$var(tbl) configure -cols $isia(mincols)
    }

    # add header
    set nr [expr [starbase_nrows $var(tbldb)]+1]
    if {$nr > $isia(minrows)} {
	$var(tbl) configure -rows $nr
    } else {
	$var(tbl) configure -rows $isia(minrows)
    }
}

proc SIAOff {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,sia)} {
	puts stderr "SIAOff $varname"
    }

    global $var(tbldb)
    if {[info exists $var(tbldb)]} {
	unset $var(tbldb)
    }
    set db $var(tbldb)
    set ${db}(Nrows) {}
    global $var(alltbldb)
    catch {unset $var(alltbldb)}

    $var(tbl) selection clear all

    SIADialogUpdate $varname
}

# Process Cmds

proc ProcessSIACmd {varname iname} {
    upvar $varname var
    upvar $iname i

    global isia
    # we need to be realized
    ProcessRealizeDS9

    set ref [lindex $isia(sias) end]
    global cvarname
    set cvarname $ref

    sia::YY_FLUSH_BUFFER
    sia::yy_scan_string [lrange $var $i end]
    sia::yyparse
    incr i [expr $sia::yycnt-1]
}

proc ProcessSendSIACmd {proc id param} {
    global isia

    set rr {}
    foreach ii $isia(sias) {
	lappend rr [string replace $ii 0 2]
    }
    $proc $id "$rr\n"
}

proc SIACmdRef {ref} {
    global isia
    global cvarname

    set rr $ref
    set id [lsearch -exact $isia(sias) $rr]
    if {$id < 0} {
	set rr sia${ref}
	set id [lsearch -exact $isia(sias) $rr]
    }
    if {$id < 0} {
	foreach candidate $isia(sias) {
	    upvar #0 $candidate var
	    if {[info exists var(title)] &&
		[string equal -nocase $var(title) $ref]} {
		set rr $candidate
		set id [lsearch -exact $isia(sias) $candidate]
		break
	    }
	}
    }

    # look for reference in current list
    if { $id < 0} {
	Error "[msgcat::mc {Unable to find SIAP window}] $ref"
	return
    }

    set isia(sias) [lreplace $isia(sias) $id $id]
    lappend isia(sias) $rr
}

proc SIACmdRetrieve {ref} {
    global isia
    global cvarname

    # look for reference in current list
    if {[lsearch $isia(sias) sia${ref}] < 0} {
	# see if its from our list of sias
	foreach mm $isia(def) {
	    set title [lindex $mm 0]
	    set vars [lindex $mm 1]
	    set url [lindex $mm 2]
	    set opts [lindex $mm 3]

	    if {$title != {-} && "sia${ref}" == $vars} {
		SIADialog $vars $title $url $opts sync
		return
	    }
	}
	Error "SIA site no longer supported: $ref"
    }
}
