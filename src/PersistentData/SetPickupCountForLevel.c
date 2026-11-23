/* PersistentData__SetPickupCountForLevel @ 0x80129290 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80327920[] __attribute__((section(".data")));
extern char lbl_803278FC[] __attribute__((section(".data")));
extern char lbl_803278D8[] __attribute__((section(".data")));
extern char *lbl_803DC368;

int PersistentData__SetGlobalImpl(void *data, char *name, int value);
int sprintf(char *buf, const char *fmt, ...);

void PersistentData__SetPickupCountForLevel(void *unused, int level, int kind, int value) {
    char name[20];
    char *fmt;
    int index = level - 2;
    switch (kind) {
    case 9:
        fmt = lbl_80327920;
        sprintf(name, fmt, index);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, name, value);
        break;
    case 10:
        fmt = lbl_803278FC;
        sprintf(name, fmt, index);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, name, value);
        break;
    case 8:
        fmt = lbl_803278D8;
        sprintf(name, fmt, index);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 300, name, value);
        break;
    }
}
