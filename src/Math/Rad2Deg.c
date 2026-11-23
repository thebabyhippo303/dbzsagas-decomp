/* Math__Rad2Deg @ 0x802B26E4 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Rad2Deg @ 0x802B26E4 (0x44). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern float lbl_803DE524;

void Math__Rad2Deg(void *script, void *context) {
    float value = Script__PopFloat(script, context);
    value *= lbl_803DE524;
    Script__PushFloat(script, context, value);
}
