#!/usr/bin/env python3
"""Rewrite every block-sourced `!core/ndarray-*` node in an ASDF file's YAML tree text
as an inline `data:` literal, using the file's real decoded block bytes.

This exists because AST's YamlChan (ast/src/yamlchan.c) can only read ndarrays that are
defined inline in the YAML tree ("data: [...]") - it explicitly rejects block-sourced
ndarrays ("source: N"). See ASDF_NATIVE_SUPPORT_DESIGN.md section 7b/8. Real Roman ASDF
files always use block-sourced ndarrays, even for tiny (e.g. 6x6) coefficient matrices, so
this resolution step is required before handing a real WCS subtree to AST - it is not an
edge case.

Usage: python3 resolve_ndarray.py <file.asdf> > resolved.yaml
Prints the file's full YAML tree text (everything before the first binary block) with all
`source:` ndarray references replaced by inline `data:` literals.
"""
import re
import struct
import sys

from parse_blocks import parse_block_index, read_block

DTYPE_FMT = {
    "float64": ("d", 8),
    "float32": ("f", 4),
    "int64": ("q", 8),
    "int32": ("i", 4),
    "uint64": ("Q", 8),
    "uint32": ("I", 4),
    "int16": ("h", 2),
    "uint16": ("H", 2),
    "int8": ("b", 1),
    "uint8": ("B", 1),
}


def _decode_values(raw: bytes, datatype: str, shape: tuple, byteorder: str):
    code, size = DTYPE_FMT[datatype]
    endian = "<" if byteorder == "little" else ">"
    n = 1
    for s in shape:
        n *= s
    return struct.unpack(f"{endian}{n}{code}", raw[: n * size])


def _nest(vals, shape, indent):
    """Format a flat tuple of values as a YAML-nested list matching `shape`."""
    if len(shape) <= 1:
        return "[" + ", ".join(repr(v) for v in vals) + "]"
    rows = shape[0]
    cols = 1
    for s in shape[1:]:
        cols *= s
    lines = []
    for r in range(rows):
        row_vals = vals[r * cols : (r + 1) * cols]
        if len(shape) == 2:
            lines.append(indent + "- [" + ", ".join(repr(v) for v in row_vals) + "]")
        else:
            lines.append(indent + "- " + _nest(row_vals, shape[1:], indent + "  "))
    return "\n" + "\n".join(lines)


# Matches a block-sourced ndarray node: the tag line, then (in some order within the
# same small mapping) `source:`, `datatype:`, `byteorder:`, ending at the `shape:` line.
# Real files always seem to emit these four keys in `source, datatype, byteorder, shape`
# order, which this pattern relies on for simplicity.
_NDARRAY_RE = re.compile(
    r"!core/ndarray-(?P<ver>[\d.]+)\n"
    r"(?P<indent>[ \t]+)source:\s*(?P<source>\d+)\s*\n"
    r"(?P<mid>(?:[ \t]+\w+:.*\n)*?)"
    r"(?P<indent2>[ \t]+)shape:\s*\[(?P<shape>[0-9, ]+)\]\s*\n",
    re.M,
)


def resolve(text: str, data: bytes, offsets) -> str:
    """Return `text` with every block-sourced ndarray node rewritten to use inline data."""

    def repl(m):
        source = int(m.group("source"))
        indent = m.group("indent")
        mid = m.group("mid")
        shape = tuple(int(x) for x in m.group("shape").split(","))
        dt_m = re.search(r"datatype:\s*(\w+)", mid)
        bo_m = re.search(r"byteorder:\s*(\w+)", mid)
        datatype = dt_m.group(1) if dt_m else "float64"
        byteorder = bo_m.group(1) if bo_m else "little"
        block = read_block(data, offsets[source])
        vals = _decode_values(block["raw"], datatype, shape, byteorder)
        data_repr = _nest(vals, shape, indent)
        return (
            f"!core/ndarray-{m.group('ver')}\n"
            f"{indent}data: {data_repr}\n"
            f"{mid}"
            f"{m.group('indent2')}shape: [{m.group('shape')}]\n"
        )

    return _NDARRAY_RE.sub(repl, text)


def resolve_file(fname: str) -> str:
    """Read `fname`, return its full YAML tree text with all ndarrays resolved inline."""
    with open(fname, "rb") as f:
        data = f.read()
    offsets = parse_block_index(data)
    idx = data.find(b"\xd3BLK")
    text = data[:idx].decode("utf-8") if idx > 0 else data.decode("utf-8")
    return resolve(text, data, offsets or [])


if __name__ == "__main__":
    fname = sys.argv[1]
    resolved = resolve_file(fname)
    n_remaining = len(re.findall(r"^\s*source:\s*\d+", resolved, re.M))
    print(f"{n_remaining} block-sourced ndarray(s) left unresolved", file=sys.stderr)
    sys.stdout.write(resolved)
