# ---------------------------------------------------------------------------
# AST test suite
#
# C tests run unconditionally.  Fortran tests are gated on !NOFORTRAN.
#
# In standalone mode (no Starlink), star_compat/ provides C header stubs
# (sae_par.h, sai_err.h) and a Fortran stub library (libstar_compat.la)
# for the subset of the Starlink API used by the tests.
#
# In Starlink mode (starconf detected), the real Starlink headers and
# libraries are used.
# ---------------------------------------------------------------------------

# ---------------------------------------------------------------------------
# C tests
# ---------------------------------------------------------------------------

# -I$(top_srcdir) is for ast_err.h, which is generated before distribution
# and so is read from the source tree in a build from a tarball, and from the
# build tree in a build from a checkout.  Both directories are needed.
AM_CPPFLAGS = -DHAVE_CONFIG_H \
    -I$(top_builddir) -I$(top_srcdir) \
    -I$(top_builddir)/src -I$(top_srcdir)/src \
    $(STAR_CPPFLAGS)

if !STARLINK_BUILD
AM_CPPFLAGS += -I$(srcdir)/star_compat
endif

# The tests that reach the protected internals through the astCLASS headers
# see the AstObject and AstMapping structures directly, and those structures
# gain four members when THREAD_SAFE is defined.  A test must therefore be
# compiled with the same setting the library was, or its member accesses land
# at the wrong offsets.  The library gets this from $(threadsafe) in the
# top-level Makefile.am; use the same condition here.
if !NOTHREADS
AM_CPPFLAGS += -DTHREAD_SAFE
endif

# star_compat/ C headers + Fortran INCLUDE files needed to build the tests
# from a dist tarball (the .c stubs ship via libstar_compat_la_SOURCES).
noinst_HEADERS = \
    star_compat/CNF_PAR \
    star_compat/ERR_PAR \
    star_compat/NUM_DEC \
    star_compat/NUM_DEF \
    star_compat/PRM_PAR \
    star_compat/SAE_PAR \
    star_compat/SAI_ERR \
    star_compat/mers.h \
    star_compat/sae_par.h \
    star_compat/sai_err.h

AM_TESTS_ENVIRONMENT = srcdir='$(srcdir)'; export srcdir;

# The data-driven tests (test_*.tap) emit TAP so automake reports one result
# per case listed in the matching fixtures/*/cases.txt.  Run them through
# automake's TAP driver; other tests keep the default (exit-status) driver.
TEST_EXTENSIONS = .tap
TAP_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) \
    $(top_srcdir)/build-aux/tap-driver.sh
TAP_LOG_COMPILER = $(SHELL)

CTEST_LDADD = @LIBPAL@ @LIBCMINPACK@ \
    $(top_builddir)/libast.la \
    $(top_builddir)/libast_grf_3.2.la \
    $(top_builddir)/libast_grf_5.6.la \
    $(top_builddir)/libast_grf_2.0.la \
    $(top_builddir)/libast_grf3d.la \
    $(top_builddir)/libast_err.la \
    -lm

C_TESTS = \
    ast_test \
    testaxis \
    testchannel_c \
    testchebymap_c \
    testcmpframe_c \
    testcmpmap_c \
    testconvert \
    testerror \
    testfitschan_c \
    testfitstable_c \
    testflux_c \
    testframe \
    testframeset_c \
    testissimp \
    testkeymap_c \
    testlutmap_c \
    testmapping_c \
    testmoc_c \
    testmocchan_c \
    testnormmap_c \
    testobject \
    testpolymap_c \
    testrate_c \
    testratemap_c \
    testrebin_c \
    testrebinseq_c \
    testregions_c \
    testresimp \
    testskyframe_c \
    testspecflux_c \
    testspecframe_c \
    testsplinemap_c \
    teststc_c \
    teststcschan_c \
    testswitchmap_c \
    testtable_c \
    testtime_c \
    testtrangrid_c \
    testunitnorm \
    testunitnormmap_c \
    testxmlchan_c \
    testzoommap_c

# testhuge (C version) is compiled unconditionally; testhuge_f is
# compiled when !NOFORTRAN.  Both are driven by testhuge.sh.
check_PROGRAMS = $(C_TESTS) testhuge_c
TESTS = $(C_TESTS)

if !NOYAML
check_PROGRAMS += testyamlchan
TESTS += testyamlchan
endif

