// SPDX-License-Identifier: GPL-2.0-only
// Full license at https://spdx.org/licenses/GPL-2.0.html

#include "error.h"

IM main(VM)
{
        eprinterr(4, "%s", "test error");
        return 0;
}
