/* FullScreenEffect__DestroyResources @ 0x800E2630 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FullScreenEffect__DestroyResources @ 0x800E2630 (0x68). ProDG -O2. */
extern void fn_802912F8(void *resource);
extern void fn_8029068C(void);

void FullScreenEffect__DestroyResources(char *self) {
    if (*(int *)(self + 156) != 0) {
        if (*(void **)(self + 136) != 0) {
            fn_802912F8(*(void **)(self + 136));
            *(void **)(self + 136) = 0;
        }
        if (*(void **)(self + 140) != 0) {
            fn_802912F8(*(void **)(self + 140));
            *(void **)(self + 140) = 0;
        }
        fn_8029068C();
    }
}