ast_test_SOURCES       = ast_test.c
ast_test_LDADD         = $(CTEST_LDADD)

testaxis_SOURCES       = testaxis.c
testaxis_LDADD         = $(CTEST_LDADD)

testconvert_SOURCES    = testconvert.c
testconvert_LDADD      = $(CTEST_LDADD)

testerror_SOURCES      = testerror.c
testerror_LDADD        = $(CTEST_LDADD)

testframe_SOURCES      = testframe.c
testframe_LDADD        = $(CTEST_LDADD)

testobject_SOURCES     = testobject.c
testobject_LDADD       = $(CTEST_LDADD)

testissimp_SOURCES     = testissimp.c
testissimp_LDADD       = $(CTEST_LDADD)

testresimp_SOURCES     = testresimp.c
testresimp_LDADD       = $(CTEST_LDADD)

testsplinemap_c_SOURCES = testsplinemap_c.c
testsplinemap_c_LDADD  = $(CTEST_LDADD)

testunitnorm_SOURCES   = testunitnorm.c
testunitnorm_LDADD     = $(CTEST_LDADD)

testyamlchan_SOURCES   = testyamlchan.c
testyamlchan_LDADD     = $(CTEST_LDADD)

# Fortran-converted C tests.  Every one shares its source basename with a
# .f counterpart, so each needs a per-target _CFLAGS to force automake to
# use long object names (foo_c-foo.o) and avoid object-file collisions.
#
# NOTE: renaming only the C objects is not enough.  The .f targets below use
# a matching per-target _FFLAGS so their objects are named foo_f-foo.o too.
# Without it a .f target would use the short object name foo.o, which has no
# explicit rule; make then resolves it via suffix rules, and because
# .SUFFIXES lists .c before .f it compiles foo.c, silently building the
# Fortran test from the C source. Lovely foot-gun! :(

testchannel_c_SOURCES  = testchannel.c
testchannel_c_CFLAGS   = $(AM_CFLAGS)
testchannel_c_LDADD    = $(CTEST_LDADD)

testchebymap_c_SOURCES = testchebymap.c
testchebymap_c_CFLAGS  = $(AM_CFLAGS)
testchebymap_c_LDADD   = $(CTEST_LDADD)

testcmpframe_c_SOURCES = testcmpframe.c
testcmpframe_c_CFLAGS  = $(AM_CFLAGS)
testcmpframe_c_LDADD   = $(CTEST_LDADD)

testcmpmap_c_SOURCES   = testcmpmap.c
testcmpmap_c_CFLAGS    = $(AM_CFLAGS)
testcmpmap_c_LDADD     = $(CTEST_LDADD)

testfitschan_c_SOURCES = testfitschan.c
testfitschan_c_CFLAGS  = $(AM_CFLAGS)
testfitschan_c_LDADD   = $(CTEST_LDADD)

testfitstable_c_SOURCES = testfitstable.c
testfitstable_c_CFLAGS  = $(AM_CFLAGS)
testfitstable_c_LDADD   = $(CTEST_LDADD)

testflux_c_SOURCES     = testflux.c
testflux_c_CFLAGS      = $(AM_CFLAGS)
testflux_c_LDADD       = $(CTEST_LDADD)

testframeset_c_SOURCES = testframeset.c
testframeset_c_CFLAGS  = $(AM_CFLAGS)
testframeset_c_LDADD   = $(CTEST_LDADD)

testkeymap_c_SOURCES   = testkeymap.c
testkeymap_c_CFLAGS    = $(AM_CFLAGS)
testkeymap_c_LDADD     = $(CTEST_LDADD)

testlutmap_c_SOURCES   = testlutmap.c
testlutmap_c_CFLAGS    = $(AM_CFLAGS)
testlutmap_c_LDADD     = $(CTEST_LDADD)

testmapping_c_SOURCES  = testmapping.c
testmapping_c_CFLAGS   = $(AM_CFLAGS)
testmapping_c_LDADD    = $(CTEST_LDADD)

testmoc_c_SOURCES      = testmoc.c
testmoc_c_CFLAGS       = $(AM_CFLAGS)
testmoc_c_LDADD        = $(CTEST_LDADD)

testmocchan_c_SOURCES  = testmocchan.c
testmocchan_c_CFLAGS   = $(AM_CFLAGS)
testmocchan_c_LDADD    = $(CTEST_LDADD)

