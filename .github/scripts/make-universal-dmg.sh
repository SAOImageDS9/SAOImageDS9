#!/bin/bash
#
# Build a universal DS9 disk image from arm64 and x86_64 disk images.
#
# Usage:
#   ./make-universal-dmg.sh [ARM64_DMG [X86_64_DMG [OUTPUT_DMG]]]
#
# CODESIGN_IDENTITY may be set to a Developer ID identity.  It defaults to
# "-" so that the modified application receives a valid ad-hoc signature.

set -euo pipefail

readonly SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
readonly ARM64_DMG="${1:-$SCRIPT_DIR/aarch64/SAOImageDS9 8.8b2.dmg}"
readonly X86_64_DMG="${2:-$SCRIPT_DIR/x86_64/SAOImageDS9 8.8b2.dmg}"
readonly OUTPUT_DMG="${3:-$SCRIPT_DIR/universal/SAOImageDS9 8.8b2.dmg}"
readonly CODESIGN_IDENTITY="${CODESIGN_IDENTITY:--}"
readonly APP_NAME="SAOImageDS9.app"

for command_name in hdiutil ditto file lipo codesign; do
    if ! command -v "$command_name" >/dev/null 2>&1; then
        echo "error: required command not found: $command_name" >&2
        exit 1
    fi
done

for input_dmg in "$ARM64_DMG" "$X86_64_DMG"; do
    if [[ ! -f "$input_dmg" ]]; then
        echo "error: input disk image not found: $input_dmg" >&2
        exit 1
    fi
done

if [[ "$OUTPUT_DMG" != *.dmg ]]; then
    echo "error: output name must end in .dmg: $OUTPUT_DMG" >&2
    exit 1
fi

if [[ -e "$OUTPUT_DMG" ]]; then
    echo "error: refusing to overwrite existing output: $OUTPUT_DMG" >&2
    exit 1
fi

readonly WORK_DIR="$(mktemp -d "${TMPDIR:-/tmp}/ds9-universal.XXXXXX")"
readonly ARM64_MOUNT="$WORK_DIR/arm64"
readonly X86_64_MOUNT="$WORK_DIR/x86_64"
readonly STAGING_DIR="$WORK_DIR/staging"
ARM64_ATTACHED=0
X86_64_ATTACHED=0

cleanup() {
    local exit_status=$?
    trap - EXIT INT TERM

    if [[ "$X86_64_ATTACHED" -eq 1 ]]; then
        hdiutil detach "$X86_64_MOUNT" >/dev/null 2>&1 ||
            hdiutil detach -force "$X86_64_MOUNT" >/dev/null 2>&1 || true
    fi
    if [[ "$ARM64_ATTACHED" -eq 1 ]]; then
        hdiutil detach "$ARM64_MOUNT" >/dev/null 2>&1 ||
            hdiutil detach -force "$ARM64_MOUNT" >/dev/null 2>&1 || true
    fi
    rm -rf "$WORK_DIR"
    exit "$exit_status"
}
trap cleanup EXIT INT TERM

mkdir "$ARM64_MOUNT" "$X86_64_MOUNT" "$STAGING_DIR"

echo "Mounting input disk images..."
hdiutil attach -readonly -nobrowse -mountpoint "$ARM64_MOUNT" \
    "$ARM64_DMG" >/dev/null
ARM64_ATTACHED=1
hdiutil attach -readonly -nobrowse -mountpoint "$X86_64_MOUNT" \
    "$X86_64_DMG" >/dev/null
X86_64_ATTACHED=1

readonly ARM64_APP="$ARM64_MOUNT/$APP_NAME"
readonly X86_64_APP="$X86_64_MOUNT/$APP_NAME"
readonly OUTPUT_APP="$STAGING_DIR/$APP_NAME"

if [[ ! -d "$ARM64_APP" || ! -d "$X86_64_APP" ]]; then
    echo "error: $APP_NAME must be present in both input images" >&2
    exit 1
fi

# Use the arm64 image as the resource/layout template.  ditto preserves the
# Applications symlink, Finder metadata, bundle symlinks, and file modes.
echo "Copying disk image contents..."
ditto "$ARM64_MOUNT" "$STAGING_DIR"

is_macho() {
    file -b "$1" | grep -q 'Mach-O'
}

require_arch() {
    local expected_arch=$1
    local binary=$2

    if ! lipo "$binary" -verify_arch "$expected_arch" >/dev/null 2>&1; then
        echo "error: expected $expected_arch slice in: $binary" >&2
        exit 1
    fi
}

merged_count=0
while IFS= read -r -d '' arm64_file; do
    if ! is_macho "$arm64_file"; then
        continue
    fi

    relative_path="${arm64_file#"$ARM64_APP/"}"
    x86_64_file="$X86_64_APP/$relative_path"
    output_file="$OUTPUT_APP/$relative_path"

    if [[ ! -f "$x86_64_file" ]] || ! is_macho "$x86_64_file"; then
        echo "error: no matching x86_64 Mach-O file for: $relative_path" >&2
        exit 1
    fi

    require_arch arm64 "$arm64_file"
    require_arch x86_64 "$x86_64_file"

    echo "  lipo $relative_path"
    temp_output="$WORK_DIR/lipo-output"
    rm -f "$temp_output"
    lipo -create \
        -arch arm64 "$arm64_file" \
        -arch x86_64 "$x86_64_file" \
        -output "$temp_output"
    chmod "$(stat -f '%Lp' "$output_file")" "$temp_output"
    touch -r "$output_file" "$temp_output"
    mv -f "$temp_output" "$output_file"
    merged_count=$((merged_count + 1))
done < <(find "$ARM64_APP" -type f -print0)

# Also scan the other direction so an x86_64-only executable cannot be missed.
while IFS= read -r -d '' x86_64_file; do
    if ! is_macho "$x86_64_file"; then
        continue
    fi

    relative_path="${x86_64_file#"$X86_64_APP/"}"
    if [[ ! -f "$ARM64_APP/$relative_path" ]] ||
       ! is_macho "$ARM64_APP/$relative_path"; then
        echo "error: no matching arm64 Mach-O file for: $relative_path" >&2
        exit 1
    fi
done < <(find "$X86_64_APP" -type f -print0)

if [[ "$merged_count" -eq 0 ]]; then
    echo "error: no Mach-O files were found in $APP_NAME" >&2
    exit 1
fi

echo "Signing the universal application with identity: $CODESIGN_IDENTITY"
codesign --force --deep --sign "$CODESIGN_IDENTITY" --timestamp=none \
    "$OUTPUT_APP"
codesign --verify --deep --strict "$OUTPUT_APP"

echo "Verifying universal slices..."
while IFS= read -r -d '' output_file; do
    if is_macho "$output_file"; then
        require_arch arm64 "$output_file"
        require_arch x86_64 "$output_file"
    fi
done < <(find "$OUTPUT_APP" -type f -print0)

echo "Detaching input disk images..."
hdiutil detach "$X86_64_MOUNT" >/dev/null
X86_64_ATTACHED=0
hdiutil detach "$ARM64_MOUNT" >/dev/null
ARM64_ATTACHED=0

mkdir -p "$(dirname "$OUTPUT_DMG")"
volume_name="$(basename "$OUTPUT_DMG" .dmg)"

echo "Creating $OUTPUT_DMG..."
hdiutil create -format UDZO -imagekey zlib-level=9 \
    -volname "$volume_name" -srcfolder "$STAGING_DIR" "$OUTPUT_DMG"

echo "Created universal disk image with $merged_count merged Mach-O files:"
echo "  $OUTPUT_DMG"
