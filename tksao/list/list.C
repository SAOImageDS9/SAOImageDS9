// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "list.h"
#include "vector.h"
#include "marker.h"
#include "callback.h"
#include "contour.h"
#include "fitsmask.h"
#include "sao.h"
#include "lut.h"
#include "colormap.h"
#include "colortag.h"
#include "raytrace.h"

template<class T> List<T>::List()
{
  head_ = NULL;
  tail_ = NULL;
  current_ = NULL;
  count_ = 0;
}

template<class T> List<T>::List(const List<T>& aa)
{
  head_ = NULL;
  tail_ = NULL;
  current_ = NULL;
  count_ = 0;

  List<T>& a = (List<T>&)aa;
  if (a.head())
    do
      append(new T((T)(*(a.current_))));
    while (a.next());
}

// this is needed because of Marker virtual functions
template <> List<Marker>::List(const List<Marker>& aa)
{
  head_ = NULL;
  tail_ = NULL;
  current_ = NULL;
  count_ = 0;

  List<Marker>& a = (List<Marker>&)aa;
  if (a.head())
    do
      append(a.current_->dup());
    while (a.next());
}

// this is needed because of ColorMapInfo virtual functions
template <> List<ColorMapInfo>::List(const List<ColorMapInfo>& aa)
{
  head_ = NULL;
  tail_ = NULL;
  current_ = NULL;
  count_ = 0;

  List<ColorMapInfo>& a = (List<ColorMapInfo>&)aa;
  if (a.head())
    do
      append(a.current_->dup());
    while (a.next());
}

template<class T> List<T>::~List()
{
  T* ptr = head_;
  while (ptr) {
    T* tmp = ptr->next();
    delete ptr;
    ptr = tmp;
  }
}

template<class T> List<T>& List<T>::operator=(const List<T>& aa)
{
  deleteAll();

  List<T>& a = (List<T>&)aa;
  if (a.head())
    do
      append(new T((T)(*(a.current_))));
    while (a.next());

  return *this;
}

// this is needed because of Marker virtual functions
template <> List<Marker>& List<Marker>::operator=(const List<Marker>& aa)
{
  deleteAll();

  List<Marker>& a = (List<Marker>&)aa;
  if (a.head())
    do
      append(a.current_->dup());
    while (a.next());

  return *this;
}

// this is needed because of ColorMapInfo virtual functions
template <> List<ColorMapInfo>& List<ColorMapInfo>::operator=(const List<ColorMapInfo>& aa)
{
  deleteAll();

  List<ColorMapInfo>& a = (List<ColorMapInfo>&)aa;
  if (a.head())
    do
      append(a.current_->dup());
    while (a.next());

  return *this;
}

template<class T> void List<T>::insertHead(T* t)
{
  if (head_ && t) {
    t->setNext(head_);
    t->setPrevious(NULL);
    head_->setPrevious(t);
    head_ = t;
  }
  else {
    head_ = t;
    tail_ = t;
  }

  current_ = head_;
  count_++;
}

template<class T> void List<T>::insert(int which, T* t)
{
  head();
  for (int i=0; i<which; i++)
    next();

  if (current_ && t) {
    T* n = current_->next();

    t->setPrevious(current_);
    t->setNext(n);

    current_->setNext(t);

    if (n)
      n->setPrevious(t);
    else
      tail_ = t;

    count_++;
  }
}

template<class T> void List<T>::insertNext(T* c, T* t)
{
  if (c && t) {
    T* n = c->next();

    t->setPrevious(c);
    t->setNext(n);

    c->setNext(t);

    if (n)
      n->setPrevious(t);
    else
      tail_ = t;

    count_++;
  }
}

template<class T> void List<T>::insertPrev(T* c, T* t)
{
  if (c && t) {
    T* p = c->previous();

    t->setPrevious(p);
    t->setNext(c);

    c->setPrevious(t);

    if (p)
      p->setNext(t);
    else
      head_ = t;

    count_++;
  }
}

template<class T> void List<T>::append(T* p)
{
  if (tail_) {
    p->setPrevious(tail_);
    p->setNext(NULL);
    tail_->setNext(p);
    tail_ = p;
  }
  else {
    p->setPrevious(NULL);
    p->setNext(NULL);
    head_ = p;
    tail_ = p;
  }

  current_ = tail_;
  count_++;
}

template<class T> void List<T>::deleteAll()
{
  T* ptr = head_;
  while (ptr) {
    T* tmp = ptr->next();
    delete ptr;
    ptr = tmp;
  }

  head_ = NULL;
  tail_ = NULL;

  current_ = NULL;
  count_ = 0;
}

template<class T> T* List<T>::pop()
{
  if (tail_) {
    T* m = tail_;
    if (tail_ != head_) {
      T* p = tail_->previous();
      p->setNext(NULL);
      tail_ = p;
      current_ = p;
      count_--;
    }
    else {
      head_ = NULL;
      tail_ = NULL;
      current_ = NULL;
      count_ = 0;
    }
    return m;
  }

  return NULL;
}

template<class T> T* List<T>::fifo()
{
  if (head_) {
    T* m = head_;
    if (tail_ != head_) {
      T* n = head_->next();
      n->setPrevious(NULL);
      head_ = n;
      current_ = n;
      count_--;
    }
    else {
      head_ = NULL;
      tail_ = NULL;
      current_ = NULL;
      count_ = 0;
    }
    return m;
  }

  return NULL;
}

template<class T> T* List<T>::extract()
{
  T* ptr = current_;

  T* p = ptr->previous();
  T* n = ptr->next();

  if (p)
    p->setNext(n);
  if (n)
    n->setPrevious(p);

  if (head_ == ptr)
    head_ = n;

  if (tail_ == ptr)
    tail_ = p;
  
  current_ = NULL;
  count_--;

  ptr->setNext(NULL);
  ptr->setPrevious(NULL);

  return ptr;
}

template<class T> T* List<T>::extractNext(T* ptr)
{
  T* p = ptr->previous();
  T* n = ptr->next();

  if (p)
    p->setNext(n);
  if (n)
    n->setPrevious(p);

  if (head_ == ptr)
    head_ = n;

  if (tail_ == ptr)
    tail_ = p;
  
  current_ = NULL;
  count_--;

  ptr->setNext(NULL);
  ptr->setPrevious(NULL);

  return n;
}

template<class T> T* List<T>::extractPrev(T* ptr)
{
  T* p = ptr->previous();
  T* n = ptr->next();

  if (p)
    p->setNext(n);
  if (n)
    n->setPrevious(p);

  if (head_ == ptr)
    head_ = n;

  if (tail_ == ptr)
    tail_ = p;
  
  current_ = NULL;
  count_--;

  ptr->setNext(NULL);
  ptr->setPrevious(NULL);

  return p;
}

template<class T> T* List<T>::operator[](int which)
{
  head();
  for (int i=0; i<which; i++)
    next();

  return current_;
}

template<class T> int List<T>::index(T* t)
{
  int cnt=0;
  head();
  while (current_) {
    if (current_ == t)
      return cnt;
    cnt++;
    next();
  }

  return -1;
}

template<class T> void List<T>::transverse(void (*proc)(T*))
{
  if (head())
    do
      proc(current_);
    while (next());
}

template class List<Vertex>;
template class List<Tag>;
template class List<Marker>;
template class List<CallBack>;
template class List<Contour>;
template class List<ContourLevel>;
template class List<FitsMask>;
template class List<LIColor>;
template class List<RGBColor>;
template class List<ColorTag>;
template class List<ColorMapInfo>;
template class List<RayTrace>;
