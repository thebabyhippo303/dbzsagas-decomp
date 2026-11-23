/* SoundChannel__SetSampleRate @ 0x80196F08 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D51B8(s32, f32);
extern f32 lbl_803DCC28;

s32 SoundChannel__SetSampleRate(void *arg0, s32 arg1) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 8);
    if (temp_r3 != 0) {
        fn_802D51B8(temp_r3, (f32) (f64) arg1 / lbl_803DCC28);
    }
    return 1;
}
