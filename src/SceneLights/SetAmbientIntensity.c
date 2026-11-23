/* SceneLights__SetAmbientIntensity @ 0x8021A770 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_803ACFCC[];

void SceneLights__SetAmbientIntensity(f32 farg0) {
    char *base = (char *) (s32) lbl_803ACFCC;
    if (farg0 != *(f32 *)(base + 0x48)) {
        *(f32 *)(base + 0x48) = farg0;
        *(s32 *)(base + 0x4C) = 1;
    }
}