testnormmap_c_SOURCES  = testnormmap.c
testnormmap_c_CFLAGS   = $(AM_CFLAGS)
testnormmap_c_LDADD    = $(CTEST_LDADD)

testpolymap_c_SOURCES  = testpolymap.c
testpolymap_c_CFLAGS   = $(AM_CFLAGS)
testpolymap_c_LDADD    = $(CTEST_LDADD)

testrate_c_SOURCES     = testrate.c
testrate_c_CFLAGS      = $(AM_CFLAGS)
testrate_c_LDADD       = $(CTEST_LDADD)

testratemap_c_SOURCES  = testratemap.c
testratemap_c_CFLAGS   = $(AM_CFLAGS)
testratemap_c_LDADD    = $(CTEST_LDADD)

testrebin_c_SOURCES    = testrebin.c
testrebin_c_CFLAGS     = $(AM_CFLAGS)
testrebin_c_LDADD      = $(CTEST_LDADD)

testrebinseq_c_SOURCES = testrebinseq.c
testrebinseq_c_CFLAGS  = $(AM_CFLAGS)
testrebinseq_c_LDADD   = $(CTEST_LDADD)

testregions_c_SOURCES  = testregions.c
testregions_c_CFLAGS   = $(AM_CFLAGS)
testregions_c_LDADD    = $(CTEST_LDADD)

testskyframe_c_SOURCES = testskyframe.c
testskyframe_c_CFLAGS  = $(AM_CFLAGS)
testskyframe_c_LDADD   = $(CTEST_LDADD)

testspecflux_c_SOURCES = testspecflux.c
testspecflux_c_CFLAGS  = $(AM_CFLAGS)
testspecflux_c_LDADD   = $(CTEST_LDADD)

testspecframe_c_SOURCES = testspecframe.c
testspecframe_c_CFLAGS  = $(AM_CFLAGS)
testspecframe_c_LDADD   = $(CTEST_LDADD)

teststc_c_SOURCES      = teststc.c
teststc_c_CFLAGS       = $(AM_CFLAGS)
teststc_c_LDADD        = $(CTEST_LDADD)

teststcschan_c_SOURCES = teststcschan.c
teststcschan_c_CFLAGS  = $(AM_CFLAGS)
teststcschan_c_LDADD   = $(CTEST_LDADD)

testswitchmap_c_SOURCES = testswitchmap.c
testswitchmap_c_CFLAGS  = $(AM_CFLAGS)
testswitchmap_c_LDADD   = $(CTEST_LDADD)

testtable_c_SOURCES    = testtable.c
testtable_c_CFLAGS     = $(AM_CFLAGS)
testtable_c_LDADD      = $(CTEST_LDADD)

testtime_c_SOURCES     = testtime.c
testtime_c_CFLAGS      = $(AM_CFLAGS)
testtime_c_LDADD       = $(CTEST_LDADD)

testtrangrid_c_SOURCES = testtrangrid.c
testtrangrid_c_CFLAGS  = $(AM_CFLAGS)
testtrangrid_c_LDADD   = $(CTEST_LDADD)

testunitnormmap_c_SOURCES = testunitnormmap.c
testunitnormmap_c_CFLAGS  = $(AM_CFLAGS)
testunitnormmap_c_LDADD   = $(CTEST_LDADD)

testhuge_c_SOURCES     = testhuge.c
testhuge_c_CFLAGS      = $(AM_CFLAGS)
testhuge_c_LDADD       = $(CTEST_LDADD)

testxmlchan_c_SOURCES  = testxmlchan.c
testxmlchan_c_CFLAGS   = $(AM_CFLAGS)
testxmlchan_c_LDADD    = $(CTEST_LDADD)

testzoommap_c_SOURCES  = testzoommap.c
testzoommap_c_CFLAGS   = $(AM_CFLAGS)
testzoommap_c_LDADD    = $(CTEST_LDADD)


# ---------------------------------------------------------------------------
# Fortran tests
# ---------------------------------------------------------------------------
if !NOFORTRAN

if STARLINK_BUILD  # Starlink mode: use real Starlink libraries

