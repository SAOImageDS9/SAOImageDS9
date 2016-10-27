KillIt () {
    i=1
    while [ "$i" -le 15 ]; do
      sleep 1
      if [ `xpaaccess ds9` = yes ]; then
	  if [ $slow = "1" ]; then
	      sleep 1
	  fi
	  xpaset -p ds9 quit
	  break
      fi
      
      i=`expr $i + 1`
    done
}

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

# which/where
which=Multiframe
where=mecube
ext=fits
what=multiframe

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** $which ***"

# Command Line
if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command Line File"

for f in $where/*.$ext
do 
    echo " ${f#$where/}"
    ds9 -$what $f &
    KillIt
done

echo "PASSED"
fi

# Stdin
if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Stdin File"

for f in $where/*.$ext
do 
    echo " ${f#$where/}"
    cat $f | ds9 -$what - &
    KillIt
done

echo "PASSED"
fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9
xpaset -p ds9 frame delete all

for f in $where/*.$ext
do 
    echo " ${f#$where/}"
    xpaset -p ds9 $what $f
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame delete all
done

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdin
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9
xpaset -p ds9 frame delete all

for f in $where/*.$ext
do 
    echo " ${f#$where/}"
    cat $f | xpaset ds9 $what
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame delete all
done

xpaset -p ds9 quit
echo "PASSED"
fi

echo "DONE"
