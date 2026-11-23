/* Avatar__PushScriptInt @ 0x8009210C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__PushScriptInt @ 0x8009210C (0x30). ProDG -O2. */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarScript;

extern void Script__PushInt(void *script, void *context, int value);

void Avatar__PushScriptInt(AvatarScript *self, int value, void *context) {
    Script__PushInt(self->script, context, value);
}
