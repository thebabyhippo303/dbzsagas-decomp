/* Simple__RotateToYAngleRelative @ 0x802AF1A0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToYAngleRelative @ 0x802AF1A0 (0x70). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Simple__RotateToYAngleRelativeImpl(void *actor, float third, float second, float first);

void Simple__RotateToYAngleRelative(void *script, void *context) {
    float first = Script__PopFloat(script, context);
    float second = Script__PopFloat(script, context);
    float third = Script__PopFloat(script, context);
    Simple__RotateToYAngleRelativeImpl(*(void **)((char *)script + 200), third, second, first);
}
