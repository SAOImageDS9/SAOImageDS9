#
# Include the TEA standard macro set
#

builtin(include,../tclconfig/tcl.m4)

#
# Add here whatever m4 macros you want to define for your package
#

AC_DEFUN(SAO_CONFIG_DIR, [
    sao_config_dir="$1"
    sao_config_arguments="$2"

    sao_popdir=`pwd`
    cd $sao_config_dir

    echo ""
    echo "*** Configure $1 ***"
    echo "running ${CONFIG_SHELL-/bin/sh} ./configure $sao_sub_configure_args $sao_config_arguments"
    ${CONFIG_SHELL-/bin/sh} ./configure $sao_sub_configure_args $sao_config_arguments
    cd $sao_popdir
])
