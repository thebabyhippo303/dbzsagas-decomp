/* Actor__SetAlpha @ 0x802AFE68 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetAlpha @ 0x802AFE68 (0x4C). ProDG -O2. */
extern void *Script__PopActor(void *script, void *context, int null_if_zero);
extern float Script__PopFloat(void *script, void *context);
extern void Actor__SetAlphaImpl(void *actor, float alpha);

void Actor__SetAlpha(void *script, void *context) {
	void *actor = Script__PopActor(script, context, 0);
	float alpha = Script__PopFloat(script, context);
	Actor__SetAlphaImpl(actor, alpha);
}
