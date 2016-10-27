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
echo "*** cubearray.sh ***"

# Command Line

if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command File"

echo ".. char"
ds9 -array rgbarray/char.rgb[dim=256,zdim=3,bitpix=8] &
KillIt

echo ".. char gzip"
ds9 -array rgbarray/char.rgb.gz[dim=256,zdim=3,bitpix=8] &
KillIt

echo ".. short little"
ds9 -array rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little] &
KillIt

echo ".. short little gzip"
ds9 -array rgbarray/short_little.rgb.gz[dim=256,zdim=3,bitpix=16,arch=little] &
KillIt

echo ".. short big"
ds9 -array rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big] &
KillIt

echo ".. short big gzip"
ds9 -array rgbarray/short_big.rgb.gz[dim=256,zdim=3,bitpix=16,arch=big] &
KillIt

echo ".. ushort little"
ds9 -array rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little] &
KillIt

echo ".. ushort little gzip"
ds9 -array rgbarray/ushort_little.rgb.gz[dim=256,zdim=3,bitpix=-16,arch=little] &
KillIt

echo ".. ushort big"
ds9 -array rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big] &
KillIt

echo ".. ushort big gzip"
ds9 -array rgbarray/ushort_big.rgb.gz[dim=256,zdim=3,bitpix=-16,arch=big] &
KillIt

echo ".. int little"
ds9 -array rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little] &
KillIt

echo ".. int little gzip"
ds9 -array rgbarray/int_little.rgb.gz[dim=256,zdim=3,bitpix=32,arch=little] &
KillIt

echo ".. int big"
ds9 -array rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big] &
KillIt

echo ".. int big gzip"
ds9 -array rgbarray/int_big.rgb.gz[dim=256,zdim=3,bitpix=32,arch=big] &
KillIt

echo ".. longlong little"
ds9 -array rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little] &
KillIt

echo ".. longlong little gzip"
ds9 -array rgbarray/longlong_little.rgb.gz[dim=256,zdim=3,bitpix=64,arch=little] &
KillIt

echo ".. longlong big"
ds9 -array rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big] &
KillIt

echo ".. longlong big gzip"
ds9 -array rgbarray/longlong_big.rgb.gz[dim=256,zdim=3,bitpix=64,arch=big] &
KillIt

echo ".. float little"
ds9 -array rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little] &
KillIt

echo ".. float little gzip"
ds9 -array rgbarray/float_little.rgb.gz[dim=256,zdim=3,bitpix=-32,arch=little] &
KillIt

echo ".. float big"
ds9 -array rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big] &
KillIt

echo ".. float big gzip"
ds9 -array rgbarray/float_big.rgb.gz[dim=256,zdim=3,bitpix=-32,arch=big] &
KillIt

echo ".. double little"
ds9 -array rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little] &
KillIt

echo ".. double little gzip"
ds9 -array rgbarray/double_little.rgb.gz[dim=256,zdim=3,bitpix=-64,arch=little] &
KillIt

echo ".. double big"
ds9 -array rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big] &
KillIt

echo ".. double big gzip"
ds9 -array rgbarray/double_big.rgb.gz[dim=256,zdim=3,bitpix=-64,arch=big] &
KillIt

echo "PASSED"
fi

# Stdin

if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Command Stdin"

echo ".. char"
cat rgbarray/char.rgb | ds9 -array -[dim=256,zdim=3,bitpix=8] &
KillIt

echo ".. char gzip"
cat rgbarray/char.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=8] &
KillIt

echo ".. short little"
cat rgbarray/short_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=16,arch=little] &
KillIt

echo ".. short little gzip"
cat rgbarray/short_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=16,arch=little] &
KillIt

echo ".. short big"
cat rgbarray/short_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=16,arch=big] &
KillIt

echo ".. short big gzip"
cat rgbarray/short_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=16,arch=big] &
KillIt

