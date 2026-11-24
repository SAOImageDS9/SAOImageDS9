# TODO: Generalized Hyperbolic Stretch (GHS) scale

**Status (2026-11-24): fully wired on branch `ghs_scale`, smoke-tested, not yet
committed past the WIP prototype commit.** GHS is a regular DS9 scale type (`scale ghs`,
with `stretch`/`intensity`/`sp`/`lp`/`hp`), using the inverse-built 2²⁰-entry table.
History: the review checked the maths and the contrast/bias interaction; prototypes 1–3
found that the 16384-entry table, not the stretch factor, causes banding on wide-range
data, and that the inverse-built fine table fixes it at near-normal speed (see
"Prototype results"); questions 2–4 are decided (see "Decisions"); "Full wiring" lists
what was done. The GHS dialog now updates live, and the Scale dialog graph draws
the scale function (see "UI"). Remaining: tests in `Tests/` (Plan step 4) and the
remaining UI ideas.

Source: PixInsight GHS process module docs, v3.0.4 (2023-07-11),
<https://www.ghsastro.co.uk/doc/tools/GeneralizedHyperbolicStretch/GeneralizedHyperbolicStretch.html>.
Algorithm by David Payne (equations, 2021) and Mike Cranfield (PixInsight script/module).

## Why

DS9's non-linear scales are mostly fixed shapes. `AsinhScale` is hard-coded as
`asinh(10x)/3`, `SinhScale` as `sinh(3x)/10`, and sqrt/squared take no parameter. Only
log/pow have a tunable `expo`. None of them let the user choose *where* in the data range
contrast is added. GHS adds that with the symmetry point SP. For science images this is
the useful part: put SP at the sky level to bring out faint diffuse emission without
saturating point sources. Setting b = −1 gives a tunable log, and the same framework
includes a tunable arcsinh, so tunable versions of two existing fixed scales come with it.

## Licensing

The PixInsight module is GPLv3. The equations are published in full on the page above
and no source repository is linked. Implement from the equations, not from their code,
and credit Payne & Cranfield in the DS9 docs and the reference manual.

## Maths

