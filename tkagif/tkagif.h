// Copyright (C) 1999-2015
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __tkagif_h__
#define __tkagif_h__

#define HSIZE		5003	/* 80% occupancy */
typedef struct {
  /*
   * Algorithm: use open addressing double hashing (no chaining) on the
   * prefix code / next character combination. We do a variant of Knuth's
   * algorithm D (vol. 3, sec. 6.4) along with G. Knott's relatively-prime
   * secondary probe. Here, the modular division first probe is gives way to
   * a faster exclusive-or manipulation. Also do block compression with an
   * adaptive reset, whereby the code table is cleared when the compression
   * ratio decreases, but after the table fills. The variable-length output
   * codes are re-sized at this point, and a special CLEAR code is generated
   * for the decompressor. Late addition: construct the table according to
   * file size for noticeable speed improvement on small files. Please
   * direct questions about this implementation to ames!jaw.
   */


  /*
   * To save much memory, we overlay the table used by compress() with those
   * used by decompress(). The tab_prefix table is the same size and type as
   * the codeTable. The tab_suffix table needs 2**GIFBITS characters. We get
   * this from the beginning of hashTable. The output stack uses the rest of
   * hashTable, and contains characters. There is plenty of room for any
   * possible stack (stack used to be 8000 characters).
   */

  unsigned long currentAccumulated;
  int currentBits;
  int accumulatedByteCount;
  unsigned char packetAccumulator[256];
} GIFState_t;

class TkAGIF {
private:
  Tcl_Interp* interp_;
  
  ofstream* out_;
  int width_;
  int height_;

  int colorRes_;
  int colorTableSize_;
  int resolution_;

  GIFState_t state_;

  unsigned char* pict_;
  long pictCount_;

  long maxCode_; // Maximum code, given numBits
  int clearCode_;
  int eofCode_;

  int initialBits_;
  int numBits_;

  int clearFlag_;
  int freeEntry_; // First unused entry

  int hashTable_[HSIZE];

private:
  void noCompress();
  void compress();

  int input();
  void output(long);
  void clearForBlock();
  void clearHashTable(int);
  void charInit();
  void charOut(int);
  void flushChar();

 public:
  TkAGIF(Tcl_Interp*);

  int create(int, const char*[]);
  int add(int, const char*[]);
  int close(int, const char*[]);
};

extern TkAGIF* tkagif;

#endif
