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
    xpaset -p ds9 $2 $3
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
}

DoXPAStdin () {
    echo "$1"
    cat $3 | xpaset ds9 $2
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame clear
}

DoXPAStdout () {
    echo "..  $2"
    xpaset -p ds9 tile
    xpaget ds9 $2 > foo.$2
    xpaset -p ds9 frame new $1
    xpaset -p ds9 $2 foo.$2
    if [ $slow = "1" ]; then
	sleep 1
    fi
    xpaset -p ds9 frame delete
}

initit () {
    echo "Testing $1"
    unset opt
}

testit () {
    echo "$2"
    opt="$opt -export $2 foo.$2 $3 -sleep .1"
    opt="$opt -frame new $1 foo.$2"
    if [ $slow = "1" ]; then
	opt="$opt -sleep 1"
    fi
    opt="$opt -frame delete -sleep .1"
}

doit () {
    eval ds9 -tile $1 -tiff photo/rose.tiff "$opt" -exit
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
echo "*** photo.sh ***"

# Command Line

if [ "$1" = "command" -o  -z "$1" ]; then
echo "Testing Command Line File"

echo ".. base"
echo "..  gif"
ds9 -gif photo/rose.gif &
KillIt
echo "..  tiff"
ds9 -tiff photo/rose.tiff &
KillIt
echo "..  jpeg"
ds9 -jpeg photo/rose.jpeg &
KillIt
echo "..  png"
ds9 -png photo/rose.png &
KillIt
echo ".. # backward compatibility"
echo "..  -photo"
ds9 -photo photo/rose.tiff &
KillIt

echo ".. rgb"
echo "..  gif"
ds9 -rgb -gif photo/rose.gif &
KillIt
echo "..  tiff"
ds9 -rgb -tiff photo/rose.tiff &
KillIt
echo "..  jpeg"
ds9 -rgb -jpeg photo/rose.jpeg &
KillIt
echo "..  png"
ds9 -rgb -png photo/rose.png &
KillIt
echo ".. # backward compatibility"
echo "..  -photo"
ds9 -rgb -photo photo/rose.tiff &
KillIt

echo ".. 3d"
echo "..  gif"
ds9 -3d -gif photo/rose.gif &
KillIt
echo "..  tiff"
ds9 -3d -tiff photo/rose.tiff &
KillIt
echo "..  jpeg"
ds9 -3d -jpeg photo/rose.jpeg &
KillIt
echo "..  png"
ds9 -3d -png photo/rose.png &
KillIt
echo ".. # backward compatibility"
echo "..  -photo"
ds9 -3d -photo photo/rose.tiff &
KillIt

echo "PASSED"
fi

# Stdin

if [ "$1" = "stdin" -o  -z "$1" ]; then
echo "Testing Command Stdin"

echo ".. base"
echo "..  gif"
cat photo/rose.gif | ds9 -gif - &
KillIt
echo "..  tiff"
cat photo/rose.tiff | ds9 -tiff - &
KillIt
echo "..  jpeg"
cat photo/rose.jpeg | ds9 -jpeg - &
KillIt
echo "..  png"
cat photo/rose.png | ds9 -png - &
KillIt

echo ".. rgb"
echo "..  gif"
cat photo/rose.gif | ds9 -rgb -gif - &
KillIt
echo "..  tiff"
cat photo/rose.tiff | ds9 -rgb -tiff - &
KillIt
echo "..  jpeg"
cat photo/rose.jpeg | ds9 -rgb -jpeg - &
KillIt
echo "..  png"
cat photo/rose.png | ds9 -rgb -png - &
KillIt

echo ".. 3d"
echo "..  gif"
cat photo/rose.gif | ds9 -3d -gif - &
KillIt
echo "..  tiff"
cat photo/rose.tiff | ds9 -3d -tiff - &
KillIt
echo "..  jpeg"
cat photo/rose.jpeg | ds9 -3d -jpeg - &
KillIt
echo "..  png"
cat photo/rose.png | ds9 -3d -png - &
KillIt

echo "PASSED"
fi

# export

if [ "$1" = "export" -o -z "$1" ]; then
echo "Testing Command export"

initit ".. base"
testit "" gif
testit "" tiff
testit "" tiff none
testit "" jpeg
testit "" jpeg 100
testit "" png
doit ""

initit ".. rgb"
#testit rgb gif
testit rgb tiff
testit rgb tiff none
testit rgb jpeg
testit rgb jpeg 100
testit rgb png
doit "-frame delete -rgb"

fi

# XPA File
if [ "$1" = "xpa" -o  -z "$1" ]; then
echo "Testing XPA File"

StartDS9

echo ".. base"
DoXPA "..  gif" gif photo/rose.gif
DoXPA "..  jpeg" jpeg photo/rose.jpeg
DoXPA "..  tiff" tiff photo/rose.tiff
DoXPA "..  png" png photo/rose.png

echo ".. rgb"
xpaset -p ds9 rgb
DoXPA "..  gif" gif photo/rose.gif
DoXPA "..  jpeg" jpeg photo/rose.jpeg
DoXPA "..  tiff" tiff photo/rose.tiff
DoXPA "..  png" png photo/rose.png

echo ".. 3d"
xpaset -p ds9 3d
DoXPA "..  gif" gif photo/rose.gif
DoXPA "..  jpeg" jpeg photo/rose.jpeg
DoXPA "..  tiff" tiff photo/rose.tiff
DoXPA "..  png" png photo/rose.png

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdin
if [ "$1" = "xpastdin" -o  -z "$1" ]; then
echo "Testing XPA Stdin"

StartDS9

echo ".. base"
DoXPAStdin "..  gif" gif photo/rose.gif
DoXPAStdin "..  jpeg" jpeg photo/rose.jpeg
DoXPAStdin "..  tiff" tiff photo/rose.tiff
DoXPAStdin "..  png" png photo/rose.png

echo ".. rgb"
xpaset -p ds9 rgb
DoXPAStdin "..  gif" gif photo/rose.gif
DoXPAStdin "..  jpeg" jpeg photo/rose.jpeg
DoXPAStdin "..  tiff" tiff photo/rose.tiff
DoXPAStdin "..  png" png photo/rose.png

echo ".. 3d"
xpaset -p ds9 3d
DoXPAStdin "..  gif" gif photo/rose.gif
DoXPAStdin "..  jpeg" jpeg photo/rose.jpeg
DoXPAStdin "..  tiff" tiff photo/rose.tiff
DoXPAStdin "..  png" png photo/rose.png

xpaset -p ds9 quit
echo "PASSED"
fi

# XPA stdout
if [ "$1" = "xpastdout" -o  -z "$1" ]; then
echo "Testing XPA Stdout"

StartDS9

echo ".. base"
xpaset -p ds9 tiff photo/rose.tiff
DoXPAStdout "" gif
DoXPAStdout "" jpeg
DoXPAStdout "" tiff
DoXPAStdout "" png

echo ".. rgb"
xpaset -p ds9 frame delete
xpaset -p ds9 rgb
xpaset -p ds9 tiff photo/rose.tiff
# not enough colors
#DoXPAStdout rgb gif
DoXPAStdout rgb jpeg
DoXPAStdout rgb tiff
DoXPAStdout rgb png

xpaset -p ds9 quit
echo "PASSED"
fi

rm -f foo.*
echo "DONE"
