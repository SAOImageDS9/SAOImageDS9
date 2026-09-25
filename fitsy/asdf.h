// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsasdf_h__
#define __fitsasdf_h__

#include <string>
#include <vector>

#include "file.h"

// Native ASDF container reader - components 1 and 2 of
// ASDF_NATIVE_SUPPORT_DESIGN.md §8, which that document records as
// originally sketched here in C++ and then built in Tcl instead. This is
// the C++ implementation it called for.
//
// Two layers, deliberately separate:
//
//   FitsAsdfFile  the container itself. Opens the file, reads the YAML
//                 tree text, enumerates every core/ndarray node in it,
//                 and reads/decompresses one binary block on demand.
//                 Knows nothing about FITS.
//
//   FitsAsdf      a FitsFile over one named ndarray: decodes its block,
//                 widens a datatype fitsy cannot represent, resolves an
//                 asdf mask onto the FITS null convention, and presents
//                 the result as an image with a synthetic header. This is
//                 what the frame's `load asdf' command instantiates, the
//                 same way `load nrrd mmap' instantiates FitsNRRDMMap.
//
// Unlike every other FitsFile in this directory, FitsAsdf is not split
// into per-transport subclasses (alloc/mmap/var/share/socket). ASDF is
// not a streamable format: an ndarray names its data by block *index*,
// and the blocks are addressable only by walking them from the start of
// the file, so the reader needs to seek. Ordinary stdio gives that on
// every platform, including Windows, where FitsMMap is a no-op.

// The deepest ndarray rank described. Nothing here loads beyond rank 3;
// this only has to be large enough to report a deeper array's real shape
// so the caller can refuse it by name rather than by truncation.
#define ASDF_MAXDIM 8

// Why an enumerated ndarray cannot be read as pixels. Recorded per node
// rather than raised, because the array browser lists nodes it will not
// load and the load path wants to name the specific reason.
#define ASDF_OK         0x00
#define ASDF_BYTEORDER  0x01
#define ASDF_STRIDES    0x02
#define ASDF_OFFSET     0x04
#define ASDF_MASK       0x08

// One core/ndarray node found in the tree.
class FitsAsdfNode {
 public:
  std::string path_;         // root relative, e.g. roman/data
  int source_;               // binary block index
  std::string datatype_;     // asdf/numpy name, e.g. float32
  int big_;                  // 1 big endian, 0 little, -1 absent
  int ndim_;
  long long dim_[ASDF_MAXDIM];  // row major, as written: slowest axis first
  unsigned unsupported_;
  int hasMaskScalar_;
  double maskScalar_;

 public:
  FitsAsdfNode();
};

class FitsAsdfFile {
 protected:
  FILE* stream_;
  long long fileSize_;

  std::string tree_;              // YAML tree text, verbatim
  std::vector<FitsAsdfNode> nodes_;
  std::vector<long long> blocks_;  // file offset of each block's magic

  int valid_;
  std::string error_;

 protected:
  int readTree();
  int readBlockOffsets();
  void enumNdarrays();
  void flushNode(const std::string&, int,
		 const std::vector<std::pair<std::string,std::string> >&);
  void setError(const char*, ...);

 public:
  FitsAsdfFile(const char*);
  virtual ~FitsAsdfFile();

  int isValid() {return valid_;}
  const char* error() {return error_.empty() ? NULL : error_.c_str();}

  const char* tree() {return tree_.c_str();}
  size_t treeSize() {return tree_.size();}

  int nnode() {return (int)nodes_.size();}
  const FitsAsdfNode* node(int ii);
  const FitsAsdfNode* find(const char*);

  int nblock() {return (int)blocks_.size();}

  // Decompressed bytes of one block. The caller owns the result and
  // releases it with delete[]. NULL on failure, with error() set.
  char* block(int, size_t*);
};

class FitsAsdf : public FitsFile {
 protected:
  FitsAsdfFile* asdf_;
  std::string asdfError_;

 protected:
  int build(const char*);

 public:
  FitsAsdf(const char*, const char*);
  virtual ~FitsAsdf();

  virtual const char* errorMessage()
  {return asdfError_.empty() ? NULL : asdfError_.c_str();}

  FitsAsdfFile* asdfFile() {return asdf_;}
};

// One further plane of a rank 3 ASDF array.
//
// DS9 presents a cube as a chain of single plane images: Context::load
// asks for nhdu()-1 of these, each built from the one before, and walks
// the data pointer forward a plane at a time. The FITS readers get this
// from FitsFitsNextMap, which cannot be reused here - it reaches into its
// predecessor's mapped file, and an ASDF array has no mapped file behind
// it, only the decoded buffer FitsAsdf owns. So this shares that buffer
// and that header rather than owning either, and the `manageHead_ = 0'
// is load bearing: the planes must not each delete the head they share.
class FitsAsdfNext : public FitsFile {
 public:
  FitsAsdfNext(FitsFile*);
};

// asdf/numpy datatype -> the BITPIX fitsy can hold it in, or 0. fitsy
// accepts exactly {8,16,-16,32,64,-32,-64} (FitsFile::validParams), where
// -16 is its own private code for unsigned 16 bit.
extern int asdfBitpix(const char*);

// The datatypes with no BITPIX of their own, paired with the narrowest
// one that holds every value of them exactly, or NULL. Both occur on real
// Roman arrays: float16 is err/var_poisson/chisq/dumo, uint32 is dq and
// the dq_border_ref_pix_* set.
extern const char* asdfWiden(const char*);

#endif
