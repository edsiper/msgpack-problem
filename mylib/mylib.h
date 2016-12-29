/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef MYLIB_H
#define MYLIB_H

#ifdef __cplusplus
extern "C" {
#endif

#include <msgpack.h>

struct mytest {
  int a;
  struct msgpack_sbuffer b;
  struct msgpack_packer  c;
};

#endif
