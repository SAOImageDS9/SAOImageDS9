// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <iostream>
#include <fstream>
using namespace std;

main(int argc, char* argv[])
{
  int q=0;

  // check for args
  if (argc != 2 && argc != 3){
    cerr << "usage: shmload [-q] fits" << endl;
    exit(1);
  }

  if (!strncmp(argv[1],"-q",2))
    q=1;

  // find the file
  char* fn = argv[1+q];
  struct stat statb;
  if (stat(fn, &statb) < 0){
    cerr << "can't find file: " << fn << endl;
    exit(1);
  }
  size_t fnsize = statb.st_size;
  if (!q)
    cerr << fn << " size " << fnsize << endl;

  // calculate shmsize
  size_t shmsize = ((fnsize/2880)+1)*2880;

  // get shmid
  int shmid = shmget(IPC_PRIVATE, shmsize, IPC_CREAT|0666);

  if (shmid == -1) {
    // give up, its bad
    perror("shmid is bad");
    exit(1);
  }
  if (!q)
    cerr << "shmid " << shmid << endl;
  else
    cout << shmid << endl;

  // get shm stats
  struct shmid_ds sbuf;
  if (shmctl(shmid, IPC_STAT, &sbuf)<0) {
    perror("shmctl is bad");
    exit(1);
  }
  if (!q)
    cerr << "size of shared segment: " << sbuf.shm_segsz << endl;

  char* addr = (char*)shmat(shmid, NULL, 0);
  //  if (addr == -1){
  //    perror("shmat failed");
  //    exit(1);
  //  }

  // load image
  ifstream fd(fn);
  fd.read(addr,fnsize);
  if (!q) {
    cerr << fd.gcount() << " bytes read" << endl;
    if (fd.gcount() != fnsize)
      cerr << "File read error" << endl;
    else 
      cerr << "success!" << endl;
  }
}

