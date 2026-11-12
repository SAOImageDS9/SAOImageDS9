/*
 * TkDND_OleDND.h -- Tk OleDND Drag'n'Drop Protocol Implementation
 *
 *    This file implements the unix portion of the drag&drop mechanism
 *    for the Tk toolkit. The protocol in use under windows is the
 *    OleDND protocol.
 *
 * This software is copyrighted by:
 * Georgios Petasis, Athens, Greece.
 * e-mail: petasisg@yahoo.gr, petasis@iit.demokritos.gr
 * Laurent Riesterer, Rennes, France.
 * e-mail: laurent.riesterer@free.fr
 *
 * The following terms apply to all files associated
 * with the software unless explicitly disclaimed in individual files.
 *
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions. No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 *
 * IN NO EVENT SHALL THE AUTHORS OR DISTRIBUTORS BE LIABLE TO ANY PARTY
 * FOR DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE, ITS DOCUMENTATION, OR ANY
 * DERIVATIVES THEREOF, EVEN IF THE AUTHORS HAVE BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * THE AUTHORS AND DISTRIBUTORS SPECIFICALLY DISCLAIM ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, AND NON-INFRINGEMENT.  THIS SOFTWARE
 * IS PROVIDED ON AN "AS IS" BASIS, AND THE AUTHORS AND DISTRIBUTORS HAVE
 * NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR
 * MODIFICATIONS.
 */

#include "OleDND.h"

#define TKDND_REPORT_ERROR(x) \
    { Tcl_SetObjResult(interp, Tcl_NewStringObj(x, -1)); }

static void TkDND_OnWindowDestroy(ClientData clientData, XEvent *eventPtr) {
  Tk_Window tkwin = (Tk_Window) clientData;
  if (eventPtr->type != DestroyNotify) return;
  RevokeDragDrop(Tk_GetHWND(Tk_WindowId(tkwin)));
}; /* TkDND_OnWindowDestroy */

int TkDND_RegisterDragDropObjCmd(ClientData clientData, Tcl_Interp *interp,
                                 int objc, Tcl_Obj *CONST objv[]) {
  TkDND_DropTarget *pDropTarget;
  Tk_Window tkwin;
  HRESULT hret;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "path");
    return TCL_ERROR;
  }
  Tcl_ResetResult(interp);

  tkwin = TkDND_TkWin(objv[1]);
  if (tkwin == NULL) {
    Tcl_AppendResult(interp, "invalid Tk widget path: \"",
                             Tcl_GetString(objv[1]), (char *) NULL);
    return TCL_ERROR;
  }
  Tk_MakeWindowExist(tkwin);

  pDropTarget = new TkDND_DropTarget(interp, tkwin);
  if (pDropTarget == NULL) {
    TKDND_REPORT_ERROR("out of memory");
    return TCL_ERROR;
  }
  pDropTarget->AddRef();
  hret = RegisterDragDrop(Tk_GetHWND(Tk_WindowId(tkwin)), pDropTarget);
  pDropTarget->Release();
  switch (hret) {
    case E_OUTOFMEMORY: {
      Tcl_AppendResult(interp, "unable to register \"", Tcl_GetString(objv[1]),
                "\" as a drop target: out of memory", (char *) NULL);
      break;
    }
    case DRAGDROP_E_INVALIDHWND: {
      Tcl_AppendResult(interp, "unable to register \"", Tcl_GetString(objv[1]),
                "\" as a drop target: invalid window handle", (char *) NULL);
      break;
    }
    case DRAGDROP_E_ALREADYREGISTERED:
      /* Silently ignore this. The window has been registered before. */
    case S_OK: {
      /* Arrange RevokeDragDrop to be called on destroy... */
      Tk_CreateEventHandler(tkwin, StructureNotifyMask,
                            TkDND_OnWindowDestroy, tkwin);
      return TCL_OK;
    }
  }
  return TCL_ERROR;
}; /* TkDND_RegisterDragDropObjCmd */

