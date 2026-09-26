#!/bin/bash
#
# Build universal DS9 and XPA tarballs from the architecture-specific ZIPs.
#
# Usage:
#   ./make-universal-tar.sh [ARM64_ZIP [X86_64_ZIP [OUTPUT_DIRECTORY]]]
#
# With no arguments, the script expects exactly one binary-*.zip file in each
# of the aarch64 and x86_64 directories. Each input may also be a directory
# holding the already-extracted ds9.*.tar.gz and xpa.*.tar.gz files. The
# versions are read from the tarball names unless DS9_VERSION or XPA_VERSION
# is set. CODESIGN_IDENTITY may be set to a Developer ID identity; it defaults
# to "-" for ad-hoc signing.

set -euo pipefail

readonly SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
readonly CODESIGN_IDENTITY="${CODESIGN_IDENTITY:--}"

find_one_file() {
    local directory=$1
    local pattern=$2
    local description=$3
    local found_file=""
    local count=0
    local candidate

    while IFS= read -r -d '' candidate; do
        found_file=$candidate
        count=$((count + 1))
    done < <(find "$directory" -maxdepth 1 -type f -name "$pattern" -print0)

    if [[ "$count" -ne 1 ]]; then
        echo "error: expected exactly one $description in $directory; found $count" >&2
        return 1
    fi

    printf '%s\n' "$found_file"
}

for command_name in unzip tar file lipo codesign ditto find stat; do
    if ! command -v "$command_name" >/dev/null 2>&1; then
        echo "error: required command not found: $command_name" >&2
        exit 1
    fi
done

if [[ -n "${1:-}" ]]; then
    ARM64_ZIP=$1
else
    ARM64_ZIP="$(find_one_file "$SCRIPT_DIR/aarch64" 'binary-*.zip' \
        "architecture ZIP file")"
fi

if [[ -n "${2:-}" ]]; then
    X86_64_ZIP=$2
else
    X86_64_ZIP="$(find_one_file "$SCRIPT_DIR/x86_64" 'binary-*.zip' \
        "architecture ZIP file")"
fi

readonly ARM64_ZIP
readonly X86_64_ZIP
readonly OUTPUT_DIRECTORY="${3:-$SCRIPT_DIR/universal}"

for input_zip in "$ARM64_ZIP" "$X86_64_ZIP"; do
    if [[ ! -f "$input_zip" && ! -d "$input_zip" ]]; then
        echo "error: input ZIP file or directory not found: $input_zip" >&2
        exit 1
    fi
done

readonly WORK_DIRECTORY="$(mktemp -d "${TMPDIR:-/tmp}/ds9-universal-tar.XXXXXX")"
readonly ARM64_ZIP_DIRECTORY="$WORK_DIRECTORY/arm64-zip"
readonly X86_64_ZIP_DIRECTORY="$WORK_DIRECTORY/x86_64-zip"
readonly ARM64_DS9_DIRECTORY="$WORK_DIRECTORY/arm64-ds9"
readonly X86_64_DS9_DIRECTORY="$WORK_DIRECTORY/x86_64-ds9"
readonly ARM64_XPA_DIRECTORY="$WORK_DIRECTORY/arm64-xpa"
readonly X86_64_XPA_DIRECTORY="$WORK_DIRECTORY/x86_64-xpa"
readonly DS9_STAGING_DIRECTORY="$WORK_DIRECTORY/universal-ds9"
readonly XPA_STAGING_DIRECTORY="$WORK_DIRECTORY/universal-xpa"

cleanup() {
    local exit_status=$?
    trap - EXIT INT TERM
    rm -rf "$WORK_DIRECTORY"
    exit "$exit_status"
}
trap cleanup EXIT INT TERM

mkdir "$ARM64_ZIP_DIRECTORY" "$X86_64_ZIP_DIRECTORY" \
    "$ARM64_DS9_DIRECTORY" "$X86_64_DS9_DIRECTORY" \
    "$ARM64_XPA_DIRECTORY" "$X86_64_XPA_DIRECTORY" \
    "$DS9_STAGING_DIRECTORY" "$XPA_STAGING_DIRECTORY"

