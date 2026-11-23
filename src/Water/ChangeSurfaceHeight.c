/* Water__ChangeSurfaceHeight @ 0x8002D9BC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Water__ChangeSurfaceHeight @ 0x8002D9BC (0x6C). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void *lbl_803DCE80;
extern void Water__ChangeSurfaceHeightImpl(void *water, int number, float height, float velocity);

void Water__ChangeSurfaceHeight(void *script, void *context) {
    int number = Script__PopInt(script, context);
    float height = Script__PopFloat(script, context);
    float velocity = Script__PopFloat(script, context);

    Water__ChangeSurfaceHeightImpl(lbl_803DCE80, number, height, velocity);
}
