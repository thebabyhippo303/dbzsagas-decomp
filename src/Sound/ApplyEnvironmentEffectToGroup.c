/* Sound__ApplyEnvironmentEffectToGroup @ 0x801889E8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_80198788(s32);
M2C_UNK fn_80198614(s32, s32);
extern M2C_UNK lbl_803A2D94 __attribute__((section(".data")));
extern s32 lbl_803DCC0C;

void Sound__ApplyEnvironmentEffectToGroup(s32 arg0) {
    if (arg0 != 0) {
        if ((s32) lbl_803DCC0C != 0) {
            fn_80198614(fn_80198788(arg0), (s32) &lbl_803A2D94);
            return;
        }
        fn_80198614(fn_80198788(arg0), 0);
    }
}
