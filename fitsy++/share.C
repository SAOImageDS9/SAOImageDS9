// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "share.h"
#include "util.h"

#if (HAVE_SYS_SHM_H && !__WIN32)
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>

FitsShareID::FitsShareID(int shmid, const char* filter)
{
  parse(filter);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  // find size
  struct shmid_ds info;
  if (shmctl(shmid, IPC_STAT, &info)) {
    internalError("Fitsy++ share shctl failed");
    return;
  }
  mapsize_ = info.shm_segsz;

  // Attach the memory segment
  if ((long)(mapdata_ = (char*)shmat(shmid, 0, SHM_RDONLY)) == -1) {
    internalError("Fitsy++ share shctl failed");
    return;
  }

  // so far, so good
  valid_ = 1;
}

FitsShareID::~FitsShareID()
{
  shmdt(mapdata_);
}

FitsShareKey::FitsShareKey(int key, const char* filter)
{
  parse(filter);
  if (!valid_)
    return;

  // reset
  valid_ =0;

  // get shmid
  int shmid;
  if ((shmid = shmget(key, 0, 0)) < 0) {
    internalError("Fitsy++ share shmget failed");
    return;
  }

  // find size
  struct shmid_ds info;
  if (shmctl(shmid, IPC_STAT, &info)) {
    internalError("Fitsy++ share shctl failed");
    return;
  }
  mapsize_ = info.shm_segsz;

  // Attach the memory segment
  if ((long)(mapdata_ = (char*)shmat(shmid, 0, SHM_RDONLY)) == -1) {
    internalError("Fitsy++ share shmat failed");
    return;
  }

  // so far, so good
  valid_ = 1;
}

FitsShareKey::~FitsShareKey()
{
  if (mapdata_)
    shmdt(mapdata_);
}

#else

FitsShareID::FitsShareID(int shmid, const char* filter)
{
  // shared memory not supported
  valid_ = 0;
}

FitsShareID::~FitsShareID() {}

FitsShareKey::FitsShareKey(int key, const char* filter)
{
  // shared memory not supported
  valid_ = 0;
}

FitsShareKey::~FitsShareKey() {}

#endif
