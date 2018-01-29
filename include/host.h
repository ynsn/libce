/**
 * MIT License
 *
 * Copyright (c) 2018 Yoram and project contributors
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef LIBCE_HOST_H
#define LIBCE_HOST_H

#include "ce.h"

#if defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
# define ARCH_ALPHA
#elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) || defined(_M_X64) || \
      defined(_M_AMD64)
# define ARCH_AMD64
#elif defined(__arm__) || defined(__thumb__) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || \
      defined(_ARM) || defined(_M_ARM) || defined(_M_ARMT) || defined(__arm)
# define ARCH_ARM
#elif defined(__aarch64__)
# define ARCH_AARCH64
#elif defined(__bfin) || defined(__BFIN__)
# define ARCH_BLACKFIN
#elif defined(__convex__)
# define ARCH_CONVEX
#elif defined(__epiphany)
# define ARCH_EPIPHANY
#elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa)
# define ARCH_PARISC
#elif defined(i386) || defined(__i386) || defined(__i386__) || defined(__IA32__) || defined(_M_I86) || \
      defined(_M_IX86) || defined(__X86__) || defined(_X86_) || defined(_THW_INTEL__) || defined(__I86__) || \
      defined(__INTEL__)
# define ARCH_IA32
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) || defined(__ia64) || defined(_M_IA64) || \
      defined(__itanium__)
# define ARCH_IA64
#elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
# define ARCH_MOTOROLA68K
#elif defined(__mips__) || defined(mips) || defined(__mips) || defined(__MIPS__)
# define ARCH_MIPS
#elif defined(__powerpc) || defined(__powerpc__) || defined(__powerpc64__) || defined(__POWERPC__) || \
      defined(__ppc__) || defined(_M_PPC)
# define ARCH_POWERPC
#elif defined(pyr)
# define ARCH_PYRAMID
#elif defined(__sparc__) || defined(__sparc)
# define ARCH_SPARC
#elif defined(__sh__)
# define ARCH_SUPERH
#elif defined(__370__) || defined(__THW_370__) || defined(__s390__) || defined(s390x) || defined(__zarch__)
# define ARCH_SYSTEMZ
#endif

typedef enum {
  CE_ARCH_ALPHA,
  CE_ARCH_AMD64,
  CE_ARCH_ARM,
  CE_ARCH_AARCH64,
  CE_ARCH_BLACKFIN,
  CE_ARCH_CONVEX,
  CE_ARCH_EPIPHANY,
  CE_ARCH_PARISC,
  CE_ARCH_IA32,
  CE_ARCH_IA64,
  CE_ARCH_MOTOROLA68K,
  CE_ARCH_MIPS,
  CE_ARCH_POWERPC,
  CE_ARCH_PYRAMID,
  CE_ARCH_SPARC,
  CE_ARCH_SUPERH,
  CE_ARCH_SYSTEMZ,
} ce_arch;

#endif //LIBCE_HOST_H
