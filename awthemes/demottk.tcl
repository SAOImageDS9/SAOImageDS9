#!/usr/bin/tclsh

package require Tk

set iscript [info script]
if { [file type $iscript] eq "link" } { set iscript [file link $iscript] }
set ap [file dirname $iscript]
if { $ap ni $::auto_path } {
  lappend ::auto_path $ap
}
if { 1 } {
  set ap [file normalize [file join [file dirname $iscript] .. code]]
  if { $ap ni $::auto_path } {
    lappend ::auto_path $ap
  }
}
unset ap
unset iscript

if { [llength $::argv] < 1 } {
  puts "Usage: demottk.tcl \[-ttkscale <scale-factor>] "
  puts "    \[-fontscale <scale-factor>] "
  puts "    \[-background <color>] \[-focuscolor <color>] \[-foreground <color>]"
  puts "    \[-notksvg] \[-noflex] \[-nocbt] \[-sizegrip] \[-stylerect]"
  puts "    \[-group group -groupcolor color]"
  puts "    <theme> "
  exit 1
}

set ::notksvg false
set ::noflex false
set ::nocbt false
set ::sizegrip false
set fontscale 1.0 ; # default
set sf 1.0
set gc {}
set nbg {}
set nfg {}
set srect false
set group {}
set groupcolor {}
set theme {}
for {set idx 0} {$idx < [llength $::argv]} {incr idx} {
  set a [lindex $::argv $idx]
  switch -exact -- $a {
    -ttkscale {
      incr idx
      tk scaling [lindex $::argv $idx]
    }
    -focuscolor {
      incr idx
      set gc [lindex $::argv $idx]
    }
    -background {
      incr idx
      set nbg [lindex $::argv $idx]
    }
    -foreground {
      incr idx
      set nfg [lindex $::argv $idx]
    }
    -fontscale {
      incr idx
      set fontscale [lindex $::argv $idx]
    }
    -group {
      incr idx
      set group [lindex $::argv $idx]
    }
    -groupcolor {
      incr idx
      set groupcolor [lindex $::argv $idx]
    }
    -notksvg {
      set ::notksvg true
    }
    -noflex {
      set ::noflex true
    }
    -nocbt {
      set ::nocbt true
    }
    -sizegrip {
      set ::sizegrip true
    }
    -stylerect {
      set srect true
    }
    default {
      if { ! [string match -* $a] } {
        set theme $a
      }
    }
  }
}

if { $theme eq {} } {
  puts stderr "no theme specified"
  exit 1
}

# now do the require so that -notksvg has an effect.
catch { package require awthemes }
set ::havethemeutils false
if { ! [catch {package present awthemes}] } {
  set ::havethemeutils true
}

set ::havecbt false
if { ! $::nocbt } {
  catch { package require checkButtonToggle }
  if { ! [catch {package present checkButtonToggle}] } {
    set ::havecbt true
  }
}

set ::haveflex false
set menucmd menu
set topmenuargs {}
set menuargs {}
if { ! $::noflex } {
  catch { package require flexmenu }
  if { ! [catch {package present flexmenu}] } {
    set ::haveflex true
    set menucmd ::flexmenu
    set topmenuargs [list -type menubar]
    set menuargs [list -mode frame]
  }
}

if { $havethemeutils && $gc ne {} } {
  ::themeutils::setHighlightColor $theme $gc
}
if { $havethemeutils && $nbg ne {} } {
  ::themeutils::setBackgroundColor $theme $nbg
}
if { $havethemeutils && $nfg ne {} } {
  ::themeutils::setThemeColors $theme fg.fg $nfg
}
if { $havethemeutils && $group ne {} && $groupcolor ne {} } {
  ::themeutils::setThemeGroupColor $theme $group $groupcolor
}
if { $havethemeutils && $srect } {
  ::themeutils::setThemeColors $theme \
      style.progressbar rect \
      style.scale rect \
      style.scrollbar-grip none
}


if { ! $::notksvg } {
  catch { package require tksvg }
}
set havetksvg false
if { ! [catch {package present tksvg}] } {
  set havetksvg true
}

set fn data/bll-tecra/tkscale.txt
if { [file exists $fn] } {
  set fh [open $fn r]
  set scale [gets $fh]
  close $fh
  tk scaling -displayof . $scale
}