# Fortran compiler flags for test include files:
#   - $(top_builddir) for AST_PAR (generated at build time)
#   - $(builddir) for AST_ERR and any other generated headers
#   SAE_PAR, ERR_PAR, PRM_PAR, etc. come from $STARLINK/include via STAR_FCFLAGS.
#   -fallow-argument-mismatch is already in STAR_FCFLAGS; only add -fno-range-check
#   and the local build directory.
AM_FCFLAGS = \
    -I$(top_builddir) \
    -I$(builddir) \
    $(AST_FFLAGS_EXTRA)

# Cursed: Starlink's patched automake forcibly inserts $(STAR_FCFLAGS) at the
# beginning of the flag list for $(FC), and likewise $(STAR_LDFLAGS) and
# $(FCLD). That's fine for the original use case of running the `ast_tester`
# script against an installed AST, but counter to the goals of an in-source
# `make check`. The most reasonable workaround seems to be to override the
# default pattern rule for compiling Fortran sources.
#
# For linking this does not appear to be a problem since locally built
# libraries are passed in by relative path and are handled by libtool.
.f.o:
	$(AM_V_FC)$(FC) $(AM_FCFLAGS) $(FCFLAGS) $(STAR_FCFLAGS) -c -o $@ $<

# Each Fortran test target sets a per-target _FFLAGS (see below) to force a
# unique object name (foo_f-foo.o) and avoid the .c/.f basename collision that
# otherwise makes make compile foo.o from foo.c.  Those per-target rules use
# the F77 interface and bypass the .f.o override above, so STAR_FCFLAGS (the
# Starlink include paths) must be carried in AM_FFLAGS here.
AM_FFLAGS = $(AM_FCFLAGS) $(STAR_FCFLAGS)

# Libraries for all Fortran tests (real Starlink libs).
# We link the locally-built AST .la files directly (not via ast_link, which
# targets an installed AST).  The Starlink support libraries mirror what the
# ast_tester shell script obtains from:
#   `err_link` `psx_link` `prm_link` `chr_link`
# These flags must be hard-coded here because $(shell ...) in LDADD causes
# automake to add the expansion to _DEPENDENCIES, making make try to build
# the -l flags as file targets.
FTEST_LDADD = @LIBPAL@ @LIBCMINPACK@ \
    $(top_builddir)/libast.la \
    $(top_builddir)/libast_grf_3.2.la \
    $(top_builddir)/libast_grf_5.6.la \
    $(top_builddir)/libast_grf_2.0.la \
    $(top_builddir)/libast_grf3d.la \
    $(top_builddir)/libast_err.la \
    -lerr_standalone -lchr -lemsf -lems -lcnf -lstarmem -lpthread -lstarutil \
    -lpsx -lprm -lprm_a -lm
else
# Compatibility stubs replacing Starlink EMS/PSX/CHR/CNF/NUM for test-only use.
noinst_LTLIBRARIES = libstar_compat.la
libstar_compat_la_SOURCES = \
    star_compat/err_standalone.c \
    star_compat/psx_standalone.c \
    star_compat/chr_standalone.c \
    star_compat/cnf_standalone.c \
    star_compat/num_standalone.c
libstar_compat_la_CFLAGS = $(AM_CFLAGS) -I$(top_builddir)/src

# Fortran compiler include path for test include files:
#   - $(top_builddir) for AST_PAR (generated at build time)
#   - $(top_srcdir) for AST_ERR, which is generated before distribution and so
#     is read from the source tree in a build from a tarball and from the
#     build tree in a build from a checkout
#   - star_compat/ for SAE_PAR, SAI_ERR, ERR_PAR, PRM_PAR
#   - $(builddir) for any other generated include files
# Starlink's automake compiles .f files via FC (not F77), so AM_FCFLAGS is
# used (it appears in FCCOMPILE = $(FC) $(STAR_FCFLAGS) $(AM_FCFLAGS) $(FCFLAGS)).
AM_FCFLAGS = \
    -I$(top_builddir) \
    -I$(top_srcdir) \
    -I$(srcdir)/star_compat \
    -I$(builddir) \
    $(AST_FFLAGS_EXTRA)

# Automake actually defaults to the f77 compiler interface for bare .f files
# so we actually need to set AM_FFLAGS ; but keep AM_FCFLAGS as well in case
# the use of gfortran was forced
AM_FFLAGS = $(AM_FCFLAGS)

