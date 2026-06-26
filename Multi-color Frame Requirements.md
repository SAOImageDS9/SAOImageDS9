
DS9 currently supports RGB (Red, Green, Blue) frames.  An image is loaded for each color.  It performs all  the necessary alignments based on the coordinate systems chosen.  A color map that goes from black to {color} is applied to each image; where {color} is the color channel being processed. The final display image is then composed by taking the Red color from the Red channel, the Green color from the Green channel, and the Blue color from the Blue channel.  This works because the data in each of the R, G, and B channels are essentially independent of each other.

I want to extend this capability to an arbitrary number of colors using `layers` with a `multicolor` frame.

This should be a new Frame type similar to RGB, HSV, and HLS frames. Create code in a separate file in the tksao/frame directory.  It will be called a "Multi-Color Frame" and will use `-multicolor` for the command line (and xpa/samp) option to create it.  

The user will create a `layer` with a given color and then load an image into that layer. DS9 will apply a color map that goes from black to the color. 

    To do this it will convert the RGB color to HLS (Hue Lightness Saturation) color space; keeping Hue and Saturation constant, it will linearly interpolate the Lightness value from 0 to the value of the input color, and then convert those HLS values back to RGB colorspace. This should use the same number of colors as the RGB frame uses. 

NaN and other IEEE special values should be treated the same was as they are treated in the current RGB frame. 

The user will then create another `layer` with a given color (usually different) and then load an image into that layer. The same color mapping will occur. Each `layer` will have its own scaling, limits, smoothing, and other properties just a RGB frame. DS9 will align the layer based on the coordinates as the RGB frame does. 

To create the image that is then actually displayed, ds9 will need to `blend` those two color layers together.  There is already some support for this in the `mask` functionality within ds9. The current `blend` options are `Source`, `Screen` (the default), `Darken`, and `Lighten`.  We might want to add more common options (eg options from `css` `blend-mode`).   The first layer is implicitly using `screen`. 

The user can then create a 3rd `layer` with a different color and image. Same color mapping/alignment/etc. It will also need to apply a color `blend` to the result from the first two layers.  Each `layer` should have its own `blend` mode option (except the 1st). 

An arbitrary number of layers can be added.

Users will need to be able to re-order a `layer` (up, down, top, bottom).  Users will need to be able to delete a `layer`. 

Users will need to be able to `show` and `hide` layers.

Each `layer` will have a `transparency` value from 0 to 100, where 0 is fully opaque and 100 is fully transparent. This will be used when blending colors.

The last layer created is the "current" layer.  Operations such as changing color and blend mode do not change the state of which layer is current. Users can set which layer is current using the GUI and/or the `layerno` command

The `layer` color can be changed, as can the `blend` mode.

`layer` controls will need to be accessible via the command line, xpa, and SAMP, as well as through the GUI. 


`-layer`
    : Create a new layer in the current `multicolor` frame

`-layer [n] color {color}`
    : Set the color for the current layer. If the optional `[n]` is supplied, then set the color for the Nth layer.
    
`-layer [n] delete`
    : Delete the current layer. If the optional `[n]` is supplied, then delete the Nth layer.
    
`-layer [n] blend {blend}`
    : Set the blend mode for the current layer.  If the optional `[n]` is supplied, then set the blend mode for the  N-th layer. 

`-layer [n] up`
    : Move the current (or Nth if the optional `[n]` is supplied) layer up in the stack (e.g. moving layer 3 'up' moves it to position 2.)
`-layer [n] down`
    : Similar to `up` but moves `down` (e.g. moving 2 `down` puts it in the 3rd layer position.)
    
`-layer [n] top`
    : Similar to `up` but moves to the first position (eg moving 3 `top` puts it in the 1st layer position)
    
`-layer [n] bottom`
    : similar to `top` but moves to the last position (eg moving 1 `bottom` moves it to the last position.)

`-layer [n] hide`
    : Omit the current (or Nth) layer from the display

`-layer [n] show`
    : Show the current (or Nth) layer.

`-layer layerno <integer>`
    : Sets the `<integer>` layer number as current.

`-layer [n] transparency <integer>`
    : Sets the transparency of the current (or Nth) layer. 

`layer` numbers count starting from `1`.


Example:

`ds9 -multicolor -layer foo.fits -layer color yellow -layer goo.fits -layer color purple -layer blend screen`


Saving as a FITS image will save each layer as a separated FITS HDU.

Exporting will save the flat, blended result.

Backup will need to be updated to serialize the `multicolor` frame with all it's layers and parameters, and Restore will need to be updated to load these files.

