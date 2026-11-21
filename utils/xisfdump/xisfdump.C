// xisfdump - print what fitsy's XISF container reader (fitsy/xisf.{h,C})
// makes of each file, in a line format Tests/xisf/check_container.py
// compares against the fixture manifest and an independent decoder.
//
// Standalone on purpose: it links fitsy/xisf.C alone, so the container
// reader can be tested without the frame, the grammar or a ds9 build.
//
//   make -C utils/xisfdump
//   utils/xisfdump/xisfdump file.xisf ...
//
// Output, per file:
//   file <path>
//   error <message>                         container refused
//   images <n>
//   image <i> <key>=<value> ...             one line per <Image>
//   stored <i> <bytes> <fnv1a64>            its block as stored, if readable
//   block <i> <bytes> <fnv1a64> | block <i> error <message>

#include <stdio.h>
#include <string.h>

#include <string>
#include <vector>

#include "xisf.h"

static unsigned long long fnv1a64(const char* pp, size_t nn)
{
  unsigned long long hh = 0xcbf29ce484222325ULL;
  for (size_t ii=0; ii<nn; ii++) {
    hh ^= (unsigned char)pp[ii];
    hh *= 0x100000001b3ULL;
  }
  return hh;
}

static const char* kindName(FitsXisfBlock::Kind kk)
{
  switch (kk) {
  case FitsXisfBlock::NONE: return "none";
  case FitsXisfBlock::ATTACHMENT: return "attachment";
  case FitsXisfBlock::EMBEDDED: return "embedded";
  case FitsXisfBlock::INLINE: return "inline";
  }
  return "?";
}

static void dump(const char* fn)
{
  printf("file %s\n", fn);
  FitsXisfFile xf(fn);
  if (!xf.isValid()) {
    printf("error %s\n", xf.error() ? xf.error() : "unknown");
    return;
  }
  printf("images %d\n", xf.nimage());
  for (int ii=0; ii<xf.nimage(); ii++) {
    const FitsXisfImage* im = xf.image(ii);
    const FitsXisfBlock& bb = im->block_;
    std::string geom;
    for (int dd=0; dd<im->ndim_; dd++) {
      char buf[32];
      snprintf(buf, sizeof(buf), "%lld:", im->dim_[dd]);
      geom += buf;
    }
    char ch[32];
    snprintf(ch, sizeof(ch), "%lld", im->channels_);
    geom += ch;

    printf("image %d id=%s geometry=%s format=%s color=%s storage=%s "
	   "order=%s location=%s codec=%s%s checksum=%s keywords=%d "
	   "properties=%d bytes=%llu status=%s\n",
	   ii, im->id_.empty() ? "-" : im->id_.c_str(), geom.c_str(),
	   im->sampleFormat_.c_str(), im->colorSpace_.c_str(),
	   im->planar_ ? "planar" : "normal", bb.big_ ? "big" : "little",
	   kindName(bb.kind_), bb.codec_.empty() ? "-" : bb.codec_.c_str(),
	   bb.shuffled_ ? "+sh" : "",
	   bb.checksumAlgo_.empty() ? "-" : bb.checksumAlgo_.c_str(),
	   (int)im->keywords_.size(), (int)im->properties_.size(),
	   im->bytes(),
	   im->unsupported_ ? ("unsupported:" + im->why_).c_str() : "ok");

    if (bb.kind_ != FitsXisfBlock::NONE && !(bb.unsupported_)) {
      size_t nn;
      char* pp = xf.stored(bb, &nn);
      if (pp) {
	printf("stored %d %zu %016llx\n", ii, nn, fnv1a64(pp, nn));
	delete [] pp;
      }
      else
	printf("stored %d error %s\n", ii, xf.error());
    }
    size_t nn;
    char* pp = xf.block(bb, &nn);
    if (pp) {
      printf("block %d %zu %016llx\n", ii, nn, fnv1a64(pp, nn));
      delete [] pp;
    }
    else
      printf("block %d error %s\n", ii, xf.error());
  }
}

int main(int argc, char** argv)
{
  if (argc < 2) {
    fprintf(stderr, "usage: %s file.xisf ...\n", argv[0]);
    return 2;
  }
  for (int ii=1; ii<argc; ii++)
    dump(argv[ii]);
  return 0;
}
