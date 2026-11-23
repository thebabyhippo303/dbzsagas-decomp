/* Math__Vector2Length @ 0x802B28A0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Math__Vector2Length @ 0x802B28A0 (0x64). ProDG -O2. */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);
extern float sqrtf(float value);

void Math__Vector2Length(void *script, void *context) {
    float v[2];
    float *p;
    float y;

    v[0] = Script__PopFloat(script, context);
    p = v;
    y = Script__PopFloat(script, context);
    p[1] = y;
    Script__PushFloat(script, context, sqrtf(p[0] * p[0] + y * y));
}
