// SPDX-License-Identifier: GPL-2.0-only
// Full license at https://spdx.org/licenses/GPL-2.0.html

#define likely(x) __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)

#define COND_ERROR(X)                                                          \
        if (unlikely((long int)(X)))                                           \
        goto ERROR

#define COND_ERROR_L(X, LABEL)                                                 \
        if (unlikely((long int)(X)))                                           \
        goto LABEL
