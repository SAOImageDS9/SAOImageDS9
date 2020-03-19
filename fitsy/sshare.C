// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "sshare.h"
#include "util.h"

#if (HAVE_SYS_SHM_H && !__WIN32)
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>

FitsSShareID::FitsSShareID(int hdrid, int shmid, const char* filter)
{
  // reset
  valid_ =0;

  {
    // find size
    struct shmid_ds info;
    if (shmctl(hdrid, IPC_STAT, &info)) {
      internalError("Fitsy++ sshare shctl failed");
      return;
    }
    hmapsize_ = info.shm_segsz;

    // Attach the memory segment
    if ((long)(hmapdata_ = (char*)shmat(hdrid, 0, SHM_RDONLY)) == -1) {
      internalError("Fitsy++ sshare shmat failed");
      return;
    }
  }

  {
    parse(filter);
    if (!valid_)
      return;

    // reset
    valid_ =0;

    // find size
    struct shmid_ds info;
    if (shmctl(shmid, IPC_STAT, &info)) {
      internalError("Fitsy++ sshare shctl failed");
      return;
    }
    mapsize_ = info.shm_segsz;

    // Attach the memory segment
    if ((long)(mapdata_ = (char*)shmat(shmid, 0, SHM_RDONLY)) == -1) {
      internalError("Fitsy++ sshare shmat failed");
      return;
    }
  }

  // so far so good
  valid_ = 1;
}

FitsSShareID::~FitsSShareID()
{
  shmdt(mapdata_);
}

FitsSShareKey::FitsSShareKey(int hdr, int key, const char* filter)
{
  // reset
  valid_ =0;

  {
    // get shmid
    int shmid;
    if ((shmid = shmget(hdr, 0, 0)) < 0) {
      internalError("Fitsy++ sshare shmget failed");
      return;
    }

    // find size
    struct shmid_ds info;
    if (shmctl(shmid, IPC_STAT, &info)) {
      internalError("Fitsy++ sshare shctl failed");
      return;
    }
    mapsize_ = info.shm_segsz;

    // Attach the memory segment
    if ((long)(mapdata_ = (char*)shmat(shmid, 0, SHM_RDONLY)) == -1) {
      internalError("Fitsy++ sshare shmat failed");
      return;
    }
  }

  {
    parse(filter);
    if (!valid_)
      return;

    // reset
    valid_ =0;

    // get shmid
    int shmid;
    if ((shmid = shmget(key, 0, 0)) < 0) {
      internalError("Fitsy++ sshare shmget failed");
      return;
    }

    // find size
    struct shmid_ds info;
    if (shmctl(shmid, IPC_STAT, &info)) {
      internalError("Fitsy++ sshare shmctl failed");
      return;
    }
    mapsize_ = info.shm_segsz;

    // Attach the memory segment
    if ((long)(mapdata_ = (char*)shmat(shmid, 0, SHM_RDONLY)) == -1) {
      internalError("Fitsy++ sshare shmat failed");
      return;
    }
  }

  // so far so good
  valid_ = 1;
}

FitsSShareKey::~FitsSShareKey()
{
  shmdt(mapdata_);
}

#else

FitsSShareID::FitsSShareID(int hdrid, int shmid, const char* filter)
{
  valid_ = 0;
}

FitsSShareID::~FitsSShareID() {}

FitsSShareKey::FitsSShareKey(int hdr, int key, const char* filter)
{
  valid_ = 0;
}

FitsSShareKey::~FitsSShareKey() {}

#endif
