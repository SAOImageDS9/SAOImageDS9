# Native XISF Support — Research and Phased TODO

Research plan for teaching DS9 to read **XISF** (Extensible Image Serialization Format,
PixInsight's native format) natively, on the same footing as the ASDF reader this branch
already has. Written 2026-11-21 against the ASDF work as it stands on
`asdf_support_rebase`. Check items off as they land, and add findings inline, the way
`TODO_ASDF.md` does. Work happens on the `xisf_support` branch, in both this repo and
`Tests/`.

**Status (2026-11-21): Phases 0–5 are done**, including loading an RGB image into all
three channels of an RGB frame. **XISF files open in ds9**, from the File menu,
over XPA/SAMP and on the command line. `Tests/xisf.sh` reproduces all 121 fixture
baselines, which were recorded from FITS twins, through ds9's own `xisf` command.
`fitsy/xisf.{h,C}` holds two layers:
- **`FitsXisfFile`**, the container: header, descriptors, keywords and properties, and
  any data block decoded (checksums, zlib/lz4/lz4hc/zstd, subblocks, shuffling).
- **`FitsXisf`**, one image as a `FitsFile`: rows flipped, channels as planes, and a
  header built from keywords and properties, with WCS from the astrometric solution or
  mirrored keywords.

tksao reaches it through `load xisf`; the Tcl surface is `ds9/library/xisf.tcl`.
**Phase 6**: Linux and Windows now build cleanly in CI (SAOImageDS9/SAOImageDS9#455);
the test suites have still only been run on macOS. After that, the remaining work is real plate-solved PixInsight output and the
distortion layers.

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
- [x] `fitsy/file.h`: `errorMessage()` reused.
- [x] `tclfitsy`: `fitsy xisf images|header <file>` (Phase 5).
- [x] `tksao/frame/lex.L` + `parser.Y`: `xisf` token and `loadXisf`. `XISF_` sorts
      before `XML_`, so only 9 tokens renumber (a ~10k-line `parser.C` diff); `lex.C` +2.3k
      lines of tables. Done by the corrected recipe in `AGENTS.md`.
- [x] `tksao/frame/base.h`: `XISF` in `MemType`, `loadXisfCmd`.
- [x] `tksao/frame/baseload.C` / `frame.h` / `frameload.C`: image and mask layers.
- [x] `tksao/frame/context.C`: `case Base::XISF:` → `FitsImageXisfNext`.
- [x] `tksao/frame/fitsimage.{h,C}`: `FitsImageXisf`, `FitsImageXisfNext`.
- [x] RGB frame (2026-11-21): `FrameRGB::loadXisfCmd` sends an RGB-colour-space image
      (2-D, three or more channels, loadable: `xisfIsRGB` in fitsy) through
      `FrameA::loadRGBCube` with a new `XISF` case, so its planes become red, green and
      blue in one load, exactly as `-rgbcube` splits a FITS cube. For XISF only,
      `loadRGBCube` accepts a depth of 3 or more, because an RGBA image's alpha is plane
      4 and is left out. A gray image, a mask, and anything in an HLS/HSV frame still go
      to the current channel. No grammar change was needed: the file says it is colour,
      so the frame decides, unlike FITS, where `-rgbcube` has to be asked for. The Tcl
      side asks the same rule (`fitsy xisf isrgb`) and records the load as `{rgb cube}`,
      so ProcessLoad saves it against the frame and backup/restore round-trips it.

**Tcl (`ds9/`)**
- [x] `ds9/library/xisf.tcl`: `LoadXisfFile`/`XisfLoadImage`, `ProcessXisfCmd`, the
      image chooser `XisfImageDialog`, and `XisfHeaderText`.
- [x] `ds9/parsers/xisfparser.tac` + `xisflex.fcl`, ASDF's grammar under the `xisf`
      namespace. Watch the trap that cost a round: taccle also reads lines as Tcl
      lists, so a quote in a `.tac` comment breaks it too, not only in `.fcl`.
- [x] `load.tcl`, `open.tcl`, `mfile.tcl`, `stdfbox.tcl`, `xpa.tcl`, `comm.tcl`,
      `command.tcl`, `frame.tcl`, `mask.tcl`, `header.tcl`, `backup.tcl`, menus and
      buttonbar.
- [x] The XISF file recorded for the header viewer is cleared on frame reuse
      (`ProcessLoad`) and frame delete (`XisfClearFile`).
- [x] `layer` re-checked after the load: only an image load records its file. The mask
      phase of `Tests/xisf.sh` checks it.
- [x] Docs: `command.html`, `xpa.html`, `samp.html`, `file.html`, `framecmd.html`.
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

### Phase 4: WCS (done 2026-11-21, layer 1 only)
- [x] The standard `AstrometricSolution:` block is used unless its `Version` major is not
      1, in which case PCL ignores it entirely and so do we. Failing that, the legacy
      `PCL:AstrometricSolution:` block, same names and meaning, is used.
      **Precedence:** WCS keywords are used only when the image has no solution block of
      either kind, not even an unusable one, because PCL writes bottom-up keywords next to
      every solution it saves. When a solution exists, those keywords become COMMENT
      cards.
- [x] Layer 1 → cards, PCL's `ComputeWCSKeywords` to the letter:
  - `CTYPE` `RA---`/`DEC--` + TAN/STG/ZEA/SIN/CAR/MER/AIT.
  - `CRVAL`.
  - `CRPIX1 = x0+0.5`, `CRPIX2 = H+0.5−y0`.
  - `CD` = M with column 2 negated.
  - `PV1_1`/`PV1_2` and `LONPOLE`/`LATPOLE` from the native and pole coordinates.
  - `RADESYS 'ICRS'`. GCRS, or any other system, is shown as ICRS with a note; the
    difference is below what layer 1 models.

  The vector and matrix properties are read through `FitsXisfFile::block()`: type,
  length/rows/columns and byte size checked, `byteOrder` honoured, values required to
  be finite. Any missing or bad required property disables the solution with a COMMENT
  saying why, and so does an unknown projection.
- [x] Keyword-only WCS, mirrored with PCL's `MirrorVertically`:
  - `CRPIX2 → H+1−CRPIX2`;
  - `CD1_2`/`CD2_2`/`PC1_2`/`PC2_2` negated;
  - `CDELT2` negated when there is no PC matrix;
  - SIP `A`/`AP` terms negated for odd q, `B`/`BP` for even q;
  - alternate-WCS letters carried along, and non-finite values left alone.
- [x] Not needed: DATE-OBS/MJD from the observation midpoint. For an ICRS solution the
      time does not enter the transform; DATE-OBS/DATE-END already come from the
      properties (Phase 3).
- [ ] Layer 2 (projective 3×3): noted in a COMMENT and not applied (the spec's
      fallback to layer 1). To do it properly, fold it into the linear part if it is affine; otherwise
      it needs an AST `MatrixMap`/`PolyMap` chain. Check whether PixInsight ever writes a
      non-affine one in practice before building that.
- [ ] Layer 3 (surface splines): **AST has no thin-plate-spline Mapping.** Options, in
      order of cost: (a) ignore with a header note and use Layer 1/2 (the spec allows
      falling back to a lower layer); (b) fit a SIP polynomial to the spline on a grid,
      the way pds9 approximates GWCS, and emit `-SIP` cards; (c) implement the splines
      as an AST `IntraMap`. **(a) is what is built**: a COMMENT says the distortion
      is not applied. Next, measure the residual on real ImageSolver output against
      PixInsight's own coordinate readout, then decide.
- [x] Tests, also recorded in `WCS_TEST_PLAN.md` §8:
  - `check_fits.py` compares the reader's WCS with the twin's numerically: the same sky
    position to 1e-9° on a 7×5 pixel grid, for every loadable fixture.
  - `check_ds9_wcs.sh` loads the reader's exact cards into ds9 (AST), and every `wcs/`
    probe baseline is reproduced, crosshair sky position included. 19/19.
  - New fixtures: `wcs/keywords_only_sip` (rotated CD, every SIP term to order 3). The
    generator verifies its mirror rule independently with astropy before writing any
    twin.
  - Six broken builds were each caught: CRPIX2 unflipped, CD column not negated,
    keywords not mirrored, SIP signs inverted, keywords used despite a solution, the
    Version check off.
  - 3000 WCS- and card-focused mutants under ASan/UBSan found nothing.
  - **The 1904-66 WCS examples** (2026-11-21; `Tests/xisf/wcs1904/`,
    `make_wcs1904_fixtures.py`). These are the Calabretta & Greisen set the ASDF GWCS
    fixtures were built from: reference at the south pole far off the image, explicit
    LONPOLE/LATPOLE.
    - The 7 projections a solution can express become layer 1 solutions, with ICRS
      twins.
    - All 28 files (27 projections and NCP) also become keyword-only fixtures,
      mirrored top down.
    - 4 variants with a non-default LONPOLE, θ₀ or φ₀. The originals use only
      defaults, which a reader ignoring `CelestialPoleNativeCoordinates` and
      `ReferenceNativeCoordinates` passed; with the variants such a reader is off by
      15°–112°.
    - All 39 pass every check: WCS to 1e-9° against the twins, `check_ds9_wcs.sh`
      58/58 through ds9/AST, and `xisf.sh xpa` 160/160. `check_fits.py` now also
      requires off-sky (NaN) pixels to match and reports an unusable WCS instead of
      crashing.
- [x] **Found and fixed on the way:** a heap overflow. `FitsCard::setString`/`setReal`
      (fitsy, pre-existing) copy value and comment into the 80-byte card with an
      unbounded `memcpy`, and Phase 3 passed them file-controlled property strings.
      `header/long_values` reproduces it under ASan. Every card the XISF reader writes
      now goes through its own bounded `xisfCard()`, which closes a long string's quote
      before column 80. The fitsy helpers themselves are unchanged and still unsafe for
      long input; they are worth fixing separately, since other callers may pass
      user-controlled text.

### Phase 5: UI, scripting and the rest (done 2026-11-21, except the RGB frame)
- [x] The frame command `load xisf <name> <file> <image> [mask]`, and on top of it the
      Tcl surface:
  - File → Open as → XISF (with an image chooser when the file holds several);
  - the buttonbar and its preference;
  - the mask dialog;
  - `xisf [new|mask] file[:image]` over XPA and SAMP, and `-xisf` on the command line;
  - backup/restore by reloading the source file (copied in for a portable save set,
    through `BackupSourceFile`, now shared with ASDF).
- [x] **Refusals are decided in C++ alone.** ASDF re-checks in Tcl because
      `ProcessLoad` swallowed the frame's error. For XISF, `ProcessLoad` now passes on
      the first line of that error, so the reader's own reason reaches the user,
      including those only the block decoder can know (bad checksum, short
      subblock). This needed one C++ fix: `FitsImage::process()` deletes an invalid
      `fits_` via `reset()`, so `Base::loadXisfCmd` could never read
      `errorMessage()`. `FitsImageXisf` now appends the reason to the interpreter
      before `process()`. **`Base::loadAsdfCmd` has the same dead branch**, so ASDF's
      C++ refusal reasons are lost the same way. Its Tcl pre-checks hide that, but a
      block-level failure there still says only "Unable to load". That is a separate
      fix.
- [x] Header viewer: FitsXisf's FITS header, keyword-coloured as for FITS, followed by
      the file's XML header (`fitsy xisf header`: libxml2-indented, long data elided,
      a signed unit's signature appended verbatim).
- [x] Tests: `Tests/xisf.sh`, modes `xpa`, `command`, `mask`, `extra`, run on
      2026-11-21:
  - `xpa`: **121/121** fixtures reproduce their baselines through ds9's real `xisf`
    command. Those baselines were recorded from the FITS twins before the reader
    existed, so this is an XISF-vs-FITS comparison in ds9 itself, WCS included.
  - `command`: one `-xisf` launch per file, all clean.
  - `mask`: 4/4. The mask leaves the image's WCS and header file alone.
  - `extra`: 10/10. Selection by id and by index, `xisf new`, a refusal's reason, a
    bad checksum's reason, the header viewer's FITS and XML parts, and backup/restore
    keeping pixels, WCS and the XISF source.

  There is deliberately no `save` mode, since the baselines come from the twins. The
  ASDF suite was rerun after the shared changes: 193/193 baselines, mask 4/4. The
  automated phases of `backup.sh` were rerun too (24 passed, none failed). Its `old`
  phase opens each historical save set and waits for someone to close ds9, so it
  needs a person and was not run.
- [x] RGB frame: one XISF RGB image into all three channels (see §3). Tested in
      `Tests/xisf.sh extra`:
  - PixInsight's own RGB file lands as 65535/32768/16384;
  - planar and normal storage match the twins' planes;
  - RGBA drops alpha;
  - a gray image stays in the current channel;
  - the RGB frame survives backup and restore. 16/16.

  `rgbcube.sh` (FITS RGB cubes through the same `loadRGBCube`) still passes.

### Phase 6: Platforms and tests
- [x] `Tests/xisf.sh` added to `io.sh`, commented out like `asdf.sh` (the user's
      choice for that one, presumably its runtime; the command phase alone is about 6
      minutes).
- [x] macOS: built, and every suite run (Phases 1–5).
- [x] **Static portability audit (2026-11-21)**, done in place of the Linux and Windows
      builds, which are deferred for now. There is no mingw or GCC on this machine. Found
      and fixed:
  - **The fitsy configure rule lacked `$(PKGCONFIG)`.** On a Windows cross build that
    variable points libxml2's `pkg-config` fallback at the mingw sysroot; without it
    fitsy's configure could pick up the host's libxml2. Added, matching the tksao and
    tclxml rules. It is empty on unix/macOS, and fitsy's regenerated `Makefile` was
    confirmed unchanged there.
  - **`%zu` in `fitsy/xisf.C`** became `%llu` with casts, the form `fitsy/asdf.C` uses
    and is validated with on mingw, whose C runtime has not always understood `%zu`.

  Checked and fine:
  - **Include order.** zlib's `zconf.h` and OpenSSL's `crypto.h` (via `evp.h`) include
    `<windows.h>` under Windows; libxml2's own headers do not, except `nanoftp.h`, which
    is not used. All of them come before `<string>`/`<vector>` and any `using
    namespace std` in `xisf.C`. `xisf.h`, which tksao and tclfitsy include after their
    own using-directive, reaches none of them.
  - **GNU ld link order** (Linux and mingw; macOS's linker hides mistakes here). In
    `ds9/{unix,win}/Makefile.in`, tclfitsy and tksao precede fitsy in `EXT_SPECS`,
    `libzstd.a` follows them in `LLIBS`, and `-lssl -lcrypto` and `$(LIBS)` (libxml2)
    follow `LLIBS`.
  - **zlib.** ds9 takes zlib from tkimg's `zlibtcl` (zlib 1.3.2), whose archive exports
    `uncompress2`, which `xisf.C` needs.
  - **zstd's x86-64 assembly decoder** is enabled upstream for `_WIN32` too (1.5.7
    `portability_macros.h`). If the mingw assembler rejects it, add `ZSTD_NO_ASM=1` to
    the `zstd` rule in `make.include`.
- [x] **Linux and Windows build in CI** (SAOImageDS9/SAOImageDS9#455, 2026-11-21).
      All 8 checks pass: Ubuntu, Windows (Cygwin + mingw-w64), and macOS Intel, ARM and
      Universal. The workflows only build (`make && make dist`), so this proves
      compilation and linking, not behaviour. From the logs:
  - **One warning in the new code, now fixed.** GCC (both platforms) flagged
    `xisf.C`'s `new char[total*outsz ? total*outsz : 1]` (`-Wint-in-bool-context`).
    The size is now computed once. No other XISF file warned. The two
    `-Wstringop-truncation` warnings in `fitsimage.C` are upstream code from 2024
    (a deliberate unterminated `strncpy`).
  - **No `<windows.h>` macro collisions**: `xisf.C`, `tclfitsy.C` and the tksao files
    compiled under mingw.
  - **zstd's assembly** (`huf_decompress_amd64.S`) assembled under mingw, so
    `ZSTD_NO_ASM` is not needed.
  - **libxml2.** Ubuntu found it through `xml2-config`. Windows had none and fell back
    to `pkg-config`, which found `libxml-2.0` in the mingw sysroot (include
    `-I/usr/x86_64-w64-mingw32/sys-root/mingw/include/libxml2`). That is the target's
    libxml2, not the host's: the `$(PKGCONFIG)` fix doing its job.
- [ ] Still to run on Linux and Windows, since CI does not: the reader checks
      (`utils/xisfdump` + `check_container.py`/`check_fits.py`), `Tests/xisf.sh`, and
      `asdf.sh xpa`. On Windows also load a fixture by absolute `C:` path, with and
      without `:image` (`AsdfSplitPath` must not split the drive letter), and check
      which `libxml2-2.dll` the release ships against the one fitsy linked.

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

0. **A real plate-solved XISF file is still needed, and none is public.** It is the
   only check of the WCS against real data, and the gate for the distortion layers
   (Phase 4: measure their effect before choosing how to handle them). Searched
   2026-11-21, reading only the XML headers via HTTP range requests:
   - **GitHub:** all 28 public `.xisf` files. Most are in Git LFS, fetched through
     `media.githubusercontent.com`, which honours `Range`. They include PixInsight
     1.8.9-2 and 1.9.3 output from `tiagohm/nebulosa.data`,
     `dennispayne/XISF-Shell-Extensions` and `joergs-git/AstroBlinkV2`, plus NINA test
     images. None carries an `AstrometricSolution` or `PCL:AstrometricSolution` block.
     The richest, an M42 RGB stack, has only `Observation:Center:RA/Dec` and `RADESYS`.
   - **A web search** found only forum threads. The one shared file is a Dropbox link
     that may be gone, and that image never solved in PixInsight.

   **What would close this:** any image run through PixInsight's ImageSolver, ideally
   with distortion correction on, together with PixInsight's own FITS export of it and
   two or three coordinates read off PixInsight's readout. Header ranges are enough
   to triage candidates; the whole file is only needed once one has a solution.
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
