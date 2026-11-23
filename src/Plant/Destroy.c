/* Plant__Destroy @ 0x800F2D58 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Plant__Destroy @ 0x800F2D58 (0x6C). ProDG -O2.
   Address locals keep the three vtable loads grouped ahead of the sim test. */
extern void Plant__ReleaseReference(void *self);
extern void fn_802C2624(void *self, int mode);

extern char lbl_80332068[];
extern char lbl_80332088[];
extern char lbl_80332130[];

void Plant__Destroy(char *self, int mode) {
    char *vt198 = lbl_80332088;
    char *vt1B4 = lbl_80332068;
    char *vt34 = lbl_80332130;
    int sim = *(int *)(self + 0x414);

    *(void **)(self + 0x198) = vt198;
    *(void **)(self + 0x1B4) = vt1B4;
    *(void **)(self + 0x34) = vt34;
    if (sim != 0)
        Plant__ReleaseReference(self);
    fn_802C2624(self, mode);
}
