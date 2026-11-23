/* Protagonist__AttacherEnable @ 0x800410E0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Protagonist__AttacherEnable @ 0x800410E0 (0x6C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void fn_80216E2C(void *attacher, int enabled);

void Protagonist__AttacherEnable(void *script, void *context) {
    void *attacher = (void *)Script__PopInt(script, context);
    int enabled = Script__PopInt(script, context);

    if (attacher) {
        if (enabled) {
            fn_80216E2C(attacher, 1);
        } else {
            fn_80216E2C(attacher, 0);
        }
    }
}
