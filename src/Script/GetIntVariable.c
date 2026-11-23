/* Script__GetIntVariable @ 0x8023A650 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__GetIntVariable @ 0x8023A650 (0x3C). ProDG -O2. */
extern void Script__PushVariable(void *script, void *name, void *context);
extern int Script__PopInt(void *script, void *name);

int Script__GetIntVariable(void *script, void *name, void *context) {
    Script__PushVariable(script, name, context);
    return Script__PopInt(script, name);
}
