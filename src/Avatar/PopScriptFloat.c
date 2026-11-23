/* Avatar__PopScriptFloat @ 0x80092160 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Avatar__PopScriptFloat @ 0x80092160 (0x24). */
typedef struct {
    char pad[0x84];
    void *script;
} AvatarWithScript;

extern float Script__PopFloat(void *script, void *context);

float Avatar__PopScriptFloat(AvatarWithScript *avatar, void *context) {
    return Script__PopFloat(avatar->script, context);
}
