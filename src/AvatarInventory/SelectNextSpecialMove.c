/* AvatarInventory__SelectNextSpecialMove @ 0x8009B428 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;

typedef struct AvatarInventory {
    /* 0x00 */ s32 pad0;
    /* 0x04 */ s32 pad1;
    /* 0x08 */ s32 pad2;
    /* 0x0C */ s32 slot;
    /* 0x10 */ s32 pad3;
    /* 0x14 */ s32 pad4;
    /* 0x18 */ s32 pad5;
    /* 0x1C */ s32 pad6;
    /* 0x20 */ s32 pad7;
    /* 0x24 */ s32 items;
} AvatarInventory;

extern u32 AvatarInventory__NextSlotIndex(void *, s32);
extern void Avatar__GetSpecialMoveImpl(void *);

void AvatarInventory__SelectNextSpecialMove(AvatarInventory *inv) {
    s32 i;
    s32 slot = inv->slot;
    s32 *items = &inv->items;

    for (i = 0; i <= 120; i++) {
        slot = (s32)AvatarInventory__NextSlotIndex(inv, slot);
        if ((items[slot * 9] != 0) &&
            (((s32 **)((char *)inv + 0x1128))[0][slot * 6] & 0x4000)) {
            inv->slot = slot;
            Avatar__GetSpecialMoveImpl(inv);
            break;
        }
    }
}
