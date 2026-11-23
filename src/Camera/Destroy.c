/* Camera__Destroy @ 0x800B93BC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__Destroy @ 0x800CAEF4 (0x64). ProDG -O2. */
extern void fn_802704BC(void *obj, int mode);
extern void fn_800B93BC(void *self, int arg);
extern int lbl_803358B8 __attribute__((section(".data")));
extern int lbl_803DC5CC;

void Camera__Destroy(void *self, int arg) {
    *(void **)((char *)self + 0x3C) = &lbl_803358B8;
    lbl_803DC5CC = 0;
    fn_802704BC((char *)self + 0x240, 2);
    fn_802704BC((char *)self + 0x4C, 2);
    fn_800B93BC(self, arg);
}
