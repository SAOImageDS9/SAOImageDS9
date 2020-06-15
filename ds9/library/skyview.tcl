#  Copyright (C) 1999-2018
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc SkyViewDef {} {
    global skyview
    global iskyview

    set iskyview(top) .skyview
    set iskyview(mb) .skyviewmb

    set skyview(sky) fk5
    set skyview(rformat) arcsec
    set skyview(width) 300
    set skyview(height) 300
    set skyview(width,pixels) 300
    set skyview(height,pixels) 300
    set skyview(mode) new
    set skyview(save) 0
    set skyview(survey) dss
}

proc SkyViewDialog {} {
    global skyview
    global iskyview
    global wcs

    if {[winfo exists $iskyview(top)]} {
	raise $iskyview(top)
	return
    }

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SkyViewDialog"
    }

    set varname dskyview
    upvar #0 $varname var
    global $varname

    set var(top) $iskyview(top)
    set var(mb) $iskyview(mb)
    set var(sky) $skyview(sky)
    set var(skyformat) $wcs(skyformat)
    set var(rformat) $skyview(rformat)
    set var(width) $skyview(width)
    set var(height) $skyview(height)
    set var(width,pixels) $skyview(width,pixels)
    set var(height,pixels) $skyview(height,pixels)
    set var(mode) $skyview(mode)
    set var(save) $skyview(save)
    set var(survey) $skyview(survey)

    set w $var(top)
    IMGSVRInit $varname "HEASARC-SkyView [msgcat::mc {Server}]" \
	SkyViewExec SkyViewAck

    # pixels size
    set f $w.param
    ttk::label $f.pimage -text [msgcat::mc {Image}]
    ttk::entry $f.pw -textvariable ${varname}(width,pixels) -width 14
    ttk::entry $f.ph -textvariable ${varname}(height,pixels) -width 14
    ttk::label $f.ptitle -text [msgcat::mc {Pixels}]

    grid $f.pimage x $f.pw x $f.ph $f.ptitle -padx 2 -pady 2 -sticky w

    ThemeMenu $var(mb).survey
    $var(mb) add cascade -label Survey -menu $var(mb).survey
    $var(mb).survey add cascade -label {Gamma Ray} \
	-menu $var(mb).survey.gamma
    $var(mb).survey add cascade -label {Hard X-ray} \
	-menu $var(mb).survey.hard
    $var(mb).survey add cascade -label {X-ray: Swift BAT} \
	-menu $var(mb).survey.bat
    $var(mb).survey add cascade -label {Soft X-ray} \
	-menu $var(mb).survey.soft
    $var(mb).survey add cascade -label {Diffuse X-ray} \
	-menu $var(mb).survey.diffuse
    $var(mb).survey add cascade -label {UV} \
	-menu $var(mb).survey.uv
    $var(mb).survey add cascade -label {Optical: DSS} \
	-menu $var(mb).survey.dss
    $var(mb).survey add cascade -label {Optical: SDSS} \
	-menu $var(mb).survey.sdss
    $var(mb).survey add cascade -label {Other Optical} \
	-menu $var(mb).survey.other
    $var(mb).survey add cascade -label {IR: IRAS} \
	-menu $var(mb).survey.iras
    $var(mb).survey add cascade -label {IR: 2MASS} \
	-menu $var(mb).survey.ir2mass
    $var(mb).survey add cascade -label {IR: UKIDSS} \
	-menu $var(mb).survey.irukidss
    $var(mb).survey add cascade -label {IR: WISE} \
	-menu $var(mb).survey.irwise
    $var(mb).survey add cascade -label {IR: AKARI} \
	-menu $var(mb).survey.irakari
    $var(mb).survey add cascade -label {IR: Planck} \
	-menu $var(mb).survey.planck
    $var(mb).survey add cascade -label {IR: WMAP/COBE} \
	-menu $var(mb).survey.wmap
    $var(mb).survey add cascade -label {Radio: Ghz} \
	-menu $var(mb).survey.radioghz
    $var(mb).survey add cascade -label {Radio: Mhz} \
	-menu $var(mb).survey.radiomhz
    $var(mb).survey add cascade -label {All: GOODS/HDF/CDF} \
	-menu $var(mb).survey.goods

    set f $var(mb).survey.gamma
    ThemeMenu $f
    $f add radiobutton -label {Fermi 5} \
	-variable ${varname}(survey) -value {Fermi 5}
    $f add radiobutton -label {Fermi 4} \
	-variable ${varname}(survey) -value {Fermi 4}
    $f add radiobutton -label {Fermi 3} \
	-variable ${varname}(survey) -value {Fermi 3}
    $f add radiobutton -label {Fermi 2} \
	-variable ${varname}(survey) -value {Fermi 2}
    $f add radiobutton -label {Fermi 1} \
	-variable ${varname}(survey) -value {Fermi 1}
    $f add separator
    $f add radiobutton -label {EGRET (3D)} \
	-variable ${varname}(survey) -value {EGRET (3D)}
    $f add radiobutton -label {EGRET <100 Mev} \
	-variable ${varname}(survey) -value {EGRET <100 Mev}
    $f add radiobutton -label {EGRET >100 Mev} \
	-variable ${varname}(survey) -value {EGRET >100 Mev}
    $f add separator
    $f add radiobutton -label {COMPTEL} \
	-variable ${varname}(survey) -value {COMPTEL}

    set f $var(mb).survey.hard
    ThemeMenu $f
    $f add radiobutton -label {INT GAL 17-35 Flux} \
	-variable ${varname}(survey) -value {INT GAL 17-35 Flux}
    $f add radiobutton -label {INT GAL 17-60 Flux} \
	-variable ${varname}(survey) -value {INT GAL 17-60 Flux}
    $f add radiobutton -label {INT GAL 35-80 Flux} \
	-variable ${varname}(survey) -value {INT GAL 35-80 Flux}
    $f add separator
    $f add radiobutton -label {INTEGRAL/SPI GC} \
	-variable ${varname}(survey) -value {INTEGRAL/SPI GC}
    $f add radiobutton -label {GRANAT/SIGMA} \
	-variable ${varname}(survey) -value {GRANAT/SIGMA}
    $f add separator
    $f add radiobutton -label {RXTE Allsky 3-8keV Flux} \
	-variable ${varname}(survey) -value {RXTE Allsky 3-8keV Flux}
    $f add radiobutton -label {RXTE Allsky 3-20keV Flux} \
	-variable ${varname}(survey) -value {RXTE Allsky 3-20keV Flux}
    $f add radiobutton -label {RXTE Allsky 8-20keV Flux} \
	-variable ${varname}(survey) -value {RXTE Allsky 8-20keV Flux}

    set f $var(mb).survey.bat
    ThemeMenu $f
    $f add radiobutton -label {BAT SNR 14-195} \
	-variable ${varname}(survey) -value {BAT SNR 14-195}
    $f add radiobutton -label {BAT SNR 14-20} \
	-variable ${varname}(survey) -value {BAT SNR 14-20}
    $f add radiobutton -label {BAT SNR 20-24} \
	-variable ${varname}(survey) -value {BAT SNR 20-24}
    $f add radiobutton -label {BAT SNR 24-35} \
	-variable ${varname}(survey) -value {BAT SNR 24-35}
    $f add radiobutton -label {BAT SNR 35-50} \
	-variable ${varname}(survey) -value {BAT SNR 35-50}
    $f add radiobutton -label {BAT SNR 50-75} \
	-variable ${varname}(survey) -value {BAT SNR 50-75}
    $f add radiobutton -label {BAT SNR 75-100} \
	-variable ${varname}(survey) -value {BAT SNR 75-100}
    $f add radiobutton -label {BAT SNR 100-150} \
	-variable ${varname}(survey) -value {BAT SNR 100-150}
    $f add radiobutton -label {BAT SNR 150-195} \
	-variable ${varname}(survey) -value {BAT SNR 150-195}

    set f $var(mb).survey.soft
    ThemeMenu $f
    $f add radiobutton -label {RASS-Cnt Soft} \
	-variable ${varname}(survey) -value {RASS-Cnt Soft}
    $f add radiobutton -label {RASS-Cnt Hard} \
	-variable ${varname}(survey) -value {RASS-Cnt Hard}
    $f add radiobutton -label {RASS-Cnt Broad} \
	-variable ${varname}(survey) -value {RASS-Cnt Broad}
    $f add separator
    $f add radiobutton -label {PSPC 2.0 Deg-Int} \
	-variable ${varname}(survey) -value {PSPC 2.0 Deg-Int}
    $f add radiobutton -label {PSPC 1.0 Deg-Int} \
	-variable ${varname}(survey) -value {PSPC 1.0 Deg-Int}
    $f add radiobutton -label {PSPC 0.6 Deg-Int} \
	-variable ${varname}(survey) -value {PSPC 0.6 Deg-Int}
    $f add separator
    $f add radiobutton -label {HRI} \
	-variable ${varname}(survey) -value {HRI}
    $f add radiobutton -label {HEAO 1 A-2} \
	-variable ${varname}(survey) -value {HEAO 1 A-2}

    set f $var(mb).survey.diffuse
    ThemeMenu $f
    $f add radiobutton -label {RASS Background 1} \
	-variable ${varname}(survey) -value {RASS Background 1}
    $f add radiobutton -label {RASS Background 2} \
	-variable ${varname}(survey) -value {RASS Background 2}
    $f add radiobutton -label {RASS Background 3} \
	-variable ${varname}(survey) -value {RASS Background 3}
    $f add radiobutton -label {RASS Background 4} \
	-variable ${varname}(survey) -value {RASS Background 4}
    $f add radiobutton -label {RASS Background 5} \
	-variable ${varname}(survey) -value {RASS Background 5}
    $f add radiobutton -label {RASS Background 6} \
	-variable ${varname}(survey) -value {RASS Background 6}
    $f add radiobutton -label {RASS Background 7} \
	-variable ${varname}(survey) -value {RASS Background 7}

    set f $var(mb).survey.uv
    ThemeMenu $f
    $f add radiobutton -label {GALEX Near UV} \
	-variable ${varname}(survey) -value {GALEX Near UV}
    $f add radiobutton -label {GALEX Far UV} \
	-variable ${varname}(survey) -value {GALEX Far UV}
    $f add separator
    $f add radiobutton -label {ROSAT WFC F1} \
	-variable ${varname}(survey) -value {ROSAT WFC F1}
    $f add radiobutton -label {ROSAT WFC F2} \
	-variable ${varname}(survey) -value {ROSAT WFC F2}
    $f add separator
    $f add radiobutton -label {EUVE 171 A} \
	-variable ${varname}(survey) -value {EUVE 171 A}
    $f add radiobutton -label {EUVE 405 A} \
	-variable ${varname}(survey) -value {EUVE 405 A}
    $f add radiobutton -label {EUVE 555 A} \
	-variable ${varname}(survey) -value {EUVE 555 A}

    set f $var(mb).survey.dss
    ThemeMenu $f
    $f add radiobutton -label {DSS} \
	-variable ${varname}(survey) -value {DSS}
    $f add separator
    $f add radiobutton -label {DSS1 Blue} \
	-variable ${varname}(survey) -value {DSS1 Blue}
    $f add radiobutton -label {DSS1 Red} \
	-variable ${varname}(survey) -value {DSS1 Red}
    $f add separator
    $f add radiobutton -label {DSS2 Red} \
	-variable ${varname}(survey) -value {DSS2 Red}
    $f add radiobutton -label {DSS2 Blue} \
	-variable ${varname}(survey) -value {DSS2 Blue} 
    $f add separator
    $f add radiobutton -label {DSS2 IR} \
	-variable ${varname}(survey) -value {DSS2 IR}

    set f $var(mb).survey.sdss
    ThemeMenu $f
    $f add radiobutton -label {SDSSg} \
	-variable ${varname}(survey) -value {SDSSg}
    $f add radiobutton -label {SDSSi} \
	-variable ${varname}(survey) -value {SDSSi}
    $f add radiobutton -label {SDSSr} \
	-variable ${varname}(survey) -value {SDSSr}
    $f add radiobutton -label {SDSSu} \
	-variable ${varname}(survey) -value {SDSSu}
    $f add radiobutton -label {SDSSz} \
	-variable ${varname}(survey) -value {SDSSz}
    $f add separator
    $f add radiobutton -label {SDSSdr7g} \
	-variable ${varname}(survey) -value {SDSSdr7g}
    $f add radiobutton -label {SDSSdr7i} \
	-variable ${varname}(survey) -value {SDSSdr7i}
    $f add radiobutton -label {SDSSdr7r} \
	-variable ${varname}(survey) -value {SDSSdr7r}
    $f add radiobutton -label {SDSSdr7u} \
	-variable ${varname}(survey) -value {SDSSdr7u}
    $f add radiobutton -label {SDSSdr7z} \
	-variable ${varname}(survey) -value {SDSSdr7z}

    set f $var(mb).survey.other
    ThemeMenu $f
    $f add radiobutton -label {Mellinger Red} \
	-variable ${varname}(survey) -value {Mellinger Red}
    $f add radiobutton -label {Mellinger Green} \
	-variable ${varname}(survey) -value {Mellinger Green}
    $f add radiobutton -label {Mellinger Blue} \
	-variable ${varname}(survey) -value {Mellinger Blue}
    $f add separator
    $f add radiobutton -label {NEAT} \
	-variable ${varname}(survey) -value {NEAT}
    $f add radiobutton -label {H-Alpha Comp} \
	-variable ${varname}(survey) -value {H-Alpha Comp}
    $f add separator
    $f add radiobutton -label {SHASSA H} \
	-variable ${varname}(survey) -value {SHASSA H}
    $f add radiobutton -label {SHASSA CC} \
	-variable ${varname}(survey) -value {SHASSA CC}
    $f add radiobutton -label {SHASSA C} \
	-variable ${varname}(survey) -value {SHASSA C}
    $f add radiobutton -label {SHASSA Sm} \
	-variable ${varname}(survey) -value {SHASSA Sm}

    set f $var(mb).survey.iras
    ThemeMenu $f
    $f add radiobutton -label {IRIS 12} \
	-variable ${varname}(survey) -value {IRIS 12}
    $f add radiobutton -label {IRIS 25} \
	-variable ${varname}(survey) -value {IRIS 25}
    $f add radiobutton -label {IRIS 60} \
	-variable ${varname}(survey) -value {IRIS 160}
    $f add radiobutton -label {IRIS 100} \
	-variable ${varname}(survey) -value {IRIS 100}
    $f add separator
    $f add radiobutton -label {SFD100m} \
	-variable ${varname}(survey) -value {SFD100m}
    $f add radiobutton -label {SFD Dust Map} \
	-variable ${varname}(survey) -value {SFD Dust Map}
    $f add separator
    $f add radiobutton -label {IRAS 12 micron} \
	-variable ${varname}(survey) -value {IRAS 12 micron}
    $f add radiobutton -label {IRAS 25 micron} \
	-variable ${varname}(survey) -value {IRAS 25 micron}
    $f add radiobutton -label {IRAS 60 micron} \
	-variable ${varname}(survey) -value {IRAS 60 micron}
    $f add radiobutton -label {IRAS 100 micron} \
	-variable ${varname}(survey) -value {IRAS 100 micron}

    set f $var(mb).survey.ir2mass
    ThemeMenu $f
    $f add radiobutton -label {2MASS-J} \
	-variable ${varname}(survey) -value {2MASS-J}
    $f add radiobutton -label {2MASS-H} \
	-variable ${varname}(survey) -value {2MASS-H}
    $f add radiobutton -label {2MASS-K} \
	-variable ${varname}(survey) -value {2MASS-K}

    set f $var(mb).survey.irukidss
    ThemeMenu $f
    $f add radiobutton -label {UKIDSS-Y} \
	-variable ${varname}(survey) -value {UKIDSS-Y}
    $f add radiobutton -label {UKIDSS-J} \
	-variable ${varname}(survey) -value {UKIDSS-J}
    $f add radiobutton -label {UKIDSS-H} \
	-variable ${varname}(survey) -value {UKIDSS-H}
    $f add radiobutton -label {UKIDSS-K} \
	-variable ${varname}(survey) -value {UKIDSS-K}

    set f $var(mb).survey.irwise
    ThemeMenu $f
    $f add radiobutton -label {WISE 3.4} \
	-variable ${varname}(survey) -value {WISE 3.4}
    $f add radiobutton -label {WISE 4.6} \
	-variable ${varname}(survey) -value {WISE 4.6}
    $f add radiobutton -label {WISE 12} \
	-variable ${varname}(survey) -value {WISE 12}
    $f add radiobutton -label {WISE 22} \
	-variable ${varname}(survey) -value {WISE 22}

    set f $var(mb).survey.irakari
    ThemeMenu $f
    $f add radiobutton -label {AKARI N60} \
	-variable ${varname}(survey) -value {AKARI N60}
    $f add radiobutton -label {AKARI WIDE-S} \
	-variable ${varname}(survey) -value {AKARI WIDE-S}
    $f add radiobutton -label {AKARI WIDE-L} \
	-variable ${varname}(survey) -value {AKARI WIDE-L}
    $f add radiobutton -label {AKARI N160} \
	-variable ${varname}(survey) -value {AKARI N160}

    set f $var(mb).survey.planck
    ThemeMenu $f
    $f add radiobutton -label {Planck 857} \
	-variable ${varname}(survey) -value {Planck 857}
    $f add radiobutton -label {Planck 545} \
	-variable ${varname}(survey) -value {Planck 545}
    $f add radiobutton -label {Planck 353} \
	-variable ${varname}(survey) -value {Planck 353}
    $f add radiobutton -label {Planck 217} \
	-variable ${varname}(survey) -value {Planck 217}
    $f add radiobutton -label {Planck 143} \
	-variable ${varname}(survey) -value {Planck 143}
    $f add radiobutton -label {Planck 100} \
	-variable ${varname}(survey) -value {Planck 100}
    $f add radiobutton -label {Planck 070} \
	-variable ${varname}(survey) -value {Planck 070}
    $f add radiobutton -label {Planck 044} \
	-variable ${varname}(survey) -value {Planck 044}
    $f add radiobutton -label {Planck 030} \
	-variable ${varname}(survey) -value {Planck 030}

    set f $var(mb).survey.wmap
    ThemeMenu $f
    $f add radiobutton -label {WMAP Ka} \
	-variable ${varname}(survey) -value {WMAP Ka}
    $f add radiobutton -label {WMAP K} \
	-variable ${varname}(survey) -value {WMAP K}
    $f add radiobutton -label {WMAP Q} \
	-variable ${varname}(survey) -value {WMAP Q}
    $f add radiobutton -label {WMAP V} \
	-variable ${varname}(survey) -value {WMAP V}
    $f add radiobutton -label {WMAP W} \
	-variable ${varname}(survey) -value {WMAP W}
    $f add separator
    $f add radiobutton -label {COBE DIRBE/AAM} \
	-variable ${varname}(survey) -value cobeaam
    $f add radiobutton -label {COBE DIRBE/ZSMA} \
	-variable ${varname}(survey) -value cobezsma

    set f $var(mb).survey.radioghz
    ThemeMenu $f
    $f add radiobutton -label {CO} \
	-variable ${varname}(survey) -value {CO}
    $f add radiobutton -label {GB6 (4850MHZ)} \
	-variable ${varname}(survey) -value {GB6 (4850MHZ)}
    $f add radiobutton -label {VLA FIRST (1.4 GHz)} \
	-variable ${varname}(survey) -value {VLA FIRST (1.4 GHz)}
    $f add radiobutton -label {NVSS} \
	-variable ${varname}(survey) -value {NVSS}
    $f add radiobutton -label {Stripe82VLA} \
	-variable ${varname}(survey) -value {Stripe82VLA}
    $f add radiobutton -label {1420MHz (Bonn)} \
	-variable ${varname}(survey) -value {1420MHz (Bonn)}
    $f add radiobutton -label {nH} \
	-variable ${varname}(survey) -value {nH}

    set f $var(mb).survey.radiomhz
    ThemeMenu $f
    $f add radiobutton -label {SUMSS 843 MHz} \
	-variable ${varname}(survey) -value {SUMSS 843 MHz}
    $f add radiobutton -label {0408MHz} \
	-variable ${varname}(survey) -value {0408MHz}
    $f add radiobutton -label {WENSS} \
	-variable ${varname}(survey) -value {WENSS}
    $f add radiobutton -label {TGSS ADR1} \
	-variable ${varname}(survey) -value {TGSS ADR1}
    $f add radiobutton -label {VLSSr} \
	-variable ${varname}(survey) -value {VLSSr}
    $f add radiobutton -label {0035MHz} \
	-variable ${varname}(survey) -value {0035MHz}

    set f $var(mb).survey.goods
    ThemeMenu $f
    $f add radiobutton -label {GOODS: Chandra ACIS HB} \
	-variable ${varname}(survey) -value {GOODS: Chandra ACIS HB}
    $f add radiobutton -label {GOODS: Chandra ACIS FB} \
	-variable ${varname}(survey) -value {GOODS: Chandra ACIS FB}
    $f add radiobutton -label {GOODS: Chandra ACIS SB} \
	-variable ${varname}(survey) -value {GOODS: Chandra ACIS SB}
    $f add separator
    $f add radiobutton -label {GOODS: VLT VIMOS U} \
	-variable ${varname}(survey) -value {GOODS: VLT VIMOS U}
    $f add radiobutton -label {GOODS: VLT VIMOS R} \
	-variable ${varname}(survey) -value {GOODS: VLT VIMOS R}
    $f add separator
    $f add radiobutton -label {GOODS: HST ACS B} \
	-variable ${varname}(survey) -value {GOODS: HST ACS B}
    $f add radiobutton -label {GOODS: HST ACS V} \
	-variable ${varname}(survey) -value {GOODS: HST ACS V}
    $f add radiobutton -label {GOODS: HST ACS I} \
	-variable ${varname}(survey) -value {GOODS: HST ACS I}
    $f add radiobutton -label {GOODS: HST ACS Z} \
	-variable ${varname}(survey) -value {GOODS: HST ACS Z}
    $f add separator
    $f add radiobutton -label {Hawaii HDF U} \
	-variable ${varname}(survey) -value {Hawaii HDF U}
    $f add radiobutton -label {Hawaii HDF B} \
	-variable ${varname}(survey) -value {Hawaii HDF B}
    $f add radiobutton -label {Hawaii HDF V0201} \
	-variable ${varname}(survey) -value {Hawaii HDF V0201}
    $f add radiobutton -label {Hawaii HDF V0401} \
	-variable ${varname}(survey) -value {Hawaii HDF V0401}
    $f add radiobutton -label {Hawaii HDF R} \
	-variable ${varname}(survey) -value {Hawaii HDF R}
    $f add radiobutton -label {Hawaii HDF I} \
	-variable ${varname}(survey) -value {Hawaii HDF I}
    $f add radiobutton -label {Hawaii HDF Z} \
	-variable ${varname}(survey) -value {Hawaii HDF Z}
    $f add radiobutton -label {Hawaii HDF HK} \
	-variable ${varname}(survey) -value {Hawaii HDF HK}
    $f add separator
    $f add radiobutton -label {GOODS: HST NICMOS} \
	-variable ${varname}(survey) -value {GOODS: HST NICMOS}
    $f add radiobutton -label {GOODS: VLT ISAAC J} \
	-variable ${varname}(survey) -value {GOODS: VLT ISAAC J}
    $f add radiobutton -label {GOODS: VLT ISAAC H} \
	-variable ${varname}(survey) -value {GOODS: VLT ISAAC H}
    $f add radiobutton -label {GOODS: VLT ISAAC Ks} \
	-variable ${varname}(survey) -value {GOODS: VLT ISAAC Ks}
    $f add radiobutton -label {HUDF: VLT ISAAC Ks} \
	-variable ${varname}(survey) -value {HUDF: VLT ISAAC Ks}
    $f add separator
    $f add radiobutton -label {GOODS: Spitzer IRAC 3.6} \
	-variable ${varname}(survey) -value {GOODS: Spitzer IRAC 3.6}
    $f add radiobutton -label {GOODS: Spitzer IRAC 4.5} \
	-variable ${varname}(survey) -value {GOODS: Spitzer IRAC 4.5}
    $f add radiobutton -label {GOODS: Spitzer IRAC 5.8} \
	-variable ${varname}(survey) -value {GOODS: Spitzer IRAC 5.8}
    $f add radiobutton -label {GOODS: Spitzer IRAC 8.0} \
	-variable ${varname}(survey) -value {GOODS: Spitzer IRAC 8.0}
    $f add radiobutton -label {GOODS: Spitzer MIPS 24} \
	-variable ${varname}(survey) -value {GOODS: Spitzer MIPS 24}
    $f add separator
    $f add radiobutton -label {GOODS: Herschel 100} \
	-variable ${varname}(survey) -value {GOODS: Herschel 100}
    $f add radiobutton -label {GOODS: Herschel 100} \
	-variable ${varname}(survey) -value {GOODS: Herschel 100}
    $f add radiobutton -label {GOODS: Herschel 250} \
	-variable ${varname}(survey) -value {GOODS: Herschel 250}
    $f add radiobutton -label {GOODS: Herschel 350} \
	-variable ${varname}(survey) -value {GOODS: Herschel 350}
    $f add radiobutton -label {GOODS: Herschel 500} \
	-variable ${varname}(survey) -value {GOODS: Herschel 500}
    $f add separator
    $f add radiobutton -label {CDFS: LESS} \
	-variable ${varname}(survey) -value {CDFS: LESS}
    $f add radiobutton -label {GOODS: VLA North} \
	-variable ${varname}(survey) -value {GOODS: VLA North}

    IMGSVRUpdate $varname
}

