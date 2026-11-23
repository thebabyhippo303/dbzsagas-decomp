/* Avatar__GetNumLives @ 0x80042D60 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetNumLives @ 0x80042D60 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x290];
    int lives;
} AvatarLives;

extern AvatarLives *Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Avatar__GetNumLives(void *script, void *context) {
    AvatarLives *avatar = Script__PopInt(script, context);
    Script__PushInt(script, context, avatar->lives);
}
