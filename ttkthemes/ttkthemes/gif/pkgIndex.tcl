# Author: RedFantom
# License: GNU GPLv3
# Copyright (c) 2017-2018 RedFantom
set gif_theme_dir [file join [pwd] [file dirname [info script]]]

array set gif_themes {
  adapta 1.0
  arc 0.1
  breeze 0.6
  equilux 1.1
  scid 0.9.1
  ubuntu 1.0
  yaru 0.1
}

foreach {theme version} [array get gif_themes] {
  package ifneeded ttk::theme::$theme $version \
    [list source [file join $gif_theme_dir $theme $theme.tcl]]
}
