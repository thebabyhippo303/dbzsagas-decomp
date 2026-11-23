/* Script__MoveToValue @ 0x8002E3BC (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Script__MoveFloatTowardTarget @ 0x8002E3BC */

extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Script__MoveFloatTowardTarget(void *script, void *context) {
    float current = Script__PopFloat(script, context);
    float target = Script__PopFloat(script, context);
    float step = Script__PopFloat(script, context);
    volatile float *pool = (volatile float *)0x803A0000;

    step = __builtin_fabsf(step * pool[3439]);
    if (!(current <= target)) {
        current -= step;
        if (!(current >= target))
            current = target;
    } else if (!(current >= target)) {
        current += step;
        if (!(current <= target))
            current = target;
    }
    Script__PushFloat(script, context, current);
}
