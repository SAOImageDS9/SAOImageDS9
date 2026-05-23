# Apply this sed script to text.tcl, as the first step in comparing with ntext.tcl

# Rename binding tag "Text"
s/bind[[:space:]]\+Text[[:space:]]/bind Ntext /g

# Rename some virtual events used in tk8.*/text.tcl (defined in tk8.*/tk.tcl)
s/<<LineEnd>>/<<NtextLineEnd>>/g
s/<<LineStart>>/<<NtextLineStart>>/g
s/<<NextChar>>/<<NtextNextChar>>/g
s/<<NextLine>>/<<NtextNextLine>>/g
s/<<NextPara>>/<<NtextNextPara>>/g
s/<<NextWord>>/<<NtextNextWord>>/g
s/<<PrevChar>>/<<NtextPrevChar>>/g
s/<<PrevLine>>/<<NtextPrevLine>>/g
s/<<PrevPara>>/<<NtextPrevPara>>/g
s/<<PrevWord>>/<<NtextPrevWord>>/g
s/<<SelectAll>>/<<NtextSelectAll>>/g
s/<<SelectLineEnd>>/<<NtextSelectLineEnd>>/g
s/<<SelectLineStart>>/<<NtextSelectLineStart>>/g
s/<<SelectNextChar>>/<<NtextSelectNextChar>>/g
s/<<SelectNextLine>>/<<NtextSelectNextLine>>/g
s/<<SelectNextPara>>/<<NtextSelectNextPara>>/g
s/<<SelectNextWord>>/<<NtextSelectNextWord>>/g
s/<<SelectNone>>/<<NtextSelectNone>>/g
s/<<SelectPrevChar>>/<<NtextSelectPrevChar>>/g
s/<<SelectPrevLine>>/<<NtextSelectPrevLine>>/g
s/<<SelectPrevPara>>/<<NtextSelectPrevPara>>/g
s/<<SelectPrevWord>>/<<NtextSelectPrevWord>>/g
# Do not rename:
# <<Clear>>
# <<Copy>>
# <<Cut>>
# <<Paste>>
# <<PasteSelection>>
# <<Redo>>
# <<Undo>>

# Procs ::tk::* defined in tk8.*/text.tcl
s/tk::TextAnchor/ntext::TextAnchor/g
s/tk::TextAutoScan/ntext::TextAutoScan/g
s/tk::TextButton1/ntext::TextButton1/g
s/tk::TextClosestGap/ntext::TextClosestGap/g
s/tk::TextCursorInSelection/ntext::TextCursorInSelection/g
s/tk::TextInsert/ntext::TextInsert/g
s/tk::TextKeyExtend/ntext::TextKeyExtend/g
s/tk::TextKeySelect/ntext::TextKeySelect/g
s/tk::TextNextPara/ntext::TextNextPara/g
s/tk::TextNextPos/ntext::TextNextPos/g
s/tk::TextNextWord/ntext::TextNextWord/g
s/tk::TextPasteSelection/ntext::TextPasteSelection/g
s/tk::TextPrevPara/ntext::TextPrevPara/g
s/tk::TextPrevPos/ntext::TextPrevPos/g
s/tk::TextResetAnchor/ntext::TextResetAnchor/g
s/tk::TextScanDrag/ntext::TextScanDrag/g
s/tk::TextScanMark/ntext::TextScanMark/g
s/tk::TextScrollPages/ntext::TextScrollPages/g
s/tk::TextSelectTo/ntext::TextSelectTo/g
s/tk::TextSetCursor/ntext::TextSetCursor/g
s/tk::TextTranspose/ntext::TextTranspose/g
s/tk::TextUpDownLine/ntext::TextUpDownLine/g

# Procs ::* defined in tk8.*/text.tcl
s/tk_textCopy/ntext::new_textCopy/g
s/tk_textCut/ntext::new_textCut/g
s/tk_textPaste/ntext::new_textPaste/g

# Procs ::* defined in tcl8.*/word.tcl
s/tcl_wordBreakAfter/ntext::new_wordBreakAfter/g
s/tcl_wordBreakBefore/ntext::new_wordBreakBefore/g
s/tcl_endOfWord/ntext::new_endOfWord/g
s/tcl_startOfNextWord/ntext::new_startOfNextWord/g
s/tcl_startOfPreviousWord/ntext::new_startOfPreviousWord/g