echo ".. ushort little"
cat rgbarray/ushort_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-16,arch=little] &
KillIt

echo ".. ushort little gzip"
cat rgbarray/ushort_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-16,arch=little] &
KillIt

echo ".. ushort big"
cat rgbarray/ushort_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-16,arch=big] &
KillIt

echo ".. ushort big gzip"
cat rgbarray/ushort_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-16,arch=big] &
KillIt

echo ".. int little"
cat rgbarray/int_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=32,arch=little] &
KillIt

echo ".. int little gzip"
cat rgbarray/int_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=32,arch=little] &
KillIt

echo ".. int big"
cat rgbarray/int_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=32,arch=big] &
KillIt

echo ".. int big gzip"
cat rgbarray/int_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=32,arch=big] &
KillIt

echo ".. longlong little"
cat rgbarray/longlong_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=64,arch=little] &
KillIt

echo ".. longlong little gzip"
cat rgbarray/longlong_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=64,arch=little] &
KillIt

echo ".. longlong big"
cat rgbarray/longlong_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=64,arch=big] &
KillIt

echo ".. longlong big gzip"
cat rgbarray/longlong_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=64,arch=big] &
KillIt

echo ".. float little"
cat rgbarray/float_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-32,arch=little] &
KillIt

echo ".. float little gzip"
cat rgbarray/float_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-32,arch=little] &
KillIt

echo ".. float big"
cat rgbarray/float_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-32,arch=big] &
KillIt

echo ".. float big gzip"
cat rgbarray/float_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-32,arch=big] &
KillIt

echo ".. double little"
cat rgbarray/double_little.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-64,arch=little] &
KillIt

echo ".. double little gzip"
cat rgbarray/double_little.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-64,arch=little] &
KillIt

echo ".. double big"
cat rgbarray/double_big.rgb | ds9 -array -[dim=256,zdim=3,bitpix=-64,arch=big] &
KillIt

echo ".. double big gzip"
cat rgbarray/double_big.rgb.gz | ds9 -array -[dim=256,zdim=3,bitpix=-64,arch=big] &
KillIt

echo "PASSED"
fi

# export

if [ "$1" = "export" -o -z "$1" ]; then
echo "Testing Command export"

initit ".. char"
testit little [dim=256,zdim=3,bitpix=8]
doit rgbarray/char.rgb[dim=256,zdim=3,bitpix=8]

initit ".. short little little" 
testit little [dim=256,zdim=3,bitpix=16,arch=little]
doit rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little]
initit ".. short little big" 
testit big [dim=256,zdim=3,bitpix=16,arch=big]
doit rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little]

initit ".. short big little" 
testit little [dim=256,zdim=3,bitpix=16,arch=little]
doit rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big]
initit ".. short big big" 
testit big [dim=256,zdim=3,bitpix=16,arch=big]
doit rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big]

initit ".. ushort little little" 
testit little [dim=256,zdim=3,bitpix=-16,arch=little]
doit rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little]
initit ".. ushort little big" 
testit big [dim=256,zdim=3,bitpix=-16,arch=big]
doit rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little]

initit ".. ushort big little" 
testit little [dim=256,zdim=3,bitpix=-16,arch=little]
doit rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big]
initit ".. ushort big big" 
testit big [dim=256,zdim=3,bitpix=-16,arch=big]
doit rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big]

initit ".. int little little" 
testit little [dim=256,zdim=3,bitpix=32,arch=little]
doit rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little]
initit ".. int little big" 
testit big [dim=256,zdim=3,bitpix=32,arch=big]
doit rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little]

initit ".. int big little" 
testit little [dim=256,zdim=3,bitpix=32,arch=little]
doit rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big]
initit ".. int big big" 
testit big [dim=256,zdim=3,bitpix=32,arch=big]
doit rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big]

