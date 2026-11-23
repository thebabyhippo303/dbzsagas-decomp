/* PersistentData__GetPickupFlagsForLevel @ 0x801291E4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__GetPickupFlagsForLevel @ 0x801291E4 (0xAC). ProDG -O2. */
typedef int s32;

extern char lbl_803278C8[] __attribute__((section(".data")));
extern char lbl_803278EC[] __attribute__((section(".data")));
extern char lbl_80327910[] __attribute__((section(".data")));
extern char *lbl_803DC368;

int PersistentData__GetGlobalImpl(void *data, char *name);
int sprintf(char *buf, const char *fmt, ...);

s32 PersistentData__GetPickupFlagsForLevel(void *unused, s32 level, s32 kind) {
    char name[20];
    char *fmt;
    s32 value;
    s32 index;

    index = level - 2;
    value = 0;
    switch (kind) {
    case 9:
        fmt = lbl_80327910;
        sprintf(name, fmt, index);
        value = PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name);
        break;
    case 10:
        fmt = lbl_803278EC;
        sprintf(name, fmt, index);
        value = PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name);
        break;
    case 8:
        fmt = lbl_803278C8;
        sprintf(name, fmt, index);
        value = PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name);
        break;
    }
    return value;
}
