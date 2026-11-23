/* Math__Sin @ 0x802B25B4 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Sin @ 0x802B25B4 (0x40). ProDG -O2. */
extern float Script__PopFloat(void *script, int context);
extern float sinf(float value);
extern void Script__PushFloat(void *script, int context, float value);

void Math__Sin(void *script, int context) {
	Script__PushFloat(script, context, sinf(Script__PopFloat(script, context)));
}
