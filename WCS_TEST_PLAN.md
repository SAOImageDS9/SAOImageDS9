# WCS Test Plan — native ASDF/GWCS frames

Companion to `TODO.md` and `ASDF_NATIVE_SUPPORT_DESIGN.md`. Phases 3 and 4 established that
a Roman ASDF file's GWCS reads into DS9 and is *numerically identical* to `romancal`'s own
transform. This plan covers the next question, which is broader: does everything in DS9 that
**consumes** a WCS work on such a frame?

Status key: **PASS** ran and met expectation · **FAIL** ran and did not · **GAP** known
limitation, see §6 · **TODO** not yet run.

Anything marked PASS below was actually executed against a real Roman file and the result
recorded. Everything else is proposed, not claimed.

---

## 1. Why a GWCS frame needs its own pass

A GWCS frame is not "a frame with a WCS" in the way the rest of DS9 assumes. Eight structural
differences drive the whole matrix; each test below traces to one.

| | Risk | Consequence |
|---|---|---|
| **R1** | The WCS is an `AstFrameSet` with **no FITS-card backing**. | Anything that re-derives the WCS from the image header loses it outright, because the header has no WCS cards to fall back on. *Found the hard way:* `block to 1 1` silently dropped it (fixed — `FitsImage::wcsYaml_`). |
| **R2** | `replaceWCSYaml` sets `wcsAltHeader_`, so **`has wcs alt` is true but `get fits header wcs` is empty**. | Any code branching on `has wcs alt` and then serializing cards gets nothing. *Found:* backup wrote a 1-byte `ds9.wcs` and the restore replayed it over a good WCS (fixed). |
| **R3** | GWCS has **no alternate-WCS letters**; only a primary. | Anything iterating `wcsa`…`wcsz` has nothing to iterate. |
| **R4** | GWCS Frames carry **no `Ident`**, which `scanWCS()` uses to populate `wcs_[]`. | `yaml2ast()` force-sets `Ident=" "`. Anything else keying off Frame `Ident` may misbehave. |
| **R5** | The inverse is **numerical, not analytic**. | Sky→pixel round-trips carry ~1e-3 px error (measured), vs ~1e-9 for a FITS TAN. Sets the tolerance for every sky→pixel test. |
| **R6** | AST **drops `bounding_box`** entirely (`yamlchan.c` has no code path for it). | The GWCS valid-pixel domain is not enforced; coordinates far outside the detector extrapolate silently rather than being rejected. |
| **R7** | Roman's distortion is **strongly non-linear** across a 4088² detector. | Anything assuming local linearity (compass, rulers, region radii/angles far from the reference point) can drift in a way a TAN WCS would not show. |
| **R8** | There is **no FITS-card serialization** of a GWCS. | Exporting the frame to FITS cannot carry the WCS. *Confirmed:* see G-5. |
| **R9** | DS9 maps region **angles** with a single image-wide rotation — `Base::mapAngleFromRef` (`frmap.C:9`) adds `getWCSRotation(sys,sky)`, evaluated once per image, not at the region's own position. | A rotated region's angle written in sky coordinates is the *field-centre* value wherever the region sits. Generic to DS9, not GWCS-specific — but the error scales with field size × sin(dec), so Roman shows a **0.587°** true local-north spread (±0.29° error at the edges) where an 800² TAN frame at dec 47 shows only 0.060°. Self-consistent inside DS9 (C-8 round-trips exactly); it bites when handing a region file to another tool. *Measured, C-8.* |
| **R10** | DS9 converts pixel **lengths** to angular units with a single scalar scale, but the Roman GWCS is genuinely **anisotropic**. | Measured at field centre: x = 0.1103417″/px, y = 0.1082827″/px — a ratio of **1.019**, varying 1.014–1.024 across the detector. DS9 reports 0.1082829″/px, i.e. the dec-axis value, so angular radii and ruler lengths understate x-direction extents by ~2% (0.84″ = 7.7 px on a 400 px radius). A TAN FITS frame is exactly 1.00000 isotropic, so this is invisible there. Corroborated three independent ways: direct central-difference measurement, the file's own `s_region` footprint (0.3101°·cos 66°/4088 = 0.1111″/px in x vs 0.1229°/4088 = 0.1082″/px in y), and DS9's own anisotropic zoom under `lock frame wcs` (F-3). *Measured, C-9.* |

---

## 2. Ground truth

Reference values, independently checked, for `r0000101001001001001_0001_wfi01_f158_cal.asdf`:

- The file's own `romancal.assign_wcs` footprint, `roman/meta/wcs_info/s_region`:
  `POLYGON ICRS 269.986945544 65.974265112 269.986740134 66.097228761 269.676782229 66.097195774 269.680113321 65.974342049`
- DS9 image coordinate `(-0.5,-0.5)` → `269.9869455 65.9742651`. At the raised `precision`
  of §3 this now reproduces `s_region` corner 1 **exactly to 9 dp**, not merely to ≤0.0002″.