unpack_input() {
    local input=$1
    local directory=$2

    if [[ -d "$input" ]]; then
        ditto "$input" "$directory"
    else
        unzip -q "$input" -d "$directory"
    fi
}

echo "Unpacking architecture packages..."
unpack_input "$ARM64_ZIP" "$ARM64_ZIP_DIRECTORY"
unpack_input "$X86_64_ZIP" "$X86_64_ZIP_DIRECTORY"

ARM64_DS9_TAR="$(find_one_file "$ARM64_ZIP_DIRECTORY" 'ds9.*.tar.gz' \
    "DS9 tarball")"
X86_64_DS9_TAR="$(find_one_file "$X86_64_ZIP_DIRECTORY" 'ds9.*.tar.gz' \
    "DS9 tarball")"
ARM64_XPA_TAR="$(find_one_file "$ARM64_ZIP_DIRECTORY" 'xpa.*.tar.gz' \
    "XPA tarball")"
X86_64_XPA_TAR="$(find_one_file "$X86_64_ZIP_DIRECTORY" 'xpa.*.tar.gz' \
    "XPA tarball")"

# Tarballs are named <package>.<arch>.<version>.tar.gz, and <arch> contains
# no dots.
tarball_version() {
    local name
    name="$(basename "$1" .tar.gz)"
    name="${name#*.}"
    printf '%s\n' "${name#*.}"
}

version_from_tarballs() {
    local package=$1
    local arm64_version x86_64_version
    arm64_version="$(tarball_version "$2")"
    x86_64_version="$(tarball_version "$3")"

    if [[ "$arm64_version" != "$x86_64_version" ]]; then
        echo "error: $package versions differ: arm64 $arm64_version," \
            "x86_64 $x86_64_version" >&2
        return 1
    fi
    printf '%s\n' "$arm64_version"
}

if [[ -z "${DS9_VERSION:-}" ]]; then
    DS9_VERSION="$(version_from_tarballs DS9 "$ARM64_DS9_TAR" \
        "$X86_64_DS9_TAR")"
fi
if [[ -z "${XPA_VERSION:-}" ]]; then
    XPA_VERSION="$(version_from_tarballs XPA "$ARM64_XPA_TAR" \
        "$X86_64_XPA_TAR")"
fi
readonly DS9_VERSION XPA_VERSION
readonly DS9_OUTPUT="$OUTPUT_DIRECTORY/ds9.macos-universal.$DS9_VERSION.tar.gz"
readonly XPA_OUTPUT="$OUTPUT_DIRECTORY/xpa.macos-universal.$XPA_VERSION.tar.gz"

for output_file in "$DS9_OUTPUT" "$XPA_OUTPUT"; do
    if [[ -e "$output_file" ]]; then
        echo "error: refusing to overwrite existing output: $output_file" >&2
        exit 1
    fi
done

echo "Extracting architecture tarballs..."
tar -xzf "$ARM64_DS9_TAR" -C "$ARM64_DS9_DIRECTORY"
tar -xzf "$X86_64_DS9_TAR" -C "$X86_64_DS9_DIRECTORY"
tar -xzf "$ARM64_XPA_TAR" -C "$ARM64_XPA_DIRECTORY"
tar -xzf "$X86_64_XPA_TAR" -C "$X86_64_XPA_DIRECTORY"

is_macho() {
    file -b "$1" | grep -q 'Mach-O'
}

require_architecture() {
    local expected_architecture=$1
    local binary=$2

    if ! lipo "$binary" -verify_arch "$expected_architecture" \
        >/dev/null 2>&1; then
        echo "error: expected $expected_architecture slice in: $binary" >&2
        exit 1
    fi
}

