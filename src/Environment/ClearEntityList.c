/* Environment__ClearEntityList @ 0x800EB128 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Environment__ClearEntityList @ 0x800EB128 (0x54). ProDG -O2. */

extern void fn_801843CC(void *ptr);

void Environment__ClearEntityList(void *self) {
    void *item;

    item = *(void **)self;
    if (item != 0) {
        void *inner;

        inner = *(void **)item;
        if (inner != 0) {
            fn_801843CC(inner);
        }
        fn_801843CC(item);
        *(void **)self = 0;
    }
}
