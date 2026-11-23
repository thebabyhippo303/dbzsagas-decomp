/* Avatar__CreateSwooshImpl @ 0x8009CCE8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__BuildEffectAssetPath(void *, const char *);
s32 SwooshStreak__Create(void *, s32);
s32 Avatar__CreateSwooshImpl(void *arg0, s8 *arg1, s32 arg2) {
    s32 var_r3;

    Avatar__BuildEffectAssetPath(arg0, arg1);
    var_r3 = SwooshStreak__Create(M2C_FIELD(arg0, void **, 8), arg2);
    if (var_r3 == 0) {
        var_r3 = SwooshStreak__Create(arg1, arg2);
    }
    return var_r3;
}
