/* Script__SetFloatVariable @ 0x8023A590 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__SetFloatVariable @ 0x8023A590 (0x44). ProDG -O2. */
extern void Script__PushFloat(void *script, void *name, float value);
extern void Script__PopToVariable(void *script, void *name, void *context);

void Script__SetFloatVariable(void *script, void *name, void *context, float value) {
    Script__PushFloat(script, name, value);
    Script__PopToVariable(script, name, context);
}