For the Build22 L3 coadd `r00001_p_v01001001001001_270p65x69y48_f158_coadd.asdf`, the matching
`_asn.json` is independent ground truth — it declares the skycell WCS directly:
`nx=ny=5000`, `pixel_scale=1.5277777777777777e-05` deg (0.055″/px),
`ra_center=269.6395821835357`, `dec_center=65.99501049470986`, `orientat=0.36041781306266785`.
Those agree with the coadd's own `crpix=[12099.5,-88700.5]`, `crval=[270.0,64.60237300651187]`,
`cdelt`, `pc` and `gnomonic`: deprojecting by hand as a plain TAN at 0-based pixel
`(2499.5, 2499.5)` reproduces `ra_center`/`dec_center` to **0.000000″**.

One caveat about that manifest, learned the hard way: **`orientat` is not the position angle
of the +y axis.** Its value, `+0.36041781306`, is exactly −ΔRA from the projection centre
(`269.6395821835 − 270.0 = −0.3604178165`) to ten significant figures, which no position
angle would match identically. The true local-north PA at a point offset by ΔRA at dec 66 is
ΔRA·sin(dec) = −0.3293°, and DS9 measures −0.3257° — i.e. DS9 is right and tracks meridian
convergence; it is the `orientat` field that does not mean what its name suggests. Do not
treat a mismatch against it as a WCS failure.
  The −0.5 offset is the 1-based-FITS vs 0-based-numpy origin convention.
- `roman/data`: 4088×4088 float32, `minmax = -187169 6059.94`.
- Pixel scale ≈ 0.1083″/px (a 40 px radius lists as `4.331"`).

Use these as the anchor for every regression: if a change moves them, something broke.

---

## 3. Environment

```
PATH="$PWD/bin:$PATH" ./bin/SAOImageDS9.app/Contents/MacOS/ds9 &
./bin/xpaget ds9 version          # confirm registration before sending anything
```

Gotchas learned while running this:

- **A stale `xpans` wedges XPA.** Symptom: `XPA$ERROR: no response from server during
  handshake` with both processes visibly running. `pkill` (SIGTERM) is not always enough;
  `pkill -9 -f "Resources/xpans"` clears it.
- **Never probe sky coordinates on a frame that might have no WCS** unless you have the
  `vector/vectorstr.C` NULL guard (commit `2902603bd`) — before that fix it segfaulted DS9,
  which is easy to misread as "the feature under test crashed".
- `get coordinates` takes **canvas** coordinates, not image. For image→sky use
  `crosshair <x> <y> image` + `xpaget ds9 crosshair wcs <sky> <format>`.
- **Raise the output precision first.** DS9's default `precision` is `8 7 4 3 8 7 5 3 8`, and
  at 7 decimals on degrees the print truncation dominates several of these tests — the
  original C-6 measurement was limited by it. `xpaset -p ds9 prefs precision 12 12 7 6 12 12
  10 8 12` moves the floor well below the real errors: the same circle round-trip that read
  0.004 px now resolves to 2.3e-5 px. Every number in this document was taken at the raised
  precision.
- **Four XPA forms that fail quietly or confusingly**, each of which cost real time here:
  - `frame frame <n>` is a **parse error, not a frame switch** — and with `xpaset -p` the
    error is easy to miss, leaving every subsequent measurement on the wrong frame. It is
    just `frame <n>`. An early C-12 run "passed" with a perfect 0.00000000″ for exactly this
    reason; always assert `xpaget ds9 frame` after switching.
  - `regions command` needs the shape **braced**: `regions command "{circle 2000 2000 40}"`.
    Unbraced it is a parse error.
  - `crop wcs <sky> <format> <unit>` takes all three tokens or none — `crop wcs icrs degrees`
    is a parse error.
  - `lock block` takes **yes/no**, not a coordinate system; `lock block wcs` errors and
    leaves the lock off.
- **Annotation shapes serialize with a leading `# `** (`vector`, `ruler`, `compass`,
  `projection`, `segment`, and `text` when it carries properties). A region parser that skips
  comment lines silently drops a third of C-7's shapes.
- **zsh eats `:r`.** `"$F:roman/data"` expands the `:r` as a history modifier and silently
  loads `<basename-without-extension>oman/data`. Use a literal path for `<file>:<path>` specs.
- **An abandoned `iexam` wedges DS9 completely.** `iexam` blocks the event loop waiting for a
  click, and while it is pending *every* XPA request fails with `no response from server
  during handshake` — so you cannot synthesize the click afterwards, and pre-arming one with
  `after` does not help either. Killing the `xpaget` client does not release DS9; only a real
  click or a restart does. Do not start an `iexam` from a script.
- **The info panel takes *canvas* coordinates.** `UpdateInfoBox` is fed the crosshair's canvas
  position, so a crosshair set to an image pixel that is off the visible view leaves the panel
  showing its previous value. `zoom to fit` first, or you will read staleness as a bug.
- **Compare saved images by content, not size.** Uncompressed TIFF is the same byte length
  whatever is drawn in it (1438476 B here either way), so a size check passes vacuously.
