// Copyright 2019-2021 Lawrence Livermore National Security, LLC, and
// other Variorum Project Developers. See the top-level LICENSE file
// for details.
//
// SPDX-License-Identifier: MIT

#ifndef CONFIG_INTEL_DGPU_H_INCLUDE
#define CONFIG_INTEL_DGPU_H_INCLUDE

#include <inttypes.h>

extern uint64_t *detect_intel_dgpu_arch(void);

extern int set_intel_dgpu_func_ptrs(void);

#endif
