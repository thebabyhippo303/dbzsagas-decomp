/* PiccoloTimer__Destroy @ 0x8011D770 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_801843CC(void *self);

typedef void (*PiccoloReleaseFn)(void *self, int mode);

#define RELEASE(obj)                                                          \
    do {                                                                      \
        void *_obj = (obj);                                                  \
        char *_vtable;                                                        \
        short _adjust;                                                        \
        PiccoloReleaseFn _release;                                            \
        if (_obj != 0) {                                                      \
            _vtable = *(char **)((char *)_obj + 412);                         \
            _adjust = *(short *)(_vtable + 8);                                \
            _release = *(PiccoloReleaseFn *)(_vtable + 12);                   \
            _release((char *)_obj + _adjust, 3);                              \
        }                                                                     \
    } while (0)

void PiccoloTimer__Destroy(void *self, int flags) {
    RELEASE(*(void **)((char *)self + 16));
    RELEASE(*(void **)((char *)self + 12));
    RELEASE(*(void **)((char *)self + 8));
    RELEASE(*(void **)((char *)self + 4));
    RELEASE(*(void **)self);
    *(void **)self = 0;
    *(void **)((char *)self + 4) = 0;
    *(void **)((char *)self + 8) = 0;
    *(void **)((char *)self + 12) = 0;
    *(void **)((char *)self + 16) = 0;
    if ((flags & 1) != 0) {
        fn_801843CC(self);
    }
}
