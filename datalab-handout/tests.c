/* Testing Code */

#include <limits.h>
#include <math.h>

/* Routines used by floation point test code */

/* Convert from bit level representation to floating point number */
float u2f(unsigned u) {
  union {
    unsigned u;
    float f;
  } a;
  a.u = u;
  return a.f;
}

/* Convert from floating point number to bit-level representation */
unsigned f2u(float f) {
  union {
    unsigned u;
    float f;
  } a;
  a.f = f;
  return a.u;
}

/* Copyright (C) 1991-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 8.0.0.  Version 8.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2014, plus Amendment 1 (published
   2015-05-15).  */
/* We do not support C11 <threads.h>.  */
int test_anyOddBit(int x) {
    int i;
    for (i = 1; i < 32; i+=2)
        if (x & (1<<i))
      return 1;
    return 0;
}
int test_isLessOrEqual(int x, int y)
{
  return x <= y;
}
int test_rotateLeft(int x, int n) {
  unsigned u = (unsigned) x;
  int i;
  for (i = 0; i < n; i++) {
      unsigned msb = u >> 31;
      unsigned rest = u << 1;
      u = rest | msb;
  }
  return (int) u;
}
int test_logicalShift(int x, int n) {
  unsigned u = (unsigned) x;
  unsigned shifted = u >> n;
  return (int) shifted;
}
int test_fitsBits(int x, int n)
{
  int TMin_n = -(1 << (n-1));
  int TMax_n = (1 << (n-1)) - 1;
  return x >= TMin_n && x <= TMax_n;
}
int test_anyEvenBit(int x) {
  int i;
  for (i = 0; i < 32; i+=2)
      if (x & (1<<i))
   return 1;
  return 0;
}
int test_divpwr2(int x, int n)
{
    int p2n = 1<<n;
    return x/p2n;
}
int test_tmax(void) {
  return 0x7FFFFFFF;
}
