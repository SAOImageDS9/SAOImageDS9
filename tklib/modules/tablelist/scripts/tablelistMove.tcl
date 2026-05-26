#==============================================================================
# Contains the implementation of the tablelist move and movecolumn subcommands.
#
# Copyright (c) 2003-2023  Csaba Nemethi (E-mail: csaba.nemethi@t-online.de)
#==============================================================================

#------------------------------------------------------------------------------
# tablelist::moveRow
#
# Processes the 1st form of the tablelist move subcommand.
#------------------------------------------------------------------------------
proc tablelist::moveRow {win source target} {
    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || $data(itemCount) == 0} {
	return ""
    }

    #
    # Adjust the indices to fit within the existing items and check them
    #
    if {$source > $data(lastRow)} {
	set source $data(lastRow)
    } elseif {$source < 0} {
	set source 0
    }
    if {$target > $data(itemCount)} {
	set target $data(itemCount)
    } elseif {$target < 0} {
	set target 0
    }

    set sourceItem [lindex $data(itemList) $source]
    set sourceKey [lindex $sourceItem end]
    if {$target == [nodeRow $win $sourceKey end] || $target == $source} {
	return ""
    }

    set parentKey $data($sourceKey-parent)
    set parentEndRow [nodeRow $win $parentKey end]
    if {($target <= [keyToRow $win $parentKey] || $target > $parentEndRow)} {
	return -code error \
	       "cannot move item with index \"$source\" outside its parent"
    }

    if {$target == $parentEndRow} {
	set targetChildIdx end
    } else {
	set targetKey [lindex $data(keyList) $target]
	if {$data($targetKey-parent) ne $parentKey} {
	    return -code error \
		   "cannot move item with index \"$source\" outside its parent"
	}

	set targetChildIdx \
	    [lsearch -exact $data($parentKey-childList) $targetKey]
    }

    return [moveNode $win $source $parentKey $targetChildIdx]
}

