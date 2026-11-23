/* Distort__Move @ 0x8003CD90 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Distort__Move @ 0x8003CD90 (0xBC). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Distort__MoveImpl(void *distort, int target, Vec3 *delta);

void Distort__Move(void *script, void *context) {
    int owner = Script__PopInt(script, context);
    int target = Script__PopInt(script, context);
    float x = Script__PopFloat(script, context);
    float y = Script__PopFloat(script, context);
    float z = Script__PopFloat(script, context);
    Vec3 src;
    Vec3 dst;
    float *coords = &src.x;

    coords[0] = x;
    coords[1] = y;
    coords[2] = z;
    dst = src;
    Distort__MoveImpl((char *)owner + 7056, target, &dst);
}
