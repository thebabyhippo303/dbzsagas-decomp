/* Avatar__IsPlayerControlled @ 0x8003C8B4 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsPlayerControlled @ 0x8003C8B4 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x7E4];
    int playerControlled;
} AvatarControl;

extern AvatarControl *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__IsPlayerControlled(void *script, void *context) {
    AvatarControl *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->playerControlled);
}
