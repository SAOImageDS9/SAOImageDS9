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

---

## 2. Ground truth

Reference values, independently checked, for `r0000101001001001001_0001_wfi01_f158_cal.asdf`:

- The file's own `romancal.assign_wcs` footprint, `roman/meta/wcs_info/s_region`:
  `POLYGON ICRS 269.986945544 65.974265112 269.986740134 66.097228761 269.676782229 66.097195774 269.680113321 65.974342049`
- DS9 image coordinate `(-0.5,-0.5)` → `269.9869455 65.9742651` (matches corner 1 to ≤0.0002″).
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

Test files live in `utils/asdf_gwcs_probe/sample_data/` (the four large Build22 products are
untracked; see `.git/info/exclude`).

---

## 4. Test matrix

### A. Core transform

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| A-1 | Forward, all four corners | `crosshair <x> <y> image` + `xpaget crosshair wcs icrs degrees` | matches `s_region` ≤0.0002″ | **PASS** |
| A-2 | Inverse (sky→pixel) | feed A-1's output back via `crosshair <ra> <dec> wcs icrs` | returns the original pixel within 0.01 px | **PASS** (2044 → 2043.9988) |
| A-3 | Round-trip at detector corners | repeat A-2 at all four corners, not just centre | error stays ≤0.01 px (R7: distortion is worst at the edges) | TODO |
| A-4 | Sky frames agree | read one pixel as icrs / fk5 / galactic / ecliptic | mutually consistent under standard conversion | **PASS** (spot) |
| A-5 | Outside the detector | query pixel (−10000, −10000) | document behaviour — R6 means it will extrapolate, not refuse | TODO |
| A-6 | Grism and prism products | repeat A-1 on each `*_cal.asdf` | each matches **its own** `s_region` | **PASS** |

### B. Readout and panning

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| B-1 | Pan to sky | `pan to <ra> <dec> wcs icrs`, read back | returns the requested coordinate | **PASS** (exact to 7 dp) |
| B-2 | Pan readback in image coords | `xpaget ds9 pan image` after B-1 | consistent with A-2 | **PASS** |
| B-3 | Info panel readout | GUI: hover, check the WCS row | live sky coordinates, correct sky frame | TODO (GUI) |
| B-4 | `iexam` coordinate | `iexam coordinate wcs icrs degrees` | same value as crosshair at that point | TODO |
| B-5 | Pixel table | `pixeltable yes`, hover | opens, no crash, coordinates sane | TODO (GUI) |

### C. Regions

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| C-1 | image → wcs → image round-trip | create `circle 1000 1500 40` image; list as wcs; list as image | returns exactly `circle(1000,1500,40)` | **PASS** |
| C-2 | Radius in angular units | list in wcs | `4.331"` ≈ 40 px × 0.1083″/px | **PASS** |
| C-3 | All sky frames | `regions sky {icrs,fk5,galactic,ecliptic}` | all four list plausibly and convert consistently | **PASS** |
| C-4 | All output formats | `-format {ds9,ciao,saotng,pros,xy,xml}` | each emits sky coordinates without error | **PASS** (xml TODO) |
| C-5 | Save/load round-trip, degrees | `regions skyformat degrees`, save, delete, load | position ≤0.01 px, radius ≤0.01 px | TODO |
| C-6 | Save/load round-trip, sexagesimal | as C-5 with `skyformat sexagesimal` | ≤0.05 px — **sexagesimal truncation dominates** | **PASS** (1000.0001, 1500.0041, r 39.997) |
| C-7 | Every shape | circle, ellipse, box, polygon, annulus, panda, epanda, bpanda, line, vector, text, point, ruler, compass, projection, segment | each round-trips image→wcs→image | TODO |
| C-8 | Rotated shapes | box/ellipse with a non-zero angle, round-trip via wcs | angle preserved; check against R7 at field edges | TODO |
| C-9 | Ruler in angular units | ruler between two pixels, read length in arcsec | matches the great-circle separation of its endpoints | TODO |
| C-10 | Compass orientation | compass region in wcs | N/E arrows point correctly; compare centre vs corner (R7) | TODO |
| C-11 | Region centroid | `regions centroid` on a source | converges, position stays sane in wcs | TODO |
| C-12 | Load a region file written from a FITS frame | same sky area, load onto the ASDF frame | lands on the same sky position | TODO |

