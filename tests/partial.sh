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
which=$1
shift

where=$1
shift

ext=$1
shift

what=$1
shift

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
    opt="-$what $f -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    ds9 $opt -exit
done

echo "PASSED"
fi

# Stdin
if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Stdin File"

for f in $where/*.$ext
do 
    echo " ${f#$where/}"
    opt="-$what - -sleep .1"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi 
    cat $f | ds9 $opt -exit
done

echo "PASSED"
fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

for f in $where/*.$ext 
do 
    echo " ${f#$where/}"
    xpaset -p ds9 $what $f
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
done

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdin
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9

for f in $where/*.$ext 
do 
    echo " ${f#$where/}"
    cat $f | xpaset ds9 $what
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
done

xpaset -p ds9 quit
echo "PASSED"
fi

echo "DONE"