# Libraries for all Fortran tests (standalone stubs).
FTEST_LDADD = libstar_compat.la @LIBPAL@ @LIBCMINPACK@ \
    $(top_builddir)/libast.la \
    $(top_builddir)/libast_grf_3.2.la \
    $(top_builddir)/libast_grf_5.6.la \
    $(top_builddir)/libast_grf_2.0.la \
    $(top_builddir)/libast_grf3d.la \
    $(top_builddir)/libast_err.la \
    -lm
endif  # STARLINK_BUILD

FORTRAN_TESTS = \
    testchannel_f \
    testchebymap_f \
    testcmpframe_f \
    testcmpmap_f \
    testfitschan_f \
    testfitstable_f \
    testflux_f \
    testframeset_f \
    testkeymap_f \
    testlutmap_f \
    testmapping_f \
    testmoc_f \
    testmocchan_f \
    testnormmap_f \
    testpolymap_f \
    testrate_f \
    testratemap_f \
    testrebin_f \
    testrebinseq_f \
    testregions_f \
    testskyframe_f \
    testspecflux_f \
    testspecframe_f \
    testsplinemap_f \
    teststc_f \
    teststcschan_f \
    testswitchmap_f \
    testtable_f \
    testtime_f \
    testtrangrid_f \
    testunitnormmap_f \
    testxmlchan_f \
    testzoommap_f

TESTS += $(FORTRAN_TESTS)
check_PROGRAMS += $(FORTRAN_TESTS)

check_PROGRAMS += testhuge_f
testhuge_f_SOURCES = testhuge.f
testhuge_f_LDADD   = $(FTEST_LDADD)
testhuge_f_FFLAGS  = $(AM_FFLAGS)
endif  # NOFORTRAN

TESTS += testhuge.sh
EXTRA_DIST = testhuge.sh test_keymap_mapsz.sh dist-fixtures.sh \
    test_wcsconverter.tap test_simplify.tap test_grid.tap test_roundtrip.tap

# The CMake suite runs tests this one does not, and it is meant to.  Automake
# ships a source only if some target names it, so those extra tests' sources
# would never reach the tarball, and the CMake build CI runs against an
# unpacked tarball could not compile them.  The dist-hook below therefore
# sweeps them up wholesale rather than naming them: an enumerated list silently
# fell behind master (testimmutable.c was the last one), while shipping a
# source the local suite happens not to build costs nothing.
EXTRA_DIST += CMakeLists.txt

# Committed test data lives entirely below fixtures/, so it is shipped as a
# tree rather than enumerated file by file: there are over a thousand of them
# and nothing generated is written there.  The copy is done here rather than
# by naming "fixtures" in EXTRA_DIST because automake's directory support is a
# plain "cp -R", which would also sweep up any editor or file-manager
# droppings sitting in the tree and so make the tarball depend on the state of
# the developer's working copy.
dist-hook:
# Fixtures ship through fixtures/DIST_MANIFEST rather than wholesale.  The tree
# is 18MB, larger than src/, and an end user verifying a build needs a fraction
# of it: the binary tests' inputs, a plot to compare, and enough real FITS
# headers for the transform oracle.  `make fulldist' sets AST_DIST_FULL=1 and
# ships everything.
#
# DIST_TIER records which happened, so the CMake build unpacked from this
# tarball can tell a fixture left out on purpose from one that went missing.
#
# A cut-down tarball is a valid source tree -- distcheck cuts a second tarball
# from the first -- but the fixtures it left behind are gone, so `make fulldist'
# there would silently label a subset "full".  DIST_TIER, shipped by the parent,
# is what says so.
	@if test "x$(AST_DIST_FULL)" = x1; then \
	    if test -f "$(srcdir)/fixtures/DIST_TIER" && \
	        ! grep -qx full "$(srcdir)/fixtures/DIST_TIER"; then \
	        echo "make fulldist: this tree is itself a cut-down distribution;" >&2; \
	        echo "the fixtures it omits cannot be recovered from it." >&2; \
	        exit 1; \
	    fi; \
	    list=`cd "$(srcdir)" && find fixtures -type f ! -name '.*'`; \
	    tier=full; \
	else \
	    list=`cd "$(srcdir)" && $(SHELL) ./dist-fixtures.sh \
	        fixtures/DIST_MANIFEST` || exit 1; \
	    tier=cutdown; \
	fi; \
	for rel in $$list; do \
	    $(MKDIR_P) "$(distdir)/`dirname $$rel`"; \
	    cp -p "$(srcdir)/$$rel" "$(distdir)/$$rel" || exit 1; \
	done; \
	echo $$tier > "$(distdir)/fixtures/DIST_TIER"
