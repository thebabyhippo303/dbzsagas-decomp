/* Script__TriggerEvent @ 0x8002ACCC (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__DispatchEventWithOptionalTarget @ 0x8002ACCC (0x80). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void fn_80251650(void *registry, int event, int value, void *actor, void *target);
extern char lbl_803B1DDC[] __attribute__((section(".data")));

typedef struct {
    char pad[200];
    void *actor;
} ScriptHost;

void Script__DispatchEventWithOptionalTarget(void *script, void *context) {
    int event;
    int bound;
    void *target;

    event = Script__PopInt(script, context);
    bound = 0x2000E;
    target = 0;
    if (event <= bound) {
        bound = 0x2000C;
        if (event >= bound) {
            target = (void *)Script__PopInt(script, context);
        }
    }
    fn_80251650(lbl_803B1DDC, event, 0, ((ScriptHost *)script)->actor, target);
}
