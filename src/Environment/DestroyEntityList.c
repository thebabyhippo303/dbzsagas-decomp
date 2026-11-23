/* Environment__DestroyEntityList @ 0x800EA654 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Environment__DestroyEntityList @ 0x800EA654 (0x60). ProDG -O2. */
extern void fn_801843CC(void *ptr);

void Environment__DestroyEntityList(void *self, int flags) {
    void *child = *(void **)self;
    if (child != 0) {
        void *inner = *(void **)child;
        if (inner != 0)
            fn_801843CC(inner);
        fn_801843CC(child);
    }
    if (flags & 1)
        fn_801843CC(self);
}