# Sources at this level that no automake target names: the CMake-only tests and
# the awk helpers the shell drivers run.  Tracked files only, so a scratch file
# or an editor's leftovers sitting in the working copy cannot reach the tarball
# and make the release depend on the state of one developer's tree.
#
# Outside a git checkout there is no index to consult, so fall back to a find.
# That is not a rare case: `make distcheck' runs `make dist' again inside the
# unpacked tarball.  The fallback is safe exactly there, because everything at
# this level arrived in that tarball and so was tracked when it was cut.
	@if test -d "$(top_srcdir)/.git"; then \
	    list=`cd "$(srcdir)" && git ls-files -- . \
	        | grep -v / | grep -E '\.(awk|c|f|h)$$'`; \
	else \
	    list=`cd "$(srcdir)" && find . -maxdepth 1 -type f \
	        \( -name '*.c' -o -name '*.f' -o -name '*.h' -o -name '*.awk' \) \
	        ! -name '.*' | sed 's|^\./||'`; \
	fi; \
	test -n "$$list" || { \
	    echo "make dist: no test sources found in $(srcdir)" >&2; exit 1; }; \
	for rel in $$list; do \
	    test -e "$(distdir)/$$rel" && continue; \
	    cp -p "$(srcdir)/$$rel" "$(distdir)/$$rel" || exit 1; \
	done

# A shipped oracle must not name a fixture that was not shipped.  Its sections
# are keyed by fixture path, so this is a text check.  A check rather than a
# filter on purpose: silently dropping sections would reduce coverage with
# nothing to say so, while failing here forces the manifest and the oracle to be
# reconciled.
	@cd "$(distdir)/fixtures" && \
	for orc in `find . -name '*.oracle' -type f`; do \
	    for fx in `sed -n 's/^\[\([^ ]*\).*/\1/p' "$$orc" | sort -u`; do \
	        test -e "$$fx" || { \
	            echo "make dist: $$orc names undistributed fixture: $$fx" >&2; \
	            exit 1; }; \
	    done; \
	done

# Fixtures and command files that the tests read from the ast_tester directory
# itself rather than from fixtures/.
EXTRA_DIST += \
    testmocchan_com \
    testxmlchan_com \
    teststc_com

# Output files written by the tests during "make check".  Listed here so that
# "make clean"/"make distclean" removes them; otherwise distcheck's
# distcleancheck reports them as files left in the build tree.
CLEANFILES = \
    keymap_mapsz.out \
    divide_roundtrip.asdf \
    draw3d.txt \
    fred.tmp \
    fred.txt \
    fred2.txt \
    lsst_wcs.asdf \
    nativetest.yaml \
    sm.txt \
    sm2.txt \
    sphmap_roundtrip.asdf \
    tanSipWcs.asdf \
    testdmp \
    testfitschan_write.fits \
    yamltest.asdf

# Data-driven tests: WCS encoding conversion, Mapping simplification and
# astGrid.  Each .tap test reads its list of cases from the corresponding
# fixtures/*/cases.txt (shared with the CMake suite) and emits TAP, so
# automake reports one result per case.
check_PROGRAMS += wcsconverter simplify ast_astequal compare_dumps testgrid
# Use the C harnesses (wcsconverter.c/simplify.c/ast_astequal.c), matching the
# CMake suite: they are complete ports of the older wcsconverter.f/simplify.f
# and, unlike the Fortran versions, register the IntraMap transforms needed by
# some simplify fixtures.
# ast_astequal performs the semantic (astEqual) comparison used alongside the
# dump comparison by the .tap tests.
wcsconverter_SOURCES = wcsconverter.c
wcsconverter_LDADD   = $(CTEST_LDADD)
simplify_SOURCES     = simplify.c
simplify_LDADD       = $(CTEST_LDADD)
ast_astequal_SOURCES = ast_astequal.c
ast_astequal_LDADD   = $(CTEST_LDADD)

# compare_dumps replaces the byte-level diff the .tap tests used to run: it
# passes a byte-equal line and otherwise compares tokens, treating two doubles
# within 4 ULP as equal.  This is the same comparator the CMake suite uses, so
# both suites accept and reject the same output, and neither has to opt a
# fixture out of dump comparison merely because its last digit moves.  It links
# no AST library, being text and arithmetic only.
compare_dumps_SOURCES = compare_dumps.c
compare_dumps_LDADD   = -lm

