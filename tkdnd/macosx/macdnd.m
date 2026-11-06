/*
 * macdnd.m --
 *
 *        This module implements drag and drop for Mac OS X.
 *
 * Copyright (c) 2009-2010 Kevin Walzer/WordTech Communications LLC.
 * Copyright (c) 2009-2010 Daniel A. Steffen <das@users.sourceforge.net>
 * Copyright (c) 2009-2010 Georgios P. Petasis <petasis@iit.demokritos.gr>
 *
 * See the file "license.terms" for information on usage and redistribution of
 * this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 *
 */

/* OS X compiler cannot handle redefinition of panic. Thus disable
 * deprecated functions. We do not use them anyway. */
#define TCL_NO_DEPRECATED

#import <tcl.h>
#import <tk.h>
#import <tkInt.h>
#import <tkMacOSXInt.h>
#import <Cocoa/Cocoa.h>
#import <Availability.h>

/* 
   Check, if Tcl version supports Tcl_Size,
   which was introduced in Tcl 8.7 and 9.

   Initial updates for Tcl 8.7 and 8.9 contributed by Paul Obermeier.
*/
#ifndef TCL_SIZE_MAX
  #ifdef HAVE_LIMITS_H
    #include <limits.h>
  #else
    #ifndef INT_MAX
      #define INT_MAX  32767
    #endif
    #ifndef LONG_MAX
      #define LONG_MAX 0x7FFFFFFFL
    #endif
  #endif
  #define TCL_SIZE_MAX INT_MAX

  #ifndef Tcl_Size
    typedef int Tcl_Size;
  #endif

  #define TCL_SIZE_MODIFIER ""
  #define Tcl_GetSizeIntFromObj Tcl_GetIntFromObj
  #define Tcl_NewSizeIntObj     Tcl_NewIntObj
#endif

#pragma clang diagnostic ignored "-Warc-bridge-casts-disallowed-in-nonarc"
#if 0
// not using clang LLVM compiler, or LLVM version is not 3.x
#if !defined(__clang__) || __clang_major__ < 3

#ifndef __bridge
#define __bridge
#endif
#ifndef __bridge_retained
#define __bridge_retained
#endif
#ifndef __bridge_transfer
#define __bridge_transfer
#endif
#ifndef __autoreleasing
#define __autoreleasing
#endif
#ifndef __strong
#define __strong
#endif
#ifndef __weak
#define __weak
#endif
#ifndef __unsafe_unretained
#define __unsafe_unretained
#endif

#endif

#endif // __clang_major__ < 3

#define TKDND_OSX_KEVIN_WORKAROUND

#define TkDND_Tag    1234

#define TkDND_TkWin(x)                                                  \
  (Tk_NameToWindow(interp, Tcl_GetString(x), Tk_MainWindow(interp)))

#define TkDND_Eval(objc)                                                \
  for (i=0; i<objc; ++i) Tcl_IncrRefCount(objv[i]);                     \
  if (Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL) != TCL_OK)      \
    Tcl_BackgroundError(interp);                                        \
  for (i=0; i<objc; ++i) Tcl_DecrRefCount(objv[i]);

#define TkDND_Status_Eval(objc)                                         \
  for (i=0; i<objc; ++i) Tcl_IncrRefCount(objv[i]);                     \
  status = Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL);           \
  if (status != TCL_OK) Tcl_BackgroundError(interp);                    \
  for (i=0; i<objc; ++i) Tcl_DecrRefCount(objv[i]);

#ifndef Tk_Interp
/*
 * Tk 8.5 has a new function to return the interpreter that is associated with a
 * window. Under 8.4 and earlier versions, simulate this function.
 */
#import "tkInt.h"
Tcl_Interp * TkDND_Interp(Tk_Window tkwin) {
  if (tkwin != NULL && ((TkWindow *)tkwin)->mainPtr != NULL) {
    return ((TkWindow *)tkwin)->mainPtr->interp;
  }
  return NULL;
}; /* Tk_Interp */
#define Tk_Interp TkDND_Interp
#endif /* Tk_Interp */

#ifndef CONST
#   define CONST const
#endif

/*
 * After macOS 10.7 (and again after 10.12 & 10.13) some used functions were
 * deprecated:
 *
 * NSDragPboard -> NSPasteboardNameDrag (10.13)
 * convertScreenToBase -> convertRectFromScreen (10.7)
 * NSLeftMouseDragged -> NSEventTypeLeftMouseDragged (10.12)
 * NSLeftMouseDownMask -> NSEventMaskLeftMouseDown (10.12)
 */
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_13
#define TKDND_NSPASTEBOARDNAMEDRAG NSPasteboardNameDrag
#else
#define TKDND_NSPASTEBOARDNAMEDRAG NSDragPboard
#endif

#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_12
#define TKDND_NSLEFTMOUSEDRAGGED  NSEventTypeLeftMouseDragged
#define TKDND_NSLEFTMOUSEDOWNMASK NSEventMaskLeftMouseDown
#else
#define TKDND_NSLEFTMOUSEDRAGGED  NSLeftMouseDragged
#define TKDND_NSLEFTMOUSEDOWNMASK NSLeftMouseDownMask
#endif

#if defined(__has_feature) && __has_feature(objc_arc)
  #define TKDND_ARC
#endif

#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_7
  #define TKDND_LION_OR_LATER
#endif

/*
 * After macOS 10.13 (High Sierra), new pasteboard types have beed defined,
 * and the old ones have been deprecated (will be available up to macOS 10.14 (Mojave)).
 */
#if MAC_OS_X_VERSION_MIN_REQUIRED >= MAC_OS_X_VERSION_10_13
  #define TKDND_HIGH_SIERRA_OR_LATER
#else
  #define TKDND_SIERRA_OR_EARLIER
#endif


#define TKDND_DRAGSESSION_END_WAIT_VAR "::tkdnd::macdnd::drag_source_action"

/*
 * Here we need to wrap Cocoa methods in Cocoa class: methods for initiating,
 * tracking, and terminating drag from inside and outside the application.
 */

@interface DNDView : NSView <NSDraggingSource> {
//  NSDragOperation sourceDragMask;
//  NSPasteboard   *sourcePasteBoard;
//  NSMutableArray *draggedtypes;
  NSInteger       tag;
  Tcl_Interp     *wait_var_interp;
}

#ifdef TKDND_LION_OR_LATER
- (NSDragOperation) draggingSession:(NSDraggingSession *)session sourceOperationMaskForDraggingContext:(NSDraggingContext)context;
- (void)            draggingSession:(NSDraggingSession *)session willBeginAtPoint:(NSPoint)screenPoint;
- (void)            draggingSession:(NSDraggingSession *)session movedToPoint:(NSPoint)screenPoint;
- (void)            draggingSession:(NSDraggingSession *)session endedAtPoint:(NSPoint)screenPoint operation:(NSDragOperation)operation;
#endif /* TKDND_LION_OR_LATER */

- (NSDragOperation)draggingEntered:(id <NSDraggingInfo>)sender;
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)sender;
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;
- (NSDragOperation)draggingUpdated:(id < NSDraggingInfo >)sender;
- (int)draggingSourceOperationMaskForLocal:(BOOL)isLocal;
- (void)setTag:(NSInteger) t;
- (NSInteger)tag;
- (void)setInterp:(Tcl_Interp *) i;
Tk_Window TkMacOSXGetTkWindow(NSWindow *w);
DNDView*  TkDND_GetDNDSubview(NSView *view, Tk_Window tkwin);
@end

@implementation DNDView

#ifdef TKDND_LION_OR_LATER
- (NSDragOperation)draggingSession:(NSDraggingSession *)session sourceOperationMaskForDraggingContext:(NSDraggingContext)context {
  // printf("sourceOperationMaskForDraggingContext\n");
  return NSDragOperationEvery;
} /* sourceOperationMaskForDraggingContext */

- (void)draggingSession:(NSDraggingSession *)session willBeginAtPoint:(NSPoint)screenPoint {
  // printf("willBeginAtPoint: (%f, %f)\n", screenPoint.x, screenPoint.y); fflush(0);
}; /* willBeginAtPoint */

