## Process this file with automake to produce Makefile.in
SUBDIRS = ast_tester

ACLOCAL_AMFLAGS = -I m4

# First declare various groups of files.  These were initially extracted
# from the grp.make file, as constructed by the SDT newdev command
GRP_C_ROUTINES = \
    src/yamlchan.c \
    src/axis.c \
    src/box.c \
    src/channel.c \
    src/chebymap.c \
    src/circle.c \
    src/cmpframe.c \
    src/cmpmap.c \
    src/cmpregion.c \
    src/dsbspecframe.c \
    src/dssmap.c \
    src/ellipse.c \
    src/error.c \
    src/fitschan.c \
    src/fitstable.c \
    src/fluxframe.c \
    src/frame.c \
    src/frameset.c \
    src/globals.c \
    src/grismmap.c \
    src/interval.c \
    src/intramap.c \
    src/keymap.c \
    src/loader.c \
    src/lutmap.c \
    src/mapping.c \
    src/mathmap.c \
    src/matrixmap.c \
    src/memory.c \
    src/moc.c \
    src/mocchan.c \
    src/normmap.c \
    src/nullregion.c \
    src/object.c \
    src/pcdmap.c \
    src/permmap.c \
    src/plot.c \
    src/plot3d.c \
    src/pointlist.c \
    src/pointset.c \
    src/polygon.c \
    src/polymap.c \
    src/prism.c \
    src/ratemap.c \
    src/region.c \
    src/selectormap.c \
    src/shiftmap.c \
    src/skyaxis.c \
    src/skyframe.c \
    src/slamap.c \
    src/specfluxframe.c \
    src/specframe.c \
    src/specmap.c \
    src/sphmap.c \
    src/splinemap.c \
    src/stc.c \
    src/stccatalogentrylocation.c \
    src/stcobsdatalocation.c \
    src/stcresourceprofile.c \
    src/stcschan.c \
    src/stcsearchlocation.c \
    src/switchmap.c \
    src/table.c \
    src/timeframe.c \
    src/timemap.c \
    src/tranmap.c \
    src/unit.c \
    src/unitmap.c \
    src/unitnormmap.c \
    src/wcsmap.c \
    src/winmap.c \
    src/xml.c \
    src/xmlchan.c \
    src/xphmap.c \
    src/zoommap.c


# The C source files required for the Fortran interface
if !NOFORTRAN
F_C_ROUTINES = \
    src/fyamlchan.c \
    src/c2f77.c \
    src/fbox.c \
    src/fchannel.c \
    src/fchebymap.c \
    src/fcircle.c \
    src/fcmpframe.c \
    src/fcmpmap.c \
    src/fcmpregion.c \
    src/fdsbspecframe.c \
    src/fdssmap.c \
    src/fellipse.c \
    src/ferror.c \
    src/ffitschan.c \
    src/ffitstable.c \
    src/ffluxframe.c \
    src/fframe.c \
    src/fframeset.c \
    src/fgrismmap.c \
    src/finterval.c \
    src/fintramap.c \
    src/fkeymap.c \
    src/flutmap.c \
    src/fmapping.c \
    src/fmathmap.c \
    src/fmatrixmap.c \
    src/fmoc.c \
    src/fmocchan.c \
    src/fnormmap.c \
    src/fnullregion.c \
    src/fobject.c \
    src/fpcdmap.c \
    src/fpermmap.c \
    src/fplot.c \
    src/fplot3d.c \
    src/fpointlist.c \
    src/fpolygon.c \
    src/fpolymap.c \
    src/fprism.c \
    src/fratemap.c \
    src/fregion.c \
    src/fselectormap.c \
    src/fshiftmap.c \
    src/fskyframe.c \
    src/fslamap.c \
    src/fspecfluxframe.c \
    src/fspecframe.c \
    src/fspecmap.c \
    src/fsphmap.c \
    src/fsplinemap.c \
    src/fstc.c \
    src/fstccatalogentrylocation.c \
    src/fstcobsdatalocation.c \
    src/fstcresourceprofile.c \
    src/fstcschan.c \
    src/fstcsearchlocation.c \
    src/fswitchmap.c \
    src/ftable.c \
    src/ftimeframe.c \
    src/ftimemap.c \
    src/ftranmap.c \
    src/funitmap.c \
    src/funitnormmap.c \
    src/fwcsmap.c \
    src/fwinmap.c \
    src/fxmlchan.c \
    src/fzoommap.c
else
F_C_ROUTINES =
endif

# Header files which contribute to the "ast.h" file, organised to correspond
# with the class hierarchy.
AST_H_FILES_HEAD = \
    src/xml.h \
    wcslib/wcstrig.h \
    wcslib/proj.h \
    src/memory.h \
    src/error.h \
    src/globals.h \
    src/unit.h

# ast_err.h belongs here (between src/unit.h and src/version.h) in the ast.h
# assembly order, but it is generated from ast_err.msg and must not be
# distributed.  It is therefore omitted from the distributable AST_H_FILES
# list and spliced into the makeh command line at this position by the ast.h
# rule below.
AST_H_FILES_TAIL = \
    src/version.h \
    src/object.h \
       src/keymap.h \
          src/table.h \
             src/fitstable.h \
       src/pointset.h \
       src/axis.h \
          src/skyaxis.h \
       src/mapping.h \
          src/cmpmap.h \
          src/dssmap.h \
          src/grismmap.h \
          src/intramap.h \
          src/splinemap.h \
          src/lutmap.h \
          src/mathmap.h \
          src/matrixmap.h \
          src/pcdmap.h \
          src/permmap.h \
          src/polymap.h \
          src/chebymap.h \
          src/ratemap.h \
          src/normmap.h \
          src/shiftmap.h \
          src/slamap.h \
          src/specmap.h \
          src/sphmap.h \
          src/timemap.h \
          src/selectormap.h \
          src/switchmap.h \
          src/tranmap.h \
          src/unitmap.h \
          src/unitnormmap.h \
          src/wcsmap.h \
          src/winmap.h \
          src/xphmap.h \
          src/zoommap.h \
          src/frame.h \
             src/cmpframe.h \
                 src/specfluxframe.h \
             src/fluxframe.h \
             src/frameset.h \
                 src/plot.h \
                     src/plot3d.h \
             src/skyframe.h \
             src/specframe.h \
                 src/dsbspecframe.h \
             src/region.h \
                src/box.h \
                src/circle.h \
                src/cmpregion.h \
                src/ellipse.h \
                src/interval.h \
                src/moc.h \
                src/nullregion.h \
                src/pointlist.h \
                src/polygon.h \
                src/prism.h \
                src/stc.h \
                   src/stcresourceprofile.h \
                   src/stcsearchlocation.h \
                   src/stccatalogentrylocation.h \
                   src/stcobsdatalocation.h \
             src/timeframe.h \
       src/channel.h \
          src/yamlchan.h \
          src/fitschan.h \
          src/mocchan.h \
          src/stcschan.h \
          src/xmlchan.h