### D. Contours

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| D-1 | Generate | `contour levels {...}` + `contour yes` | renders without error | **PASS** |
| D-2 | Save in wcs | `contour save <fn> wcs icrs` | writes sky coordinates | **PASS** |
| D-3 | Load back | `contour load <fn>` | overlays on the same sky position | TODO |
| D-4 | Copy/paste between frames | `contour copy` on ASDF frame, `contour paste wcs` on another | lands on the same sky | TODO |
| D-5 | Contour + blocking | block 4, regenerate | contours track the blocked WCS | TODO |
| D-6 | **Practicality note** | contouring raw 4088² float32 at 3 levels produced a **3.19M-line** file | block or smooth first; document the guidance | **PASS** (observed) |

### E. Coordinate grid

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| E-1 | Grid on | `grid yes` | renders curved grid lines reflecting the distortion | **PASS** (no crash) |
| E-2 | Each system/sky frame | `grid system wcs`, `grid sky <frame>` | labels and lines correct per frame — **pin down exact syntax, my first attempt was rejected by the parser** | TODO |
| E-3 | Analysis vs publication | `grid type {analysis,publication}` | both render | **PASS** (no crash) |
| E-4 | Grid after blocking | block 4, grid on | grid tracks the blocked WCS | TODO |
| E-5 | Grid label format | `grid skyformat {degrees,sexagesimal}`, gaps, formats | labels legible and correct | TODO |
| E-6 | Grid in a saved image | `saveimage png` with grid on | grid present and correct in the output | TODO |

### F. Multi-frame match and lock

| ID | Test | How | Expect | Status |
|---|---|---|---|---|
| F-1 | `match frame wcs`, ASDF↔ASDF | two ASDF frames, pan one, match | separation 0.0000″ | **PASS** |
| F-2 | `match frame wcs`, ASDF↔FITS | ASDF frame + FITS frame with a TAN WCS | FITS frame pans to the same sky | **PASS** (exact) |
| F-3 | `lock frame wcs` | set lock, then pan/zoom one frame | the other tracks continuously | TODO |
| F-4 | `crosshair match wcs` | crosshair in frame 1, match | identical sky in frame 2 | **PASS** |
| F-5 | `lock crosshair wcs` | set lock, move crosshair | other frame tracks live | TODO |
| F-6 | `match crop wcs` / `lock crop wcs` | crop one frame | other crops to the same sky region | TODO |
| F-7 | `lock scale/colorbar/bin/block/smooth` | with ASDF frames | unrelated to WCS but should not disturb it | TODO |
| F-8 | `match slice wcs` / cube lock | uses a rank-3 ASDF array as a cube | slices align — note these cubes have no spectral WCS | TODO |
| F-9 | Frames from different Roman products | f158 + grism + prism, `match frame wcs` | all three land on the same sky | TODO |

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
| G-6 | Marker ops that call `resetWCS0()` | WCS kept | TODO |
| G-7 | `wcs replace` a FITS WCS onto an ASDF frame, then `wcs reset` | replacement wins, then GWCS returns | TODO |
| G-8 | Full sequence, then re-check A-1 | corner identical to baseline | **PASS** |

### H. Persistence

| ID | Test | Expect | Status |
|---|---|---|---|
| H-1 | Backup → restore | pixels, WCS, YAML tree, cmap/scale all identical | **PASS** |
| H-2 | Backup portability | relocate the save set, delete the original `.asdf`, restore | identical | **PASS** |
| H-3 | Backup with several ASDF frames | each frame restores its own array/path | TODO — note each frame gets its own copy of the file, so *n* frames = *n* copies |
| H-4 | Backup with `pds9(backup)` off | references absolute paths instead of copying | TODO |
| H-5 | Backup mixing ASDF and FITS frames | both restore correctly | TODO |
| H-6 | FITS frame with a replaced WCS still round-trips | regression guard on the `WCSBackup` change | **PASS** (restores to exact CRVAL) |
| H-7 | **Save frame as FITS** | **WCS is lost** — the saved file has only `SIMPLE/BITPIX/NAXIS*`, no WCS cards | **GAP** (confirmed) |
| H-8 | `saveimage` (png/jpeg/tiff) with grid on | rendered output carries the grid | TODO |

