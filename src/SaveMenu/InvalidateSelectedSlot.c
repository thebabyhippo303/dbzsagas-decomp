/* SaveMenu__InvalidateSelectedSlot @ 0x80050CF0 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct SaveMenuOpsWide {
    char pad[0x408];
    signed short offset;
    char pad40A[2];
    void (*fn)(void *self, void *pair);
} SaveMenuOpsWide;

typedef struct SaveMenuMsgPair {
    char *a;
    char *b;
} SaveMenuMsgPair;

extern void *lbl_803DC368;
extern float lbl_80319D58 __attribute__((section(".data")));
extern SaveMenuMsgPair lbl_80319D50 __attribute__((section(".data")));

extern int fn_802687C8(void *widget);
extern void SaveGame__SetSlotInvalidFlag(void *save, int slot, int flag);
extern void fn_80267318(void *obj, int mode, float value);

void SaveMenu__InvalidateSelectedSlot(char *self) {
    void *save;
    SaveMenuOpsWide *ops;
    SaveMenuMsgPair pair;

    save = *(void **)((char *)lbl_803DC368 + 0x5388);
    SaveGame__SetSlotInvalidFlag(save, fn_802687C8(self + 0x236C4) - 0x210, 1);
    fn_80267318(self + 0x3DA28, 0, lbl_80319D58);
    ops = *(SaveMenuOpsWide **)(self + 0x19C);
    pair = lbl_80319D50;
    ops->fn(self + ops->offset, &pair);
}
