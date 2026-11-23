/* Vector2__Length @ 0x800310B4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Vector2__Length @ 0x800310B4 (0x64). ProDG -O2.
   The first pop is stored through a volatile pointer so it stays at 12(r1)
   while the reload uses &y[1] in r28. y remains in f1 across that store. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern float sqrtf(float value);

void Vector2__Length(void *script, void *context) {
    float y;
    float x;
    volatile float *xp;
    float *p = &y;

    xp = &x;
    *xp = Script__PopFloat(script, context);
    y = Script__PopFloat(script, context);
    Script__PushFloat(script, context, sqrtf(y * y + p[1] * p[1]));
}
