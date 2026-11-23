/* Simple__RotateToXAngle @ 0x802AEF30 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__RotateToXAngle @ 0x802AEF30 (0x70). ProDG -O2. */
extern float Script__PopFloat(void *self, void *ctx);
extern void Simple__RotateToXAngleImpl(void *simple, float c, float b, float a);

void Simple__RotateToXAngle(void *self, void *ctx) {
    float a;
    float b;
    float c;
    void *simple;

    a = Script__PopFloat(self, ctx);
    b = Script__PopFloat(self, ctx);
    c = Script__PopFloat(self, ctx);
    simple = *(void **)((char *)self + 200);
    Simple__RotateToXAngleImpl(simple, c, b, a);
}
