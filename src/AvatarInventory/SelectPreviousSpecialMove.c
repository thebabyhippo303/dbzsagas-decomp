/* AvatarInventory__SelectPreviousSpecialMove @ 0x8009B4A8 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct Inv {
    s32 pad0, pad1, pad2, slot;
    s32 pad3, pad4, pad5, pad6, pad7;
    s32 items;
} Inv;

extern u32 AvatarInventory__PreviousSlotIndex(void *, s32);
extern void Avatar__GetSpecialMoveImpl(void *);

void AvatarInventory__SelectPreviousSpecialMove(Inv *inv) {
    s32 i;
    s32 slot;
    s32 *items;

    i = 0;
    slot = inv->slot;
    items = &inv->items;
    while (i <= 120) {
        slot = AvatarInventory__PreviousSlotIndex(inv, slot);
        if ((items[slot * 9] != 0) && (((s32 **)((char *)inv + 0x1128))[0][slot * 6] & 0x4000)) {
            inv->slot = slot;
            Avatar__GetSpecialMoveImpl(inv);
            break;
        }
        i++;
    }
}