# The full set of distributable class headers that contribute to ast.h.  The
# generated ast_err.h is not part of this list (see above); it is injected in
# the correct position by the ast.h rule when invoking makeh.
AST_H_FILES = $(AST_H_FILES_HEAD) $(AST_H_FILES_TAIL)

# All the (C) include files required to build the library.
GRP_C_INCLUDE_FILES = \
    $(AST_H_FILES) \
    pal2ast.h \
    erfa2ast.h \
    src/ems.h \
    src/err.h \
    src/Ers.h \
    src/f77.h \
    src/grf.h \
    src/grf3d.h \
    src/pg3d.h \
    src/loader.h \
    src/skyaxis.h \
    src/stc.h \
    src/stcresourceprofile.h \
    src/stcsearchlocation.h \
    src/stccatalogentrylocation.h \
    src/stcobsdatalocation.h \
    wcslib/wcsmath.h \
    wcslib/wcstrig.h \
    src/xmlchan.h

if !NOFORTRAN
F_C_INCLUDE_FILES = \
    src/c2f77.h

# This list should also include AST_PAR and AST_ERR, but those are generated
# and must not be distributed, so they are listed separately in
# nodist_libast_la_SOURCES below.
GRP_F_INCLUDE_FILES = \
    GRF_PAR

else
F_C_INCLUDE_FILES =
GRP_F_INCLUDE_FILES =
endif

# If we have no Fortran we are not building f77.h and we probably
# do not want a Fortran runtime. This requires that PGPLOT is disabled.
# We replace it with the stub GRF interface. An alternative would
# be to have the PGPLOT wrappers use a preprocessor symbol to build
# the pgplot to always error if used.
if !NOFORTRAN
GRF_PGPLOT_SOURCES = \
    src/grf_pgplot.c
GRF3D_PGPLOT_SOURCES = \
    src/grf3d_pgplot.c
else
GRF_PGPLOT_SOURCES = \
    src/grf_5.6.c
GRF3D_PGPLOT_SOURCES = \
    src/grf3d.c
endif


## Following declaration isn't used
## LATEX_DOCUMENTATION_FILES = \
##     sun210.tex \
##     sun211.tex

DOCUMENTATION_PRODUCTS = $(PAPER_DOCUMENTATION) $(HYPER_DOCUMENTATION)
PAPER_DOCUMENTATION = sun210.tex sun211.tex sun210.pdf sun211.pdf
HYPER_DOCUMENTATION = sun210.htx_tar sun211.htx_tar

PDF_FIGURES = \
    cmpframe.pdf \
    complex.pdf \
    frames.pdf \
    frameset.pdf \
    fronta.pdf \
    fronta_bw.pdf \
    frontb.pdf \
    frontb_bw.pdf \
    frontc.pdf \
    frontc_bw.pdf \
    fsalign.pdf \
    fsconvert.pdf \
    fsexample.pdf \
    fsmerge.pdf \
    fsremap.pdf \
    gridplot.pdf \
    gridplot_bw.pdf \
    mapping.pdf \
    overgrid.pdf \
    overgrid_bw.pdf \
    parallel.pdf \
    series.pdf \
    simpexamp.pdf

WCSLIB_FILES = \
    wcslib/proj.c \
    wcslib/tpn.c \
    wcslib/proj.h \
    wcslib/wcstrig.c \
    wcslib/wcsmath.h \
    wcslib/wcstrig.h

STAR_PAL_FILES = \
    pal/pal.h \
    pal/palAddet.c \
    pal/palAmpqk.c \
    pal/palCaldj.c \
    pal/palDat.c \
    pal/palDe2h.c \
    pal/palDeuler.c \
    pal/palDh2e.c \
    pal/palDjcal.c \
    pal/palDmat.c \
    pal/palDrange.c \
    pal/palDs2tp.c \
    pal/palDtp2s.c \
    pal/palDtps2c.c \
    pal/palDtt.c \
    pal/palEcmat.c \
    pal/palEqgal.c \
    pal/palEtrms.c \
    pal/palEvp.c \
    pal/palFk45z.c \
    pal/palFk524.c \
    pal/palFk54z.c \
    pal/palGaleq.c \
    pal/palGalsup.c \
    pal/palMappa.c \
    pal/palMapqkz.c \
    pal/palOne2One.c \
    pal/palPrebn.c \
    pal/palPrec.c \
    pal/palPrenut.c \
    pal/palPvobs.c \
    pal/palRvgalc.c \
    pal/palRvlg.c \
    pal/palRvlsrd.c \
    pal/palRvlsrk.c \
    pal/palSubet.c \
    pal/palSupgal.c \
    pal/pal1sofa.h \
    pal/palmac.h

