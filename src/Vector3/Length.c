/* Vector3__Length @ 0x80031178 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Script__PushFloat(void *, void *, float);
extern float Script__PopFloat(void *, void *);
extern float sqrtf(float);

void Vector3__Length(void *script, void *ctx) {
    float v[3];
    float sq[3];
    float *p = v;
    float a;
    float *q;
    a = Script__PopFloat(script, ctx);
    p[2] = a;
    p[1] = Script__PopFloat(script, ctx);
    a = Script__PopFloat(script, ctx);
    p[0] = a;
    q = sq;
    {
    float y = p[1]; float z = p[2];
    a = a * a;
    sq[0] = a; sq[2] = z * z; sq[1] = y * y;
    }
    Script__PushFloat(script, ctx, sqrtf(a + q[1] + q[2]));
}