int TkDND_RevokeDragDropObjCmd(ClientData clientData, Tcl_Interp *interp,
                                 int objc, Tcl_Obj *CONST objv[]) {
  Tk_Window tkwin;
  HRESULT hret;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "path");
    return TCL_ERROR;
  }
  Tcl_ResetResult(interp);

  tkwin = TkDND_TkWin(objv[1]);
  if (tkwin == NULL) {
    Tcl_AppendResult(interp, "invalid Tk widget path: \"",
                             Tcl_GetString(objv[1]), (char *) NULL);
    return TCL_ERROR;
  }

  hret = RevokeDragDrop(Tk_GetHWND(Tk_WindowId(tkwin)));
  if (hret != S_OK) {
    Tcl_AppendResult(interp, "Tk widget \"", Tcl_GetString(objv[1]),
              "\" has never been registered as a drop target", (char *) NULL);
    return TCL_ERROR;
  }
  Tk_DeleteEventHandler(tkwin, StructureNotifyMask,
                        TkDND_OnWindowDestroy, tkwin);

  return TCL_OK;
}; /* TkDND_RevokeDragDropObjCmd */

#define COPY_UTF8_TO_DATA_OBJECT \
  Tcl_GetStringFromObj(data[i], &nDataLength); \
  m_pstgmed[i].hGlobal = GlobalAlloc(GHND, nDataLength+1); \
  if (m_pstgmed[i].hGlobal) { \
    ptr = (char *) GlobalLock(m_pstgmed[i].hGlobal); \
    memcpy(ptr, Tcl_GetString(data[i]), nDataLength); \
    ptr[nDataLength] = '\0'; \
    GlobalUnlock(m_pstgmed[i].hGlobal); \
  }

#define COPY_BYTEARRAY_TO_DATA_OBJECT(wchar_type_str) \
  m_pfmtetc[i].cfFormat = RegisterClipboardFormatW(wchar_type_str); \
  bytes = Tcl_GetByteArrayFromObj(data[i], &nDataLength); \
  m_pstgmed[i].hGlobal = GlobalAlloc(GHND, nDataLength); \
  if (m_pstgmed[i].hGlobal) { \
    ptr = (char *) GlobalLock(m_pstgmed[i].hGlobal); \
    memcpy(ptr, bytes, nDataLength); \
    GlobalUnlock(m_pstgmed[i].hGlobal); \
  }