ERFA_FILES = \
    erfa/00READ.ME \
    erfa/erfa.h \
    erfa/erfam.h \
    erfa/a2af.c \
    erfa/a2tf.c \
    erfa/af2a.c \
    erfa/anp.c \
    erfa/anpm.c \
    erfa/bi00.c \
    erfa/bp00.c \
    erfa/bp06.c \
    erfa/bpn2xy.c \
    erfa/c2i00a.c \
    erfa/c2i00b.c \
    erfa/c2i06a.c \
    erfa/c2ibpn.c \
    erfa/c2ixy.c \
    erfa/c2ixys.c \
    erfa/c2s.c \
    erfa/c2t00a.c \
    erfa/c2t00b.c \
    erfa/c2t06a.c \
    erfa/c2tcio.c \
    erfa/c2teqx.c \
    erfa/c2tpe.c \
    erfa/c2txy.c \
    erfa/cal2jd.c \
    erfa/cp.c \
    erfa/cpv.c \
    erfa/cr.c \
    erfa/d2dtf.c \
    erfa/d2tf.c \
    erfa/dat.c \
    erfa/dtdb.c \
    erfa/dtf2d.c \
    erfa/ee00.c \
    erfa/ee00a.c \
    erfa/ee00b.c \
    erfa/ee06a.c \
    erfa/eect00.c \
    erfa/eform.c \
    erfa/eo06a.c \
    erfa/eors.c \
    erfa/epb.c \
    erfa/epb2jd.c \
    erfa/epj.c \
    erfa/epj2jd.c \
    erfa/epv00.c \
    erfa/eqeq94.c \
    erfa/era00.c \
    erfa/fad03.c \
    erfa/fae03.c \
    erfa/faf03.c \
    erfa/faju03.c \
    erfa/fal03.c \
    erfa/falp03.c \
    erfa/fama03.c \
    erfa/fame03.c \
    erfa/fane03.c \
    erfa/faom03.c \
    erfa/fapa03.c \
    erfa/fasa03.c \
    erfa/faur03.c \
    erfa/fave03.c \
    erfa/fk52h.c \
    erfa/fk5hip.c \
    erfa/fk5hz.c \
    erfa/fw2m.c \
    erfa/fw2xy.c \
    erfa/gc2gd.c \
    erfa/gc2gde.c \
    erfa/gd2gc.c \
    erfa/gd2gce.c \
    erfa/gmst00.c \
    erfa/gmst06.c \
    erfa/gmst82.c \
    erfa/gst00a.c \
    erfa/gst00b.c \
    erfa/gst06.c \
    erfa/gst06a.c \
    erfa/gst94.c \
    erfa/h2fk5.c \
    erfa/hfk5z.c \
    erfa/ir.c \
    erfa/jd2cal.c \
    erfa/jdcalf.c \
    erfa/num00a.c \
    erfa/num00b.c \
    erfa/num06a.c \
    erfa/numat.c \
    erfa/nut00a.c \
    erfa/nut00b.c \
    erfa/nut06a.c \
    erfa/nut80.c \
    erfa/nutm80.c \
    erfa/obl06.c \
    erfa/obl80.c \
    erfa/p06e.c \
    erfa/p2pv.c \
    erfa/p2s.c \
    erfa/pap.c \
    erfa/pas.c \
    erfa/pb06.c \
    erfa/pdp.c \
    erfa/pfw06.c \
    erfa/plan94.c \
    erfa/pm.c \
    erfa/pmat00.c \
    erfa/pmat06.c \
    erfa/pmat76.c \
    erfa/pmp.c \
    erfa/pn.c \
    erfa/pn00.c \
    erfa/pn00a.c \
    erfa/pn00b.c \
    erfa/pn06.c \
    erfa/pn06a.c \
    erfa/pnm00a.c \
    erfa/pnm00b.c \
    erfa/pnm06a.c \
    erfa/pnm80.c \
    erfa/pom00.c \
    erfa/ppp.c \
    erfa/ppsp.c \
    erfa/pr00.c \
    erfa/prec76.c \
    erfa/pv2p.c \
    erfa/pv2s.c \
    erfa/pvdpv.c \
    erfa/pvm.c \
    erfa/pvmpv.c \
    erfa/pvppv.c \
    erfa/pvstar.c \
    erfa/pvu.c \
    erfa/pvup.c \
    erfa/pvxpv.c \
    erfa/pxp.c \
    erfa/refco.c \
    erfa/rm2v.c \
    erfa/rv2m.c \
    erfa/rx.c \
    erfa/rxp.c \
    erfa/rxpv.c \
    erfa/rxr.c \
    erfa/ry.c \
    erfa/rz.c \
    erfa/s00.c \
    erfa/s00a.c \
    erfa/s00b.c \
    erfa/s06.c \
    erfa/s06a.c \
    erfa/s2c.c \
    erfa/s2p.c \
    erfa/s2pv.c \
    erfa/s2xpv.c \
    erfa/sepp.c \
    erfa/seps.c \
    erfa/sp00.c \
    erfa/starpm.c \
    erfa/starpv.c \
    erfa/sxp.c \
    erfa/sxpv.c \
    erfa/taitt.c \
    erfa/taiut1.c \
    erfa/taiutc.c \
    erfa/tcbtdb.c \
    erfa/tcgtt.c \
    erfa/tdbtcb.c \
    erfa/tdbtt.c \
    erfa/tf2a.c \
    erfa/tf2d.c \
    erfa/tr.c \
    erfa/trxp.c \
    erfa/trxpv.c \
    erfa/tttai.c \
    erfa/tttcg.c \
    erfa/tttdb.c \
    erfa/ttut1.c \
    erfa/ut1tai.c \
    erfa/ut1tt.c \
    erfa/ut1utc.c \
    erfa/utctai.c \
    erfa/utcut1.c \
    erfa/xy06.c \
    erfa/xys00a.c \
    erfa/xys00b.c \
    erfa/xys06a.c \
    erfa/zp.c \
    erfa/zpv.c \
    erfa/zr.c

PAL_FILES = \
    palwrap.c \
    pal.h \
    erfa.h \
    erfam.h

CMINPACK_FILES = \
    cminpack/cminpack.h \
    cminpack/cminpackP.h \
    cminpack/lmder1.c \
    cminpack/lmder.c \
    cminpack/dpmpar.c \
    cminpack/enorm.c \
    cminpack/qrfac.c \
    cminpack/lmpar.c \
    cminpack/qrsolv.c

# Scripts are not distributed by default, on the grounds that they might be
# derived objects.  ast_link, ast_link_adam and ast_cpp are exactly that --
# configure generates all three (see AC_CONFIG_FILES) -- so they must not be
# distributed: ast_link_adam alone bakes in the --with-external-pal,
# --with-external-cminpack and --without-yaml choices of whoever ran
# `make dist'.  makeh is a real source file and does ship.
bin_SCRIPTS = ast_link ast_link_adam
noinst_SCRIPTS = ast_cpp
dist_noinst_SCRIPTS = $(srcdir)/makeh

