/* Avatar__AddItemToInventory @ 0x8002D264 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AddItemToInventory @ 0x8002D264 (0x54). ProDG -O2. */
typedef struct AvatarInv {
    char pad[0x159C];
    void *inventory;
} AvatarInv;

extern AvatarInv *Script__PopInt(void *script, void *context);
extern void *Script__PopIntItem(void *script, void *context);
extern void fn_8009B730(void *inventory, void *item, int a, int b);

void Avatar__AddItemToInventory(void *script, void *context) {
    AvatarInv *avatar = Script__PopInt(script, context);
    void *item = Script__PopIntItem(script, context);
    fn_8009B730(avatar->inventory, item, 0, 1);
}
