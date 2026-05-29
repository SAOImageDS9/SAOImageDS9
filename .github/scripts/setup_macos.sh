#!/usr/bin/env bash -e
#
# Install any dependencies for building SAOImageDS9 on macOS.
#

# See https://stackoverflow.com/questions/63648591/how-to-install-x11-before-testing-with-github-actions-for-macos
#
brew install --cask xquartz

# Ensure autoheader is available.
brew install autoconf
