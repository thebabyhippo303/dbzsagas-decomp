/* Math__Pow @ 0x802B2554 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Pow @ 0x802B2554 (0x60). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern float powf(float base, float exp);

void Math__Pow(void *script, void *context) {
	float base;
	float exp;
	base = Script__PopFloat(script, context);
	exp = Script__PopFloat(script, context);
	Script__PushFloat(script, context, powf(base, exp));
}