initit ".. longlong little little" 
testit little [dim=256,zdim=3,bitpix=64,arch=little]
doit rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little]
initit ".. longlong little big" 
testit big [dim=256,zdim=3,bitpix=64,arch=big]
doit rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little]

initit ".. longlong big little" 
testit little [dim=256,zdim=3,bitpix=64,arch=little]
doit rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big]
initit ".. longlong big big" 
testit big [dim=256,zdim=3,bitpix=64,arch=big]
doit rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big]

initit ".. float little little" 
testit little [dim=256,zdim=3,bitpix=-32,arch=little]
doit rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little]
initit ".. float little big" 
testit big [dim=256,zdim=3,bitpix=-32,arch=big]
doit rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little]

initit ".. float big little" 
testit little [dim=256,zdim=3,bitpix=-32,arch=little]
doit rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big]
initit ".. float big big" 
testit big [dim=256,zdim=3,bitpix=-32,arch=big]
doit rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big]

initit ".. double little little" 
testit little [dim=256,zdim=3,bitpix=-64,arch=little]
doit rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little]
initit ".. double little big" 
testit big [dim=256,zdim=3,bitpix=-64,arch=big]
doit rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little]

initit ".. double big little" 
testit little [dim=256,zdim=3,bitpix=-64,arch=little]
doit rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big]
initit ".. double big big" 
testit big [dim=256,zdim=3,bitpix=-64,arch=big]
doit rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big]

fi

# XPA
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

