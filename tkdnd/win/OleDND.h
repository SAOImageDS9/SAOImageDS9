/*
 * OleDND.h --
 *
 *    This file implements the windows portion of the drag&drop mechanism
 *    for the Tk toolkit. The protocol in use under windows is the
 *    OLE protocol. Based on code wrote by Gordon Chafee.
 *
 * This software is copyrighted by:
 * George Petasis, National Centre for Scientific Research "Demokritos",
 * Aghia Paraskevi, Athens, Greece.
 * e-mail: petasis@iit.demokritos.gr
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

#ifndef _OLE_DND_H
#define _OLE_DND_H

#if defined(__MINGW32__) || defined(__MINGW64__)
#ifndef WINVER
#define WINVER 0x0500 /* version 5.0 */
#endif /* !WINVER */
#endif /* __MINGW32__ */

#include <windows.h>
#include <ole2.h>
#include <shlobj.h>
#include <io.h>
#include <fcntl.h>
#include <share.h>
#include <sys/stat.h>
#include <tchar.h>
#include <wchar.h>

#include <string>

#ifdef DND_ENABLE_DROP_TARGET_HELPER
#include <atlbase.h>
#include <shlobj.h>     /* for IDropTargetHelper */
#include <shlguid.h>
/* We need this declaration for CComPtr, which uses __uuidof() */
struct __declspec(uuid("{4657278B-411B-11d2-839A-00C04FD918D0}"))
  IDropTargetHelper;
#endif /* DND_ENABLE_DROP_TARGET_HELPER */

#include <tcl.h>
#include <tk.h>
#ifdef __cplusplus
extern "C" {
#endif
#include <tkPlatDecls.h>
#ifdef __cplusplus
}
#endif

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

/*
   Check, if Tcl version supports Tcl_Size,
   which was introduced in Tcl 8.7 and 9.
   
   Initial updates for Tcl 8.7 and 9 contributed by Paul Obermeier.
*/
#ifndef TCL_SIZE_MAX
  #define TCL_SIZE_MAX INT_MAX

  #ifndef Tcl_Size
    typedef int Tcl_Size;
  #endif

  #define TCL_SIZE_MODIFIER ""
  #define Tcl_GetSizeIntFromObj Tcl_GetIntFromObj
  #define Tcl_NewSizeIntObj     Tcl_NewIntObj
  #define NO_NATIVE_TCL_SIZE
#endif

#define TkDND_TkWin(x) \
  (Tk_NameToWindow(interp, Tcl_GetString(x), Tk_MainWindow(interp)))

#define TkDND_Eval(objc) {\
  for (i=0; i<objc; ++i) Tcl_IncrRefCount(objv[i]);\
  if (Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL) != TCL_OK) \
    Tcl_BackgroundError(interp); \
  for (i=0; i<objc; ++i) Tcl_DecrRefCount(objv[i]);}

#define TkDND_Status_Eval(objc) {\
  for (i=0; i<objc; ++i) Tcl_IncrRefCount(objv[i]);\
  status = Tcl_EvalObjv(interp, objc, objv, TCL_EVAL_GLOBAL);\
  if (status != TCL_OK) Tcl_BackgroundError(interp); \
  for (i=0; i<objc; ++i) Tcl_DecrRefCount(objv[i]);}


/*****************************************************************************
 * Windows Clipboard formats.
 ****************************************************************************/
#define WIDEN(x) L##x
#define STRING_(s) {s, WIDEN(#s)}
typedef struct {
  UINT   cfFormat;
  const WCHAR *name;
} CLIP_FORMAT_STRING_TABLE;

static CLIP_FORMAT_STRING_TABLE ClipboardFormatBook[] = {
  STRING_(CF_TEXT),
  STRING_(CF_BITMAP),
  STRING_(CF_METAFILEPICT),
  STRING_(CF_SYLK),
  STRING_(CF_DIF),
  STRING_(CF_TIFF),
  STRING_(CF_OEMTEXT),
  STRING_(CF_DIB),
  STRING_(CF_PALETTE),
  STRING_(CF_PENDATA),
  STRING_(CF_RIFF),
  STRING_(CF_WAVE),
  STRING_(CF_UNICODETEXT),
  STRING_(CF_ENHMETAFILE),
#ifdef    CF_HDROP
  STRING_(CF_HDROP),
#endif /* CF_HDROP */
#ifdef    CF_LOCALE
  STRING_(CF_LOCALE),
#endif /* CF_LOCALE */
#ifdef    CF_DIBV5
  STRING_(CF_DIBV5),
#endif /* CF_DIBV5 */
  STRING_(CF_OWNERDISPLAY),
  STRING_(CF_DSPTEXT),
  STRING_(CF_DSPBITMAP),
  STRING_(CF_DSPMETAFILEPICT),
  STRING_(CF_DSPENHMETAFILE),
  STRING_(CF_GDIOBJFIRST),
  STRING_(CF_PRIVATEFIRST),
  {0, 0}
}; /* ClipboardFormatBook */

#if TCL_UTF_MAX < 4
// WCHAR string -> Tcl_Obj
inline Tcl_Obj *ObjFromWinString(const WCHAR *pWS) {
  return Tcl_NewUnicodeObj((Tcl_UniChar *)pWS, -1);
}

// ObjToWinStringDS - not defined
// If TCL_UTF_MAX <= 3, caller should just use Tcl_GetUnicode avoiding a copy.

// Copy a Tcl_Obj to a WCHAR buffer. Always terminates the buffer.
// Returns the number of characters copied not including the terminator.
// Returns -1 if buffer too small.
inline Tcl_Size ObjToWinStringBuffer(Tcl_Obj *pObj, WCHAR *pBuf, Tcl_Size max_len) {
  Tcl_Size len;
  const Tcl_UniChar *utf16 = Tcl_GetUnicodeFromObj(pObj, &len);
  // Remember len does not include the terminator.
  if (len >= max_len)
    return -1;
  memcpy(pBuf, utf16, (len+1) * sizeof(WCHAR));
  return len;
}

// Returns a std::wstring with the content of a Tcl_Obj.
inline std::wstring ObjToWString(Tcl_Obj *pObj) {
  // Note this returns any embedded nuls in Tcl_Obj as well!
  int len;
  Tcl_UniChar *p = Tcl_GetUnicodeFromObj(pObj, &len);
  return std::wstring((wchar_t *)p, len);
}

// WCHAR string -> HGLOBAL. Panics on memory allocation failure.
// Always returns non-NULL. HGLOBAL must be GlobalFree'd.
inline HGLOBAL ObjToWinStringHGLOBAL(Tcl_Obj *pObj) {
  Tcl_Size len;
  WCHAR *to;
  const Tcl_UniChar *from = Tcl_GetUnicodeFromObj(pObj, &len);
  HGLOBAL hGlobal = GlobalAlloc(GHND, (len+1) * sizeof(WCHAR));
  if (hGlobal == NULL) {
    // Tcl panics on alloc failures and so do we.
    Tcl_Panic("Unable to allocate GlobalALloc memory.");
  }
  to = (WCHAR *)GlobalLock(hGlobal);
  memcpy(to, from, (len+1) * sizeof(WCHAR));
  GlobalUnlock(hGlobal);
  return hGlobal;
}

#else

// WCHAR string -> Tcl_Obj
inline Tcl_Obj *ObjFromWinString(const WCHAR *pWS) {
  Tcl_DString ds;
  Tcl_DStringInit(&ds);
  Tcl_WCharToUtfDString(pWS, -1, &ds);
  return Tcl_DStringToObj(&ds); // No need to free ds
}