set calcdpi [expr {round([tk scaling]*72.0)}]
set scalefactor [expr {$calcdpi/100.0}]

# Tk defaults to pixels.  Sigh.
# Use points so that the fonts scale.
font configure TkDefaultFont -size 11
set origfontsz [font metrics TkDefaultFont -ascent]
font configure TkDefaultFont -size [expr {round(11.0*$fontscale)}]
font create TextFont
font configure TextFont -size  [expr {round(10.0*$fontscale)}]
font create MenuFont
font configure MenuFont -size  [expr {round(9.0*$fontscale)}]

set newfontsz [font metrics TkDefaultFont -ascent]
if { $origfontsz != $newfontsz } {
  set appscale [expr {double($newfontsz)/double($origfontsz)}]
  ::themeutils::setThemeColors $theme \
      scale.factor $appscale
  set scalefactor [expr {$scalefactor * $appscale}]
}

set loaded false
if { 1 } {
  set fn [file join .. code themes themeloader.tcl]
  if { [file exists $fn] } {
    source $fn
    themeloader::loadTheme $theme
    puts "themeloader: loaded $theme"
    set loaded true
  }
}

set ttheme $theme
if { $havetksvg && [file exists aw${theme}.tcl] } {
  set ttheme aw${theme}
}
if { [file exists $ttheme.tcl] && ! $loaded } {
  source $ttheme.tcl
  puts "loaded via source $ttheme.tcl"
  set loaded true
}
set tfn [file join $env(HOME) s ballroomdj code themes $ttheme.tcl]
if { [file exists $tfn] && ! $loaded } {
  source $tfn
  puts "loaded $tfn"
  set loaded true
}

ttk::style theme use $theme

set val 55
set valb $theme
set off 0
set on 1

. configure -background [ttk::style lookup TFrame -background]

$menucmd .mb -font MenuFont {*}$topmenuargs {*}$menuargs
if { $::haveflex } {
  pack .mb -in . -side top -fill x -anchor nw -pady 0 -padx 0 -expand false
} else {
  . configure -menu .mb
}

$menucmd .mb_example -tearoff 0 -font MenuFont {*}$menuargs
.mb_example add command -label Menu-1
.mb_example add command -label Menu-2
.mb add cascade -label Example -menu .mb_example

$menucmd .mb_b -tearoff 0 -font MenuFont {*}$menuargs
.mb add cascade -label {not in use} -menu .mb_b

$menucmd .mb_widgets -tearoff 0 -font MenuFont {*}$menuargs
.mb_widgets add checkbutton -label checkA
.mb_widgets add checkbutton -label checkB
.mb_widgets add radiobutton -label radioA -value 0
.mb_widgets add radiobutton -label radioB -value 1
.mb_widgets add command -label widgets-2
.mb add cascade -label widgets -menu .mb_widgets

foreach {w} {.mb .mb_example .mb_widgets} {
  if { [info commands ::ttk::theme::${theme}::setMenuColors] ne {} } {
    ::ttk::theme::${theme}::setMenuColors $w
  } else {
    set c [ttk::style lookup . -background]
    if { $c ne {} } {
      $w configure -background $c
    }
    set c [ttk::style lookup . -foreground]
    if { $c ne {} } {
      $w configure -foreground $c
    }
    set c [ttk::style lookup TEntry -selectforeground focus]
    if { $c ne {} } {
      $w configure -activeforeground $c
    }
    set c [ttk::style lookup TEntry -selectbackground focus]
    if { $c ne {} } {
      $w configure -activebackground $c
    }
    set c [ttk::style lookup TEntry -foreground disabled]
    if { $c ne {} } {
      $w configure -disabledforeground $c
    }
  }
  $w configure -borderwidth 0
  $w configure -activeborderwidth 0
}

ttk::style configure TFrame -borderwidth 0

ttk::notebook .nb
pack .nb -side left -fill both -expand true
ttk::frame .one
.nb add .one -text $theme
ttk::frame .two
.nb add .two -text {Text w/scroll}
ttk::frame .three
.nb add .three -text {Paned Window}
ttk::frame .four
.nb add .four -text {Treeview}
ttk::frame .five
.nb add .five -text {Menubutton}
ttk::frame .six
.nb add .six -text {Listbox}
ttk::frame .seven
.nb add .seven -text {Inactive} -state disabled

