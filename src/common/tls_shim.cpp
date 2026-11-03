// SPDX-FileCopyrightText: 2026 Eglantine-NX 2 Fork MDias
// SPDX-License-Identifier: GPL-3.0-or-later

#include <cstdint>

#ifdef __MINGW32__
namespace std {
    thread_local void (*__once_call)();
    thread_local void* __once_callable;
}

extern "C" void __once_proxy() {
    if (std::__once_call) {
        std::__once_call();
    }
}
#endif
