/* Avatar__IsBoss @ 0x80043F88 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__IsBoss @ 0x80043F88 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x2D4];
    int isBoss;
} AvatarBoss;

extern AvatarBoss *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__IsBoss(void *script, void *context) {
    AvatarBoss *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->isBoss);
}
