/* Avatar__GetSpecialMove @ 0x80031A80 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetSpecialMove @ 0x80031A80 (0x48). ProDG -O2. */
typedef struct {
    char pad[0x159C];
    void *special;
} AvatarSpecial;

extern AvatarSpecial *Script__PopInt(void *script, void *context);
extern int Avatar__GetSpecialMoveImpl(void *special);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetSpecialMove(void *script, void *context) {
    AvatarSpecial *avatar = Script__PopInt(script, context);
    int move = Avatar__GetSpecialMoveImpl(avatar->special);
    Script__PushInt(script, context, move);
}
