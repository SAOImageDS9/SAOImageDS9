// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __list_h__
#define __list_h__

#include <stdlib.h>

template<class T>
class List {
private:
  T* head_;
  T* tail_;
  int count_;
  T* current_;

public:
  List();
  List(const List&);
  ~List();
  List& operator=(const List&);

  void insertHead(T*);
  void insert(int, T*);
  void insertNext(T*,T*);
  void insertPrev(T*,T*);
  void append(T*);
  T* pop();
  T* fifo();
  T* extract();
  T* extractNext(T*);
  T* extractPrev(T*);
  void deleteAll();
  T* begin() {return head_;}
  T* end() {return tail_;}
  T* head() {return current_ = head_;}
  T* tail() {return current_ = tail_;}
  T* next() {return current_ ? current_ = current_->next() : NULL;}
  int isNext() {return current_->next() ? 1 : 0;}
  T* previous() {return current_ ? current_ = current_->previous() : NULL;}
  int isPrevious() {return current_->previous() ? 1 : 0;}
  T* current() {return current_;}
  int count() {return count_;}
  int isEmpty() {return (count_==0) ? 1 : 0;}
  T* operator[](int i);
  int index(T*);

  void transverse(void (*proc)(T*));
};

#endif
