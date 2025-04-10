#
# Include the TEA standard macro set
#

builtin(include,tclconfig/tcl.m4)

#
# Add here whatever m4 macros you want to define for your package
#

#-------------------------------------------------------------------------
# TEA_PROG_DTPLITE
#
#	Do we have a usable dtplite program to use in document generation?
#
# Results
#	Sets up DTPLITE
#
#-------------------------------------------------------------------------

AC_DEFUN(TEA_PROG_DTPLITE, [
    AC_PATH_TOOL([DTPLITE], [dtplite], [:])
])