ttk::labelframe .lfn -text " Normal "
ttk::labelframe .lfd -text " Disabled "
.lfd state disabled
foreach {k} {n d} {
  set s !disabled
  if { $k eq "d" } {
    set s disabled
  }
  set row 0
  ttk::label .lb$k -text $theme -state $s
  ttk::button .b$k -text $theme -state $s
  grid .lb$k .b$k -in .lf$k -sticky w -padx 3p -pady 3p -columnspan 2
  incr row

  ttk::combobox .combo$k -values \
      [list aaa bbb ccc ddd eee fff ggg hhh iii jjj kkk lll mmm nnn ooo ppp] \
      -textvariable valb \
      -width 15 \
      -state $s \
      -height 5 \
      -font TkDefaultFont
  ttk::combobox .comboro$k -values \
      [list aaa bbb ccc ddd eee fff ggg hhh iii jjj kkk lll mmm nnn ooo ppp] \
      -textvariable valb \
      -width 15 \
      -height 5 \
      -font TkDefaultFont
  .comboro$k state [list readonly $s]
  option add *TCombobox*Listbox.font TkDefaultFont
  grid .combo$k .comboro$k -in .lf$k -sticky w -padx 3p -pady 3p
  grid configure .combo$k -columnspan 2
  grid configure .comboro$k -columnspan 2 -column 2

  ttk::checkbutton .cboff$k -text off -variable off -state $s
  ttk::checkbutton .cbon$k -text on -variable on -state $s
  grid .cboff$k .cbon$k -in .lf$k -sticky w -padx 3p -pady 3p
  incr row
  if { $::havecbt } {
    ttk::checkbutton .cbtoff$k -text off -variable off -state $s \
        -style Toggle.TCheckbutton
    ttk::checkbutton .cbton$k -text on -variable on -state $s \
        -style Toggle.TCheckbutton
    grid .cbtoff$k .cbton$k -in .lf$k -sticky w -padx 3p -pady 3p
    incr row
  }

  ttk::separator .sep$k
  grid .sep$k -in .lf$k -sticky ew -padx 3p -pady 3p -columnspan 4
  incr row

  ttk::radiobutton .rboff$k -text off -variable on -value 0 -state $s
  ttk::radiobutton .rbon$k -text on -variable on -value 1 -state $s
  grid .rboff$k .rbon$k -in .lf$k -sticky w -padx 3p -pady 3p
  incr row

  grid columnconfigure .lf$k 4 -weight 1

  ttk::scale .sc$k \
      -from 0 \
      -to 100 \
      -variable val \
      -orient horizontal \
      -length [expr {round(100*$scalefactor)}]
  .sc$k state $s
  grid .sc$k -in .lf$k -sticky w -padx 3p -pady 3p -columnspan 2
  incr row

  ttk::progressbar .pb$k \
      -orient horizontal \
      -mode determinate \
      -variable val \
      -length [expr {round(100*$scalefactor)}]
  .pb$k state $s
  ttk::scale .scv$k \
      -orient vertical \
      -from 100 \
      -to 0 \
      -variable val \
      -length [expr {round(100*$scalefactor)}]
  .scv$k state $s
  ttk::progressbar .pbv$k \
      -orient vertical \
      -mode determinate \
      -variable val \
      -length [expr {round(100*$scalefactor)}]
  .pbv$k state $s
  grid .pb$k .scv$k .pbv$k -in .lf$k -sticky w -padx 3p -pady 3p
  incr row
  grid configure .pb$k -columnspan 2
  grid configure .scv$k -rowspan 3 -column 2
  grid configure .pbv$k -rowspan 3 -column 3

  ttk::entry .ent$k -textvariable valb \
      -width 15 \
      -state $k \
      -font TkDefaultFont
  incr row
  grid .ent$k -in .lf$k -sticky w -padx 3p -pady 3p -columnspan 2 -row $row

  ttk::spinbox .sbox$k -textvariable val \
      -width 5 \
      -from 1 -to 100 -increment 0.1 \
      -state $k \
      -font TkDefaultFont
  grid .sbox$k -in .lf$k -sticky w -padx 3p -pady 3p -columnspan 2
  incr row
}
set tag {(with tksvg)}
if { $::notksvg } {
  set tag {(without tksvg)}
}
.lbn configure -text "$theme $tag"

