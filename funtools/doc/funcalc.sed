# cc <foo.c> 2>&1 | sed -n -f funauto.sed
# Linux gcc (and others)
s/.*`\([^)]*\)' undeclared (first use in this function).*/\1/p
# Solaris cc
s/.*undefined symbol: \([^)]*\)/\1/p
# Dec Alpha/OSF cc
s/.*In this statement, "\([^)]*\)" is not declared.*/\1/p
# SGI cc
s/.*The identifier "\([^)]*\)" is undefined.*/\1/p
