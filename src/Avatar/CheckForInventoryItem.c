/* Avatar__CheckForInventoryItem @ 0x8002D3CC (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarInventoryOwner {
    char pad[0x159C];
    char *inventory;
} AvatarInventoryOwner;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__CheckForInventoryItem(void *script, void *context) {
    AvatarInventoryOwner *avatar = Script__PopInt(script, context);
    int itemId = (int)Script__PopInt(script, context);
    char *inventory = avatar->inventory;
    int owned = 0;

    if (*(int *)(inventory + 0x112C) == itemId || *(int *)(inventory + 0x1134) == itemId) {
        owned = 1;
    } else {
        char *base = inventory + 36;
        int present = 0;
        int off = itemId * 36;
        if (*(int *)(base + off) != 0) {
            present = 1;
        }
        if (present != 0) {
            owned = 1;
        }
    }
    if (owned != 0) {
        Script__PushInt(script, context, 1);
    } else {
        Script__PushInt(script, context, 0);
    }
}
