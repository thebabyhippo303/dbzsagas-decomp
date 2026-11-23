/* PersistentData__InitializePickupFlags @ 0x80128DB0 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern int sprintf(char *dst, const char *fmt, ...);
extern void PersistentData__SetGlobalImpl(void *data, char *name, int value);
extern void *lbl_803DC368;
extern char lbl_803278C8[];
extern char lbl_803278D8[];
extern char lbl_803278EC[];
extern char lbl_803278FC[];
extern char lbl_80327910[];
extern char lbl_80327920[];

void PersistentData__InitializePickupFlags(void) {
    char buffer[24];
    int i;

    for (i = 0; i <= 19; i++) {
        sprintf(buffer, lbl_803278C8, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
        sprintf(buffer, lbl_803278D8, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
        sprintf(buffer, lbl_803278EC, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
        sprintf(buffer, lbl_803278FC, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
        sprintf(buffer, lbl_80327910, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
        sprintf(buffer, lbl_80327920, i);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 300, buffer, 0);
    }
}