# Headers required by library users.  Both of the following lines
# indicate headers which are installed.
cincludedir = $(includedir)/star
if !NOFORTRAN
cinclude_HEADERS = GRF_PAR src/grf.h src/grf3d.h
else
cinclude_HEADERS = src/grf.h src/grf3d.h
endif

# Following are generated, so should not be distributed.
if STARLINK_BUILD
# Starlink's automake handles _MESSAGES; build rules come from STAR_MESSGEN.
if !NOFORTRAN
include_MESSAGES = AST_ERR ast_err.h
nodist_cinclude_HEADERS = ast.h AST_PAR
else
include_MESSAGES = ast_err.h
nodist_cinclude_HEADERS = ast.h
endif
else  # standalone
if !NOFORTRAN
nodist_cinclude_HEADERS = ast.h AST_PAR
else
nodist_cinclude_HEADERS = ast.h
endif
endif

# nodist_include_HEADERS is built up below from independent conditions; a base
# definition is needed so that all '+=' operations are valid in every condition.
nodist_include_HEADERS =

# In standalone mode, install the generated error-facility headers to includedir.
# This is analogous to what include_MESSAGES does in Starlink mode.
if !STARLINK_BUILD
if !NOFORTRAN
nodist_include_HEADERS += AST_ERR ast_err.h
else
nodist_include_HEADERS += ast_err.h
endif
endif

# Also install headers in main include directory for the benefit of
# legacy code that does '#include "ast.h"' instead of '#include
# "star/ast.h"'. Note, currently _MESSAGES files must be installed in
# the main include directory.
if TOPINCLUDE
if !NOFORTRAN
include_HEADERS = GRF_PAR src/grf.h src/grf3d.h
nodist_include_HEADERS += ast.h AST_PAR
else
include_HEADERS = src/grf.h src/grf3d.h
nodist_include_HEADERS += ast.h
endif
endif

if EXTERNAL_PAL
PAL_LIB =
else
PAL_LIB = libast_pal.la
endif

if EXTERNAL_CMINPACK
CMINPACK_LIB =
else
CMINPACK_LIB = libast_cminpack.la
endif

lib_LTLIBRARIES = \
    $(PAL_LIB) \
    $(CMINPACK_LIB) \
    libast.la \
    libast_err.la \
    libast_ems.la \
    libast_drama.la \
    libast_grf3d.la \
    libast_grf_2.0.la \
    libast_grf_3.2.la \
    libast_grf_5.6.la \
    libast_grf_log.la \
    libast_pgplot.la \
    libast_pgplot3d.la

# These are required to be defined for automake's parsing;
# If building with the Starlink macros defined these will
# be replaced with the correct paths used by the Starlink
# environment; otherwise a sensible system path
stardocsdir = @stardocsdir@
starnewsdir = @starnewsdir@
stardocs_DATA = @STAR_LATEX_DOCUMENTATION@
dist_starnews_DATA = ast.news
dist_pkgdata_DATA = COPYING

if !NOYAML
yaml = -DYAML
else
yaml =
endif

# Ensure generated headers in the build tree (object.h, version.h, f77.h)
# are found in out-of-source builds.
AM_CPPFLAGS = -I$(top_builddir)/src -I$(srcdir)/src

if !NOTHREADS
threadsafe = -DTHREAD_SAFE
else
threadsafe =
endif

# Make all library code position independent by default. This is handy for
# creating shareable libraries from the static ones (Java JNI libraries).
# Note we do not simply set the AM_CFLAGS variable, as this would also
# apply to programs compiled without using libtool, possibly causing the
# compilation to fail.
if !NOPIC
libast_la_CFLAGS = $(AM_CFLAGS) -prefer-pic $(threadsafe) $(yaml)
else
libast_la_CFLAGS = $(AM_CFLAGS) $(threadsafe) $(yaml)
endif

if !NOPIC
libast_err_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_ems_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_drama_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_grf3d_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_grf_2_0_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_grf_3_2_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_grf_5_6_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_pgplot_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_pgplot3d_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_pal_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
libast_cminpack_la_CFLAGS = $(AM_CFLAGS) -prefer-pic
endif

#  The module containing the main AST classes
libast_la_SOURCES = \
    $(GRP_C_ROUTINES) \
    $(F_C_ROUTINES) \
    $(GRP_C_INCLUDE_FILES) \
    $(F_C_INCLUDE_FILES) \
    $(GRP_F_INCLUDE_FILES) \
    $(WCSLIB_FILES)
libast_la_LDFLAGS = -version-info @version_info@

# Ensure libast links against libraries containing functions used within
# libast. If AST is configured --with-external-pal, then the internal
# libast_pal library will be empty, and we link to an external PAL
# library instead. Do the same for cminpack
if EXTERNAL_PAL
if EXTERNAL_CMINPACK
libast_la_LIBADD =  -lpal -lcminpack $(LIBM)
else
libast_la_LIBADD = -lpal libast_cminpack.la $(LIBM)
endif
else
if EXTERNAL_CMINPACK
libast_la_LIBADD =  libast_pal.la -lcminpack $(LIBM)
else
libast_la_LIBADD = libast_pal.la libast_cminpack.la $(LIBM)
endif
endif



# AST_PAR is really part of GRP_F_INCLUDE_FILES, but it must not be
# distributed, so list it separately.
if !NOFORTRAN
nodist_libast_la_SOURCES = \
    ast.h \
    ast_err.h \
    AST_PAR \
    AST_ERR
else
nodist_libast_la_SOURCES = \
    ast.h \
    ast_err.h
endif

#  The default error reporting module.
libast_err_la_SOURCES = src/err_null.c
libast_err_la_LDFLAGS = -version-info @version_info@

#  The error reporting module that uses EMS to deliver errors.
libast_ems_la_SOURCES = src/err_ems.c
libast_ems_la_LDFLAGS = -version-info @version_info@

