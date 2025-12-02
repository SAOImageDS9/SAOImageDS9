:
NAME="$1"
sed '
1i\
static char *XXXX="\\n

s/"/\\"/g
s/\\n/\\\\n/g
s/$/\\n/
$a\
\"
' | sed "s/XXXX/$NAME/" | awk '{printf("%s", $0)};END{printf(";\n")}'