make_universal_binary() {
    local arm64_binary=$1
    local x86_64_binary=$2
    local output_binary=$3

    if [[ ! -f "$arm64_binary" ]] || ! is_macho "$arm64_binary"; then
        echo "error: arm64 Mach-O file not found: $arm64_binary" >&2
        exit 1
    fi
    if [[ ! -f "$x86_64_binary" ]] || ! is_macho "$x86_64_binary"; then
        echo "error: x86_64 Mach-O file not found: $x86_64_binary" >&2
        exit 1
    fi

    require_architecture arm64 "$arm64_binary"
    require_architecture x86_64 "$x86_64_binary"

    lipo -create \
        -arch arm64 "$arm64_binary" \
        -arch x86_64 "$x86_64_binary" \
        -output "$output_binary"
    chmod "$(stat -f '%Lp' "$arm64_binary")" "$output_binary"
    touch -r "$arm64_binary" "$output_binary"

    # lipo invalidates any signature carried by an input slice.
    codesign --force --sign "$CODESIGN_IDENTITY" --timestamp=none \
        "$output_binary"
    codesign --verify --strict "$output_binary"
    require_architecture arm64 "$output_binary"
    require_architecture x86_64 "$output_binary"
}

if [[ ! -f "$ARM64_DS9_DIRECTORY/ds9.zip" ||
      ! -f "$X86_64_DS9_DIRECTORY/ds9.zip" ]]; then
    echo "error: ds9.zip must be present in both DS9 tarballs" >&2
    exit 1
fi

echo "Creating universal ds9..."
make_universal_binary \
    "$ARM64_DS9_DIRECTORY/ds9" \
    "$X86_64_DS9_DIRECTORY/ds9" \
    "$DS9_STAGING_DIRECTORY/ds9"

# The architecture-specific ds9.zip payloads have equivalent contents. Use
# the arm64 copy and preserve its metadata.
ditto "$ARM64_DS9_DIRECTORY/ds9.zip" "$DS9_STAGING_DIRECTORY/ds9.zip"

echo "Creating universal XPA executables..."
xpa_names=()
for arm64_binary in "$ARM64_XPA_DIRECTORY"/xpa*; do
    if [[ ! -f "$arm64_binary" ]]; then
        continue
    fi
    if ! is_macho "$arm64_binary"; then
        echo "error: expected an XPA Mach-O executable: $arm64_binary" >&2
        exit 1
    fi

    binary_name="$(basename "$arm64_binary")"
    x86_64_binary="$X86_64_XPA_DIRECTORY/$binary_name"
    echo "  lipo $binary_name"
    make_universal_binary "$arm64_binary" "$x86_64_binary" \
        "$XPA_STAGING_DIRECTORY/$binary_name"
    xpa_names+=("$binary_name")
done

if [[ "${#xpa_names[@]}" -eq 0 ]]; then
    echo "error: no xpa* executables found in $ARM64_XPA_TAR" >&2
    exit 1
fi

# Check the other direction so an x86_64-only XPA executable is not omitted.
for x86_64_binary in "$X86_64_XPA_DIRECTORY"/xpa*; do
    if [[ -f "$x86_64_binary" ]]; then
        binary_name="$(basename "$x86_64_binary")"
        if [[ ! -f "$ARM64_XPA_DIRECTORY/$binary_name" ]]; then
            echo "error: no matching arm64 executable for: $binary_name" >&2
            exit 1
        fi
    fi
done

readonly TEMP_DS9_OUTPUT="$WORK_DIRECTORY/$(basename "$DS9_OUTPUT")"
readonly TEMP_XPA_OUTPUT="$WORK_DIRECTORY/$(basename "$XPA_OUTPUT")"

echo "Packaging universal tarballs..."
COPYFILE_DISABLE=1 tar -czf "$TEMP_DS9_OUTPUT" \
    -C "$DS9_STAGING_DIRECTORY" ds9 ds9.zip
COPYFILE_DISABLE=1 tar -czf "$TEMP_XPA_OUTPUT" \
    -C "$XPA_STAGING_DIRECTORY" "${xpa_names[@]}"

mkdir -p "$OUTPUT_DIRECTORY"
mv "$TEMP_DS9_OUTPUT" "$DS9_OUTPUT"
mv "$TEMP_XPA_OUTPUT" "$XPA_OUTPUT"

echo "Created:"
echo "  $DS9_OUTPUT"
echo "  $XPA_OUTPUT"
