/* WaterPool__SampleNoiseHeight @ 0x80297C2C (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
float PerlinNoise__Noise2(void *noise, f32 a, f32 b);
extern char lbl_803BB414[];
extern f32 lbl_8034FDD8 __attribute__((section(".data")));
typedef struct {
    char pad[0x27C];
    f32 f27C;
    f32 f280;
    f32 f284;
    f32 f288;
} Pool;
f32 WaterPool__SampleNoiseHeight(Pool *pool, f32 x, f32 y, f32 z) {
    f32 *fp = &pool->f27C;
    f32 amp = fp[1];
    f32 n1 = PerlinNoise__Noise2(lbl_803BB414, x * pool->f288, y * pool->f27C);
    f32 n2 = PerlinNoise__Noise2(lbl_803BB414, x * pool->f288, z * fp[2] + lbl_8034FDD8);
    return amp * (n1 * n2);
}
