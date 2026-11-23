/* Vector2__LengthSquared @ 0x80031118 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Vector2__LengthSquared @ 0x80031118 (0x60). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Vector2__LengthSquared(void *script, void *context) {
    float y;
    float x;
    volatile float *xp;
    float *p = &y;

    xp = &x;
    *xp = Script__PopFloat(script, context);
    y = Script__PopFloat(script, context);
    Script__PushFloat(script, context, y * y + p[1] * p[1]);
}