- (void)draggingSession:(NSDraggingSession *)session movedToPoint:(NSPoint)screenPoint {
      [[self superview] display];
  // printf("movedToPoint: (%f, %f)\n", screenPoint.x, screenPoint.y); fflush(0);
}; /* movedToPoint */

- (void)draggingSession:(NSDraggingSession *)session endedAtPoint:(NSPoint)screenPoint operation:(NSDragOperation)operation {
  static char *action = NULL;
  // printf("endedAtPoint: (%f, %f), operation: %ld\n", screenPoint.x, screenPoint.y, operation); fflush(0);
  if (!wait_var_interp) return;
  switch (operation) {
    case NSDragOperationNone:    action = "refuse_drop"; break;
    case NSDragOperationCopy:    action = "copy";        break;
    case NSDragOperationMove:    action = "move";        break;
    case NSDragOperationLink:    action = "link";        break;
    case NSDragOperationGeneric: action = "ask";         break;
    case NSDragOperationPrivate: action = "private";     break;
    case NSDragOperationDelete:  action = "move";        break;
    default:                     action = "refuse_drop"; break;
  }
  Tcl_SetVar2(wait_var_interp, TKDND_DRAGSESSION_END_WAIT_VAR, NULL,
     action, TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
}; /* endedAtPoint */
#endif /* TKDND_LION_OR_LATER */

- (void)setTag:(NSInteger) t {
  tag = t;
}; /* setTag */

- (NSInteger)tag {
  return tag;
}; /* tag */

- (void)setInterp:(Tcl_Interp *) i {
  wait_var_interp = i;
}; /* setInterp */

/*
 * Ripped from Tk-Cocoa source code to map Tk window to Cocoa window
 */
Tk_Window TkMacOSXGetTkWindow(NSWindow *w) {
  Window window = TkMacOSXGetXWindow((__bridge void*)w);
  TkDisplay *dispPtr = TkGetDisplayList();

  return (window != None ? Tk_IdToWindow(dispPtr->display, window) : NULL);
}; /* TkMacOSXGetTkWindow */

/*
 * TkDND_GetDNDSubview: returns the subview of type DNDView.
 * If such a view does not exist in the provided view, a new one is
 * added, and returned.
 */
DNDView* TkDND_GetDNDSubview(NSView *view, Tk_Window tkwin) {
  NSRect frame;
  DNDView* dnd_view = [view viewWithTag:TkDND_Tag];
#ifdef TKDND_OSX_KEVIN_WORKAROUND
  Rect bnds;
#endif /* TKDND_OSX_KEVIN_WORKAROUND */

  if (dnd_view == nil) {
    dnd_view = [[DNDView alloc] init];
    [dnd_view setTag:TkDND_Tag];
    // [dnd_view mouseDown:NULL];
    if ([dnd_view superview] != view) {
      [view addSubview:dnd_view positioned:NSWindowBelow relativeTo:nil];
    }
    [view setAutoresizesSubviews:true];
    /*
     * Bug fix by Kevin Walzer: On 23 Dec 2010, Kevin reported that he has
     * found cases where the code below is needed, in order for DnD to work
     * correctly under Snow Leopard 10.6. So, I am restoring it...
     */
#ifdef TKDND_OSX_KEVIN_WORKAROUND
    /* Hack to make sure subview is set to take up entire geometry of window. */
    TkMacOSXWinBounds((TkWindow*)tkwin, &bnds);
    frame = NSMakeRect(bnds.left, bnds.top, 100000, 100000);
    frame.origin.y = 0;
    if (!NSEqualRects(frame, [dnd_view frame])) {
      [dnd_view setFrame:frame];
    }
#endif /* TKDND_OSX_KEVIN_WORKAROUND */
  }

#ifndef TKDND_OSX_KEVIN_WORKAROUND
  if (dnd_view == nil) return dnd_view;

  /* Ensure that we have the correct geometry... */
  frame = [view frame];
  if (!NSEqualRects(frame, [dnd_view frame])) {
    [dnd_view setFrame:frame];
  }

  NSRect bounds = [view bounds];
  if (!NSEqualRects(bounds, [dnd_view bounds])) {
    [dnd_view setBounds:bounds];
  }
#endif /* TKDND_OSX_KEVIN_WORKAROUND */
  return dnd_view;
}; /* TkDND_GetDNDSubview */

/* Set flags for local DND operations, i.e. dragging within a single
   application window.*/
- (int)draggingSourceOperationMaskForLocal:(BOOL)isLocal {
  if (isLocal) return NSDragOperationCopy;
  return NSDragOperationCopy|NSDragOperationMove|NSDragOperationLink;
}

/*
 * Convert from strings to OS X type NSString objects...
 */
const NSString *TKDND_Obj2NSString(Tcl_Interp *interp, Tcl_Obj *obj) {
  int index, status;
  NSString *str = NULL;
  static char *OSXTypes[] = {
    /* macOS 10.13 and later */
#ifdef TKDND_HIGH_SIERRA_OR_LATER
    "NSPasteboardTypeURL",
    "NSPasteboardTypeFileURL",
#endif
    /* OS X v10.6 and later */
    "NSPasteboardTypeColor",
    "NSPasteboardTypeFont",
    "NSPasteboardTypeHTML",
    "NSPasteboardTypeMultipleTextSelection",
    "NSPasteboardTypePDF",
    "NSPasteboardTypePNG",
    "NSPasteboardTypeRTF",
    "NSPasteboardTypeRTFD",
    "NSPasteboardTypeRuler",
    "NSPasteboardTypeSound",
    "NSPasteboardTypeString",
    "NSPasteboardTypeTabularText",
    "NSPasteboardTypeTextFinderOptions",
    "NSPasteboardTypeTIFF",
#ifdef TKDND_SIERRA_OR_EARLIER
    "NSPasteboardTypeFindPanelSearchOptions",
#endif
    /* OS X v10.5 and earlier */
    "NSFindPanelSearchOptionsPboardType",
    "NSFileContentsPboardType",
#ifdef TKDND_SIERRA_OR_EARLIER
    "NSColorPboardType",
    "NSFilenamesPboardType",
    "NSFontPboardType",
    "NSHTMLPboardType",
    "NSMultipleTextSelectionPboardType",
    "NSPDFPboardType",
    "NSPICTPboardType",
    "NSRTFDPboardType",
    "NSRTFPboardType",
    "NSRulerPboardType",
    "NSStringPboardType",
    "NSTIFFPboardType",
    "NSTabularTextPboardType",
    "NSURLPboardType",
    "NSFilesPromisePboardType",
    "NSInkTextPboardType",
    "NSPostScriptPboardType",
    "NSVCardPboardType",
    "NSGetFileType",
    "NSCreateFileContentsPboardType",
    "NSCreateFilenamePboardType",
    "NSGetFileTypes",
#endif
    (char *) NULL
  };
  enum osxtypes {
    /* macOS 10.13 and later */
#ifdef TKDND_HIGH_SIERRA_OR_LATER
    TYPE_NSPasteboardTypeURL,
    TYPE_NSPasteboardTypeFileURL,
#endif
    /* OS X v10.6 and later */
    TYPE_NSPasteboardTypeColor,
    TYPE_NSPasteboardTypeFont,
    TYPE_NSPasteboardTypeHTML,
    TYPE_NSPasteboardTypeMultipleTextSelection,
    TYPE_NSPasteboardTypePDF,
    TYPE_NSPasteboardTypePNG,
    TYPE_NSPasteboardTypeRTF,
    TYPE_NSPasteboardTypeRTFD,
    TYPE_NSPasteboardTypeRuler,
    TYPE_NSPasteboardTypeSound,
    TYPE_NSPasteboardTypeString,
    TYPE_NSPasteboardTypeTabularText,
    TYPE_NSPasteboardTypeTextFinderOptions,
    TYPE_NSPasteboardTypeTIFF,
#ifdef TKDND_SIERRA_OR_EARLIER
    TYPE_NSPasteboardTypeFindPanelSearchOptions,
#endif
    /* OS X v10.5 and earlier */
    TYPE_NSFindPanelSearchOptionsPboardType,
    TYPE_NSFileContentsPboardType,
#ifdef TKDND_SIERRA_OR_EARLIER
    TYPE_NSColorPboardType,
    TYPE_NSFilenamesPboardType,
    TYPE_NSFontPboardType,
    TYPE_NSHTMLPboardType,
    TYPE_NSMultipleTextSelectionPboardType,
    TYPE_NSPDFPboardType,
    TYPE_NSPICTPboardType,
    TYPE_NSRTFDPboardType,
    TYPE_NSRTFPboardType,
    TYPE_NSRulerPboardType,
    TYPE_NSStringPboardType,
    TYPE_NSTIFFPboardType,
    TYPE_NSTabularTextPboardType,
    TYPE_NSURLPboardType,
    TYPE_NSFilesPromisePboardType,
    TYPE_NSInkTextPboardType,
    TYPE_NSPostScriptPboardType,
    TYPE_NSVCardPboardType,
    TYPE_NSGetFileType,
    TYPE_NSCreateFileContentsPboardType,
    TYPE_NSCreateFilenamePboardType,
    TYPE_NSGetFileTypes,
#endif
  };
  status = Tcl_GetIndexFromObj(interp, obj, (const char **) OSXTypes,
                                 "osxtypes", 0, &index);
  if (status != TCL_OK) return NULL;
  switch ((enum osxtypes) index) {
#ifdef TKDND_HIGH_SIERRA_OR_LATER
    case TYPE_NSPasteboardTypeURL:                    {str = NSPasteboardTypeURL                   ; break;}
    case TYPE_NSPasteboardTypeFileURL:                {str = NSPasteboardTypeFileURL               ; break;}
#endif
    case TYPE_NSPasteboardTypeColor:                  {str = NSPasteboardTypeColor                 ; break;}
    case TYPE_NSPasteboardTypeFont:                   {str = NSPasteboardTypeFont                  ; break;}
    case TYPE_NSPasteboardTypeHTML:                   {str = NSPasteboardTypeHTML                  ; break;}
    case TYPE_NSPasteboardTypeMultipleTextSelection:  {str = NSPasteboardTypeMultipleTextSelection ; break;}
    case TYPE_NSPasteboardTypePDF:                    {str = NSPasteboardTypePDF                   ; break;}
    case TYPE_NSPasteboardTypePNG:                    {str = NSPasteboardTypePNG                   ; break;}
    case TYPE_NSPasteboardTypeRTF:                    {str = NSPasteboardTypeRTF                   ; break;}
    case TYPE_NSPasteboardTypeRTFD:                   {str = NSPasteboardTypeRTFD                  ; break;}
    case TYPE_NSPasteboardTypeRuler:                  {str = NSPasteboardTypeRuler                 ; break;}
    case TYPE_NSPasteboardTypeSound:                  {str = NSPasteboardTypeSound                 ; break;}
    case TYPE_NSPasteboardTypeString:                 {str = NSPasteboardTypeString                ; break;}
    case TYPE_NSPasteboardTypeTabularText:            {str = NSPasteboardTypeTabularText           ; break;}
    case TYPE_NSPasteboardTypeTextFinderOptions:      {str = NSPasteboardTypeTextFinderOptions     ; break;}
    case TYPE_NSPasteboardTypeTIFF:                   {str = NSPasteboardTypeTIFF                  ; break;}
#ifdef TKDND_SIERRA_OR_EARLIER
    case TYPE_NSPasteboardTypeFindPanelSearchOptions: {str = NSPasteboardTypeFindPanelSearchOptions; break;}
#endif
    case TYPE_NSFindPanelSearchOptionsPboardType:     {str = NSFindPanelSearchOptionsPboardType    ; break;}
    case TYPE_NSFileContentsPboardType:               {str = NSFileContentsPboardType              ; break;}
#ifdef TKDND_SIERRA_OR_EARLIER
    case TYPE_NSColorPboardType:                      {str = NSColorPboardType                     ; break;}
    case TYPE_NSFilenamesPboardType:                  {str = NSFilenamesPboardType                 ; break;}
    case TYPE_NSFontPboardType:                       {str = NSFontPboardType                      ; break;}
    case TYPE_NSHTMLPboardType:                       {str = NSHTMLPboardType                      ; break;}
    case TYPE_NSMultipleTextSelectionPboardType:      {str = NSMultipleTextSelectionPboardType     ; break;}
    case TYPE_NSPDFPboardType:                        {str = NSPDFPboardType                       ; break;}
    case TYPE_NSPICTPboardType:                       {str = TYPE_NSPICTPboardType                 ; break;}
    case TYPE_NSRTFDPboardType:                       {str = NSRTFDPboardType                      ; break;}
    case TYPE_NSRTFPboardType:                        {str = NSRTFPboardType                       ; break;}
    case TYPE_NSRulerPboardType:                      {str = NSRulerPboardType                     ; break;}
    case TYPE_NSStringPboardType:                     {str = NSStringPboardType                    ; break;}
    case TYPE_NSTIFFPboardType:                       {str = NSTIFFPboardType                      ; break;}
    case TYPE_NSTabularTextPboardType:                {str = NSTabularTextPboardType               ; break;}
    case TYPE_NSURLPboardType:                        {str = NSURLPboardType                       ; break;}
    case TYPE_NSFilesPromisePboardType:               {str = NSFilesPromisePboardType              ; break;}
    case TYPE_NSInkTextPboardType:                    {str = NSInkTextPboardType                   ; break;}
    case TYPE_NSPostScriptPboardType:                 {str = NSPostScriptPboardType                ; break;}
    case TYPE_NSVCardPboardType:                      {str = NSVCardPboardType                     ; break;}
    case TYPE_NSGetFileType:                          {str = NSGetFileType                         ; break;}
    case TYPE_NSCreateFileContentsPboardType:         {str = NSCreateFileContentsPboardType        ; break;}
    case TYPE_NSCreateFilenamePboardType:             {str = NSCreateFilenamePboardType            ; break;}
    case TYPE_NSGetFileTypes:                         {str = NSGetFileTypes                        ; break;}
#endif
  }
  return str;
}; /* TKDND_Obj2NSString */

/*******************************************************************************
 *******************************************************************************
 ***** Drop Target Operations                                              *****
 *******************************************************************************
 *******************************************************************************/

/*
 * Standard Cocoa method for entering drop target;
 * Calls ::tkdnd::macdnd::HandleEnter
 */
- (NSDragOperation)draggingEntered:(id <NSDraggingInfo>)sender {
  static char *DropActions[] = {
    "copy", "move", "link", "ask",  "private", "refuse_drop", "default",
    (char *) NULL
  };
  enum dropactions {
    ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
    refuse_drop, ActionDefault
  };

  Tk_Window     tkwin            = TkMacOSXGetTkWindow([self window]);
  Tcl_Interp   *interp           = Tk_Interp(tkwin);
  NSPasteboard *sourcePasteBoard = [sender draggingPasteboard];

  Tcl_Obj* objv[4], *element, *result;
  int i, index, status;

  objv[0] = Tcl_NewStringObj("::tkdnd::macdnd::HandleEnter", -1);
  objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
  objv[2] = Tcl_NewLongObj(0);
  objv[3] = Tcl_NewListObj(0, NULL);
  /*
   * Search for known types...
   */
  if ([[sourcePasteBoard types] containsObject:NSPasteboardTypeString]) {
    element = Tcl_NewStringObj("NSPasteboardTypeString", -1);
    Tcl_ListObjAppendElement(NULL, objv[3], element);
  }
  if ([[sourcePasteBoard types] containsObject:NSPasteboardTypeHTML]) {
    element = Tcl_NewStringObj("NSPasteboardTypeHTML", -1);
    Tcl_ListObjAppendElement(NULL, objv[3], element);
  }
#ifdef TKDND_HIGH_SIERRA_OR_LATER
  if ([[sourcePasteBoard types] containsObject:NSPasteboardTypeFileURL]) {
    element = Tcl_NewStringObj("NSPasteboardTypeFileURL", -1);
    Tcl_ListObjAppendElement(NULL, objv[3], element);
  }
#else
  if ([[sourcePasteBoard types] containsObject:NSFilenamesPboardType]) {
    element = Tcl_NewStringObj("NSFilenamesPboardType", -1);
    Tcl_ListObjAppendElement(NULL, objv[3], element);
  }
#endif
  /* Evaluate the command and get the result...*/
  TkDND_Status_Eval(4);
  // printf("Status=%d (%d)\n", status, TCL_OK);fflush(0);
  if (status != TCL_OK) {
    /* An error has happened. Cancel the drop! */
    return NSDragOperationNone;
  }
  /* We have a result: the returned action... */
  result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
  status = Tcl_GetIndexFromObj(interp, result, (const char **) DropActions,
                               "dropactions", 0, &index);
  Tcl_DecrRefCount(result);
  if (status != TCL_OK) index = refuse_drop;
  switch ((enum dropactions) index) {
    case ActionDefault:
    case ActionCopy:
      return NSDragOperationCopy;
    case ActionMove:
      return NSDragOperationMove;
    case ActionAsk:
      return NSDragOperationGeneric;
    case ActionPrivate:
      return NSDragOperationPrivate;
    case ActionLink:
      return NSDragOperationLink;
    case refuse_drop: {
      return NSDragOperationNone; /* Refuse drop. */
    }
  }
  return NSDragOperationNone;
}; /* draggingEntered */

- (NSDragOperation)draggingUpdated:(id < NSDraggingInfo >)sender {
  static char *DropActions[] = {
    "copy", "move", "link", "ask",  "private", "refuse_drop", "default",
    (char *) NULL
  };
  enum dropactions {
    ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
    refuse_drop, ActionDefault
  };
  Tk_Window mouse_tkwin;
  NSPoint mouseLoc;

  Tk_Window     tkwin            = TkMacOSXGetTkWindow([self window]);
  Tcl_Interp   *interp           = Tk_Interp(tkwin);
  /* Get the coordinates of the cursor... */
  mouseLoc = [NSEvent mouseLocation];

  Tcl_Obj* objv[4], *result;
  int i, index, status;

  /*
   * Map the coordinates to the target window: must subtract mouseLocation
   * from screen height because Cocoa orients to bottom of screen, Tk to
   * top...
   */
  float rootX = mouseLoc.x;
  float rootY = mouseLoc.y;
  float screenheight = [[[NSScreen screens] objectAtIndex:0] frame].size.height;

  /* Convert Cocoa screen cordinates to Tk coordinates... */
  float tk_Y  = screenheight - rootY;
  mouse_tkwin = Tk_CoordsToWindow(rootX, tk_Y, tkwin);
  if (mouse_tkwin == NULL) return NSDragOperationNone;

  objv[0] = Tcl_NewStringObj("::tkdnd::macdnd::HandlePosition", -1);
  objv[1] = Tcl_NewStringObj(Tk_PathName(mouse_tkwin), -1);
  objv[2] = Tcl_NewIntObj(rootX);
  objv[3] = Tcl_NewIntObj(tk_Y);

  /* Evaluate the command and get the result...*/
  TkDND_Status_Eval(4);

  //  printf("Status=%d (%d)\n", status, TCL_OK);fflush(0);
  if (status != TCL_OK) {
    /* An error has happened. Cancel the drop! */
    return NSDragOperationNone;
  }
  /* We have a result: the returned action... */
  result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
  status = Tcl_GetIndexFromObj(interp, result, (const char **) DropActions,
                               "dropactions", 0, &index);
  Tcl_DecrRefCount(result);
  if (status != TCL_OK) index = refuse_drop;
  switch ((enum dropactions) index) {
    case ActionDefault:
    case ActionCopy:
      return NSDragOperationCopy;
    case ActionMove:
      return NSDragOperationMove;
    case ActionAsk:
      return NSDragOperationGeneric;
    case ActionPrivate:
      return NSDragOperationPrivate;
    case ActionLink:
      return NSDragOperationLink;
    case refuse_drop: {
      return NSDragOperationNone; /* Refuse drop. */
    }
  }
  return NSDragOperationNone;
}; /* draggingUpdated */

//prepare to perform drag operation
- (BOOL)prepareForDragOperation:(id <NSDraggingInfo>)sender {
  // sourcePasteBoard = [sender draggingPasteboard];
  return YES;
}; /* prepareForDragOperation */

/*
 * Standard Cocoa method for handling drop operation
 * Calls ::tkdnd::macdnd::HandleDrop
 */
- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender {
  static char *DropActions[] = {
    "copy", "move", "link", "ask",  "private", "refuse_drop", "default", "",
    (char *) NULL
  };
  enum dropactions {
    ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
    refuse_drop, ActionDefault, NoReturnedAction
  };
  Tk_Window     tkwin            = TkMacOSXGetTkWindow([self window]);
  Tcl_Interp   *interp           = Tk_Interp(tkwin);
  NSPasteboard *sourcePasteBoard = [sender draggingPasteboard];
  Tcl_Obj *data      = NULL;
  Tcl_Obj* objv[3], **elem, *result;
  int i, index, status;
  Tcl_Size elem_nu;
  const NSString *type;

  /* Retrieve the common types, as preferred by the drag source... */
  objv[0] = Tcl_NewStringObj("::tkdnd::macdnd::GetDragSourceCommonTypes", -1);
  /* Evaluate the command and get the result...*/
  TkDND_Status_Eval(1);
  //  printf("Status=%d (%d)\n", status, TCL_OK);fflush(0);
  if (status != TCL_OK) {
    /* An error has happened. Cancel the drop! */
    return NO;
  }
  result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
  status = Tcl_ListObjGetElements(interp, result, &elem_nu, &elem);
  if (status != TCL_OK) {
    Tcl_DecrRefCount(result);
    return NO;
  }

#if 0
  /* Print what exists in the clipboard... */
  i = 0;
  for (NSPasteboardItem *item in [sourcePasteBoard pasteboardItems]) {
    for (NSString *type in [item types]) {
      printf("item %d: type: %s\n", i++, [type UTF8String]);
    }
  }
  /* Print what we can accept... */
  for (int j = 0; j < elem_nu; ++j) {
    printf("accept: %s\n", Tcl_GetString(elem[j]));
  }
#endif

  /* Retrieve data from clipboard, checking all items... */
  for (int j = 0; j < elem_nu; ++j) {
    type = TKDND_Obj2NSString(interp, elem[j]);
    if ([type isEqualToString:NSPasteboardTypeString]) {
      /* String type... */
      for (NSPasteboardItem *item in [sourcePasteBoard pasteboardItems]) {
        NSString *pasteboardvalue = [item stringForType:NSPasteboardTypeString];
        if (pasteboardvalue) {
          data = Tcl_NewStringObj([pasteboardvalue UTF8String], -1);
          break;
        }
      }
    } else if ([type isEqualToString:
#ifdef TKDND_HIGH_SIERRA_OR_LATER
                    NSPasteboardTypeFileURL
#else
                    NSFilenamesPboardType
#endif
               ]) {
      /* Filenames array... */
#ifdef TKDND_LION_OR_LATER
      Tcl_Obj *element;
      data = Tcl_NewListObj(0, NULL);
      NSArray *classes = [NSArray arrayWithObject:[NSURL class]];
      NSDictionary *options = [NSDictionary dictionaryWithObject:
        [NSNumber numberWithBool:YES] forKey:NSPasteboardURLReadingFileURLsOnlyKey];
      NSArray *fileURLs = [sourcePasteBoard readObjectsForClasses:classes options:options];
      if (fileURLs != nil) {
        for (NSURL *fileURL in fileURLs) {
          element = Tcl_NewStringObj([[fileURL path] UTF8String], -1);
          if (element == NULL) continue;
          Tcl_ListObjAppendElement(interp, data, element);
        }
      }
#else /* TKDND_LION_OR_LATER */
      NSArray *files = [sourcePasteBoard propertyListForType:NSFilenamesPboardType];
      if (files) {
        Tcl_Obj *element;
        data = Tcl_NewListObj(0, NULL);
        for (NSString *filename in files) {
          element = Tcl_NewStringObj([filename UTF8String], -1);
          if (element == NULL) continue;
          Tcl_ListObjAppendElement(interp, data, element);
        }
      }
#endif /* TKDND_LION_OR_LATER */
    } else if ([type isEqualToString:NSPasteboardTypeHTML]) {
      /* HTML ... */
      for (NSPasteboardItem *item in [sourcePasteBoard pasteboardItems]) {
        NSString *pasteboardvalue = [item stringForType:NSPasteboardTypeHTML];
        if (pasteboardvalue) {
          data = Tcl_NewStringObj([pasteboardvalue UTF8String], -1);
          break;
        }
      }
    }

    if (data != NULL) break;
  }
  Tcl_DecrRefCount(result);
  if (data == NULL) data = Tcl_NewStringObj(NULL, 0);

  objv[0] = Tcl_NewStringObj("::tkdnd::macdnd::HandleDrop", -1);
  objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
  objv[2] = data;

  /* Evaluate the command and get the result...*/
  TkDND_Status_Eval(3);
  //  printf("Status=%d (%d)\n", status, TCL_OK);fflush(0);
  if (status != TCL_OK) {
    /* An error has happened. Cancel the drop! */
    return NO;
  }
  /* We have a result: the returned action... */
  result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
  status = Tcl_GetIndexFromObj(interp, result, (const char **) DropActions,
                               "dropactions", 0, &index);
  Tcl_DecrRefCount(result);
  if (status != TCL_OK) index = NoReturnedAction;
  switch ((enum dropactions) index) {
    case NoReturnedAction:
    case ActionDefault:
    case ActionCopy:
    case ActionMove:
    case ActionAsk:
    case ActionPrivate:
    case ActionLink:
      return YES;
    case refuse_drop: {
      return NO; /* Refuse drop. */
    }
  }
  return YES;
}; /* performDragOperation */

/*
 * Standard Cocoa method for handling drop operation
 * Calls ::tkdnd::macdnd::HandleXdndDrop
 */
- (void)draggingExited:(id < NSDraggingInfo >)sender {
  Tk_Window tkwin    = TkMacOSXGetTkWindow([self window]);
  Tcl_Interp *interp = Tk_Interp(tkwin);

  Tcl_Obj* objv[4];
  int i;

  objv[0] = Tcl_NewStringObj("::tkdnd::macdnd::HandleLeave", -1);
  objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
  objv[2] = Tcl_NewLongObj(0);
  objv[3] = Tcl_NewListObj(0, NULL);

  /* Evaluate the command and get the result...*/
  TkDND_Eval(4);
}; /* draggingExited */

@end

/*
 * End Cocoa class methods: now we begin Tcl functions calling the class methods
 */

/******************************************************************************
 ******************************************************************************
 ***** Drag Source Operations                                             *****
 ******************************************************************************
 ******************************************************************************/

#ifdef TKDND_LION_OR_LATER
static char *
TkDND_WaitVariableProc(
    ClientData clientData,        /* Pointer to integer to set to 1. */
    Tcl_Interp *interp,                /* Interpreter containing variable. */
    const char *name1,                /* Name of variable. */
    const char *name2,                /* Second part of variable name. */
    int flags)                        /* Information about what happened. */
{
    int *donePtr = clientData;

    *donePtr = 1;
    return NULL;
} /* WaitVariableProc */
#endif /* TKDND_LION_OR_LATER */

/*
 * Implements drag source in Tk windows
 */
int TkDND_DoDragDropObjCmd(ClientData clientData, Tcl_Interp *interp,
                           int objc, Tcl_Obj *CONST objv[]) {
  Tcl_Obj         **elem, **data_elem, **files_elem;
  int               actions = 0;
  int               status, i, j, index;
  Tcl_Size          elem_nu, data_elem_nu, files_elem_nu;
  Tk_Window         path;
  Drawable          d;
  NSView           *view;
  DNDView          *dragview;
  static char *DropTypes[] = {
    "NSPasteboardTypeString", "NSPasteboardTypeHTML", "NSFilenamesPboardType", "NSPasteboardTypeFileURL",
    (char *) NULL
  };
  enum droptypes {
    TYPE_NSPasteboardTypeString, TYPE_NSPasteboardTypeHTML, TYPE_NSFilenamesPboardType, TYPE_NSPasteboardTypeFileURL
  };
  static char *DropActions[] = {
    "copy", "move", "link", "ask",  "private", "refuse_drop",
    "default",
    (char *) NULL
  };
  enum dropactions {
    ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
    refuse_drop, ActionDefault
  };
  bool added_string = false, added_filenames = false, added_html = false,
       perform_drag = false;

  if (objc != 6) {
    Tcl_WrongNumArgs(interp, 1, objv, "path actions types data button");
    return TCL_ERROR;
  }
  Tcl_ResetResult(interp);

  /* Process drag actions. */
  status = Tcl_ListObjGetElements(interp, objv[2], &elem_nu, &elem);
  if (status != TCL_OK) return status;
  for (i = 0; i < elem_nu; i++) {
    status = Tcl_GetIndexFromObj(interp, elem[i], (const char **)DropActions,
                                 "dropactions", 0, &index);
    if (status != TCL_OK) return status;
    switch ((enum dropactions) index) {
      case ActionCopy:    actions |= NSDragOperationCopy;    break;
      case ActionMove:    actions |= NSDragOperationMove;    break;
      case ActionLink:    actions |= NSDragOperationLink;    break;
      case ActionAsk:     actions |= NSDragOperationGeneric; break;
      case ActionPrivate: actions |= NSDragOperationPrivate; break;
      case ActionDefault: /* not supported */;               break;
      case refuse_drop:   /* not supported */;               break;
    }
  }

  /* Get the object that holds this Tk Window... */
  path = Tk_NameToWindow(interp, Tcl_GetString(objv[1]), Tk_MainWindow(interp));
  if (path == NULL) return TCL_ERROR;
  d = Tk_WindowId(path);
  if (d == None) return TCL_ERROR;
  /* Get the NSView from Tk window and add subview to serve as drag source */
  view     = (__bridge NSView *) TkMacOSXGetRootControl(d);
  if (view == NULL) return TCL_ERROR;
  /* Get the DNDview for this view... */
  dragview = TkDND_GetDNDSubview(view, path);
  if (dragview == NULL) return TCL_ERROR;
  [dragview setInterp:NULL];

  /* Process drag types. */
  status = Tcl_ListObjGetElements(interp, objv[3], &elem_nu, &elem);
  if (status != TCL_OK) return status;
  /* objv[4] contains a list, one element for each data drag type... */
  status = Tcl_ListObjGetElements(interp, objv[4], &data_elem_nu, &data_elem);
  if (status != TCL_OK) return status;
  if (elem_nu != data_elem_nu) {
    /* This can never happen... */
    return TCL_ERROR;
  }

  /* Initialize array of drag types... */
  // NSMutableArray *draggedtypes;
#ifdef TKDND_ARC
  // draggedtypes=[[NSMutableArray alloc] init];
#else
  // draggedtypes=[[[NSMutableArray alloc] init] autorelease];
#endif
  /* Iterate over all data, to collect the types... */
  for (i = 0; i < elem_nu; i++) {
    status = Tcl_GetIndexFromObj(interp, elem[i], (const char **) DropTypes,
                                 "droptypes", 0, &index);
    if (status != TCL_OK) continue;
    switch ((enum droptypes) index) {
      case TYPE_NSPasteboardTypeHTML: {
        if (!added_html) {
          // [draggedtypes addObject: NSPasteboardTypeString];
          added_html   = true;
          perform_drag = true;
        }
        break;
      }
      case TYPE_NSPasteboardTypeString: {
        if (!added_string) {
          // [draggedtypes addObject: NSPasteboardTypeString];
          added_string = true;
          perform_drag = true;
        }
        break;
      }
      case TYPE_NSFilenamesPboardType:
      case TYPE_NSPasteboardTypeFileURL: {
        if (!added_filenames) {
          // [draggedtypes addObject: NSFilenamesPboardType, NSPasteboardTypeFileURL];
          added_filenames = true;
          perform_drag    = true;
        }
        /* Ensure paths are absolute. Else, OS will not allow us to
         * wite them to the pasteboard! */
        status = Tcl_ListObjGetElements(interp, data_elem[i],
                                        &files_elem_nu, &files_elem);
        if (status != TCL_OK) return TCL_ERROR;
        for (j = 0; j < files_elem_nu; j++) {
          if (*Tcl_GetString(files_elem[j]) != '/') {
            Tcl_SetResult(interp, "path is not absolute: \"", TCL_STATIC);
            Tcl_AppendResult(interp, Tcl_GetString(files_elem[j]), "\"", (char *) NULL);
            return TCL_ERROR;
          }
        }
        break;
      }
    }
  }

  if (!perform_drag) {
    /* No need to start a drag, the clipboard will be empty... */
    Tcl_SetResult(interp, "refuse_drop", TCL_STATIC);
    return TCL_OK;
  }

#ifdef TKDND_LION_OR_LATER
  /* In macOS 10.7 several of the functions we are using were deprecated.
   * Thus, we need to adapt to what is available... */
  NSMutableArray *dataitems;
#ifdef TKDND_ARC
  dataitems    = [[NSMutableArray alloc] init];
#else
  dataitems    = [[[NSMutableArray alloc] init] autorelease];
#endif

  /* Get the mouse coordinates, so as the icon can slide back at the correct
   * location, if the drag is cancelled. */
  NSPoint global         = [NSEvent mouseLocation];
  NSRect  imageRect      = [[dragview window] convertRectFromScreen:NSMakeRect(global.x, global.y, 0, 0)];
  NSPoint imageLocation  = imageRect.origin;
  CGFloat iconS = 32, iconP = 2;

  for (i = 0; i < elem_nu; i++) {
    status = Tcl_GetIndexFromObj(interp, elem[i], (const char **) DropTypes,
                                 "droptypes", 0, &index);
    if (status == TCL_OK) {
      switch ((enum droptypes) index) {
        case TYPE_NSPasteboardTypeString:
        case TYPE_NSPasteboardTypeHTML: {
          NSImage *image = nil;
#ifdef TKDND_ARC
          NSString *datastring =
             [NSString stringWithUTF8String:Tcl_GetString(data_elem[i])];
          NSPasteboardItem *pboardItem =  [[NSPasteboardItem alloc] init];
#else /* TKDND_ARC */
          NSString *datastring =
             [[NSString stringWithUTF8String:Tcl_GetString(data_elem[i])] autorelease];
          NSPasteboardItem *pboardItem = [[[NSPasteboardItem alloc] init] autorelease];
#endif /* TKDND_ARC */
          NSSize  icon_size = [datastring sizeWithAttributes:nil];
          switch ((enum droptypes) index) {
            case TYPE_NSPasteboardTypeString: {
              [pboardItem setString:datastring forType:NSPasteboardTypeString]; break;
              //[pboardItem setPropertyList:datastring forType:NSPasteboardTypeString]; break;
            }
            case TYPE_NSPasteboardTypeHTML: {
              [pboardItem setString:datastring forType:NSPasteboardTypeHTML]; break;
              //[pboardItem setPropertyList:datastring forType:NSPasteboardTypeHTML]; break;
            }
            default: break;
          }
          /* Create a custom icon: draw dragged string into drag icon,
           * make sure icon is large enough to contain several lines of text */
          if (icon_size.width && icon_size.height) {
#ifdef TKDND_ARC
            image = [[NSImage alloc] initWithSize: icon_size];
#else /* TKDND_ARC */
            image = [[[NSImage alloc] initWithSize: NSMakeSize(Tk_Width(path), Tk_Height(path))] autorelease];
#endif /* TKDND_ARC */
            [image lockFocus];
            [[NSColor clearColor] set];
            NSRectFill(NSMakeRect(0, 0, icon_size.width, icon_size.height));
            [datastring drawAtPoint: NSZeroPoint withAttributes: nil];
            [image unlockFocus];
          } else {
            icon_size = NSMakeSize(32.0, 32.0);
            image     = [NSImage imageNamed:NSImageNameMultipleDocuments];
          }
 
#ifdef TKDND_ARC
          NSDraggingItem *dragItem = [[NSDraggingItem alloc] initWithPasteboardWriter:pboardItem];
#else
          NSDraggingItem *dragItem = [[[NSDraggingItem alloc] initWithPasteboardWriter:pboardItem] autorelease];
#endif
          //[dragItem setDraggingFrame:(CGRect){imageLocation , dragview.frame.size } contents:image];
          CGFloat iconX     = imageLocation.x - icon_size.width/2;
          CGFloat iconY     = imageLocation.y - icon_size.height/2;
          [dragItem setDraggingFrame:NSMakeRect(iconX, iconY, icon_size.width, icon_size.height) contents:image];
          [dataitems addObject: dragItem];
          break;
        }
        case TYPE_NSFilenamesPboardType:
        case TYPE_NSPasteboardTypeFileURL: {
          CGFloat iconX = imageLocation.x - iconS/2;
          CGFloat iconY = imageLocation.y - iconS/2;
          /* Place the filenames into the clipboard. */
          status = Tcl_ListObjGetElements(interp, data_elem[i],
                                          &files_elem_nu, &files_elem);
          if (status == TCL_OK) {
            for (j = 0; j < files_elem_nu; j++) {
              /* Get string value of file name from list */
#ifdef TKDND_ARC
              NSString *datastring = [NSString stringWithUTF8String:Tcl_GetString(files_elem[j])];
              NSURL *fileURL = [NSURL fileURLWithPath: datastring];
              NSDraggingItem *dragItem = [[NSDraggingItem alloc] initWithPasteboardWriter:fileURL];
              NSImage *dragicon = [[NSWorkspace sharedWorkspace] iconForFile:[fileURL path]];
#else
              NSString *datastring = [[NSString stringWithUTF8String:Tcl_GetString(files_elem[j])] autorelease];
              NSURL *fileURL = [[NSURL fileURLWithPath: datastring] autorelease];
              NSDraggingItem *dragItem = [[[NSDraggingItem alloc] initWithPasteboardWriter:fileURL] autorelease];
              NSImage *dragicon = [[[NSWorkspace sharedWorkspace]
                                       iconForFileType:[fileURL pathExtension]] autorelease];
#endif
              [dragItem setDraggingFrame:NSMakeRect(iconX, iconY, iconS, iconS)
                                contents:dragicon];
              [dataitems addObject: dragItem];
              iconX += iconS + iconP;
            }
          }
          break;
        }
      }
    } else {
      /* An unknown (or user defined) type. Silently skip it... */
    }
  }
  
  /* Generate an event. */
  NSEvent *event = [NSEvent mouseEventWithType:TKDND_NSLEFTMOUSEDRAGGED
                                      location:imageLocation
                                 /*modifierFlags:TKDND_NSLEFTMOUSEDOWNMASK*/
                                 modifierFlags:0
                                     timestamp:0
                                  windowNumber:[[dragview window] windowNumber]
                                       context:NULL
                                   eventNumber:0
                                    clickCount:0
                                      pressure:0];

  /* Initiate the drag operation... */
  /* Set our draggingSession end variable. */
  if (Tcl_SetVar2(interp, TKDND_DRAGSESSION_END_WAIT_VAR, NULL,
     "refuse_drop", TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG) == NULL) {
    return TCL_ERROR;
  }
  int done = 0, code = TCL_OK;
  [dragview setInterp:interp];
  if (Tcl_TraceVar2(interp, TKDND_DRAGSESSION_END_WAIT_VAR,
      NULL, TCL_GLOBAL_ONLY|TCL_TRACE_WRITES|TCL_TRACE_UNSETS,
      TkDND_WaitVariableProc, &done) != TCL_OK) {
    return TCL_ERROR;
  }
  NSDraggingSession *draggingSession =
    [dragview beginDraggingSessionWithItems:dataitems
                                      event:event
                                     source:dragview];
  draggingSession.animatesToStartingPositionsOnCancelOrFail = YES;
  draggingSession.draggingFormation = NSDraggingFormationNone;
  /* Wait until drag operation is completed. The variable
   * TKDND_DRAGSESSION_END_WAIT_VAR will be set by "endedAtPoint()". */
  while (!done) {
#ifdef TKDND_CHECK_CANCEL
    if (Tcl_Canceled(interp, TCL_LEAVE_ERR_MSG) == TCL_ERROR) {
      code = TCL_ERROR;
      break;
    }
#endif
    Tcl_DoOneEvent(0);
  }
  [dragview setInterp:NULL];
  Tcl_UntraceVar2(interp, TKDND_DRAGSESSION_END_WAIT_VAR,
          NULL, TCL_GLOBAL_ONLY|TCL_TRACE_WRITES|TCL_TRACE_UNSETS,
          TkDND_WaitVariableProc, &done);
  if (code != TCL_OK) return code;

#else /* TKDND_LION_OR_LATER */

  NSImage          *dragicon = NULL;
  /* In the older API, there is no way to know the drop action.
   * Use "copy" always... */
  if (Tcl_SetVar2(interp, TKDND_DRAGSESSION_END_WAIT_VAR, NULL,
     "copy", TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG) == NULL) {
    return TCL_ERROR;
  }

  /*
   * Get pasteboard. Make sure it is TKDND_NSPASTEBOARDNAMEDRAG; this will make data available
   * to drop targets via [sender draggingPasteboard]
   */
  NSPasteboard *dragpasteboard = [NSPasteboard pasteboardWithName:TKDND_NSPASTEBOARDNAMEDRAG];
  NSMutableArray *dataitems;
  NSMutableArray *filelist;
#ifdef TKDND_ARC
  dataitems    = [[NSMutableArray alloc] init];
  filelist     = [[NSMutableArray alloc] init];
#else
  dataitems    = [[[NSMutableArray alloc] init] autorelease];
  filelist     = [[[NSMutableArray alloc] init] autorelease];
#endif
  [dragpasteboard clearContents];

  if (added_filenames) {
    /* There is a request about deprecated NSFilenamesPboardType. The only way to
       use it, is through setPropertyList:forType, which operates only on the first
       item. So, call declareTypes, to create this first item... */
    //[dragpasteboard declareTypes:draggedtypes owner:dragview];
    NSPasteboardItem *item;
#ifdef TKDND_ARC
    item = [[NSPasteboardItem alloc] init];
#else
    item = [[[NSPasteboardItem alloc] init] autorelease];
#endif
    [dataitems addObject: item];
  }

  /*
   * We need an icon for the drag:
   * Iterate over data types to process dragged data and display
   * the correct drag icon.
   */
  for (i = 0; i < elem_nu; i++) {
    status = Tcl_GetIndexFromObj(interp, elem[i], (const char **) DropTypes,
                                 "droptypes", 0, &index);
    if (status == TCL_OK) {
      switch ((enum droptypes) index) {
        case TYPE_NSPasteboardTypeString: {
          /* Place the string into the clipboard. */
          NSString *datastring =
             [NSString stringWithUTF8String:Tcl_GetString(data_elem[i])];
          NSPasteboardItem *item;
#ifdef TKDND_ARC
          item = [[NSPasteboardItem alloc] init];
#else
          item = [[[NSPasteboardItem alloc] init] autorelease];
#endif
          [item setString:datastring forType:NSPasteboardTypeString];
          [dataitems addObject: item];
          //[dragpasteboard writeObjects:[NSArray arrayWithObject:item]];
          //[dragpasteboard setString:datastring forType:NSPasteboardTypeString];

          /* Create a custom icon: draw dragged string into drag icon,
           * make sure icon is large enough to contain several lines of text */
          if (dragicon == NULL) {
            dragicon = [[NSImage alloc]
              initWithSize:NSMakeSize(Tk_Width(path), Tk_Height(path))];
            [dragicon lockFocus];
            [[NSColor clearColor] set];
            NSRectFill(NSMakeRect(0, 0, 1000,1000));
            [datastring drawAtPoint: NSZeroPoint withAttributes: nil];
            [dragicon unlockFocus];
          }
          break;
        }
        case TYPE_NSPasteboardTypeHTML: {
          /* Place HTML into the clipboard. */
          NSString *datastring =
             [NSString stringWithUTF8String:Tcl_GetString(data_elem[i])];
          NSPasteboardItem *item;
#ifdef TKDND_ARC
          item = [[NSPasteboardItem alloc] init];
#else
          item = [[[NSPasteboardItem alloc] init] autorelease];
#endif
          [item setString:datastring forType:NSPasteboardTypeHTML];
          [dataitems addObject: item];

          /* Create a custom icon: draw dragged string into drag icon,
           * make sure icon is large enough to contain several lines of text */
          if (dragicon == NULL) {
            dragicon = [[NSImage alloc]
              initWithSize:NSMakeSize(Tk_Width(path), Tk_Height(path))];
            [dragicon lockFocus];
            [[NSColor clearColor] set];
            NSRectFill(NSMakeRect(0, 0, 1000,1000));
            [datastring drawAtPoint: NSZeroPoint withAttributes: nil];
            [dragicon unlockFocus];
          }
          break;
        }
        case TYPE_NSPasteboardTypeFileURL:
        case TYPE_NSFilenamesPboardType: {
          /* Place the filenames into the clipboard. */
          status = Tcl_ListObjGetElements(interp, data_elem[i],
                                          &files_elem_nu, &files_elem);
          if (status == TCL_OK) {
            for (j = 0; j < files_elem_nu; j++) {
              /* Get string value of file name from list */
              char* filename = Tcl_GetString(files_elem[j]);
              /* Convert file names to NSSString, add to NSMutableArray,
               * and set pasteboard type */
              NSString *filestring = [NSString stringWithUTF8String:filename];
              [filelist addObject: /*[NSURL fileURLWithPath:*/ filestring] /*]*/;
            }
          }
          /* This successfully writes the file path data to the clipboard,
           * and it is available to other non-Tk applications... */
          // [dragpasteboard writeObjects: filelist];
          // [dragpasteboard setPropertyList:filelist forType:NSFilenamesPboardType];

          /* Set the correct icon depending on whether a single file
           * [iconForFileType] or multiple files [NSImageNameMultipleDocuments]
           * have been placed into the clipboard... */
          if (dragicon == NULL) {
            if ([filelist count] == 1) {
              NSString *pathtype = [[filelist objectAtIndex:0] pathExtension];
              dragicon = [[NSWorkspace sharedWorkspace]
                                       iconForFileType:pathtype];
            } else {
              dragicon = [NSImage imageNamed:NSImageNameMultipleDocuments];
            }
          }
          break;
        }
      }
    } else {
      /* An unknown (or user defined) type. Silently skip it... */
    }
  }
  [dragpasteboard writeObjects: dataitems];
  if (added_filenames) {
    [dragpasteboard setPropertyList:filelist forType:
#ifdef TKDND_HIGH_SIERRA_OR_LATER
                    NSPasteboardTypeFileURL
#else
                    NSFilenamesPboardType
#endif
    ];
  }

  /* Do drag & drop... */

  /* Ensure that we always have a drag icon. If not, use a default one... */
  if (dragicon == NULL) {
    dragicon = [NSImage imageNamed:NSImageNameIconViewTemplate];
  }

  /* Get the mouse coordinates, so as the icon can slide back at the correct
   * location, if the drag is cancelled. */
  NSPoint global         = [NSEvent mouseLocation];
  NSPoint imageLocation  = [[dragview window] convertScreenToBase:global];

  NSEvent *event = [NSEvent mouseEventWithType:TKDND_NSLEFTMOUSEDRAGGED
                                      location:imageLocation
                                 /*modifierFlags:TKDND_NSLEFTMOUSEDOWNMASK*/
                                 modifierFlags:0
                                     timestamp:0
                                  windowNumber:[[dragview window] windowNumber]
                                       context:NULL
                                   eventNumber:0
                                    clickCount:0
                                      pressure:0];

  /* Initiate the drag operation... */
  NSSize dragOffset = NSMakeSize(0.0, 0.0);
  [dragview dragImage:dragicon
                   at:imageLocation
               offset:dragOffset
                event:event
           pasteboard:dragpasteboard
               source:dragview
            slideBack:YES];
#endif /* TKDND_LION_OR_LATER */

  /* Get the drop action... */
  Tcl_Obj *action = Tcl_GetVar2Ex(interp, TKDND_DRAGSESSION_END_WAIT_VAR,
                  NULL, TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
  if (action == NULL) return TCL_ERROR;
  Tcl_SetObjResult(interp, action);
  return TCL_OK;
}; /* TkDND_DoDragDropObjCmd */

/*
 * Register: add a Cocoa subview to serve as drop target;
 *           register dragged data types
 */
int TkDND_RegisterDragWidgetObjCmd(ClientData clientData, Tcl_Interp *ip,
                                   int objc, Tcl_Obj *CONST objv[]) {
  Tcl_Obj **type;
  int i;
  Tcl_Size len, typec;
  char *str;
  bool added_string = false, added_filenames = false, added_html = false;

  if (objc != 3) {
    Tcl_WrongNumArgs(ip, 1, objv, "path types-list");
    return TCL_ERROR;
  }

  /*
   * Get the list of desired drop target types...
   */
  if (Tcl_ListObjGetElements(ip, objv[2], &typec, &type) != TCL_OK) {
    return TCL_ERROR;
  }

  /* Get window information for drop target... */
  Tk_Window path;
  path = Tk_NameToWindow(ip, Tcl_GetString(objv[1]), Tk_MainWindow(ip));
  if (path == NULL) return TCL_ERROR;

  Tk_MakeWindowExist(path);
  Tk_MapWindow(path);
  Drawable d = Tk_WindowId(path);

  /* Get NSView from Tk window and add subview to serve as drop target */
  NSView  *view = (__bridge NSView *) TkMacOSXGetRootControl(d);
  DNDView *dropview  = TkDND_GetDNDSubview(view, path);
  if (dropview == NULL) return TCL_ERROR;

  /* Initialize array of drag types */
  NSMutableArray *draggedtypes=[[NSMutableArray alloc] init];

  /*
   * Iterate over all requested types...
   */
  for (i = 0; i < typec; ++i) {
    str = Tcl_GetStringFromObj(type[i], &len);
    if (strncmp(str, "*", len) == 0) {
      /* A request for all available types... */
      if (!added_string) {
        [draggedtypes addObject: NSPasteboardTypeString];
        added_string = true;
      }
      if (!added_filenames) {
        [draggedtypes addObject:
#ifdef TKDND_HIGH_SIERRA_OR_LATER
                    NSPasteboardTypeFileURL
#else
                    NSFilenamesPboardType
#endif
        ];
        added_filenames = true;
      }
      if (!added_html) {
        [draggedtypes addObject: NSPasteboardTypeHTML];
        added_html = true;
      }
    } else if (strncmp(str, "NSPasteboardTypeString", len) == 0) {
      if (!added_string) {
        [draggedtypes addObject: NSPasteboardTypeString];
        added_string = true;
      }
    } else if (strncmp(str, "NSPasteboardTypeHTML", len) == 0) {
      if (!added_html) {
        [draggedtypes addObject: NSPasteboardTypeHTML];
        added_html = true;
      }
    } else if (strncmp(str, "NSPasteboardTypeFileURL", len) == 0 ||
               strncmp(str, "NSFilenamesPboardType", len) == 0) {
      if (!added_filenames) {
        [draggedtypes addObject:
#ifdef TKDND_HIGH_SIERRA_OR_LATER
                    NSPasteboardTypeFileURL
#else
                    NSFilenamesPboardType
#endif
        ];
        added_filenames = true;
      }
    } else {
      /* Do what? Raise an error or silently ignore the unknown type? */
    }
  }

  /* Finally, register the drag types... */
  [dropview registerForDraggedTypes:draggedtypes];

  return TCL_OK;
}; /* TkDND_RegisterDragWidgetObjCmd */

/* Unregister the drag widget */
int TkDND_UnregisterDragWidgetObjCmd(ClientData clientData, Tcl_Interp *ip,
                                     int objc, Tcl_Obj *CONST objv[]) {
  if (objc != 2) {
    Tcl_WrongNumArgs(ip, 1, objv, "path");
    return TCL_ERROR;
  }

  /* Get NSView from TK window... */
  Tk_Window path = Tk_NameToWindow(ip, Tcl_GetString(objv[1]),
                                       Tk_MainWindow(ip));

  if (path == NULL) return TCL_ERROR;

  Drawable d         = Tk_WindowId(path);
  NSView  *view      = (__bridge NSView *) TkMacOSXGetRootControl(d);
  DNDView *dropview  = TkDND_GetDNDSubview(view, path);
  if (dropview == NULL) return TCL_ERROR;
  [dropview unregisterDraggedTypes];

  return TCL_OK;
}; /* TkDND_UnregisterDragWidgetObjCmd */

/* Convert OS X types to strings... */
int TkDND_Type2StringObjCmd(ClientData clientData, Tcl_Interp *interp,
                             int objc, Tcl_Obj *CONST objv[]) {
  const NSString *str;
  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "type");
    return TCL_ERROR;
  }
  str = TKDND_Obj2NSString(interp, objv[1]);
  if (str == NULL) return TCL_ERROR;
  Tcl_SetObjResult(interp, Tcl_NewStringObj([str UTF8String], -1));
  return TCL_OK;
}; /* TkDND_Type2StringObjCmd */

