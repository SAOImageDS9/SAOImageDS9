#!/bin/sh
# Wrapper script to run makeh for CMake out-of-source builds.
#
# Usage: gen_ast_h.sh <srcdir> <builddir> <perl> <cc> <output> <header_files...>
#
# This script creates a staging area that mirrors the source layout,
# with generated files overlaid, so that makeh's -s option works correctly.

SRCDIR="$1"; shift
BUILDDIR="$1"; shift
PERL="$1"; shift
CC="$1"; shift
OUTPUT="$1"; shift
# Remaining arguments are the relative header file paths

# Create a staging directory in the build tree
STAGEDIR="${BUILDDIR}/_makeh_stage"
rm -rf "${STAGEDIR}"
mkdir -p "${STAGEDIR}/src" "${STAGEDIR}/wcslib"

# Symlink all source headers into the staging dir
for dir in src wcslib; do
    for f in "${SRCDIR}/${dir}"/*.h; do
        [ -f "$f" ] && ln -sf "$f" "${STAGEDIR}/${dir}/"
    done
done
# Top-level headers from source (e.g., pal2ast.h, erfa2ast.h)
for f in "${SRCDIR}"/*.h; do
    [ -f "$f" ] && ln -sf "$f" "${STAGEDIR}/"
done

copy_gen_header() {
    if [ -f "${BUILDDIR}/$1" ]; then
        rm -f "${STAGEDIR}/$1"
        cp "${BUILDDIR}/$1" "${STAGEDIR}/$1"
    fi
}

# Overlay generated headers (these take precedence)
copy_gen_header ast_err.h
copy_gen_header config.h
copy_gen_header src/version.h
copy_gen_header src/object.h

# Create ast_cpp script in the staging directory
cat > "${STAGEDIR}/ast_cpp" << ASTCPP
#!/bin/sh
cat >/tmp/ast_cpp_\$\$.c
${CC} -E /tmp/ast_cpp_\$\$.c -I\$1
rm -f /tmp/ast_cpp_\$\$.c
ASTCPP
chmod +x "${STAGEDIR}/ast_cpp"

# Run makeh from the staging directory so ./ast_cpp is found
cd "${STAGEDIR}"
"${PERL}" "${SRCDIR}/makeh" -s "${STAGEDIR}" "$@" > "${OUTPUT}"
RESULT=$?

# Clean up staging dir
rm -rf "${STAGEDIR}"

exit $RESULT