// In Tcl 9, Tcl_UniChar is 32-bits. This is a helper to encode a Tcl_Obj to
// UTF-16, which is what Windows uses. pDS is assumed uninitialized on entry.
// Caller should Tcl_DStringFree the result.
// Returns number of *characters* not including nul terminator.
inline Tcl_Size ObjToWinStringDS(Tcl_Obj *pObj, Tcl_DString *pDS) {
  Tcl_Size type_len;
  Tcl_DStringInit(pDS);
  const char *type_str = Tcl_GetStringFromObj(pObj, &type_len);
  Tcl_UtfToWCharDString(type_str, type_len, pDS);
  return (Tcl_DStringLength(pDS)/sizeof(WCHAR)); // Not including terminator
};

// Copy a Tcl_Obj to a WCHAR buffer. Always terminates the buffer.
// Returns the number of characters copied not including the terminator.
// Returns -1 if buffer too small.
inline Tcl_Size ObjToWinStringBuffer(Tcl_Obj *pObj, WCHAR *pBuf, Tcl_Size max_len) {
  Tcl_DString ds;
  Tcl_Size len = ObjToWinStringDS(pObj, &ds);
  // Remember len does not include the terminator.
  if (len >= max_len)
    return -1;
  memcpy(pBuf, Tcl_DStringValue(&ds), (len+1) * sizeof(WCHAR));
  return len;
}

// Returns a std::wstring with the content of a Tcl_Obj.
inline std::wstring ObjToWString(Tcl_Obj *pObj) {
  Tcl_DString ds;
  Tcl_Size len = ObjToWinStringDS(pObj, &ds);
   return std::wstring((WCHAR *)Tcl_DStringValue(&ds));
}

// WCHAR string -> HGLOBAL. Panics on memory allocation failure.
// Always returns non-NULL. HGLOBAL must be GlobalFree'd.
inline HGLOBAL ObjToWinStringHGLOBAL(Tcl_Obj *pObj) {
  Tcl_DString ds;
  Tcl_Size len = ObjToWinStringDS(pObj, &ds); // Does not include terminator
  WCHAR *to;
  HGLOBAL hGlobal = GlobalAlloc(GHND, (len+1) * sizeof(WCHAR));
  if (hGlobal == NULL) {
    // Tcl panics on alloc failures and so do we.
    Tcl_Panic("Unable to allocate GlobalALloc memory.");
  }
  to = (WCHAR *)GlobalLock(hGlobal);
  memcpy(to, Tcl_DStringValue(&ds), (len+1) * sizeof(WCHAR));
  GlobalUnlock(hGlobal);
  return hGlobal;
}



#endif


/*****************************************************************************
 * Data Object Class.
 ****************************************************************************/

// Helper function to perform a "deep" copy of a FORMATETC
static void DeepCopyFormatEtc(FORMATETC *dest, FORMATETC *source) {
  // copy the source FORMATETC into dest
  *dest = *source;
  if(source->ptd) {
    // allocate memory for the DVTARGETDEVICE if necessary
    dest->ptd = (DVTARGETDEVICE*)CoTaskMemAlloc(sizeof(DVTARGETDEVICE));
    // copy the contents of the source DVTARGETDEVICE into dest->ptd
    *(dest->ptd) = *(source->ptd);
  }
}; /* DeepCopyFormatEtc */

HRESULT CreateEnumFormatEtc(UINT nNumFormats, FORMATETC *pFormatEtc,
                            IEnumFORMATETC **ppEnumFormatEtc);

class TkDND_FormatEtc : public IEnumFORMATETC {
public:

    // IUnknown members
    HRESULT __stdcall QueryInterface(REFIID iid, void ** ppvObject) {
      // check to see what interface has been requested
      if (iid == IID_IEnumFORMATETC || iid == IID_IUnknown) {
        AddRef();
        *ppvObject = this;
        return S_OK;
      } else {
        *ppvObject = 0;
        return E_NOINTERFACE;
      }
    }; /* QueryInterface */

    ULONG __stdcall AddRef(void) {
      // increment object reference count
      return InterlockedIncrement(&m_lRefCount);
    }; /* AddRef */

    ULONG __stdcall Release (void) {
      // decrement object reference count
      LONG count = InterlockedDecrement(&m_lRefCount);
      if (count == 0) {
        delete this;
        return 0;
      } else {
        return count;
      }
    }; /* Release */

    // IEnumFormatEtc members
    HRESULT __stdcall Next(ULONG celt, FORMATETC *pFormatEtc,
                           ULONG *pceltFetched) {
      ULONG copied  = 0;
      // validate arguments
      if(celt == 0 || pFormatEtc == 0) return E_INVALIDARG;
      // copy FORMATETC structures into caller's buffer
      while (m_nIndex < m_nNumFormats && copied < celt) {
        DeepCopyFormatEtc(&pFormatEtc[copied], &m_pFormatEtc[m_nIndex]);
        copied++; m_nIndex++;
      }
      // store result
      if (pceltFetched != 0) *pceltFetched = copied;
      // did we copy all that was requested?
      return (copied == celt) ? S_OK : S_FALSE;
    }; /* Next */

    HRESULT __stdcall Skip(ULONG celt) {
      if ((m_nIndex + celt) >= m_nNumFormats) return S_FALSE;
      m_nIndex += celt;
      return S_OK;
    }; /* Skip */

    HRESULT __stdcall Reset(void) {
      m_nIndex = 0;
      return S_OK;
    }; /* Reset */

    HRESULT __stdcall Clone(IEnumFORMATETC ** ppEnumFormatEtc) {
      HRESULT hResult;
      // make a duplicate enumerator
      hResult = CreateEnumFormatEtc(m_nNumFormats, m_pFormatEtc,
                                    ppEnumFormatEtc);
      if (hResult == S_OK) {
        // manually set the index state
        ((TkDND_FormatEtc *) *ppEnumFormatEtc)->m_nIndex = m_nIndex;
      }
      return hResult;
    }; /* Clone */

    // Construction / Destruction
    TkDND_FormatEtc(FORMATETC *pFormatEtc, int nNumFormats) {
      m_lRefCount   = 1;
      m_nIndex      = 0;
      m_nNumFormats = nNumFormats;
      m_pFormatEtc  = new FORMATETC[nNumFormats];

      // copy the FORMATETC structures
      for (int i = 0; i < nNumFormats; i++) {
        DeepCopyFormatEtc(&m_pFormatEtc[i], &pFormatEtc[i]);
      }
    }; /* TkDND_FormatEtc */

    virtual ~TkDND_FormatEtc() {
       if (m_pFormatEtc) {
         for(ULONG i = 0; i < m_nNumFormats; i++) {
           if(m_pFormatEtc[i].ptd) CoTaskMemFree(m_pFormatEtc[i].ptd);
         }
         delete[] m_pFormatEtc;
       }
    }; /* ~TkDND_FormatEtc */

private:
    LONG  m_lRefCount;        // Reference count for this COM interface
    ULONG m_nIndex;           // current enumerator index
    ULONG m_nNumFormats;      // number of FORMATETC members
    FORMATETC * m_pFormatEtc; // array of FORMATETC objects
}; /* TkDND_FormatEtc */

// "Drop-in" replacement for SHCreateStdEnumFmtEtc.
HRESULT CreateEnumFormatEtc(UINT nNumFormats, FORMATETC *pFormatEtc,
                            IEnumFORMATETC **ppEnumFormatEtc) {
  if(nNumFormats==0 || pFormatEtc==0 || ppEnumFormatEtc==0) return E_INVALIDARG;
  *ppEnumFormatEtc = new TkDND_FormatEtc(pFormatEtc, nNumFormats);
  return (*ppEnumFormatEtc) ? S_OK : E_OUTOFMEMORY;
}; /* CreateEnumFormatEtc */


class TkDND_DataObject : public IDataObject {
public:

