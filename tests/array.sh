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

DoXPA () {
    echo "$1"
    xpaset -p ds9 array $2
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
}

DoXPAStdin () {
    echo "$1"
    cat $2 | xpaset ds9 array $3
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
}

DoXPAStdout () {
    echo "$1"
    xpaset -p ds9 tile
    xpaset -p ds9 array $2
    xpaget ds9 array $3 > foo.arr
    xpaset -p ds9 frame new
    xpaset -p ds9 array foo.arr$4
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame delete
    xpaset -p ds9 frame clear
}

initit () {
    echo "Testing $1"
    unset opt
}

testit () {
    opt="$opt -export array foo.arr $1 -sleep .1"
    opt="$opt -frame new -array foo.arr$2"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi
    opt="$opt -frame delete -sleep .1"
}

doit () {
    eval ds9 -tile -array $1 "$opt" -exit
    echo "PASSED"
}

StartDS9 () {
    if [ `xpaaccess ds9` = no ]; then
	ds9&

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

# slow down?
slow=0
if [ "$1" = "slow" ]; then
    slow=1
    shift
fi

echo
echo "*** array.sh ***"

# Command Line

if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command File"

echo ".. char"
ds9 -array array/char.arr[dim=256,bitpix=8] &
KillIt

echo ".. char gzip"
ds9 -array array/char.arr.gz[dim=256,bitpix=8] &
KillIt

echo ".. short little"
ds9 -array array/short_little.arr[dim=256,bitpix=16,arch=little] &
KillIt

echo ".. short little gzip"
ds9 -array array/short_little.arr.gz[dim=256,bitpix=16,arch=little] &
KillIt

echo ".. short big"
ds9 -array array/short_big.arr[dim=256,bitpix=16,arch=big] &
KillIt

echo ".. short big gzip"
ds9 -array array/short_big.arr.gz[dim=256,bitpix=16,arch=big] &
KillIt

echo ".. ushort little"
ds9 -array array/ushort_little.arr[dim=256,bitpix=-16,arch=little] &
KillIt

echo ".. ushort little gzip"
ds9 -array array/ushort_little.arr.gz[dim=256,bitpix=-16,arch=little] &
KillIt

echo ".. ushort big"
ds9 -array array/ushort_big.arr[dim=256,bitpix=-16,arch=big] &
KillIt

echo ".. ushort big gzip"
ds9 -array array/ushort_big.arr.gz[dim=256,bitpix=-16,arch=big] &
KillIt

echo ".. int little"
ds9 -array array/int_little.arr[dim=256,bitpix=32,arch=little] &
KillIt

echo ".. int little gzip"
ds9 -array array/int_little.arr.gz[dim=256,bitpix=32,arch=little] &
KillIt

echo ".. int big"
ds9 -array array/int_big.arr[dim=256,bitpix=32,arch=big] &
KillIt

echo ".. int big gzip"
ds9 -array array/int_big.arr.gz[dim=256,bitpix=32,arch=big] &
KillIt

echo ".. longlong little"
ds9 -array array/longlong_little.arr[dim=256,bitpix=64,arch=little] &
KillIt

echo ".. longlong little gzip"
ds9 -array array/longlong_little.arr.gz[dim=256,bitpix=64,arch=little] &
KillIt

echo ".. longlong big"
ds9 -array array/longlong_big.arr[dim=256,bitpix=64,arch=big] &
KillIt

echo ".. longlong big gzip"
ds9 -array array/longlong_big.arr.gz[dim=256,bitpix=64,arch=big] &
KillIt

echo ".. float little"
ds9 -array array/float_little.arr[dim=256,bitpix=-32,arch=little] &
KillIt

echo ".. float little gzip"
ds9 -array array/float_little.arr.gz[dim=256,bitpix=-32,arch=little] &
KillIt

echo ".. float big"
ds9 -array array/float_big.arr[dim=256,bitpix=-32,arch=big] &
KillIt

echo ".. float big gzip"
ds9 -array array/float_big.arr.gz[dim=256,bitpix=-32,arch=big] &
KillIt

echo ".. double little"
ds9 -array array/double_little.arr[dim=256,bitpix=-64,arch=little] &
KillIt

echo ".. double little gzip"
ds9 -array array/double_little.arr.gz[dim=256,bitpix=-64,arch=little] &
KillIt

echo ".. double big"
ds9 -array array/double_big.arr[dim=256,bitpix=-64,arch=big] &
KillIt

echo ".. double big gzip"
ds9 -array array/double_big.arr.gz[dim=256,bitpix=-64,arch=big] &
KillIt

echo "PASSED"
fi

# Stdin

if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Command Stdin"

echo ".. char"
cat array/char.arr | ds9 -array -[dim=256,bitpix=8] &
KillIt

echo ".. char gzip"
cat array/char.arr.gz | ds9 -array -[dim=256,bitpix=8] &
KillIt

echo ".. short little"
cat array/short_little.arr | ds9 -array -[dim=256,bitpix=16,arch=little] &
KillIt

echo ".. short little gzip"
cat array/short_little.arr.gz | ds9 -array -[dim=256,bitpix=16,arch=little] &
KillIt

echo ".. short big"
cat array/short_big.arr | ds9 -array -[dim=256,bitpix=16,arch=big] &
KillIt

echo ".. short big gzip"
cat array/short_big.arr.gz | ds9 -array -[dim=256,bitpix=16,arch=big] &
KillIt

echo ".. ushort little"
cat array/ushort_little.arr | ds9 -array -[dim=256,bitpix=-16,arch=little] &
KillIt

echo ".. ushort little gzip"
cat array/ushort_little.arr.gz | ds9 -array -[dim=256,bitpix=-16,arch=little] &
KillIt

echo ".. ushort big"
cat array/ushort_big.arr | ds9 -array -[dim=256,bitpix=-16,arch=big] &
KillIt

echo ".. ushort big gzip"
cat array/ushort_big.arr.gz | ds9 -array -[dim=256,bitpix=-16,arch=big] &
KillIt

echo ".. int little"
cat array/int_little.arr | ds9 -array -[dim=256,bitpix=32,arch=little] &
KillIt

echo ".. int little gzip"
cat array/int_little.arr.gz | ds9 -array -[dim=256,bitpix=32,arch=little] &
KillIt

echo ".. int big"
cat array/int_big.arr | ds9 -array -[dim=256,bitpix=32,arch=big] &
KillIt

echo ".. int big gzip"
cat array/int_big.arr.gz | ds9 -array -[dim=256,bitpix=32,arch=big] &
KillIt

echo ".. longlong little"
cat array/longlong_little.arr | ds9 -array -[dim=256,bitpix=64,arch=little] &
KillIt

echo ".. longlong little gzip"
cat array/longlong_little.arr.gz | ds9 -array -[dim=256,bitpix=64,arch=little] &
KillIt

echo ".. longlong big"
cat array/longlong_big.arr | ds9 -array -[dim=256,bitpix=64,arch=big] &
KillIt

echo ".. longlong big gzip"
cat array/longlong_big.arr.gz | ds9 -array -[dim=256,bitpix=64,arch=big] &
KillIt

echo ".. float little"
cat array/float_little.arr | ds9 -array -[dim=256,bitpix=-32,arch=little] &
KillIt

echo ".. float little gzip"
cat array/float_little.arr.gz | ds9 -array -[dim=256,bitpix=-32,arch=little] &
KillIt

echo ".. float big"
cat array/float_big.arr | ds9 -array -[dim=256,bitpix=-32,arch=big] &
KillIt

echo ".. float big gzip"
cat array/float_big.arr.gz | ds9 -array -[dim=256,bitpix=-32,arch=big] &
KillIt

echo ".. double little"
cat array/double_little.arr | ds9 -array -[dim=256,bitpix=-64,arch=little] &
KillIt

echo ".. double little gzip"
cat array/double_little.arr.gz | ds9 -array -[dim=256,bitpix=-64,arch=little] &
KillIt

echo ".. double big"
cat array/double_big.arr | ds9 -array -[dim=256,bitpix=-64,arch=big] &
KillIt

echo ".. double big gzip"
cat array/double_big.arr.gz | ds9 -array -[dim=256,bitpix=-64,arch=big] &
KillIt

echo "PASSED"
fi

# export

if [ "$1" = "export" -o -z "$1" ]; then
echo "Testing Command export"

initit ".. char"
testit little [dim=256,bitpix=8]
doit array/char.arr[dim=256,bitpix=8]

initit ".. short little little" 
testit little [dim=256,bitpix=16,arch=little]
doit array/short_little.arr[dim=256,bitpix=16,arch=little]
initit ".. short little big" 
testit big [dim=256,bitpix=16,arch=big]
doit array/short_little.arr[dim=256,bitpix=16,arch=little]

initit ".. short big little" 
testit little [dim=256,bitpix=16,arch=little]
doit array/short_big.arr[dim=256,bitpix=16,arch=big]
initit ".. short big big" 
testit big [dim=256,bitpix=16,arch=big]
doit array/short_big.arr[dim=256,bitpix=16,arch=big]

initit ".. ushort little little" 
testit little [dim=256,bitpix=-16,arch=little]
doit array/ushort_little.arr[dim=256,bitpix=-16,arch=little]
initit ".. ushort little big" 
testit big [dim=256,bitpix=-16,arch=big]
doit array/ushort_little.arr[dim=256,bitpix=-16,arch=little]

initit ".. ushort big little" 
testit little [dim=256,bitpix=-16,arch=little]
doit array/ushort_big.arr[dim=256,bitpix=-16,arch=big]
initit ".. ushort big big" 
testit big [dim=256,bitpix=-16,arch=big]
doit array/ushort_big.arr[dim=256,bitpix=-16,arch=big]

initit ".. int little little" 
testit little [dim=256,bitpix=32,arch=little]
doit array/int_little.arr[dim=256,bitpix=32,arch=little]
initit ".. int little big" 
testit big [dim=256,bitpix=32,arch=big]
doit array/int_little.arr[dim=256,bitpix=32,arch=little]

initit ".. int big little" 
testit little [dim=256,bitpix=32,arch=little]
doit array/int_big.arr[dim=256,bitpix=32,arch=big]
initit ".. int big big" 
testit big [dim=256,bitpix=32,arch=big]
doit array/int_big.arr[dim=256,bitpix=32,arch=big]

initit ".. longlong little little" 
testit little [dim=256,bitpix=64,arch=little]
doit array/longlong_little.arr[dim=256,bitpix=64,arch=little]
initit ".. longlong little big" 
testit big [dim=256,bitpix=64,arch=big]
doit array/longlong_little.arr[dim=256,bitpix=64,arch=little]

initit ".. longlong big little" 
testit little [dim=256,bitpix=64,arch=little]
doit array/longlong_big.arr[dim=256,bitpix=64,arch=big]
initit ".. longlong big big" 
testit big [dim=256,bitpix=64,arch=big]
doit array/longlong_big.arr[dim=256,bitpix=64,arch=big]

initit ".. float little little" 
testit little [dim=256,bitpix=-32,arch=little]
doit array/float_little.arr[dim=256,bitpix=-32,arch=little]
initit ".. float little big" 
testit big [dim=256,bitpix=-32,arch=big]
doit array/float_little.arr[dim=256,bitpix=-32,arch=little]

initit ".. float big little" 
testit little [dim=256,bitpix=-32,arch=little]
doit array/float_big.arr[dim=256,bitpix=-32,arch=big]
initit ".. float big big" 
testit big [dim=256,bitpix=-32,arch=big]
doit array/float_big.arr[dim=256,bitpix=-32,arch=big]

initit ".. double little little" 
testit little [dim=256,bitpix=-64,arch=little]
doit array/double_little.arr[dim=256,bitpix=-64,arch=little]
initit ".. double little big" 
testit big [dim=256,bitpix=-64,arch=big]
doit array/double_little.arr[dim=256,bitpix=-64,arch=little]

initit ".. double big little" 
testit little [dim=256,bitpix=-64,arch=little]
doit array/double_big.arr[dim=256,bitpix=-64,arch=big]
initit ".. double big big" 
testit big [dim=256,bitpix=-64,arch=big]
doit array/double_big.arr[dim=256,bitpix=-64,arch=big]

fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

DoXPA ".. char" array/char.arr[dim=256,bitpix=8]
DoXPA ".. char gzip" array/char.arr.gz[dim=256,bitpix=8]
DoXPA ".. short little" array/short_little.arr[dim=256,bitpix=16,arch=little]
DoXPA ".. short little gzip" array/short_little.arr.gz[dim=256,bitpix=16,arch=little]
DoXPA ".. short big" array/short_big.arr[dim=256,bitpix=16,arch=big]
DoXPA ".. short big gzip" array/short_big.arr.gz[dim=256,bitpix=16,arch=big]
DoXPA ".. ushort little" array/ushort_little.arr[dim=256,bitpix=-16,arch=little]
DoXPA ".. ushort little gzip" array/ushort_little.arr.gz[dim=256,bitpix=-16,arch=little]
DoXPA ".. ushort big" array/ushort_big.arr[dim=256,bitpix=-16,arch=big]
DoXPA ".. ushort big gzip" array/ushort_big.arr.gz[dim=256,bitpix=-16,arch=big]
DoXPA ".. int little" array/int_little.arr[dim=256,bitpix=32,arch=little]
DoXPA ".. int little gzip" array/int_little.arr.gz[dim=256,bitpix=32,arch=little]
DoXPA ".. int big" array/int_big.arr[dim=256,bitpix=32,arch=big]
DoXPA ".. int big gzip" array/int_big.arr.gz[dim=256,bitpix=32,arch=big]
DoXPA ".. longlong little" array/longlong_little.arr[dim=256,bitpix=64,arch=little]
DoXPA ".. longlong little gzip" array/longlong_little.arr.gz[dim=256,bitpix=64,arch=little]
DoXPA ".. longlong big" array/longlong_big.arr[dim=256,bitpix=64,arch=big]
DoXPA ".. longlong big gzip" array/longlong_big.arr.gz[dim=256,bitpix=64,arch=big]
DoXPA ".. float little" array/float_little.arr[dim=256,bitpix=-32,arch=little]
DoXPA ".. float little gzip" array/float_little.arr.gz[dim=256,bitpix=-32,arch=little]
DoXPA ".. float big" array/float_big.arr[dim=256,bitpix=-32,arch=big]
DoXPA ".. float big gzip" array/float_big.arr.gz[dim=256,bitpix=-32,arch=big]
DoXPA ".. double little" array/double_little.arr[dim=256,bitpix=-64,arch=little]
DoXPA ".. double little gzip" array/double_little.arr.gz[dim=256,bitpix=-64,arch=little]
DoXPA ".. double big" array/double_big.arr[dim=256,bitpix=-64,arch=big]
DoXPA ".. double big gzip" array/double_big.arr.gz[dim=256,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9

DoXPAStdin ".. char" array/char.arr [dim=256,bitpix=8]
DoXPAStdin ".. char gzip" array/char.arr.gz [dim=256,bitpix=8]
DoXPAStdin ".. short little" array/short_little.arr [dim=256,bitpix=16,arch=little]
DoXPAStdin ".. short little gzip" array/short_little.arr.gz [dim=256,bitpix=16,arch=little]
DoXPAStdin ".. short big" array/short_big.arr [dim=256,bitpix=16,arch=big]
DoXPAStdin ".. short big gzip" array/short_big.arr.gz [dim=256,bitpix=16,arch=big]
DoXPAStdin ".. ushort little" array/ushort_little.arr [dim=256,bitpix=-16,arch=little]
DoXPAStdin ".. ushort little gzip" array/ushort_little.arr.gz [dim=256,bitpix=-16,arch=little]
DoXPAStdin ".. ushort big" array/ushort_big.arr [dim=256,bitpix=-16,arch=big]
DoXPAStdin ".. ushort big gzip" array/ushort_big.arr.gz [dim=256,bitpix=-16,arch=big]
DoXPAStdin ".. int little" array/int_little.arr [dim=256,bitpix=32,arch=little]
DoXPAStdin ".. int little gzip" array/int_little.arr.gz [dim=256,bitpix=32,arch=little]
DoXPAStdin ".. int big" array/int_big.arr [dim=256,bitpix=32,arch=big]
DoXPAStdin ".. int big gzip" array/int_big.arr.gz [dim=256,bitpix=32,arch=big]
DoXPAStdin ".. longlong little" array/longlong_little.arr [dim=256,bitpix=64,arch=little]
DoXPAStdin ".. longlong little gzip" array/longlong_little.arr.gz [dim=256,bitpix=64,arch=little]
DoXPAStdin ".. longlong big" array/longlong_big.arr [dim=256,bitpix=64,arch=big]
DoXPAStdin ".. longlong big gzip" array/longlong_big.arr.gz [dim=256,bitpix=64,arch=big]
DoXPAStdin ".. float little" array/float_little.arr [dim=256,bitpix=-32,arch=little]
DoXPAStdin ".. float little gzip" array/float_little.arr.gz [dim=256,bitpix=-32,arch=little]
DoXPAStdin ".. float big" array/float_big.arr [dim=256,bitpix=-32,arch=big]
DoXPAStdin ".. float big gzip" array/float_big.arr.gz [dim=256,bitpix=-32,arch=big]
DoXPAStdin ".. double little" array/double_little.arr [dim=256,bitpix=-64,arch=little]
DoXPAStdin ".. double little gzip" array/double_little.arr.gz [dim=256,bitpix=-64,arch=little]
DoXPAStdin ".. double big" array/double_big.arr [dim=256,bitpix=-64,arch=big]
DoXPAStdin ".. double big gzip" array/double_big.arr.gz [dim=256,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdout
if [ "$1" = "xpastdout" -o  -z "$1" ]; then
echo "Testing XPA Stdout"

StartDS9

DoXPAStdout ".. char" array/char.arr[dim=256,bitpix=8] little [dim=256,bitpix=8]
DoXPAStdout ".. short little little" array/short_little.arr[dim=256,bitpix=16,arch=little] little [dim=256,bitpix=16,arch=little]
DoXPAStdout ".. short little big" array/short_little.arr[dim=256,bitpix=16,arch=little] big [dim=256,bitpix=16,arch=big]
DoXPAStdout ".. short big little" array/short_big.arr[dim=256,bitpix=16,arch=big] little [dim=256,bitpix=16,arch=little]
DoXPAStdout ".. short big big" array/short_big.arr[dim=256,bitpix=16,arch=big] big [dim=256,bitpix=16,arch=big]
DoXPAStdout ".. ushort little little" array/ushort_little.arr[dim=256,bitpix=-16,arch=little] little [dim=256,bitpix=-16,arch=little]
DoXPAStdout ".. ushort little big" array/ushort_little.arr[dim=256,bitpix=-16,arch=little] big [dim=256,bitpix=-16,arch=big]
DoXPAStdout ".. ushort big little" array/ushort_big.arr[dim=256,bitpix=-16,arch=big] little [dim=256,bitpix=-16,arch=little]
DoXPAStdout ".. ushort big big" array/ushort_big.arr[dim=256,bitpix=-16,arch=big] big [dim=256,bitpix=-16,arch=big]
DoXPAStdout ".. int little little" array/int_little.arr[dim=256,bitpix=32,arch=little] little [dim=256,bitpix=32,arch=little]
DoXPAStdout ".. int little big" array/int_little.arr[dim=256,bitpix=32,arch=little] big [dim=256,bitpix=32,arch=big]
DoXPAStdout ".. int big little" array/int_big.arr[dim=256,bitpix=32,arch=big] little [dim=256,bitpix=32,arch=little]
DoXPAStdout ".. int big big" array/int_big.arr[dim=256,bitpix=32,arch=big] big [dim=256,bitpix=32,arch=big]
DoXPAStdout ".. longlong little little" array/longlong_little.arr[dim=256,bitpix=64,arch=little] little [dim=256,bitpix=64,arch=little]
DoXPAStdout ".. longlong little big" array/longlong_little.arr[dim=256,bitpix=64,arch=little] big [dim=256,bitpix=64,arch=big]
DoXPAStdout ".. longlong big little" array/longlong_big.arr[dim=256,bitpix=64,arch=big] little [dim=256,bitpix=64,arch=little]
DoXPAStdout ".. longlong big big" array/longlong_big.arr[dim=256,bitpix=64,arch=big] big [dim=256,bitpix=64,arch=big]
DoXPAStdout ".. float little little" array/float_little.arr[dim=256,bitpix=-32,arch=little] little [dim=256,bitpix=-32,arch=little]
DoXPAStdout ".. float little big" array/float_little.arr[dim=256,bitpix=-32,arch=little] big [dim=256,bitpix=-32,arch=big]
DoXPAStdout ".. float big little" array/float_big.arr[dim=256,bitpix=-32,arch=big] little [dim=256,bitpix=-32,arch=little]
DoXPAStdout ".. float big big" array/float_big.arr[dim=256,bitpix=-32,arch=big] big [dim=256,bitpix=-32,arch=big]
DoXPAStdout ".. double little little" array/double_little.arr[dim=256,bitpix=-64,arch=little] little [dim=256,bitpix=-64,arch=little]
DoXPAStdout ".. double little big" array/double_little.arr[dim=256,bitpix=-64,arch=little] big [dim=256,bitpix=-64,arch=big]
DoXPAStdout ".. double big little" array/double_big.arr[dim=256,bitpix=-64,arch=big] little [dim=256,bitpix=-64,arch=little]
DoXPAStdout ".. double big big" array/double_big.arr[dim=256,bitpix=-64,arch=big] big [dim=256,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

rm -f foo.*
echo "DONE"
