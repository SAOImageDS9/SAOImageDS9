# tkagif
TK Animated GIF encoder.
Tcl/Tk 8.5/8.6 TEA Compatable.
* tkagif ?create?add?close?
  * create *filename width height*
  * add *image*
  * close

Changes
-------

### 1.1 (2026-08-20)

This is a new fork, continuing maintenance of the project for SAOImageDS9
after the original upstream became inactive. Fixed pixel extraction in
`add` to use `Tk_PhotoImageBlock`'s `pitch` for the row stride instead of
assuming it equals `width*pixelSize`, which corrupted output for photo
images whose rows are padded; pulled forward from the copy of tkagif
maintained in the SAOImageDS9 source tree.