For the GUI, there should be a new widget that resembles the current RGB widget.  It should have ds9 style color selector menu instead of the hard-coded Red, Green, Blue names. Each layer (row) should have a drop-down menu for the `blend` option, as well as a slider for the `transparency`.  Each row should have a "<" that lets the user move the layer up in the stack, ">" to let the user move the layer down in the stack and "-" to let the user delete the layer. 


## Clarification Questions

1. Layer command syntax

   In the example, `-layer foo.fits` appears to create/load a layer, but the command list says `-layer` creates a new layer and other forms configure it. Should `-layer <filename>` both create a layer and load the image, matching RGB-style behavior?

ANSWER:

	This is two separate commands in DS9.  The `layer` command just creates the new layer and then returns to the main parser. The main parser then picks up the file name as a separate command and loads the image.  This is equivalent to the existing RGB frames where the command line looks like `ds9 -rgb -red filename1 -green filename2` 


2. Default layer values

   What should a newly created layer default to for `color`, `blend`, `transparency`, `visible`, scaling/limits/smoothing defaults? For color, should there be a cycling palette, or default every new layer to something fixed?

ANSWER:
	color: red, blend: screen, transparency: 0, visible: 1 (true). The other scaling/limits/smoothing values already have defaults when the image is loaded. Let's keep it simple and just use fixed defaults.


3. First layer blend behavior

   The doc says the first layer is implicitly using `screen`, but blend mostly matters when combining with an existing result. Should the first layer's blend mode be hidden/ignored, or stored anyway for consistency after reordering?

ANSWER:
	Since layers can be reordered let's keep the UI consistent and keep the blend mode visible for the 1st layer.


4. Layer order semantics

   "Up" moves layer 3 to position 2, and "top" moves to position 1. So position 1 is visually/topologically the first blended layer, not necessarily the frontmost layer. Is that correct?

ANSWER:
	Correct.  


5. Current layer after reorder/delete

   After moving a layer, should the same layer object remain current at its new index? After deleting the current layer, should current become the next layer, previous layer, or no layer?
   
ANSWER: 
   Moving: Yes, the current layer should remain current at it's new index.
   Delete: The current layer should be the next layer.  If the last layer was deleted, then the previous layer is current.
   
   

6. Empty multicolor frame

   Should `-multicolor` create a frame with zero layers, or with one default empty layer?

ANSWER:
	Let's create one default empty layer.



7. Allowed colors

   Should layer colors accept the same DS9 color syntax everywhere else does: named colors, hex, RGB triples, etc.? Should arbitrary Tcl/Tk color names work?

ANSWER: 
	It should accept the DS9 color syntax everywhere.


8. Blend modes

   For first pass, should we implement only existing modes: `source`, `screen`, `darken`, `lighten`? Or do you want additional CSS-style modes included now?

ANSWER:
	Let's implement those four for now but design to allow more to be added in the future.


9. Transparency math

   Is transparency meant to map directly to alpha during blending, where `0 = alpha 1.0` and `100 = alpha 0.0`? And should it apply before or during the selected blend operation?

ANSWER:
	Look to the current `mask` code and implement the same logic.


10. NaN/special value behavior

    Should multicolor literally reuse RGB frame pixel/color generation paths where possible, or is matching visible behavior sufficient?

ANSWER:
	Matching visible behavior is sufficient. 


11. Persistence scope

    For backup/restore, should all per-layer image state be restored exactly like RGB channels, including WCS alignment, scale settings, color, blend, transparency, visibility, and order?
    
ANSWER:
	Yes

12. FITS save format

    When saving as FITS with one HDU per layer, should layer metadata like color/blend/transparency/visibility be written as FITS header keywords? If yes, do you have preferred keyword names?

ANSWER:
	No, no additional keywords.

13. GUI widget location

    Should the multicolor layer widget replace the RGB widget only for multicolor frames, or live as a new dialog/panel alongside existing frame controls?

ANSWER:
	Replace the RGB widget for multicolor frame. 


14. XPA/SAMP command namespace

    Should `layer` be a top-level command only when the current frame is multicolor, or should it exist globally and error for non-multicolor frames?

ANSWER:
	I am not 100% clear on the difference/implications. Take for example the `-red` command that is only applicable for RGB frames. When you have non-RGB frames issuing the `-red` command behaves like a no-op. Let's try to emulate that behavior.


15. Compatibility with existing RGB

    Is the goal to share as much machinery as possible with RGB/HLS/HSV frames, or keep multicolor separate even if that duplicates some behavior?

ANSWER:
	I'm hoping to share some same machinery (aligning on WCS, etc), but if it requires significant refactoring of existing code to expose the common elements, then duplication is OK (as long as clearly documented).
