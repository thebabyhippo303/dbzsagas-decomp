/* Script__GetFloatVariable @ 0x8023A68C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Script__GetFloatVariable @ 0x8023A68C (0x3C). ProDG -O2. */
extern void Script__PushVariable(void *script, void *name, void *context);
extern float Script__PopFloat(void *script, void *name);

float Script__GetFloatVariable(void *script, void *name, void *context) {
    Script__PushVariable(script, name, context);
    return Script__PopFloat(script, name);
}
