lappend auto_path .

package require tclxpa 2.1

# set rmode "fillbuf=false"
set rmode ""
set imode ""

set smode ""
set sbuf "initial message\n"
set slen  [string length $sbuf]
set schan ""

set n 0

proc DoIt {xpa cdata param buf len} {
    puts [format "entering %s" $cdata]
    tk_messageBox -parent . -type ok -message "$cdata"
    puts [format "exiting  %s" $cdata]
}

proc reccb { xpa client_data paramlist buf len }\
{
  global sbuf slen rmode n
  global sfile sfilebuf schan
  puts " "
  puts [format "Entering receive callback routine %s" $n]
  puts [format "xpa class: %s" [xparec $xpa class]]
  puts [format "xpa name: %s" [xparec $xpa name]]
  puts [format "xpa method: %s" [xparec $xpa method]]
  puts [format "xpa cmdfd: %s" [xparec $xpa cmdfd]]
  puts [format "xpa cmdchan: %s" [xparec $xpa cmdchan]]
  puts [format "xpa datafd: %s" [xparec $xpa datafd]]
  puts [format "xpa datachan: %s" [xparec $xpa datachan]]
  puts [format "xpa sendian: %s" [xparec $xpa sendian]]
  puts [format "xpa cendian: %s" [xparec $xpa cendian]]
  puts [format "client_data: %s" $client_data]
  puts [format "paramlist:   %s" $paramlist]
  incr n
  
  if { $rmode == "fillbuf=false" } {
    set dchan [xparec $xpa datachan]
    fconfigure $dchan -translation binary
    set mybuf [read $dchan]
    set mylen [string length $mybuf]
    puts [format "read %s bytes" $mylen]
    set sbuf $mybuf
    set slen $mylen
    if { $mylen < 512 } {
      puts $mybuf
    } else {
	xpaerror $xpa [format "Jeez! %s is too many bytes" $mylen]
	return -code error
    }
  } else {
    puts [format "entering with %s bytes" $len]
    if { $len < 512 } {
      puts $buf
    }
    set sbuf $buf
    set slen $len
  }
  if { $paramlist == "open" } {
    if { $schan != "" } {
      close $schan
    }
    set sfile [string trimright $sbuf]
    set schan [open $sfile r]
    set sfilebuf [read $schan]
    puts [format "read %d bytes from '%s'" [string length $sfilebuf] $sfile]
  }
}

proc sendcb { xpa client_data paramlist }\
{
  global sbuf slen n
  puts " "
  puts [format "Entering send callback routine %s for %s" $n $xpa]
  puts [format "xpa class: %s" [xparec $xpa class]]
  puts [format "xpa name: %s" [xparec $xpa name]]
  puts [format "xpa method: %s" [xparec $xpa method]]
  puts [format "xpa cmdfd: %s" [xparec $xpa cmdfd]]
  puts [format "xpa cmdchan: %s" [xparec $xpa cmdchan]]
  puts [format "xpa datafd: %s" [xparec $xpa datafd]]
  puts [format "xpa datachan: %s" [xparec $xpa datachan]]
  puts [format "xpa sendian: %s" [xparec $xpa sendian]]
  puts [format "xpa cendian: %s" [xparec $xpa cendian]]
  puts [format "client_data: %s" $client_data]
  puts [format "paramlist: %s" $paramlist]
  incr n

  if { $slen > 0 } {
    puts [format "sending %s bytes of data" $slen]
    xpasetbuf $xpa $sbuf $slen
  } else {
   xpaerror $xpa [format "no data to send from %s\n" $client_data]
   return -code error
  }
}

proc infocb { xpa client_data paramlist }\
{
  puts " "
  puts "Entering info callback routine"
  puts [format "xpa class: %s" [xparec $xpa class]]
  puts [format "xpa name: %s" [xparec $xpa name]]
  puts [format "xpa method: %s" [xparec $xpa method]]
  puts [format "xpa sendian: %s" [xparec $xpa sendian]]
  puts [format "xpa cendian: %s" [xparec $xpa cendian]]
  puts [format "client_data: %s" $client_data]
  puts [format "paramlist: %s" $paramlist]
}

if { [info exists class] == 0 } {
  set class "XPA"
}
puts [format "class: %s" $class]

if { [info exists name] == 0 } {
  set name "xpa"
}
puts [format "name: %s" $name]

