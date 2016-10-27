echo "Catalog Line Options Tests"

testit () {
    echo "Testing $1"
    unset opt
    opt="$opt $1 -sleep 1"
}

doit () {
    eval ds9 -zscale data/img.fits "$opt" -exit
    echo "PASSED"
    echo ""
}

echo
echo "*** command.sh ***"

tt="-cat"
testit "$tt"
doit

tt="-cat -header"
testit "$tt"
doit

tt="-cat -cat sky fk4 -header"
testit "$tt"
doit

tt="-cat -cat 2mass -header"
testit "$tt"
doit

tt="-cat 2mass -header"
testit "$tt"
doit

tt="-cat 2mass -cat sky fk4 -header"
testit "$tt"
doit

tt="-cat 2mass -cat iras -header"
testit "$tt"
doit

tt="-cat 2mass -cat sky fk4 -cat -header"
testit "$tt"
doit

tt="-cat 2mass -cat sky fk4 -cat iras -header"
testit "$tt"
doit

tt="-cat 2mass -cat 2mass sky fk4 -cat -header"
testit "$tt"
doit

tt="-cat 2mass -cat 2mass sky fk4 -cat iras -header"
testit "$tt"
doit
