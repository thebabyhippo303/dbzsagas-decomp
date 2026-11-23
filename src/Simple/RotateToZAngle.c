/* Simple__RotateToZAngle @ 0x802AF288 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToZAngle @ 0x802AF288 (0x70). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Simple__RotateToZAngleImpl(void *actor, float third, float second, float first);

void Simple__RotateToZAngle(void *script, void *context) {
    float first = Script__PopFloat(script, context);
    float second = Script__PopFloat(script, context);
    float third = Script__PopFloat(script, context);
    Simple__RotateToZAngleImpl(*(void **)((char *)script + 200), third, second, first);
}
