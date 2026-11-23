/* Curve__Destroy @ 0x800E06BC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_801843CC(void *ptr);
extern int lbl_80332DB0 __attribute__((section(".data")));
extern int lbl_80332E18 __attribute__((section(".data")));

void Curve__Destroy(void *self, int flags) {
    *(void **)self = &lbl_80332DB0;
    fn_801843CC(*(void **)((char *)self + 16));
    *(void **)self = &lbl_80332E18;
    if ((flags & 1) != 0) {
        fn_801843CC(self);
    }
}