### I. Fallback and negative cases

| ID | Test | Expect | Status |
|---|---|---|---|
| I-1 | ASDF file with no WCS (`*_segm.asdf`) | loads, no WCS, no error dialog | **PASS** |
| I-2 | Sky query on a WCS-less frame | empty result, no crash | **PASS** (after the `VectorStr` fix) |
| I-3 | Non-ASDF file | `ASDF: not an ASDF file` | **PASS** |
| I-4 | Unsupported datatype / rank / view | specific message, no crash | **PASS** |
| I-5 | GWCS with a tag or version AST cannot read | loads pixels, `Warning`, no WCS | TODO — needs a synthetic file |
| I-6 | Grid / regions / contours on a WCS-less frame | degrade cleanly, no crash | TODO |
| I-7 | `match frame wcs` when one frame has no WCS | no crash; defined behaviour | TODO |

### J. Coverage across real data

| ID | Test | Status |
|---|---|---|
| J-1 | `f158_cal`, `grism_cal`, `prism_cal`, `f158_segm` | **PASS** (load + WCS) |
| J-2 | The three WCS-only products, incl. the bare-transform distortion file | **PASS** via the probe; TODO in-app |
| J-3 | `*_uncal.asdf` (331MB, 4-D ramp) | TODO — expect rank-4 refusal; confirms the message |
| J-4 | Coadd / `_asn` products from Build22 | TODO |
| J-5 | Every array within one `*_cal.asdf` (all 15) | **PASS** (load); WCS attach on siblings **PASS** |
| J-6 | A non-Roman ASDF file | **PASS** — `Tests/asdf/fixtures`, 21 flat-tree images × 3 supported codecs: 63/63 load, dimensions and `minmax` both 63/63 against DS9's own reading of the source FITS. Caught a real enumerator bug (nested `mask:` ndarray); see `TODO.md` Phase 5 |
| J-7 | `bzp2`-compressed blocks | **GAP** — all 21 fail with `unsupported ASDF block compression: bzp2`, as designed; fixture set exists for adding it |
| J-8 | Masked-array (`BLANK`) fixtures | **PASS** — all 4 × 3 codecs load with the integer BITPIX retained (8/16/32/64), null pixels reported as `blank`, and pixel rows byte-identical to DS9's reading of the source FITS. `data/mask` also loads in its own right |

---

## 5. Tolerances

Derived from measurements, not guessed:

| Quantity | Tolerance | Basis |
|---|---|---|
| Forward transform vs `s_region` | ≤0.0002″ | measured; limited by DS9's 7-decimal output |
| Sky→pixel round-trip | ≤0.01 px | measured 1.2e-3 px (R5) |
| Region round-trip, degrees | ≤0.01 px | inversion error only |
| Region round-trip, sexagesimal | ≤0.05 px | measured 0.004 px; truncation dominates |
| Blocked-frame coordinates | exact to 7 dp vs the equivalent unblocked pixel | measured |
| `match frame wcs` separation | 0.0000″ | measured |

---

## 6. Known gaps

1. **H-7 — saving an ASDF frame as FITS loses the WCS.** Confirmed: only
   `SIMPLE/BITPIX/NAXIS/NAXIS1/NAXIS2`. Root cause is R8. A fix would mean writing
   *approximate* cards via `astWrite(FitsChan)` — which is exactly the SIP approximation this
   project set out to avoid, but is defensible for export specifically, since FITS cannot
   represent the exact transform at all. Needs a decision: approximate-with-a-warning, or
   keep refusing.
2. **R6 — `bounding_box` is dropped by AST.** The GWCS valid domain is not enforced anywhere,
   so coordinates outside the detector extrapolate silently. Pre-existing in `yamlchan.c`.
3. **R3 — no alternate WCS letters.** `wcsa`…`wcsz` are empty on an ASDF frame.
4. **Cube WCS.** Rank-3 ASDF arrays load as cubes, but the GWCS is 2-D; there is no third-axis
   WCS, so slice coordinates are pixel-only.

## 7. Out of scope

3-D/VRML frames, RGB/HLS/HSV frames (single-array ASDF loads are base frames), IIS, and the
catalog/analysis tools beyond a smoke check.
