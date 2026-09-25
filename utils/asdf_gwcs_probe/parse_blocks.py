#!/usr/bin/env python3
"""Parse the ASDF binary-block index and block headers/payloads of a .asdf file.

Layout per https://www.asdf-format.org/projects/asdf-standard/en/latest/file_layout.html:
each block starts with magic b'\\xd3BLK', a big-endian header (flags, compression codec,
allocated/used/decoded sizes, checksum), then the payload bytes. A trailing
"#ASDF BLOCK INDEX" section lists each block's starting byte offset.

Requires the `lz4` package (`pip install lz4`) for files using lz4-compressed blocks,
which real Roman WFI ASDF files do.
"""
import struct
import zlib
import re
import sys

try:
    import lz4.block
except ImportError:
    lz4 = None


def parse_block_index(data: bytes):
    """Return the list of block byte-offsets from the file's trailing block index, or None."""
    bi = data.find(b"#ASDF BLOCK INDEX")
    if bi < 0:
        return None
    tail = data[bi:].decode("utf-8")
    return [int(x) for x in re.findall(r"^\s*-\s*(\d+)\s*$", tail, re.M)]


def _lz4_decompress_chunks(payload: bytes, data_size: int) -> bytes:
    """Decode ASDF's lz4 block framing: repeated [4-byte BE chunk length][lz4.block chunk]."""
    if lz4 is None:
        raise ImportError("the 'lz4' package is required to decode lz4-compressed ASDF blocks (pip install lz4)")
    out = bytearray()
    pos = 0
    while pos < len(payload) and len(out) < data_size:
        chunk_len = struct.unpack(">I", payload[pos : pos + 4])[0]
        pos += 4
        chunk = payload[pos : pos + chunk_len]
        pos += chunk_len
        out += lz4.block.decompress(chunk)
    return bytes(out[:data_size])


def read_block(data: bytes, offset: int) -> dict:
    """Read and decompress the block starting at `offset`. Returns a dict with 'raw' bytes."""
    magic = data[offset : offset + 4]
    if magic != b"\xd3BLK":
        raise ValueError(f"no ASDF block magic at offset {offset}, got {magic!r}")
    header_size = struct.unpack(">H", data[offset + 4 : offset + 6])[0]
    hdr = data[offset + 6 : offset + 6 + header_size]
    flags = struct.unpack(">I", hdr[0:4])[0]
    compression = hdr[4:8]
    allocated_size, used_size, data_size = struct.unpack(">QQQ", hdr[8:32])
    checksum = hdr[32:48]
    payload_start = offset + 6 + header_size
    payload = data[payload_start : payload_start + used_size]

    comp = compression.rstrip(b"\x00")
    if comp == b"":
        raw = payload[:data_size]
    elif comp == b"zlib":
        raw = zlib.decompress(payload)
    elif comp == b"lz4":
        raw = _lz4_decompress_chunks(payload, data_size)
    else:
        raise ValueError(f"unsupported ASDF block compression codec: {comp!r}")

    if len(raw) != data_size:
        raise ValueError(f"decoded block size {len(raw)} != declared data_size {data_size}")

    return {
        "offset": offset,
        "flags": flags,
        "compression": comp,
        "allocated_size": allocated_size,
        "used_size": used_size,
        "data_size": data_size,
        "checksum": checksum,
        "raw": raw,
    }


def read_all_blocks(data: bytes):
    """Return [read_block(data, off) for off in the file's block index]."""
    offsets = parse_block_index(data)
    if offsets is None:
        # No index trailer - fall back to scanning sequentially from the first magic.
        offsets = []
        pos = data.find(b"\xd3BLK")
        while pos >= 0:
            offsets.append(pos)
            hdr_size = struct.unpack(">H", data[pos + 4 : pos + 6])[0]
            alloc = struct.unpack(">Q", data[pos + 6 + 8 + 4 : pos + 6 + 16 + 4])[0]
            pos = pos + 6 + hdr_size + alloc
            if data[pos : pos + 4] != b"\xd3BLK":
                break
    return [read_block(data, off) for off in offsets]


if __name__ == "__main__":
    fname = sys.argv[1]
    with open(fname, "rb") as f:
        data = f.read()
    blocks = read_all_blocks(data)
    print(f"file size {len(data)}, {len(blocks)} blocks")
    for i, b in enumerate(blocks):
        print(
            f"block {i}: offset={b['offset']} compression={b['compression']!r} "
            f"data_size={b['data_size']} allocated={b['allocated_size']}"
        )