proc SkyViewExec {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SkyViewExec $varname"
    }

    if {$var(save)} {
	set var(fn) [SaveFileDialog savefitsfbox $var(top)]
	if {$var(fn) == {}} {
	    ARDone $varname
	    return
	}
    } else {
	set var(fn) [tmpnam {.fits}]
    }

    # skyformat
    switch -- $var(skyformat) {
	degrees {
	    set xx $var(x)
	    set yy $var(y)
	}
	sexagesimal {
	    set xx [h2d [Sex2H $var(x)]]
	    set yy [Sex2D $var(y)]
	}
    }

    # size - convert to arcsec
    switch -- $var(rformat) {
	degrees {
	    set ww $var(width)
	    set hh $var(height)
	}
	arcmin {
	    set ww [expr $var(width)/60.]
	    set hh [expr $var(height)/60.]
	}
	arcsec {
	    set ww [expr $var(width)/60./60.]
	    set hh [expr $var(height)/60./60.]
	}
    }
    if {$ww>5} {
	set ww 5
    }
    if {$hh>5} {
	set hh 5
    }

    # now average
    set rr [expr ($ww+$hh)/2.]

    # query
    set query [http::formatQuery Position $xx,$yy Survey $var(survey) Size $ww,$hh Pixels $var(width,pixels),$var(height,pixels) Return FITS]
    set url "https://skyview.gsfc.nasa.gov/cgi-bin/images"
    IMGSVRGetURL $varname $url $query
}