#  The error reporting module that uses DRAMA Ers to deliver errors.
libast_drama_la_SOURCES = src/err_drama.c
libast_drama_la_LDFLAGS = -version-info @version_info@

#  The module containing null implementations of the 3D graphics routines
#  required by AST
libast_grf3d_la_SOURCES = src/grf3d.c
libast_grf3d_la_LDFLAGS = -version-info @version_info@

#  The module containing null implementations of the graphics routines
#  required by AST V2.0
libast_grf_2_0_la_SOURCES = src/grf_2.0.c
libast_grf_2_0_la_LDFLAGS = -version-info @version_info@

#  The module containing null implementations of the graphics routines
#  added by AST V3.2 and not present in V2.0
libast_grf_3_2_la_SOURCES = src/grf_3.2.c
libast_grf_3_2_la_LDFLAGS = -version-info @version_info@

#  The module containing null implementations of the graphics routines
#  added by AST V5.6 and not present in V3.2
libast_grf_5_6_la_SOURCES = src/grf_5.6.c
libast_grf_5_6_la_LDFLAGS = -version-info @version_info@

#  The graphics module that logs 2D graphics operations (optionally as SVG).
#  Used by the testgrid test program to capture astGrid output for comparison.
libast_grf_log_la_SOURCES = src/grf_log.c src/grf_log.h
libast_grf_log_la_LDFLAGS = -version-info @version_info@

#  The graphics module that uses PGPLOT for 2D graphical output.
libast_pgplot_la_SOURCES = $(GRF_PGPLOT_SOURCES)
libast_pgplot_la_LDFLAGS = -version-info @version_info@

#  The graphics module that uses PGPLOT for 3D graphical output.
libast_pgplot3d_la_SOURCES = $(GRF3D_PGPLOT_SOURCES)
libast_pgplot3d_la_LDFLAGS = -version-info @version_info@

#  Positional astronomy libraries.
libast_pal_la_SOURCES = $(PAL_FILES)
libast_pal_la_LDFLAGS = -version-info @version_info@
libast_pal_la_LIBADD = $(LIBM)

#  Cminpack
libast_cminpack_la_SOURCES = $(CMINPACK_FILES)
libast_cminpack_la_LDFLAGS = -version-info @version_info@

# The following files are built by the targets in this makefile.
MAINTAINERCLEANFILES = src/version.h ast_err.h AST_ERR builddocs addversion \
	ast.h stamp-docs $(DOCUMENTATION_PRODUCTS)
if !NOFORTRAN
CLEANFILES = AST_PAR ast.h
else
CLEANFILES = ast.h
endif

# Special cases start here

# Unconditional base so that '+=' works in all nested conditions below.
noinst_PROGRAMS =

# The AST_PAR include file is produced by compiling the astbad.c
# program and editing its output into the ast_par.source file (while
# also changing the "E" exponent character to a "D").  The astbad.c
# and ast_par.source must be distributed (the generation of the
# AST__BAD value must be done on the build host) but not installed.
if !NOFORTRAN
noinst_PROGRAMS += astbad$(EXEEXT)
astbad_SOURCES = src/astbad.c src/pointset.h
AST_PAR: $(srcdir)/ast_par.source astbad$(EXEEXT)
	ASTBAD=`./astbad$(EXEEXT) AST__BAD` && \
	ASTNAN=`./astbad$(EXEEXT) AST__NAN` && \
	ASTNANF=`./astbad$(EXEEXT) AST__NANF` && \
	sed -e 's/<AST__BAD>/'`echo $$ASTBAD | tr 'E' 'D'`'/' \
	    -e 's/<AST__NAN>/'`echo $$ASTNAN | tr 'E' 'D'`'/' \
	    -e 's/<AST__NANR>/'`echo $$ASTNANF | tr 'E' 'D'`'/' \
	    $(srcdir)/ast_par.source >$@
endif

# In standalone mode, build messgen from source to generate the error-facility
# headers (ast_err.h and AST_ERR) from ast_err.msg.  Starlink builds get both
# the binary and the rules from the STAR_MESSGEN macro and automake's
# _MESSAGES primary instead, so neither is declared here.
#
# Not called MESSGEN: STAR_MESSGEN substitutes a variable of that name, and
# assigning to it here would override configure's own value -- which automake
# reports on every Starlink bootstrap as "MESSGEN was already defined in
# condition TRUE".
#
# messgen translates ast_err.msg into ast_err.h and AST_ERR, and the
# translation is machine independent, so the two files are generated here and
# then distributed (see EXTRA_DIST below). A build from a tarball uses what
# was shipped and needs neither messgen nor ast_err.msg, which is what makes
# it cross compilable: nothing has to be run on the build machine.
#
# Where messgen does run, it runs as soon as it is built, so it is built with
# the compiler for the build machine rather than with $(CC) -- which in a
# cross compilation produces executables that cannot run here. That puts it
# outside automake's program rules, so it is named in EXTRA_DIST and
# CLEANFILES by hand.
if !STARLINK_BUILD
if PREDIST_BUILD
AST_MESSGEN = star_compat/messgen
CLEANFILES += $(AST_MESSGEN)

$(AST_MESSGEN): $(srcdir)/star_compat/messgen.c
	$(AM_V_at)$(MKDIR_P) star_compat
	$(AM_V_GEN)$(CC_FOR_BUILD) $(CFLAGS_FOR_BUILD) $(LDFLAGS_FOR_BUILD) \
	    -o $@ $(srcdir)/star_compat/messgen.c

ast_err.h AST_ERR: $(srcdir)/ast_err.msg $(AST_MESSGEN)
	$(AST_MESSGEN) -cF $(srcdir)/ast_err.msg
endif
endif