int TkDND_DoDragDropObjCmd(ClientData clientData, Tcl_Interp *interp,
                           int objc, Tcl_Obj *CONST objv[]) {
  TkDND_DataObject *pDataObject = NULL;
  TkDND_DropSource *pDropSource = NULL;
  Tcl_Obj         **type, **data;
  DWORD             actions = 0;
  DWORD             dwEffect;
  DWORD             dwResult;
  int               status, index, button = 1;
  Tcl_Size          i, type_nu, data_nu, nDataLength;
  char             *ptr;
  FORMATETC        *m_pfmtetc;
  STGMEDIUM        *m_pstgmed;
  static const char *DropTypes[] = {
    "CF_UNICODETEXT", "CF_TEXT", "CF_HDROP",
    "CF_HTML", "HTML Format",
    "CF_RTF", "CF_RTFTEXT", "Rich Text Format",
    (char *) NULL
  };
  enum droptypes {
    TYPE_CF_UNICODETEXT, TYPE_CF_TEXT, TYPE_CF_HDROP,
    TYPE_CF_HTML, TYPE_CF_HTMLFORMAT,
    TYPE_CF_RTF, TYPE_CF_RTFTEXT, TYPE_CF_RICHTEXTFORMAT
  };
  static const char *DropActions[] = {
    "copy", "move", "link", "ask",  "private", "refuse_drop",
    "default",
    (char *) NULL
  };
  enum dropactions {
    ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
    refuse_drop, ActionDefault
  };
  size_t buffer_size;
  unsigned char *bytes;

  if (objc != 5 && objc != 6) {
    Tcl_WrongNumArgs(interp, 1, objv, "path actions types data ?mouse-button?");
    return TCL_ERROR;
  }
  Tcl_ResetResult(interp);

  /* Get the mouse button. It must be one of 1, 2, or 3. */
  if (objc > 5) {
    status = Tcl_GetIntFromObj(interp, objv[5], &button);
    if (status != TCL_OK) return status;
    if (button < 1 || button > 3) {
      TKDND_REPORT_ERROR("button must be either 1, 2, or 3");
      return TCL_ERROR;
    }
  }

  /* Process drag actions. */
  status = Tcl_ListObjGetElements(interp, objv[2], &type_nu, &type);
  if (status != TCL_OK) return status;
  for (i = 0; i < type_nu; i++) {
    status = Tcl_GetIndexFromObj(interp, type[i], (const char **)DropActions,
                                 "dropactions", 0, &index);
    if (status != TCL_OK) return status;
    switch ((enum dropactions) index) {
      case ActionCopy:    actions |= DROPEFFECT_COPY; break;
      case ActionMove:    actions |= DROPEFFECT_MOVE; break;
      case ActionLink:    actions |= DROPEFFECT_LINK; break;
      case ActionAsk:     /* not supported */;        break;
      case ActionPrivate: actions |= DROPEFFECT_NONE; break;
      case ActionDefault: /* not supported */;        break;
      case refuse_drop:   /* not supported */;        break;
    }
  }

  /* Process drag types. */
  status = Tcl_ListObjGetElements(interp, objv[3], &type_nu, &type);
  if (status != TCL_OK) return status;
  status = Tcl_ListObjGetElements(interp, objv[4], &data_nu, &data);
  if (status != TCL_OK) return status;
  if (type_nu != data_nu) {
    TKDND_REPORT_ERROR("lists type & data must have the same length");
    return TCL_ERROR;
  }
  m_pfmtetc  = new FORMATETC[type_nu];
  if (m_pfmtetc == NULL) return TCL_ERROR;
  m_pstgmed  = new STGMEDIUM[type_nu];
  if (m_pstgmed == NULL) {
    delete[] m_pfmtetc; return TCL_ERROR;
  }
  for (i = 0; i < type_nu; i++) {
    m_pfmtetc[i].ptd            = 0;
    m_pfmtetc[i].dwAspect       = DVASPECT_CONTENT;
    m_pfmtetc[i].lindex         = -1;
    m_pfmtetc[i].tymed          = TYMED_HGLOBAL;
    m_pstgmed[i].tymed          = TYMED_HGLOBAL;
    m_pstgmed[i].pUnkForRelease = 0;
    status = Tcl_GetIndexFromObj(interp, type[i], (const char **) DropTypes,
                                 "dropactions", 0, &index);
    if (status == TCL_OK) {
      switch ((enum droptypes) index) {
        case TYPE_CF_UNICODETEXT: {
          m_pfmtetc[i].cfFormat = CF_UNICODETEXT;
          m_pstgmed[i].hGlobal = ObjToWinStringHGLOBAL(data[i]);
          break;
        }
        case TYPE_CF_HTMLFORMAT:
        case TYPE_CF_HTML: {
          COPY_BYTEARRAY_TO_DATA_OBJECT(L"HTML Format");
          break;
        }
        case TYPE_CF_RICHTEXTFORMAT:
        case TYPE_CF_RTF:
        case TYPE_CF_RTFTEXT: {
          COPY_BYTEARRAY_TO_DATA_OBJECT(L"Rich Text Format");
          break;
        }
        case TYPE_CF_TEXT: {
          m_pfmtetc[i].cfFormat = CF_TEXT;
          COPY_UTF8_TO_DATA_OBJECT;
          break;
        }
        case TYPE_CF_HDROP: {
          LPDROPFILES pDropFiles;
          Tcl_Obj **File, *native_files_obj = NULL;
          Tcl_Size j, file_nu;
          Tcl_Size size, len;
          WCHAR *CurPosition;

          status = Tcl_ListObjGetElements(interp, data[i], &file_nu, &File);
          if (status != TCL_OK) {type_nu = i; goto error;}
          /* What we expect is a list of filenames. Convert the filenames into
           * the native format, and store the translated filenames into a new
           * list... */
          native_files_obj = Tcl_NewListObj(file_nu, NULL);
          if (native_files_obj == NULL) {type_nu = i; goto error;}
          // Calculate the size of the buffer needed to store the file names.
          for (size = 0, j = 0; j < file_nu; ++j) {
            Tcl_Obj *normalizedPath;
            WCHAR *nativePath;
            normalizedPath = Tcl_FSGetNormalizedPath(interp, File[j]);
            if (normalizedPath == NULL) {
              continue;
            }
            // Note normalizedPath is owned by File[j] and we need not free
            // it explicitly. Later it gets added to the native_files_obj
            // list which increments its reference count which subsequently
            // decremented when the list is destroyed.
            nativePath = (WCHAR *) Tcl_FSGetNativePath(normalizedPath);
            if (nativePath == NULL) {
              continue;
            }
            size += wcslen(nativePath) + 1; // NULL character...
            Tcl_ListObjAppendElement(NULL, native_files_obj, normalizedPath);
          }

          // We need an extra NULL character at the end of the buffer.
          buffer_size = sizeof(wchar_t) * (size+1);
          m_pfmtetc[i].cfFormat = CF_HDROP;
          m_pstgmed[i].hGlobal = GlobalAlloc(GHND,
                   (DWORD) (sizeof(DROPFILES) + buffer_size));
          if (m_pstgmed[i].hGlobal == NULL) {
            Tcl_Panic("Unable to allocate GlobalAlloc memory.");
          }

          pDropFiles = (LPDROPFILES)GlobalLock(m_pstgmed[i].hGlobal);
          // Set the offset where the starting point of the file start.
          pDropFiles->pFiles = sizeof(DROPFILES);
          pDropFiles->fWide = TRUE;
          CurPosition = (WCHAR *)(LPBYTE(pDropFiles) + sizeof(DROPFILES));
          Tcl_ListObjGetElements(NULL, native_files_obj, &file_nu, &File);
          for (j = 0; j < file_nu; j++) {
            WCHAR *nativePath;
            nativePath = (WCHAR *) Tcl_FSGetNativePath(File[j]);

            // Copy the file name into global memory.
            len = wcslen(nativePath);
            memcpy(CurPosition, nativePath, (len+1) * sizeof(WCHAR));
            CurPosition += len + 1;
          }
          /*
           * Finally, add an additional null terminator, as per CF_HDROP
           * Format specs.
           */
          *CurPosition = '\0';
          GlobalUnlock(m_pstgmed[i].hGlobal);
          Tcl_DecrRefCount(native_files_obj);
          break;
        }
      }
    } else {
      /* A user defined type? */
#if TCL_MAJOR_VERSION < 9
      COPY_BYTEARRAY_TO_DATA_OBJECT((WCHAR *)Tcl_GetUnicode(type[i]));
#else
      Tcl_DString ds;
      ObjToWinStringDS(type[i], &ds);
      COPY_BYTEARRAY_TO_DATA_OBJECT((WCHAR *)Tcl_DStringValue(&ds));
      Tcl_DStringFree(&ds);
#endif
      break;
    }
  }; /* for (i = 0; i < type_nu; i++) */

  pDataObject = new TkDND_DataObject(m_pfmtetc, m_pstgmed, type_nu);
  if (pDataObject == NULL) {
    TKDND_REPORT_ERROR("unable to create OLE Data object");
    return TCL_ERROR;
  }

  pDropSource = new TkDND_DropSource(button);
  if (pDropSource == NULL) {
    pDataObject->Release();
    TKDND_REPORT_ERROR("unable to create OLE Drop Source object");
    return TCL_ERROR;
  }

  dwResult = DoDragDrop(pDataObject, pDropSource, actions, &dwEffect);
  // release the COM interfaces
  pDropSource->Release();
  pDataObject->Release();
  for (i = 0; i < type_nu; i++) {
    ReleaseStgMedium(&m_pstgmed[i]);
  }
  delete[] m_pfmtetc;
  delete[] m_pstgmed;
  if (dwResult == DRAGDROP_S_DROP) {
    const char *msg;
    switch (dwEffect) {
      case DROPEFFECT_COPY: msg = "copy"; break;
      case DROPEFFECT_MOVE: msg = "move"; break;
      case DROPEFFECT_LINK: msg = "link"; break;
      default:              msg = "copy"; break;
    }
    Tcl_SetObjResult(interp, Tcl_NewStringObj(msg, -1));
  } else {
    Tcl_SetObjResult(interp, Tcl_NewStringObj("refuse_drop", -1));
  }
  return TCL_OK;
error:
  // release the COM interfaces
  if (pDropSource) pDropSource->Release();
  if (pDataObject) pDataObject->Release();
  for (i = 0; i < type_nu; i++) {
    ReleaseStgMedium(&m_pstgmed[i]);
  }
  delete[] m_pfmtetc;
  delete[] m_pstgmed;
  return TCL_ERROR;
}; /* TkDND_DoDragDropObjCmd */

