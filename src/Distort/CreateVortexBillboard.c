/* Distort__CreateVortexBillboard @ 0x8003CCC0 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Distort__CreateVortexBillboard @ 0x8003CCC0 (0xD0). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern int Distort__CreateVortexBillboardImpl(void *distort, Vec3 *position, float size);
extern void Script__PushInt(void *script, void *context, int value);

void Distort__CreateVortexBillboard(void *script, void *context) {
    int owner = Script__PopInt(script, context);
    float x = Script__PopFloat(script, context);
    float y = Script__PopFloat(script, context);
    float z = Script__PopFloat(script, context);
    float size = Script__PopFloat(script, context);
    Vec3 src;
    Vec3 dst;
    float *coords = &src.x;

    coords[0] = x;
    coords[1] = y;
    coords[2] = z;
    dst = src;
    Script__PushInt(script, context,
                    Distort__CreateVortexBillboardImpl((char *)owner + 7056, &dst, size));
}
