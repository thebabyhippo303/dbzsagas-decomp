/* Emitter__UseOSTimer @ 0x8003C770 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Emitter__UseOSTimer @ 0x8003C770 (0x58). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Emitter__UseOSTimerImpl(void *emitter, int enabled);

void Emitter__UseOSTimer(void *script, void *context) {
    void *emitter = (void *)Script__PopInt(script, context);
    int flag = Script__PopInt(script, context);
    Emitter__UseOSTimerImpl(emitter, flag != 0);
}
