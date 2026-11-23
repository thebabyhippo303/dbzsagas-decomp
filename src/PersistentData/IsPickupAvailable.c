/* PersistentData__IsPickupAvailable @ 0x80128EEC (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PersistentData__IsPickupAvailable @ 0x80128EEC (0xB0). ProDG -O2. */
typedef int s32;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern char lbl_803278C8[] __attribute__((section(".data")));
extern char lbl_803278EC[] __attribute__((section(".data")));
extern char lbl_80327910[] __attribute__((section(".data")));
extern char *lbl_803DC368;
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));

int PersistentData__GetGlobalImpl(void *data, char *name);
int sprintf(char *buf, const char *fmt, ...);

s32 PersistentData__IsPickupAvailable(void *unused, s32 kind, s32 bit) {
    char name[20];
    char *fmt;
    s32 value;
    s32 index;

    index = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) - 2;
    value = 0;
    switch (kind) {
    case 9:
        fmt = lbl_80327910;
        sprintf(name, fmt, index);
        value = (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name) >> bit) & 1;
        break;
    case 10:
        fmt = lbl_803278EC;
        sprintf(name, fmt, index);
        value = (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name) >> bit) & 1;
        break;
    case 8:
        fmt = lbl_803278C8;
        sprintf(name, fmt, index);
        value = (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, name) >> bit) & 1;
        break;
    }
    return value ^ 1;
}
