/* Pickup__FindTypeIndexByName @ 0x800F15E8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct PickupType { const char *name; char pad[72]; } PickupType;
int String__CompareIgnoreCase(const char *, const char *);
extern PickupType lbl_80323D0C[] __attribute__((section(".data")));

s32 Pickup__FindTypeIndexByName(const char *name) {
    s32 i;
    s32 n = 11;
    if (name != 0 && *name != 0) {
        for (i = 0; i < n; i++) {
            if (String__CompareIgnoreCase(lbl_80323D0C[i].name, name) == 0) return i;
        }
    }
    return -1;
}
