{
  description = "SAOImageDS9, built from the vendored source tree (unix/configure && make)";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachSystem [ "x86_64-linux" "aarch64-linux" ] (system:
      let
        pkgs = import nixpkgs { inherit system; };
        lib = pkgs.lib;

        # The XPA CLI tools (xpaset, xpaget, xpaaccess, xpainfo, xpamb,
        # xpans) are maintained upstream as their own project
        # (SAOImageDS9/xpa-maintenance) and are functionally independent
        # of ds9: they just speak the XPA wire protocol over a socket.
        # ds9 separately embeds its own Tcl<->XPA glue (the xpacmdnew /
        # xparec Tcl commands compiled into ds9.real) directly from this
        # same vendored xpa/ source as part of its own build, using its
        # own vendored Tcl — that's unaffected by this package and
        # doesn't need to match it. xpa/configure.ac is also, unlike the
        # top-level unix/configure.ac, a plain autoconf script with no
        # TEA_INIT and no hardcoded prefix, so it Just Works as an
        # ordinary standalone package.
        xpa = pkgs.stdenv.mkDerivation {
          pname = "xpa";
          version = "2.2.1";

          src = self;
          dontUnpack = true;

          nativeBuildInputs = with pkgs; [ which ];

          # No Tcl and no X: SC_PATH_TCLCONFIG in xpa/configure.ac just
          # skips its optional Tcl-extension build when neither is
          # found, leaving the plain client/server C tools untouched.
          configureFlags = [ "--with-x=no" "--disable-shared" "--enable-symbols" ];

          preConfigure = ''
            build="$TMPDIR/build"
            mkdir -p "$build"
            cp -r --preserve=mode,timestamps "$src"/xpa/. "$build"/
            chmod -R u+w "$build"
            cd "$build"
            patchShebangs .
          '';

          meta = {
            description = "XPA messaging system client/server tools, used by ds9 for external scripting";
            homepage = "https://github.com/SAOImageDS9/xpa-maintenance";
            license = lib.licenses.gpl2Plus;
            platforms = lib.platforms.linux;
          };
        };

        ds9 = pkgs.stdenv.mkDerivation {
          pname = "ds9";
          version = "8.8b2";

          # Flakes only ever see git-tracked files here, so this naturally
          # excludes the in-tree build byproducts (*.o, *.lo, config.cache,
          # the generated top-level Makefile, ...) that a prior manual
          # `unix/configure && make` may have left lying around. Anything
          # new you add (like this file) must be `git add`ed to be visible.
          src = self;

          # `zip` matters beyond convenience: without it on PATH, Tcl/Tk's
          # configure falls back to building their own vendored "minizip"
          # helper for zipfs support, whose make rule is broken under
          # parallel (-j) builds.
          nativeBuildInputs = with pkgs; [ perl which pkg-config zip makeWrapper ];

          # Everything downstream (Tk's Xft/fontconfig detection, ds9's and
          # tksao's libxml2 lookup, funtools' zlib) is a configure-time
          # library check against these; nothing here is fetched at build
          # time, it's all vendored in the source tree already.
          buildInputs = with pkgs; [
            libx11
            libxext
            libxscrnsaver
            libxft
            fontconfig
            freetype
            libxml2
            libxslt
            zlib
          ];

          # The top-level configure.ac hardcodes `prefix=$ac_pwd` (i.e.
          # "wherever you ran configure from"), ignoring any --prefix
          # flag, so we build in an ordinary scratch directory under
          # $TMPDIR rather than in $out.
          #
          # A first attempt at this failed: dontPatchELF (needed to
          # protect ds9.real's zip-appended payload, see below) also
          # skips the normal RPATH-rewrite for tclsh9.0/wish9.0, which
          # unlike ds9.real are genuinely dynamically linked with a real
          # linker-baked RPATH — building outside $out left that RPATH
          # pointing at the scratch directory, and Nix's own build-purity
          # check refuses to ship a binary whose RPATH references a
          # directory that stops existing once the build finishes.
          #
          # The fix is `make dist` (the top Makefile's own packaging
          # target): it tars up just `ds9*` from bin/ into dist/, which
          # excludes tclsh9.0/wish9.0/sqlite3_analyzer (and, now, the
          # xpa* CLI tools — those come from the separate `xpa` package
          # above instead) — nothing else in ds9's own bin/ output is
          # needed to run it. tclsh9.0/wish9.0 were exactly what had the
          # forbidden RPATH reference; dropping them clears the way to
          # build outside $out entirely.
          dontUnpack = true;
          dontConfigure = true;
          dontBuild = true;

          installPhase = ''
            runHook preInstall

            build="$TMPDIR/build"
            mkdir -p "$build"
            cp -r --preserve=mode,timestamps "$src"/. "$build"/
            chmod -R u+w "$build"
            cd "$build"
            patchShebangs .

            export HOME="$TMPDIR"
            export PATH="${lib.makeBinPath [ pkgs.libxml2 pkgs.libxslt pkgs.perl pkgs.which ]}:$PATH"

            # funtools' configure wants a static libz.a already sitting at
            # $(libdir)/libz.a (see make.include); it doesn't vendor or
            # otherwise locate zlib itself.
            mkdir -p lib
            cp ${pkgs.zlib.static}/lib/libz.a lib/libz.a
            chmod u+w lib/libz.a

            unix/configure \
              --with-xml2-config=${pkgs.libxml2}/bin/xml2-config \
              --with-xslt-config=${pkgs.libxslt}/bin/xslt-config

            make JOBS=$NIX_BUILD_CORES
            make dist

            mkdir -p "$out/bin"
            tar -xzf dist/ds9.*.tar.gz -C "$out/bin"

            runHook postInstall
          '';

          # ds9's own build appends a zip archive of Tcl/Tk/ds9 library
          # scripts directly onto the linked executable (`cat ds9base
          # ds9.zip > ds9; zip -A ds9`) so Tcl9's zipfs support can mount
          # it as the script library at startup. Nix's usual fixup passes
          # (stripping, patchelf rpath-shrinking) rewrite the ELF and would
          # truncate that appended payload, so both are disabled.
          dontStrip = true;
          dontPatchELF = true;

          # ds9 never registers over XPA unless xpans (now from the
          # separate xpa package above, rather than built into this same
          # bin/) is already on PATH when it starts. This can't use
          # makeWrapper's wrapProgram helper: wrapProgramShell
          # (see nixpkgs' make-wrapper setup-hook) unconditionally passes
          # --inherit-argv0 down to makeWrapper, generating `exec -a "$0"
          # ...` to preserve argv0 — but Tcl9's zipfs support finds its
          # own appended library archive via argv0/the executable's own
          # path, so overriding argv0 away from the real binary breaks
          # that. It also unconditionally renames the wrapped binary
          # aside to ".ds9-wrapped", and Tcl's `file rootname` (which
          # ds9/library/ds9.tcl uses to derive its own app name — see
          # below) treats a *leading* dot as the start of the extension,
          # not a hidden-file marker, rootnaming that to "" — an empty
          # XPA access-point name, which fails to register silently.
          # Neither problem is fixable through wrapProgram's own flags,
          # since both behaviors are hardcoded into it rather than
          # optional. So: do our own rename to "ds9.real" (which
          # rootnames back to "ds9", unlike ".ds9-wrapped"), then call
          # the lower-level makeWrapper directly, which — unlike
          # wrapProgram — only adds -a when told to.
          postFixup = ''
            mv "$out/bin/ds9" "$out/bin/ds9.real"
            makeWrapper "$out/bin/ds9.real" "$out/bin/ds9" \
              --prefix PATH : "${xpa}/bin"
          '';

          # Old vendored C89/C90/gnu99 sources; hardening flags like PIE
          # and fortify were never part of this build and aren't worth
          # fighting for a first working package.
          hardeningDisable = [ "all" ];

          # Every sub-package here is built --disable-shared, and the
          # top-level Makefile is `.NOTPARALLEL` between subprojects (each
          # subproject still uses -j $(JOBS) internally), so there's no
          # benefit to Nix's own output-level parallelism.
          enableParallelBuilding = false;

          meta = {
            description = "SAOImageDS9 astronomical imaging and data visualization application";
            homepage = "https://ds9.si.edu/";
            license = lib.licenses.gpl3Plus;
            platforms = lib.platforms.linux;
            mainProgram = "ds9";
          };
        };
      in
      {
        packages.default = ds9;
        packages.ds9 = ds9;
        packages.xpa = xpa;

        apps.default = flake-utils.lib.mkApp { drv = ds9; };
        apps.xpa = flake-utils.lib.mkApp { drv = xpa; exePath = "/bin/xpans"; };

        # For hacking on ds9/tksao by hand with the CLAUDE.md workflow
        # (`make ds9clean ds9`, `make tksaoclean tksao ds9clean ds9`, ...)
        # rather than building the packaged derivation above.
        devShells.default = pkgs.mkShell {
          inputsFrom = [ ds9 ];
          nativeBuildInputs = ds9.nativeBuildInputs;
          buildInputs = ds9.buildInputs;
        };
      });
}