proc SkyViewAck {varname} {
    upvar #0 $varname var
    global $varname

    global debug
    if {$debug(tcl,image)} {
	puts stderr "SkyViewAck $varname"
    }

    set msg {Acknowledgments for the Skyview

SkyView has been developed with generous support from the NASA AISR and ADP
programs (P.I. Thomas A. McGlynn) under the auspices of the High Energy 
Astrophysics Science Archive Research Center (HEASARC) at the 
NASA/ GSFC Astrophysics Science Division.

We gratefully acknowledge the support of NASA and contributors of 
SkyView surveys.

Maintained by: Laura McDonald lmm@skyview.gsfc.nasa.gov
    }

    SimpleTextDialog ${varname}ack [msgcat::mc {Acknowledgment}] \
	80 40 insert top $msg
}

# Process Cmds

proc ProcessSkyViewCmd {varname iname} {
    upvar $varname var
    upvar $iname i

    SkyViewDialog

    skyview::YY_FLUSH_BUFFER
    skyview::yy_scan_string [lrange $var $i end]
    skyview::yyparse
    incr i [expr $skyview::yycnt-1]
}

proc ProcessSendSkyViewCmd {proc id param {sock {}} {fn {}}} {
    global parse
    set parse(proc) $proc
    set parse(id) $id

    SkyViewDialog

    skyviewsend::YY_FLUSH_BUFFER
    skyviewsend::yy_scan_string $param
    skyviewsend::yyparse
}
