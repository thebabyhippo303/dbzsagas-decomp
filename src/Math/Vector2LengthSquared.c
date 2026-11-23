/* Math__Vector2LengthSquared @ 0x802B2904 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float Script__PopFloat(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Math__Vector2LengthSquared(void *script, void *context) {
    float v[2];
    float *p;
    float y;

    v[0] = Script__PopFloat(script, context);
    p = v;
    y = Script__PopFloat(script, context);
    p[1] = y;
    Script__PushFloat(script, context, p[0] * p[0] + y * y);
}