    // IUnknown members
    HRESULT __stdcall QueryInterface(REFIID iid, void ** ppvObject) {
      // check to see what interface has been requested
      if (iid == IID_IDataObject || iid == IID_IUnknown) {
        AddRef();
        *ppvObject = this;
        return S_OK;
      } else {
        *ppvObject = 0;
        return E_NOINTERFACE;
      }
    }; /* QueryInterface */

    ULONG __stdcall AddRef(void) {
      // increment object reference count
      return InterlockedIncrement(&m_lRefCount);
    }; /* AddRef */

    ULONG __stdcall Release(void) {
      // decrement object reference count
      LONG count = InterlockedDecrement(&m_lRefCount);
      if (count == 0) {
        delete this; return 0;
      } else {
         return count;
      }
    }; /* Release */

    // IDataObject members
    HRESULT __stdcall GetData(FORMATETC *pFormatEtc, STGMEDIUM *pMedium) {
      int idx;
      // try to match the specified FORMATETC with one of our supported formats
      if ((idx = LookupFormatEtc(pFormatEtc)) == -1) return DV_E_FORMATETC;

      // found a match - transfer data into supplied storage medium
      pMedium->tymed           = m_pFormatEtc[idx].tymed;
      pMedium->pUnkForRelease  = 0;

      // copy the data into the caller's storage medium
      switch(m_pFormatEtc[idx].tymed) {
        case TYMED_HGLOBAL:
          pMedium->hGlobal = DupGlobalMem(m_pStgMedium[idx].hGlobal);
          break;
        default:
          return DV_E_FORMATETC;
      }
      return S_OK;
    }; /* GetData */

    HRESULT __stdcall GetDataHere(FORMATETC *pFormatEtc, STGMEDIUM *pmedium) {
      return DATA_E_FORMATETC;
    }; /* GetDataHere */


    HRESULT __stdcall QueryGetData(FORMATETC *pFormatEtc) {
      return (LookupFormatEtc(pFormatEtc) == -1) ? DV_E_FORMATETC : S_OK;
    };

    HRESULT __stdcall GetCanonicalFormatEtc(FORMATETC *pFormatEct,
                      FORMATETC *pFormatEtcOut) {
      // Apparently we have to set this field to NULL even though we don't do
      // anything else.
      pFormatEtcOut->ptd = NULL;
      return E_NOTIMPL;
    }; /* GetCanonicalFormatEtc */

    HRESULT __stdcall SetData(FORMATETC *pFormatEtc, STGMEDIUM *pMedium,
                              BOOL fRelease) {
      return E_NOTIMPL;
    }; /* SetData */

    HRESULT __stdcall EnumFormatEtc(DWORD dwDirection,
                                    IEnumFORMATETC **ppEnumFormatEtc) {
      // only the get direction is supported for OLE
      if(dwDirection == DATADIR_GET) {
        // for Win2k+ you can use the SHCreateStdEnumFmtEtc API call, however
        // to support all Windows platforms we need to implement
        // IEnumFormatEtc ourselves.
        return CreateEnumFormatEtc(m_nNumFormats,m_pFormatEtc,ppEnumFormatEtc);
      } else {
        // the direction specified is not supported for drag+drop
        return E_NOTIMPL;
      }
    }; /* EnumFormatEtc */

    HRESULT __stdcall DAdvise(FORMATETC *pFormatEtc,  DWORD advf,
                              IAdviseSink *, DWORD *) {
      return OLE_E_ADVISENOTSUPPORTED;
    }; /* DAdvise */

    HRESULT __stdcall DUnadvise(DWORD dwConnection) {
      return OLE_E_ADVISENOTSUPPORTED;
    }; /* DUnadvise */

    HRESULT __stdcall EnumDAdvise(IEnumSTATDATA **ppEnumAdvise) {
      return OLE_E_ADVISENOTSUPPORTED;
    }; /* EnumDAdvise */;

    // Constructor / Destructor
    TkDND_DataObject(FORMATETC *fmtetc, STGMEDIUM *stgmed, int count) {
      // reference count must ALWAYS start at 1
      m_lRefCount    = 1;
      m_nNumFormats  = count;

      m_pFormatEtc   = new FORMATETC[count];
      m_pStgMedium   = new STGMEDIUM[count];

      for(int i = 0; i < count; i++)
      {
          m_pFormatEtc[i] = fmtetc[i];
          m_pStgMedium[i] = stgmed[i];
      }
      currentFormat = 0;
    }; /* TkDND_DataObject */

    virtual ~TkDND_DataObject() {
      // cleanup
      if(m_pFormatEtc) delete[] m_pFormatEtc;
      if(m_pStgMedium) delete[] m_pStgMedium;
    }; /* ~TkDND_DataObject */

    // Custom functions.
    UINT GetCurrentFormat(void) {
      return currentFormat;
    }; /* GetCurrentFormat */

private:

    // any private members and functions
    LONG       m_lRefCount;
    FORMATETC *m_pFormatEtc;
    STGMEDIUM *m_pStgMedium;
    LONG       m_nNumFormats;
    UINT       currentFormat;

    int LookupFormatEtc(FORMATETC *pFormatEtc) {
      // check each of our formats in turn to see if one matches
      for(int i = 0; i < m_nNumFormats; i++) {
        // The AND operator is used here because the FORMATETC::tymed member
        // is actually a bit-flag which can contain more than one value.
        // For example, the caller of QueryGetData could quite legitimetly
        // specify a FORMATETC::tymed value of (TYMED_HGLOBAL | TYMED_ISTREAM)
        // , which basically means "Do you support HGLOBAL or IStream?".
        if ((m_pFormatEtc[i].tymed    &  pFormatEtc->tymed)   &&
             m_pFormatEtc[i].cfFormat == pFormatEtc->cfFormat &&
             m_pFormatEtc[i].dwAspect == pFormatEtc->dwAspect) {
             currentFormat = m_pFormatEtc[i].cfFormat;
             // return index of stored format
             return i;
        }
      }
      // error, format not found
      return -1;
    }; /* LookupFormatEtc */

    HGLOBAL DupGlobalMem(HGLOBAL hMem) {
      SIZE_T  len    = GlobalSize(hMem);
      PVOID   source = GlobalLock(hMem);
      PVOID   dest   = GlobalAlloc(GMEM_FIXED, len);
      memcpy(dest, source, len);
      GlobalUnlock(hMem);
      return dest;
    }; /* DupGlobalMem */

}; /* TkDND_DataObject */


/*****************************************************************************
 * Drop Target Related Class.
 ****************************************************************************/
class TkDND_DropTarget;
typedef class TkDND_DropTarget *PTDropTarget;
class TkDND_DropTarget: public IDropTarget {
  private:
    LONG                 m_lRefCount; /* Reference count */
    Tcl_Interp          *interp;
    Tk_Window            tkwin;
    std::wstring         tempDropDir;

    Tcl_Obj             *typelist, *actionlist, *codelist;
#ifdef DND_USE_ACTIVE
    bool                 drop_active;
#endif

#ifdef DND_DRAGOVER_SKIP_EVENTS
    DWORD                last_keyState;
    LONG                 last_X, last_Y;
    DWORD                last_effect;
    bool                 skip_if_unchanged;
#endif /* DND_DRAGOVER_SKIP_EVENTS */


    // Returns an empty string if cfFormat cannot be mapped to a name.
    const std::wstring FormatName(UINT cfFormat) {
      for (int i = 0; ClipboardFormatBook[i].name != 0; i++) {
        if (ClipboardFormatBook[i].cfFormat == cfFormat)
                     return ClipboardFormatBook[i].name;
      }
      wchar_t buf[MAX_PATH+1];
      size_t len = GetClipboardFormatNameW(cfFormat, buf, MAX_PATH+1);
      if (len == 0 || len >= MAX_PATH) {
        // Invalid format or truncated name returned.
        buf[0] = L'\0';
      }
      return buf;
    }; /* FormatName */