# Extra files and directories that should be included in the source dist
# but may not be directly listed as build target dependencies.
#
# cminpack/ is an object-output dir in a VPATH build, so don't dist it as a
# whole directory (that ships the built objects too); just extra_dist its
# non-source files.
EXTRA_DIST = $(srcdir)/ast_par.source $(srcdir)/ast_err.msg \
    sun210_figures sun211_figures pal erfa \
    $(srcdir)/build-aux/tap-driver.sh \
    $(srcdir)/cminpack/CopyrightMINPACK.txt \
    $(srcdir)/cminpack/README.md \
    $(srcdir)/star_compat/messgen.c \
    $(srcdir)/star_compat/starlink_compat.m4 \
    $(srcdir)/star_compat/latexsupport/README.md \
    $(srcdir)/star_compat/latexsupport/ast.sty \
    $(srcdir)/star_compat/latexsupport/sst.sty \
    $(srcdir)/star_compat/latexsupport/starabbrev.sty \
    $(srcdir)/star_compat/latexsupport/starlink.cls \
    $(srcdir)/star_compat/latexsupport/starstyle.sty

# Starlink automake adds these automatically; GNU automake needs the list.
if !STARLINK_BUILD
EXTRA_DIST += $(stardocs_DATA)
endif

# Distribute files required by CMake build.  Everything in cmake/ is a build
# input, so the dist-hook below ships the whole directory rather than naming
# each file -- a list here has to be extended every time a helper is added,
# and nothing catches it when it is not.
EXTRA_DIST += \
    CMakeLists.txt \
    version.number

# The error-facility headers, generated above before distribution. No
# $(srcdir) prefix: they are made in the build tree, and automake's distdir
# rule looks there first, as it does for src/version.h.
EXTRA_DIST += ast_err.h AST_ERR

# The autotools build doesn't detect plplot yet, so the plplot grf
# backend is never built here (but it is built by CMake); for now ensure
# the sources for it are included; likewise ast_test.c
EXTRA_DIST += \
    ast_test.c \
    src/grf_plplot.c \
    src/grf3d_plplot.c \
    src/pl3d.h

# ast.h depends on the error-facility files.  ast.h _could_ be made
# before distribution, but since it's generated from other distributed
# files, it's more robust to distribute makeh and make ast.h on the
# build host.
ast.h: $(AST_H_FILES_HEAD) ast_err.h $(AST_H_FILES_TAIL) $(srcdir)/makeh config.h
	@PERL@ $(srcdir)/makeh -s $(srcdir) -b $(top_builddir) \
	    $(AST_H_FILES_HEAD) ast_err.h $(AST_H_FILES_TAIL) >$@

# AST_ERR and ast_err.h are `generated source files', and so must be
# generated before any other compilations are done.  Note that these
# files are generated on the distribution host, and so this
# declaration has no effect post-distribution.
#
# AST_PAR is also a generated source file, but it should _not_ be
# included in the list of BUILT_SOURCES, otherwise `make' tries to make
# it before it makes the `astbad' program it depends on.  Instead,
# just rely on the dependencies expressed in the main body above to
# have AST_PAR built before it is needed.
#
# version.h is included by object.h, and thus indirectly by most modules.
# It's most straightforward to build it at the beginning.
if !NOFORTRAN
BUILT_SOURCES = AST_ERR ast_err.h src/version.h ast.h
else
BUILT_SOURCES = ast_err.h src/version.h ast.h
endif

# Ensure the main library is built before check-recursive descends into
# ast_tester (which links against it).  Without this, a cold `make check`
# from a fresh out-of-source build would fail because check only guarantees
# BUILT_SOURCES are ready before recursing.
check-recursive: all-am

#  Form a second link to the main object library (static and shared). This
#  is used when a second pass through the library is needed during linking
#  to resolve references made within other AST libraries (e.g. the grf
#  modules, etc), to functions defined within libast (e.g. memory management
#  and error reporting functions). Do not forget to change the contents of
#  the libast_pass2.la file to refer to libast_pass2.* rather than libast.*.
#  Use target install-exec-hook rather than install-exec-local so that the
#  soft links and files are created *after* the main library has been
#  installed.
install-exec-hook: libast.la
	$(mkdir_p) $(DESTDIR)$(libdir)
	cd $(DESTDIR)$(libdir); \
	for f in `ls libast.*`; do \
	   ff=`echo $$f | sed -e 's/libast/libast_pass2/'`; \
	   if test -f "$$ff"; then rm "$$ff"; fi; \
	   $(LN_S) $$f $$ff; \
	   $(MANIFEST) && echo "MANIFEST:$(DESTDIR)$(libdir)/$$ff" || :; \
	done; \
	if test -f "libast.la"; then \
	   if test -f "libast_pass2.la"; then rm "libast_pass2.la"; fi; \
	   sed -e 's/libast\./libast_pass2\./g' libast.la > libast_pass2.la; \
	fi

# Remove the second-link libast_pass2.* files and links created by
# install-exec-hook.
uninstall-hook:
	rm -f $(DESTDIR)$(libdir)/libast_pass2.*

# Make pre-distribution files.  These are files which are required for
# building the distribution, but are not themselves distributed.
# The source files here should be mentioned in STAR_PREDIST_SOURCES in
# configure.ac
@PREDIST@predist_subs = sed \
@PREDIST@    -e 's,@PACKAGE_VERSION\@,$(PACKAGE_VERSION),' \
@PREDIST@    -e 's,@PACKAGE_VERSION_MAJOR\@,$(PACKAGE_VERSION_MAJOR),' \
@PREDIST@    -e 's,@PACKAGE_VERSION_MINOR\@,$(PACKAGE_VERSION_MINOR),' \
@PREDIST@    -e 's,@PACKAGE_VERSION_RELEASE\@,$(PACKAGE_VERSION_RELEASE),' \
@PREDIST@    -e 's,@PERL\@,$(PERL),' \
@PREDIST@    -e 's,@STARPROLOG\@,$(STARPROLOG),' \
@PREDIST@    -e 's,@PROLAT\@,$(PROLAT),' \
@PREDIST@    -e 's,@PDFLATEX\@,$(PDFLATEX),' \
@PREDIST@    -e 's,@STARLINK\@,$(STARLINK),'

