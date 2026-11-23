/* SuspensionBridge__Destroy @ 0x800F80C0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Emitter__Kill(void *emitter);
extern void fn_801A6764(void *obj, int how);
extern void fn_801F101C(void *self, int flags);
extern int lbl_80331B50 __attribute__((section(".rodata")));
extern int lbl_80331C10 __attribute__((section(".rodata")));
extern int lbl_80340F30 __attribute__((section(".rodata")));
extern int lbl_80340FF0 __attribute__((section(".rodata")));

void SuspensionBridge__Destroy(void *self, int flags) {
    void *emitter = *(void **)((char *)self + 0x370);

    *(void **)((char *)self + 0x198) = &lbl_80331B50;
    *(void **)((char *)self + 0x34) = &lbl_80331C10;
    if (emitter != 0) {
        Emitter__Kill(emitter);
    }
    *(void **)((char *)self + 0x198) = &lbl_80340F30;
    *(void **)((char *)self + 0x34) = &lbl_80340FF0;
    fn_801A6764((char *)self + 0x198, 0);
    fn_801F101C(self, flags);
}