DoXPA ".. char" rgbarray/char.rgb[dim=256,zdim=3,bitpix=8]
DoXPA ".. char gzip" rgbarray/char.rgb.gz[dim=256,zdim=3,bitpix=8]
DoXPA ".. short little" rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little]
DoXPA ".. short little gzip" rgbarray/short_little.rgb.gz[dim=256,zdim=3,bitpix=16,arch=little]
DoXPA ".. short big" rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big]
DoXPA ".. short big gzip" rgbarray/short_big.rgb.gz[dim=256,zdim=3,bitpix=16,arch=big]
DoXPA ".. ushort little" rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little]
DoXPA ".. ushort little gzip" rgbarray/ushort_little.rgb.gz[dim=256,zdim=3,bitpix=-16,arch=little]
DoXPA ".. ushort big" rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big]
DoXPA ".. ushort big gzip" rgbarray/ushort_big.rgb.gz[dim=256,zdim=3,bitpix=-16,arch=big]
DoXPA ".. int little" rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little]
DoXPA ".. int little gzip" rgbarray/int_little.rgb.gz[dim=256,zdim=3,bitpix=32,arch=little]
DoXPA ".. int big" rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big]
DoXPA ".. int big gzip" rgbarray/int_big.rgb.gz[dim=256,zdim=3,bitpix=32,arch=big]
DoXPA ".. longlong little" rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little]
DoXPA ".. longlong little gzip" rgbarray/longlong_little.rgb.gz[dim=256,zdim=3,bitpix=64,arch=little]
DoXPA ".. longlong big" rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big]
DoXPA ".. longlong big gzip" rgbarray/longlong_big.rgb.gz[dim=256,zdim=3,bitpix=64,arch=big]
DoXPA ".. float little" rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little]
DoXPA ".. float little gzip" rgbarray/float_little.rgb.gz[dim=256,zdim=3,bitpix=-32,arch=little]
DoXPA ".. float big" rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big]
DoXPA ".. float big gzip" rgbarray/float_big.rgb.gz[dim=256,zdim=3,bitpix=-32,arch=big]
DoXPA ".. double little" rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little]
DoXPA ".. double little gzip" rgbarray/double_little.rgb.gz[dim=256,zdim=3,bitpix=-64,arch=little]
DoXPA ".. double big" rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big]
DoXPA ".. double big gzip" rgbarray/double_big.rgb.gz[dim=256,zdim=3,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9

DoXPAStdin ".. char" rgbarray/char.rgb [dim=256,zdim=3,bitpix=8]
DoXPAStdin ".. char gzip" rgbarray/char.rgb.gz [dim=256,zdim=3,bitpix=8]
DoXPAStdin ".. short little" rgbarray/short_little.rgb [dim=256,zdim=3,bitpix=16,arch=little]
DoXPAStdin ".. short little gzip" rgbarray/short_little.rgb.gz [dim=256,zdim=3,bitpix=16,arch=little]
DoXPAStdin ".. short big" rgbarray/short_big.rgb [dim=256,zdim=3,bitpix=16,arch=big]
DoXPAStdin ".. short big gzip" rgbarray/short_big.rgb.gz [dim=256,zdim=3,bitpix=16,arch=big]
DoXPAStdin ".. ushort little" rgbarray/ushort_little.rgb [dim=256,zdim=3,bitpix=-16,arch=little]
DoXPAStdin ".. ushort little gzip" rgbarray/ushort_little.rgb.gz [dim=256,zdim=3,bitpix=-16,arch=little]
DoXPAStdin ".. ushort big" rgbarray/ushort_big.rgb [dim=256,zdim=3,bitpix=-16,arch=big]
DoXPAStdin ".. ushort big gzip" rgbarray/ushort_big.rgb.gz [dim=256,zdim=3,bitpix=-16,arch=big]
DoXPAStdin ".. int little" rgbarray/int_little.rgb [dim=256,zdim=3,bitpix=32,arch=little]
DoXPAStdin ".. int little gzip" rgbarray/int_little.rgb.gz [dim=256,zdim=3,bitpix=32,arch=little]
DoXPAStdin ".. int big" rgbarray/int_big.rgb [dim=256,zdim=3,bitpix=32,arch=big]
DoXPAStdin ".. int big gzip" rgbarray/int_big.rgb.gz [dim=256,zdim=3,bitpix=32,arch=big]
DoXPAStdin ".. longlong little" rgbarray/longlong_little.rgb [dim=256,zdim=3,bitpix=64,arch=little]
DoXPAStdin ".. longlong little gzip" rgbarray/longlong_little.rgb.gz [dim=256,zdim=3,bitpix=64,arch=little]
DoXPAStdin ".. longlong big" rgbarray/longlong_big.rgb [dim=256,zdim=3,bitpix=64,arch=big]
DoXPAStdin ".. longlong big gzip" rgbarray/longlong_big.rgb.gz [dim=256,zdim=3,bitpix=64,arch=big]
DoXPAStdin ".. float little" rgbarray/float_little.rgb [dim=256,zdim=3,bitpix=-32,arch=little]
DoXPAStdin ".. float little gzip" rgbarray/float_little.rgb.gz [dim=256,zdim=3,bitpix=-32,arch=little]
DoXPAStdin ".. float big" rgbarray/float_big.rgb [dim=256,zdim=3,bitpix=-32,arch=big]
DoXPAStdin ".. float big gzip" rgbarray/float_big.rgb.gz [dim=256,zdim=3,bitpix=-32,arch=big]
DoXPAStdin ".. double little" rgbarray/double_little.rgb [dim=256,zdim=3,bitpix=-64,arch=little]
DoXPAStdin ".. double little gzip" rgbarray/double_little.rgb.gz [dim=256,zdim=3,bitpix=-64,arch=little]
DoXPAStdin ".. double big" rgbarray/double_big.rgb [dim=256,zdim=3,bitpix=-64,arch=big]
DoXPAStdin ".. double big gzip" rgbarray/double_big.rgb.gz [dim=256,zdim=3,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdout
if [ "$1" = "xpastdout" -o  -z "$1" ]; then
echo "Testing XPA Stdout"

StartDS9

DoXPAStdout ".. char" rgbarray/char.rgb[dim=256,zdim=3,bitpix=8] little [dim=256,zdim=3,bitpix=8]
DoXPAStdout ".. short little little" rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little] little [dim=256,zdim=3,bitpix=16,arch=little]
DoXPAStdout ".. short little big" rgbarray/short_little.rgb[dim=256,zdim=3,bitpix=16,arch=little] big [dim=256,zdim=3,bitpix=16,arch=big]
DoXPAStdout ".. short big little" rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big] little [dim=256,zdim=3,bitpix=16,arch=little]
DoXPAStdout ".. short big big" rgbarray/short_big.rgb[dim=256,zdim=3,bitpix=16,arch=big] big [dim=256,zdim=3,bitpix=16,arch=big]
DoXPAStdout ".. ushort little little" rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little] little [dim=256,zdim=3,bitpix=-16,arch=little]
DoXPAStdout ".. ushort little big" rgbarray/ushort_little.rgb[dim=256,zdim=3,bitpix=-16,arch=little] big [dim=256,zdim=3,bitpix=-16,arch=big]
DoXPAStdout ".. ushort big little" rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big] little [dim=256,zdim=3,bitpix=-16,arch=little]
DoXPAStdout ".. ushort big big" rgbarray/ushort_big.rgb[dim=256,zdim=3,bitpix=-16,arch=big] big [dim=256,zdim=3,bitpix=-16,arch=big]
DoXPAStdout ".. int little little" rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little] little [dim=256,zdim=3,bitpix=32,arch=little]
DoXPAStdout ".. int little big" rgbarray/int_little.rgb[dim=256,zdim=3,bitpix=32,arch=little] big [dim=256,zdim=3,bitpix=32,arch=big]
DoXPAStdout ".. int big little" rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big] little [dim=256,zdim=3,bitpix=32,arch=little]
DoXPAStdout ".. int big big" rgbarray/int_big.rgb[dim=256,zdim=3,bitpix=32,arch=big] big [dim=256,zdim=3,bitpix=32,arch=big]
DoXPAStdout ".. longlong little little" rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little] little [dim=256,zdim=3,bitpix=64,arch=little]
DoXPAStdout ".. longlong little big" rgbarray/longlong_little.rgb[dim=256,zdim=3,bitpix=64,arch=little] big [dim=256,zdim=3,bitpix=64,arch=big]
DoXPAStdout ".. longlong big little" rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big] little [dim=256,zdim=3,bitpix=64,arch=little]
DoXPAStdout ".. longlong big big" rgbarray/longlong_big.rgb[dim=256,zdim=3,bitpix=64,arch=big] big [dim=256,zdim=3,bitpix=64,arch=big]
DoXPAStdout ".. float little little" rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little] little [dim=256,zdim=3,bitpix=-32,arch=little]
DoXPAStdout ".. float little big" rgbarray/float_little.rgb[dim=256,zdim=3,bitpix=-32,arch=little] big [dim=256,zdim=3,bitpix=-32,arch=big]
DoXPAStdout ".. float big little" rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big] little [dim=256,zdim=3,bitpix=-32,arch=little]
DoXPAStdout ".. float big big" rgbarray/float_big.rgb[dim=256,zdim=3,bitpix=-32,arch=big] big [dim=256,zdim=3,bitpix=-32,arch=big]
DoXPAStdout ".. double little little" rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little] little [dim=256,zdim=3,bitpix=-64,arch=little]
DoXPAStdout ".. double little big" rgbarray/double_little.rgb[dim=256,zdim=3,bitpix=-64,arch=little] big [dim=256,zdim=3,bitpix=-64,arch=big]
DoXPAStdout ".. double big little" rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big] little [dim=256,zdim=3,bitpix=-64,arch=little]
DoXPAStdout ".. double big big" rgbarray/double_big.rgb[dim=256,zdim=3,bitpix=-64,arch=big] big [dim=256,zdim=3,bitpix=-64,arch=big]

xpaset -p ds9 quit
echo "PASSED"
fi

rm -f foo.*
echo "DONE"
