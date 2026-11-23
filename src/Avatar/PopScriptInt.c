/* Avatar__PopScriptInt @ 0x8009213C (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__PopScriptInt @ 0x8009213C (0x24). ProDG -O2. */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarWithScript;

extern int Script__PopInt(void *script, void *context);

int Avatar__PopScriptInt(AvatarWithScript *avatar, void *context) {
    return Script__PopInt(avatar->script, context);
}
