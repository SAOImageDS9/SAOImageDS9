#!/usr/bin/env python3
"""Extract one top-level-under-`roman:` key's subtree from a resolved ASDF YAML tree
(as produced by resolve_ndarray.py) and write it out as a standalone .asdf document
that `yamlchan_probe` (or AST's own astYamlChan SourceFile=) can read directly.

Real Roman ASDF files put the interesting object one level under `roman:` at a 2-space
indent (e.g. `roman: {meta: ..., wcs: ...}` or `roman: {meta: ..., wcs_l1: ..., wcs_l2:
...}` or `roman: {meta: ..., coordinate_distortion_transform: ...}` - the key name and
whether it's nested under `meta:` too is NOT consistent across Roman product types, so
this takes the key name as an argument rather than assuming one fixed path.

Two shapes need different handling, controlled by --bare-transform:

  - A proper GWCS object (tagged `!<tag:stsci.edu:gwcs/wcs-*>`) just needs its key
    renamed to `wcs:` at the document top level - AST's astRead() dispatch recognizes
    that shape directly. This is the default.

  - A *bare* transform (e.g. a pre-launch/pysiaf-derived distortion reference file's
    `coordinate_distortion_transform:`, tagged `!transform/...` with no `gwcs/wcs`
    wrapper) is NOT recognized by astRead() as a document root on its own - confirmed by
    testing (see TODO.md Phase 1: "No suitable object was found in the supplied YAML
    text"). Pass --bare-transform to wrap it in a minimal synthetic 2-step GWCS shell
    (a detector frame carrying the real transform, feeding a bare terminal frame)
    instead, which AST does accept.

Usage:
  python3 extract_subtree.py resolved.yaml wcs_l2 > out.asdf
  python3 extract_subtree.py resolved.yaml coordinate_distortion_transform --bare-transform > out.asdf
"""
import argparse
import re
import sys

HEADER = """#ASDF 1.0.0
%YAML 1.1
%TAG ! tag:stsci.edu:asdf/
--- !core/asdf-1.1.0
"""

SHELL_TEMPLATE = """wcs: !<tag:stsci.edu:gwcs/wcs-1.4.0>
  name: distortion_shell
  steps:
  - !<tag:stsci.edu:gwcs/step-1.3.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.2.0>
      axes_names: [x, y]
      axes_order: [0, 1]
      axis_physical_types: ["custom:x", "custom:y"]
      name: detector
      unit: [!unit/unit-1.0.0 pixel, !unit/unit-1.0.0 pixel]
    transform: {transform_value}
  - !<tag:stsci.edu:gwcs/step-1.3.0>
    frame: !<tag:stsci.edu:gwcs/frame2d-1.2.0>
      axes_names: [v2, v3]
      axes_order: [0, 1]
      axis_physical_types: ["custom:v2", "custom:v3"]
      name: output
      unit: [!unit/unit-1.0.0 arcsec, !unit/unit-1.0.0 arcsec]
"""


def extract_key_subtree(text: str, key: str) -> str:
    """Return the dedented subtree text for `  {key}: ...` (2-space indent under `roman:`)."""
    start = text.find(f"\n  {key}:")
    if start < 0:
        raise KeyError(f"key {key!r} not found at 2-space indent in the supplied text")
    m = re.search(r"\n  [a-zA-Z_]\w*:", text[start + 1 :])
    end = start + 1 + m.start() if m else len(text)
    subtree = text[start + 1 : end].rstrip()
    if subtree.endswith("..."):
        subtree = subtree[:-3].rstrip()
    lines = subtree.split("\n")
    dedented = [l[2:] if l.startswith("  ") else l for l in lines]
    return "\n".join(dedented) + "\n"


def as_wcs_shell(key: str, subtree: str) -> str:
    """`key: !<gwcs/wcs-...> ...` -> `wcs: !<gwcs/wcs-...> ...` (just rename the key)."""
    return subtree.replace(f"{key}:", "wcs:", 1)


def as_wrapped_transform(key: str, subtree: str) -> str:
    """Wrap a bare `key: !transform/... ` value in a minimal synthetic GWCS shell."""
    value_only = subtree.split(":", 1)[1].lstrip()
    value_lines = value_only.rstrip("\n").split("\n")
    # `transform:` sits at 4-space indent in the shell; every child line of the transform
    # needs 4 more spaces of indent than it already has (2, matching the dedented input)
    # so it lands one level deeper than `transform:` itself, i.e. at 6-space indent total.
    reindented = value_lines[0] + "\n" + "\n".join(("    " + l) if l.strip() else l for l in value_lines[1:])
    return SHELL_TEMPLATE.format(transform_value=reindented)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("resolved_yaml", help="output of resolve_ndarray.py")
    ap.add_argument("key", help="key name one level under 'roman:' to extract, e.g. wcs_l2")
    ap.add_argument(
        "--bare-transform",
        action="store_true",
        help="the key's value is a bare !transform/... with no gwcs/wcs wrapper - synthesize a shell",
    )
    args = ap.parse_args()

    with open(args.resolved_yaml) as f:
        text = f.read()
    subtree = extract_key_subtree(text, args.key)
    body = as_wrapped_transform(args.key, subtree) if args.bare_transform else as_wcs_shell(args.key, subtree)
    sys.stdout.write(HEADER + body + "...\n")


if __name__ == "__main__":
    main()
