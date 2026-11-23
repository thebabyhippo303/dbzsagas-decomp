/* Script__MoveToZero @ 0x8002E478 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Script__MoveFloatTowardZero @ 0x8002E478 */

extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Script__MoveFloatTowardZero(void *script, void *context) {
    float current = Script__PopFloat(script, context);
    float step = Script__PopFloat(script, context);
    volatile float *dtPool = (volatile float *)0x803A0000;
    volatile float *zeroPool = (volatile float *)0x80310000;
    float dt = dtPool[3439];
    float zero = zeroPool[1442];

    step = __builtin_fabsf(step * dt);
    if (!(current <= zero)) {
        current -= step;
        if (!(current >= zero))
            current = zero;
    } else if (!(current >= zero)) {
        current += step;
        if (!(current <= zero))
            current = zero;
    }
    Script__PushFloat(script, context, current);
}
