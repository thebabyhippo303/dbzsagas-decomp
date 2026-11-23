/* Simple__RotateToZAngleActor @ 0x802AF2F8 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToZAngleActor @ 0x802AF2F8 (0x8C). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void *Script__PopActor(void *script, void *context, int flags);
extern void Simple__RotateToZAngleImpl(
	void *actor, float third, float second, float first);

void Simple__RotateToZAngleActor(void *script, void *context) {
	float first;
	float second;
	float third;
	void *actor;

	first = Script__PopFloat(script, context);
	second = Script__PopFloat(script, context);
	third = Script__PopFloat(script, context);
	actor = Script__PopActor(script, context, 0);
	Simple__RotateToZAngleImpl(actor, third, second, first);
}
