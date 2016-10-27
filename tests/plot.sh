echo "Starting DS9..."
if [ `xpaaccess ds9` = no ]; then
    ds9 -tcl&

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

echo
echo "*** plot.sh ***"

delay=.5

echo -n "stdin 2|3|4|5..."
cat plot/stdin.2.dat | xpaset ds9 plot new stdin
cat plot/stdin.3.dat | xpaset ds9 plot new stdin
cat plot/stdin.4.dat | xpaset ds9 plot new stdin
cat plot/stdin.5.dat | xpaset ds9 plot new stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.2.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.3.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.4.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.5.dat | xpaset ds9 plot new bar stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.2.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.3.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.4.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.5.dat | xpaset ds9 plot new scatter stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "named stdin 2|3|4|5..."
cat plot/stdin.2.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.3.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.4.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.5.dat | xpaset ds9 plot new name foo stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.2.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.3.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.4.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.5.dat | xpaset ds9 plot new name foo bar stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.2.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.3.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.4.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.5.dat | xpaset ds9 plot new name foo scatter stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "stdin xy|xyex|xyey|xyexey..."
cat plot/stdin.xy.dat | xpaset ds9 plot new stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.xy.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new bar stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new bar stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.xy.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new scatter stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new scatter stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "named stdin xy|xyex|xyey|xyexey..."
cat plot/stdin.xy.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new name foo stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.xy.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new name foo bar stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new name foo bar stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/stdin.xy.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.xyex.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.xyey.dat | xpaset ds9 plot new name foo scatter stdin
cat plot/stdin.xyexey.dat | xpaset ds9 plot new name foo scatter stdin
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "stdin text|error..."
cat plot/stdin.error.dat | xpaset ds9 plot new stdin
cat plot/stdin.text.dat | xpaset ds9 plot new stdin
sleep "$delay"
xpaset -p ds9 plot close
echo "PASSED"

echo -n "named stdin text|error..."
cat plot/stdin.error.dat | xpaset ds9 plot new name foo stdin
cat plot/stdin.text.dat | xpaset ds9 plot new name foo stdin
sleep "$delay"
xpaset -p ds9 plot close
echo "PASSED"

echo -n "4|5..."
cat plot/4.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/4.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/4.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "named 4|5..."
cat plot/4.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/4.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/4.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" 4
cat plot/5.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" 5
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "xy|xyex|xyey|xyexey..."
cat plot/xy.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/xy.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new bar "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/xy.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new scatter "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

echo -n "name xy|xyex|xyey|xyexey..."
cat plot/xy.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new name foo "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/xy.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new name foo bar "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close

cat plot/xy.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" xy
cat plot/xyex.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" xyex
cat plot/xyey.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" xyey
cat plot/xyexey.dat | xpaset ds9 plot new name foo scatter "{The Title}" "{X Axis}" "{Y Axis}" xyexey
sleep "$delay"
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
xpaset -p ds9 plot close
echo "PASSED"

xpaset -p ds9 quit

echo "DONE"
