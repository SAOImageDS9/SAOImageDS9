# tkmpeg
TK MPEG 1 encoder.
Tcl/Tk 8.5/8.6 TEA Compatable.
Based on ezMPEG.
http://sourceforge.net/projects/ezmpeg

Changes
-------

### 1.1 (2026-08-20)

This is a new fork, continuing maintenance of the project for SAOImageDS9
after the original upstream became inactive.

* Raised the maximum encodable frame size from 768x576 to 4080x4080, and
  cleared the constrained_parameter_flags bit in the sequence header to
  match (frames above the old limit are not valid "constrained
  parameters" streams). Clamped escape-coded AC levels to [-255, 255],
  the valid range for MPEG-1, to avoid emitting an invalid bitstream for
  large coefficient values with the larger frame sizes now allowed.
* Fixed width/height rounding up to a multiple of 16 to use integer
  ceiling division instead of a float-based calculation that always
  rounded up by a full 16 even when already a multiple of it.
* Fixed pixel extraction in `add` to use `Tk_PhotoImageBlock`'s `pitch`
  for the row stride instead of assuming it equals `width*pixelSize`,
  and to bounds-check against the block's own reported width/height.

Pulled forward from the copy of tkmpeg maintained in the SAOImageDS9
source tree.
