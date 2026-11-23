/* Simple__RotateToXAngleActor @ 0x802AEFA0 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToXAngleActor @ 0x802AEFA0 (0x8C). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void *Script__PopActor(void *script, void *context, int zero);
extern void Simple__RotateToXAngleImpl(void *simple, float c, float b, float a);

void Simple__RotateToXAngleActor(void *script, void *context) {
    float a = Script__PopFloat(script, context);
    float b = Script__PopFloat(script, context);
    float c = Script__PopFloat(script, context);
    void *simple = Script__PopActor(script, context, 0);
    Simple__RotateToXAngleImpl(simple, c, b, a);
}