# Makefile is the honest prerequisite for these -- it carries the version and
# the tool paths that predist_subs substitutes, which $(srcdir)/configure.ac
# did not -- but it is regenerated by any config.status run, and rewriting
# the outputs then would be expensive for nothing: version.h reaches almost
# every source file through object.h, and builddocs drives two pdflatex
# passes over each of the two manuals.  Replace each output only when its
# content really changed.  The recipes therefore run on every make, at the
# cost of one sed over a small file when there is nothing to do.
@PREDIST@src/version.h: $(srcdir)/src/version.h.in Makefile
@PREDIST@	$(predist_subs) $(srcdir)/src/version.h.in >$@.tmp
@PREDIST@	if cmp -s $@.tmp $@; then rm -f $@.tmp; else mv -f $@.tmp $@; fi
@PREDIST@builddocs: $(srcdir)/builddocs.in Makefile
@PREDIST@	$(predist_subs) $(srcdir)/builddocs.in >$@.tmp
@PREDIST@	if cmp -s $@.tmp $@; then rm -f $@.tmp; \
@PREDIST@	else mv -f $@.tmp $@; chmod +x $@; fi
@PREDIST@addversion: $(srcdir)/addversion.in Makefile
@PREDIST@	$(predist_subs) $(srcdir)/addversion.in >$@.tmp
@PREDIST@	if cmp -s $@.tmp $@; then rm -f $@.tmp; \
@PREDIST@	else mv -f $@.tmp $@; chmod +x $@; fi
CLEANFILES += src/version.h.tmp builddocs.tmp addversion.tmp

