/* Avatar__SetAnimScriptVarFloat @ 0x800921BC (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAnimScriptVarFloat @ 0x800921BC (0x30). */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarScript;

extern void Script__SetFloatVariable(void *script, int name, int value);

void Avatar__SetAnimScriptVarFloat(AvatarScript *avatar, int value, int name) {
    Script__SetFloatVariable(avatar->script, name, value);
}
