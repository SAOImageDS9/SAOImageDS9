#!/usr/bin/env bash -e
#
# Install any dependencies for building SAOImageDS9. Uses the
# environment variable DS9_BUILD_OS to determine what system is in use
# (rather than auto-detecting it).
#
# This script is assumed to be run in the top-level directory of
# the SAOImageDS9 distribution.
#

case $DS9_BUILD_OS in

    ubuntu-*)
	source .github/scripts/setup_ubuntu.sh
	;;

    *)
	echo "** UNKNOWN OS: '$DS9_BUILD_OS'"
	exit 1
	;;

esac
