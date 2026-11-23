/* AvaSurf__DestroyRowTable @ 0x800B7EB0 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern unsigned char lbl_803335C8[] __attribute__((section(".rodata")));
extern unsigned char lbl_80333648[] __attribute__((section(".rodata")));

extern void AvaSurf__FreeRows(void *self);
extern void AvaSurf__Destroy(void *self, int flags);
extern void fn_8025545C(void *self, void *arg);

void AvaSurf__DestroyRowTable(void *self, void *arg) {
    void *vt12;
    void *vt8;

    vt12 = lbl_803335C8;
    vt8 = lbl_80333648;
    *(void **)((char *)self + 12) = vt12;
    *(void **)((char *)self + 8) = vt8;
    AvaSurf__FreeRows(self);
    AvaSurf__Destroy((char *)self + 12, 0);
    fn_8025545C(self, arg);
}
