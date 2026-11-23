/* Script__SetIntVariable @ 0x8023A548 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__SetIntVariable @ 0x8023A548 (0x48). ProDG -O2. */
extern void Script__PushInt(void *script, void *name, int value);
extern void Script__PopToVariable(void *script, void *name, void *context);

void Script__SetIntVariable(void *script, void *name, void *context, int value) {
    Script__PushInt(script, name, value);
    Script__PopToVariable(script, name, context);
}