/*
 * For C++ compilers, use extern "C"
 */
#ifdef __cplusplus
extern "C" {
#endif
DLLEXPORT int Tkdnd_Init(Tcl_Interp *interp);
DLLEXPORT int Tkdnd_SafeInit(Tcl_Interp *interp);
#ifdef __cplusplus
}
#endif

int DLLEXPORT Tkdnd_Init(Tcl_Interp *interp) {
  int major, minor, patchlevel;
  HRESULT hret;

  if (
#ifdef USE_TCL_STUBS
      Tcl_InitStubs(interp, "8.4-", 0)
#else
      Tcl_PkgRequire(interp, "Tcl", "8.4-", 0)
#endif /* USE_TCL_STUBS */
            == NULL) {
            return TCL_ERROR;
  }
  if (
#ifdef USE_TK_STUBS
       Tk_InitStubs(interp, "8.4-", 0)
#else
       Tcl_PkgRequire(interp, "Tk", "8.4-", 0)
#endif /* USE_TK_STUBS */
            == NULL) {
            return TCL_ERROR;
  }

  /*
   * Get the version, because we really need 8.3.3+.
   */
  Tcl_GetVersion(&major, &minor, &patchlevel, NULL);
  if ((major == 8) && (minor == 3) && (patchlevel < 3)) {
    TKDND_REPORT_ERROR("tkdnd requires Tk 8.3.3 or greater");
    return TCL_ERROR;
  }

  /*
   * Initialise OLE.
   */
  hret = OleInitialize(NULL);

  /*
   * If OleInitialize returns S_FALSE, OLE has already been initialized
   */
  if (hret != S_OK && hret != S_FALSE) {
    Tcl_AppendResult(interp, "unable to initialize OLE2",
      (char *) NULL);
    return TCL_ERROR;
  }

  /* Register the various commands */
  if (Tcl_CreateObjCommand(interp, "_RegisterDragDrop",
           (Tcl_ObjCmdProc*) TkDND_RegisterDragDropObjCmd,
           (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL) == NULL) {
      return TCL_ERROR;
  }
  if (Tcl_CreateObjCommand(interp, "_RevokeDragDrop",
           (Tcl_ObjCmdProc*) TkDND_RevokeDragDropObjCmd,
           (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL) == NULL) {
      return TCL_ERROR;
  }

  if (Tcl_CreateObjCommand(interp, "_DoDragDrop",
           (Tcl_ObjCmdProc*) TkDND_DoDragDropObjCmd,
           (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL) == NULL) {
      return TCL_ERROR;
  }

  Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION);
  return TCL_OK;
} /* Tkdnd_Init */

int DLLEXPORT Tkdnd_SafeInit(Tcl_Interp *interp) {
  return Tkdnd_Init(interp);
} /* Tkdnd_SafeInit */
