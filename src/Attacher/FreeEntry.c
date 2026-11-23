/* Attacher__FreeEntry @ 0x80216D5C (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Emitter__Kill(void *emitter);
extern void fn_8022AB9C(void *obj, int mode);
extern void fn_802081C4(int handle, int mode);
extern void fn_8021B55C(void *obj);
extern void fn_8021A3A4(void *obj);
extern void fn_80184530(void *list, void *entry);
extern void fn_801845EC(void *list, void *entry);
extern int lbl_803ACF90 __attribute__((section(".data")));
extern int lbl_803ACF9C __attribute__((section(".data")));

void Attacher__FreeEntry(void *self) {
    int kind;
    void *obj;
    int handle;

    kind = *(unsigned short *)((char *)self + 68) & 0xF;
    switch (kind) {
    case 1:
        obj = *(void **)((char *)self + 88);
        fn_8022AB9C((char *)obj + 8, 0);
        handle = *(int *)((char *)*(void **)((char *)self + 88) + 168);
        if (handle != 0) {
            fn_802081C4(handle, 3);
        }
        fn_8021B55C(*(void **)((char *)self + 88));
        *(void **)((char *)self + 88) = 0;
        break;
    case 2:
        Emitter__Kill(*(void **)((char *)self + 88));
        *(void **)((char *)self + 88) = 0;
        break;
    case 4:
        fn_8021A3A4(*(void **)((char *)self + 88));
        *(void **)((char *)self + 88) = 0;
        break;
    }
    {
        int zero;

        zero = 0;
        *(int *)self = zero;
        *(unsigned short *)((char *)self + 68) = (unsigned short)zero;
    }
    fn_80184530(&lbl_803ACF9C, self);
    fn_801845EC(&lbl_803ACF90, self);
}