if { [info exists initxpa] } {

puts "initializing xpa access points ..."

set xpa  [xpanew [format "%s" $class] [format "%s" $name] "xpa1 help" \
	  sendcb "xpa1" $smode reccb "xpa1" $rmode]
puts [format "xpa=%s" $xpa]

set xpa1 [xpanew [format "%s" $class]  [format "%s1" $name] "xpa1a help" \
	  sendcb "xpa1a" $smode reccb "xpa1a" $rmode]
puts [format "xpa1=%s" $xpa1]

set xpac [xpacmdnew [format "%s" $class] [format "%sc" $name]]
puts [format "xpac=%s" $xpac]

set cmd1 [xpacmdadd $xpac "cmd1" "cmd1 help" \
	  sendcb "xpac/cmd1" $smode reccb "xpac/cmd1" $rmode]
puts [format "cmd1=%s" $cmd1]

set cmd2 [xpacmdadd $xpac "cmd2" "cmd2 help" \
	  sendcb "xpac/cmd2" $smode reccb "xpac/cmd2" $rmode]
puts [format "cmd2=%s" $cmd2]

set cmd3 [xpacmdadd $xpac cmd3 "help cmd 3" "" "" "" DoIt "cmd 3" ""]
puts [format "cmd3=%s" $cmd3]

set cmd4 [xpacmdadd $xpac cmd4 "help cmd 4" "" "" "" DoIt "cmd 4" ""]
puts [format "cmd4=%s" $cmd4]

set xpai [xpainfonew XPA [format "%si" $name] infocb "xpai" $imode]
puts [format "xpai=%s" $xpai]

}

proc getloop { xpa loops } {
  for {set i 0} {$i < $loops} {incr i} {
    set got [xpaget "" $xpa [format "testing xpaget %s" $i] \
	    "" bufs lens names errs 10]
    for {set j 0} {$j < $got} {incr j} {
	set err [lindex $errs $j]
	if { $err != "" } {
	    puts $err
	} else {
	    set buf [lindex $bufs $j]
	    puts [format "return buf %s: %s" $j $buf]
	}
    }
  } 
}

proc setloop { loops } {
  for {set i 0} {$i < $loops} {incr i} {
    set got [xpaset "" "xpa*" [format "testing xpaset %s" $i] \
	    "" "dummy buffer" "" names errs 10]
    puts $names
  } 
}

proc infoloop { loops } {
  for {set i 0} {$i < $loops} {incr i} {
    set got [xpainfo "" "i_xpa" [format "testing xpainfo %s" $i] \
	    "" names errs 10]
    puts $names
  } 
}

if { 0 } {
  set got [xpaget "" "xpa1" "this is a test" "" bufs lens names errs 10]
  puts $got
  puts $lens
  puts $bufs

  set got [xpaset "" "xpa1" "test" "" "this is a test" "" names errs 10]
  puts $got
  puts $errs

  set got [xpainfo "" "i_xpa" "info test" "" names errs 10]
  puts $got
  puts $errs

  set got [xpaaccess "" "xpa*" "" "" names errs 10]
  puts $got
  puts $names
  puts $errs

  set xpa [xpaopen ""]
  set got [xpaset $xpa "xpa1" "test" "" "this is a test" "" names errs 10]
  set got [xpainfo $xpa xpai "info test" "" names errs 10]
  xpaclose $xpa

  set wchan1 [open foo1.log w+]
  set wchan2 [open foo2.log w+]
  set wchans [list $wchan1 $wchan2]
  set got [xpagetfd "" "xpa1" "this is a test" "" $wchans names errs 10]
  set got [xpasetfd "" "xpa1" "this is a test" "" $rchan names errs 10]
  set got [xpanslookup "xpa1" "" classes names methods]
}

proc wsbuf { fname } {
  global sbuf
  set fid [open $fname w 0600]
  puts -nonewline $fid $sbuf
  close $fid
}

set _xpakeepalive 1
proc xpakeepalive { xpa sec {type 0} } {
    global _xpakeepalive
    if { $_xpakeepalive > 0 } {
      puts "sending keepalive ..."
      xpanskeepalive $xpa $type
      after [expr $sec * 1000] xpakeepalive $xpa $sec $type
    }
}

proc katest { host sec {type 0} } {
  global xpa
  xparemote $xpa $host + -proxy
  after [expr $sec * 1000] xpakeepalive $xpa $sec $type
}

if { 0 } {
  puts "You can now execute:"
  puts " "
  puts "    katest bynars.harvard.edu:28571 60"
  puts "    (if this is tclsh, you need to run vwait)"
  # katest bynars.harvard.edu:28571 60
  puts " "
  puts "or:"
  puts " "
  puts "    xparemote $xpa bynars.harvard.edu:28571 + -proxy"
  puts " "
  # xparemote $xpa bynars.harvard.edu:28571 + -proxy
}

# vwait forever