# One invocation produces both manuals. Force the shared stamp when any
# output is missing, so parallel make also handles deleted outputs only once.
@PREDIST@missing_docs = $(filter-out $(wildcard $(PAPER_DOCUMENTATION)),$(PAPER_DOCUMENTATION))
@PREDIST@.PHONY: force-docs
@PREDIST@stamp-docs: $(if $(missing_docs),force-docs)
@PREDIST@stamp-docs: builddocs addversion ast_link ast_link_adam \
@PREDIST@    $(GRP_C_ROUTINES) src/fchannel.c $(srcdir)/sun_master.tex \
@PREDIST@    $(srcdir)/getatt $(srcdir)/doincludes $(srcdir)/selectfc \
@PREDIST@    $(srcdir)/addlinks $(srcdir)/addcopyright \
@PREDIST@    $(wildcard $(srcdir)/star_compat/latexsupport/*.sty) \
@PREDIST@    $(srcdir)/star_compat/latexsupport/starlink.cls \
@PREDIST@    $(wildcard $(srcdir)/sun210_figures/*.pdf $(srcdir)/sun211_figures/*.pdf)
@PREDIST@	./builddocs "$(srcdir)"
@PREDIST@	touch $@
@PREDIST@$(PAPER_DOCUMENTATION): stamp-docs
@PREDIST@	@test -f $@

if !STARLINK_BUILD
# Starlink automake supplies the equivalent .tex.htx_tar rule itself; this is
# that rule, written out per document.  star2html's exit status is ignored
# because it can fail harmlessly, so the test for the .htx directory is what
# decides whether the run worked.  A <doc>.htx_tar.extras file, if present,
# lists files to add to the directory before it is rolled up.
@PREDIST@sun210.htx_tar: sun210.tex
@PREDIST@	- $(STAR2HTML) $(STAR2HTML_FLAGS) $<
@PREDIST@	test -d sun210.htx
@PREDIST@	if test -f sun210.htx_tar.extras; then \
@PREDIST@	  for f in `cat sun210.htx_tar.extras`; do \
@PREDIST@	    test -f "$$f" && cp "$$f" sun210.htx || true; \
@PREDIST@	  done; else :; fi
@PREDIST@	tar cf $@ sun210.htx
@PREDIST@sun211.htx_tar: sun211.tex
@PREDIST@	- $(STAR2HTML) $(STAR2HTML_FLAGS) $<
@PREDIST@	test -d sun211.htx
@PREDIST@	if test -f sun211.htx_tar.extras; then \
@PREDIST@	  for f in `cat sun211.htx_tar.extras`; do \
@PREDIST@	    test -f "$$f" && cp "$$f" sun211.htx || true; \
@PREDIST@	  done; else :; fi
@PREDIST@	tar cf $@ sun211.htx

# star2html leaves directories behind, which CLEANFILES cannot remove.
clean-local:
	-rm -rf sun210.htx sun211.htx
endif

# The documents come with the distribution, so per the GNU standards `clean'
# preserves them and only `maintainer-clean' removes them; see
# MAINTAINERCLEANFILES above.  Sweeping them into CLEANFILES would make an
# ordinary `make clean' cost two more pdflatex passes over sun_master.tex.

# Installation check

noinst_LTLIBRARIES =

test: install
	cd ast_tester && STARLINK=@STARLINK@ PGPLOT_DIR=@STARLINK@/bin FFLAGS="@STAR_FFLAGS_TEST@" ./ast_tester -nd


#  A release tarball has always carried the LaTeX class and style files at its
#  top level, beside the generated .tex, so the documents can be re-typeset
#  from the tarball alone.  Keep doing that, taking them from the vendored
#  copies in the tree (see star_compat/latexsupport/README.md) rather than from
#  a Starlink installation named by an environment variable.
LATEX_SUPPORT_FILES = starlink.cls starabbrev.sty starstyle.sty sst.sty ast.sty

dist-hook:
	for f in $(LATEX_SUPPORT_FILES); do \
	    cp -p $(srcdir)/star_compat/latexsupport/$$f $(distdir)/ || exit 1; \
	done
	@list=`cd "$(srcdir)" && find cmake -type f ! -name '.*'`; \
	for rel in $$list; do \
	    $(MKDIR_P) "$(distdir)/`dirname $$rel`"; \
	    cp -p "$(srcdir)/$$rel" "$(distdir)/$$rel" || exit 1; \
	done
#  src/f77.h and src/object.h are generated by configure from the .h.in files
#  beside them, and what it substitutes describes whoever ran `make dist' --
#  the Fortran ABI types in f77.h, the --with-pthreads setting in object.h.
#  They arrive here only because they are listed among libast's sources, whose
#  order is load-bearing for the ast.h rule and so is left alone; drop them
#  from the tarball instead, leaving the templates that configure reads.
#
#  src/version.h stays: its rule is guarded by @PREDIST@, so an unpacked
#  tarball has no way to remake it and must carry the generated file.
	rm -f $(distdir)/src/f77.h $(distdir)/src/object.h
	$(MAKE) $(AM_MAKEFLAGS) distdir="$(distdir)" dist-check-tracked

#  The lists above say what to ship; this checks what actually arrived.  Every
#  file git tracks under cmake/, ast_tester/ and src/, bar the exclusions below,
#  must be in the tarball -- otherwise the tarball configures and then fails to
#  build, which is how cmake/run_simplify_noop_test.cmake and
#  ast_tester/testimmutable.c each survived as far as a full distcheck before
#  anyone noticed.  Checking every tracked file, rather than the extensions the
#  dist-hook patterns happen to match, is what makes this catch a kind of file
#  nobody thought of.
#
#  This runs as the last step of the top-level dist-hook, which automake
#  invokes after the subdirectories have staged their own files, so
#  ast_tester/ is complete by now.  It is skipped where there is no git
#  checkout to ask, which is why it is a guard on `make dist' and not a
#  guarantee about an arbitrary tarball.
#  What deliberately does not ship: developer tooling, the coverage harness and
#  the class templates a new AST class is copied from, none of which either
#  build system needs.  src/version.h.in is the predist source for src/version.h,
#  which ships in generated form instead.  Stated as exclusions rather than
#  inclusions on purpose -- a file that is neither excluded here nor
#  distributed fails the check, so leaving one out becomes a decision instead
#  of an oversight.
DIST_CHECK_EXCLUDE = \
    ':!*.gitignore' \
    ':!src/ftemplateclass.c' \
    ':!src/grf_null.c' \
    ':!src/stcschan-demo*.c' \
    ':!src/templateclass.c' \
    ':!src/templateclass.h' \
    ':!src/version.h.in' \
    ':!ast_tester/coverage' \
    ':!ast_tester/asdftest.py' \
    ':!ast_tester/ast_tester' \
    ':!ast_tester/doplot' \
    ':!ast_tester/makeplot' \
    ':!ast_tester/maketest' \
    ':!ast_tester/moctohtml' \
    ':!ast_tester/simplify_pathways.md' \
    ':!ast_tester/fixtures/*'

# The full test corpus, for verifying a release rather than for shipping one.
# A distinct archive name so that a full tarball is never mistaken for the
# release artifact.
#
# Overriding distdir on the command line is what renames the archive.  If a
# future automake computes the archive name independently of distdir, fall back
# to running dist and renaming the result.
fulldist:
	$(MAKE) AST_DIST_FULL=1 distdir=$(PACKAGE)-$(VERSION)-full dist

.PHONY: fulldist

#  Two checks, because the two kinds of file fail differently.  A source file
#  must always ship: leaving one out makes the tarball configure and then fail to
#  build, which is how testimmutable.c and run_simplify_noop_test.cmake each
#  survived to a full distcheck.  A fixture may be left out on purpose, so what
#  matters there is that the tarball and DIST_MANIFEST agree, in both directions
#  -- a file shipped without an entry and an entry matching nothing are both
#  errors, so the fixture set stays a stated decision rather than an oversight.
dist-check-tracked:
	@test -d "$(top_srcdir)/.git" || exit 0; \
	tracked=`cd "$(top_srcdir)" && \
	    git ls-files cmake ast_tester src $(DIST_CHECK_EXCLUDE)`; \
	missing=; \
	for rel in $$tracked; do \
	    test -e "$(distdir)/$$rel" || missing="$$missing $$rel"; \
	done; \
	if test -n "$$missing"; then \
	    echo "make dist: tracked files missing from the distribution:" >&2; \
	    for rel in $$missing; do echo "    $$rel" >&2; done; \
	    echo "Add them to EXTRA_DIST, or widen the dist-hook patterns." >&2; \
	    exit 1; \
	fi
	@test -d "$(top_srcdir)/.git" || exit 0; \
	if test "x$(AST_DIST_FULL)" = x1; then \
	    expected=`cd "$(top_srcdir)" && git ls-files 'ast_tester/fixtures/*' \
	        | sed 's|^ast_tester/||'`; \
	else \
	    expected=`cd "$(top_srcdir)/ast_tester" && \
	        $(SHELL) ./dist-fixtures.sh fixtures/DIST_MANIFEST` || exit 1; \
	fi; \
	missing=; \
	for rel in $$expected; do \
	    test -e "$(distdir)/ast_tester/$$rel" || missing="$$missing $$rel"; \
	done; \
	if test -n "$$missing"; then \
	    echo "make dist: fixtures missing from the distribution:" >&2; \
	    for rel in $$missing; do echo "    $$rel" >&2; done; \
	    exit 1; \
	fi; \
	got=`mktemp "$${TMPDIR:-/tmp}/ast_got.XXXXXX"`; \
	want=`mktemp "$${TMPDIR:-/tmp}/ast_want.XXXXXX"`; \
	( cd "$(distdir)/ast_tester" && find fixtures -type f ! -name '.*' \
	    ! -name DIST_TIER ) | sort > "$$got"; \
	printf '%s\n' $$expected | sort > "$$want"; \
	extra=`comm -23 "$$got" "$$want"`; \
	rm -f "$$got" "$$want"; \
	if test -n "$$extra"; then \
	    echo "make dist: fixtures shipped but not in DIST_MANIFEST:" >&2; \
	    for rel in $$extra; do echo "    $$rel" >&2; done; \
	    exit 1; \
	fi

.PHONY: dist-check-tracked

# `make distcheck` reconfigures a throw-away build from scratch, so re-pass the
# compilers and libyaml location this build was configured with.
AM_DISTCHECK_CONFIGURE_FLAGS = \
    CC='$(CC)' \
    F77='$(F77)' \
    YAML_CFLAGS='$(YAML_CFLAGS)' \
    YAML_LIBS='$(YAML_LIBS)'

# The tarball has to be buildable with CMake too, but that is a property of the
# tarball rather than of `make dist': requiring CMake in order to cut a release
# would be backwards, since nothing CMake needs is generated at distribution
# time -- unlike the autotools half-built state, CMake regenerates everything
# from CMakeLists.txt.  That check therefore lives in CI, where both toolchains
# are present anyway; see .github/workflows/autotools.yaml.  What guards
# `make dist' here is dist-check-tracked above, which needs only git.