#------------------------------------------------------------------------------
# tablelist::moveNode
#
# Processes the 2nd form of the tablelist move subcommand.
#------------------------------------------------------------------------------
proc tablelist::moveNode {win source targetParentKey targetChildIdx \
			 {withDescendants 1}} {
    upvar ::tablelist::ns${win}::data data
    if {$data(isDisabled) || $data(itemCount) == 0} {
	return ""
    }

    #
    # Adjust the indices to fit within the existing items and check them
    #
    if {$source > $data(lastRow)} {
	set source $data(lastRow)
    } elseif {$source < 0} {
	set source 0
    }
    set target [nodeRow $win $targetParentKey $targetChildIdx]
    if {$target < 0} {
	set target 0
    }

    set sourceItem [lindex $data(itemList) $source]
    set sourceKey [lindex $sourceItem end]
    set sourceParentKey $data($sourceKey-parent)
    if {$targetParentKey eq $sourceParentKey && $target == $source &&
	$withDescendants} {
	return ""
    }

    set sourceDescCount [descCount $win $sourceKey]
    if {$target > $source && $target <= $source + $sourceDescCount &&
	$withDescendants} {
	return -code error \
	       "cannot move item with index \"$source\"\
		before one of its descendants"
    }

    set w $data(body)
    if {$data(anchorRow) != $source} {
	$w mark set anchorRowMark [expr {$data(anchorRow) + 1}].0
    }
    if {$data(activeRow) != $source} {
	$w mark set activeRowMark [expr {$data(activeRow) + 1}].0
    }

    #
    # Save some data of the edit window if present
    #
    if {[set editCol $data(editCol)] >= 0} {
	set editRow $data(editRow)
	set editKey $data(editKey)
	saveEditData $win
    }

    #
    # Delete the source line
    #
    $w delete [expr {$source + 1}].0 [expr {$source + 2}].0

    #
    # Insert the source item before the target one
    #
    set target1 $target
    if {$source < $target} {
	incr target1 -1
    }
    set targetLine [expr {$target1 + 1}]
    $w insert $targetLine.0 "\n"
    set snipStr $data(-snipstring)
    set dispItem [lrange $sourceItem 0 $data(lastCol)]
    if {$data(hasFmtCmds)} {
	set dispItem [formatItem $win $sourceKey $source $dispItem]
    }
    if {[string match "*\t*" $dispItem]} {
	set dispItem [mapTabs $dispItem]
    }
    set col 0
    foreach text $dispItem colTags $data(colTagsList) \
	    {pixels alignment} $data(colList) {
	#
	# Build the list of tags to be applied to the cell
	#
	set cellFont [getCellFont $win $sourceKey $col]
	set cellTags $colTags
	if {[info exists data($sourceKey,$col-font)]} {
	    lappend cellTags cell-font-$data($sourceKey,$col-font)
	}

	#
	# Append the text and the labels or window (if
	# any) to the target line of the body text widget
	#
	appendComplexElem $win $sourceKey $source $col $text $pixels \
			  $alignment $snipStr $cellFont $cellTags $targetLine

	incr col
    }
    if {[info exists data($sourceKey-font)]} {
	$w tag add row-font-$data($sourceKey-font) $targetLine.0 $targetLine.end
    }
    variable pu
    if {[info exists data($sourceKey-elide)]} {
	$w tag add elidedRow $targetLine.0 $targetLine.end+1$pu
    }
    if {[info exists data($sourceKey-hide)]} {
	$w tag add hiddenRow $targetLine.0 $targetLine.end+1$pu
    }

    set treeCol $data(treeCol)
    set treeStyle $data(-treestyle)
    set indentImg [doCellCget $source $treeCol $win -indent]

    #
    # Update the item list and the key -> row mapping
    #
    set data(itemList) [lreplace $data(itemList) $source $source]
    set data(keyList) [lreplace $data(keyList) $source $source]
    if {$target == $data(itemCount)} {
	lappend data(itemList) $sourceItem	;# this works much faster
	lappend data(keyList) $sourceKey	;# this works much faster
    } else {
	set data(itemList) [linsert $data(itemList) $target1 $sourceItem]
	set data(keyList) [linsert $data(keyList) $target1 $sourceKey]
    }
    if {$source < $target} {
	for {set row $source} {$row < $targetLine} {incr row} {
	    set key [lindex $data(keyList) $row]
	    set data($key-row) $row
	}
    } else {
	for {set row $target} {$row <= $source} {incr row} {
	    set key [lindex $data(keyList) $row]
	    set data($key-row) $row
	}
    }

    #
    # Elide the moved item if the target parent is collapsed or non-viewable
    #
    set depth [depth $win $targetParentKey]
    if {([info exists data($targetParentKey,$treeCol-indent)] && \
	 [string match "*collapsed*" \
	  $data($targetParentKey,$treeCol-indent)]) ||
	[info exists data($targetParentKey-elide)] ||
	[info exists data($targetParentKey-hide)]} {
	doRowConfig $target1 $win -elide 1
    }

    if {$withDescendants} {
	#
	# Update the tree information
	#
	set targetBuddyCount [llength $data($targetParentKey-childList)]
	set sourceChildIdx \
	    [lsearch -exact $data($sourceParentKey-childList) $sourceKey]
	set data($sourceParentKey-childList) \
	    [lreplace $data($sourceParentKey-childList) \
	     $sourceChildIdx $sourceChildIdx]
	if {[string first $targetChildIdx "end"] == 0} {
	    set targetChildIdx $targetBuddyCount
	}
	if {$targetChildIdx >= $targetBuddyCount} {
	    lappend data($targetParentKey-childList) $sourceKey
	} else {
	    if {$sourceParentKey eq $targetParentKey &&
		$sourceChildIdx < $targetChildIdx} {
		incr targetChildIdx -1
	    }
	    set data($targetParentKey-childList) \
		[linsert $data($targetParentKey-childList) \
		 $targetChildIdx $sourceKey]
	}
	set data($sourceKey-parent) $targetParentKey

	#
	# If the list of children of the source's parent has become empty
	# then set the parent's indentation image to the indented one
	#
	if {[llength $data($sourceParentKey-childList)] == 0 &&
	    [info exists data($sourceParentKey,$treeCol-indent)]} {
	    collapseSubCmd $win [list $sourceParentKey -partly]
	    set data($sourceParentKey,$treeCol-indent) [string map \
		{"collapsed" "indented" "expanded" "indented"
		 "Act" "" "Sel" ""} $data($sourceParentKey,$treeCol-indent)]
	    if {[winfo exists $w.ind_$sourceParentKey,$treeCol]} {
		set idx [string last "g" \
			 $data($sourceParentKey,$treeCol-indent)]
		set img [string range $data($sourceParentKey,$treeCol-indent) \
			 0 $idx]
		$w.ind_$sourceParentKey,$treeCol configure -image $img
	    }
	}

	#
	# Mark the target parent item as expanded if it was just indented
	#
	if {[info exists data($targetParentKey,$treeCol-indent)] &&
	    $data($targetParentKey,$treeCol-indent) eq
	    "tablelist_${treeStyle}_indentedImg$depth"} {
	    set data($targetParentKey,$treeCol-indent) \
		tablelist_${treeStyle}_expandedImg$depth
	    if {[winfo exists $data(body).ind_$targetParentKey,$treeCol]} {
		set idx [string last "g" \
			 $data($targetParentKey,$treeCol-indent)]
		set img [string range $data($targetParentKey,$treeCol-indent) \
			 0 $idx]
		$data(body).ind_$targetParentKey,$treeCol configure -image $img
	    }
	}

	#
	# Update the indentation of the moved item
	#
	if {[regexp {^(.+Img)([0-9]+)$} $indentImg dummy base sourceDepth]} {
	    incr depth
	    variable maxIndentDepths
	    if {$depth > $maxIndentDepths($treeStyle)} {
		setTreeLabelWidths $treeStyle $depth
		set maxIndentDepths($treeStyle) $depth
	    }
	    doCellConfig $target1 $treeCol $win -indent $base$depth
	}
    }

    #
    # Update the list variable if present
    #
    if {$data(hasListVar) &&
	[uplevel #0 [list info exists $data(-listvariable)]]} {
	upvar #0 $data(-listvariable) var
	trace remove variable var {write unset} $data(listVarTraceCmd)
	set var [lreplace $var $source $source]
	set pureSourceItem [lrange $sourceItem 0 $data(lastCol)]
	if {$target == $data(itemCount)} {
	    lappend var $pureSourceItem		;# this works much faster
	} else {
	    set var [linsert $var $target1 $pureSourceItem]
	}
	trace add variable var {write unset} $data(listVarTraceCmd)
    }

    #
    # Update anchorRow and activeRow
    #
    if {$data(anchorRow) == $source} {
	set data(anchorRow) $target1
	adjustRowIndex $win data(anchorRow) 1
    } else {
	set anchorTextIdx [$w index anchorRowMark]
	set data(anchorRow) [expr {int($anchorTextIdx) - 1}]
    }
    if {$data(activeRow) == $source} {
	set activeRow $target1
	adjustRowIndex $win activeRow 1
	set data(activeRow) $activeRow
    } else {
	set activeTextIdx [$w index activeRowMark]
	set data(activeRow) [expr {int($activeTextIdx) - 1}]
    }

    #
    # Invalidate the list of row indices indicating the viewable rows
    #
    set data(viewableRowList) {-1}

    #
    # Restore the edit window if it was present before
    #
    if {$editCol >= 0} {
	if {$editRow == $source} {
	    doEditCell $win $target1 $editCol 1
	} else {
	    set data(editRow) [keyToRow $win $editKey]
	}
    }

    if {$withDescendants} {
	#
	# Save the source node's list of children and temporarily empty it
	#
	set sourceChildList $data($sourceKey-childList)
	set data($sourceKey-childList) {}

	#
	# Move the source item's descendants
	#
	if {$source < $target} {
	    set lastDescRow [expr {$source + $sourceDescCount - 1}]
	    set increment -1
	} else {
	    set lastDescRow [expr {$source + $sourceDescCount}]
	    set increment 0
	}
	for {set n 0; set descRow $lastDescRow} {$n < $sourceDescCount} \
	    {incr n; incr descRow $increment} {
	    set indentImg [doCellCget $descRow $treeCol $win -indent]
	    if {[regexp {^(.+Img)([0-9]+)$} $indentImg dummy base descDepth]} {
		incr descDepth [expr {$depth - $sourceDepth}]
		if {$descDepth > $maxIndentDepths($treeStyle)} {
		    for {set d $descDepth} {$d > $maxIndentDepths($treeStyle)} \
			{incr d -1} {
			setTreeLabelWidths $treeStyle $d
		    }
		    set maxIndentDepths($treeStyle) $descDepth
		}
		set descKey [lindex $data(keyList) $descRow]
		set data($descKey,$treeCol-indent) $base$descDepth
	    }

	    moveNode $win $descRow $sourceKey end 0
	}

	#
	# Restore the source node's list of children
	#
	set data($sourceKey-childList) $sourceChildList

	#
	# Adjust the columns, restore the stripes in the body text widget,
	# redisplay the line numbers (if any), and update the view
	#
	adjustColumns $win $treeCol 1
	adjustElidedText $win
	redisplayVisibleItems $win
	makeStripes $win
	showLineNumbersWhenIdle $win
	adjustSepsWhenIdle $win
	updateVScrlbarWhenIdle $win
    }

    #
    # (Un)hide the newline character that ends the
    # last line if the line itself is (not) hidden
    #
    foreach tag {elidedRow hiddenRow} {
	if {[lsearch -exact [$w tag names end-1l] $tag] >= 0} {
	    $w tag add $tag end-1$pu
	} else {
	    $w tag remove $tag end-1$pu
	}
    }

    return ""
}

#------------------------------------------------------------------------------
# tablelist::moveCol
#
# Processes the tablelist movecolumn subcommand.
#------------------------------------------------------------------------------
proc tablelist::moveCol {win source target} {
    upvar ::tablelist::ns${win}::data data \
	  ::tablelist::ns${win}::attribs attribs \
	  ::tablelist::ns${win}::selStates selStates
    if {$data(isDisabled)} {
	return ""
    }

    #
    # Check the indices
    #
    if {$target == $source || $target == $source + 1} {
	return ""
    }

    #
    # Update the column list
    #
    set source3 [expr {3*$source}]
    set source3Plus2 [expr {$source3 + 2}]
    set target1 $target
    if {$source < $target} {
	incr target1 -1
    }
    set target3 [expr {3*$target1}]
    set sourceRange [lrange $data(-columns) $source3 $source3Plus2]
    set data(-columns) [lreplace $data(-columns) $source3 $source3Plus2]
    set data(-columns) [eval linsert {$data(-columns)} $target3 $sourceRange]

    #
    # Save some elements of data, attribs, and selStates corresponding to source
    #
    array set tmpData [array get data $source-*]
    array set tmpData [array get data hk*,$source-*]
    array set tmpData [array get data k*,$source-*]
    foreach specialCol {activeCol anchorCol editCol -treecolumn treeCol} {
	set tmpData($specialCol) $data($specialCol)
    }
    array set tmpAttribs [array get attribs $source-*]
    array set tmpAttribs [array get attribs hk*,$source-*]
    array set tmpAttribs [array get attribs k*,$source-*]
    array set tmpSelStates [array get selStates k*,$source]

    #
    # Remove source from the list of stretchable columns
    # if it was explicitly specified as stretchable
    #
    if {$data(-stretch) ne "all"} {
	set sourceIsStretchable 0
	set stretchableCols {}
	foreach elem $data(-stretch) {
	    if {[string first $elem "end"] != 0 && $elem == $source} {
		set sourceIsStretchable 1
	    } else {
		lappend stretchableCols $elem
	    }
	}
	set data(-stretch) $stretchableCols
    }

    #
    # Build two lists of column numbers, needed
    # for shifting some elements of the data array
    #
    if {$source < $target} {
	for {set n $source} {$n < $target1} {incr n} {
	    lappend oldCols [expr {$n + 1}]
	    lappend newCols $n
	}
    } else {
	for {set n $source} {$n > $target} {incr n -1} {
	    lappend oldCols [expr {$n - 1}]
	    lappend newCols $n
	}
    }

    #
    # Remove the trace from the array element data(activeCol) because otherwise
    # the procedure moveColData won't work if the selection type is cell
    #
    trace remove variable data(activeCol) write \
	[list tablelist::activeTrace $win]

    #
    # Move the elements of data, attribs, and selStates corresponding
    # to the columns in oldCols to the elements corresponding
    # to the columns with the same indices in newCols
    #
    foreach oldCol $oldCols newCol $newCols {
	moveColData data data imgs $oldCol $newCol
	moveColAttribs attribs attribs $oldCol $newCol
	moveColSelStates selStates selStates $oldCol $newCol
    }

    #
    # Move the elements of data, attribs, and selStates corresponding
    # to source to the elements corresponding to target1
    #
    moveColData tmpData data imgs $source $target1
    moveColAttribs tmpAttribs attribs $source $target1
    moveColSelStates tmpSelStates selStates $source $target1

    #
    # If the column given by source was explicitly specified as
    # stretchable then add target1 to the list of stretchable columns
    #
    if {$data(-stretch) ne "all" && $sourceIsStretchable} {
	lappend data(-stretch) $target1
	sortStretchableColList $win
    }

    #
    # Update the item list in the header text widget
    #
    set hdr_newItemList {}
    foreach item $data(hdr_itemList) {
	set sourceText [lindex $item $source]
	set item [lreplace $item $source $source]
	set item [linsert $item $target1 $sourceText]
	lappend hdr_newItemList $item
    }
    set data(hdr_itemList) $hdr_newItemList

    #
    # Update the item list in the body text widget
    #
    set newItemList {}
    foreach item $data(itemList) {
	set sourceText [lindex $item $source]
	set item [lreplace $item $source $source]
	set item [linsert $item $target1 $sourceText]
	lappend newItemList $item
    }
    set data(itemList) $newItemList

    #
    # Update the list variable if present
    #
    condUpdateListVar $win

    #
    # Set up and adjust the columns, and rebuild
    # the lists of the column fonts and tag names
    #
    setupColumns $win $data(-columns) 0
    makeColFontAndTagLists $win
    makeSortAndArrowColLists $win
    adjustColumns $win {} 0

    #
    # Redisplay the items
    #
    redisplay $win
    hdr_updateColorsWhenIdle $win
    updateColorsWhenIdle $win

    #
    # Reconfigure the relevant column labels
    #
    foreach col [lappend newCols $target1] {
	reconfigColLabels $win imgs $col
    }

    #
    # Restore the trace set on the array element data(activeCol)
    # and enforce the execution of the activeTrace command
    #
    trace add variable data(activeCol) write [list tablelist::activeTrace $win]
    set data(activeCol) $data(activeCol)

    return ""
}
