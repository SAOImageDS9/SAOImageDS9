# Native XISF Support — Research and Phased TODO

Research plan for teaching DS9 to read **XISF** (Extensible Image Serialization Format,
PixInsight's native format) natively, on the same footing as the ASDF reader this branch
already has. Written 2026-11-21 against the ASDF work as it stands on
`asdf_support_rebase`. Check items off as they land, and add findings inline, the way
`TODO_ASDF.md` does. Work happens on the `xisf_support` branch, in both this repo and
`Tests/`.

**Status (2026-11-21): Phases 0–3 are done.** `Tests/xisf/` has 105 synthetic fixtures
and 14 real ones, each with a FITS twin and a DS9 probe baseline recorded from that
twin (`Tests/xisf/README.md`). `fitsy/xisf.{h,C}` holds two layers:
- **`FitsXisfFile`**, the container. It reads the header and every image's descriptor,
  keywords and properties, and returns any data block decoded: checksum verified;
  decompressed with zlib, lz4, lz4hc or zstd; subblocks, raw subblocks and byte
  shuffling handled.
- **`FitsXisf`**, one image as the `FitsFile` ds9 will load: rows flipped, storage made
  planar, channels as planes, and a header built from the geometry, the keywords and
  the properties.

Both are checked against the twins over the whole fixture set
(`Tests/xisf/check_container.py`, `check_fits.py`, driven by `utils/xisfdump`). They are
in fitsy's build, but nothing in ds9 calls them yet. Next is Phase 4 (WCS) or Phase 5
(the load command and UI), which are independent.

Spec: <https://pixinsight.com/doc/docs/XISF-1.0-spec/XISF-1.0-spec.html> (XISF 1.0,
Revision 2). A second, full read on 2026-11-21 settled everything this file had marked
**[verify]**: §7, §8.5, §9.2 and the layer 1 property list. The one item the spec left
in an equation image, the element order of `LinearTransformationMatrix`, is settled
by PCL 2.15.0, PixInsight's reference implementation
(<https://gitlab.com/pixinsight/PCL>). Its `AstrometricMetadata` and `WCSKeywords`
are the files to read; §2.6–2.7 cite them.

---

## 1. What XISF is, in the terms we care about

| | ASDF (done) | XISF (this plan) |
|---|---|---|
| Header | YAML tree (needs libyaml, indent walker) | XML document (libxml2, already linked for SAMP) |
| Magic | `#ASDF 1.0.0` text line | `XISF0100` 8 bytes, then LE `uint32` header length, 4 reserved bytes, XML from byte 16. The length counts the XML only; attachment positions are absolute from byte 0 |
| Pixel location | ndarray → block *index*; walk blocks to find offset | `location="attachment:POS:SIZE"`: **absolute byte offset and size, no walk** |
| Codecs | none / zlib / lz4 / bzp2 | zlib / lz4 / lz4hc / **zstd**, each optionally `+sh` (byte shuffle); subblocks |
| Byte order | per-array `byteorder` | little-endian default, `byteOrder="big"` per element |
| Images per file | many named arrays | many `<Image>` elements (ids optional) |
| Dims | rank N | `geometry="w:h[:d…]:channels"`, X first; channels = Gray 1 / RGB 3 |
| Sample types | numpy dtypes | UInt8/16/32/64, Float32/64, Complex32/64 |
| WCS | GWCS → AST YamlChan (11 AST bugs, the hard part) | `AstrometricSolution:*` properties: **a TAN/STG/ZEA/… linear WCS + optional splines**. No AST channel needed |
| FITS header | synthesised | **`<FITSKeyword name value comment>` elements carry a real FITS header**, and FITS-compatible decoders must load all of them |
| Integrity | none | `checksum="sha-1|sha-256|sha-512|sha3-*:hex"`; decoders must verify |
| Origin | FITS-like | Row 0 is the **top** row; pixel (i, j) is centred at (i+0.5, j+0.5) (§8.5, Fig. 2) |

The short version: the container is *simpler* than ASDF (absolute offsets, no YAML, a
FITS header already present), the WCS is *much* simpler (no GWCS, no AST YamlChan),
and the new costs are a zstd codec, byte unshuffling, RGB channels and a row flip.
The XML parsing reuses the libxml2 that DS9 already links for SAMP. Expect a fraction of ASDF's effort. Most of ASDF's cost was in GWCS and AST.

### Image attributes the reader must handle

- `geometry` (required): `w:h:ch`, or `w:h:d:ch` for a 3-D image. Positive integers.
- `sampleFormat` (required): as in the table above.
- `bounds="lo:hi"`: required for float, where PixInsight writes `0:1`. Optional for
  integers, with the default the full type range. Undefined for complex.
- `colorSpace`: `Gray` (default) / `RGB` / `CIELab`.
- `pixelStorage`: `Planar` (default, channel planes one after another) / `Normal`
  (interleaved per pixel: x fastest, channels consecutive within a pixel). Verified
  in §8.5.3, and both round-trip in `Tests/xisf/storage/`.
- `location`: `attachment:POS:SIZE` (monolithic), `embedded` (child `<Data
  encoding="base64|hex">`), `url(...)` / `path(...)` with optional `:INDEX` (distributed
  `.xish`/`.xisb` only). `inline:` is **not allowed** on `<Image>`.
- `compression="codec:uncompressedSize[:itemSize]"` plus optional
  `subblocks="c1,u1:c2,u2:…"`. If `c_i == u_i`, the subblock is stored raw. Unshuffling
  is applied to the whole block *after* all subblocks are decompressed.
- `checksum="algo:hex"`: the digest of the **stored (compressed) bytes**. Verify the
  digest before decompressing.
- `byteOrder`, `offset` (pedestal), `orientation` (`0`, `flip`, `90`, `-90`, `180`, each
  optionally `;flip`: a display hint), `imageType` (`Light`, `MasterDark`, …), `id`,
  `uuid`.
- Children: `<FITSKeyword>`, `<Property>`, `<ICCProfile>`, `<RGBWorkingSpace>`,
  `<DisplayFunction>` (PixInsight's STF stretch), `<ColorFilterArray>` (raw Bayer),
  `<Resolution>`, `<Thumbnail>`, `<Reference ref=…>`.
- Unknown elements and properties are ignored. An image with an unsupported
  codec or type is "unavailable", but the rest of the unit stays readable. Both
  rules match how `FitsAsdfNode::unsupported_` already behaves.

### Astrometric solution (§11.5.3.7)

All under `AstrometricSolution:` on the image's properties, and self-contained.
The spec says a decoder must not consult other properties to evaluate it.

- **Layer 1 (required for a solution):** `Version` ("1.0"); `ProjectionSystem`
  (`Gnomonic`, `Stereographic`, `ZenithalEqualArea`, `Orthographic`, `PlateCarree`,
  `Mercator`, `HammerAitoff`). An unknown value disables the whole solution.
  `ReferenceCelestialCoordinates` (F64Vector[2], deg); `ReferenceImageCoordinates`
  (F64Vector[2], px); `LinearTransformationMatrix` (F64Matrix 2×2, deg/px). Optional
  `ReferenceNativeCoordinates`, `CelestialPoleNativeCoordinates` (FITS LONPOLE/LATPOLE
  analogues), and `CelestialReferenceSystem` (`ICRS` default, or `GCRS`).
- **Layer 2:** `ProjectiveTransformation:ImageToProjection` / `:ProjectionToImage` (3×3).
- **Layer 3:** `DistortionModel:*`: 2-D surface splines (thin-plate and other radial
  bases) with global, local and fallback terms.
- **Layer 4:** provenance and control points (informational).
- Decoders fall back to a lower layer when they cannot evaluate a higher one, and two
  conforming decoders must agree to 1e-6 px.

Layer 1 is exactly FITS `CRVAL`/`CRPIX`/`CD`/`CTYPE`. The projections map to `TAN`,
`STG`, `ZEA`, `SIN`, `CAR`, `MER`, `AIT`. That is the whole reason the WCS half is cheap.

---

## 2. Design decisions (recommended; revisit before Phase 1)

These follow the choices ASDF ended up making, not its detours.

1. **The reader is C++, in `fitsy/xisf.{h,C}`, from day one.** ASDF started in Tcl to
   avoid regenerating `lex.C`, and then paid for the port (`TODO_ASDF.md`, "The C++
   port"). That flex risk is now characterised: regenerate, then reverse-apply the 13-hunk
   type-width churn (`AGENTS.md`). So there is no reason to repeat the detour. Mirror the
   two-layer split:
   - `FitsXisfFile`: the container. Magic, header length, raw XML text, the list of
     `<Image>` descriptors, plus `block(i, &size)` (seek, read, checksum,
     decompress, unshuffle). Knows nothing about FITS.
   - `FitsXisf : FitsFile`: one image. Picks the image, converts the samples, flips the
     rows, and builds a `FitsHead`, seeded from the `<FITSKeyword>` elements and with
     WCS cards synthesised from `AstrometricSolution:*` when present.
   - `FitsXisfNext`: further planes of a cube or of a multi-channel image, exactly like
     `FitsAsdfNext`. That class had to be written after a segfault (`Context::load` hit
     `default:` with a NULL). **Add the `case Base::XISF:` in `context.C` in the same
     commit as the enum.**
2. **XML parser: libxml2, which DS9 already depends on.** It is a committed dependency
   on all three platforms: it backs `tclxml` (SAMP, VOTable) and is linked into `ds9`
   through `@XML2_LIBS@` in each `ds9/*/Makefile.in`. The Windows build ships
   `libxml2-2.dll`. tksao already calls its C API directly: `tksao/frame/frmarkerxml.C`
   reads XML regions with `xmlTextReader*`. Adding a second XML parser would be
   redundant.
   - **Wiring:** fitsy is the only piece that doesn't see libxml2 yet. Copy tksao's
     "Load libxml2 configuration" block (`tksao/configure.ac`, ~l.364–384:
     `--with-xml2-config`, falling back to `pkg-config libxml-2.0`, setting
     `XML2_CFLAGS`/`XML2_LIBS`) into `fitsy/configure.ac`. Hand-apply the generated
     equivalent to `fitsy/configure`, since there is no autoconf on this box. Add
     `--with-xml2-config=$(XML2CONFIG)` to the `fitsy/Makefile` rule in `make.include`,
     as the `tksao/Makefile` and `tclxml/Makefile` rules already have.
   - **Linking:** fitsy only needs the include path. The `ds9` link already pulls in
     libxml2.
   - **Fallback:** if touching fitsy's configure is unwelcome, `FitsXisf` could live in
     `tksao/frame/` next to `frmarkerxml.C` instead. But fitsy is where every other
     format reader lives, and `tclfitsy` (§3) would then need libxml2 too.
   - **API choice:** the header is small (KBs), so the tree API (`xmlReadMemory` +
     node walk) is simpler than the streaming `xmlTextReader` the region parser uses.
     Pass `XML_PARSE_NONET` (never fetch external DTDs/entities) and leave
     `XML_PARSE_NOENT` off, because this is untrusted input.
   - **Signed files:** a signed unit has a detached `<Signature>` sibling after `</xisf>`,
     so it has two top-level elements. `xmlReadMemory` rejects that with "Extra content at
     the end of the document". **Hand it only the bytes up to and including `</xisf>`.**
3. **Vendor zstd.** *(Done in Phase 2, as described here.)* The Rev 1 change list makes `zstd` / `zstd+sh` mandatory for
   conforming decoders, and the spec recommends them. That makes zstd the likely default
   for current PixInsight output. The two real PixInsight files we have so far
   (`Tests/xisf/real/`) use lz4+sh and lz4hc+sh, so lz4 is not optional either. It is not in the tree.
   Vendor upstream `facebook/zstd` (BSD) at `zstd/`, decompression only
   (`lib/common` + `lib/decompress`), following the pattern used for `lz4/` and `bzip2/`.
   Those are plain C libraries linked by fitsy, not Tcl extensions, so wire it like them:
   `make.include` target/clean/distclean and the `.PHONY` lists,
   `{unix,macos,win}/Makefile.in` build order, fitsy and `ds9/*/Makefile.in` link lines,
   and `Manifest.md`. Grep how `liblz4` reached each of those and copy that, not the
   seven-place Tcl-extension recipe. zlib and lz4 are already linked into fitsy (`lz4hc`
   output decodes with the ordinary lz4 block decoder, `LZ4_decompress_safe`).
   Note that XISF lz4 is **raw LZ4 block format, no framing**, unlike the chunk-framed
   python-lz4 convention `fitsy/asdf.C` decodes. That is a new path, not a reuse.
4. **Checksums: verify when present, with OpenSSL.** The spec requires SHA-1/256/512.
   This plan first said to vendor a small SHA implementation to keep libcrypto out of
   fitsy. Phase 2 used OpenSSL's `EVP_Digest` instead, because:
   - fitsy only ever ends up inside ds9, which already links `-lssl -lcrypto` on all
     three platforms;
   - the vendored openssl is built before fitsy in the `saods9` order;
   - one call covers all five algorithms, sha3 included;
   - it is code nobody here has to get right.
   The cost is one include path, `-I${prefix}/openssl/include`, in fitsy's
   `TEA_ADD_INCLUDES`.
5. **The FITS header comes from the file.** Build the `FitsHead` from `<FITSKeyword>`
   elements first. Then overwrite the structural cards (`SIMPLE`, `BITPIX`, `NAXISn`,
   `BZERO`/`BSCALE`, `BLANK`) from `geometry`/`sampleFormat`, because the keyword list
   may describe the file the image was originally imported from, not this one.
   `HISTORY`/`COMMENT` keep empty values, as the spec requires.
6. **WCS: synthesise FITS cards, reuse `wcsCards_`.** The ASDF L3 path already does this
   for `fitswcs_imaging` (`asdf.tcl` → `FitsImage::wcsCards_`, which survives
   `resetWCS()`). For XISF it should happen in C++ inside `FitsXisf` while the header is
   built, so `initWCS(FitsHead*)` just sees ordinary FITS WCS and needs **no new
   tksao WCS code at all**. Only fall back to the `wcsCards_` channel if the cards
   need to be replaced after load. What PCL shows (all in `src/pcl/WCSKeywords.cpp`
   and `AstrometricMetadata.cpp`):
   - **Read both prefixes.** `AstrometricSolution:` is the standard; older PixInsight
     wrote the same names under `PCL:AstrometricSolution:`, and PCL still reads them,
     with the same semantics. Ignore the standard block if `Version`'s major is not 1.
   - **Emit `PV1_1`/`PV1_2` and `LONPOLE`/`LATPOLE`** from `ReferenceNativeCoordinates`
     and `CelestialPoleNativeCoordinates` when present. PCL writes both.
   - **PCL writes `RADESYS = 'GCRS'`** for GCRS solutions. That is not a FITS RADESYS
     value, so keep the plan: map it to ICRS and say so in a comment card.
   - **WCS `FITSKeyword`s are top-down when they stand alone.** PCL documents that WCS
     keywords stored with an image refer to rows in storage order (row 1 = top), and
     reads them that way. A keyword-only solution therefore needs PCL's
     `MirrorVertically` (`CRPIX2 → H+1−CRPIX2`; negate `CD1_2`, `CD2_2`, `PC1_2`,
     `PC2_2`, or `CDELT2` when there is no matrix; flip the SIP terms) to match the
     row-flipped pixels. **But** PCL's `ComputeWCSKeywords` writes *bottom-up* keywords
     next to the properties in every solved file. PixInsight never reads them back,
     because properties take precedence. So precedence is not just cautious: using
     those keywords with the documented convention would misplace the WCS. Precedence when both exist: `AstrometricSolution:*`
   wins over WCS-looking `FITSKeyword`s, since the spec makes the properties
   authoritative and keyword copies can be stale. Record which one was used in a
   comment card.
7. **Row order.** XISF row 0 is the top of the image; FITS row 1 is the bottom. Flip rows
   while converting so an XISF and the FITS PixInsight exports from it display
   identically. Pixel (i, j) is centred at (i+0.5, j+0.5) (§8.5.2), so
   `CRPIX1 = x_ref + 0.5` and `CRPIX2 = H - y_ref + 0.5`. M is row-major and applied to
   (x-x0, y-y0), and the flip negates its second column:
   `CD = [[M00, -M01], [M10, -M11]]`. **Confirmed in PCL:** `ComputeWCSKeywords` uses
   exactly `x_I = x_F - 0.5, y_I = H + 0.5 - y_F`, and the `Tests/xisf/wcs/` twins
   encode the same formulas. Leave `orientation` as a header note only: it is a viewer
   hint, and DS9 has its own orient/rotate controls.
8. **RGB goes through the existing RGB frame, not a new concept.** A `colorSpace="RGB"`
   image is a 3-channel planar array, which is what `rgbcube` already loads into an
   RGB frame (`ds9/library/rgbcube.tcl`, `loadRGBCube*Cmd` in `base.h`). In a plain
   frame, show channels as a 3-plane cube, the same way an RGB FITS cube appears. In an
   RGB frame, feed planes 1–3 to red/green/blue. `CIELab`: load as a 3-plane cube, no
   colour conversion. Annex B has the transforms if anyone ever asks.
9. **Sample types → BITPIX.** UInt8→8, UInt16→-16 (fitsy's private unsigned code),
   UInt32→64 (widen, as `asdfWiden` already does for uint32), Float32→-32, Float64→-64.
   **UInt64** has no exact home: either refuse it by name (as ASDF refuses a deep rank),
   or narrow to int64 with an overflow check. **Complex32/64**: refuse at first; a
   later "load |z|" option is possible. Apply `offset` (pedestal) as `BZERO`? No: XISF
   offset means *the pedestal was added*. Record it in a card and leave the pixels
   alone, the way PixInsight does.
10. **Multiple images per file.** Same UX as ASDF arrays: `file.xisf:<id>` or
    `file.xisf:<index>` selects one, a chooser dialog lists the rest. The
    `<file>:<path>` suffix parsing in `open.tcl`/`load.tcl` already exists for ASDF, so
    reuse it and don't invent a second syntax. Skip `<Thumbnail>` (it lives inside an
    `<Image>` and is not one).
11. **Distributed XISF (`.xish` + `.xisb`): out of scope for v1.** Rare in practice, and
    `url(...)` locations would mean DS9 fetching remote data. Detect the form and refuse
    it with a clear message.

---

## 3. Integration points

Every hook below already exists for ASDF. `git diff master...HEAD -- <file>` shows the
ASDF version to copy from.

**C++ (`fitsy/`, `tclfitsy/`, `tksao/`)**
- [x] `fitsy/xisf.{h,C}`: the container half (`FitsXisfFile`). `FitsXisf : FitsFile`
      and `FitsXisfNext` are Phase 3.
- [x] `fitsy/configure.ac` **and** the generated `fitsy/configure`: the source list plus
      the libxml2 block copied from tksao (§2.2), and `--with-xml2-config` on the
      `fitsy/Makefile` rule in `make.include`. Done Phase 1; see there for how.
- [ ] `fitsy/file.h`: `errorMessage()` already exists (added for ASDF), so reuse it.
- [ ] `tclfitsy`: `fitsy xisf header|images <file>` for the Tcl side (header viewer,
      image chooser), the analogue of `fitsy asdf tree|arrays|block`. One implementation
      of the format, as ASDF settled on.
- [ ] `tksao/frame/lex.L` + `parser.Y`: an `xisf` token and
      `loadXisf : STRING STRING STRING layerType`. **This is the flex-churn procedure in
      `AGENTS.md`**: no-op regen first, and expect an ~11k-line `parser.C` diff (token
      renumbering), which is normal.
- [ ] `tksao/frame/base.h`: `XISF` in the `MemType` enum, `loadXisfCmd`.
- [ ] `tksao/frame/baseload.C` / `frame.h` / `frameload.C`: image and mask layers.
- [ ] `tksao/frame/context.C`: `case Base::XISF:` → `FitsImageXisfNext` (see §2.1).
- [ ] `tksao/frame/fitsimage.{h,C}`: `FitsImageXisf`, `FitsImageXisfNext`.
- [ ] RGB frame: decide whether `loadRGBCube*` takes an XISF source, or whether the RGB
      frame's `load xisf` feeds channels itself. Look at how `FrameRGB` overrides
      `loadRGBCube*` before choosing.

**Tcl (`ds9/`)**
- [ ] `ds9/library/xisf.tcl`: `LoadXisfFile`, `ProcessXisfCmd`, the image chooser and
      header text (raw XML or rendered keyword list + properties). Keep it thin.
- [ ] `ds9/parsers/xisfparser.tac` + `xisflex.fcl` (taccle/fickle; `make ds9`
      regenerates, so no bison or flex is involved).
- [ ] `load.tcl`, `open.tcl`, `mfile.tcl`, `stdfbox.tcl` (`xisffbox`, `*.xisf`),
      `xpa.tcl` (`XPARcvdXisf`), `comm.tcl` (SAMP), `command.tcl` (`-xisf`), `frame.tcl`,
      `mask.tcl`, `header.tcl`, `backup.tcl`, the menus and buttonbar (`pbuttons(file,open,xisf)`).
- [ ] Clear any cached XISF header on frame reuse, the counterpart of `AsdfClearTree`.
- [ ] **Re-check `layer` after the load.** ASDF's review pass found post-load WCS and
      header work running against the image while a mask was being loaded
      (`TODO_ASDF.md`, "The review pass").
- [ ] Docs: `ds9/doc/ref/command.html`, `xpa.html`, `samp.html`, `file.html`.
- [ ] Optional: tkimg's file-type sniffing. If a user drags in a `.xisf`, route it here.

---

## 4. Phases

### Phase 0: Fixtures and ground truth (do first; blocks everything)
- [~] Get **real PixInsight output**. *Partly done.* libXISF's test directory gave two
      PixInsight files (UInt16 mono, embedded raw and lz4+sh; Float32 lz4hc+sh with a raw
      subblock) and two libXISF-written multi-image files (big and little endian), in
      `Tests/xisf/real/libxisf/`. xisfits's test images gave nine PixInsight 1.8.6 files
      (gray 8/16/32f/64f, zlib and zlib+sh, and RGB 8/16/32-bit), in
      `Tests/xisf/real/xisfits/`. Most of those are constant images, so they cannot
      detect a row flip. Still missing: an RGB image with structure, Normal storage, a
      **plate-solved image** (ImageSolver output, `AstrometricSolution:*`; this is what
      settles §5 item 1), a distortion model, and a CFA raw frame. Each needs a
      PixInsight-exported FITS twin as well. A plate-solved file is no longer needed to
      settle the conventions (PCL did that), only to test against real data.
- [x] Synthetic fixtures. Written by hand rather than with a library, so every layout
      choice can be made on purpose: `Tests/xisf/make_xisf_fixtures.py`, across
      `formats/ codecs/ storage/ byteorder/ location/ checksum/ header/ wcs/ malformed/`
      (99 files).
      Deterministic, so a rerun is byte-identical.
- [x] Malformed fixtures: bad magic, header length past EOF or too short, attachment past
      EOF, size lie, unknown codec, wrong version or namespace, zero, mismatched and
      overflowing geometry, no images. Also forbidden `inline:` / `url()` / `path()`
      locations, bad checksums (including one on a compressed block, which must not be
      decompressed), and an unknown projection.
- [x] A FITS twin for every loadable file. The synthetic twins come from the generator;
      the real files' twins come from `Tests/xisf/read_xisf.py twin`, an independent
      decoder that shares no code with the generator. `read_xisf.py check` reports 99/99
      as expected. The real-file decodes match libXISF's own test assertions. A
      third-party reader, sergio-dr/xisf, agrees on 107/113. Its six disagreements are
      its own gaps (UInt64, signed units, empty vectors, no version check), listed in
      `Tests/xisf/README.md`.
- [x] DS9 probe baselines (`<fixture>.xisf.sav`, the `asdf.sh` probe format) for all 113
      fixtures, recorded by loading each twin into today's DS9
      (`Tests/xisf/make_baselines.sh`). The reader's acceptance test is reproducing them.
- [x] Read the spec sections marked **[verify]** and correct this file.

Phase 0 findings that change the plan (details in `Tests/xisf/README.md`):

- **PixInsight copies stale structural cards into `FITSKeyword`.** In a real
  PixInsight 1.8.9 file the pixels are 0–9 and the keywords say `BITPIX = 16`,
  `BZERO = 32768`. §2.5's "overwrite the structural cards" is required, not cautious.
  Treat `BSCALE`/`BZERO`/`BLANK`/`DATAMIN`/`DATAMAX` and `NAXISn` as structural.
- **Be lenient with the header.** Real writers omit `encoding="UTF-8"` from the XML
  declaration, put `byteOrder` on scalar properties, type
  `XISF:CreationTime` as String, and leave a `<Thumbnail>` attachment pointing past EOF.
  None of these should stop a load.
- **Empty vector properties have no content at all** (`length="0"
  location="inline:base64"/>`). libXISF writes them, and they crash sergio-dr/xisf's
  reader. The DS9 reader parses properties for the WCS, so it must treat an empty
  inline block as zero bytes, not as missing.
- **A float image without `bounds` is tolerated**, despite the spec's "required". It
  only sets the display range, which DS9 computes anyway.
- **PixInsight writes RGB as Planar** (no `pixelStorage` attribute) with an inline
  `<ICCProfile>`.
- **Check the codec name before the raw-subblock rule** (`c == u` means stored raw).
  Otherwise an unknown codec whose stored size happens to equal its declared size
  loads as raw bytes. `Tests/xisf/malformed/unknown_codec.xisf` is built that way.

### Phase 1: Container reader (done 2026-11-21)
- [x] Preamble and header: signature, header length, nonzero reserved bytes tolerated,
      and only the bytes up to the last `</xisf>` handed to the parser, so a signed
      unit's trailing `<Signature>` is dropped.
- [x] libxml2 wired into fitsy. The 380-line "Load libxml2 configuration" block was cut
      from `tksao/configure` (lines 10617–10996, asserted to name no package) and
      pasted before fitsy's "Setup a *Config.sh.in" section. It also needed 7
      `ac_subst_vars` names, `with_xml2_config` in `ac_user_opts`, 5 precious vars,
      the `--with-xml2-config` help line and the env-var help lines; the matching
      `configure.ac` section; and `@XML2_CFLAGS@`/`@XML2_LIBS@` in `fitsy/Makefile.in`.
      After `rm fitsy/Makefile && make fitsy`, the regenerated `Makefile` differs from
      the old one only by libxml2's include and link flags. `make ds9clean ds9` relinks.
- [x] Parsing with `xmlCtxtReadMemory`, options `NONET | NOERROR | NOWARNING` (no
      entity expansion), with errors taken from the context. Root name, namespace and
      `version="1.0"` are checked. Each `<Image>` becomes a `FitsXisfImage`: geometry,
      sampleFormat, bounds, colorSpace, pixelStorage, id/uuid/imageType/offset/
      orientation, its `<FITSKeyword>`s and `<Property>`s, and a `FitsXisfBlock`.
      `<Metadata>` properties are kept too. Each image gets an `unsupported_` bitmask
      plus the first reason as text, so the chooser can say why.
- [x] Locations: `attachment:`, `embedded` (base64/hex `<Data>`, carrying its own
      compression and checksum attributes), and `inline:` for properties. `inline:` on
      an Image, `url()` and `path()` are refused by name. Thumbnails are never looked at.
- [x] Compression and checksum attributes are parsed and validated: codec name first,
      then sizes; subblock sums are checked against both the declared uncompressed size
      and the stored size; checksum algorithm and digest length are checked, with hex
      case normalised. Decoding is Phase 2. Until then `block()` refuses any block that
      is compressed or carries a checksum, rather than return it unverified.
- [x] Every size and position off disk goes through a strict unsigned-decimal parser,
      and geometry × sample size is bounded at 2⁶² as it is formed. A block that does not
      fit in the file, or whose size disagrees with its geometry, is refused per image.
- [x] Tests:
  - `utils/xisfdump` is a standalone build of the reader alone, with no frame, grammar
    or ds9 involved.
  - `Tests/xisf/check_container.py` runs it over all 113 files and checks every image's
    verdict and stored bytes against `read_xisf.py`. Result: 0 failures and 3 DEFERRED,
    the two bad checksums (Phase 2) and the UInt64 overflow value (Phase 3).
  - Two deliberately broken copies of the reader were each caught: one with the codec
    check removed, one reading attachments a byte off.
  - An ASan/UBSan build survived 3000 corrupted or truncated mutants of the fixtures.

Tolerated, because the pixels stay knowable: missing `encoding=`, nonzero reserved
bytes, missing or malformed `bounds`, uppercase checksum hex.

### Phase 2: Codecs and integrity (done 2026-11-21)
- [x] zstd 1.5.7 vendored at `zstd/`:
  - Upstream tarball, unpruned like the other vendored libraries. Its SHA-256 matched
    the digest published with the GitHub release.
  - `make zstd` builds `libzstd.a` by name with `ZSTD_LIB_COMPRESSION=0` (which also
    drops the dictionary builder and the deprecated API) and `ZSTD_LEGACY_SUPPORT=0`,
    then copies the archive and `zstd.h`/`zstd_errors.h`. The archive has
    `ZSTD_decompress` and no `ZSTD_compress`. `ar rcs` indexes it, so unlike bzip2
    there is no cross `RANLIB` to set.
  - Wired at every bzip2 anchor: the three `.PHONY` lists, `zstdclean`/`zstddistclean`
    (both `clean`: zstd/lib has no distclean), `{unix,macos,win}/Makefile.in` build
    order, `libzstd.a` in the three `ds9/*/Makefile.in` link lists, and `Manifest.md`.
  - The generated `ds9/macos/Makefile` and top-level `Makefile` were refreshed with
    `config.status`; each differs from before by exactly the intended line.
- [x] Codecs, in `FitsXisfFile::block()`:
  - **zlib**: `uncompress2`. Lengths are bounded by `ULONG_MAX`, 32 bit on Windows,
    and the input must be fully consumed.
  - **lz4/lz4hc**: `LZ4_decompress_safe`, raw block format with no framing.
  - **zstd**: `ZSTD_decompress`.
  - Every subblock must decode to exactly its declared size.
- [x] Subblocks: their sums are checked against the stored and uncompressed sizes (for
      embedded blocks only once the text is decoded). A `c == u` subblock is copied,
      never decoded. Unshuffling happens after all subblocks, over the whole block,
      with a trailing partial item copied as is.
- [x] Checksums over the stored bytes, before anything is decompressed, through OpenSSL
      EVP (§2.4), for all five algorithms.
- [x] Tests:
  - `check_container.py` now compares `block()`'s decoded bytes with `read_xisf.py`
    for every image. Bad checksums and wrong subblock sizes must be refused by
    `block()`. Result: 119 files, 117 images, 0 failures, 8 refused by `block()`, and
    1 deferred (the UInt64 value, Phase 3).
  - Four broken copies of the decoder were each caught: shuffle off by one item, raw
    subblocks decompressed, checksums skipped, lz4 output size unchecked. The last
    needed new fixtures. A subblock that decodes *short* while the declared total still
    matches the geometry was untested, because every lying fixture also had a subblock
    that overflowed and failed on capacity. So 6 were added:
    `malformed/subblock_size_lie_*` and `malformed/subblock_short_*`, for zlib, lz4
    and zstd.
  - An ASan/UBSan fuzz of 4000 codec-focused mutants (payload corruption, rewritten
    sizes, swapped codec names, truncation) found nothing.
  - ds9 relinks with `libzstd.a`. The linker does not pull `xisf.o` out of fitsy's
    archive yet, because nothing references it, so the first real link of zstd and
    libcrypto into ds9 comes with Phase 3.

### Phase 3: Pixels and header (done 2026-11-21, except the header viewer)
- [x] `FitsXisf : FitsFile`, built like `FitsAsdf`. It picks an image by id or index
      (default: the first), decodes its block through `FitsXisfFile::block()` and
      converts it, then sets `pWidth_…pArch_`, builds a `FitsHead`, and calls
      `setByteSwap()`.
  - Sample formats:
    - UInt8 → 8 and UInt16 → −16 (fitsy's unsigned code, as for ASDF).
    - UInt32 → widened to int64, written little endian.
    - UInt64 → 64, refused if any value exceeds `INT64_MAX`, rather than wrapping.
    - Float32/Float64 → −32/−64.
    - Complex is refused.
  - Byte order is left to fitsy's `byteswap` except when widening.
- [x] Layout: rows flipped. A 2-D image's channels become the planes of a cube, so RGB
      is a 3-plane cube, RGBA 4, and CIELab 3 with no colour conversion. Normal storage
      is gathered into planar. A 3-D Gray image is a cube. A 3-D image with several
      channels, and anything of rank other than 2 or 3, is refused by name.
      `FitsXisfNext` is `FitsAsdfNext` under another name: that class was already
      format-neutral.
- [x] Header, in this order:
  - the structure from the geometry;
  - `DATAMIN`/`DATAMAX` from `bounds`;
  - the image's `<FITSKeyword>`s verbatim, laid out to FITS columns;
  - FITS equivalents of standard properties where the keywords lack them: OBJECT,
    DATE-OBS/END, EXPTIME, FILTER, TELESCOP, INSTRUME, X/YBINNING, CCD-TEMP,
    X/YPIXSZ, FOCALLEN/APTDIA (m → mm), OBSGEO-B/L/H, IMAGETYP from `imageType`;
  - COMMENT cards saying what was done (image n of m, flip, widening, channels,
    `offset` and `orientation` noted but not applied).

  Structural keywords (SIMPLE, BITPIX, NAXISn, BZERO, BSCALE, BLANK, DATAMIN/MAX, …)
  from the list are demoted to COMMENT cards, as are names that are not FITS names.
  **WCS keywords are also demoted until Phase 4**, so no convention mistake can put a
  wrong solution on screen in the meantime.

  `DATAMIN`/`DATAMAX` are used by DS9 only in the `datamin` minmax mode (default is
  `scan`), so `bounds` never clips by default.
- [x] Tests:
  - `utils/xisfdump --fits [--image key]` prints the `FitsXisf` header and a hash of
    each plane.
  - `Tests/xisf/check_fits.py` compares every plane with the twins: 93 loads, plus 4
    more images selected by id or index, and 26 refusals, each with a message. It also
    checks that no header carries BZERO/BSCALE/BLANK or a WCS card, and that the
    keywords fixtures keep what they should. Result: 0 failures.
  - Five broken copies were each caught: no flip, Normal read as planar, byte order
    ignored when widening, the structural filter off, the UInt64 range check off.
  - ASan/UBSan over the 7000 earlier mutants plus every fixture through the `--fits`
    path found nothing.
- [ ] Header viewer: the XML header, pretty-printed, with attachment blocks shown by
      size, the analogue of ASDF's YAML view. Moved to Phase 5: it needs the Tcl side
      (`fitsy xisf header` in tclfitsy and `header.tcl`), which is where the rest of the
      UI work is.

### Phase 4: WCS
- [ ] Read both `AstrometricSolution:` and legacy `PCL:AstrometricSolution:` blocks;
      skip a standard block whose `Version` major is not 1.
- [ ] Layer 1 → `CTYPE1/2` (`RA---TAN` etc., `GLON`/… never: XISF is equatorial only),
      `CRVAL`, `CRPIX` (with the row flip and pixel-centre correction), `CD1_1…CD2_2`
      (the sign of the y terms flips with the rows), `LONPOLE`/`LATPOLE` from the
      optional native coordinates, and `RADESYS` (`ICRS`; `GCRS` has no FITS RADESYS
      value, so map it to ICRS with a warning card). `MJD-OBS`/`DATE-OBS` comes from the
      midpoint of `Observation:Time:Start`/`End`, which the spec defines as the
      observation time.
- [ ] Layer 2 (projective 3×3): fold it into the linear part if it is affine; otherwise
      it needs an AST `MatrixMap`/`PolyMap` chain. Check whether PixInsight ever writes a
      non-affine one in practice before building that.
- [ ] Layer 3 (surface splines): **AST has no thin-plate-spline Mapping.** Options, in
      order of cost: (a) ignore with a header note and use Layer 1/2 (the spec allows
      falling back to a lower layer); (b) fit a SIP polynomial to the spline on a grid,
      the way pds9 approximates GWCS, and emit `-SIP` cards; (c) implement the splines
      as an AST `IntraMap`. Start with (a), measure the residual on real
      ImageSolver output against PixInsight's own coordinate readout, then decide.
- [ ] Test: compare DS9 `crosshair` sky coordinates at the corners and centre against the
      FITS twin. Write it into `WCS_TEST_PLAN.md` as a new section rather than a parallel
      plan.

### Phase 5: UI, scripting and the rest
- [ ] Everything in §3 Tcl. Menus/buttons/XPA/SAMP/command line, image chooser,
      backup/restore (portable, as ASDF's), mask layer, RGB frame.
- [ ] Docs.

### Phase 6: Platforms and tests
- [ ] `Tests/xisf.sh` wired into `io.sh`. `Tests/` is a separate git repo, so commit there.
- [ ] Build and run the fixture suite on macOS, Linux and Windows/mingw. Watch the
      `windows.h`/`std::byte` include-order trap documented at the top of `fitsy/asdf.C`
      if zstd's or libxml2's headers pull in `<windows.h>`. Check whether libxml2's
      headers do on mingw; if so, include them before `<string>`/`<vector>` and the
      fitsy headers, as `fitsy/asdf.C` does for the codec headers.

### Deferred / out of scope for v1
- Distributed `.xish`/`.xisb`, `url(...)`/`path(...)` locations.
- Complex and UInt64 pixels; CIELab → RGB conversion; ICC profiles.
- Applying `DisplayFunction` (PixInsight STF) as a DS9 scale. Possible later, since it is
  a midtones-transfer function over clipped ranges. Showing its values in the header
  viewer is cheap.
- Debayering `ColorFilterArray` frames; show them as gray with the pattern in the header.
- Writing XISF (`save xisf`).
- XISF tables (`<Table>` properties). Unlike ASDF's Prism/catalog question, nothing
  astronomical seems to use them.

---

## 5. Open questions to settle in Phase 0

1. ~~Origin, pixel centre and matrix element order~~: answered. Top-left, centres at
   +0.5, M row-major on (x-x0, y-y0), no other offset (PCL `ComputeWCSKeywords`,
   `LinearTransformation::Transform`).
2. ~~Does PixInsight also write WCS `FITSKeyword`s?~~ Yes, on every solved XISF
   (`AstrometricMetadata::Write` → `UpdateWCSKeywords`). They are bottom-up, unlike
   the top-down convention PCL documents for reading keywords. See §2.6. Worth
   reporting upstream. **Still open:** which convention keyword-only files from other
   writers (NINA, Siril, libXISF conversions) follow. `wcs/keywords_only` assumes
   PCL's documented top-down one.
3. What codec does current PixInsight write by default? The real files so far use
   none, lz4+sh and lz4hc+sh. zstd is mandatory for conformance either way.
4. ~~Planar vs Normal~~: the layout is settled (§8.5.3), and PixInsight 1.8.6 writes RGB
   as Planar. Normal is still worth supporting, since the spec requires it.
5. How common is Layer 3 distortion in plate-solved output, and how big is the residual
   if it is ignored?
6. ~~Attachment alignment~~: readers can ignore it. Positions are explicit, and the
   property only promises they are multiples (§11.4.2).

## 6. ASDF lessons that apply here unchanged

- **Bisect toward the simplest fixture.** For ASDF the diagnosis was "almost every GWCS
  problem looks like 'no WCS'". Expect the XISF version to be "every header-build problem
  looks like a blank frame". Keep a minimal 8×8 UInt8 uncompressed fixture as the
  bottom of every bisection.
- **Test a real cube with depth > 1.** A depth-1 cube never asks for a next slice, and
  that is how the ASDF segfault went unseen.
- **`xpaget data image x y 1 1` reads slice 1 only;** use `scale limits` under
  `scale mode minmax` for per-plane checks. The Cube panel is sticky across loads.
- **`BLANK` is an `int`** throughout fitsy. XISF has no null convention of its own, so
  don't invent one.
- **Running ds9 headless:** `xpans` on `PATH` first, delete `~/<title>.auto` after a crash,
  `set pds9(confirm) 0`, newline-separated scripts through `xpaset tcl`, and
  `xpaset -p ds9 exit` to stop it.
- **Header edits under `tksao/`/`fitsy/` need a `clean`** before rebuilding
  (`AGENTS.md`).
