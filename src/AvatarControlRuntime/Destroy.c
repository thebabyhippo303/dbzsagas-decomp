/* AvatarControlRuntime__Destroy @ 0x800A5C78 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void fn_80184430(void *p);
extern void fn_80086A60(void *obj, int how);
extern void AvatarControls__Destroy(void *controls, int how);
extern void fn_801843CC(void *self);
extern int lbl_803340E8 __attribute__((section(".data")));

void AvatarControlRuntime__Destroy(void *self, int flags) {
    void *child = *(void **)((char *)self + 0x550);

    *(void **)((char *)self + 4) = &lbl_803340E8;
    if (child != 0) {
        fn_80184430(child);
    }
    fn_80086A60((char *)self + 0x304, 2);
    AvatarControls__Destroy((char *)self + 0x14C, 2);
    if (flags & 1) {
        fn_801843CC(self);
    }
}
