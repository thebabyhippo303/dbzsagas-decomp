/* Math__Deg2Rad @ 0x802B2728 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Deg2Rad @ 0x802B2728 (0x44). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern const float lbl_803DA1C0;

void Math__Deg2Rad(void *script, void *context) {
	float value = Script__PopFloat(script, context);
	value *= lbl_803DA1C0;
	Script__PushFloat(script, context, value);
}
