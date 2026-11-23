/* Avatar__SetAnimScriptVarIntImpl @ 0x80092184 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarScript;

extern void Script__SetIntVariable(void *script, int name, int value, int extra);

void Avatar__SetAnimScriptVarIntImpl(AvatarScript *avatar, int value, int extra, int name) {
    Script__SetIntVariable(avatar->script, name, value, extra);
}
