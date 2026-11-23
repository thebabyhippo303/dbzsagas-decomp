/* Avatar__CheckForInventoryHandItem @ 0x8002D480 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CheckForInventoryHandItem @ 0x8002D480 (0x74). ProDG -O2. */
typedef struct AvatarInventoryOwner {
    char pad[0x159C];
    void *inventory;
} AvatarInventoryOwner;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__CheckForInventoryHandItem(void *script, void *context) {
    AvatarInventoryOwner *avatar = Script__PopInt(script, context);
    int item_id = (int)Script__PopInt(script, context);
    int inventory_item_id = *(int *)((char *)avatar->inventory + 0x112C);

    if (inventory_item_id == item_id) {
        Script__PushInt(script, context, 1);
    } else {
        Script__PushInt(script, context, 0);
    }
}
