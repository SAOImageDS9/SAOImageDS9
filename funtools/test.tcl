lappend auto_path .

package require tclfun 1.0

# xx "cir(512,512,.1)"
# xx "cir(512,512,.1)&&pha==5"
# no spaces or else the quoting is a nightmare
proc xx { reg } {
    set buf [fundisp "/home/eric/data/snr.ev\[$reg\]"]
    puts "and the answer is ..."
    puts $buf
}

