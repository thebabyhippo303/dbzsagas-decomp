/* Avatar__GetInventoryItemCount @ 0x8002D6B8 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarInventoryOwner {
    char pad[0x159C];
    char *inventory;
} AvatarInventoryOwner;

extern void *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetInventoryItemCount(void *script, void *context) {
    void *sp = script;
    void *ctx = context;
    AvatarInventoryOwner *avatar = Script__PopInt(sp, ctx);
    int itemId = (int)Script__PopInt(sp, ctx);
    char *inventory = avatar->inventory;
    int count = 0;
    int owned = 0;

    {
        int off;

        if (*(int *)(inventory + 0x112C) == itemId || *(int *)(inventory + 0x1134) == itemId) {
            owned = 1;
        } else {
            char *base = inventory + 36;
            int present = 0;

            off = itemId * 36;
            if (*(int *)(base + off) != 0) {
                present = 1;
            }
            if (present != 0) {
                owned = 1;
            }
        }
        if (owned != 0) {
            char *base = avatar->inventory + 36;

            off = itemId * 36;
            count = *(int *)(base + off);
        }
    }
    Script__PushInt(sp, ctx, count);
}
