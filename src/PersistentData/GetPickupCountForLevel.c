/* PersistentData__GetPickupCountForLevel @ 0x8012934C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80327920[] __attribute__((section(".data")));
extern char lbl_803278FC[] __attribute__((section(".data")));
extern char lbl_803278D8[] __attribute__((section(".data")));
extern char *lbl_803DC368;

int PersistentData__GetGlobalImpl(void *data, char *name);
int sprintf(char *buf, const char *fmt, ...);

int PersistentData__GetPickupCountForLevel(void *unused, int level, int kind) {
    char name[20];
    char *fmt;
    int index = level - 2;
    switch (kind) {
    case 9:
        fmt = lbl_80327920;
        sprintf(name, fmt, index);
        return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, name);
    case 10:
        fmt = lbl_803278FC;
        sprintf(name, fmt, index);
        return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, name);
    case 8:
        fmt = lbl_803278D8;
        sprintf(name, fmt, index);
        return PersistentData__GetGlobalImpl(lbl_803DC368 + 300, name);
    }
    return 0;
}
