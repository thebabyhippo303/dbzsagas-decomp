/* Instance__Exists @ 0x802B0850 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Instance__Exists @ 0x802B0850 (0x5C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);

void Instance__Exists(void *script, void *context) {
    if (Script__PopInt(script, context) == 0)
        Script__PushInt(script, context, 0);
    else
        Script__PushInt(script, context, 1);
}
