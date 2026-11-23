/* SoundDriver__SetSfxVolume @ 0x80196AE0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
extern f32 lbl_8033F670 __attribute__((section(".data")));
extern f32 lbl_8033F674 __attribute__((section(".data")));
extern f32 lbl_803DCC30;

void SoundDriver__SetSfxVolume(f32 x) {
    f32 lo = lbl_8033F670;
    f32 hi = lbl_8033F674;
    f32 v = lo;
    if (!(x < lo)) {
        if (!(x <= hi)) v = hi; else v = x;
    }
    lbl_803DCC30 = v;
}