# The comparator's own self-test, built from the same source with -DSELFTEST.
# A comparator nobody checks is how a gate quietly stops being one.
check_PROGRAMS += compare_dumps_selftest
TESTS += compare_dumps_selftest
compare_dumps_selftest_SOURCES = compare_dumps.c
compare_dumps_selftest_CFLAGS  = $(AM_CFLAGS) -DSELFTEST
compare_dumps_selftest_LDADD   = -lm

# testgrid exercises astGrid using the logging GRF module (libast_grf_log),
# which replaces the null grf_2.0/3.2/5.6 modules used by the other tests.
testgrid_SOURCES = testgrid.c
testgrid_LDADD = @LIBPAL@ @LIBCMINPACK@ \
    $(top_builddir)/libast.la \
    $(top_builddir)/libast_grf_log.la \
    $(top_builddir)/libast_grf3d.la \
    $(top_builddir)/libast_err.la \
    -lm

TESTS += test_wcsconverter.tap test_simplify.tap test_grid.tap

# roundtrip: read a fixture and write it straight back, which must reproduce it.
# The only family that can see an attribute lost on load -- the simplify
# families call astSimplify after reading, and that re-sets IsSimple on every
# node it visits, hiding a record a loader dropped.
check_PROGRAMS += roundtrip
roundtrip_SOURCES = roundtrip.c
roundtrip_LDADD   = $(CTEST_LDADD)
TESTS += test_roundtrip.tap

# keymap_mapsz: check the committed capture of KeyMap's hash-table growth policy
# still describes this library.  Without it the generator would be the only
# program here whose output nothing reads, and a capture nothing re-checks stops
# being evidence the moment the policy changes.
check_PROGRAMS += gen_keymap_mapsz
gen_keymap_mapsz_SOURCES = gen_keymap_mapsz.c
gen_keymap_mapsz_LDADD   = $(CTEST_LDADD)
TESTS += test_keymap_mapsz.sh

# Source and LDADD declarations for each Fortran test.
if !NOFORTRAN
testchannel_f_SOURCES    = testchannel.f
testchannel_f_LDADD      = $(FTEST_LDADD)
testchannel_f_FFLAGS     = $(AM_FFLAGS)

testchebymap_f_SOURCES   = testchebymap.f
testchebymap_f_LDADD     = $(FTEST_LDADD)
testchebymap_f_FFLAGS    = $(AM_FFLAGS)

testcmpframe_f_SOURCES   = testcmpframe.f
testcmpframe_f_LDADD     = $(FTEST_LDADD)
testcmpframe_f_FFLAGS    = $(AM_FFLAGS)

testcmpmap_f_SOURCES     = testcmpmap.f
testcmpmap_f_LDADD       = $(FTEST_LDADD)
testcmpmap_f_FFLAGS      = $(AM_FFLAGS)

testfitschan_f_SOURCES   = testfitschan.f
testfitschan_f_LDADD     = $(FTEST_LDADD)
testfitschan_f_FFLAGS    = $(AM_FFLAGS)

testfitstable_f_SOURCES  = testfitstable.f
testfitstable_f_LDADD    = $(FTEST_LDADD)
testfitstable_f_FFLAGS   = $(AM_FFLAGS)

testflux_f_SOURCES       = testflux.f
testflux_f_LDADD         = $(FTEST_LDADD)
testflux_f_FFLAGS        = $(AM_FFLAGS)

testframeset_f_SOURCES   = testframeset.f
testframeset_f_LDADD     = $(FTEST_LDADD)
testframeset_f_FFLAGS    = $(AM_FFLAGS)

testkeymap_f_SOURCES     = testkeymap.f
testkeymap_f_LDADD       = $(FTEST_LDADD)
testkeymap_f_FFLAGS      = $(AM_FFLAGS)

testlutmap_f_SOURCES     = testlutmap.f
testlutmap_f_LDADD       = $(FTEST_LDADD)
testlutmap_f_FFLAGS      = $(AM_FFLAGS)

testmapping_f_SOURCES    = testmapping.f
testmapping_f_LDADD      = $(FTEST_LDADD)
testmapping_f_FFLAGS     = $(AM_FFLAGS)

