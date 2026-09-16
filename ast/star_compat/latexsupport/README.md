# Vendored Starlink LaTeX support files

These are the LaTeX class and style files that `sun_master.tex` needs, taken
unmodified from the Starlink `latexsupport` component so that SUN/210 and
SUN/211 can be typeset without a Starlink installation.

`starlink.cls` is the document class named by `sun_master.tex`; it in turn
`\RequirePackage`s the other three (`starlink.cls:506-508`).
Everything else it loads is a standard TeX Live package, so a plain TeX Live
plus these four files is enough to build the PDFs.

| File | Role |
| --- | --- |
| `starlink.cls` | Starlink document class |
| `starabbrev.sty` | Abbreviation and units shortcuts |
| `starstyle.sty` | PDF styling: sectioning, colours, hyperref setup |
| `sst.sty` | Formatting for the routine descriptions `prolat` emits |
| `ast.sty` | **Not vendored** — AST's own additions, see below |

## Provenance

Copied from `$STARLINK/share/latexsupport/` of a Starlink tree installed at
`~/star`, whose `manifests/latexsupport` component supplied them. Upstream file
dates 2026-02-23; vendored 2026-08-31.

```
f7b9bc27b97772445b4768d04a122f6058d4780bf4a45ac7c0b3615c2a7973c0  starlink.cls
015968969013e2a85c1e8488b07226929bd9c81289948b7f0a96443c18e658f9  sst.sty
940793e14d4b7a9c3d0ef338de023981948488e9dfbe7365ed518e44af808933  starabbrev.sty
05288fd636047098c696a83b566b1c05991bb37f24ce265686cb1d6d064e47a3  starstyle.sty
```

Keep these copies byte-identical to upstream. Re-syncing is then a plain copy
followed by re-recording the checksums above; anything AST needs to change
belongs in `ast.sty` instead.

## ast.sty

`ast.sty` is AST's own file, not part of the Starlink component.
`sun_master.tex` loads it with `\usepackage{ast}`.

It supplies the three LaTeX2HTML macros AST's documents use — `\htmlref`,
written by the `addlinks` script for every cross-reference, plus
`\htmladdnormallink` and `\htmladdnormallinkfoot`. These come from
LaTeX2HTML's `html.sty`, which nothing loads; the only other definition of
`\htmlref` is in `starstyle.4ht`, the tex4ht configuration for the hypertext
build. Under `pdflatex` all three were therefore undefined, and because TeX
skips an undefined macro but still typesets its arguments, every
cross-reference was printed twice while `pdflatex` exited non-zero.

The definitions follow `html.sty` (LaTeX2HTML 95.1) exactly for `\htmlref`,
and widen the other two: `html.sty` was written for paper and discards the URL,
whereas these are PDFs with `hyperref` loaded, so both become live links.
Nothing printed changes. AST uses no other macro from that family, so the three
definitions are kept here rather than vendoring all of `html.sty`.

## Licence

Redistributed under the GNU Lesser General Public License v3, the same licence
as the rest of AST (see `COPYING` at the top of the tree). The upstream files
carry no per-file licence header.

## Not vendored

The tex4ht inputs for the hypertext build (`starstyle.4ht`, `sst.4ht`,
`tex4ht.env`, `starlinkxhtml.cfg`) and the `starfont` tree are not here. The
`.htx_tar` products also need the Starlink `star2html` program, so that build
stays conditional on a Starlink installation being present; `configure` drops
the `.htx_tar` targets when `star2html` is not found.