/* Convert TkDND Generic types to macOS types... */
int TkDND_GenericType2OStypeObjCmd(ClientData clientData, Tcl_Interp *interp,
                             int objc, Tcl_Obj *CONST objv[]) {
  static char *GenericTypes[] = {
    "DND_Text", "DND_Files", "DND_HTML",
    (char *) NULL
  };
  static char *OSTypes[] = {
    "NSPasteboardTypeString", 
#ifdef TKDND_HIGH_SIERRA_OR_LATER
    "NSPasteboardTypeFileURL"
#else
    "NSFilenamesPboardType"
#endif
    , "NSPasteboardTypeHTML",
    (char *) NULL
  };
  int index, status;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "generic-type");
    return TCL_ERROR;
  }
  status = Tcl_GetIndexFromObj(interp, objv[1], (const char **) GenericTypes,
                               "generictypes", 0, &index);
  if (status != TCL_OK) return status;
  Tcl_SetObjResult(interp, Tcl_NewStringObj(OSTypes[index], -1));
  return TCL_OK;
}; /* TkDND_Type2StringObjCmd */

/*
 * Initialize the package in the tcl interpreter, create tcl commands...
 */
int Tkdnd_Init (Tcl_Interp *interp) {

  if (Tcl_InitStubs(interp, "8.5-", 0) == NULL) {
    return TCL_ERROR;
  }

  if (Tk_InitStubs(interp, "8.5-", 0) == NULL) {
    return TCL_ERROR;
  }

  Tcl_CreateObjCommand(interp, "::macdnd::registerdragwidget",
                       TkDND_RegisterDragWidgetObjCmd,
                       (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
  Tcl_CreateObjCommand(interp, "::macdnd::unregisterdragwidget",
                       TkDND_UnregisterDragWidgetObjCmd,
                       (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
  Tcl_CreateObjCommand(interp, "::macdnd::dodragdrop",
                       TkDND_DoDragDropObjCmd,
                       (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
  Tcl_CreateObjCommand(interp, "::macdnd::osxtype2string",
                       TkDND_Type2StringObjCmd,
                       (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);
  Tcl_CreateObjCommand(interp, "::macdnd::generictype2ostype",
                       TkDND_GenericType2OStypeObjCmd,
                       (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK) {
    return TCL_ERROR;
  }

  return TCL_OK;
}; /* Tkdnd_Init */

int Tkdnd_SafeInit(Tcl_Interp *ip) {
  return Tkdnd_Init(ip);
}; /* Tkdnd_SafeInit */
