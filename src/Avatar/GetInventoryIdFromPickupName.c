/* Avatar__GetInventoryIdFromPickupName @ 0x8002D2B8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetInventoryIdFromPickupName @ 0x8002D2B8 (0x70). ProDG -O2. */
typedef struct AvatarInv {
    char pad[0x159C];
    void *inventory;
} AvatarInv;

extern AvatarInv *Script__PopInt(void *script, void *context);
extern char *Script__PopString(void *script, void *context, int *ok);
extern int Avatar__GetInventoryIdFromPickupNameImpl(void *inventory, char *name);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetInventoryIdFromPickupName(void *script, void *context) {
    int ok;
    int id;
    AvatarInv *avatar = Script__PopInt(script, context);
    char *name = Script__PopString(script, context, &ok);
    Script__PopInt(script, context);
    id = Avatar__GetInventoryIdFromPickupNameImpl(avatar->inventory, name);
    Script__PushInt(script, context, id);
}