  public:
    TkDND_DropTarget(Tcl_Interp *_interp, Tk_Window _tkwin) :
      m_lRefCount(1), interp(_interp), tkwin(_tkwin),
#ifdef DND_USE_ACTIVE
      drop_active(false),
#endif
      typelist(NULL), actionlist(NULL), codelist(NULL)
#ifdef DND_DRAGOVER_SKIP_EVENTS
      , last_effect(DROPEFFECT_NONE), last_X(0), last_Y(0), last_keyState(0),
      skip_if_unchanged(false)
#endif /* DND_DRAGOVER_SKIP_EVENTS */
    {
    }; /* TkDND_DropTarget */

    virtual ~TkDND_DropTarget(void) {
      if (typelist   != NULL) Tcl_DecrRefCount(typelist);
      if (actionlist != NULL) Tcl_DecrRefCount(actionlist);
      if (codelist   != NULL) Tcl_DecrRefCount(codelist);
    }; /* ~TkDND_DropTarget */

    /* IUnknown interface members */
    HRESULT __stdcall QueryInterface(REFIID iid, void ** ppvObject) {
      // check to see what interface has been requested
      if (iid == IID_IEnumFORMATETC || iid == IID_IUnknown) {
        AddRef();
        *ppvObject = this;
        return S_OK;
      } else {
        *ppvObject = 0;
        return E_NOINTERFACE;
      }
    }; /* QueryInterface */

    ULONG __stdcall AddRef(void) {
      // increment object reference count
      return InterlockedIncrement(&m_lRefCount);
    }; /* AddRef */

    ULONG __stdcall Release(void) {
      // decrement object reference count
      LONG count = InterlockedDecrement(&m_lRefCount);
      if (count == 0) {
        delete this; return 0;
      } else {
        return count;
      }
    }; /* Release */

