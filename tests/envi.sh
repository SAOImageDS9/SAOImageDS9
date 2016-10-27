StartDS9 () {
    if [ `xpaaccess ds9` = no ]; then
	ds9 &

	i=1
	while [ "$i" -le 30 ]
	    do
	    sleep 2
	    if [ `xpaaccess ds9` = yes ]; then
		break
	    fi

	    i=`expr $i + 1`
	done
    fi
}

# which/where/what
where=envi

ext=bsq

what=envi

save=export

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** ENVI ***"

# Command Line
if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command Line File"

for f in $where/*.$ext
do 
    echo " ${f#$where/} 1"
    opt="-$what ${f%.$ext}.hdr -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    ds9 $opt -exit

    echo " ${f#$where/} 2"
    opt="-$what ${f%.$ext}.hdr $f -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    ds9 $opt -exit
done
echo "PASSED"
fi

# Save
if [ "$1" = "$save" -o -z "$1" ]; then
echo "Testing Command $save"

for f in $where/*.$ext
do 
    echo " ${f#$where/} 1"
    opt="-tile -$what ${f%.$ext}.hdr $f"
    opt="$opt -$save $what foo.hdr"
    opt="$opt -frame new -$what foo.hdr -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    opt="$opt -frame delete"
    ds9 $opt -exit

    echo " ${f#$where/} 2"
    opt="-tile -$what ${f%.$ext}.hdr $f"
    opt="$opt -$save $what foo.hdr foo.bsq"
    opt="$opt -frame new -$what foo.hdr foo.bsq -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    opt="$opt -frame delete"
    ds9 $opt -exit
done

echo "PASSED"
fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

for f in $where/*.$ext 
do 
    echo " ${f#$where/} 1"
    xpaset -p ds9 $what ${f%.$ext}.hdr
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear

    echo " ${f#$where/} 2"
    xpaset -p ds9 $what ${f%.$ext}.hdr $f
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
done

xpaset -p ds9 quit
echo "PASSED"
fi

rm -f foo.*
echo "DONE"