- **Sanity-check that a test measured anything at all.** Two runs here reported a clean
  "PASS" from zero measurements — once because `frame frame <n>` silently failed so both
  halves of a comparison ran on the same frame, once because a shell heredoc ate the `$`
  in every Tcl snippet. Assert a non-zero sample count before printing a verdict.

Test files live in `utils/asdf_gwcs_probe/sample_data/` (the four large Build22 products are
untracked; see `.git/info/exclude`).

---

## 4. Test matrix

### A. Core transform

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| A-1 | Forward, all four corners | `crosshair <x> <y> image` + `xpaget crosshair wcs icrs degrees` | matches `s_region` ≤0.0002″ | **PASS** |
| A-2 | Inverse (sky→pixel) | feed A-1's output back via `crosshair <ra> <dec> wcs icrs` | returns the original pixel within 0.01 px | **PASS** (2044 → 2043.9988) |
| A-3 | Round-trip at detector corners | repeat A-2 at all four corners, not just centre | error stays ≤0.01 px (R7: distortion is worst at the edges) | **PASS** — worst 1.5e-3 px at the corners against 3.3e-7 px at centre, exactly the R5/R7 pattern. At the raised precision, `image(-0.5,-0.5)` now reproduces the `s_region` corner **exactly to 9 dp**, not just to ≤0.0002″ |
| A-4 | Sky frames agree | read one pixel as icrs / fk5 / galactic / ecliptic | mutually consistent under standard conversion | **PASS** (spot) |
| A-5 | Outside the detector | query pixel (−10000, −10000) | document behaviour — R6 means it will extrapolate, not refuse | **PASS** (documented) — extrapolates silently, as R6 predicts. Worth knowing how badly: the *inverse* also stops converging out there. `image(-10000,-10000)` → sky → back lands at `(-8751, -8952)`, ~1250 px out; at 1e6 it diverges completely. So outside the detector both directions are unreliable, not just unvalidated |
| A-6 | Grism and prism products | repeat A-1 on each `*_cal.asdf` | each matches **its own** `s_region` | **PASS** |

### B. Readout and panning

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| B-1 | Pan to sky | `pan to <ra> <dec> wcs icrs`, read back | returns the requested coordinate | **PASS** (exact to 7 dp) |
| B-2 | Pan readback in image coords | `xpaget ds9 pan image` after B-1 | consistent with A-2 | **PASS** |
| B-3 | Info panel readout | GUI: hover, check the WCS row | live sky coordinates, correct sky frame | **PASS** — read the panel's own `infobox(wcs,x/y/sys)` textvariables. `CrosshairTo` (crosshair.tcl:49) calls `UpdateInfoBox`, so an XPA crosshair move does drive it. Panel agrees with `crosshair wcs icrs sexagesimal` to **0.0006″** at five positions, and reports `ICRS`. The residual is last-digit rounding between the two formatters (`.7214` vs `.7213`), not a coordinate difference. NB the position must be *on the visible canvas* — `UpdateInfoBox` takes canvas coords, so a crosshair placed outside the view leaves the panel stale, which is easy to misread as a bug |
| B-4 | `iexam` coordinate | `iexam coordinate wcs icrs degrees` | same value as crosshair at that point | **PASS** for the value path, interactive half **not scriptable**. `iexam.tcl:242` is `$frame get coordinates $x $y $sys $sky $skyformat` on *canvas* coords; that agrees with the crosshair to 0.000000″ at four canvas points. The click itself cannot be driven: `iexam` blocks DS9's event loop, so while it is pending every other XPA request fails the handshake — and an abandoned `iexam` leaves DS9 unreachable over XPA until someone clicks (see §3) |
| B-5 | Pixel table | `pixeltable yes`, hover | opens, no crash, coordinates sane | **PASS** for "opens, no crash"; the hover half is not scriptable. The dialog opens and DS9 stays alive, but an XPA-driven crosshair never populates it: `CrosshairTo` calls `UpdateColormapLevelMosaic` and `UpdateInfoBox` but **not** `UpdatePixelTableDialog` or `UpdateGraphsData`, while the interactive callback just above it calls all four. Confirmed generic — a plain FITS TAN frame behaves identically — so it is unrelated to GWCS and cannot be closed without a real hover |

