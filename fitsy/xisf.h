// Copyright (C) 1999-2021
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fitsxisf_h__
#define __fitsxisf_h__

#include <stdio.h>

#include <string>
#include <vector>

// Native XISF container reader - TODO_XISF.md §2.1, Phase 1.
//
// XISF 1.0 (PixInsight's format) is a 16 byte preamble, an XML header,
// and data blocks the header points at by absolute byte position. This
// file reads the container only: the preamble, the header (parsed with
// the libxml2 DS9 already links for SAMP), a descriptor for every <Image>
// with its FITS keywords and properties, and the stored bytes of any data
// block. It knows nothing about FITS. Turning one image into a FitsFile is
// FitsXisf's job (Phase 3), decoding compressed blocks and verifying
// checksums is Phase 2.
//
// Reading is lenient where the pixels stay knowable and strict where they
// do not, because real writers bend the spec: libXISF omits encoding= from
// the XML declaration, PixInsight leaves a <Thumbnail> attachment pointing
// past the end of the file, and float images without `bounds' exist. What
// is refused is refused per image, with the reason recorded, so the rest
// of the unit stays readable (spec §7.2: unsupported objects are
// unavailable, not fatal). Tests/xisf/README.md has the cases.

// Why an <Image> cannot be read. Recorded per image, not raised, so the
// image chooser can list what it will not load and say why.
#define XISF_OK          0x000
#define XISF_FORMAT      0x001  // sampleFormat unknown, or complex
#define XISF_GEOMETRY    0x002  // malformed, zero, overflowing
#define XISF_LOCATION    0x004  // inline:, url(), path(), malformed
#define XISF_CODEC       0x008  // unknown codec, malformed compression
#define XISF_CHECKSUM    0x010  // unknown algorithm, malformed digest
#define XISF_COLORSPACE  0x020
#define XISF_STORAGE     0x040  // pixelStorage
#define XISF_BYTEORDER   0x080
#define XISF_SIZE        0x100  // block size disagrees with geometry, or
                                // runs past the end of the file

// The deepest image described. Only 2 and 3 are loadable, but the
// geometry of a deeper one is still reported, so the caller can refuse it
// by name rather than by truncation (as FitsAsdfNode does).
#define XISF_MAXDIM 8

// A data block: where its bytes are and how they are encoded. Shared by
// images and by properties (vectors, matrices, long strings).
class FitsXisfBlock {
 public:
  enum Kind {NONE, ATTACHMENT, EMBEDDED, INLINE};

  Kind kind_;
  long long pos_;            // ATTACHMENT: absolute byte position
  long long size_;           // ATTACHMENT: stored size
  std::string text_;         // EMBEDDED/INLINE: the encoded text
  int hex_;                  // EMBEDDED/INLINE: 1 hex, 0 base64

  std::string codec_;        // "" uncompressed; zlib, lz4, lz4hc, zstd
  int shuffled_;             // +sh
  int itemSize_;             // +sh item size
  unsigned long long usize_; // uncompressed size, when compressed
  // (stored, uncompressed) size of each subblock; one entry when the
  // `subblocks' attribute is absent and the block is compressed
  std::vector<std::pair<unsigned long long,unsigned long long> > subblocks_;

  std::string checksumAlgo_; // canonical: sha-1, sha-256, sha-512, ...
  std::string checksumHex_;  // lowercase hex digest

  int big_;                  // byteOrder="big"

  unsigned unsupported_;
  std::string why_;          // first reason, for messages

 public:
  FitsXisfBlock();
};

class FitsXisfKeyword {
 public:
  std::string name_;
  std::string value_;        // verbatim: string values keep their quotes
  std::string comment_;
};

class FitsXisfProperty {
 public:
  std::string id_;
  std::string type_;
  int hasValue_;
  std::string value_;        // the value attribute, for scalars
  std::string text_;         // character data, for String and inline
  long long length_;         // vectors, -1 if absent
  long long rows_;           // matrices, -1 if absent
  long long columns_;
  FitsXisfBlock block_;      // kind_ NONE unless it has a location

 public:
  FitsXisfProperty();
};

class FitsXisfImage {
 public:
  int index_;                // position among the unit's images
  std::string id_;
  std::string uuid_;

  int ndim_;                 // spatial dimensions
  long long dim_[XISF_MAXDIM]; // x first, as written
  long long channels_;
  std::string sampleFormat_;
  int sampleSize_;           // bytes per sample, 0 if unknown

  int hasBounds_;
  double lower_;
  double upper_;
  std::string colorSpace_;   // Gray, RGB, CIELab
  int planar_;               // pixelStorage Planar (default) vs Normal
  std::string offset_;       // pedestal, verbatim
  std::string orientation_;  // display hint only, verbatim
  std::string imageType_;

  FitsXisfBlock block_;
  std::vector<FitsXisfKeyword> keywords_;
  std::vector<FitsXisfProperty> properties_;

  // Overall verdict: this image's own problems plus its block's.
  unsigned unsupported_;
  std::string why_;

 public:
  FitsXisfImage();

  // samples * sampleSize; 0 if the geometry is unusable
  unsigned long long bytes() const;
  const FitsXisfProperty* property(const char*) const;
};

class FitsXisfFile {
 protected:
  FILE* stream_;
  long long fileSize_;

  std::string header_;       // XML header, verbatim (what the viewer shows)
  std::vector<FitsXisfImage> images_;
  std::vector<FitsXisfProperty> metadata_;  // <Metadata> properties

  int valid_;
  std::string error_;

 protected:
  int readPreamble(unsigned*);
  int parseHeader();
  void setError(const char*, ...);
  void checkImage(FitsXisfImage*);

 public:
  FitsXisfFile(const char*);
  virtual ~FitsXisfFile();

  int isValid() {return valid_;}
  const char* error() {return error_.empty() ? NULL : error_.c_str();}

  const char* header() {return header_.c_str();}
  size_t headerSize() {return header_.size();}

  int nimage() {return (int)images_.size();}
  const FitsXisfImage* image(int);
  // by id, or by decimal index when no image has that id
  const FitsXisfImage* find(const char*);

  const std::vector<FitsXisfProperty>& metadata() {return metadata_;}

  // The block's bytes as stored: base64/hex decoded for embedded and
  // inline blocks, still compressed if it is. The caller owns the result
  // and releases it with delete[]. NULL on failure, with error() set; an
  // empty block (an empty vector) returns a non-NULL zero length buffer.
  char* stored(const FitsXisfBlock&, size_t*);

  // The block's bytes decoded: decompressed, unshuffled, checksum
  // verified. Phase 1 handles uncompressed blocks only.
  char* block(const FitsXisfBlock&, size_t*);
};

#endif
