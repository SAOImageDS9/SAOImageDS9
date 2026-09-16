# ASDF/GWCS AST bridge probe

Scratch tooling used to validate `ASDF_NATIVE_SUPPORT_DESIGN.md`'s core claim: that AST's
`YamlChan` class (`ast/src/yamlchan.c`) can read a real Roman GWCS object once its
block-sourced `core/ndarray` coefficients are resolved to inline `data:` literals. See
`TODO.md` Phase 1 for the findings this produced. These are developer tools for iterating
on that bridge, not part of the DS9 build or the eventual production ASDF reader (Phase 2's
container reader is C++ inside `tksao/frame/`, not this).

## Pipeline

1. **`parse_blocks.py`** — parses an ASDF file's binary-block index and headers, and
   decompresses each block's payload (`zlib` or `lz4`; real Roman files use `lz4`, which
   needs `pip install lz4`). Run standalone to list a file's blocks:
   ```
   python3 parse_blocks.py sample_data/wfi01_f158_wcs.asdf
   ```

2. **`resolve_ndarray.py`** — rewrites every block-sourced `!core/ndarray-*` node in a
   file's YAML tree text as an inline `data:` literal, using `parse_blocks.py` to get the
   real decoded bytes. AST's `YamlChan` only accepts inline ndarrays (see design doc §7b) —
   real Roman files always use block-sourced ones, even for tiny coefficient matrices, so
   this step is mandatory, not an edge case.
   ```
   python3 resolve_ndarray.py sample_data/wfi01_f158_wcs.asdf > resolved.yaml
   ```

3. **`extract_subtree.py`** — pulls one named key's subtree (one level under `roman:`,
   e.g. `wcs`, `wcs_l2`, `coordinate_distortion_transform` — the key name and nesting isn't
   consistent across Roman product types) out of a resolved tree and writes it as a
   standalone `.asdf` document. Two modes:
   - Default: assumes the value is a proper `!<gwcs/wcs-*>` object and just renames the key
     to `wcs:` at the document root, which AST's `astRead()` recognizes directly.
   - `--bare-transform`: for a bare `!transform/...` value with no `gwcs/wcs` wrapper (e.g.
     a pre-launch/pysiaf-derived distortion reference file). **`astRead()` does not accept
     a bare transform as the document root at all** — confirmed by testing, not assumed —
     so this synthesizes a minimal 2-step GWCS shell around it instead.
   ```
   python3 extract_subtree.py resolved.yaml wcs_l2 > test.asdf
   python3 extract_subtree.py resolved.yaml coordinate_distortion_transform --bare-transform > test.asdf
   ```

4. **`yamlchan_probe.c`** — reads the resulting document's `wcs:` key via
   `astYamlChan(...)` + `SourceFile=` (the same pattern `ast/ast_tester/testyamlchan.c`
   uses) and reports whether `astRead()` returns a usable `AstFrameSet`, then transforms
   one test point through it as a numeric sanity check. Build from the top-level tree
   after `ast`/`libyaml` are built:
   ```
   gcc -I include -o utils/asdf_gwcs_probe/yamlchan_probe utils/asdf_gwcs_probe/yamlchan_probe.c \
       lib/libast.a lib/libast_pal.a lib/libast_cminpack.a lib/libast_err.a lib/libyaml.a -lm
   ./utils/asdf_gwcs_probe/yamlchan_probe test.asdf
   ```

## Sample data

`sample_data/` holds three small real files from the
[Roman Data Workshop](https://github.com/spacetelescope/roman-data-workshop):

| file | what it is | key to extract |
|---|---|---|
| `wfi01_f158_wcs.asdf` | imaging WCS product (both `wcs_l1` and `wcs_l2`) | `wcs_l2` |
| `grism_wcs.asdf` | grism WCS product | `wcs_l2` |
| `new_distortion.asdf` | pre-launch pysiaf-derived distortion reference — the "functionally SIP-equivalent" file type the original pds9 report described | `coordinate_distortion_transform`, with `--bare-transform` |

End-to-end example:
```
python3 resolve_ndarray.py sample_data/wfi01_f158_wcs.asdf > /tmp/resolved.yaml
python3 extract_subtree.py /tmp/resolved.yaml wcs_l2 > /tmp/test.asdf
../../utils/asdf_gwcs_probe/yamlchan_probe /tmp/test.asdf
# PASS: astRead succeeded, class = FrameSet, nframe = 5
# PASS: astTran2(0.3,-0.2) -> (-1.57103, 1.15147)
```

## Known gaps this does *not* cover

- `bounding_box` (present on real `compose` transforms) has no handling anywhere in
  `yamlchan.c` — not a version issue, just no code path reads that key. Silently dropped,
  not approximated. See `TODO.md` Phase 1.
- This only exercises the WCS half. The pixel-array half (Phase 2) is untouched by any of
  this — these sample files are WCS-only products and carry no science image data.