### C. Regions

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| C-1 | image → wcs → image round-trip | create `circle 1000 1500 40` image; list as wcs; list as image | returns exactly `circle(1000,1500,40)` | **PASS** |
| C-2 | Radius in angular units | list in wcs | `4.331"` ≈ 40 px × 0.1083″/px | **PASS** |
| C-3 | All sky frames | `regions sky {icrs,fk5,galactic,ecliptic}` | all four list plausibly and convert consistently | **PASS** |
| C-4 | All output formats | `-format {ds9,ciao,saotng,pros,xy,xml}` | each emits sky coordinates without error | **PASS** (xml too: VOTABLE, 3600 B, `unit="deg" ref="icrs"`, no error) |
| C-5 | Save/load round-trip, degrees | `regions skyformat degrees`, save, delete, load | position ≤0.01 px, radius ≤0.01 px | **PASS** (worst 4.7e-4 px over circle/ellipse/box/polygon) |
| C-6 | Save/load round-trip, sexagesimal | as C-5 with `skyformat sexagesimal` | ≤0.05 px — **sexagesimal truncation dominates** | **PASS** (1000.0001, 1500.0041, r 39.997) |
| C-7 | Every shape | circle, ellipse, box, polygon, annulus, panda, epanda, bpanda, line, vector, text, point, ruler, compass, projection, segment | each round-trips image→wcs→image | **PASS** 16/16 (≤5.4e-5 px). Note: `panda`/`epanda`/`bpanda` with a *full* 0–360 range come back as 360–720 — geometrically identical, and a FITS TAN frame does exactly the same, so generic DS9 angle non-normalization, not GWCS |
| C-8 | Rotated shapes | box/ellipse with a non-zero angle, round-trip via wcs | angle preserved; check against R7 at field edges | **PASS** for round-trip (angle exact to 6 dp; worst 1.1e-3 px at corners vs 2.5e-7 px at centre, per R5). **But see R9** — the *sky* angle written out is the same everywhere |
| C-9 | Ruler in angular units | ruler between two pixels, read length in arcsec | matches the great-circle separation of its endpoints | **GAP** — see R10. DS9 uses one scalar scale (the dec-axis one); a 400 px length is reported 0.84″ (7.7 px) short of the true separation along x. The ruler's own readout has no XPA accessor (`Ruler::distToStr` is canvas-only), so this was measured on the shared length conversion via circle radii |
| C-10 | Compass orientation | compass region in wcs | N/E arrows point correctly; compare centre vs corner (R7) | **PASS** — and notably *not* subject to R9: `compass.C:322-331` derives N/E by stepping ±δ in dec/RA from the compass's **own centre** and mapping back to pixels, so it is locally correct. Round-trips at centre and all four corners |
| C-11 | Region centroid | `regions centroid` on a source | converges, position stays sane in wcs | **PASS** (iteration 30, radius 10; moved 2.64 px, stayed inside the footprint) |
| C-12 | Load a region file written from a FITS frame | same sky area, load onto the ASDF frame | lands on the same sky position | **PASS** — needed a purpose-built 4200² TAN frame on the same field. Cross-frame agreement 1.3e-5″ (1.2e-4 px) both directions, and a region at the TAN frame's CRPIX lands on ASDF `image(2000.0000, 2000.0000)` |

### D. Contours

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| D-1 | Generate | `contour levels {...}` + `contour yes` | renders without error | **PASS** |
| D-2 | Save in wcs | `contour save <fn> wcs icrs` | writes sky coordinates | **PASS** |
| D-3 | Load back | `contour load <fn>` | overlays on the same sky position | **PASS** — blocked to 4 first per D-6. 7568 icrs vertices saved; reloaded as an overlay and read back via `contour convert` (442 polygons, 7235 vertices), every recovered vertex within **0.00016″** of a file vertex. NB `contour load` makes an *auxiliary* overlay, so `contour save` will not echo it back — `contour convert` is the way to read it |
| D-4 | Copy/paste between frames | `contour copy` on ASDF frame, `contour paste wcs` on another | lands on the same sky | **PASS** — copied from the ASDF frame, `contour paste wcs` onto the TAN frame, converted to regions: **0.00000000″** from the source vertices |
| D-5 | Contour + blocking | block 4, regenerate | contours track the blocked WCS | **PASS** — exact. Saved the same contours in both `image` and `icrs` on a `block 4` frame; pushing the image vertices through the blocked WCS reproduces the icrs file to **0.00000000″** over 41 sampled vertices |
| D-6 | **Practicality note** | contouring raw 4088² float32 at 3 levels produced a **3.19M-line** file | block or smooth first; document the guidance | **PASS** (observed) |

