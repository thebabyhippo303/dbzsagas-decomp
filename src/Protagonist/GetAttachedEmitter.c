/* Protagonist__GetAttachedEmitter @ 0x802AE554 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Protagonist__GetAttachedEmitter @ 0x802AE554 (0x5C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int Attacher__GetEmitter(int handle);

void Protagonist__GetAttachedEmitter(void *script, void *context) {
    int handle;
    int result;
    Script__PopInt(script, context);
    handle = Script__PopInt(script, context);
    result = 0;
    if (handle != 0)
        result = Attacher__GetEmitter(handle);
    Script__PushInt(script, context, result);
}
