/* AvatarInventory__ReturnHandItemToInventory @ 0x8009B6D4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct InvSlot {
    int pad0;
    int count;
    int flags;
    char pad[0x24 - 12];
} InvSlot;

typedef struct AvatarInventory {
    char pad[0x20];
    InvSlot slots[1];
} AvatarInventory;

void Avatar__RemoveHandItemImpl(void *, int);

void AvatarInventory__ReturnHandItemToInventory(void *arg0) {
    AvatarInventory *inv = arg0;
    inv->slots[*(int *)((char *)inv + 0x112C)].count += 1;
    inv->slots[*(int *)((char *)inv + 0x112C)].flags |= *(int *)((char *)inv + 0x1130);
    Avatar__RemoveHandItemImpl(arg0, 0);
}
