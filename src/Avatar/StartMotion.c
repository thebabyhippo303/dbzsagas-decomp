/* Avatar__StartMotion @ 0x8004114C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void fn_801DCC7C(int actor, int motion, int parameter, int mode, int zero_1, int zero_2);

void Avatar__StartMotion(void *script, void *context) {
    int actor;
    int motion;
    int parameter;

    actor = Script__PopInt(script, context);
    motion = Script__PopInt(script, context);
    Script__PopInt(script, context);
    parameter = Script__PopInt(script, context);
    fn_801DCC7C(actor, motion, parameter, 1, 0, 0);
}
