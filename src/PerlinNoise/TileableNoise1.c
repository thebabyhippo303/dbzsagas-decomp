/* PerlinNoise__TileableNoise1 @ 0x8028DDB8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
f32 PerlinNoise__Noise1(s32, f32);

f32 PerlinNoise__TileableNoise1(s32 self, f32 a, f32 b) {
    f32 n1 = PerlinNoise__Noise1(self, a);
    f32 n2 = PerlinNoise__Noise1(self, a - b);
    return ((b - a) * n1 + a * n2) / b;
}