All on normalised input x ∈ [0,1] (i.e. after DS9's low/high clip). Use doubles
throughout. (The fetched page lost its superscripts; the exponents below were restored
from context. Check them against the page before implementing.)

### Parameters

| Name | Meaning | Range |
|---|---|---|
| D | stretch; UI exposes **stretch factor** = ln(D+1), so D = e^sf − 1. sf = 0 ⇒ identity | sf ∈ [0, 20] |
| b | local intensity: curve shape / how tightly contrast concentrates at SP | [−5, 15] |
| SP | symmetry point: where contrast is added most | [0, 1] |
| LP | protect shadows: curve is linear below LP | [0, SP] |
| HP | protect highlights: curve is linear above HP | [SP, 1] |

In DS9, SP/LP/HP should be entered **in data units**. Convert them to [0,1] with the
current low/high when building the table, so that changing the clip limits doesn't move
them. A new clip range (e.g. zscale on another slice) can put them outside [low, high],
so after converting, clamp them to [0,1] and enforce LP ≤ SP ≤ HP.

### Base curve T(x), derivative T′(x)

| Case | T(x) | T′(x) |
|---|---|---|
| b = −1 (log) | ln(1 + D·x) | D / (1 + D·x) |
| b < 0, b ≠ −1 (integral) | (1 − (1 − b·D·x)^((b+1)/b)) / (D·(b+1)) | (1 − b·D·x)^(1/b) |
| b = 0 (exponential) | 1 − e^(−D·x) | D·e^(−D·x) |
| b = 1 (harmonic) | 1 − (1 + D·x)^−1 | D·(1 + D·x)^−2 |
| b > 0, b ≠ 1 (hyperbolic) | 1 − (1 + b·D·x)^(−1/b) | D·(1 + b·D·x)^(−(1+b)/b) |

GHS also offers these curves with the same piecewise construction (optional for DS9):

| Type | T(x) | T′(x) |
|---|---|---|
| Arcsinh | asinh(D·x) | D / √(D²x² + 1) |
| Power law | 1 − (1 − x)^(1+D) | (1+D)·(1 − x)^D |
| Midtone (m = 0.5/(D+1)) | (m−1)·x / ((2m−1)·x − m) | m(1−m)·((2m−1)·x − m)^−2 |

### Piecewise assembly (for 0 < LP < SP < HP < 1, D > 0)

```
T3(x) =  T(x − SP)                          SP ≤ x < HP
T2(x) = −T(SP − x)                          LP ≤ x < SP   (180° rotation about (SP,0))
T1(x) =  T2′(LP)·(x − LP) + T2(LP)          0  ≤ x < LP   (tangent line)
T4(x) =  T3′(HP)·(x − HP) + T3(HP)          HP ≤ x ≤ 1    (tangent line)

NormT(x) = (Ti(x) − T1(0)) / (T4(1) − T1(0))
```

Note T2′(x) = T′(SP − x) and T3′(x) = T′(x − SP). The page says the cases where some of
the inequalities are equalities "should be evident". Handle LP = SP, HP = SP, SP = 0,
SP = 1 and D = 0 (identity) explicitly, and cover them in tests.

### Inverses (needed for `InverseScale`: colorbar numerics, contour levels)

| Case | InvT(y) |
|---|---|
| b = −1 | (e^y − 1) / D |
| b < 0, b ≠ −1 | (1 − (1 − (b+1)·D·y)^(b/(b+1))) / (D·b) |
| b = 0 | −ln(1 − y) / D |
| b = 1 | y / (D·(1 − y)) |
| b > 0, b ≠ 1 | ((1 − y)^−b − 1) / (b·D) |
| Arcsinh | sinh(y) / D |
| Power law | 1 − (1 − y)^(1/(1+D)) |
| Midtone | m·y / ((2m−1)·y − (m−1)) |

With y′ = T1(0) + y·(T4(1) − T1(0)):

```
[0, NormT(LP))          LP + (y′ − T2(LP)) / T2′(LP)
[NormT(LP), NormT(SP))  SP − InvT(−y′)
[NormT(SP), NormT(HP))  SP + InvT(y′)
[NormT(HP), 1]          HP + (y′ − T3(HP)) / T3′(HP)
```

## Fit with DS9's architecture

Every scale is a lookup table with `SCALESIZE` = 16384 entries (`tksao/frame/base.h`)
that maps [low, high] to colour cells (`tksao/frame/colorscale.C`). GHS is one more
`ColorScale` subclass whose constructor fills the table from NormT. The colorbar and
contours use `InverseScale` (`tksao/frame/inversescale.C`), which gets a matching class
built from the closed-form inverse.

Existing constructors do `int ll = (int)(aa*count)` and clamp only at the top. NormT
can round slightly below 0, so clamp `ll` at both ends.

### Interaction with contrast/bias

The render chain is:

```
pixel → (v−low)/(high−low) → scale table[SCALESIZE] → colorCells[2048] → RGB
                              (per-frame scale)       (contrast/bias + colormap)
```

- The scale table (`frame.C:331`, `:945`; `colorscale.C`) maps normalised data to a
  colour-cell index. GHS lives here.
- Contrast/bias belongs to the colorbar, not the scale: `ColorbarBase::calcContrastBias`
  (`colorbar/colorbarbase.C:469`) remaps each colour-cell index with a clipped straight
  line, `r = ((i/N − bias)·contrast + 0.5)·N`. The resulting cells are pushed to the frame
  (`Frame::updateColorCells`, `frame.C:665`).

So the displayed value is `clip(contrast·(NormT(x) − bias) + 0.5)`: a straight-line
adjustment after the curve, exactly as with log/asinh today. Consequences:

1. **No conflict, nothing to build.** Changing GHS parameters rebuilds the scale table.
   Changing contrast/bias rebuilds the colour cells. Neither side needs to know about the
   other.
2. **The inverse ignores contrast/bias.** Colorbar position *i* shows cell *i*, and
   `InverseScale(i)` is the data value that lands on cell *i*, so colorbar labels stay
   correct under any contrast/bias. `GhsInverseScale` only inverts NormT. Contour levels
   ignore contrast/bias too, as now.
3. **Overlapping controls.** SP chooses *where in the data* contrast goes. Bias shifts
   the result in colour space. Both sound like "where the action is", so the docs must
   spell out the difference. Contrast > 1 makes GHS's steep middle steeper and clips both
   ends, which defeats LP/HP protection (and worsens banding, Risk 1). Bias > 0.5 acts as
   a black point, which overlaps the HP = SP "soft black point" recipe. Document GHS as
   intended for contrast 1 / bias 0.5, and consider a "reset contrast/bias" button in the
   GHS part of the Scale dialog.
4. **Histogram target.** The "histogram peak at 0.2–0.25" advice refers to output *after*
   the stretch, and contrast/bias then moves it. A predicted post-stretch histogram
   overlay should include contrast/bias, since that is what the user sees.
5. **Lock scope differs.** GHS parameters are per frame (FrScale). Contrast/bias comes
   from the colorbar. Locking/matching scales locks GHS but not contrast/bias, and vice
   versa. Fold this into Risk 2.
6. **Right-drag** adjusts contrast/bias (`ds9/library/colorbar.tcl:1418`). Possible later
   option: when the scale is GHS, have right-drag set SP (x) and stretch factor (y). Keep
   the default behaviour unchanged.

### Places to wire (same set as `ASINHSCALE`)

C++ (`tksao/frame/`):
- `frscale.h/.C`: add `GHSSCALE` to `ColorScaleType`, plus fields for D (or the stretch
  factor), b, SP, LP and HP next to `expo_`, with getters/setters and copy/compare
- `colorscale.C/.h`: `GhsScale`
- `inversescale.C/.h`: `GhsInverseScale`
- scale-type switches in `frame.C`, `framergb.C`, `frame3d.C`, `framet.C`,
  `framemulticolor.C`, `colorscalergb.C`, `colorscalet.C` and `fvcontour.C`
- `basecommand.C`: set/get of the type and its parameters (the ~1376–1641 region)
- `parser.Y` + `lex.L`: new `ghs` keyword and parameter syntax. **Caution:** a new token
  means regenerating `lex.C`. Run the no-op regen check from CLAUDE.md on this box first.
  If flex churns the file, hand-apply the token on top of the checked-in `lex.C`, or reuse
  an existing token if one fits. A `.Y` change alone is safe with bison 2.3.

Tcl (`ds9/`):
- `parsers/scaleparser.tac`, `scalelex.fcl` (taccle/fickle, so a plain `make ds9`
  regenerates them; no flex needed)
- `parsers/contourparser.tac`, `contourlex.fcl` (contours have their own scale type).
  Five more contour-only parameters is a lot. Consider having contours reuse the frame's
  GHS parameters instead of keeping their own.
- `library/scale.tcl`: dialog parameter fields; `library/mscale.tcl`: menus and buttons
- preferences, backup/restore, `command.tcl`, and the XPA/SAMP `scale` docs

Rough size: about 50 lines of maths, and a few days in total, mostly wiring and tests.

## Out of scope

- **Colour / Lightness / Saturation modes.** These compute each pixel from all three
  channels: arcsinh-style on a weighted mean of R, G and B, then a ×T(z)/z rescale with
  clip, rescale, or blend handling. DS9's RGB frame runs an independent lookup table per
  channel, so these would need a new per-pixel render path, not a new scale type.
  Per-channel GHS in RGB frames comes free with the scale type.
- **Invert mode** as a user feature. The inverse is only needed internally.
- **LCP/HCP clip-fraction estimation.** DS9 already has minmax, zscale, zmax and user
  clipping.

## UI

### Done (2026-11-24, uncommitted)

- **GHS Parameters dialog is not modal** (`ScaleGhsDialog`, `scale.tcl`), so the image,
  the Scale dialog and the limits stay usable while tuning. Buttons: Apply, Reset,
  Close.
  - **Moving the stretch or intensity slider updates the display at once.** Updates are
    merged with `after idle`, so a drag doesn't queue one redraw per motion event.
    Values are rounded to 0.01. The sliders use float limits (`0. 20.`, `-5. 15.`),
    because `SliderCmd` rounds to integers when both limits are integers; Preferences
    had the same bug and is fixed too.
  - SP/LP/HP entries apply with Apply or Return. Invalid text raises an error on Apply
    and is ignored quietly during slider moves.
  - **Applying switches the scale type to GHS.** That is deliberate: it's what the
    dialog is for. The `scale ghs <param>` commands still don't change the type.
  - **Reset** restores the parameters *and* the scale type from when the dialog was
    opened.
  - The dialog follows the current frame (`UpdateScaleGhsDialog`, called from
    `UpdateScaleMenu`).
  - Cost: about 27 ms per live update with the Scale dialog open (it recomputes the
    histogram), 17 ms without.
- **The scale function is drawn on the Scale dialog's histogram** (`ScaleCurveDialog`)
  for *every* scale type. It plots the scaled value (0–1, new right-hand `y2axis`)
  against data value, from `get colorscale level 257 low high type exp`. Those inverse
  levels are the curve sampled evenly in output, so it's dense where the curve is
  steep. It is flat at 0/1 outside the limits and redraws on every scale change. The
  curve is listed first in `element show` so it draws on top of the filled histogram.
  - For GHS, dashed SP/LP/HP marker lines with labels are drawn for parameters given as
    data values (not for `auto`, which coincides with the limit markers).
  - With the Graph menu's default "Full Range" x axis on wide-range data, the whole
    curve rises inside the leftmost sliver; "Current Range" shows its shape.

### Ideas (later)

- "Set SP from here": use the median in a 15×15 box at the crosshair or clicked pixel,
  or a region's statistics. GHS recommends 15×15.
- Overlay the predicted post-stretch histogram, as GHS does.
- Starting defaults from the GHS usage notes. First stretch of linear data: SP at the
  faintest signal of interest, b ≈ 10, then raise D until the histogram peak sits
  around 0.2–0.25. Later contrast tweaks: b ≈ 3–5. A soft black point without
  clipping: HP = SP, LP = 0, b ≈ 10.
- Possibly switch the Scale dialog graph to "Current Range" automatically when the
  scale is GHS.

## Risks / open questions

1. **LUT banding.** Predictable from the maths. The curve is steepest at SP, with
   normalised slope `D / (T4(1) − T1(0))`. Each scale-table step then jumps
   `slope · 2048/16383` colour cells. With SP = 0.01, LP = 0, HP = 1:

   | stretch factor | b = 0 | b = 5 | b = 10 |
   |---|---|---|---|
   | 2 | 0.75 cells/step | 1.4 | 2.1 |
   | 5 | 10 | 17 | 24 |
   | 10 | 1,400 | 1,700 | 2,200 |
   | 15 | 200,000 | 220,000 | 265,000 |

   For comparison, `log` with exp = 1000 already jumps about 18 cells/step near 0, so
   stretch factor ≲ 5 behaves like existing scales. At ≳ 10 a single table step covers most
   of the colormap. A bigger table barely helps, because each +1 in stretch factor
   multiplies the slope by about e, and contrast > 1 multiplies it further. Realistic
   options:
   - compute each pixel directly for GHS (the loops at `frame.C:331`/`:945` and their
     RGB/3D/multicolor counterparts);
   - cap the stretch factor at around 6–8. Defensible, because PixInsight users reach big
     stretches by applying GHS several times, which DS9 can't do anyway.

   **The prototype showed this estimate is incomplete** (see "Prototype results"). The
   steepness at SP matters, but the deciding quantity is the table step in data units,
   `(high − low)/16383`, compared with the sky noise σ. When the step is ≳ σ, sky pixels
   collapse onto 2–3 table entries at *any* stretch factor, and no cap fixes it.
2. ~~Parameter semantics across frames.~~ **Decided 2026-11-24: data units**, copied
   verbatim by match/lock (see "Decisions").
3. ~~Which extra curves to expose.~~ **Decided: core b-family only.**
4. ~~Command syntax.~~ **Decided: one keyword per parameter**, following
   `scale log exp N`.

## Decisions (2026-11-24)

1. **SP/LP/HP are stored in data units** in `FrScale`, and match/lock copies them
   verbatim. `scale match` copies the scale type but each frame recomputes its own clip
   limits, so data units are what make matched frames stretch around the same sky value.
   Normalised values would put SP on different data values per frame.
   - Convert to [0,1] with the context's low/high when building the table, then clamp
     and order (LP ≤ SP ≤ HP). Every clip-changing command (`clipModeCmd`,
     `clipUserCmd`, ...) already calls `updateColorScale()`, so the table follows clip
     changes with no extra plumbing.
   - Frames in different units (e.g. different bands) get an SP outside their range,
     which is clamped to it. Document this: match is for frames in the same units.
   - **Caveat, mosaics with local clip scope:** each tile renders with its own
     `sptr->low()/high()` but all tiles share one scale table, so a data-unit SP is exact
     only for the range the table was built with. Use the context (frame) low/high for
     the conversion and document the limitation. Per-tile tables would fix it, but that
     isn't worth it initially. Cube slices are fine: changing slice updates the clip and
     rebuilds the table.
   - Contrast/bias stays locked through the colorbar, separately (see "Interaction with
     contrast/bias").
2. **Core b-family only** (b = −1 log, b < 0 integral, b = 0 exponential, b = 1 harmonic,
   b > 0 hyperbolic). The GHS arcsinh, power law and midtone curves are left out. They
   could come later as a `curve` sub-option without changing the syntax below.
3. **Syntax: one keyword per parameter**, mirroring `scale log exp N`:
   - `scale ghs` selects the scale type.
   - `scale ghs stretch <sf>` (stretch factor, sf ∈ [0, 20], D = e^sf − 1)
   - `scale ghs intensity <b>` (b ∈ [−5, 15])
   - `scale ghs sp <value>`, `scale ghs lp <value>`, `scale ghs hp <value>` (data units)
   - Each can be read back with `xpaget ds9 scale ghs <keyword>`. Setting a parameter
     doesn't change the scale type, just as `scale log exp` doesn't.
   - Frame (C++) side: a new `GHS_` token in `tksao/frame/lex.L` (regenerate with
     CommandLineTools flex, which matches the checked-in `lex.C` byte-for-byte; see the
     memory note on the flex toolchain), replacing the prototype's `colorscale user ...`
     hook with `colorscale ghs <sf> <b> <sp> <lp> <hp>` set in one call from Tcl, plus
     `get colorscale ghs`.
   - Tcl side: `scaleparser.tac`/`scalelex.fcl` and `scalesendparser` (taccle/fickle,
     regenerated by `make ds9`; after adding tokens, regenerate the lexer too, per
     AGENTS.md).
   - Defaults: stretch 5, intensity 0, sp/lp = the current low, hp = the current high
     (so a fresh `scale ghs` is a sensible, visible stretch). Exact defaults can be tuned
     in the UI step.
4. **Contours reuse the frame's GHS parameters.** When the contour scale type is `ghs`,
   `fvcontour` takes the five parameters from the frame's `FrScale`, not its own copy.
   That means no extra contour prefs, dialog fields or backup entries. The contour
   dialog just gains `ghs` in its scale menu. (The prototype's contour copy of
   `FrScale` already carries `ghs_`, but full wiring must make sure it's refreshed from
   the frame when the GHS parameters change.)

## Prototype results (2026-11-24, branch `ghs_scale`)

### What was built

- `tksao/frame/ghs.h` (new, header-only so no configure edits): `GhsParams` and
  `GhsCurve`, with the forward curve, its inverse, and the piecewise LP/SP/HP assembly.
  It uses `expm1`/`log1p` throughout to avoid cancellation at small D. Covers b = −1,
  b < 0, b = 0 and b > 0 (harmonic b = 1 falls out of the b > 0 formula). The extra
  curves (arcsinh, power law, midtone) are not included.
- `GhsScale` (`colorscale.C`), `GhsInverseScale` (`inversescale.C`), and
  `FrScale::GHSSCALE` plus a `GhsParams ghs_` field (copied in both copy paths), with
  `Context::ghs()`/`updateGhs()`.
- Wired into `frame.C`, `frame3d.C`, `framet.C` (single scale), `framemulticolor.C`,
  `fvcontour.C`, and `basecommand.C` (colorbar levels, colour-scale levels, and both
  `get colorscale` switches, which return `ghs`).
- **Temporary hook**: the grammar-only rule `colorscale user sf b sp lp hp` in
  `parser.Y` reuses the existing `USER_` token, so `lex.C` was untouched. `parser.C` was
  regenerated with CommandLineTools bison 2.3; a no-op regen matched except `#line`
  paths, and `parser.H` didn't change. **sp/lp/hp are normalised** [0,1] in the
  prototype, not data units. Usage:
  `echo '$::current(frame) colorscale user 5 5 0.0068 0 1' | xpaset ds9 tcl`.
- Prototype gaps: RGB frames and per-channel `FrameT` fall back to the linear scale (no
  `GhsScaleRGB`/`GhsScaleT`). `FrScale::colorIndex` (used by `frblt.C`) has no GHS case,
  which is the build's only new warning. No Tcl/UI, prefs or backup.

### Curve checks (standalone, all pass)

Swept sf ∈ {0, 0.5, 2, 5, 10, 15}, b ∈ {−5, −1, −0.5, 0, 1, 3, 10, 15}, and
(SP, LP, HP) including the edge cases SP = 0, SP = 1, LP = SP, HP = SP and
LP = SP = HP. In every case the curve is monotonic over 200k samples, NormT(0) = 0 and
NormT(1) = 1, and the inverse round-trips to ≤ 2e-10.

### Banding: the table step is the problem, not the stretch factor

- **`Tests/fits/img.fits` (HST, −10 to 3396) can't test the table.** Every pixel is an
  integer (581 distinct values), and one data unit (1/3406 of the range) is coarser than
  a table step. GHS with sf = 5, b = 5 and SP at the sky median looks very good there.
  At sf ≥ 8 it posterizes, but the colorbar shows that's because about 5 integer data
  values span the whole colormap. That is the curve itself, and computing each pixel
  directly would not change it.
- **Synthetic float image**: sky 100, σ = 2, faint diffuse blobs of +3 to +6, and point
  sources up to 1e5. With minmax, the table step is 6.1 data units, larger than σ.
  Distinct colour cells reached by sky pixels (median ± 3σ):

  | sf, b | table | computing each pixel directly |
  |---|---|---|
  | 2, 5 | 3 | 4 |
  | 5, 5 | 3 | 49 |
  | 8, 5 | 3 | 480 |
  | 10, 5 | 3 | 1,053 |

  Visually: at sf 5 with minmax the diffuse emission is invisible (flat sky). At sf 8 it
  appears as coarse 3-level speckle. **With a 99.5% clip (step 0.036 units) sf 5, b 5 is
  excellent**: both blobs stand out, the noise grain is resolved, and the stars aren't
  saturated. Colorbar labels from `GhsInverseScale` look right in all cases.
- Contrast 2 / bias 0.5 on top of GHS pushes the sky (low output) to cell 0, i.e. it
  clips exactly the faint range GHS was raising. That supports "use contrast 1 / bias
  0.5 with GHS".

### Conclusion

GHS's natural use, minmax limits with SP at the sky, is exactly the case the fixed-step
table can't handle. A stretch-factor cap doesn't help. Compute each pixel directly for
GHS instead: the render loops (`frame.C:331`/`:945` and their equivalents) visit screen
pixels, not data pixels, so the cost is roughly one `log1p`/`expm1` per screen pixel per
redraw. Index into `colorCells` with the curve value.

Where the direct computation has to go: the panner and magnifier need no separate
wiring. They, the main view, PS/Win32 printing and blink/fade all render through the
frame's own `fillImage()`, picking their geometry with the `sys` argument
(`Base::ximageToPixmap(..., Coord::PANNER / MAGNIFIER / WIDGET)`, `psImage`,
`win32Image`, `FrameBase` fade). The pixel loops that index the table are:
- `Frame::fillImage` (`frame.C:278`), `Frame::savePhotoCmd` (`frame.C:888`)
- `Frame3d::fillImageColor` (`frame3d.C:902`), `Frame3d::savePhotoCmd` (`frame3d.C:1333`)
- `FrameRGB::fillImage` (`framergb.C:59`), `FrameRGB::savePhotoCmd` (`framergb.C:379`)
- `FrameT::fillImage` and `FrameMultiColor::fillImage` (`framemulticolor.C:189`)
- `FrScale::colorIndex` (used by `frblt.C`)

A shared inline helper `(value, low, high) → colour-cell index` that branches to the
curve for GHS and to the table otherwise would keep these loops in sync.

### Computing each pixel directly (prototype 2, 2026-11-24)

**Built.** `ColorScale` gained an inline `lookup(aa)` (`colorscale.h`), with
aa = (value − low)/(high − low). When `curve_` is set (only `GhsScale` sets it, along
with a copy of the colour cells) it evaluates the curve and indexes the colour cells
directly. Otherwise it returns `psColors_ + (int)(aa·(size−1) + .5)·3`, the same
expression the loops used before. These now call it: `Frame::fillImage` and
`savePhotoCmd`, `Frame3d::fillImageColor` and `savePhotoCmd`, `FrameT::fillImage` (kk = 0
and the matching save loop), and `FrameMultiColor::fillImage`. `GhsScale` still fills
the table for anything that doesn't call `lookup()`. Not converted yet:
`FrameRGB`/per-channel `FrameT` (still linear fallback) and `FrScale::colorIndex`.

**Non-GHS scales are unchanged:** a log-scale `saveimage png` of the synthetic image is
byte-identical (same sha1) before and after.

**Banding fixed.** Synthetic image, minmax limits, b = 5, SP at the sky median; grey
levels in a star-free sky patch of the `saveimage` PNG:

| sf | table | direct |
|---|---|---|
| 5 | 2 levels hold 99% of pixels | ~6 levels (correct: sf 5 is just under-stretched for SP ≈ 1e-4) |
| 8 | 2 levels (53 and 18) hold 99% | smooth spread over ~30 levels (28–37 …), a real noise histogram |

**Cost.** Full redraw of a 900×629 frame (≈566k screen pixels), 40 alternating
redraws each:

| scale | ms/redraw |
|---|---|
| log/sqrt (table) | 10.4–10.9 |
| GHS b = −1 (direct) | 17.5–19.8 |
| GHS b = 0 (direct) | 18.3–20.6 |
| GHS b = 5 (direct) | 22.9–23.0 |

That's roughly +15–20 ns per screen pixel, about 2× the table path. The panner and
magnifier are small, so it's negligible there. A full-screen 4K frame (~8M pixels) would
add ~120–160 ms per redraw, noticeable when dragging to pan or adjusting the colormap.

### Fine table vs. direct (prototype 3, 2026-11-24)

**Built.** `GhsScale` takes a temporary env switch, `DS9_GHS_MODE` = `direct`
(default), `fine` (2²⁰-entry table, 3 MB, no curve evaluated per pixel) or `table` (the
old SCALESIZE table). Set it from Tcl with `set ::env(DS9_GHS_MODE) fine`; it applies on
the next scale rebuild. Building the fine table with 1M forward curve calls cost ~13 ms,
so it was rebuilt instead **from the closed-form inverse**: for each of the 2048 colour
cells, compute where its run starts (`ceil(ss·inverse(k/count))`) and fill the run. That
is 2048 inverse calls plus a fill. The result is identical (same pixel diffs against
direct as the forward-built table).

Synthetic image, minmax, sf 8, b 5, SP at the sky, 900×629 frame, 30 iterations each:

| mode | sky patch levels (≥ 0.5% of pixels) | GHS param change | pan redraw | contrast/bias drag |
|---|---|---|---|---|
| direct | 45 | 25.2 ms | 22.7 ms | 23.5 ms |
| **fine (inverse-built)** | **46** | **12.8 ms** | **10.1 ms** | **10.8 ms** |
| fine (forward-built) | 46 | 23.5 ms | 10.5 ms | 22.8 ms |
| table (old) | 2 | 9.7 ms | 9.0 ms | 9.8 ms |
| log (reference) | n/a | n/a | 8.3 ms | 8.1 ms |

Pixel differences against direct, on every other pixel of the saveimage PNG: fine
differs in 9% of pixels, by at most **1 grey level**. The old table differs in 63%, by
up to 20.

Contrast/bias drags matter here: each drag event sends new colour cells to the frame and
rebuilds the scale, so a slow table build would make dragging sluggish. The
inverse-built table avoids that.

**Recommendation: the inverse-built 2²⁰ table.** It looks the same as direct computation
and runs within ~1–2 ms of the existing scales on every interaction. It also needs no
changes to the pixel loops, so `lookup()` and the `FrameRGB`/`FrameT`/`colorIndex`
conversions become unnecessary; `GhsScale` just builds a bigger table. Costs and limits:
- 3 MB per GhsScale (×3 for RGB, × layers for multicolor).
- The step is (high − low)/2²⁰, so it still bands when the range exceeds about
  2.6×10⁵·σ (step > σ/4). The synthetic image is about 5×10⁴·σ. If that case matters,
  fall back to direct computation, which has no such limit (this needs a noise
  estimate to decide when). That's probably not worth doing until someone hits it.
- Side observation: DS9's existing log/asinh scales show the same sky collapse on this
  image with minmax limits. The same fine-table trick would help them, but that's out of
  scope here. A data-dependent table size
(step ≤ σ/4) would also work, but it needs a noise estimate and can reach 10⁵–10⁶
entries.

## Full wiring (2026-11-24, branch `ghs_scale`)

### C++ (`tksao/frame/`)

- `ghs.h`: `GhsParams` now holds SP/LP/HP **in data units**, with NaN meaning `auto`
  (SP, LP → low; HP → high). `GhsCurve(params, low, high)` normalises, clamps and
  orders them. `GhsCurve::cellStop()` gives the run boundaries for filling tables from
  the inverse.
- `GhsScale` (`colorscale.C`), plus new `GhsScaleRGB` (`colorscalergb.C`) and
  `GhsScaleT` (`colorscalet.C`). All build a `GHSSCALESIZE` (2²⁰) table by run-filling
  between `cellStop()` boundaries. Every frame type now uses a real GHS scale; the
  prototype's linear fallbacks are gone.
- Removed the prototype's `ColorScale::lookup()`, the per-pixel state and the
  `DS9_GHS_MODE` switch. The pixel loops in `frame.C`, `frame3d.C`, `framet.C` and
  `framemulticolor.C` are back to master's code; only the GHS switch cases remain.
- `GhsInverseScale` normalises with the low/high it is given (colorbar labels, contour
  levels).
- `FrScale::colorIndex` takes `const GhsParams&` and handles `GHSSCALE`. Its caller
  `frblt.C` passes the context's parameters. The build's `-Wswitch` warning is gone.
- Grammar: new `GHS_` token (`lex.L`). Rules: `colorscale ghs` (the type, via
  `scaleType`, so contours accept it too); `colorscale ghs <sf> <b> <sp> <lp> <hp>`,
  where each of SP/LP/HP is a number or `auto`, which **sets the parameters without
  changing the type**, like `colorscale log N`; and `get colorscale ghs`, which prints
  `sf b sp lp hp` with `auto` for unset values. The prototype's `colorscale user ...`
  hook is gone. `lex.C` was regenerated with CommandLineTools flex (a no-op regen was
  byte-identical first), and `parser.C`/`.H` with bison 2.3.

### Tcl (`ds9/`)

- `scaleparser.tac`/`scalelex.fcl`: `scale ghs`, `scale ghs stretch|intensity <n>`,
  `scale ghs sp|lp|hp <n>|auto`. `scalesendparser`/`scalesendlex`: `xpaget scale ghs`
  (all five) and `xpaget scale ghs <keyword>`. `contourparser`/`contourlex`:
  `contour scale ghs`. All six generated files were regenerated by hand (taccle, then
  fickle), and the token numbers agree between lexer and parser.
- `scale.tcl`: `scale(ghs,*)` state (defaults stretch 5, intensity 0, sp/lp/hp
  `auto`) and the `pscale` copies; `ChangeScale` sends `colorscale ghs`; match and
  match-limits copy `get colorscale ghs`; backup writes
  `colorscale ghs ...`; new `ScaleGhsDialog` (stretch and intensity sliders, SP/LP/HP
  entries, validation); helpers `ScaleGhsList`, `ScaleGhsSet` and `ScaleGhsValue`;
  GHS entries in the Scale dialog's menu.
- `mscale.tcl`: a GHS radio entry and "GHS Parameters..." in the main Scale menu; GHS in
  the prefs scale-type menu; a GHS labelframe in Preferences > Scale; a `scale,ghs`
  button (off by default) with its button-bar toggle; `UpdateScaleMenu` reads the
  frame's GHS parameters.
- `frame.tcl`: new frames (base/3d, rgb, hsv, hls) get the GHS parameters.
- `contour.tcl`: GHS in the contour dialog's scale menu. Contours reuse the frame's GHS
  parameters, because `contourCreateFV` copies the frame's `FrScale`.
- Docs: `command.html`, `xpa.html` and `samp.html` scale sections (description with
  Payne & Cranfield attribution, syntax and examples) and their contour scale lists;
  `framecmd.html` (`colorscale ghs`, `get colorscale ghs`, `<scaleType>`).
- Not changed: the legacy single-dash flags in `command.tcl` (`-asinh`, `-histequ`, ...)
  get no `-ghs`; `-scale ghs` covers it.

### Verification

- Clean rebuild: no errors, no stale objects, and no new warnings (the 8 `frblt.C`
  warnings were already there).
- Standalone curve test with data-unit parameters (low 90, high 1090; SP/LP/HP
  including `auto` and values outside the range), sweeping stretch factor, b and
  (SP, LP, HP): every curve is monotonic, runs from 0 to 1, and the inverse
  round-trips to ≤ 1e-6. The run-filled table matches a forward-built one except at
  0.04% of entries, all at cell boundaries and off by exactly one cell.
- XPA smoke test on the synthetic image:
  - set/get round-trips, including `auto`; defaults are `5 0 auto auto auto`.
  - Setting a parameter while the scale is linear leaves it linear.
  - A bad value gives a parse error: `expecting: integer, float, AUTO`.
  - The stretch factor 8 render gives 46 sky levels holding ≥ 0.5% of pixels, the same
    as the fine-table prototype (the old table gave 2).
  - `scale mode 99.5` keeps GHS. `scale match` copies type and parameters to a second
    frame.
  - Backup writes `colorscale ghs 8 5 101.28 auto auto`, and restore brings it back.
  - `contour scale ghs` produces levels bunched near the sky.
  - An RGB frame's red channel renders with GHS: the faint blob shows, so it isn't the
    linear fallback.
  - Pan redraw: 8.9 ms with GHS against 7.9 ms with log.
- `ScaleGhsDialog`, driven by a timer: valid values apply, and an invalid SP is
  rejected with nothing changed. The Preferences dialog builds.
- Not verified: the GHS dialog and Preferences clicked through by hand, HSV/HLS and
  multicolor frames, 3D frames, SAMP, and prefs save/load round-trip.

### Known limitations

- Mosaics with local clip scope: one table for all tiles, so a data-unit SP is exact
  only for the frame's low/high (see "Decisions").
- 3 MB per GHS scale (×3 for RGB/HSV/HLS, × layers for multicolor).
- The fine table still bands when the range exceeds about 2.6×10⁵·σ.

## Plan

1. ~~Prototype~~ done (see above).
2. ~~Decide questions 2–4~~ done (see "Decisions"). Risk 1 is settled: use the
   inverse-built 2²⁰ table.
3. ~~Full wiring~~ done (see "Full wiring").
4. Tests in `Tests/` (a separate git repo): table monotonicity and continuity at
   LP/SP/HP, the edge cases (D = 0, LP = SP, HP = SP, SP ∈ {0, 1}, SP/LP/HP outside the
   clip range), the inverse round-trip, colorbar labels unchanged under non-default
   contrast/bias, an XPA set/get round-trip, and backup/restore.
5. Docs: mostly done in the wiring step (see "Full wiring"). The scale sections already
   explain SP and recommend contrast 1 / bias 0.5. Still to do: spell out SP vs. bias,
   say b = −1 is *nearly* DS9's log (DS9 divides by log(exp), GHS by ln(1+D)), and add
   the release notes entry.
