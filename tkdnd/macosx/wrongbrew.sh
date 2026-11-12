#!/usr/bin/env bash
#
# Install wrong architecture packages on macOS
# - Can only install one package at a time, unless using "brew bundle"
# - Uses `brew deps --tree` to loop over dependencies
# - For speed, tries to NOT upgrade a package automatically
#   - To upgrade a package, use wrongbrew.sh uninstall <packagename> && wrongbrew.sh install <packagename>
# - Based on the example from @maxirmx https://stackoverflow.com/a/70822921/3196753
#
# https://gist.github.com/tresf/9a45e1400a91f4c9c14a2240967094ff

# Halt on first error
set -e

export HOMEBREW_NO_AUTO_UPDATE=1

# The location of wrongbrew. (if you like to live in danger, set to /usr/local or /opt/homebrew)
WRONGBREW_DIR="$HOME/wrongbrew"

# The foreign arch (x86_64 or arm64)
echo "==> Host CPU: $(sysctl -n machdep.cpu.brand_string)"
if [[ $(sysctl -n machdep.cpu.brand_string) =~ "Apple" ]]; then 
    WRONGBREW_ARCH=x86_64
else
    WRONGBREW_ARCH=arm64
fi

# Determine the current os codename (e.g. "bigsur")
# WRONGBREW_OS=bigsur
WRONGBREW_OS=$(cat '/System/Library/CoreServices/Setup Assistant.app/Contents/Resources/en.lproj/OSXSoftwareLicense.rtf' |grep 'SOFTWARE LICENSE AGREEMENT FOR ' | awk -F ' FOR ' '{print $2}' | awk -F 'OS X |macOS ' '{print $2}' | tr '[:upper:]' '[:lower:]' | awk -F '\' '{print $1}')

if [ "$WRONGBREW_ARCH" = "arm64" ]; then
    WRONGBREW_BOTTLE_TAG="${WRONGBREW_ARCH}_${WRONGBREW_OS}"
else
    # Intel does not have arch suffix
    WRONGBREW_BOTTLE_TAG="${WRONGBREW_OS}"
fi

if [ ! -d "$WRONGBREW_DIR" ]; then
  echo "==> Configuring $WRONGBREW_DIR for $WRONGBREW_ARCH using bottle \"$WRONGBREW_BOTTLE_TAG\"..."

  # Prepare our directory
  rm -rf "$WRONGBREW_DIR"
  mkdir "$WRONGBREW_DIR" && curl -sL https://github.com/Homebrew/brew/tarball/master | tar xz --strip 1 -C "$WRONGBREW_DIR"
fi

WRONGBREW_BIN="$WRONGBREW_DIR/bin/brew"

# Install a package manually by bottle tag
install_single_package() {
    response=$("$WRONGBREW_BIN" fetch --force --bottle-tag="${WRONGBREW_BOTTLE_TAG}" "$1" | grep "Downloaded to")
    parsed=$(echo "$response" | awk -F ' to: ' '{print $2}')
    "$WRONGBREW_BIN" install "$parsed" || true # force continue because python
}

# Build a depenency tree
install() {
    linkbin=false
    for param in "$@"; do
        if [ "$param" = "--link-bin" ]; then
          linkbin=true
          continue
        fi
        # Convert deps --tree to something sortable to install in natural order
        deps=($("$WRONGBREW_BIN" deps --tree "$param" | tr -c '[:alnum:]._-@\n' ' ' |sort |tr -d ' ' |uniq))
        for dep in "${deps[@]}"; do
          # Check using "brew list"
          if "$WRONGBREW_BIN" list "$dep" &>/dev/null ; then
            # By default install will check for updates for already installed packages
            # Save some time by skipping a package if it's already installed
            echo "==> Skipping \"$dep\", already installed"
            continue
          fi
          install_single_package "$dep"
        done
        # Only link the original package
        if $linkbin ; then
          link_bin "$param"
        fi
    done
}

# Loop over a Brewfile
bundle_install() {
  if [ -f "$1" ]; then
    echo "==> Brewfile found: $1"
    deps=($(cat Brewfile |xargs -L1 echo | awk -F 'brew ' '{print $2}'))
    for dep in "${deps[@]}"; do
      install "$dep"
    done
  else
    # Shamelessly trigger the native command's error message
    "$WRONGBREW_BIN" bundle
  fi
}

# Moves a wrong-arch "bin" directory out of the way, symlinks the native one provided by the native
# version of brew.
#
# The "right" way to do this with CMake is to leverage CMAKE_FIND_ROOT... and friends
# but this only fixes tools in "bin".  Nested tools like "qmake" still can't be found.
link_bin() {
  for param in "$@"; do
    # First, install the native tool(s)
    brew install "$param"

    # Second, rename the foriegn tool (e.g. bin_arm64)
    before="$("$WRONGBREW_BIN" --prefix "$param")/bin"
    after="${before}_${WRONGBREW_ARCH}"
    new="$(brew --prefix "$param")/bin"
    echo "==> Moving $before -> $after"
    mv "$before" "$after"

    # Last, link the native tool to the foriegn tool
    echo "==> Linking $before -> $new"
    ln -s "$new" "$before"
  done
}

# Backup params
params="$@"

# For sanity reasons, let's only install one package at a time
while test $# -gt 0; do
  case "$1" in
    install)
        shift
        install $@
        exit 0
        ;;
    bundle)
      if [ "$2" = "install" ]; then
        if [ ! -z "$3" ]; then
          bundle_install "$3"
        else
          bundle_install "$(pwd)/Brewfile"
        fi
        exit 0
      fi
      ;;
    *)
    shift
    ;;
  esac
done

# We're not installing a package, just pass the params to brew, I guess :)
"$WRONGBREW_BIN" $params
