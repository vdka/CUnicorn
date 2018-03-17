
#include <unicorn/unicorn.h>

uc_err uc_hook_add_shim(uc_engine *uc, uc_hook *hh, int type, void *callback,
        void *user_data, uint64_t begin, uint64_t end, va_list args) {
    return uc_hook_add(uc, hh, type, callback, user_data, begin, end, args);
}