testmoc_f_SOURCES        = testmoc.f
testmoc_f_LDADD          = $(FTEST_LDADD)
testmoc_f_FFLAGS         = $(AM_FFLAGS)

testmocchan_f_SOURCES    = testmocchan.f
testmocchan_f_LDADD      = $(FTEST_LDADD)
testmocchan_f_FFLAGS     = $(AM_FFLAGS)

testnormmap_f_SOURCES    = testnormmap.f
testnormmap_f_LDADD      = $(FTEST_LDADD)
testnormmap_f_FFLAGS     = $(AM_FFLAGS)

testpolymap_f_SOURCES    = testpolymap.f
testpolymap_f_LDADD      = $(FTEST_LDADD)
testpolymap_f_FFLAGS     = $(AM_FFLAGS)

testrate_f_SOURCES       = testrate.f
testrate_f_LDADD         = $(FTEST_LDADD)
testrate_f_FFLAGS        = $(AM_FFLAGS)

testratemap_f_SOURCES    = testratemap.f
testratemap_f_LDADD      = $(FTEST_LDADD)
testratemap_f_FFLAGS     = $(AM_FFLAGS)

testrebin_f_SOURCES      = testrebin.f
testrebin_f_LDADD        = $(FTEST_LDADD)
testrebin_f_FFLAGS       = $(AM_FFLAGS)

testrebinseq_f_SOURCES   = testrebinseq.f
testrebinseq_f_LDADD     = $(FTEST_LDADD)
testrebinseq_f_FFLAGS    = $(AM_FFLAGS)

testregions_f_SOURCES    = testregions.f
testregions_f_LDADD      = $(FTEST_LDADD)
testregions_f_FFLAGS     = $(AM_FFLAGS)

testskyframe_f_SOURCES   = testskyframe.f
testskyframe_f_LDADD     = $(FTEST_LDADD)
testskyframe_f_FFLAGS    = $(AM_FFLAGS)

testspecflux_f_SOURCES   = testspecflux.f
testspecflux_f_LDADD     = $(FTEST_LDADD)
testspecflux_f_FFLAGS    = $(AM_FFLAGS)

testspecframe_f_SOURCES  = testspecframe.f
testspecframe_f_LDADD    = $(FTEST_LDADD)
testspecframe_f_FFLAGS   = $(AM_FFLAGS)

testsplinemap_f_SOURCES  = testsplinemap.f
testsplinemap_f_LDADD    = $(FTEST_LDADD)
testsplinemap_f_FFLAGS   = $(AM_FFLAGS)

teststc_f_SOURCES        = teststc.f
teststc_f_LDADD          = $(FTEST_LDADD)
teststc_f_FFLAGS         = $(AM_FFLAGS)

teststcschan_f_SOURCES   = teststcschan.f
teststcschan_f_LDADD     = $(FTEST_LDADD)
teststcschan_f_FFLAGS    = $(AM_FFLAGS)

testswitchmap_f_SOURCES  = testswitchmap.f
testswitchmap_f_LDADD    = $(FTEST_LDADD)
testswitchmap_f_FFLAGS   = $(AM_FFLAGS)

testtable_f_SOURCES      = testtable.f
testtable_f_LDADD        = $(FTEST_LDADD)
testtable_f_FFLAGS       = $(AM_FFLAGS)

testtime_f_SOURCES       = testtime.f
testtime_f_LDADD         = $(FTEST_LDADD)
testtime_f_FFLAGS        = $(AM_FFLAGS)

testtrangrid_f_SOURCES   = testtrangrid.f
testtrangrid_f_LDADD     = $(FTEST_LDADD)
testtrangrid_f_FFLAGS    = $(AM_FFLAGS)

testunitnormmap_f_SOURCES = testunitnormmap.f
testunitnormmap_f_LDADD  = $(FTEST_LDADD)
testunitnormmap_f_FFLAGS = $(AM_FFLAGS)

testxmlchan_f_SOURCES    = testxmlchan.f
testxmlchan_f_LDADD      = $(FTEST_LDADD)
testxmlchan_f_FFLAGS     = $(AM_FFLAGS)

testzoommap_f_SOURCES    = testzoommap.f
testzoommap_f_LDADD      = $(FTEST_LDADD)
testzoommap_f_FFLAGS     = $(AM_FFLAGS)

endif  # NOFORTRAN