    /*
     * Helper functions...
     */
    Tcl_Obj *GetPressedKeys(DWORD grfKeyState) {
      Tcl_Obj *pressedkeys = Tcl_NewListObj(0, NULL);
      // MK_CONTROL, MK_SHIFT, MK_ALT, MK_RBUTTON, MK_LBUTTON
      if (grfKeyState & MK_CONTROL)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("ctrl", -1));
      if (grfKeyState & MK_SHIFT)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("shift",-1));
      if (grfKeyState & MK_ALT)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("alt", -1));
      if (grfKeyState & MK_RBUTTON)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("3", -1));
      if (grfKeyState & MK_MBUTTON)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("2", -1));
      if (grfKeyState & MK_LBUTTON)
        Tcl_ListObjAppendElement(NULL,pressedkeys,Tcl_NewStringObj("1", -1));
      return pressedkeys;
    }; /* GetPressedKeys */

    /* Returns a new Tcl_Obj, or NULL. Returned object must be freed! */
    Tcl_Obj *GetData(IDataObject *pDataObject, Tcl_Obj* typeObj) {
      Tcl_Obj *data = NULL;
      int i, status, index;
      static const char *DropTypes[] = {
        "CF_UNICODETEXT", "CF_TEXT", "CF_HDROP",
        "CF_HTML", "HTML Format",
        "CF_RTF", "CF_RTFTEXT", "Rich Text Format",
        "FileGroupDescriptorW", "FileGroupDescriptor",
        "UniformResourceLocator", "UniformResourceLocatorW",
        (char *) NULL
      };
      enum droptypes {
        TYPE_CF_UNICODETEXT, TYPE_CF_TEXT, TYPE_CF_HDROP,
        TYPE_CF_HTML, TYPE_CF_HTMLFORMAT,
        TYPE_CF_RTF, TYPE_CF_RTFTEXT, TYPE_CF_RICHTEXTFORMAT,
        TYPE_FILEGROUPDESCRIPTORW, TYPE_FILEGROUPDESCRIPTOR,
        TYPE_UNIFORMRESOURCELOCATOR, TYPE_UNIFORMRESOURCELOCATORW
      };
      status = Tcl_GetIndexFromObj(interp, typeObj,
                           (const char **)DropTypes, "droptypes", 0, &index);
      if (status == TCL_OK) {
        switch ((enum droptypes) index) {
          case TYPE_CF_UNICODETEXT:
            data = GetData_CF_UNICODETEXT(pDataObject); break;
          case TYPE_CF_HTML:
          case TYPE_CF_HTMLFORMAT:
          case TYPE_CF_RTF:
          case TYPE_CF_RTFTEXT:
          case TYPE_CF_RICHTEXTFORMAT:
            data = GetData_Bytearray(pDataObject, typeObj);
            break;
          case TYPE_CF_TEXT:
            data = GetData_CF_TEXT(pDataObject); break;
          case TYPE_CF_HDROP:
            data = GetData_CF_HDROP(pDataObject); break;
          case TYPE_UNIFORMRESOURCELOCATOR: // Fall through
          case TYPE_UNIFORMRESOURCELOCATORW:
            data = GetData_UniformResourceLocatorW(pDataObject); break;
          case TYPE_FILEGROUPDESCRIPTOR: /* fall through */
          case TYPE_FILEGROUPDESCRIPTORW: {
            // Get a directory where we can store files...
            Tcl_Obj *objv[1];
            objv[0]=Tcl_NewStringObj("tkdnd::GetDropFileTempDirectory", -1);
            TkDND_Status_Eval(1);
            if (status == TCL_OK) {
              tempDropDir = ObjToWString(Tcl_GetObjResult(interp));
              if (index == TYPE_FILEGROUPDESCRIPTORW)
                data = GetData_FileGroupDescriptorW(pDataObject);
              else
                data = GetData_FileGroupDescriptor(pDataObject);
            }
            break;
          }
        }
      }
      return data;
    }; /* GetData */

    DWORD SendDragEnter(IDataObject *pDataObject,
                        POINTL pt, DWORD grfKeyState) {
      Tcl_Obj *objv[9], *result, *data = NULL;
      DWORD effect = DROPEFFECT_NONE;
      static const char *DropActions[] = {
        "copy", "move", "link", "ask",  "private", "refuse_drop",
        "default",
        (char *) NULL
      };
      enum dropactions {
        ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
        refuse_drop, ActionDefault
      };
      int i, status, index = (enum dropactions) refuse_drop;
#ifdef DND_USE_ACTIVE
      if (drop_active) {
        return DROPEFFECT_COPY;
      }
#endif
      /* Get a type to convert data... */
      objv[0] = Tcl_NewStringObj("::tkdnd::olednd::GetDataType", -1);
      objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
      objv[2] = typelist;
      TkDND_Status_Eval(3);
      if (status == TCL_OK) {
        /* Get the returned type... */
        result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
        data = GetData(pDataObject, result);
        Tcl_DecrRefCount(result);
      }
      if (data == NULL) data = Tcl_NewStringObj("", 0);
      objv[0] = Tcl_NewStringObj("::tkdnd::olednd::HandleDragEnter", -1);
      objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
      objv[2] = typelist;
      objv[3] = actionlist;
      objv[4] = GetPressedKeys(grfKeyState);
      objv[5] = Tcl_NewLongObj(pt.x);
      objv[6] = Tcl_NewLongObj(pt.y);
      objv[7] = codelist;
      objv[8] = data;
      TkDND_Status_Eval(9);
      if (status == TCL_OK) {
        /* Get the returned action... */
        result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
        status = Tcl_GetIndexFromObj(interp, result, (const char **)DropActions,
                                     "dropactions", 0, &index);
        Tcl_DecrRefCount(result);
        if (status != TCL_OK) index = (enum dropactions) ActionDefault;
      }
      switch ((enum dropactions) index) {
        case ActionCopy:    effect = DROPEFFECT_COPY; break;
        case ActionMove:    effect = DROPEFFECT_MOVE; break;
        case ActionLink:    effect = DROPEFFECT_LINK; break;
        case ActionAsk:     effect = DROPEFFECT_NONE; break;
        case ActionPrivate: effect = DROPEFFECT_NONE; break;
        case ActionDefault: effect = DROPEFFECT_COPY; break;
        case refuse_drop:   effect = DROPEFFECT_NONE; /* Refuse drop. */
      }
#ifdef DND_USE_ACTIVE
      drop_active = true;
#endif
      return effect;
    }; /* SendDragEnter */

    DWORD SendDragOver(POINTL pt, DWORD grfKeyState) {
      Tcl_Obj *objv[8], *result;
      DWORD effect = DROPEFFECT_NONE;
      static const char *DropActions[] = {
        "copy", "move", "link", "ask",  "private", "refuse_drop",
        "default",
        (char *) NULL
      };
      enum dropactions {
        ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
        refuse_drop, ActionDefault
      };
      int i, status, index = (enum dropactions) refuse_drop;
#ifdef DND_USE_ACTIVE
      if (!drop_active) {
        return effect;
      }
#endif

#ifdef DND_DRAGOVER_SKIP_EVENTS
      /* If the state has not changed, we can skip some events, to skip some CPU
       * load. Note that SendDragOver is called very frequently, and has to
       * respond as fast as possible... */
      if (skip_if_unchanged &&
          (pt.x == last_X) && (pt.y == last_Y) &&
          (grfKeyState == last_keyState)) {
        skip_if_unchanged = false;
        return last_effect;
      }

      skip_if_unchanged = false;
      last_X = pt.x; last_Y = pt.y; last_keyState = grfKeyState;
#endif /* DND_DRAGOVER_SKIP_EVENTS */

      objv[0] = Tcl_NewStringObj("::tkdnd::olednd::HandleDragOver", -1);
      objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
      objv[2] = GetPressedKeys(grfKeyState);
      objv[3] = Tcl_NewLongObj(pt.x);
      objv[4] = Tcl_NewLongObj(pt.y);
      TkDND_Status_Eval(5);
      if (status == TCL_OK) {
        /* Get the returned action... */
        result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
        status = Tcl_GetIndexFromObj(interp, result, (const char **)DropActions,
                                     "dropactions", 0, &index);
        Tcl_DecrRefCount(result);
        if (status != TCL_OK) index = (enum dropactions) ActionDefault;
#ifdef DND_DRAGOVER_SKIP_EVENTS
        skip_if_unchanged = true;
#endif /* DND_DRAGOVER_SKIP_EVENTS */
      }
      switch ((enum dropactions) index) {
        case ActionCopy:    effect = DROPEFFECT_COPY; break;
        case ActionMove:    effect = DROPEFFECT_MOVE; break;
        case ActionLink:    effect = DROPEFFECT_LINK; break;
        case ActionAsk:     effect = DROPEFFECT_NONE; break;
        case ActionPrivate: effect = DROPEFFECT_NONE; break;
        case ActionDefault: effect = DROPEFFECT_COPY; break;
        case refuse_drop:   effect = DROPEFFECT_NONE; /* Refuse drop. */
      }
#ifdef DND_DRAGOVER_SKIP_EVENTS
      last_effect = effect;
#endif /* DND_DRAGOVER_SKIP_EVENTS */
      return effect;
    }; /* SendDragOver */

    DWORD SendDrop(POINTL pt, DWORD grfKeyState, Tcl_Obj *type, Tcl_Obj *data) {
      Tcl_Obj *objv[8], *result;
      DWORD effect = DROPEFFECT_NONE;
      static const char *DropActions[] = {
        "copy", "move", "link", "ask",  "private", "refuse_drop",
        "default",
        (char *) NULL
      };
      enum dropactions {
        ActionCopy, ActionMove, ActionLink, ActionAsk, ActionPrivate,
        refuse_drop, ActionDefault
      };
      int i, status, index = (enum dropactions) refuse_drop;
#ifdef DND_USE_ACTIVE
      if (!drop_active) {
        return effect;
      }
      drop_active = false;
#endif
      objv[0] = Tcl_NewStringObj("::tkdnd::olednd::HandleDrop", -1);
      objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
      objv[2] = GetPressedKeys(grfKeyState);
      objv[3] = Tcl_NewLongObj(pt.x);
      objv[4] = Tcl_NewLongObj(pt.y);
      objv[5] = type;
      objv[6] = data;
      TkDND_Status_Eval(7);
      if (status == TCL_OK) {
        /* Get the returned action... */
        result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
        status = Tcl_GetIndexFromObj(interp, result, (const char **)DropActions,
                                     "dropactions", 0, &index);
        Tcl_DecrRefCount(result);
        if (status != TCL_OK) index = (enum dropactions) refuse_drop;
      }
      switch ((enum dropactions) index) {
        case ActionCopy:    effect = DROPEFFECT_COPY; break;
        case ActionMove:    effect = DROPEFFECT_MOVE; break;
        case ActionLink:    effect = DROPEFFECT_LINK; break;
        case ActionAsk:     effect = DROPEFFECT_NONE; break;
        case ActionPrivate: effect = DROPEFFECT_NONE; break;
        case ActionDefault: effect = DROPEFFECT_COPY; break;
        case refuse_drop:   effect = DROPEFFECT_NONE; /* Refuse drop. */
      }
      return effect;
    }; /* SendDrop */

    void SendDragLeave(void) {
      Tcl_Obj *objv[2];
      int i;
#ifdef DND_USE_ACTIVE
      if (drop_active) {
#endif
        objv[0] = Tcl_NewStringObj("::tkdnd::olednd::HandleDragLeave", -1);
        objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
        TkDND_Eval(2);
#ifdef DND_USE_ACTIVE
      }
      drop_active = false;
#endif
    }; /* SendDragLeave */

    /*
     * IDropTarget interface members.
     */

    STDMETHODIMP DragEnter(IDataObject *pDataObject, DWORD grfKeyState,
                           POINTL pt, DWORD *pdwEffect) {
      // We want to get:
      //   a) The types supported by the drag source.
      //   b) The actions supported by the drag source.
      //   c) The state of the keyboard modifier keys.
      // And we must return:
      //   a) The preferred action.

      IEnumFORMATETC *pEF;
      FORMATETC fetc;
      HRESULT hr;

      /*
       * Windows will send DragOver events even for coordinates that are
       * hidden by other windows. So we have to simulate Enter/Leave events,
       * thus we must remember the drag source details, like types and
       * actions...
       */
      if (typelist   != NULL) Tcl_DecrRefCount(typelist);
      if (actionlist != NULL) Tcl_DecrRefCount(actionlist);
      if (codelist   != NULL) Tcl_DecrRefCount(codelist);

      typelist    = Tcl_NewListObj(0, NULL); Tcl_IncrRefCount(typelist);
      actionlist  = Tcl_NewListObj(0, NULL); Tcl_IncrRefCount(actionlist);
      codelist    = Tcl_NewListObj(0, NULL); Tcl_IncrRefCount(codelist);
#ifdef DND_USE_ACTIVE
      drop_active = false;
#endif

      /*
       * Get the types supported by the drag source.
       */
      hr = pDataObject->EnumFormatEtc(DATADIR_GET, &pEF);
      if (hr != S_OK) {
        // The drag source does not support any formats.
        *pdwEffect = DROPEFFECT_NONE;
        return S_OK;
      }

      while (pEF->Next(1, &fetc, NULL) == S_OK) {
        if (pDataObject->QueryGetData(&fetc) == S_OK) {
          const std::wstring cf_name = FormatName(fetc.cfFormat);
          if (cf_name.empty())
            continue; // Skip unsupported format.
          Tcl_ListObjAppendElement(NULL, typelist, ObjFromWinString(cf_name.c_str()));
          /* Store the numeric code of the format */
          Tcl_ListObjAppendElement(NULL, codelist,
                                   Tcl_ObjPrintf("0x%08x", fetc.cfFormat));
        } // if (pIDataSource->QueryGetData(&fetc) == S_OK)
      } // while (pEF->Next(1, &fetc, NULL) == S_OK)

      // Get the actions supported by the drag source.
      // DROPEFFECT_COPY, DROPEFFECT_MOVE, DROPEFFECT_LINK
      if (*pdwEffect & DROPEFFECT_COPY)
        Tcl_ListObjAppendElement(NULL,actionlist,Tcl_NewStringObj("copy", -1));
      if (*pdwEffect & DROPEFFECT_MOVE)
        Tcl_ListObjAppendElement(NULL,actionlist,Tcl_NewStringObj("move", -1));
      if (*pdwEffect & DROPEFFECT_LINK)
        Tcl_ListObjAppendElement(NULL,actionlist,Tcl_NewStringObj("link", -1));

      // We are ready to pass the info to the Tcl level, and get the desired
      // action.
      *pdwEffect = SendDragEnter(pDataObject, pt, grfKeyState);
      return S_OK;
    }; /* DragEnter */

    STDMETHODIMP DragOver(DWORD grfKeyState, POINTL pt, DWORD *pdwEffect) {
      /*
       * This event will be delivered when the mouse is over tkwin. Ensure that
       * the part the mouse is in, is not overlapped by another window...
       */
#if 0
      if (Tk_CoordsToWindow(pt.x, pt.y, tkwin) != tkwin) {
        SendDragLeave();
        *pdwEffect = DROPEFFECT_NONE;
      } else {
        SendDragEnter(pt, grfKeyState);
        *pdwEffect = SendDragOver(pt, grfKeyState);
      }
#else
      *pdwEffect = SendDragOver(pt, grfKeyState);
#endif
      return S_OK;
    }; /* DragOver */

    STDMETHODIMP DragLeave(void) {
      SendDragLeave();
      if (typelist   != NULL) {Tcl_DecrRefCount(typelist);   typelist   = NULL;}
      if (actionlist != NULL) {Tcl_DecrRefCount(actionlist); actionlist = NULL;}
      if (codelist   != NULL) {Tcl_DecrRefCount(codelist);   codelist   = NULL;}
      return S_OK;
    }; /* DragLeave */

    STDMETHODIMP Drop(IDataObject *pDataObject, DWORD grfKeyState,
                      POINTL pt, DWORD *pdwEffect) {
      Tcl_Obj *objv[7], *result, **typeObj, *data = NULL, *type = NULL;
      int i, type_index, status;
      Tcl_Size typeObjc;
      *pdwEffect = DROPEFFECT_NONE;
#ifdef DND_USE_ACTIVE
      if (!drop_active) return S_OK;
      drop_active = false;
#endif
      // Get the drop format list.
      objv[0] = Tcl_NewStringObj("::tkdnd::olednd::GetDragSourceCommonTypes", -1);
      objv[1] = Tcl_NewStringObj(Tk_PathName(tkwin), -1);
      TkDND_Status_Eval(2); if (status != TCL_OK) return S_OK;
      result = Tcl_GetObjResult(interp); Tcl_IncrRefCount(result);
      status = Tcl_ListObjGetElements(interp, result, &typeObjc, &typeObj);
      if (status != TCL_OK) {Tcl_DecrRefCount(result); return S_OK;}
      // Try to get the data.
      for (type_index = 0; type_index < typeObjc; ++type_index) {
        data = GetData(pDataObject, typeObj[type_index]);
        if (data != NULL) {
          type = typeObj[type_index]; Tcl_IncrRefCount(type);
          break; // We have got the data!
        }
      }

      if (data == NULL) {
        // We failed to get the data.
        type = typeObj[0]; Tcl_IncrRefCount(type);
        data = GetData_Bytearray(pDataObject, type);
      }
      Tcl_DecrRefCount(result);

      if (data == NULL) {
        // We have already set *pdwEffect above to DROPEFFECT_NONE.
        return S_OK;
      }
      // We are ready to pass the info to the Tcl level, and get the desired
      // action.
      Tcl_IncrRefCount(data);
      *pdwEffect = SendDrop(pt, grfKeyState, type, data);
      Tcl_DecrRefCount(type); Tcl_DecrRefCount(data);
      return S_OK;
    }; /* Drop */

    /* TkDND additional interface methods */
