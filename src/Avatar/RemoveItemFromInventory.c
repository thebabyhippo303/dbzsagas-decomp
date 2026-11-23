/* Avatar__RemoveItemFromInventory @ 0x8002D328 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarInventoryOwner {
    char pad[0x159C];
    char *inventory;
} AvatarInventoryOwner;

extern void *Script__PopInt(void *script, void *context);
extern void AvatarInventory__RemoveItem(void *inventory, int item, void *unused, int count);

void Avatar__RemoveItemFromInventory(void *script, void *context) {
    AvatarInventoryOwner *avatar = Script__PopInt(script, context);
    int itemId = (int)Script__PopInt(script, context);
    char *inventory = avatar->inventory;
    int owned = 0;

    if (*(int *)(inventory + 0x112C) != itemId && *(int *)(inventory + 0x1134) != itemId) {
        register char *slotBase = inventory + 0x24;
        register int delta = itemId * 0x24;
        int present = 0;

        if (*(int *)(slotBase + delta) != 0) {
            present = 1;
        }
        if (present != 0) {
            owned = 1;
        }
    } else {
        owned = 1;
    }
    if (owned != 0) {
        AvatarInventory__RemoveItem(avatar->inventory, itemId, 0, 1);
    }
}
