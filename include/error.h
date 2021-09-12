// SPDX-License-Identifier: GPL-2.0-only
// Full license at https://spdx.org/licenses/GPL-2.0.html

#include "types.h"
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <stdarg.h>

#define likely(x) __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)

#define COND_ERROR(X)                                                          \
        if (unlikely((long int)(X)))                                           \
        goto ERROR

#define COND_ERROR_L(X, LABEL)                                                 \
        if (unlikely((long int)(X)))                                           \
        goto LABEL

static void eprinterr(int errnum, char * fmt, ...){
        fputs(strerror(errnum), stderr);
        fputs(": ", stderr);
        va_list args;
        va_start(args, fmt);
        vfprintf(stderr, fmt, args);
        fputs("\n", stderr);
        va_end(args);
}