private:

    // Returns NULL on errors.
    Tcl_Obj *GetData_Bytearray(IDataObject *pDataObject, Tcl_Obj *formatObj) {
      STGMEDIUM StgMed;
      FORMATETC fmte = { 0, (DVTARGETDEVICE FAR *)NULL,
                         DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
      Tcl_Obj *result;
      unsigned char *bytes;
      std::wstring fmt_buf = ObjToWString(formatObj);
      fmte.cfFormat = RegisterClipboardFormatW(fmt_buf.c_str());
      if (fmte.cfFormat == 0) {
        return NULL;
      }
      if (pDataObject->QueryGetData(&fmte) != S_OK ||
          pDataObject->GetData(&fmte, &StgMed) != S_OK ) {
        return NULL;
      }
      bytes = (unsigned char *) GlobalLock(StgMed.hGlobal);
      result = Tcl_NewByteArrayObj(bytes, (Tcl_Size) GlobalSize(StgMed.hGlobal));
      GlobalUnlock(StgMed.hGlobal);
      ReleaseStgMedium(&StgMed);
      return result;
    }; /* GetData_Bytearray */

    // Returns NULL on errors.
    Tcl_Obj *GetData_CF_UNICODETEXT(IDataObject *pDataObject) {
      STGMEDIUM StgMed;
      memset(&StgMed, 0, sizeof(StgMed));
      FORMATETC fmte = { CF_UNICODETEXT, (DVTARGETDEVICE FAR *)NULL,
                         DVASPECT_CONTENT, -1, TYMED_HGLOBAL };

      if (pDataObject->QueryGetData(&fmte) == S_OK) {
        if (pDataObject->GetData(&fmte, &StgMed) == S_OK) {
          Tcl_Obj *result;
          Tcl_DString ds;
          char *data, *destPtr;
          WCHAR *wstr = (WCHAR *) GlobalLock(StgMed.hGlobal);
          Tcl_DStringInit(&ds);
#if TCL_UTF_MAX < 4
          /* 8.6 Tcl_UniCharToUtfDString does not accept -1 for length!!!*/
          Tcl_UniCharToUtfDString((Tcl_UniChar *)wstr, wcslen(wstr), &ds);
#else
          Tcl_WCharToUtfDString(wstr, -1, &ds);
#endif
          GlobalUnlock(StgMed.hGlobal);
          ReleaseStgMedium(&StgMed);
          /*  Translate CR/LF to LF.  */
          data = destPtr = (char *) Tcl_DStringValue(&ds);
          while (*data) {
              if (data[0] == '\r' && data[1] == '\n') {
                  data++;
              } else {
                  *destPtr++ = *data++;
              }
          }
          *destPtr = '\0';
#if TCL_MAJOR_VERSION < 9
          result = Tcl_NewStringObj(Tcl_DStringValue(&ds), Tcl_DStringLength(&ds));
          Tcl_DStringFree(&ds);
#else
          result = Tcl_DStringToObj(&ds); // No need for Tcl_DStringFree
#endif
          return result;
        }
      }
      return NULL;
    }; /* GetData_CF_UNICODETEXT */

    // Note - we cannot use CF_UNICODE as a substitute for CF_TEXT
    // because and application may very well stick different values in
    // the two!
    Tcl_Obj *GetData_CF_TEXT(IDataObject *pDataObject) {
      STGMEDIUM StgMed;
      FORMATETC fmte = { CF_TEXT, (DVTARGETDEVICE FAR *)NULL,
                         DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
      FORMATETC fmte_locale = { CF_LOCALE, (DVTARGETDEVICE FAR *)NULL,
                         DVASPECT_CONTENT, -1, TYMED_HGLOBAL };

      if (pDataObject->QueryGetData(&fmte) == S_OK) {
        // Determine the encoding to use to convert this text.
        Tcl_Encoding encoding = NULL;
        char *data, *destPtr;
        if (pDataObject->QueryGetData(&fmte_locale) == S_OK) {
          if (pDataObject->GetData(&fmte_locale, &StgMed) == S_OK) {
            Tcl_DString ds;
            int locale;
            // TODO - why use DString instead of a simple buffer
            Tcl_DStringInit(&ds);
            Tcl_DStringAppend(&ds, "cp######", -1);
            data = (char *) GlobalLock(StgMed.hGlobal);
            /*
             * Even though the documentation claims that GetLocaleInfo expects
             * an LCID, on Windows 9x it really seems to expect a LanguageID.
             */
            locale = LANGIDFROMLCID(*((int*) data));
            GetLocaleInfoA(locale, LOCALE_IDEFAULTANSICODEPAGE,
                     Tcl_DStringValue(&ds)+2, Tcl_DStringLength(&ds)-2);
            GlobalUnlock(StgMed.hGlobal);
            encoding = Tcl_GetEncoding(NULL, Tcl_DStringValue(&ds));
            Tcl_DStringFree(&ds);
          }
        }
        if (pDataObject->GetData(&fmte, &StgMed) == S_OK) {
          Tcl_DString ds;

          data = (char *) GlobalLock(StgMed.hGlobal);
          Tcl_DStringInit(&ds);
          Tcl_ExternalToUtfDString(encoding, data, -1, &ds);
          GlobalUnlock(StgMed.hGlobal);
          ReleaseStgMedium(&StgMed);
          if (encoding) Tcl_FreeEncoding(encoding);

          /*  Translate CR/LF to LF.  */
          data = destPtr = Tcl_DStringValue(&ds);
          while (*data) {
              if (data[0] == '\r' && data[1] == '\n') {
                  data++;
              } else {
                  *destPtr++ = *data++;
              }
          }
          *destPtr = '\0';
          Tcl_Obj *result = Tcl_NewStringObj(Tcl_DStringValue(&ds), -1);
          Tcl_DStringFree(&ds);
          return result;
        }
      }
      return NULL;
    }; /* GetData_CF_TEXT */

    Tcl_Obj *GetData_CF_HDROP(IDataObject *pDataObject) {
      STGMEDIUM StgMed;
      memset(&StgMed, 0, sizeof(StgMed));
      StgMed.tymed = TYMED_HGLOBAL;
      FORMATETC fmte = { CF_HDROP, (DVTARGETDEVICE FAR *)NULL,
                         DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
      if (pDataObject->QueryGetData(&fmte) == S_OK) {
        if (pDataObject->GetData(&fmte, &StgMed) == S_OK) {
          HDROP hdrop;
          UINT cFiles;
          WCHAR szFile[MAX_PATH+2];
          Tcl_Obj *result, *item;
          WCHAR *p;

          hdrop = (HDROP) GlobalLock(StgMed.hGlobal);
          if ( NULL == hdrop ) {
            GlobalUnlock(hdrop);
            ReleaseStgMedium(&StgMed);
            return NULL;
          }
          cFiles = ::DragQueryFileW(hdrop, (UINT)-1, NULL, 0);
          result = Tcl_NewListObj(0, NULL);

          for (UINT count = 0; count < cFiles; count++) {
            if (::DragQueryFileW(hdrop, count, szFile, sizeof(szFile)) == 0) {
              /* Empty slot? or error, skip */
              continue;
            }
            for (p = szFile; *p; p++) {
              if (*p == L'\\') *p = L'/';
            }
            item = ObjFromWinString(szFile);
            Tcl_ListObjAppendElement(NULL, result, item);
          }
          GlobalUnlock(StgMed.hGlobal);
          ReleaseStgMedium(&StgMed);
          //if (StgMed.pUnkForRelease) { StgMed.pUnkForRelease->Release(); }
          //else { ::GlobalFree(StgMed.hGlobal); }
          return result;
        }
      }
      return NULL;
    }; /* GetData_CF_HDROP */

#define BLOCK_SIZE 1024
    HRESULT StreamToFile(IStream *stream, const std::wstring& file_name) {
      byte buffer[BLOCK_SIZE];
      unsigned long bytes_read = 0;
      int bytes_written = 0;
      int new_file;
      HRESULT hr = S_OK;

      new_file = _wsopen(file_name.c_str(), O_RDWR | O_BINARY | O_CREAT,
                                  SH_DENYNO, S_IREAD | S_IWRITE);
      if (new_file != -1) {
        do {
          hr = stream->Read(buffer, BLOCK_SIZE, &bytes_read);
          if (bytes_read) bytes_written = _write(new_file, buffer, bytes_read);
        } while (S_OK == hr && bytes_read == BLOCK_SIZE);
        _close(new_file);
        if (bytes_written == 0) _wunlink(file_name.c_str());
      } else {
        hr = HRESULT_FROM_WIN32(errno);
        if (SUCCEEDED(hr))
         hr = E_FAIL;
      }
      return hr;
    }; /* StreamToFile */

    Tcl_Obj *GetData_FileGroupDescriptor(IDataObject *pDataObject) {
      FORMATETC descriptor_fmt = { 0, (DVTARGETDEVICE FAR *) NULL,
                                   DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
      FORMATETC contents_fmt   = { 0, (DVTARGETDEVICE FAR *) NULL,
                                   DVASPECT_CONTENT, -1, TYMED_ISTREAM };
      HRESULT hr = S_OK;
      FILEGROUPDESCRIPTORW *file_group_descriptor;
      FILEDESCRIPTORW file_descriptor;
      Tcl_Encoding encoding = NULL;

      // NOTE: Get File descriptors in WCHAR's so we do not need to mess
      // with encodings. File contents of course are unaffected.
      descriptor_fmt.cfFormat = RegisterClipboardFormat(CFSTR_FILEDESCRIPTORW);
      contents_fmt.cfFormat   = RegisterClipboardFormat(CFSTR_FILECONTENTS);
      if (pDataObject->QueryGetData(&descriptor_fmt) != S_OK) return NULL;
      if (pDataObject->QueryGetData(&contents_fmt) != S_OK) return NULL;
      // Get the descriptor information
      STGMEDIUM storage = {0,0,0};
      hr = pDataObject->GetData(&descriptor_fmt, &storage);
      if (hr != S_OK) return NULL;
      file_group_descriptor = (FILEGROUPDESCRIPTORW *)
                              GlobalLock(storage.hGlobal);
      Tcl_Obj *result = Tcl_NewListObj(file_group_descriptor->cItems, NULL);
      // For each file, get the name and copy the stream to a file
      for (unsigned int file_index = 0;
           file_index < file_group_descriptor->cItems; file_index++) {
        STGMEDIUM content_storage = {TYMED_ISTREAM,0,0};
        file_descriptor = file_group_descriptor->fgd[file_index];
        contents_fmt.lindex = file_index;
        if (pDataObject->GetData(&contents_fmt, &content_storage) == S_OK) {
          // Dump stream into a file.
          std::wstring file_path = tempDropDir + L"\\" + file_descriptor.cFileName;
          GlobalLock(content_storage.pstm);
          if (StreamToFile(content_storage.pstm, file_path) == S_OK) {
            Tcl_ListObjAppendElement(NULL, result,
                                     ObjFromWinString(file_path.c_str()));
          }
          GlobalUnlock(content_storage.pstm);
        }
        ReleaseStgMedium(&content_storage);
      }
      GlobalUnlock(storage.hGlobal);
      ReleaseStgMedium(&storage);
      if (encoding) Tcl_FreeEncoding(encoding);
      return result;
    }; /* GetData_FileGroupDescriptor */

    Tcl_Obj *GetData_FileGroupDescriptorW(IDataObject *pDataObject) {
      FORMATETC descriptor_fmt = { 0, (DVTARGETDEVICE FAR *) NULL,
                                   DVASPECT_CONTENT, -1, TYMED_HGLOBAL };
      FORMATETC contents_fmt   = { 0, (DVTARGETDEVICE FAR *) NULL,
                                   DVASPECT_CONTENT, -1, TYMED_ISTREAM };
      HRESULT hr = S_OK;
      FILEGROUPDESCRIPTORW *file_group_descriptor;
      FILEDESCRIPTORW file_descriptor;

      descriptor_fmt.cfFormat = RegisterClipboardFormat(CFSTR_FILEDESCRIPTORW);
      contents_fmt.cfFormat   = RegisterClipboardFormat(CFSTR_FILECONTENTS);
      if (pDataObject->QueryGetData(&descriptor_fmt) != S_OK) return NULL;
      if (pDataObject->QueryGetData(&contents_fmt) != S_OK) return NULL;
      // Get the descriptor information
      STGMEDIUM storage = {0,0,0};
      hr = pDataObject->GetData(&descriptor_fmt, &storage);
      if (hr != S_OK) return NULL;
      file_group_descriptor = (FILEGROUPDESCRIPTORW *)
                              GlobalLock(storage.hGlobal);

      Tcl_Obj *result = Tcl_NewListObj(0, NULL);
      // For each file, get the name and copy the stream to a file
      for (unsigned int file_index = 0;
           file_index < file_group_descriptor->cItems; file_index++) {
        STGMEDIUM content_storage = {TYMED_ISTREAM,0,0};
        file_descriptor = file_group_descriptor->fgd[file_index];
        contents_fmt.lindex = file_index;
        if (pDataObject->GetData(&contents_fmt, &content_storage) == S_OK) {
          // Dump stream into a file.
          std::wstring file_path = tempDropDir + L"\\" + file_descriptor.cFileName;
          GlobalLock(content_storage.pstm);
          if (StreamToFile(content_storage.pstm, file_path)==S_OK) {
            Tcl_ListObjAppendElement(NULL, result, ObjFromWinString(file_path.c_str()));
#if 0
          } else {
            LPVOID lpMsgBuf;
            if (!FormatMessage( FORMAT_MESSAGE_ALLOCATE_BUFFER |
                FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
                NULL, GetLastError(),
                MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
                (LPTSTR) &lpMsgBuf, 0, NULL )) {
               // Handle the error.
            }
            // Display the string.
            MessageBox( NULL, (LPCTSTR)lpMsgBuf, "Error",
                        MB_OK | MB_ICONINFORMATION );
            // Free the buffer.
            LocalFree( lpMsgBuf );
#endif
          }
          GlobalUnlock(content_storage.pstm);
        }
        ReleaseStgMedium(&content_storage);
      }
      GlobalUnlock(storage.hGlobal);
      ReleaseStgMedium(&storage);
      return result;
    }; /* GetData_FileGroupDescriptorW */

    Tcl_Obj *GetData_UniformResourceLocatorW(IDataObject *pDataObject) {
      STGMEDIUM StgMed;
      FORMATETC fmte = { (CLIPFORMAT)
        RegisterClipboardFormat(CFSTR_INETURLW),
        (DVTARGETDEVICE FAR *)NULL, DVASPECT_CONTENT, -1, TYMED_HGLOBAL };

      if (pDataObject->QueryGetData(&fmte) == S_OK) {
        if (pDataObject->GetData(&fmte, &StgMed) == S_OK) {
          WCHAR *data;
          Tcl_Obj *result;
          data = (WCHAR *) GlobalLock(StgMed.hGlobal);
          result = ObjFromWinString(data);
          GlobalUnlock(StgMed.hGlobal);
          ReleaseStgMedium(&StgMed);
          return result;
        }
      }
      return NULL;
    }; /* GetData_UniformResourceLocatorW */

}; /* TkDND_DropTarget */

/*****************************************************************************
 * Drop Source Related Class.
 ****************************************************************************/
class TkDND_DropSource : public IDropSource {
public:
    int button;

    // IUnknown members
    HRESULT __stdcall QueryInterface(REFIID iid, void ** ppvObject) {
      // check to see what interface has been requested
      if (iid == IID_IDropSource || iid == IID_IUnknown) {
          AddRef();
          *ppvObject = this;
          return S_OK;
      } else {
          *ppvObject = 0;
          return E_NOINTERFACE;
      }
    }; /* QueryInterface */

    ULONG   __stdcall AddRef(void) {
      // increment object reference count
      return InterlockedIncrement(&m_lRefCount);
    }; /* AddRef */

    ULONG   __stdcall Release(void) {
      // decrement object reference count
      LONG count = InterlockedDecrement(&m_lRefCount);
      if (count == 0) { delete this; return 0; }
      else { return count; };
    }; /* Release */

    // IDropSource members

    //  Called by OLE whenever Escape/Control/Shift/Mouse buttons have changed
    HRESULT __stdcall QueryContinueDrag(BOOL fEscapePressed, DWORD grfKeyState){
      // if the <Escape> key has been pressed since the last call,
      // cancel the drop
      if(fEscapePressed == TRUE) return DRAGDROP_S_CANCEL;

      switch (button) {
        case 1: {
          // if the <LeftMouse> button has been released, then do the drop!
          if((grfKeyState & MK_LBUTTON) == 0) return DRAGDROP_S_DROP;
          break;
        }
        case 2: {
          // if the <MiddleMouse> button has been released, then do the drop!
          if((grfKeyState & MK_MBUTTON) == 0) return DRAGDROP_S_DROP;
          break;
        }
        case 3: {
          // if the <RightMouse> button has been released, then do the drop!
          if((grfKeyState & MK_RBUTTON) == 0) return DRAGDROP_S_DROP;
          break;
        }
      }
      // If no buttons are pressed, cancel...
      if( ((grfKeyState & MK_LBUTTON) == 0) &&
          ((grfKeyState & MK_MBUTTON) == 0) &&
          ((grfKeyState & MK_RBUTTON) == 0) ) return DRAGDROP_S_CANCEL;

      // continue with the drag-drop
      return S_OK;
    }; /* QueryContinueDrag */

    // Return either S_OK, or DRAGDROP_S_USEDEFAULTCURSORS to instruct
    // OLE to use the default mouse cursor images...
    HRESULT __stdcall GiveFeedback(DWORD dwEffect) {
      return DRAGDROP_S_USEDEFAULTCURSORS;
    }; /* GiveFeedback */

    // Constructor / Destructor
    TkDND_DropSource() {
      m_lRefCount = 1;
      button = 1;
    }; /* TkDND_DropSource */

    TkDND_DropSource(int b) {
      m_lRefCount = 1;
      button = b;
    }; /* TkDND_DropSource */

    virtual ~TkDND_DropSource() {};

private:
    LONG   m_lRefCount;
}; /* TkDND_DropSource */

#endif /* _OLE_DND_H */
