/* Avatar__SetAnimScriptVarInt @ 0x8002FDD0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAnimScriptVarInt @ 0x8002FDD0 (0x64). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *ok);
extern int Script__PopInt(void *script, void *context);
extern void *Game__GetPlayerImpl(void *game, int which);
extern void Avatar__SetAnimScriptVarIntImpl(void *player, char *name, int value, int flag);
extern void *lbl_803DC3C0;

void Avatar__SetAnimScriptVarInt(void *script, void *context) {
    int ok;
    char *name;
    int value;

    name = Script__PopString(script, context, &ok);
    value = Script__PopInt(script, context);
    Avatar__SetAnimScriptVarIntImpl(Game__GetPlayerImpl(lbl_803DC3C0, 0), name, value, 0);
}
