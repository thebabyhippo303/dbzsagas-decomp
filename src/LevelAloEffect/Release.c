/* LevelAloEffect__Release @ 0x80287748 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EffectHandle__Release(u32);
void LevelAloEffect__Release(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != 0) {
        EffectHandle__Release((u32) temp_r3);
        *arg0 = 0;
    }
}