### E. Coordinate grid

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| E-1 | Grid on | `grid yes` | renders curved grid lines reflecting the distortion | **PASS** (no crash) |
| E-2 | Each system/sky frame | `grid system wcs`, `grid sky <frame>` | labels and lines correct per frame | **PASS** — syntax resolved (the plan's earlier note was wrong; `grid system`/`grid sky`/`grid skyformat` are all accepted and read back). Verified the frames *mean* what they say against an independent rotation: galactic to 0.014″, ecliptic to 0.027″, fk5 vs icrs 0.020″; and all five frames round-trip through DS9 back to icrs to ≤1.5e-5″. fk4's offset here is only ~0.006°, not the ~0.7° one might expect for B1950 — correct at RA~270/dec~66, where the `m` and `n·sinα·tanδ` precession terms nearly cancel |
| E-3 | Analysis vs publication | `grid type {analysis,publication}` | both render | **PASS** (no crash) |
| E-4 | Grid after blocking | block 4, grid on | grid tracks the blocked WCS | **PASS** — renders at block 1 and block 4 with distinct output; the blocked WCS itself is proven exact by D-5 |
| E-5 | Grid label format | `grid skyformat {degrees,sexagesimal}`, gaps, formats | labels legible and correct | **PASS** — `skyformat degrees`/`sexagesimal`, `grid grid gap1`, `grid format1 d.4`, `grid numerics no/yes` all accepted and each changes the raster. Glyph-level legibility is not machine-checkable here (no OCR) |
| E-6 | Grid in a saved image | `saveimage png` with grid on | grid present and correct in the output | **PASS** — see H-8; grid on vs off differs by content hash in png, jpeg and tiff |

### F. Multi-frame match and lock

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| F-1 | `match frame wcs`, ASDF↔ASDF | two ASDF frames, pan one, match | separation 0.0000″ | **PASS** |
| F-2 | `match frame wcs`, ASDF↔FITS | ASDF frame + FITS frame with a TAN WCS | FITS frame pans to the same sky | **PASS** (exact) |
| F-3 | `lock frame wcs` | set lock, then pan/zoom one frame | the other tracks continuously | **PASS** — 0.000000″ at four pan targets incl. the footprint corner. Zoom tracks too, and *anisotropically*: ASDF zoom 1 → TAN zoom `0.981544 1.00034`, the 1.9% of R10, which frame lock therefore handles correctly even though region lengths do not |
| F-4 | `crosshair match wcs` | crosshair in frame 1, match | identical sky in frame 2 | **PASS** |
| F-5 | `lock crosshair wcs` | set lock, move crosshair | other frame tracks live | **PASS** — 0.000000″ at centre and two far corners |
| F-6 | `match crop wcs` / `lock crop wcs` | crop one frame | other crops to the same sky region | **PASS** for `crop match wcs` (worst 0.049″ centre, sizes to 0.15%, four crops incl. 3000²). `crop lock wcs` **not reachable via XPA** — an XPA-set crop does not propagate; verified identical FITS↔FITS, so it is interactive-only and generic, not a GWCS issue |
| F-7 | `lock scale/colorbar/bin/block/smooth` | with ASDF frames | unrelated to WCS but should not disturb it | **PASS** — scale/colorbar/smooth/block all propagate and leave the sky readout bit-identical (drift 0.000000000″ after restore). `block` is the important one: it exercises the `wcsYaml_` fix across frames. `bin` n/a (image, not a binned table). NB `lock block` takes yes/no, not `wcs` |
| F-8 | `match slice wcs` / cube lock | uses a rank-3 ASDF array as a cube | slices align — note these cubes have no spectral WCS | **PASS** for `lock slice image` (tracks 1/3/5/10) and `match slice image`. `match slice wcs` is a **no-op** (frame stays on slice 1) — expected, there is no third-axis WCS to match on. Used `roman/amp33` [10,4096,128]. **This test also turned up a real bug — see §6.5** |
| F-9 | Frames from different Roman products | f158 + grism + prism, `match frame wcs` | all three land on the same sky | **PASS** — worst 0.000104″ across `match frame wcs`, `lock frame wcs` over two pan targets, and `lock crosshair wcs`. The three products' field centres agree to 1.6e-3″ intrinsically |

### G. Operations that rebuild the image or the WCS

**This is the highest-risk group** — R1 means any of these can silently drop the WCS. The
known triggers of `FitsImage::resetWCS()` are `FitsImage::block()` (both overloads),
`Base::wcsResetCmd`, and `resetWCS0()` from `frmarker.C`.

| ID | Test | Expect | Status |
|---|---|---|---|
| G-1 | `block to 4 4` then `to 1 1` | WCS kept; blocked frame 1022²; blocked coords correct | **PASS** (blocked (−0.5,−0.5) = unblocked (−1.5,−1.5) to 7 dp) |
| G-2 | `smooth yes` / gaussian r=3 / `smooth no` | WCS kept | **PASS** |
| G-3 | `crop` in image and in wcs coords, then `crop reset` | WCS kept | **PASS** |
| G-4 | `wcs reset` | **restores the GWCS** (for an ASDF frame the GWCS *is* the file's WCS, not an override) | **PASS** |
| G-5 | `datasec`, `rotate`, `orient` | WCS kept | **PASS** |
| G-6 | Marker ops that call `resetWCS0()` | WCS kept | **PASS** — the two callers are the region *template* paths (`frmarker.C:860` `createTemplate`, and `:6244` savetemplate), both of which do `initWCS0(center)` … `resetWCS0()`. `regions savetemplate`, `regions template <f>`, and `regions template <f> at <ra> <dec>` all leave the readout at **0.000000000″** drift |
| G-7 | `wcs replace` a FITS WCS onto an ASDF frame, then `wcs reset` | replacement wins, then GWCS returns | **PASS** — a plain TAN with CRVAL 270.0/66.0 at CRPIX 2044.5 takes over exactly (0.000000″ from its own CRVAL), and `wcs reset` restores the GWCS to **0.000000000″** of baseline |
| G-8 | Full sequence, then re-check A-1 | corner identical to baseline | **PASS** |

### H. Persistence

| ID | Test | Expect | Status |
|---|---|---|---|
| H-1 | Backup → restore | pixels, WCS, YAML tree, cmap/scale all identical | **PASS** |
| H-2 | Backup portability | relocate the save set, delete the original `.asdf`, restore | identical | **PASS** |
| H-3 | Backup with several ASDF frames | each frame restores its own array/path | **PASS** — three frames (`data`/`err`/`dq`) restore with correct shape, exact WCS, **and the right pixels** (0.253382 / 0.0379333 / 0). Shape and WCS alone cannot tell those three apart, so the pixel value is the check that matters. Confirms the *n* frames = *n* copies cost concretely: **620.2 MB** of save set for three frames of one 197MB file |
| H-4 | Backup with `pds9(backup)` off | references absolute paths instead of copying | **PASS** — with it on, 206.8 MB and a relative `LoadAsdfFile ./b.bck.dir/Frame1/….asdf:roman/data`; with it off, **0.0 MB**, no copy, and an absolute `LoadAsdfFile /Users/kjg/…/sample_data/….asdf` |
| H-5 | Backup mixing ASDF and FITS frames | both restore correctly | **PASS** — 4088² GWCS frame and a 4200² TAN frame in one save set, both back at 0.000000000″ drift |
| H-6 | FITS frame with a replaced WCS still round-trips | regression guard on the `WCSBackup` change | **PASS** (restores to exact CRVAL) |
| H-7 | **Save frame as FITS** | **WCS is lost** — the saved file has only `SIMPLE/BITPIX/NAXIS*`, no WCS cards | **GAP** (confirmed) |
| H-8 | `saveimage` (png/jpeg/tiff) with grid on | rendered output carries the grid | **PASS** — all three formats differ by SHA-256 with the grid on vs off. Compare by *content*, not size: uncompressed TIFF is 1438476 B either way, so a size check passes vacuously |

### I. Fallback and negative cases

| ID | Test | Expect | Status |
|---|---|---|---|
| I-1 | ASDF file with no WCS (`*_segm.asdf`) | loads, no WCS, no error dialog | **PASS** |
| I-2 | Sky query on a WCS-less frame | empty result, no crash | **PASS** (after the `VectorStr` fix) |
| I-3 | Non-ASDF file | `ASDF: not an ASDF file` | **PASS** |
| I-4 | Unsupported datatype / rank / view | specific message, no crash | **PASS** |
| I-5 | GWCS with a tag or version AST cannot read | loads pixels, `Warning`, no WCS | **PASS**, after fixing a real gap this test found. Synthetic file with `gwcs/wcs`, `step`, `frame2d` and `transform/identity` all at 99.9.9. Pixels loaded and no WCS was attached, but it was **completely silent** — `wcs replace` returns cleanly when AstYamlChan cannot build a FrameSet, so the `Warning` branch the code was written to provide never fired. Now checks `has wcs wcs` after attaching and warns. (`has wcs alt` would not work: it reads 1 either way, per R2.) |
| I-6 | Grid / regions / contours on a WCS-less frame | degrade cleanly, no crash | **PASS** — nine operations on a WCS-less ASDF frame (grid on in wcs *and* image systems, `grid sky icrs`, image regions, listing regions as wcs, contour generate, `contour save wcs`, `saveimage png`) all survive. Loading an *icrs* region is the only one that objects, with a clean `Bad Coordinate mapping, unable to create some regions` |
| I-7 | `match frame wcs` when one frame has no WCS | no crash; defined behaviour | **PASS** — `match frame wcs`, `lock frame wcs`, `match crosshair wcs` and `lock crosshair wcs` between a GWCS frame and a WCS-less one all return without error and are no-ops; panning the WCS-less frame afterwards is fine. (This is the path that used to segfault before the `vector/vectorstr.C` NULL guard.) |

### J. Coverage across real data

| ID | Test | Status |
|---|---|---|
| J-1 | `f158_cal`, `grism_cal`, `prism_cal`, `f158_segm` | **PASS** (load + WCS) |
| J-2 | The three WCS-only products, incl. the bare-transform distortion file | **PASS** — probe *and* in-app. In-app all three correctly refuse to load as images with `ASDF: ambiguous or unknown array data`: they carry no science array, only WCS internals (20/16/8 enumerable ndarrays, all coefficient matrices; `AsdfIsBareTransform` is true for all three). Their arrays *are* reachable by explicit path — a 6×6 `…/coefficients` loads as bitpix −64 and correctly gets no WCS |
| J-3 | `*_uncal.asdf` (331MB, 4-D ramp) | **PASS** via a synthetic stand-in — the real uncal file is not downloaded, so a synthetic `[4,4,2,2]` uint8 array exercises the same rank check: `ASDF: unsupported ndarray rank data [4, 4, 2, 2]`, frame left empty, DS9 alive. Worth re-running against the real 4-D ramp when it is available |
| J-4 | Coadd / `_asn` products from Build22 | **PASS** — was a GAP (§6.2b), now fixed by translating `fitswcs_imaging` to FITS cards. All six science-grid arrays (`data`, `context`, `err`, `weight`, `var_poisson`, `var_rnoise`) load 5000² with the WCS at **0.00000000″** from the `_asn.json` centre, including `context` at `[1,5000,5000]` via the trailing-dims rule. Pixel scale 0.054983″/px against a declared 0.055 (0.03%), and anisotropy **0.03%** — a resampled L3 product is isotropic, so R10 does not apply to coadds. `match frame wcs` between the L3 coadd and the L2 exposure it was built from is exact. Survives block/smooth/crop and backup/restore. The `_asn.json` itself is a metadata manifest, not an image |
| J-5 | Every array within one `*_cal.asdf` (all 15) | **PASS** (load); WCS attach on siblings **PASS** |
| J-6 | A non-Roman ASDF file | **PASS** — `Tests/asdf/fixtures`, 27 flat-tree images × all 4 codecs: 108/108 load, dimensions and `minmax` both matching DS9's own reading of the source FITS. Caught a real enumerator bug (nested `mask:` ndarray); see `TODO.md` Phase 5 |
| J-7 | `bzp2`-compressed blocks | **PASS** — bzip2 1.0.8 vendored and wired in; 27/27 load. Each `bzp2` fixture is identical to its `none` twin on dimensions, BITPIX, `minmax`, the `BLANK` card and a SHA-256 of every pixel. 31/31 decoded blocks byte-identical to Python's `bz2`. Truncated, corrupt, over-long and empty payloads each give a distinct error and leave the frame empty |
| J-8 | Masked-array (`BLANK`) fixtures, boolean-array mask | **PASS** — all 4 × 4 codecs load with the integer BITPIX retained (8/16/32/64), null pixels reported as `blank`, and pixel rows byte-identical to DS9's reading of the source FITS. `data/mask` also loads in its own right |
| J-9 | Scalar mask, integer data (`*_blank_scalar`) | **PASS** — 4 × 4 codecs, bitpix and the readout at a real blank pixel both identical to the equivalent FITS `BLANK` file |
| J-10 | Scalar mask, float data (the schema's headline case) | **PASS** — `float`/`double` × 4 codecs, bitpix stays −32/−64 and the sentinel pixel reads `nan` |
| J-11 | Malformed / unrepresentable masks | **PASS** (unit) — complex and non-numeric masks are flagged unsupported and warned about; a mask array not broadcastable to the data is refused; datatypes with no FITS equivalent fall back with a warning |

---

## 5. Tolerances

Derived from measurements, not guessed:

| Quantity | Tolerance | Basis |
|---|---|---|
| Forward transform vs `s_region` | ≤0.0002″ | measured at the default precision |
| Sky→pixel round-trip | ≤0.01 px | measured 1.2e-3 px (R5) |
| Region round-trip, degrees | ≤0.01 px | measured 2.3e-5 px at centre, 1.1e-3 px at the corners |
| Region round-trip, sexagesimal | ≤0.05 px | measured 0.004 px; truncation dominates |
| Region save/load round-trip | ≤0.01 px | measured 4.7e-4 px (C-5) |
| Region file across frames (ASDF↔TAN) | ≤0.01 px | measured 1.2e-4 px (C-12) |
| Blocked-frame coordinates | exact to 7 dp vs the equivalent unblocked pixel | measured |
| `match frame wcs` separation | 0.0000″ same product; ≤0.001″ across products | measured 0.000104″ f158/grism/prism (F-9) |
| `crop match wcs` centre | ≤0.05″ | measured 0.049″ (F-6) |
| Region angle round-trip | exact to 6 dp | measured; but see R9 for the sky-space value |

Note that several of these are now bounded by the GWCS's numerical inverse (R5) rather than by
print precision, which was not true before the `prefs precision` change described in §3. The
FITS TAN control frame round-trips the same shapes at ~1.8e-8 px, i.e. about three orders of
magnitude tighter — a useful reminder that these tolerances are a property of GWCS, not of
DS9's region code.

---

## 6. Known gaps

1. **H-7 — saving an ASDF frame as FITS loses the WCS.** Confirmed: only
   `SIMPLE/BITPIX/NAXIS/NAXIS1/NAXIS2`. Root cause is R8. A fix would mean writing
   *approximate* cards via `astWrite(FitsChan)` — which is exactly the SIP approximation this
   project set out to avoid, but is defensible for export specifically, since FITS cannot
   represent the exact transform at all. Needs a decision: approximate-with-a-warning, or
   keep refusing.
2b. **~~`gwcs/fitswcs_imaging-1.0.0` is unsupported, so L3 coadds get no WCS.~~ FIXED.**
   *Found by J-4.* Build22 coadds express their WCS as one `fitswcs_imaging` node bundling
   `crpix`, `crval`, `cdelt`, `pc` and a `gnomonic` projection, rather than the explicit
   `compose`/`shift`/`polynomial`/`gnomonic` chain the L2 files use, and `yamlchan.c` has no
   path for that tag — `wcs replace` returned cleanly with no WCS (which is why the I-5 fix
   mattered: without it this looked like "coadds just have no WCS").
   Fixed without touching AST: `AsdfFitsWcsImagingCards` translates the node into ordinary
   FITS cards (`CRPIX`/`CRVAL`/`CTYPE`/`CUNIT`/`CD`/`RADESYS`) and DS9's own FITS WCS path
   takes it from there. No approximation is involved — unlike H-7/R8, this transform really
   is a TAN. Two conversions matter: CRPIX is 1-based in FITS but 0-based in gwcs (the node's
   own `bounding_box` runs `[-0.5, n-0.5]`), and `CD_ij = cdelt_i · pc_ij`.
   It also needed a small `tksao` addition, because `resetWCS()` deletes `wcsAltHeader_` by
   design: cards pushed through plain `wcs replace` were correct but vanished on the first
   `block`. `FitsImage::wcsCards_` remembers them and `resetWCS()` re-parses them, exactly
   mirroring what `wcsYaml_` already does for the GWCS path. Ordinary `wcs replace` keeps its
   existing user-override semantics (verified: still dropped by a block cycle, still cleared
   by `wcs reset`); the ASDF path is distinguished by an `#ASDF-FITS-WCS` sentinel line, the
   same trick `replaceWCS` already uses to spot YAML.
   Only equatorial frames (`icrs`/`fk5`/`fk4`) and `gnomonic` are translated; anything else
   declines rather than emit a CTYPE it has not been tested against. The node's explicit
   `bounding_box` is still discarded (R6).
3. **R6 — `bounding_box` is dropped by AST.** The GWCS valid domain is not enforced anywhere,
   so coordinates outside the detector extrapolate silently. Pre-existing in `yamlchan.c`.
4. **R3 — no alternate WCS letters.** `wcsa`…`wcsz` are empty on an ASDF frame.
5. **Cube WCS.** Rank-3 ASDF arrays load as cubes, but the GWCS is 2-D; there is no third-axis
   WCS, so slice coordinates are pixel-only. `match slice wcs` is consequently a no-op (F-8).
6. **R10 — anisotropic pixel scale is not represented in angular lengths.** A `circle(...,40)`
   on a Roman frame lists as `4.331315"` but actually spans 4.41″ in x and 4.33″ in y. Affects
   region radii, ruler/projection lengths, and anything reading region sizes in angular units.
   Not ASDF-specific code — it is DS9's one-scalar length conversion meeting a WCS that is
   genuinely non-square. A fix would mean carrying per-axis scale through `mapLenFromRef`,
   which is a much wider change than this project; `lock frame wcs` already does handle it
   (F-3), so the machinery exists.
7. **~~The GWCS is attached to arrays it does not describe.~~ FIXED.** *Found by F-8; was a
   bug in this project's own code, not pre-existing DS9.* `AsdfLoadArray` called
   `AsdfAttachWcs` unconditionally on whatever array was loaded, so `roman/amp33` (128×4096
   reference pixels) and the four `border_ref_pix_*` arrays reported the **science array's**
   sky coordinates — `roman/data` and `roman/amp33` both answered
   `269.981972490569 66.035639172244` at `image(64,2048)`. Worse than no WCS, because the
   values are in-footprint and so look plausible.
   Fixed with a grid guard: `AsdfWcsGridShape` resolves the science array via the loader's
   existing `AsdfResolvePath ... data` convention, and `AsdfSameGrid` compares the *trailing
   two* dimensions — trailing rather than exact so a 2-D WCS still covers each plane of a
   same-grid rank-3 stack. R6 is why the grid has to come from the tree at all: AST drops
   `bounding_box`, so the transform carries no domain of its own.
   Verified: the six same-grid arrays (`data`, `err`, `dq`, `var_poisson`, `chisq`, `dumo`)
   keep the WCS with identical readouts; the five off-grid arrays load with pixels intact and
   no WCS. Grid mismatch is deliberately **silent** — it is the normal result of loading a
   reference-pixel array, and `Warning` would turn a successful load into `XPA$ERROR` for an
   xpaset caller. Only the surprising case, being unable to identify the WCS's grid at all,
   warns; that is also the case where an exact-match guard could wrongly drop a good WCS
   (a non-Roman file whose science array is not called `data`).
8. **A WCS-only file warns when you load its internals.** `AsdfWcsGridShape` cannot resolve a
   science array in a file that has none (the three `*_wcs.asdf` products), so loading one of
   their coefficient matrices by explicit path emits `cannot tell which array the WCS
   describes`. The outcome is right — a 6×6 coefficient matrix must not get a sky WCS — but
   the message is noise there, and it reaches an `xpaset` caller as `XPA$ERROR`. Narrowing it
   would mean recognising that the loaded array lives *inside* the WCS subtree; left alone
   rather than adding a heuristic. See J-2.
9. **The array browser offers WCS internals as loadable images.** A real `*_cal.asdf`
   enumerates 25 loadable arrays, of which 10 are `roman/meta/wcs/.../coefficients` and
   `.../matrix` blocks (6×6 and 2×2 float64) — genuine `core/ndarray`s, but nobody wants to
   display a polynomial coefficient matrix. Cosmetic; they sort last already.

## 7. Out of scope

3-D/VRML frames, RGB/HLS/HSV frames (single-array ASDF loads are base frames), IIS, and the
catalog/analysis tools beyond a smoke check.
