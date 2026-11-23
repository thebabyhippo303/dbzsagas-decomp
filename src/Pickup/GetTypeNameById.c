/* Pickup__GetTypeNameById @ 0x800F23F8 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    s32 name;
    char pad[0x14];
    s32 id;
    char pad2[0x4C - 0x1C];
} PickupTypeInfo;

extern char lbl_80323D0C[] __attribute__((section(".data")));

s32 Pickup__GetTypeNameById(s32 id) {
    char *base = lbl_80323D0C;
    PickupTypeInfo *entry = (PickupTypeInfo *)(base + 4);
    s32 count = 16;

    do {
        if (id != entry->id) {
            entry += 1;
        } else {
            return entry->name;
        }
        count -= 1;
    } while (count != 0);
    return 0;
}
