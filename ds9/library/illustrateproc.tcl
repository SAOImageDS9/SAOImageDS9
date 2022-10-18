#  Copyright (C) 1999-2022
#  Smithsonian Astrophysical Observatory, Cambridge, MA, USA
#  For conditions of distribution and use, see copyright notice in "copyright"

package provide DS9 1.0

proc IllustrateGetType {id} {
    global ds9
    
    set tags [$ds9(canvas) gettags $id]
    if {[lsearch $tags circle] != -1} {
	return circle
    } elseif {[lsearch $tags ellipse] != -1} {
	return ellipse
    } elseif {[lsearch $tags box] != -1} {
	return box
    } elseif {[lsearch $tags polygon] != -1} {
	return polygon
    } elseif {[lsearch $tags line] != -1} {
	return line
    } elseif {[lsearch $tags text] != -1} {
	return text
    } elseif {[lsearch $tags image] != -1} {
	return image
    } else {
	# should not be here
	return circle
    }
}

proc IllustrateDefault {id} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleDefault $id}
	ellipse {IllustrateEllipseDefault $id}
	box {IllustrateBoxDefault $id}
	polygon {IllustratePolygonDefault $id}
	line {IllustrateLineDefault $id}
	text {IllustrateTextDefault $id}
	image {IllustrateImageDefault $id}
    }
}

# use for undo/paste
proc IllustrateDup {type param} {
    switch $type {
	circle {return [IllustrateBaseDup $type $param]}
	ellipse {return [IllustrateBaseDup $type $param]}
	box {return [IllustrateBaseDup $type $param]}
	polygon {return [IllustratePolygonDup $param]}
	line {return [IllustrateLineDup $param]}
	text {return [IllustrateTextDup $param]}
	image {return [IllustrateImageDup $param]}
    }
}

# for undo
proc IllustrateSet {id param} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon {IllustrateBaseSet $id $param}
	line {IllustrateLineSet $id $param}
	text {IllustrateTextSet $id $param}
	image {IllustrateImageSet $id $param}
    }
}

# for undo/cut/copy
proc IllustrateCopy {id} {
    switch [IllustrateGetType $id] {
	circle {return [IllustrateBaseCopy $id]}
	ellipse {return [IllustrateBaseCopy $id]}
	box {return [IllustrateBaseCopy $id]}
	polygon {return [IllustrateBaseCopy $id]}
	line {return [IllustrateLineCopy $id]}
	text {return [IllustrateTextCopy $id]}
	image {return [IllustrateImageCopy $id]}
    }
}

proc IllustrateSaveSelection {id} {
    switch [IllustrateGetType $id] {
	circle {return [IllustrateBaseSaveSelection $id]}
	ellipse {return [IllustrateBaseSaveSelection $id]}
	box {return [IllustrateBaseSaveSelection $id]}
	polygon {return [IllustrateBaseSaveSelection $id]}
	line {return [IllustrateLineSaveSelection $id]}
	text {return [IllustrateTextSaveSelection $id]}
	image {return [IllustrateImageSaveSelection $id]}
    }
}

proc IllustrateList {id} {
    switch [IllustrateGetType $id] {
	circle {return [IllustrateCircleList $id]}
	ellipse {return [IllustrateEllipseList $id]}
	box {return [IllustrateBoxList $id]}
	polygon {return [IllustratePolygonList $id]}
	line {return [IllustrateLineList $id]}
	text {return [IllustrateTextList $id]}
	image {return [IllustrateImageList $id]}
    }
}

proc IllustrateAntsOn {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon {IllustrateBaseAntsOn $id}
	line {IllustrateLineAntsOn $id}
	text {IllustrateTextAntsOn $id}
	image {IllustrateImageAntsOn $id}
    }
}

proc IllustrateAntsOff {gr} {
    foreach {id color fill width dash} $gr {
	switch [IllustrateGetType $id] {
	    circle -
	    ellipse -
	    box -
	    polygon {IllustrateBaseAntsOff $gr}
	    line {IllustrateLineAntsOff $gr}
	    text {IllustrateTextAntsOff $gr}
	    image {IllustrateImageAntsOff $gr}
	}
    }
}

proc IllustrateEdit {id xx yy} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleEdit $id $xx $yy}
	ellipse {IllustrateEllipseEdit $id $xx $yy}
	box {IllustrateBoxEdit $id $xx $yy}
	polygon {IllustratePolygonEdit $id $xx $yy}
	line {IllustrateLineEdit $id $xx $yy}
	text {IllustrateTextEdit $id $xx $yy}
	image {IllustrateImageEdit $id $xx $yy}
    }
}

proc IllustrateDeleteCB {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon -
	line -
	text {IllustrateBaseDeleteCB $id}
	image {IllustrateImageDeleteCB $id}
    }
}

proc IllustrateEditCB {id} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleEditCB $id}
	ellipse {IllustrateEllipseEditCB $id}
	box {IllustrateBoxEditCB $id}
	polygon {IllustratePolygonEditCB $id}
	line {IllustrateLineEditCB $id}
	text {IllustrateTextEditCB $id}
	image {IllustrateImageEditCB $id}
    }
}

proc IllustrateRotate {id xx yy} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon -
	line {}
	text {IllustrateTextRotate $id $xx $yy}
	image {}
    }
}

proc IllustrateRotateCB {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon -
	line {}
	text {IllustrateTextRotateCB $id}
	image {}
    }
}

proc IllustrateUpdateHandle {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box {IllustrateBaseUpdateHandle $id}
	polygon {IllustratePolygonUpdateHandle $id}
	line {IllustrateLineUpdateHandle $id}
	text -
	image {IllustrateBaseUpdateHandle $id}
    }
}

proc IllustrateDialog {id} {
    switch [IllustrateGetType $id] {
	circle {IllustrateCircleDialog $id}
	ellipse {IllustrateEllipseDialog $id}
	box {IllustrateBoxDialog $id}
	polygon {IllustratePolygonDialog $id}
	line {IllustrateLineDialog $id}
	text {IllustrateTextDialog $id}
	image {IllustrateImageDialog $id}
    }
}

proc IllustrateDialogClose {id} {
    switch [IllustrateGetType $id] {
	circle -
	ellipse -
	box -
	polygon -
	line {IllustrateBaseDialogClose $id}
	text {IllustrateTextDialogClose $id}
	image {IllustrateBaseDialogClose $id}
    }
}
