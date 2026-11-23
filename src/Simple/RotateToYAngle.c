/* Simple__RotateToYAngle @ 0x802AF0A4 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToYAngle @ 0x802AF0A4 (0x70). ProDG -O2. */
extern float Script__PopFloat(void *self, void *ctx);
extern void Simple__RotateToYAngleImpl(void *simple, float c, float b, float a);

void Simple__RotateToYAngle(void *self, void *ctx) {
    float a;
    float b;
    float c;
    void *simple;

    a = Script__PopFloat(self, ctx);
    b = Script__PopFloat(self, ctx);
    c = Script__PopFloat(self, ctx);
    simple = *(void **)((char *)self + 200);
    Simple__RotateToYAngleImpl(simple, c, b, a);
}