pack .lfn .lfd -in .one -side left -padx 3p -pady 3p -expand 1 -fill both

if { ! $::notksvg && $::sizegrip } {
  set sgdata {
  <?xml version="1.0" encoding="UTF-8" standalone="no"?>
  <!-- Created with Inkscape (http://www.inkscape.org/) -->

  <svg
     xmlns:dc="http://purl.org/dc/elements/1.1/"
     xmlns:cc="http://creativecommons.org/ns#"
     xmlns:rdf="http://www.w3.org/1999/02/22-rdf-syntax-ns#"
     xmlns:svg="http://www.w3.org/2000/svg"
     xmlns="http://www.w3.org/2000/svg"
     xmlns:xlink="http://www.w3.org/1999/xlink"
     xmlns:sodipodi="http://sodipodi.sourceforge.net/DTD/sodipodi-0.dtd"
     xmlns:inkscape="http://www.inkscape.org/namespaces/inkscape"
     width="18"
     height="18"
     viewBox="0 0 18 18"
     version="1.1"
     id="svg8"
     inkscape:version="0.92.4 (5da689c313, 2019-01-14)"
     sodipodi:docname="sizegrip-base.svg">
    <defs
       id="defs2">
      <linearGradient
         inkscape:collect="always"
         id="linearGradient838">
        <stop
           style="stop-color:#ffffff;stop-opacity:1"
           offset="0"
           id="stop834" />
        <stop
           style="stop-color:#0000ff;stop-opacity:1"
           offset="1"
           id="stop836" />
      </linearGradient>
      <linearGradient
         inkscape:collect="always"
         xlink:href="#linearGradient838"
         id="linearGradient840"
         x1="3.7895701"
         y1="295.77591"
         x2="4.0541534"
         y2="296.04047"
         gradientUnits="userSpaceOnUse"
         gradientTransform="translate(-2.8763581e-8,5.0434905e-6)" />
      <linearGradient
         inkscape:collect="always"
         xlink:href="#linearGradient838"
         id="linearGradient848"
         x1="3.1750002"
         y1="295.0546"
         x2="3.4395835"
         y2="295.31915"
         gradientUnits="userSpaceOnUse"
         gradientTransform="translate(0.61456997,0.72132033)" />
    </defs>
    <sodipodi:namedview
       id="base"
       pagecolor="#ffffff"
       bordercolor="#666666"
       borderopacity="1.0"
       inkscape:pageopacity="0.0"
       inkscape:pageshadow="2"
       inkscape:zoom="19.833333"
       inkscape:cx="9.0000002"
       inkscape:cy="9.0000002"
       inkscape:document-units="px"
       inkscape:current-layer="layer1"
       showgrid="true"
       inkscape:window-width="1214"
       inkscape:window-height="532"
       inkscape:window-x="86"
       inkscape:window-y="25"
       inkscape:window-maximized="0"
       scale-x="1.1"
       units="px"
       inkscape:pagecheckerboard="true"
       fit-margin-top="0"
       fit-margin-left="-0.1"
       fit-margin-right="0"
       fit-margin-bottom="0"
       inkscape:snap-nodes="false"
       showguides="false">
      <inkscape:grid
         type="xygrid"
         id="grid843"
         originx="-1.6121707"
         originy="0.26814652" />
    </sodipodi:namedview>
    <metadata
       id="metadata5">
      <rdf:RDF>
        <cc:Work
           rdf:about="">
          <dc:format>image/svg+xml</dc:format>
          <dc:type
             rdf:resource="http://purl.org/dc/dcmitype/StillImage" />
          <dc:title></dc:title>
        </cc:Work>
      </rdf:RDF>
    </metadata>
    <g
       inkscape:label="Layer 1"
       inkscape:groupmode="layer"
       id="layer1"
       transform="translate(-1.6121707,-293.47064)">
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827"
         cx="17.398338"
         cy="309.25586"
         r="1.9999994" />
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827-3"
         cx="-12.711312"
         cy="309.25586"
         transform="scale(-1,1)"
         r="1.9999994" />
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827-6"
         cx="17.398474"
         cy="304.56882"
         r="1.9999994" />
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827-3-7"
         cx="8.0244226"
         cy="309.25574"
         r="1.9999994" />
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827-3-5"
         cx="12.711312"
         cy="304.56894"
         r="1.9999994" />
      <circle
         style="opacity:1;fill:_SZGRIP_;fill-opacity:1;stroke:_SZGRIP_;stroke-width:0;stroke-linecap:square;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-opacity:0;paint-order:normal"
         id="path827-3-3"
         cx="17.398474"
         cy="299.88174"
         r="1.9999994" />
    </g>
  </svg>
  }

  set elsizegrip false
  set sgimg {}
  if { [tk windowingsystem] eq "aqua" &&
      ! $elsizegrip } {
    # aqua doesn't have a good sizegrip
    regsub -all _SZGRIP_ $sgdata
        [::colorutils::rgbToHexStr $::sysvars::v(darwin.appearance) 2]
        sgdata
    set sgimg [image create photo -data $sgdata -format svg]
    ttk::style element create new.sizegrip image $sgimg
    set elsizegrip true
  }
  if { ! $elsizegrip &&
      ([info commands ::ttk::theme::${theme}::hasImage] eq {} ||
       ! [::ttk::theme::${theme}::hasImage sizegrip]) } {
    set tcol #000000
    # for dark themes, set tcol to a bright yellow
    regsub -all _SZGRIP_ $sgdata $tcol sgdata
    set sgimg [image create photo -data $sgdata -format svg]
    ttk::style element create new.sizegrip image $sgimg
    set elsizegrip true
  }
  if { $elsizegrip } {
    set sglayout [ttk::style layout TSizegrip]
    regsub {Sizegrip\.sizegrip} $sglayout new.sizegrip sglayout
    ttk::style layout TSizegrip $sglayout
  }
}

ttk::sizegrip  .sg
pack .sg -in .one -side right -anchor se

proc twrap { } {
  set c [.text cget -wrap]
  if { $c eq "none" } {
    set c word
  } else {
    set c none
  }
  .text configure -wrap $c
}

ttk::button .wrap -text Wrap -command twrap
pack .wrap -in .two -side bottom -anchor se
if { $theme eq "aqua" } {
  ttk::scrollbar .sbv -command [list .text yview]
  ttk::scrollbar .sbh -orient horizontal -command [list .text xview]
} else {
  ttk::scrollbar .sbv -command [list .text yview] -style Vertical.TScrollbar
  ttk::scrollbar .sbh -orient horizontal -command [list .text xview] \
      -style Horizontal.TScrollbar
}
pack .sbv -in .two -side right -fill y -expand false
pack .sbh -in .two -side bottom -fill x -expand false
# change borderwidth to 1 for color testing
text .text \
    -xscrollcommand [list .sbh set] \
    -yscrollcommand [list .sbv set] \
    -wrap none \
    -relief flat \
    -height 10 \
    -width 50 \
    -borderwidth 0 \
    -highlightthickness 1 \
    -font TextFont
if { [info commands ::ttk::theme::${theme}::setTextColors] ne {} } {
  ::ttk::theme::${theme}::setTextColors .text
}
bind .text <MouseWheel> {%W yview scroll [expr {int(pow(-%D/240,3))}] units}
pack .text -in .two -fill both -expand true
.text insert end {
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis non velit aliquam, malesuada nisi blandit, pellentesque ligula. Pellentesque convallis pulvinar justo ac blandit. Praesent scelerisque, risus vitae rhoncus feugiat, metus ante feugiat leo, sit amet iaculis dui urna vitae purus. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Mauris mollis libero at ipsum mollis, non aliquet nunc porta. Mauris auctor lobortis neque, at ullamcorper elit porttitor a. Aliquam eu porttitor ante. Sed arcu dolor, pretium non diam in, imperdiet pellentesque ipsum. Quisque sollicitudin nisl ex, sodales scelerisque nunc consequat volutpat. Vestibulum aliquet augue mauris, sit amet commodo urna consectetur interdum. Aenean dignissim tellus eu sollicitudin porta. Aliquam accumsan vel leo non iaculis. Sed pharetra, tortor non malesuada pellentesque, felis magna tempor turpis, nec tincidunt justo erat in justo. Aliquam congue, lectus nec pulvinar euismod, enim lorem venenatis tellus, vitae placerat magna ligula in leo. Praesent nisl lectus, ornare tristique consequat egestas, fermentum a urna. Morbi metus nulla, convallis ac orci a, imperdiet pretium purus.

Aenean tincidunt dui lacinia urna sagittis bibendum. Maecenas eu vestibulum tellus, viverra tincidunt mi. Sed sollicitudin mattis mi, quis pellentesque urna. Ut auctor ligula eu lectus imperdiet, sed tempus massa tristique. Curabitur ac eros euismod, pellentesque sapien eget, pretium justo. Aliquam quis turpis nec tellus vehicula maximus vel ac urna. Proin efficitur purus erat, sed tristique enim faucibus ac. Nullam hendrerit tempor tincidunt. Duis id dolor enim.

Quisque malesuada volutpat ex, id porta sem. Cras tristique tellus eget urna tincidunt ultrices. Nunc mollis consectetur odio a ultrices. Morbi sed imperdiet odio. In hac habitasse platea dictumst. Mauris tellus dui, pretium sed dolor sit amet, accumsan pretium est. Donec eu libero in felis suscipit ultrices et nec magna. Nunc accumsan quam sem, ut pharetra mauris dapibus id. Sed mi quam, consectetur eu iaculis luctus, viverra gravida neque. Proin vel maximus nunc.

Phasellus non ultricies mi. Aliquam erat volutpat. Ut sed mollis felis, nec imperdiet sapien. Etiam id lacus at augue tempus malesuada. Cras vel est ac metus tempus dictum. Aliquam metus tortor, rutrum nec blandit id, dapibus quis felis. Nulla viverra sit amet est ac gravida. Phasellus ac vestibulum turpis. Proin dictum viverra lobortis.

Pellentesque commodo tellus ut semper consectetur. Praesent lacus sem, porta sit amet ligula vel, varius mattis ipsum. Praesent erat nisl, vulputate ut ultricies quis, accumsan sit amet diam. Nulla tempor, nunc in malesuada venenatis, purus erat blandit lectus, sit amet pretium arcu arcu id erat. Donec ante eros, sagittis nec tellus eget, porta faucibus nisl. Integer a ex sed felis varius finibus. In hac habitasse platea dictumst. Proin et nisl orci. Fusce mauris nulla, feugiat sit amet commodo viverra, posuere sit amet augue. Vestibulum congue ligula nec dolor dapibus scelerisque. Proin enim sem, congue et nibh nec, suscipit cursus ligula.
}

ttk::panedwindow .pw -orient horizontal
pack .pw -in .three -fill both -expand true
ttk::frame .p1
ttk::frame .p2
.pw add .p1
.pw add .p2
ttk::label .pl1 -text {Pane 1}
ttk::label .pl2 -text {Pane 2}
pack .pl1 -in .p1 -anchor nw
pack .pl2 -in .p2 -anchor se

ttk::style configure Treeview \
    -rowheight [expr {[font metrics TkDefaultFont -linespace] + 2}] \
    -fieldbackground [ttk::style lookup TFrame -background] \
    -borderwidth 0 \
    -relief flat
ttk::treeview .tv -columns {a b c}
pack .tv -in .four -fill both -expand true
.tv heading #0 -text #0
.tv heading a -text AAA
.tv heading b -text BBB
.tv heading c -text CCC
set id [.tv insert {} 0 -text {item 0} -values {a b c}]
.tv insert $id 0 -text {subitem 0-1} -values {aa bb cc}
.tv insert $id 1 -text {subitem 0-2} -values {dd ee ff}
.tv insert $id 2 -text {subitem 0-3} -values {gg hh ii}
set id [.tv insert {} 1 -text {item 1} -values {j k l}]
.tv insert $id 0 -text {subitem 1-1} -values {mm nn oo}
.tv insert $id 1 -text {subitem 1-2} -values {pp qq rr}
.tv insert $id 2 -text {subitem 1-3} -values {ss tt uu}
set id [.tv insert {} 2 -text {item 2} -values {v w x}]
.tv insert $id 0 -text {subitem 2-1} -values {y y y}
.tv insert $id 1 -text {subitem 2-2} -values {z z z}
.tv insert $id 2 -text {subitem 2-3} -values {& & &}

ttk::frame .menubar -borderwidth 0 -takefocus 0
pack .menubar -in .five -side top -fill x

ttk::menubutton .menubar.file -text File \
    -underline 0 -menu .menubar_file_m
ttk::menubutton .menubar.edit -text Edit \
    -underline 0 -menu .menubar_edit_m
ttk::menubutton .menubar.dis -text Disabled \
    -underline 0 -menu .menubar_dis_m -state disabled

$menucmd .menubar_file_m -tearoff 0  -font MenuFont {*}$menuargs
.menubar_file_m add command -label "Exit" \
    -underline 1 -command exit
if { [info commands ::ttk::theme::${theme}::setMenuColors] ne {} } {
  ::ttk::theme::${theme}::setMenuColors .menubar_file_m
}

$menucmd .menubar_edit_m -tearoff 0  -font MenuFont {*}$menuargs
.menubar_edit_m add command -label "Cut" \
    -underline 2 \
    -command {puts cut}
.menubar_edit_m add command -label "Copy" \
    -underline 0 \
    -command {puts copy}
.menubar_edit_m add command -label "Paste" \
    -command {puts paste}
if { [info commands ::ttk::theme::${theme}::setMenuColors] ne {} } {
  ::ttk::theme::${theme}::setMenuColors .menubar_edit_m
}

$menucmd .menubar_dis_m -tearoff 0 -font MenuFont {*}$menuargs
.menubar_dis_m add command -label "xyzzy"
.menubar_dis_m add command -label "plugh"
if { [info commands ::ttk::theme::${theme}::setMenuColors] ne {} } {
  ::ttk::theme::${theme}::setMenuColors .menubar_dis_m
}

ttk::button .menubar.tba -text {Toolbutton A} -style Toolbutton
ttk::button .menubar.tbc -text {Toolbutton C} -style Toolbutton -state disabled

pack .menubar.file .menubar.edit .menubar.dis \
    .menubar.tba .menubar.tbc -side left

ttk::scrollbar .sblbox1 -command [list .lbox1 yview]
ttk::scrollbar .sblbox2 -command [list .lbox2 yview]
set ::lbox [list aaa bbb ccc ddd eee fff ggg hhh iii jjj kkk lll mmm nnn ooo ppp qqq rrr sss ttt uuu vvv www xxx yyy zzz]
# change borderwidth to 1 for color testing
listbox .lbox1 \
    -listvariable ::lbox \
    -yscrollcommand [list .sblbox1 set] \
    -borderwidth 0 \
    -highlightthickness 1p \
    -font TextFont \
    -relief sunken
listbox .lbox2 \
    -listvariable ::lbox \
    -yscrollcommand [list .sblbox2 set] \
    -borderwidth 1p \
    -highlightthickness 1p \
    -font TextFont \
    -relief sunken
.lbox2 configure -state disabled

if { [info commands ::ttk::theme::${theme}::setListboxColors] ne {} } {
  ::ttk::theme::${theme}::setListboxColors .lbox1
  ::ttk::theme::${theme}::setListboxColors .lbox2
}
pack .lbox1 -in .six -padx 3p -pady 3p -expand true -fill both -side left
pack .sblbox1 -in .six -padx 0 -pady 3p -fill y -side left
pack .lbox2 -in .six -padx 3p -pady 3p -expand true -fill both -side left
pack .sblbox2 -in .six -padx 0 -pady 3p -fill y -side left

# until released, have this off.
if { 0 && $::tcl_platform(os) eq "Darwin" } {
  # unmute
  set imgdata {
     iVBORw0KGgoAAAANSUhEUgAAABwAAAAZCAYAAAAiwE4nAAAABHNCSVQICAgIfAhkiAAAAAlwSFlz
     AAAbrwAAG68BXhqRHAAAABl0RVh0U29mdHdhcmUAd3d3Lmlua3NjYXBlLm9yZ5vuPBoAAAMoSURB
     VEiJtZVPbFRVFIe/c+97pWClxT8Y40DBaKILQWwloQzNuCBsmpBIajTERKkzICZUmILRjeNGpUxH
     MYHEmaaEEBaGEEQNITGSQt8ILlgZggY2agUTiFCpte28uccFxbCgM9Ox81ve8zvnu+e+c98V/ocS
     Lal5Ou/vLKodBnn582DPyXI5plrYG7FdEZ07OoTqRqDRoWsryfOqgXW171hhQndcYdG94lvaehYW
     Letv/tlw8MiF1OTdsRl3GF+d3Gic+X46GICzEkHJLFgwen5TdPvj1QIlEe1JIXIIqJ/O9Hr7jkXg
     FtvQe0bRMYsNutqSzTMCbo1tbYhHe44qvA9IKa8t8piqZIteMet7Zj1wxYocS8VSHoCXaEn47r75
     EeeK9yzkiddUCPUAsKySzfXnM+e6Vm1/ylj7VSFkQA2dOH78PRzdBmQkHk3+ALKykmJllAnF/9jT
     wiVR3ecX6jKTdeEFRN/GydOIxuvvn1hqZgkGwIGhj64J2qEiWybrCu2gn6jjTau6D3h4/C9/XdX3
     cDplg75ARHYD3b4nB0VYNWmKDYqcRkzHrAMBBPcN0Gbnjt8A+cmoeVbgLNBSE6CO3boEmPFbfjPo
     ZWPME6LusgrNNQFmz2cLgEN9H7iuqg84IzdFaawJ8LVYqh7w1BbHgIdQuS6OOcBETYB1buRJoDDy
     yC+/gjwquGsIEYSrtfmGznsJ+G7+cKQRtNVZOQMsV+XirAMTq3e9ANptkM+sZ14EuXi7U9ainDII
     J2YL9tbKdx9UcV8L8mFBJa8qKeDTxitL1gELi9YdLfkjhtsPrYTuS6CljDWTC9JJgM7OTtt0dckh
     0MW5IN0ejybPCjKcDdIbyh5p/2DvsO+NxYBjZVucUtMfzScQfT407pXEmmQ3yPJQzXtQ4fO0f3D/
     aC5IbxD4ANByfnUyIHNsq+dMq6rsBn1nIN/7c8XAO3WyQTqF6qvAeCljf37PF0y4zcARhL25oG/v
     ndiMpzSX7zvsjGsT+K3k7mCZKptzQ+mdd6+XHZrpNDVMx4Hnppb+G5pSqvoe9g/2Dss/DWsQOQyM
     GOTbSvL+BWexMdZ81ssiAAAAAElFTkSuQmCC
  }
  set img [image create photo -data $imgdata -format png]

  foreach {k} {n d} {
    set s !disabled
    if { $k eq "d" } {
      set s disabled
    }
    ttk::frame .dbf$k

    ttk::button .dbi$k -text unmute -image $img -state $s -style ImageButton
    set layout [ttk::style layout TButton]
    regsub {Button.button} $layout RoundedRectButton.button rrlayout
    ttk::style layout RR.TButton $rrlayout
    ttk::button .dbrr$k -text $theme -state $s -style RR.TButton
    regsub {Button.button} $layout DisclosureButton.button disclayout
    ttk::style layout Disc.TButton $disclayout
    ttk::button .dbdisc$k -state $s -style Disc.TButton
    regsub {Button.button} $layout GradientButton.button glayout
    ttk::style layout Gradient.TButton $glayout
    ttk::button .dbg$k -text $theme -state $s -style Gradient.TButton
    regsub {Button.button} $layout HelpButton.button hlayout
    ttk::style layout Help.TButton $hlayout
    ttk::button .dbhelp$k -state $s -style Help.TButton
    grid .dbi$k .dbrr$k .dbdisc$k .dbg$k .dbhelp$k -in .dbf$k -sticky w -padx 3p -pady 3p
    grid .dbf$k -in .lf$k -sticky ew -padx 3p -pady 3p -columnspan 4
  }
}
