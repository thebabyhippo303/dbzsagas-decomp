/* Avatar__TriggerEventScript @ 0x8009254C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct AvatarScriptHost {
    char pad[0x84];
    void *script;
} AvatarScriptHost;

extern int Script__PopInt(void *script, void *context);
extern void fn_80251510(void *name, int value, void *a, void *b, int c);
extern char lbl_803B1DDC[] __attribute__((section(".data")));

void Avatar__TriggerEventFromScript(AvatarScriptHost *self, void *context) {
    fn_80251510(lbl_803B1DDC, Script__PopInt(self->script, context), 0, 0, 0);
}
