/* Simple__RotateToYAngleActor @ 0x802AF114 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToYAngleActor @ 0x802AF114 (0x8C). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void *fn_802AC1E8(void *script, void *context, int mode);
extern void Simple__RotateToYAngleImpl(void *actor, float third, float second,
                                       float first);

void Simple__RotateToYAngleActor(void *script, void *context) {
    float first = Script__PopFloat(script, context);
    float second = Script__PopFloat(script, context);
    float third = Script__PopFloat(script, context);
    void *actor = fn_802AC1E8(script, context, 0);

    Simple__RotateToYAngleImpl(actor, third, second, first);
}
