/* Avatar__GetAnimScriptVarInt @ 0x800921EC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__GetAnimScriptVarInt @ 0x800921EC (0x30). ProDG -O2. */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarWithScript;

extern int Script__GetIntVariable(void *script, void *name, void *context);

int Avatar__GetAnimScriptVarInt(AvatarWithScript *avatar, void *context, void *name) {
    return Script__GetIntVariable(avatar->script, name, context);
}
