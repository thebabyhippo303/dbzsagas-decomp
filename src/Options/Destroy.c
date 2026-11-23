/* Options__Destroy @ 0x801262A8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern char lbl_80337010[];
extern void fn_80126CE0(void *subobject, int flag);
extern void fn_801843CC(void *object);

void Options__Destroy(void *self, int flags) {
    *(void **)((char *)self + 0x5254) = lbl_80337010;
    fn_80126CE0((char *)self + 12, 2);
    if (flags & 1)
        fn_801843CC(self);
}
